// Functions decompiled by tools/decomp (docs/decomp.md), each proved equal to the recompiled original (prove-cpp). The
// names are generated (d_<address>::f_<address>, Object_<address>_<argument>, word_<offset>) and still to be chosen.
#include "guest/guest.hpp"
#include "core/state_a22020.hpp"
#include "recovered/structs.hpp"

#include <bit>

using guest::gptr;

// f_007400f8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_007400f8 {

struct __attribute__((packed)) Object_007400f8_0 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
};
GUEST_OFFSET(Object_007400f8_0, word_4, 0x4);  // (from the original)

inline constexpr guest::Function<0x0073f4b4, u32(u32)> call_0073f4b4;  // (from the original)

u32 f_007400f8(gptr<Object_007400f8_0> arg0) {
    u32 r0_2 = call_0073f4b4(*gptr<u32>(arg0->word_4 + 0x3cu));  // (from the original)
    return *gptr<u32>(r0_2);
}

}  // namespace d_007400f8
GUEST_EXPORT_FRAMED(0x007400f8, d_007400f8::f_007400f8, 0x4010);  // pushes {r4, lr} first, as the original

// f_00740114: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00740114 {

struct __attribute__((packed)) Object_00740114_0 {
    u8 unknown_0[0x3c];  // (not used here)
    u32 word_3c;
};
GUEST_OFFSET(Object_00740114_0, word_3c, 0x3c);  // (from the original)

inline constexpr guest::Function<0x0073f1ac, u32(u32, u32, u32)> call_0073f1ac;  // (from the original)
inline constexpr guest::Function<0x0073f208, u32(u32, u32, u32, u32)> call_0073f208;  // (from the original)

u32 f_00740114(gptr<Object_00740114_0> arg0, u32 r1, u32 r2) {
    u32 r0_2 = call_0073f208(arg0->word_3c, r1, r2, guest::cpu()->r[3]);
    if (r0_2 == 0) {
        return r0_2;
    }
    u32 r1_2 = *gptr<u32>(r0_2);
    *gptr<u32>(r2) = r1_2;
    u32 r0_3 = call_0073f1ac(r0_2, r1_2, r2);
    *gptr<u32>(r2 + 4u) = r0_3;
    return 1u;
}

}  // namespace d_00740114
GUEST_EXPORT_FRAMED(0x00740114, d_00740114::f_00740114, 0x4010);  // pushes {r4, lr} first, as the original

// f_00740144: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00740144 {

struct __attribute__((packed)) Object_00740144_0 {
    u8 unknown_0[0x3c];  // (not used here)
    u32 word_3c;
};
GUEST_OFFSET(Object_00740144_0, word_3c, 0x3c);  // (from the original)

inline constexpr guest::Function<0x00141728, u32(u32, u32, u32, u32)> call_00141728;  // (from the original)
inline constexpr guest::Function<0x0073f70c, u32(u32, u32, u32)> call_0073f70c;  // (from the original)

u32 f_00740144(gptr<Object_00740144_0> arg0, u32 r1, u32 r2) {
    u32 r0_2 = call_00141728(arg0->word_3c, r1, r2, guest::cpu()->r[3]);
    if (r0_2 == 0) {
        return r0_2;
    }
    u32 r0_3 = call_0073f70c(r0_2, r1, r2);
    if (r0_3 == 0) {
        return r0_3;
    }
    *gptr<u32>(r2) = *gptr<u32>(r0_3);
    *gptr<u32>(r2 + 4u) = *gptr<u32>(r0_3 + 4u);
    *gptr<u8>(r2 + 8u) = u8(u32(*gptr<u8>(r0_3 + 8u)));
    *gptr<u8>(r2 + 9u) = u8(u32(*gptr<u8>(r0_3 + 9u)));
    return 1u;
}

}  // namespace d_00740144
GUEST_EXPORT_FRAMED(0x00740144, d_00740144::f_00740144, 0x4010);  // pushes {r4, lr} first, as the original

// f_007401c0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_007401c0 {

struct __attribute__((packed)) Object_007401c0_0 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
};
GUEST_OFFSET(Object_007401c0_0, word_4, 0x4);  // (from the original)

inline constexpr guest::Function<0x0073f4c0, u32(u32)> call_0073f4c0;  // (from the original)

u32 f_007401c0(gptr<Object_007401c0_0> arg0) {
    u32 r0_2 = call_0073f4c0(*gptr<u32>(arg0->word_4 + 0x3cu));  // (from the original)
    return *gptr<u32>(r0_2);
}

}  // namespace d_007401c0
GUEST_EXPORT_FRAMED(0x007401c0, d_007401c0::f_007401c0, 0x4010);  // pushes {r4, lr} first, as the original

// f_0074046c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0074046c {

struct __attribute__((packed)) Object_0074046c_0 {
    u8 unknown_0[0x8];  // (not used here)
    u32 word_8;
    u8 unknown_c[0x30];  // (not used here)
    u32 word_3c;
};
GUEST_OFFSET(Object_0074046c_0, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Object_0074046c_0, word_3c, 0x3c);  // (from the original)

inline constexpr guest::Function<0x0013f718, u32(u32, u32, u32)> call_0013f718;  // (from the original)
inline constexpr guest::Function<0x00141728, u32(u32, u32, u32, u32)> call_00141728;  // (from the original)
inline constexpr guest::Function<0x0073f4f4, u32(u32)> call_0073f4f4;  // (from the original)
inline constexpr guest::Function<0x0073f630, u32(u32, u32, u32)> call_0073f630;  // (from the original)
inline constexpr guest::Function<0x0073f650, u32(u32, u32, u32)> call_0073f650;  // (from the original)
inline constexpr guest::Function<0x0073f6b4, u32(u32, u32, u32)> call_0073f6b4;  // (from the original)
inline constexpr guest::Function<0x0073f734, u32(u32)> call_0073f734;  // (from the original)
inline constexpr guest::Function<0x0073f740, u32(u32, u32, u32)> call_0073f740;  // (from the original)

u32 f_0074046c(gptr<Object_0074046c_0> arg0, u32 r1, u32 r2) {
    u32 r0_7 = 0;
    u32 r0_2 = call_00141728(arg0->word_3c, r1, r2, guest::cpu()->r[3]);
    if (r0_2 != 0) {
        u32 r0_3 = call_0013f718(r0_2, guest::cpu()->r[1], guest::cpu()->r[2]);
        if (r0_3 != 2u) {
            r0_2 = 0u;
        } else {
            if (arg0->word_8 < 0x2030100u) {  // (from the original)
                u32 r0_4 = call_0073f740(r0_2, 0x2030100u, guest::cpu()->r[2]);  // (from the original)
                u32 r0_5 = call_0073f6b4(r0_4, guest::cpu()->r[1], guest::cpu()->r[2]);
                u32 r1_3 = guest::cpu()->r[1];
                u32 r2_4 = guest::cpu()->r[2];
                *gptr<u8>(r2) = u8(r0_5);
                u32 r0_6 = call_0073f650(r0_4, r1_3, r2_4);
                *gptr<u32>(r2 + 4u) = r0_6;
                r0_7 = call_0073f630(r0_4, r1_3, r2_4);
            } else {
                u32 r0_8 = call_0073f734(r0_2);
                r0_2 = call_0073f4f4(r0_8);
                if (r0_2 == 0) {
                    return r0_2;
                }
                u32 r1_4 = *gptr<u32>(r0_2) >> 8u & 0xffu;  // (from the original)
                if (r1_4 != 1u) {
                    r1_4 = 0u;
                }
                *gptr<u8>(r2) = u8(r1_4);
                *gptr<u32>(r2 + 4u) = *gptr<u32>(r0_2 + 4u);
                r0_7 = *gptr<u32>(r0_2 + 8u);
            }
            *gptr<u32>(r2 + 8u) = r0_7;
            r0_2 = 1u;
        }
    }
    return r0_2;
}

}  // namespace d_0074046c
GUEST_EXPORT_FRAMED(0x0074046c, d_0074046c::f_0074046c, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_00740528: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00740528 {

struct __attribute__((packed)) Object_00740528_0 {
    u8 unknown_0[0x8];  // (not used here)
    u32 word_8;
    u8 unknown_c[0x30];  // (not used here)
    u32 word_3c;
};
GUEST_OFFSET(Object_00740528_0, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Object_00740528_0, word_3c, 0x3c);  // (from the original)

inline constexpr guest::Function<0x0073f490, u32(u32, u32)> call_0073f490;  // (from the original)

u32 f_00740528(gptr<Object_00740528_0> arg0, u32 r1) {
    u32 r0_2 = call_0073f490(arg0->word_3c, r1);
    u32 r1_1 = guest::cpu()->r[1];
    if (r0_2 != 0) {
        *gptr<u32>(r1) = u32(*gptr<u16>(r0_2));
        *gptr<u32>(r1 + 4u) = u32(*gptr<u16>(r0_2 + 2u));
        *gptr<u32>(r1 + 8u) = u32(*gptr<u16>(r0_2 + 4u));
        *gptr<u32>(r1 + 0xcu) = u32(*gptr<u16>(r0_2 + 6u));  // (from the original)
        *gptr<u32>(r1 + 0x10u) = u32(*gptr<u16>(r0_2 + 8u));  // (from the original)
        *gptr<u32>(r1 + 0x14u) = u32(*gptr<u16>(r0_2 + 0xau));  // (from the original)
        *gptr<u32>(r1 + 0x18u) = u32(*gptr<u16>(r0_2 + 0xcu));  // (from the original)
        u32 r3_1 = arg0->word_8;
        r1_1 = 1u;
        if (0x2030200u <= r3_1) {  // (from the original)
            *gptr<u32>(r1 + 0x1cu) = u32(*gptr<u8>(r0_2 + 0xeu));  // (from the original)
        }
        r0_2 = 1u;
        if (0x2030200u > r3_1) {  // (from the original)
            *gptr<u32>(r1 + 0x1cu) = r1_1;  // (from the original)
        }
    }
    guest::cpu()->r[1] = r1_1;
    return r0_2;
}

}  // namespace d_00740528
GUEST_EXPORT_FRAMED(0x00740528, d_00740528::f_00740528, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_007405c4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_007405c4 {

struct __attribute__((packed)) Object_007405c4_0 {
    u8 unknown_0[0x10];  // (not used here)
    u16 half_10;
};
GUEST_OFFSET(Object_007405c4_0, half_10, 0x10);  // (from the original)


u32 f_007405c4(gptr<Object_007405c4_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r0_1 = 0;
    u32 r12 = arg0->half_10;
    u32 r3 = r0 + 0x14u;  // (from the original)
    u32 r5 = r0;
    r0 = 0u;
    u32 r2 = 0x4000u;  // (from the original)
    u32 r1 = r0;
    if (s32(r12) <= 0) {
        return r0;
    }
    do {
        if (*gptr<u16>(r3 + (r1 + (r1 << 1) << 2)) == r2) {
            u32 res_1 = r3 + (r1 + (r1 << 1) << 2);
            u32 zf_1 = res_1 == 0;
            u32 r1_1 = res_1;
            if (!zf_1) {
                r1_1 = *gptr<u32>(r1_1 + 4u);
                zf_1 = r1_1 == 0;
            }
            if (zf_1) {
                return r0;
            } else {
                r0_1 = r1_1 + r5;
            }
            return r0_1;
        }
        r1 += 1u;
        guest::preempt();
    } while (s32(r12) > s32(r1));
    return r0;
}

}  // namespace d_007405c4
GUEST_EXPORT_FRAMED(0x007405c4, d_007405c4::f_007405c4, 0x30);  // pushes {r4, r5} first, as the original

// f_00740630: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00740630 {

struct __attribute__((packed)) Object_00740630_0 {
    u8 unknown_0[0x10];  // (not used here)
    u16 half_10;
};
GUEST_OFFSET(Object_00740630_0, half_10, 0x10);  // (from the original)


u32 f_00740630(gptr<Object_00740630_0> arg0) {
    u32 r0 = arg0.addr();
    u32 res_1 = 0;
    u32 zf_1 = 0;
    u32 r1_1 = 0;
    u32 r3 = arg0->half_10;
    u32 r12 = 0x4004u;  // (from the original)
    u32 r5 = 0u;
    u32 r2 = r0 + 0x14u;  // (from the original)
    u32 r1 = r5;
    if (s32(r3) <= 0) {
        return r5;
    }
L_740650:;
    if (*gptr<u16>(r2 + (r1 + (r1 << 1) << 2)) != r12) {
        goto L_740684;
    }
    res_1 = r2 + (r1 + (r1 << 1) << 2);
    zf_1 = res_1 == 0;
    r1_1 = res_1;
    if (!zf_1) {
        r1_1 = *gptr<u32>(r1_1 + 4u);
        zf_1 = r1_1 == 0;
    }
    if (!zf_1) {
        r5 = r1_1 + r0;
    }
    return r5;
L_740684:;
    r1 += 1u;
    if (s32(r3) > s32(r1)) {
        guest::preempt();
        goto L_740650;
    }
    return r5;
}

}  // namespace d_00740630
GUEST_EXPORT_FRAMED(0x00740630, d_00740630::f_00740630, 0x30);  // pushes {r4, r5} first, as the original

// f_007406a4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_007406a4 {

struct __attribute__((packed)) Object_007406a4_0 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
};
GUEST_OFFSET(Object_007406a4_0, word_4, 0x4);  // (from the original)

inline constexpr guest::Function<0x002fbb30, u32(u32, u32, u32)> call_002fbb30;  // (from the original)
inline constexpr guest::Function<0x0073ef1c, u32(u32, u32, u32, u32)> call_0073ef1c;  // (from the original)

void f_007406a4(gptr<Object_007406a4_0> arg0, u32 r1, u32 r2) {
    u32 r0_2 = call_0073ef1c(arg0->word_4, r1, r2, guest::cpu()->r[3]);
    call_002fbb30(r1, r0_2, 0x4cu);  // (from the original)
}

}  // namespace d_007406a4
GUEST_EXPORT_FRAMED(0x007406a4, d_007406a4::f_007406a4, 0x4010);  // pushes {r4, lr} first, as the original

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
    u32 word_8;
};
GUEST_OFFSET(Object_007406cc_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_007406cc_1, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_007406cc_1, word_8, 0x8);  // (from the original)

struct __attribute__((packed)) Local_007406cc_ea_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_007406cc_ea_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_007406cc_ea_1, word_4, 0x4);  // (from the original)

inline constexpr guest::Function<0x00740698, u32(u32, u32)> call_00740698;  // (from the original)

u32 f_007406cc(gptr<Object_007406cc_0> arg0, gptr<Object_007406cc_1> arg1, u32 r2) {
    gptr<Local_007406cc_ea_1> ea_1 = gptr<Local_007406cc_ea_1>(arg0->word_8 + (4u + (r2 + (r2 << 2) << 2)));
    arg1->word_0 = ea_1->word_0;
    u32 r1_1 = ea_1->word_4;
    arg1->word_4 = r1_1;
    u32 r0_1 = call_00740698(ea_1.addr(), r1_1);
    arg1->word_8 = r0_1;
    return 1u;
}

}  // namespace d_007406cc
GUEST_EXPORT_FRAMED(0x007406cc, d_007406cc::f_007406cc, 0x4010);  // pushes {r4, lr} first, as the original

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
inline constexpr guest::Function<0x007795ec, u32(u32, u32)> call_007795ec;  // (from the original)

u32 f_00740708(gptr<Object_00740708_0> arg0, u32 r1, u32 r2, u32 r3) {
    u32 r0_2 = call_0073ef34(arg0->word_4, r1, r2, r3);
    u32 r0_3 = call_0073ef84(r0_2, r3, guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r0_4 = call_0073eee8(r0_3, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r1_2 = guest::cpu()->r[1];
    if (r0_4 != 0) {
        call_002f8574(r1, r0_4, 0x26u, guest::cpu()->r[3]);  // (from the original)
        call_007795ec(r2, r0_4 + 0x26u);  // (from the original)
        r1_2 = guest::cpu()->r[1];
        r0_4 = 1u;
    }
    guest::cpu()->r[1] = r1_2;
    return r0_4;
}

}  // namespace d_00740708
GUEST_EXPORT_FRAMED(0x00740708, d_00740708::f_00740708, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_00740758: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00740758 {


u32 f_00740758(u32 r0) {
    u32 r0_1 = *gptr<u32>(r0);
    if (r0_1 == 0) {
        return r0_1;
    }
    return *gptr<u32>(*gptr<u32>(r0_1 + 0x68u) + 8u);  // (from the original)
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
    u32 r0_1 = arg0->word_0;
    if (r0_1 == 0) {
        return r0_1;
    }
    return *gptr<u8>(r0_1 + 4u) == 0;
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
    return arg0->word_0 == 0 ? 1u : u32(arg0->byte_50);
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
    u32 r1_1 = arg0->word_10;
    u32 r2_1 = arg0->word_c;
    float S0_1 = std::bit_cast<float>(arg0->word_8);
    if (s32(r1_1) >= s32(r2_1)) {
        guest::cpu()->r[1] = r1_1;
        guest::cpu()->s[0] = S0_1;
        return;
    }
    float S1_1 = std::bit_cast<float>(arg0->word_4);
    float S0_2 = (S0_1 - S1_1) * float(s32(std::bit_cast<u32>(std::bit_cast<float>(r1_1)))) / float(s32(std::bit_cast<u32>(std::bit_cast<float>(r2_1)))) + S1_1;
    guest::cpu()->r[1] = r1_1;
    guest::cpu()->s[0] = S0_2;
    guest::cpu()->s[1] = S1_1;
}

}  // namespace d_007407a0
GUEST_EXPORT(0x007407a0, d_007407a0::f_007407a0);

// f_00740814: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00740814 {


void f_00740814(u32 r0, u32 r1) {
    float S0_1 = std::bit_cast<float>(*gptr<u32>(r0 + (r1 << 2) + 0x38u));  // (from the original)
    guest::cpu()->s[0] = S0_1;
}

}  // namespace d_00740814
GUEST_EXPORT(0x00740814, d_00740814::f_00740814);

// f_00740820: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00740820 {

inline constexpr guest::Function<0x00135748, u32(u32, u32)> call_00135748;  // (from the original)
inline constexpr guest::Function<0x001357ec, u32(u32, u32)> call_001357ec;  // (from the original)
inline constexpr guest::Function<0x004cad5c, u32(u32, u32, u32, u32)> call_004cad5c;  // (from the original)

u32 f_00740820(u32 r0, u32 r1) {
    u32 r4 = r0;
    u32 r0_1 = call_004cad5c(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    call_00135748(r0_1 + 0x1c4u, guest::cpu()->r[1]);  // (from the original)
    r0 = *gptr<u32>(r4 + 8u);
    u32 r1_2 = r4 + 8u;
    u32 r5 = 0u;
    if (r0 != r1_2) {
        do {
            u32 r1_3 = *gptr<u32>(r0 - 0x50u);  // (from the original)
            r0 = *gptr<u32>(r0);
            r5 += r1_3;
            r1_2 = r4 + 8u;
            guest::preempt();
        } while (r0 != r1_2);
    }
    u32 r0_3 = call_004cad5c(r0, r1_2, guest::cpu()->r[2], guest::cpu()->r[3]);
    call_001357ec(r0_3 + 0x1c4u, guest::cpu()->r[1]);  // (from the original)
    return r5;
}

}  // namespace d_00740820
GUEST_EXPORT_FRAMED(0x00740820, d_00740820::f_00740820, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_0074087c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0074087c {

struct __attribute__((packed)) Object_0074087c_0 {
    u8 unknown_0[0x51];  // (not used here)
    u8 byte_51;
    u8 unknown_52[0x32];  // (not used here)
    u32 word_84;
};
GUEST_OFFSET(Object_0074087c_0, byte_51, 0x51);  // (from the original)
GUEST_OFFSET(Object_0074087c_0, word_84, 0x84);  // (from the original)


u32 f_0074087c(gptr<Object_0074087c_0> arg0) {
    u32 r1_1 = arg0->byte_51;
    if (r1_1 != 0) {
        guest::cpu()->r[1] = r1_1;
        return 0u;
    }
    u32 r0_1 = arg0->word_84;
    if (r0_1 != 0) {
        r0_1 = 1u;
    }
    guest::cpu()->r[1] = r1_1;
    return r0_1;
}

}  // namespace d_0074087c
GUEST_EXPORT(0x0074087c, d_0074087c::f_0074087c);

// f_007409c8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_007409c8 {


u32 f_007409c8(u32 r0, u32 r1) {
    return *gptr<s16>(r0 + (r1 << 1) + 0xd0u);  // (from the original)
}

}  // namespace d_007409c8
GUEST_EXPORT(0x007409c8, d_007409c8::f_007409c8);

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
    u32 r0 = arg0.addr();
    u32 r12_1 = arg0->half_0;
    u32 r2 = r0 + arg0->word_4;
    if (r12_1 == 0x6000u) {  // (from the original)
        return *gptr<u32>(r2 + 4u) + r2;
    }
    u32 r3_1 = r12_1 - 0x6001u;  // (from the original)
    if (r3_1 != 0) {
        if (r3_1 != 1u) {
            return 0u;
        }
        u32 r0_2 = *gptr<u8>(r2);
        u32 zf_1 = r0_2 == r1;
        u32 cf_1 = r0_2 >= r1;
        if (!cf_1 || zf_1) {
            u32 r3_2 = *gptr<u8>(r2 + 1u);
            zf_1 = r1 == r3_2;
            cf_1 = r1 >= r3_2;
        }
        if (cf_1 && !zf_1) {
            return 0u;
        }
        return *gptr<u32>(r2 + (r1 - r0_2 << 3) + 8u) + r2;
    }
    u32 r12 = *gptr<u32>(r2);
    r0 = 0u;
    if (r12 < 0u || r12 == 0) {
        return 0u;
    }
    do {
        if (*gptr<u8>(r2 + r0 + 4u) >= r1) {
            return *gptr<u32>((r12 + 3u & ~3u) + (r0 << 3) + 4u + r2 + 4u) + r2;
        }
        r0 += 1u;
        guest::preempt();
    } while (r0 < r12);
    return 0u;
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

struct __attribute__((packed)) Local_00742080_r3_1 {
    u8 unknown_0[0x4];  // (not used here)
    u16 half_4;
    u8 unknown_6[0x2];  // (not used here)
    u32 word_8;
};
GUEST_OFFSET(Local_00742080_r3_1, half_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_00742080_r3_1, word_8, 0x8);  // (from the original)


u32 f_00742080(gptr<Object_00742080_0> arg0, u32 r1) {
    u32 r2_1 = arg0->word_c + arg0.addr();
    gptr<Local_00742080_r3_1> r3_1 = gptr<Local_00742080_r3_1>(r2_1 + (r1 << 3));
    u32 r0_1 = r3_1->half_4;
    if (r0_1 != 0x5900u) {  // (from the original)
        u32 r0_2 = r0_1 - 0x5903u;  // (from the original)
        if (r0_2 == 0) {
            return r0_2;
        }
        return 0u;
    }
    if (*gptr<u32>(r2_1) > r1) {
        return r3_1->word_8 + r2_1;
    }
    return 0u;
}

}  // namespace d_00742080
GUEST_EXPORT(0x00742080, d_00742080::f_00742080);

// f_007420d0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_007420d0 {

inline constexpr guest::Function<0x00141a9c, u32(u32, u32, u32)> call_00141a9c;  // (from the original)

u32 f_007420d0(u32 r0, u32 r1_unused, u32 r2_unused, u32 r3) {
    guest::StackFrame frame(0x4);  // the original's stack frame
    *frame.at<u32>(0) = r3;
    u32 r0_2 = call_00141a9c(r0 + 4u, frame.at(0).addr(), 4u);
    if (r0_2 == 0) {
        return r0_2;
    }
    return *frame.at<u32>(0) >> 8u & 0xffu;  // (from the original)
}

}  // namespace d_007420d0
GUEST_EXPORT_FRAMED(0x007420d0, d_007420d0::f_007420d0, 0x4000);  // pushes {lr} first, as the original

// f_007420fc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_007420fc {

inline constexpr guest::Function<0x00141a9c, u32(u32, u32, u32)> call_00141a9c;  // (from the original)

u32 f_007420fc(u32 r0, u32 r1_unused, u32 r2_unused, u32 r3) {
    guest::StackFrame frame(0x4);  // the original's stack frame
    *frame.at<u32>(0) = r3;
    u32 r0_2 = call_00141a9c(r0 + 4u, frame.at(0).addr(), 9u);
    if (r0_2 == 0) {
        return 0x981874u;  // (from the original)
    }
    u32 r0_3 = *frame.at<u32>(0) + r0;
    return r0_3 + *gptr<u32>(r0_3 + 4u);
}

}  // namespace d_007420fc
GUEST_EXPORT_FRAMED(0x007420fc, d_007420fc::f_007420fc, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_00742138: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00742138 {

inline constexpr guest::Function<0x00141a9c, u32(u32, u32, u32)> call_00141a9c;  // (from the original)

u32 f_00742138(u32 r0, u32 r1_unused, u32 r2_unused, u32 r3) {
    guest::StackFrame frame(0x4);  // the original's stack frame
    *frame.at<u32>(0) = r3;
    u32 r0_2 = call_00141a9c(r0 + 4u, frame.at(0).addr(), 0u);
    u32 r0_3 = r0_2 == 0 ? 0x3cu : *frame.at<u32>(0) & 0xffu;  // (from the original)
    return r0_3;
}

}  // namespace d_00742138
GUEST_EXPORT_FRAMED(0x00742138, d_00742138::f_00742138, 0x4000);  // pushes {lr} first, as the original

// f_00742160: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00742160 {

inline constexpr guest::Function<0x00141a9c, u32(u32, u32, u32)> call_00141a9c;  // (from the original)

u32 f_00742160(u32 r0, u32 r1_unused, u32 r2_unused, u32 r3) {
    guest::StackFrame frame(0x4);  // the original's stack frame
    *frame.at<u32>(0) = r3;
    u32 r0_2 = call_00141a9c(r0 + 4u, frame.at(0).addr(), 4u);
    if (r0_2 == 0) {
        return r0_2;
    }
    u32 r0_3 = *frame.at<u32>(0) & 0xffu;  // (from the original)
    if (r0_3 != 0) {
        r0_3 = 1u;
    }
    return r0_3;
}

}  // namespace d_00742160
GUEST_EXPORT_FRAMED(0x00742160, d_00742160::f_00742160, 0x4000);  // pushes {lr} first, as the original

// f_0074218c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0074218c {

struct __attribute__((packed)) Object_0074218c_0 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
};
GUEST_OFFSET(Object_0074218c_0, word_4, 0x4);  // (from the original)


u32 f_0074218c(gptr<Object_0074218c_0> arg0) {
    u32 r1_1 = arg0->word_4;
    guest::cpu()->r[1] = r1_1;
    return r1_1 == 0x21fu ? arg0.addr() + 8u : 0u;  // (from the original)
}

}  // namespace d_0074218c
GUEST_EXPORT(0x0074218c, d_0074218c::f_0074218c);

// f_007421a4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_007421a4 {

inline constexpr guest::Function<0x00141a9c, u32(u32, u32, u32)> call_00141a9c;  // (from the original)

u32 f_007421a4(u32 r0, u32 r1_unused, u32 r2_unused, u32 r3) {
    guest::StackFrame frame(0x4);  // the original's stack frame
    *frame.at<u32>(0) = r3;
    u32 r0_2 = call_00141a9c(r0 + 4u, frame.at(0).addr(), 4u);
    if (r0_2 == 0) {
        return r0_2;
    }
    return *frame.at<u32>(0) >> 0x10u & 0xffu;  // (from the original)
}

}  // namespace d_007421a4
GUEST_EXPORT_FRAMED(0x007421a4, d_007421a4::f_007421a4, 0x4000);  // pushes {lr} first, as the original

// f_007421d0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_007421d0 {

inline constexpr guest::Function<0x00141a9c, u32(u32, u32, u32)> call_00141a9c;  // (from the original)

u32 f_007421d0(u32 r0, u32 r1_unused, u32 r2_unused, u32 r3) {
    guest::StackFrame frame(0x4);  // the original's stack frame
    *frame.at<u32>(0) = r3;
    u32 r0_2 = call_00141a9c(r0 + 4u, frame.at(0).addr(), 2u);
    u32 r0_3 = r0_2 == 0 ? 0x40u : *frame.at<u32>(0) & 0xffu;  // (from the original)
    return r0_3;
}

}  // namespace d_007421d0
GUEST_EXPORT_FRAMED(0x007421d0, d_007421d0::f_007421d0, 0x4000);  // pushes {lr} first, as the original

// f_007421f8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_007421f8 {

struct __attribute__((packed)) Object_007421f8_0 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
};
GUEST_OFFSET(Object_007421f8_0, word_4, 0x4);  // (from the original)

inline guest::global<u32, 0x00742268> global_00742268;  // (from the original)

void f_007421f8(gptr<Object_007421f8_0> arg0) {
    u32 r0 = arg0.addr();
    u32 res_1 = 0;
    u32 r6 = r0 + 4u;
    u32 r12 = 0u;
    u32 r4 = arg0->word_4;
    u32 r2 = 3u;
    r0 = r12;
    u32 r1 = r12;
    u32 r3 = 4u;
    u32 r5 = 1u;
    do {
        if ((r4 & lsl_r(r5, r1 & 0xff)) != 0) {  // (from the original)
            r0 += 1u;
            if (r1 == r2) {
                r12 = 1u;
            }
        }
        res_1 = r3 - 1u;
        r3 = res_1;
        r1 += 1u;
        guest::preempt();
    } while (res_1 != 0);
    if (r12 != 0 && r0 != 0) {
        float S0_1 = std::bit_cast<float>(*gptr<u32>(r6 + (r0 << 2)));
        guest::cpu()->r[1] = r1;
        guest::cpu()->s[0] = S0_1;
        return;
    }
    float S0_2 = std::bit_cast<float>(*global_00742268);
    guest::cpu()->r[1] = r1;
    guest::cpu()->s[0] = S0_2;
}

}  // namespace d_007421f8
GUEST_EXPORT_FRAMED(0x007421f8, d_007421f8::f_007421f8, 0xf0);  // pushes {r4, r5, r6, r7} first, as the original

// f_0074226c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0074226c {

inline constexpr guest::Function<0x00141a9c, u32(u32, u32, u32)> call_00141a9c;  // (from the original)

u32 f_0074226c(u32 r0, u32 r1_unused, u32 r2_unused, u32 r3) {
    guest::StackFrame frame(0x4);  // the original's stack frame
    *frame.at<u32>(0) = r3;
    u32 r0_2 = call_00141a9c(r0 + 4u, frame.at(0).addr(), 1u);
    u32 r0_3 = r0_2 == 0 ? 0x7fu : *frame.at<u32>(0) & 0xffu;  // (from the original)
    return r0_3;
}

}  // namespace d_0074226c
GUEST_EXPORT_FRAMED(0x0074226c, d_0074226c::f_0074226c, 0x4000);  // pushes {lr} first, as the original

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
    u32 r0 = arg0.addr();
    u32 r12_1 = arg0->half_0;
    u32 r2 = r0 + arg0->word_4;
    if (r12_1 == 0x6000u) {  // (from the original)
        return *gptr<u32>(r2 + 4u) + r2;
    }
    u32 r3_1 = r12_1 - 0x6001u;  // (from the original)
    if (r3_1 != 0) {
        if (r3_1 != 1u) {
            return 0u;
        }
        u32 r0_2 = *gptr<u8>(r2);
        u32 zf_1 = r0_2 == r1;
        u32 cf_1 = r0_2 >= r1;
        if (!cf_1 || zf_1) {
            u32 r3_2 = *gptr<u8>(r2 + 1u);
            zf_1 = r1 == r3_2;
            cf_1 = r1 >= r3_2;
        }
        if (cf_1 && !zf_1) {
            guest::cpu()->r[1] = r1;
            return 0u;
        }
        guest::cpu()->r[1] = r1;
        return *gptr<u32>(r2 + (r1 - r0_2 << 3) + 8u) + r2;
    }
    u32 r12 = *gptr<u32>(r2);
    r0 = 0u;
    if (r12 < 0u || r12 == 0) {
        guest::cpu()->r[1] = r1;
        return 0u;
    }
    do {
        if (*gptr<u8>(r2 + r0 + 4u) >= r1) {
            u32 r1_1 = r12 + 3u & ~3u;
            guest::cpu()->r[1] = r1_1;
            return *gptr<u32>(r1_1 + (r0 << 3) + 4u + r2 + 4u) + r2;
        }
        r0 += 1u;
        guest::preempt();
    } while (r0 < r12);
    guest::cpu()->r[1] = r1;
    return 0u;
}

}  // namespace d_00742294
GUEST_EXPORT(0x00742294, d_00742294::f_00742294);

// f_00742414: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00742414 {

struct __attribute__((packed)) Object_00742414_0 {
    u8 unknown_0[0x10];  // (not used here)
    u16 half_10;
};
GUEST_OFFSET(Object_00742414_0, half_10, 0x10);  // (from the original)


u32 f_00742414(gptr<Object_00742414_0> arg0) {
    u32 r0 = arg0.addr();
    u32 res_1 = 0;
    u32 zf_1 = 0;
    u32 r1_1 = 0;
    u32 r3 = arg0->half_10;
    u32 r12 = 0x7001u;  // (from the original)
    u32 r5 = 0u;
    u32 r2 = r0 + 0x14u;  // (from the original)
    u32 r1 = r5;
    if (s32(r3) <= 0) {
        return r5;
    }
L_742434:;
    if (*gptr<u16>(r2 + (r1 + (r1 << 1) << 2)) != r12) {
        goto L_742468;
    }
    res_1 = r2 + (r1 + (r1 << 1) << 2);
    zf_1 = res_1 == 0;
    r1_1 = res_1;
    if (!zf_1) {
        r1_1 = *gptr<u32>(r1_1 + 4u);
        zf_1 = r1_1 == 0;
    }
    if (!zf_1) {
        r5 = r1_1 + r0;
    }
    return r5;
L_742468:;
    r1 += 1u;
    if (s32(r3) > s32(r1)) {
        guest::preempt();
        goto L_742434;
    }
    return r5;
}

}  // namespace d_00742414
GUEST_EXPORT_FRAMED(0x00742414, d_00742414::f_00742414, 0x30);  // pushes {r4, r5} first, as the original

// f_0074247c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0074247c {

struct __attribute__((packed)) Object_0074247c_0 {
    u8 unknown_0[0x10];  // (not used here)
    u16 half_10;
};
GUEST_OFFSET(Object_0074247c_0, half_10, 0x10);  // (from the original)


u32 f_0074247c(gptr<Object_0074247c_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r0_1 = 0;
    u32 r12 = arg0->half_10;
    u32 r3 = r0 + 0x14u;  // (from the original)
    u32 r5 = r0;
    r0 = 0u;
    u32 r2 = 0x7000u;  // (from the original)
    u32 r1 = r0;
    if (s32(r12) <= 0) {
        return r0;
    }
    do {
        if (*gptr<u16>(r3 + (r1 + (r1 << 1) << 2)) == r2) {
            u32 res_1 = r3 + (r1 + (r1 << 1) << 2);
            u32 zf_1 = res_1 == 0;
            u32 r1_1 = res_1;
            if (!zf_1) {
                r1_1 = *gptr<u32>(r1_1 + 4u);
                zf_1 = r1_1 == 0;
            }
            if (zf_1) {
                return r0;
            } else {
                r0_1 = r1_1 + r5;
            }
            return r0_1;
        }
        r1 += 1u;
        guest::preempt();
    } while (s32(r12) > s32(r1));
    return r0;
}

}  // namespace d_0074247c
GUEST_EXPORT_FRAMED(0x0074247c, d_0074247c::f_0074247c, 0x30);  // pushes {r4, r5} first, as the original

// f_007424f4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_007424f4 {

struct __attribute__((packed)) Object_007424f4_0 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
};
GUEST_OFFSET(Object_007424f4_0, word_4, 0x4);  // (from the original)


u32 f_007424f4(gptr<Object_007424f4_0> arg0, u32 r1) {
    return arg0->word_4 + r1;
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
    u32 r0_1 = arg0.addr() + 0x14u;  // (from the original)
    if (arg0->word_14 <= r1) {
        guest::cpu()->r[1] = r1;
        return 0u;
    }
    u32 r1_1 = *gptr<u32>(r0_1 + (r1 << 3) + 8u);
    guest::cpu()->r[1] = r1_1;
    return r0_1 + r1_1;
}

}  // namespace d_00742500
GUEST_EXPORT(0x00742500, d_00742500::f_00742500);

// f_00742640: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00742640 {

struct __attribute__((packed)) Object_00742640_1 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Object_00742640_1, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_00742640_1, word_8, 0x8);  // (from the original)

struct __attribute__((packed)) Object_00742640_2 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Object_00742640_2, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_00742640_2, word_8, 0x8);  // (from the original)

struct __attribute__((packed)) Local_00742640_r12 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_00742640_r12, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_00742640_r12, word_8, 0x8);  // (from the original)


u32 f_00742640(u32 r0_unused, gptr<Object_00742640_1> arg1, gptr<Object_00742640_2> arg2, u32 r3) {
    u32 r1 = arg1.addr();
    u32 r2 = arg2.addr();
    u32 res_1 = 0;
    u32 r4 = 1u;
    u32 r6 = *gptr<u32>(guest::cpu()->r[13] + 0x14u);  // (from the original)
    u32 r0 = arg1->word_4;
    u32 r5 = arg2->word_4;
    if (s32(r3) > 0) {
        r2 = (r2 + 8u) - 4u;
        gptr<Local_00742640_r12> r12 = gptr<Local_00742640_r12>((r1 + 8u) - 4u);
        if ((r3 & 1u) != 0) {
            if ((r5 & ~r0 & 1u) != 0) {
                r0 |= 1u;
                arg1->word_8 = arg2->word_8;
            }
            r4 = 2u;
            r2 += 4u;
            r12 = gptr<Local_00742640_r12>(r12.addr() + 4u);
        }
        r3 = s32(r3) >> 1;
        if (r3 != 0) {
            do {
                if ((r5 & ~r0 & r4) != 0) {
                    r0 |= r4;
                    r12->word_4 = *gptr<u32>(r2 + 4u);
                }
                u32 r4_1 = r4 << 1;
                if ((r5 & ~r0 & r4_1) != 0) {
                    r0 |= r4_1;
                    r12->word_8 = *gptr<u32>(r2 + 8u);
                }
                res_1 = r3 - 1u;
                r3 = res_1;
                r4 = r4_1 << 1;
                r2 += 8u;
                r12 = gptr<Local_00742640_r12>(r12.addr() + 8u);
                guest::preempt();
            } while (res_1 != 0);
        }
    }
    arg1->word_4 = r0;
    return (r6 & ~r0) == 0;
}

}  // namespace d_00742640
GUEST_EXPORT_FRAMED(0x00742640, d_00742640::f_00742640, 0x1f0);  // pushes {r4, r5, r6, r7, r8} first, as the original

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

struct __attribute__((packed)) Local_00743f28_r1_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
};
GUEST_OFFSET(Local_00743f28_r1_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_00743f28_r1_1, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_00743f28_r1_1, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Local_00743f28_r1_1, word_c, 0xc);  // (from the original)

inline guest::global<u32, 0x00743fb0> global_00743fb0;  // (from the original)

u32 f_00743f28(gptr<Object_00743f28_0> arg0, u32 r1, gptr<Object_00743f28_2> arg2, float S0, float S1) {
    float S0_1 = 0;
    float S1_1 = 0;
    float S2_1 = 0;
    float S3_1 = 0;
    gptr<Local_00743f28_r1_1> r1_1 = gptr<Local_00743f28_r1_1>(0u);
    u32 r0_1 = *gptr<u32>(arg0->word_0 + 0x14u);  // (from the original)
    if (r0_1 == 0) {
        S0_1 = std::bit_cast<float>(arg2->word_0);
        S1_1 = std::bit_cast<float>(arg2->word_4);
        S2_1 = std::bit_cast<float>(arg2->word_8);
        S3_1 = std::bit_cast<float>(arg2->word_c);
        r1_1 = gptr<Local_00743f28_r1_1>(r1 + 0xb8u);  // (from the original)
    } else if (r0_1 == 1u) {
        S0_1 = std::bit_cast<float>(arg2->word_0);
        S1_1 = std::bit_cast<float>(arg2->word_4);
        S2_1 = std::bit_cast<float>(arg2->word_8);
        S3_1 = std::bit_cast<float>(arg2->word_c);
        r1_1 = gptr<Local_00743f28_r1_1>(r1 + 0xc8u);  // (from the original)
    } else {
        if (r0_1 == 2u) {
            float S2_2 = std::bit_cast<float>(arg2->word_0);
            float S1_2 = std::bit_cast<float>(arg2->word_4);
            float S0_2 = std::bit_cast<float>(arg2->word_8);
            float S3_2 = std::bit_cast<float>(*global_00743fb0) / sqrtf(S2_2 * S2_2 + S1_2 * S1_2 + S0_2 * S0_2);
            float S1_3 = S1_2 * S3_2;
            float S0_3 = S0_2 * S3_2;
            *gptr<u32>(r1 + 0xd8u) = std::bit_cast<u32>(S2_2 * S3_2);  // (from the original)
            *gptr<u32>(r1 + 0xdcu) = std::bit_cast<u32>(S1_3);  // (from the original)
            *gptr<u32>(r1 + 0xe0u) = std::bit_cast<u32>(S0_3);  // (from the original)
            guest::cpu()->r[1] = r1;
            guest::cpu()->s[0] = S0_3;
            guest::cpu()->s[1] = S1_3;
            return r0_1;
        }
        if (r0_1 == 3u) {
            r0_1 = arg2->word_0;
            *gptr<u32>(r1 + 0xe4u) = r0_1;  // (from the original)
        }
        guest::cpu()->r[1] = r1;
        guest::cpu()->s[0] = S0;
        guest::cpu()->s[1] = S1;
        return r0_1;
    }
    r1_1->word_0 = std::bit_cast<u32>(S0_1);
    r1_1->word_4 = std::bit_cast<u32>(S1_1);
    r1_1->word_8 = std::bit_cast<u32>(S2_1);
    r1_1->word_c = std::bit_cast<u32>(S3_1);
    guest::cpu()->r[1] = r1_1.addr();
    guest::cpu()->s[0] = S0_1;
    guest::cpu()->s[1] = S1_1;
    return r0_1;
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
    u32 fpsr = guest::cpu()->fpscr;
    u32 r0_1 = *gptr<u32>(arg0->word_0 + 0x14u);  // (from the original)
    if (r0_1 != 0) {
        if (r0_1 == 1u) {
            float S0_1 = std::bit_cast<float>(arg2->word_0);
            float S1_1 = std::bit_cast<float>(arg1->word_18);
            if (u32(S1_1 == S0_1)) {
                arg1->byte_24 = 1;
                guest::cpu()->s[0] = S0_1;
                guest::cpu()->s[1] = S1_1;
                return 1u;
            }
            arg1->word_18 = std::bit_cast<u32>(S0_1);
            arg1->byte_24 = 1;
            arg1->byte_24 = 1;
            guest::cpu()->s[0] = S0_1;
            guest::cpu()->s[1] = S1_1;
            return 1u;
        }
        if (r0_1 != 2u) {
            arg1->byte_24 = 1;
            guest::cpu()->s[0] = S0;
            guest::cpu()->s[1] = S1;
            return 1u;
        }
    } else {
        float S0_2 = std::bit_cast<float>(arg2->word_0);
        if ((fpsr & 0xfffffffu | vfp_cmpf(std::bit_cast<float>(arg1->word_10), S0_2)) >> 0x1e & 1) {  // (from the original)
            float S1_2 = std::bit_cast<float>(arg1->word_14);
            if (u32(S1_2 == std::bit_cast<float>(arg2->word_4))) {
                arg1->byte_24 = 1;
                guest::cpu()->s[0] = S0_2;
                guest::cpu()->s[1] = S1_2;
                return 1u;
            }
        }
        float S1_3 = std::bit_cast<float>(arg2->word_4);
        arg1->word_10 = std::bit_cast<u32>(S0_2);
        arg1->word_14 = std::bit_cast<u32>(S1_3);
        arg1->byte_24 = 1;
        arg1->byte_24 = 1;
        guest::cpu()->s[0] = S0_2;
        guest::cpu()->s[1] = S1_3;
        return 1u;
    }
    float S0_3 = std::bit_cast<float>(arg2->word_0);
    if ((fpsr & 0xfffffffu | vfp_cmpf(std::bit_cast<float>(arg1->word_1c), S0_3)) >> 0x1e & 1) {  // (from the original)
        float S1_4 = std::bit_cast<float>(arg1->word_20);
        if (u32(S1_4 == std::bit_cast<float>(arg2->word_4))) {
            arg1->byte_24 = 1;
            guest::cpu()->s[0] = S0_3;
            guest::cpu()->s[1] = S1_4;
            return 1u;
        }
    }
    float S1_5 = std::bit_cast<float>(arg2->word_4);
    arg1->word_1c = std::bit_cast<u32>(S0_3);
    arg1->word_20 = std::bit_cast<u32>(S1_5);
    arg1->byte_24 = 1;
    arg1->byte_24 = 1;
    guest::cpu()->s[0] = S0_3;
    guest::cpu()->s[1] = S1_5;
    return 1u;
}

}  // namespace d_007440a4
GUEST_EXPORT(0x007440a4, d_007440a4::f_007440a4);

// f_0074420c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0074420c {


u32 f_0074420c(gptr<nw__lyt__Drawer> arg0, u32 r1) {
    u32 zf_1 = r1 == 0x10u;  // (from the original)
    u32 cf_1 = r1 >= 0x10u;  // (from the original)
    if (r1 > 0x10u) {  // (from the original)
        r1 = (r1 << 1) - 0x20u;  // (from the original)
    }
    if (!cf_1 || zf_1) {
        r1 = 0u;
    }
    return (arg0->word_680 + r1 & 0xfffu) >= 0xfe0u ? 0x20u : 0u;  // (from the original)
}

}  // namespace d_0074420c
GUEST_EXPORT(0x0074420c, d_0074420c::f_0074420c);

// f_00744310: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00744310 {

struct __attribute__((packed)) Local_00744310_r4_2 {
    u16 half_0;
    u16 half_2;
};
GUEST_OFFSET(Local_00744310_r4_2, half_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_00744310_r4_2, half_2, 0x2);  // (from the original)


u32 f_00744310(gptr<nw__font__ResFontBase> arg0, u32 r1) {
    u32 r0 = arg0.addr();
    u32 r12 = r0;
    if (arg0->half_14 == r1) {
        return arg0->half_16;
    }
    arg0->half_14 = u16(r1);
    r0 = 0xffffu;  // (from the original)
    u32 r2 = *gptr<u32>(arg0->word_8 + 0x10u);  // (from the original)
    if (r2 != 0) {
        do {
            u32 r3_1 = *gptr<u16>(r2);
            u32 zf_1 = r3_1 == r1;
            u32 cf_1 = r3_1 >= r1;
            if (!cf_1 || zf_1) {
                u32 r3_2 = *gptr<u16>(r2 + 2u);
                zf_1 = r1 == r3_2;
                cf_1 = r1 >= r3_2;
            }
            if (!cf_1 || !!zf_1) {
                u32 r3_3 = *gptr<u16>(r2 + 4u);
                if (r3_3 != 0) {
                    if (r3_3 == 1u) {
                        r0 = *gptr<u16>(r2 + (r1 - u32(*gptr<u16>(r2)) << 1) + 0xcu);  // (from the original)
                        *gptr<u16>(r12 + 0x16u) = u16(r0);  // (from the original)
                        return r0;
                    }
                    if (r3_3 != 2u) {
                        *gptr<u16>(r12 + 0x16u) = u16(r0);  // (from the original)
                        return r0;
                    }
                } else {
                    r0 = uxth(u32(*gptr<u16>(r2 + 0xcu)) + (r1 - u32(*gptr<u16>(r2))));  // (from the original)
                    *gptr<u16>(r12 + 0x16u) = u16(r0);  // (from the original)
                    return r0;
                }
                u32 ea_1 = r2 + 0xcu;  // (from the original)
                u32 r3 = ea_1 + 2u;
                r2 = ea_1 + (u32(*gptr<u16>(ea_1)) << 2) - 2u;
                if (r3 > r2) {
                    *gptr<u16>(r12 + 0x16u) = u16(r0);  // (from the original)
                    return r0;
                }
                do {
                    u32 r4_1 = s32(r2 - r3) >> 2;
                    gptr<Local_00744310_r4_2> r4_2 = gptr<Local_00744310_r4_2>(r3 + (u32(s32(r4_1 + (r4_1 >> 0x1f)) >> 1) << 2));  // (from the original)
                    u32 r5_1 = r4_2->half_0;
                    if (r5_1 > r1) {
                        r2 = r4_2.addr() - 4u;
                    }
                    if (r5_1 < r1) {
                        r3 = r4_2.addr() + 4u;
                    }
                    if (r5_1 == r1) {
                        r0 = r4_2->half_2;
                        *gptr<u16>(r12 + 0x16u) = u16(r0);  // (from the original)
                        return r0;
                    }
                    guest::preempt();
                } while (r3 <= r2);
                *gptr<u16>(r12 + 0x16u) = u16(r0);  // (from the original)
                return r0;
            }
            r2 = *gptr<u32>(r2 + 8u);
            guest::preempt();
        } while (r2 != 0);
    }
    *gptr<u16>(r12 + 0x16u) = u16(r0);  // (from the original)
    return r0;
}

}  // namespace d_00744310
GUEST_EXPORT_FRAMED(0x00744310, d_00744310::f_00744310, 0x30);  // pushes {r4, r5} first, as the original

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

struct __attribute__((packed)) Local_00744be4_r1_1 {
    u8 unknown_0[0x90];  // (not used here)
    u32 word_90;
    u32 word_94;
    u32 word_98;
    u32 word_9c;
};
GUEST_OFFSET(Local_00744be4_r1_1, word_90, 0x90);  // (from the original)
GUEST_OFFSET(Local_00744be4_r1_1, word_94, 0x94);  // (from the original)
GUEST_OFFSET(Local_00744be4_r1_1, word_98, 0x98);  // (from the original)
GUEST_OFFSET(Local_00744be4_r1_1, word_9c, 0x9c);  // (from the original)

inline guest::global<u32, 0x00744ce0> global_00744ce0;  // (from the original)

u32 f_00744be4(gptr<Object_00744be4_0> arg0, gptr<Object_00744be4_1> arg1, float S0_unused, float S1) {
    u32 r0 = arg0.addr();
    u32 r1 = arg1.addr();
    u32 r2 = 0;
    u32 fpsr = guest::cpu()->fpscr;
    float S9 = 0;
    gptr<Local_00744be4_r1_1> r1_1 = gptr<Local_00744be4_r1_1>(0u);
    float S1_2 = 0;
    float S0_8 = 0;
    float S0_1 = std::bit_cast<float>(arg0->word_84);
    float S3 = std::bit_cast<float>(arg1->word_0);
    u32 fpsr_1 = fpsr & 0xfffffffu | vfp_cmpf(S3, S0_1);  // (from the original)
    if (!(fpsr_1 >> 0x1e & 1) && fpsr_1 >> 0x1f == (fpsr_1 >> 0x1c & 1)) {  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->s[0] = S0_1;
        return 0u;
    }
    float S0_2 = std::bit_cast<float>(arg0->word_78);
    float S4 = std::bit_cast<float>(arg1->word_c);
    u32 fpsr_2 = fpsr_1 & 0xfffffffu | vfp_cmpf(S0_2, S4);  // (from the original)
    if (!(fpsr_2 >> 0x1e & 1) && fpsr_2 >> 0x1f == (fpsr_2 >> 0x1c & 1)) {  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->s[0] = S0_2;
        return 0u;
    }
    float S0_3 = std::bit_cast<float>(arg0->word_88);
    float S5 = std::bit_cast<float>(arg1->word_4);
    u32 fpsr_3 = fpsr_2 & 0xfffffffu | vfp_cmpf(S5, S0_3);  // (from the original)
    if (!(fpsr_3 >> 0x1e & 1) && fpsr_3 >> 0x1f == (fpsr_3 >> 0x1c & 1)) {  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->s[0] = S0_3;
        return 0u;
    }
    float S0_4 = std::bit_cast<float>(arg0->word_7c);
    float S6 = std::bit_cast<float>(arg1->word_10);
    u32 fpsr_4 = fpsr_3 & 0xfffffffu | vfp_cmpf(S0_4, S6);  // (from the original)
    if (!(fpsr_4 >> 0x1e & 1) && fpsr_4 >> 0x1f == (fpsr_4 >> 0x1c & 1)) {  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->s[0] = S0_4;
        return 0u;
    }
    float S0_5 = std::bit_cast<float>(arg0->word_8c);
    float S7 = std::bit_cast<float>(arg1->word_8);
    u32 fpsr_5 = fpsr_4 & 0xfffffffu | vfp_cmpf(S7, S0_5);  // (from the original)
    if (!(fpsr_5 >> 0x1e & 1) && fpsr_5 >> 0x1f == (fpsr_5 >> 0x1c & 1)) {  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->s[0] = S0_5;
        return 0u;
    }
    float S0_6 = std::bit_cast<float>(arg0->word_80);
    float S8 = std::bit_cast<float>(arg1->word_14);
    fpsr = fpsr_5 & 0xfffffffu | vfp_cmpf(S0_6, S8);  // (from the original)
    if (fpsr >> 0x1e & 1 || fpsr >> 0x1f != (fpsr >> 0x1c & 1)) {  // (from the original)
        S9 = std::bit_cast<float>(*global_00744ce0);
        r2 = 0u;
    } else {
        guest::cpu()->r[1] = r1;
        guest::cpu()->s[0] = S0_6;
        return 0u;
    }
    do {
        r1_1 = gptr<Local_00744be4_r1_1>(r0 + (r2 << 4));
        float S10_1 = std::bit_cast<float>(r1_1->word_90);
        u32 fpsr_6 = fpsr & 0xfffffffu | vfp_cmpf(S10_1, S9);  // (from the original)
        float S11_1 = std::bit_cast<float>(r1_1->word_94);
        float S0_7 = fpsr_6 >> 0x1f == (fpsr_6 >> 0x1c & 1) ? S3 : S4;  // (from the original)
        u32 fpsr_7 = fpsr_6 & 0xfffffffu | vfp_cmpf(S11_1, S9);  // (from the original)
        float S12_1 = std::bit_cast<float>(r1_1->word_98);
        float S1_1 = fpsr_7 >> 0x1f == (fpsr_7 >> 0x1c & 1) ? S5 : S6;  // (from the original)
        u32 fpsr_8 = fpsr_7 & 0xfffffffu | vfp_cmpf(S12_1, S9);  // (from the original)
        S1_2 = S11_1 * S1_1 + S12_1 * (fpsr_8 >> 0x1f == (fpsr_8 >> 0x1c & 1) ? S7 : S8);  // (from the original)
        S0_8 = S1_2 + (std::bit_cast<float>(r1_1->word_9c) + S10_1 * S0_7);
        fpsr = fpsr_8 & 0xfffffffu | vfp_cmpf(S9, S0_8);  // (from the original)
        if (!(fpsr >> 0x1d & 1)) {  // (from the original)
            guest::cpu()->r[1] = r1_1.addr();
            guest::cpu()->s[0] = S0_8;
            guest::cpu()->s[1] = S1_2;
            return 0u;
        }
        r2 += 1u;
        guest::preempt();
    } while (s32(r2) < 6);
    guest::cpu()->r[1] = r1_1.addr();
    guest::cpu()->s[0] = S0_8;
    guest::cpu()->s[1] = S1_2;
    return 1u;
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
    u32 fpsr = guest::cpu()->fpscr;
    float S4_1 = std::bit_cast<float>(arg1->word_0);
    float S1_1 = std::bit_cast<float>(arg1->word_c);
    u32 r1_1 = arg1.addr() + 4u;
    float S2_1 = std::bit_cast<float>(arg1->word_4);
    float S3_1 = std::bit_cast<float>(arg1->word_8);
    float S0_1 = std::bit_cast<float>(arg0->word_24) * S2_1 + std::bit_cast<float>(arg0->word_28) * S3_1 + (std::bit_cast<float>(arg0->word_2c) + std::bit_cast<float>(arg0->word_20) * S4_1);
    u32 fpsr_1 = fpsr & 0xfffffffu | vfp_cmpf(S0_1 - S1_1, std::bit_cast<float>(arg0->word_70));  // (from the original)
    if (!(fpsr_1 >> 0x1e & 1) && fpsr_1 >> 0x1f == (fpsr_1 >> 0x1c & 1)) {  // (from the original)
        guest::cpu()->r[1] = r1_1;
        guest::cpu()->s[0] = S0_1;
        guest::cpu()->s[1] = S1_1;
        return 0u;
    }
    u32 fpsr_2 = fpsr_1 & 0xfffffffu | vfp_cmpf(S0_1 + S1_1, std::bit_cast<float>(arg0->word_74));  // (from the original)
    if (!(fpsr_2 >> 0x1d & 1)) {  // (from the original)
        guest::cpu()->r[1] = r1_1;
        guest::cpu()->s[0] = S0_1;
        guest::cpu()->s[1] = S1_1;
        return 0u;
    }
    float S5_1 = std::bit_cast<float>(arg0->word_4) * S2_1 + std::bit_cast<float>(arg0->word_8) * S3_1 + (std::bit_cast<float>(arg0->word_c) + std::bit_cast<float>(arg0->word_0) * S4_1);
    u32 fpsr_3 = fpsr_2 & 0xfffffffu | vfp_cmpf(S1_1, S5_1 * std::bit_cast<float>(arg0->word_30) + S0_1 * std::bit_cast<float>(arg0->word_38));  // (from the original)
    if (!(fpsr_3 >> 0x1d & 1)) {  // (from the original)
        guest::cpu()->r[1] = r1_1;
        guest::cpu()->s[0] = S0_1;
        guest::cpu()->s[1] = S1_1;
        return 0u;
    }
    u32 fpsr_4 = fpsr_3 & 0xfffffffu | vfp_cmpf(S1_1, S5_1 * std::bit_cast<float>(arg0->word_40) + S0_1 * std::bit_cast<float>(arg0->word_48));  // (from the original)
    if (!(fpsr_4 >> 0x1d & 1)) {  // (from the original)
        guest::cpu()->r[1] = r1_1;
        guest::cpu()->s[0] = S0_1;
        guest::cpu()->s[1] = S1_1;
        return 0u;
    }
    u32 r1_2 = arg0.addr() + 0x54u;  // (from the original)
    float S2_2 = std::bit_cast<float>(arg0->word_14) * S2_1 + std::bit_cast<float>(arg0->word_18) * S3_1 + (std::bit_cast<float>(arg0->word_1c) + std::bit_cast<float>(arg0->word_10) * S4_1);
    u32 fpsr_5 = fpsr_4 & 0xfffffffu | vfp_cmpf(S1_1, S2_2 * std::bit_cast<float>(arg0->word_54) + S0_1 * std::bit_cast<float>(arg0->word_58));  // (from the original)
    if (!(fpsr_5 >> 0x1d & 1)) {  // (from the original)
        guest::cpu()->r[1] = r1_2;
        guest::cpu()->s[0] = S0_1;
        guest::cpu()->s[1] = S1_1;
        return 0u;
    }
    u32 fpsr_6 = fpsr_5 & 0xfffffffu | vfp_cmpf(S2_2 * std::bit_cast<float>(arg0->word_64) + S0_1 * std::bit_cast<float>(arg0->word_68), S1_1);  // (from the original)
    if (fpsr_6 >> 0x1e & 1 || fpsr_6 >> 0x1f != (fpsr_6 >> 0x1c & 1)) {  // (from the original)
        guest::cpu()->r[1] = r1_2;
        guest::cpu()->s[0] = S0_1;
        guest::cpu()->s[1] = S1_1;
        return 1u;
    }
    guest::cpu()->r[1] = r1_2;
    guest::cpu()->s[0] = S0_1;
    guest::cpu()->s[1] = S1_1;
    return 0u;
}

}  // namespace d_00744ce4
GUEST_EXPORT(0x00744ce4, d_00744ce4::f_00744ce4);

// f_007453a4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_007453a4 {

inline constexpr guest::Function<0x00744df8, u32(u32, u32, u32, u32)> call_00744df8;  // (from the original)
inline constexpr guest::Function<0x00744f60, u32(u32, u32, u32, u32)> call_00744f60;  // (from the original)
inline constexpr guest::Function<0x007450c4, u32(u32, u32, u32, u32)> call_007450c4;  // (from the original)

u32 f_007453a4(u32 r0, u32 r1) {
    u32 r0_1 = call_00744df8(r0, r1, r0, r1);
    u32 r2_1 = guest::cpu()->r[2];
    u32 r3_1 = guest::cpu()->r[3];
    if (r0_1 == 0) {
        return 0u;
    }
    u32 r0_2 = call_00744f60(r2_1, r3_1, r2_1, r3_1);
    u32 r2_2 = guest::cpu()->r[2];
    u32 r3_2 = guest::cpu()->r[3];
    if (r0_2 == 0) {
        return 0u;
    }
    u32 r0_3 = call_007450c4(r2_2, r3_2, r2_2, r3_2);
    if (r0_3 == 0) {
        return 1u;
    }
    return 0u;
}

}  // namespace d_007453a4
GUEST_EXPORT_FRAMED(0x007453a4, d_007453a4::f_007453a4, 0x4000);  // pushes {lr} first, as the original

// f_007453f0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_007453f0 {

inline constexpr guest::Function<0x007452e8, u32(u32, u32, u32, u32)> call_007452e8;  // (from the original)

u32 f_007453f0(u32 r0) {
    u32 r0_1 = call_007452e8(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    if (r0_1 != 0) {
        r0_1 = 1u;
    }
    return r0_1;
}

}  // namespace d_007453f0
GUEST_EXPORT_FRAMED(0x007453f0, d_007453f0::f_007453f0, 0x4000);  // pushes {lr} first, as the original

// f_00745404: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00745404 {

inline constexpr guest::Function<0x007450c4, u32(u32, u32, u32, u32)> call_007450c4;  // (from the original)

u32 f_00745404(u32 r0, u32 r1) {
    u32 r1_1 = 0;
    u32 r4 = r0;
    u32 r3 = r1;
    u32 r2 = 1u;
    do {
        u32 r0_1 = call_007450c4(r4, r2, r2, r3);
        r1_1 = guest::cpu()->r[1];
        u32 r2_1 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        if (r0_1 == r3) {
            return 1u;
        }
        r2 = r2_1 + 1u;
        guest::preempt();
    } while (r2 <= 0xdu);  // (from the original)
    guest::cpu()->r[1] = r1_1;
    return 0u;
}

}  // namespace d_00745404
GUEST_EXPORT_FRAMED(0x00745404, d_00745404::f_00745404, 0x4010);  // pushes {r4, lr} first, as the original

// f_00745448: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00745448 {

inline constexpr guest::Function<0x002f74c8, u32(u32, u32, u32, u32)> call_002f74c8;  // (from the original)
inline constexpr guest::Function<0x005b42fc, u32(u32, u32, u32, u32)> call_005b42fc;  // (from the original)

u32 f_00745448(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r6 = r0;
    u32 r5 = 0x9c7a14u;  // (from the original)
    u32 r4 = r1;
    u32 r0_1 = call_002f74c8(r0, r1, r2, r3);
    u32 r0_2 = call_005b42fc(r0_1, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = r0_2;
    if (r0_2 == 0) {
        guest::cpu()->r[1] = r1;
        return 0u;
    }
    r2 = r1 & 1u;
    r0 = 0u;
    if (r2 >= 0u && r2 != 0) {
        do {
            if (*gptr<u32>(r5 + (r0 << 2)) == r4) {
                goto L_7454bc;
            }
            r0 += 1u;
            guest::preempt();
        } while (r2 > r0);
    }
    r0 = r2;
    if (r1 <= r0) {
        guest::cpu()->r[1] = r1;
        return 0u;
    }
L_74549c:;
    if (*gptr<u32>(r5 + (r0 << 2)) != r4) {
        if (*gptr<u32>(r5 + (r0 << 2) + 4u) != r4) {
            goto L_7454ec;
        }
        r0 += 1u;
    }
L_7454bc:;
    if (r0 + 1u != 0) {
        r1 = *gptr<u32>(r6);
        if (r1 == r0) {
            guest::cpu()->r[1] = r1;
            return r6;
        }
        r1 = *gptr<u32>(r6 + 0x40u);  // (from the original)
        if (r1 == r0) {
            guest::cpu()->r[1] = r1;
            return r6 + 0x40u;  // (from the original)
        }
    }
    guest::cpu()->r[1] = r1;
    return 0u;
L_7454ec:;
    r0 += 2u;
    if (r1 > r0) {
        guest::preempt();
        goto L_74549c;
    }
    guest::cpu()->r[1] = r1;
    return 0u;
}

}  // namespace d_00745448
GUEST_EXPORT_FRAMED(0x00745448, d_00745448::f_00745448, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_007455cc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_007455cc {

inline constexpr guest::Function<0x002f74c8, u32(u32, u32, u32, u32)> call_002f74c8;  // (from the original)
inline constexpr guest::Function<0x005b42fc, u32(u32, u32, u32, u32)> call_005b42fc;  // (from the original)

u32 f_007455cc(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = r0;
    u32 r5 = r1;
    u32 r0_1 = call_002f74c8(r0, r1, r2, r3);
    u32 r0_2 = call_005b42fc(r0_1, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = r0_2;
    if (r0_2 != 0) {
        r0 = r1 & 1u;
        r2 = 0u;
        if (r0 < 0u || r0 == 0) {
            goto L_745618;
        }
L_7455f8:;
        if (*gptr<u32>(r4 + (r2 << 2)) != r5) {
            r2 += 1u;
            if (r0 > r2) {
                guest::preempt();
                goto L_7455f8;
            }
            goto L_745618;
        }
        guest::cpu()->r[1] = r1;
        return r2;
L_745618:;
        if (r0 < r1) {
            do {
                if (*gptr<u32>(r4 + (r0 << 2)) == r5) {
                    guest::cpu()->r[1] = r1;
                    return r0;
                }
                if (*gptr<u32>(r4 + (r0 << 2) + 4u) == r5) {
                    guest::cpu()->r[1] = r1;
                    return r0 + 1u;
                }
                r0 += 2u;
                guest::preempt();
            } while (r1 > r0);
        }
    }
    guest::cpu()->r[1] = r1;
    return ~0u;
}

}  // namespace d_007455cc
GUEST_EXPORT_FRAMED(0x007455cc, d_007455cc::f_007455cc, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_00745784: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00745784 {

struct __attribute__((packed)) Object_00745784_0 {
    u8 byte_0;
};
GUEST_OFFSET(Object_00745784_0, byte_0, 0x0);  // (from the original)


u32 f_00745784(gptr<Object_00745784_0> arg0, u32 r1) {
    u32 r0_2 = 0;
    u32 r0_1 = arg0->byte_0;
    if (r0_1 >= 5u) {
        r0_2 = 0u;
    } else {
        r1 = 0x9529fcu;  // (from the original)
        r0_2 = *gptr<u8>(*gptr<u32>(r1 + (r0_1 << 2)) + 0x10u);  // (from the original)
    }
    guest::cpu()->r[1] = r1;
    return r0_2;
}

}  // namespace d_00745784
GUEST_EXPORT(0x00745784, d_00745784::f_00745784);

// f_007457e8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_007457e8 {

inline constexpr guest::Function<0x002f74c8, u32(u32, u32)> call_002f74c8;  // (from the original)
inline constexpr guest::Function<0x004e960c, u32(u32, u32, u32, u32)> call_004e960c;  // (from the original)
inline constexpr guest::Function<0x005b41e8, u32(u32, u32)> call_005b41e8;  // (from the original)

u32 f_007457e8(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0xc);  // the original's stack frame
    u32 r0_1 = call_002f74c8(r0, r1);
    u32 r0_2 = call_005b41e8(r0_1, guest::cpu()->r[1]);
    u32 r1_2 = guest::cpu()->r[1];
    if (r0_2 < 2u && r0_2 >= r3) {
        *frame.at<u32>(4) = 0;
        *frame.at<u32>(8) = 0;
        *frame.at<u32>(0) = r3;
        u32 r0_4 = call_004e960c(frame.at(4).addr(), frame.at(8).addr(), r1, r2);
        r1_2 = guest::cpu()->r[1];
        if (r0_4 != 0) {
            u32 r0_5 = *frame.at<u32>(4);
            if (r3 != 1u) {
                u32 r1_4 = *frame.at<u32>(8);
                u32 r0_6 = *gptr<s8>(r0 + (r0_5 + (r0_5 << 2) << 4) + r1_4);
                guest::cpu()->r[1] = r1_4;
                return r0_6;
            }
            u32 r1_5 = *frame.at<u32>(8);
            u32 r0_7 = *gptr<s8>(r0 + (r0_5 << 4) + r1_5 + 0x1400u);  // (from the original)
            guest::cpu()->r[1] = r1_5;
            return r0_7;
        }
    }
    guest::cpu()->r[1] = r1_2;
    return ~0u;
}

}  // namespace d_007457e8
GUEST_EXPORT_FRAMED(0x007457e8, d_007457e8::f_007457e8, 0x40f0);  // pushes {r4, r5, r6, r7, lr} first, as the original

// f_00745890: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00745890 {


u32 f_00745890(u32 r0) {
    u32 r1 = r0 + 0xau;  // (from the original)
    r0 += 0x12u;  // (from the original)
    if (r1 >= r0) {
        guest::cpu()->r[1] = r1;
        return 1u;
    }
    do {
        if (u32(*gptr<s8>(r1)) + 1u != 0) {
            guest::cpu()->r[1] = r1;
            return 0u;
        }
        r1 += 1u;
        guest::preempt();
    } while (r1 < r0);
    guest::cpu()->r[1] = r1;
    return 1u;
}

}  // namespace d_00745890
GUEST_EXPORT(0x00745890, d_00745890::f_00745890);

// f_007458c8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_007458c8 {


u32 f_007458c8(u32 r0) {
    u32 r1 = r0 + 0x12u;  // (from the original)
    r0 += 0x1au;  // (from the original)
    if (r1 >= r0) {
        guest::cpu()->r[1] = r1;
        return 1u;
    }
    do {
        if (u32(*gptr<s8>(r1)) + 1u != 0) {
            guest::cpu()->r[1] = r1;
            return 0u;
        }
        r1 += 1u;
        guest::preempt();
    } while (r1 < r0);
    guest::cpu()->r[1] = r1;
    return 1u;
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

struct __attribute__((packed)) Local_00745900_r3_1 {
    u8 unknown_0[0xa];  // (not used here)
    u8 byte_a;
    u8 byte_b;
};
GUEST_OFFSET(Local_00745900_r3_1, byte_a, 0xa);  // (from the original)
GUEST_OFFSET(Local_00745900_r3_1, byte_b, 0xb);  // (from the original)


u32 f_00745900(gptr<Object_00745900_0> arg0, u32 r1) {
    u32 r0 = arg0.addr();
    u32 r2 = r0;
    if (r1 + 1u == 0) {
        r1 = s8(arg0->byte_8);
    }
    r0 = 0u;
    do {
        gptr<Local_00745900_r3_1> r3_1 = gptr<Local_00745900_r3_1>(r2 + r0);
        if (u32(s8(r3_1->byte_a)) == r1) {
            guest::cpu()->r[1] = r1;
            return r0;
        }
        if (u32(s8(r3_1->byte_b)) == r1) {
            guest::cpu()->r[1] = r1;
            return r0 + 1u;
        }
        r0 += 2u;
        guest::preempt();
    } while (r0 < 8u);
    guest::cpu()->r[1] = r1;
    return ~0u;
}

}  // namespace d_00745900
GUEST_EXPORT(0x00745900, d_00745900::f_00745900);

// f_00745948: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00745948 {

struct __attribute__((packed)) Local_00745948_r0_2 {
    u8 unknown_0[0xa];  // (not used here)
    u8 byte_a;
    u8 unknown_b[0x7];  // (not used here)
    u8 byte_12;
};
GUEST_OFFSET(Local_00745948_r0_2, byte_a, 0xa);  // (from the original)
GUEST_OFFSET(Local_00745948_r0_2, byte_12, 0x12);  // (from the original)


u32 f_00745948(u32 r0, u32 r1, u32 r2) {
    if (u32((u64(0u) + ~0u + u32(r1 >= 8u)) >> 0x20)) {  // (from the original)
        return ~0u;
    }
    gptr<Local_00745948_r0_2> r0_2 = gptr<Local_00745948_r0_2>(r0 + r1);
    return r2 == 0 ? u32(s8(r0_2->byte_12)) : u32(s8(r0_2->byte_a));
}

}  // namespace d_00745948
GUEST_EXPORT(0x00745948, d_00745948::f_00745948);

// f_00745970: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00745970 {

struct __attribute__((packed)) Local_00745970_ea_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_00745970_ea_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_00745970_ea_1, word_4, 0x4);  // (from the original)

inline constexpr guest::Function<0x002b5fc4, u32(u32, u32)> call_002b5fc4;  // (from the original)
inline constexpr guest::Function<0x0071cc4c, u32(u32, u32, u32)> call_0071cc4c;  // (from the original)

u32 f_00745970(u32 r0, u32 r1) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    u32 r0_1 = call_002b5fc4(r0, r1);
    u32 r1_1 = guest::cpu()->r[1];
    if (r0_1 == 0) {
        return r0_1;
    }
    u32 r0_2 = call_002b5fc4(r0_1, r1_1);
    gptr<Local_00745970_ea_1> ea_1 = gptr<Local_00745970_ea_1>(r0 + 4u);
    u32 r1_2 = ea_1->word_0;
    u32 r2_1 = ea_1->word_4;
    frame.release();
    return call_0071cc4c(r0_2, r1_2, r2_1);
}

}  // namespace d_00745970
GUEST_EXPORT(0x00745970, d_00745970::f_00745970);

// f_0074599c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0074599c {

struct __attribute__((packed)) Object_0074599c_0 {
    u8 unknown_0[0xc];  // (not used here)
    u32 word_c;
    u32 word_10;
    u32 word_14;
    u32 word_18;
    u32 word_1c;
    u32 word_20;
};
GUEST_OFFSET(Object_0074599c_0, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Object_0074599c_0, word_10, 0x10);  // (from the original)
GUEST_OFFSET(Object_0074599c_0, word_14, 0x14);  // (from the original)
GUEST_OFFSET(Object_0074599c_0, word_18, 0x18);  // (from the original)
GUEST_OFFSET(Object_0074599c_0, word_1c, 0x1c);  // (from the original)
GUEST_OFFSET(Object_0074599c_0, word_20, 0x20);  // (from the original)


u32 f_0074599c(gptr<Object_0074599c_0> arg0) {
    u32 r1_1 = arg0->word_c;
    if (r1_1 != 0) {
        u32 r1_2 = *gptr<u8>(r1_1 + 4u);
        if (r1_2 == 1u) {
            guest::cpu()->r[1] = r1_2;
            return 1u;
        }
    }
    u32 r1_3 = arg0->word_10;
    if (r1_3 != 0) {
        u32 r1_4 = *gptr<u8>(r1_3 + 4u);
        if (r1_4 == 1u) {
            guest::cpu()->r[1] = r1_4;
            return 1u;
        }
    }
    u32 r1_5 = arg0->word_14;
    if (r1_5 != 0) {
        u32 r1_6 = *gptr<u8>(r1_5 + 4u);
        if (r1_6 == 1u) {
            guest::cpu()->r[1] = r1_6;
            return 1u;
        }
    }
    u32 r1_7 = arg0->word_18;
    if (r1_7 != 0) {
        u32 r1_8 = *gptr<u8>(r1_7 + 4u);
        if (r1_8 == 1u) {
            guest::cpu()->r[1] = r1_8;
            return 1u;
        }
    }
    u32 r1_9 = arg0->word_1c;
    if (r1_9 != 0) {
        r1_9 = *gptr<u8>(r1_9 + 4u);
        if (r1_9 == 1u) {
            guest::cpu()->r[1] = r1_9;
            return 1u;
        }
    }
    u32 r0_1 = arg0->word_20;
    if (r0_1 == 0) {
        guest::cpu()->r[1] = r1_9;
        return 0u;
    }
    u32 r0_2 = *gptr<u8>(r0_1 + 4u);
    if (r0_2 == 1u) {
        guest::cpu()->r[1] = r1_9;
        return r0_2;
    }
    guest::cpu()->r[1] = r1_9;
    return 0u;
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
    return arg0->word_4 + 0xbcu;  // (from the original)
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
    return arg0->word_4 + 0x4cu;  // (from the original)
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

inline guest::global<u32, 0x00746870> global_00746870;  // (from the original)

u32 f_00746854(gptr<Object_00746854_0> arg0) {
    u32 r0 = arg0.addr();
    u32 fpsr = guest::cpu()->fpscr;
    float S0_1 = std::bit_cast<float>(arg0->word_4);
    float S1_1 = std::bit_cast<float>(*global_00746870);
    u32 fpsr_1 = fpsr & 0xfffffffu | vfp_cmpf(S0_1, S1_1);  // (from the original)
    if (!(fpsr_1 >> 0x1d & 1) || fpsr_1 >> 0x1e & 1) {  // (from the original)
        r0 = 1u;
    }
    if (fpsr_1 >> 0x1d & 1 && !(fpsr_1 >> 0x1e & 1)) {  // (from the original)
        r0 = 0u;
    }
    guest::cpu()->s[0] = S0_1;
    guest::cpu()->s[1] = S1_1;
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

inline constexpr guest::Function<0x001408d4, u32(u32, u32)> call_001408d4;  // (from the original)
inline constexpr guest::Function<0x00150bc0, u32(u32, u32, u32)> call_00150bc0;  // (from the original)
inline constexpr guest::Function<0x004b6dc8, u32(u32, u32)> call_004b6dc8;  // (from the original)

void f_00746d20(gptr<Object_00746d20_0> arg0, u32 r1) {
    guest::StackFrame frame(0x14);  // the original's stack frame
    call_001408d4(arg0->word_174, r1 + 0xcu);  // (from the original)
    *frame.at<u32>(0) = 0;
    *frame.at<u32>(4) = 0;
    *frame.at<u32>(8) = 0;
    *frame.at<u32>(0xc) = 0;  // (from the original)
    call_00150bc0(r1 + 0x18bu, frame.at(0).addr(), 0x10u);  // (from the original)
    *gptr<u32>(r1 + 0x178u) = 0;  // (from the original)
    u32 r1_3 = *gptr<u32>(r1 + 0x48u);  // (from the original)
    call_004b6dc8(*gptr<u32>(r1_3 + 0xcu), r1_3);  // (from the original)
}

}  // namespace d_00746d20
GUEST_EXPORT_FRAMED(0x00746d20, d_00746d20::f_00746d20, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_00746d78: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00746d78 {

struct __attribute__((packed)) Object_00746d78_0 {
    u8 unknown_0[0x48];  // (not used here)
    u32 word_48;
};
GUEST_OFFSET(Object_00746d78_0, word_48, 0x48);  // (from the original)


u32 f_00746d78(gptr<Object_00746d78_0> arg0) {
    u32 r0_1 = arg0->word_48;
    u32 r3_1 = *gptr<u32>(*gptr<u32>(r0_1) + 0x2cu);  // (from the original)
    // virtual function 11 of r0_1
    return guest::call_address<u32>(r3_1, r0_1, guest::cpu()->r[1], 1u, r3_1);
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
    u32 r1_1 = arg0->half_0;
    if (r1_1 == 0) {
        r0 = 0u;
    }
    guest::cpu()->r[1] = r1_1;
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
    return arg0->word_190 > r1 ? *gptr<u32>(arg0.addr() + (r1 << 2)) : 0u;
}

}  // namespace d_00746e4c
GUEST_EXPORT(0x00746e4c, d_00746e4c::f_00746e4c);

// f_00746f10: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00746f10 {

inline constexpr guest::Function<0x00747438, u32(u32, u32)> call_00747438;  // (from the original)

u32 f_00746f10(gptr<UnknownStateA22020> arg0) {
    u32 r0_1 = arg0->sub.addr();
    if (r0_1 == 0) {
        return r0_1;
    }
    return call_00747438(r0_1, guest::cpu()->r[1]);
}

}  // namespace d_00746f10
GUEST_EXPORT(0x00746f10, d_00746f10::f_00746f10);

// f_00746fec: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00746fec {

inline guest::global<u32, 0x00974a58> global_00974a58;  // (from the original)
inline constexpr guest::Function<0x0072f380, u32(u32)> call_0072f380;  // (from the original)

u32 f_00746fec() {
    u32 r0_1 = *global_00974a58;
    if (r0_1 == 0) {
        return 0u;
    }
    u32 r0_2 = call_0072f380(r0_1);
    if (r0_2 != 0) {
        return 1u;
    }
    return 0u;
}

}  // namespace d_00746fec
GUEST_EXPORT_FRAMED(0x00746fec, d_00746fec::f_00746fec, 0x4010);  // pushes {r4, lr} first, as the original

// f_0074701c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0074701c {

inline guest::global<u32, 0x00974a58> global_00974a58;  // (from the original)
inline constexpr guest::Function<0x0072f380, u32(u32)> call_0072f380;  // (from the original)
inline constexpr guest::Function<0x0072f3a4, u32(u32)> call_0072f3a4;  // (from the original)

u32 f_0074701c() {
    u32 r4_1 = *global_00974a58;
    if (r4_1 == 0) {
        return 0u;
    }
    u32 r0_1 = call_0072f380(r4_1);
    if (r0_1 != 0) {
        return 1u;
    }
    u32 r0_2 = call_0072f3a4(r4_1);
    if (r0_2 == 0) {
        return 0u;
    }
    return 1u;
}

}  // namespace d_0074701c
GUEST_EXPORT_FRAMED(0x0074701c, d_0074701c::f_0074701c, 0x4010);  // pushes {r4, lr} first, as the original

// f_00747094: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00747094 {

inline guest::global<u32, 0x00974a64> global_00974a64;  // (from the original)
inline guest::global<u32, 0x0097d428> global_0097d428;  // (from the original)
inline constexpr guest::Function<0x00733680, u32(u32, u32)> call_00733680;  // (from the original)
inline constexpr guest::Function<0x00733e00, u32(u32, u32, u32, u32)> call_00733e00;  // (from the original)

u32 f_00747094(u32 r0_unused, u32 r1, u32 r2) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    for (;;) {
        u32 r0_2 = *global_00974a64;
        if (r0_2 != 0) {
            u32 r0_3 = call_00733e00(r0_2, r1, r2, guest::cpu()->r[3]);
            if (r0_3 == 1u) {
                goto L_7470c0;
            }
        }
        guest::cpu()->r[1] = 0u;
        return 0u;
L_7470c0:;
        if (!(1)) {
            break;
        }
        u32 r0_1 = *global_0097d428;
        if (r0_1 - 0x100000u >= 0x3ff00000u) {  // (from the original)
            guest::cpu()->r[1] = 0u;
            return 0u;
        }
        frame.release();
        return call_00733680(r0_1, 0x3ff00000u);  // (from the original)
        guest::preempt();
    }
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

inline guest::global<u32, 0x00974a64> global_00974a64;  // (from the original)
inline constexpr guest::Function<0x00733cf0, u32(u32, u32, u32, u32)> call_00733cf0;  // (from the original)

u32 f_0074724c(gptr<Object_0074724c_0> arg0) {
    if (arg0->word_18 == 0) {
        return 0u;
    }
    u32 r0_1 = *global_00974a64;
    if (r0_1 == 0) {
        return 0u;
    }
    u32 r0_2 = call_00733cf0(r0_1, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    if (r0_2 != 0) {
        return 1u;
    }
    return 0u;
}

}  // namespace d_0074724c
GUEST_EXPORT_FRAMED(0x0074724c, d_0074724c::f_0074724c, 0x4010);  // pushes {r4, lr} first, as the original

// f_007472b0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_007472b0 {

struct __attribute__((packed)) Object_007472b0_0 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Object_007472b0_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_007472b0_0, word_4, 0x4);  // (from the original)

struct __attribute__((packed)) Local_007472b0_ea_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_007472b0_ea_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_007472b0_ea_1, word_4, 0x4);  // (from the original)

inline guest::global<u32, 0x00974a64> global_00974a64;  // (from the original)

void f_007472b0(gptr<Object_007472b0_0> arg0) {
    u32 r2_1 = *global_00974a64;
    gptr<Local_007472b0_ea_1> ea_1 = gptr<Local_007472b0_ea_1>(r2_1 == 0 ? 0x953678u : r2_1 + 0x7cu);  // (from the original)
    u32 r2_2 = ea_1->word_4;
    arg0->word_0 = ea_1->word_0;
    arg0->word_4 = r2_2;
}

}  // namespace d_007472b0
GUEST_EXPORT(0x007472b0, d_007472b0::f_007472b0);

// f_00747438: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00747438 {

struct __attribute__((packed)) Object_00747438_0 {
    u8 unknown_0[0x28];  // (not used here)
    u8 byte_28;
    u8 unknown_29[0x12c];  // (not used here)
    u8 byte_155;
};
GUEST_OFFSET(Object_00747438_0, byte_28, 0x28);  // (from the original)
GUEST_OFFSET(Object_00747438_0, byte_155, 0x155);  // (from the original)


u32 f_00747438(gptr<Object_00747438_0> arg0, u32 r1) {
    if (arg0->byte_155 != 0 && r1 == 0) {
        return 0u;
    }
    u32 r0_1 = arg0->byte_28;
    if (r0_1 != 0) {
        r0_1 = 1u;
    }
    return r0_1;
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
    if (arg0->byte_28 > 1u) {
        return 1u;
    }
    return 0u;
}

}  // namespace d_00747548
GUEST_EXPORT(0x00747548, d_00747548::f_00747548);

// f_007475e0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_007475e0 {

inline constexpr guest::Function<0x00135748, u32(u32)> call_00135748;  // (from the original)
inline constexpr guest::Function<0x001357ec, u32(u32)> call_001357ec;  // (from the original)

u32 f_007475e0(u32 r0) {
    u32 r5_1 = r0 + 0xcu;  // (from the original)
    call_00135748(r5_1);
    u32 r4_1 = *gptr<s8>(r0 + 0x28u);  // (from the original)
    call_001357ec(r5_1);
    return r4_1;
}

}  // namespace d_007475e0
GUEST_EXPORT_FRAMED(0x007475e0, d_007475e0::f_007475e0, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_00747608: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00747608 {

struct __attribute__((packed)) Object_00747608_0 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Object_00747608_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_00747608_0, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_00747608_0, word_8, 0x8);  // (from the original)

struct __attribute__((packed)) Object_00747608_1 {
    u32 word_0;
};
GUEST_OFFSET(Object_00747608_1, word_0, 0x0);  // (from the original)

struct __attribute__((packed)) Local_00747608_ea_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_00747608_ea_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_00747608_ea_1, word_4, 0x4);  // (from the original)


u32 f_00747608(gptr<Object_00747608_0> arg0, gptr<Object_00747608_1> arg1, u32 r2_unused, u32 r3) {
    u32 r2_1 = arg0->word_0;
    u32 zf_1 = r2_1 == 0;
    if (!zf_1) {
        r3 = arg1->word_0;
        zf_1 = r3 == 0;
    }
    if (!zf_1) {
        if (r3 == r2_1) {
            guest::cpu()->r[1] = arg1.addr();
            return 1u;
        }
        guest::cpu()->r[1] = arg1.addr();
        return 0u;
    }
    gptr<Local_00747608_ea_1> ea_1 = gptr<Local_00747608_ea_1>(arg1.addr() + 4u);
    u32 r1_1 = ea_1->word_0;
    u32 r2_2 = ea_1->word_4;
    if ((r1_1 | r2_2) == 0 || arg0->word_4 != r1_1 || arg0->word_8 != r2_2) {
        guest::cpu()->r[1] = r1_1;
        return 0u;
    }
    guest::cpu()->r[1] = r1_1;
    return 1u;
}

}  // namespace d_00747608
GUEST_EXPORT(0x00747608, d_00747608::f_00747608);

// f_00747660: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00747660 {

struct __attribute__((packed)) Object_00747660_0 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Object_00747660_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_00747660_0, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_00747660_0, word_8, 0x8);  // (from the original)

struct __attribute__((packed)) Object_00747660_1 {
    u32 word_0;
};
GUEST_OFFSET(Object_00747660_1, word_0, 0x0);  // (from the original)

struct __attribute__((packed)) Local_00747660_ea_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_00747660_ea_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_00747660_ea_1, word_4, 0x4);  // (from the original)


u32 f_00747660(gptr<Object_00747660_0> arg0, gptr<Object_00747660_1> arg1, u32 r2_unused, u32 r3) {
    u32 r2_1 = arg0->word_0;
    u32 zf_1 = r2_1 == 0;
    if (!zf_1) {
        r3 = arg1->word_0;
        zf_1 = r3 == 0;
    }
    if (!zf_1) {
        if (r3 == r2_1) {
            guest::cpu()->r[1] = arg1.addr();
            return 0u;
        }
        guest::cpu()->r[1] = arg1.addr();
        return 1u;
    }
    gptr<Local_00747660_ea_1> ea_1 = gptr<Local_00747660_ea_1>(arg1.addr() + 4u);
    u32 r1_1 = ea_1->word_0;
    u32 r2_2 = ea_1->word_4;
    if ((r1_1 | r2_2) == 0 || arg0->word_4 != r1_1 || arg0->word_8 != r2_2) {
        guest::cpu()->r[1] = r1_1;
        return 1u;
    }
    guest::cpu()->r[1] = r1_1;
    return 0u;
}

}  // namespace d_00747660
GUEST_EXPORT(0x00747660, d_00747660::f_00747660);

// f_007479b4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_007479b4 {

struct __attribute__((packed)) Object_007479b4_1 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
};
GUEST_OFFSET(Object_007479b4_1, word_4, 0x4);  // (from the original)

inline constexpr guest::Function<0x00747c24, u32(u32, u32)> call_00747c24;  // (from the original)
inline constexpr guest::Function<0x00747c70, u32(u32, u32, u32, u32)> call_00747c70;  // (from the original)

u32 f_007479b4(u32 r0, gptr<Object_007479b4_1> arg1) {
    u32 r1 = arg1.addr();
    u32 r0_2 = 0;
    u32 r0_6 = 0;
    u32 r6 = r1;
    u32 r0_1 = arg1->word_4;
    if (r0_1 >= 0x400u) {  // (from the original)
        u32 r1_1 = r0_1 & 0x3ffu;  // (from the original)
        if (s32(r1_1) < 0x200) {  // (from the original)
            r0_2 = r1_1 + 0x200u;  // (from the original)
            goto L_7479ec;
        }
    }
    r0_2 = r0_1 & 0x3ffu;  // (from the original)
L_7479ec:;
    u32 r1_2 = r0_2 + (r0_2 << 2);
    u32 r0_4 = call_00747c70(r0 + (r1_2 << 2), r1_2, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    u32 r5 = r0_4;
    u32 r0_5 = *gptr<u32>(r6 + 4u);
    if (r0_5 >= 0x400u) {  // (from the original)
        r1 = r0_5 & 0x3ffu;  // (from the original)
        if (s32(r1) < 0x200) {  // (from the original)
            r0_6 = r1 + 0x200u;  // (from the original)
            goto L_747a2c;
        }
    }
    r0_6 = r0_5 & 0x3ffu;  // (from the original)
L_747a2c:;
    r0 = *gptr<u32>(r0 + (r0_6 + (r0_6 << 2) << 2) + 8u);
    for (;;) {
        u32 zf_1 = r0 == 0;
        u32 r4 = r0;
        if (!zf_1) {
            zf_1 = r4 == r5;
        }
        if (zf_1) {
            guest::cpu()->r[1] = r1;
            return 0u;
        }
        if (!(1)) {
            break;
        }
        u32 r0_7 = *gptr<u32>(r0);
        r6 = r0_7;
        if (*gptr<u8>(r0_7 + 0xeu) == 0) {  // (from the original)
            goto L_747a7c;
        }
        r0 = call_00747c24(r4, r1);
        r1 = guest::cpu()->r[1];
        guest::preempt();
    }
L_747a7c:;
    if (r6 != 0) {
        guest::cpu()->r[1] = r1;
        return 1u;
    }
    guest::cpu()->r[1] = r1;
    return 0u;
}

}  // namespace d_007479b4
GUEST_EXPORT_FRAMED(0x007479b4, d_007479b4::f_007479b4, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_00747a90: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00747a90 {


u32 f_00747a90(u32 r0, u32 r1) {
    u32 cf_1 = r1 >= 0x400u;  // (from the original)
    u32 r1_1 = r1 & 0x3ffu;  // (from the original)
    if (!cf_1) {
        u32 r0_1 = u32(*gptr<u8>(r0 + r1_1 + 0x1102cu)) & 1u;  // (from the original)
        guest::cpu()->r[1] = r1_1;
        return r0_1;
    }
    if (s32(r1_1) < 0x200) {  // (from the original)
        r1_1 += 0x200u;  // (from the original)
    }
    u32 r0_2 = u32(*gptr<u8>(r0 + r1_1 + 0x1102cu)) & 1u;  // (from the original)
    guest::cpu()->r[1] = r1_1;
    return r0_2;
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
    u32 r1_1 = arg0->half_e;
    u32 r0_1 = !(r1_1 == arg0->half_c);
    guest::cpu()->r[1] = r1_1;
    return r0_1;
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
    u32 r1_2 = 0;
    u32 r1_1 = r0;
    u32 r0_1 = arg0->word_8;
    u32 zf_1 = r0_1 == 0;
    if (zf_1) {
        r0_1 = arg0->word_10;
        zf_1 = r0_1 == 0;
    }
    if (!zf_1) {
        guest::cpu()->r[1] = r1_1;
        return r0_1;
    }
    r0 = arg0->word_4;
    if (r0 == 0) {
        guest::cpu()->r[1] = r1_1;
        return 0u;
    }
    do {
        r1_2 = *gptr<u32>(r0 + 0x10u);  // (from the original)
        if (r1_2 != 0) {
            guest::cpu()->r[1] = r1_2;
            return r1_2;
        }
        r0 = *gptr<u32>(r0 + 4u);
        guest::preempt();
    } while (r0 != 0);
    guest::cpu()->r[1] = r1_2;
    return 0u;
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
    u32 r1_2 = 0;
    u32 r1_1 = arg0->word_10;
    if (r1_1 != 0) {
        guest::cpu()->r[1] = r1_1;
        return r1_1;
    }
    r0 = arg0->word_4;
    if (r0 == 0) {
        guest::cpu()->r[1] = r1_1;
        return 0u;
    }
    do {
        r1_2 = *gptr<u32>(r0 + 0x10u);  // (from the original)
        if (r1_2 != 0) {
            guest::cpu()->r[1] = r1_2;
            return r1_2;
        }
        r0 = *gptr<u32>(r0 + 4u);
        guest::preempt();
    } while (r0 != 0);
    guest::cpu()->r[1] = r1_2;
    return 0u;
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
    u32 word_14;
    u8 unknown_18[0x6c];  // (not used here)
    u32 word_84;
    u8 unknown_88[0x4];  // (not used here)
    u32 word_8c;
};
GUEST_OFFSET(Object_00747cb0_0, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Object_00747cb0_0, word_10, 0x10);  // (from the original)
GUEST_OFFSET(Object_00747cb0_0, word_14, 0x14);  // (from the original)
GUEST_OFFSET(Object_00747cb0_0, word_84, 0x84);  // (from the original)
GUEST_OFFSET(Object_00747cb0_0, word_8c, 0x8c);  // (from the original)

inline guest::global<u32, 0x00ad614c> global_00ad614c;  // (from the original)
inline guest::global<u8, 0x00ad6254> global_00ad6254;  // (from the original)
inline constexpr guest::Function<0x00747d70, u32(u32, u32)> call_00747d70;  // (from the original)

u32 f_00747cb0(gptr<Object_00747cb0_0> arg0, u32 r1) {
    u32 r0_1 = 0;
    u32 r5_1 = r1;
    if (arg0->word_8 == r5_1) {
        r0_1 = arg0->word_10 + (r1 << 1);
    } else {
        if (*global_00ad614c != 0) {
            u32 r0_2 = call_00747d70(arg0.addr(), r1);
            r1 = guest::cpu()->r[1];
            if (r0_2 != 0) {
                u32 r0_3 = arg0->word_84;
                u32 nf_1 = r0_3 >> 0x1f;  // (from the original)
                u32 zf_1 = r0_3 == 0;
                u32 vf_1 = 0u;
                if (!zf_1) {
                    r0_3 = arg0->word_14;
                    nf_1 = r0_3 >> 0x1f;  // (from the original)
                    zf_1 = r0_3 == 0;
                    vf_1 = 0u;
                }
                if (((zf_1 || nf_1 != vf_1) ? ~0u : r0_3 - 1u) != r5_1) {
                    u32 r0_4 = *gptr<u16>(arg0->word_10 + (r5_1 << 1));
                    if (r0_4 != 0xau) {  // (from the original)
                        u32 r1_1 = arg0->word_8c;
                        if (s32(r1_1) > 0) {
                            r1_1 = arg0->word_14 - 1u;
                            if (r1_1 == r5_1) {
                                guest::cpu()->r[1] = r1_1;
                                return r0_4;
                            }
                        }
                        u32 r0_5 = *global_00ad6254 == 0 ? 0x2au : 0xff0au;  // (from the original)
                        guest::cpu()->r[1] = r1_1;
                        return r0_5;
                    }
                }
            }
        }
        r0_1 = arg0->word_10 + (r5_1 << 1);
    }
    u32 r0_6 = *gptr<u16>(r0_1);
    guest::cpu()->r[1] = r1;
    return r0_6;
}

}  // namespace d_00747cb0
GUEST_EXPORT_FRAMED(0x00747cb0, d_00747cb0::f_00747cb0, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_00747d70: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00747d70 {

struct __attribute__((packed)) Object_00747d70_0 {
    u8 unknown_0[0x14];  // (not used here)
    u32 word_14;
    u8 unknown_18[0xc];  // (not used here)
    u32 word_24;
    u32 word_28;
};
GUEST_OFFSET(Object_00747d70_0, word_14, 0x14);  // (from the original)
GUEST_OFFSET(Object_00747d70_0, word_24, 0x24);  // (from the original)
GUEST_OFFSET(Object_00747d70_0, word_28, 0x28);  // (from the original)


u32 f_00747d70(gptr<Object_00747d70_0> arg0, u32 r1) {
    u32 r3_1 = arg0->word_24;
    u32 r2_1 = 1u;
    if (s32(r3_1) > 0) {
        u32 r12_1 = arg0->word_14 - r3_1;
        if (s32(r12_1) <= s32(r1)) {
            u32 r12_2 = r12_1 + r3_1;
            if (r12_2 != r1 && s32(r12_2) >= s32(r1)) {
                r2_1 = 0u;
            }
        }
    }
    u32 r12_3 = arg0->word_28;
    if (s32(r12_3) <= 0) {
        return r2_1;
    }
    u32 r0_1 = arg0->word_14 - r3_1 - r12_3;
    if (s32(r0_1) > s32(r1)) {
        return r2_1;
    }
    if (s32(r1) < s32(r0_1 + r12_3)) {
        r2_1 = 0u;
    }
    return r2_1;
}

}  // namespace d_00747d70
GUEST_EXPORT(0x00747d70, d_00747d70::f_00747d70);

// f_00748070: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00748070 {

struct __attribute__((packed)) Local_00748070_r0_2 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_00748070_r0_2, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_00748070_r0_2, word_4, 0x4);  // (from the original)

inline constexpr guest::Function<0x0013c9b4, u32(u32, u32)> call_0013c9b4;  // (from the original)
inline constexpr guest::Function<0x0013c9b8, u32(u32, u32)> call_0013c9b8;  // (from the original)

u32 f_00748070(u32 r0, u32 r1) {
    u32 r1_1 = 0;
    u32 r0_1 = call_0013c9b8(r0, r1);
    gptr<Local_00748070_r0_2> r0_2 = gptr<Local_00748070_r0_2>(r0 + (r0_1 << 3) + 8u);
    if (r0_2->word_4 >= *gptr<u32>(r1) && r0_2->word_0 <= *gptr<u32>(r1 + 4u)) {
        r1_1 = 1u;
        goto L_7480b0;
    }
    r1_1 = 0u;
L_7480b0:;
    if (*gptr<u8>(r0 + 4u) != 0) {
        call_0013c9b4(r0_2.addr(), r1_1);
        r1_1 = guest::cpu()->r[1];
    }
    return !(r1_1 == 0);
}

}  // namespace d_00748070
GUEST_EXPORT_FRAMED(0x00748070, d_00748070::f_00748070, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_0074862c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0074862c {

struct __attribute__((packed)) Object_0074862c_0 {
    u8 unknown_0[0xb];  // (not used here)
    u8 byte_b;
};
GUEST_OFFSET(Object_0074862c_0, byte_b, 0xb);  // (from the original)

struct __attribute__((packed)) Local_0074862c_r0_2 {
    u8 unknown_0[0x8];  // (not used here)
    u8 byte_8;
    u8 byte_9;
};
GUEST_OFFSET(Local_0074862c_r0_2, byte_8, 0x8);  // (from the original)
GUEST_OFFSET(Local_0074862c_r0_2, byte_9, 0x9);  // (from the original)


u32 f_0074862c(gptr<Object_0074862c_0> arg0, u32 r1) {
    u32 r0_1 = arg0->byte_b;
    if (r0_1 >= 0xaau) {  // (from the original)
        r0_1 = 0u;
    }
    gptr<Local_0074862c_r0_2> r0_2 = gptr<Local_0074862c_r0_2>(0x878198u + (r0_1 + (r0_1 << 1) << 2));  // (from the original)
    return r1 == 0 ? u32(r0_2->byte_9) : u32(r0_2->byte_8);
}

}  // namespace d_0074862c
GUEST_EXPORT(0x0074862c, d_0074862c::f_0074862c);

// f_00748914: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00748914 {

inline constexpr guest::Function<0x00538188, u32(u32, u32, u32, u32)> call_00538188;  // (from the original)
inline constexpr guest::Function<0x00538274, u32(u32, u32)> call_00538274;  // (from the original)

void f_00748914(gptr<pead__ExpHeap> arg0, u32 r1_unused, u32 r2, u32 r3) {
    guest::StackFrame frame(0x10);  // the original's stack frame
    u32 r0 = arg0.addr();
    u32 r4 = r0;
    u32 r0_1 = r0 + 0x50u;  // (from the original)
    u32 r5 = 0u;
    u32 r1_1 = arg0->word_6c & 1u;
    if (r1_1 != 0) {
        r1_1 = 1u;
    }
    if (r1_1 != 0) {
        r5 = r0_1;
        call_00538188(r0_1, r1_1, r2, r3);
    }
    r0 = *gptr<u32>(r4 + 0x90u);  // (from the original)
    u32 r1 = *gptr<u32>(r4 + 0x88u);  // (from the original)
    do {
        u32 r1_2 = r1 - r0;
        if (r1_2 == r4 + 0x84u - *gptr<u32>(r4 + 0x90u)) {  // (from the original)
            if (r5 != 0) {
                frame.release();
                call_00538274(r5, r1_2);
                return;
            }
            guest::cpu()->r[1] = r1_2;
            return;
        }
        r1 = *gptr<u32>(r1_2 + r0 + 4u);
        guest::preempt();
    } while (1);
}

}  // namespace d_00748914
GUEST_EXPORT(0x00748914, d_00748914::f_00748914);

// f_00748a00: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00748a00 {

inline constexpr guest::Function<0x00538188, u32(u32, u32, u32, u32)> call_00538188;  // (from the original)
inline constexpr guest::Function<0x00538274, u32(u32, u32)> call_00538274;  // (from the original)

u32 f_00748a00(gptr<pead__ExpHeap> arg0, u32 r1_unused, u32 r2, u32 r3) {
    guest::StackFrame frame(0x10);  // the original's stack frame
    u32 r0 = arg0.addr();
    u32 r4 = r0;
    u32 r0_1 = r0 + 0x50u;  // (from the original)
    u32 r5 = 0u;
    u32 r1_1 = arg0->word_6c & 1u;
    if (r1_1 != 0) {
        r1_1 = 1u;
    }
    if (r1_1 != 0) {
        r5 = r0_1;
        call_00538188(r0_1, r1_1, r2, r3);
    }
    r0 = *gptr<u32>(r4 + 0x80u);  // (from the original)
    u32 r1 = *gptr<u32>(r4 + 0x78u);  // (from the original)
    do {
        u32 r1_2 = r1 - r0;
        if (r1_2 == r4 + 0x74u - *gptr<u32>(r4 + 0x80u)) {  // (from the original)
            if (r5 != 0) {
                frame.release();
                return call_00538274(r5, r1_2);
            }
            guest::cpu()->r[1] = r1_2;
            return r0;
        }
        r1 = *gptr<u32>(r1_2 + r0 + 4u);
        guest::preempt();
    } while (1);
}

}  // namespace d_00748a00
GUEST_EXPORT(0x00748a00, d_00748a00::f_00748a00);

// f_00748c70: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00748c70 {


u32 f_00748c70(gptr<pead__ExpHeap> arg0, u32 r1, u32 r2) {
    u32 r0 = arg0.addr();
    u32 r5 = r0;
    r0 = 0u;
    u32 r3 = arg0->word_78;
    u32 r12 = arg0->word_80;
    for (;;) {
        r3 -= r12;
        if (!(r3 != r5 + 0x74u - *gptr<u32>(r5 + 0x80u))) {  // (from the original)
            break;
        }
        u32 r4_1 = *gptr<u32>(r3 + 8u);
        if (r1 <= r4_1) {
            if (r2 != 0) {
                if (r0 == 0) {
                    goto L_748ce0;
                }
                if (r2 == 1u) {
                    if (*gptr<u32>(r0 + 8u) <= r4_1) {
                        goto L_748ce4;
                    }
                    goto L_748ce0;
                }
                if (r2 == 2u) {
                    if (*gptr<u32>(r0 + 8u) >= r4_1) {
                        goto L_748ce4;
                    }
                    goto L_748ce0;
                }
                goto L_748ce4;
            }
            return r3;
L_748ce0:;
            r0 = r3;
        }
L_748ce4:;
        r3 = *gptr<u32>(r3 + r12 + 4u);
        guest::preempt();
    }
    return r0;
}

}  // namespace d_00748c70
GUEST_EXPORT_FRAMED(0x00748c70, d_00748c70::f_00748c70, 0x70);  // pushes {r4, r5, r6} first, as the original

// f_00748dd8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00748dd8 {

struct __attribute__((packed)) Object_00748dd8_0 {
    u8 unknown_0[0x74];  // (not used here)
    u32 word_74;
    u8 unknown_78[0x4];  // (not used here)
    u32 word_7c;
    u32 word_80;
};
GUEST_OFFSET(Object_00748dd8_0, word_74, 0x74);  // (from the original)
GUEST_OFFSET(Object_00748dd8_0, word_7c, 0x7c);  // (from the original)
GUEST_OFFSET(Object_00748dd8_0, word_80, 0x80);  // (from the original)

struct __attribute__((packed)) Local_00748dd8_r12 {
    u8 unknown_0[0x8];  // (not used here)
    u32 word_8;
    u32 word_c;
};
GUEST_OFFSET(Local_00748dd8_r12, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Local_00748dd8_r12, word_c, 0xc);  // (from the original)


u32 f_00748dd8(gptr<Object_00748dd8_0> arg0, u32 r1, u32 r2, u32 r3) {
    u32 r0 = arg0.addr();
    u32 r7 = 0;
    gptr<Local_00748dd8_r12> r12 = gptr<Local_00748dd8_r12>(0u);
    u32 r2_1 = 0;
    u32 r6 = r0;
    r0 = 0u;
    if (s32(arg0->word_7c) <= 0) {
        r12 = gptr<Local_00748dd8_r12>(0u);
    } else {
        u32 r12_1 = arg0->word_74;
        if (r12_1 == 0) {
            return r0;
        } else {
            r12 = gptr<Local_00748dd8_r12>(r12_1 - arg0->word_80);
        }
    }
    if (r12.addr() == 0) {
        return r0;
    } else {
        r7 = r2 - 1u;
    }
L_748e14:;
    u32 r4_1 = r12->word_8;
    if (r4_1 < r1) {
        goto L_748e98;
    }
    r2_1 = r12->word_c + 0x10u + r12.addr() + (r4_1 - r1);  // (from the original)
    if (r2_1 - (r2_1 & ~r7) + r1 > r4_1) {
        goto L_748e98;
    }
    if (r3 != 0) {
        if (r0 == 0) {
            goto L_748e94;
        }
        if (r3 == 1u) {
            if (*gptr<u32>(r0 + 8u) <= r4_1) {
                goto L_748e98;
            }
            goto L_748e94;
        }
        if (r3 == 2u) {
            if (*gptr<u32>(r0 + 8u) >= r4_1) {
                goto L_748e98;
            }
            goto L_748e94;
        }
        goto L_748e98;
    }
    return r12.addr();
L_748e94:;
    r0 = r12.addr();
L_748e98:;
    u32 r4_2 = *gptr<u32>(r6 + 0x80u);  // (from the original)
    r12 = gptr<Local_00748dd8_r12>(*gptr<u32>(r4_2 + r12.addr()));
    u32 zf_1 = (r12.addr() - (r6 + 0x74u)) == 0;  // (from the original)
    if (!zf_1) {
        u32 res_2 = r12.addr() - r4_2;
        zf_1 = res_2 == 0;
        r12 = gptr<Local_00748dd8_r12>(res_2);
    }
    if (zf_1) {
        return r0;
    }
    guest::preempt();
    goto L_748e14;
}

}  // namespace d_00748dd8
GUEST_EXPORT_FRAMED(0x00748dd8, d_00748dd8::f_00748dd8, 0xf0);  // pushes {r4, r5, r6, r7} first, as the original

// f_00749010: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00749010 {

inline guest::global<u32, 0x0097d41c> global_0097d41c;  // (from the original)
inline constexpr guest::Function<0x00138c78, u32(u32)> call_00138c78;  // (from the original)

u32 f_00749010() {
    u32 r0_2 = call_00138c78(*global_0097d41c + 0x24u);  // (from the original)
    return *gptr<u32>(r0_2 + 0x64u);  // (from the original)
}

}  // namespace d_00749010
GUEST_EXPORT_FRAMED(0x00749010, d_00749010::f_00749010, 0x4010);  // pushes {r4, lr} first, as the original

// f_00749030: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00749030 {

struct __attribute__((packed)) Local_00749030_r0_1 {
    u32 word_0;
    u8 unknown_4[0x4];  // (not used here)
    u32 word_8;
};
GUEST_OFFSET(Local_00749030_r0_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_00749030_r0_1, word_8, 0x8);  // (from the original)

inline guest::global<u32, 0x00ae70dc> global_00ae70dc;  // (from the original)
inline guest::global<u32, 0x00ae70e4> global_00ae70e4;  // (from the original)
inline constexpr guest::Function<0x00538188, u32(u32, u32, u32, u32)> call_00538188;  // (from the original)
inline constexpr guest::Function<0x00538274, u32(u32, u32)> call_00538274;  // (from the original)
inline constexpr guest::Function<0x0053adf4, u32(u32, u32)> call_0053adf4;  // (from the original)

u32 f_00749030(u32 r0_unused, u32 r1) {
    u32 r0_3 = 0;
    u32 r1_1 = 0;
    u32 r0_4 = 0;
    u32 r8 = r1;
    u32 r5 = 0xae70c0u;  // (from the original)
    call_00538188(r5, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    gptr<Local_00749030_r0_1> r0_1 = gptr<Local_00749030_r0_1>(r5 - 0x1cu);  // (from the original)
    u32 r4 = r0_1->word_8;
    u32 r6 = r4 + (r0_1->word_0 << 2);
    if (r4 != r6) {
        do {
            r0_3 = call_0053adf4(*gptr<u32>(r4), r8);
            r1_1 = guest::cpu()->r[1];
            if (r0_3 != 0) {
                goto L_7490b0;
            }
            r4 += 4u;
            guest::preempt();
        } while (r4 != r6);
    }
    r1_1 = *global_00ae70dc;
    r4 = *global_00ae70e4;
    r6 = r4 + (r1_1 << 2);
    if (r4 == r6) {
        goto L_7490d0;
    }
L_749098:;
    r0_4 = *gptr<u32>(r4);
    r0_3 = call_0053adf4(r0_4, r8);
    r1_1 = guest::cpu()->r[1];
    if (r0_3 == 0) {
        r4 += 4u;
        if (r4 != r6) {
            guest::preempt();
            goto L_749098;
        }
        goto L_7490d0;
    }
L_7490b0:;
    call_00538274(r5, r1_1);
    return r0_3;
L_7490d0:;
    call_00538274(r5, r1_1);
    return 0u;
}

}  // namespace d_00749030
GUEST_EXPORT_FRAMED(0x00749030, d_00749030::f_00749030, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original

// f_00749134: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00749134 {

struct __attribute__((packed)) Object_00749134_0 {
    u8 unknown_0[0x1c];  // (not used here)
    u8 byte_1c;
};
GUEST_OFFSET(Object_00749134_0, byte_1c, 0x1c);  // (from the original)


u32 f_00749134(gptr<Object_00749134_0> arg0) {
    u32 r0_1 = arg0->byte_1c;
    if (r0_1 == 3u || r0_1 == 4u) {
        return 0u;
    }
    if (r0_1 != 5u && r0_1 != 6u) {
        return 1u;
    }
    return 0u;
}

}  // namespace d_00749134
GUEST_EXPORT(0x00749134, d_00749134::f_00749134);

// f_0074a3e8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0074a3e8 {

struct __attribute__((packed)) Object_0074a3e8_0 {
    u8 unknown_0[0xc4];  // (not used here)
    u32 word_c4;
    u8 unknown_c8[0x4];  // (not used here)
    u32 word_cc;
};
GUEST_OFFSET(Object_0074a3e8_0, word_c4, 0xc4);  // (from the original)
GUEST_OFFSET(Object_0074a3e8_0, word_cc, 0xcc);  // (from the original)


u32 f_0074a3e8(gptr<Object_0074a3e8_0> arg0, u32 r1) {
    u32 r0 = arg0.addr();
    u32 r12 = r0;
    r0 = arg0->word_c4;
    u32 r2 = arg0->word_cc;
    do {
        u32 r0_1 = r0 - r2;
        if (r0_1 == r12 + 0xc0u - *gptr<u32>(r12 + 0xccu)) {  // (from the original)
            return 0u;
        }
        if (*gptr<u8>(r0_1 + 0xcu) == r1) {  // (from the original)
            return r0_1;
        }
        r0 = *gptr<u32>(r0_1 + r2 + 4u);
        guest::preempt();
    } while (1);
}

}  // namespace d_0074a3e8
GUEST_EXPORT_FRAMED(0x0074a3e8, d_0074a3e8::f_0074a3e8, 0x10);  // pushes {r4} first, as the original

// f_0074b2bc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0074b2bc {

inline constexpr guest::Function<0x0074b2bc, u32(u32, u32, u32, u32)> call_0074b2bc;  // (from the original)

void f_0074b2bc(u32 r0, u32 r1) {
    do {
        *gptr<u32>(r0 + 0x3cu) = r1;  // (from the original)
        u32 r0_1 = *gptr<u32>(r0 + 0x14u);  // (from the original)
        u32 r5_1 = r1;
        u32 zf_1 = r0_1 == 0;
        if (!zf_1) {
            r0_1 = *gptr<u32>(r0_1 + 0x10u);  // (from the original)
            zf_1 = r0_1 == 0;
        }
        if (!zf_1) {
            call_0074b2bc(r0_1, r5_1, guest::cpu()->r[2], guest::cpu()->r[3]);
            r1 = guest::cpu()->r[1];
        }
        r0 = *gptr<u32>(r0 + 0x18u);  // (from the original)
        u32 zf_2 = r0 == 0;
        if (!zf_2) {
            r0 = *gptr<u32>(r0 + 0x10u);  // (from the original)
            zf_2 = r0 == 0;
        }
        if (zf_2) {
            guest::cpu()->r[1] = r1;
            return;
        }
        r1 = r5_1;
        guest::preempt();
    } while (1);
}

}  // namespace d_0074b2bc
GUEST_EXPORT_FRAMED(0x0074b2bc, d_0074b2bc::f_0074b2bc, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_0074baa4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0074baa4 {


u32 f_0074baa4(u32 r0, u32 r1) {
    u32 r0_1 = r0 + 0x20u;  // (from the original)
    if (r1 < 2u) {
        r0_1 += (r1 << 2);
    }
    return *gptr<u32>(r0_1);
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

inline guest::global<u32, 0x0074ca84> global_0074ca84;  // (from the original)
inline guest::global<u32, 0x0074ca88> global_0074ca88;  // (from the original)

void f_0074ca5c(gptr<Object_0074ca5c_0> arg0) {
    float S1_1 = std::bit_cast<float>(arg0->word_94) * std::bit_cast<float>(arg0->word_a8) * std::bit_cast<float>(*global_0074ca84);
    float S0_1 = std::bit_cast<float>(arg0->word_b4) * S1_1 + S1_1 * std::bit_cast<float>(*global_0074ca88);
    guest::cpu()->s[0] = S0_1;
    guest::cpu()->s[1] = S1_1;
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

inline guest::global<u32, 0x0074cabc> global_0074cabc;  // (from the original)
inline guest::global<u32, 0x0074cac0> global_0074cac0;  // (from the original)

void f_0074ca8c(gptr<Object_0074ca8c_0> arg0) {
    float S1_1 = std::bit_cast<float>(arg0->word_94) * std::bit_cast<float>(arg0->word_a8) * std::bit_cast<float>(*global_0074cabc) * std::bit_cast<float>(arg0->word_ac);
    float S0_1 = std::bit_cast<float>(arg0->word_b0) * S1_1 - S1_1 * std::bit_cast<float>(*global_0074cac0);
    guest::cpu()->s[0] = S0_1;
    guest::cpu()->s[1] = S1_1;
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

inline guest::global<u32, 0x0074caf4> global_0074caf4;  // (from the original)
inline guest::global<u32, 0x0074caf8> global_0074caf8;  // (from the original)

void f_0074cac4(gptr<Object_0074cac4_0> arg0) {
    float S1_1 = std::bit_cast<float>(arg0->word_94) * std::bit_cast<float>(arg0->word_a8) * std::bit_cast<float>(*global_0074caf4) * std::bit_cast<float>(arg0->word_ac);
    float S0_1 = std::bit_cast<float>(arg0->word_b0) * S1_1 + S1_1 * std::bit_cast<float>(*global_0074caf8);
    guest::cpu()->s[0] = S0_1;
    guest::cpu()->s[1] = S1_1;
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

inline guest::global<u32, 0x0074cb24> global_0074cb24;  // (from the original)
inline guest::global<u32, 0x0074cb28> global_0074cb28;  // (from the original)

void f_0074cafc(gptr<Object_0074cafc_0> arg0) {
    float S1_1 = std::bit_cast<float>(arg0->word_94) * std::bit_cast<float>(arg0->word_a8) * std::bit_cast<float>(*global_0074cb24);
    float S0_1 = std::bit_cast<float>(arg0->word_b4) * S1_1 - S1_1 * std::bit_cast<float>(*global_0074cb28);
    guest::cpu()->s[0] = S0_1;
    guest::cpu()->s[1] = S1_1;
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

struct __attribute__((packed)) Local_0074dcac_r0_1 {
    u8 unknown_0[0x88];  // (not used here)
    u32 word_88;
    u32 word_8c;
};
GUEST_OFFSET(Local_0074dcac_r0_1, word_88, 0x88);  // (from the original)
GUEST_OFFSET(Local_0074dcac_r0_1, word_8c, 0x8c);  // (from the original)


u32 f_0074dcac(gptr<Object_0074dcac_0> arg0) {
    gptr<Local_0074dcac_r0_1> r0_1 = gptr<Local_0074dcac_r0_1>(arg0->word_c);
    u32 r1_1 = r0_1->word_88;
    u32 zf_1 = r1_1 == 0;
    if (zf_1) {
        r0_1 = gptr<Local_0074dcac_r0_1>(r0_1->word_8c);
        zf_1 = r0_1.addr() == 0;
    }
    if (!zf_1) {
        r0_1 = gptr<Local_0074dcac_r0_1>(1u);
    }
    guest::cpu()->r[1] = r1_1;
    return r0_1.addr();
}

}  // namespace d_0074dcac
GUEST_EXPORT(0x0074dcac, d_0074dcac::f_0074dcac);

// f_0074df14: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0074df14 {

inline constexpr guest::Function<0x00135740, u32(u32, u32, u32, u32)> call_00135740;  // (from the original)
inline constexpr guest::Function<0x00137e84, u32(u32, u32)> call_00137e84;  // (from the original)

void f_0074df14(gptr<sead__ExpHeap> arg0, u32 r1_unused, u32 r2) {
    guest::StackFrame frame(0x10);  // the original's stack frame
    u32 r0 = arg0.addr();
    u32 r0_1 = r0 + 0x54u;  // (from the original)
    u32 r5 = 0u;
    u32 r1_1 = u32(arg0->half_70) & 1u;
    if (r1_1 != 0) {
        r1_1 = 1u;
    }
    if (r1_1 != 0) {
        r5 = r0_1;
        call_00135740(r0_1, r1_1, r2, guest::cpu()->r[3]);
    }
    u32 r1 = *gptr<u32>(r0 + 0x94u);  // (from the original)
    r2 = r0 + 0x88u - r1;  // (from the original)
    r0 = *gptr<u32>(r0 + 0x8cu) - r1;  // (from the original)
    if (r0 != r2) {
        do {
            r0 = *gptr<u32>(r0 + r1 + 4u) - r1;
            guest::preempt();
        } while (r0 != r2);
    }
    if (r5 != 0) {
        frame.release();
        call_00137e84(r5, r1);
        return;
    }
    guest::cpu()->r[1] = r1;
}

}  // namespace d_0074df14
GUEST_EXPORT(0x0074df14, d_0074df14::f_0074df14);

// f_0074e00c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0074e00c {

inline constexpr guest::Function<0x00135740, u32(u32, u32, u32, u32)> call_00135740;  // (from the original)
inline constexpr guest::Function<0x00137e84, u32(u32, u32)> call_00137e84;  // (from the original)

u32 f_0074e00c(gptr<sead__ExpHeap> arg0, u32 r1_unused, u32 r2) {
    guest::StackFrame frame(0x10);  // the original's stack frame
    u32 r0 = arg0.addr();
    u32 r0_1 = r0 + 0x54u;  // (from the original)
    u32 r5 = 0u;
    u32 r1_1 = u32(arg0->half_70) & 1u;
    if (r1_1 != 0) {
        r1_1 = 1u;
    }
    if (r1_1 != 0) {
        r5 = r0_1;
        call_00135740(r0_1, r1_1, r2, guest::cpu()->r[3]);
    }
    u32 r1 = *gptr<u32>(r0 + 0x84u);  // (from the original)
    r2 = r0 + 0x78u - r1;  // (from the original)
    r0 = *gptr<u32>(r0 + 0x7cu) - r1;  // (from the original)
    if (r0 != r2) {
        do {
            r0 = *gptr<u32>(r0 + r1 + 4u) - r1;
            guest::preempt();
        } while (r0 != r2);
    }
    if (r5 != 0) {
        frame.release();
        return call_00137e84(r5, r1);
    }
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_0074e00c
GUEST_EXPORT(0x0074e00c, d_0074e00c::f_0074e00c);

// f_0074e2e8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0074e2e8 {

struct __attribute__((packed)) Object_0074e2e8_0 {
    u8 unknown_0[0x7c];  // (not used here)
    u32 word_7c;
    u8 unknown_80[0x4];  // (not used here)
    u32 word_84;
};
GUEST_OFFSET(Object_0074e2e8_0, word_7c, 0x7c);  // (from the original)
GUEST_OFFSET(Object_0074e2e8_0, word_84, 0x84);  // (from the original)


u32 f_0074e2e8(gptr<Object_0074e2e8_0> arg0, u32 r1, u32 r2) {
    u32 r0 = arg0.addr();
    u32 r4_1 = r0;
    r0 = 0u;
    u32 r12 = arg0->word_84;
    u32 r3 = arg0->word_7c - r12;
    u32 r4 = r4_1 + 0x78u - arg0->word_84;  // (from the original)
    if (r3 == r4) {
        return r0;
    }
L_74e314:;
    u32 r5_1 = *gptr<u32>(r3 + 0xcu);  // (from the original)
    if (r1 > r5_1) {
        goto L_74e370;
    }
    if (r2 != 0) {
        if (r0 == 0) {
            goto L_74e36c;
        }
        if (r2 == 1u) {
            if (*gptr<u32>(r0 + 0xcu) <= r5_1) {  // (from the original)
                goto L_74e370;
            }
            goto L_74e36c;
        }
        if (r2 == 2u) {
            if (*gptr<u32>(r0 + 0xcu) >= r5_1) {  // (from the original)
                goto L_74e370;
            }
            goto L_74e36c;
        }
        goto L_74e370;
    }
    return r3;
L_74e36c:;
    r0 = r3;
L_74e370:;
    r3 = *gptr<u32>(r3 + r12 + 4u) - r12;
    if (r3 == r4) {
        return r0;
    }
    guest::preempt();
    goto L_74e314;
}

}  // namespace d_0074e2e8
GUEST_EXPORT_FRAMED(0x0074e2e8, d_0074e2e8::f_0074e2e8, 0x70);  // pushes {r4, r5, r6} first, as the original

// f_0074e45c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0074e45c {

struct __attribute__((packed)) Object_0074e45c_0 {
    u8 unknown_0[0x78];  // (not used here)
    u32 word_78;
    u8 unknown_7c[0x4];  // (not used here)
    u32 word_80;
    u32 word_84;
};
GUEST_OFFSET(Object_0074e45c_0, word_78, 0x78);  // (from the original)
GUEST_OFFSET(Object_0074e45c_0, word_80, 0x80);  // (from the original)
GUEST_OFFSET(Object_0074e45c_0, word_84, 0x84);  // (from the original)

struct __attribute__((packed)) Local_0074e45c_r12 {
    u8 unknown_0[0xa];  // (not used here)
    u16 half_a;
    u32 word_c;
};
GUEST_OFFSET(Local_0074e45c_r12, half_a, 0xa);  // (from the original)
GUEST_OFFSET(Local_0074e45c_r12, word_c, 0xc);  // (from the original)


u32 f_0074e45c(gptr<Object_0074e45c_0> arg0, u32 r1, u32 r2, u32 r3) {
    u32 r0 = arg0.addr();
    u32 r7 = 0;
    gptr<Local_0074e45c_r12> r12 = gptr<Local_0074e45c_r12>(0u);
    u32 r2_1 = 0;
    u32 r6 = r0;
    r0 = 0u;
    if (s32(arg0->word_80) <= 0) {
        r12 = gptr<Local_0074e45c_r12>(0u);
    } else {
        u32 r12_1 = arg0->word_78;
        if (r12_1 == 0) {
            return r0;
        } else {
            r12 = gptr<Local_0074e45c_r12>(r12_1 - arg0->word_84);
        }
    }
    if (r12.addr() == 0) {
        return r0;
    } else {
        r7 = r2 - 1u;
    }
L_74e498:;
    u32 r4_1 = r12->word_c;
    if (r4_1 < r1) {
        goto L_74e51c;
    }
    r2_1 = u32(r12->half_a) + 0x10u + r12.addr() + (r4_1 - r1);  // (from the original)
    if (r2_1 - (r2_1 & ~r7) + r1 > r4_1) {
        goto L_74e51c;
    }
    if (r3 != 0) {
        if (r0 == 0) {
            goto L_74e518;
        }
        if (r3 == 1u) {
            if (*gptr<u32>(r0 + 0xcu) <= r4_1) {  // (from the original)
                goto L_74e51c;
            }
            goto L_74e518;
        }
        if (r3 == 2u) {
            if (*gptr<u32>(r0 + 0xcu) >= r4_1) {  // (from the original)
                goto L_74e51c;
            }
            goto L_74e518;
        }
        goto L_74e51c;
    }
    return r12.addr();
L_74e518:;
    r0 = r12.addr();
L_74e51c:;
    u32 r4_2 = *gptr<u32>(r6 + 0x84u);  // (from the original)
    r12 = gptr<Local_0074e45c_r12>(*gptr<u32>(r4_2 + r12.addr()));
    u32 zf_1 = (r12.addr() - (r6 + 0x78u)) == 0;  // (from the original)
    if (!zf_1) {
        u32 res_2 = r12.addr() - r4_2;
        zf_1 = res_2 == 0;
        r12 = gptr<Local_0074e45c_r12>(res_2);
    }
    if (zf_1) {
        return r0;
    }
    guest::preempt();
    goto L_74e498;
}

}  // namespace d_0074e45c
GUEST_EXPORT_FRAMED(0x0074e45c, d_0074e45c::f_0074e45c, 0xf0);  // pushes {r4, r5, r6, r7} first, as the original

// f_0074e928: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0074e928 {

struct __attribute__((packed)) Object_0074e928_0 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
};
GUEST_OFFSET(Object_0074e928_0, word_4, 0x4);  // (from the original)


u32 f_0074e928(gptr<Object_0074e928_0> arg0, u32 r1) {
    u32 r0 = arg0.addr();
    u32 r2 = arg0->word_4;
    u32 r3 = 0u;
    if (r2 == r0) {
        return ~0u;
    }
    do {
        if (r2 == r1) {
            return r3;
        }
        r2 = *gptr<u32>(r2 + 4u);
        r3 += 1u;
        guest::preempt();
    } while (r2 != r0);
    return ~0u;
}

}  // namespace d_0074e928
GUEST_EXPORT(0x0074e928, d_0074e928::f_0074e928);

// f_0074e960: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0074e960 {


u32 f_0074e960(gptr<sead__TaskBase> arg0) {
    return *gptr<u32>(*gptr<u32>(arg0->word_5c + 0x20u) + 0x20u);  // (from the original)
}

}  // namespace d_0074e960
GUEST_EXPORT(0x0074e960, d_0074e960::f_0074e960);

// f_0074fbbc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0074fbbc {

struct __attribute__((packed)) Object_0074fbbc_0 {
    u32 word_0;
    u8 unknown_4[0x4];  // (not used here)
    u32 word_8;
    u8 unknown_c[0xc];  // (not used here)
    u32 word_18;
    u8 unknown_1c[0x4];  // (not used here)
    u32 word_20;
    u8 unknown_24[0x4];  // (not used here)
    u32 word_28;
};
GUEST_OFFSET(Object_0074fbbc_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_0074fbbc_0, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Object_0074fbbc_0, word_18, 0x18);  // (from the original)
GUEST_OFFSET(Object_0074fbbc_0, word_20, 0x20);  // (from the original)
GUEST_OFFSET(Object_0074fbbc_0, word_28, 0x28);  // (from the original)

struct __attribute__((packed)) Local_0074fbbc_r4_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_0074fbbc_r4_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_0074fbbc_r4_1, word_4, 0x4);  // (from the original)

inline constexpr guest::Function<0x00565cc0, u32(u32, u32)> call_00565cc0;  // (from the original)

u32 f_0074fbbc(gptr<Object_0074fbbc_0> arg0, u32 r1) {
    float S0_1 = std::bit_cast<float>(arg0->word_8);
    float S1_1 = std::bit_cast<float>(arg0->word_28);
    float S1_2 = sqrtf(S0_1 * S0_1 + S1_1 * S1_1);
    float S0_2 = -std::bit_cast<float>(arg0->word_18);
    guest::cpu()->s[0] = S0_2;
    guest::cpu()->s[1] = S1_2;
    u32 r0_1 = call_00565cc0(arg0.addr(), r1);
    u32 r1_1 = guest::cpu()->r[1];
    *gptr<u16>(r1) = u16(r0_1);
    if (r0_1 != 0x4000u && r0_1 + 0x4000u != 0) {  // (from the original)
        float S1_3 = std::bit_cast<float>(arg0->word_28);
        float S0_3 = std::bit_cast<float>(arg0->word_8);
        guest::cpu()->s[0] = S0_3;
        guest::cpu()->s[1] = S1_3;
        u32 r0_2 = call_00565cc0(r0_1, r1_1);
        u32 r1_2 = guest::cpu()->r[1];
        gptr<Local_0074fbbc_r4_1> r4_1 = gptr<Local_0074fbbc_r4_1>(arg0.addr() + 0x10u);  // (from the original)
        *gptr<u16>(r1 + 2u) = u16(r0_2);
        float S0_4 = std::bit_cast<float>(r4_1->word_0);
        float S1_4 = std::bit_cast<float>(r4_1->word_4);
        guest::cpu()->s[0] = S0_4;
        guest::cpu()->s[1] = S1_4;
        u32 r0_3 = call_00565cc0(r0_2, r1_2);
        *gptr<u16>(r1 + 4u) = u16(r0_3);
        return r0_3;
    }
    *gptr<u16>(r1 + 4u) = 0;
    float S1_6 = std::bit_cast<float>(arg0->word_0);
    float S0_6 = -std::bit_cast<float>(arg0->word_20);
    guest::cpu()->s[0] = S0_6;
    guest::cpu()->s[1] = S1_6;
    u32 r0_4 = call_00565cc0(r0_1, 0u);
    *gptr<u16>(r1 + 2u) = u16(r0_4);
    return r0_4;
}

}  // namespace d_0074fbbc
GUEST_EXPORT_FRAMED(0x0074fbbc, d_0074fbbc::f_0074fbbc, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_0074fc40: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0074fc40 {

struct __attribute__((packed)) Local_0074fc40_r0_2 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_0074fc40_r0_2, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_0074fc40_r0_2, word_4, 0x4);  // (from the original)

inline guest::global<u32, 0x0074fcd0> global_0074fcd0;  // (from the original)
inline guest::global<u32, 0x0074fcd4> global_0074fcd4;  // (from the original)
inline constexpr guest::Function<0x00148710, u32(u32, u32, u32)> call_00148710;  // (from the original)
inline constexpr guest::Function<0x0073c668, u32(u32, u32)> call_0073c668;  // (from the original)

u32 f_0074fc40(u32 r0, u32 r1, u32 r2) {
    guest::StackFrame frame(0x20);  // the original's stack frame
    call_0073c668(frame.at(0x10).addr(), r0 + 0x10u);  // (from the original)
    gptr<Local_0074fc40_r0_2> r0_2 = gptr<Local_0074fc40_r0_2>(frame.at(0x10).addr());  // (from the original)
    float S1_1 = std::bit_cast<float>(*global_0074fcd0);
    u32 r2_1 = frame.at(0).addr();
    float S2_1 = std::bit_cast<float>(r0_2->word_0);
    float S3_1 = std::bit_cast<float>(r0_2->word_4);
    float S0_1 = (S2_1 + std::bit_cast<float>(*frame.at<u32>(0x18))) * S1_1;  // (from the original)
    float S1_2 = (S3_1 + std::bit_cast<float>(*frame.at<u32>(0x1c))) * S1_1;  // (from the original)
    float S0_2 = std::bit_cast<float>(*gptr<u32>(r1)) - S0_1 + S2_1;
    *gptr<u32>(r2) = std::bit_cast<u32>(S0_2);
    float S1_3 = std::bit_cast<float>(*frame.at<u32>(0x14)) - (std::bit_cast<float>(*gptr<u32>(r1 + 4u)) - S1_2);  // (from the original)
    float S2_2 = std::bit_cast<float>(*global_0074fcd4);
    *gptr<u32>(r2 + 4u) = std::bit_cast<u32>(S1_3);
    *frame.at<u32>(0) = std::bit_cast<u32>(S0_2);
    *frame.at<u32>(4) = std::bit_cast<u32>(S1_3);
    *frame.at<u32>(8) = std::bit_cast<u32>(S2_2);
    guest::cpu()->s[0] = S0_2;
    guest::cpu()->s[1] = S1_3;
    call_00148710(r2_1, r0 + 0x74u, r2_1);  // (from the original)
    u32 r0_3 = *frame.at<u32>(0);
    u32 r1_3 = *frame.at<u32>(4);
    *gptr<u32>(r2) = r0_3;
    *gptr<u32>(r2 + 4) = r1_3;
    guest::cpu()->r[1] = r1_3;
    return r0_3;
}

}  // namespace d_0074fc40
GUEST_EXPORT_FRAMED(0x0074fc40, d_0074fc40::f_0074fc40, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_0074fcd8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0074fcd8 {

struct __attribute__((packed)) Object_0074fcd8_0 {
    u8 unknown_0[0x8];  // (not used here)
    u32 word_8;
    u32 word_c;
    u8 unknown_10[0x4];  // (not used here)
    u8 byte_14;
};
GUEST_OFFSET(Object_0074fcd8_0, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Object_0074fcd8_0, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Object_0074fcd8_0, byte_14, 0x14);  // (from the original)


u32 f_0074fcd8(gptr<Object_0074fcd8_0> arg0, float S0) {
    u32 fpsr = guest::cpu()->fpscr;
    u32 r1_1 = arg0.addr() + 8u;
    float S1_1 = std::bit_cast<float>(arg0->word_8);
    float S2_1 = std::bit_cast<float>(arg0->word_c);
    u32 fpsr_1 = fpsr & 0xfffffffu | vfp_cmpf(S2_1, S1_1);  // (from the original)
    if (fpsr_1 >> 0x1e & 1) {  // (from the original)
        if (!u32(S1_1 == S0)) {
            guest::cpu()->r[1] = r1_1;
            guest::cpu()->s[1] = S1_1;
            return 0u;
        }
        guest::cpu()->r[1] = r1_1;
        guest::cpu()->s[1] = S1_1;
        return 1u;
    }
    if ((u32(arg0->byte_14) & 2u) != 0) {
        u32 fpsr_2 = fpsr_1 & 0xfffffffu | vfp_cmpf(S2_1, S1_1);  // (from the original)
        if (!(fpsr_2 >> 0x1e & 1) && fpsr_2 >> 0x1f == (fpsr_2 >> 0x1c & 1)) {  // (from the original)
            u32 fpsr_3 = fpsr_2 & 0xfffffffu | vfp_cmpf(S2_1, S0);  // (from the original)
            if (fpsr_3 >> 0x1e & 1 || fpsr_3 >> 0x1f != (fpsr_3 >> 0x1c & 1)) {  // (from the original)
                guest::cpu()->r[1] = r1_1;
                guest::cpu()->s[1] = S1_1;
                return 0u;
            }
            u32 fpsr_4 = fpsr_3 & 0xfffffffu | vfp_cmpf(S1_1, S0);  // (from the original)
            if (fpsr_4 >> 0x1d & 1 && !(fpsr_4 >> 0x1e & 1)) {  // (from the original)
                guest::cpu()->r[1] = r1_1;
                guest::cpu()->s[1] = S1_1;
                return 0u;
            }
            guest::cpu()->r[1] = r1_1;
            guest::cpu()->s[1] = S1_1;
            return 1u;
        }
        u32 fpsr_5 = fpsr_2 & 0xfffffffu | vfp_cmpf(S1_1, S0);  // (from the original)
        if (!(fpsr_5 >> 0x1d & 1) || fpsr_5 >> 0x1e & 1) {  // (from the original)
            guest::cpu()->r[1] = r1_1;
            guest::cpu()->s[1] = S1_1;
            return 1u;
        }
        u32 fpsr_6 = fpsr_5 & 0xfffffffu | vfp_cmpf(S2_1, S0);  // (from the original)
        if (fpsr_6 >> 0x1e & 1 || fpsr_6 >> 0x1f != (fpsr_6 >> 0x1c & 1)) {  // (from the original)
            guest::cpu()->r[1] = r1_1;
            guest::cpu()->s[1] = S1_1;
            return 0u;
        }
        guest::cpu()->r[1] = r1_1;
        guest::cpu()->s[1] = S1_1;
        return 1u;
    }
    u32 fpsr_7 = fpsr_1 & 0xfffffffu | vfp_cmpf(S2_1, S1_1);  // (from the original)
    if (!(fpsr_7 >> 0x1d & 1)) {  // (from the original)
        u32 fpsr_8 = fpsr_7 & 0xfffffffu | vfp_cmpf(S2_1, S0);  // (from the original)
        if (fpsr_8 >> 0x1d & 1) {  // (from the original)
            guest::cpu()->r[1] = r1_1;
            guest::cpu()->s[1] = S1_1;
            return 0u;
        }
        u32 fpsr_9 = fpsr_8 & 0xfffffffu | vfp_cmpf(S1_1, S0);  // (from the original)
        if (fpsr_9 >> 0x1f != (fpsr_9 >> 0x1c & 1)) {  // (from the original)
            guest::cpu()->r[1] = r1_1;
            guest::cpu()->s[1] = S1_1;
            return 0u;
        }
        guest::cpu()->r[1] = r1_1;
        guest::cpu()->s[1] = S1_1;
        return 1u;
    }
    u32 fpsr_10 = fpsr_7 & 0xfffffffu | vfp_cmpf(S1_1, S0);  // (from the original)
    if (fpsr_10 >> 0x1f == (fpsr_10 >> 0x1c & 1)) {  // (from the original)
        guest::cpu()->r[1] = r1_1;
        guest::cpu()->s[1] = S1_1;
        return 1u;
    }
    if ((fpsr_10 & 0xfffffffu | vfp_cmpf(S2_1, S0)) >> 0x1d & 1) {  // (from the original)
        guest::cpu()->r[1] = r1_1;
        guest::cpu()->s[1] = S1_1;
        return 0u;
    }
    guest::cpu()->r[1] = r1_1;
    guest::cpu()->s[1] = S1_1;
    return 1u;
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

inline guest::global<u32, 0x0074fdc0> global_0074fdc0;  // (from the original)
inline guest::global<u32, 0x0074fdc4> global_0074fdc4;  // (from the original)

void f_0074fd9c(gptr<Object_0074fd9c_0> arg0, float S0_unused, float S1) {
    u32 r1_1 = arg0->byte_14;
    if ((r1_1 & 2u) == 0) {
        float S0_1 = std::bit_cast<float>(*global_0074fdc0);
        guest::cpu()->r[1] = r1_1;
        guest::cpu()->s[0] = S0_1;
        return;
    }
    float S0_2 = std::bit_cast<float>(arg0->word_4);
    if ((r1_1 & 1u) != 0) {
        S1 = std::bit_cast<float>(*global_0074fdc4);
        S0_2 = S0_2 - S1;
    }
    guest::cpu()->r[1] = r1_1;
    guest::cpu()->s[0] = S0_2;
    guest::cpu()->s[1] = S1;
}

}  // namespace d_0074fd9c
GUEST_EXPORT(0x0074fd9c, d_0074fd9c::f_0074fd9c);
