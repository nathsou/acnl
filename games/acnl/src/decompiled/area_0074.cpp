// Functions decompiled by tools/decomp (docs/decomp.md), each proved equal to the recompiled original (prove-cpp). The
// names are generated (d_<address>::f_<address>, Object_<address>_<argument>, word_<offset>) and still to be chosen.
#include "guest/guest.hpp"
#include "core/state_a22020.hpp"

#include <bit>

using guest::gptr;

// f_007400f8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_007400f8 {

struct __attribute__((packed)) Object_007400f8_0 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
};
GUEST_OFFSET(Object_007400f8_0, word_4, 0x4);  // (from the original)

inline constexpr guest::Function<0x0073f4b4, u32(u32, u32, u32, u32)> call_0073f4b4;  // (from the original)

u32 f_007400f8(gptr<Object_007400f8_0> arg0) {
    u32 r0 = arg0.addr();
    guest::cpu()->r[13] -= 8u;
    r0 = *gptr<u32>(arg0->word_4 + 0x3cu);  // (from the original)
    r0 = call_0073f4b4(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    r0 = *gptr<u32>(r0);
    guest::cpu()->r[13] += 8u;
    return r0;
}

}  // namespace d_007400f8
GUEST_EXPORT(0x007400f8, d_007400f8::f_007400f8);

// f_00740114: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00740114 {

struct __attribute__((packed)) Object_00740114_0 {
    u8 unknown_0[0x3c];  // (not used here)
    u32 word_3c;
};
GUEST_OFFSET(Object_00740114_0, word_3c, 0x3c);  // (from the original)

inline constexpr guest::Function<0x0073f1ac, u32(u32, u32, u32, u32)> call_0073f1ac;  // (from the original)
inline constexpr guest::Function<0x0073f208, u32(u32, u32, u32, u32)> call_0073f208;  // (from the original)

u32 f_00740114(gptr<Object_00740114_0> arg0, u32 r1, u32 r2) {
    u32 r0 = arg0.addr();
    u32 r4 = guest::cpu()->r[4];
    guest::cpu()->r[13] -= 8u;
    r0 = arg0->word_3c;
    r4 = r2;
    r0 = call_0073f208(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    if (r0 == 0) {
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r1 = *gptr<u32>(r0);
    *gptr<u32>(r4) = u32(r1);
    r0 = call_0073f1ac(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    *gptr<u32>(r4 + 4u) = u32(r0);
    r0 = 1u;
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_00740114
GUEST_EXPORT(0x00740114, d_00740114::f_00740114);

// f_00740144: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00740144 {

struct __attribute__((packed)) Object_00740144_0 {
    u8 unknown_0[0x3c];  // (not used here)
    u32 word_3c;
};
GUEST_OFFSET(Object_00740144_0, word_3c, 0x3c);  // (from the original)

inline constexpr guest::Function<0x00141728, u32(u32, u32, u32, u32)> call_00141728;  // (from the original)
inline constexpr guest::Function<0x0073f70c, u32(u32, u32, u32, u32)> call_0073f70c;  // (from the original)

u32 f_00740144(gptr<Object_00740144_0> arg0, u32 r1, u32 r2) {
    u32 r0 = arg0.addr();
    u32 r4 = guest::cpu()->r[4];
    guest::cpu()->r[13] -= 8u;
    r0 = arg0->word_3c;
    r4 = r2;
    r0 = call_00141728(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    if (r0 == 0) {
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r0 = call_0073f70c(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 == 0) {
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    *gptr<u32>(r4) = u32(*gptr<u32>(r0));
    *gptr<u32>(r4 + 4u) = u32(*gptr<u32>(r0 + 4u));
    r1 = u32(*gptr<u8>(r0 + 8u));
    *gptr<u8>(r4 + 8u) = u8(r1);
    *gptr<u8>(r4 + 9u) = u8(u32(*gptr<u8>(r0 + 9u)));
    r0 = 1u;
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_00740144
GUEST_EXPORT(0x00740144, d_00740144::f_00740144);

// f_007401c0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_007401c0 {

struct __attribute__((packed)) Object_007401c0_0 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
};
GUEST_OFFSET(Object_007401c0_0, word_4, 0x4);  // (from the original)

inline constexpr guest::Function<0x0073f4c0, u32(u32, u32, u32, u32)> call_0073f4c0;  // (from the original)

u32 f_007401c0(gptr<Object_007401c0_0> arg0) {
    u32 r0 = arg0.addr();
    guest::cpu()->r[13] -= 8u;
    r0 = *gptr<u32>(arg0->word_4 + 0x3cu);  // (from the original)
    r0 = call_0073f4c0(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    r0 = *gptr<u32>(r0);
    guest::cpu()->r[13] += 8u;
    return r0;
}

}  // namespace d_007401c0
GUEST_EXPORT(0x007401c0, d_007401c0::f_007401c0);

// f_0074046c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0074046c {

struct __attribute__((packed)) Object_0074046c_0 {
    u8 unknown_0[0x3c];  // (not used here)
    u32 word_3c;
};
GUEST_OFFSET(Object_0074046c_0, word_3c, 0x3c);  // (from the original)

inline constexpr guest::Function<0x0013f718, u32(u32, u32, u32, u32)> call_0013f718;  // (from the original)
inline constexpr guest::Function<0x00141728, u32(u32, u32, u32, u32)> call_00141728;  // (from the original)
inline constexpr guest::Function<0x0073f4f4, u32(u32, u32, u32, u32)> call_0073f4f4;  // (from the original)
inline constexpr guest::Function<0x0073f630, u32(u32, u32, u32, u32)> call_0073f630;  // (from the original)
inline constexpr guest::Function<0x0073f650, u32(u32, u32, u32, u32)> call_0073f650;  // (from the original)
inline constexpr guest::Function<0x0073f6b4, u32(u32, u32, u32, u32)> call_0073f6b4;  // (from the original)
inline constexpr guest::Function<0x0073f734, u32(u32, u32, u32, u32)> call_0073f734;  // (from the original)
inline constexpr guest::Function<0x0073f740, u32(u32, u32, u32, u32)> call_0073f740;  // (from the original)

u32 f_0074046c(gptr<Object_0074046c_0> arg0, u32 r1, u32 r2) {
    u32 r0 = arg0.addr();
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r5 = r0;
    r0 = arg0->word_3c;
    r4 = r2;
    r0 = call_00141728(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r6 = r0;
    if (r0 == 0) {
        goto L_7404e8;
    }
    r0 = call_0013f718(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    if (r0 != 2u) {
        r0 = 0u;
        goto L_7404e8;
    }
    r1 = 0x2030100u;  // (from the original)
    r0 = r6;
    if (*gptr<u32>(r5 + 8u) < r1) {
        goto L_7404ec;
    }
    r0 = call_0073f734(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r0 = call_0073f4f4(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 == 0) {
        goto L_7404e8;
    }
    r1 = *gptr<u32>(r0) << 0x10 >> 0x18;  // (from the original)
    if (r1 != 1u) {
        r1 = 0u;
    }
    *gptr<u8>(r4) = u8(r1);
    r1 = *gptr<u32>(r0 + 4u);
    *gptr<u32>(r4 + 4u) = u32(r1);
    r0 = *gptr<u32>(r0 + 8u);
L_7404e0:;
    *gptr<u32>(r4 + 8u) = u32(r0);
    r0 = 1u;
L_7404e8:;
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
L_7404ec:;
    r0 = call_0073f740(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r5 = r0;
    r0 = call_0073f6b4(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    *gptr<u8>(r4) = u8(r0);
    r0 = r5;
    r0 = call_0073f650(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    *gptr<u32>(r4 + 4u) = u32(r0);
    r0 = r5;
    r0 = call_0073f630(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    guest::preempt();
    goto L_7404e0;
}

}  // namespace d_0074046c
GUEST_EXPORT(0x0074046c, d_0074046c::f_0074046c);

// f_00740528: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00740528 {

struct __attribute__((packed)) Object_00740528_0 {
    u8 unknown_0[0x3c];  // (not used here)
    u32 word_3c;
};
GUEST_OFFSET(Object_00740528_0, word_3c, 0x3c);  // (from the original)

inline constexpr guest::Function<0x0073f490, u32(u32, u32, u32, u32)> call_0073f490;  // (from the original)

u32 f_00740528(gptr<Object_00740528_0> arg0, u32 r1, u32 r2, u32 r3) {
    u32 r0 = arg0.addr();
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 zf = 0;
    u32 cf = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r5 = r0;
    r0 = arg0->word_3c;
    r4 = r1;
    r0 = call_0073f490(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    if (r0 != 0) {
        r2 = 0x2030200u;  // (from the original)
        *gptr<u32>(r4) = u32(u32(*gptr<u16>(r0)));
        *gptr<u32>(r4 + 4u) = u32(u32(*gptr<u16>(r0 + 2u)));
        *gptr<u32>(r4 + 8u) = u32(u32(*gptr<u16>(r0 + 4u)));
        *gptr<u32>(r4 + 0xcu) = u32(u32(*gptr<u16>(r0 + 6u)));  // (from the original)
        *gptr<u32>(r4 + 0x10u) = u32(u32(*gptr<u16>(r0 + 8u)));  // (from the original)
        *gptr<u32>(r4 + 0x14u) = u32(u32(*gptr<u16>(r0 + 0xau)));  // (from the original)
        *gptr<u32>(r4 + 0x18u) = u32(u32(*gptr<u16>(r0 + 0xcu)));  // (from the original)
        r3 = *gptr<u32>(r5 + 8u);
        r1 = 1u;
        zf = r2 == r3;
        cf = r2 >= r3;
        if (!cf || zf) {
            *gptr<u32>(r4 + 0x1cu) = u32(u32(*gptr<u8>(r0 + 0xeu)));  // (from the original)
        }
        r0 = 1u;
        if (cf && !zf) {
            *gptr<u32>(r4 + 0x1cu) = u32(r1);  // (from the original)
        }
    }
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_00740528
GUEST_EXPORT(0x00740528, d_00740528::f_00740528);

// f_007406a4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_007406a4 {

struct __attribute__((packed)) Object_007406a4_0 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
};
GUEST_OFFSET(Object_007406a4_0, word_4, 0x4);  // (from the original)

inline constexpr guest::Function<0x002fbb30, u32(u32, u32, u32, u32)> call_002fbb30;  // (from the original)
inline constexpr guest::Function<0x0073ef1c, u32(u32, u32, u32, u32)> call_0073ef1c;  // (from the original)

u32 f_007406a4(gptr<Object_007406a4_0> arg0, u32 r1, u32 r2) {
    u32 r0 = arg0.addr();
    u32 r4 = guest::cpu()->r[4];
    guest::cpu()->r[13] -= 8u;
    r0 = arg0->word_4;
    r4 = r1;
    r0 = call_0073ef1c(r0, r1, r2, guest::cpu()->r[3]);
    r1 = r0;
    r2 = 0x4cu;  // (from the original)
    r0 = r4;
    r0 = call_002fbb30(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r0 = 1u;
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_007406a4
GUEST_EXPORT(0x007406a4, d_007406a4::f_007406a4);

// f_007406cc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_007406cc {

struct __attribute__((packed)) Object_007406cc_0 {
    u8 unknown_0[0x8];  // (not used here)
    u32 word_8;
};
GUEST_OFFSET(Object_007406cc_0, word_8, 0x8);  // (from the original)

struct __attribute__((packed)) Object_007406cc_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Object_007406cc_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_007406cc_1, word_4, 0x4);  // (from the original)

inline constexpr guest::Function<0x00740698, u32(u32, u32, u32, u32)> call_00740698;  // (from the original)

u32 f_007406cc(gptr<Object_007406cc_0> arg0, gptr<Object_007406cc_1> arg1, u32 r2) {
    u32 ea = 0;
    u32 r0 = arg0.addr();
    u32 r1 = arg1.addr();
    u32 r4 = guest::cpu()->r[4];
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 8;
    r4 = r1;
    r2 = r2 + (r2 << 2);
    ea = arg0->word_8 + (4u + (r2 << 2));
    r0 = ea;
    arg1->word_0 = u32(*gptr<u32>(ea));
    r1 = *gptr<u32>(r0 + 4u);
    arg1->word_4 = u32(r1);
    guest::cpu()->r[13] = r13;
    r0 = call_00740698(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    *gptr<u32>(r4 + 8u) = u32(r0);
    r0 = 1u;
    r13 = r13 + 8;
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_007406cc
GUEST_EXPORT(0x007406cc, d_007406cc::f_007406cc);

// f_00740708: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00740708 {

struct __attribute__((packed)) Object_00740708_0 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
};
GUEST_OFFSET(Object_00740708_0, word_4, 0x4);  // (from the original)

inline constexpr guest::Function<0x002f8574, u32(u32, u32, u32, u32)> call_002f8574;  // (from the original)
inline constexpr guest::Function<0x0073eee8, u32(u32, u32, u32, u32)> call_0073eee8;  // (from the original)
inline constexpr guest::Function<0x0073ef34, u32(u32, u32, u32, u32)> call_0073ef34;  // (from the original)
inline constexpr guest::Function<0x0073ef84, u32(u32, u32, u32, u32)> call_0073ef84;  // (from the original)
inline constexpr guest::Function<0x007795ec, u32(u32, u32, u32, u32)> call_007795ec;  // (from the original)

u32 f_00740708(gptr<Object_00740708_0> arg0, u32 r1, u32 r2, u32 r3) {
    u32 r0 = arg0.addr();
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r6 = r1;
    r0 = arg0->word_4;
    r5 = r2;
    r4 = r3;
    r0 = call_0073ef34(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = r4;
    r0 = call_0073ef84(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = call_0073eee8(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r3 = guest::cpu()->r[3];
    r4 = r0;
    if (r0 != 0) {
        r1 = r0;
        r2 = 0x26u;  // (from the original)
        r0 = r6;
        r0 = call_002f8574(r0, r1, r2, r3);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r1 = r4 + 0x26u;  // (from the original)
        r0 = r5;
        r0 = call_007795ec(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r0 = 1u;
    }
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_00740708
GUEST_EXPORT(0x00740708, d_00740708::f_00740708);

// f_00740758: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00740758 {


u32 f_00740758(u32 r0) {
    goto L_740758;
L_740758:;
    r0 = *gptr<u32>(r0);
    if (r0 == 0) {
        return r0;
    }
    r0 = *gptr<u32>(*gptr<u32>(r0 + 0x68u) + 8u);  // (from the original)
    return r0;
}

}  // namespace d_00740758
GUEST_EXPORT(0x00740758, d_00740758::f_00740758);

// f_0074076c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0074076c {

struct __attribute__((packed)) Object_0074076c_0 {
    u32 word_0;
};
GUEST_OFFSET(Object_0074076c_0, word_0, 0x0);  // (from the original)


u32 f_0074076c(gptr<Object_0074076c_0> arg0) {
    u32 r0 = arg0.addr();
    r0 = arg0->word_0;
    if (r0 == 0) {
        return r0;
    }
    if (u32(*gptr<u8>(r0 + 4u)) == 0) {
        r0 = 1u;
    } else {
        r0 = 0u;
    }
    return r0;
}

}  // namespace d_0074076c
GUEST_EXPORT(0x0074076c, d_0074076c::f_0074076c);

// f_0074078c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0074078c {

struct __attribute__((packed)) Object_0074078c_0 {
    u32 word_0;
    u8 unknown_4[0x4c];  // (not used here)
    u8 byte_50;
};
GUEST_OFFSET(Object_0074078c_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_0074078c_0, byte_50, 0x50);  // (from the original)


u32 f_0074078c(gptr<Object_0074078c_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r1 = 0;
    r1 = arg0->word_0;
    if (r1 == 0) {
        r0 = 1u;
    } else {
        r0 = u32(arg0->byte_50);
    }
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_0074078c
GUEST_EXPORT(0x0074078c, d_0074078c::f_0074078c);

// f_007407a0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_007407a0 {

struct __attribute__((packed)) Object_007407a0_0 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
};
GUEST_OFFSET(Object_007407a0_0, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_007407a0_0, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Object_007407a0_0, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Object_007407a0_0, word_10, 0x10);  // (from the original)


void f_007407a0(gptr<Object_007407a0_0> arg0, float S0_unused, float S1) {
    u32 r1 = 0;
    u32 r2 = 0;
    float S0 = 0;
    r1 = arg0->word_10;
    r2 = arg0->word_c;
    S0 = std::bit_cast<float>(arg0->word_8);
    if (s32(r1) >= s32(r2)) {
        guest::cpu()->r[1] = r1;
        guest::cpu()->s[0] = S0;
        guest::cpu()->s[1] = S1;
        return;
    }
    S1 = std::bit_cast<float>(arg0->word_4);
    S0 = (S0 - S1) * float(s32(std::bit_cast<u32>(std::bit_cast<float>(r1)))) / float(s32(std::bit_cast<u32>(std::bit_cast<float>(r2)))) + S1;
    guest::cpu()->r[1] = r1;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    return;
}

}  // namespace d_007407a0
GUEST_EXPORT(0x007407a0, d_007407a0::f_007407a0);

// f_00740814: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00740814 {


u32 f_00740814(u32 r0, u32 r1) {
    float S0 = 0;
    r0 = r0 + (r1 << 2);
    S0 = std::bit_cast<float>(*gptr<u32>(r0 + 0x38u));  // (from the original)
    guest::cpu()->s[0] = S0;
    return r0;
}

}  // namespace d_00740814
GUEST_EXPORT(0x00740814, d_00740814::f_00740814);

// f_0074087c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0074087c {

struct __attribute__((packed)) Object_0074087c_0 {
    u8 unknown_0[0x51];  // (not used here)
    u8 byte_51;
};
GUEST_OFFSET(Object_0074087c_0, byte_51, 0x51);  // (from the original)


u32 f_0074087c(gptr<Object_0074087c_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r1 = 0;
    r1 = u32(arg0->byte_51);
    if (r1 != 0) {
        r0 = 0u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r0 = *gptr<u32>(r0 + 0x84u);  // (from the original)
    if (r0 != 0) {
        r0 = 1u;
    }
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_0074087c
GUEST_EXPORT(0x0074087c, d_0074087c::f_0074087c);

// f_007409c8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_007409c8 {


u32 f_007409c8(u32 r0, u32 r1) {
    r0 = u32(s32(s16(*gptr<u16>(r0 + (r1 << 1) + 0xd0u))));  // (from the original)
    return r0;
}

}  // namespace d_007409c8
GUEST_EXPORT(0x007409c8, d_007409c8::f_007409c8);

// f_007409d4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_007409d4 {

struct __attribute__((packed)) Object_007409d4_3 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Object_007409d4_3, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_007409d4_3, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_007409d4_3, word_8, 0x8);  // (from the original)

inline constexpr guest::Function<0x0013f760, u32(u32, u32, u32, u32)> call_0013f760;  // (from the original)
inline constexpr guest::Function<0x004c52a0, u32(u32, u32, u32, u32)> call_004c52a0;  // (from the original)
inline constexpr guest::Function<0x004c5444, u32(u32, u32, u32, u32)> call_004c5444;  // (from the original)
inline constexpr guest::Function<0x004c5464, u32(u32, u32, u32, u32)> call_004c5464;  // (from the original)
inline constexpr guest::Function<0x004c54dc, u32(u32, u32, u32, u32)> call_004c54dc;  // (from the original)
inline constexpr guest::Function<0x004c7b78, u32(u32, u32, u32, u32)> call_004c7b78;  // (from the original)
inline constexpr guest::Function<0x004d367c, u32(u32, u32, u32, u32)> call_004d367c;  // (from the original)
inline constexpr guest::Function<0x004d3a00, u32(u32, u32, u32, u32)> call_004d3a00;  // (from the original)
inline constexpr guest::Function<0x0073ea28, u32(u32, u32, u32, u32)> call_0073ea28;  // (from the original)
inline constexpr guest::Function<0x0073ebb4, u32(u32, u32, u32, u32)> call_0073ebb4;  // (from the original)

u32 f_007409d4(u32 r0_unused, u32 r1, u32 r2, gptr<Object_007409d4_3> arg3, float S0, float S1) {
    u32 ea = 0;
    u32 res = 0;
    u32 r0 = 0;
    u32 r3 = arg3.addr();
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r7 = guest::cpu()->r[7];
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 0xc0u;  // (from the original)
    r0 = 0u;
    *gptr<u8>(r13 + 0x8cu) = u8(r0);  // (from the original)
    *gptr<u8>(r13 + 0x8du) = u8(r0);  // (from the original)
    *gptr<u8>(r13 + 0x8eu) = u8(r0);  // (from the original)
    *gptr<u8>(r13 + 0x8fu) = u8(r0);  // (from the original)
    *gptr<u8>(r13 + 0x90u) = u8(r0);  // (from the original)
    r7 = r1;
    r5 = r3;
    *gptr<u32>(r13) = u32(arg3->word_8);
    r4 = r2;
    r1 = r13 + 0x80u;  // (from the original)
    r0 = r7;
    r2 = arg3->word_0;
    r3 = arg3->word_4;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    r0 = call_0073ea28(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    if (r0 == 0) {
        goto L_740b50;
    }
    r1 = *gptr<u32>(r13 + 0x84u);  // (from the original)
    r0 = r4;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    r0 = call_0013f760(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    r1 = r0;
    r2 = 0u;
    r0 = r13 + 0x98u;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    r0 = call_004c7b78(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    r2 = 0u;
    r1 = r13 + 8u;
    r0 = r13 + 0x98u;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    r0 = call_0073ebb4(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    if (r0 == 0) {
        goto L_740b50;
    }
    ea = r13 + 0xcu;  // (from the original)
    r0 = *gptr<u32>(ea);
    r1 = 2u;
    res = r0 - 2u;
    if (!u32(res == 0) && res >> 0x1f == ((r0 ^ 2u) & (r0 ^ res)) >> 0x1f) {  // (from the original)
        r0 = r1;
    }
    ea = r5 + 0x14u;  // (from the original)
    r1 = *gptr<u32>(ea);
    r2 = *gptr<u32>(ea + 4);
    r3 = *gptr<u32>(ea + 8);
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    r0 = call_004d367c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    r4 = r0;
    if (r0 == 0) {
        goto L_740b50;
    }
    r1 = u32(*gptr<u8>(r13 + 0x91u));  // (from the original)
    S1 = std::bit_cast<float>(*gptr<u32>(0x740b58u));  // (from the original)
    *gptr<u8>(r4 + 0x194u) = u8(*gptr<u32>(r5 + 4u));  // (from the original)
    *gptr<u8>(r4 + 0x195u) = u8(r1);  // (from the original)
    *gptr<u32>(r4 + 0x19cu) = u32(std::bit_cast<u32>(float(std::bit_cast<u32>(std::bit_cast<float>(*gptr<u32>(r5 + 8u) & 0xffu))) * S1));  // (from the original)
    S0 = float(std::bit_cast<u32>(std::bit_cast<float>(u32(*gptr<u8>(r13 + 0x92u))))) * S1;  // (from the original)
    *gptr<u32>(r4 + 0x198u) = u32(std::bit_cast<u32>(S0));  // (from the original)
    *gptr<u32>(r4 + 0x17cu) = u32(*gptr<u32>(r13 + 0x88u));  // (from the original)
    r1 = u32(*gptr<u8>(r13 + 0x8cu));  // (from the original)
    r0 = r4 + 0x98u;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    r0 = call_004c54dc(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    r1 = u32(*gptr<u8>(r13 + 0x8fu));  // (from the original)
    r0 = r4 + 0x98u;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    r0 = call_004c5444(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    r1 = u32(*gptr<u8>(r13 + 0x8du));  // (from the original)
    r0 = r4 + 0x98u;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    r0 = call_004c5464(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    *gptr<u8>(r4 + 0xb0u) = u8(u32(*gptr<u8>(r13 + 0x8eu)));  // (from the original)
    r1 = u32(*gptr<u8>(r13 + 0x90u));  // (from the original)
    r0 = r4 + 0x98u;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    r0 = call_004c52a0(r0, r1, r2, r3);
    S1 = std::bit_cast<float>(*gptr<u32>(0x740b5cu));  // (from the original)
    r3 = 0u;
    r1 = r13 + 8u;
    S0 = float(s32(std::bit_cast<u32>(std::bit_cast<float>(u32(*gptr<u8>(r13 + 0x93u)) + *gptr<u32>(r5 + 0x10u) - 0x40u)))) * S1;  // (from the original)
    *gptr<u32>(r4 + 0x174u) = u32(std::bit_cast<u32>(S0));  // (from the original)
    *gptr<u8>(r4 + 0x196u) = u8(u32(*gptr<u8>(r13 + 0x95u)));  // (from the original)
    *gptr<u8>(r4 + 0x13du) = u8(u32(*gptr<u8>(r13 + 0x94u)));  // (from the original)
    *gptr<u8>(r4 + 0x197u) = u8(u32(*gptr<u8>(r13 + 0x96u)));  // (from the original)
    r2 = *gptr<u32>(r5 + 0xcu);  // (from the original)
    r0 = r4;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    r0 = call_004d3a00(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    r0 = r4;
L_740b50:;
    r13 = r13 + 0xc0u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    return r0;
}

}  // namespace d_007409d4
GUEST_EXPORT(0x007409d4, d_007409d4::f_007409d4);

// f_00741fcc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00741fcc {

struct __attribute__((packed)) Object_00741fcc_0 {
    u16 half_0;
    u8 unknown_2[0x2];  // (not used here)
    u32 word_4;
};
GUEST_OFFSET(Object_00741fcc_0, half_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_00741fcc_0, word_4, 0x4);  // (from the original)


u32 f_00741fcc(gptr<Object_00741fcc_0> arg0, u32 r1) {
    u32 res = 0;
    u32 r0 = arg0.addr();
    u32 r2 = 0;
    u32 r3 = 0;
    u32 r12 = 0;
    u32 zf = 0;
    u32 cf = 0;
    r12 = u32(arg0->half_0);
    r2 = r0 + arg0->word_4;
    r0 = 0u;
    if (r12 == 0x6000u) {  // (from the original)
        r0 = *gptr<u32>(r2 + 4u) + r2;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    res = r12 - 0x6001u;  // (from the original)
    r3 = res;
    if (res != 0) {
        if (r3 != 1u) {
            guest::cpu()->r[1] = r1;
            return r0;
        }
        r0 = u32(*gptr<u8>(r2));
        zf = r0 == r1;
        cf = r0 >= r1;
        if (!cf || zf) {
            r3 = u32(*gptr<u8>(r2 + 1u));
            zf = r1 == r3;
            cf = r1 >= r3;
        }
        if (cf && !zf) {
            r0 = 0u;
            guest::cpu()->r[1] = r1;
            return r0;
        }
        r0 = *gptr<u32>(r2 + (r1 - r0 << 3) + 8u);
        r0 = r0 + r2;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r12 = *gptr<u32>(r2);
    r0 = 0u;
    if (!u32(r12 >= 0u) || u32(r12 == 0)) {
        r0 = 0u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    do {
L_74202c:;
        if (!(u32(*gptr<u8>(r2 + r0 + 4u)) < r1)) {
            r1 = r12 + 3u & ~3u;
            r0 = *gptr<u32>(r1 + (r0 << 3) + 4u + r2 + 4u);
            r0 = r0 + r2;
            guest::cpu()->r[1] = r1;
            return r0;
        }
        r0 = r0 + 1u;
        guest::preempt();
    } while (r0 < r12);
    r0 = 0u;
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_00741fcc
GUEST_EXPORT(0x00741fcc, d_00741fcc::f_00741fcc);

// f_00742080: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00742080 {

struct __attribute__((packed)) Object_00742080_0 {
    u8 unknown_0[0xc];  // (not used here)
    u32 word_c;
};
GUEST_OFFSET(Object_00742080_0, word_c, 0xc);  // (from the original)


u32 f_00742080(gptr<Object_00742080_0> arg0, u32 r1) {
    u32 res = 0;
    u32 r0 = arg0.addr();
    u32 r2 = 0;
    u32 r3 = 0;
    r2 = arg0->word_c + r0;
    r3 = r2 + (r1 << 3);
    r0 = u32(*gptr<u16>(r3 + 4u));
    if (r0 != 0x5900u) {  // (from the original)
        res = r0 - 0x5903u;  // (from the original)
        r0 = res;
        if (res == 0) {
            return r0;
        }
        r0 = 0u;
        return r0;
    }
    r0 = *gptr<u32>(r2);
    if (u32(r0 >= r1) && !u32(r0 == r1)) {
        r0 = *gptr<u32>(r3 + 8u) + r2;
        return r0;
    }
    r0 = 0u;
    return r0;
}

}  // namespace d_00742080
GUEST_EXPORT(0x00742080, d_00742080::f_00742080);

// f_007420d0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_007420d0 {

inline constexpr guest::Function<0x00141a9c, u32(u32, u32, u32, u32)> call_00141a9c;  // (from the original)

u32 f_007420d0(u32 r0, u32 r1_unused, u32 r2_unused, u32 r3) {
    u32 r1 = 0;
    u32 r2 = 0;
    u32 r13 = guest::cpu()->r[13];
    *gptr<u32>(r13 + 0xfffffff8u) = u32(r3);  // (from the original)
    r13 = r13 - 8;
    r2 = 4u;
    r1 = r13;
    r0 = r0 + 4u;
    guest::cpu()->r[13] = r13;
    r0 = call_00141a9c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    if (r0 == 0) {
        r13 = r13 + 8;
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    r0 = *gptr<u32>(r13) << 0x10 >> 0x18;  // (from the original)
    r13 = r13 + 8;
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_007420d0
GUEST_EXPORT(0x007420d0, d_007420d0::f_007420d0);

// f_007420fc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_007420fc {

inline constexpr guest::Function<0x00141a9c, u32(u32, u32, u32, u32)> call_00141a9c;  // (from the original)

u32 f_007420fc(u32 r0, u32 r1_unused, u32 r2_unused, u32 r3) {
    u32 r1 = 0;
    u32 r2 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r13 = guest::cpu()->r[13];
    *gptr<u32>(r13 + 0xfffffff0u) = u32(r3);  // (from the original)
    r13 = r13 - 0x10;  // (from the original)
    r4 = r0;
    r2 = 9u;
    r1 = r13;
    r0 = r0 + 4u;
    guest::cpu()->r[13] = r13;
    r0 = call_00141a9c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    if (r0 == 0) {
        r0 = 0x981874u;  // (from the original)
        r13 = r13 + 0x10;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    r0 = *gptr<u32>(r13) + r4;
    r1 = *gptr<u32>(r0 + 4u);
    r0 = r0 + r1;
    r13 = r13 + 0x10;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_007420fc
GUEST_EXPORT(0x007420fc, d_007420fc::f_007420fc);

// f_00742138: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00742138 {

inline constexpr guest::Function<0x00141a9c, u32(u32, u32, u32, u32)> call_00141a9c;  // (from the original)

u32 f_00742138(u32 r0, u32 r1_unused, u32 r2_unused, u32 r3) {
    u32 r1 = 0;
    u32 r2 = 0;
    u32 r13 = guest::cpu()->r[13];
    *gptr<u32>(r13 + 0xfffffff8u) = u32(r3);  // (from the original)
    r13 = r13 - 8;
    r2 = 0u;
    r1 = r13;
    r0 = r0 + 4u;
    guest::cpu()->r[13] = r13;
    r0 = call_00141a9c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    if (r0 == 0) {
        r0 = 0x3cu;  // (from the original)
    } else {
        r0 = *gptr<u32>(r13) & 0xffu;  // (from the original)
    }
    r13 = r13 + 8;
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_00742138
GUEST_EXPORT(0x00742138, d_00742138::f_00742138);

// f_00742160: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00742160 {

inline constexpr guest::Function<0x00141a9c, u32(u32, u32, u32, u32)> call_00141a9c;  // (from the original)

u32 f_00742160(u32 r0, u32 r1_unused, u32 r2_unused, u32 r3) {
    u32 res = 0;
    u32 r1 = 0;
    u32 r2 = 0;
    u32 r13 = guest::cpu()->r[13];
    *gptr<u32>(r13 + 0xfffffff8u) = u32(r3);  // (from the original)
    r13 = r13 - 8;
    r2 = 4u;
    r1 = r13;
    r0 = r0 + 4u;
    guest::cpu()->r[13] = r13;
    r0 = call_00141a9c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    if (r0 == 0) {
        r13 = r13 + 8;
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    res = *gptr<u32>(r13) & 0xffu;  // (from the original)
    r0 = res;
    if (res != 0) {
        r0 = 1u;
    }
    r13 = r13 + 8;
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_00742160
GUEST_EXPORT(0x00742160, d_00742160::f_00742160);

// f_0074218c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0074218c {

struct __attribute__((packed)) Object_0074218c_0 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
};
GUEST_OFFSET(Object_0074218c_0, word_4, 0x4);  // (from the original)


u32 f_0074218c(gptr<Object_0074218c_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r1 = 0;
    r1 = arg0->word_4;
    if (r1 == 0x21fu) {  // (from the original)
        r0 = r0 + 8u;
    } else {
        r0 = 0u;
    }
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_0074218c
GUEST_EXPORT(0x0074218c, d_0074218c::f_0074218c);

// f_007421a4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_007421a4 {

inline constexpr guest::Function<0x00141a9c, u32(u32, u32, u32, u32)> call_00141a9c;  // (from the original)

u32 f_007421a4(u32 r0, u32 r1_unused, u32 r2_unused, u32 r3) {
    u32 r1 = 0;
    u32 r2 = 0;
    u32 r13 = guest::cpu()->r[13];
    *gptr<u32>(r13 + 0xfffffff8u) = u32(r3);  // (from the original)
    r13 = r13 - 8;
    r2 = 4u;
    r1 = r13;
    r0 = r0 + 4u;
    guest::cpu()->r[13] = r13;
    r0 = call_00141a9c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    if (r0 == 0) {
        r13 = r13 + 8;
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    r0 = *gptr<u32>(r13) << 8 >> 0x18;  // (from the original)
    r13 = r13 + 8;
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_007421a4
GUEST_EXPORT(0x007421a4, d_007421a4::f_007421a4);

// f_007421d0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_007421d0 {

inline constexpr guest::Function<0x00141a9c, u32(u32, u32, u32, u32)> call_00141a9c;  // (from the original)

u32 f_007421d0(u32 r0, u32 r1_unused, u32 r2_unused, u32 r3) {
    u32 r1 = 0;
    u32 r2 = 0;
    u32 r13 = guest::cpu()->r[13];
    *gptr<u32>(r13 + 0xfffffff8u) = u32(r3);  // (from the original)
    r13 = r13 - 8;
    r2 = 2u;
    r1 = r13;
    r0 = r0 + 4u;
    guest::cpu()->r[13] = r13;
    r0 = call_00141a9c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    if (r0 == 0) {
        r0 = 0x40u;  // (from the original)
    } else {
        r0 = *gptr<u32>(r13) & 0xffu;  // (from the original)
    }
    r13 = r13 + 8;
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_007421d0
GUEST_EXPORT(0x007421d0, d_007421d0::f_007421d0);

// f_0074226c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0074226c {

inline constexpr guest::Function<0x00141a9c, u32(u32, u32, u32, u32)> call_00141a9c;  // (from the original)

u32 f_0074226c(u32 r0, u32 r1_unused, u32 r2_unused, u32 r3) {
    u32 r1 = 0;
    u32 r2 = 0;
    u32 r13 = guest::cpu()->r[13];
    *gptr<u32>(r13 + 0xfffffff8u) = u32(r3);  // (from the original)
    r13 = r13 - 8;
    r2 = 1u;
    r1 = r13;
    r0 = r0 + 4u;
    guest::cpu()->r[13] = r13;
    r0 = call_00141a9c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    if (r0 == 0) {
        r0 = 0x7fu;  // (from the original)
    } else {
        r0 = *gptr<u32>(r13) & 0xffu;  // (from the original)
    }
    r13 = r13 + 8;
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_0074226c
GUEST_EXPORT(0x0074226c, d_0074226c::f_0074226c);

// f_00742294: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00742294 {

struct __attribute__((packed)) Object_00742294_0 {
    u16 half_0;
    u8 unknown_2[0x2];  // (not used here)
    u32 word_4;
};
GUEST_OFFSET(Object_00742294_0, half_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_00742294_0, word_4, 0x4);  // (from the original)


u32 f_00742294(gptr<Object_00742294_0> arg0, u32 r1) {
    u32 res = 0;
    u32 r0 = arg0.addr();
    u32 r2 = 0;
    u32 r3 = 0;
    u32 r12 = 0;
    u32 zf = 0;
    u32 cf = 0;
    r12 = u32(arg0->half_0);
    r2 = r0 + arg0->word_4;
    r0 = 0u;
    if (r12 == 0x6000u) {  // (from the original)
        r0 = *gptr<u32>(r2 + 4u) + r2;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    res = r12 - 0x6001u;  // (from the original)
    r3 = res;
    if (res != 0) {
        if (r3 != 1u) {
            guest::cpu()->r[1] = r1;
            return r0;
        }
        r0 = u32(*gptr<u8>(r2));
        zf = r0 == r1;
        cf = r0 >= r1;
        if (!cf || zf) {
            r3 = u32(*gptr<u8>(r2 + 1u));
            zf = r1 == r3;
            cf = r1 >= r3;
        }
        if (cf && !zf) {
            r0 = 0u;
            guest::cpu()->r[1] = r1;
            return r0;
        }
        r0 = *gptr<u32>(r2 + (r1 - r0 << 3) + 8u);
        r0 = r0 + r2;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r12 = *gptr<u32>(r2);
    r0 = 0u;
    if (!u32(r12 >= 0u) || u32(r12 == 0)) {
        r0 = 0u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    do {
L_7422f4:;
        if (!(u32(*gptr<u8>(r2 + r0 + 4u)) < r1)) {
            r1 = r12 + 3u & ~3u;
            r0 = *gptr<u32>(r1 + (r0 << 3) + 4u + r2 + 4u);
            r0 = r0 + r2;
            guest::cpu()->r[1] = r1;
            return r0;
        }
        r0 = r0 + 1u;
        guest::preempt();
    } while (r0 < r12);
    r0 = 0u;
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_00742294
GUEST_EXPORT(0x00742294, d_00742294::f_00742294);

// f_007424f4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_007424f4 {

struct __attribute__((packed)) Object_007424f4_0 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
};
GUEST_OFFSET(Object_007424f4_0, word_4, 0x4);  // (from the original)


u32 f_007424f4(gptr<Object_007424f4_0> arg0, u32 r1) {
    u32 r0 = arg0.addr();
    r0 = arg0->word_4 + r1;
    return r0;
}

}  // namespace d_007424f4
GUEST_EXPORT(0x007424f4, d_007424f4::f_007424f4);

// f_00742500: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00742500 {

struct __attribute__((packed)) Object_00742500_0 {
    u8 unknown_0[0x14];  // (not used here)
    u32 word_14;
};
GUEST_OFFSET(Object_00742500_0, word_14, 0x14);  // (from the original)


u32 f_00742500(gptr<Object_00742500_0> arg0, u32 r1) {
    u32 ea = 0;
    u32 r0 = arg0.addr();
    u32 r2 = 0;
    ea = r0 + 0x14u;  // (from the original)
    r0 = ea;
    r2 = arg0->word_14;
    if (!u32(r2 >= r1) || u32(r2 == r1)) {
        r0 = 0u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r1 = *gptr<u32>(r0 + (r1 << 3) + 8u);
    r0 = r0 + r1;
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_00742500
GUEST_EXPORT(0x00742500, d_00742500::f_00742500);

// f_00743f28: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00743f28 {

struct __attribute__((packed)) Object_00743f28_0 {
    u32 word_0;
};
GUEST_OFFSET(Object_00743f28_0, word_0, 0x0);  // (from the original)

struct __attribute__((packed)) Object_00743f28_2 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
};
GUEST_OFFSET(Object_00743f28_2, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_00743f28_2, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_00743f28_2, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Object_00743f28_2, word_c, 0xc);  // (from the original)


u32 f_00743f28(gptr<Object_00743f28_0> arg0, u32 r1, gptr<Object_00743f28_2> arg2, float S0, float S1) {
    u32 r0 = arg0.addr();
    float S2 = 0;
    float S3 = 0;
    r0 = *gptr<u32>(arg0->word_0 + 0x14u);  // (from the original)
    if (r0 == 0) {
        S0 = std::bit_cast<float>(arg2->word_0);
        S1 = std::bit_cast<float>(arg2->word_4);
        S2 = std::bit_cast<float>(arg2->word_8);
        S3 = std::bit_cast<float>(arg2->word_c);
        r1 = r1 + 0xb8u;  // (from the original)
        goto L_743f68;
    }
    if (r0 == 1u) {
        S0 = std::bit_cast<float>(arg2->word_0);
        S1 = std::bit_cast<float>(arg2->word_4);
        S2 = std::bit_cast<float>(arg2->word_8);
        S3 = std::bit_cast<float>(arg2->word_c);
        r1 = r1 + 0xc8u;  // (from the original)
        goto L_743f68;
    }
    if (r0 == 2u) {
        goto L_743f70;
    }
    if (r0 == 3u) {
        r0 = arg2->word_0;
        *gptr<u32>(r1 + 0xe4u) = u32(r0);  // (from the original)
    }
    guest::cpu()->r[1] = r1;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    return r0;
L_743f68:;
    *gptr<u32>(r1) = u32(std::bit_cast<u32>(S0));
    *gptr<u32>(r1 + 4) = u32(std::bit_cast<u32>(S1));
    *gptr<u32>(r1 + 8) = u32(std::bit_cast<u32>(S2));
    *gptr<u32>(r1 + 0xc) = u32(std::bit_cast<u32>(S3));  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    return r0;
L_743f70:;
    S2 = std::bit_cast<float>(arg2->word_0);
    S1 = std::bit_cast<float>(arg2->word_4);
    S0 = std::bit_cast<float>(arg2->word_8);
    S3 = std::bit_cast<float>(*gptr<u32>(0x743fb0u)) / sqrtf(S2 * S2 + S1 * S1 + S0 * S0);  // (from the original)
    S1 = S1 * S3;
    S0 = S0 * S3;
    *gptr<u32>(r1 + 0xd8u) = u32(std::bit_cast<u32>(S2 * S3));  // (from the original)
    *gptr<u32>(r1 + 0xdcu) = u32(std::bit_cast<u32>(S1));  // (from the original)
    *gptr<u32>(r1 + 0xe0u) = u32(std::bit_cast<u32>(S0));  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    return r0;
}

}  // namespace d_00743f28
GUEST_EXPORT(0x00743f28, d_00743f28::f_00743f28);

// f_007440a4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_007440a4 {

struct __attribute__((packed)) Object_007440a4_0 {
    u32 word_0;
};
GUEST_OFFSET(Object_007440a4_0, word_0, 0x0);  // (from the original)

struct __attribute__((packed)) Object_007440a4_1 {
    u8 unknown_0[0x10];  // (not used here)
    u32 word_10;
    u32 word_14;
    u32 word_18;
    u32 word_1c;
    u32 word_20;
    u8 byte_24;
};
GUEST_OFFSET(Object_007440a4_1, word_10, 0x10);  // (from the original)
GUEST_OFFSET(Object_007440a4_1, word_14, 0x14);  // (from the original)
GUEST_OFFSET(Object_007440a4_1, word_18, 0x18);  // (from the original)
GUEST_OFFSET(Object_007440a4_1, word_1c, 0x1c);  // (from the original)
GUEST_OFFSET(Object_007440a4_1, word_20, 0x20);  // (from the original)
GUEST_OFFSET(Object_007440a4_1, byte_24, 0x24);  // (from the original)

struct __attribute__((packed)) Object_007440a4_2 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Object_007440a4_2, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_007440a4_2, word_4, 0x4);  // (from the original)


u32 f_007440a4(gptr<Object_007440a4_0> arg0, gptr<Object_007440a4_1> arg1, gptr<Object_007440a4_2> arg2, float S0, float S1) {
    u32 r0 = arg0.addr();
    u32 fpsr = guest::cpu()->fpscr;
    r0 = *gptr<u32>(arg0->word_0 + 0x14u);  // (from the original)
    if (r0 != 0) {
        if (r0 == 1u) {
            goto L_74410c;
        }
        if (r0 != 2u) {
            r0 = 1u;
            arg1->byte_24 = u8(r0);
            guest::cpu()->s[0] = S0;
            guest::cpu()->s[1] = S1;
            return r0;
        }
        goto L_744130;
    }
    S0 = std::bit_cast<float>(arg2->word_0);
    fpsr = fpsr & 0xfffffffu | vfp_cmpf(std::bit_cast<float>(arg1->word_10), S0);  // (from the original)
    if (fpsr >> 0x1e & 1) {  // (from the original)
        S1 = std::bit_cast<float>(arg1->word_14);
        if (u32(S1 == std::bit_cast<float>(arg2->word_4))) {
            r0 = 1u;
            arg1->byte_24 = u8(r0);
            guest::cpu()->s[0] = S0;
            guest::cpu()->s[1] = S1;
            return r0;
        }
    }
    S1 = std::bit_cast<float>(arg2->word_4);
    arg1->word_10 = u32(std::bit_cast<u32>(S0));
    arg1->word_14 = u32(std::bit_cast<u32>(S1));
    arg1->byte_24 = u8(1u);
    r0 = 1u;
    arg1->byte_24 = u8(r0);
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    return r0;
L_74410c:;
    S0 = std::bit_cast<float>(arg2->word_0);
    S1 = std::bit_cast<float>(arg1->word_18);
    if (u32(S1 == S0)) {
        r0 = 1u;
        arg1->byte_24 = u8(r0);
        guest::cpu()->s[0] = S0;
        guest::cpu()->s[1] = S1;
        return r0;
    }
    arg1->word_18 = u32(std::bit_cast<u32>(S0));
    arg1->byte_24 = u8(1u);
    r0 = 1u;
    arg1->byte_24 = u8(r0);
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    return r0;
L_744130:;
    S0 = std::bit_cast<float>(arg2->word_0);
    fpsr = fpsr & 0xfffffffu | vfp_cmpf(std::bit_cast<float>(arg1->word_1c), S0);  // (from the original)
    if (fpsr >> 0x1e & 1) {  // (from the original)
        S1 = std::bit_cast<float>(arg1->word_20);
        if (u32(S1 == std::bit_cast<float>(arg2->word_4))) {
            r0 = 1u;
            arg1->byte_24 = u8(r0);
            guest::cpu()->s[0] = S0;
            guest::cpu()->s[1] = S1;
            return r0;
        }
    }
    S1 = std::bit_cast<float>(arg2->word_4);
    arg1->word_1c = u32(std::bit_cast<u32>(S0));
    arg1->word_20 = u32(std::bit_cast<u32>(S1));
    arg1->byte_24 = u8(1u);
    r0 = 1u;
    arg1->byte_24 = u8(r0);
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    return r0;
}

}  // namespace d_007440a4
GUEST_EXPORT(0x007440a4, d_007440a4::f_007440a4);

// f_0074420c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0074420c {

struct __attribute__((packed)) Object_0074420c_0 {
    u8 unknown_0[0x680];  // (not used here)
    u32 word_680;
};
GUEST_OFFSET(Object_0074420c_0, word_680, 0x680);  // (from the original)


u32 f_0074420c(gptr<Object_0074420c_0> arg0, u32 r1) {
    u32 r0 = arg0.addr();
    u32 zf = 0;
    u32 cf = 0;
    zf = r1 == 0x10u;  // (from the original)
    cf = r1 >= 0x10u;  // (from the original)
    if (cf && !zf) {
        r1 = (r1 << 1) - 0x20u;  // (from the original)
    }
    if (!cf || zf) {
        r1 = 0u;
    }
    if (arg0->word_680 + r1 << 0x14 >> 0x14 >= 0xfe0u) {  // (from the original)
        r0 = 0x20u;  // (from the original)
    } else {
        r0 = 0u;
    }
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_0074420c
GUEST_EXPORT(0x0074420c, d_0074420c::f_0074420c);

// f_00744310: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00744310 {

struct __attribute__((packed)) Object_00744310_0 {
    u8 unknown_0[0x8];  // (not used here)
    u32 word_8;
    u8 unknown_c[0x8];  // (not used here)
    u16 half_14;
    u16 half_16;
};
GUEST_OFFSET(Object_00744310_0, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Object_00744310_0, half_14, 0x14);  // (from the original)
GUEST_OFFSET(Object_00744310_0, half_16, 0x16);  // (from the original)


u32 f_00744310(gptr<Object_00744310_0> arg0, u32 r1) {
    u32 ea = 0;
    u32 r0 = arg0.addr();
    u32 r2 = 0;
    u32 r3 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r12 = 0;
    u32 r13 = guest::cpu()->r[13];
    u32 zf = 0;
    u32 cf = 0;
    r12 = r0;
    r13 = r13 - 8;
    if (u32(arg0->half_14) == r1) {
        r0 = u32(arg0->half_16);
        r13 = r13 + 8;
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    arg0->half_14 = u16(r1);
    r0 = 0xffffu;  // (from the original)
    r2 = *gptr<u32>(arg0->word_8 + 0x10u);  // (from the original)
    if (r2 == 0) {
        goto L_744400;
    }
L_744340:;
    r3 = u32(*gptr<u16>(r2));
    zf = r3 == r1;
    cf = r3 >= r1;
    if (!cf || zf) {
        r3 = u32(*gptr<u16>(r2 + 2u));
        zf = r1 == r3;
        cf = r1 >= r3;
    }
    if (cf && !zf) {
        goto L_7443f4;
    }
    r3 = u32(*gptr<u16>(r2 + 4u));
    if (r3 != 0) {
        if (r3 == 1u) {
            goto L_74438c;
        }
        if (r3 != 2u) {
            goto L_744400;
        }
        goto L_7443a0;
    }
    r1 = r1 - u32(*gptr<u16>(r2));
    r0 = uxth(u32(*gptr<u16>(r2 + 0xcu)) + r1);  // (from the original)
    goto L_744400;
L_74438c:;
    r0 = u32(*gptr<u16>(r2 + (r1 - u32(*gptr<u16>(r2)) << 1) + 0xcu));  // (from the original)
    goto L_744400;
L_7443a0:;
    ea = r2 + 0xcu;  // (from the original)
    r2 = ea;
    r3 = r2 + 2u;
    r2 = r2 + (u32(*gptr<u16>(ea)) << 2) - 2u;
    if (u32(r3 >= r2) && !u32(r3 == r2)) {
        goto L_744400;
    }
    do {
L_7443b8:;
        r4 = u32(s32(r2 - r3) >> 2);
        r4 = r3 + (u32(s32(r4 + (r4 >> 0x1f)) >> 1) << 2);  // (from the original)
        r5 = u32(*gptr<u16>(r4));
        zf = r5 == r1;
        cf = r5 >= r1;
        if (cf && !zf) {
            r2 = r4 - 4u;
        }
        if (!cf) {
            r3 = r4 + 4u;
        }
        if (zf) {
            r0 = u32(*gptr<u16>(r4 + 2u));
            goto L_744400;
        }
        guest::preempt();
    } while (!u32(r3 >= r2) || u32(r3 == r2));
    goto L_744400;
L_7443f4:;
    r2 = *gptr<u32>(r2 + 8u);
    if (r2 != 0) {
        guest::preempt();
        goto L_744340;
    }
L_744400:;
    *gptr<u16>(r12 + 0x16u) = u16(r0);  // (from the original)
    r13 = r13 + 8;
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_00744310
GUEST_EXPORT(0x00744310, d_00744310::f_00744310);

// f_00744be4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00744be4 {

struct __attribute__((packed)) Object_00744be4_0 {
    u8 unknown_0[0x78];  // (not used here)
    u32 word_78;
    u32 word_7c;
    u32 word_80;
    u32 word_84;
    u32 word_88;
    u32 word_8c;
};
GUEST_OFFSET(Object_00744be4_0, word_78, 0x78);  // (from the original)
GUEST_OFFSET(Object_00744be4_0, word_7c, 0x7c);  // (from the original)
GUEST_OFFSET(Object_00744be4_0, word_80, 0x80);  // (from the original)
GUEST_OFFSET(Object_00744be4_0, word_84, 0x84);  // (from the original)
GUEST_OFFSET(Object_00744be4_0, word_88, 0x88);  // (from the original)
GUEST_OFFSET(Object_00744be4_0, word_8c, 0x8c);  // (from the original)

struct __attribute__((packed)) Object_00744be4_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
};
GUEST_OFFSET(Object_00744be4_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_00744be4_1, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_00744be4_1, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Object_00744be4_1, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Object_00744be4_1, word_10, 0x10);  // (from the original)
GUEST_OFFSET(Object_00744be4_1, word_14, 0x14);  // (from the original)


u32 f_00744be4(gptr<Object_00744be4_0> arg0, gptr<Object_00744be4_1> arg1, u32 r2, float S0_unused, float S1, float S2, float S3_unused, float S4_unused, float S5_unused, float S6_unused, float S7_unused, float S8_unused, float S9) {
    u32 r0 = arg0.addr();
    u32 r1 = arg1.addr();
    u32 nf = 0;
    u32 zf = 0;
    u32 vf = 0;
    u32 fpsr = guest::cpu()->fpscr;
    float S0 = 0;
    float S3 = 0;
    float S4 = 0;
    float S5 = 0;
    float S6 = 0;
    float S7 = 0;
    float S8 = 0;
    float S10 = 0;
    float S11 = 0;
    float S12 = 0;
    S0 = std::bit_cast<float>(arg0->word_84);
    S3 = std::bit_cast<float>(arg1->word_0);
    fpsr = fpsr & 0xfffffffu | vfp_cmpf(S3, S0);  // (from the original)
    if (!(fpsr >> 0x1e & 1) && fpsr >> 0x1f == (fpsr >> 0x1c & 1)) {  // (from the original)
        r0 = 0u;
        guest::cpu()->r[1] = r1;
        guest::cpu()->s[0] = S0;
        guest::cpu()->s[1] = S1;
        return r0;
    }
    S0 = std::bit_cast<float>(arg0->word_78);
    S4 = std::bit_cast<float>(arg1->word_c);
    fpsr = fpsr & 0xfffffffu | vfp_cmpf(S0, S4);  // (from the original)
    if (!(fpsr >> 0x1e & 1) && fpsr >> 0x1f == (fpsr >> 0x1c & 1)) {  // (from the original)
        r0 = 0u;
        guest::cpu()->r[1] = r1;
        guest::cpu()->s[0] = S0;
        guest::cpu()->s[1] = S1;
        return r0;
    }
    S0 = std::bit_cast<float>(arg0->word_88);
    S5 = std::bit_cast<float>(arg1->word_4);
    fpsr = fpsr & 0xfffffffu | vfp_cmpf(S5, S0);  // (from the original)
    if (!(fpsr >> 0x1e & 1) && fpsr >> 0x1f == (fpsr >> 0x1c & 1)) {  // (from the original)
        r0 = 0u;
        guest::cpu()->r[1] = r1;
        guest::cpu()->s[0] = S0;
        guest::cpu()->s[1] = S1;
        return r0;
    }
    S0 = std::bit_cast<float>(arg0->word_7c);
    S6 = std::bit_cast<float>(arg1->word_10);
    fpsr = fpsr & 0xfffffffu | vfp_cmpf(S0, S6);  // (from the original)
    if (!(fpsr >> 0x1e & 1) && fpsr >> 0x1f == (fpsr >> 0x1c & 1)) {  // (from the original)
        r0 = 0u;
        guest::cpu()->r[1] = r1;
        guest::cpu()->s[0] = S0;
        guest::cpu()->s[1] = S1;
        return r0;
    }
    S0 = std::bit_cast<float>(arg0->word_8c);
    S7 = std::bit_cast<float>(arg1->word_8);
    fpsr = fpsr & 0xfffffffu | vfp_cmpf(S7, S0);  // (from the original)
    if (!(fpsr >> 0x1e & 1) && fpsr >> 0x1f == (fpsr >> 0x1c & 1)) {  // (from the original)
        r0 = 0u;
        guest::cpu()->r[1] = r1;
        guest::cpu()->s[0] = S0;
        guest::cpu()->s[1] = S1;
        return r0;
    }
    S0 = std::bit_cast<float>(arg0->word_80);
    S8 = std::bit_cast<float>(arg1->word_14);
    fpsr = fpsr & 0xfffffffu | vfp_cmpf(S0, S8);  // (from the original)
    nf = fpsr >> 0x1f;  // (from the original)
    zf = fpsr >> 0x1e & 1;  // (from the original)
    vf = fpsr >> 0x1c & 1;  // (from the original)
    if (zf || nf != vf) {
        S9 = std::bit_cast<float>(*gptr<u32>(0x744ce0u));  // (from the original)
        r2 = 0u;
    }
    if (!zf && nf == vf) {
        r0 = 0u;
        guest::cpu()->r[1] = r1;
        guest::cpu()->s[0] = S0;
        guest::cpu()->s[1] = S1;
        return r0;
    }
    do {
L_744c64:;
        r1 = r0 + (r2 << 4);
        S10 = std::bit_cast<float>(*gptr<u32>(r1 + 0x90u));  // (from the original)
        fpsr = fpsr & 0xfffffffu | vfp_cmpf(S10, S9);  // (from the original)
        nf = fpsr >> 0x1f;  // (from the original)
        vf = fpsr >> 0x1c & 1;  // (from the original)
        S11 = std::bit_cast<float>(*gptr<u32>(r1 + 0x94u));  // (from the original)
        if (nf == vf) {
            S0 = S3;
        }
        if (nf != vf) {
            S0 = S4;
        }
        fpsr = fpsr & 0xfffffffu | vfp_cmpf(S11, S9);  // (from the original)
        nf = fpsr >> 0x1f;  // (from the original)
        vf = fpsr >> 0x1c & 1;  // (from the original)
        S12 = std::bit_cast<float>(*gptr<u32>(r1 + 0x98u));  // (from the original)
        if (nf == vf) {
            S1 = S5;
        }
        if (nf != vf) {
            S1 = S6;
        }
        fpsr = fpsr & 0xfffffffu | vfp_cmpf(S12, S9);  // (from the original)
        nf = fpsr >> 0x1f;  // (from the original)
        vf = fpsr >> 0x1c & 1;  // (from the original)
        if (nf == vf) {
            S2 = S7;
        }
        if (nf != vf) {
            S2 = S8;
        }
        S1 = S11 * S1 + S12 * S2;
        S0 = S1 + (std::bit_cast<float>(*gptr<u32>(r1 + 0x9cu)) + S10 * S0);  // (from the original)
        fpsr = fpsr & 0xfffffffu | vfp_cmpf(S9, S0);  // (from the original)
        if (!(fpsr >> 0x1d & 1)) {  // (from the original)
            r0 = 0u;
            guest::cpu()->r[1] = r1;
            guest::cpu()->s[0] = S0;
            guest::cpu()->s[1] = S1;
            return r0;
        }
        r2 = r2 + 1u;
        guest::preempt();
    } while (s32(r2) < s32(6u));
    r0 = 1u;
    guest::cpu()->r[1] = r1;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    return r0;
}

}  // namespace d_00744be4
GUEST_EXPORT(0x00744be4, d_00744be4::f_00744be4);

// f_00744ce4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00744ce4 {

struct __attribute__((packed)) Object_00744ce4_0 {
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
    u32 word_30;
    u8 unknown_34[0x4];  // (not used here)
    u32 word_38;
    u8 unknown_3c[0x4];  // (not used here)
    u32 word_40;
    u8 unknown_44[0x4];  // (not used here)
    u32 word_48;
    u8 unknown_4c[0x8];  // (not used here)
    u32 word_54;
    u32 word_58;
    u8 unknown_5c[0x8];  // (not used here)
    u32 word_64;
    u32 word_68;
    u8 unknown_6c[0x4];  // (not used here)
    u32 word_70;
    u32 word_74;
};
GUEST_OFFSET(Object_00744ce4_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_00744ce4_0, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_00744ce4_0, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Object_00744ce4_0, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Object_00744ce4_0, word_10, 0x10);  // (from the original)
GUEST_OFFSET(Object_00744ce4_0, word_14, 0x14);  // (from the original)
GUEST_OFFSET(Object_00744ce4_0, word_18, 0x18);  // (from the original)
GUEST_OFFSET(Object_00744ce4_0, word_1c, 0x1c);  // (from the original)
GUEST_OFFSET(Object_00744ce4_0, word_20, 0x20);  // (from the original)
GUEST_OFFSET(Object_00744ce4_0, word_24, 0x24);  // (from the original)
GUEST_OFFSET(Object_00744ce4_0, word_28, 0x28);  // (from the original)
GUEST_OFFSET(Object_00744ce4_0, word_2c, 0x2c);  // (from the original)
GUEST_OFFSET(Object_00744ce4_0, word_30, 0x30);  // (from the original)
GUEST_OFFSET(Object_00744ce4_0, word_38, 0x38);  // (from the original)
GUEST_OFFSET(Object_00744ce4_0, word_40, 0x40);  // (from the original)
GUEST_OFFSET(Object_00744ce4_0, word_48, 0x48);  // (from the original)
GUEST_OFFSET(Object_00744ce4_0, word_54, 0x54);  // (from the original)
GUEST_OFFSET(Object_00744ce4_0, word_58, 0x58);  // (from the original)
GUEST_OFFSET(Object_00744ce4_0, word_64, 0x64);  // (from the original)
GUEST_OFFSET(Object_00744ce4_0, word_68, 0x68);  // (from the original)
GUEST_OFFSET(Object_00744ce4_0, word_70, 0x70);  // (from the original)
GUEST_OFFSET(Object_00744ce4_0, word_74, 0x74);  // (from the original)

struct __attribute__((packed)) Object_00744ce4_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
};
GUEST_OFFSET(Object_00744ce4_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_00744ce4_1, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_00744ce4_1, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Object_00744ce4_1, word_c, 0xc);  // (from the original)


u32 f_00744ce4(gptr<Object_00744ce4_0> arg0, gptr<Object_00744ce4_1> arg1) {
    u32 r0 = arg0.addr();
    u32 r1 = arg1.addr();
    u32 fpsr = guest::cpu()->fpscr;
    float S0 = 0;
    float S1 = 0;
    float S2 = 0;
    float S3 = 0;
    float S4 = 0;
    float S5 = 0;
    S4 = std::bit_cast<float>(arg1->word_0);
    S1 = std::bit_cast<float>(arg1->word_c);
    r1 = r1 + 4u;
    S2 = std::bit_cast<float>(arg1->word_4);
    S3 = std::bit_cast<float>(arg1->word_8);
    S0 = std::bit_cast<float>(arg0->word_24) * S2 + std::bit_cast<float>(arg0->word_28) * S3 + (std::bit_cast<float>(arg0->word_2c) + std::bit_cast<float>(arg0->word_20) * S4);
    fpsr = fpsr & 0xfffffffu | vfp_cmpf(S0 - S1, std::bit_cast<float>(arg0->word_70));  // (from the original)
    if (!(fpsr >> 0x1e & 1) && fpsr >> 0x1f == (fpsr >> 0x1c & 1)) {  // (from the original)
        r0 = 0u;
        guest::cpu()->r[1] = r1;
        guest::cpu()->s[0] = S0;
        guest::cpu()->s[1] = S1;
        return r0;
    }
    fpsr = fpsr & 0xfffffffu | vfp_cmpf(S0 + S1, std::bit_cast<float>(arg0->word_74));  // (from the original)
    if (!(fpsr >> 0x1d & 1)) {  // (from the original)
        r0 = 0u;
        guest::cpu()->r[1] = r1;
        guest::cpu()->s[0] = S0;
        guest::cpu()->s[1] = S1;
        return r0;
    }
    S5 = std::bit_cast<float>(arg0->word_4) * S2 + std::bit_cast<float>(arg0->word_8) * S3 + (std::bit_cast<float>(arg0->word_c) + std::bit_cast<float>(arg0->word_0) * S4);
    fpsr = fpsr & 0xfffffffu | vfp_cmpf(S1, S5 * std::bit_cast<float>(arg0->word_30) + S0 * std::bit_cast<float>(arg0->word_38));  // (from the original)
    if (!(fpsr >> 0x1d & 1)) {  // (from the original)
        r0 = 0u;
        guest::cpu()->r[1] = r1;
        guest::cpu()->s[0] = S0;
        guest::cpu()->s[1] = S1;
        return r0;
    }
    fpsr = fpsr & 0xfffffffu | vfp_cmpf(S1, S5 * std::bit_cast<float>(arg0->word_40) + S0 * std::bit_cast<float>(arg0->word_48));  // (from the original)
    if (!(fpsr >> 0x1d & 1)) {  // (from the original)
        r0 = 0u;
        guest::cpu()->r[1] = r1;
        guest::cpu()->s[0] = S0;
        guest::cpu()->s[1] = S1;
        return r0;
    }
    r1 = r0 + 0x54u;  // (from the original)
    S2 = std::bit_cast<float>(arg0->word_14) * S2 + std::bit_cast<float>(arg0->word_18) * S3 + (std::bit_cast<float>(arg0->word_1c) + std::bit_cast<float>(arg0->word_10) * S4);
    fpsr = fpsr & 0xfffffffu | vfp_cmpf(S1, S2 * std::bit_cast<float>(arg0->word_54) + S0 * std::bit_cast<float>(arg0->word_58));  // (from the original)
    if (!(fpsr >> 0x1d & 1)) {  // (from the original)
        r0 = 0u;
        guest::cpu()->r[1] = r1;
        guest::cpu()->s[0] = S0;
        guest::cpu()->s[1] = S1;
        return r0;
    }
    fpsr = fpsr & 0xfffffffu | vfp_cmpf(S2 * std::bit_cast<float>(arg0->word_64) + S0 * std::bit_cast<float>(arg0->word_68), S1);  // (from the original)
    if (fpsr >> 0x1e & 1 || fpsr >> 0x1f != (fpsr >> 0x1c & 1)) {  // (from the original)
        r0 = 1u;
        guest::cpu()->r[1] = r1;
        guest::cpu()->s[0] = S0;
        guest::cpu()->s[1] = S1;
        return r0;
    }
    r0 = 0u;
    guest::cpu()->r[1] = r1;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    return r0;
}

}  // namespace d_00744ce4
GUEST_EXPORT(0x00744ce4, d_00744ce4::f_00744ce4);

// f_007453a4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_007453a4 {

inline constexpr guest::Function<0x00744df8, u32(u32, u32, u32, u32)> call_00744df8;  // (from the original)
inline constexpr guest::Function<0x00744f60, u32(u32, u32, u32, u32)> call_00744f60;  // (from the original)
inline constexpr guest::Function<0x007450c4, u32(u32, u32, u32, u32)> call_007450c4;  // (from the original)

u32 f_007453a4(u32 r0, u32 r1) {
    u32 r2 = 0;
    u32 r3 = 0;
    r2 = r0;
    r3 = r1;
    guest::cpu()->r[13] -= 4u;
    r0 = call_00744df8(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        r0 = 0u;
        guest::cpu()->r[13] += 4u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r1 = r3;
    r0 = r2;
    r0 = call_00744f60(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        r0 = 0u;
        guest::cpu()->r[13] += 4u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r1 = r3;
    r0 = r2;
    r0 = call_007450c4(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    if (r0 == 0) {
        r0 = 1u;
        guest::cpu()->r[13] += 4u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r0 = 0u;
    guest::cpu()->r[13] += 4u;
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_007453a4
GUEST_EXPORT(0x007453a4, d_007453a4::f_007453a4);

// f_007453f0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_007453f0 {

inline constexpr guest::Function<0x007452e8, u32(u32, u32, u32, u32)> call_007452e8;  // (from the original)

u32 f_007453f0(u32 r0) {
    guest::cpu()->r[13] -= 4u;
    r0 = call_007452e8(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    if (r0 != 0) {
        r0 = 1u;
    }
    guest::cpu()->r[13] += 4u;
    return r0;
}

}  // namespace d_007453f0
GUEST_EXPORT(0x007453f0, d_007453f0::f_007453f0);

// f_00745784: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00745784 {

struct __attribute__((packed)) Object_00745784_0 {
    u8 byte_0;
};
GUEST_OFFSET(Object_00745784_0, byte_0, 0x0);  // (from the original)


u32 f_00745784(gptr<Object_00745784_0> arg0, u32 r1) {
    u32 r0 = arg0.addr();
    r0 = u32(arg0->byte_0);
    if (r0 >= 5u) {
        r0 = 0u;
    } else {
        r1 = 0x9529fcu;  // (from the original)
        r0 = u32(*gptr<u8>(*gptr<u32>(r1 + (r0 << 2)) + 0x10u));  // (from the original)
    }
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_00745784
GUEST_EXPORT(0x00745784, d_00745784::f_00745784);

// f_007457e8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_007457e8 {

inline constexpr guest::Function<0x002f74c8, u32(u32, u32, u32, u32)> call_002f74c8;  // (from the original)
inline constexpr guest::Function<0x004e960c, u32(u32, u32, u32, u32)> call_004e960c;  // (from the original)
inline constexpr guest::Function<0x005b41e8, u32(u32, u32, u32, u32)> call_005b41e8;  // (from the original)

u32 f_007457e8(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 0x20u;  // (from the original)
    r5 = r0;
    r6 = r1;
    r7 = r2;
    r4 = r3;
    guest::cpu()->r[13] = r13;
    r0 = call_002f74c8(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0 = call_005b41e8(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    if (r0 >= 2u) {
        goto L_745884;
    }
    if (r0 < r4) {
        goto L_745884;
    }
    r0 = 0u;
    *gptr<u32>(r13 + 4u) = u32(r0);
    *gptr<u32>(r13 + 8u) = u32(r0);
    r3 = r7;
    r2 = r6;
    r1 = r13 + 8u;
    r0 = r13 + 4u;
    *gptr<u32>(r13) = u32(r4);
    guest::cpu()->r[13] = r13;
    r0 = call_004e960c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    if (r0 == 0) {
        goto L_745884;
    }
    r0 = *gptr<u32>(r13 + 4u);
    if (r4 != 1u) {
        r1 = *gptr<u32>(r13 + 8u);
        r0 = u32(s32(s8(*gptr<u8>(r5 + (r0 + (r0 << 2) << 4) + r1))));
        r13 = r13 + 0x20u;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    r1 = *gptr<u32>(r13 + 8u);
    r0 = u32(s32(s8(*gptr<u8>(r5 + (r0 << 4) + r1 + 0x1400u))));  // (from the original)
    r13 = r13 + 0x20u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
L_745884:;
    r0 = ~0u;
    r13 = r13 + 0x20u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_007457e8
GUEST_EXPORT(0x007457e8, d_007457e8::f_007457e8);

// f_00745890: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00745890 {


u32 f_00745890(u32 r0) {
    u32 r1 = 0;
    r1 = r0 + 0xau;  // (from the original)
    r0 = r0 + 0x12u;  // (from the original)
    if (r1 >= r0) {
        r0 = 1u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    do {
L_7458a0:;
        if (!(u32(s32(s8(*gptr<u8>(r1)))) + 1u == 0)) {
            r0 = 0u;
            guest::cpu()->r[1] = r1;
            return r0;
        }
        r1 = r1 + 1u;
        guest::preempt();
    } while (r1 < r0);
    r0 = 1u;
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_00745890
GUEST_EXPORT(0x00745890, d_00745890::f_00745890);

// f_007458c8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_007458c8 {


u32 f_007458c8(u32 r0) {
    u32 r1 = 0;
    r1 = r0 + 0x12u;  // (from the original)
    r0 = r0 + 0x1au;  // (from the original)
    if (r1 >= r0) {
        r0 = 1u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    do {
L_7458d8:;
        if (!(u32(s32(s8(*gptr<u8>(r1)))) + 1u == 0)) {
            r0 = 0u;
            guest::cpu()->r[1] = r1;
            return r0;
        }
        r1 = r1 + 1u;
        guest::preempt();
    } while (r1 < r0);
    r0 = 1u;
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_007458c8
GUEST_EXPORT(0x007458c8, d_007458c8::f_007458c8);

// f_00745900: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00745900 {

struct __attribute__((packed)) Object_00745900_0 {
    u8 unknown_0[0x8];  // (not used here)
    u8 byte_8;
};
GUEST_OFFSET(Object_00745900_0, byte_8, 0x8);  // (from the original)


u32 f_00745900(gptr<Object_00745900_0> arg0, u32 r1) {
    u32 r0 = arg0.addr();
    u32 r2 = 0;
    u32 r3 = 0;
    r2 = r0;
    if (r1 + 1u == 0) {
        r1 = u32(s32(s8(arg0->byte_8)));
    }
    r0 = 0u;
    do {
L_745910:;
        r3 = r2 + r0;
        if (u32(s32(s8(*gptr<u8>(r3 + 0xau)))) == r1) {  // (from the original)
            guest::cpu()->r[1] = r1;
            return r0;
        }
        if (!(u32(s32(s8(*gptr<u8>(r3 + 0xbu)))) != r1)) {  // (from the original)
            r0 = r0 + 1u;
            guest::cpu()->r[1] = r1;
            return r0;
        }
        r0 = r0 + 2u;
        guest::preempt();
    } while (r0 < 8u);
    r0 = ~0u;
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_00745900
GUEST_EXPORT(0x00745900, d_00745900::f_00745900);

// f_00745948: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00745948 {


u32 f_00745948(u32 r0, u32 r1, u32 r2) {
    u64 t = 0;
    t = u64(0u) + ~0u + u32(r1 >= 8u);
    if (u32(t >> 0x20)) {  // (from the original)
        r0 = ~0u;
        return r0;
    }
    r0 = r0 + r1;
    if (r2 == 0) {
        r0 = u32(s32(s8(*gptr<u8>(r0 + 0x12u))));  // (from the original)
    } else {
        r0 = u32(s32(s8(*gptr<u8>(r0 + 0xau))));  // (from the original)
    }
    return r0;
}

}  // namespace d_00745948
GUEST_EXPORT(0x00745948, d_00745948::f_00745948);

// f_00745970: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00745970 {

inline constexpr guest::Function<0x002b5fc4, u32(u32, u32, u32, u32)> call_002b5fc4;  // (from the original)
inline constexpr guest::Function<0x0071cc4c, u32(u32, u32, u32, u32)> call_0071cc4c;  // (from the original)

u32 f_00745970(u32 r0, u32 r1, u32 r2) {
    u32 ea = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 8;
    r4 = r0;
    guest::cpu()->r[13] = r13;
    r0 = call_002b5fc4(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    if (r0 == 0) {
        r13 = r13 + 8;
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    guest::cpu()->r[13] = r13;
    r0 = call_002b5fc4(r0, r1, r2, guest::cpu()->r[3]);
    ea = r4 + 4u;
    r1 = *gptr<u32>(ea);
    r2 = *gptr<u32>(ea + 4);
    r13 = r13 + 8;
    guest::cpu()->r[13] = r13;
    return call_0071cc4c(r0, r1, r2, guest::cpu()->r[3]);
}

}  // namespace d_00745970
GUEST_EXPORT(0x00745970, d_00745970::f_00745970);

// f_0074599c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0074599c {

struct __attribute__((packed)) Object_0074599c_0 {
    u8 unknown_0[0xc];  // (not used here)
    u32 word_c;
};
GUEST_OFFSET(Object_0074599c_0, word_c, 0xc);  // (from the original)


u32 f_0074599c(gptr<Object_0074599c_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r1 = 0;
    r1 = arg0->word_c;
    if (r1 != 0) {
        r1 = u32(*gptr<u8>(r1 + 4u));
        if (r1 == 1u) {
            r0 = 1u;
            guest::cpu()->r[1] = r1;
            return r0;
        }
    }
    r1 = *gptr<u32>(r0 + 0x10u);  // (from the original)
    if (r1 != 0) {
        r1 = u32(*gptr<u8>(r1 + 4u));
        if (r1 == 1u) {
            r0 = 1u;
            guest::cpu()->r[1] = r1;
            return r0;
        }
    }
    r1 = *gptr<u32>(r0 + 0x14u);  // (from the original)
    if (r1 != 0) {
        r1 = u32(*gptr<u8>(r1 + 4u));
        if (r1 == 1u) {
            r0 = 1u;
            guest::cpu()->r[1] = r1;
            return r0;
        }
    }
    r1 = *gptr<u32>(r0 + 0x18u);  // (from the original)
    if (r1 != 0) {
        r1 = u32(*gptr<u8>(r1 + 4u));
        if (r1 == 1u) {
            r0 = 1u;
            guest::cpu()->r[1] = r1;
            return r0;
        }
    }
    r1 = *gptr<u32>(r0 + 0x1cu);  // (from the original)
    if (r1 != 0) {
        r1 = u32(*gptr<u8>(r1 + 4u));
        if (r1 == 1u) {
            r0 = 1u;
            guest::cpu()->r[1] = r1;
            return r0;
        }
    }
    r0 = *gptr<u32>(r0 + 0x20u);  // (from the original)
    if (r0 == 0) {
        r0 = 0u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r0 = u32(*gptr<u8>(r0 + 4u));
    if (r0 == 1u) {
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r0 = 0u;
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_0074599c
GUEST_EXPORT(0x0074599c, d_0074599c::f_0074599c);

// f_00745f74: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00745f74 {

struct __attribute__((packed)) Object_00745f74_0 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
};
GUEST_OFFSET(Object_00745f74_0, word_4, 0x4);  // (from the original)


u32 f_00745f74(gptr<Object_00745f74_0> arg0) {
    u32 r0 = arg0.addr();
    r0 = arg0->word_4 + 0xbcu;  // (from the original)
    return r0;
}

}  // namespace d_00745f74
GUEST_EXPORT(0x00745f74, d_00745f74::f_00745f74);

// f_00745f80: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00745f80 {

struct __attribute__((packed)) Object_00745f80_0 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
};
GUEST_OFFSET(Object_00745f80_0, word_4, 0x4);  // (from the original)


u32 f_00745f80(gptr<Object_00745f80_0> arg0) {
    u32 r0 = arg0.addr();
    r0 = arg0->word_4 + 0x4cu;  // (from the original)
    return r0;
}

}  // namespace d_00745f80
GUEST_EXPORT(0x00745f80, d_00745f80::f_00745f80);

// f_00746854: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00746854 {

struct __attribute__((packed)) Object_00746854_0 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
};
GUEST_OFFSET(Object_00746854_0, word_4, 0x4);  // (from the original)


u32 f_00746854(gptr<Object_00746854_0> arg0) {
    u32 r0 = arg0.addr();
    u32 zf = 0;
    u32 cf = 0;
    u32 fpsr = guest::cpu()->fpscr;
    float S0 = 0;
    float S1 = 0;
    S0 = std::bit_cast<float>(arg0->word_4);
    S1 = std::bit_cast<float>(*gptr<u32>(0x746870u));  // (from the original)
    fpsr = fpsr & 0xfffffffu | vfp_cmpf(S0, S1);  // (from the original)
    zf = fpsr >> 0x1e & 1;  // (from the original)
    cf = fpsr >> 0x1d & 1;  // (from the original)
    if (!cf || zf) {
        r0 = 1u;
    }
    if (cf && !zf) {
        r0 = 0u;
    }
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    return r0;
}

}  // namespace d_00746854
GUEST_EXPORT(0x00746854, d_00746854::f_00746854);

// f_00746d20: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00746d20 {

struct __attribute__((packed)) Object_00746d20_0 {
    u8 unknown_0[0x174];  // (not used here)
    u32 word_174;
};
GUEST_OFFSET(Object_00746d20_0, word_174, 0x174);  // (from the original)

inline constexpr guest::Function<0x001408d4, u32(u32, u32, u32, u32)> call_001408d4;  // (from the original)
inline constexpr guest::Function<0x00150bc0, u32(u32, u32, u32, u32)> call_00150bc0;  // (from the original)
inline constexpr guest::Function<0x004b6dc8, u32(u32, u32, u32, u32)> call_004b6dc8;  // (from the original)

u32 f_00746d20(gptr<Object_00746d20_0> arg0, u32 r1, u32 r2) {
    u32 r0 = arg0.addr();
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r13 = guest::cpu()->r[13];
    r4 = r1;
    r0 = arg0->word_174;
    r13 = r13 - 0x20u;  // (from the original)
    r1 = r1 + 0xcu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_001408d4(r0, r1, r2, guest::cpu()->r[3]);
    r5 = 0u;
    r1 = r13;
    r2 = 0x10u;  // (from the original)
    r0 = r4 + 0x18bu;  // (from the original)
    *gptr<u32>(r13) = u32(r5);
    *gptr<u32>(r13 + 4u) = u32(r5);
    *gptr<u32>(r13 + 8u) = u32(r5);
    *gptr<u32>(r13 + 0xcu) = u32(r5);  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00150bc0(r0, r1, r2, guest::cpu()->r[3]);
    r2 = guest::cpu()->r[2];
    *gptr<u32>(r4 + 0x178u) = u32(r5);  // (from the original)
    r1 = *gptr<u32>(r4 + 0x48u);  // (from the original)
    r0 = *gptr<u32>(r1 + 0xcu);  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_004b6dc8(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r13 = r13 + 0x20u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_00746d20
GUEST_EXPORT(0x00746d20, d_00746d20::f_00746d20);

// f_00746d78: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00746d78 {

struct __attribute__((packed)) Object_00746d78_0 {
    u8 unknown_0[0x48];  // (not used here)
    u32 word_48;
};
GUEST_OFFSET(Object_00746d78_0, word_48, 0x48);  // (from the original)


u32 f_00746d78(gptr<Object_00746d78_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r2 = 0;
    u32 r3 = 0;
    r0 = arg0->word_48;
    r3 = *gptr<u32>(*gptr<u32>(r0) + 0x2cu);  // (from the original)
    r2 = 1u;
    return guest::call_address<u32>(r3, r0, guest::cpu()->r[1], r2, r3);
}

}  // namespace d_00746d78
GUEST_EXPORT(0x00746d78, d_00746d78::f_00746d78);

// f_00746e2c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00746e2c {

struct __attribute__((packed)) Object_00746e2c_0 {
    u16 half_0;
};
GUEST_OFFSET(Object_00746e2c_0, half_0, 0x0);  // (from the original)


u32 f_00746e2c(gptr<Object_00746e2c_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r1 = 0;
    r1 = u32(arg0->half_0);
    if (r1 == 0) {
        r0 = 0u;
    }
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_00746e2c
GUEST_EXPORT(0x00746e2c, d_00746e2c::f_00746e2c);

// f_00746e4c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00746e4c {

struct __attribute__((packed)) Object_00746e4c_0 {
    u8 unknown_0[0x190];  // (not used here)
    u32 word_190;
};
GUEST_OFFSET(Object_00746e4c_0, word_190, 0x190);  // (from the original)


u32 f_00746e4c(gptr<Object_00746e4c_0> arg0, u32 r1) {
    u32 r0 = arg0.addr();
    u32 r2 = 0;
    u32 zf = 0;
    u32 cf = 0;
    r2 = arg0->word_190;
    zf = r2 == r1;
    cf = r2 >= r1;
    if (cf && !zf) {
        r0 = *gptr<u32>(r0 + (r1 << 2));
    }
    if (!cf || zf) {
        r0 = 0u;
    }
    return r0;
}

}  // namespace d_00746e4c
GUEST_EXPORT(0x00746e4c, d_00746e4c::f_00746e4c);

// f_00746f10: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00746f10 {

inline constexpr guest::Function<0x00747438, u32(u32, u32, u32, u32)> call_00747438;  // (from the original)

u32 f_00746f10(gptr<UnknownStateA22020> arg0) {
    u32 r0 = arg0.addr();
    r0 = arg0->sub.addr();
    if (r0 == 0) {
        return r0;
    }
    return call_00747438(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_00746f10
GUEST_EXPORT(0x00746f10, d_00746f10::f_00746f10);

// f_00746fec: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00746fec {

inline constexpr guest::Function<0x0072f380, u32(u32, u32, u32, u32)> call_0072f380;  // (from the original)

u32 f_00746fec() {
    u32 r0 = 0;
    guest::cpu()->r[13] -= 8u;
    r0 = *gptr<u32>(0x974a58u);  // (from the original)
    if (r0 == 0) {
        r0 = 0u;
        guest::cpu()->r[13] += 8u;
        return r0;
    }
    r0 = call_0072f380(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    if (r0 != 0) {
        r0 = 1u;
        guest::cpu()->r[13] += 8u;
        return r0;
    }
    r0 = 0u;
    guest::cpu()->r[13] += 8u;
    return r0;
}

}  // namespace d_00746fec
GUEST_EXPORT(0x00746fec, d_00746fec::f_00746fec);

// f_0074701c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0074701c {

inline constexpr guest::Function<0x0072f380, u32(u32, u32, u32, u32)> call_0072f380;  // (from the original)
inline constexpr guest::Function<0x0072f3a4, u32(u32, u32, u32, u32)> call_0072f3a4;  // (from the original)

u32 f_0074701c() {
    u32 r0 = 0;
    u32 r4 = guest::cpu()->r[4];
    guest::cpu()->r[13] -= 8u;
    r4 = *gptr<u32>(0x974a58u);  // (from the original)
    if (r4 == 0) {
        r0 = 0u;
        guest::cpu()->r[13] += 8u;
        return r0;
    }
    r0 = r4;
    r0 = call_0072f380(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    if (r0 != 0) {
        r0 = 1u;
        guest::cpu()->r[13] += 8u;
        return r0;
    }
    r0 = r4;
    r0 = call_0072f3a4(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    if (r0 == 0) {
        r0 = 0u;
        guest::cpu()->r[13] += 8u;
        return r0;
    }
    r0 = 1u;
    guest::cpu()->r[13] += 8u;
    return r0;
}

}  // namespace d_0074701c
GUEST_EXPORT(0x0074701c, d_0074701c::f_0074701c);

// f_00747094: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00747094 {

inline constexpr guest::Function<0x00733680, u32(u32, u32, u32, u32)> call_00733680;  // (from the original)
inline constexpr guest::Function<0x00733e00, u32(u32, u32, u32, u32)> call_00733e00;  // (from the original)

u32 f_00747094(u32 r0_unused, u32 r1, u32 r2) {
    u32 r0 = 0;
    u32 r4 = guest::cpu()->r[4];
    goto L_747094;
L_733dd0:;
    r1 = 0x3ff00000u;  // (from the original)
    r0 = *gptr<u32>(0x97d428u);  // (from the original)
    r2 = r0 - 0x100000u;  // (from the original)
    if (r2 >= r1) {
        r0 = 0u;
        r1 = r0;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    return call_00733680(r0, r1, r2, guest::cpu()->r[3]);
L_747094:;
    guest::cpu()->r[13] -= 8u;
    r4 = 0x974a64u;  // (from the original)
    r0 = *gptr<u32>(r4);
    if (r0 != 0) {
        r0 = call_00733e00(r0, r1, r2, guest::cpu()->r[3]);
        if (r0 == 1u) {
            goto L_7470c0;
        }
    }
    r0 = 0u;
    r1 = r0;
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1;
    return r0;
L_7470c0:;
    guest::cpu()->r[13] += 8u;
    guest::preempt();
    goto L_733dd0;
}

}  // namespace d_00747094
GUEST_EXPORT(0x00747094, d_00747094::f_00747094);

// f_0074724c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0074724c {

struct __attribute__((packed)) Object_0074724c_0 {
    u8 unknown_0[0x18];  // (not used here)
    u32 word_18;
};
GUEST_OFFSET(Object_0074724c_0, word_18, 0x18);  // (from the original)

inline constexpr guest::Function<0x00733cf0, u32(u32, u32, u32, u32)> call_00733cf0;  // (from the original)

u32 f_0074724c(gptr<Object_0074724c_0> arg0) {
    u32 r0 = arg0.addr();
    guest::cpu()->r[13] -= 8u;
    if (arg0->word_18 == 0) {
        r0 = 0u;
        guest::cpu()->r[13] += 8u;
        return r0;
    }
    r0 = *gptr<u32>(0x974a64u);  // (from the original)
    if (r0 == 0) {
        r0 = 0u;
        guest::cpu()->r[13] += 8u;
        return r0;
    }
    r0 = call_00733cf0(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    if (r0 != 0) {
        r0 = 1u;
        guest::cpu()->r[13] += 8u;
        return r0;
    }
    r0 = 0u;
    guest::cpu()->r[13] += 8u;
    return r0;
}

}  // namespace d_0074724c
GUEST_EXPORT(0x0074724c, d_0074724c::f_0074724c);

// f_007472b0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_007472b0 {

struct __attribute__((packed)) Object_007472b0_0 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Object_007472b0_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_007472b0_0, word_4, 0x4);  // (from the original)


void f_007472b0(gptr<Object_007472b0_0> arg0) {
    u32 r1 = 0;
    u32 r2 = 0;
    r2 = *gptr<u32>(0x974a64u);  // (from the original)
    if (r2 == 0) {
        r2 = 0x953678u;  // (from the original)
    } else {
        r2 = r2 + 0x7cu;  // (from the original)
    }
    r1 = *gptr<u32>(r2);
    r2 = *gptr<u32>(r2 + 4);
    arg0->word_0 = u32(r1);
    arg0->word_4 = u32(r2);
    guest::cpu()->r[1] = r1;
    return;
}

}  // namespace d_007472b0
GUEST_EXPORT(0x007472b0, d_007472b0::f_007472b0);

// f_00747438: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00747438 {

struct __attribute__((packed)) Object_00747438_0 {
    u8 unknown_0[0x155];  // (not used here)
    u8 byte_155;
};
GUEST_OFFSET(Object_00747438_0, byte_155, 0x155);  // (from the original)


u32 f_00747438(gptr<Object_00747438_0> arg0, u32 r1) {
    u32 r0 = arg0.addr();
    if (u32(arg0->byte_155) != 0) {
        if (r1 == 0) {
            r0 = 0u;
            return r0;
        }
    }
    r0 = u32(*gptr<u8>(r0 + 0x28u));  // (from the original)
    if (r0 != 0) {
        r0 = 1u;
    }
    return r0;
}

}  // namespace d_00747438
GUEST_EXPORT(0x00747438, d_00747438::f_00747438);

// f_00747548: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00747548 {

struct __attribute__((packed)) Object_00747548_0 {
    u8 unknown_0[0x28];  // (not used here)
    u8 byte_28;
};
GUEST_OFFSET(Object_00747548_0, byte_28, 0x28);  // (from the original)


u32 f_00747548(gptr<Object_00747548_0> arg0) {
    u32 r0 = arg0.addr();
    r0 = u32(arg0->byte_28);
    if (u32(r0 >= 1u) && !u32(r0 == 1u)) {
        r0 = 1u;
        return r0;
    }
    r0 = 0u;
    return r0;
}

}  // namespace d_00747548
GUEST_EXPORT(0x00747548, d_00747548::f_00747548);

// f_007475e0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_007475e0 {

inline constexpr guest::Function<0x00135748, u32(u32, u32, u32, u32)> call_00135748;  // (from the original)
inline constexpr guest::Function<0x001357ec, u32(u32, u32, u32, u32)> call_001357ec;  // (from the original)

u32 f_007475e0(u32 r0) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r4 = r0;
    r5 = r0 + 0xcu;  // (from the original)
    r0 = r5;
    r0 = call_00135748(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    r4 = u32(s32(s8(*gptr<u8>(r4 + 0x28u))));  // (from the original)
    r0 = r5;
    r0 = call_001357ec(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    r0 = r4;
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    return r0;
}

}  // namespace d_007475e0
GUEST_EXPORT(0x007475e0, d_007475e0::f_007475e0);

// f_00747608: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00747608 {

struct __attribute__((packed)) Object_00747608_0 {
    u32 word_0;
};
GUEST_OFFSET(Object_00747608_0, word_0, 0x0);  // (from the original)

struct __attribute__((packed)) Object_00747608_1 {
    u32 word_0;
};
GUEST_OFFSET(Object_00747608_1, word_0, 0x0);  // (from the original)


u32 f_00747608(gptr<Object_00747608_0> arg0, gptr<Object_00747608_1> arg1, u32 r2_unused, u32 r3) {
    u32 ea = 0;
    u32 res = 0;
    u32 r0 = arg0.addr();
    u32 r1 = arg1.addr();
    u32 r2 = 0;
    u32 zf = 0;
    r2 = arg0->word_0;
    zf = r2 == 0;
    if (!zf) {
        r3 = arg1->word_0;
        zf = r3 == 0;
    }
    if (!zf) {
        if (r3 == r2) {
            r0 = 1u;
            guest::cpu()->r[1] = r1;
            return r0;
        }
        r0 = 0u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    ea = r1 + 4u;
    r1 = *gptr<u32>(ea);
    r2 = *gptr<u32>(ea + 4);
    res = r1 | r2;
    if (res == 0) {
        r0 = 0u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    if (*gptr<u32>(r0 + 4u) != r1) {
        r0 = 0u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    if (*gptr<u32>(r0 + 8u) != r2) {
        r0 = 0u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r0 = 1u;
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_00747608
GUEST_EXPORT(0x00747608, d_00747608::f_00747608);

// f_00747660: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00747660 {

struct __attribute__((packed)) Object_00747660_0 {
    u32 word_0;
};
GUEST_OFFSET(Object_00747660_0, word_0, 0x0);  // (from the original)

struct __attribute__((packed)) Object_00747660_1 {
    u32 word_0;
};
GUEST_OFFSET(Object_00747660_1, word_0, 0x0);  // (from the original)


u32 f_00747660(gptr<Object_00747660_0> arg0, gptr<Object_00747660_1> arg1, u32 r2_unused, u32 r3) {
    u32 ea = 0;
    u32 res = 0;
    u32 r0 = arg0.addr();
    u32 r1 = arg1.addr();
    u32 r2 = 0;
    u32 zf = 0;
    r2 = arg0->word_0;
    zf = r2 == 0;
    if (!zf) {
        r3 = arg1->word_0;
        zf = r3 == 0;
    }
    if (!zf) {
        if (r3 == r2) {
            r0 = 0u;
            guest::cpu()->r[1] = r1;
            return r0;
        }
        r0 = 1u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    ea = r1 + 4u;
    r1 = *gptr<u32>(ea);
    r2 = *gptr<u32>(ea + 4);
    res = r1 | r2;
    if (res == 0) {
        r0 = 1u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    if (*gptr<u32>(r0 + 4u) != r1) {
        r0 = 1u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    if (*gptr<u32>(r0 + 8u) != r2) {
        r0 = 1u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r0 = 0u;
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_00747660
GUEST_EXPORT(0x00747660, d_00747660::f_00747660);

// f_00747a90: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00747a90 {


u32 f_00747a90(u32 r0, u32 r1) {
    u32 cf = 0;
    cf = r1 >= 0x400u;  // (from the original)
    r1 = r1 << 0x16 >> 0x16;  // (from the original)
    if (!cf) {
        r0 = u32(*gptr<u8>(r0 + r1 + 0x1102cu)) & 1u;  // (from the original)
        guest::cpu()->r[1] = r1;
        return r0;
    }
    if (s32(r1) < s32(0x200u)) {  // (from the original)
        r1 = r1 + 0x200u;  // (from the original)
    }
    r0 = u32(*gptr<u8>(r0 + r1 + 0x1102cu)) & 1u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_00747a90
GUEST_EXPORT(0x00747a90, d_00747a90::f_00747a90);

// f_00747c04: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00747c04 {

struct __attribute__((packed)) Object_00747c04_0 {
    u8 unknown_0[0xc];  // (not used here)
    u16 half_c;
    u16 half_e;
};
GUEST_OFFSET(Object_00747c04_0, half_c, 0xc);  // (from the original)
GUEST_OFFSET(Object_00747c04_0, half_e, 0xe);  // (from the original)


u32 f_00747c04(gptr<Object_00747c04_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r1 = 0;
    r1 = u32(arg0->half_e);
    if (r1 == u32(arg0->half_c)) {
        r0 = 0u;
    } else {
        r0 = 1u;
    }
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_00747c04
GUEST_EXPORT(0x00747c04, d_00747c04::f_00747c04);

// f_00747c24: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00747c24 {

struct __attribute__((packed)) Object_00747c24_0 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
    u32 word_8;
    u8 unknown_c[0x4];  // (not used here)
    u32 word_10;
};
GUEST_OFFSET(Object_00747c24_0, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_00747c24_0, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Object_00747c24_0, word_10, 0x10);  // (from the original)


u32 f_00747c24(gptr<Object_00747c24_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r1 = 0;
    u32 zf = 0;
    r1 = r0;
    r0 = arg0->word_8;
    zf = r0 == 0;
    if (zf) {
        r0 = arg0->word_10;
        zf = r0 == 0;
    }
    if (!zf) {
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r0 = arg0->word_4;
    if (r0 == 0) {
        r0 = 0u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    do {
L_747c48:;
        r1 = *gptr<u32>(r0 + 0x10u);  // (from the original)
        if (!(r1 == 0)) {
            r0 = r1;
            guest::cpu()->r[1] = r1;
            return r0;
        }
        r0 = *gptr<u32>(r0 + 4u);
        guest::preempt();
    } while (r0 != 0);
    r0 = 0u;
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_00747c24
GUEST_EXPORT(0x00747c24, d_00747c24::f_00747c24);

// f_00747c70: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00747c70 {

struct __attribute__((packed)) Object_00747c70_0 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
    u8 unknown_8[0x8];  // (not used here)
    u32 word_10;
};
GUEST_OFFSET(Object_00747c70_0, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_00747c70_0, word_10, 0x10);  // (from the original)


u32 f_00747c70(gptr<Object_00747c70_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r1 = 0;
    r1 = arg0->word_10;
    if (r1 != 0) {
        r0 = r1;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r0 = arg0->word_4;
    if (r0 == 0) {
        r0 = 0u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    do {
L_747c88:;
        r1 = *gptr<u32>(r0 + 0x10u);  // (from the original)
        if (!(r1 == 0)) {
            r0 = r1;
            guest::cpu()->r[1] = r1;
            return r0;
        }
        r0 = *gptr<u32>(r0 + 4u);
        guest::preempt();
    } while (r0 != 0);
    r0 = 0u;
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_00747c70
GUEST_EXPORT(0x00747c70, d_00747c70::f_00747c70);

// f_00747cb0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00747cb0 {

struct __attribute__((packed)) Object_00747cb0_0 {
    u8 unknown_0[0x8];  // (not used here)
    u32 word_8;
    u8 unknown_c[0x4];  // (not used here)
    u32 word_10;
};
GUEST_OFFSET(Object_00747cb0_0, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Object_00747cb0_0, word_10, 0x10);  // (from the original)

inline constexpr guest::Function<0x00747d70, u32(u32, u32, u32, u32)> call_00747d70;  // (from the original)

u32 f_00747cb0(gptr<Object_00747cb0_0> arg0, u32 r1) {
    u32 res = 0;
    u32 r0 = arg0.addr();
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 nf = 0;
    u32 zf = 0;
    u32 vf = 0;
    guest::cpu()->r[13] -= 0xcu;  // (from the original)
    r4 = r0;
    r5 = r1;
    if (arg0->word_8 == r5) {
        r0 = arg0->word_10 + (r1 << 1);
        goto L_747d60;
    }
    if (*gptr<u32>(0xad614cu) == 0) {  // (from the original)
        goto L_747d58;
    }
    r0 = r4;
    r0 = call_00747d70(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 == 0) {
        goto L_747d58;
    }
    r0 = *gptr<u32>(r4 + 0x84u);  // (from the original)
    nf = r0 >> 0x1f;  // (from the original)
    zf = r0 == 0;
    vf = 0u;
    if (!zf) {
        r0 = *gptr<u32>(r4 + 0x14u);  // (from the original)
        nf = r0 >> 0x1f;  // (from the original)
        zf = r0 == 0;
        vf = 0u;
    }
    if (zf || nf != vf) {
        r0 = ~0u;
    }
    if (!zf && nf == vf) {
        r0 = r0 - 1u;
    }
    if (r0 == r5) {
        goto L_747d58;
    }
    r0 = u32(*gptr<u16>(*gptr<u32>(r4 + 0x10u) + (r5 << 1)));  // (from the original)
    if (r0 == 0xau) {  // (from the original)
        goto L_747d58;
    }
    r1 = *gptr<u32>(r4 + 0x8cu);  // (from the original)
    res = r1;
    if (!(u32(res == 0) || res >> 0x1f != (r1 & (r1 ^ res)) >> 0x1f)) {  // (from the original)
        r1 = *gptr<u32>(r4 + 0x14u) - 1u;  // (from the original)
        if (r1 == r5) {
            guest::cpu()->r[13] += 0xcu;  // (from the original)
            guest::cpu()->r[1] = r1;
            return r0;
        }
    }
    if (u32(*gptr<u8>(0xad6254u)) == 0) {  // (from the original)
        r0 = 0x2au;  // (from the original)
    } else {
        r0 = 0xff0au;  // (from the original)
    }
    guest::cpu()->r[13] += 0xcu;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
L_747d58:;
    r0 = *gptr<u32>(r4 + 0x10u) + (r5 << 1);  // (from the original)
L_747d60:;
    r0 = u32(*gptr<u16>(r0));
    guest::cpu()->r[13] += 0xcu;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_00747cb0
GUEST_EXPORT(0x00747cb0, d_00747cb0::f_00747cb0);

// f_00747d70: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00747d70 {

struct __attribute__((packed)) Object_00747d70_0 {
    u8 unknown_0[0x14];  // (not used here)
    u32 word_14;
    u8 unknown_18[0xc];  // (not used here)
    u32 word_24;
};
GUEST_OFFSET(Object_00747d70_0, word_14, 0x14);  // (from the original)
GUEST_OFFSET(Object_00747d70_0, word_24, 0x24);  // (from the original)


u32 f_00747d70(gptr<Object_00747d70_0> arg0, u32 r1) {
    u32 res = 0;
    u32 r0 = arg0.addr();
    u32 r2 = 0;
    u32 r3 = 0;
    u32 r12 = 0;
    r3 = arg0->word_24;
    r2 = 1u;
    res = r3;
    if (u32(res == 0) || res >> 0x1f != (r3 & (r3 ^ res)) >> 0x1f) {  // (from the original)
        goto L_747d9c;
    }
    r12 = arg0->word_14 - r3;
    res = r12 - r1;
    if (!u32(res == 0) && res >> 0x1f == ((r12 ^ r1) & (r12 ^ res)) >> 0x1f) {  // (from the original)
        goto L_747d9c;
    }
    r12 = r12 + r3;
    res = r12 - r1;
    if (!u32(res == 0) && res >> 0x1f == ((r12 ^ r1) & (r12 ^ res)) >> 0x1f) {  // (from the original)
        r2 = 0u;
    }
L_747d9c:;
    r12 = *gptr<u32>(r0 + 0x28u);  // (from the original)
    res = r12;
    if (u32(res == 0) || res >> 0x1f != (r12 & (r12 ^ res)) >> 0x1f) {  // (from the original)
        r0 = r2;
        return r0;
    }
    r0 = *gptr<u32>(r0 + 0x14u) - r3 - r12;  // (from the original)
    res = r0 - r1;
    if (!u32(res == 0) && res >> 0x1f == ((r0 ^ r1) & (r0 ^ res)) >> 0x1f) {  // (from the original)
        r0 = r2;
        return r0;
    }
    if (s32(r1) < s32(r0 + r12)) {
        r2 = 0u;
    }
    r0 = r2;
    return r0;
}

}  // namespace d_00747d70
GUEST_EXPORT(0x00747d70, d_00747d70::f_00747d70);

// f_00748070: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00748070 {

inline constexpr guest::Function<0x0013c9b4, u32(u32, u32, u32, u32)> call_0013c9b4;  // (from the original)
inline constexpr guest::Function<0x0013c9b8, u32(u32, u32, u32, u32)> call_0013c9b8;  // (from the original)

u32 f_00748070(u32 r0, u32 r1, u32 r2) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    guest::cpu()->r[13] -= 0xcu;  // (from the original)
    r4 = r0;
    r5 = r1;
    r0 = call_0013c9b8(r0, r1, r2, guest::cpu()->r[3]);
    r0 = r4 + (r0 << 3) + 8u;
    r2 = *gptr<u32>(r5);
    if (*gptr<u32>(r0 + 4u) >= r2) {
        r0 = *gptr<u32>(r0);
        r1 = *gptr<u32>(r5 + 4u);
        if (!u32(r0 >= r1) || u32(r0 == r1)) {
            r1 = 1u;
            goto L_7480b0;
        }
    }
    r1 = 0u;
L_7480b0:;
    if (u32(*gptr<u8>(r4 + 4u)) != 0) {
        r0 = r4;
        r0 = call_0013c9b4(r0, r1, r2, guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
    }
    if (r1 == 0) {
        r0 = 0u;
    } else {
        r0 = 1u;
    }
    guest::cpu()->r[13] += 0xcu;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_00748070
GUEST_EXPORT(0x00748070, d_00748070::f_00748070);

// f_0074862c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0074862c {

struct __attribute__((packed)) Object_0074862c_0 {
    u8 unknown_0[0xb];  // (not used here)
    u8 byte_b;
};
GUEST_OFFSET(Object_0074862c_0, byte_b, 0xb);  // (from the original)


u32 f_0074862c(gptr<Object_0074862c_0> arg0, u32 r1) {
    u32 r0 = arg0.addr();
    r0 = u32(arg0->byte_b);
    if (r0 >= 0xaau) {  // (from the original)
        r0 = 0u;
    }
    r0 = 0x878198u + (r0 + (r0 << 1) << 2);  // (from the original)
    if (r1 == 0) {
        r0 = u32(*gptr<u8>(r0 + 9u));
    } else {
        r0 = u32(*gptr<u8>(r0 + 8u));
    }
    return r0;
}

}  // namespace d_0074862c
GUEST_EXPORT(0x0074862c, d_0074862c::f_0074862c);

// f_00749010: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00749010 {

inline constexpr guest::Function<0x00138c78, u32(u32, u32, u32, u32)> call_00138c78;  // (from the original)

u32 f_00749010() {
    u32 r0 = 0;
    guest::cpu()->r[13] -= 8u;
    r0 = *gptr<u32>(0x97d41cu) + 0x24u;  // (from the original)
    r0 = call_00138c78(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    r0 = *gptr<u32>(r0 + 0x64u);  // (from the original)
    guest::cpu()->r[13] += 8u;
    return r0;
}

}  // namespace d_00749010
GUEST_EXPORT(0x00749010, d_00749010::f_00749010);

// f_00749134: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00749134 {

struct __attribute__((packed)) Object_00749134_0 {
    u8 unknown_0[0x1c];  // (not used here)
    u8 byte_1c;
};
GUEST_OFFSET(Object_00749134_0, byte_1c, 0x1c);  // (from the original)


u32 f_00749134(gptr<Object_00749134_0> arg0) {
    u32 r0 = arg0.addr();
    u32 zf = 0;
    r0 = u32(arg0->byte_1c);
    zf = r0 == 3u;
    if (!zf) {
        zf = r0 == 4u;
    }
    if (zf) {
        r0 = 0u;
        return r0;
    }
    zf = r0 == 5u;
    if (!zf) {
        zf = r0 == 6u;
    }
    if (!zf) {
        r0 = 1u;
        return r0;
    }
    r0 = 0u;
    return r0;
}

}  // namespace d_00749134
GUEST_EXPORT(0x00749134, d_00749134::f_00749134);

// f_0074baa4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0074baa4 {


u32 f_0074baa4(u32 r0, u32 r1) {
    r0 = r0 + 0x20u;  // (from the original)
    if (r1 < 2u) {
        r0 = r0 + (r1 << 2);
    }
    r0 = *gptr<u32>(r0);
    return r0;
}

}  // namespace d_0074baa4
GUEST_EXPORT(0x0074baa4, d_0074baa4::f_0074baa4);

// f_0074ca5c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0074ca5c {

struct __attribute__((packed)) Object_0074ca5c_0 {
    u8 unknown_0[0x94];  // (not used here)
    u32 word_94;
    u8 unknown_98[0x10];  // (not used here)
    u32 word_a8;
    u8 unknown_ac[0x8];  // (not used here)
    u32 word_b4;
};
GUEST_OFFSET(Object_0074ca5c_0, word_94, 0x94);  // (from the original)
GUEST_OFFSET(Object_0074ca5c_0, word_a8, 0xa8);  // (from the original)
GUEST_OFFSET(Object_0074ca5c_0, word_b4, 0xb4);  // (from the original)


void f_0074ca5c(gptr<Object_0074ca5c_0> arg0) {
    float S0 = 0;
    float S1 = 0;
    S1 = std::bit_cast<float>(arg0->word_94) * std::bit_cast<float>(arg0->word_a8) * std::bit_cast<float>(*gptr<u32>(0x74ca84u));  // (from the original)
    S0 = std::bit_cast<float>(arg0->word_b4) * S1 + S1 * std::bit_cast<float>(*gptr<u32>(0x74ca88u));  // (from the original)
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    return;
}

}  // namespace d_0074ca5c
GUEST_EXPORT(0x0074ca5c, d_0074ca5c::f_0074ca5c);

// f_0074ca8c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0074ca8c {

struct __attribute__((packed)) Object_0074ca8c_0 {
    u8 unknown_0[0x94];  // (not used here)
    u32 word_94;
    u8 unknown_98[0x10];  // (not used here)
    u32 word_a8;
    u32 word_ac;
    u32 word_b0;
};
GUEST_OFFSET(Object_0074ca8c_0, word_94, 0x94);  // (from the original)
GUEST_OFFSET(Object_0074ca8c_0, word_a8, 0xa8);  // (from the original)
GUEST_OFFSET(Object_0074ca8c_0, word_ac, 0xac);  // (from the original)
GUEST_OFFSET(Object_0074ca8c_0, word_b0, 0xb0);  // (from the original)


void f_0074ca8c(gptr<Object_0074ca8c_0> arg0) {
    float S0 = 0;
    float S1 = 0;
    S1 = std::bit_cast<float>(arg0->word_94) * std::bit_cast<float>(arg0->word_a8) * std::bit_cast<float>(*gptr<u32>(0x74cabcu)) * std::bit_cast<float>(arg0->word_ac);  // (from the original)
    S0 = std::bit_cast<float>(arg0->word_b0) * S1 - S1 * std::bit_cast<float>(*gptr<u32>(0x74cac0u));  // (from the original)
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    return;
}

}  // namespace d_0074ca8c
GUEST_EXPORT(0x0074ca8c, d_0074ca8c::f_0074ca8c);

// f_0074cac4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0074cac4 {

struct __attribute__((packed)) Object_0074cac4_0 {
    u8 unknown_0[0x94];  // (not used here)
    u32 word_94;
    u8 unknown_98[0x10];  // (not used here)
    u32 word_a8;
    u32 word_ac;
    u32 word_b0;
};
GUEST_OFFSET(Object_0074cac4_0, word_94, 0x94);  // (from the original)
GUEST_OFFSET(Object_0074cac4_0, word_a8, 0xa8);  // (from the original)
GUEST_OFFSET(Object_0074cac4_0, word_ac, 0xac);  // (from the original)
GUEST_OFFSET(Object_0074cac4_0, word_b0, 0xb0);  // (from the original)


void f_0074cac4(gptr<Object_0074cac4_0> arg0) {
    float S0 = 0;
    float S1 = 0;
    S1 = std::bit_cast<float>(arg0->word_94) * std::bit_cast<float>(arg0->word_a8) * std::bit_cast<float>(*gptr<u32>(0x74caf4u)) * std::bit_cast<float>(arg0->word_ac);  // (from the original)
    S0 = std::bit_cast<float>(arg0->word_b0) * S1 + S1 * std::bit_cast<float>(*gptr<u32>(0x74caf8u));  // (from the original)
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    return;
}

}  // namespace d_0074cac4
GUEST_EXPORT(0x0074cac4, d_0074cac4::f_0074cac4);

// f_0074cafc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0074cafc {

struct __attribute__((packed)) Object_0074cafc_0 {
    u8 unknown_0[0x94];  // (not used here)
    u32 word_94;
    u8 unknown_98[0x10];  // (not used here)
    u32 word_a8;
    u8 unknown_ac[0x8];  // (not used here)
    u32 word_b4;
};
GUEST_OFFSET(Object_0074cafc_0, word_94, 0x94);  // (from the original)
GUEST_OFFSET(Object_0074cafc_0, word_a8, 0xa8);  // (from the original)
GUEST_OFFSET(Object_0074cafc_0, word_b4, 0xb4);  // (from the original)


void f_0074cafc(gptr<Object_0074cafc_0> arg0) {
    float S0 = 0;
    float S1 = 0;
    S1 = std::bit_cast<float>(arg0->word_94) * std::bit_cast<float>(arg0->word_a8) * std::bit_cast<float>(*gptr<u32>(0x74cb24u));  // (from the original)
    S0 = std::bit_cast<float>(arg0->word_b4) * S1 - S1 * std::bit_cast<float>(*gptr<u32>(0x74cb28u));  // (from the original)
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    return;
}

}  // namespace d_0074cafc
GUEST_EXPORT(0x0074cafc, d_0074cafc::f_0074cafc);

// f_0074dcac: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0074dcac {

struct __attribute__((packed)) Object_0074dcac_0 {
    u8 unknown_0[0xc];  // (not used here)
    u32 word_c;
};
GUEST_OFFSET(Object_0074dcac_0, word_c, 0xc);  // (from the original)


u32 f_0074dcac(gptr<Object_0074dcac_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r1 = 0;
    u32 zf = 0;
    r0 = arg0->word_c;
    r1 = *gptr<u32>(r0 + 0x88u);  // (from the original)
    zf = r1 == 0;
    if (zf) {
        r0 = *gptr<u32>(r0 + 0x8cu);  // (from the original)
        zf = r0 == 0;
    }
    if (!zf) {
        r0 = 1u;
    }
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_0074dcac
GUEST_EXPORT(0x0074dcac, d_0074dcac::f_0074dcac);

// f_0074e960: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0074e960 {

struct __attribute__((packed)) Object_0074e960_0 {
    u8 unknown_0[0x5c];  // (not used here)
    u32 word_5c;
};
GUEST_OFFSET(Object_0074e960_0, word_5c, 0x5c);  // (from the original)


u32 f_0074e960(gptr<Object_0074e960_0> arg0) {
    u32 r0 = arg0.addr();
    r0 = *gptr<u32>(*gptr<u32>(arg0->word_5c + 0x20u) + 0x20u);  // (from the original)
    return r0;
}

}  // namespace d_0074e960
GUEST_EXPORT(0x0074e960, d_0074e960::f_0074e960);

// f_0074fbbc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0074fbbc {

struct __attribute__((packed)) Object_0074fbbc_0 {
    u8 unknown_0[0x8];  // (not used here)
    u32 word_8;
    u8 unknown_c[0xc];  // (not used here)
    u32 word_18;
    u8 unknown_1c[0xc];  // (not used here)
    u32 word_28;
};
GUEST_OFFSET(Object_0074fbbc_0, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Object_0074fbbc_0, word_18, 0x18);  // (from the original)
GUEST_OFFSET(Object_0074fbbc_0, word_28, 0x28);  // (from the original)

inline constexpr guest::Function<0x00565cc0, u32(u32, u32, u32, u32)> call_00565cc0;  // (from the original)

u32 f_0074fbbc(gptr<Object_0074fbbc_0> arg0, u32 r1) {
    u32 r0 = arg0.addr();
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 zf = 0;
    float S0 = 0;
    float S1 = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r4 = r0;
    S0 = std::bit_cast<float>(arg0->word_8);
    S1 = std::bit_cast<float>(arg0->word_28);
    r5 = r1;
    S1 = sqrtf(S0 * S0 + S1 * S1);
    S0 = -std::bit_cast<float>(arg0->word_18);
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    r0 = call_00565cc0(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    zf = r0 == 0x4000u;  // (from the original)
    if (!zf) {
        zf = r0 + 0x4000u == 0;  // (from the original)
    }
    *gptr<u16>(r5) = u16(r0);
    if (!zf) {
        r6 = r5 + 2u;
        S1 = std::bit_cast<float>(*gptr<u32>(r4 + 0x28u));  // (from the original)
        S0 = std::bit_cast<float>(*gptr<u32>(r4 + 8u));
        guest::cpu()->s[0] = S0;
        guest::cpu()->s[1] = S1;
        r0 = call_00565cc0(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        r4 = r4 + 0x10u;  // (from the original)
        *gptr<u16>(r6) = u16(r0);
        S0 = std::bit_cast<float>(*gptr<u32>(r4));
        S1 = std::bit_cast<float>(*gptr<u32>(r4 + 4));
        guest::cpu()->s[0] = S0;
        guest::cpu()->s[1] = S1;
        r0 = call_00565cc0(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        S0 = guest::cpu()->s[0];
        S1 = guest::cpu()->s[1];
        *gptr<u16>(r5 + 4u) = u16(r0);
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->s[0] = S0;
        guest::cpu()->s[1] = S1;
        return r0;
    }
    r1 = 0u;
    *gptr<u16>(r5 + 4u) = u16(r1);
    S1 = std::bit_cast<float>(*gptr<u32>(r4));
    S0 = -std::bit_cast<float>(*gptr<u32>(r4 + 0x20u));  // (from the original)
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    r0 = call_00565cc0(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    *gptr<u16>(r5 + 2u) = u16(r0);
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    return r0;
}

}  // namespace d_0074fbbc
GUEST_EXPORT(0x0074fbbc, d_0074fbbc::f_0074fbbc);

// f_0074fc40: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0074fc40 {

inline constexpr guest::Function<0x00148710, u32(u32, u32, u32, u32)> call_00148710;  // (from the original)
inline constexpr guest::Function<0x0073c668, u32(u32, u32, u32, u32)> call_0073c668;  // (from the original)

u32 f_0074fc40(u32 r0, u32 r1, u32 r2, float S0, float S1, float S2, float S3, float S4) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r13 = guest::cpu()->r[13];
    r5 = r1;
    r13 = r13 - 0x30u;  // (from the original)
    r6 = r0;
    r1 = r0 + 0x10u;  // (from the original)
    r4 = r2;
    r0 = r13 + 0x10u;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2;
    guest::cpu()->s[3] = S3;
    guest::cpu()->s[4] = S4;
    r0 = call_0073c668(r0, r1, r2, guest::cpu()->r[3]);
    r0 = r13 + 0x10u;  // (from the original)
    S4 = std::bit_cast<float>(*gptr<u32>(r13 + 0x1cu));  // (from the original)
    S1 = std::bit_cast<float>(*gptr<u32>(0x74fcd0u));  // (from the original)
    r2 = r13;
    S2 = std::bit_cast<float>(*gptr<u32>(r0));
    S3 = std::bit_cast<float>(*gptr<u32>(r0 + 4));
    r1 = r6 + 0x74u;  // (from the original)
    r0 = r2;
    S0 = (S2 + std::bit_cast<float>(*gptr<u32>(r13 + 0x18u))) * S1;  // (from the original)
    S1 = (S3 + S4) * S1;
    S0 = std::bit_cast<float>(*gptr<u32>(r5)) - S0 + S2;
    *gptr<u32>(r4) = u32(std::bit_cast<u32>(S0));
    S3 = std::bit_cast<float>(*gptr<u32>(r5 + 4u));
    S1 = std::bit_cast<float>(*gptr<u32>(r13 + 0x14u)) - (S3 - S1);  // (from the original)
    S2 = std::bit_cast<float>(*gptr<u32>(0x74fcd4u));  // (from the original)
    *gptr<u32>(r4 + 4u) = u32(std::bit_cast<u32>(S1));
    *gptr<u32>(r13) = u32(std::bit_cast<u32>(S0));
    *gptr<u32>(r13 + 4) = u32(std::bit_cast<u32>(S1));
    *gptr<u32>(r13 + 8) = u32(std::bit_cast<u32>(S2));
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2;
    guest::cpu()->s[3] = S3;
    guest::cpu()->s[4] = S4;
    r0 = call_00148710(r0, r1, r2, guest::cpu()->r[3]);
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    r0 = *gptr<u32>(r13);
    r1 = *gptr<u32>(r13 + 4);
    *gptr<u32>(r4) = u32(r0);
    *gptr<u32>(r4 + 4) = u32(r1);
    r13 = r13 + 0x30u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    return r0;
}

}  // namespace d_0074fc40
GUEST_EXPORT(0x0074fc40, d_0074fc40::f_0074fc40);

// f_0074fcd8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0074fcd8 {

struct __attribute__((packed)) Object_0074fcd8_0 {
    u8 unknown_0[0x8];  // (not used here)
    u32 word_8;
    u32 word_c;
};
GUEST_OFFSET(Object_0074fcd8_0, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Object_0074fcd8_0, word_c, 0xc);  // (from the original)


u32 f_0074fcd8(gptr<Object_0074fcd8_0> arg0, float S0) {
    u32 r0 = arg0.addr();
    u32 r1 = 0;
    u32 fpsr = guest::cpu()->fpscr;
    float S1 = 0;
    float S2 = 0;
    r1 = r0 + 8u;
    S1 = std::bit_cast<float>(arg0->word_8);
    S2 = std::bit_cast<float>(arg0->word_c);
    fpsr = fpsr & 0xfffffffu | vfp_cmpf(S2, S1);  // (from the original)
    if (fpsr >> 0x1e & 1) {  // (from the original)
        if (!u32(S1 == S0)) {
            r0 = 0u;
            guest::cpu()->r[1] = r1;
            guest::cpu()->s[1] = S1;
            return r0;
        }
        r0 = 1u;
        guest::cpu()->r[1] = r1;
        guest::cpu()->s[1] = S1;
        return r0;
    }
    if ((u32(*gptr<u8>(r0 + 0x14u)) & 2u) != 0) {  // (from the original)
        fpsr = fpsr & 0xfffffffu | vfp_cmpf(S2, S1);  // (from the original)
        if (!(fpsr >> 0x1e & 1 || fpsr >> 0x1f != (fpsr >> 0x1c & 1))) {  // (from the original)
            fpsr = fpsr & 0xfffffffu | vfp_cmpf(S2, S0);  // (from the original)
            if (fpsr >> 0x1e & 1 || fpsr >> 0x1f != (fpsr >> 0x1c & 1)) {  // (from the original)
                r0 = 0u;
                guest::cpu()->r[1] = r1;
                guest::cpu()->s[1] = S1;
                return r0;
            }
            fpsr = fpsr & 0xfffffffu | vfp_cmpf(S1, S0);  // (from the original)
            if (fpsr >> 0x1d & 1 && !(fpsr >> 0x1e & 1)) {  // (from the original)
                r0 = 0u;
                guest::cpu()->r[1] = r1;
                guest::cpu()->s[1] = S1;
                return r0;
            }
            r0 = 1u;
            guest::cpu()->r[1] = r1;
            guest::cpu()->s[1] = S1;
            return r0;
        }
        fpsr = fpsr & 0xfffffffu | vfp_cmpf(S1, S0);  // (from the original)
        if (!(fpsr >> 0x1d & 1) || fpsr >> 0x1e & 1) {  // (from the original)
            r0 = 1u;
            guest::cpu()->r[1] = r1;
            guest::cpu()->s[1] = S1;
            return r0;
        }
        fpsr = fpsr & 0xfffffffu | vfp_cmpf(S2, S0);  // (from the original)
        if (fpsr >> 0x1e & 1 || fpsr >> 0x1f != (fpsr >> 0x1c & 1)) {  // (from the original)
            r0 = 0u;
            guest::cpu()->r[1] = r1;
            guest::cpu()->s[1] = S1;
            return r0;
        }
        r0 = 1u;
        guest::cpu()->r[1] = r1;
        guest::cpu()->s[1] = S1;
        return r0;
    }
    fpsr = fpsr & 0xfffffffu | vfp_cmpf(S2, S1);  // (from the original)
    if (!(fpsr >> 0x1d & 1)) {  // (from the original)
        fpsr = fpsr & 0xfffffffu | vfp_cmpf(S2, S0);  // (from the original)
        if (fpsr >> 0x1d & 1) {  // (from the original)
            r0 = 0u;
            guest::cpu()->r[1] = r1;
            guest::cpu()->s[1] = S1;
            return r0;
        }
        fpsr = fpsr & 0xfffffffu | vfp_cmpf(S1, S0);  // (from the original)
        if (fpsr >> 0x1f != (fpsr >> 0x1c & 1)) {  // (from the original)
            r0 = 0u;
            guest::cpu()->r[1] = r1;
            guest::cpu()->s[1] = S1;
            return r0;
        }
        r0 = 1u;
        guest::cpu()->r[1] = r1;
        guest::cpu()->s[1] = S1;
        return r0;
    }
    fpsr = fpsr & 0xfffffffu | vfp_cmpf(S1, S0);  // (from the original)
    if (fpsr >> 0x1f == (fpsr >> 0x1c & 1)) {  // (from the original)
        r0 = 1u;
        guest::cpu()->r[1] = r1;
        guest::cpu()->s[1] = S1;
        return r0;
    }
    if ((fpsr & 0xfffffffu | vfp_cmpf(S2, S0)) >> 0x1d & 1) {  // (from the original)
        r0 = 0u;
        guest::cpu()->r[1] = r1;
        guest::cpu()->s[1] = S1;
        return r0;
    }
    r0 = 1u;
    guest::cpu()->r[1] = r1;
    guest::cpu()->s[1] = S1;
    return r0;
}

}  // namespace d_0074fcd8
GUEST_EXPORT(0x0074fcd8, d_0074fcd8::f_0074fcd8);

// f_0074fd9c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0074fd9c {

struct __attribute__((packed)) Object_0074fd9c_0 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
    u8 unknown_8[0xc];  // (not used here)
    u8 byte_14;
};
GUEST_OFFSET(Object_0074fd9c_0, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_0074fd9c_0, byte_14, 0x14);  // (from the original)


void f_0074fd9c(gptr<Object_0074fd9c_0> arg0, float S0_unused, float S1) {
    u32 r1 = 0;
    float S0 = 0;
    r1 = u32(arg0->byte_14);
    if ((r1 & 2u) == 0) {
        S0 = std::bit_cast<float>(*gptr<u32>(0x74fdc0u));  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->s[0] = S0;
        guest::cpu()->s[1] = S1;
        return;
    }
    S0 = std::bit_cast<float>(arg0->word_4);
    if ((r1 & 1u) != 0) {
        S1 = std::bit_cast<float>(*gptr<u32>(0x74fdc4u));  // (from the original)
        S0 = S0 - S1;
    }
    guest::cpu()->r[1] = r1;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    return;
}

}  // namespace d_0074fd9c
GUEST_EXPORT(0x0074fd9c, d_0074fd9c::f_0074fd9c);
