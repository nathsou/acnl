// Functions decompiled by tools/decomp (docs/decomp.md), each proved equal to the recompiled original (prove-cpp). The
// names are generated (d_<address>::f_<address>, Object_<address>_<argument>, word_<offset>) and still to be chosen.
#include "guest/guest.hpp"
#include "core/grid_rect.hpp"

#include <bit>

using guest::gptr;

// f_00620660: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00620660 {


u32 f_00620660(u32 r0, u32 r1) {
    u32 r1_1 = 0;
    if (r1 >= 4u) {
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r1_1 = r1 + r0;
    *gptr<u8>(r1_1 + 9u) = u8(0u);
    guest::cpu()->r[1] = r1_1;
    return 0u;
}

}  // namespace d_00620660
GUEST_EXPORT(0x00620660, d_00620660::f_00620660);

// f_00620678: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00620678 {


u32 f_00620678(u32 r0, u32 r1, u32 r2) {
    if (r1 < 4u) {
        r0 = r0 + r1;
        *gptr<u8>(r0 + 9u) = u8(r2);
    }
    return r0;
}

}  // namespace d_00620678
GUEST_EXPORT(0x00620678, d_00620678::f_00620678);

// f_00620dcc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00620dcc {

struct __attribute__((packed)) Object_00620dcc_0 {
    u8 byte_0;
    u8 unknown_1[0x3];  // (not used here)
    u32 word_4;
    u8 byte_8;
    u32 word_9;
    u8 byte_d;
    u8 byte_e;
    u8 byte_f;
    u8 byte_10;
    u8 byte_11;
    u8 byte_12;
    u8 byte_13;
    u8 byte_14;
    u8 byte_15;
    u8 byte_16;
};
GUEST_OFFSET(Object_00620dcc_0, byte_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_00620dcc_0, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_00620dcc_0, byte_8, 0x8);  // (from the original)
GUEST_OFFSET(Object_00620dcc_0, word_9, 0x9);  // (from the original)
GUEST_OFFSET(Object_00620dcc_0, byte_d, 0xd);  // (from the original)
GUEST_OFFSET(Object_00620dcc_0, byte_e, 0xe);  // (from the original)
GUEST_OFFSET(Object_00620dcc_0, byte_f, 0xf);  // (from the original)
GUEST_OFFSET(Object_00620dcc_0, byte_10, 0x10);  // (from the original)
GUEST_OFFSET(Object_00620dcc_0, byte_11, 0x11);  // (from the original)
GUEST_OFFSET(Object_00620dcc_0, byte_12, 0x12);  // (from the original)
GUEST_OFFSET(Object_00620dcc_0, byte_13, 0x13);  // (from the original)
GUEST_OFFSET(Object_00620dcc_0, byte_14, 0x14);  // (from the original)
GUEST_OFFSET(Object_00620dcc_0, byte_15, 0x15);  // (from the original)
GUEST_OFFSET(Object_00620dcc_0, byte_16, 0x16);  // (from the original)


void f_00620dcc(gptr<Object_00620dcc_0> arg0) {
    arg0->byte_0 = u8(0u);
    arg0->word_4 = u32(0u);
    arg0->word_9 = u32(0u);
    arg0->byte_d = u8(0u);
    arg0->byte_e = u8(0u);
    arg0->byte_f = u8(0u);
    arg0->byte_10 = u8(0u);
    arg0->byte_8 = u8(0xa5u);  // (from the original)
    arg0->byte_11 = u8(0u);
    arg0->byte_15 = u8(0u);
    arg0->byte_12 = u8(0u);
    arg0->byte_13 = u8(0u);
    arg0->byte_14 = u8(0u);
    arg0->byte_16 = u8(0u);
    guest::cpu()->r[1] = 0u;
    return;
}

}  // namespace d_00620dcc
GUEST_EXPORT(0x00620dcc, d_00620dcc::f_00620dcc);

// f_00620e18: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00620e18 {

struct __attribute__((packed)) Object_00620e18_0 {
    u8 byte_0;
    u8 unknown_1[0x14];  // (not used here)
    u8 byte_15;
};
GUEST_OFFSET(Object_00620e18_0, byte_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_00620e18_0, byte_15, 0x15);  // (from the original)

inline guest::global<u32, 0x0095362c> global_0095362c;  // (from the original)

void f_00620e18(gptr<Object_00620e18_0> arg0) {
    u32 r2_1 = 0;
    u32 r1_1 = 0;
    u32 r2_2 = 0;
    r2_1 = *global_0095362c;
    r1_1 = u32(*gptr<u8>(r2_1 + 0x1e5u));  // (from the original)
    if (r1_1 >= 4u) {
        guest::cpu()->r[1] = r1_1;
        return;
    }
    arg0->byte_15 = u8(0u);
    r2_2 = u32(*gptr<u8>(r2_1 + 0x13268u));  // (from the original)
    if (r2_2 == r1_1) {
        arg0->byte_0 = u8(1u);
        guest::cpu()->r[1] = 1u;
        return;
    }
    if (r2_2 == 0) {
        arg0->byte_0 = u8(3u);
        guest::cpu()->r[1] = 3u;
        return;
    } else {
    }
    arg0->byte_0 = u8(8u);
    guest::cpu()->r[1] = 8u;
    return;
}

}  // namespace d_00620e18
GUEST_EXPORT(0x00620e18, d_00620e18::f_00620e18);

// f_00620e68: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00620e68 {

struct __attribute__((packed)) Object_00620e68_0 {
    u8 byte_0;
    u8 unknown_1[0x3];  // (not used here)
    u32 word_4;
    u8 byte_8;
    u8 unknown_9[0x4];  // (not used here)
    u8 byte_d;
    u8 byte_e;
    u8 byte_f;
    u8 byte_10;
    u8 byte_11;
    u8 byte_12;
    u8 byte_13;
    u8 byte_14;
    u8 byte_15;
    u8 byte_16;
};
GUEST_OFFSET(Object_00620e68_0, byte_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_00620e68_0, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_00620e68_0, byte_8, 0x8);  // (from the original)
GUEST_OFFSET(Object_00620e68_0, byte_d, 0xd);  // (from the original)
GUEST_OFFSET(Object_00620e68_0, byte_e, 0xe);  // (from the original)
GUEST_OFFSET(Object_00620e68_0, byte_f, 0xf);  // (from the original)
GUEST_OFFSET(Object_00620e68_0, byte_10, 0x10);  // (from the original)
GUEST_OFFSET(Object_00620e68_0, byte_11, 0x11);  // (from the original)
GUEST_OFFSET(Object_00620e68_0, byte_12, 0x12);  // (from the original)
GUEST_OFFSET(Object_00620e68_0, byte_13, 0x13);  // (from the original)
GUEST_OFFSET(Object_00620e68_0, byte_14, 0x14);  // (from the original)
GUEST_OFFSET(Object_00620e68_0, byte_15, 0x15);  // (from the original)
GUEST_OFFSET(Object_00620e68_0, byte_16, 0x16);  // (from the original)


void f_00620e68(gptr<Object_00620e68_0> arg0) {
    arg0->byte_0 = u8(0u);
    arg0->word_4 = u32(0u);
    arg0->byte_8 = u8(0xa5u);  // (from the original)
    arg0->byte_d = u8(0u);
    arg0->byte_e = u8(0u);
    arg0->byte_f = u8(0u);
    arg0->byte_10 = u8(0u);
    arg0->byte_11 = u8(0u);
    arg0->byte_12 = u8(0u);
    arg0->byte_13 = u8(0u);
    arg0->byte_14 = u8(0u);
    arg0->byte_15 = u8(0u);
    arg0->byte_16 = u8(0u);
    guest::cpu()->r[1] = 0u;
    return;
}

}  // namespace d_00620e68
GUEST_EXPORT(0x00620e68, d_00620e68::f_00620e68);

// f_006212f0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006212f0 {

inline guest::global<u32, 0x0095362c> global_0095362c;  // (from the original)
inline constexpr guest::Function<0x005b4120, u32(u32, u32, u32, u32)> call_005b4120;  // (from the original)
inline constexpr guest::Function<0x00621b98, u32(u32, u32, u32, u32)> call_00621b98;  // (from the original)
inline constexpr guest::Function<0x00623e70, u32(u32, u32, u32, u32)> call_00623e70;  // (from the original)
inline constexpr guest::Function<0x00627d44, u32(u32, u32, u32, u32)> call_00627d44;  // (from the original)
inline constexpr guest::Function<0x00627f74, u32(u32, u32, u32, u32)> call_00627f74;  // (from the original)
inline constexpr guest::Function<0x0062801c, u32(u32, u32, u32, u32)> call_0062801c;  // (from the original)
inline constexpr guest::Function<0x0075dfe8, u32(u32, u32, u32, u32)> call_0075dfe8;  // (from the original)
inline constexpr guest::Function<0x0075e048, u32(u32, u32, u32, u32)> call_0075e048;  // (from the original)

u32 f_006212f0(u32 r0, u32 r1_unused, u32 r2, u32 r3) {
    u32 r1 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r3_2 = 0;
    u32 r0_4 = 0;
    u32 r0_5 = 0;
    u32 r1_1 = 0;
    u32 r2_2 = 0;
    u32 r3_3 = 0;
    u32 r0_6 = 0;
    u32 r1_2 = 0;
    u32 r2_3 = 0;
    u32 r3_4 = 0;
    u32 r0_7 = 0;
    u32 r0_8 = 0;
    u32 r1_3 = 0;
    u32 r2_4 = 0;
    u32 r3_5 = 0;
    u32 r5_1 = 0;
    u32 r3_6 = 0;
    u32 r1_4 = 0;
    u32 r3_7 = 0;
    *gptr<u32>(r13 + 0xffffffe8u) = u32(r3);  // (from the original)
    r13 = r13 - 0x18;  // (from the original)
    r4 = r0;
    r0_1 = *global_0095362c;
    r1 = u32(*gptr<u8>(r0_1 + 0x54u));  // (from the original)
    if (r1 != 0) {
        r13 = r13 + 0x18;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return r0_1;
    }
    guest::cpu()->r[13] = r13;
    r0_1 = call_0075e048(r0_1, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    if (r0_1 == 0) {
        r13 = r13 + 0x18;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return r0_1;
    }
    r0_2 = *global_0095362c;
    guest::cpu()->r[13] = r13;
    r0_3 = call_0075dfe8(r0_2, r1, r2_1, r3_1);
    r1 = guest::cpu()->r[1];
    r3_2 = guest::cpu()->r[3];
    r0_1 = u32(*gptr<u8>(r4));
    if (r0_1 != 1u) {
        r13 = r13 + 0x18;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return r0_1;
    }
    r0_4 = r4 + 0x10u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_5 = call_00623e70(r0_4, r0_3, 0u, r3_2);
    r1_1 = guest::cpu()->r[1];
    r2_2 = guest::cpu()->r[2];
    r3_3 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0_6 = call_005b4120(r0_5, r1_1, r2_2, r3_3);
    r1_2 = guest::cpu()->r[1];
    r2_3 = guest::cpu()->r[2];
    r3_4 = guest::cpu()->r[3];
    r0_7 = *global_0095362c;
    guest::cpu()->r[13] = r13;
    r0_8 = call_0075dfe8(r0_7, r1_2, r2_3, r3_4);
    r1_3 = guest::cpu()->r[1];
    r2_4 = guest::cpu()->r[2];
    r3_5 = guest::cpu()->r[3];
    if (r0_8 == 0) {
        goto L_6213a8;
    }
    *gptr<u16>(r13) = u16(u32(*gptr<u16>(r13)) >> 9 << 9 | r0_6 << 1);
    r5_1 = *global_0095362c + 0x10u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_00627f74(r5_1, r1_3, r2_4, r3_5);
    r3_6 = guest::cpu()->r[3];
    r1_4 = r13;
    guest::cpu()->r[13] = r13;
    call_00627d44(r5_1, r1_4, 2u, r3_6);
    r3_7 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    call_0062801c(r5_1, 0xdu, 0u, r3_7);  // (from the original)
    r1 = guest::cpu()->r[1];
L_62139c:;
    r0_1 = 2u;
    *gptr<u8>(r4) = u8(r0_1);
    r13 = r13 + 0x18;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0_1;
L_6213a8:;
    guest::cpu()->r[13] = r13;
    call_00621b98(r4, r0_3, r0_6, r3_5);
    r1 = guest::cpu()->r[1];
    guest::preempt();
    goto L_62139c;
}

}  // namespace d_006212f0
GUEST_EXPORT(0x006212f0, d_006212f0::f_006212f0);

// f_006213c8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006213c8 {

inline guest::global<u32, 0x0095362c> global_0095362c;  // (from the original)
inline constexpr guest::Function<0x00621da4, u32(u32, u32, u32, u32)> call_00621da4;  // (from the original)
inline constexpr guest::Function<0x00621f0c, u32(u32, u32, u32, u32)> call_00621f0c;  // (from the original)
inline constexpr guest::Function<0x00623e70, u32(u32, u32, u32, u32)> call_00623e70;  // (from the original)
inline constexpr guest::Function<0x00625870, u32(u32, u32, u32, u32)> call_00625870;  // (from the original)
inline constexpr guest::Function<0x00627d44, u32(u32, u32, u32, u32)> call_00627d44;  // (from the original)
inline constexpr guest::Function<0x00627f74, u32(u32, u32, u32, u32)> call_00627f74;  // (from the original)
inline constexpr guest::Function<0x0062801c, u32(u32, u32, u32, u32)> call_0062801c;  // (from the original)
inline constexpr guest::Function<0x0075dfdc, u32(u32, u32, u32, u32)> call_0075dfdc;  // (from the original)
inline constexpr guest::Function<0x0075dfe8, u32(u32, u32, u32, u32)> call_0075dfe8;  // (from the original)
inline constexpr guest::Function<0x0075e38c, u32(u32, u32, u32, u32)> call_0075e38c;  // (from the original)
inline constexpr guest::Function<0x0075e858, u32(u32, u32, u32, u32)> call_0075e858;  // (from the original)

u32 f_006213c8(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r3_1 = 0;
    u32 r0_3 = 0;
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r3_2 = 0;
    u32 r0_4 = 0;
    u32 r2_2 = 0;
    u32 r3_3 = 0;
    u32 r0_5 = 0;
    u32 r0_6 = 0;
    u32 r3_4 = 0;
    u32 r5_1 = 0;
    u32 r3_5 = 0;
    u32 r1_2 = 0;
    u32 r2_3 = 0;
    u32 r3_6 = 0;
    u32 r0_7 = 0;
    u32 r0_8 = 0;
    u32 r1_3 = 0;
    u32 r0_9 = 0;
    u32 r1_4 = 0;
    u32 r2_4 = 0;
    u32 r3_7 = 0;
    u32 r4_1 = 0;
    u32 r3_8 = 0;
    u32 r1_5 = 0;
    u32 r3_9 = 0;
    r13 = r13 - 0x28u;  // (from the original)
    r0_1 = *global_0095362c;
    guest::cpu()->r[13] = r13;
    r0_2 = call_0075dfe8(r0_1, r1, r2, r3);
    r3_1 = guest::cpu()->r[3];
    r0_3 = r0 + 0x18u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_00623e70(r0_3, r0_2, 1u, r3_1);
    r1_1 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0_4 = call_0075e38c(r0, r1_1, r2_1, r3_2);
    r2_2 = guest::cpu()->r[2];
    r3_3 = guest::cpu()->r[3];
    r0_5 = r0 + 1u;
    guest::cpu()->r[13] = r13;
    r0_6 = call_0075e858(r0_5, r0_4, r2_2, r3_3);
    r3_4 = guest::cpu()->r[3];
    if (r0_6 == 0) {
        r5_1 = 1u;
    } else {
        r5_1 = 0u;
    }
    guest::cpu()->r[13] = r13;
    call_00621f0c(r0, r0_2, r0_4, r3_4);
    r3_5 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    call_00621da4(r0, r0_2, r5_1, r3_5);
    r1_2 = guest::cpu()->r[1];
    r2_3 = guest::cpu()->r[2];
    r3_6 = guest::cpu()->r[3];
    r0_7 = *global_0095362c;
    guest::cpu()->r[13] = r13;
    r0_8 = call_0075dfdc(r0_7, r1_2, r2_3, r3_6);
    r1_3 = guest::cpu()->r[1];
    if (r0_8 > 1u) {
        *gptr<u32>(r13) = u32(1u);
        *gptr<u32>(r13 + 4) = u32(r5_1);
        *gptr<u32>(r13 + 8) = u32(r0_2);
        r0_9 = r13 + 0xcu;  // (from the original)
        guest::cpu()->r[13] = r13;
        call_00625870(r0_9, r0_2, 1u, r0_4);
        r1_4 = guest::cpu()->r[1];
        r2_4 = guest::cpu()->r[2];
        r3_7 = guest::cpu()->r[3];
        r4_1 = *global_0095362c + 0x10u;  // (from the original)
        guest::cpu()->r[13] = r13;
        call_00627f74(r4_1, r1_4, r2_4, r3_7);
        r3_8 = guest::cpu()->r[3];
        r1_5 = r13 + 0xcu;  // (from the original)
        guest::cpu()->r[13] = r13;
        call_00627d44(r4_1, r1_5, 2u, r3_8);
        r3_9 = guest::cpu()->r[3];
        guest::cpu()->r[13] = r13;
        r0_8 = call_0062801c(r4_1, 1u, 4u, r3_9);
        r1_3 = guest::cpu()->r[1];
    }
    r13 = r13 + 0x28u;  // (from the original)
    guest::cpu()->r[1] = r1_3;
    guest::cpu()->r[13] = r13;
    return r0_8;
}

}  // namespace d_006213c8
GUEST_EXPORT(0x006213c8, d_006213c8::f_006213c8);

// f_006214a0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006214a0 {

inline constexpr guest::Function<0x00621da4, u32(u32, u32, u32, u32)> call_00621da4;  // (from the original)
inline constexpr guest::Function<0x00621f0c, u32(u32, u32, u32, u32)> call_00621f0c;  // (from the original)

u32 f_006214a0(u32 r0, u32 r1, u32 r2) {
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    call_00621f0c(r0, r1, r2, guest::cpu()->r[3]);
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    return call_00621da4(r0, r1, 1u, guest::cpu()->r[3]);
}

}  // namespace d_006214a0
GUEST_EXPORT(0x006214a0, d_006214a0::f_006214a0);

// f_006214c4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006214c4 {

inline guest::global<u32, 0x0095362c> global_0095362c;  // (from the original)
inline constexpr guest::Function<0x005ce6dc, u32(u32, u32, u32, u32)> call_005ce6dc;  // (from the original)
inline constexpr guest::Function<0x00621da4, u32(u32, u32, u32, u32)> call_00621da4;  // (from the original)
inline constexpr guest::Function<0x00621f0c, u32(u32, u32, u32, u32)> call_00621f0c;  // (from the original)
inline constexpr guest::Function<0x00623e70, u32(u32, u32, u32, u32)> call_00623e70;  // (from the original)
inline constexpr guest::Function<0x00625870, u32(u32, u32, u32, u32)> call_00625870;  // (from the original)
inline constexpr guest::Function<0x00626070, u32(u32, u32, u32, u32)> call_00626070;  // (from the original)
inline constexpr guest::Function<0x00627d44, u32(u32, u32, u32, u32)> call_00627d44;  // (from the original)
inline constexpr guest::Function<0x00627f74, u32(u32, u32, u32, u32)> call_00627f74;  // (from the original)
inline constexpr guest::Function<0x0062801c, u32(u32, u32, u32, u32)> call_0062801c;  // (from the original)
inline constexpr guest::Function<0x0075dfdc, u32(u32, u32, u32, u32)> call_0075dfdc;  // (from the original)
inline constexpr guest::Function<0x0075dfe8, u32(u32, u32, u32, u32)> call_0075dfe8;  // (from the original)
inline constexpr guest::Function<0x0075e830, u32(u32, u32, u32, u32)> call_0075e830;  // (from the original)
inline constexpr guest::Function<0x0075eca4, u32(u32, u32, u32, u32)> call_0075eca4;  // (from the original)

u32 f_006214c4(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r0_2 = 0;
    u32 r1_1 = 0;
    u32 r2_2 = 0;
    u32 r3_2 = 0;
    u32 r0_3 = 0;
    u32 r6_1 = 0;
    u32 r7_1 = 0;
    u32 r0_4 = 0;
    u32 r1_2 = 0;
    u32 r2_3 = 0;
    u32 r3_3 = 0;
    u32 r3_4 = 0;
    u32 r2_4 = 0;
    u32 r1_3 = 0;
    u32 r0_5 = 0;
    u32 r0_6 = 0;
    u32 r0_7 = 0;
    u32 r3_5 = 0;
    u32 r3_6 = 0;
    u32 r1_4 = 0;
    u32 r2_5 = 0;
    u32 r3_7 = 0;
    u32 r0_8 = 0;
    u32 r0_9 = 0;
    u32 r1_5 = 0;
    u32 r2_6 = 0;
    u32 r3_8 = 0;
    u32 ea_1 = 0;
    u32 ea_2 = 0;
    u32 r0_10 = 0;
    u32 r1_6 = 0;
    u32 r2_7 = 0;
    u32 r3_9 = 0;
    u32 r3_10 = 0;
    u32 r1_7 = 0;
    u32 r3_11 = 0;
    u32 r1_8 = 0;
    r13 = r13 - 0x28u;  // (from the original)
    r0_1 = u32(*gptr<u8>(*global_0095362c + 0x132b4u));  // (from the original)
    if (r0_1 != 0) {
        goto L_621530;
    }
    guest::cpu()->r[13] = r13;
    r0_1 = call_005ce6dc(r0_1, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    if (r0_1 != 0) {
        goto L_621530;
    }
    r0_1 = *global_0095362c;
    r1 = u32(*gptr<u8>(r0_1 + 0x54u));  // (from the original)
    if (r1 != 0) {
        goto L_621530;
    }
    r1 = u32(*gptr<u8>(r0));
    if (r1 == 4u) {
        goto L_621538;
    }
    if (r1 == 6u) {
        r0_1 = 7u;
        goto L_62152c;
    }
    if (r1 == 9u) {
        r0_1 = 0xau;  // (from the original)
    } else {
        goto L_621530;
    }
L_62152c:;
    *gptr<u8>(r0) = u8(r0_1);
L_621530:;
    r13 = r13 + 0x28u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0_1;
L_621538:;
    guest::cpu()->r[13] = r13;
    r0_2 = call_0075dfe8(r0_1, r1, r2_1, r3_1);
    r1_1 = guest::cpu()->r[1];
    r2_2 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    r0_3 = *global_0095362c;
    r6_1 = r0_3 + 0x7864u;  // (from the original)
    r7_1 = r0_3 + 0x10u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_4 = call_0075dfdc(r0_3, r1_1, r2_2, r3_2);
    r1_2 = guest::cpu()->r[1];
    r2_3 = guest::cpu()->r[2];
    r3_3 = guest::cpu()->r[3];
    if (r0_4 <= 1u) {
        goto L_6215cc;
    }
    if (r0_2 != 0) {
        guest::cpu()->r[13] = r13;
        call_00627f74(r7_1, r1_2, r2_3, r3_3);
        r3_4 = guest::cpu()->r[3];
        r2_4 = *gptr<u32>(r6_1 + 4u);
        if (r2_4 != 0) {
            r1_3 = *gptr<u32>(r6_1);
            guest::cpu()->r[13] = r13;
            call_00627d44(r7_1, r1_3, r2_4, r3_4);
            r3_4 = guest::cpu()->r[3];
        }
        guest::cpu()->r[13] = r13;
        call_0062801c(r7_1, 0xeu, 0u, r3_4);  // (from the original)
        r3_3 = guest::cpu()->r[3];
        goto L_6215cc;
    }
    r0_5 = r0 + 1u;
    guest::cpu()->r[13] = r13;
    r0_6 = call_0075e830(r0_5, 0u, r2_3, r3_3);
    r3_3 = guest::cpu()->r[3];
    if (r0_6 >= 0xa5u) {  // (from the original)
        goto L_6215cc;
    }
    guest::cpu()->r[13] = r13;
    call_0075eca4(r6_1, 0u, r0_6, r3_3);
    r3_3 = guest::cpu()->r[3];
L_6215cc:;
    r0_7 = r0 + 0x18u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_00623e70(r0_7, r0_2, 1u, r3_3);
    r3_5 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    call_00621f0c(r0, r0_2, 0xa5u, r3_5);  // (from the original)
    r3_6 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    call_00621da4(r0, r0_2, 0u, r3_6);
    r1_4 = guest::cpu()->r[1];
    r2_5 = guest::cpu()->r[2];
    r3_7 = guest::cpu()->r[3];
    r0_8 = *global_0095362c;
    guest::cpu()->r[13] = r13;
    r0_9 = call_0075dfdc(r0_8, r1_4, r2_5, r3_7);
    r1_5 = guest::cpu()->r[1];
    r2_6 = guest::cpu()->r[2];
    r3_8 = guest::cpu()->r[3];
    if (r0_9 > 1u) {
        ea_1 = r13;
        *gptr<u32>(ea_1) = u32(1u);
        ea_2 = r13 + 4u;
        *gptr<u32>(ea_2) = u32(0u);
        *gptr<u32>(ea_2 + 4) = u32(r0_2);
        r0_10 = r13 + 0xcu;  // (from the original)
        guest::cpu()->r[13] = r13;
        call_00625870(r0_10, r0_2, 1u, 0xa5u);  // (from the original)
        r1_6 = guest::cpu()->r[1];
        r2_7 = guest::cpu()->r[2];
        r3_9 = guest::cpu()->r[3];
        guest::cpu()->r[13] = r13;
        call_00627f74(r7_1, r1_6, r2_7, r3_9);
        r3_10 = guest::cpu()->r[3];
        r1_7 = r13 + 0xcu;  // (from the original)
        guest::cpu()->r[13] = r13;
        call_00627d44(r7_1, r1_7, 2u, r3_10);
        r3_11 = guest::cpu()->r[3];
        guest::cpu()->r[13] = r13;
        call_0062801c(r7_1, 1u, 4u, r3_11);
        r1_5 = guest::cpu()->r[1];
        r2_6 = guest::cpu()->r[2];
        r3_8 = guest::cpu()->r[3];
    }
    guest::cpu()->r[13] = r13;
    call_00626070(r6_1, r1_5, r2_6, r3_8);
    r1_8 = guest::cpu()->r[1];
    *gptr<u8>(r0) = u8(0xbu);  // (from the original)
    r13 = r13 + 0x28u;  // (from the original)
    guest::cpu()->r[1] = r1_8;
    guest::cpu()->r[13] = r13;
    return 0xbu;  // (from the original)
}

}  // namespace d_006214c4
GUEST_EXPORT(0x006214c4, d_006214c4::f_006214c4);

// f_00621684: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00621684 {

inline constexpr guest::Function<0x00621da4, u32(u32, u32, u32, u32)> call_00621da4;  // (from the original)
inline constexpr guest::Function<0x00621f0c, u32(u32, u32, u32, u32)> call_00621f0c;  // (from the original)
inline constexpr guest::Function<0x00624b24, u32(u32, u32, u32, u32)> call_00624b24;  // (from the original)
inline constexpr guest::Function<0x00625c20, u32(u32, u32, u32, u32)> call_00625c20;  // (from the original)

u32 f_00621684(u32 r0, u32 r1, u32 r2) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r13 = guest::cpu()->r[13];
    u32 r14 = guest::cpu()->r[14];
    u32 ea_1 = 0;
    u32 r0_1 = 0;
    u32 r2_1 = 0;
    u32 r0_2 = 0;
    u32 ea_2 = 0;
    u32 r4_1 = 0;
    u32 r5_1 = 0;
    u32 r6_1 = 0;
    if (r1 >= 4u) {
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[4] = r4;
        guest::cpu()->r[5] = r5;
        guest::cpu()->r[6] = r6;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    ea_1 = r13 - 0x10;  // (from the original)
    *gptr<u32>(ea_1) = u32(r4);
    *gptr<u32>(ea_1 + 4) = u32(r5);
    *gptr<u32>(ea_1 + 8) = u32(r6);
    *gptr<u32>(ea_1 + 0xc) = u32(r14);  // (from the original)
    r13 = r13 - 0x10;  // (from the original)
    r0_1 = r0 + 6u;
    guest::cpu()->r[13] = r13;
    call_00625c20(r0_1, r1, r2, guest::cpu()->r[3]);
    guest::cpu()->r[13] = r13;
    call_00621f0c(r0, r1, 0xa5u, guest::cpu()->r[3]);  // (from the original)
    guest::cpu()->r[13] = r13;
    call_00621da4(r0, r1, 0u, guest::cpu()->r[3]);
    r2_1 = guest::cpu()->r[2];
    r0_2 = r0 + 0x21u;  // (from the original)
    ea_2 = r13;
    r13 = r13 + 0x10;  // (from the original)
    r4_1 = *gptr<u32>(ea_2);
    r5_1 = *gptr<u32>(ea_2 + 4);
    r6_1 = *gptr<u32>(ea_2 + 8);
    r14 = *gptr<u32>(ea_2 + 0xc);  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->r[4] = r4_1;
    guest::cpu()->r[5] = r5_1;
    guest::cpu()->r[6] = r6_1;
    return call_00624b24(r0_2, r1, r2_1, guest::cpu()->r[3]);
}

}  // namespace d_00621684
GUEST_EXPORT(0x00621684, d_00621684::f_00621684);

// f_006216d0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006216d0 {

inline constexpr guest::Function<0x00624aa4, u32(u32, u32, u32, u32)> call_00624aa4;  // (from the original)
inline constexpr guest::Function<0x00625b64, u32(u32, u32, u32, u32)> call_00625b64;  // (from the original)
inline constexpr guest::Function<0x00625b90, u32(u32, u32, u32, u32)> call_00625b90;  // (from the original)
inline constexpr guest::Function<0x00625ba4, u32(u32, u32, u32, u32)> call_00625ba4;  // (from the original)
inline constexpr guest::Function<0x00625be0, u32(u32, u32, u32, u32)> call_00625be0;  // (from the original)
inline constexpr guest::Function<0x00627d44, u32(u32, u32, u32, u32)> call_00627d44;  // (from the original)
inline constexpr guest::Function<0x00627f74, u32(u32, u32, u32, u32)> call_00627f74;  // (from the original)
inline constexpr guest::Function<0x0062801c, u32(u32, u32, u32, u32)> call_0062801c;  // (from the original)
inline constexpr guest::Function<0x0075dfe8, u32(u32, u32, u32, u32)> call_0075dfe8;  // (from the original)
inline constexpr guest::Function<0x0075ea44, u32(u32, u32, u32, u32)> call_0075ea44;  // (from the original)
inline constexpr guest::Function<0x0075ea7c, u32(u32, u32, u32, u32)> call_0075ea7c;  // (from the original)

u32 f_006216d0(u32 r0, u32 r1, u32 r2_unused, u32 r3) {
    u32 r2 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 r3_1 = 0;
    u32 r0_2 = 0;
    u32 r6_1 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r1_1 = 0;
    u32 r0_5 = 0;
    u32 r2_1 = 0;
    u32 r0_6 = 0;
    u32 r0_7 = 0;
    u32 r0_8 = 0;
    u32 r4_1 = 0;
    u32 r0_9 = 0;
    u32 r2_2 = 0;
    u32 r3_2 = 0;
    u32 r0_10 = 0;
    u32 r0_11 = 0;
    u32 r3_3 = 0;
    u32 r0_12 = 0;
    u32 r1_2 = 0;
    u32 r2_3 = 0;
    u32 r3_4 = 0;
    u32 r3_5 = 0;
    u32 r1_3 = 0;
    u32 r3_6 = 0;
    u32 r1_4 = 0;
    u32 r2_4 = 0;
    u32 r3_7 = 0;
    u32 r3_8 = 0;
    u32 r0_13 = 0;
    u32 r0_14 = 0;
    u32 r0_15 = 0;
    u32 r0_16 = 0;
    u32 ea_1 = 0;
    u32 r3_9 = 0;
    *gptr<u32>(r13 + 0xffffffe8u) = u32(r3);  // (from the original)
    r13 = r13 - 0x18;  // (from the original)
    r5 = r0;
    r0_1 = r0 + 6u;
    guest::cpu()->r[13] = r13;
    call_00625be0(r0_1, r1, 4u, r3);
    r3_1 = guest::cpu()->r[3];
    r0_2 = r5 + 6u;
    guest::cpu()->r[13] = r13;
    call_00625ba4(r0_2, r1, 0xa5u, r3_1);  // (from the original)
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r4 = 0u;
    do {
L_6216fc:;
        r6_1 = r4 & 0xffu;  // (from the original)
        r0_3 = r5 + 6u;
        guest::cpu()->r[13] = r13;
        r0_4 = call_0075ea7c(r0_3, r6_1, r2, r3);
        r1_1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r0_5 = r0_4 - 1u;
        if (!(r0_5 >= 3u)) {
            r2_1 = r0_5 & 0xffu;  // (from the original)
            r0_6 = r5 + 6u;
            guest::cpu()->r[13] = r13;
            call_00625be0(r0_6, r6_1, r2_1, r3);
            r1_1 = guest::cpu()->r[1];
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
        }
        r4 = r4 + 1u;
        guest::preempt();
    } while (s32(r4) < s32(4u));
    r7 = 0x95362cu;  // (from the original)
    r0_7 = *gptr<u32>(r7);
    guest::cpu()->r[13] = r13;
    r0_8 = call_0075dfe8(r0_7, r1_1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0_8 == 0) {
        r4 = 0u;
        goto L_6217e0;
    } else {
        r6 = u32(*gptr<u8>(r5 + 0xfu));  // (from the original)
    }
L_621750:;
    r4_1 = *gptr<u32>(r7) + 0x10u;  // (from the original)
    if (r6 >= 4u) {
        goto L_621828;
    }
    r0_9 = r13;
    guest::cpu()->r[13] = r13;
    call_00625b90(r0_9, r1, r2, r3);
    r2_2 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    r0_10 = r5 + 6u;
    guest::cpu()->r[13] = r13;
    r0_11 = call_0075ea44(r0_10, r6, r2_2, r3_2);
    r3_3 = guest::cpu()->r[3];
    r0_12 = r13;
    guest::cpu()->r[13] = r13;
    call_00625b64(r0_12, r6, r0_11, r3_3);
    r1_2 = guest::cpu()->r[1];
    r2_3 = guest::cpu()->r[2];
    r3_4 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    call_00627f74(r4_1, r1_2, r2_3, r3_4);
    r3_5 = guest::cpu()->r[3];
    r1_3 = r13;
    guest::cpu()->r[13] = r13;
    call_00627d44(r4_1, r1_3, 2u, r3_5);
    r3_6 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    call_0062801c(r4_1, 3u, 4u, r3_6);
    r1_4 = guest::cpu()->r[1];
    r2_4 = guest::cpu()->r[2];
    r3_7 = guest::cpu()->r[3];
    if (r6 == 0) {
        goto L_621810;
    }
    guest::cpu()->r[13] = r13;
    call_00627f74(r4_1, r1_4, r2_4, r3_7);
    r3_8 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    call_0062801c(r4_1, 5u, r6, r3_8);
    r1 = guest::cpu()->r[1];
L_6217d4:;
    r0_13 = r13;
    r13 = r13 + 0x18;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0_13;
L_6217e0:;
    r6 = r4 & 0xffu;  // (from the original)
    r0_14 = r5 + 6u;
    guest::cpu()->r[13] = r13;
    r0_15 = call_0075ea7c(r0_14, r6, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0_15 == 0) {
        guest::preempt();
        goto L_621750;
    }
    r4 = r4 + 1u;
    if (s32(r4) < s32(4u)) {
        guest::preempt();
        goto L_6217e0;
    }
    r6 = 4u;
    guest::preempt();
    goto L_621750;
L_621810:;
    r0_16 = r5 + 0x14u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_00624aa4(r0_16, 0u, r2_4, r3_7);
    r1 = guest::cpu()->r[1];
    guest::preempt();
    goto L_6217d4;
L_621828:;
    guest::cpu()->r[13] = r13;
    call_00627f74(r4_1, r1, r2, r3);
    ea_1 = r13;
    r13 = r13 + 0x18;  // (from the original)
    r3_9 = *gptr<u32>(ea_1);
    guest::cpu()->r[13] = r13;
    return call_0062801c(r4_1, 4u, 4u, r3_9);
}

}  // namespace d_006216d0
GUEST_EXPORT(0x006216d0, d_006216d0::f_006216d0);

// f_00621b98: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00621b98 {

inline constexpr guest::Function<0x00624aa4, u32(u32, u32, u32, u32)> call_00624aa4;  // (from the original)
inline constexpr guest::Function<0x00625b64, u32(u32, u32, u32, u32)> call_00625b64;  // (from the original)
inline constexpr guest::Function<0x00625b90, u32(u32, u32, u32, u32)> call_00625b90;  // (from the original)
inline constexpr guest::Function<0x00625ba4, u32(u32, u32, u32, u32)> call_00625ba4;  // (from the original)
inline constexpr guest::Function<0x00625be0, u32(u32, u32, u32, u32)> call_00625be0;  // (from the original)
inline constexpr guest::Function<0x00627d44, u32(u32, u32, u32, u32)> call_00627d44;  // (from the original)
inline constexpr guest::Function<0x00627f74, u32(u32, u32, u32, u32)> call_00627f74;  // (from the original)
inline constexpr guest::Function<0x0062801c, u32(u32, u32, u32, u32)> call_0062801c;  // (from the original)
inline constexpr guest::Function<0x0075dfe8, u32(u32, u32, u32, u32)> call_0075dfe8;  // (from the original)
inline constexpr guest::Function<0x0075ea7c, u32(u32, u32, u32, u32)> call_0075ea7c;  // (from the original)

u32 f_00621b98(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r9 = guest::cpu()->r[9];
    u32 r10 = guest::cpu()->r[10];
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r1_1 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r2_1 = 0;
    u32 r0_5 = 0;
    u32 r3_1 = 0;
    u32 r0_6 = 0;
    u32 r0_7 = 0;
    u32 r2_2 = 0;
    u32 r3_2 = 0;
    u32 r0_8 = 0;
    u32 r3_3 = 0;
    u32 r0_9 = 0;
    u32 r1_2 = 0;
    u32 r2_3 = 0;
    u32 r3_4 = 0;
    u32 r4_1 = 0;
    u32 r3_5 = 0;
    u32 r1_3 = 0;
    u32 r3_6 = 0;
    u32 r1_4 = 0;
    u32 r2_4 = 0;
    u32 r3_7 = 0;
    u32 r3_8 = 0;
    u32 r0_10 = 0;
    u32 r0_11 = 0;
    u32 r0_12 = 0;
    *gptr<u32>(r13 + 0xffffffd8u) = u32(r3);  // (from the original)
    r13 = r13 - 0x28;  // (from the original)
    r5 = r0;
    r8 = r1;
    r10 = r2;
    r9 = 0x95362cu;  // (from the original)
    r0_1 = *gptr<u32>(r9);
    guest::cpu()->r[13] = r13;
    r0_2 = call_0075dfe8(r0_1, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0_2 == 0) {
        r4 = 0u;
        goto L_621ca8;
    } else {
        r7 = u32(*gptr<u8>(r5 + 0xfu));  // (from the original)
    }
L_621bc4:;
    r6 = 0u;
    if (r7 >= 4u) {
        goto L_621c04;
    } else {
        r6 = 1u;
        r4 = 0u;
    }
    do {
L_621bd8:;
        r1_1 = r4 & 0xffu;  // (from the original)
        r0_3 = r5 + 6u;
        guest::cpu()->r[13] = r13;
        r0_4 = call_0075ea7c(r0_3, r1_1, r2, r3);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        if (!(r0_4 >= 4u)) {
            if (r0_4 >= r6) {
                r6 = r0_4 + 1u;
            }
        }
        r4 = r4 + 1u;
        guest::preempt();
    } while (s32(r4) < s32(4u));
L_621c04:;
    r2_1 = r6 & 0xffu;  // (from the original)
    r0_5 = r5 + 6u;
    guest::cpu()->r[13] = r13;
    call_00625be0(r0_5, r8, r2_1, r3);
    r3_1 = guest::cpu()->r[3];
    r0_6 = r5 + 6u;
    guest::cpu()->r[13] = r13;
    r0_7 = call_00625ba4(r0_6, r8, r10, r3_1);
    r1 = guest::cpu()->r[1];
    r2_2 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    if (r6 != 0) {
        goto L_621ca4;
    }
    r0_8 = r13;
    guest::cpu()->r[13] = r13;
    call_00625b90(r0_8, r1, r2_2, r3_2);
    r3_3 = guest::cpu()->r[3];
    r0_9 = r13;
    guest::cpu()->r[13] = r13;
    call_00625b64(r0_9, r8, r10, r3_3);
    r1_2 = guest::cpu()->r[1];
    r2_3 = guest::cpu()->r[2];
    r3_4 = guest::cpu()->r[3];
    r4_1 = *gptr<u32>(r9) + 0x10u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_00627f74(r4_1, r1_2, r2_3, r3_4);
    r3_5 = guest::cpu()->r[3];
    r1_3 = r13;
    guest::cpu()->r[13] = r13;
    call_00627d44(r4_1, r1_3, 2u, r3_5);
    r3_6 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    call_0062801c(r4_1, 3u, 4u, r3_6);
    r1_4 = guest::cpu()->r[1];
    r2_4 = guest::cpu()->r[2];
    r3_7 = guest::cpu()->r[3];
    if (r8 == 0) {
        goto L_621cd8;
    }
    guest::cpu()->r[13] = r13;
    call_00627f74(r4_1, r1_4, r2_4, r3_7);
    r3_8 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    call_0062801c(r4_1, 5u, r8, r3_8);
    r1 = guest::cpu()->r[1];
L_621c9c:;
    r0_7 = r13;
L_621ca4:;
    r13 = r13 + 0x28;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0_7;
L_621ca8:;
    r7 = r4 & 0xffu;  // (from the original)
    r0_10 = r5 + 6u;
    guest::cpu()->r[13] = r13;
    r0_11 = call_0075ea7c(r0_10, r7, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0_11 == 0) {
        guest::preempt();
        goto L_621bc4;
    }
    r4 = r4 + 1u;
    if (s32(r4) < s32(4u)) {
        guest::preempt();
        goto L_621ca8;
    }
    r6 = 0u;
    guest::preempt();
    goto L_621c04;
L_621cd8:;
    r0_12 = r5 + 0x14u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_00624aa4(r0_12, 0u, r2_4, r3_7);
    r1 = guest::cpu()->r[1];
    guest::preempt();
    goto L_621c9c;
}

}  // namespace d_00621b98
GUEST_EXPORT(0x00621b98, d_00621b98::f_00621b98);

// f_00621da4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00621da4 {

inline constexpr guest::Function<0x00624968, u32(u32, u32, u32, u32)> call_00624968;  // (from the original)
inline constexpr guest::Function<0x00625870, u32(u32, u32, u32, u32)> call_00625870;  // (from the original)
inline constexpr guest::Function<0x00627d44, u32(u32, u32, u32, u32)> call_00627d44;  // (from the original)
inline constexpr guest::Function<0x00627f74, u32(u32, u32, u32, u32)> call_00627f74;  // (from the original)
inline constexpr guest::Function<0x0062801c, u32(u32, u32, u32, u32)> call_0062801c;  // (from the original)
inline constexpr guest::Function<0x0075dfe8, u32(u32, u32, u32, u32)> call_0075dfe8;  // (from the original)
inline constexpr guest::Function<0x0075e010, u32(u32, u32, u32, u32)> call_0075e010;  // (from the original)
inline constexpr guest::Function<0x0075e830, u32(u32, u32, u32, u32)> call_0075e830;  // (from the original)
inline constexpr guest::Function<0x0075e8c0, u32(u32, u32, u32, u32)> call_0075e8c0;  // (from the original)

u32 f_00621da4(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = guest::cpu()->r[4];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r9 = guest::cpu()->r[9];
    u32 r13 = guest::cpu()->r[13];
    u32 r5_1 = 0;
    u32 r0_1 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r4_1 = 0;
    u32 r0_2 = 0;
    u32 r2_2 = 0;
    u32 r3_2 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r2_3 = 0;
    u32 r3_3 = 0;
    u32 r0_5 = 0;
    u32 r0_6 = 0;
    u32 r4_2 = 0;
    u32 r0_7 = 0;
    u32 r5_2 = 0;
    u32 zf_1 = 0;
    u32 r0_8 = 0;
    u32 r8_1 = 0;
    u32 r3_4 = 0;
    u32 r1_1 = 0;
    u32 r3_5 = 0;
    u32 r1_2 = 0;
    u32 r2_4 = 0;
    u32 r3_6 = 0;
    u32 r3_7 = 0;
    u32 r1_3 = 0;
    u32 r3_8 = 0;
    r5_1 = r0;
    r13 = r13 - 0x30u;  // (from the original)
    r0_1 = r0 + 1u;
    guest::cpu()->r[13] = r13;
    call_00624968(r0_1, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    r9 = 0x95362cu;  // (from the original)
    r0 = *gptr<u32>(r9);
    r4_1 = r0 + 0xa4u;  // (from the original)
    r6 = u32(*gptr<u8>(r0 + 0xadu));  // (from the original)
    if (r6 >= 4u) {
        goto L_621f00;
    }
    r1 = u32(*gptr<u8>(r4_1 + 0xau));  // (from the original)
    if (r1 != 0) {
        goto L_621f00;
    }
    guest::cpu()->r[13] = r13;
    r0_2 = call_0075dfe8(r0, r1, r2_1, r3_1);
    r2_2 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    r7 = r0_2;
    r0_3 = r5_1 + 1u;
    guest::cpu()->r[13] = r13;
    r0_4 = call_0075e830(r0_3, r0_2, r2_2, r3_2);
    r2_3 = guest::cpu()->r[2];
    r3_3 = guest::cpu()->r[3];
    r0_5 = r5_1 + 1u;
    guest::cpu()->r[13] = r13;
    r0 = call_0075e8c0(r0_5, r0_4, r2_3, r3_3);
    r1 = guest::cpu()->r[1];
    if (r0 >= 4u) {
        goto L_621f00;
    }
    if (r0 == r6) {
        goto L_621f00;
    }
    if (r0 == r7) {
        *gptr<u8>(r4_1 + 0xau) = u8(1u);  // (from the original)
    } else {
        r0 = 2u;
        *gptr<u8>(r4_1 + 0xau) = u8(r0);  // (from the original)
        goto L_621f00;
    }
    *gptr<u32>(r13 + 4u) = u32(0u);
    *gptr<u32>(r13 + 8u) = u32(4u);
    r0_6 = r13 + 0xcu;  // (from the original)
    *gptr<u32>(r13) = u32(1u);
    guest::cpu()->r[13] = r13;
    call_00625870(r0_6, r6, 1u, 0xa5u);  // (from the original)
    r4_2 = r13 + 4u;
    *gptr<u32>(r13) = u32(1u);
    r0_7 = r13 + 0x10u;  // (from the original)
    *gptr<u32>(r4_2) = u32(1u);
    *gptr<u32>(r4_2 + 4) = u32(r6);
    guest::cpu()->r[13] = r13;
    r0 = call_00625870(r0_7, r7, 0u, 0xa5u);  // (from the original)
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r4 = 0u;
L_621e70:;
    r5_2 = r4 & 0xffu;  // (from the original)
    zf_1 = r5_2 == r6;
    if (!zf_1) {
        zf_1 = r5_2 == r7;
    }
    if (zf_1) {
        goto L_621ef4;
    }
    r0_8 = *gptr<u32>(r9);
    guest::cpu()->r[13] = r13;
    r0 = call_0075e010(r0_8, r5_2, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        goto L_621ef4;
    }
    r8_1 = *gptr<u32>(r9) + 0x10u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_00627f74(r8_1, r1, r2, r3);
    r3_4 = guest::cpu()->r[3];
    r1_1 = r13 + 0xcu;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_00627d44(r8_1, r1_1, 2u, r3_4);
    r3_5 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    call_0062801c(r8_1, 1u, r5_2, r3_5);
    r1_2 = guest::cpu()->r[1];
    r2_4 = guest::cpu()->r[2];
    r3_6 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    call_00627f74(r8_1, r1_2, r2_4, r3_6);
    r3_7 = guest::cpu()->r[3];
    r1_3 = r13 + 0x10u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_00627d44(r8_1, r1_3, 2u, r3_7);
    r3_8 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0 = call_0062801c(r8_1, 1u, r5_2, r3_8);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
L_621ef4:;
    r4 = r4 + 1u;
    if (s32(r4) < s32(4u)) {
        guest::preempt();
        goto L_621e70;
    }
L_621f00:;
    r13 = r13 + 0x30u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_00621da4
GUEST_EXPORT(0x00621da4, d_00621da4::f_00621da4);

// f_00621f0c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00621f0c {

struct __attribute__((packed)) Object_00621f0c_0 {
    u8 unknown_0[0x20];  // (not used here)
    u8 byte_20;
};
GUEST_OFFSET(Object_00621f0c_0, byte_20, 0x20);  // (from the original)

inline guest::global<u32, 0x0095362c> global_0095362c;  // (from the original)
inline constexpr guest::Function<0x00624954, u32(u32, u32, u32, u32)> call_00624954;  // (from the original)
inline constexpr guest::Function<0x0075e830, u32(u32, u32, u32, u32)> call_0075e830;  // (from the original)

u32 f_00621f0c(gptr<Object_00621f0c_0> arg0, u32 r1, u32 r2) {
    u32 r0 = arg0.addr();
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
    u32 r14 = guest::cpu()->r[14];
    u32 ea_1 = 0;
    u32 r7_1 = 0;
    u32 r8_1 = 0;
    u32 r10_1 = 0;
    u32 r0_1 = 0;
    u32 zf_1 = 0;
    u32 r6_1 = 0;
    u32 r9_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r0_5 = 0;
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r0_6 = 0;
    u32 ea_2 = 0;
    u32 r4_1 = 0;
    u32 r5_1 = 0;
    u32 r6_2 = 0;
    u32 r7_2 = 0;
    u32 r8_2 = 0;
    u32 r9_2 = 0;
    u32 r10_2 = 0;
    u32 r11_1 = 0;
    if (r1 >= 4u) {
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[4] = r4;
        guest::cpu()->r[5] = r5;
        guest::cpu()->r[6] = r6;
        guest::cpu()->r[7] = r7;
        guest::cpu()->r[8] = r8;
        guest::cpu()->r[9] = r9;
        guest::cpu()->r[10] = r10;
        guest::cpu()->r[11] = r11;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    ea_1 = r13 - 0x28;  // (from the original)
    *gptr<u32>(ea_1) = u32(r4);
    *gptr<u32>(ea_1 + 4) = u32(r5);
    *gptr<u32>(ea_1 + 8) = u32(r6);
    *gptr<u32>(ea_1 + 0xc) = u32(r7);  // (from the original)
    *gptr<u32>(ea_1 + 0x10) = u32(r8);  // (from the original)
    *gptr<u32>(ea_1 + 0x14) = u32(r9);  // (from the original)
    *gptr<u32>(ea_1 + 0x18) = u32(r10);  // (from the original)
    *gptr<u32>(ea_1 + 0x1c) = u32(r11);  // (from the original)
    *gptr<u32>(ea_1 + 0x20) = u32(r12);  // (from the original)
    *gptr<u32>(ea_1 + 0x24) = u32(r14);  // (from the original)
    r13 = r13 - 0x28;  // (from the original)
    r7_1 = 0u;
    r8_1 = u32(arg0->byte_20);
    r10_1 = 0xa5u;  // (from the original)
    r0_1 = *global_0095362c;
    zf_1 = r8_1 == r1;
    r6_1 = r0_1 + 0xa4u;  // (from the original)
    r9_1 = u32(*gptr<u8>(r0_1 + 0xacu));  // (from the original)
    if (!zf_1) {
        zf_1 = r9_1 == r1;
    }
    if (zf_1) {
        r7_1 = 1u;
    } else {
        goto L_621f5c;
    }
    r0_2 = r0 + 1u;
    guest::cpu()->r[13] = r13;
    r0_3 = call_0075e830(r0_2, r1, r2, guest::cpu()->r[3]);
    r10_1 = r0_3;
L_621f5c:;
    r0_4 = r0 + 1u;
    guest::cpu()->r[13] = r13;
    r0_5 = call_00624954(r0_4, r1, r2, guest::cpu()->r[3]);
    r1_1 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    if (r7_1 == 0) {
        goto L_621fb4;
    }
    r0_6 = r0 + 1u;
    guest::cpu()->r[13] = r13;
    r0_5 = call_0075e830(r0_6, r1, r2_1, guest::cpu()->r[3]);
    r1_1 = guest::cpu()->r[1];
    if (r0_5 == r10_1) {
        goto L_621fb4;
    }
    if (r8_1 == r1) {
        r0_5 = 4u;
        *gptr<u8>(r0 + 0x20u) = u8(r0_5);  // (from the original)
    }
    if (r9_1 != r1) {
        goto L_621fb4;
    }
    r0_5 = u32(*gptr<u8>(r6_1 + 0xau));  // (from the original)
    if (r0_5 != 2u) {
        r0_5 = 2u;
        *gptr<u8>(r6_1 + 0xau) = u8(r0_5);  // (from the original)
    }
L_621fb4:;
    ea_2 = r13;
    r13 = r13 + 0x28;  // (from the original)
    r4_1 = *gptr<u32>(ea_2);
    r5_1 = *gptr<u32>(ea_2 + 4);
    r6_2 = *gptr<u32>(ea_2 + 8);
    r7_2 = *gptr<u32>(ea_2 + 0xc);  // (from the original)
    r8_2 = *gptr<u32>(ea_2 + 0x10);  // (from the original)
    r9_2 = *gptr<u32>(ea_2 + 0x14);  // (from the original)
    r10_2 = *gptr<u32>(ea_2 + 0x18);  // (from the original)
    r11_1 = *gptr<u32>(ea_2 + 0x1c);  // (from the original)
    guest::cpu()->r[1] = r1_1;
    guest::cpu()->r[4] = r4_1;
    guest::cpu()->r[5] = r5_1;
    guest::cpu()->r[6] = r6_2;
    guest::cpu()->r[7] = r7_2;
    guest::cpu()->r[8] = r8_2;
    guest::cpu()->r[9] = r9_2;
    guest::cpu()->r[10] = r10_2;
    guest::cpu()->r[11] = r11_1;
    guest::cpu()->r[13] = r13;
    return r0_5;
}

}  // namespace d_00621f0c
GUEST_EXPORT(0x00621f0c, d_00621f0c::f_00621f0c);

// f_006220f8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006220f8 {

struct __attribute__((packed)) Object_006220f8_0 {
    u8 byte_0;
};
GUEST_OFFSET(Object_006220f8_0, byte_0, 0x0);  // (from the original)

inline constexpr guest::Function<0x00624990, u32(u32, u32, u32, u32)> call_00624990;  // (from the original)
inline constexpr guest::Function<0x00624c90, u32(u32, u32, u32, u32)> call_00624c90;  // (from the original)
inline constexpr guest::Function<0x00625b90, u32(u32, u32, u32, u32)> call_00625b90;  // (from the original)
inline constexpr guest::Function<0x00625c7c, u32(u32, u32, u32, u32)> call_00625c7c;  // (from the original)

u32 f_006220f8(gptr<Object_006220f8_0> arg0, u32 r1) {
    u32 r0 = arg0.addr();
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r1_1 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r1_2 = 0;
    u32 r0_5 = 0;
    u32 r0_6 = 0;
    u32 r1_3 = 0;
    u32 r0_7 = 0;
    u32 r0_8 = 0;
    u32 r1_4 = 0;
    u32 r0_9 = 0;
    u32 r0_10 = 0;
    u32 ea_1 = 0;
    u32 r0_11 = 0;
    u32 r0_12 = 0;
    u32 r0_13 = 0;
    u32 r1_5 = 0;
    u32 r0_14 = 0;
    r13 = r13 - 0x10;  // (from the original)
    arg0->byte_0 = u8(0u);
    r0_1 = r0 + 1u;
    guest::cpu()->r[13] = r13;
    r0_2 = call_00624990(r0_1, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_1 = guest::cpu()->r[1];
    r0_3 = r0_2 + 5u;
    guest::cpu()->r[13] = r13;
    r0_4 = call_00625c7c(r0_3, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_2 = guest::cpu()->r[1];
    r0_5 = r0_4 + 8u;
    guest::cpu()->r[13] = r13;
    r0_6 = call_00625b90(r0_5, r1_2, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_3 = guest::cpu()->r[1];
    r0_7 = r0_6 + 6u;
    guest::cpu()->r[13] = r13;
    r0_8 = call_00624c90(r0_7, r1_3, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_4 = guest::cpu()->r[1];
    *gptr<u32>(r0_8 - 4u) = u32(0x90ac18u);  // (from the original)
    r0_9 = r0_8 + 8u;
    guest::cpu()->r[13] = r13;
    r0_10 = call_00624c90(r0_9, r1_4, guest::cpu()->r[2], guest::cpu()->r[3]);
    ea_1 = r0_10 - 4u;
    *gptr<u32>(ea_1) = u32(0x90ac18u);  // (from the original)
    r0_11 = ea_1 - 0x18u;  // (from the original)
    *gptr<u8>(r0_11 + 0x20u) = u8(4u);  // (from the original)
    r0_12 = r0_11 + 0x21u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_13 = call_00624c90(r0_12, 4u, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_5 = guest::cpu()->r[1];
    r0_14 = r0_13 - 0x21u;  // (from the original)
    *gptr<u8>(r0_14 + 0x23u) = u8(0u);  // (from the original)
    r13 = r13 + 0x10;  // (from the original)
    guest::cpu()->r[1] = r1_5;
    guest::cpu()->r[13] = r13;
    return r0_14;
}

}  // namespace d_006220f8
GUEST_EXPORT(0x006220f8, d_006220f8::f_006220f8);

// f_00622158: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00622158 {


void f_00622158(u32 r0) {
    return;
}

}  // namespace d_00622158
GUEST_EXPORT(0x00622158, d_00622158::f_00622158);

// f_0062217c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0062217c {

inline guest::global<u32, 0x009529cc> global_009529cc;  // (from the original)
inline constexpr guest::Function<0x001aa88c, u32(u32, u32, u32, u32)> call_001aa88c;  // (from the original)
inline constexpr guest::Function<0x002fb94c, u32(u32, u32, u32, u32)> call_002fb94c;  // (from the original)
inline constexpr guest::Function<0x006221e4, u32(u32, u32, u32, u32)> call_006221e4;  // (from the original)
inline constexpr guest::Function<0x006256dc, u32(u32, u32, u32, u32)> call_006256dc;  // (from the original)

u32 f_0062217c(u32 r0, u32 r1, u32 r2) {
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r0_3 = 0;
    u32 r2_2 = 0;
    u32 zf_1 = 0;
    u32 r0_4 = 0;
    u32 r1_2 = 0;
    u32 r2_3 = 0;
    u32 r1_3 = 0;
    guest::cpu()->r[13] -= 8u;
    r0_1 = *global_009529cc;
    r0_2 = call_001aa88c(r0_1, r1, r2, guest::cpu()->r[3]);
    r1_1 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    r0_3 = call_002fb94c(r0_2, r1_1, r2_1, guest::cpu()->r[3]);
    r2_2 = guest::cpu()->r[2];
    zf_1 = r0_3 == 0;
    r0_4 = r0 + 0x38e0u;  // (from the original)
    if (zf_1) {
        call_006256dc(r0_4, r0_3, r2_2, guest::cpu()->r[3]);
        r1_2 = guest::cpu()->r[1];
        r2_3 = guest::cpu()->r[2];
    } else {
        r1_3 = r0_3 + 0x5500u;  // (from the original)
        r2_3 = u32(*gptr<u16>(r1_3 + 0xa6u));  // (from the original)
        r1_2 = u32(*gptr<u16>(r1_3 + 0xbcu));  // (from the original)
        *gptr<u16>(r0_4) = u16(r2_3);
        *gptr<u16>(r0_4 + 2u) = u16(r1_2);
    }
    call_006221e4(r0, r1_2, r2_3, guest::cpu()->r[3]);
    *gptr<u8>(0x42aau + r0) = u8(1u);  // (from the original)
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = 0x42aau;  // (from the original)
    return 1u;
}

}  // namespace d_0062217c
GUEST_EXPORT(0x0062217c, d_0062217c::f_0062217c);

// f_006223f0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006223f0 {

struct __attribute__((packed)) Object_006223f0_0 {
    u8 unknown_0[0x42aa];  // (not used here)
    u8 byte_42aa;
};
GUEST_OFFSET(Object_006223f0_0, byte_42aa, 0x42aa);  // (from the original)

inline constexpr guest::Function<0x0050d3dc, u32(u32, u32, u32, u32)> call_0050d3dc;  // (from the original)
inline constexpr guest::Function<0x00746f8c, u32(u32, u32, u32, u32)> call_00746f8c;  // (from the original)

u32 f_006223f0(gptr<Object_006223f0_0> arg0, u32 r1, u32 r2, u32 r3) {
    u32 r0 = arg0.addr();
    u32 r6_1 = 0;
    u32 r7_1 = 0;
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r4_1 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    guest::cpu()->r[13] -= 0x20u;  // (from the original)
    r6_1 = r0 + 0x4200u;  // (from the original)
    r7_1 = r1;
    if (u32(arg0->byte_42aa) == 0) {
        r0_1 = 1u;
        goto L_622470;
    }
    r0_2 = call_00746f8c(0xa22020u, r1, r2, r3);  // (from the original)
    r1 = guest::cpu()->r[1];
    r4_1 = r0 + 0x4000u;  // (from the original)
    if (r0_2 != 0) {
        r0_1 = 0u;
        *gptr<u8>(r4_1 + 0x2abu) = u8(0u);  // (from the original)
        goto L_622470;
    }
    if (u32(*gptr<u8>(r6_1 + 0xabu)) == 0) {  // (from the original)
        *gptr<u8>(r4_1 + 0x2a4u) = u8(r7_1);  // (from the original)
        *gptr<u8>(r4_1 + 0x2abu) = u8(1u);  // (from the original)
        *gptr<u8>(r4_1 + 0x2a5u) = u8(r2);  // (from the original)
    }
    r2_1 = *gptr<u32>(r4_1 + 0x2a4u);  // (from the original)
    r3_1 = r0 + 0x40a4u;  // (from the original)
    r0_1 = call_0050d3dc(0xa22020u, 1u, r2_1, r3_1);  // (from the original)
    r1 = guest::cpu()->r[1];
    if (r0_1 != 0) {
        *gptr<u8>(r4_1 + 0x2abu) = u8(0u);  // (from the original)
    }
L_622470:;
    guest::cpu()->r[13] += 0x20u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0_1;
}

}  // namespace d_006223f0
GUEST_EXPORT(0x006223f0, d_006223f0::f_006223f0);

// f_00622478: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00622478 {

inline guest::global<u32, 0x0095362c> global_0095362c;  // (from the original)
inline constexpr guest::Function<0x001df2f8, u32(u32, u32, u32, u32)> call_001df2f8;  // (from the original)
inline constexpr guest::Function<0x002be5fc, u32(u32, u32, u32, u32)> call_002be5fc;  // (from the original)
inline constexpr guest::Function<0x002fb918, u32(u32, u32, u32, u32)> call_002fb918;  // (from the original)
inline constexpr guest::Function<0x005c4e5c, u32(u32, u32, u32, u32)> call_005c4e5c;  // (from the original)
inline constexpr guest::Function<0x006221e4, u32(u32, u32, u32, u32)> call_006221e4;  // (from the original)
inline constexpr guest::Function<0x0075f1f8, u32(u32, u32, u32, u32)> call_0075f1f8;  // (from the original)

u32 f_00622478(u32 r0, u32 r1, u32 r2) {
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r4_1 = 0;
    u32 r0_2 = 0;
    u32 r1_2 = 0;
    u32 r2_2 = 0;
    u32 r1_3 = 0;
    u32 r0_3 = 0;
    u32 r2_3 = 0;
    u32 r2_4 = 0;
    r13 = r13 - 0x20u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_1 = call_005c4e5c(r1, r1, r2, guest::cpu()->r[3]);
    r1_1 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    r4_1 = r0_1;
    if (r0_1 == 0) {
        r13 = r13 + 0x20u;  // (from the original)
        guest::cpu()->r[1] = r1_1;
        guest::cpu()->r[13] = r13;
        return r0_1;
    }
    guest::cpu()->r[13] = r13;
    r0_2 = call_002fb918(r0_1, r1_1, r2_1, guest::cpu()->r[3]);
    r1_2 = guest::cpu()->r[1];
    r2_2 = guest::cpu()->r[2];
    guest::cpu()->r[13] = r13;
    r0_1 = call_001df2f8(r0_2, r1_2, r2_2, guest::cpu()->r[3]);
    r1_1 = guest::cpu()->r[1];
    if (r0_1 == 0) {
        r13 = r13 + 0x20u;  // (from the original)
        guest::cpu()->r[1] = r1_1;
        guest::cpu()->r[13] = r13;
        return r0_1;
    }
    *gptr<u32>(r13 + 4u) = u32(0u);
    *gptr<u32>(r13 + 8u) = u32(0u);
    r1_3 = r13;
    r0_3 = *global_0095362c + 0xb0u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_0075f1f8(r0_3, r1_3, r1, guest::cpu()->r[3]);
    r2_3 = r13;
    guest::cpu()->r[13] = r13;
    r0_1 = call_002be5fc(r0_1, r4_1, r2_3, guest::cpu()->r[3]);
    r1_1 = guest::cpu()->r[1];
    r2_4 = guest::cpu()->r[2];
    if (r0_1 != 0) {
        guest::cpu()->r[13] = r13;
        r0_1 = call_006221e4(r0, r1_1, r2_4, guest::cpu()->r[3]);
        r1_1 = guest::cpu()->r[1];
    }
    r13 = r13 + 0x20u;  // (from the original)
    guest::cpu()->r[1] = r1_1;
    guest::cpu()->r[13] = r13;
    return r0_1;
}

}  // namespace d_00622478
GUEST_EXPORT(0x00622478, d_00622478::f_00622478);

// f_00622864: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00622864 {

struct __attribute__((packed)) Object_00622864_0 {
    u8 unknown_0[0x42a8];  // (not used here)
    u8 byte_42a8;
};
GUEST_OFFSET(Object_00622864_0, byte_42a8, 0x42a8);  // (from the original)

inline guest::global<u32, 0x0095362c> global_0095362c;  // (from the original)
inline constexpr guest::Function<0x001df2f8, u32(u32, u32, u32, u32)> call_001df2f8;  // (from the original)
inline constexpr guest::Function<0x002be4a4, u32(u32, u32, u32, u32)> call_002be4a4;  // (from the original)
inline constexpr guest::Function<0x002fb918, u32(u32, u32, u32, u32)> call_002fb918;  // (from the original)
inline constexpr guest::Function<0x0050d3dc, u32(u32, u32, u32, u32)> call_0050d3dc;  // (from the original)
inline constexpr guest::Function<0x005c4e5c, u32(u32, u32, u32, u32)> call_005c4e5c;  // (from the original)
inline constexpr guest::Function<0x006221e4, u32(u32, u32, u32, u32)> call_006221e4;  // (from the original)
inline constexpr guest::Function<0x0062a698, u32(u32, u32, u32, u32)> call_0062a698;  // (from the original)
inline constexpr guest::Function<0x00746f8c, u32(u32, u32, u32, u32)> call_00746f8c;  // (from the original)
inline constexpr guest::Function<0x0075f0b0, u32(u32, u32, u32, u32)> call_0075f0b0;  // (from the original)
inline constexpr guest::Function<0x0075f1f8, u32(u32, u32, u32, u32)> call_0075f1f8;  // (from the original)

u32 f_00622864(gptr<Object_00622864_0> arg0, u32 r1_unused, u32 r2, u32 r3) {
    u32 r0 = arg0.addr();
    u32 r13 = guest::cpu()->r[13];
    u32 r4_1 = 0;
    u32 r1_1 = 0;
    u32 r0_1 = 0;
    u32 r1_2 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r0_5 = 0;
    u32 r0_6 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r0_7 = 0;
    u32 r1_3 = 0;
    u32 r2_2 = 0;
    u32 r3_2 = 0;
    u32 r0_8 = 0;
    u32 r3_3 = 0;
    u32 r2_3 = 0;
    u32 r1_4 = 0;
    u32 r0_9 = 0;
    u32 r3_4 = 0;
    u32 r2_4 = 0;
    u32 r1_5 = 0;
    u32 r2_5 = 0;
    u32 r3_5 = 0;
    u32 r0_10 = 0;
    u32 r0_11 = 0;
    u32 r2_6 = 0;
    u32 r3_6 = 0;
    u32 r6_1 = 0;
    u32 r0_12 = 0;
    u32 r2_7 = 0;
    u32 r3_7 = 0;
    u32 r2_8 = 0;
    u32 r3_8 = 0;
    u32 r0_13 = 0;
    u32 r0_14 = 0;
    r4_1 = r0 + 0x4000u;  // (from the original)
    r13 = r13 - 0x30u;  // (from the original)
    r1_1 = u32(arg0->byte_42a8);
    r0_1 = *global_0095362c;
    if (r1_1 != 1u) {
        if (r1_1 == 2u) {
            goto L_6228bc;
        }
        if (r1_1 != 3u) {
            goto L_6229c0;
        }
        goto L_622930;
    }
    r1_2 = u32(*gptr<u8>(r4_1 + 0x2a9u));  // (from the original)
    r0_2 = r0_1 + 0xb0u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_3 = call_0062a698(r0_2, r1_2, r2, r3);
    r1_1 = guest::cpu()->r[1];
    if (r0_3 != 0) {
        r0_4 = 2u;
        goto L_622928;
    }
    goto L_6229c8;
L_6228bc:;
    r0_5 = u32(*gptr<u8>(r4_1 + 0x2a9u));  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_6 = call_005c4e5c(r0_5, r1_1, r2, r3);
    r1_1 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    if (r0_6 == 0) {
        goto L_622924;
    }
    guest::cpu()->r[13] = r13;
    r0_7 = call_002fb918(r0_6, r1_1, r2_1, r3_1);
    r1_3 = guest::cpu()->r[1];
    r2_2 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0_8 = call_001df2f8(r0_7, r1_3, r2_2, r3_2);
    r1_1 = guest::cpu()->r[1];
    r3_3 = guest::cpu()->r[3];
    if (r0_8 == 0) {
        goto L_622924;
    }
    *gptr<u32>(r13 + 4u) = u32(0u);
    *gptr<u32>(r13 + 8u) = u32(0u);
    r2_3 = u32(*gptr<u8>(r4_1 + 0x2a9u));  // (from the original)
    r1_4 = r13;
    r0_9 = *global_0095362c + 0xb0u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_0075f1f8(r0_9, r1_4, r2_3, r3_3);
    r3_4 = guest::cpu()->r[3];
    r2_4 = r13;
    guest::cpu()->r[13] = r13;
    call_002be4a4(r0_8, r0_6, r2_4, r3_4);
    r1_5 = guest::cpu()->r[1];
    r2_5 = guest::cpu()->r[2];
    r3_5 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    call_006221e4(r0, r1_5, r2_5, r3_5);
    r1_1 = guest::cpu()->r[1];
L_622924:;
    r0_4 = 3u;
L_622928:;
    *gptr<u8>(r4_1 + 0x2a8u) = u8(r0_4);  // (from the original)
    goto L_6229d4;
L_622930:;
    r0_10 = r0_1 + 0x7874u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_11 = call_0075f0b0(r0_10, 3u, r2, r3);
    r1_1 = guest::cpu()->r[1];
    r2_6 = guest::cpu()->r[2];
    r3_6 = guest::cpu()->r[3];
    r6_1 = r0 + 0x4200u;  // (from the original)
    if (u32(*gptr<u8>(r6_1 + 0xaau)) == 0) {  // (from the original)
        goto L_6229c0;
    }
    guest::cpu()->r[13] = r13;
    r0_12 = call_00746f8c(0xa22020u, r1_1, r2_6, r3_6);  // (from the original)
    r1_1 = guest::cpu()->r[1];
    r2_7 = guest::cpu()->r[2];
    r3_7 = guest::cpu()->r[3];
    if (r0_12 != 0) {
        *gptr<u8>(r4_1 + 0x2abu) = u8(0u);  // (from the original)
        goto L_6229ac;
    }
    if (u32(*gptr<u8>(r6_1 + 0xabu)) == 0) {  // (from the original)
        *gptr<u8>(r4_1 + 0x2a4u) = u8(r0_11);  // (from the original)
        *gptr<u8>(r4_1 + 0x2abu) = u8(1u);  // (from the original)
        *gptr<u8>(r4_1 + 0x2a5u) = u8(0u);  // (from the original)
    }
    r2_8 = *gptr<u32>(r4_1 + 0x2a4u);  // (from the original)
    r3_8 = r0 + 0x40a4u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_13 = call_0050d3dc(0xa22020u, 1u, r2_8, r3_8);  // (from the original)
    r1_1 = guest::cpu()->r[1];
    r2_7 = guest::cpu()->r[2];
    r3_7 = guest::cpu()->r[3];
    if (r0_13 != 0) {
        *gptr<u8>(r4_1 + 0x2abu) = u8(0u);  // (from the original)
        goto L_6229c0;
    }
L_6229ac:;
    guest::cpu()->r[13] = r13;
    r0_14 = call_00746f8c(0xa22020u, r1_1, r2_7, r3_7);  // (from the original)
    r1_1 = guest::cpu()->r[1];
    if (r0_14 == 0) {
        goto L_6229c8;
    }
L_6229c0:;
    *gptr<u8>(r4_1 + 0x2a8u) = u8(0u);  // (from the original)
    goto L_6229e0;
L_6229c8:;
    if (u32(*gptr<u8>(r4_1 + 0x2a8u)) == 0) {  // (from the original)
        goto L_6229e0;
    }
L_6229d4:;
    r13 = r13 + 0x30u;  // (from the original)
    guest::cpu()->r[1] = r1_1;
    guest::cpu()->r[13] = r13;
    return 0u;
L_6229e0:;
    r13 = r13 + 0x30u;  // (from the original)
    guest::cpu()->r[1] = r1_1;
    guest::cpu()->r[13] = r13;
    return 1u;
}

}  // namespace d_00622864
GUEST_EXPORT(0x00622864, d_00622864::f_00622864);

// f_00622ab0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00622ab0 {

struct __attribute__((packed)) Object_00622ab0_0 {
    u8 unknown_0[0x42a8];  // (not used here)
    u8 byte_42a8;
};
GUEST_OFFSET(Object_00622ab0_0, byte_42a8, 0x42a8);  // (from the original)

inline guest::global<u32, 0x0095362c> global_0095362c;  // (from the original)
inline constexpr guest::Function<0x0050d3dc, u32(u32, u32, u32, u32)> call_0050d3dc;  // (from the original)
inline constexpr guest::Function<0x00746f8c, u32(u32, u32, u32, u32)> call_00746f8c;  // (from the original)
inline constexpr guest::Function<0x0075f0b0, u32(u32, u32, u32, u32)> call_0075f0b0;  // (from the original)

u32 f_00622ab0(gptr<Object_00622ab0_0> arg0, u32 r1_unused, u32 r2, u32 r3) {
    u32 r0 = arg0.addr();
    u32 r4_1 = 0;
    u32 r1_1 = 0;
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r7_1 = 0;
    u32 r0_3 = 0;
    u32 r2_2 = 0;
    u32 r3_2 = 0;
    u32 r2_3 = 0;
    u32 r3_3 = 0;
    u32 r0_4 = 0;
    u32 r0_5 = 0;
    u32 r0_6 = 0;
    guest::cpu()->r[13] -= 0x20u;  // (from the original)
    r4_1 = r0 + 0x4000u;  // (from the original)
    r1_1 = u32(arg0->byte_42a8);
    if (r1_1 != 3u) {
        goto L_622b6c;
    }
    r0_1 = *global_0095362c + 0x7874u;  // (from the original)
    r0_2 = call_0075f0b0(r0_1, 3u, r2, r3);
    r1_1 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    r7_1 = r0 + 0x4200u;  // (from the original)
    if (u32(*gptr<u8>(r7_1 + 0xaau)) == 0) {  // (from the original)
        goto L_622b64;
    }
    r0_3 = call_00746f8c(0xa22020u, r1_1, r2_1, r3_1);  // (from the original)
    r1_1 = guest::cpu()->r[1];
    r2_2 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    if (r0_3 != 0) {
        *gptr<u8>(r4_1 + 0x2abu) = u8(0u);  // (from the original)
        goto L_622b50;
    }
    if (u32(*gptr<u8>(r7_1 + 0xabu)) == 0) {  // (from the original)
        *gptr<u8>(r4_1 + 0x2a4u) = u8(r0_2);  // (from the original)
        *gptr<u8>(r4_1 + 0x2abu) = u8(1u);  // (from the original)
        *gptr<u8>(r4_1 + 0x2a5u) = u8(0u);  // (from the original)
    }
    r2_3 = *gptr<u32>(r4_1 + 0x2a4u);  // (from the original)
    r3_3 = r0 + 0x40a4u;  // (from the original)
    r0_4 = call_0050d3dc(0xa22020u, 1u, r2_3, r3_3);  // (from the original)
    r1_1 = guest::cpu()->r[1];
    r2_2 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    if (r0_4 != 0) {
        *gptr<u8>(r4_1 + 0x2abu) = u8(0u);  // (from the original)
        goto L_622b64;
    }
L_622b50:;
    r0_5 = call_00746f8c(0xa22020u, r1_1, r2_2, r3_2);  // (from the original)
    r1_1 = guest::cpu()->r[1];
    if (r0_5 == 0) {
        goto L_622b6c;
    }
L_622b64:;
    *gptr<u8>(r4_1 + 0x2a8u) = u8(0u);  // (from the original)
    goto L_622b7c;
L_622b6c:;
    if (u32(*gptr<u8>(r4_1 + 0x2a8u)) != 0) {  // (from the original)
        r0_6 = 0u;
        goto L_622b80;
    }
L_622b7c:;
    r0_6 = 1u;
L_622b80:;
    guest::cpu()->r[13] += 0x20u;  // (from the original)
    guest::cpu()->r[1] = r1_1;
    return r0_6;
}

}  // namespace d_00622ab0
GUEST_EXPORT(0x00622ab0, d_00622ab0::f_00622ab0);

// f_00622be8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00622be8 {

inline constexpr guest::Function<0x00135748, u32(u32, u32, u32, u32)> call_00135748;  // (from the original)
inline constexpr guest::Function<0x001357ec, u32(u32, u32, u32, u32)> call_001357ec;  // (from the original)
inline constexpr guest::Function<0x006256d0, u32(u32, u32, u32, u32)> call_006256d0;  // (from the original)

u32 f_00622be8(u32 r0, u32 r1, u32 r2) {
    u32 r5_1 = 0;
    u32 r2_1 = 0;
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r0_2 = 0;
    u32 r1_2 = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r5_1 = r1;
    if (r2 < 0x20u) {  // (from the original)
        call_00135748(r0, r1, r2, guest::cpu()->r[3]);
        r2_1 = guest::cpu()->r[2];
        r0_1 = r0 + (r2 << 2);
        r1_1 = *gptr<u32>(0x4024u + r0_1);  // (from the original)
        if (r1_1 != 0) {
            r0_2 = r0_1 + 0x3860u;  // (from the original)
            *gptr<u32>(r5_1) = u32(*gptr<u32>(r1_1));
            r1_2 = u32(*gptr<u16>(r0_2));
            *gptr<u16>(r5_1 + 4u) = u16(r1_2);
            *gptr<u16>(r5_1 + 6u) = u16(u32(*gptr<u16>(r0_2 + 2u)));
            guest::cpu()->r[13] += 0x10u;  // (from the original)
            return call_001357ec(r0, r1_2, r2_1, guest::cpu()->r[3]);
        }
        call_001357ec(r0, r1_1, r2_1, guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
    }
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    return call_006256d0(r5_1, r1, r2, guest::cpu()->r[3]);
}

}  // namespace d_00622be8
GUEST_EXPORT(0x00622be8, d_00622be8::f_00622be8);

// f_00622c5c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00622c5c {

struct __attribute__((packed)) Object_00622c5c_0 {
    u8 unknown_0[0xc];  // (not used here)
    u32 word_c;
};
GUEST_OFFSET(Object_00622c5c_0, word_c, 0xc);  // (from the original)

inline constexpr guest::Function<0x002f76ad, u32(u32, u32, u32, u32)> call_002f76ac;  // (from the original)

u32 f_00622c5c(gptr<Object_00622c5c_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r1 = 0;
    u32 r2 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r0_1 = 0;
    u32 r6_1 = 0;
    u32 r0_2 = 0;
    u32 r3_1 = 0;
    u32 r2_1 = 0;
    u32 r12_1 = 0;
    u32 res_1 = 0;
    u32 r1_1 = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r4 = r0;
    r0_1 = arg0->word_c;
    r5 = 0u;
    if (r0_1 == 0 || r0_1 >> 0x1f != (r0_1 & (r0_1 ^ r0_1)) >> 0x1f) {  // (from the original)
        goto L_622cb4;
    }
    do {
L_622c74:;
        r6_1 = *gptr<u32>(*gptr<u32>(r4 + 0x14u) + (r5 << 2));  // (from the original)
        r0_2 = r6_1 + 4u;
        call_002f76ac(r0_2, 0x62573cu, 4u, 0x20u);  // (from the original)
        r5 = r5 + 1u;
        *gptr<u32>(r6_1) = u32(*gptr<u32>(r4 + 0x18u));  // (from the original)
        *gptr<u32>(r4 + 0x18u) = u32(r6_1);  // (from the original)
        guest::preempt();
    } while (s32(*gptr<u32>(r4 + 0xcu)) > s32(r5));  // (from the original)
L_622cb4:;
    r0 = 0u;
    r2 = r0;
    r1 = r0;
    *gptr<u32>(r4 + 0xcu) = u32(r0);  // (from the original)
    do {
L_622cc4:;
        r3_1 = r4 + (r2 << 2);
        r2_1 = r2 + 1u;
        r12_1 = r4 + (r2_1 << 2) + 0x4000u;  // (from the original)
        r1 = r1 + 2u;
        *gptr<u32>(r3_1 + 0x4024u) = u32(r0);  // (from the original)
        res_1 = r1 - 0x20u;  // (from the original)
        r2 = r2_1 + 1u;
        *gptr<u32>(r12_1 + 0x24u) = u32(r0);  // (from the original)
        guest::preempt();
    } while (res_1 >> 0x1f != ((r1 ^ 0x20u) & (r1 ^ res_1)) >> 0x1f);  // (from the original)
    r1_1 = r4 + 0x4000u;  // (from the original)
    *gptr<u8>(r1_1 + 0x2abu) = u8(r0);  // (from the original)
    *gptr<u8>(r1_1 + 0x2aau) = u8(r0);  // (from the original)
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1_1;
    return r0;
}

}  // namespace d_00622c5c
GUEST_EXPORT(0x00622c5c, d_00622c5c::f_00622c5c);

// f_00622d04: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00622d04 {

struct __attribute__((packed)) Object_00622d04_0 {
    u32 word_0;
};
GUEST_OFFSET(Object_00622d04_0, word_0, 0x0);  // (from the original)

inline constexpr guest::Function<0x0012f154, u32(u32, u32, u32, u32)> call_0012f154;  // (from the original)
inline constexpr guest::Function<0x00301d0d, u32(u32, u32, u32, u32)> call_00301d0c;  // (from the original)
inline constexpr guest::Function<0x003052f0, u32(u32, u32, u32, u32)> call_003052f0;  // (from the original)
inline constexpr guest::Function<0x00540c1c, u32(u32, u32, u32, u32)> call_00540c1c;  // (from the original)
inline constexpr guest::Function<0x00624d48, u32(u32, u32, u32, u32)> call_00624d48;  // (from the original)
inline constexpr guest::Function<0x00625720, u32(u32, u32, u32, u32)> call_00625720;  // (from the original)

u32 f_00622d04(gptr<Object_00622d04_0> arg0, u32 r1, u32 r2, u32 r3) {
    u32 r0 = arg0.addr();
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r12 = 0;
    u32 r13 = guest::cpu()->r[13];
    u32 r3_1 = 0;
    u32 ea_1 = 0;
    u32 res_1 = 0;
    u32 res_2 = 0;
    u32 r3_2 = 0;
    u32 r2_1 = 0;
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r1_1 = 0;
    u32 r2_2 = 0;
    u32 r3_3 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r0_5 = 0;
    u32 r0_6 = 0;
    u32 r0_7 = 0;
    u32 r0_8 = 0;
    u32 r0_9 = 0;
    u32 r1_2 = 0;
    u32 r0_10 = 0;
    u32 r0_11 = 0;
    u32 r1_3 = 0;
    u32 r0_12 = 0;
    r13 = r13 - 0x18;  // (from the original)
    r7 = 0u;
    arg0->word_0 = u32(r7);
    guest::cpu()->r[13] = r13;
    call_0012f154(r0, r1, r2, r3);
    r3_1 = guest::cpu()->r[3];
    ea_1 = r0 + 0xcu;  // (from the original)
    *gptr<u32>(ea_1) = u32(r7);
    r4 = ea_1;
    res_1 = r4 + 0x14u;  // (from the original)
    r2 = res_1;
    *gptr<u32>(r4 + 4u) = u32(r7);
    *gptr<u32>(r4 + 8u) = u32(r7);
    *gptr<u32>(r4 + 0xcu) = u32(r7);  // (from the original)
    r1 = 0x64u;  // (from the original)
    *gptr<u32>(r4 + 0x10u) = u32(r7);  // (from the original)
    if (res_1 == 0) {
        goto L_622d88;
    }
    r12 = 0x23u;  // (from the original)
    r3 = 0u;
    r5 = 0x63u;  // (from the original)
    *gptr<u32>(r4 + 0xcu) = u32(r2);  // (from the original)
    do {
L_622d48:;
        res_2 = r5 - 1u;
        r5 = res_2;
        *gptr<u32>(r2 + (r3 << 2)) = u32(r2 + (r12 + r3 << 2));
        r3 = r3 + r12;
        guest::preempt();
    } while (res_2 != 0);
    r3_2 = r12 * (r1 - 1u);
    *gptr<u32>(r2 + (r3_2 << 2)) = u32(r7);
    *gptr<u32>(r4 + 0x10u) = u32(r2);  // (from the original)
    r2_1 = r2 + r1 * 0x8cu;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_00540c1c(r4, r1, r2_1, r3_2);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
L_622d88:;
    r0_1 = r4 + 0x3854u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_2 = call_00624d48(r0_1, r1, r2, r3_1);
    r1_1 = guest::cpu()->r[1];
    r2_2 = guest::cpu()->r[2];
    r3_3 = guest::cpu()->r[3];
    r0_3 = r0_2 + 0x80u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_4 = call_00625720(r0_3, r1_1, r2_2, r3_3);
    r0_5 = r0_4 + 4u;
    guest::cpu()->r[13] = r13;
    r0_6 = call_00301d0c(r0_5, 0x51b100u, 0xcu, 0x20u);  // (from the original)
    r0_7 = r0_6 + 0x180u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_8 = call_00301d0c(r0_7, 0x1b4b7cu, 0x2eu, 0x20u);  // (from the original)
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r5 = r0_8 - 0x3a64u;  // (from the original)
    r6 = r5 + 0x4000u;  // (from the original)
    *gptr<u32>(r0_8 + 0x840u) = u32(r7);  // (from the original)
    *gptr<u8>(r6 + 0x2a8u) = u8(r7);  // (from the original)
    *gptr<u8>(r6 + 0x2a9u) = u8(4u);  // (from the original)
    *gptr<u8>(r6 + 0x2aau) = u8(r7);  // (from the original)
    r4 = 0u;
    *gptr<u8>(r6 + 0x2abu) = u8(r7);  // (from the original)
    do {
L_622df0:;
        r0_9 = r5 + (r4 + (r4 << 1) << 2);
        r1_2 = r0_9 + 0x38e4u;  // (from the original)
        r0_10 = r0_9 + 0x38e8u;  // (from the original)
        *gptr<u32>(r1_2) = u32(r7);
        *gptr<u32>(r0_10) = u32(r7);
        *gptr<u32>(r0_10 + 4u) = u32(r7);
        r0_11 = r5 + ((r4 << 3) - r4 + (r4 << 4) << 1) + 0x3a64u;  // (from the original)
        guest::cpu()->r[13] = r13;
        call_003052f0(r0_11, r1_2, r2, r3);
        r1_3 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r0_12 = r5 + (r4 << 2) + 0x4000u;  // (from the original)
        r4 = r4 + 1u;
        *gptr<u32>(r0_12 + 0x24u) = u32(r7);  // (from the original)
        guest::preempt();
    } while (r4 < 0x20u);  // (from the original)
    *gptr<u16>(r6 + 0xa4u) = u16(r7);  // (from the original)
    r13 = r13 + 0x18;  // (from the original)
    guest::cpu()->r[1] = r1_3;
    guest::cpu()->r[13] = r13;
    return r5;
}

}  // namespace d_00622d04
GUEST_EXPORT(0x00622d04, d_00622d04::f_00622d04);

// f_00622e70: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00622e70 {

struct __attribute__((packed)) Object_00622e70_0 {
    u8 unknown_0[0x5];  // (not used here)
    u8 byte_5;
};
GUEST_OFFSET(Object_00622e70_0, byte_5, 0x5);  // (from the original)

inline guest::global<u16, 0x00953600> global_00953600;  // (from the original)
inline constexpr guest::Function<0x0050d3f0, u32(u32, u32, u32, u32)> call_0050d3f0;  // (from the original)
inline constexpr guest::Function<0x0050d420, u32(u32, u32, u32, u32)> call_0050d420;  // (from the original)
inline constexpr guest::Function<0x00746f8c, u32(u32, u32, u32, u32)> call_00746f8c;  // (from the original)

u32 f_00622e70(gptr<Object_00622e70_0> arg0, u32 r1, u32 r2, u32 r3) {
    u32 r0 = arg0.addr();
    u32 r4 = guest::cpu()->r[4];
    u32 r6 = guest::cpu()->r[6];
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r0_1 = 0;
    u32 r5_1 = 0;
    u32 res_1 = 0;
    u32 r0_2 = 0;
    u32 res_2 = 0;
    u32 r1_1 = 0;
    u32 r2_2 = 0;
    u32 r5_2 = 0;
    u32 r12_1 = 0;
    u32 res_3 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r0_5 = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r4 = r0;
    r6 = 0u;
    if (u32(arg0->byte_5) == 0) {
        goto L_622ee4;
    }
L_622e88:;
    r0 = call_00746f8c(0xa22020u, r1, r2, r3);  // (from the original)
    r1 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    if (r0 != 0) {
        *gptr<u8>(r4 + 5u) = u8(r6);
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r0_1 = u32(*gptr<u8>(r4 + 5u));
    r5_1 = r0_1 & 0x7fu;  // (from the original)
    res_1 = (r0_1 & 0x80u) >> 7;  // (from the original)
    r0_2 = u32(*gptr<u8>(r4 + 6u));
    if (res_1 == 0) {
        goto L_622f68;
    }
    res_2 = r0_2 & ~r5_1;
    r0 = res_2;
    if (res_2 != 0) {
        *gptr<u8>(r4 + 6u) = u8(r0);
        *gptr<u8>(r4 + 5u) = u8(r6);
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r1_1 = 0u;
    r2_2 = r1_1;
    if ((r5_1 & 1u) == 0) {
        goto L_622f38;
    }
    r1_1 = 1u;
    r2_2 = u32(*global_00953600);
    goto L_622f40;
L_622ee4:;
    r0 = u32(*gptr<u8>(r4));
    if (r0 == 0) {
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        guest::cpu()->r[1] = r1;
        return r0;
    }
    *gptr<u8>(r4 + 5u) = u8(r0);
    r2 = r4;
    r3 = 0u;
    r0 = r4;
    r1 = 2u;
    do {
L_622f04:;
        r5_2 = u32(*gptr<u8>(r0 + 1u));
        r12_1 = u32(*gptr<u8>(r0 + 2u));
        res_3 = r1 - 1u;
        r1 = res_3;
        *gptr<u8>(r0) = u8(r5_2);
        *gptr<u8>(r0 + 1u) = u8(r12_1);
        r0 = r0 + 2u;
        guest::preempt();
    } while (res_3 != 0);
    *gptr<u8>(4u - r3 + r2) = u8(r6);
    r0 = u32(*gptr<u8>(r4 + 5u));
    if (r0 == 0) {
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        guest::cpu()->r[1] = r1;
        return r0;
    }
    guest::preempt();
    goto L_622e88;
L_622f38:;
L_622f40:;
    r0 = call_0050d3f0(0xa22020u, r1_1, r2_2, r3_1);  // (from the original)
    r1 = guest::cpu()->r[1];
    if (r0 == 0) {
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r0_3 = u32(*gptr<u8>(r4 + 6u));
    *gptr<u8>(r4 + 5u) = u8(r6);
    r0 = r0_3 & ~r5_1;
    *gptr<u8>(r4 + 6u) = u8(r0);
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
L_622f68:;
    if (r0_2 == 0) {
        r0 = call_0050d420(0xa22020u, r1, r2_1, r3_1);  // (from the original)
        r1 = guest::cpu()->r[1];
        if (r0 == 0) {
            guest::cpu()->r[13] += 0x10u;  // (from the original)
            guest::cpu()->r[1] = r1;
            return r0;
        }
    }
    r0_4 = u32(*gptr<u8>(r4 + 6u));
    *gptr<u8>(r4 + 5u) = u8(r6);
    r0_5 = r0_4 | r5_1;
    *gptr<u8>(r4 + 6u) = u8(r0_5);
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0_5;
}

}  // namespace d_00622e70
GUEST_EXPORT(0x00622e70, d_00622e70::f_00622e70);

// f_00622fa0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00622fa0 {

inline constexpr guest::Function<0x0062302c, u32(u32, u32, u32, u32)> call_0062302c;  // (from the original)
inline constexpr guest::Function<0x00746f10, u32(u32, u32, u32, u32)> call_00746f10;  // (from the original)

u32 f_00622fa0(u32 r0, u32 r1) {
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r1_2 = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r0_1 = call_00746f10(0xa22020u, 0u, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    r1_1 = guest::cpu()->r[1];
    if (r0_1 != 0) {
        r1_2 = lsl_r(1u, r1 & 0xff) & 0xffu | 0x80u;  // (from the original)
        call_0062302c(r0, r1_2, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1_1 = guest::cpu()->r[1];
        r0_1 = 1u;
    }
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1_1;
    return r0_1;
}

}  // namespace d_00622fa0
GUEST_EXPORT(0x00622fa0, d_00622fa0::f_00622fa0);

// f_00622fe4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00622fe4 {

inline constexpr guest::Function<0x0062302c, u32(u32, u32, u32, u32)> call_0062302c;  // (from the original)
inline constexpr guest::Function<0x00746f10, u32(u32, u32, u32, u32)> call_00746f10;  // (from the original)

u32 f_00622fe4(u32 r0, u32 r1) {
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 res_1 = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r0_1 = call_00746f10(0xa22020u, 0u, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    r1_1 = guest::cpu()->r[1];
    if (r0_1 == 0) {
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        guest::cpu()->r[1] = r1_1;
        return r0_1;
    }
    r1_1 = lsl_r(1u, r1 & 0xff) & 0xffu;  // (from the original)
    res_1 = r1_1 & 0x1fu;  // (from the original)
    r0_1 = res_1;
    if (res_1 == 0) {
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        guest::cpu()->r[1] = r1_1;
        return r0_1;
    }
    call_0062302c(r0, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_1 = guest::cpu()->r[1];
    r0_1 = 1u;
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1_1;
    return r0_1;
}

}  // namespace d_00622fe4
GUEST_EXPORT(0x00622fe4, d_00622fe4::f_00622fe4);

// f_0062302c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0062302c {


u32 f_0062302c(u32 r0, u32 r1) {
    u32 r2 = 0;
    u32 r3 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r6 = guest::cpu()->r[6];
    u32 r12 = 0;
    u32 r13 = guest::cpu()->r[13];
    u32 res_1 = 0;
    u32 r4_1 = 0;
    u32 res_2 = 0;
    u32 res_3 = 0;
    u32 r2_1 = 0;
    u32 ea_1 = 0;
    u32 ea_2 = 0;
    r13 = r13 - 0xc;  // (from the original)
    if ((r1 & 0x1fu) == 0) {  // (from the original)
        r13 = r13 + 0xc;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return 0u;
    }
    r4 = r1 & 0x7fu;  // (from the original)
    r6 = (r1 & 0x80u) >> 7;  // (from the original)
    r3 = r0 + 4u;
    r2 = 4u;
    r12 = 0u;
L_623050:;
    if (r4 != (u32(*gptr<u8>(r3)) & 0x7fu)) {  // (from the original)
        goto L_6230d4;
    }
    if (r6 == (u32(*gptr<u8>(r3)) & 0x80u) >> 7) {  // (from the original)
        r13 = r13 + 0xc;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return 1u;
    }
    if (r2 >= 5u) {
        goto L_6230e4;
    }
    r3 = r0 + r2;
    r2 = 4u - r2;
    if (r2 == 0 || r2 >> 0x1f != (r2 & (r2 ^ r2)) >> 0x1f) {  // (from the original)
        goto L_6230cc;
    }
    r0 = r3;
    if ((r2 & 1u) != 0) {
        *gptr<u8>(r0) = u8(u32(*gptr<u8>(r0 + 1u)));
        r0 = r3 + 1u;
    }
    res_1 = u32(s32(r2) >> 1);
    r1 = res_1;
    if (res_1 == 0) {
        goto L_6230c8;
    }
    do {
L_6230ac:;
        r4_1 = u32(*gptr<u8>(r0 + 2u));
        res_2 = r1 - 1u;
        r1 = res_2;
        *gptr<u8>(r0) = u8(u32(*gptr<u8>(r0 + 1u)));
        *gptr<u8>(r0 + 1u) = u8(r4_1);
        r0 = r0 + 2u;
        guest::preempt();
    } while (res_2 != 0);
L_6230c8:;
    r3 = r3 + r2;
L_6230cc:;
    *gptr<u8>(r3) = u8(r12);
    r13 = r13 + 0xc;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return 1u;
L_6230d4:;
    r2 = r2 - 1u;
    res_3 = r2 + 1u;
    r3 = r3 - 1u;
    if (res_3 != 0 && res_3 >> 0x1f == ((r2 ^ res_3) & (1u ^ res_3)) >> 0x1f) {  // (from the original)
        guest::preempt();
        goto L_623050;
    }
L_6230e4:;
    if (u32(*gptr<u8>(r0 + 5u)) != r1) {
        goto L_6230fc;
    }
    r13 = r13 + 0xc;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return 1u;
L_6230fc:;
    if (u32(*gptr<u8>(r0)) == 0) {
        goto L_623158;
    }
    r2_1 = r0 + 1u;
    if (u32(*gptr<u8>(r0 + 1u)) == 0) {
        r12 = 1u;
        goto L_623158;
    }
    ea_1 = r2_1 + 1u;
    if (u32(*gptr<u8>(ea_1)) == 0) {
        r12 = 2u;
        goto L_623158;
    }
    ea_2 = ea_1 + 1u;
    if (u32(*gptr<u8>(ea_2)) == 0) {
        r12 = 3u;
        goto L_623158;
    }
    if (u32(*gptr<u8>(ea_2 + 1u)) == 0) {
        r12 = 4u;
        goto L_623158;
    }
    r13 = r13 + 0xc;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return 0u;
L_623158:;
    *gptr<u8>(r0 + r12) = u8(r1);
    r13 = r13 + 0xc;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return 1u;
}

}  // namespace d_0062302c
GUEST_EXPORT(0x0062302c, d_0062302c::f_0062302c);

// f_00623168: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00623168 {

inline constexpr guest::Function<0x0077955c, u32(u32, u32, u32, u32)> call_0077955c;  // (from the original)

u32 f_00623168(u32 r0) {
    guest::cpu()->r[13] -= 8u;
    call_0077955c(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    *gptr<u8>(r0 + 5u) = u8(0u);
    *gptr<u8>(r0 + 6u) = u8(0u);
    guest::cpu()->r[13] += 8u;
    return 0u;
}

}  // namespace d_00623168
GUEST_EXPORT(0x00623168, d_00623168::f_00623168);

// f_006235cc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006235cc {

struct __attribute__((packed)) Object_006235cc_0 {
    u8 byte_0;
    u8 byte_1;
};
GUEST_OFFSET(Object_006235cc_0, byte_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_006235cc_0, byte_1, 0x1);  // (from the original)

inline guest::global<u32, 0x0095362c> global_0095362c;  // (from the original)
inline constexpr guest::Function<0x00624b24, u32(u32, u32, u32, u32)> call_00624b24;  // (from the original)

u32 f_006235cc(gptr<Object_006235cc_0> arg0, u32 r1, u32 r2_unused, u32 r3) {
    u32 r0 = arg0.addr();
    u32 r13 = guest::cpu()->r[13];
    u32 r5_1 = 0;
    u32 r6_1 = 0;
    u32 r0_1 = 0;
    u32 r3_1 = 0;
    u32 r4_1 = 0;
    u32 r0_2 = 0;
    *gptr<u32>(r13 + 0xffffffe8u) = u32(r3);  // (from the original)
    r13 = r13 - 0x18;  // (from the original)
    r5_1 = 1u;
    if (u32(arg0->byte_0) == 6u) {
        r6_1 = u32(arg0->byte_1);
        *gptr<u16>(r13) = u16(u32(*gptr<u16>(*global_0095362c + 0x1326eu)));  // (from the original)
        r0_1 = r13;
        guest::cpu()->r[13] = r13;
        call_00624b24(r0_1, r6_1, guest::cpu()->r[2], r3);
        r3_1 = guest::cpu()->r[3];
        r4_1 = u32(*gptr<u8>(r0 + 1u));
        if (1u == 0) {
            r5_1 = 0u;
        }
        *gptr<u16>(r13) = u16(u32(*gptr<u16>(*global_0095362c + 0x1326eu)));  // (from the original)
        r0_2 = r13;
        guest::cpu()->r[13] = r13;
        call_00624b24(r0_2, r4_1, guest::cpu()->r[2], r3_1);
        r1 = r13;
        if (1u == 0) {
            r5_1 = 0u;
        }
    }
    r13 = r13 + 0x18;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r5_1;
}

}  // namespace d_006235cc
GUEST_EXPORT(0x006235cc, d_006235cc::f_006235cc);

// f_006237ec: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006237ec {

struct __attribute__((packed)) Object_006237ec_0 {
    u8 byte_0;
    u8 byte_1;
};
GUEST_OFFSET(Object_006237ec_0, byte_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_006237ec_0, byte_1, 0x1);  // (from the original)

inline guest::global<u32, 0x0095362c> global_0095362c;  // (from the original)
inline constexpr guest::Function<0x00621684, u32(u32, u32, u32, u32)> call_00621684;  // (from the original)
inline constexpr guest::Function<0x00624b24, u32(u32, u32, u32, u32)> call_00624b24;  // (from the original)

u32 f_006237ec(gptr<Object_006237ec_0> arg0, u32 r1, u32 r2_unused, u32 r3) {
    u32 r0 = arg0.addr();
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r3_1 = 0;
    u32 r5_1 = 0;
    u32 r0_4 = 0;
    *gptr<u32>(r13 + 0xffffffe8u) = u32(r3);  // (from the original)
    r13 = r13 - 0x18;  // (from the original)
    r0_1 = u32(arg0->byte_0);
    if (r0_1 == 0xau) {  // (from the original)
        r1_1 = u32(arg0->byte_1);
        r0_2 = *global_0095362c;
        *gptr<u8>(r0_2 + 0x3cu) = u8(r1_1);  // (from the original)
        r0_3 = r0_2 + 0x1c0u;  // (from the original)
        guest::cpu()->r[13] = r13;
        call_00621684(r0_3, r1_1, guest::cpu()->r[2], r3);
        r3_1 = guest::cpu()->r[3];
        r5_1 = u32(*gptr<u8>(r0 + 1u));
        *gptr<u16>(r13) = u16(u32(*gptr<u16>(*global_0095362c + 0x1326eu)));  // (from the original)
        r0_4 = r13;
        guest::cpu()->r[13] = r13;
        call_00624b24(r0_4, r5_1, guest::cpu()->r[2], r3_1);
        r1 = r13;
        r0_1 = 0xbu;  // (from the original)
        *gptr<u8>(r0) = u8(r0_1);
    }
    r13 = r13 + 0x18;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0_1;
}

}  // namespace d_006237ec
GUEST_EXPORT(0x006237ec, d_006237ec::f_006237ec);

// f_006238d0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006238d0 {

inline guest::global<u32, 0x0095362c> global_0095362c;  // (from the original)
inline constexpr guest::Function<0x00624b24, u32(u32, u32, u32, u32)> call_00624b24;  // (from the original)
inline constexpr guest::Function<0x00626bd8, u32(u32, u32, u32, u32)> call_00626bd8;  // (from the original)

u32 f_006238d0(u32 r0_unused, u32 r1, u32 r2_unused, u32 r3) {
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 r3_1 = 0;
    u32 r1_1 = 0;
    u32 r0_2 = 0;
    u32 r1_2 = 0;
    *gptr<u32>(r13 + 0xfffffff0u) = u32(r3);  // (from the original)
    r13 = r13 - 0x10;  // (from the original)
    *gptr<u16>(r13) = u16(u32(*gptr<u16>(*global_0095362c + 0x1326eu)));  // (from the original)
    r0_1 = r13;
    guest::cpu()->r[13] = r13;
    call_00624b24(r0_1, r1, guest::cpu()->r[2], r3);
    r3_1 = guest::cpu()->r[3];
    r1_1 = r13;
    guest::cpu()->r[13] = r13;
    r0_2 = call_00626bd8(r1, r1_1, guest::cpu()->r[2], r3_1);
    r1_2 = guest::cpu()->r[1];
    r13 = r13 + 0x10;  // (from the original)
    guest::cpu()->r[1] = r1_2;
    guest::cpu()->r[13] = r13;
    return r0_2;
}

}  // namespace d_006238d0
GUEST_EXPORT(0x006238d0, d_006238d0::f_006238d0);

// f_00623948: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00623948 {

inline guest::global<u32, 0x0095362c> global_0095362c;  // (from the original)
inline constexpr guest::Function<0x00624b24, u32(u32, u32, u32, u32)> call_00624b24;  // (from the original)
inline constexpr guest::Function<0x00626c2c, u32(u32, u32, u32, u32)> call_00626c2c;  // (from the original)

u32 f_00623948(u32 r0_unused, u32 r1, u32 r2_unused, u32 r3) {
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 r3_1 = 0;
    u32 r1_1 = 0;
    u32 r0_2 = 0;
    u32 r1_2 = 0;
    *gptr<u32>(r13 + 0xfffffff0u) = u32(r3);  // (from the original)
    r13 = r13 - 0x10;  // (from the original)
    *gptr<u16>(r13) = u16(u32(*gptr<u16>(*global_0095362c + 0x1326eu)));  // (from the original)
    r0_1 = r13;
    guest::cpu()->r[13] = r13;
    call_00624b24(r0_1, r1, guest::cpu()->r[2], r3);
    r3_1 = guest::cpu()->r[3];
    r1_1 = r13;
    guest::cpu()->r[13] = r13;
    r0_2 = call_00626c2c(r1, r1_1, guest::cpu()->r[2], r3_1);
    r1_2 = guest::cpu()->r[1];
    r13 = r13 + 0x10;  // (from the original)
    guest::cpu()->r[1] = r1_2;
    guest::cpu()->r[13] = r13;
    return r0_2;
}

}  // namespace d_00623948
GUEST_EXPORT(0x00623948, d_00623948::f_00623948);

// f_006239fc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006239fc {

struct __attribute__((packed)) Object_006239fc_0 {
    u8 byte_0;
    u8 byte_1;
};
GUEST_OFFSET(Object_006239fc_0, byte_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_006239fc_0, byte_1, 0x1);  // (from the original)

inline constexpr guest::Function<0x00624c68, u32(u32, u32, u32, u32)> call_00624c68;  // (from the original)

u32 f_006239fc(gptr<Object_006239fc_0> arg0, u32 r1, u32 r2) {
    u32 r0 = arg0.addr();
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r0_2 = 0;
    u32 r1_2 = 0;
    u32 r2_2 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r1_3 = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    arg0->byte_1 = u8(4u);
    r0_1 = r0 + 8u;
    arg0->byte_0 = u8(0u);
    call_00624c68(r0_1, r1, r2, guest::cpu()->r[3]);
    r1_1 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    r0_2 = r0 + 0x10u;  // (from the original)
    call_00624c68(r0_2, r1_1, r2_1, guest::cpu()->r[3]);
    r1_2 = guest::cpu()->r[1];
    r2_2 = guest::cpu()->r[2];
    r0_3 = r0 + 0x18u;  // (from the original)
    call_00624c68(r0_3, r1_2, r2_2, guest::cpu()->r[3]);
    r0_4 = r0 + 0x253cu;  // (from the original)
    r1_3 = r0 + 0x253du;  // (from the original)
    *gptr<u8>(r0_4) = u8(0u);
    *gptr<u8>(r1_3) = u8(0u);
    *gptr<u8>(r0 + 0x253eu) = u8(0u);  // (from the original)
    *gptr<u8>(r0 + 0x253fu) = u8(0u);  // (from the original)
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1_3;
    return r0_4;
}

}  // namespace d_006239fc
GUEST_EXPORT(0x006239fc, d_006239fc::f_006239fc);

// f_00623bb4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00623bb4 {

struct __attribute__((packed)) Object_00623bb4_0 {
    u8 byte_0;
    u8 byte_1;
};
GUEST_OFFSET(Object_00623bb4_0, byte_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_00623bb4_0, byte_1, 0x1);  // (from the original)

inline constexpr guest::Function<0x001ae1e4, u32(u32, u32, u32, u32)> call_001ae1e4;  // (from the original)
inline constexpr guest::Function<0x00624c90, u32(u32, u32, u32, u32)> call_00624c90;  // (from the original)

u32 f_00623bb4(gptr<Object_00623bb4_0> arg0, u32 r1_unused, u32 r2, u32 r3) {
    u32 r0 = arg0.addr();
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r1_2 = 0;
    u32 r2_2 = 0;
    u32 r3_2 = 0;
    u32 r0_5 = 0;
    u32 r0_6 = 0;
    u32 r1_3 = 0;
    u32 r2_3 = 0;
    u32 r3_3 = 0;
    u32 r0_7 = 0;
    u32 r0_8 = 0;
    u32 r0_9 = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    arg0->byte_0 = u8(0u);
    arg0->byte_1 = u8(4u);
    r0_1 = r0 + 8u;
    r0_2 = call_00624c90(r0_1, 4u, r2, r3);
    r1_1 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    *gptr<u32>(r0_2 - 4u) = u32(0x90ac18u);  // (from the original)
    r0_3 = r0_2 + 8u;
    r0_4 = call_00624c90(r0_3, r1_1, r2_1, r3_1);
    r1_2 = guest::cpu()->r[1];
    r2_2 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    *gptr<u32>(r0_4 - 4u) = u32(0x90ac18u);  // (from the original)
    r0_5 = r0_4 + 8u;
    r0_6 = call_00624c90(r0_5, r1_2, r2_2, r3_2);
    r1_3 = guest::cpu()->r[1];
    r2_3 = guest::cpu()->r[2];
    r3_3 = guest::cpu()->r[3];
    *gptr<u32>(r0_6 - 4u) = u32(0x90ac18u);  // (from the original)
    r0_7 = r0_6 + 4u;
    r0_8 = call_001ae1e4(r0_7, r1_3, r2_3, r3_3);
    r0_9 = r0_8 - 0x1cu;  // (from the original)
    *gptr<u8>(0x253cu + r0_9) = u8(0u);  // (from the original)
    *gptr<u8>((0x253cu | u32(s32(0x253cu) >> 5)) + r0_9) = u8(0u);  // (from the original)
    *gptr<u8>((0x253cu | u32(s32(0x253cu) >> 9)) + r0_9) = u8(0u);  // (from the original)
    *gptr<u8>(0x253cu + 3u + r0_9) = u8(0u);  // (from the original)
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = 0x253cu;  // (from the original)
    return r0_9;
}

}  // namespace d_00623bb4
GUEST_EXPORT(0x00623bb4, d_00623bb4::f_00623bb4);

// f_00623c28: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00623c28 {

inline constexpr guest::Function<0x00100b80, u32(u32, u32, u32, u32)> call_00100b80;  // (from the original)

u32 f_00623c28(u32 r0) {
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    r0_1 = r0 + 0x1cu;  // (from the original)
    guest::cpu()->r[13] -= 8u;
    r0_2 = call_00100b80(r0_1, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    r0_3 = r0_2 - 0x1cu;  // (from the original)
    guest::cpu()->r[13] += 8u;
    return r0_3;
}

}  // namespace d_00623c28
GUEST_EXPORT(0x00623c28, d_00623c28::f_00623c28);

// f_00623c3c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00623c3c {

inline guest::global<u32, 0x0095362c> global_0095362c;  // (from the original)
inline constexpr guest::Function<0x00135740, u32(u32, u32, u32, u32)> call_00135740;  // (from the original)
inline constexpr guest::Function<0x00137e84, u32(u32, u32, u32, u32)> call_00137e84;  // (from the original)

u32 f_00623c3c(u32 r0, u32 r1) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r13 = guest::cpu()->r[13];
    u32 r14 = guest::cpu()->r[14];
    u32 ea_1 = 0;
    u32 r2_1 = 0;
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r2_2 = 0;
    u32 ea_2 = 0;
    u32 r4_1 = 0;
    u32 r5_1 = 0;
    u32 r6_1 = 0;
    u32 r7_1 = 0;
    u32 r8_1 = 0;
    if (r1 >= 4u) {
        guest::cpu()->r[4] = r4;
        guest::cpu()->r[5] = r5;
        guest::cpu()->r[6] = r6;
        guest::cpu()->r[7] = r7;
        guest::cpu()->r[8] = r8;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    ea_1 = r13 - 0x18;  // (from the original)
    *gptr<u32>(ea_1) = u32(r4);
    *gptr<u32>(ea_1 + 4) = u32(r5);
    *gptr<u32>(ea_1 + 8) = u32(r6);
    *gptr<u32>(ea_1 + 0xc) = u32(r7);  // (from the original)
    *gptr<u32>(ea_1 + 0x10) = u32(r8);  // (from the original)
    *gptr<u32>(ea_1 + 0x14) = u32(r14);  // (from the original)
    r13 = r13 - 0x18;  // (from the original)
    r2_1 = r0 + (r1 << 2);
    *gptr<u32>(r2_1 + 0x14u) = u32(0u);  // (from the original)
    r0_1 = *global_0095362c + 0x13280u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_00135740(r0_1, r1, r2_1, guest::cpu()->r[3]);
    r1_1 = guest::cpu()->r[1];
    r2_2 = guest::cpu()->r[2];
    *gptr<u8>(r0 + r1 + 0x24u) = u8(0u);  // (from the original)
    ea_2 = r13;
    r13 = r13 + 0x18;  // (from the original)
    r4_1 = *gptr<u32>(ea_2);
    r5_1 = *gptr<u32>(ea_2 + 4);
    r6_1 = *gptr<u32>(ea_2 + 8);
    r7_1 = *gptr<u32>(ea_2 + 0xc);  // (from the original)
    r8_1 = *gptr<u32>(ea_2 + 0x10);  // (from the original)
    r14 = *gptr<u32>(ea_2 + 0x14);  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->r[4] = r4_1;
    guest::cpu()->r[5] = r5_1;
    guest::cpu()->r[6] = r6_1;
    guest::cpu()->r[7] = r7_1;
    guest::cpu()->r[8] = r8_1;
    return call_00137e84(r0_1, r1_1, r2_2, guest::cpu()->r[3]);
}

}  // namespace d_00623c3c
GUEST_EXPORT(0x00623c3c, d_00623c3c::f_00623c3c);

// f_00623c8c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00623c8c {

inline guest::global<u32, 0x0095362c> global_0095362c;  // (from the original)
inline constexpr guest::Function<0x00135740, u32(u32, u32, u32, u32)> call_00135740;  // (from the original)
inline constexpr guest::Function<0x00137e84, u32(u32, u32, u32, u32)> call_00137e84;  // (from the original)

u32 f_00623c8c(u32 r0, u32 r1, u32 r2) {
    u32 r8_1 = 0;
    u32 nf_1 = 0;
    u32 r5_1 = 0;
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r0_2 = 0;
    u32 nf_2 = 0;
    u32 zf_1 = 0;
    guest::cpu()->r[13] -= 0x18u;  // (from the original)
    r8_1 = r0;
    if (r1 < 4u) {
        nf_1 = r2 >> 0x1f;  // (from the original)
        if (nf_1 == 0u) {
            r0 = r2;
        }
        if (nf_1 != 0u) {
            r0 = 0u - r2;
        }
        r5_1 = r0 & 0xffu;  // (from the original)
        r0_1 = *global_0095362c + 0x13280u;  // (from the original)
        call_00135740(r0_1, r1, r2, guest::cpu()->r[3]);
        r1_1 = guest::cpu()->r[1];
        r2_1 = guest::cpu()->r[2];
        r0_2 = r8_1 + r1;
        nf_2 = r2 >> 0x1f;  // (from the original)
        zf_1 = r2 == 0;
        if (!zf_1) {
            r1_1 = u32(*gptr<u8>(r0_2 + 0x24u));  // (from the original)
        }
        if (nf_2 != 0u) {
            r1_1 = r1_1 - r5_1;
        }
        if (!zf_1 && nf_2 == 0u) {
            r1_1 = r1_1 + r5_1;
        }
        if (!zf_1) {
            *gptr<u8>(r0_2 + 0x24u) = u8(r1_1);  // (from the original)
        }
        guest::cpu()->r[13] += 0x18u;  // (from the original)
        return call_00137e84(r0_1, r1_1, r2_1, guest::cpu()->r[3]);
    }
    guest::cpu()->r[13] += 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_00623c8c
GUEST_EXPORT(0x00623c8c, d_00623c8c::f_00623c8c);

// f_00623cfc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00623cfc {


u32 f_00623cfc(u32 r0, u32 r1, u32 r2) {
    u32 r0_1 = 0;
    u32 r3_1 = 0;
    u32 r1_1 = 0;
    r0_1 = 0u;
    if (r1 >= 4u) {
        guest::cpu()->r[1] = r1;
        return r0_1;
    }
    r3_1 = r0 + (r1 << 2);
    r1_1 = *gptr<u32>(r3_1 + 0x14u) + r2;  // (from the original)
    if (0xd002u >= r1_1) {  // (from the original)
        r0_1 = 1u;
        *gptr<u32>(r3_1 + 0x14u) = u32(r1_1);  // (from the original)
    }
    guest::cpu()->r[1] = r1_1;
    return r0_1;
}

}  // namespace d_00623cfc
GUEST_EXPORT(0x00623cfc, d_00623cfc::f_00623cfc);

// f_00623d30: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00623d30 {


u32 f_00623d30(u32 r0, u32 r1) {
    u32 r1_1 = 0;
    if (r1 >= 4u) {
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r1_1 = r0 + (r1 << 2);
    *gptr<u32>(r1_1 + 0x14u) = u32(0u);  // (from the original)
    guest::cpu()->r[1] = r1_1;
    return 0u;
}

}  // namespace d_00623d30
GUEST_EXPORT(0x00623d30, d_00623d30::f_00623d30);

// f_00623d48: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00623d48 {

struct __attribute__((packed)) Object_00623d48_0 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u8 unknown_14[0x14];  // (not used here)
    u8 byte_28;
};
GUEST_OFFSET(Object_00623d48_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_00623d48_0, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_00623d48_0, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Object_00623d48_0, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Object_00623d48_0, word_10, 0x10);  // (from the original)
GUEST_OFFSET(Object_00623d48_0, byte_28, 0x28);  // (from the original)


void f_00623d48(gptr<Object_00623d48_0> arg0, u32 r1) {
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r3_2 = 0;
    u32 r3_3 = 0;
    u32 zf_1 = 0;
    u32 r1_1 = 0;
    if (u32(arg0->byte_28) != 0) {
        guest::cpu()->r[1] = r1;
        return;
    }
    if (r1 >= 4u) {
        guest::cpu()->r[1] = r1;
        return;
    }
    r2_1 = arg0->word_0;
    if (r2_1 == 0) {
        guest::cpu()->r[1] = r1;
        return;
    }
    r3_1 = 0u;
    if (r1 != 0) {
        r3_1 = r2_1;
        r2_1 = r2_1 + 0xd002u;  // (from the original)
    }
    arg0->word_4 = u32(r3_1);
    r3_2 = 0u;
    if (r1 != 1u) {
        r3_2 = r2_1;
        r2_1 = r2_1 + 0xd002u;  // (from the original)
    }
    arg0->word_8 = u32(r3_2);
    r3_3 = 0u;
    if (r1 != 2u) {
        r3_3 = r2_1;
        r2_1 = r2_1 + 0xd002u;  // (from the original)
    }
    zf_1 = r1 == 3u;
    r1_1 = 0u;
    if (!zf_1) {
        r1_1 = r2_1;
    }
    arg0->word_c = u32(r3_3);
    arg0->word_10 = u32(r1_1);
    arg0->byte_28 = u8(1u);
    guest::cpu()->r[1] = 1u;
    return;
}

}  // namespace d_00623d48
GUEST_EXPORT(0x00623d48, d_00623d48::f_00623d48);

// f_00623dcc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00623dcc {

struct __attribute__((packed)) Object_00623dcc_0 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
    u32 word_18;
    u32 word_1c;
    u32 word_20;
    u32 word_24;
    u8 byte_28;
};
GUEST_OFFSET(Object_00623dcc_0, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_00623dcc_0, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Object_00623dcc_0, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Object_00623dcc_0, word_10, 0x10);  // (from the original)
GUEST_OFFSET(Object_00623dcc_0, word_14, 0x14);  // (from the original)
GUEST_OFFSET(Object_00623dcc_0, word_18, 0x18);  // (from the original)
GUEST_OFFSET(Object_00623dcc_0, word_1c, 0x1c);  // (from the original)
GUEST_OFFSET(Object_00623dcc_0, word_20, 0x20);  // (from the original)
GUEST_OFFSET(Object_00623dcc_0, word_24, 0x24);  // (from the original)
GUEST_OFFSET(Object_00623dcc_0, byte_28, 0x28);  // (from the original)


void f_00623dcc(gptr<Object_00623dcc_0> arg0) {
    arg0->word_14 = u32(0u);
    arg0->word_18 = u32(0u);
    arg0->word_1c = u32(0u);
    arg0->word_20 = u32(0u);
    arg0->word_4 = u32(0u);
    arg0->word_8 = u32(0u);
    arg0->word_c = u32(0u);
    arg0->word_10 = u32(0u);
    arg0->byte_28 = u8(0u);
    arg0->word_24 = u32(0u);
    guest::cpu()->r[1] = 0u;
    return;
}

}  // namespace d_00623dcc
GUEST_EXPORT(0x00623dcc, d_00623dcc::f_00623dcc);

// f_00623e3c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00623e3c {

struct __attribute__((packed)) Object_00623e3c_0 {
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
    u8 byte_28;
};
GUEST_OFFSET(Object_00623e3c_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_00623e3c_0, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_00623e3c_0, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Object_00623e3c_0, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Object_00623e3c_0, word_10, 0x10);  // (from the original)
GUEST_OFFSET(Object_00623e3c_0, word_14, 0x14);  // (from the original)
GUEST_OFFSET(Object_00623e3c_0, word_18, 0x18);  // (from the original)
GUEST_OFFSET(Object_00623e3c_0, word_1c, 0x1c);  // (from the original)
GUEST_OFFSET(Object_00623e3c_0, word_20, 0x20);  // (from the original)
GUEST_OFFSET(Object_00623e3c_0, word_24, 0x24);  // (from the original)
GUEST_OFFSET(Object_00623e3c_0, byte_28, 0x28);  // (from the original)


void f_00623e3c(gptr<Object_00623e3c_0> arg0) {
    arg0->word_0 = u32(0u);
    arg0->word_14 = u32(0u);
    arg0->word_18 = u32(0u);
    arg0->word_1c = u32(0u);
    arg0->word_20 = u32(0u);
    arg0->word_4 = u32(0u);
    arg0->word_8 = u32(0u);
    arg0->word_c = u32(0u);
    arg0->word_10 = u32(0u);
    arg0->byte_28 = u8(0u);
    arg0->word_24 = u32(0u);
    guest::cpu()->r[1] = 0u;
    return;
}

}  // namespace d_00623e3c
GUEST_EXPORT(0x00623e3c, d_00623e3c::f_00623e3c);

// f_00624038: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00624038 {

inline guest::global<u32, 0x0095362c> global_0095362c;  // (from the original)
inline constexpr guest::Function<0x0075f63c, u32(u32, u32, u32, u32)> call_0075f63c;  // (from the original)

u32 f_00624038(u32 r0, u32 r1) {
    u32 r0_1 = 0;
    r0_1 = *global_0095362c;
    return call_0075f63c(r0_1, r0, r1, guest::cpu()->r[3]);
}

}  // namespace d_00624038
GUEST_EXPORT(0x00624038, d_00624038::f_00624038);

// f_00624600: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00624600 {

struct __attribute__((packed)) Object_00624600_0 {
    u8 byte_0;
};
GUEST_OFFSET(Object_00624600_0, byte_0, 0x0);  // (from the original)

inline guest::global<u32, 0x0095362c> global_0095362c;  // (from the original)

void f_00624600(gptr<Object_00624600_0> arg0) {
    u32 r1_1 = 0;
    u32 r1_2 = 0;
    r1_1 = u32(arg0->byte_0);
    if (r1_1 == 5u) {
        arg0->byte_0 = u8(7u);
        guest::cpu()->r[1] = 7u;
        return;
    }
    if (r1_1 != 6u) {
        guest::cpu()->r[1] = r1_1;
        return;
    }
    r1_2 = *global_0095362c;
    *gptr<u8>(r1_2 + 0x54u) = u8(1u);  // (from the original)
    arg0->byte_0 = u8(9u);
    guest::cpu()->r[1] = r1_2;
    return;
}

}  // namespace d_00624600
GUEST_EXPORT(0x00624600, d_00624600::f_00624600);

// f_0062463c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0062463c {

inline constexpr guest::Function<0x00624c90, u32(u32, u32, u32, u32)> call_00624c90;  // (from the original)
inline constexpr guest::Function<0x00626bd8, u32(u32, u32, u32, u32)> call_00626bd8;  // (from the original)
inline constexpr guest::Function<0x0075e010, u32(u32, u32, u32, u32)> call_0075e010;  // (from the original)

u32 f_0062463c(u32 r0_unused, u32 r1, u32 r2_unused, u32 r3) {
    u32 r4 = guest::cpu()->r[4];
    u32 r6 = guest::cpu()->r[6];
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 r5_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r1_1 = 0;
    u32 r1_2 = 0;
    *gptr<u32>(r13 + 0xffffffe8u) = u32(r3);  // (from the original)
    r13 = r13 - 0x18;  // (from the original)
    r0_1 = r13;
    guest::cpu()->r[13] = r13;
    call_00624c90(r0_1, r1, guest::cpu()->r[2], r3);
    r3 = guest::cpu()->r[3];
    r6 = 0x95362cu;  // (from the original)
    r4 = 0u;
    do {
L_624650:;
        r5_1 = r4 & 0xffu;  // (from the original)
        r0_2 = *gptr<u32>(r6);
        guest::cpu()->r[13] = r13;
        r0_3 = call_0075e010(r0_2, r5_1, guest::cpu()->r[2], r3);
        r1_1 = guest::cpu()->r[1];
        r3 = guest::cpu()->r[3];
        if (!(r0_3 == 0)) {
            r1_2 = r13;
            guest::cpu()->r[13] = r13;
            r0_3 = call_00626bd8(r5_1, r1_2, guest::cpu()->r[2], r3);
            r1_1 = guest::cpu()->r[1];
            r3 = guest::cpu()->r[3];
        }
        r4 = r4 + 1u;
        guest::preempt();
    } while (s32(r4) < s32(4u));
    r13 = r13 + 0x18;  // (from the original)
    guest::cpu()->r[1] = r1_1;
    guest::cpu()->r[13] = r13;
    return r0_3;
}

}  // namespace d_0062463c
GUEST_EXPORT(0x0062463c, d_0062463c::f_0062463c);

// f_0062468c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0062468c {

inline constexpr guest::Function<0x00624c90, u32(u32, u32, u32, u32)> call_00624c90;  // (from the original)
inline constexpr guest::Function<0x0075e010, u32(u32, u32, u32, u32)> call_0075e010;  // (from the original)

u32 f_0062468c(u32 r0_unused, u32 r1, u32 r2_unused, u32 r3) {
    u32 r4 = guest::cpu()->r[4];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 r5_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r1_1 = 0;
    u32 res_1 = 0;
    *gptr<u32>(r13 + 0xffffffe8u) = u32(r3);  // (from the original)
    r13 = r13 - 0x18;  // (from the original)
    r0_1 = r13;
    guest::cpu()->r[13] = r13;
    call_00624c90(r0_1, r1, guest::cpu()->r[2], r3);
    r3 = guest::cpu()->r[3];
    r7 = 0x95362cu;  // (from the original)
    r6 = 1u;
    r4 = 0u;
    do {
L_6246a4:;
        r5_1 = r4 & 0xffu;  // (from the original)
        r0_2 = *gptr<u32>(r7);
        guest::cpu()->r[13] = r13;
        r0_3 = call_0075e010(r0_2, r5_1, guest::cpu()->r[2], r3);
        r1_1 = guest::cpu()->r[1];
        r3 = guest::cpu()->r[3];
        if (!(r0_3 == 0)) {
            r1_1 = r13;
            res_1 = r6 & ~1u;
            if (res_1 != 0) {
                r6 = 0u;
            }
        }
        r4 = r4 + 1u;
        guest::preempt();
    } while (s32(r4) < s32(4u));
    r13 = r13 + 0x18;  // (from the original)
    guest::cpu()->r[1] = r1_1;
    guest::cpu()->r[13] = r13;
    return r6;
}

}  // namespace d_0062468c
GUEST_EXPORT(0x0062468c, d_0062468c::f_0062468c);

// f_006246ec: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006246ec {

inline constexpr guest::Function<0x00624c90, u32(u32, u32, u32, u32)> call_00624c90;  // (from the original)
inline constexpr guest::Function<0x00626c2c, u32(u32, u32, u32, u32)> call_00626c2c;  // (from the original)
inline constexpr guest::Function<0x0075e010, u32(u32, u32, u32, u32)> call_0075e010;  // (from the original)

u32 f_006246ec(u32 r0_unused, u32 r1, u32 r2_unused, u32 r3) {
    u32 r4 = guest::cpu()->r[4];
    u32 r6 = guest::cpu()->r[6];
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 r5_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r1_1 = 0;
    u32 r1_2 = 0;
    *gptr<u32>(r13 + 0xffffffe8u) = u32(r3);  // (from the original)
    r13 = r13 - 0x18;  // (from the original)
    r0_1 = r13;
    guest::cpu()->r[13] = r13;
    call_00624c90(r0_1, r1, guest::cpu()->r[2], r3);
    r3 = guest::cpu()->r[3];
    r6 = 0x95362cu;  // (from the original)
    r4 = 0u;
    do {
L_624700:;
        r5_1 = r4 & 0xffu;  // (from the original)
        r0_2 = *gptr<u32>(r6);
        guest::cpu()->r[13] = r13;
        r0_3 = call_0075e010(r0_2, r5_1, guest::cpu()->r[2], r3);
        r1_1 = guest::cpu()->r[1];
        r3 = guest::cpu()->r[3];
        if (!(r0_3 == 0)) {
            r1_2 = r13;
            guest::cpu()->r[13] = r13;
            r0_3 = call_00626c2c(r5_1, r1_2, guest::cpu()->r[2], r3);
            r1_1 = guest::cpu()->r[1];
            r3 = guest::cpu()->r[3];
        }
        r4 = r4 + 1u;
        guest::preempt();
    } while (s32(r4) < s32(4u));
    r13 = r13 + 0x18;  // (from the original)
    guest::cpu()->r[1] = r1_1;
    guest::cpu()->r[13] = r13;
    return r0_3;
}

}  // namespace d_006246ec
GUEST_EXPORT(0x006246ec, d_006246ec::f_006246ec);

// f_0062473c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0062473c {

inline constexpr guest::Function<0x00624c90, u32(u32, u32, u32, u32)> call_00624c90;  // (from the original)
inline constexpr guest::Function<0x0075e010, u32(u32, u32, u32, u32)> call_0075e010;  // (from the original)

u32 f_0062473c(u32 r0_unused, u32 r1, u32 r2_unused, u32 r3) {
    u32 r4 = guest::cpu()->r[4];
    u32 r6 = guest::cpu()->r[6];
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 r5_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r1_1 = 0;
    *gptr<u32>(r13 + 0xffffffe8u) = u32(r3);  // (from the original)
    r13 = r13 - 0x18;  // (from the original)
    r0_1 = r13;
    guest::cpu()->r[13] = r13;
    call_00624c90(r0_1, r1, guest::cpu()->r[2], r3);
    r3 = guest::cpu()->r[3];
    r6 = 0x95362cu;  // (from the original)
    r4 = 0u;
    do {
L_624750:;
        r5_1 = r4 & 0xffu;  // (from the original)
        r0_2 = *gptr<u32>(r6);
        guest::cpu()->r[13] = r13;
        r0_3 = call_0075e010(r0_2, r5_1, guest::cpu()->r[2], r3);
        r1_1 = guest::cpu()->r[1];
        r3 = guest::cpu()->r[3];
        if (!(r0_3 == 0)) {
            r1_1 = r13;
            r0_3 = r5_1;
        }
        r4 = r4 + 1u;
        guest::preempt();
    } while (s32(r4) < s32(4u));
    r13 = r13 + 0x18;  // (from the original)
    guest::cpu()->r[1] = r1_1;
    guest::cpu()->r[13] = r13;
    return r0_3;
}

}  // namespace d_0062473c
GUEST_EXPORT(0x0062473c, d_0062473c::f_0062473c);

// f_00624814: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00624814 {

inline guest::global<u32, 0x0095362c> global_0095362c;  // (from the original)
inline constexpr guest::Function<0x001adef4, u32(u32, u32, u32, u32)> call_001adef4;  // (from the original)
inline constexpr guest::Function<0x00623e70, u32(u32, u32, u32, u32)> call_00623e70;  // (from the original)
inline constexpr guest::Function<0x00624aa4, u32(u32, u32, u32, u32)> call_00624aa4;  // (from the original)
inline constexpr guest::Function<0x00624c68, u32(u32, u32, u32, u32)> call_00624c68;  // (from the original)
inline constexpr guest::Function<0x00624f00, u32(u32, u32, u32, u32)> call_00624f00;  // (from the original)
inline constexpr guest::Function<0x006251b8, u32(u32, u32, u32, u32)> call_006251b8;  // (from the original)
inline constexpr guest::Function<0x0075dfe8, u32(u32, u32, u32, u32)> call_0075dfe8;  // (from the original)

u32 f_00624814(u32 r0, u32 r1, u32 r2) {
    u32 r4 = guest::cpu()->r[4];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r0_5 = 0;
    u32 r0_6 = 0;
    u32 r1_2 = 0;
    u32 r0_7 = 0;
    u32 r2_2 = 0;
    u32 r0_8 = 0;
    u32 r1_3 = 0;
    u32 r0_9 = 0;
    u32 r1_4 = 0;
    u32 r2_3 = 0;
    u32 r0_10 = 0;
    u32 r1_5 = 0;
    u32 r2_4 = 0;
    u32 r0_11 = 0;
    u32 res_1 = 0;
    u32 r0_12 = 0;
    u32 r0_13 = 0;
    u32 r0_14 = 0;
    u32 r0_15 = 0;
    u32 r1_6 = 0;
    guest::cpu()->r[13] -= 0x18u;  // (from the original)
    r6 = r0;
    r0_1 = *global_0095362c;
    r0_2 = call_0075dfe8(r0_1, r1, r2, guest::cpu()->r[3]);
    r1_1 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    r7 = 0u;
    *gptr<u8>(r6 + 0xfu) = u8(r7);  // (from the original)
    r0_3 = *global_0095362c;
    r0_4 = call_0075dfe8(r0_3, r1_1, r2_1, guest::cpu()->r[3]);
    if (r0_4 != 0) {
        r0_5 = r6 + 4u;
        r0_6 = call_00623e70(r0_5, r0_2, 0u, guest::cpu()->r[3]);
        r1_2 = guest::cpu()->r[1];
        if (r1 == 0) {
            *gptr<u8>(r6) = u8(r7);
        } else {
            r0_6 = 3u;
            *gptr<u8>(r6 + 0xeu) = u8(r7);  // (from the original)
            *gptr<u8>(r6) = u8(r0_6);
        }
        guest::cpu()->r[13] += 0x18u;  // (from the original)
        guest::cpu()->r[1] = r1_2;
        return r0_6;
    }
    if (r1 == 0) {
        goto L_624900;
    }
    r0_7 = r6 + 4u;
    call_00623e70(r0_7, r0_2, 1u, guest::cpu()->r[3]);
    r2_2 = guest::cpu()->r[2];
    r0_8 = *global_0095362c;
    r1_3 = 0x1326eu + r0_8;  // (from the original)
    r0_9 = r0_8 + 0x2784u;  // (from the original)
    call_006251b8(r0_9, r1_3, r2_2, guest::cpu()->r[3]);
    r1_4 = guest::cpu()->r[1];
    r2_3 = guest::cpu()->r[2];
    r0_10 = *global_0095362c;
    call_001adef4(r0_10, r1_4, r2_3, guest::cpu()->r[3]);
    r1_5 = guest::cpu()->r[1];
    r2_4 = guest::cpu()->r[2];
    r0_11 = r6 + 0xcu;  // (from the original)
    call_00624c68(r0_11, r1_5, r2_4, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r4 = 0u;
L_6248bc:;
    res_1 = r4 & 0xffu;  // (from the original)
    if (res_1 == 0) {
        goto L_6248e4;
    }
    r0_12 = call_00624f00(res_1, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    if (r0_12 == 0) {
        goto L_6248e4;
    }
    r0_13 = r6 + 0xcu;  // (from the original)
    call_00624aa4(r0_13, res_1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
L_6248e4:;
    r4 = r4 + 1u;
    if (s32(r4) < s32(4u)) {
        guest::preempt();
        goto L_6248bc;
    }
    *gptr<u8>(r6 + 0xeu) = u8(r7);  // (from the original)
    *gptr<u8>(r6) = u8(1u);
    guest::cpu()->r[13] += 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return 1u;
L_624900:;
    r0_14 = r6 + 4u;
    r0_15 = call_00623e70(r0_14, r0_2, 0u, guest::cpu()->r[3]);
    r1_6 = guest::cpu()->r[1];
    *gptr<u8>(r6) = u8(r7);
    guest::cpu()->r[13] += 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1_6;
    return r0_15;
}

}  // namespace d_00624814
GUEST_EXPORT(0x00624814, d_00624814::f_00624814);

// f_00624954: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00624954 {


void f_00624954(u32 r0, u32 r1, u32 r2) {
    if (r1 >= 4u) {
        return;
    }
    if (r2 <= 0xa5u) {  // (from the original)
        *gptr<u8>(r0 + r1) = u8(r2);
    }
    return;
}

}  // namespace d_00624954
GUEST_EXPORT(0x00624954, d_00624954::f_00624954);

// f_00624968: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00624968 {

struct __attribute__((packed)) Object_00624968_0 {
    u8 unknown_0[0x4];  // (not used here)
    u8 byte_4;
};
GUEST_OFFSET(Object_00624968_0, byte_4, 0x4);  // (from the original)


void f_00624968(gptr<Object_00624968_0> arg0, u32 r1, u32 r2) {
    u32 zf_1 = 0;
    u32 r2_1 = 0;
    u32 r1_1 = 0;
    u32 r1_2 = 0;
    if (r1 >= 4u) {
        guest::cpu()->r[1] = r1;
        return;
    }
    zf_1 = r2 == 0;
    r2_1 = u32(arg0->byte_4);
    r1_1 = lsl_r(1u, r1 & 0xff);  // (from the original)
    if (zf_1) {
        r1_2 = r2_1 & ~r1_1;
    } else {
        r1_2 = r1_1 | r2_1;
    }
    arg0->byte_4 = u8(r1_2);
    guest::cpu()->r[1] = r1_2;
    return;
}

}  // namespace d_00624968
GUEST_EXPORT(0x00624968, d_00624968::f_00624968);

// f_00624d1c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00624d1c {

inline constexpr guest::Function<0x002f8574, u32(u32, u32, u32, u32)> call_002f8574;  // (from the original)

u32 f_00624d1c() {
    return call_002f8574(guest::cpu()->r[0], guest::cpu()->r[1], 0x80u, guest::cpu()->r[3]);  // (from the original)
}

}  // namespace d_00624d1c
GUEST_EXPORT(0x00624d1c, d_00624d1c::f_00624d1c);

// f_00624f14: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00624f14 {


u32 f_00624f14(u32 r0, u32 r1) {
    u32 r0_1 = 0;
    if (r1 >= 4u) {
        return r0;
    }
    r0_1 = r0 + r1;
    *gptr<u8>(r0_1 + 0x14u) = u8(0u);  // (from the original)
    *gptr<u8>(r0_1 + 0x18u) = u8(0u);  // (from the original)
    return r0_1;
}

}  // namespace d_00624f14
GUEST_EXPORT(0x00624f14, d_00624f14::f_00624f14);

// f_00624f30: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00624f30 {

struct __attribute__((packed)) Object_00624f30_0 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u8 unknown_14[0x8];  // (not used here)
    u8 byte_1c;
};
GUEST_OFFSET(Object_00624f30_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_00624f30_0, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_00624f30_0, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Object_00624f30_0, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Object_00624f30_0, word_10, 0x10);  // (from the original)
GUEST_OFFSET(Object_00624f30_0, byte_1c, 0x1c);  // (from the original)


void f_00624f30(gptr<Object_00624f30_0> arg0, u32 r1) {
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r3_2 = 0;
    u32 r3_3 = 0;
    u32 zf_1 = 0;
    u32 r1_1 = 0;
    if (u32(arg0->byte_1c) != 0) {
        guest::cpu()->r[1] = r1;
        return;
    }
    if (r1 >= 4u) {
        guest::cpu()->r[1] = r1;
        return;
    }
    r2_1 = arg0->word_0;
    if (r2_1 == 0) {
        guest::cpu()->r[1] = r1;
        return;
    }
    r3_1 = 0u;
    if (r1 != 0) {
        r3_1 = r2_1;
        r2_1 = r2_1 + 0x16802u;  // (from the original)
    }
    arg0->word_4 = u32(r3_1);
    r3_2 = 0u;
    if (r1 != 1u) {
        r3_2 = r2_1;
        r2_1 = r2_1 + 0x16802u;  // (from the original)
    }
    arg0->word_8 = u32(r3_2);
    r3_3 = 0u;
    if (r1 != 2u) {
        r3_3 = r2_1;
        r2_1 = r2_1 + 0x16802u;  // (from the original)
    }
    zf_1 = r1 == 3u;
    r1_1 = 0u;
    if (!zf_1) {
        r1_1 = r2_1;
    }
    arg0->word_c = u32(r3_3);
    arg0->word_10 = u32(r1_1);
    arg0->byte_1c = u8(1u);
    guest::cpu()->r[1] = 1u;
    return;
}

}  // namespace d_00624f30
GUEST_EXPORT(0x00624f30, d_00624f30::f_00624f30);

// f_00624fb4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00624fb4 {


u32 f_00624fb4(u32 r0, u32 r1, u32 r2) {
    if (r1 < 4u) {
        r0 = r0 + r1;
        *gptr<u8>(r0 + 0x18u) = u8(r2);  // (from the original)
    }
    return r0;
}

}  // namespace d_00624fb4
GUEST_EXPORT(0x00624fb4, d_00624fb4::f_00624fb4);

// f_00624fc4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00624fc4 {


u32 f_00624fc4(u32 r0, u32 r1, u32 r2) {
    if (r1 < 4u) {
        r0 = r0 + r1;
        *gptr<u8>(r0 + 0x14u) = u8(r2);  // (from the original)
    }
    return r0;
}

}  // namespace d_00624fc4
GUEST_EXPORT(0x00624fc4, d_00624fc4::f_00624fc4);

// f_00624fd4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00624fd4 {

struct __attribute__((packed)) Object_00624fd4_0 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u8 unknown_14[0x8];  // (not used here)
    u8 byte_1c;
};
GUEST_OFFSET(Object_00624fd4_0, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_00624fd4_0, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Object_00624fd4_0, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Object_00624fd4_0, word_10, 0x10);  // (from the original)
GUEST_OFFSET(Object_00624fd4_0, byte_1c, 0x1c);  // (from the original)


void f_00624fd4(gptr<Object_00624fd4_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r1 = 0;
    u32 r2_1 = 0;
    u32 cf_1 = 0;
    u32 r2_2 = 0;
    r1 = 0u;
    arg0->word_4 = u32(r1);
    arg0->word_8 = u32(r1);
    arg0->word_c = u32(r1);
    arg0->word_10 = u32(r1);
    arg0->byte_1c = u8(r1);
    do {
L_624fec:;
        r2_1 = r1 & 0xffu;  // (from the original)
        cf_1 = r2_1 >= 4u;
        if (!cf_1) {
            r2_1 = r2_1 + r0;
        }
        if (!cf_1) {
            *gptr<u8>(r2_1 + 0x14u) = u8(0u);  // (from the original)
        }
        r2_2 = r1 & 0xffu;  // (from the original)
        if (!cf_1) {
            r2_2 = r2_2 + r0;
        }
        r1 = r1 + 1u;
        if (!cf_1) {
            *gptr<u8>(r2_2 + 0x18u) = u8(0u);  // (from the original)
        }
        guest::preempt();
    } while (s32(r1) < s32(4u));
    guest::cpu()->r[1] = r1;
    return;
}

}  // namespace d_00624fd4
GUEST_EXPORT(0x00624fd4, d_00624fd4::f_00624fd4);

// f_00625060: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00625060 {

struct __attribute__((packed)) Object_00625060_0 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u8 unknown_14[0x8];  // (not used here)
    u8 byte_1c;
};
GUEST_OFFSET(Object_00625060_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_00625060_0, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_00625060_0, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Object_00625060_0, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Object_00625060_0, word_10, 0x10);  // (from the original)
GUEST_OFFSET(Object_00625060_0, byte_1c, 0x1c);  // (from the original)


void f_00625060(gptr<Object_00625060_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r1 = 0;
    u32 r2_1 = 0;
    u32 cf_1 = 0;
    r1 = 0u;
    arg0->word_0 = u32(r1);
    arg0->word_4 = u32(r1);
    arg0->word_8 = u32(r1);
    arg0->word_c = u32(r1);
    arg0->word_10 = u32(r1);
    arg0->byte_1c = u8(r1);
    do {
L_62507c:;
        r2_1 = r1 & 0xffu;  // (from the original)
        cf_1 = r2_1 >= 4u;
        if (!cf_1) {
            r2_1 = r2_1 + r0;
        }
        r1 = r1 + 1u;
        if (!cf_1) {
            *gptr<u8>(r2_1 + 0x14u) = u8(0u);  // (from the original)
        }
        guest::preempt();
    } while (s32(r1) < s32(4u));
    guest::cpu()->r[1] = r1;
    return;
}

}  // namespace d_00625060
GUEST_EXPORT(0x00625060, d_00625060::f_00625060);

// f_006250a0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006250a0 {

inline guest::global<u32, 0x0095362c> global_0095362c;  // (from the original)
inline constexpr guest::Function<0x00617c84, u32(u32, u32, u32, u32)> call_00617c84;  // (from the original)

u32 f_006250a0() {
    u32 r0_1 = 0;
    r0_1 = *global_0095362c;
    return call_00617c84(r0_1, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_006250a0
GUEST_EXPORT(0x006250a0, d_006250a0::f_006250a0);

// f_006250b0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006250b0 {

inline guest::global<u32, 0x0095362c> global_0095362c;  // (from the original)

void f_006250b0(u32 r0) {
    u32 r1_1 = 0;
    r1_1 = *global_0095362c + 0x13000u;  // (from the original)
    *gptr<u8>(r1_1 + 0x29du) = u8(r0);  // (from the original)
    guest::cpu()->r[1] = r1_1;
    return;
}

}  // namespace d_006250b0
GUEST_EXPORT(0x006250b0, d_006250b0::f_006250b0);

// f_006254f8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006254f8 {

struct __attribute__((packed)) Object_006254f8_0 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
};
GUEST_OFFSET(Object_006254f8_0, word_4, 0x4);  // (from the original)

inline guest::global<u32, 0x0087bd2c> global_0087bd2c;  // (from the original)
inline guest::global<u32, 0x0087bd34> global_0087bd34;  // (from the original)

u32 f_006254f8(gptr<Object_006254f8_0> arg0, u32 r1) {
    u32 r0 = arg0.addr();
    u32 r3_1 = 0;
    u32 r0_1 = 0;
    u32 res_1 = 0;
    u32 r2_1 = 0;
    if (r1 == 0) {
        return r0;
    }
    r3_1 = *global_0087bd34;
    if (r3_1 == 0) {
        return r0;
    }
    if (r1 >= 4u) {
        return r0;
    }
    r0_1 = arg0->word_4;
    if (r0_1 == 0) {
        return r0_1;
    }
    res_1 = r0_1 + *gptr<u32>(0x87bd34u - 4u) + (r1 - 1u);  // (from the original)
    if (res_1 == 0) {
        return res_1;
    }
    r2_1 = *global_0087bd2c;
    return guest::call_address<u32>(r3_1, res_1, r1, r2_1, r3_1);
}

}  // namespace d_006254f8
GUEST_EXPORT(0x006254f8, d_006254f8::f_006254f8);

// f_00625554: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00625554 {

struct __attribute__((packed)) Object_00625554_0 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
};
GUEST_OFFSET(Object_00625554_0, word_4, 0x4);  // (from the original)

inline guest::global<u32, 0x0087bd2c> global_0087bd2c;  // (from the original)
inline guest::global<u32, 0x0087bd30> global_0087bd30;  // (from the original)
inline guest::global<u32, 0x0087bd38> global_0087bd38;  // (from the original)

u32 f_00625554(gptr<Object_00625554_0> arg0, u32 r1) {
    u32 r3_1 = 0;
    u32 r1_1 = 0;
    u32 res_1 = 0;
    u32 r2_1 = 0;
    if (r1 == 0) {
        guest::cpu()->r[1] = r1;
        return r1;
    }
    r3_1 = *global_0087bd38;
    if (r3_1 == 0) {
        guest::cpu()->r[1] = 0x87bd38u;  // (from the original)
        return r1;
    }
    if (r1 >= 4u) {
        guest::cpu()->r[1] = 0x87bd38u;  // (from the original)
        return r1;
    }
    r1_1 = arg0->word_4;
    if (r1_1 == 0) {
        guest::cpu()->r[1] = r1_1;
        return r1;
    }
    res_1 = r1_1 + *global_0087bd30 + (r1 - 1u);
    if (res_1 == 0) {
        guest::cpu()->r[1] = res_1;
        return r1;
    }
    r2_1 = *global_0087bd2c;
    return guest::call_address<u32>(r3_1, r1, res_1, r2_1, r3_1);
}

}  // namespace d_00625554
GUEST_EXPORT(0x00625554, d_00625554::f_00625554);

// f_00625678: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00625678 {

inline guest::global<u32, 0x0095362c> global_0095362c;  // (from the original)
inline constexpr guest::Function<0x0075f4d4, u32(u32, u32, u32, u32)> call_0075f4d4;  // (from the original)

u32 f_00625678(u32 r0) {
    u32 r0_1 = 0;
    r0_1 = *global_0095362c + 0xb0u;  // (from the original)
    return call_0075f4d4(r0_1, r0, guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_00625678
GUEST_EXPORT(0x00625678, d_00625678::f_00625678);

// f_00625740: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00625740 {

inline guest::global<u32, 0x0095362c> global_0095362c;  // (from the original)
inline constexpr guest::Function<0x0075f1c4, u32(u32, u32, u32, u32)> call_0075f1c4;  // (from the original)

u32 f_00625740() {
    u32 r0_1 = 0;
    r0_1 = *global_0095362c + 0x7874u;  // (from the original)
    return call_0075f1c4(r0_1, 3u, guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_00625740
GUEST_EXPORT(0x00625740, d_00625740::f_00625740);

// f_00625798: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00625798 {

inline guest::global<u32, 0x0095362c> global_0095362c;  // (from the original)
inline constexpr guest::Function<0x00624c78, u32(u32, u32, u32, u32)> call_00624c78;  // (from the original)
inline constexpr guest::Function<0x0075e7f8, u32(u32, u32, u32, u32)> call_0075e7f8;  // (from the original)

u32 f_00625798() {
    u32 r1_1 = 0;
    u32 r0_1 = 0;
    u32 r2_1 = 0;
    u32 r0_2 = 0;
    u32 r4_1 = 0;
    u32 r4_2 = 0;
    u32 r0_3 = 0;
    u32 r1_2 = 0;
    u32 r4_3 = 0;
    u32 r1_3 = 0;
    u32 r4_4 = 0;
    u32 r0_4 = 0;
    u32 r1_4 = 0;
    u32 r0_5 = 0;
    u32 r0_6 = 0;
    u32 r1_5 = 0;
    u32 r0_7 = 0;
    u32 r0_8 = 0;
    u32 r1_6 = 0;
    guest::cpu()->r[13] -= 8u;
    r1_1 = *global_0095362c;
    r0_1 = r1_1 + 0x13000u;  // (from the original)
    r2_1 = u32(*gptr<u8>(r0_1 + 0x29du));  // (from the original)
    r0_2 = u32(*gptr<u8>(r0_1 + 0x268u));  // (from the original)
    if (r2_1 != 2u) {
        r4_1 = r1_1 + 0x23cu;  // (from the original)
        if (r0_2 == 0) {
            goto L_62583c;
        }
        r4_2 = u32(*gptr<u8>(r4_1 + 0x10u));  // (from the original)
        r0_3 = call_00624c78(r0_2, r1_1, r2_1, guest::cpu()->r[3]);
        r1_2 = guest::cpu()->r[1];
        if ((r0_3 & r4_2) == 0) {
            guest::cpu()->r[13] += 8u;
            guest::cpu()->r[1] = r1_2;
            return 0u;
        }
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1_2;
        return 1u;
    }
    r4_3 = r1_1 + 0x27a0u;  // (from the original)
    if (r0_2 != 0) {
        r1_3 = r1_1 + 0x27e0u;  // (from the original)
        r4_4 = u32(*gptr<u8>(r1_3));
        r0_4 = call_00624c78(r0_2, r1_3, r2_1, guest::cpu()->r[3]);
        r1_4 = guest::cpu()->r[1];
        if ((r0_4 & r4_4) == 0) {
            guest::cpu()->r[13] += 8u;
            guest::cpu()->r[1] = r1_4;
            return 0u;
        }
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1_4;
        return 1u;
    }
    if (u32(*gptr<u8>(r4_3 + 0x44u)) == 0) {  // (from the original)
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1_1;
        return 1u;
    }
    r0_5 = r4_3 + 0x3cu;  // (from the original)
    r0_6 = call_0075e7f8(r0_5, r1_1, r2_1, guest::cpu()->r[3]);
    r1_5 = guest::cpu()->r[1];
    if (r0_6 == 0) {
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1_5;
        return 0u;
    }
    if (u32(*gptr<u8>(r4_3 + 0x142u)) == 0) {  // (from the original)
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1_5;
        return 0u;
    }
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1_5;
    return 1u;
L_62583c:;
    r0_7 = r4_1 + 0xcu;  // (from the original)
    r0_8 = call_0075e7f8(r0_7, r1_1, r2_1, guest::cpu()->r[3]);
    r1_6 = guest::cpu()->r[1];
    if (r0_8 == 0) {
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1_6;
        return 0u;
    }
    if (u32(*gptr<u8>(0x253eu + r4_1)) != 0) {  // (from the original)
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1_6;
        return 1u;
    }
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1_6;
    return 0u;
}

}  // namespace d_00625798
GUEST_EXPORT(0x00625798, d_00625798::f_00625798);

// f_00625870: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00625870 {

struct __attribute__((packed)) Object_00625870_0 {
    u16 half_0;
};
GUEST_OFFSET(Object_00625870_0, half_0, 0x0);  // (from the original)


void f_00625870(gptr<Object_00625870_0> arg0, u32 r1, u32 r2, u32 r3) {
    u32 r0 = arg0.addr();
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r13 = guest::cpu()->r[13];
    u32 ea_1 = 0;
    u32 ea_2 = 0;
    u32 r12_1 = 0;
    u32 ea_3 = 0;
    u32 r1_1 = 0;
    u32 ea_4 = 0;
    u32 r4_1 = 0;
    u32 r5_1 = 0;
    u32 r6_1 = 0;
    u32 r7_1 = 0;
    if (r0 == 0) {
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[4] = r4;
        guest::cpu()->r[5] = r5;
        guest::cpu()->r[6] = r6;
        guest::cpu()->r[7] = r7;
        guest::cpu()->r[13] = r13;
        return;
    }
    ea_1 = r13 - 0x10;  // (from the original)
    *gptr<u32>(ea_1) = u32(r4);
    *gptr<u32>(ea_1 + 4) = u32(r5);
    *gptr<u32>(ea_1 + 8) = u32(r6);
    *gptr<u32>(ea_1 + 0xc) = u32(r7);  // (from the original)
    r13 = r13 - 0x10;  // (from the original)
    ea_2 = r13 + 0x10u;  // (from the original)
    r12_1 = *gptr<u32>(ea_2);
    ea_3 = r13 + 0x14u;  // (from the original)
    r1_1 = (((((r1 & 3u | u32(arg0->half_0) & ~3u) & ~4u | r2 << 2) & ~0x400u & ~0x3f8u | r3 << 3) & ~0x800u | r12_1 << 0xb) & ~0x1000u | *gptr<u32>(ea_3) << 0xc) & ~0xe000u | 0xe000u & *gptr<u32>(ea_3 + 4) << 0xd;  // (from the original)
    arg0->half_0 = u16(r1_1);
    ea_4 = r13;
    r13 = r13 + 0x10;  // (from the original)
    r4_1 = *gptr<u32>(ea_4);
    r5_1 = *gptr<u32>(ea_4 + 4);
    r6_1 = *gptr<u32>(ea_4 + 8);
    r7_1 = *gptr<u32>(ea_4 + 0xc);  // (from the original)
    guest::cpu()->r[1] = r1_1;
    guest::cpu()->r[4] = r4_1;
    guest::cpu()->r[5] = r5_1;
    guest::cpu()->r[6] = r6_1;
    guest::cpu()->r[7] = r7_1;
    guest::cpu()->r[13] = r13;
    return;
}

}  // namespace d_00625870
GUEST_EXPORT(0x00625870, d_00625870::f_00625870);

// f_0062593c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0062593c {

struct __attribute__((packed)) Object_0062593c_0 {
    u32 word_0;
};
GUEST_OFFSET(Object_0062593c_0, word_0, 0x0);  // (from the original)

struct __attribute__((packed)) Object_0062593c_1 {
    u32 word_0;
};
GUEST_OFFSET(Object_0062593c_1, word_0, 0x0);  // (from the original)


void f_0062593c(gptr<Object_0062593c_0> arg0, gptr<Object_0062593c_1> arg1) {
    u32 r1_1 = 0;
    r1_1 = arg1->word_0;
    arg0->word_0 = u32(r1_1);
    guest::cpu()->r[1] = r1_1;
    return;
}

}  // namespace d_0062593c
GUEST_EXPORT(0x0062593c, d_0062593c::f_0062593c);

// f_00625974: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00625974 {

inline guest::global<u32, 0x0095362c> global_0095362c;  // (from the original)

u32 f_00625974() {
    u32 r0_1 = 0;
    r0_1 = u32(*gptr<u8>(*global_0095362c + 0x1329cu));  // (from the original)
    return r0_1;
}

}  // namespace d_00625974
GUEST_EXPORT(0x00625974, d_00625974::f_00625974);

// f_0062598c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0062598c {

inline guest::global<u32, 0x0095362c> global_0095362c;  // (from the original)
inline constexpr guest::Function<0x00617840, u32(u32, u32, u32, u32)> call_00617840;  // (from the original)
inline constexpr guest::Function<0x00624aa4, u32(u32, u32, u32, u32)> call_00624aa4;  // (from the original)
inline constexpr guest::Function<0x00627f74, u32(u32, u32, u32, u32)> call_00627f74;  // (from the original)
inline constexpr guest::Function<0x0062801c, u32(u32, u32, u32, u32)> call_0062801c;  // (from the original)

u32 f_0062598c() {
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r2_2 = 0;
    u32 r3_2 = 0;
    u32 r0_2 = 0;
    u32 r1_1 = 0;
    u32 r3_3 = 0;
    u32 r0_3 = 0;
    u32 r1_2 = 0;
    u32 r0_4 = 0;
    u32 r0_5 = 0;
    u32 r1_3 = 0;
    u32 r4_1 = 0;
    u32 r3_4 = 0;
    u32 r1_4 = 0;
    u32 r0_6 = 0;
    u32 r1_5 = 0;
    u32 r0_7 = 0;
    u32 r1_6 = 0;
    u32 r4_2 = 0;
    u32 r3_5 = 0;
    u32 r1_7 = 0;
    r13 = r13 - 0x20u;  // (from the original)
    r0_1 = *global_0095362c;
    r2_1 = r0_1 + 0x13000u;  // (from the original)
    r3_1 = u32(*gptr<u8>(r2_1 + 0x29du));  // (from the original)
    r2_2 = u32(*gptr<u8>(r2_1 + 0x268u));  // (from the original)
    if (r3_1 != 2u) {
        if (r2_2 == 0) {
            goto L_625ae0;
        }
        r3_2 = u32(*gptr<u8>(r0_1 + 0x23du));  // (from the original)
        if (r3_2 != r2_2) {
            goto L_625af8;
        }
        *gptr<u32>(r13 + 8u) = u32(0u);
        *gptr<u32>(r13 + 0xcu) = u32(0u);  // (from the original)
        *gptr<u32>(r13 + 0x10u) = u32(0u);  // (from the original)
        *gptr<u32>(r13) = u32(0u);
        *gptr<u32>(r13 + 4) = u32(0x11u);  // (from the original)
        guest::cpu()->r[13] = r13;
        r0_2 = call_00617840(r0_1, 0u, 0u, 0u);
        r1_1 = guest::cpu()->r[1];
        if (r0_2 == 0) {
            r13 = r13 + 0x20u;  // (from the original)
            guest::cpu()->r[1] = r1_1;
            guest::cpu()->r[13] = r13;
            return r0_2;
        }
        r13 = r13 + 0x20u;  // (from the original)
        guest::cpu()->r[1] = r1_1;
        guest::cpu()->r[13] = r13;
        return 1u;
    }
    if (r2_2 != 0) {
        r3_3 = u32(*gptr<u8>(0x27a3u + r0_1));  // (from the original)
        if (r3_3 != r2_2) {
            goto L_625a7c;
        }
        *gptr<u32>(r13 + 8u) = u32(0u);
        *gptr<u32>(r13 + 0xcu) = u32(0u);  // (from the original)
        *gptr<u32>(r13 + 0x10u) = u32(0u);  // (from the original)
        *gptr<u32>(r13) = u32(0u);
        *gptr<u32>(r13 + 4) = u32(0x13u);  // (from the original)
        guest::cpu()->r[13] = r13;
        r0_3 = call_00617840(r0_1, 0u, 0u, 0u);
        r1_2 = guest::cpu()->r[1];
        if (r0_3 == 0) {
            r13 = r13 + 0x20u;  // (from the original)
            guest::cpu()->r[1] = r1_2;
            guest::cpu()->r[13] = r13;
            return r0_3;
        }
        r13 = r13 + 0x20u;  // (from the original)
        guest::cpu()->r[1] = r1_2;
        guest::cpu()->r[13] = r13;
        return 1u;
    }
    r0_4 = r0_1 + 0x27e0u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_00624aa4(r0_4, 0u, r2_2, r3_1);
    r0_5 = *global_0095362c;
    r1_3 = u32(*gptr<u8>(0x27a3u + r0_5));  // (from the original)
    if (r1_3 != 0) {
        r13 = r13 + 0x20u;  // (from the original)
        guest::cpu()->r[1] = r1_3;
        guest::cpu()->r[13] = r13;
        return 1u;
    }
    *gptr<u8>(r0_5 + 0x28e2u) = u8(1u);  // (from the original)
    r13 = r13 + 0x20u;  // (from the original)
    guest::cpu()->r[1] = 1u;
    guest::cpu()->r[13] = r13;
    return 1u;
L_625a7c:;
    if (r3_3 != 0) {
        r4_1 = r0_1 + 0x10u;  // (from the original)
        guest::cpu()->r[13] = r13;
        call_00627f74(r4_1, 0u, r2_2, r3_3);
        r3_4 = guest::cpu()->r[3];
        guest::cpu()->r[13] = r13;
        call_0062801c(r4_1, 0x23u, 0u, r3_4);  // (from the original)
        r1_4 = guest::cpu()->r[1];
        r13 = r13 + 0x20u;  // (from the original)
        guest::cpu()->r[1] = r1_4;
        guest::cpu()->r[13] = r13;
        return 1u;
    }
    *gptr<u32>(r13 + 8u) = u32(0u);
    *gptr<u32>(r13 + 0xcu) = u32(0u);  // (from the original)
    *gptr<u32>(r13 + 0x10u) = u32(0u);  // (from the original)
    *gptr<u32>(r13) = u32(0u);
    *gptr<u32>(r13 + 4) = u32(0x15u);  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_6 = call_00617840(r0_1, 0u, 0u, 0u);
    r1_5 = guest::cpu()->r[1];
    if (r0_6 == 0) {
        r13 = r13 + 0x20u;  // (from the original)
        guest::cpu()->r[1] = r1_5;
        guest::cpu()->r[13] = r13;
        return r0_6;
    }
    r13 = r13 + 0x20u;  // (from the original)
    guest::cpu()->r[1] = r1_5;
    guest::cpu()->r[13] = r13;
    return 1u;
L_625ae0:;
    r0_7 = r0_1 + 0x24cu;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_00624aa4(r0_7, 0u, r2_2, r3_1);
    r1_6 = guest::cpu()->r[1];
    r13 = r13 + 0x20u;  // (from the original)
    guest::cpu()->r[1] = r1_6;
    guest::cpu()->r[13] = r13;
    return 1u;
L_625af8:;
    r4_2 = r0_1 + 0x10u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_00627f74(r4_2, 0u, r2_2, r3_2);
    r3_5 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    call_0062801c(r4_2, 0x21u, 0u, r3_5);  // (from the original)
    r1_7 = guest::cpu()->r[1];
    r13 = r13 + 0x20u;  // (from the original)
    guest::cpu()->r[1] = r1_7;
    guest::cpu()->r[13] = r13;
    return 1u;
}

}  // namespace d_0062598c
GUEST_EXPORT(0x0062598c, d_0062598c::f_0062598c);

// f_00625b28: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00625b28 {

inline guest::global<u32, 0x0095362c> global_0095362c;  // (from the original)

u32 f_00625b28() {
    u32 r0_1 = 0;
    if (u32(*gptr<u8>(*global_0095362c + 0x223u)) == 0) {  // (from the original)
        r0_1 = 1u;
    } else {
        r0_1 = 0u;
    }
    return r0_1;
}

}  // namespace d_00625b28
GUEST_EXPORT(0x00625b28, d_00625b28::f_00625b28);

// f_00625b50: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00625b50 {

struct __attribute__((packed)) Object_00625b50_0 {
    u8 byte_0;
    u8 byte_1;
};
GUEST_OFFSET(Object_00625b50_0, byte_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_00625b50_0, byte_1, 0x1);  // (from the original)


void f_00625b50(gptr<Object_00625b50_0> arg0) {
    arg0->byte_1 = u8(4u);
    arg0->byte_0 = u8(0xa5u);  // (from the original)
    guest::cpu()->r[1] = 0xa5u;  // (from the original)
    return;
}

}  // namespace d_00625b50
GUEST_EXPORT(0x00625b50, d_00625b50::f_00625b50);

// f_00625b64: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00625b64 {

struct __attribute__((packed)) Object_00625b64_0 {
    u8 byte_0;
    u8 byte_1;
};
GUEST_OFFSET(Object_00625b64_0, byte_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_00625b64_0, byte_1, 0x1);  // (from the original)


void f_00625b64(gptr<Object_00625b64_0> arg0, u32 r1, u32 r2) {
    u32 cf_1 = 0;
    cf_1 = r1 >= 4u;
    if (!cf_1) {
        cf_1 = r2 >= 0xa5u;  // (from the original)
    }
    if (cf_1) {
        return;
    } else {
        arg0->byte_1 = u8(r1);
        arg0->byte_0 = u8(r2);
    }
    return;
}

}  // namespace d_00625b64
GUEST_EXPORT(0x00625b64, d_00625b64::f_00625b64);

// f_00625b84: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00625b84 {

struct __attribute__((packed)) Object_00625b84_0 {
    u16 half_0;
};
GUEST_OFFSET(Object_00625b84_0, half_0, 0x0);  // (from the original)

struct __attribute__((packed)) Object_00625b84_1 {
    u16 half_0;
};
GUEST_OFFSET(Object_00625b84_1, half_0, 0x0);  // (from the original)


void f_00625b84(gptr<Object_00625b84_0> arg0, gptr<Object_00625b84_1> arg1) {
    u32 r1_1 = 0;
    r1_1 = u32(arg1->half_0);
    arg0->half_0 = u16(r1_1);
    guest::cpu()->r[1] = r1_1;
    return;
}

}  // namespace d_00625b84
GUEST_EXPORT(0x00625b84, d_00625b84::f_00625b84);

// f_00625b90: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00625b90 {

struct __attribute__((packed)) Object_00625b90_0 {
    u8 byte_0;
    u8 byte_1;
};
GUEST_OFFSET(Object_00625b90_0, byte_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_00625b90_0, byte_1, 0x1);  // (from the original)


void f_00625b90(gptr<Object_00625b90_0> arg0) {
    arg0->byte_1 = u8(4u);
    arg0->byte_0 = u8(0xa5u);  // (from the original)
    guest::cpu()->r[1] = 0xa5u;  // (from the original)
    return;
}

}  // namespace d_00625b90
GUEST_EXPORT(0x00625b90, d_00625b90::f_00625b90);

// f_00625c20: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00625c20 {


void f_00625c20(u32 r0, u32 r1) {
    if (r1 >= 4u) {
        return;
    }
    *gptr<u8>(r0 + r1) = u8(0xa5u);  // (from the original)
    *gptr<u8>(r0 + r1 + 4u) = u8(4u);
    return;
}

}  // namespace d_00625c20
GUEST_EXPORT(0x00625c20, d_00625c20::f_00625c20);

// f_00625c40: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00625c40 {


void f_00625c40(u32 r0) {
    u32 r1 = 0;
    u32 r3 = 0;
    u32 r12 = 0;
    u32 r2_1 = 0;
    r1 = 0u;
    r3 = 0xa5u;  // (from the original)
    r12 = 4u;
    guest::cpu()->r[13] -= 8u;
    do {
L_625c50:;
        r2_1 = r1 & 0xffu;  // (from the original)
        if (!(r2_1 >= 4u)) {
            *gptr<u8>(r0 + r2_1) = u8(r3);
            *gptr<u8>(r0 + r2_1 + 4u) = u8(r12);
        }
        r1 = r1 + 1u;
        guest::preempt();
    } while (s32(r1) < s32(4u));
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1;
    return;
}

}  // namespace d_00625c40
GUEST_EXPORT(0x00625c40, d_00625c40::f_00625c40);

// f_00625c7c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00625c7c {


void f_00625c7c(u32 r0) {
    u32 r1 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r12 = 0;
    u32 r3_1 = 0;
    guest::cpu()->r[13] -= 8u;
    r1 = 0u;
    r4 = 0xa5u;  // (from the original)
    r12 = 4u;
    do {
L_625c8c:;
        r3_1 = r1 & 0xffu;  // (from the original)
        if (!(r3_1 >= 4u)) {
            *gptr<u8>(r0 + r3_1) = u8(r4);
            *gptr<u8>(r0 + r3_1 + 4u) = u8(r12);
        }
        r1 = r1 + 1u;
        guest::preempt();
    } while (s32(r1) < s32(4u));
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1;
    return;
}

}  // namespace d_00625c7c
GUEST_EXPORT(0x00625c7c, d_00625c7c::f_00625c7c);

// f_00625da4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00625da4 {

struct __attribute__((packed)) Object_00625da4_0 {
    u8 byte_0;
    u8 unknown_1[0x7];  // (not used here)
    u32 word_8;
};
GUEST_OFFSET(Object_00625da4_0, byte_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_00625da4_0, word_8, 0x8);  // (from the original)


void f_00625da4(gptr<Object_00625da4_0> arg0) {
    arg0->word_8 = u32(0u);
    arg0->byte_0 = u8(4u);
    guest::cpu()->r[1] = 4u;
    return;
}

}  // namespace d_00625da4
GUEST_EXPORT(0x00625da4, d_00625da4::f_00625da4);

// f_00625db8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00625db8 {

struct __attribute__((packed)) Object_00625db8_0 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
};
GUEST_OFFSET(Object_00625db8_0, word_4, 0x4);  // (from the original)

inline constexpr guest::Function<0x002f8574, u32(u32, u32, u32, u32)> call_002f8574;  // (from the original)

u32 f_00625db8(gptr<Object_00625db8_0> arg0, u32 r1, u32 r2) {
    u32 r0 = arg0.addr();
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r13 = guest::cpu()->r[13];
    u32 r14 = guest::cpu()->r[14];
    u32 ea_1 = 0;
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 ea_2 = 0;
    u32 r4_1 = 0;
    u32 r5_1 = 0;
    u32 r6_1 = 0;
    if (r1 == 0) {
        guest::cpu()->r[4] = r4;
        guest::cpu()->r[5] = r5;
        guest::cpu()->r[6] = r6;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    if (r2 > 5u) {
        guest::cpu()->r[4] = r4;
        guest::cpu()->r[5] = r5;
        guest::cpu()->r[6] = r6;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    ea_1 = r13 - 0x10;  // (from the original)
    *gptr<u32>(ea_1) = u32(r4);
    *gptr<u32>(ea_1 + 4) = u32(r5);
    *gptr<u32>(ea_1 + 8) = u32(r6);
    *gptr<u32>(ea_1 + 0xc) = u32(r14);  // (from the original)
    r13 = r13 - 0x10;  // (from the original)
    r0_1 = arg0->word_4;
    if (r0_1 != 0) {
        if (r2 != 0) {
            guest::cpu()->r[13] = r13;
            r0_1 = call_002f8574(r0_1, r1, r2, guest::cpu()->r[3]);
            r1_1 = guest::cpu()->r[1];
        }
        *gptr<u32>(r0 + 8u) = u32(r2);
    }
    ea_2 = r13;
    r13 = r13 + 0x10;  // (from the original)
    r4_1 = *gptr<u32>(ea_2);
    r5_1 = *gptr<u32>(ea_2 + 4);
    r6_1 = *gptr<u32>(ea_2 + 8);
    guest::cpu()->r[4] = r4_1;
    guest::cpu()->r[5] = r5_1;
    guest::cpu()->r[6] = r6_1;
    guest::cpu()->r[13] = r13;
    return r0_1;
}

}  // namespace d_00625db8
GUEST_EXPORT(0x00625db8, d_00625db8::f_00625db8);

// f_00625e2c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00625e2c {

struct __attribute__((packed)) Object_00625e2c_0 {
    u8 byte_0;
    u8 unknown_1[0x3];  // (not used here)
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Object_00625e2c_0, byte_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_00625e2c_0, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_00625e2c_0, word_8, 0x8);  // (from the original)


void f_00625e2c(gptr<Object_00625e2c_0> arg0) {
    arg0->byte_0 = u8(4u);
    arg0->word_4 = u32(0u);
    arg0->word_8 = u32(0u);
    guest::cpu()->r[1] = 0u;
    return;
}

}  // namespace d_00625e2c
GUEST_EXPORT(0x00625e2c, d_00625e2c::f_00625e2c);

// f_00625ee4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00625ee4 {

struct __attribute__((packed)) Object_00625ee4_0 {
    u32 word_0;
};
GUEST_OFFSET(Object_00625ee4_0, word_0, 0x0);  // (from the original)

inline constexpr guest::Function<0x002f8574, u32(u32, u32, u32, u32)> call_002f8574;  // (from the original)

u32 f_00625ee4(gptr<Object_00625ee4_0> arg0, u32 r1, u32 r2) {
    u32 r0 = arg0.addr();
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r13 = guest::cpu()->r[13];
    u32 r14 = guest::cpu()->r[14];
    u32 ea_1 = 0;
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 ea_2 = 0;
    u32 r4_1 = 0;
    u32 r5_1 = 0;
    u32 r6_1 = 0;
    if (r1 == 0) {
        guest::cpu()->r[4] = r4;
        guest::cpu()->r[5] = r5;
        guest::cpu()->r[6] = r6;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    if (r2 > 5u) {
        guest::cpu()->r[4] = r4;
        guest::cpu()->r[5] = r5;
        guest::cpu()->r[6] = r6;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    ea_1 = r13 - 0x10;  // (from the original)
    *gptr<u32>(ea_1) = u32(r4);
    *gptr<u32>(ea_1 + 4) = u32(r5);
    *gptr<u32>(ea_1 + 8) = u32(r6);
    *gptr<u32>(ea_1 + 0xc) = u32(r14);  // (from the original)
    r13 = r13 - 0x10;  // (from the original)
    r0_1 = arg0->word_0;
    if (r0_1 != 0) {
        if (r2 != 0) {
            guest::cpu()->r[13] = r13;
            r0_1 = call_002f8574(r0_1, r1, r2, guest::cpu()->r[3]);
            r1_1 = guest::cpu()->r[1];
        }
        *gptr<u32>(r0 + 4u) = u32(r2);
    }
    ea_2 = r13;
    r13 = r13 + 0x10;  // (from the original)
    r4_1 = *gptr<u32>(ea_2);
    r5_1 = *gptr<u32>(ea_2 + 4);
    r6_1 = *gptr<u32>(ea_2 + 8);
    guest::cpu()->r[4] = r4_1;
    guest::cpu()->r[5] = r5_1;
    guest::cpu()->r[6] = r6_1;
    guest::cpu()->r[13] = r13;
    return r0_1;
}

}  // namespace d_00625ee4
GUEST_EXPORT(0x00625ee4, d_00625ee4::f_00625ee4);

// f_00625f84: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00625f84 {

struct __attribute__((packed)) Object_00625f84_0 {
    u32 word_0;
};
GUEST_OFFSET(Object_00625f84_0, word_0, 0x0);  // (from the original)

struct __attribute__((packed)) Object_00625f84_1 {
    u32 word_0;
};
GUEST_OFFSET(Object_00625f84_1, word_0, 0x0);  // (from the original)


void f_00625f84(gptr<Object_00625f84_0> arg0, gptr<Object_00625f84_1> arg1) {
    u32 r1_1 = 0;
    r1_1 = arg1->word_0;
    arg0->word_0 = u32(r1_1);
    guest::cpu()->r[1] = r1_1;
    return;
}

}  // namespace d_00625f84
GUEST_EXPORT(0x00625f84, d_00625f84::f_00625f84);

// f_0062607c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0062607c {

struct __attribute__((packed)) Object_0062607c_0 {
    u32 word_0;
};
GUEST_OFFSET(Object_0062607c_0, word_0, 0x0);  // (from the original)

inline constexpr guest::Function<0x002f8574, u32(u32, u32, u32, u32)> call_002f8574;  // (from the original)

u32 f_0062607c(gptr<Object_0062607c_0> arg0, u32 r1, u32 r2) {
    u32 r0 = arg0.addr();
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r13 = guest::cpu()->r[13];
    u32 r14 = guest::cpu()->r[14];
    u32 ea_1 = 0;
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 ea_2 = 0;
    u32 r4_1 = 0;
    u32 r5_1 = 0;
    u32 r6_1 = 0;
    if (r1 == 0) {
        guest::cpu()->r[4] = r4;
        guest::cpu()->r[5] = r5;
        guest::cpu()->r[6] = r6;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    if (r2 > 5u) {
        guest::cpu()->r[4] = r4;
        guest::cpu()->r[5] = r5;
        guest::cpu()->r[6] = r6;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    ea_1 = r13 - 0x10;  // (from the original)
    *gptr<u32>(ea_1) = u32(r4);
    *gptr<u32>(ea_1 + 4) = u32(r5);
    *gptr<u32>(ea_1 + 8) = u32(r6);
    *gptr<u32>(ea_1 + 0xc) = u32(r14);  // (from the original)
    r13 = r13 - 0x10;  // (from the original)
    r0_1 = arg0->word_0;
    if (r0_1 != 0) {
        if (r2 != 0) {
            guest::cpu()->r[13] = r13;
            r0_1 = call_002f8574(r0_1, r1, r2, guest::cpu()->r[3]);
            r1_1 = guest::cpu()->r[1];
        }
        *gptr<u32>(r0 + 4u) = u32(r2);
    }
    ea_2 = r13;
    r13 = r13 + 0x10;  // (from the original)
    r4_1 = *gptr<u32>(ea_2);
    r5_1 = *gptr<u32>(ea_2 + 4);
    r6_1 = *gptr<u32>(ea_2 + 8);
    guest::cpu()->r[4] = r4_1;
    guest::cpu()->r[5] = r5_1;
    guest::cpu()->r[6] = r6_1;
    guest::cpu()->r[13] = r13;
    return r0_1;
}

}  // namespace d_0062607c
GUEST_EXPORT(0x0062607c, d_0062607c::f_0062607c);

// f_00626118: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00626118 {

struct __attribute__((packed)) Object_00626118_0 {
    u32 word_0;
};
GUEST_OFFSET(Object_00626118_0, word_0, 0x0);  // (from the original)

struct __attribute__((packed)) Object_00626118_1 {
    u32 word_0;
};
GUEST_OFFSET(Object_00626118_1, word_0, 0x0);  // (from the original)


void f_00626118(gptr<Object_00626118_0> arg0, gptr<Object_00626118_1> arg1) {
    u32 r1_1 = 0;
    r1_1 = arg1->word_0;
    arg0->word_0 = u32(r1_1);
    guest::cpu()->r[1] = r1_1;
    return;
}

}  // namespace d_00626118
GUEST_EXPORT(0x00626118, d_00626118::f_00626118);

// f_0062613c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0062613c {

inline constexpr guest::Function<0x0075dfb4, u32(u32, u32, u32, u32)> call_0075dfb4;  // (from the original)
inline constexpr guest::Function<0x0075e048, u32(u32, u32, u32, u32)> call_0075e048;  // (from the original)

u32 f_0062613c(u32 r0, u32 r1) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r1_1 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r1_2 = 0;
    u32 r0_5 = 0;
    u32 r0_6 = 0;
    guest::cpu()->r[13] -= 0x18u;  // (from the original)
    r5 = r0;
    r7 = 0x95362cu;  // (from the original)
    r0_1 = *gptr<u32>(r7);
    r0_2 = call_0075e048(r0_1, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_1 = guest::cpu()->r[1];
    if (r0_2 == 0) {
        goto L_6261ac;
    }
    if (r5 >= 4u) {
        goto L_6261ac;
    }
    r0_3 = *gptr<u32>(r7);
    r0_4 = call_0075dfb4(r0_3, r5, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_1 = guest::cpu()->r[1];
    if (r0_4 == 0) {
        goto L_6261ac;
    } else {
        r6 = 0u;
        r4 = r6;
    }
    do {
L_62617c:;
        r1_2 = r4 & 0xffu;  // (from the original)
        if (!(r1_2 != r5)) {
            guest::cpu()->r[13] += 0x18u;  // (from the original)
            guest::cpu()->r[1] = r1_2;
            return r6;
        }
        r0_5 = *gptr<u32>(r7);
        r0_6 = call_0075dfb4(r0_5, r1_2, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1_1 = guest::cpu()->r[1];
        if (r0_6 != 0) {
            r6 = r6 + 1u;
        }
        r4 = r4 + 1u;
        guest::preempt();
    } while (s32(r4) < s32(4u));
L_6261ac:;
    guest::cpu()->r[13] += 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1_1;
    return 4u;
}

}  // namespace d_0062613c
GUEST_EXPORT(0x0062613c, d_0062613c::f_0062613c);

// f_006261b8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006261b8 {

inline guest::global<u32, 0x0095362c> global_0095362c;  // (from the original)

u32 f_006261b8() {
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    r0_1 = *global_0095362c;
    r1_1 = u32(*gptr<u8>(0x1329du + r0_1));  // (from the original)
    if (r1_1 != 2u) {
        if (u32(*gptr<u8>(r0_1 + 0x2779u)) == 0) {  // (from the original)
            guest::cpu()->r[1] = r1_1;
            return 0u;
        }
        guest::cpu()->r[1] = r1_1;
        return 1u;
    }
    if (u32(*gptr<u8>(r0_1 + 0x28e1u)) != 0) {  // (from the original)
        guest::cpu()->r[1] = r1_1;
        return 1u;
    }
    guest::cpu()->r[1] = r1_1;
    return 0u;
}

}  // namespace d_006261b8
GUEST_EXPORT(0x006261b8, d_006261b8::f_006261b8);

// f_0062624c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0062624c {

inline guest::global<u32, 0x0095362c> global_0095362c;  // (from the original)
inline constexpr guest::Function<0x006184d8, u32(u32, u32, u32, u32)> call_006184d8;  // (from the original)

u32 f_0062624c() {
    u32 r0_1 = 0;
    r0_1 = *global_0095362c;
    return call_006184d8(r0_1, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_0062624c
GUEST_EXPORT(0x0062624c, d_0062624c::f_0062624c);

// f_0062625c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0062625c {

inline guest::global<u32, 0x0095362c> global_0095362c;  // (from the original)

u32 f_0062625c() {
    u32 r0 = 0;
    u32 r0_1 = 0;
    u32 zf_1 = 0;
    goto L_62625c;
L_618534:;
    r0_1 = u32(*gptr<u8>(r0 + 0x1f0u));  // (from the original)
    zf_1 = r0_1 == 0;
    if (!zf_1) {
        zf_1 = r0_1 == 1u;
    }
    if (!zf_1) {
        guest::cpu()->r[1] = r0;
        return 0u;
    }
    *gptr<u8>(r0 + 0x1f0u) = u8(2u);  // (from the original)
    *gptr<u8>(r0 + 0x1f1u) = u8(0u);  // (from the original)
    guest::cpu()->r[1] = r0;
    return 1u;
L_62625c:;
    r0 = *global_0095362c;
    guest::preempt();
    goto L_618534;
}

}  // namespace d_0062625c
GUEST_EXPORT(0x0062625c, d_0062625c::f_0062625c);

// f_0062626c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0062626c {

inline guest::global<u32, 0x0095362c> global_0095362c;  // (from the original)

u32 f_0062626c() {
    u32 r0_1 = 0;
    r0_1 = *global_0095362c;
    *gptr<u8>(r0_1 + 0x223u) = u8(1u);  // (from the original)
    guest::cpu()->r[1] = 1u;
    return r0_1;
}

}  // namespace d_0062626c
GUEST_EXPORT(0x0062626c, d_0062626c::f_0062626c);

// f_00626284: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00626284 {

inline guest::global<u32, 0x0095362c> global_0095362c;  // (from the original)
inline constexpr guest::Function<0x00617840, u32(u32, u32, u32, u32)> call_00617840;  // (from the original)
inline constexpr guest::Function<0x00624aa4, u32(u32, u32, u32, u32)> call_00624aa4;  // (from the original)
inline constexpr guest::Function<0x0075dfe8, u32(u32, u32, u32, u32)> call_0075dfe8;  // (from the original)

u32 f_00626284(u32 r0_unused, u32 r1, u32 r2, u32 r3) {
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r1_1 = 0;
    u32 r0_5 = 0;
    u32 r0_6 = 0;
    r13 = r13 - 0x20u;  // (from the original)
    r0_1 = *global_0095362c;
    guest::cpu()->r[13] = r13;
    r0_2 = call_0075dfe8(r0_1, r1, r2, r3);
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    if (r0_2 != 0) {
        *gptr<u32>(r13) = u32(0u);
        *gptr<u32>(r13 + 4) = u32(0x16u);  // (from the original)
        *gptr<u32>(r13 + 8u) = u32(0u);
        *gptr<u32>(r13 + 0xcu) = u32(0u);  // (from the original)
        *gptr<u32>(r13 + 0x10u) = u32(0u);  // (from the original)
        r0_3 = *global_0095362c;
        guest::cpu()->r[13] = r13;
        r0_4 = call_00617840(r0_3, 0u, 0u, 0u);
        r1_1 = guest::cpu()->r[1];
        r13 = r13 + 0x20u;  // (from the original)
        guest::cpu()->r[1] = r1_1;
        guest::cpu()->r[13] = r13;
        return r0_4;
    }
    r0_5 = *global_0095362c;
    r13 = r13 + 0x20u;  // (from the original)
    r0_6 = r0_5 + 0x234u;  // (from the original)
    guest::cpu()->r[13] = r13;
    return call_00624aa4(r0_6, 0u, r2_1, r3_1);
}

}  // namespace d_00626284
GUEST_EXPORT(0x00626284, d_00626284::f_00626284);

// f_006262f0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006262f0 {

inline guest::global<u32, 0x0095362c> global_0095362c;  // (from the original)

u32 f_006262f0() {
    u32 r0_1 = 0;
    r0_1 = *global_0095362c;
    *gptr<u8>(r0_1 + 0x20bu) = u8(1u);  // (from the original)
    guest::cpu()->r[1] = 1u;
    return r0_1;
}

}  // namespace d_006262f0
GUEST_EXPORT(0x006262f0, d_006262f0::f_006262f0);

// f_00626308: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00626308 {

inline guest::global<u32, 0x0095362c> global_0095362c;  // (from the original)

u32 f_00626308() {
    u32 r0 = 0;
    u32 r0_1 = 0;
    goto L_626308;
L_618564:;
    if (u32(*gptr<u8>(r0 + 0x214u)) == 0xbu) {  // (from the original)
        r0_1 = 1u;
    } else {
        r0_1 = 0u;
    }
    return r0_1;
L_626308:;
    r0 = *global_0095362c;
    guest::preempt();
    goto L_618564;
}

}  // namespace d_00626308
GUEST_EXPORT(0x00626308, d_00626308::f_00626308);

// f_00626318: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00626318 {

inline guest::global<u32, 0x0095362c> global_0095362c;  // (from the original)

u32 f_00626318() {
    u32 r0 = 0;
    u32 r0_1 = 0;
    u32 zf_1 = 0;
    goto L_626318;
L_618654:;
    r0_1 = u32(*gptr<u8>(r0 + 0x1f0u));  // (from the original)
    zf_1 = r0_1 == 0;
    if (!zf_1) {
        zf_1 = r0_1 == 1u;
    }
    if (!zf_1) {
        guest::cpu()->r[1] = r0;
        return 0u;
    }
    *gptr<u8>(r0 + 0x1f0u) = u8(2u);  // (from the original)
    *gptr<u8>(r0 + 0x1f1u) = u8(1u);  // (from the original)
    guest::cpu()->r[1] = r0;
    return 1u;
L_626318:;
    r0 = *global_0095362c;
    guest::preempt();
    goto L_618654;
}

}  // namespace d_00626318
GUEST_EXPORT(0x00626318, d_00626318::f_00626318);

// f_00626328: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00626328 {

inline constexpr guest::Function<0x00618ecc, u32(u32, u32, u32, u32)> call_00618ecc;  // (from the original)
inline constexpr guest::Function<0x0075dfb4, u32(u32, u32, u32, u32)> call_0075dfb4;  // (from the original)
inline constexpr guest::Function<0x0075dfe8, u32(u32, u32, u32, u32)> call_0075dfe8;  // (from the original)

u32 f_00626328(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = guest::cpu()->r[4];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 res_1 = 0;
    u32 r0_4 = 0;
    u32 r0_5 = 0;
    u32 r0_6 = 0;
    guest::cpu()->r[13] -= 0x18u;  // (from the original)
    r6 = r0;
    r7 = 0x95362cu;  // (from the original)
    r0_1 = *gptr<u32>(r7);
    r0_2 = call_0075dfe8(r0_1, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0_2 == 0) {
        r4 = 0u;
    } else {
        r0_3 = 0u;
        goto L_6263a4;
    }
L_62634c:;
    res_1 = r4 & 0xffu;  // (from the original)
    if (res_1 == 0) {
        goto L_626394;
    }
    r0_4 = *gptr<u32>(r7);
    r0_5 = call_0075dfb4(r0_4, res_1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0_5 == 0) {
        if (r6 != res_1) {
            goto L_626394;
        }
    }
    r0_6 = *gptr<u32>(r7);
    r0_3 = call_00618ecc(r0_6, res_1, 0u, 0u);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0_3 == 0) {
        goto L_6263a4;
    }
L_626394:;
    r4 = r4 + 1u;
    if (s32(r4) < s32(4u)) {
        guest::preempt();
        goto L_62634c;
    }
    r0_3 = 1u;
L_6263a4:;
    guest::cpu()->r[13] += 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0_3;
}

}  // namespace d_00626328
GUEST_EXPORT(0x00626328, d_00626328::f_00626328);

// f_006263ac: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006263ac {

inline guest::global<u32, 0x0095362c> global_0095362c;  // (from the original)

u32 f_006263ac() {
    u32 r0_1 = 0;
    r0_1 = *global_0095362c;
    *gptr<u8>(r0_1 + 0x1e5u) = u8(4u);  // (from the original)
    guest::cpu()->r[1] = 4u;
    return r0_1;
}

}  // namespace d_006263ac
GUEST_EXPORT(0x006263ac, d_006263ac::f_006263ac);

// f_00626454: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00626454 {

struct __attribute__((packed)) Object_00626454_0 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
    u8 byte_8;
    u8 byte_9;
};
GUEST_OFFSET(Object_00626454_0, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_00626454_0, byte_8, 0x8);  // (from the original)
GUEST_OFFSET(Object_00626454_0, byte_9, 0x9);  // (from the original)


void f_00626454(gptr<Object_00626454_0> arg0) {
    arg0->word_4 = u32(0u);
    arg0->byte_8 = u8(4u);
    arg0->byte_9 = u8(0u);
    guest::cpu()->r[1] = 0u;
    return;
}

}  // namespace d_00626454
GUEST_EXPORT(0x00626454, d_00626454::f_00626454);

// f_0062646c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0062646c {

struct __attribute__((packed)) Object_0062646c_0 {
    u32 word_0;
};
GUEST_OFFSET(Object_0062646c_0, word_0, 0x0);  // (from the original)

inline constexpr guest::Function<0x002f8574, u32(u32, u32, u32, u32)> call_002f8574;  // (from the original)

u32 f_0062646c(gptr<Object_0062646c_0> arg0, u32 r1, u32 r2) {
    u32 r0 = arg0.addr();
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r13 = guest::cpu()->r[13];
    u32 r14 = guest::cpu()->r[14];
    u32 ea_1 = 0;
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 ea_2 = 0;
    u32 r4_1 = 0;
    u32 r5_1 = 0;
    u32 r6_1 = 0;
    if (r2 > 5u) {
        guest::cpu()->r[4] = r4;
        guest::cpu()->r[5] = r5;
        guest::cpu()->r[6] = r6;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    if (r1 == 0) {
        guest::cpu()->r[4] = r4;
        guest::cpu()->r[5] = r5;
        guest::cpu()->r[6] = r6;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    ea_1 = r13 - 0x10;  // (from the original)
    *gptr<u32>(ea_1) = u32(r4);
    *gptr<u32>(ea_1 + 4) = u32(r5);
    *gptr<u32>(ea_1 + 8) = u32(r6);
    *gptr<u32>(ea_1 + 0xc) = u32(r14);  // (from the original)
    r13 = r13 - 0x10;  // (from the original)
    r0_1 = arg0->word_0;
    if (r0_1 != 0) {
        if (r2 != 0) {
            guest::cpu()->r[13] = r13;
            r0_1 = call_002f8574(r0_1, r1, r2, guest::cpu()->r[3]);
            r1_1 = guest::cpu()->r[1];
        }
        *gptr<u32>(r0 + 4u) = u32(r2);
    }
    ea_2 = r13;
    r13 = r13 + 0x10;  // (from the original)
    r4_1 = *gptr<u32>(ea_2);
    r5_1 = *gptr<u32>(ea_2 + 4);
    r6_1 = *gptr<u32>(ea_2 + 8);
    guest::cpu()->r[4] = r4_1;
    guest::cpu()->r[5] = r5_1;
    guest::cpu()->r[6] = r6_1;
    guest::cpu()->r[13] = r13;
    return r0_1;
}

}  // namespace d_0062646c
GUEST_EXPORT(0x0062646c, d_0062646c::f_0062646c);

// f_006264e0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006264e0 {

struct __attribute__((packed)) Object_006264e0_0 {
    u32 word_0;
    u32 word_4;
    u8 byte_8;
    u8 byte_9;
};
GUEST_OFFSET(Object_006264e0_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_006264e0_0, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_006264e0_0, byte_8, 0x8);  // (from the original)
GUEST_OFFSET(Object_006264e0_0, byte_9, 0x9);  // (from the original)


void f_006264e0(gptr<Object_006264e0_0> arg0) {
    arg0->word_0 = u32(0u);
    arg0->word_4 = u32(0u);
    arg0->byte_8 = u8(4u);
    arg0->byte_9 = u8(0u);
    guest::cpu()->r[1] = 0u;
    return;
}

}  // namespace d_006264e0
GUEST_EXPORT(0x006264e0, d_006264e0::f_006264e0);

// f_006265d0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006265d0 {

struct __attribute__((packed)) Object_006265d0_0 {
    u32 word_0;
};
GUEST_OFFSET(Object_006265d0_0, word_0, 0x0);  // (from the original)

inline constexpr guest::Function<0x002f8574, u32(u32, u32, u32, u32)> call_002f8574;  // (from the original)

u32 f_006265d0(gptr<Object_006265d0_0> arg0, u32 r1, u32 r2) {
    u32 r0 = arg0.addr();
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r13 = guest::cpu()->r[13];
    u32 r14 = guest::cpu()->r[14];
    u32 ea_1 = 0;
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 ea_2 = 0;
    u32 r4_1 = 0;
    u32 r5_1 = 0;
    u32 r6_1 = 0;
    if (r1 == 0) {
        guest::cpu()->r[4] = r4;
        guest::cpu()->r[5] = r5;
        guest::cpu()->r[6] = r6;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    if (r2 > 5u) {
        guest::cpu()->r[4] = r4;
        guest::cpu()->r[5] = r5;
        guest::cpu()->r[6] = r6;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    ea_1 = r13 - 0x10;  // (from the original)
    *gptr<u32>(ea_1) = u32(r4);
    *gptr<u32>(ea_1 + 4) = u32(r5);
    *gptr<u32>(ea_1 + 8) = u32(r6);
    *gptr<u32>(ea_1 + 0xc) = u32(r14);  // (from the original)
    r13 = r13 - 0x10;  // (from the original)
    r0_1 = arg0->word_0;
    if (r0_1 != 0) {
        if (r2 != 0) {
            guest::cpu()->r[13] = r13;
            r0_1 = call_002f8574(r0_1, r1, r2, guest::cpu()->r[3]);
            r1_1 = guest::cpu()->r[1];
        }
        *gptr<u32>(r0 + 4u) = u32(r2);
    }
    ea_2 = r13;
    r13 = r13 + 0x10;  // (from the original)
    r4_1 = *gptr<u32>(ea_2);
    r5_1 = *gptr<u32>(ea_2 + 4);
    r6_1 = *gptr<u32>(ea_2 + 8);
    guest::cpu()->r[4] = r4_1;
    guest::cpu()->r[5] = r5_1;
    guest::cpu()->r[6] = r6_1;
    guest::cpu()->r[13] = r13;
    return r0_1;
}

}  // namespace d_006265d0
GUEST_EXPORT(0x006265d0, d_006265d0::f_006265d0);

// f_006267a4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006267a4 {

inline guest::global<u32, 0x0095362c> global_0095362c;  // (from the original)
inline constexpr guest::Function<0x00618728, u32(u32, u32, u32, u32)> call_00618728;  // (from the original)

u32 f_006267a4(u32 r0, u32 r1, u32 r2) {
    u32 r0_1 = 0;
    r0_1 = *global_0095362c;
    return call_00618728(r0_1, r0, r1, r2);
}

}  // namespace d_006267a4
GUEST_EXPORT(0x006267a4, d_006267a4::f_006267a4);

// f_006267c0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006267c0 {

inline guest::global<u32, 0x0095362c> global_0095362c;  // (from the original)

u32 f_006267c0() {
    u32 r0_1 = 0;
    r0_1 = u32(*gptr<u8>(*global_0095362c + 0x23bu));  // (from the original)
    if (r0_1 != 0) {
        r0_1 = 1u;
    }
    return r0_1;
}

}  // namespace d_006267c0
GUEST_EXPORT(0x006267c0, d_006267c0::f_006267c0);

// f_0062680c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0062680c {

inline guest::global<u32, 0x0095362c> global_0095362c;  // (from the original)

u32 f_0062680c() {
    u32 r0 = 0;
    u32 r0_1 = 0;
    u32 zf_1 = 0;
    goto L_62680c;
L_618838:;
    r0_1 = u32(*gptr<u8>(r0 + 0x1f0u));  // (from the original)
    zf_1 = r0_1 == 0;
    if (!zf_1) {
        zf_1 = r0_1 == 1u;
    }
    if (!zf_1) {
        guest::cpu()->r[1] = r0;
        return 0u;
    }
    *gptr<u8>(r0 + 0x1f0u) = u8(2u);  // (from the original)
    *gptr<u8>(r0 + 0x1f1u) = u8(2u);  // (from the original)
    guest::cpu()->r[1] = r0;
    return 1u;
L_62680c:;
    r0 = *global_0095362c;
    guest::preempt();
    goto L_618838;
}

}  // namespace d_0062680c
GUEST_EXPORT(0x0062680c, d_0062680c::f_0062680c);

// f_0062681c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0062681c {

inline guest::global<u32, 0x0095362c> global_0095362c;  // (from the original)
inline constexpr guest::Function<0x0075e048, u32(u32, u32, u32, u32)> call_0075e048;  // (from the original)
inline constexpr guest::Function<0x0075f63c, u32(u32, u32, u32, u32)> call_0075f63c;  // (from the original)

u32 f_0062681c(u32 r0_unused, u32 r1, u32 r2) {
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r1_1 = 0;
    u32 r0_3 = 0;
    u32 r1_2 = 0;
    u32 r0_4 = 0;
    u32 r1_3 = 0;
    guest::cpu()->r[13] -= 8u;
    r0_1 = *global_0095362c;
    r0_2 = call_0075e048(r0_1, r1, r2, guest::cpu()->r[3]);
    r1_1 = guest::cpu()->r[1];
    if (r0_2 == 0) {
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1_1;
        return 1u;
    }
    r0_3 = *global_0095362c;
    if (u32(*gptr<u8>(0x1329du + r0_3)) == 2u) {  // (from the original)
        r1_2 = u32(*gptr<u8>(0x27a3u + r0_3));  // (from the original)
    } else {
        r1_2 = u32(*gptr<u8>(r0_3 + 0x23du));  // (from the original)
    }
    if (r1_2 >= 4u) {
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1_2;
        return 1u;
    }
    r0_4 = call_0075f63c(r0_3, r1_2, 1u, guest::cpu()->r[3]);
    r1_3 = guest::cpu()->r[1];
    if (r0_4 != 0) {
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1_3;
        return 0u;
    }
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1_3;
    return 1u;
}

}  // namespace d_0062681c
GUEST_EXPORT(0x0062681c, d_0062681c::f_0062681c);

// f_00626880: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00626880 {

inline guest::global<u32, 0x0095362c> global_0095362c;  // (from the original)

u32 f_00626880() {
    u32 r0 = 0;
    u32 r1_1 = 0;
    u32 r1_2 = 0;
    u32 r0_1 = 0;
    u32 r1_3 = 0;
    goto L_626880;
L_618864:;
    r1_1 = u32(*gptr<u8>(r0 + 0x1e5u));  // (from the original)
    if (r1_1 >= 4u) {
        guest::cpu()->r[1] = r1_1;
        return 0u;
    }
    r1_2 = r0 + 0x13000u;  // (from the original)
    r0_1 = u32(*gptr<u8>(r0 + 0x214u));  // (from the original)
    r1_3 = u32(*gptr<u8>(r1_2 + 0x268u));  // (from the original)
    if (r1_3 != 0) {
        if (r0_1 <= 8u) {
            guest::cpu()->r[1] = r1_3;
            return 0u;
        }
        guest::cpu()->r[1] = r1_3;
        return 1u;
    }
    if (r0_1 > 4u) {
        guest::cpu()->r[1] = r1_3;
        return 1u;
    }
    guest::cpu()->r[1] = r1_3;
    return 0u;
L_626880:;
    r0 = *global_0095362c;
    guest::preempt();
    goto L_618864;
}

}  // namespace d_00626880
GUEST_EXPORT(0x00626880, d_00626880::f_00626880);

// f_00626890: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00626890 {

inline guest::global<u32, 0x0095362c> global_0095362c;  // (from the original)
inline constexpr guest::Function<0x00618930, u32(u32, u32, u32, u32)> call_00618930;  // (from the original)

u32 f_00626890() {
    u32 r0_1 = 0;
    r0_1 = *global_0095362c;
    return call_00618930(r0_1, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_00626890
GUEST_EXPORT(0x00626890, d_00626890::f_00626890);

// f_006268a0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006268a0 {

inline guest::global<u32, 0x0095362c> global_0095362c;  // (from the original)
inline constexpr guest::Function<0x006189d0, u32(u32, u32, u32, u32)> call_006189d0;  // (from the original)

u32 f_006268a0() {
    u32 r0_1 = 0;
    r0_1 = *global_0095362c;
    return call_006189d0(r0_1, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_006268a0
GUEST_EXPORT(0x006268a0, d_006268a0::f_006268a0);

// f_006268b0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006268b0 {

inline guest::global<u32, 0x0095362c> global_0095362c;  // (from the original)
inline constexpr guest::Function<0x00618a1c, u32(u32, u32, u32, u32)> call_00618a1c;  // (from the original)

u32 f_006268b0(u32 r0) {
    u32 r0_1 = 0;
    r0_1 = *global_0095362c;
    return call_00618a1c(r0_1, r0, guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_006268b0
GUEST_EXPORT(0x006268b0, d_006268b0::f_006268b0);

// f_006268c4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006268c4 {

inline guest::global<u32, 0x0095362c> global_0095362c;  // (from the original)
inline constexpr guest::Function<0x00629438, u32(u32, u32, u32, u32)> call_00629438;  // (from the original)
inline constexpr guest::Function<0x0062bce0, u32(u32, u32, u32, u32)> call_0062bce0;  // (from the original)

u32 f_006268c4(u32 r0_unused, u32 r1) {
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    guest::cpu()->r[13] -= 8u;
    r0_1 = *global_0095362c + 0x28ecu;  // (from the original)
    call_0062bce0(r0_1, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r0_2 = *global_0095362c;
    guest::cpu()->r[13] += 8u;
    r0_3 = r0_2 + 0x7874u;  // (from the original)
    return call_00629438(r0_3, 3u, guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_006268c4
GUEST_EXPORT(0x006268c4, d_006268c4::f_006268c4);

// f_00626930: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00626930 {

inline guest::global<u32, 0x0095362c> global_0095362c;  // (from the original)
inline constexpr guest::Function<0x006295d8, u32(u32, u32, u32, u32)> call_006295d8;  // (from the original)
inline constexpr guest::Function<0x0062bce0, u32(u32, u32, u32, u32)> call_0062bce0;  // (from the original)

u32 f_00626930(u32 r0_unused, u32 r1) {
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    guest::cpu()->r[13] -= 8u;
    r0_1 = *global_0095362c + 0x28ecu;  // (from the original)
    call_0062bce0(r0_1, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r0_2 = *global_0095362c;
    guest::cpu()->r[13] += 8u;
    r0_3 = r0_2 + 0x7874u;  // (from the original)
    return call_006295d8(r0_3, 3u, guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_00626930
GUEST_EXPORT(0x00626930, d_00626930::f_00626930);

// f_0062697c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0062697c {

struct __attribute__((packed)) Object_0062697c_0 {
    u8 unknown_0[0x881b8c];  // (not used here)
    u8 byte_881b8c;
};
GUEST_OFFSET(Object_0062697c_0, byte_881b8c, 0x881b8c);  // (from the original)

inline constexpr guest::Function<0x00626964, u32(u32, u32, u32, u32)> call_00626964;  // (from the original)

u32 f_0062697c(gptr<Object_0062697c_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r4 = guest::cpu()->r[4];
    u32 r13 = guest::cpu()->r[13];
    u32 r14 = guest::cpu()->r[14];
    u32 ea_1 = 0;
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 ea_2 = 0;
    u32 r4_1 = 0;
    if (r0 >= 4u) {
        guest::cpu()->r[4] = r4;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    ea_1 = r13 - 8;
    *gptr<u32>(ea_1) = u32(r4);
    *gptr<u32>(ea_1 + 4) = u32(r14);
    r13 = r13 - 8;
    r0_1 = u32(arg0->byte_881b8c);
    guest::cpu()->r[13] = r13;
    call_00626964(r0_1, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    r0_2 = u32(*gptr<u8>(0x881b90u + r0));  // (from the original)
    ea_2 = r13;
    r13 = r13 + 8;
    r4_1 = *gptr<u32>(ea_2);
    r14 = *gptr<u32>(ea_2 + 4);
    guest::cpu()->r[13] = r13;
    guest::cpu()->r[4] = r4_1;
    return call_00626964(r0_2, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_0062697c
GUEST_EXPORT(0x0062697c, d_0062697c::f_0062697c);

// f_00626bc8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00626bc8 {

inline guest::global<u32, 0x0095362c> global_0095362c;  // (from the original)
inline constexpr guest::Function<0x00626a9c, u32(u32, u32, u32, u32)> call_00626a9c;  // (from the original)

u32 f_00626bc8() {
    u32 r0_1 = 0;
    r0_1 = *global_0095362c;
    return call_00626a9c(r0_1, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_00626bc8
GUEST_EXPORT(0x00626bc8, d_00626bc8::f_00626bc8);

// f_00626bd8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00626bd8 {

inline guest::global<u32, 0x00953864> global_00953864;  // (from the original)
inline guest::global<u32, 0x0095386c> global_0095386c;  // (from the original)
inline constexpr guest::Function<0x0029ce80, u32(u32, u32, u32, u32)> call_0029ce80;  // (from the original)
inline constexpr guest::Function<0x002c2078, u32(u32, u32, u32, u32)> call_002c2078;  // (from the original)
inline constexpr guest::Function<0x00308238, u32(u32, u32, u32, u32)> call_00308238;  // (from the original)
inline constexpr guest::Function<0x004e7d38, u32(u32, u32, u32, u32)> call_004e7d38;  // (from the original)
inline constexpr guest::Function<0x0062697c, u32(u32, u32, u32, u32)> call_0062697c;  // (from the original)

u32 f_00626bd8(u32 r0, u32 r1) {
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r1_2 = 0;
    u32 r0_2 = 0;
    u32 r1_3 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r0_1 = call_0062697c(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_1 = guest::cpu()->r[1];
    call_00308238(r0_1, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_2 = guest::cpu()->r[1];
    r0_2 = *global_00953864;
    call_0029ce80(r0_2, r1_2, guest::cpu()->r[2], guest::cpu()->r[3]);
    call_004e7d38(r0, 0u, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_3 = guest::cpu()->r[1];
    r0_3 = u32(*gptr<u8>(r1 + 1u));
    if (r0_3 == 0) {
        r0_4 = *global_0095386c;
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        return call_002c2078(r0_4, r1_3, guest::cpu()->r[2], guest::cpu()->r[3]);
    }
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1_3;
    return r0_3;
}

}  // namespace d_00626bd8
GUEST_EXPORT(0x00626bd8, d_00626bd8::f_00626bd8);

// f_00626ca4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00626ca4 {

inline guest::global<u32, 0x0095362c> global_0095362c;  // (from the original)

u32 f_00626ca4() {
    u32 r0_1 = 0;
    r0_1 = *global_0095362c;
    *gptr<u8>(r0_1 + 0x221u) = u8(1u);  // (from the original)
    guest::cpu()->r[1] = 1u;
    return r0_1;
}

}  // namespace d_00626ca4
GUEST_EXPORT(0x00626ca4, d_00626ca4::f_00626ca4);

// f_00626cbc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00626cbc {

inline constexpr guest::Function<0x0061a7b0, u32(u32, u32, u32, u32)> call_0061a7b0;  // (from the original)

u32 f_00626cbc(u32 r0, u32 r1) {
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 ea_1 = 0;
    r13 = r13 - 0x10;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_0061a7b0(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r0_1 = *gptr<u32>(r1);
    r1_1 = *gptr<u32>(r1 + 4);
    ea_1 = r0 + 8u;
    *gptr<u32>(ea_1) = u32(r0_1);
    *gptr<u32>(ea_1 + 4) = u32(r1_1);
    *gptr<u32>(r0 + 0x10u) = u32(0u);  // (from the original)
    r13 = r13 + 0x10;  // (from the original)
    guest::cpu()->r[1] = r1_1;
    guest::cpu()->r[13] = r13;
    return 0u;
}

}  // namespace d_00626cbc
GUEST_EXPORT(0x00626cbc, d_00626cbc::f_00626cbc);

// f_00626ce0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00626ce0 {

struct __attribute__((packed)) Object_00626ce0_0 {
    u32 word_0;
    u16 half_4;
    u16 half_6;
    u32 word_8;
    u32 word_c;
    u32 word_10;
};
GUEST_OFFSET(Object_00626ce0_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_00626ce0_0, half_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_00626ce0_0, half_6, 0x6);  // (from the original)
GUEST_OFFSET(Object_00626ce0_0, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Object_00626ce0_0, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Object_00626ce0_0, word_10, 0x10);  // (from the original)

struct __attribute__((packed)) Object_00626ce0_1 {
    u32 word_0;
    u16 half_4;
    u16 half_6;
    u32 word_8;
    u32 word_c;
};
GUEST_OFFSET(Object_00626ce0_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_00626ce0_1, half_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_00626ce0_1, half_6, 0x6);  // (from the original)
GUEST_OFFSET(Object_00626ce0_1, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Object_00626ce0_1, word_c, 0xc);  // (from the original)


void f_00626ce0(gptr<Object_00626ce0_0> arg0, gptr<Object_00626ce0_1> arg1) {
    u32 r2_1 = 0;
    arg0->word_0 = u32(arg1->word_0);
    arg0->half_4 = u16(u32(arg1->half_4));
    arg0->half_6 = u16(u32(arg1->half_6));
    r2_1 = arg1->word_c;
    arg0->word_8 = u32(arg1->word_8);
    arg0->word_c = u32(r2_1);
    arg0->word_10 = u32(0u);
    guest::cpu()->r[1] = 0u;
    return;
}

}  // namespace d_00626ce0
GUEST_EXPORT(0x00626ce0, d_00626ce0::f_00626ce0);

// f_00626d14: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00626d14 {

inline constexpr guest::Function<0x0051ac04, u32(u32, u32, u32, u32)> call_0051ac04;  // (from the original)
inline constexpr guest::Function<0x0061a7b0, u32(u32, u32, u32, u32)> call_0061a7b0;  // (from the original)

u32 f_00626d14(u32 r0, u32 r1) {
    u32 r1_1 = 0;
    guest::cpu()->r[13] -= 8u;
    call_0061a7b0(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_1 = *gptr<u32>(r0 + 0x10u);  // (from the original)
    if (r1_1 != 0) {
        call_0051ac04(0xa22020u, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
        r1_1 = guest::cpu()->r[1];
    }
    *gptr<u32>(r0 + 0x10u) = u32(0u);  // (from the original)
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1_1;
    return 0u;
}

}  // namespace d_00626d14
GUEST_EXPORT(0x00626d14, d_00626d14::f_00626d14);

// f_00626d40: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00626d40 {

struct __attribute__((packed)) Object_00626d40_0 {
    u8 unknown_0[0x8];  // (not used here)
    u32 word_8;
    u32 word_c;
    u32 word_10;
};
GUEST_OFFSET(Object_00626d40_0, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Object_00626d40_0, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Object_00626d40_0, word_10, 0x10);  // (from the original)

inline constexpr guest::Function<0x0051aa84, u32(u32, u32, u32, u32)> call_0051aa84;  // (from the original)
inline constexpr guest::Function<0x0051ad60, u32(u32, u32, u32, u32)> call_0051ad60;  // (from the original)
inline constexpr guest::Function<0x007475e0, u32(u32, u32, u32, u32)> call_007475e0;  // (from the original)

u32 f_00626d40(gptr<Object_00626d40_0> arg0, u32 r1, u32 r2) {
    u32 r0 = arg0.addr();
    u32 r3_1 = 0;
    u32 r2_1 = 0;
    u32 r1_1 = 0;
    u32 res_1 = 0;
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r2_2 = 0;
    u32 r3_2 = 0;
    u32 r1_2 = 0;
    u32 r1_3 = 0;
    u32 r0_3 = 0;
    u32 r1_4 = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r3_1 = ~2u;
    r2_1 = ~0u;
    r1_1 = arg0->word_c ^ r2_1;
    res_1 = arg0->word_8 ^ r3_1 | r1_1;
    if (res_1 != 0) {
        r0_1 = arg0->word_10;
        if (r0_1 == 0) {
            goto L_626db0;
        }
        r0_2 = call_007475e0(r0_1, r1_1, r2_1, r3_1);
        r1_1 = guest::cpu()->r[1];
        r2_2 = guest::cpu()->r[2];
        r3_2 = guest::cpu()->r[3];
        if (r0_2 != 0) {
            r1_2 = *gptr<u32>(r0 + 0x10u);  // (from the original)
            call_0051aa84(0xa22020u, r1_2, r2_2, r3_2);  // (from the original)
            *gptr<u32>(r0 + 0x10u) = u32(0u);  // (from the original)
            goto L_626db0;
        }
        if (*gptr<u32>(r0 + 0x10u) == 0) {  // (from the original)
            goto L_626db0;
        }
    }
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1_1;
    return 0u;
L_626db0:;
    r1_3 = r0 + 8u;
    r0_3 = call_0051ad60(0xa22020u, r1_3, r1, r2);  // (from the original)
    r1_4 = guest::cpu()->r[1];
    *gptr<u32>(r0 + 0x10u) = u32(r0_3);  // (from the original)
    if (r0_3 != 0) {
        r0_3 = 1u;
    }
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1_4;
    return r0_3;
}

}  // namespace d_00626d40
GUEST_EXPORT(0x00626d40, d_00626d40::f_00626d40);

// f_00626df0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00626df0 {

inline guest::global<u32, 0x00952ca0> global_00952ca0;  // (from the original)
inline guest::global<u32, 0x0095362c> global_0095362c;  // (from the original)
inline constexpr guest::Function<0x006177bc, u32(u32, u32, u32, u32)> call_006177bc;  // (from the original)
inline constexpr guest::Function<0x00618dd4, u32(u32, u32, u32, u32)> call_00618dd4;  // (from the original)

u32 f_00626df0(u32 r0_unused, u32 r1) {
    u32 r4_1 = 0;
    u32 r0_1 = 0;
    guest::cpu()->r[13] -= 8u;
    r4_1 = *global_00952ca0;
    if (r4_1 == 0) {
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        return 0x952ca0u;  // (from the original)
    }
    call_006177bc(r4_1, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r0_1 = *global_0095362c;
    guest::cpu()->r[13] += 8u;
    return call_00618dd4(r0_1, r4_1, guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_00626df0
GUEST_EXPORT(0x00626df0, d_00626df0::f_00626df0);

// f_00628518: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00628518 {

struct __attribute__((packed)) Object_00628518_0 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
    u32 word_18;
    u8 unknown_1c[0x10];  // (not used here)
    u8 byte_2c;
    u8 unknown_2d[0x13];  // (not used here)
    u32 word_40;
    u8 byte_44;
};
GUEST_OFFSET(Object_00628518_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_00628518_0, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_00628518_0, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Object_00628518_0, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Object_00628518_0, word_10, 0x10);  // (from the original)
GUEST_OFFSET(Object_00628518_0, word_14, 0x14);  // (from the original)
GUEST_OFFSET(Object_00628518_0, word_18, 0x18);  // (from the original)
GUEST_OFFSET(Object_00628518_0, byte_2c, 0x2c);  // (from the original)
GUEST_OFFSET(Object_00628518_0, word_40, 0x40);  // (from the original)
GUEST_OFFSET(Object_00628518_0, byte_44, 0x44);  // (from the original)


void f_00628518(gptr<Object_00628518_0> arg0) {
    arg0->word_0 = u32(0u);
    arg0->word_4 = u32(0u);
    arg0->word_8 = u32(0u);
    arg0->word_c = u32(0u);
    arg0->word_10 = u32(0u);
    arg0->word_14 = u32(0u);
    arg0->word_18 = u32(0u);
    arg0->byte_2c = u8(4u);
    arg0->word_40 = u32(0u);
    arg0->byte_44 = u8(0u);
    guest::cpu()->r[1] = 0u;
    return;
}

}  // namespace d_00628518
GUEST_EXPORT(0x00628518, d_00628518::f_00628518);

// f_00628afc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00628afc {

inline guest::global<u16, 0x00953600> global_00953600;  // (from the original)
inline constexpr guest::Function<0x00628b0c, u32(u32, u32, u32, u32)> call_00628b0c;  // (from the original)

u32 f_00628afc(u32 r0_unused, u32 r1) {
    *global_00953600 = u16(r1);
    return call_00628b0c(guest::cpu()->r[0], r1, 0x953600u, guest::cpu()->r[3]);  // (from the original)
}

}  // namespace d_00628afc
GUEST_EXPORT(0x00628afc, d_00628afc::f_00628afc);

// f_00629438: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00629438 {

inline guest::global<u32, 0x0095362c> global_0095362c;  // (from the original)
inline constexpr guest::Function<0x006295d8, u32(u32, u32, u32, u32)> call_006295d8;  // (from the original)
inline constexpr guest::Function<0x00629690, u32(u32, u32, u32, u32)> call_00629690;  // (from the original)
inline constexpr guest::Function<0x0062bce0, u32(u32, u32, u32, u32)> call_0062bce0;  // (from the original)
inline constexpr guest::Function<0x00746f10, u32(u32, u32, u32, u32)> call_00746f10;  // (from the original)
inline constexpr guest::Function<0x0075f0b0, u32(u32, u32, u32, u32)> call_0075f0b0;  // (from the original)

u32 f_00629438(u32 r0, u32 r1, u32 r2) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6_1 = 0;
    u32 res_1 = 0;
    u32 r0_1 = 0;
    u32 r2_1 = 0;
    u32 r1_1 = 0;
    u32 res_2 = 0;
    u32 r0_2 = 0;
    u32 res_3 = 0;
    u32 r2_2 = 0;
    u32 r2_3 = 0;
    u32 r2_4 = 0;
    u32 r2_5 = 0;
    u32 r1_2 = 0;
    u32 r2_6 = 0;
    u32 r0_3 = 0;
    u32 res_4 = 0;
    u32 res_5 = 0;
    u32 r0_4 = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r4 = r0;
    r5 = r1;
    if (r1 == 3u) {
        goto L_629468;
    }
    if (r5 == 5u) {
        goto L_629498;
    }
    r0 = call_00746f10(0xa22020u, 0u, r2, guest::cpu()->r[3]);  // (from the original)
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
L_629460:;
    if (r0 == 0) {
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        guest::cpu()->r[1] = r1;
        return r0;
    }
L_629468:;
    r6_1 = lsl_r(1u, r5 & 0xff) & 0xffu;  // (from the original)
    res_1 = r6_1 & 0x3fu;  // (from the original)
    r0 = res_1;
    if (res_1 == 0) {
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r0_1 = call_0075f0b0(r4, r5, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    if (r0_1 == 0) {
        goto L_6294b0;
    }
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return 1u;
L_629498:;
    r0 = call_00746f10(0xa22020u, 1u, r2, guest::cpu()->r[3]);  // (from the original)
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    guest::preempt();
    goto L_629460;
L_6294b0:;
    r1_1 = u32(*gptr<u8>(r4 + 9u));
    res_2 = r6_1 & 0x3eu;  // (from the original)
    r0_2 = res_2;
    if (res_2 != 0) {
        r0_2 = 1u;
    }
    if (r1_1 != 0) {
        res_3 = r1_1 & 0x3eu;  // (from the original)
        r1 = res_3;
        if (res_3 != 0) {
            r1 = 1u;
        }
        if (r1 == r0_2) {
            goto L_629588;
        }
        if (r0_2 != 0) {
            call_006295d8(r4, 0u, r2_1, guest::cpu()->r[3]);
            r1 = guest::cpu()->r[1];
            guest::cpu()->r[13] += 0x10u;  // (from the original)
            guest::cpu()->r[1] = r1;
            return 0u;
        }
        call_006295d8(r4, 1u, r2_1, guest::cpu()->r[3]);
        r2_2 = guest::cpu()->r[2];
        call_006295d8(r4, 2u, r2_2, guest::cpu()->r[3]);
        r2_3 = guest::cpu()->r[2];
        call_006295d8(r4, 3u, r2_3, guest::cpu()->r[3]);
        r2_4 = guest::cpu()->r[2];
        call_006295d8(r4, 4u, r2_4, guest::cpu()->r[3]);
        r2_5 = guest::cpu()->r[2];
        call_006295d8(r4, 5u, r2_5, guest::cpu()->r[3]);
        r1_2 = guest::cpu()->r[1];
        r2_6 = guest::cpu()->r[2];
        r0_3 = *global_0095362c + 0x28ecu;  // (from the original)
        call_0062bce0(r0_3, r1_2, r2_6, guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        guest::cpu()->r[1] = r1;
        return 0u;
    }
    r1 = u32(*gptr<u8>(r4 + 8u));
    if (r1 == 0) {
        goto L_629588;
    }
    res_4 = r1 & 0x3eu;  // (from the original)
    r2_1 = res_4;
    if (res_4 != 0) {
        r2_1 = 1u;
    }
    if (r2_1 == r0_2) {
        goto L_629588;
    }
    res_5 = r1 & 0x80u;  // (from the original)
    r0 = res_5;
    if (res_5 == 0) {
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        guest::cpu()->r[1] = r1;
        return r0;
    }
    call_00629690(r4, r6_1, r2_1, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r0 = 1u;
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
L_629588:;
    if (r0_2 == 0) {
        goto L_6295a4;
    }
    call_00629690(r4, r6_1, r2_1, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return 1u;
L_6295a4:;
    r0_4 = u32(*gptr<u8>(r4 + 8u));
    if (r0_4 == 0) {
        goto L_6295c0;
    }
    if (r0_4 == r6_1) {
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        guest::cpu()->r[1] = r1;
        return 1u;
    }
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return 0u;
L_6295c0:;
    *gptr<u8>(r4 + 8u) = u8(r6_1);
    *gptr<u8>(r4 + 0xau) = u8(0u);  // (from the original)
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return 1u;
}

}  // namespace d_00629438
GUEST_EXPORT(0x00629438, d_00629438::f_00629438);

// f_006295d8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006295d8 {

inline constexpr guest::Function<0x00629690, u32(u32, u32, u32, u32)> call_00629690;  // (from the original)
inline constexpr guest::Function<0x00746f10, u32(u32, u32, u32, u32)> call_00746f10;  // (from the original)
inline constexpr guest::Function<0x0075f0b0, u32(u32, u32, u32, u32)> call_0075f0b0;  // (from the original)

u32 f_006295d8(u32 r0, u32 r1) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r5 = r0;
    r4 = r1;
    if (r1 == 3u) {
        goto L_629608;
    }
    if (r4 == 5u) {
        goto L_629648;
    }
    r0 = call_00746f10(0xa22020u, 0u, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    r1 = guest::cpu()->r[1];
L_629600:;
    if (r0 == 0) {
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        guest::cpu()->r[1] = r1;
        return r0;
    }
L_629608:;
    r0_1 = call_0075f0b0(r5, r4, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0_1 == 0) {
        goto L_629640;
    }
    r0_2 = lsl_r(1u, r4 & 0xff) & 0xffu;  // (from the original)
    r1 = r0_2 | 0x80u;  // (from the original)
    if ((r0_2 & 0x3eu) == 0) {  // (from the original)
        goto L_629660;
    }
    call_00629690(r5, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
L_629640:;
    r0 = 1u;
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
L_629648:;
    r0 = call_00746f10(0xa22020u, 1u, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    r1 = guest::cpu()->r[1];
    guest::preempt();
    goto L_629600;
L_629660:;
    r0_3 = u32(*gptr<u8>(r5 + 8u));
    if (r0_3 != 0) {
        if (r0_3 == r1) {
            guest::preempt();
            goto L_629640;
        } else {
        }
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        guest::cpu()->r[1] = r1;
        return 0u;
    }
    *gptr<u8>(r5 + 8u) = u8(r1);
    *gptr<u8>(r5 + 0xau) = u8(0u);  // (from the original)
    guest::preempt();
    goto L_629640;
}

}  // namespace d_006295d8
GUEST_EXPORT(0x006295d8, d_006295d8::f_006295d8);

// f_00629690: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00629690 {


u32 f_00629690(u32 r0, u32 r1) {
    u32 r2 = 0;
    u32 r3 = 0;
    u32 r5 = guest::cpu()->r[5];
    u32 r12 = 0;
    u32 res_1 = 0;
    u32 r12_1 = 0;
    u32 res_2 = 0;
    u32 res_3 = 0;
    u32 res_4 = 0;
    guest::cpu()->r[13] -= 8u;
    if ((r1 & 0x3fu) == 0) {  // (from the original)
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        return 0u;
    }
    r12 = r1 & 0x7fu;  // (from the original)
    r5 = (r1 & 0x80u) >> 7;  // (from the original)
    r3 = r0 + 7u;
    r2 = 7u;
L_6296b0:;
    if (r12 != (u32(*gptr<u8>(r3)) & 0x7fu)) {  // (from the original)
        goto L_629738;
    }
    if (r5 == (u32(*gptr<u8>(r3)) & 0x80u) >> 7) {  // (from the original)
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        return 1u;
    }
    if (r2 >= 8u) {
        goto L_629748;
    }
    r3 = r0 + r2;
    r2 = 7u - r2;
    if (r2 == 0 || r2 >> 0x1f != (r2 & (r2 ^ r2)) >> 0x1f) {  // (from the original)
        goto L_62972c;
    }
    r0 = r3;
    if ((r2 & 1u) != 0) {
        *gptr<u8>(r0) = u8(u32(*gptr<u8>(r0 + 1u)));
        r0 = r3 + 1u;
    }
    res_1 = u32(s32(r2) >> 1);
    r1 = res_1;
    if (res_1 == 0) {
        goto L_629728;
    }
    do {
L_62970c:;
        r12_1 = u32(*gptr<u8>(r0 + 2u));
        res_2 = r1 - 1u;
        r1 = res_2;
        *gptr<u8>(r0) = u8(u32(*gptr<u8>(r0 + 1u)));
        *gptr<u8>(r0 + 1u) = u8(r12_1);
        r0 = r0 + 2u;
        guest::preempt();
    } while (res_2 != 0);
L_629728:;
    r3 = r3 + r2;
L_62972c:;
    *gptr<u8>(r3) = u8(0u);
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1;
    return 1u;
L_629738:;
    r2 = r2 - 1u;
    res_3 = r2 + 1u;
    r3 = r3 - 1u;
    if (res_3 != 0 && res_3 >> 0x1f == ((r2 ^ res_3) & (1u ^ res_3)) >> 0x1f) {  // (from the original)
        guest::preempt();
        goto L_6296b0;
    }
L_629748:;
    if (u32(*gptr<u8>(r0 + 8u)) != r1) {
        r3 = r0;
        r2 = 0u;
        goto L_629768;
    }
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1;
    return 1u;
L_629768:;
    if (u32(*gptr<u8>(r3)) == 0) {
        goto L_629790;
    }
    r2 = r2 + 1u;
    res_4 = r2 - 8u;
    r3 = r3 + 1u;
    if (res_4 >> 0x1f != ((r2 ^ 8u) & (r2 ^ res_4)) >> 0x1f) {  // (from the original)
        guest::preempt();
        goto L_629768;
    }
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1;
    return 0u;
L_629790:;
    if (r2 >= 8u) {
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        return 0u;
    } else {
        *gptr<u8>(r0 + r2) = u8(r1);
    }
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1;
    return 1u;
}

}  // namespace d_00629690
GUEST_EXPORT(0x00629690, d_00629690::f_00629690);

// f_006297a8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006297a8 {

inline constexpr guest::Function<0x0050d368, u32(u32, u32, u32, u32)> call_0050d368;  // (from the original)
inline constexpr guest::Function<0x00623f34, u32(u32, u32, u32, u32)> call_00623f34;  // (from the original)
inline constexpr guest::Function<0x00623fb8, u32(u32, u32, u32, u32)> call_00623fb8;  // (from the original)
inline constexpr guest::Function<0x00624008, u32(u32, u32, u32, u32)> call_00624008;  // (from the original)
inline constexpr guest::Function<0x00624024, u32(u32, u32, u32, u32)> call_00624024;  // (from the original)

u32 f_006297a8(u32 r0_unused, u32 r1, u32 r2) {
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r0_2 = 0;
    u32 r2_2 = 0;
    u32 r1_2 = 0;
    u32 r0_3 = 0;
    u32 r1_3 = 0;
    u32 r1_4 = 0;
    u32 r2_3 = 0;
    u32 r0_4 = 0;
    u32 r0_5 = 0;
    u32 r1_5 = 0;
    r13 = r13 - 0x38u;  // (from the original)
    r0_1 = r13 + 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_00624008(r0_1, r1, r2, guest::cpu()->r[3]);
    r1_1 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    r0_2 = r13 + 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_00623f34(r0_2, r1_1, r2_1, guest::cpu()->r[3]);
    r2_2 = guest::cpu()->r[2];
    r1_2 = r13 + 0x28u;  // (from the original)
    r0_3 = r13;
    guest::cpu()->r[13] = r13;
    call_00623fb8(r0_3, r1_2, r2_2, guest::cpu()->r[3]);
    r1_3 = r13;
    guest::cpu()->r[13] = r13;
    call_0050d368(0xa22020u, r1_3, 0x10u, guest::cpu()->r[3]);  // (from the original)
    r1_4 = guest::cpu()->r[1];
    r2_3 = guest::cpu()->r[2];
    r0_4 = r13 + 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_5 = call_00624024(r0_4, r1_4, r2_3, guest::cpu()->r[3]);
    r1_5 = guest::cpu()->r[1];
    r13 = r13 + 0x38u;  // (from the original)
    guest::cpu()->r[1] = r1_5;
    guest::cpu()->r[13] = r13;
    return r0_5;
}

}  // namespace d_006297a8
GUEST_EXPORT(0x006297a8, d_006297a8::f_006297a8);

// f_006298a8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006298a8 {

struct __attribute__((packed)) Object_006298a8_0 {
    u32 word_0;
    u32 word_4;
    u8 byte_8;
    u8 byte_9;
    u8 byte_a;
};
GUEST_OFFSET(Object_006298a8_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_006298a8_0, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_006298a8_0, byte_8, 0x8);  // (from the original)
GUEST_OFFSET(Object_006298a8_0, byte_9, 0x9);  // (from the original)
GUEST_OFFSET(Object_006298a8_0, byte_a, 0xa);  // (from the original)


void f_006298a8(gptr<Object_006298a8_0> arg0) {
    arg0->word_0 = u32(0u);
    arg0->word_4 = u32(0u);
    arg0->byte_8 = u8(4u);
    arg0->byte_9 = u8(4u);
    arg0->byte_a = u8(3u);
    guest::cpu()->r[1] = 0u;
    return;
}

}  // namespace d_006298a8
GUEST_EXPORT(0x006298a8, d_006298a8::f_006298a8);

// f_006298cc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006298cc {

inline constexpr guest::Function<0x00626cbc, u32(u32, u32, u32, u32)> call_00626cbc;  // (from the original)
inline constexpr guest::Function<0x0062a724, u32(u32, u32, u32, u32)> call_0062a724;  // (from the original)
inline constexpr guest::Function<0x00746e74, u32(u32, u32, u32, u32)> call_00746e74;  // (from the original)
inline constexpr guest::Function<0x00746f3c, u32(u32, u32, u32, u32)> call_00746f3c;  // (from the original)
inline constexpr guest::Function<0x00746fb4, u32(u32, u32, u32, u32)> call_00746fb4;  // (from the original)

u32 f_006298cc(u32 r0, u32 r1) {
    u32 r1_1 = 0;
    u32 r0_1 = 0;
    u32 r1_2 = 0;
    u32 zf_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    guest::cpu()->r[13] -= 8u;
    call_0062a724(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_1 = guest::cpu()->r[1];
    r0_1 = call_00746fb4(0xa22020u, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    r1_2 = guest::cpu()->r[1];
    zf_1 = r0_1 == 0;
    if (zf_1) {
        r0_2 = call_00746f3c(0xa22020u, r1_2, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    } else {
        r0_2 = call_00746e74(0xa22020u, r1_2, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    }
    r0_3 = r0 + 8u;
    guest::cpu()->r[13] += 8u;
    return call_00626cbc(r0_3, r0_2, guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_006298cc
GUEST_EXPORT(0x006298cc, d_006298cc::f_006298cc);

// f_0062a04c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0062a04c {

inline guest::global<u32, 0x0095362c> global_0095362c;  // (from the original)
inline constexpr guest::Function<0x00135740, u32(u32, u32, u32, u32)> call_00135740;  // (from the original)
inline constexpr guest::Function<0x00137e84, u32(u32, u32, u32, u32)> call_00137e84;  // (from the original)
inline constexpr guest::Function<0x00626d14, u32(u32, u32, u32, u32)> call_00626d14;  // (from the original)
inline constexpr guest::Function<0x0062a550, u32(u32, u32, u32, u32)> call_0062a550;  // (from the original)

u32 f_0062a04c(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r13 = guest::cpu()->r[13];
    u32 r14 = guest::cpu()->r[14];
    u32 ea_1 = 0;
    u32 r0_1 = 0;
    u32 r3_1 = 0;
    u32 r2_1 = 0;
    u32 r6_1 = 0;
    u32 res_1 = 0;
    u32 r1_1 = 0;
    u32 r7_1 = 0;
    u32 res_2 = 0;
    u32 r2_2 = 0;
    u32 r1_2 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r1_3 = 0;
    u32 r2_3 = 0;
    u32 r3_2 = 0;
    u32 ea_2 = 0;
    u32 r4_1 = 0;
    u32 r5_1 = 0;
    u32 r6_2 = 0;
    u32 r7_2 = 0;
    if (r1 >= 4u) {
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[4] = r4;
        guest::cpu()->r[5] = r5;
        guest::cpu()->r[6] = r6;
        guest::cpu()->r[7] = r7;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    ea_1 = r13 - 0x14;  // (from the original)
    *gptr<u32>(ea_1) = u32(r4);
    *gptr<u32>(ea_1 + 4) = u32(r5);
    *gptr<u32>(ea_1 + 8) = u32(r6);
    *gptr<u32>(ea_1 + 0xc) = u32(r7);  // (from the original)
    *gptr<u32>(ea_1 + 0x10) = u32(r14);  // (from the original)
    r13 = r13 - 0x20u;  // (from the original)
    r0_1 = *global_0095362c + 0x13280u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_00135740(r0_1, r1, r2, r3);
    r3_1 = guest::cpu()->r[3];
    r2_1 = r1 + (r1 << 1);
    r6_1 = r0 + (r2_1 << 3);
    res_1 = r6_1 + 8u;
    r1_1 = res_1;
    if (res_1 == 0) {
        goto L_62a0e8;
    }
    r7_1 = ~2u;
    r3_1 = *gptr<u32>(r1_1 + 8u) ^ r7_1;
    res_2 = *gptr<u32>(r1_1 + 0xcu) ^ ~0u | r3_1;  // (from the original)
    r2_1 = res_2;
    if (res_2 == 0) {
        goto L_62a0e8;
    }
    r2_2 = *gptr<u32>(r1_1 + 0xcu);  // (from the original)
    *gptr<u32>(r13) = u32(*gptr<u32>(r1_1 + 8u));
    *gptr<u32>(r13 + 4) = u32(r2_2);
    r1_2 = r13;
    guest::cpu()->r[13] = r13;
    r0_2 = call_0062a550(r0, r1_2, r2_2, r3_1);
    r1_1 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    if (r0_2 == 0) {
        goto L_62a0e8;
    }
    r2_1 = ~2u;
    r3_1 = r0_2 + 4u;
    r1_1 = ~0u;
    *gptr<u32>(r0_2) = u32(r2_1);
    *gptr<u32>(r3_1) = u32(r1_1);
    *gptr<u32>(r3_1 + 4) = u32(0u);
    *gptr<u32>(r0_2 + 0xcu) = u32(0u);  // (from the original)
L_62a0e8:;
    r0_3 = r6_1 + 8u;
    guest::cpu()->r[13] = r13;
    call_00626d14(r0_3, r1_1, r2_1, r3_1);
    r1_3 = guest::cpu()->r[1];
    r2_3 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    r13 = r13 + 0xcu;  // (from the original)
    ea_2 = r13;
    r13 = r13 + 0x14;  // (from the original)
    r4_1 = *gptr<u32>(ea_2);
    r5_1 = *gptr<u32>(ea_2 + 4);
    r6_2 = *gptr<u32>(ea_2 + 8);
    r7_2 = *gptr<u32>(ea_2 + 0xc);  // (from the original)
    r14 = *gptr<u32>(ea_2 + 0x10);  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->r[4] = r4_1;
    guest::cpu()->r[5] = r5_1;
    guest::cpu()->r[6] = r6_2;
    guest::cpu()->r[7] = r7_2;
    return call_00137e84(r0_1, r1_3, r2_3, r3_2);
}

}  // namespace d_0062a04c
GUEST_EXPORT(0x0062a04c, d_0062a04c::f_0062a04c);

// f_0062a18c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0062a18c {

inline guest::global<u32, 0x0095362c> global_0095362c;  // (from the original)
inline constexpr guest::Function<0x00135740, u32(u32, u32, u32, u32)> call_00135740;  // (from the original)
inline constexpr guest::Function<0x00137e84, u32(u32, u32, u32, u32)> call_00137e84;  // (from the original)
inline constexpr guest::Function<0x00301d0d, u32(u32, u32, u32, u32)> call_00301d0c;  // (from the original)
inline constexpr guest::Function<0x003081b4, u32(u32, u32, u32, u32)> call_003081b4;  // (from the original)
inline constexpr guest::Function<0x00624aa4, u32(u32, u32, u32, u32)> call_00624aa4;  // (from the original)
inline constexpr guest::Function<0x00624b24, u32(u32, u32, u32, u32)> call_00624b24;  // (from the original)
inline constexpr guest::Function<0x00624c78, u32(u32, u32, u32, u32)> call_00624c78;  // (from the original)
inline constexpr guest::Function<0x00624c90, u32(u32, u32, u32, u32)> call_00624c90;  // (from the original)
inline constexpr guest::Function<0x00626cbc, u32(u32, u32, u32, u32)> call_00626cbc;  // (from the original)
inline constexpr guest::Function<0x00626d14, u32(u32, u32, u32, u32)> call_00626d14;  // (from the original)
inline constexpr guest::Function<0x0062a550, u32(u32, u32, u32, u32)> call_0062a550;  // (from the original)

u32 f_0062a18c(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r9 = guest::cpu()->r[9];
    u32 r10 = guest::cpu()->r[10];
    u32 r11 = guest::cpu()->r[11];
    u32 r13 = guest::cpu()->r[13];
    u32 r14 = guest::cpu()->r[14];
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r0_2 = 0;
    u32 r3_2 = 0;
    u32 r1_2 = 0;
    u32 r0_3 = 0;
    u32 ea_1 = 0;
    u32 r0_4 = 0;
    u32 r1_3 = 0;
    u32 ea_2 = 0;
    u32 ea_3 = 0;
    u32 r8_1 = 0;
    u32 res_1 = 0;
    u32 ea_4 = 0;
    u32 r3_3 = 0;
    u32 r12_1 = 0;
    u32 ea_5 = 0;
    u32 res_2 = 0;
    u32 r3_4 = 0;
    u32 res_3 = 0;
    u32 ea_6 = 0;
    u32 r0_5 = 0;
    u32 ea_7 = 0;
    u32 res_4 = 0;
    u32 ea_8 = 0;
    u32 res_5 = 0;
    u32 ea_9 = 0;
    u32 res_6 = 0;
    u32 res_7 = 0;
    u32 r1_4 = 0;
    u32 r0_6 = 0;
    u32 r1_5 = 0;
    u32 r8_2 = 0;
    u32 r0_7 = 0;
    u32 r2_2 = 0;
    u32 r3_5 = 0;
    u32 r1_6 = 0;
    u32 r0_8 = 0;
    u32 r2_3 = 0;
    u32 r3_6 = 0;
    u32 r1_7 = 0;
    u32 r0_9 = 0;
    u32 r2_4 = 0;
    u32 r3_7 = 0;
    u32 r1_8 = 0;
    u32 r0_10 = 0;
    u32 r2_5 = 0;
    u32 r3_8 = 0;
    u32 r1_9 = 0;
    u32 r0_11 = 0;
    u32 r2_6 = 0;
    u32 r3_9 = 0;
    u32 r1_10 = 0;
    u32 r0_12 = 0;
    u32 r8_3 = 0;
    u32 r0_13 = 0;
    u32 r2_7 = 0;
    u32 r3_10 = 0;
    u32 r1_11 = 0;
    u32 r8_4 = 0;
    u32 res_8 = 0;
    u32 ea_10 = 0;
    u32 res_9 = 0;
    u32 ea_11 = 0;
    u32 r1_12 = 0;
    u32 r1_13 = 0;
    u32 r0_14 = 0;
    u32 r0_15 = 0;
    u32 r0_16 = 0;
    u32 r1_14 = 0;
    u32 r2_8 = 0;
    u32 r3_11 = 0;
    u32 r0_17 = 0;
    u32 res_10 = 0;
    u32 r1_15 = 0;
    u32 r0_18 = 0;
    u32 r0_19 = 0;
    u32 r1_16 = 0;
    u32 r5_1 = 0;
    u32 r0_20 = 0;
    u32 r0_21 = 0;
    u32 r1_17 = 0;
    u32 r0_22 = 0;
    u32 r1_18 = 0;
    r6 = r0;
    r13 = r13 - 0x78u;  // (from the original)
    r9 = r1;
    r7 = r2;
    r11 = *global_0095362c + 0x13280u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_00135740(r11, r1, r2, r3);
    r0_1 = r13 + 0x18u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_00301d0c(r0_1, 0x151578u, 8u, 4u);  // (from the original)
    r1_1 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    *gptr<u32>(r13 + 0x20u) = u32(0u);  // (from the original)
    *gptr<u32>(r13 + 0x18u) = u32(0u);  // (from the original)
    *gptr<u32>(r13 + 0x1cu) = u32(0u);  // (from the original)
    *gptr<u32>(r13 + 0x34u) = u32(0u);  // (from the original)
    r5 = 0u;
    r0_2 = r13 + 0x40u;  // (from the original)
    *gptr<u32>(r13 + 0x24u) = u32(0u);  // (from the original)
    *gptr<u32>(r13 + 0x28u) = u32(0u);  // (from the original)
    *gptr<u32>(r13 + 0x2cu) = u32(0u);  // (from the original)
    *gptr<u32>(r13 + 0x30u) = u32(0u);  // (from the original)
    *gptr<u32>(r13 + 0x48u) = u32(0u);  // (from the original)
    guest::cpu()->r[13] = r13;
    call_00624c90(r0_2, r1_1, r2_1, r3_1);
    if (r9 == 0) {
        r9 = r13 + 0x48u;  // (from the original)
    }
    r4 = 0u;
    r10 = r13 + 0x18u;  // (from the original)
L_62a210:;
    r3_2 = r13 + 0x10u;  // (from the original)
    *gptr<u32>(r3_2) = u32(0u);
    *gptr<u32>(r3_2 + 4) = u32(0u);
    r1_2 = r7 + (r4 << 3);
    r0_3 = r13 + 0x10u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_003081b4(r0_3, r1_2, 0u, r3_2);
    ea_1 = r13 + 0x10u;  // (from the original)
    r0_4 = *gptr<u32>(ea_1);
    r1_3 = *gptr<u32>(ea_1 + 4);
    r2 = r6 + (r4 + (r4 << 1) << 3);
    ea_2 = r10 + (r4 << 3);
    *gptr<u32>(ea_2) = u32(r0_4);
    *gptr<u32>(ea_2 + 4) = u32(r1_3);
    ea_3 = r2 + 0x10u;  // (from the original)
    r8_1 = ~2u;
    res_1 = *gptr<u32>(ea_3) ^ r8_1 | *gptr<u32>(ea_3 + 4) ^ ~0u;
    if (res_1 == 0) {
        goto L_62a434;
    }
    ea_4 = r13 + 0x10u;  // (from the original)
    r3_3 = *gptr<u32>(ea_4);
    r12_1 = *gptr<u32>(ea_4 + 4);
    ea_5 = r2 + 0x10u;  // (from the original)
    r1 = *gptr<u32>(ea_5 + 4);
    r3 = r3_3 ^ *gptr<u32>(ea_5);
    res_2 = r1 ^ r12_1 | r3;
    if (res_2 == 0) {
        goto L_62a468;
    }
    r3_4 = ~2u;
    res_3 = *gptr<u32>(r13 + 0x10u) ^ r3_4 | r12_1 ^ ~0u;  // (from the original)
    if (res_3 != 0) {
        ea_6 = r2 + 0x10u;  // (from the original)
        r0_5 = *gptr<u32>(ea_6);
        r1 = *gptr<u32>(ea_6 + 4);
        ea_7 = r6 + 0x70u;  // (from the original)
        r3 = *gptr<u32>(ea_7 + 4) ^ r1;
        res_4 = *gptr<u32>(ea_7) ^ r0_5 | r3;
        r2 = res_4;
        if (res_4 == 0) {
            goto L_62a48c;
        }
        ea_8 = r6 + 0x80u;  // (from the original)
        r3 = *gptr<u32>(ea_8 + 4) ^ r1;
        res_5 = *gptr<u32>(ea_8) ^ r0_5 | r3;
        r2 = res_5;
        if (res_5 == 0) {
            goto L_62a48c;
        }
        ea_9 = r6 + 0x90u;  // (from the original)
        r3 = *gptr<u32>(ea_9 + 4) ^ r1;
        res_6 = *gptr<u32>(ea_9) ^ r0_5 | r3;
        r2 = res_6;
        if (res_6 == 0) {
            goto L_62a48c;
        }
        r3 = *gptr<u32>(r6 + 0xa0u);  // (from the original)
        r2 = *gptr<u32>(r6 + 0xa4u);  // (from the original)
        r1 = r1 ^ r2;
        res_7 = r0_5 ^ r3 | r1;
        if (res_7 == 0) {
            goto L_62a48c;
        }
        r1_4 = r4 & 0xffu;  // (from the original)
        *gptr<u32>(r9) = u32(*gptr<u32>(r9) + 1u);
        r0_6 = r13 + 0x40u;  // (from the original)
        guest::cpu()->r[13] = r13;
        call_00624aa4(r0_6, r1_4, r2, r3);
        r2 = guest::cpu()->r[2];
        r3_4 = guest::cpu()->r[3];
    }
    *gptr<u32>(r13 + 4u) = u32(r4 & 0xffu);  // (from the original)
    r1_5 = *gptr<u32>(r13 + 4u);
    r8_2 = *global_0095362c;
    r0_7 = 0x13272u + r8_2;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_00624b24(r0_7, r1_5, r2, r3_4);
    r2_2 = guest::cpu()->r[2];
    r3_5 = guest::cpu()->r[3];
    r1_6 = *gptr<u32>(r13 + 4u);
    r0_8 = 0x13276u + r8_2;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_00624b24(r0_8, r1_6, r2_2, r3_5);
    r2_3 = guest::cpu()->r[2];
    r3_6 = guest::cpu()->r[3];
    r1_7 = *gptr<u32>(r13 + 4u);
    r0_9 = r8_2 + 0x13274u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_00624b24(r0_9, r1_7, r2_3, r3_6);
    r2_4 = guest::cpu()->r[2];
    r3_7 = guest::cpu()->r[3];
    r1_8 = *gptr<u32>(r13 + 4u);
    r0_10 = r8_2 + 0x13278u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_00624b24(r0_10, r1_8, r2_4, r3_7);
    r2_5 = guest::cpu()->r[2];
    r3_8 = guest::cpu()->r[3];
    r1_9 = *gptr<u32>(r13 + 4u);
    r0_11 = 0x1327au + r8_2;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_00624b24(r0_11, r1_9, r2_5, r3_8);
    r2_6 = guest::cpu()->r[2];
    r3_9 = guest::cpu()->r[3];
    r1_10 = *gptr<u32>(r13 + 4u);
    r0_12 = r8_2 + 0x1327cu;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_00624b24(r0_12, r1_10, r2_6, r3_9);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r8_3 = *gptr<u32>(r13 + 4u);
    if (r8_3 >= 4u) {
        goto L_62a42c;
    }
    r0_13 = *global_0095362c + 0x13280u;  // (from the original)
    *gptr<u32>(r13 + 0x38u) = u32(r0_13);  // (from the original)
    guest::cpu()->r[13] = r13;
    call_00135740(r0_13, r1, r2, r3);
    r2_7 = guest::cpu()->r[2];
    r3_10 = guest::cpu()->r[3];
    r1_11 = r8_3 + (r8_3 << 1);
    r14 = r6;
    r8_4 = r6 + (r1_11 << 3);
    res_8 = r8_4 + 8u;
    if (res_8 == 0) {
        goto L_62a418;
    }
    r3_10 = ~2u;
    ea_10 = res_8 + 8u;
    r2_7 = *gptr<u32>(ea_10 + 4) ^ ~0u;
    res_9 = *gptr<u32>(ea_10) ^ r3_10 | r2_7;
    r1_11 = res_9;
    if (res_9 == 0) {
        goto L_62a418;
    }
    ea_11 = res_8 + 8u;
    r1_12 = *gptr<u32>(ea_11 + 4);
    *gptr<u32>(r13) = u32(*gptr<u32>(ea_11));
    *gptr<u32>(r13 + 4) = u32(r1_12);
    r1_13 = r13;
    r0_14 = r14;
    guest::cpu()->r[13] = r13;
    r0_15 = call_0062a550(r0_14, r1_13, r2_7, r3_10);
    r1_11 = guest::cpu()->r[1];
    r2_7 = guest::cpu()->r[2];
    r3_10 = guest::cpu()->r[3];
    if (r0_15 == 0) {
        goto L_62a418;
    }
    r2_7 = ~0u;
    *gptr<u32>(r0_15) = u32(~2u);
    *gptr<u32>(r0_15 + 4) = u32(r2_7);
    r1_11 = 0u;
    *gptr<u32>(r0_15 + 8u) = u32(r1_11);
    *gptr<u32>(r0_15 + 0xcu) = u32(r1_11);  // (from the original)
L_62a418:;
    r0_16 = r8_4 + 8u;
    guest::cpu()->r[13] = r13;
    call_00626d14(r0_16, r1_11, r2_7, r3_10);
    r1_14 = guest::cpu()->r[1];
    r2_8 = guest::cpu()->r[2];
    r3_11 = guest::cpu()->r[3];
    r0_17 = *gptr<u32>(r13 + 0x38u);  // (from the original)
    guest::cpu()->r[13] = r13;
    call_00137e84(r0_17, r1_14, r2_8, r3_11);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
L_62a42c:;
    r5 = r5 + 1u;
    goto L_62a468;
L_62a434:;
    r2 = ~2u;
    r3 = ~0u;
    r1 = r1_3 ^ r3;
    res_10 = r0_4 ^ r2 | r1;
    r5 = r5 + 1u;
    if (res_10 == 0) {
        goto L_62a468;
    }
    r1_15 = r4 & 0xffu;  // (from the original)
    *gptr<u32>(r9) = u32(*gptr<u32>(r9) + 1u);
    r0_18 = r13 + 0x40u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_00624aa4(r0_18, r1_15, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
L_62a468:;
    r4 = r4 + 1u;
    if (s32(r4) < s32(4u)) {
        guest::preempt();
        goto L_62a210;
    }
    r0_19 = *gptr<u32>(r9);
    if (r0_19 == 0) {
        goto L_62a4d8;
    }
    if (r0_19 <= r5) {
        r4 = 0u;
        goto L_62a4a0;
    }
L_62a48c:;
    guest::cpu()->r[13] = r13;
    call_00137e84(r11, r1, r2, r3);
    r1_16 = guest::cpu()->r[1];
    r13 = r13 + 0x78u;  // (from the original)
    guest::cpu()->r[1] = r1_16;
    guest::cpu()->r[13] = r13;
    return 0u;
L_62a4a0:;
    r5_1 = u32(*gptr<u8>(r13 + 0x40u));  // (from the original)
    r0_20 = r4 & 0xffu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_21 = call_00624c78(r0_20, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if ((r0_21 & r5_1) != 0) {
        r1_17 = r10 + (r4 << 3);
        r0_22 = r6 + (r4 + (r4 << 1) << 3) + 8u;
        guest::cpu()->r[13] = r13;
        call_00626cbc(r0_22, r1_17, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
    }
    r4 = r4 + 1u;
    if (s32(r4) < s32(4u)) {
        guest::preempt();
        goto L_62a4a0;
    }
L_62a4d8:;
    guest::cpu()->r[13] = r13;
    call_00137e84(r11, r1, r2, r3);
    r1_18 = guest::cpu()->r[1];
    r13 = r13 + 0x78u;  // (from the original)
    guest::cpu()->r[1] = r1_18;
    guest::cpu()->r[13] = r13;
    return 1u;
}

}  // namespace d_0062a18c
GUEST_EXPORT(0x0062a18c, d_0062a18c::f_0062a18c);

// f_0062a5cc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0062a5cc {

inline guest::global<u32, 0x0095362c> global_0095362c;  // (from the original)
inline constexpr guest::Function<0x00135740, u32(u32, u32, u32, u32)> call_00135740;  // (from the original)
inline constexpr guest::Function<0x00137e84, u32(u32, u32, u32, u32)> call_00137e84;  // (from the original)
inline constexpr guest::Function<0x0061a7b0, u32(u32, u32, u32, u32)> call_0061a7b0;  // (from the original)
inline constexpr guest::Function<0x0075f5c0, u32(u32, u32, u32, u32)> call_0075f5c0;  // (from the original)

u32 f_0062a5cc(u32 r0, u32 r1, u32 r2, u32 r3, float S0) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r0_1 = 0;
    float S0_1 = 0;
    u32 r3_1 = 0;
    u32 r2_1 = 0;
    u32 r1_1 = 0;
    u32 res_1 = 0;
    u32 r0_2 = 0;
    u32 res_2 = 0;
    u32 r2_2 = 0;
    u32 r0_3 = 0;
    u32 r7_1 = 0;
    u32 res_3 = 0;
    u32 r6_1 = 0;
    u32 r12_1 = 0;
    u32 r0_4 = 0;
    guest::cpu()->r[13] -= 0x18u;  // (from the original)
    r4 = r0;
    r0_1 = *global_0095362c + 0x13280u;  // (from the original)
    r5 = r0_1;
    guest::cpu()->s[0] = S0;
    call_00135740(r0_1, r1, r2, r3);
    S0_1 = guest::cpu()->s[0];
    r3_1 = ~2u;
    r2_1 = ~0u;
    r1_1 = *gptr<u32>(r1 + 4) ^ r2_1;
    res_1 = *gptr<u32>(r1) ^ r3_1 | r1_1;
    if (res_1 == 0) {
        goto L_62a688;
    }
    guest::cpu()->s[0] = S0_1;
    r0_2 = call_0075f5c0(r4, r1, r2_1, r3_1);
    r1_1 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    S0_1 = guest::cpu()->s[0];
    if (r0_2 >= 4u) {
        goto L_62a688;
    }
    res_2 = r0_2 - 3u;
    r1 = r0_2;
    if (res_2 >> 0x1f == ((r0_2 ^ 3u) & (r0_2 ^ res_2)) >> 0x1f) {  // (from the original)
        goto L_62a678;
    }
    do {
L_62a62c:;
        r2_2 = r4 + (r1 << 4);
        r0_3 = r2_2 + 0x78u;  // (from the original)
        r2_1 = r2_2 + 0x68u;  // (from the original)
        S0_1 = std::bit_cast<float>(*gptr<u32>(r0_3));
        r3_1 = r4 + (r1 << 2);
        *gptr<u32>(r2_1) = u32(std::bit_cast<u32>(S0_1));
        r7_1 = u32(*gptr<u16>(r0_3 + 4u));
        r1 = r1 + 1u;
        res_3 = r1 - 3u;
        *gptr<u16>(r2_1 + 4u) = u16(r7_1);
        r6_1 = u32(*gptr<u16>(r0_3 + 6u));
        *gptr<u16>(r2_1 + 6u) = u16(r6_1);
        r12_1 = *gptr<u32>(r0_3 + 0xcu);  // (from the original)
        *gptr<u32>(r2_1 + 8u) = u32(*gptr<u32>(r0_3 + 8u));
        *gptr<u32>(r2_1 + 0xcu) = u32(r12_1);  // (from the original)
        *gptr<u32>(r3_1 + 0xa8u) = u32(*gptr<u32>(r3_1 + 0xacu));  // (from the original)
        guest::preempt();
    } while (res_3 >> 0x1f != ((r1 ^ 3u) & (r1 ^ res_3)) >> 0x1f);  // (from the original)
L_62a678:;
    r0_4 = r4 + 0x98u;  // (from the original)
    guest::cpu()->s[0] = S0_1;
    call_0061a7b0(r0_4, r1, r2_1, r3_1);
    r1_1 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    S0_1 = guest::cpu()->s[0];
    *gptr<u32>(r4 + 0xb4u) = u32(0u);  // (from the original)
L_62a688:;
    guest::cpu()->r[13] += 0x18u;  // (from the original)
    guest::cpu()->s[0] = S0_1;
    return call_00137e84(r5, r1_1, r2_1, r3_1);
}

}  // namespace d_0062a5cc
GUEST_EXPORT(0x0062a5cc, d_0062a5cc::f_0062a5cc);

// f_0062a724: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0062a724 {

inline constexpr guest::Function<0x0061a7b0, u32(u32, u32, u32, u32)> call_0061a7b0;  // (from the original)
inline constexpr guest::Function<0x00626d14, u32(u32, u32, u32, u32)> call_00626d14;  // (from the original)

u32 f_0062a724(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 res_1 = 0;
    u32 r12_1 = 0;
    u32 ea_1 = 0;
    u32 ea_2 = 0;
    u32 r0_4 = 0;
    u32 ea_3 = 0;
    u32 ea_4 = 0;
    u32 r4_1 = 0;
    u32 ea_5 = 0;
    u32 ea_6 = 0;
    u32 ea_7 = 0;
    u32 ea_8 = 0;
    u32 ea_9 = 0;
    u32 ea_10 = 0;
    u32 r1_1 = 0;
    u32 ea_11 = 0;
    r13 = r13 - 0x18;  // (from the original)
    r5 = r0;
    r4 = 0u;
    do {
L_62a730:;
        r0_1 = r5 + (r4 + (r4 << 1) << 3) + 8u;
        guest::cpu()->r[13] = r13;
        call_00626d14(r0_1, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r4 = r4 + 1u;
        guest::preempt();
    } while (s32(r4) < s32(4u));
    r4 = 0u;
    r6 = r4;
    do {
L_62a754:;
        r0_2 = r5 + (r4 << 4) + 0x68u;  // (from the original)
        guest::cpu()->r[13] = r13;
        call_0061a7b0(r0_2, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r0_3 = r5 + (r4 << 2);
        r4 = r4 + 1u;
        res_1 = r4 - 4u;
        *gptr<u32>(r0_3 + 0xa8u) = u32(r6);  // (from the original)
        guest::preempt();
    } while (res_1 >> 0x1f != ((r4 ^ 4u) & (r4 ^ res_1)) >> 0x1f);  // (from the original)
    r12_1 = ~0u;
    ea_1 = r5 + 0xb8u;  // (from the original)
    *gptr<u32>(ea_1) = u32(~2u);
    *gptr<u32>(ea_1 + 4) = u32(r12_1);
    ea_2 = r5 + 0xc0u;  // (from the original)
    *gptr<u32>(ea_2) = u32(r6);
    r0_4 = ~2u;
    ea_3 = r5 + 0xc4u;  // (from the original)
    *gptr<u32>(ea_3) = u32(r6);
    ea_4 = r5 + 0xc8u;  // (from the original)
    *gptr<u32>(ea_4) = u32(r0_4);
    *gptr<u32>(ea_4 + 4) = u32(r12_1);
    r4_1 = ~2u;
    ea_5 = r5 + 0xd0u;  // (from the original)
    *gptr<u32>(ea_5) = u32(r6);
    ea_6 = r5 + 0xd4u;  // (from the original)
    *gptr<u32>(ea_6) = u32(r6);
    ea_7 = r5 + 0xd8u;  // (from the original)
    *gptr<u32>(ea_7) = u32(r4_1);
    *gptr<u32>(ea_7 + 4) = u32(r12_1);
    ea_8 = r5 + 0xe0u;  // (from the original)
    *gptr<u32>(ea_8) = u32(r6);
    ea_9 = r5 + 0xe4u;  // (from the original)
    *gptr<u32>(ea_9) = u32(r6);
    ea_10 = r5 + 0xe8u;  // (from the original)
    *gptr<u32>(ea_10) = u32(r4_1);
    *gptr<u32>(ea_10 + 4) = u32(r12_1);
    r1_1 = ~0u;
    *gptr<u32>(r5 + 0xf0u) = u32(r6);  // (from the original)
    *gptr<u32>(r5 + 0xf4u) = u32(r6);  // (from the original)
    *gptr<u8>(r5 + 0x108u) = u8(r6);  // (from the original)
    ea_11 = r5 + 0xf8u;  // (from the original)
    *gptr<u32>(ea_11) = u32(r0_4);
    *gptr<u32>(ea_11 + 4) = u32(r1_1);
    *gptr<u32>(ea_11 + 8) = u32(r4_1);
    *gptr<u32>(ea_11 + 0xc) = u32(r1_1);  // (from the original)
    r13 = r13 + 0x18;  // (from the original)
    guest::cpu()->r[1] = r1_1;
    guest::cpu()->r[13] = r13;
    return r0_4;
}

}  // namespace d_0062a724
GUEST_EXPORT(0x0062a724, d_0062a724::f_0062a724);

// f_0062abd8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0062abd8 {

inline guest::global<u32, 0x0095362c> global_0095362c;  // (from the original)
inline constexpr guest::Function<0x00135740, u32(u32, u32, u32, u32)> call_00135740;  // (from the original)
inline constexpr guest::Function<0x00137e84, u32(u32, u32, u32, u32)> call_00137e84;  // (from the original)
inline constexpr guest::Function<0x00626d40, u32(u32, u32, u32, u32)> call_00626d40;  // (from the original)

u32 f_0062abd8(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 res_1 = 0;
    u32 r0_2 = 0;
    u32 r1_2 = 0;
    u32 r2_2 = 0;
    u32 r3_2 = 0;
    u32 r1_3 = 0;
    u32 r1_4 = 0;
    guest::cpu()->r[13] -= 0x18u;  // (from the original)
    r0_1 = *global_0095362c + 0x13280u;  // (from the original)
    call_00135740(r0_1, r1, r2, r3);
    r1_1 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    if (r1 >= 4u) {
        goto L_62ac3c;
    }
    res_1 = r0 + (r1 + (r1 << 1) << 3) + 8u;
    if (res_1 == 0) {
        goto L_62ac3c;
    }
    r0_2 = call_00626d40(res_1, r2, r3, r3_1);
    r1_2 = guest::cpu()->r[1];
    r2_2 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    call_00137e84(r0_1, r1_2, r2_2, r3_2);
    r1_3 = guest::cpu()->r[1];
    guest::cpu()->r[13] += 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1_3;
    return r0_2;
L_62ac3c:;
    call_00137e84(r0_1, r1_1, r2_1, r3_1);
    r1_4 = guest::cpu()->r[1];
    guest::cpu()->r[13] += 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1_4;
    return 0u;
}

}  // namespace d_0062abd8
GUEST_EXPORT(0x0062abd8, d_0062abd8::f_0062abd8);

// f_0062ac50: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0062ac50 {

inline constexpr guest::Function<0x00301d0d, u32(u32, u32, u32, u32)> call_00301d0c;  // (from the original)
inline constexpr guest::Function<0x0050c988, u32(u32, u32, u32, u32)> call_0050c988;  // (from the original)

u32 f_0062ac50(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r0_5 = 0;
    u32 r0_6 = 0;
    u32 r0_7 = 0;
    u32 r0_8 = 0;
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 ea_1 = 0;
    u32 ea_2 = 0;
    r13 = r13 - 8;
    guest::cpu()->r[13] = r13;
    r0_1 = call_0050c988(r0, r1, r2, r3);
    *gptr<u32>(r0_1) = u32(0x90ac28u);  // (from the original)
    r0_2 = r0_1 + 8u;
    guest::cpu()->r[13] = r13;
    r0_3 = call_00301d0c(r0_2, 0x626dd8u, 0x18u, 4u);  // (from the original)
    r0_4 = r0_3 + 0x60u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_5 = call_00301d0c(r0_4, 0x61a7f4u, 0x10u, 4u);  // (from the original)
    r0_6 = r0_5 + 0x50u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_7 = call_00301d0c(r0_6, 0x62a500u, 0x10u, 4u);  // (from the original)
    r0_8 = r0_7 - 0xb8u;  // (from the original)
    r1_1 = ~2u;
    r2_1 = ~0u;
    ea_1 = r0_8 + 0xf8u;  // (from the original)
    *gptr<u32>(ea_1) = u32(r1_1);
    *gptr<u32>(ea_1 + 4) = u32(r2_1);
    ea_2 = r0_8 + 0x100u;  // (from the original)
    *gptr<u32>(ea_2) = u32(r1_1);
    *gptr<u32>(ea_2 + 4) = u32(r2_1);
    *gptr<u8>(r0_8 + 0x108u) = u8(0u);  // (from the original)
    r13 = r13 + 8;
    guest::cpu()->r[1] = 0u;
    guest::cpu()->r[13] = r13;
    return r0_8;
}

}  // namespace d_0062ac50
GUEST_EXPORT(0x0062ac50, d_0062ac50::f_0062ac50);

// f_0062ad20: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0062ad20 {

struct __attribute__((packed)) Object_0062ad20_0 {
    u32 word_0;
};
GUEST_OFFSET(Object_0062ad20_0, word_0, 0x0);  // (from the original)

inline constexpr guest::Function<0x002f76ad, u32(u32, u32, u32, u32)> call_002f76ac;  // (from the original)
inline constexpr guest::Function<0x0050c9a0, u32(u32, u32, u32, u32)> call_0050c9a0;  // (from the original)

u32 f_0062ad20(gptr<Object_0062ad20_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    guest::cpu()->r[13] -= 8u;
    arg0->word_0 = u32(0x90ac28u);  // (from the original)
    r0_1 = r0 + 0x68u;  // (from the original)
    call_002f76ac(r0_1, 0x624020u, 0x10u, 4u);  // (from the original)
    r0_2 = r0 + 8u;
    call_002f76ac(r0_2, 0x626decu, 0x18u, 4u);  // (from the original)
    r1_1 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    guest::cpu()->r[13] += 8u;
    return call_0050c9a0(r0, r1_1, r2_1, r3_1);
}

}  // namespace d_0062ad20
GUEST_EXPORT(0x0062ad20, d_0062ad20::f_0062ad20);

// f_0062ad70: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0062ad70 {

inline guest::global<u32, 0x009529cc> global_009529cc;  // (from the original)
inline guest::global<u32, 0x0095362c> global_0095362c;  // (from the original)
inline constexpr guest::Function<0x001aa94c, u32(u32, u32, u32, u32)> call_001aa94c;  // (from the original)
inline constexpr guest::Function<0x0075f1f8, u32(u32, u32, u32, u32)> call_0075f1f8;  // (from the original)

u32 f_0062ad70(u32 r0, u32 r1) {
    u32 r13 = guest::cpu()->r[13];
    u32 ea_1 = 0;
    u32 r1_1 = 0;
    u32 r0_1 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r1_2 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r1_3 = 0;
    u32 r0_4 = 0;
    r13 = r13 - 0x18u;  // (from the original)
    ea_1 = r0 + r1 + 0x8b1u;  // (from the original)
    *gptr<u8>(ea_1) = u8(0u);
    *gptr<u32>(r13 + 4u) = u32(0u);
    *gptr<u32>(r13 + 8u) = u32(0u);
    r1_1 = r13;
    r0_1 = *global_0095362c + 0xb0u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_0075f1f8(r0_1, r1_1, r1, 0u);
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    r1_2 = r13;
    r0_2 = *global_009529cc;
    guest::cpu()->r[13] = r13;
    r0_3 = call_001aa94c(r0_2, r1_2, r2_1, r3_1);
    r1_3 = guest::cpu()->r[1];
    if (r0_3 == 0) {
        r13 = r13 + 0x18u;  // (from the original)
        guest::cpu()->r[1] = r1_3;
        guest::cpu()->r[13] = r13;
        return r0_3;
    }
    r0_4 = u32(*gptr<u8>(ea_1)) | 8u;
    *gptr<u8>(ea_1) = u8(r0_4);
    r13 = r13 + 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1_3;
    guest::cpu()->r[13] = r13;
    return r0_4;
}

}  // namespace d_0062ad70
GUEST_EXPORT(0x0062ad70, d_0062ad70::f_0062ad70);

// f_0062af78: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0062af78 {

inline guest::global<u32, 0x0094ed74> global_0094ed74;  // (from the original)
inline guest::global<u32, 0x009529cc> global_009529cc;  // (from the original)
inline constexpr guest::Function<0x001aa804, u32(u32, u32, u32, u32)> call_001aa804;  // (from the original)
inline constexpr guest::Function<0x00214f4c, u32(u32, u32, u32, u32)> call_00214f4c;  // (from the original)
inline constexpr guest::Function<0x00305f44, u32(u32, u32, u32, u32)> call_00305f44;  // (from the original)
inline constexpr guest::Function<0x006249b0, u32(u32, u32, u32, u32)> call_006249b0;  // (from the original)

u32 f_0062af78(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r13 = guest::cpu()->r[13];
    u32 ea_1 = 0;
    u32 r1_1 = 0;
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r1_2 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r1_3 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r2_2 = 0;
    u32 r3_2 = 0;
    u32 r0_5 = 0;
    r13 = r13 - 0x10;  // (from the original)
    ea_1 = r0 + r1 + 0x8b1u;  // (from the original)
    r1_1 = u32(*gptr<u8>(ea_1));
    if ((r1_1 & 1u) != 0) {
        r0_1 = 1u;
        r13 = r13 + 0x10;  // (from the original)
        guest::cpu()->r[1] = r1_1;
        guest::cpu()->r[13] = r13;
        return r0_1;
    }
    guest::cpu()->r[13] = r13;
    r0_2 = call_00305f44(r0, r1_1, r2, r3);
    r1_2 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    if (s32(r0_2) >= s32(4u)) {
        r13 = r13 + 0x10;  // (from the original)
        guest::cpu()->r[1] = r1_2;
        guest::cpu()->r[13] = r13;
        return 0u;
    }
    r1_3 = r0 + (r0_2 << 9);
    r0_3 = *global_009529cc;
    guest::cpu()->r[13] = r13;
    r0_4 = call_001aa804(r0_3, r1_3, r2_1, r3_1);
    r1_2 = guest::cpu()->r[1];
    if (r0_4 == 0) {
        r13 = r13 + 0x10;  // (from the original)
        guest::cpu()->r[1] = r1_2;
        guest::cpu()->r[13] = r13;
        return 0u;
    }
    guest::cpu()->r[13] = r13;
    call_006249b0(0x7fu, r1, r1_3, 0x200u);  // (from the original)
    r2_2 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    *gptr<u8>(ea_1) = u8(u32(*gptr<u8>(ea_1)) | 1u);
    r0_5 = *global_0094ed74;
    guest::cpu()->r[13] = r13;
    call_00214f4c(r0_5, r1, r2_2, r3_2);
    r1_1 = guest::cpu()->r[1];
    r0_1 = 1u;
    r13 = r13 + 0x10;  // (from the original)
    guest::cpu()->r[1] = r1_1;
    guest::cpu()->r[13] = r13;
    return r0_1;
}

}  // namespace d_0062af78
GUEST_EXPORT(0x0062af78, d_0062af78::f_0062af78);

// f_0062b014: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0062b014 {

inline constexpr guest::Function<0x00301d0d, u32(u32, u32, u32, u32)> call_00301d0c;  // (from the original)

u32 f_0062b014(u32 r0) {
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r0_5 = 0;
    u32 r1_1 = 0;
    u32 r0_6 = 0;
    r0_1 = r0 + 0x800u;  // (from the original)
    guest::cpu()->r[13] -= 8u;
    r0_2 = call_00301d0c(r0_1, 0x81e8d0u, 0x2cu, 4u);  // (from the original)
    r0_3 = r0_2 - 0x800u;  // (from the original)
    *gptr<u8>(r0_3 + 0x8b0u) = u8(4u);  // (from the original)
    r0_4 = r0_3 + 0x8b1u;  // (from the original)
    r0_5 = call_00301d0c(r0_4, 0x62b008u, 1u, 4u);  // (from the original)
    r1_1 = guest::cpu()->r[1];
    r0_6 = r0_5 - 0x8b1u;  // (from the original)
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1_1;
    return r0_6;
}

}  // namespace d_0062b014
GUEST_EXPORT(0x0062b014, d_0062b014::f_0062b014);

// f_0062b064: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0062b064 {

inline constexpr guest::Function<0x002f76ad, u32(u32, u32, u32, u32)> call_002f76ac;  // (from the original)

u32 f_0062b064(u32 r0) {
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    guest::cpu()->r[13] -= 8u;
    r0_1 = r0 + 0x800u;  // (from the original)
    call_002f76ac(r0_1, 0x3009ccu, 0x2cu, 4u);  // (from the original)
    r1_1 = guest::cpu()->r[1];
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1_1;
    return r0;
}

}  // namespace d_0062b064
GUEST_EXPORT(0x0062b064, d_0062b064::f_0062b064);

// f_0062b08c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0062b08c {

struct __attribute__((packed)) Object_0062b08c_0 {
    u32 word_0;
    u8 unknown_4[0x16];  // (not used here)
    u16 half_1a;
};
GUEST_OFFSET(Object_0062b08c_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_0062b08c_0, half_1a, 0x1a);  // (from the original)

inline constexpr guest::Function<0x0027a48c, u32(u32, u32, u32, u32)> call_0027a48c;  // (from the original)
inline constexpr guest::Function<0x00303cdc, u32(u32, u32, u32, u32)> call_00303cdc;  // (from the original)
inline constexpr guest::Function<0x005cdf48, u32(u32, u32, u32, u32)> call_005cdf48;  // (from the original)

u32 f_0062b08c(gptr<Object_0062b08c_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r0_1 = 0;
    u32 r4_1 = 0;
    u32 r0_2 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r2_2 = 0;
    u32 r3_2 = 0;
    u32 r0_3 = 0;
    u32 r2_3 = 0;
    u32 r3_3 = 0;
    u32 r0_4 = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    arg0->word_0 = u32(0u);
    r0_1 = r0 + 4u;
    r4_1 = r0_1 - 4u;
    arg0->half_1a = u16(0u);
    r0_2 = r0_1 + 0x6cu;  // (from the original)
    r2_1 = ~0u;
    r3_1 = ~0x80000000u;  // (from the original)
    call_005cdf48(r0_2, guest::cpu()->r[1], r2_1, r3_1);
    r2_2 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    *gptr<u8>(r4_1 + 0x78u) = u8(0u);  // (from the original)
    r0_3 = r4_1 + 4u;
    *gptr<u8>(r4_1 + 0x79u) = u8(0u);  // (from the original)
    call_0027a48c(r0_3, guest::cpu()->r[1], r2_2, r3_2);
    r2_3 = guest::cpu()->r[2];
    r3_3 = guest::cpu()->r[3];
    *gptr<u16>(r4_1 + 0x1cu) = u16(0u);  // (from the original)
    r0_4 = r4_1 + 0x70u;  // (from the original)
    *gptr<u16>(r4_1 + 0x2eu) = u16(0u);  // (from the original)
    call_00303cdc(r0_4, guest::cpu()->r[1], r2_3, r3_3);
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    return r4_1;
}

}  // namespace d_0062b08c
GUEST_EXPORT(0x0062b08c, d_0062b08c::f_0062b08c);

// f_0062b200: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0062b200 {

struct __attribute__((packed)) Object_0062b200_0 {
    u8 unknown_0[0x18];  // (not used here)
    u32 word_18;
};
GUEST_OFFSET(Object_0062b200_0, word_18, 0x18);  // (from the original)

inline constexpr guest::Function<0x00135748, u32(u32, u32, u32, u32)> call_00135748;  // (from the original)
inline constexpr guest::Function<0x001357ec, u32(u32, u32, u32, u32)> call_001357ec;  // (from the original)
inline constexpr guest::Function<0x001391c4, u32(u32, u32, u32, u32)> call_001391c4;  // (from the original)
inline constexpr guest::Function<0x00301d0d, u32(u32, u32, u32, u32)> call_00301d0c;  // (from the original)

u32 f_0062b200(gptr<Object_0062b200_0> arg0, u32 r1, u32 r2, u32 r3) {
    u32 r0 = arg0.addr();
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r9 = guest::cpu()->r[9];
    u32 r10 = guest::cpu()->r[10];
    u32 r13 = guest::cpu()->r[13];
    u32 r14 = guest::cpu()->r[14];
    u32 ea_1 = 0;
    u32 r5_1 = 0;
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r5_2 = 0;
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r1_2 = 0;
    u32 ea_2 = 0;
    u32 ea_3 = 0;
    u32 ea_4 = 0;
    u32 ea_5 = 0;
    u32 ea_6 = 0;
    u32 ea_7 = 0;
    u32 ea_8 = 0;
    u32 ea_9 = 0;
    u32 ea_10 = 0;
    u32 ea_11 = 0;
    u32 r4_1 = 0;
    u32 r5_3 = 0;
    u32 r6_1 = 0;
    u32 r7_1 = 0;
    u32 r8_1 = 0;
    u32 r9_1 = 0;
    u32 r10_1 = 0;
    if (r1 == 0) {
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[4] = r4;
        guest::cpu()->r[5] = r5;
        guest::cpu()->r[6] = r6;
        guest::cpu()->r[7] = r7;
        guest::cpu()->r[8] = r8;
        guest::cpu()->r[9] = r9;
        guest::cpu()->r[10] = r10;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    ea_1 = r13 - 0x20;  // (from the original)
    *gptr<u32>(ea_1) = u32(r4);
    *gptr<u32>(ea_1 + 4) = u32(r5);
    *gptr<u32>(ea_1 + 8) = u32(r6);
    *gptr<u32>(ea_1 + 0xc) = u32(r7);  // (from the original)
    *gptr<u32>(ea_1 + 0x10) = u32(r8);  // (from the original)
    *gptr<u32>(ea_1 + 0x14) = u32(r9);  // (from the original)
    *gptr<u32>(ea_1 + 0x18) = u32(r10);  // (from the original)
    *gptr<u32>(ea_1 + 0x1c) = u32(r14);  // (from the original)
    r13 = r13 - 0x20;  // (from the original)
    r5_1 = r1;
    if (arg0->word_18 == 0) {
    } else {
        goto L_62b26c;
    }
    guest::cpu()->r[13] = r13;
    r0_1 = call_001391c4(0x3070u, r1, 4u, 0x8c8484u);  // (from the original)
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0_1 == 0) {
        goto L_62b26c;
    }
    guest::cpu()->r[13] = r13;
    r0_2 = call_00301d0c(r0_1, 0x62b08cu, 0x7cu, 0x64u);  // (from the original)
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0_2 == 0) {
        goto L_62b26c;
    }
    r1 = r0 + 0x18u;  // (from the original)
    *gptr<u32>(r0 + 0x24u) = u32(0u);  // (from the original)
    *gptr<u32>(r1) = u32(r0_2);
    *gptr<u32>(r1 + 4) = u32(0x64u);  // (from the original)
    *gptr<u32>(r1 + 8) = u32(0u);
L_62b26c:;
    if (*gptr<u32>(r0 + 8u) != 0) {
        goto L_62b2c4;
    }
    guest::cpu()->r[13] = r13;
    r0_3 = call_001391c4(0x3070u, r5_1, 4u, 0x8c8484u);  // (from the original)
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0_3 == 0) {
        goto L_62b2c4;
    }
    guest::cpu()->r[13] = r13;
    r0_4 = call_00301d0c(r0_3, 0x62b08cu, 0x7cu, 0x64u);  // (from the original)
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0_4 == 0) {
        goto L_62b2c4;
    }
    r1 = r0 + 8u;
    *gptr<u32>(r0 + 0x14u) = u32(0u);  // (from the original)
    *gptr<u32>(r1) = u32(r0_4);
    *gptr<u32>(r1 + 4) = u32(0x64u);  // (from the original)
    *gptr<u32>(r1 + 8) = u32(0u);
L_62b2c4:;
    r5_2 = r0 + 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_00135748(r5_2, r1, r2, r3);
    r1_1 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    *gptr<u32>(r0 + 0x14u) = u32(0u);  // (from the original)
    *gptr<u32>(r0 + 0x10u) = u32(0u);  // (from the original)
    *gptr<u32>(r0 + 0x24u) = u32(0u);  // (from the original)
    *gptr<u32>(r0 + 0x20u) = u32(0u);  // (from the original)
    *gptr<u8>(r0 + 0x3e9u) = u8(0u);  // (from the original)
    *gptr<u8>(r0 + 0x3eau) = u8(0u);  // (from the original)
    guest::cpu()->r[13] = r13;
    call_001357ec(r5_2, r1_1, r2_1, r3_1);
    r1_2 = guest::cpu()->r[1];
    ea_2 = 0x1e2u + r0;  // (from the original)
    *gptr<u16>(ea_2) = u16(0u);
    ea_3 = r0 + 0x3e4u;  // (from the original)
    *gptr<u32>(ea_3) = u32(0u);
    ea_4 = r0 + 0x3e9u;  // (from the original)
    *gptr<u8>(ea_4) = u8(0u);
    ea_5 = r0 + 0x3eau;  // (from the original)
    *gptr<u8>(ea_5) = u8(0u);
    ea_6 = r0 + 0x3e8u;  // (from the original)
    *gptr<u8>(ea_6) = u8(1u);
    ea_7 = r0 + 0x3ebu;  // (from the original)
    *gptr<u8>(ea_7) = u8(0u);
    *gptr<u32>(r0) = u32(0u);
    ea_8 = r0 + 0x3ecu;  // (from the original)
    *gptr<u8>(ea_8) = u8(0u);
    ea_9 = r0 + 4u;
    *gptr<u32>(ea_9) = u32(0u);
    ea_10 = r0 + 0x3edu;  // (from the original)
    *gptr<u8>(ea_10) = u8(0u);
    ea_11 = r13;
    r13 = r13 + 0x20;  // (from the original)
    r4_1 = *gptr<u32>(ea_11);
    r5_3 = *gptr<u32>(ea_11 + 4);
    r6_1 = *gptr<u32>(ea_11 + 8);
    r7_1 = *gptr<u32>(ea_11 + 0xc);  // (from the original)
    r8_1 = *gptr<u32>(ea_11 + 0x10);  // (from the original)
    r9_1 = *gptr<u32>(ea_11 + 0x14);  // (from the original)
    r10_1 = *gptr<u32>(ea_11 + 0x18);  // (from the original)
    guest::cpu()->r[1] = r1_2;
    guest::cpu()->r[4] = r4_1;
    guest::cpu()->r[5] = r5_3;
    guest::cpu()->r[6] = r6_1;
    guest::cpu()->r[7] = r7_1;
    guest::cpu()->r[8] = r8_1;
    guest::cpu()->r[9] = r9_1;
    guest::cpu()->r[10] = r10_1;
    guest::cpu()->r[13] = r13;
    return 0x1e2u;  // (from the original)
}

}  // namespace d_0062b200
GUEST_EXPORT(0x0062b200, d_0062b200::f_0062b200);

// f_0062bb00: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0062bb00 {

inline constexpr guest::Function<0x00135748, u32(u32, u32, u32, u32)> call_00135748;  // (from the original)
inline constexpr guest::Function<0x001357ec, u32(u32, u32, u32, u32)> call_001357ec;  // (from the original)

u32 f_0062bb00(u32 r0) {
    u32 r0_1 = 0;
    u32 r5_1 = 0;
    r0_1 = r0 + 0x28ecu;  // (from the original)
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r5_1 = r0_1 + 0x28u;  // (from the original)
    call_00135748(r5_1, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    *gptr<u32>(r0_1 + 0x14u) = u32(0u);  // (from the original)
    *gptr<u32>(r0_1 + 0x10u) = u32(0u);  // (from the original)
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    return call_001357ec(r5_1, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_0062bb00
GUEST_EXPORT(0x0062bb00, d_0062bb00::f_0062bb00);

// f_0062bc68: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0062bc68 {

struct __attribute__((packed)) Object_0062bc68_0 {
    u32 word_0;
    u8 unknown_4[0x3e7];  // (not used here)
    u8 byte_3eb;
    u8 byte_3ec;
    u8 byte_3ed;
};
GUEST_OFFSET(Object_0062bc68_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_0062bc68_0, byte_3eb, 0x3eb);  // (from the original)
GUEST_OFFSET(Object_0062bc68_0, byte_3ec, 0x3ec);  // (from the original)
GUEST_OFFSET(Object_0062bc68_0, byte_3ed, 0x3ed);  // (from the original)

inline guest::global<u32, 0x0095362c> global_0095362c;  // (from the original)
inline constexpr guest::Function<0x00300904, u32(u32, u32, u32, u32)> call_00300904;  // (from the original)
inline constexpr guest::Function<0x0075f020, u32(u32, u32, u32, u32)> call_0075f020;  // (from the original)

u32 f_0062bc68(gptr<Object_0062bc68_0> arg0, u32 r1) {
    u32 r0 = arg0.addr();
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r0_1 = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r4 = r0;
    r5 = 0u;
    if (r1 != 0) {
        arg0->byte_3ed = u8(r5);
    }
    r0 = u32(arg0->byte_3ec);
    if (r0 == 0) {
        arg0->word_0 = u32(r5);
        arg0->byte_3eb = u8(r5);
        *gptr<u32>(r4 + 4u) = u32(r5);
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r0 = call_00300904(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 == 0) {
        goto L_62bca8;
    }
    goto L_62bccc;
L_62bca8:;
    r0_1 = *global_0095362c + 0x7874u;  // (from the original)
    r0 = call_0075f020(r0_1, 0u, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 == 0) {
        *gptr<u32>(r4) = u32(r5);
        *gptr<u32>(r4 + 4u) = u32(r5);
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        guest::cpu()->r[1] = r1;
        return r0;
    }
L_62bccc:;
    *gptr<u8>(r4 + 0x3ebu) = u8(r5);  // (from the original)
    *gptr<u32>(r4) = u32(r5);
    *gptr<u8>(r4 + 0x3ecu) = u8(r5);  // (from the original)
    *gptr<u32>(r4 + 4u) = u32(r5);
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_0062bc68
GUEST_EXPORT(0x0062bc68, d_0062bc68::f_0062bc68);

// f_0062c0cc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0062c0cc {

inline guest::global<u32, 0x0095362c> global_0095362c;  // (from the original)
inline constexpr guest::Function<0x00300904, u32(u32, u32, u32, u32)> call_00300904;  // (from the original)
inline constexpr guest::Function<0x006295d8, u32(u32, u32, u32, u32)> call_006295d8;  // (from the original)
inline constexpr guest::Function<0x0075f0b0, u32(u32, u32, u32, u32)> call_0075f0b0;  // (from the original)

u32 f_0062c0cc(u32 r0, u32 r1) {
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r6_1 = 0;
    u32 r0_2 = 0;
    guest::cpu()->r[13] -= 0x18u;  // (from the original)
    r0_1 = call_00300904(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_1 = guest::cpu()->r[1];
    if (r0_1 != 0) {
        goto L_62c144;
    }
    r6_1 = *global_0095362c + 0x7874u;  // (from the original)
    r0_2 = call_0075f0b0(r6_1, 3u, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_1 = guest::cpu()->r[1];
    if (r0_2 == 0) {
        r0_1 = u32(*gptr<u8>(r0 + 0x3ebu));  // (from the original)
        if (r0_1 == 0) {
            goto L_62c144;
        }
    }
    r0_1 = 0u;
    *gptr<u8>(r0 + 0x3ecu) = u8(1u);  // (from the original)
    *gptr<u32>(r0 + 4u) = u32(r0_1);
    *gptr<u8>(r0 + 0x3ebu) = u8(r0_1);  // (from the original)
    *gptr<u32>(r0) = u32(r0_1);
    if (r1 == 0) {
        goto L_62c144;
    }
    r0_1 = call_006295d8(r6_1, 3u, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_1 = guest::cpu()->r[1];
    *gptr<u8>(r0 + 0x3edu) = u8(1u);  // (from the original)
L_62c144:;
    guest::cpu()->r[13] += 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1_1;
    return r0_1;
}

}  // namespace d_0062c0cc
GUEST_EXPORT(0x0062c0cc, d_0062c0cc::f_0062c0cc);

// f_0062c14c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0062c14c {

inline constexpr guest::Function<0x001df2f8, u32(u32, u32, u32, u32)> call_001df2f8;  // (from the original)
inline constexpr guest::Function<0x0023bf10, u32(u32, u32, u32, u32)> call_0023bf10;  // (from the original)
inline constexpr guest::Function<0x0023c544, u32(u32, u32, u32, u32)> call_0023c544;  // (from the original)
inline constexpr guest::Function<0x0023c604, u32(u32, u32, u32, u32)> call_0023c604;  // (from the original)
inline constexpr guest::Function<0x0023c634, u32(u32, u32, u32, u32)> call_0023c634;  // (from the original)
inline constexpr guest::Function<0x0023c65c, u32(u32, u32, u32, u32)> call_0023c65c;  // (from the original)
inline constexpr guest::Function<0x002fb918, u32(u32, u32, u32, u32)> call_002fb918;  // (from the original)
inline constexpr guest::Function<0x002fb94c, u32(u32, u32, u32, u32)> call_002fb94c;  // (from the original)
inline constexpr guest::Function<0x003505bc, u32(u32, u32, u32, u32)> call_003505bc;  // (from the original)
inline constexpr guest::Function<0x00350754, u32(u32, u32, u32, u32)> call_00350754;  // (from the original)
inline constexpr guest::Function<0x006268c4, u32(u32, u32, u32, u32)> call_006268c4;  // (from the original)
inline constexpr guest::Function<0x0070f5b0, u32(u32, u32, u32, u32)> call_0070f5b0;  // (from the original)
inline constexpr guest::Function<0x0071d3e4, u32(u32, u32, u32, u32)> call_0071d3e4;  // (from the original)

u32 f_0062c14c(u32 r0) {
    u32 r0_1 = 0;
    u32 res_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r0_5 = 0;
    u32 r0_6 = 0;
    u32 r0_7 = 0;
    u32 r0_8 = 0;
    u32 r0_9 = 0;
    u32 r0_10 = 0;
    guest::cpu()->r[13] -= 8u;
    r0_1 = call_002fb94c(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    if (r0_1 == 0) {
        guest::cpu()->r[13] += 8u;
        return r0_1;
    }
    res_1 = u32(*gptr<u8>(r0_1 + 0x571fu)) << 0x19;  // (from the original)
    if (!(res_1 >> 0x1f)) {  // (from the original)
        guest::cpu()->r[13] += 8u;
        return 0u;
    }
    r0_2 = call_002fb918(res_1, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    r0_3 = call_001df2f8(r0_2, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    if (r0_3 == 0) {
        guest::cpu()->r[13] += 8u;
        return r0_3;
    }
    r0_4 = call_0071d3e4(r0_3, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    if (r0_4 == 0) {
        guest::cpu()->r[13] += 8u;
        return r0_4;
    }
    r0_5 = call_00350754(r0_4, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    if (r0_5 == 0) {
        goto L_62c1c8;
    }
    r0_5 = call_0023c634(r0_5, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    if (r0_5 != 0) {
        goto L_62c1c8;
    }
    r0_6 = call_0023c604(r0_5, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    if (r0_6 == 0) {
        guest::cpu()->r[13] += 8u;
        return 0u;
    }
    r0_7 = call_0070f5b0(r0_6, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    if (r0_7 == 0) {
        guest::cpu()->r[13] += 8u;
        return 0u;
    }
    r0_5 = call_0023c544(r0_7, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    if (r0_5 == 0) {
        guest::cpu()->r[13] += 8u;
        return 0u;
    }
L_62c1c8:;
    r0_8 = call_0023bf10(r0_5, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    if (r0_8 == 0) {
        guest::cpu()->r[13] += 8u;
        return r0_8;
    }
    r0_9 = call_0023c65c(r0_8, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    if (r0_9 == 0) {
        guest::cpu()->r[13] += 8u;
        return r0_9;
    }
    r0_10 = call_003505bc(r0_9, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    if (r0_10 == 0) {
        guest::cpu()->r[13] += 8u;
        return r0_10;
    }
    guest::cpu()->r[13] += 8u;
    return call_006268c4(r0_10, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_0062c14c
GUEST_EXPORT(0x0062c14c, d_0062c14c::f_0062c14c);

// f_0062c20c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0062c20c {

struct __attribute__((packed)) Object_0062c20c_2 {
    u32 word_0;
    u16 half_4;
    u16 half_6;
};
GUEST_OFFSET(Object_0062c20c_2, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_0062c20c_2, half_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_0062c20c_2, half_6, 0x6);  // (from the original)

inline guest::global<u16, 0x0088f298> global_0088f298;  // (from the original)
inline constexpr guest::Function<0x0062c2bc, u32(u32, u32, u32, u32)> call_0062c2bc;  // (from the original)

u32 f_0062c20c(u32 r0, u32 r1_unused, gptr<Object_0062c20c_2> arg2) {
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 r3_1 = 0;
    u32 r4_1 = 0;
    u32 r12_1 = 0;
    u32 zf_1 = 0;
    u32 r3_2 = 0;
    u32 r2_1 = 0;
    u32 r0_2 = 0;
    r0_1 = r0 + 0x28ecu;  // (from the original)
    r3_1 = arg2->word_0;
    r13 = r13 - 0x10u;  // (from the original)
    if (r3_1 == 0) {
        r13 = r13 + 0x10u;  // (from the original)
        guest::cpu()->r[13] = r13;
        return 0u;
    }
    r4_1 = u32(*global_0088f298);
    r12_1 = u32(arg2->half_4);
    zf_1 = r12_1 == r4_1;
    if (!zf_1) {
        zf_1 = u32(arg2->half_6) == 0;
    }
    if (zf_1) {
        r13 = r13 + 0x10u;  // (from the original)
        guest::cpu()->r[13] = r13;
        return 0u;
    }
    *gptr<u32>(r13) = u32(r3_1);
    r3_2 = r13 + 4u;
    r2_1 = r13;
    *gptr<u16>(r13 + 4u) = u16(r12_1);
    guest::cpu()->r[13] = r13;
    r0_2 = call_0062c2bc(r0_1, guest::cpu()->r[1], r2_1, r3_2);
    r13 = r13 + 0x10u;  // (from the original)
    guest::cpu()->r[13] = r13;
    return r0_2;
}

}  // namespace d_0062c20c
GUEST_EXPORT(0x0062c20c, d_0062c20c::f_0062c20c);

// f_0062c274: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0062c274 {

inline constexpr guest::Function<0x00135748, u32(u32, u32, u32, u32)> call_00135748;  // (from the original)
inline constexpr guest::Function<0x001357ec, u32(u32, u32, u32, u32)> call_001357ec;  // (from the original)

u32 f_0062c274(u32 r0) {
    u32 r0_1 = 0;
    u32 r5_1 = 0;
    r0_1 = r0 + 0x28ecu;  // (from the original)
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r5_1 = r0_1 + 0x28u;  // (from the original)
    call_00135748(r5_1, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    *gptr<u32>(r0_1 + 0x14u) = u32(0u);  // (from the original)
    *gptr<u32>(r0_1 + 0x10u) = u32(0u);  // (from the original)
    *gptr<u32>(r0_1 + 0x24u) = u32(0u);  // (from the original)
    *gptr<u32>(r0_1 + 0x20u) = u32(0u);  // (from the original)
    *gptr<u8>(r0_1 + 0x3e9u) = u8(0u);  // (from the original)
    *gptr<u8>(r0_1 + 0x3eau) = u8(0u);  // (from the original)
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    return call_001357ec(r5_1, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_0062c274
GUEST_EXPORT(0x0062c274, d_0062c274::f_0062c274);

// f_0062c790: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0062c790 {

inline constexpr guest::Function<0x00135748, u32(u32, u32, u32, u32)> call_00135748;  // (from the original)
inline constexpr guest::Function<0x001357ec, u32(u32, u32, u32, u32)> call_001357ec;  // (from the original)
inline constexpr guest::Function<0x002fbb30, u32(u32, u32, u32, u32)> call_002fbb30;  // (from the original)

u32 f_0062c790(u32 r0, u32 r1, u32 r2, u32 r3) {
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
    u32 ea_1 = 0;
    u32 r4_1 = 0;
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r0_2 = 0;
    u32 r3_1 = 0;
    u32 r1_2 = 0;
    u32 r2_1 = 0;
    u32 r1_3 = 0;
    u32 r1_4 = 0;
    *gptr<u32>(r13 + 0xfffffff8u) = u32(r12);  // (from the original)
    r13 = r13 - 0x28;  // (from the original)
    r6 = r0;
    r10 = r6 + 0x28u;  // (from the original)
    r9 = r1;
    ea_1 = r13 + 0x28u;  // (from the original)
    r4_1 = *gptr<u32>(ea_1);
    r11 = *gptr<u32>(ea_1 + 4);
    r7 = r2;
    r5 = r3;
    guest::cpu()->r[13] = r13;
    call_00135748(r10, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0_1 = *gptr<u32>(r6 + 0x24u);  // (from the original)
    if (r0_1 == 0 || r0_1 >> 0x1f != (r0_1 & (r0_1 ^ r0_1)) >> 0x1f) {  // (from the original)
        guest::cpu()->r[13] = r13;
        call_001357ec(r10, r1, r2, r3);
        r1_1 = guest::cpu()->r[1];
        r13 = r13 + 0x28;  // (from the original)
        guest::cpu()->r[1] = r1_1;
        guest::cpu()->r[13] = r13;
        return 0u;
    }
    if (r4_1 != 0) {
        *gptr<u32>(r4_1) = u32(r0_1);
    }
    r8 = *gptr<u32>(r6 + 0x24u);  // (from the original)
    r4 = 0u;
    if (r5 >= r8) {
        goto L_62c84c;
    }
L_62c7ec:;
    if (r4 >= r7) {
        goto L_62c84c;
    }
    r0_2 = r6 + 0x18u;  // (from the original)
    r3_1 = r9 + ((r4 << 5) - r4 << 2);
    if (r5 >= *gptr<u32>(r6 + 0x24u)) {  // (from the original)
        r1_2 = *gptr<u32>(r0_2);
        goto L_62c830;
    }
    r2_1 = *gptr<u32>(r0_2 + 4u);
    r1_3 = *gptr<u32>(r0_2 + 8u) + r5;
    if (s32(r2_1) <= s32(r1_3)) {
        r1_3 = r1_3 - r2_1;
    }
    r1_2 = *gptr<u32>(r0_2) + ((r1_3 << 5) - r1_3 << 2);
L_62c830:;
    guest::cpu()->r[13] = r13;
    call_002fbb30(r3_1, r1_2, 0x7cu, r3_1);  // (from the original)
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r5 = r5 + 1u;
    r4 = r4 + 1u;
    if (r5 < r8) {
        guest::preempt();
        goto L_62c7ec;
    }
L_62c84c:;
    if (r11 != 0) {
        *gptr<u8>(r6 + 0x3e9u) = u8(0u);  // (from the original)
    }
    guest::cpu()->r[13] = r13;
    call_001357ec(r10, r1, r2, r3);
    r1_4 = guest::cpu()->r[1];
    r13 = r13 + 0x28;  // (from the original)
    guest::cpu()->r[1] = r1_4;
    guest::cpu()->r[13] = r13;
    return r4;
}

}  // namespace d_0062c790
GUEST_EXPORT(0x0062c790, d_0062c790::f_0062c790);

// f_0062c868: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0062c868 {

struct __attribute__((packed)) Object_0062c868_0 {
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
};
GUEST_OFFSET(Object_0062c868_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_0062c868_0, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_0062c868_0, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Object_0062c868_0, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Object_0062c868_0, word_10, 0x10);  // (from the original)
GUEST_OFFSET(Object_0062c868_0, word_14, 0x14);  // (from the original)
GUEST_OFFSET(Object_0062c868_0, word_18, 0x18);  // (from the original)
GUEST_OFFSET(Object_0062c868_0, word_1c, 0x1c);  // (from the original)
GUEST_OFFSET(Object_0062c868_0, word_20, 0x20);  // (from the original)
GUEST_OFFSET(Object_0062c868_0, word_24, 0x24);  // (from the original)
GUEST_OFFSET(Object_0062c868_0, word_28, 0x28);  // (from the original)

inline constexpr guest::Function<0x0012f154, u32(u32, u32, u32, u32)> call_0012f154;  // (from the original)

u32 f_0062c868(gptr<Object_0062c868_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r0_1 = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    arg0->word_0 = u32(0u);
    arg0->word_4 = u32(0u);
    arg0->word_8 = u32(0u);
    arg0->word_c = u32(0u);
    arg0->word_10 = u32(0u);
    arg0->word_14 = u32(0u);
    arg0->word_18 = u32(0u);
    arg0->word_1c = u32(0u);
    arg0->word_20 = u32(0u);
    arg0->word_24 = u32(0u);
    r0_1 = r0 + 0x28u;  // (from the original)
    arg0->word_28 = u32(0u);
    call_0012f154(r0_1, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    *gptr<u32>(r0 + 0x3e4u) = u32(0u);  // (from the original)
    *gptr<u8>(r0 + 0x3e8u) = u8(0u);  // (from the original)
    *gptr<u8>(r0 + 0x3e9u) = u8(0u);  // (from the original)
    *gptr<u8>(r0 + 0x3eau) = u8(0u);  // (from the original)
    *gptr<u8>(r0 + 0x3ebu) = u8(0u);  // (from the original)
    *gptr<u8>(r0 + 0x3ecu) = u8(0u);  // (from the original)
    *gptr<u8>(r0 + 0x3edu) = u8(0u);  // (from the original)
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    return r0;
}

}  // namespace d_0062c868
GUEST_EXPORT(0x0062c868, d_0062c868::f_0062c868);

// f_0062c8cc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0062c8cc {

struct __attribute__((packed)) Object_0062c8cc_0 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u8 unknown_c[0x3dd];  // (not used here)
    u8 byte_3e9;
    u8 byte_3ea;
    u8 byte_3eb;
    u8 byte_3ec;
    u8 byte_3ed;
};
GUEST_OFFSET(Object_0062c8cc_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_0062c8cc_0, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_0062c8cc_0, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Object_0062c8cc_0, byte_3e9, 0x3e9);  // (from the original)
GUEST_OFFSET(Object_0062c8cc_0, byte_3ea, 0x3ea);  // (from the original)
GUEST_OFFSET(Object_0062c8cc_0, byte_3eb, 0x3eb);  // (from the original)
GUEST_OFFSET(Object_0062c8cc_0, byte_3ec, 0x3ec);  // (from the original)
GUEST_OFFSET(Object_0062c8cc_0, byte_3ed, 0x3ed);  // (from the original)

inline constexpr guest::Function<0x002f88b8, u32(u32, u32, u32, u32)> call_002f88b8;  // (from the original)

u32 f_0062c8cc(gptr<Object_0062c8cc_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    arg0->byte_3e9 = u8(0u);
    arg0->byte_3ea = u8(0u);
    r0_1 = arg0->word_8;
    arg0->byte_3eb = u8(0u);
    arg0->word_0 = u32(0u);
    arg0->byte_3ec = u8(0u);
    arg0->word_4 = u32(0u);
    arg0->byte_3ed = u8(0u);
    if (r0_1 != 0) {
        call_002f88b8(r0_1, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
        *gptr<u32>(r0 + 8u) = u32(0u);
        *gptr<u32>(r0 + 0xcu) = u32(0u);  // (from the original)
        *gptr<u32>(r0 + 0x14u) = u32(0u);  // (from the original)
        *gptr<u32>(r0 + 0x10u) = u32(0u);  // (from the original)
    }
    r0_2 = *gptr<u32>(r0 + 0x18u);  // (from the original)
    if (r0_2 != 0) {
        call_002f88b8(r0_2, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
        *gptr<u32>(r0 + 0x18u) = u32(0u);  // (from the original)
        *gptr<u32>(r0 + 0x1cu) = u32(0u);  // (from the original)
        *gptr<u32>(r0 + 0x24u) = u32(0u);  // (from the original)
        *gptr<u32>(r0 + 0x20u) = u32(0u);  // (from the original)
    }
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    return r0;
}

}  // namespace d_0062c8cc
GUEST_EXPORT(0x0062c8cc, d_0062c8cc::f_0062c8cc);

// f_0062cc14: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0062cc14 {

inline guest::global<u32, 0x00a83af0> global_00a83af0;  // (from the original)

u32 f_0062cc14(u32 r0) {
    u32 r1_1 = 0;
    u32 zf_1 = 0;
    u32 cf_1 = 0;
    u32 res_1 = 0;
    u32 res_2 = 0;
    u32 zf_2 = 0;
    r1_1 = *global_00a83af0;
    zf_1 = r1_1 == 0;
    cf_1 = r1_1 >= 0u;
    if (!zf_1) {
        zf_1 = 0x18fu == r0;  // (from the original)
        cf_1 = 0x18fu >= r0;  // (from the original)
    }
    if (!cf_1 || zf_1) {
        guest::cpu()->r[1] = r1_1;
        return 0u;
    }
    res_1 = r1_1 + (r0 + (r0 << 4) << 1);
    if (res_1 == 0) {
        guest::cpu()->r[1] = r1_1;
        return 0u;
    }
    res_2 = u32(*gptr<u8>(res_1 + 0x1cu)) & 0xfu;  // (from the original)
    zf_2 = res_2 == 0;
    if (!zf_2) {
        zf_2 = res_2 == 1u;
    }
    if (zf_2) {
        guest::cpu()->r[1] = r1_1;
        return 1u;
    }
    guest::cpu()->r[1] = r1_1;
    return 0u;
}

}  // namespace d_0062cc14
GUEST_EXPORT(0x0062cc14, d_0062cc14::f_0062cc14);

// f_0062cca0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0062cca0 {

inline guest::global<u32, 0x00a83af0> global_00a83af0;  // (from the original)

u32 f_0062cca0(u32 r0) {
    u32 r1_1 = 0;
    u32 zf_1 = 0;
    u32 cf_1 = 0;
    u32 res_1 = 0;
    u32 res_2 = 0;
    u32 zf_2 = 0;
    r1_1 = *global_00a83af0;
    zf_1 = r1_1 == 0;
    cf_1 = r1_1 >= 0u;
    if (!zf_1) {
        zf_1 = 0x18fu == r0;  // (from the original)
        cf_1 = 0x18fu >= r0;  // (from the original)
    }
    if (!cf_1 || zf_1) {
        guest::cpu()->r[1] = r1_1;
        return 0u;
    }
    res_1 = r1_1 + (r0 + (r0 << 4) << 1);
    if (res_1 == 0) {
        guest::cpu()->r[1] = r1_1;
        return 0u;
    }
    res_2 = u32(*gptr<u8>(res_1 + 0x1cu)) & 0xfu;  // (from the original)
    zf_2 = res_2 == 0;
    if (!zf_2) {
        zf_2 = res_2 == 1u;
    }
    if (!zf_2) {
        zf_2 = res_2 == 2u;
    }
    if (zf_2) {
        guest::cpu()->r[1] = r1_1;
        return 1u;
    }
    guest::cpu()->r[1] = r1_1;
    return 0u;
}

}  // namespace d_0062cca0
GUEST_EXPORT(0x0062cca0, d_0062cca0::f_0062cca0);

// f_0062d0f4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0062d0f4 {

inline constexpr guest::Function<0x002400b0, u32(u32, u32, u32, u32)> call_002400b0;  // (from the original)
inline constexpr guest::Function<0x00241cf0, u32(u32, u32, u32, u32)> call_00241cf0;  // (from the original)
inline constexpr guest::Function<0x00243038, u32(u32, u32, u32, u32)> call_00243038;  // (from the original)
inline constexpr guest::Function<0x00315788, u32(u32, u32, u32, u32)> call_00315788;  // (from the original)
inline constexpr guest::Function<0x0052f200, u32(u32, u32, u32, u32)> call_0052f200;  // (from the original)
inline constexpr guest::Function<0x005ca234, u32(u32, u32, u32, u32)> call_005ca234;  // (from the original)
inline constexpr guest::Function<0x0062d1e4, u32(u32, u32, u32, u32)> call_0062d1e4;  // (from the original)
inline constexpr guest::Function<0x006cc934, u32(u32, u32, u32, u32)> call_006cc934;  // (from the original)

u32 f_0062d0f4(u32 r0, u32 r1, u32 r2) {
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r2_2 = 0;
    u32 r0_2 = 0;
    u32 r1_2 = 0;
    u32 r0_3 = 0;
    u32 r1_3 = 0;
    u32 r2_3 = 0;
    u32 r0_4 = 0;
    u32 r1_4 = 0;
    u32 r2_4 = 0;
    u32 r0_5 = 0;
    u32 r2_5 = 0;
    u32 r0_6 = 0;
    u32 r7_1 = 0;
    u32 r0_7 = 0;
    u32 r2_6 = 0;
    u32 ea_1 = 0;
    u32 ea_2 = 0;
    u32 r2_7 = 0;
    u32 ea_3 = 0;
    u32 r1_5 = 0;
    u32 ea_4 = 0;
    u32 r2_8 = 0;
    u32 r1_6 = 0;
    u32 r1_7 = 0;
    u32 r0_8 = 0;
    u32 r1_8 = 0;
    r13 = r13 - 0x38u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_1 = call_006cc934(r1, r1, r2, guest::cpu()->r[3]);
    r1_1 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    if (r0_1 != 0) {
        r2_2 = 0u;
        if (r2 == 1u) {
            r2_2 = 1u;
        }
        r0_2 = *gptr<u32>(r0);
        r1_2 = *gptr<u32>(r0 + 4);
        guest::cpu()->r[13] = r13;
        r0_3 = call_00315788(r0_2, r1_2, r2_2, guest::cpu()->r[3]);
        r1_3 = guest::cpu()->r[1];
        r2_3 = guest::cpu()->r[2];
        guest::cpu()->r[13] = r13;
        r0_4 = call_00241cf0(r0_3, r1_3, r2_3, guest::cpu()->r[3]);
        r1_4 = guest::cpu()->r[1];
        r2_4 = guest::cpu()->r[2];
        if (r0_4 != 0) {
            guest::cpu()->r[13] = r13;
            r0_5 = call_002400b0(r1, r1_4, r2_4, guest::cpu()->r[3]);
            r2_5 = guest::cpu()->r[2];
            guest::cpu()->r[13] = r13;
            r0_6 = call_00243038(r0_3, r0_5, r2_5, guest::cpu()->r[3]);
            r1_4 = guest::cpu()->r[1];
            if (r0_6 == r1) {
                r0_4 = 1u;
            } else {
                r0_4 = 0u;
            }
        }
        r13 = r13 + 0x38u;  // (from the original)
        guest::cpu()->r[1] = r1_4;
        guest::cpu()->r[13] = r13;
        return r0_4;
    }
    r7_1 = r13;
    guest::cpu()->r[13] = r13;
    r0_7 = call_005ca234(r1, r1_1, r2_1, guest::cpu()->r[3]);
    r2_6 = u32(s32(s8(*gptr<u8>(r0_7 + 1u))));
    ea_1 = r13 + 0x10u;  // (from the original)
    *gptr<u32>(ea_1) = u32(u32(s32(s8(*gptr<u8>(r0_7)))));
    *gptr<u32>(ea_1 + 4) = u32(r2_6);
    ea_2 = r0_7 + 3u;
    r2_7 = u32(s32(s8(*gptr<u8>(ea_2))));
    ea_3 = r0_7 + 2u;
    r1_5 = u32(s32(s8(*gptr<u8>(ea_3))));
    ea_4 = r13 + 0x18u;  // (from the original)
    *gptr<u32>(ea_4) = u32(r1_5);
    *gptr<u32>(ea_4 + 4) = u32(r2_7);
    r2_8 = r13 + 0x18u;  // (from the original)
    r1_6 = r13 + 0x10u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_0052f200(r7_1, r1_6, r2_8, guest::cpu()->r[3]);
    r1_7 = r13;
    guest::cpu()->r[13] = r13;
    r0_8 = call_0062d1e4(r0, r1_7, r2, guest::cpu()->r[3]);
    r1_8 = guest::cpu()->r[1];
    r13 = r13 + 0x38u;  // (from the original)
    guest::cpu()->r[1] = r1_8;
    guest::cpu()->r[13] = r13;
    return r0_8;
}

}  // namespace d_0062d0f4
GUEST_EXPORT(0x0062d0f4, d_0062d0f4::f_0062d0f4);

// f_0062d1e4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0062d1e4 {

inline constexpr guest::Function<0x00248dd0, u32(u32, u32, u32, u32)> call_00248dd0;  // (from the original)
inline constexpr guest::Function<0x00248fb0, u32(u32, u32, u32, u32)> call_00248fb0;  // (from the original)
inline constexpr guest::Function<0x0024919c, u32(u32, u32, u32, u32)> call_0024919c;  // (from the original)
inline constexpr guest::Function<0x00249728, u32(u32, u32, u32, u32)> call_00249728;  // (from the original)
inline constexpr guest::Function<0x00249eec, u32(u32, u32, u32, u32)> call_00249eec;  // (from the original)
inline constexpr guest::Function<0x0024a0cc, u32(u32, u32, u32, u32)> call_0024a0cc;  // (from the original)
inline constexpr guest::Function<0x0024a45c, u32(u32, u32, u32, u32)> call_0024a45c;  // (from the original)
inline constexpr guest::Function<0x0052f260, u32(u32, u32, u32, u32)> call_0052f260;  // (from the original)
inline constexpr guest::Function<0x00715280, u32(u32, u32, u32, u32)> call_00715280;  // (from the original)
inline constexpr guest::Function<0x007153ec, u32(u32, u32, u32, u32)> call_007153ec;  // (from the original)
inline constexpr guest::Function<0x00715780, u32(u32, u32, u32, u32)> call_00715780;  // (from the original)

u32 f_0062d1e4(gptr<GridRect> arg0, u32 r1, u32 r2) {
    u32 r13 = guest::cpu()->r[13];
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r0_1 = 0;
    u32 r1_2 = 0;
    u32 r2_2 = 0;
    u32 r3_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r1_3 = 0;
    u32 r2_3 = 0;
    u32 r3_2 = 0;
    u32 r0_4 = 0;
    u32 r0_5 = 0;
    u32 r0_6 = 0;
    u32 r0_7 = 0;
    u32 r0_8 = 0;
    u32 r0_9 = 0;
    u32 r0_10 = 0;
    u32 r0_11 = 0;
    u32 r0_12 = 0;
    u32 r0_13 = 0;
    u32 r0_14 = 0;
    u32 r0_15 = 0;
    u32 r0_16 = 0;
    u32 r0_17 = 0;
    u32 r0_18 = 0;
    u32 r0_19 = 0;
    u32 r0_20 = 0;
    u32 r1_4 = 0;
    u32 r0_21 = 0;
    u32 r1_5 = 0;
    r13 = r13 - 0x38u;  // (from the original)
    *gptr<u32>(r13) = u32(r2);
    r1_1 = u32(arg0->min.x);
    r2_1 = u32(arg0->min.y);
    r0_1 = r13 + 4u;
    guest::cpu()->r[13] = r13;
    call_0024a45c(r0_1, r1_1, r2_1, r1);
    r1_2 = guest::cpu()->r[1];
    r2_2 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    r0_2 = r13 + 4u;
    guest::cpu()->r[13] = r13;
    r0_3 = call_007153ec(r0_2, r1_2, r2_2, r3_1);
    r1_3 = guest::cpu()->r[1];
    r2_3 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    if (r0_3 != 0) {
        goto L_62d290;
    }
    r0_4 = r13 + 4u;
    guest::cpu()->r[13] = r13;
    r0_5 = call_00248fb0(r0_4, r1_3, r2_3, r3_2);
    r1_3 = guest::cpu()->r[1];
    r2_3 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    if (r0_5 != 0) {
        goto L_62d290;
    }
    r0_6 = r13 + 4u;
    guest::cpu()->r[13] = r13;
    r0_7 = call_00249728(r0_6, r1_3, r2_3, r3_2);
    r1_3 = guest::cpu()->r[1];
    r2_3 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    if (r0_7 != 0) {
        goto L_62d290;
    }
    r0_8 = r13 + 4u;
    guest::cpu()->r[13] = r13;
    r0_9 = call_00715780(r0_8, r1_3, r2_3, r3_2);
    r1_3 = guest::cpu()->r[1];
    r2_3 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    if (r0_9 != 0) {
        goto L_62d290;
    }
    r0_10 = r13 + 4u;
    guest::cpu()->r[13] = r13;
    r0_11 = call_0024919c(r0_10, r1_3, r2_3, r3_2);
    r1_3 = guest::cpu()->r[1];
    r2_3 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    if (r0_11 != 0) {
        goto L_62d290;
    }
    r0_12 = r13 + 4u;
    guest::cpu()->r[13] = r13;
    r0_13 = call_0024a0cc(r0_12, r1_3, r2_3, r3_2);
    r1_3 = guest::cpu()->r[1];
    r2_3 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    if (r0_13 != 0) {
        goto L_62d290;
    }
    r0_14 = r13 + 4u;
    guest::cpu()->r[13] = r13;
    r0_15 = call_00249eec(r0_14, r1_3, r2_3, r3_2);
    r1_3 = guest::cpu()->r[1];
    r2_3 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    if (r0_15 != 0) {
        goto L_62d290;
    }
    r0_16 = r13 + 4u;
    guest::cpu()->r[13] = r13;
    r0_17 = call_00715280(r0_16, r1_3, r2_3, r3_2);
    r1_3 = guest::cpu()->r[1];
    r2_3 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    if (r0_17 != 0) {
        goto L_62d290;
    }
    r0_18 = r13 + 4u;
    guest::cpu()->r[13] = r13;
    r0_19 = call_00248dd0(r0_18, r1_3, r2_3, r3_2);
    r1_3 = guest::cpu()->r[1];
    r2_3 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    if (r0_19 == 0) {
        goto L_62d2a4;
    }
L_62d290:;
    r0_20 = r13 + 4u;
    guest::cpu()->r[13] = r13;
    call_0052f260(r0_20, r1_3, r2_3, r3_2);
    r1_4 = guest::cpu()->r[1];
    r13 = r13 + 0x38u;  // (from the original)
    guest::cpu()->r[1] = r1_4;
    guest::cpu()->r[13] = r13;
    return 0u;
L_62d2a4:;
    r0_21 = r13 + 4u;
    guest::cpu()->r[13] = r13;
    call_0052f260(r0_21, r1_3, r2_3, r3_2);
    r1_5 = guest::cpu()->r[1];
    r13 = r13 + 0x38u;  // (from the original)
    guest::cpu()->r[1] = r1_5;
    guest::cpu()->r[13] = r13;
    return 1u;
}

}  // namespace d_0062d1e4
GUEST_EXPORT(0x0062d1e4, d_0062d1e4::f_0062d1e4);

// f_0062d4e0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0062d4e0 {

inline guest::global<u32, 0x0095b6c8> global_0095b6c8;  // (from the original)
inline guest::global<u32, 0x0095b6dc> global_0095b6dc;  // (from the original)
inline constexpr guest::Function<0x002fe7dd, u32(u32, u32, u32, u32)> call_002fe7dc;  // (from the original)
inline constexpr guest::Function<0x0052f200, u32(u32, u32, u32, u32)> call_0052f200;  // (from the original)

u32 f_0062d4e0(u32 r0_unused, u32 r1, u32 r2) {
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 ea_1 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r1_1 = 0;
    u32 r1_2 = 0;
    r13 = r13 - 8;
    if ((*gptr<u32>(0x95b6c8u + 8u) & 1u) != 0) {  // (from the original)
        goto L_62d528;
    }
    r0_1 = 0x95b6c8u + 8u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_2 = call_002fe7dc(r0_1, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    if (r0_2 == 0) {
        goto L_62d528;
    }
    ea_1 = 0x95b6c8u + 0xcu;  // (from the original)
    *gptr<u32>(ea_1) = u32(1u);
    *gptr<u32>(ea_1 + 4) = u32(1u);
    r2 = 0x100000u;  // (from the original)
    r1 = 0x52f0ecu;  // (from the original)
L_62d528:;
    if ((*gptr<u32>(0x95b6c8u + 4u) & 1u) != 0) {  // (from the original)
        goto L_62d570;
    }
    guest::cpu()->r[13] = r13;
    r0_3 = call_002fe7dc(0x95b6ccu, r1, r2, guest::cpu()->r[3]);  // (from the original)
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    if (r0_3 == 0) {
        goto L_62d570;
    }
    *global_0095b6dc = u32(5u);
    *gptr<u32>(0x95b6dcu + 4) = u32(4u);  // (from the original)
    r2 = 0x100000u;  // (from the original)
    r1 = 0x52f0ecu;  // (from the original)
L_62d570:;
    if ((*global_0095b6c8 & 1u) != 0) {
        r13 = r13 + 8;
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return 0xac3548u;  // (from the original)
    }
    guest::cpu()->r[13] = r13;
    r0_4 = call_002fe7dc(0x95b6c8u, r1, r2, guest::cpu()->r[3]);  // (from the original)
    r1_1 = guest::cpu()->r[1];
    if (r0_4 == 0) {
        r13 = r13 + 8;
        guest::cpu()->r[1] = r1_1;
        guest::cpu()->r[13] = r13;
        return 0xac3548u;  // (from the original)
    }
    r1_2 = 0x95b6dcu - 8u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_0052f200(0xac3548u, r1_2, 0x95b6dcu, guest::cpu()->r[3]);  // (from the original)
    r13 = r13 + 8;
    guest::cpu()->r[1] = 0x52f280u;  // (from the original)
    guest::cpu()->r[13] = r13;
    return 0xac3548u;  // (from the original)
}

}  // namespace d_0062d4e0
GUEST_EXPORT(0x0062d4e0, d_0062d4e0::f_0062d4e0);

// f_0062d5dc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0062d5dc {

inline constexpr guest::Function<0x00314a04, u32(u32, u32, u32, u32)> call_00314a04;  // (from the original)
inline constexpr guest::Function<0x00314a1c, u32(u32, u32, u32, u32)> call_00314a1c;  // (from the original)
inline constexpr guest::Function<0x00314a9c, u32(u32, u32, u32, u32)> call_00314a9c;  // (from the original)
inline constexpr guest::Function<0x00314b04, u32(u32, u32, u32, u32)> call_00314b04;  // (from the original)
inline constexpr guest::Function<0x00314b58, u32(u32, u32, u32, u32)> call_00314b58;  // (from the original)
inline constexpr guest::Function<0x006a6c78, u32(u32, u32, u32, u32)> call_006a6c78;  // (from the original)
inline constexpr guest::Function<0x006cac2c, u32(u32, u32, u32, u32)> call_006cac2c;  // (from the original)

u32 f_0062d5dc(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r9 = guest::cpu()->r[9];
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r0_2 = 0;
    u32 r2_2 = 0;
    u32 r3_2 = 0;
    u32 r0_3 = 0;
    u32 ea_1 = 0;
    u32 r0_4 = 0;
    u32 r1_1 = 0;
    u32 r2_3 = 0;
    u32 r3_3 = 0;
    u32 r5_1 = 0;
    u32 r12_1 = 0;
    u32 ea_2 = 0;
    u32 ea_3 = 0;
    u32 r0_5 = 0;
    u32 r1_2 = 0;
    u32 r2_4 = 0;
    u32 r3_4 = 0;
    u32 ea_4 = 0;
    u32 r5_2 = 0;
    u32 r12_2 = 0;
    u32 r0_6 = 0;
    u32 r0_7 = 0;
    u32 r0_8 = 0;
    u32 r0_9 = 0;
    u32 r1_3 = 0;
    u32 r2_5 = 0;
    u32 r3_5 = 0;
    u32 r2_6 = 0;
    u32 r3_6 = 0;
    u32 r1_4 = 0;
    u32 r0_10 = 0;
    u32 ea_5 = 0;
    u32 r1_5 = 0;
    u32 r2_7 = 0;
    u32 r3_7 = 0;
    u32 r4_1 = 0;
    u32 r12_3 = 0;
    u32 r5_3 = 0;
    u32 r2_8 = 0;
    u32 r3_8 = 0;
    u32 r0_11 = 0;
    u32 ea_6 = 0;
    u32 r1_6 = 0;
    u32 r4_2 = 0;
    u32 r12_4 = 0;
    u32 r5_4 = 0;
    u32 r1_7 = 0;
    u32 r0_12 = 0;
    u32 r0_13 = 0;
    u32 r1_8 = 0;
    r13 = r13 - 0xb0u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_1 = call_00314a04(0u, r1, r2, r3);
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    r0_2 = r13 + 0x50u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_00314a9c(r0_2, r0_1, r2_1, r3_1);
    r2_2 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    r0_3 = r13 + 0x38u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_00314a1c(r0_3, r0_1, r2_2, r3_2);
    r7 = r13 + 8u;
    ea_1 = r13 + 0x50u;  // (from the original)
    r0_4 = *gptr<u32>(ea_1);
    r1_1 = *gptr<u32>(ea_1 + 4);
    r2_3 = *gptr<u32>(ea_1 + 8);
    r3_3 = *gptr<u32>(ea_1 + 0xc);  // (from the original)
    r5_1 = *gptr<u32>(ea_1 + 0x10);  // (from the original)
    r12_1 = *gptr<u32>(ea_1 + 0x14);  // (from the original)
    r8 = r13 + 0x20u;  // (from the original)
    ea_2 = r13 + 0x20u;  // (from the original)
    *gptr<u32>(ea_2) = u32(r0_4);
    *gptr<u32>(ea_2 + 4) = u32(r1_1);
    *gptr<u32>(ea_2 + 8) = u32(r2_3);
    *gptr<u32>(ea_2 + 0xc) = u32(r3_3);  // (from the original)
    *gptr<u32>(ea_2 + 0x10) = u32(r5_1);  // (from the original)
    *gptr<u32>(ea_2 + 0x14) = u32(r12_1);  // (from the original)
    ea_3 = r13 + 0x38u;  // (from the original)
    r0_5 = *gptr<u32>(ea_3);
    r1_2 = *gptr<u32>(ea_3 + 4);
    r2_4 = *gptr<u32>(ea_3 + 8);
    r3_4 = *gptr<u32>(ea_3 + 0xc);  // (from the original)
    ea_4 = r13 + 0x48u;  // (from the original)
    r5_2 = *gptr<u32>(ea_4);
    r12_2 = *gptr<u32>(ea_4 + 4);
    *gptr<u32>(r7) = u32(r0_5);
    *gptr<u32>(r7 + 4) = u32(r1_2);
    *gptr<u32>(r7 + 8) = u32(r2_4);
    *gptr<u32>(r7 + 0xc) = u32(r3_4);  // (from the original)
    *gptr<u32>(r7 + 0x10) = u32(r5_2);  // (from the original)
    *gptr<u32>(r7 + 0x14) = u32(r12_2);  // (from the original)
    r5 = *gptr<u32>(r0);
    r6 = *gptr<u32>(r0 + 4);
    guest::cpu()->r[13] = r13;
    r0_6 = call_00314b04(r8, r7, r2_4, r3_4);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r9 = 0u;
    if (r0_6 == 0) {
        goto L_62d6d8;
    }
L_62d654:;
    r0_7 = r8 + 8u;
    r0_8 = u32(*gptr<u8>(r0_7 + 8u));
    guest::cpu()->r[13] = r13;
    r0_9 = call_006cac2c(r0_8, r1, r2, r3);
    r1_3 = guest::cpu()->r[1];
    r2_5 = guest::cpu()->r[2];
    r3_5 = guest::cpu()->r[3];
    if (r0_9 == 0) {
        goto L_62d6b8;
    }
    *gptr<u32>(r13 + 0x80u) = u32(r9);  // (from the original)
    *gptr<u32>(r13 + 0x84u) = u32(r9);  // (from the original)
    r2_6 = *gptr<u32>(r0_7);
    r3_6 = *gptr<u32>(r0_7 + 4);
    r1_4 = r13 + 0x84u;  // (from the original)
    r0_10 = r13 + 0x80u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_006a6c78(r0_10, r1_4, r2_6, r3_6);
    r1_3 = guest::cpu()->r[1];
    r2_5 = guest::cpu()->r[2];
    r3_5 = guest::cpu()->r[3];
    if (r5 != *gptr<u32>(r13 + 0x80u)) {  // (from the original)
        goto L_62d6b8;
    }
    if (r6 != *gptr<u32>(r13 + 0x84u)) {  // (from the original)
        goto L_62d6b8;
    }
    ea_5 = r13 + 0x20u;  // (from the original)
    r1_5 = *gptr<u32>(ea_5 + 4);
    r2_7 = *gptr<u32>(ea_5 + 8);
    r3_7 = *gptr<u32>(ea_5 + 0xc);  // (from the original)
    r4_1 = *gptr<u32>(ea_5 + 0x10);  // (from the original)
    r12_3 = *gptr<u32>(ea_5 + 0x14);  // (from the original)
    r5_3 = r13 + 0x68u;  // (from the original)
    *gptr<u32>(r5_3) = u32(*gptr<u32>(ea_5));
    *gptr<u32>(r5_3 + 4) = u32(r1_5);
    *gptr<u32>(r5_3 + 8) = u32(r2_7);
    *gptr<u32>(r5_3 + 0xc) = u32(r3_7);  // (from the original)
    *gptr<u32>(r5_3 + 0x10) = u32(r4_1);  // (from the original)
    *gptr<u32>(r5_3 + 0x14) = u32(r12_3);  // (from the original)
    goto L_62d6e8;
L_62d6b8:;
    guest::cpu()->r[13] = r13;
    call_00314b58(r8, r1_3, r2_5, r3_5);
    r2_8 = guest::cpu()->r[2];
    r3_8 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0_11 = call_00314b04(r8, r7, r2_8, r3_8);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0_11 != 0) {
        guest::preempt();
        goto L_62d654;
    }
L_62d6d8:;
    ea_6 = r13 + 8u;
    r1_6 = *gptr<u32>(ea_6 + 4);
    r2_7 = *gptr<u32>(ea_6 + 8);
    r3_7 = *gptr<u32>(ea_6 + 0xc);  // (from the original)
    r4_2 = *gptr<u32>(ea_6 + 0x10);  // (from the original)
    r12_4 = *gptr<u32>(ea_6 + 0x14);  // (from the original)
    r5_4 = r13 + 0x68u;  // (from the original)
    *gptr<u32>(r5_4) = u32(*gptr<u32>(ea_6));
    *gptr<u32>(r5_4 + 4) = u32(r1_6);
    *gptr<u32>(r5_4 + 8) = u32(r2_7);
    *gptr<u32>(r5_4 + 0xc) = u32(r3_7);  // (from the original)
    *gptr<u32>(r5_4 + 0x10) = u32(r4_2);  // (from the original)
    *gptr<u32>(r5_4 + 0x14) = u32(r12_4);  // (from the original)
L_62d6e8:;
    r1_7 = r13 + 0x68u;  // (from the original)
    r0_12 = r13 + 0x38u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_13 = call_00314b04(r0_12, r1_7, r2_7, r3_7);
    r1_8 = guest::cpu()->r[1];
    r13 = r13 + 0xb0u;  // (from the original)
    guest::cpu()->r[1] = r1_8;
    guest::cpu()->r[13] = r13;
    return r0_13;
}

}  // namespace d_0062d5dc
GUEST_EXPORT(0x0062d5dc, d_0062d5dc::f_0062d5dc);

// f_0062e47c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0062e47c {

inline constexpr guest::Function<0x0024220c, u32(u32, u32, u32, u32)> call_0024220c;  // (from the original)
inline constexpr guest::Function<0x0052eed0, u32(u32, u32, u32, u32)> call_0052eed0;  // (from the original)
inline constexpr guest::Function<0x0052f0c0, u32(u32, u32, u32, u32)> call_0052f0c0;  // (from the original)
inline constexpr guest::Function<0x0052f144, u32(u32, u32, u32, u32)> call_0052f144;  // (from the original)
inline constexpr guest::Function<0x0052f224, u32(u32, u32, u32, u32)> call_0052f224;  // (from the original)
inline constexpr guest::Function<0x00540b14, u32(u32, u32, u32, u32)> call_00540b14;  // (from the original)
inline constexpr guest::Function<0x00540bd0, u32(u32, u32, u32, u32)> call_00540bd0;  // (from the original)
inline constexpr guest::Function<0x0057bb98, u32(u32, u32, u32, u32)> call_0057bb98;  // (from the original)
inline constexpr guest::Function<0x0062d0f4, u32(u32, u32, u32, u32)> call_0062d0f4;  // (from the original)
inline constexpr guest::Function<0x007481ec, u32(u32, u32, u32, u32)> call_007481ec;  // (from the original)
inline constexpr guest::Function<0x0074824c, u32(u32, u32, u32, u32)> call_0074824c;  // (from the original)
inline constexpr guest::Function<0x00748284, u32(u32, u32, u32, u32)> call_00748284;  // (from the original)
inline constexpr guest::Function<0x00810b1c, u32(u32, u32, u32, u32)> call_00810b1c;  // (from the original)

u32 f_0062e47c(u32 r0, u32 r1, u32 r2) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r8 = guest::cpu()->r[8];
    u32 r9 = guest::cpu()->r[9];
    u32 r10 = guest::cpu()->r[10];
    u32 r11 = guest::cpu()->r[11];
    u32 r12 = guest::cpu()->r[12];
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r0_2 = 0;
    u32 r2_2 = 0;
    u32 r7_1 = 0;
    u32 r2_3 = 0;
    u32 r2_4 = 0;
    u32 r2_5 = 0;
    u32 r0_3 = 0;
    u32 r2_6 = 0;
    u32 r0_4 = 0;
    u32 r2_7 = 0;
    u32 r0_5 = 0;
    u32 r0_6 = 0;
    u32 r0_7 = 0;
    u32 r0_8 = 0;
    u32 r0_9 = 0;
    u32 r1_2 = 0;
    u32 r1_3 = 0;
    u32 r4_1 = 0;
    u32 r0_10 = 0;
    u32 zf_1 = 0;
    u32 cf_1 = 0;
    *gptr<u32>(r13 + 0xfffffff8u) = u32(r12);  // (from the original)
    r13 = r13 - 0xc88u;  // (from the original)
    r5 = r13;
    r9 = r0;
    r11 = r1;
    r10 = r2;
    guest::cpu()->r[13] = r13;
    r0_1 = call_00810b1c(r5, r1, r2, guest::cpu()->r[3]);
    r1_1 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    guest::cpu()->r[13] = r13;
    r0_2 = call_0057bb98(r0_1, r1_1, r2_1, guest::cpu()->r[3]);
    r2_2 = guest::cpu()->r[2];
    r7_1 = r13 + 0xc18u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_0052f224(r7_1, r0_2, r2_2, guest::cpu()->r[3]);
    r2_3 = guest::cpu()->r[2];
    r6 = r13 + 0xc38u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_0074824c(r6, r7_1, r2_3, guest::cpu()->r[3]);
    r2_4 = guest::cpu()->r[2];
    r4 = r13 + 0xc28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_00748284(r4, r7_1, r2_4, guest::cpu()->r[3]);
    r2_5 = guest::cpu()->r[2];
    guest::cpu()->r[13] = r13;
    r0_3 = call_007481ec(r4, r6, r2_5, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    if (r0_3 == 0) {
        goto L_62e5d0;
    } else {
        r8 = r13 + 0xc48u;  // (from the original)
    }
L_62e4f8:;
    if (s32(*gptr<u32>(r4 + 8u)) < s32(2u)) {
        goto L_62e5b0;
    }
    if (s32(*gptr<u32>(r4 + 8u)) >= s32(0xeu)) {  // (from the original)
        goto L_62e5b0;
    }
    if (s32(*gptr<u32>(r4 + 0xcu)) < s32(2u)) {  // (from the original)
        goto L_62e5b0;
    }
    if (s32(*gptr<u32>(r4 + 0xcu)) >= s32(0xeu)) {  // (from the original)
        goto L_62e5b0;
    }
    r2_6 = r4 + 8u;
    guest::cpu()->r[13] = r13;
    call_0052eed0(r8, r9, r2_6, guest::cpu()->r[3]);
    r2 = guest::cpu()->r[2];
    r1 = *gptr<u32>(r13 + 4);
    if (s32(*gptr<u32>(r13)) >= s32(r1)) {
        goto L_62e5a8;
    }
    r0_4 = *gptr<u32>(r13 + 0xcu);  // (from the original)
    if (r0_4 != 0) {
        *gptr<u32>(r13 + 0xcu) = u32(*gptr<u32>(r0_4));  // (from the original)
        guest::cpu()->r[13] = r13;
        r0_4 = call_0052f0c0(r0_4, r8, r2, guest::cpu()->r[3]);
    }
    r1 = *gptr<u32>(r13);
    r2 = *gptr<u32>(r13 + 4);
    if (s32(r1) >= s32(r2)) {
        goto L_62e5a8;
    }
    r1 = *gptr<u32>(r13 + 8u);
    r2 = *gptr<u32>(r13);
    *gptr<u32>(r1 + (r2 << 2)) = u32(r0_4);
    *gptr<u32>(r13) = u32(*gptr<u32>(r13) + 1u);
L_62e5a8:;
L_62e5b0:;
    guest::cpu()->r[13] = r13;
    call_0052f144(r4, r1, r2, guest::cpu()->r[3]);
    r2_7 = guest::cpu()->r[2];
    guest::cpu()->r[13] = r13;
    r0_5 = call_007481ec(r4, r6, r2_7, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    if (r0_5 != 0) {
        guest::preempt();
        goto L_62e4f8;
    }
L_62e5d0:;
    r0_6 = *gptr<u32>(r13);
    if (r0_6 == 0 || r0_6 >> 0x1f != (r0_6 & (r0_6 ^ r0_6)) >> 0x1f) {  // (from the original)
        goto L_62e6b0;
    }
    guest::cpu()->r[13] = r13;
    call_00540bd0(r5, r10, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r0_7 = *gptr<u32>(r13);
    if (r0_7 < 0u || r0_7 == 0) {
        goto L_62e6b0;
    }
    r4 = *gptr<u32>(*gptr<u32>(r13 + 8u));
    if (r4 == 0) {
        goto L_62e6b0;
    }
    do {
L_62e60c:;
        guest::cpu()->r[13] = r13;
        r0_8 = call_0062d0f4(r4, r11, 3u, guest::cpu()->r[3]);
        if (!(r0_8 == 0)) {
            r0_9 = *gptr<u32>(r4);
            r1_2 = *gptr<u32>(r4 + 4);
            guest::cpu()->r[13] = r13;
            call_0024220c(r0_9, r1_2, r11, guest::cpu()->r[3]);
            r1_3 = guest::cpu()->r[1];
            r13 = r13 + 0xc88u;  // (from the original)
            guest::cpu()->r[1] = r1_3;
            guest::cpu()->r[13] = r13;
            return 1u;
        }
        if (!(s32(*gptr<u32>(r13)) < s32(1u))) {
            r4_1 = *gptr<u32>(*gptr<u32>(r13 + 8u));
            *gptr<u32>(r4_1) = u32(*gptr<u32>(r13 + 0xcu));  // (from the original)
            *gptr<u32>(r13 + 0xcu) = u32(r4_1);  // (from the original)
        }
        guest::cpu()->r[13] = r13;
        call_00540b14(r5, 0u, 1u, guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        r0_10 = *gptr<u32>(r13);
        zf_1 = r0_10 == 0;
        cf_1 = r0_10 >= 0u;
        if (zf_1 || r0_10 >> 0x1f != (r0_10 & (r0_10 ^ r0_10)) >> 0x1f) {  // (from the original)
            goto L_62e6b0;
        }
        if (!cf_1 || zf_1) {
            goto L_62e6b0;
        }
        r4 = *gptr<u32>(*gptr<u32>(r13 + 8u));
        guest::preempt();
    } while (r4 != 0);
L_62e6b0:;
    r13 = r13 + 0xc88u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return 0u;
}

}  // namespace d_0062e47c
GUEST_EXPORT(0x0062e47c, d_0062e47c::f_0062e47c);
