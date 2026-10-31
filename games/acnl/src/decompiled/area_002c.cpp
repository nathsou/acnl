// Functions decompiled by tools/decomp (docs/decomp.md), each proved equal to the recompiled original (prove-cpp). The
// names are generated (d_<address>::f_<address>, Object_<address>_<argument>, word_<offset>) and still to be chosen.
#include "guest/guest.hpp"
#include "graphics/hemisphere_light.hpp"

#include <bit>

using guest::gptr;

// f_002c2024: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002c2024 {

inline constexpr guest::Function<0x0011d258, u32(u32, u32, u32, u32)> call_0011d258;  // (from the original)
inline constexpr guest::Function<0x0011e340, u32(u32, u32, u32, u32)> call_0011e340;  // (from the original)

u32 f_002c2024(u32 r0, u32 r1) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r4 = r0;
    r5 = r1;
    r0 = call_0011d258(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 == 0) {
        r1 = 1u;
        r0 = sxth(r5);
        *gptr<u8>(r4) = u8(r1);
        *gptr<u16>(r4 + 2u) = u16(r0);
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        return call_0011e340(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    }
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_002c2024
GUEST_EXPORT(0x002c2024, d_002c2024::f_002c2024);

// f_002c2058: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002c2058 {

struct __attribute__((packed)) Object_002c2058_0 {
    u8 unknown_0[0x2];  // (not used here)
    u16 half_2;
};
GUEST_OFFSET(Object_002c2058_0, half_2, 0x2);  // (from the original)

inline constexpr guest::Function<0x0011e340, u32(u32, u32, u32, u32)> call_0011e340;  // (from the original)

u32 f_002c2058(gptr<Object_002c2058_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r4 = guest::cpu()->r[4];
    guest::cpu()->r[13] -= 8u;
    r4 = r0;
    r0 = 0x1eu;  // (from the original)
    arg0->half_2 = u16(r0);
    r0 = call_0011e340(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    r0 = 0u;
    *gptr<u8>(r4) = u8(r0);
    guest::cpu()->r[13] += 8u;
    return r0;
}

}  // namespace d_002c2058
GUEST_EXPORT(0x002c2058, d_002c2058::f_002c2058);

// f_002c2078: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002c2078 {

struct __attribute__((packed)) Object_002c2078_0 {
    u8 byte_0;
    u8 byte_1;
    u8 byte_2;
    u8 byte_3;
    u8 byte_4;
    u8 byte_5;
    u8 unknown_6[0x4];  // (not used here)
    u16 half_a;
    u8 unknown_c[0x28];  // (not used here)
    u8 byte_34;
    u8 byte_35;
    u8 byte_36;
    u8 byte_37;
    u8 byte_38;
    u8 byte_39;
    u8 byte_3a;
    u8 byte_3b;
};
GUEST_OFFSET(Object_002c2078_0, byte_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_002c2078_0, byte_1, 0x1);  // (from the original)
GUEST_OFFSET(Object_002c2078_0, byte_2, 0x2);  // (from the original)
GUEST_OFFSET(Object_002c2078_0, byte_3, 0x3);  // (from the original)
GUEST_OFFSET(Object_002c2078_0, byte_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_002c2078_0, byte_5, 0x5);  // (from the original)
GUEST_OFFSET(Object_002c2078_0, half_a, 0xa);  // (from the original)
GUEST_OFFSET(Object_002c2078_0, byte_34, 0x34);  // (from the original)
GUEST_OFFSET(Object_002c2078_0, byte_35, 0x35);  // (from the original)
GUEST_OFFSET(Object_002c2078_0, byte_36, 0x36);  // (from the original)
GUEST_OFFSET(Object_002c2078_0, byte_37, 0x37);  // (from the original)
GUEST_OFFSET(Object_002c2078_0, byte_38, 0x38);  // (from the original)
GUEST_OFFSET(Object_002c2078_0, byte_39, 0x39);  // (from the original)
GUEST_OFFSET(Object_002c2078_0, byte_3a, 0x3a);  // (from the original)
GUEST_OFFSET(Object_002c2078_0, byte_3b, 0x3b);  // (from the original)


void f_002c2078(gptr<Object_002c2078_0> arg0) {
    u32 r1 = 0;
    arg0->half_a = u16(u32(*gptr<u16>(0x8c9f1eu)));  // (from the original)
    r1 = 0u;
    arg0->byte_0 = u8(u32(arg0->byte_0) & ~0xbcu);  // (from the original)
    arg0->byte_1 = u8(u32(arg0->byte_1) & ~0xffu | 0x5eu);  // (from the original)
    arg0->byte_2 = u8(0xffu);  // (from the original)
    arg0->byte_3 = u8(0x3fu);  // (from the original)
    arg0->byte_4 = u8(r1);
    arg0->byte_5 = u8(u32(arg0->byte_5) & ~0x7fu);  // (from the original)
    arg0->byte_34 = u8(r1);
    arg0->byte_38 = u8(r1);
    arg0->byte_35 = u8(r1);
    arg0->byte_39 = u8(r1);
    arg0->byte_36 = u8(r1);
    arg0->byte_3a = u8(r1);
    arg0->byte_37 = u8(r1);
    arg0->byte_3b = u8(r1);
    guest::cpu()->r[1] = r1;
    return;
}

}  // namespace d_002c2078
GUEST_EXPORT(0x002c2078, d_002c2078::f_002c2078);

// f_002c2510: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002c2510 {

inline constexpr guest::Function<0x002fae84, u32(u32, u32, u32, u32)> call_002fae84;  // (from the original)
inline constexpr guest::Function<0x00313a84, u32(u32, u32, u32, u32)> call_00313a84;  // (from the original)

u32 f_002c2510(u32 r0, u32 r1) {
    u32 r4 = guest::cpu()->r[4];
    guest::cpu()->r[13] -= 8u;
    r4 = r0;
    r0 = call_002fae84(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r0 = r0 + 0x62138u;  // (from the original)
    r0 = call_00313a84(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = 1u;
    *gptr<u32>(r4 + 0x2cu) = u32(r0);  // (from the original)
    *gptr<u8>(r4 + 0x34u) = u8(r1);  // (from the original)
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_002c2510
GUEST_EXPORT(0x002c2510, d_002c2510::f_002c2510);

// f_002c2544: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002c2544 {

struct __attribute__((packed)) Object_002c2544_0 {
    u8 unknown_0[0x31];  // (not used here)
    u8 byte_31;
};
GUEST_OFFSET(Object_002c2544_0, byte_31, 0x31);  // (from the original)

inline constexpr guest::Function<0x002bb4b0, u32(u32, u32, u32, u32)> call_002bb4b0;  // (from the original)

u32 f_002c2544(gptr<Object_002c2544_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r1 = 0;
    r1 = 1u;
    guest::cpu()->r[13] -= 8u;
    arg0->byte_31 = u8(r1);
    r0 = r0 + 0x22u;  // (from the original)
    r0 = call_002bb4b0(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_002c2544
GUEST_EXPORT(0x002c2544, d_002c2544::f_002c2544);

// f_002c2710: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002c2710 {

struct __attribute__((packed)) Object_002c2710_0 {
    u8 unknown_0[0x31];  // (not used here)
    u8 byte_31;
};
GUEST_OFFSET(Object_002c2710_0, byte_31, 0x31);  // (from the original)

inline constexpr guest::Function<0x002bb4b0, u32(u32, u32, u32, u32)> call_002bb4b0;  // (from the original)

u32 f_002c2710(gptr<Object_002c2710_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r1 = 0;
    r1 = 0u;
    guest::cpu()->r[13] -= 8u;
    arg0->byte_31 = u8(r1);
    r0 = r0 + 0x22u;  // (from the original)
    r0 = call_002bb4b0(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_002c2710
GUEST_EXPORT(0x002c2710, d_002c2710::f_002c2710);

// f_002c2974: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002c2974 {

struct __attribute__((packed)) Object_002c2974_1 {
    u32 word_0;
};
GUEST_OFFSET(Object_002c2974_1, word_0, 0x0);  // (from the original)

inline constexpr guest::Function<0x002fcbb0, u32(u32, u32, u32, u32)> call_002fcbb0;  // (from the original)

u32 f_002c2974(u32 r0_unused, gptr<Object_002c2974_1> arg1, u32 r2) {
    u32 r1 = arg1.addr();
    r1 = arg1->word_0;
    if (r1 == 0) {
        r1 = 0x7ffeu;  // (from the original)
        return call_002fcbb0(guest::cpu()->r[0], r1, r2, guest::cpu()->r[3]);
    }
    r2 = *gptr<u32>(*gptr<u32>(r1) + 0x44u);  // (from the original)
    return guest::call_address<u32>(r2, guest::cpu()->r[0], r1, r2, guest::cpu()->r[3]);
}

}  // namespace d_002c2974
GUEST_EXPORT(0x002c2974, d_002c2974::f_002c2974);

// f_002c2a64: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002c2a64 {

struct __attribute__((packed)) Object_002c2a64_0 {
    u32 word_0;
};
GUEST_OFFSET(Object_002c2a64_0, word_0, 0x0);  // (from the original)

inline constexpr guest::Function<0x006d926c, u32(u32, u32, u32, u32)> call_006d926c;  // (from the original)

u32 f_002c2a64(gptr<Object_002c2a64_0> arg0, u32 r1) {
    u32 r0 = arg0.addr();
    u32 r4 = guest::cpu()->r[4];
    guest::cpu()->r[13] -= 8u;
    r4 = r0;
    r0 = arg0->word_0;
    if (r0 == 0) {
        r0 = 3u;
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    if (u32(s32(s8(*gptr<u8>(r0 + 0xfu)))) != 0) {  // (from the original)
        r0 = 3u;
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r1 = u32(*gptr<u8>(*gptr<u32>(r4) + 0x18cu));  // (from the original)
    r0 = 1u;
    r0 = call_006d926c(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r0 = r0 & 0xffu;  // (from the original)
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_002c2a64
GUEST_EXPORT(0x002c2a64, d_002c2a64::f_002c2a64);

// f_002c2d58: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002c2d58 {

struct __attribute__((packed)) Object_002c2d58_0 {
    u8 unknown_0[0x1b0];  // (not used here)
    u32 word_1b0;
};
GUEST_OFFSET(Object_002c2d58_0, word_1b0, 0x1b0);  // (from the original)

struct __attribute__((packed)) Object_002c2d58_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Object_002c2d58_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_002c2d58_1, word_4, 0x4);  // (from the original)


void f_002c2d58(gptr<Object_002c2d58_0> arg0, gptr<Object_002c2d58_1> arg1) {
    u32 r0 = arg0.addr();
    u32 r1 = arg1.addr();
    if (r1 == 0) {
        return;
    }
    arg1->word_4 = u32(arg0->word_1b0);
    arg0->word_1b0 = u32(r1);
    arg1->word_0 = u32(r0);
    return;
}

}  // namespace d_002c2d58
GUEST_EXPORT(0x002c2d58, d_002c2d58::f_002c2d58);

// f_002c3758: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002c3758 {

struct __attribute__((packed)) Object_002c3758_0 {
    u32 word_0;
    u8 unknown_4[0x10];  // (not used here)
    u32 word_14;
    u32 word_18;
    u32 word_1c;
    u32 word_20;
    u32 word_24;
    u32 word_28;
    u16 half_2c;
    u16 half_2e;
    u16 half_30;
    u8 unknown_32[0x6];  // (not used here)
    u16 half_38;
    u16 half_3a;
    u16 half_3c;
    u8 unknown_3e[0x2e];  // (not used here)
    u32 word_6c;
    u32 word_70;
    u32 word_74;
    u8 unknown_78[0x150];  // (not used here)
    u8 byte_1c8;
    u8 unknown_1c9[0x3];  // (not used here)
    u8 byte_1cc;
};
GUEST_OFFSET(Object_002c3758_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_002c3758_0, word_14, 0x14);  // (from the original)
GUEST_OFFSET(Object_002c3758_0, word_18, 0x18);  // (from the original)
GUEST_OFFSET(Object_002c3758_0, word_1c, 0x1c);  // (from the original)
GUEST_OFFSET(Object_002c3758_0, word_20, 0x20);  // (from the original)
GUEST_OFFSET(Object_002c3758_0, word_24, 0x24);  // (from the original)
GUEST_OFFSET(Object_002c3758_0, word_28, 0x28);  // (from the original)
GUEST_OFFSET(Object_002c3758_0, half_2c, 0x2c);  // (from the original)
GUEST_OFFSET(Object_002c3758_0, half_2e, 0x2e);  // (from the original)
GUEST_OFFSET(Object_002c3758_0, half_30, 0x30);  // (from the original)
GUEST_OFFSET(Object_002c3758_0, half_38, 0x38);  // (from the original)
GUEST_OFFSET(Object_002c3758_0, half_3a, 0x3a);  // (from the original)
GUEST_OFFSET(Object_002c3758_0, half_3c, 0x3c);  // (from the original)
GUEST_OFFSET(Object_002c3758_0, word_6c, 0x6c);  // (from the original)
GUEST_OFFSET(Object_002c3758_0, word_70, 0x70);  // (from the original)
GUEST_OFFSET(Object_002c3758_0, word_74, 0x74);  // (from the original)
GUEST_OFFSET(Object_002c3758_0, byte_1c8, 0x1c8);  // (from the original)
GUEST_OFFSET(Object_002c3758_0, byte_1cc, 0x1cc);  // (from the original)


u32 f_002c3758(gptr<Object_002c3758_0> arg0, gptr<Float3> arg1) {
    u32 r0 = arg0.addr();
    u32 r1 = arg1.addr();
    u32 r2 = 0;
    u32 r3 = 0;
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 8u;
    if (u32(arg0->byte_1cc) != 0) {
        r13 = r13 + 8u;
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    r3 = 0u;
    arg0->byte_1cc = u8(1u);
    arg0->byte_1c8 = u8(r3);
    arg0->word_6c = u32(std::bit_cast<u32>(arg1->v[0]));
    arg0->word_70 = u32(std::bit_cast<u32>(arg1->v[1]));
    arg0->word_74 = u32(std::bit_cast<u32>(arg1->v[2]));
    arg0->word_14 = u32(std::bit_cast<u32>(arg1->v[0]));
    arg0->word_18 = u32(std::bit_cast<u32>(arg1->v[1]));
    arg0->word_1c = u32(std::bit_cast<u32>(arg1->v[2]));
    arg0->word_20 = u32(std::bit_cast<u32>(arg1->v[0]));
    arg0->word_24 = u32(std::bit_cast<u32>(arg1->v[1]));
    arg0->word_28 = u32(std::bit_cast<u32>(arg1->v[2]));
    *gptr<u16>(r13) = u16(r3);
    *gptr<u16>(r13 + 2u) = u16(r3);
    *gptr<u16>(r13 + 4u) = u16(r3);
    arg0->half_38 = u16(uxth(r3));
    arg0->half_3a = u16(u32(*gptr<u16>(r13 + 2u)));
    arg0->half_3c = u16(u32(*gptr<u16>(r13 + 4u)));
    arg0->half_2c = u16(u32(*gptr<u16>(r13)));
    arg0->half_2e = u16(u32(*gptr<u16>(r13 + 2u)));
    r2 = u32(*gptr<u16>(r13 + 4u));
    arg0->half_30 = u16(r2);
    r1 = *gptr<u32>(arg0->word_0 + 0xa8u);  // (from the original)
    r13 = r13 + 8u;
    guest::cpu()->r[13] = r13;
    return guest::call_address<u32>(r1, r0, r1, r2, r3);
}

}  // namespace d_002c3758
GUEST_EXPORT(0x002c3758, d_002c3758::f_002c3758);

// f_002c3954: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002c3954 {

struct __attribute__((packed)) Object_002c3954_0 {
    u8 unknown_0[0x1b4];  // (not used here)
    u32 word_1b4;
};
GUEST_OFFSET(Object_002c3954_0, word_1b4, 0x1b4);  // (from the original)


void f_002c3954(gptr<Object_002c3954_0> arg0) {
    u32 r1 = 0;
    u32 r2 = 0;
    r1 = arg0->word_1b4;
    if (r1 == 0) {
        guest::cpu()->r[1] = r1;
        return;
    }
    r2 = 0u;
    *gptr<u32>(r1) = u32(r2);
    arg0->word_1b4 = u32(r2);
    guest::cpu()->r[1] = r1;
    return;
}

}  // namespace d_002c3954
GUEST_EXPORT(0x002c3954, d_002c3954::f_002c3954);

// f_002c3b70: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002c3b70 {

inline constexpr guest::Function<0x0024f400, u32(u32, u32, u32, u32)> call_0024f400;  // (from the original)

u32 f_002c3b70(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = guest::cpu()->r[4];
    guest::cpu()->r[13] -= 8u;
    r4 = r1;
    r1 = r1 + 4u;
    r0 = call_0024f400(r0, r1, r2, r3);
    r2 = *gptr<u32>(r4);
    r1 = 0u;
    *gptr<u32>(r0) = u32(r2);
    *gptr<u32>(r0 + *gptr<u32>(r2 - 0xcu)) = u32(*gptr<u32>(r4 + 0x14u));  // (from the original)
    *gptr<u32>(r0 + 0x190u) = u32(r1);  // (from the original)
    *gptr<u8>(r0 + 0x19cu) = u8(r1);  // (from the original)
    *gptr<u8>(r0 + 0x19du) = u8(r1);  // (from the original)
    *gptr<u8>(r0 + 0x1a8u) = u8(r1);  // (from the original)
    *gptr<u32>(r0 + 0x1acu) = u32(r1);  // (from the original)
    *gptr<u32>(r0 + 0x1b0u) = u32(r1);  // (from the original)
    *gptr<u32>(r0 + 0x1b4u) = u32(r1);  // (from the original)
    *gptr<u32>(r0 + 0x1b8u) = u32(r1);  // (from the original)
    *gptr<u32>(r0 + 0x1bcu) = u32(r1);  // (from the original)
    *gptr<u8>(r0 + 0x1cau) = u8(r1);  // (from the original)
    *gptr<u8>(r0 + 0x1ceu) = u8(r1);  // (from the original)
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_002c3b70
GUEST_EXPORT(0x002c3b70, d_002c3b70::f_002c3b70);

// f_002c44d8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002c44d8 {

inline constexpr guest::Function<0x006165c4, u32(u32, u32, u32, u32)> call_006165c4;  // (from the original)
inline constexpr guest::Function<0x007017a8, u32(u32, u32, u32, u32)> call_007017a8;  // (from the original)

u32 f_002c44d8(u32 r0_unused, u32 r1) {
    u32 r0 = 0;
    u32 r4 = guest::cpu()->r[4];
    guest::cpu()->r[13] -= 8u;
    r4 = 0x94d76cu;  // (from the original)
    if (*gptr<u32>(r4 + 4u) == 0) {
        r0 = ~0u;
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r1 = u32(*gptr<u8>(r4));
    r0 = *gptr<u32>(0x94d774u);  // (from the original)
    if (r1 != 0) {
        r0 = call_007017a8(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1 = u32(*gptr<u8>(*gptr<u32>(r4 + 4u) + 0xe1u));  // (from the original)
        r0 = u32(*gptr<u8>(*gptr<u32>(*gptr<u32>(r0 + 4u) + (r1 << 2))));
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r0 = call_006165c4(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = u32(*gptr<u8>(*gptr<u32>(r4 + 4u) + 0xe1u));  // (from the original)
    r0 = u32(*gptr<u8>(*gptr<u32>(*gptr<u32>(r0 + 4u) + (r1 << 2))));
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_002c44d8
GUEST_EXPORT(0x002c44d8, d_002c44d8::f_002c44d8);

// f_002c4544: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002c4544 {

inline constexpr guest::Function<0x002fb328, u32(u32, u32, u32, u32)> call_002fb328;  // (from the original)
inline constexpr guest::Function<0x002fc934, u32(u32, u32, u32, u32)> call_002fc934;  // (from the original)
inline constexpr guest::Function<0x006162e0, u32(u32, u32, u32, u32)> call_006162e0;  // (from the original)
inline constexpr guest::Function<0x006165c4, u32(u32, u32, u32, u32)> call_006165c4;  // (from the original)
inline constexpr guest::Function<0x00616c68, u32(u32, u32, u32, u32)> call_00616c68;  // (from the original)
inline constexpr guest::Function<0x00701694, u32(u32, u32, u32, u32)> call_00701694;  // (from the original)
inline constexpr guest::Function<0x007017a8, u32(u32, u32, u32, u32)> call_007017a8;  // (from the original)
inline constexpr guest::Function<0x0076c808, u32(u32, u32, u32, u32)> call_0076c808;  // (from the original)

u32 f_002c4544(u32 r0, u32 r1, u32 r2) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r13 = guest::cpu()->r[13];
    r5 = r0;
    r13 = r13 - 0x20u;  // (from the original)
    r6 = 0x94d76cu;  // (from the original)
    r4 = r1;
    if (*gptr<u32>(r6 + 4u) == 0) {
        goto L_2c4658;
    }
    r1 = u32(*gptr<u8>(r6));
    r7 = 0xfff951c8u;  // (from the original)
    r0 = *gptr<u32>(r6 + 8u);
    if (r1 != 0) {
        guest::cpu()->r[13] = r13;
        r0 = call_007017a8(r0, r1, r2, guest::cpu()->r[3]);
        r2 = guest::cpu()->r[2];
        r1 = u32(*gptr<u8>(*gptr<u32>(r6 + 4u) + 0xe1u));  // (from the original)
        r0 = *gptr<u32>(*gptr<u32>(*gptr<u32>(r0 + 4u) + (r1 << 2)) + 4u);
        r4 = u32(*gptr<u8>(r0 + r4));
        guest::cpu()->r[13] = r13;
        r0 = call_002fb328(r0, r1, r2, guest::cpu()->r[3]);
        r0 = r0 + 0x80u - r7;  // (from the original)
        r2 = r4;
        r1 = 0x24u;  // (from the original)
        guest::cpu()->r[13] = r13;
        r0 = call_0076c808(r0, r1, r2, guest::cpu()->r[3]);
        r2 = guest::cpu()->r[2];
        if (r0 == 0) {
            goto L_2c4658;
        }
        r1 = r4;
        r0 = r5;
        r13 = r13 + 0x20u;  // (from the original)
        r2 = 0u;
        guest::cpu()->r[13] = r13;
        return call_00701694(r0, r1, r2, guest::cpu()->r[3]);
    }
    guest::cpu()->r[13] = r13;
    r0 = call_006165c4(r0, r1, r2, guest::cpu()->r[3]);
    r1 = r13 + 4u;
    r4 = u32(*gptr<u8>(*gptr<u32>(*gptr<u32>(*gptr<u32>(r0 + 4u) + (u32(*gptr<u8>(*gptr<u32>(r6 + 4u) + 0xe1u)) << 2)) + 4u) + r4));  // (from the original)
    *gptr<u32>(r13) = u32(0u);
    *gptr<u32>(r13 + 4u) = u32(0x27u);  // (from the original)
    r2 = r4;
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_00616c68(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    guest::cpu()->r[13] = r13;
    r0 = call_002fb328(r0, r1, r2, guest::cpu()->r[3]);
    r2 = *gptr<u32>(r13);
    r0 = r0 + 0x80u - r7;  // (from the original)
    r1 = *gptr<u32>(r13 + 4u) & 0xffu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0076c808(r0, r1, r2, guest::cpu()->r[3]);
    r2 = guest::cpu()->r[2];
    if (r0 == 0) {
        goto L_2c4658;
    }
    r2 = 0u;
    r1 = r4;
    r0 = r5;
    guest::cpu()->r[13] = r13;
    r0 = call_006162e0(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r13 = r13 + 0x20u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
L_2c4658:;
    r0 = r5;
    r13 = r13 + 0x20u;  // (from the original)
    r1 = 0x95bfdcu;  // (from the original)
    guest::cpu()->r[13] = r13;
    return call_002fc934(r0, r1, r2, guest::cpu()->r[3]);
}

}  // namespace d_002c4544
GUEST_EXPORT(0x002c4544, d_002c4544::f_002c4544);

// f_002c4ad4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002c4ad4 {


u32 f_002c4ad4() {
    u32 r0 = 0;
    u32 r1 = 0;
    r1 = 0x94d92cu;  // (from the original)
    r0 = 0u;
    *gptr<u16>(r1 + 2u) = u16(r0);
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_002c4ad4
GUEST_EXPORT(0x002c4ad4, d_002c4ad4::f_002c4ad4);

// f_002c61e8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002c61e8 {

inline constexpr guest::Function<0x0014fb4c, u32(u32, u32, u32, u32)> call_0014fb4c;  // (from the original)
inline constexpr guest::Function<0x001e5df4, u32(u32, u32, u32, u32)> call_001e5df4;  // (from the original)
inline constexpr guest::Function<0x001e7de0, u32(u32, u32, u32, u32)> call_001e7de0;  // (from the original)
inline constexpr guest::Function<0x004f2d48, u32(u32, u32, u32, u32)> call_004f2d48;  // (from the original)

u32 f_002c61e8(u32 r0, u32 r1_unused, u32 r2, u32 r3) {
    u32 r1 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 0x28u;  // (from the original)
    r5 = r0;
    r1 = 0xcu;  // (from the original)
    r0 = r13 + 8u;
    guest::cpu()->r[13] = r13;
    r0 = call_001e5df4(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = 0xdu;  // (from the original)
    r0 = r13 + 0xcu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_001e5df4(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r4 = r5 + 0x3850u;  // (from the original)
    r6 = ~0u;
    r0 = *gptr<u32>(r4 + 0x38cu);  // (from the original)
    if (r0 != 0) {
        *gptr<u32>(r13) = u32(u32(*gptr<u8>(r13 + 9u)));
        *gptr<u32>(r13 + 4) = u32(r6);
        r3 = u32(*gptr<u8>(r13 + 0xau));  // (from the original)
        r2 = u32(*gptr<u8>(r13 + 0xbu));  // (from the original)
        r1 = 0u;
        guest::cpu()->r[13] = r13;
        r0 = call_004f2d48(r0, r1, r2, r3);
        r1 = 1u;
        *gptr<u32>(r13) = u32(u32(*gptr<u8>(r13 + 0xdu)));  // (from the original)
        *gptr<u32>(r13 + 4) = u32(r6);
        r3 = u32(*gptr<u8>(r13 + 0xeu));  // (from the original)
        r2 = u32(*gptr<u8>(r13 + 0xfu));  // (from the original)
        r0 = *gptr<u32>(r4 + 0x38cu);  // (from the original)
        guest::cpu()->r[13] = r13;
        r0 = call_004f2d48(r0, r1, r2, r3);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
    }
    r0 = *gptr<u32>(r4 + 0x390u);  // (from the original)
    if (r0 != 0) {
        *gptr<u32>(r13) = u32(u32(*gptr<u8>(r13 + 9u)));
        *gptr<u32>(r13 + 4) = u32(r6);
        r3 = u32(*gptr<u8>(r13 + 0xau));  // (from the original)
        r2 = u32(*gptr<u8>(r13 + 0xbu));  // (from the original)
        r1 = 0u;
        guest::cpu()->r[13] = r13;
        r0 = call_004f2d48(r0, r1, r2, r3);
        r1 = 1u;
        *gptr<u32>(r13) = u32(u32(*gptr<u8>(r13 + 0xdu)));  // (from the original)
        *gptr<u32>(r13 + 4) = u32(r6);
        r3 = u32(*gptr<u8>(r13 + 0xeu));  // (from the original)
        r2 = u32(*gptr<u8>(r13 + 0xfu));  // (from the original)
        r0 = *gptr<u32>(r4 + 0x390u);  // (from the original)
        guest::cpu()->r[13] = r13;
        r0 = call_004f2d48(r0, r1, r2, r3);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
    }
    r1 = 1u;
    r0 = r13 + 0x10u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_001e5df4(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0 = call_001e7de0(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    r2 = r0;
    r1 = r13 + 0x10u;  // (from the original)
    r0 = r5 + 0x3538u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0014fb4c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r13 = r13 + 0x28u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_002c61e8
GUEST_EXPORT(0x002c61e8, d_002c61e8::f_002c61e8);

// f_002c6b0c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002c6b0c {

struct __attribute__((packed)) Object_002c6b0c_0 {
    u32 word_0;
    u8 unknown_4[0x3cb4];  // (not used here)
    u32 word_3cb8;
};
GUEST_OFFSET(Object_002c6b0c_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_002c6b0c_0, word_3cb8, 0x3cb8);  // (from the original)

inline constexpr guest::Function<0x0014fb84, u32(u32, u32, u32, u32)> call_0014fb84;  // (from the original)
inline constexpr guest::Function<0x0018e970, u32(u32, u32, u32, u32)> call_0018e970;  // (from the original)
inline constexpr guest::Function<0x002f76ad, u32(u32, u32, u32, u32)> call_002f76ac;  // (from the original)
inline constexpr guest::Function<0x00317dec, u32(u32, u32, u32, u32)> call_00317dec;  // (from the original)
inline constexpr guest::Function<0x004f14ac, u32(u32, u32, u32, u32)> call_004f14ac;  // (from the original)
inline constexpr guest::Function<0x00521ae0, u32(u32, u32, u32, u32)> call_00521ae0;  // (from the original)
inline constexpr guest::Function<0x007c9cac, u32(u32, u32, u32, u32)> call_007c9cac;  // (from the original)
inline constexpr guest::Function<0x007ca3b8, u32(u32, u32, u32, u32)> call_007ca3b8;  // (from the original)

u32 f_002c6b0c(gptr<Object_002c6b0c_0> arg0) {
    u32 ea = 0;
    u32 r0 = arg0.addr();
    u32 r1 = 0;
    u32 r2 = 0;
    u32 r3 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 0x10;  // (from the original)
    r5 = 0x8f0aa8u;  // (from the original)
    r4 = r0 + 0x3cb8u;  // (from the original)
    arg0->word_0 = u32(0x8f2390u);  // (from the original)
    r1 = 0x53721cu;  // (from the original)
    r3 = 2u;
    r2 = 0x114u;  // (from the original)
    r0 = r0 + 0x3d18u;  // (from the original)
    arg0->word_3cb8 = u32(r5);
    guest::cpu()->r[13] = r13;
    r0 = call_002f76ac(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r4;
    guest::cpu()->r[13] = r13;
    r0 = call_007ca3b8(r0, r1, r2, r3);
    r4 = r0 - 0xd0u;  // (from the original)
    r1 = 0x60d5ccu;  // (from the original)
    r0 = r4;
    r3 = 4u;
    r2 = 0x34u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002f76ac(r0, r1, r2, r3);
    r4 = r4 - 0x398u;  // (from the original)
    r1 = 0x52b4c4u;  // (from the original)
    r0 = r4 + 0x28cu;  // (from the original)
    r3 = 4u;
    r2 = 0x40u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002f76ac(r0, r1, r2, r3);
    r1 = 0x53721cu;  // (from the original)
    r3 = 2u;
    r2 = 0x114u;  // (from the original)
    r0 = r4 + 0x60u;  // (from the original)
    *gptr<u32>(r4) = u32(r5);
    guest::cpu()->r[13] = r13;
    r0 = call_002f76ac(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r4;
    guest::cpu()->r[13] = r13;
    r0 = call_007ca3b8(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0x1cu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_004f14ac(r0, r1, r2, r3);
    r1 = 0x53721cu;  // (from the original)
    r3 = 2u;
    ea = r0 + 0xfffffd74u;  // (from the original)
    *gptr<u32>(ea) = u32(0x8f0a58u);  // (from the original)
    r4 = ea;
    r2 = 0x114u;  // (from the original)
    r0 = r4 + 0x60u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002f76ac(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r4;
    guest::cpu()->r[13] = r13;
    r0 = call_007c9cac(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 8u;
    guest::cpu()->r[13] = r13;
    r0 = call_00317dec(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0x68u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0014fb84(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0x3290u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0018e970(r0, r1, r2, r3);
    r0 = r0 - 0x10u;  // (from the original)
    r4 = r0 - 0x264u;  // (from the original)
    r1 = 0x5b1c68u;  // (from the original)
    r3 = 2u;
    r2 = 0x11cu;  // (from the original)
    r0 = r0 - 0x25cu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002f76ac(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r4;
    guest::cpu()->r[13] = r13;
    r0 = call_00317dec(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0x1cu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00317dec(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r13 = r13 + 0x10;  // (from the original)
    r0 = r0 - 0x18u;  // (from the original)
    guest::cpu()->r[13] = r13;
    return call_00521ae0(r0, r1, r2, r3);
}

}  // namespace d_002c6b0c
GUEST_EXPORT(0x002c6b0c, d_002c6b0c::f_002c6b0c);

// f_002c7060: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002c7060 {

inline constexpr guest::Function<0x004ee39c, u32(u32, u32, u32, u32)> call_004ee39c;  // (from the original)
inline constexpr guest::Function<0x00521a2c, u32(u32, u32, u32, u32)> call_00521a2c;  // (from the original)

u32 f_002c7060(u32 r0) {
    u32 r4 = guest::cpu()->r[4];
    guest::cpu()->r[13] -= 8u;
    r4 = r0;
    r0 = r0 + 0x18u;  // (from the original)
    r0 = call_004ee39c(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    r0 = r4;
    r0 = call_00521a2c(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    r0 = 2u;
    guest::cpu()->r[13] += 8u;
    return r0;
}

}  // namespace d_002c7060
GUEST_EXPORT(0x002c7060, d_002c7060::f_002c7060);

// f_002c71ec: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002c71ec {

inline constexpr guest::Function<0x002c83a8, u32(u32, u32, u32, u32)> call_002c83a8;  // (from the original)
inline constexpr guest::Function<0x002cc1b0, u32(u32, u32, u32, u32)> call_002cc1b0;  // (from the original)
inline constexpr guest::Function<0x002e354c, u32(u32, u32, u32, u32)> call_002e354c;  // (from the original)
inline constexpr guest::Function<0x002f77e8, u32(u32, u32, u32, u32)> call_002f77e8;  // (from the original)
inline constexpr guest::Function<0x002f8574, u32(u32, u32, u32, u32)> call_002f8574;  // (from the original)
inline constexpr guest::Function<0x002fbb30, u32(u32, u32, u32, u32)> call_002fbb30;  // (from the original)
inline constexpr guest::Function<0x002fc8e8, u32(u32, u32, u32, u32)> call_002fc8e8;  // (from the original)
inline constexpr guest::Function<0x002ff368, u32(u32, u32, u32, u32)> call_002ff368;  // (from the original)
inline constexpr guest::Function<0x00311c70, u32(u32, u32, u32, u32)> call_00311c70;  // (from the original)
inline constexpr guest::Function<0x0071ed64, u32(u32, u32, u32, u32)> call_0071ed64;  // (from the original)
inline constexpr guest::Function<0x00723f84, u32(u32, u32, u32, u32)> call_00723f84;  // (from the original)

u32 f_002c71ec(u32 r0, u32 r1, u32 r2) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r9 = guest::cpu()->r[9];
    u32 r10 = guest::cpu()->r[10];
    u32 r11 = guest::cpu()->r[11];
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 0x2a8u;  // (from the original)
    r7 = r0;
    r9 = r2;
    r10 = r1;
    guest::cpu()->r[13] = r13;
    r0 = call_002c83a8(r0, r1, r2, guest::cpu()->r[3]);
    r2 = guest::cpu()->r[2];
    r5 = r0;
    r1 = r9;
    r0 = r7;
    guest::cpu()->r[13] = r13;
    r0 = call_002c83a8(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r8 = r0;
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_002ff368(r0, r1, r2, guest::cpu()->r[3]);
    r6 = r13;
    r4 = r5;
    r2 = 0x31u;  // (from the original)
    r1 = r5;
    r0 = r6;
    guest::cpu()->r[13] = r13;
    r0 = call_002fbb30(r0, r1, r2, guest::cpu()->r[3]);
    r2 = 0x31u;  // (from the original)
    r1 = r4 + 0x34u;  // (from the original)
    r0 = r6 + 0x34u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002fbb30(r0, r1, r2, guest::cpu()->r[3]);
    r2 = 0x42u;  // (from the original)
    r1 = r4 + 0x68u;  // (from the original)
    r0 = r6 + 0x68u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002fbb30(r0, r1, r2, guest::cpu()->r[3]);
    r11 = 0x182u;  // (from the original)
    r1 = r4 + 0xaau;  // (from the original)
    r0 = r6 + 0xaau;  // (from the original)
    r2 = r11;
    guest::cpu()->r[13] = r13;
    r0 = call_002f8574(r0, r1, r2, guest::cpu()->r[3]);
    r2 = 0x42u;  // (from the original)
    r1 = r4 + 0x22cu;  // (from the original)
    r0 = r6 + 0x22cu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002fbb30(r0, r1, r2, guest::cpu()->r[3]);
    r2 = guest::cpu()->r[2];
    r1 = r4 + 0x274u;  // (from the original)
    *gptr<u8>(r13 + 0x26eu) = u8(u32(*gptr<u8>(r4 + 0x26eu)));  // (from the original)
    *gptr<u8>(r13 + 0x26fu) = u8(u32(*gptr<u8>(r4 + 0x26fu)));  // (from the original)
    *gptr<u8>(r13 + 0x270u) = u8(u32(*gptr<u8>(r4 + 0x270u)));  // (from the original)
    *gptr<u8>(r13 + 0x271u) = u8(u32(*gptr<u8>(r4 + 0x271u)));  // (from the original)
    *gptr<u8>(r13 + 0x272u) = u8(u32(*gptr<u8>(r4 + 0x272u)));  // (from the original)
    r0 = r6 + 0x274u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002fc8e8(r0, r1, r2, guest::cpu()->r[3]);
    r2 = guest::cpu()->r[2];
    r5 = r4;
    r1 = r4 + 0x278u;  // (from the original)
    r0 = r6 + 0x278u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00311c70(r0, r1, r2, guest::cpu()->r[3]);
    r4 = r8;
    r2 = 0x31u;  // (from the original)
    r1 = r8;
    r0 = r5;
    guest::cpu()->r[13] = r13;
    r0 = call_002fbb30(r0, r1, r2, guest::cpu()->r[3]);
    r2 = 0x31u;  // (from the original)
    r1 = r4 + 0x34u;  // (from the original)
    r0 = r5 + 0x34u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002fbb30(r0, r1, r2, guest::cpu()->r[3]);
    r2 = 0x42u;  // (from the original)
    r1 = r4 + 0x68u;  // (from the original)
    r0 = r5 + 0x68u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002fbb30(r0, r1, r2, guest::cpu()->r[3]);
    r2 = r11;
    r1 = r4 + 0xaau;  // (from the original)
    r0 = r5 + 0xaau;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002f8574(r0, r1, r2, guest::cpu()->r[3]);
    r2 = 0x42u;  // (from the original)
    r1 = r4 + 0x22cu;  // (from the original)
    r0 = r5 + 0x22cu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002fbb30(r0, r1, r2, guest::cpu()->r[3]);
    r2 = guest::cpu()->r[2];
    r1 = r4 + 0x274u;  // (from the original)
    *gptr<u8>(r5 + 0x26eu) = u8(u32(*gptr<u8>(r4 + 0x26eu)));  // (from the original)
    *gptr<u8>(r5 + 0x26fu) = u8(u32(*gptr<u8>(r4 + 0x26fu)));  // (from the original)
    *gptr<u8>(r5 + 0x270u) = u8(u32(*gptr<u8>(r4 + 0x270u)));  // (from the original)
    *gptr<u8>(r5 + 0x271u) = u8(u32(*gptr<u8>(r4 + 0x271u)));  // (from the original)
    *gptr<u8>(r5 + 0x272u) = u8(u32(*gptr<u8>(r4 + 0x272u)));  // (from the original)
    r0 = r5 + 0x274u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002fc8e8(r0, r1, r2, guest::cpu()->r[3]);
    r2 = guest::cpu()->r[2];
    r1 = r4 + 0x278u;  // (from the original)
    r0 = r5 + 0x278u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00311c70(r0, r1, r2, guest::cpu()->r[3]);
    r5 = r13;
    r4 = r8;
    r2 = 0x31u;  // (from the original)
    r1 = r5;
    r0 = r8;
    guest::cpu()->r[13] = r13;
    r0 = call_002fbb30(r0, r1, r2, guest::cpu()->r[3]);
    r2 = 0x31u;  // (from the original)
    r1 = r5 + 0x34u;  // (from the original)
    r0 = r4 + 0x34u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002fbb30(r0, r1, r2, guest::cpu()->r[3]);
    r2 = 0x42u;  // (from the original)
    r1 = r5 + 0x68u;  // (from the original)
    r0 = r4 + 0x68u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002fbb30(r0, r1, r2, guest::cpu()->r[3]);
    r2 = r11;
    r1 = r5 + 0xaau;  // (from the original)
    r0 = r4 + 0xaau;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002f8574(r0, r1, r2, guest::cpu()->r[3]);
    r2 = 0x42u;  // (from the original)
    r1 = r5 + 0x22cu;  // (from the original)
    r0 = r4 + 0x22cu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002fbb30(r0, r1, r2, guest::cpu()->r[3]);
    r2 = guest::cpu()->r[2];
    r1 = r5 + 0x274u;  // (from the original)
    *gptr<u8>(r4 + 0x26eu) = u8(u32(*gptr<u8>(r13 + 0x26eu)));  // (from the original)
    *gptr<u8>(r4 + 0x26fu) = u8(u32(*gptr<u8>(r13 + 0x26fu)));  // (from the original)
    *gptr<u8>(r4 + 0x270u) = u8(u32(*gptr<u8>(r13 + 0x270u)));  // (from the original)
    *gptr<u8>(r4 + 0x271u) = u8(u32(*gptr<u8>(r13 + 0x271u)));  // (from the original)
    *gptr<u8>(r4 + 0x272u) = u8(u32(*gptr<u8>(r13 + 0x272u)));  // (from the original)
    r0 = r4 + 0x274u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002fc8e8(r0, r1, r2, guest::cpu()->r[3]);
    r2 = guest::cpu()->r[2];
    r1 = r5 + 0x278u;  // (from the original)
    r0 = r4 + 0x278u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00311c70(r0, r1, r2, guest::cpu()->r[3]);
    r2 = guest::cpu()->r[2];
    r1 = r10;
    r0 = r7 + 0x294u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0071ed64(r0, r1, r2, guest::cpu()->r[3]);
    r2 = guest::cpu()->r[2];
    r4 = r7 + 0x37b8u;  // (from the original)
    r1 = r10;
    if (r0 != 0) {
        r0 = r7 + 0x294u;  // (from the original)
        guest::cpu()->r[13] = r13;
        r0 = call_002cc1b0(r0, r1, r2, guest::cpu()->r[3]);
        r2 = guest::cpu()->r[2];
        goto L_2c7438;
    }
    r0 = r4;
    guest::cpu()->r[13] = r13;
    r0 = call_00723f84(r0, r1, r2, guest::cpu()->r[3]);
    r2 = guest::cpu()->r[2];
    if (r0 == 0) {
        goto L_2c7438;
    }
    r1 = r10;
    r0 = r4;
    guest::cpu()->r[13] = r13;
    r0 = call_002e354c(r0, r1, r2, guest::cpu()->r[3]);
    r2 = guest::cpu()->r[2];
L_2c7438:;
    r1 = r9;
    r0 = r7 + 0x294u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0071ed64(r0, r1, r2, guest::cpu()->r[3]);
    r2 = guest::cpu()->r[2];
    r1 = r9;
    if (r0 != 0) {
        r0 = r7 + 0x294u;  // (from the original)
        guest::cpu()->r[13] = r13;
        r0 = call_002cc1b0(r0, r1, r2, guest::cpu()->r[3]);
        r2 = guest::cpu()->r[2];
        goto L_2c7484;
    }
    r0 = r4;
    guest::cpu()->r[13] = r13;
    r0 = call_00723f84(r0, r1, r2, guest::cpu()->r[3]);
    r2 = guest::cpu()->r[2];
    if (r0 == 0) {
        goto L_2c7484;
    }
    r1 = r9;
    r0 = r4;
    guest::cpu()->r[13] = r13;
    r0 = call_002e354c(r0, r1, r2, guest::cpu()->r[3]);
    r2 = guest::cpu()->r[2];
L_2c7484:;
    r1 = r10;
    r0 = r7 + 0x294u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0071ed64(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    if (r0 == 0) {
        r1 = r9;
        r0 = r7 + 0x294u;  // (from the original)
        guest::cpu()->r[13] = r13;
        r0 = call_0071ed64(r0, r1, r2, guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        if (r0 == 0) {
            goto L_2c74c4;
        }
    }
    r7 = r7 + 0x6c48u;  // (from the original)
    *gptr<u8>(r7) = u8(1u);
L_2c74c4:;
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_002f77e8(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r13 = r13 + 0x2a8u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_002c71ec
GUEST_EXPORT(0x002c71ec, d_002c71ec::f_002c71ec);

// f_002c85bc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002c85bc {

struct __attribute__((packed)) Object_002c85bc_0 {
    u32 word_0;
    u8 unknown_4[0x24];  // (not used here)
    u32 word_28;
    u8 unknown_2c[0x66b8];  // (not used here)
    u32 word_66e4;
    u8 unknown_66e8[0x4ec];  // (not used here)
    u32 word_6bd4;
};
GUEST_OFFSET(Object_002c85bc_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_002c85bc_0, word_28, 0x28);  // (from the original)
GUEST_OFFSET(Object_002c85bc_0, word_66e4, 0x66e4);  // (from the original)
GUEST_OFFSET(Object_002c85bc_0, word_6bd4, 0x6bd4);  // (from the original)

inline constexpr guest::Function<0x002684c0, u32(u32, u32, u32, u32)> call_002684c0;  // (from the original)
inline constexpr guest::Function<0x002f76ad, u32(u32, u32, u32, u32)> call_002f76ac;  // (from the original)
inline constexpr guest::Function<0x002f7710, u32(u32, u32, u32, u32)> call_002f7710;  // (from the original)
inline constexpr guest::Function<0x003288a4, u32(u32, u32, u32, u32)> call_003288a4;  // (from the original)
inline constexpr guest::Function<0x00567ef0, u32(u32, u32, u32, u32)> call_00567ef0;  // (from the original)
inline constexpr guest::Function<0x0056988c, u32(u32, u32, u32, u32)> call_0056988c;  // (from the original)
inline constexpr guest::Function<0x005bf744, u32(u32, u32, u32, u32)> call_005bf744;  // (from the original)
inline constexpr guest::Function<0x005e3194, u32(u32, u32, u32, u32)> call_005e3194;  // (from the original)
inline constexpr guest::Function<0x005e8a7c, u32(u32, u32, u32, u32)> call_005e8a7c;  // (from the original)
inline constexpr guest::Function<0x006aaa30, u32(u32, u32, u32, u32)> call_006aaa30;  // (from the original)

u32 f_002c85bc(gptr<Object_002c85bc_0> arg0, u32 r1_unused, u32 r2_unused, u32 r3) {
    u32 ea = 0;
    u32 r0 = arg0.addr();
    u32 r1 = 0;
    u32 r2 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r13 = guest::cpu()->r[13];
    r2 = 0x8f2448u;  // (from the original)
    r13 = r13 - 8;
    arg0->word_28 = u32(r2 + 0x6cu);  // (from the original)
    arg0->word_0 = u32(r2);
    arg0->word_6bd4 = u32(0x90a030u);  // (from the original)
    r1 = 0x8f47a0u;  // (from the original)
    arg0->word_66e4 = u32(r1);
    r0 = r0 + 0x6b00u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_005e3194(r0, r1, r2, r3);
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
    r0 = r0 - 0x15cu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_005bf744(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0x24cu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00567ef0(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0xc88u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_005e8a7c(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = 0x8f08acu;  // (from the original)
    ea = r0 - 0x118u;  // (from the original)
    *gptr<u32>(ea) = u32(r1);
    r0 = ea;
    guest::cpu()->r[13] = r13;
    r0 = call_002f7710(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0x21b0u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_003288a4(r0, r1, r2, r3);
    r3 = 0x8f26b8u;  // (from the original)
    r0 = r0 - 0x3524u;  // (from the original)
    *gptr<u32>(r0 + 0xa40u) = u32(r3 + 0x2cu);  // (from the original)
    *gptr<u32>(r0) = u32(r3);
    *gptr<u32>(0x1888u + r0) = u32(r3 + 0x40u);  // (from the original)
    r2 = 0x8ee248u;  // (from the original)
    r0 = r0 + 0x33dcu;  // (from the original)
    r1 = r2 + 0x10u;  // (from the original)
    *gptr<u32>(r0) = u32(r2);
    r0 = r0 + 0xcu;  // (from the original)
    *gptr<u32>(r0) = u32(r1);
    r0 = r0 + 0x108u;  // (from the original)
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
    r1 = 0x2e3854u;  // (from the original)
    r4 = r0 - 0x33fcu;  // (from the original)
    r3 = 0xau;  // (from the original)
    r2 = 0x2b4u;  // (from the original)
    r0 = r0 - 0x1b28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002f76ac(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r4 + 0x18acu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0056988c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0x18acu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002684c0(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0x248u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00567ef0(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r13 = r13 + 8;
    r0 = r0 - 0x4cu;  // (from the original)
    guest::cpu()->r[13] = r13;
    return call_006aaa30(r0, r1, r2, r3);
}

}  // namespace d_002c85bc
GUEST_EXPORT(0x002c85bc, d_002c85bc::f_002c85bc);

// f_002c8f70: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002c8f70 {

struct __attribute__((packed)) Object_002c8f70_0 {
    u32 word_0;
    u8 unknown_4[0x24];  // (not used here)
    u32 word_28;
    u8 unknown_2c[0x2234];  // (not used here)
    u32 word_2260;
    u8 unknown_2264[0x394];  // (not used here)
    u32 word_25f8;
    u8 unknown_25fc[0xe0];  // (not used here)
    u32 word_26dc;
};
GUEST_OFFSET(Object_002c8f70_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_002c8f70_0, word_28, 0x28);  // (from the original)
GUEST_OFFSET(Object_002c8f70_0, word_2260, 0x2260);  // (from the original)
GUEST_OFFSET(Object_002c8f70_0, word_25f8, 0x25f8);  // (from the original)
GUEST_OFFSET(Object_002c8f70_0, word_26dc, 0x26dc);  // (from the original)

inline constexpr guest::Function<0x002f76ad, u32(u32, u32, u32, u32)> call_002f76ac;  // (from the original)
inline constexpr guest::Function<0x002f770c, u32(u32, u32, u32, u32)> call_002f770c;  // (from the original)
inline constexpr guest::Function<0x002f7710, u32(u32, u32, u32, u32)> call_002f7710;  // (from the original)
inline constexpr guest::Function<0x00567ef0, u32(u32, u32, u32, u32)> call_00567ef0;  // (from the original)
inline constexpr guest::Function<0x0056988c, u32(u32, u32, u32, u32)> call_0056988c;  // (from the original)
inline constexpr guest::Function<0x005bf744, u32(u32, u32, u32, u32)> call_005bf744;  // (from the original)
inline constexpr guest::Function<0x005d703c, u32(u32, u32, u32, u32)> call_005d703c;  // (from the original)
inline constexpr guest::Function<0x005e3194, u32(u32, u32, u32, u32)> call_005e3194;  // (from the original)
inline constexpr guest::Function<0x006aaa30, u32(u32, u32, u32, u32)> call_006aaa30;  // (from the original)

u32 f_002c8f70(gptr<Object_002c8f70_0> arg0) {
    u32 ea = 0;
    u32 r0 = arg0.addr();
    u32 r1 = 0;
    u32 r2 = 0;
    u32 r3 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r13 = guest::cpu()->r[13];
    r1 = 0x8f24c8u;  // (from the original)
    r13 = r13 - 8;
    arg0->word_28 = u32(r1 + 0x6cu);  // (from the original)
    arg0->word_0 = u32(r1);
    r4 = r0 + 0x25f8u;  // (from the original)
    r3 = 2u;
    arg0->word_2260 = u32(0x8ee228u);  // (from the original)
    r2 = 0x8ef284u;  // (from the original)
    r0 = r0 + 0x2710u;  // (from the original)
    arg0->word_25f8 = u32(r2);
    arg0->word_26dc = u32(r2 + 0x44u);  // (from the original)
    r2 = 0x518u;  // (from the original)
    r1 = 0x2e0b3cu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002f76ac(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r4;
    guest::cpu()->r[13] = r13;
    r0 = call_002f770c(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = 0x8f18f4u;  // (from the original)
    *gptr<u32>(r0 - 0x398u) = u32(r1);  // (from the original)
    r0 = r0 - 0x248u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00567ef0(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0x14cu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_005bf744(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = 0x8f8b4cu;  // (from the original)
    *gptr<u32>(r0 - 0x954u) = u32(r1);  // (from the original)
    r0 = r0 - 0x44u;  // (from the original)
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
    r0 = r0 - 0xd0u;  // (from the original)
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
    r0 = r0 - 0xc4u;  // (from the original)
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
    r0 = r0 - 0xc4u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_005e3194(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0x100u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_005d703c(r0, r1, r2, r3);
    r1 = 0x2b6ef8u;  // (from the original)
    ea = r0 + 0xffffe71cu;  // (from the original)
    *gptr<u32>(ea) = u32(0x8f978cu);  // (from the original)
    r4 = ea;
    r3 = 0xcu;  // (from the original)
    r2 = 0xe0u;  // (from the original)
    r0 = r4 + 0xe40u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002f76ac(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r4 + 0xd5cu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002f7710(r0, r1, r2, r3);
    r1 = 0x6eed5cu;  // (from the original)
    r4 = r0 - 0xd5cu;  // (from the original)
    r3 = 0xcu;  // (from the original)
    r2 = 0xc4u;  // (from the original)
    r0 = r0 - 0x930u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002f76ac(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r4 + 0x3e0u;  // (from the original)
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
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r13 = r13 + 8;
    r0 = r0 - 0x74u;  // (from the original)
    guest::cpu()->r[13] = r13;
    return call_006aaa30(r0, r1, r2, r3);
}

}  // namespace d_002c8f70
GUEST_EXPORT(0x002c8f70, d_002c8f70::f_002c8f70);

// f_002caabc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002caabc {

inline constexpr guest::Function<0x002fa9d0, u32(u32, u32, u32, u32)> call_002fa9d0;  // (from the original)
inline constexpr guest::Function<0x003193e8, u32(u32, u32, u32, u32)> call_003193e8;  // (from the original)
inline constexpr guest::Function<0x005b19e8, u32(u32, u32, u32, u32)> call_005b19e8;  // (from the original)
inline constexpr guest::Function<0x005b1a08, u32(u32, u32, u32, u32)> call_005b1a08;  // (from the original)
inline constexpr guest::Function<0x005b1a1c, u32(u32, u32, u32, u32)> call_005b1a1c;  // (from the original)
inline constexpr guest::Function<0x00755ad4, u32(u32, u32, u32, u32)> call_00755ad4;  // (from the original)

u32 f_002caabc(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 0x20u;  // (from the original)
    r4 = r0;
    r6 = r13;
    r5 = r1;
    r0 = r1;
    guest::cpu()->r[13] = r13;
    r0 = call_002fa9d0(r0, r1, r2, r3);
    r3 = ~0u;
    r1 = r0;
    r2 = r3;
    r0 = r5;
    guest::cpu()->r[13] = r13;
    r0 = call_003193e8(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r5 = r0;
    r0 = r6;
    guest::cpu()->r[13] = r13;
    r0 = call_005b1a1c(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = r5;
    guest::cpu()->r[13] = r13;
    r0 = call_005b19e8(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = r13;
    r0 = r13 + 8u;
    guest::cpu()->r[13] = r13;
    r0 = call_005b1a08(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r5 = r0;
    r6 = 0u;
    r4 = *gptr<u32>(0x1368u + r4);  // (from the original)
    if (r4 == 0) {
        goto L_2cab50;
    }
    do {
L_2cab24:;
        r1 = r4 + 0xcu;  // (from the original)
        r0 = r5;
        guest::cpu()->r[13] = r13;
        r0 = call_00755ad4(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        if (!(r0 == 0)) {
            r6 = r4 + 0x14u;  // (from the original)
            goto L_2cab50;
        }
        r4 = *gptr<u32>(r4 + 8u);
        guest::preempt();
    } while (r4 != 0);
L_2cab50:;
    r0 = r6;
    r13 = r13 + 0x20u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_002caabc
GUEST_EXPORT(0x002caabc, d_002caabc::f_002caabc);

// f_002cab78: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002cab78 {

inline constexpr guest::Function<0x002fa9d0, u32(u32, u32, u32, u32)> call_002fa9d0;  // (from the original)
inline constexpr guest::Function<0x003193e8, u32(u32, u32, u32, u32)> call_003193e8;  // (from the original)
inline constexpr guest::Function<0x005b19e8, u32(u32, u32, u32, u32)> call_005b19e8;  // (from the original)
inline constexpr guest::Function<0x005b1a08, u32(u32, u32, u32, u32)> call_005b1a08;  // (from the original)
inline constexpr guest::Function<0x005b1a1c, u32(u32, u32, u32, u32)> call_005b1a1c;  // (from the original)
inline constexpr guest::Function<0x00755ad4, u32(u32, u32, u32, u32)> call_00755ad4;  // (from the original)

u32 f_002cab78(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 0x20u;  // (from the original)
    r4 = r0;
    r5 = 0x2cac2cu;  // (from the original)
    r6 = r13;
    r0 = r5;
    guest::cpu()->r[13] = r13;
    r0 = call_002fa9d0(r0, r1, r2, r3);
    r3 = ~0u;
    r1 = r0;
    r2 = r3;
    r0 = r5;
    guest::cpu()->r[13] = r13;
    r0 = call_003193e8(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r5 = r0;
    r0 = r6;
    guest::cpu()->r[13] = r13;
    r0 = call_005b1a1c(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = r5;
    guest::cpu()->r[13] = r13;
    r0 = call_005b19e8(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = r13;
    r0 = r13 + 8u;
    guest::cpu()->r[13] = r13;
    r0 = call_005b1a08(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r4 = *gptr<u32>(r4 + 0x13cu);  // (from the original)
    r5 = r0;
    r6 = 0u;
    if (r4 == 0) {
        goto L_2cac08;
    }
    do {
L_2cabdc:;
        r1 = r4 + 0xcu;  // (from the original)
        r0 = r5;
        guest::cpu()->r[13] = r13;
        r0 = call_00755ad4(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        if (!(r0 == 0)) {
            r6 = r4 + 0x14u;  // (from the original)
            goto L_2cac08;
        }
        r4 = *gptr<u32>(r4 + 8u);
        guest::preempt();
    } while (r4 != 0);
L_2cac08:;
    r0 = r6;
    r13 = r13 + 0x20u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_002cab78
GUEST_EXPORT(0x002cab78, d_002cab78::f_002cab78);

// f_002cae6c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002cae6c {

struct __attribute__((packed)) Object_002cae6c_0 {
    u8 unknown_0[0x13c];  // (not used here)
    u8 byte_13c;
    u8 unknown_13d[0x3];  // (not used here)
    u32 word_140;
    u32 word_144;
    u32 word_148;
    u32 word_14c;
};
GUEST_OFFSET(Object_002cae6c_0, byte_13c, 0x13c);  // (from the original)
GUEST_OFFSET(Object_002cae6c_0, word_140, 0x140);  // (from the original)
GUEST_OFFSET(Object_002cae6c_0, word_144, 0x144);  // (from the original)
GUEST_OFFSET(Object_002cae6c_0, word_148, 0x148);  // (from the original)
GUEST_OFFSET(Object_002cae6c_0, word_14c, 0x14c);  // (from the original)

struct __attribute__((packed)) Object_002cae6c_1 {
    u8 unknown_0[0x48];  // (not used here)
    u32 word_48;
    u32 word_4c;
    u8 unknown_50[0x3c];  // (not used here)
    u32 word_8c;
    u8 unknown_90[0xc];  // (not used here)
    u32 word_9c;
};
GUEST_OFFSET(Object_002cae6c_1, word_48, 0x48);  // (from the original)
GUEST_OFFSET(Object_002cae6c_1, word_4c, 0x4c);  // (from the original)
GUEST_OFFSET(Object_002cae6c_1, word_8c, 0x8c);  // (from the original)
GUEST_OFFSET(Object_002cae6c_1, word_9c, 0x9c);  // (from the original)


u32 f_002cae6c(gptr<Object_002cae6c_0> arg0, gptr<Object_002cae6c_1> arg1) {
    u32 r0 = arg0.addr();
    u32 r1 = arg1.addr();
    float S0 = 0;
    float S1 = 0;
    float S2 = 0;
    float S3 = 0;
    float S4 = 0;
    float S5 = 0;
    float S6 = 0;
    S2 = std::bit_cast<float>(arg1->word_48);
    S3 = std::bit_cast<float>(arg1->word_4c);
    S4 = std::bit_cast<float>(*gptr<u32>(0x2caebcu));  // (from the original)
    S6 = std::bit_cast<float>(*gptr<u32>(0x2caec0u));  // (from the original)
    S0 = std::bit_cast<float>(arg1->word_8c) + S2 * S4;
    S1 = std::bit_cast<float>(arg1->word_9c) - S3 * S4;
    S5 = std::bit_cast<float>(*gptr<u32>(0x2caec4u));  // (from the original)
    r1 = 1u;
    arg0->byte_13c = u8(r1);
    S4 = S6 - S0;
    S0 = S1 + S5;
    arg0->word_140 = u32(std::bit_cast<u32>(S4));
    arg0->word_144 = u32(std::bit_cast<u32>(S0));
    r0 = r0 + 0x148u;  // (from the original)
    arg0->word_148 = u32(std::bit_cast<u32>(S2));
    arg0->word_14c = u32(std::bit_cast<u32>(S3));
    guest::cpu()->r[1] = r1;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    return r0;
}

}  // namespace d_002cae6c
GUEST_EXPORT(0x002cae6c, d_002cae6c::f_002cae6c);

// f_002cb150: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002cb150 {

inline constexpr guest::Function<0x002f825c, u32(u32, u32, u32, u32)> call_002f825c;  // (from the original)
inline constexpr guest::Function<0x003083bc, u32(u32, u32, u32, u32)> call_003083bc;  // (from the original)
inline constexpr guest::Function<0x005e2e50, u32(u32, u32, u32, u32)> call_005e2e50;  // (from the original)
inline constexpr guest::Function<0x005e2f94, u32(u32, u32, u32, u32)> call_005e2f94;  // (from the original)
inline constexpr guest::Function<0x005ea8dc, u32(u32, u32, u32, u32)> call_005ea8dc;  // (from the original)
inline constexpr guest::Function<0x005ea8f8, u32(u32, u32, u32, u32)> call_005ea8f8;  // (from the original)
inline constexpr guest::Function<0x005ea964, u32(u32, u32, u32, u32)> call_005ea964;  // (from the original)
inline constexpr guest::Function<0x005f4bfc, u32(u32, u32, u32, u32)> call_005f4bfc;  // (from the original)

u32 f_002cb150(u32 r0, u32 r1_unused, u32 r2_unused, u32 r3) {
    u32 ea = 0;
    u32 res = 0;
    u32 r1 = 0;
    u32 r2 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 0xb8u;  // (from the original)
    r6 = r0;
    r0 = r13 + 8u;
    r2 = 0x40u;  // (from the original)
    r1 = r13 + 0x20u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_003083bc(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r5 = 0x90a228u;  // (from the original)
    *gptr<u32>(r0) = u32(r5);
    r0 = r0 + 0xcu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_005f4bfc(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r4 = r0 - 0xcu;  // (from the original)
    r1 = 0x80u;  // (from the original)
    r0 = r0 + 0xcu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002f825c(r0, r1, r2, r3);
    r2 = 0x8906ecu;  // (from the original)
    r0 = r4 + 0x18u;  // (from the original)
    r4 = 0u;
    r0 = r0 - 2u;
    r1 = 0x20u;  // (from the original)
    do {
L_2cb19c:;
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
    r7 = 0x95deccu;  // (from the original)
    r1 = 0u;
    r0 = *gptr<u32>(r7);
    guest::cpu()->r[13] = r13;
    r0 = call_005ea8f8(r0, r1, r2, r3);
    *gptr<u32>(r13) = u32(r4);
    r2 = 0x879e2cu;  // (from the original)
    r0 = *gptr<u32>(r7);
    r3 = 0x1d8u;  // (from the original)
    r1 = r13 + 8u;
    guest::cpu()->r[13] = r13;
    r0 = call_005ea964(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = *gptr<u32>(r7);
    r1 = 0u;
    guest::cpu()->r[13] = r13;
    r0 = call_005ea8dc(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r6 + 0xd24u;  // (from the original)
    r1 = r13 + 8u;
    r4 = r0;
    guest::cpu()->r[13] = r13;
    r0 = call_005e2e50(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r4;
    guest::cpu()->r[13] = r13;
    r0 = call_005e2f94(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    *gptr<u32>(r13 + 8u) = u32(r5);
    r0 = r13 + 8u;
    r13 = r13 + 0xb8u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_002cb150
GUEST_EXPORT(0x002cb150, d_002cb150::f_002cb150);

// f_002cb8e4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002cb8e4 {

struct __attribute__((packed)) Object_002cb8e4_0 {
    u8 unknown_0[0xd04];  // (not used here)
    u32 word_d04;
    u8 unknown_d08[0x7fc];  // (not used here)
    u32 word_1504;
};
GUEST_OFFSET(Object_002cb8e4_0, word_d04, 0xd04);  // (from the original)
GUEST_OFFSET(Object_002cb8e4_0, word_1504, 0x1504);  // (from the original)


u32 f_002cb8e4(gptr<Object_002cb8e4_0> arg0, float S0, float S1) {
    u32 r0 = arg0.addr();
    u32 r1 = 0;
    u32 r2 = 0;
    u32 r3 = 0;
    u32 r12 = 0;
    float S2 = 0;
    r3 = r0 + 0x1504u;  // (from the original)
    r2 = r0 + 0xd04u;  // (from the original)
    if (arg0->word_1504 != 0) {
        r0 = arg0->word_d04;
        r1 = u32(*gptr<u8>(r0 + 0xb7u)) & 0xfeu;  // (from the original)
        *gptr<u8>(r0 + 0xb7u) = u8(r1);  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->s[0] = S0;
        guest::cpu()->s[1] = S1;
        return r0;
    }
    r1 = *gptr<u32>(r0 + 0xd04u);  // (from the original)
    *gptr<u8>(r1 + 0xb7u) = u8(u32(*gptr<u8>(r1 + 0xb7u)) & 0xfeu | 1u);  // (from the original)
    r1 = r0 + 0x11e8u;  // (from the original)
    S1 = std::bit_cast<float>(*gptr<u32>(r1 + 0x324u));  // (from the original)
    S2 = std::bit_cast<float>(*gptr<u32>(r1 + 0x348u));  // (from the original)
    r1 = *gptr<u32>(r2);
    S1 = S1 + float(s32(std::bit_cast<u32>(std::bit_cast<float>(*gptr<u32>(r3))))) * S2;
    S2 = std::bit_cast<float>(*gptr<u32>(r0 + 0x1644u));  // (from the original)
    r0 = *gptr<u32>(r2);
    S0 = std::bit_cast<float>(*gptr<u32>(r1 + 0x28u));  // (from the original)
    r1 = *gptr<u32>(r1 + 0x30u);  // (from the original)
    r12 = r0 + 0x28u;  // (from the original)
    S1 = S2 + S1;
    *gptr<u32>(r12) = u32(std::bit_cast<u32>(S0));
    *gptr<u32>(r12 + 4) = u32(std::bit_cast<u32>(S1));
    *gptr<u32>(r0 + 0x30u) = u32(r1);  // (from the original)
    r1 = u32(*gptr<u8>(r0 + 0xb7u)) & 0xcfu;  // (from the original)
    *gptr<u8>(r0 + 0xb7u) = u8(r1);  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    return r0;
}

}  // namespace d_002cb8e4
GUEST_EXPORT(0x002cb8e4, d_002cb8e4::f_002cb8e4);

// f_002cbad8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002cbad8 {

struct __attribute__((packed)) Object_002cbad8_0 {
    u32 word_0;
};
GUEST_OFFSET(Object_002cbad8_0, word_0, 0x0);  // (from the original)

inline constexpr guest::Function<0x001cb8fc, u32(u32, u32, u32, u32)> call_001cb8fc;  // (from the original)
inline constexpr guest::Function<0x002b7c94, u32(u32, u32, u32, u32)> call_002b7c94;  // (from the original)
inline constexpr guest::Function<0x002f76ad, u32(u32, u32, u32, u32)> call_002f76ac;  // (from the original)
inline constexpr guest::Function<0x002f7710, u32(u32, u32, u32, u32)> call_002f7710;  // (from the original)
inline constexpr guest::Function<0x00567ef0, u32(u32, u32, u32, u32)> call_00567ef0;  // (from the original)
inline constexpr guest::Function<0x0056988c, u32(u32, u32, u32, u32)> call_0056988c;  // (from the original)
inline constexpr guest::Function<0x005bf744, u32(u32, u32, u32, u32)> call_005bf744;  // (from the original)
inline constexpr guest::Function<0x005e3194, u32(u32, u32, u32, u32)> call_005e3194;  // (from the original)

u32 f_002cbad8(gptr<Object_002cbad8_0> arg0, u32 r1_unused, u32 r2, u32 r3) {
    u32 r0 = arg0.addr();
    u32 r1 = 0;
    u32 r4 = guest::cpu()->r[4];
    r1 = 0x8f2638u;  // (from the original)
    guest::cpu()->r[13] -= 8u;
    arg0->word_0 = u32(r1);
    r0 = r0 + 0x1650u;  // (from the original)
    r0 = call_002b7c94(r0, r1, r2, r3);
    r1 = 0x1c81ccu;  // (from the original)
    r4 = r0 - 0x1650u;  // (from the original)
    r3 = 7u;
    r2 = 0x1cu;  // (from the original)
    r0 = r0 - 0xd0u;  // (from the original)
    r0 = call_002f76ac(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = 0x8f0888u;  // (from the original)
    r0 = r4 + 0x13f0u;  // (from the original)
    *gptr<u32>(r4 + 0xde8u) = u32(r1);  // (from the original)
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
    r0 = r0 - 0xc8u;  // (from the original)
    r0 = call_005e3194(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0x4cu;  // (from the original)
    r0 = call_0056988c(r0, r1, r2, r3);
    r1 = 0x2caf00u;  // (from the original)
    r4 = r0 - 0xcd8u;  // (from the original)
    r3 = 7u;
    r2 = 0x198u;  // (from the original)
    r0 = r0 - 0xb28u;  // (from the original)
    r0 = call_002f76ac(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r4;
    guest::cpu()->r[13] += 8u;
    return call_001cb8fc(r0, r1, r2, r3);
}

}  // namespace d_002cbad8
GUEST_EXPORT(0x002cbad8, d_002cbad8::f_002cbad8);

// f_002cbbbc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002cbbbc {

inline constexpr guest::Function<0x002fb94c, u32(u32, u32, u32, u32)> call_002fb94c;  // (from the original)
inline constexpr guest::Function<0x007200fc, u32(u32, u32, u32, u32)> call_007200fc;  // (from the original)

u32 f_002cbbbc(u32 r0, u32 r1) {
    u32 res = 0;
    u32 r4 = guest::cpu()->r[4];
    guest::cpu()->r[13] -= 8u;
    r4 = r0;
    r0 = call_002fb94c(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r0 = r0 + 0x6f10u;  // (from the original)
    r1 = *gptr<u32>(r4 + (*gptr<u32>(0x185cu + r4) << 2) + 0x1860u) - 1u;  // (from the original)
    r0 = call_007200fc(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    res = r0;
    if (res >> 0x1f != (r0 & (r0 ^ res)) >> 0x1f) {  // (from the original)
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r1 = *gptr<u32>(r4 + 0x3ca0u);  // (from the original)
    r0 = r0 + r1;
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_002cbbbc
GUEST_EXPORT(0x002cbbbc, d_002cbbbc::f_002cbbbc);

// f_002cbea4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002cbea4 {

inline constexpr guest::Function<0x002d49d8, u32(u32, u32, u32, u32)> call_002d49d8;  // (from the original)
inline constexpr guest::Function<0x002fb94c, u32(u32, u32, u32, u32)> call_002fb94c;  // (from the original)

u32 f_002cbea4(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 res = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r4 = r0;
    r5 = r1;
    r6 = r2;
    r0 = call_002fb94c(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    r1 = *gptr<u32>(0x3ca0u + r4);  // (from the original)
    res = r1 - r5;
    if (!(!u32(res == 0) && res >> 0x1f == ((r1 ^ r5) & (r1 ^ res)) >> 0x1f)) {  // (from the original)
        r3 = r1 + 0xau;  // (from the original)
        r2 = r5;
        if (u32(r3 >= r5) && !u32(r3 == r5)) {
            r1 = r2 - r1;
            goto L_2cbee0;
        }
    }
    r1 = ~0u;
L_2cbee0:;
    r0 = r0 + 0x6f10u;  // (from the original)
    r2 = *gptr<u32>(r4 + (*gptr<u32>(0x185cu + r4) << 2) + 0x1860u) - 1u;  // (from the original)
    r1 = r1 + (r2 + (r2 << 2) << 1);
    r2 = r6;
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    return call_002d49d8(r0, r1, r2, r3);
}

}  // namespace d_002cbea4
GUEST_EXPORT(0x002cbea4, d_002cbea4::f_002cbea4);

// f_002cc00c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002cc00c {

inline constexpr guest::Function<0x002682ac, u32(u32, u32, u32, u32)> call_002682ac;  // (from the original)
inline constexpr guest::Function<0x002cdcb0, u32(u32, u32, u32, u32)> call_002cdcb0;  // (from the original)
inline constexpr guest::Function<0x00301d0d, u32(u32, u32, u32, u32)> call_00301d0c;  // (from the original)

u32 f_002cc00c(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 ea = 0;
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 0x10;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002682ac(r0, r1, r2, r3);
    r1 = 0x8f2674u;  // (from the original)
    r3 = 0xau;  // (from the original)
    *gptr<u32>(r0 + 0xa40u) = u32(r1 + 0x30u);  // (from the original)
    *gptr<u32>(r0) = u32(r1);
    r1 = 0x2b9440u;  // (from the original)
    r2 = 0x36cu;  // (from the original)
    r0 = r0 + 0x1888u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00301d0c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 + 0x2238u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002cdcb0(r0, r1, r2, r3);
    r2 = 0x3ca0u;  // (from the original)
    r0 = r0 - 0x3ac0u;  // (from the original)
    r1 = 0u;
    ea = r2 + r0;
    *gptr<u32>(ea) = u32(r1);
    ea = r2 + 4u + r0;
    *gptr<u8>(ea) = u8(r1);
    r1 = 0xa1877cu;  // (from the original)
    ea = r0 + 0xa64u;  // (from the original)
    *gptr<u32>(ea) = u32(0x2cc0a0u);  // (from the original)
    ea = r0 + 0x24u;  // (from the original)
    *gptr<u32>(ea) = u32(0x2cc090u);  // (from the original)
    ea = r0 + 0xa68u;  // (from the original)
    *gptr<u32>(ea) = u32(r1);
    *gptr<u32>(ea + 4) = u32(0x2cc0b0u);  // (from the original)
    r13 = r13 + 0x10;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_002cc00c
GUEST_EXPORT(0x002cc00c, d_002cc00c::f_002cc00c);

// f_002cc1b0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002cc1b0 {

struct __attribute__((packed)) Object_002cc1b0_0 {
    u8 unknown_0[0x3520];  // (not used here)
    u32 word_3520;
};
GUEST_OFFSET(Object_002cc1b0_0, word_3520, 0x3520);  // (from the original)

inline constexpr guest::Function<0x002e3568, u32(u32, u32, u32, u32)> call_002e3568;  // (from the original)

u32 f_002cc1b0(gptr<Object_002cc1b0_0> arg0, u32 r1, u32 r2_unused, u32 r3) {
    u32 res = 0;
    u32 r0 = arg0.addr();
    u32 r2 = 0;
    u32 r12 = 0;
    r2 = arg0->word_3520;
    res = r2 - r1;
    if (!u32(res == 0) && res >> 0x1f == ((r2 ^ r1) & (r2 ^ res)) >> 0x1f) {  // (from the original)
        r1 = ~0u;
        r2 = 0xadu;  // (from the original)
        r1 = r1 * r2;
        r0 = r0 + (r1 << 2) + 0x18d4u;  // (from the original)
        return call_002e3568(r0, r1, r2, r3);
    }
    r12 = r2 + 0xau;  // (from the original)
    r3 = r1;
    if (u32(r12 >= r1) && !u32(r12 == r1)) {
        r1 = r3 - r2;
        r2 = 0xadu;  // (from the original)
        r1 = r1 * r2;
        r0 = r0 + (r1 << 2) + 0x18d4u;  // (from the original)
        return call_002e3568(r0, r1, r2, r3);
    }
    r1 = ~0u;
    r2 = 0xadu;  // (from the original)
    r1 = r1 * r2;
    r0 = r0 + (r1 << 2) + 0x18d4u;  // (from the original)
    return call_002e3568(r0, r1, r2, r3);
}

}  // namespace d_002cc1b0
GUEST_EXPORT(0x002cc1b0, d_002cc1b0::f_002cc1b0);

// f_002cc4bc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002cc4bc {

inline constexpr guest::Function<0x00125aec, u32(u32, u32, u32, u32)> call_00125aec;  // (from the original)
inline constexpr guest::Function<0x002682ac, u32(u32, u32, u32, u32)> call_002682ac;  // (from the original)
inline constexpr guest::Function<0x002f915c, u32(u32, u32, u32, u32)> call_002f915c;  // (from the original)
inline constexpr guest::Function<0x00301d0d, u32(u32, u32, u32, u32)> call_00301d0c;  // (from the original)

u32 f_002cc4bc(u32 r0, u32 r1, u32 r2, u32 r3) {
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
    r3 = *gptr<u32>(0x87a2a8u + 4);  // (from the original)
    r5 = r0 + 0x1894u;  // (from the original)
    *gptr<u32>(r5) = u32(*gptr<u32>(0x87a2a8u));  // (from the original)
    *gptr<u32>(r5 + 4) = u32(r3);
    *gptr<u32>(r5 + 8) = u32(r4);
    r2 = 0x8f26b8u;  // (from the original)
    *gptr<u8>(r1 + 0x18u) = u8(r4);  // (from the original)
    *gptr<u32>(r1 + 0x1cu) = u32(r4);  // (from the original)
    r3 = r2 + 0x2cu;  // (from the original)
    *gptr<u32>(r1 + 0x20u) = u32(r4);  // (from the original)
    *gptr<u32>(r0) = u32(r2);
    *gptr<u32>(r0 + 0xa40u) = u32(r3);  // (from the original)
    r0 = r0 + 0x18acu;  // (from the original)
    *gptr<u32>(r1) = u32(r3 + 0x14u);  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00125aec(r0, r1, r2, r3);
    r1 = 0x2e37acu;  // (from the original)
    r3 = 0xau;  // (from the original)
    r2 = 0x2b4u;  // (from the original)
    r0 = r0 + 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00301d0c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 + 0x1b08u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002f915c(r0, r1, r2, r3);
    r1 = 0x351cu;  // (from the original)
    r0 = r0 - 0x33dcu;  // (from the original)
    *gptr<u8>(r1 + r0) = u8(r4);
    *gptr<u32>(r1 + 4u + r0) = u32(r4);
    r1 = 0x9533c4u;  // (from the original)
    ea = r0 + 0x24u;  // (from the original)
    *gptr<u32>(ea) = u32(0x2cc588u);  // (from the original)
    ea = r0 + 0xa64u;  // (from the original)
    *gptr<u32>(ea) = u32(0x2cc594u);  // (from the original)
    ea = r0 + 0xa68u;  // (from the original)
    *gptr<u32>(ea) = u32(r1);
    *gptr<u32>(ea + 4) = u32(0x2cc59cu);  // (from the original)
    r13 = r13 + 0x10;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_002cc4bc
GUEST_EXPORT(0x002cc4bc, d_002cc4bc::f_002cc4bc);

// f_002cc5c4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002cc5c4 {

struct __attribute__((packed)) Object_002cc5c4_0 {
    u32 word_0;
    u8 unknown_4[0xa3c];  // (not used here)
    u32 word_a40;
    u8 unknown_a44[0xe44];  // (not used here)
    u32 word_1888;
    u8 unknown_188c[0x1b50];  // (not used here)
    u32 word_33dc;
    u8 unknown_33e0[0x8];  // (not used here)
    u32 word_33e8;
};
GUEST_OFFSET(Object_002cc5c4_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_002cc5c4_0, word_a40, 0xa40);  // (from the original)
GUEST_OFFSET(Object_002cc5c4_0, word_1888, 0x1888);  // (from the original)
GUEST_OFFSET(Object_002cc5c4_0, word_33dc, 0x33dc);  // (from the original)
GUEST_OFFSET(Object_002cc5c4_0, word_33e8, 0x33e8);  // (from the original)

inline constexpr guest::Function<0x002684c0, u32(u32, u32, u32, u32)> call_002684c0;  // (from the original)
inline constexpr guest::Function<0x002f76ad, u32(u32, u32, u32, u32)> call_002f76ac;  // (from the original)
inline constexpr guest::Function<0x0056988c, u32(u32, u32, u32, u32)> call_0056988c;  // (from the original)

u32 f_002cc5c4(gptr<Object_002cc5c4_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r1 = 0;
    u32 r2 = 0;
    u32 r3 = 0;
    u32 r4 = guest::cpu()->r[4];
    r3 = 0x8f26b8u;  // (from the original)
    guest::cpu()->r[13] -= 8u;
    arg0->word_a40 = u32(r3 + 0x2cu);  // (from the original)
    arg0->word_0 = u32(r3);
    arg0->word_1888 = u32(r3 + 0x40u);  // (from the original)
    r2 = 0x8ee248u;  // (from the original)
    r1 = r2 + 0x10u;  // (from the original)
    arg0->word_33dc = u32(r2);
    arg0->word_33e8 = u32(r1);
    r0 = r0 + 0x34f0u;  // (from the original)
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
    r1 = 0x2e3854u;  // (from the original)
    r4 = r0 - 0x33fcu;  // (from the original)
    r3 = 0xau;  // (from the original)
    r2 = 0x2b4u;  // (from the original)
    r0 = r0 - 0x1b28u;  // (from the original)
    r0 = call_002f76ac(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r4 + 0x18acu;  // (from the original)
    r0 = call_0056988c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    guest::cpu()->r[13] += 8u;
    r0 = r0 - 0x18acu;  // (from the original)
    return call_002684c0(r0, r1, r2, r3);
}

}  // namespace d_002cc5c4
GUEST_EXPORT(0x002cc5c4, d_002cc5c4::f_002cc5c4);

// f_002cca88: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002cca88 {

inline constexpr guest::Function<0x002b7938, u32(u32, u32, u32, u32)> call_002b7938;  // (from the original)
inline constexpr guest::Function<0x002cdcb0, u32(u32, u32, u32, u32)> call_002cdcb0;  // (from the original)
inline constexpr guest::Function<0x00301d0d, u32(u32, u32, u32, u32)> call_00301d0c;  // (from the original)

u32 f_002cca88(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::cpu()->r[13] -= 8u;
    r0 = call_002b7938(r0, r1, r2, r3);
    r3 = 8u;
    r2 = 0x36cu;  // (from the original)
    *gptr<u32>(r0) = u32(0x8f270cu);  // (from the original)
    r0 = r0 + 0xa40u;  // (from the original)
    r1 = 0x2b9440u;  // (from the original)
    r0 = call_00301d0c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 + 0x1b60u;  // (from the original)
    r0 = call_002cdcb0(r0, r1, r2, r3);
    r2 = 0x2780u;  // (from the original)
    r0 = r0 - 0x25a0u;  // (from the original)
    r1 = 0u;
    *gptr<u32>(r2 + r0) = u32(r1);
    *gptr<u8>((r2 | u32(s32(r2) >> 0xb)) + r0) = u8(r1);  // (from the original)
    *gptr<u32>(r0 + 0x24u) = u32(0x2ccae4u);  // (from the original)
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_002cca88
GUEST_EXPORT(0x002cca88, d_002cca88::f_002cca88);

// f_002ccb84: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002ccb84 {

struct __attribute__((packed)) Object_002ccb84_0 {
    u8 byte_0;
    u8 byte_1;
};
GUEST_OFFSET(Object_002ccb84_0, byte_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_002ccb84_0, byte_1, 0x1);  // (from the original)


u32 f_002ccb84(gptr<Object_002ccb84_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r1 = 0;
    u32 r2 = 0;
    r1 = *gptr<u32>(0x95386cu);  // (from the original)
    if (r1 == 0) {
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r2 = u32(*gptr<u8>(r1 + 0x9fu));  // (from the original)
    if (u32(arg0->byte_0) == 0) {
        r2 = r2 & ~1u;
    } else {
        r2 = r2 | 1u;
    }
    *gptr<u8>(r1 + 0x9fu) = u8(r2);  // (from the original)
    r0 = r2 & 0xffu;  // (from the original)
    if (u32(arg0->byte_1) == 0) {
        r0 = r0 & ~4u;
    } else {
        r0 = r0 | 4u;
    }
    *gptr<u8>(r1 + 0x9fu) = u8(r0);  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_002ccb84
GUEST_EXPORT(0x002ccb84, d_002ccb84::f_002ccb84);

// f_002ccbd4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002ccbd4 {

struct __attribute__((packed)) Object_002ccbd4_0 {
    u8 unknown_0[0x318];  // (not used here)
    u32 word_318;
};
GUEST_OFFSET(Object_002ccbd4_0, word_318, 0x318);  // (from the original)


u32 f_002ccbd4(gptr<Object_002ccbd4_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r1 = 0;
    u32 r2 = 0;
    r2 = 0u;
    r1 = r2 ^ 1u;
    r0 = *gptr<u32>(arg0->word_318 + 0x4a0u) + (r2 * 0xa3u << 3);  // (from the original)
    *gptr<u8>(r0 + 0xd9u) = u8(r1);  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_002ccbd4
GUEST_EXPORT(0x002ccbd4, d_002ccbd4::f_002ccbd4);

// f_002ccc70: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002ccc70 {

struct __attribute__((packed)) Object_002ccc70_0 {
    u8 unknown_0[0x108];  // (not used here)
    u32 word_108;
};
GUEST_OFFSET(Object_002ccc70_0, word_108, 0x108);  // (from the original)

inline constexpr guest::Function<0x002e0428, u32(u32, u32, u32, u32)> call_002e0428;  // (from the original)

u32 f_002ccc70(gptr<Object_002ccc70_0> arg0, u32 r1, u32 r2) {
    u32 r0 = arg0.addr();
    u32 r3 = 0;
    r3 = r1 * 0xa3u;  // (from the original)
    r1 = r2;
    r2 = r2 ^ 1u;
    *gptr<u8>(arg0->word_108 + (r3 << 3) + 0xd9u) = u8(r2);  // (from the original)
    r0 = arg0->word_108 + (r3 << 3);
    return call_002e0428(r0, r1, r2, r3);
}

}  // namespace d_002ccc70
GUEST_EXPORT(0x002ccc70, d_002ccc70::f_002ccc70);

// f_002cd064: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002cd064 {

struct __attribute__((packed)) Object_002cd064_0 {
    u8 unknown_0[0x10c];  // (not used here)
    u32 word_10c;
    u32 word_110;
};
GUEST_OFFSET(Object_002cd064_0, word_10c, 0x10c);  // (from the original)
GUEST_OFFSET(Object_002cd064_0, word_110, 0x110);  // (from the original)

inline constexpr guest::Function<0x0056939c, u32(u32, u32, u32, u32)> call_0056939c;  // (from the original)
inline constexpr guest::Function<0x00818fa0, u32(u32, u32, u32, u32)> call_00818fa0;  // (from the original)

u32 f_002cd064(gptr<Object_002cd064_0> arg0, u32 r1_unused, u32 r2) {
    u32 ea = 0;
    u32 res = 0;
    u32 r0 = arg0.addr();
    u32 r1 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r13 = guest::cpu()->r[13];
    u32 r14 = guest::cpu()->r[14];
    ea = r13 - 0x10;  // (from the original)
    *gptr<u32>(ea) = u32(r4);
    *gptr<u32>(ea + 4) = u32(r5);
    *gptr<u32>(ea + 8) = u32(r6);
    *gptr<u32>(ea + 0xc) = u32(r14);  // (from the original)
    r13 = r13 - 0x10;  // (from the original)
    r5 = r0;
    r4 = arg0->word_110;
    if (s32(arg0->word_10c) <= s32(r4)) {
        goto L_2cd0a0;
    }
    do {
L_2cd07c:;
        r1 = r4 * 0xa3u;  // (from the original)
        r0 = *gptr<u32>(r5 + 0x108u) + (r1 << 3);  // (from the original)
        guest::cpu()->r[13] = r13;
        r0 = call_0056939c(r0, r1, r2, guest::cpu()->r[3]);
        r2 = guest::cpu()->r[2];
        r0 = *gptr<u32>(r5 + 0x10cu);  // (from the original)
        r4 = r4 + 1u;
        res = r0 - r4;
        guest::preempt();
    } while (!u32(res == 0) && res >> 0x1f == ((r0 ^ r4) & (r0 ^ res)) >> 0x1f);  // (from the original)
L_2cd0a0:;
    r1 = *gptr<u32>(0x857d28u);  // (from the original)
    r2 = *gptr<u32>(0x857d28u + 4);  // (from the original)
    r0 = r5 + 0xe4u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00818fa0(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
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

}  // namespace d_002cd064
GUEST_EXPORT(0x002cd064, d_002cd064::f_002cd064);

// f_002cd120: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002cd120 {

struct __attribute__((packed)) Object_002cd120_0 {
    u8 unknown_0[0x10c];  // (not used here)
    u32 word_10c;
    u32 word_110;
};
GUEST_OFFSET(Object_002cd120_0, word_10c, 0x10c);  // (from the original)
GUEST_OFFSET(Object_002cd120_0, word_110, 0x110);  // (from the original)

inline constexpr guest::Function<0x002e086c, u32(u32, u32, u32, u32)> call_002e086c;  // (from the original)
inline constexpr guest::Function<0x00818fa0, u32(u32, u32, u32, u32)> call_00818fa0;  // (from the original)

u32 f_002cd120(gptr<Object_002cd120_0> arg0, u32 r1_unused, u32 r2) {
    u32 ea = 0;
    u32 res = 0;
    u32 r0 = arg0.addr();
    u32 r1 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r13 = guest::cpu()->r[13];
    u32 r14 = guest::cpu()->r[14];
    ea = r13 - 0x10;  // (from the original)
    *gptr<u32>(ea) = u32(r4);
    *gptr<u32>(ea + 4) = u32(r5);
    *gptr<u32>(ea + 8) = u32(r6);
    *gptr<u32>(ea + 0xc) = u32(r14);  // (from the original)
    r13 = r13 - 0x10;  // (from the original)
    r5 = r0;
    r4 = arg0->word_110;
    if (s32(arg0->word_10c) <= s32(r4)) {
        goto L_2cd15c;
    }
    do {
L_2cd138:;
        r1 = r4 * 0xa3u;  // (from the original)
        r0 = *gptr<u32>(r5 + 0x108u) + (r1 << 3);  // (from the original)
        guest::cpu()->r[13] = r13;
        r0 = call_002e086c(r0, r1, r2, guest::cpu()->r[3]);
        r2 = guest::cpu()->r[2];
        r0 = *gptr<u32>(r5 + 0x10cu);  // (from the original)
        r4 = r4 + 1u;
        res = r0 - r4;
        guest::preempt();
    } while (!u32(res == 0) && res >> 0x1f == ((r0 ^ r4) & (r0 ^ res)) >> 0x1f);  // (from the original)
L_2cd15c:;
    r1 = *gptr<u32>(0x857d30u);  // (from the original)
    r2 = *gptr<u32>(0x857d30u + 4);  // (from the original)
    r0 = r5 + 0xe4u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00818fa0(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
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

}  // namespace d_002cd120
GUEST_EXPORT(0x002cd120, d_002cd120::f_002cd120);

// f_002cd2c0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002cd2c0 {

inline constexpr guest::Function<0x00818fa0, u32(u32, u32, u32, u32)> call_00818fa0;  // (from the original)

u32 f_002cd2c0(u32 r0) {
    u32 r1 = 0;
    u32 r2 = 0;
    guest::cpu()->r[13] -= 8u;
    r0 = r0 + 0xe4u;  // (from the original)
    r1 = *gptr<u32>(0x857d18u);  // (from the original)
    r2 = *gptr<u32>(0x857d18u + 4);  // (from the original)
    r0 = call_00818fa0(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r0 = 1u;
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_002cd2c0
GUEST_EXPORT(0x002cd2c0, d_002cd2c0::f_002cd2c0);

// f_002cd2e0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002cd2e0 {

struct __attribute__((packed)) Object_002cd2e0_0 {
    u8 unknown_0[0x108];  // (not used here)
    u32 word_108;
};
GUEST_OFFSET(Object_002cd2e0_0, word_108, 0x108);  // (from the original)


u32 f_002cd2e0(gptr<Object_002cd2e0_0> arg0, u32 r1, u32 r2) {
    u32 r0 = arg0.addr();
    r0 = arg0->word_108 + (r2 * 0xa3u << 3);  // (from the original)
    *gptr<u32>(r0 + 0xccu) = u32(r1);  // (from the original)
    *gptr<u8>(r0 + 0xdau) = u8(1u);  // (from the original)
    return r0;
}

}  // namespace d_002cd2e0
GUEST_EXPORT(0x002cd2e0, d_002cd2e0::f_002cd2e0);

// f_002cd30c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002cd30c {

inline constexpr guest::Function<0x00818fa0, u32(u32, u32, u32, u32)> call_00818fa0;  // (from the original)

u32 f_002cd30c(u32 r0) {
    u32 r1 = 0;
    u32 r2 = 0;
    guest::cpu()->r[13] -= 8u;
    r0 = r0 + 0xe4u;  // (from the original)
    r1 = *gptr<u32>(0x857d20u);  // (from the original)
    r2 = *gptr<u32>(0x857d20u + 4);  // (from the original)
    r0 = call_00818fa0(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r0 = 1u;
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_002cd30c
GUEST_EXPORT(0x002cd30c, d_002cd30c::f_002cd30c);

// f_002cd378: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002cd378 {

struct __attribute__((packed)) Object_002cd378_0 {
    u8 unknown_0[0xd4];  // (not used here)
    u32 word_d4;
    u8 unknown_d8[0x34];  // (not used here)
    u32 word_10c;
};
GUEST_OFFSET(Object_002cd378_0, word_d4, 0xd4);  // (from the original)
GUEST_OFFSET(Object_002cd378_0, word_10c, 0x10c);  // (from the original)

inline constexpr guest::Function<0x002e0428, u32(u32, u32, u32, u32)> call_002e0428;  // (from the original)

u32 f_002cd378(gptr<Object_002cd378_0> arg0, u32 r1) {
    u32 ea = 0;
    u32 res = 0;
    u32 r0 = arg0.addr();
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r13 = guest::cpu()->r[13];
    u32 r14 = guest::cpu()->r[14];
    ea = r13 - 0x10;  // (from the original)
    *gptr<u32>(ea) = u32(r4);
    *gptr<u32>(ea + 4) = u32(r5);
    *gptr<u32>(ea + 8) = u32(r6);
    *gptr<u32>(ea + 0xc) = u32(r14);  // (from the original)
    r13 = r13 - 0x10;  // (from the original)
    r5 = r0;
    r0 = arg0->word_d4;
    r6 = r1;
    r4 = 0u;
    if (r1 == 0) {
        r0 = r0 & ~8u;
    } else {
        r0 = r0 | 8u;
    }
    arg0->word_d4 = u32(r0);
    r0 = arg0->word_10c;
    res = r0;
    if (u32(res == 0) || res >> 0x1f != (r0 & (r0 ^ res)) >> 0x1f) {  // (from the original)
        goto L_2cd3cc;
    }
    do {
L_2cd3a4:;
        r0 = *gptr<u32>(r5 + 0x108u) + (r4 * 0xa3u << 3);  // (from the original)
        r1 = r6;
        guest::cpu()->r[13] = r13;
        r0 = call_002e0428(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        r0 = *gptr<u32>(r5 + 0x10cu);  // (from the original)
        r4 = r4 + 1u;
        res = r0 - r4;
        guest::preempt();
    } while (!u32(res == 0) && res >> 0x1f == ((r0 ^ r4) & (r0 ^ res)) >> 0x1f);  // (from the original)
L_2cd3cc:;
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

}  // namespace d_002cd378
GUEST_EXPORT(0x002cd378, d_002cd378::f_002cd378);

// f_002cd4bc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002cd4bc {

struct __attribute__((packed)) Object_002cd4bc_0 {
    u32 word_0;
};
GUEST_OFFSET(Object_002cd4bc_0, word_0, 0x0);  // (from the original)

inline constexpr guest::Function<0x002bed58, u32(u32, u32, u32, u32)> call_002bed58;  // (from the original)

u32 f_002cd4bc(gptr<Object_002cd4bc_0> arg0, u32 r1, u32 r2) {
    u32 r0 = arg0.addr();
    u32 r4 = guest::cpu()->r[4];
    guest::cpu()->r[13] -= 8u;
    r4 = r0;
    if (r1 != 0) {
        r0 = arg0->word_0;
        r0 = call_002bed58(r0, r1, r2, guest::cpu()->r[3]);
    }
    r1 = *gptr<u32>(r4);
    r0 = 1u;
    *gptr<u32>(0x95262cu) = u32(r1);  // (from the original)
    *gptr<u8>(r4 + 0x40u) = u8(r0);  // (from the original)
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_002cd4bc
GUEST_EXPORT(0x002cd4bc, d_002cd4bc::f_002cd4bc);

// f_002cd520: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002cd520 {

struct __attribute__((packed)) Object_002cd520_0 {
    u32 word_0;
};
GUEST_OFFSET(Object_002cd520_0, word_0, 0x0);  // (from the original)

inline constexpr guest::Function<0x001b8b74, u32(u32, u32, u32, u32)> call_001b8b74;  // (from the original)

u32 f_002cd520(gptr<Object_002cd520_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r1 = 0;
    u32 r2 = 0;
    u32 r3 = 0;
    r2 = arg0->word_0;
    r3 = 0x17be10u;  // (from the original)
    r0 = 0x85ed32u;  // (from the original)
    r1 = 0u;
    return call_001b8b74(r0, r1, r2, r3);
}

}  // namespace d_002cd520
GUEST_EXPORT(0x002cd520, d_002cd520::f_002cd520);

// f_002cd574: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002cd574 {

struct __attribute__((packed)) Object_002cd574_0 {
    u32 word_0;
};
GUEST_OFFSET(Object_002cd574_0, word_0, 0x0);  // (from the original)

inline constexpr guest::Function<0x002bee6c, u32(u32, u32, u32, u32)> call_002bee6c;  // (from the original)
inline constexpr guest::Function<0x002fd108, u32(u32, u32, u32, u32)> call_002fd108;  // (from the original)

u32 f_002cd574(gptr<Object_002cd574_0> arg0, u32 r1) {
    u32 r0 = arg0.addr();
    u32 r2 = 0;
    u32 r4 = guest::cpu()->r[4];
    guest::cpu()->r[13] -= 8u;
    r4 = r0;
    if (arg0->word_0 != 0) {
        r0 = 0u;
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r0 = 0x17be10u;  // (from the original)
    r2 = 4u;
    r1 = *gptr<u32>(0x952ca4u);  // (from the original)
    if (r1 != 0) {
        r0 = call_002fd108(r0, r1, r2, guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r0 = call_002bee6c(r0, r1, r2, guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        *gptr<u32>(r4) = u32(r0);
        r0 = 1u;
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r1 = *gptr<u32>(0x952c3cu);  // (from the original)
    r0 = call_002fd108(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r0 = call_002bee6c(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    *gptr<u32>(r4) = u32(r0);
    r0 = 1u;
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_002cd574
GUEST_EXPORT(0x002cd574, d_002cd574::f_002cd574);

// f_002cd5e4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002cd5e4 {

struct __attribute__((packed)) Object_002cd5e4_0 {
    u32 word_0;
};
GUEST_OFFSET(Object_002cd5e4_0, word_0, 0x0);  // (from the original)

inline constexpr guest::Function<0x002bef2c, u32(u32, u32, u32, u32)> call_002bef2c;  // (from the original)
inline constexpr guest::Function<0x002ffb64, u32(u32, u32, u32, u32)> call_002ffb64;  // (from the original)
inline constexpr guest::Function<0x00537464, u32(u32, u32, u32, u32)> call_00537464;  // (from the original)

u32 f_002cd5e4(gptr<Object_002cd5e4_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r4 = r0;
    r0 = arg0->word_0;
    r5 = 0u;
    if (r0 != 0) {
        r0 = call_002bef2c(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
        r0 = call_002ffb64(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
        r0 = 0x952628u;  // (from the original)
        *gptr<u32>(r4) = u32(r5);
        *gptr<u32>(r0 + 4u) = u32(r5);
        *gptr<u8>(r4 + 0x40u) = u8(r5);  // (from the original)
    }
    r0 = call_00537464(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    if (r0 != 0) {
        *gptr<u8>(r0 + 0xa1u) = u8(r5);  // (from the original)
    }
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    return r0;
}

}  // namespace d_002cd5e4
GUEST_EXPORT(0x002cd5e4, d_002cd5e4::f_002cd5e4);

// f_002cd640: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002cd640 {

inline constexpr guest::Function<0x005cd270, u32(u32, u32, u32, u32)> call_005cd270;  // (from the original)

u32 f_002cd640(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 ea = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 0x18;  // (from the original)
    r4 = r0;
    r5 = r1;
    r6 = r2;
    r7 = r3;
    r0 = r0 + 8u;
    guest::cpu()->r[13] = r13;
    r0 = call_005cd270(r0, r1, r2, r3);
    r1 = 0x3800u;  // (from the original)
    ea = r4 + 0x10u;  // (from the original)
    *gptr<u32>(ea) = u32(r1);
    r0 = 0u;
    ea = ea + 4u;
    *gptr<u32>(ea) = u32(r0);
    ea = ea + 0x14u;  // (from the original)
    *gptr<u32>(ea) = u32(r5);
    *gptr<u32>(ea + 4) = u32(r6);
    *gptr<u32>(ea + 8) = u32(r7);
    r13 = r13 + 0x18;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_002cd640
GUEST_EXPORT(0x002cd640, d_002cd640::f_002cd640);

// f_002cdcb0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002cdcb0 {

inline constexpr guest::Function<0x00125aec, u32(u32, u32, u32, u32)> call_00125aec;  // (from the original)
inline constexpr guest::Function<0x0022c53c, u32(u32, u32, u32, u32)> call_0022c53c;  // (from the original)

u32 f_002cdcb0(u32 r0, u32 r1, u32 r2) {
    guest::cpu()->r[13] -= 8u;
    r0 = call_0022c53c(r0, r1, r2, guest::cpu()->r[3]);
    r1 = 0x8f2a0cu;  // (from the original)
    *gptr<u32>(r0) = u32(r1);
    r0 = r0 + 0xcu;  // (from the original)
    r2 = r1 + 0x10u;  // (from the original)
    *gptr<u32>(r0) = u32(r2);
    r0 = r0 + 0x134u;  // (from the original)
    r0 = call_00125aec(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r0 = r0 + 0x28u;  // (from the original)
    r0 = call_00125aec(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r0 = r0 + 0x28u;  // (from the original)
    r0 = call_00125aec(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r0 = r0 + 0x28u;  // (from the original)
    r0 = call_00125aec(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r0 = r0 - 0x1b8u;  // (from the original)
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_002cdcb0
GUEST_EXPORT(0x002cdcb0, d_002cdcb0::f_002cdcb0);

// f_002cdd00: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002cdd00 {

struct __attribute__((packed)) Object_002cdd00_0 {
    u32 word_0;
    u8 unknown_4[0x8];  // (not used here)
    u32 word_c;
};
GUEST_OFFSET(Object_002cdd00_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_002cdd00_0, word_c, 0xc);  // (from the original)

inline constexpr guest::Function<0x0022c5d8, u32(u32, u32, u32, u32)> call_0022c5d8;  // (from the original)
inline constexpr guest::Function<0x0056988c, u32(u32, u32, u32, u32)> call_0056988c;  // (from the original)

u32 f_002cdd00(gptr<Object_002cdd00_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r1 = 0;
    u32 r2 = 0;
    r1 = 0x8f2a0cu;  // (from the original)
    guest::cpu()->r[13] -= 8u;
    arg0->word_0 = u32(r1);
    r2 = r1 + 0x10u;  // (from the original)
    arg0->word_c = u32(r2);
    r0 = r0 + 0x1b8u;  // (from the original)
    r0 = call_0056988c(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r0 = r0 - 0x28u;  // (from the original)
    r0 = call_0056988c(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r0 = r0 - 0x28u;  // (from the original)
    r0 = call_0056988c(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r0 = r0 - 0x28u;  // (from the original)
    r0 = call_0056988c(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r0 = r0 - 0x140u;  // (from the original)
    r0 = call_0022c5d8(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_002cdd00
GUEST_EXPORT(0x002cdd00, d_002cdd00::f_002cdd00);

// f_002cdd40: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002cdd40 {

struct __attribute__((packed)) Object_002cdd40_0 {
    u8 unknown_0[0x20];  // (not used here)
    u32 word_20;
};
GUEST_OFFSET(Object_002cdd40_0, word_20, 0x20);  // (from the original)

inline constexpr guest::Function<0x004b6d74, u32(u32, u32, u32, u32)> call_004b6d74;  // (from the original)

u32 f_002cdd40(gptr<Object_002cdd40_0> arg0, u32 r1) {
    u32 r0 = arg0.addr();
    u32 r2 = 0;
    r2 = r1;
    r1 = arg0->word_20;
    r0 = r2;
    return call_004b6d74(r0, r1, r2, guest::cpu()->r[3]);
}

}  // namespace d_002cdd40
GUEST_EXPORT(0x002cdd40, d_002cdd40::f_002cdd40);

// f_002cdf30: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002cdf30 {

inline constexpr guest::Function<0x002fb94c, u32(u32, u32, u32, u32)> call_002fb94c;  // (from the original)
inline constexpr guest::Function<0x007159b0, u32(u32, u32, u32, u32)> call_007159b0;  // (from the original)

u32 f_002cdf30(u32 r0_unused, u32 r1) {
    u32 r0 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r4 = 0x95335cu;  // (from the original)
    r0 = *gptr<u32>(r4 + 8u);
    if (r0 + 1u == 0) {
        goto L_2cdf7c;
    }
    r0 = call_002fb94c(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r5 = ~0u;
    if (r0 == 0) {
        goto L_2cdf78;
    }
    r1 = *gptr<u32>(r4 + 8u);
    r0 = r0 + 0x8ae0u;  // (from the original)
    r0 = call_007159b0(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 == 0) {
        goto L_2cdf78;
    }
    if (r0 < 0x66u) {  // (from the original)
        r0 = 1u;
        goto L_2cdf80;
    }
L_2cdf78:;
    *gptr<u32>(r4 + 8u) = u32(r5);
L_2cdf7c:;
    r0 = 0u;
L_2cdf80:;
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_002cdf30
GUEST_EXPORT(0x002cdf30, d_002cdf30::f_002cdf30);

// f_002ced34: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002ced34 {

struct __attribute__((packed)) Object_002ced34_0 {
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
GUEST_OFFSET(Object_002ced34_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_002ced34_0, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_002ced34_0, byte_8, 0x8);  // (from the original)
GUEST_OFFSET(Object_002ced34_0, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Object_002ced34_0, word_10, 0x10);  // (from the original)
GUEST_OFFSET(Object_002ced34_0, word_14, 0x14);  // (from the original)
GUEST_OFFSET(Object_002ced34_0, byte_18, 0x18);  // (from the original)
GUEST_OFFSET(Object_002ced34_0, word_1c, 0x1c);  // (from the original)
GUEST_OFFSET(Object_002ced34_0, word_20, 0x20);  // (from the original)

inline constexpr guest::Function<0x001207d8, u32(u32, u32, u32, u32)> call_001207d8;  // (from the original)
inline constexpr guest::Function<0x00125aec, u32(u32, u32, u32, u32)> call_00125aec;  // (from the original)
inline constexpr guest::Function<0x001cb884, u32(u32, u32, u32, u32)> call_001cb884;  // (from the original)
inline constexpr guest::Function<0x002b7c68, u32(u32, u32, u32, u32)> call_002b7c68;  // (from the original)
inline constexpr guest::Function<0x002bc928, u32(u32, u32, u32, u32)> call_002bc928;  // (from the original)
inline constexpr guest::Function<0x002f7604, u32(u32, u32, u32, u32)> call_002f7604;  // (from the original)
inline constexpr guest::Function<0x00301d0d, u32(u32, u32, u32, u32)> call_00301d0c;  // (from the original)
inline constexpr guest::Function<0x005d6fac, u32(u32, u32, u32, u32)> call_005d6fac;  // (from the original)
inline constexpr guest::Function<0x005e3128, u32(u32, u32, u32, u32)> call_005e3128;  // (from the original)

u32 f_002ced34(gptr<Object_002ced34_0> arg0) {
    u32 ea = 0;
    u32 r0 = arg0.addr();
    u32 r1 = 0;
    u32 r2 = 0;
    u32 r3 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 8;
    r4 = 0u;
    arg0->word_4 = u32(r4);
    arg0->byte_8 = u8(r4);
    ea = 0x879ea0u;  // (from the original)
    r2 = *gptr<u32>(ea + 4);
    r3 = r0 + 0xcu;  // (from the original)
    arg0->word_c = u32(*gptr<u32>(ea));
    arg0->word_10 = u32(r2);
    arg0->word_14 = u32(r4);
    r1 = 0x9081d8u;  // (from the original)
    arg0->word_0 = u32(r1);
    arg0->byte_18 = u8(r4);
    arg0->word_1c = u32(r4);
    ea = r0 + 0x20u;  // (from the original)
    arg0->word_20 = u32(r4);
    r0 = ea + 4u;
    guest::cpu()->r[13] = r13;
    r0 = call_002bc928(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    r1 = 0x8f2a2cu;  // (from the original)
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
    r0 = call_001cb884(r0, r1, r2, r3);
    r3 = 4u;
    r2 = 0xe0u;  // (from the original)
    *gptr<u32>(r0) = u32(0x8f3fbcu);  // (from the original)
    r0 = r0 + 0x1b0u;  // (from the original)
    r1 = 0x2b6de0u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00301d0c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 + 0x380u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002f7604(r0, r1, r2, r3);
    r3 = 4u;
    r2 = 0x188u;  // (from the original)
    ea = r0 - 0x530u;  // (from the original)
    *gptr<u32>(ea) = u32(0x8ebaccu);  // (from the original)
    r1 = 0x1c79a8u;  // (from the original)
    r0 = ea + 0x614u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00301d0c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 + 0x620u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00125aec(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    ea = r0 + 0x38u;  // (from the original)
    *gptr<u32>(ea) = u32(r4);
    r0 = ea + 0x14u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002b7c68(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0xc80u;  // (from the original)
    *gptr<u32>(r0 + 0xce0u) = u32(r4);  // (from the original)
    *gptr<u32>(r0 + 0xc5cu) = u32(r4);  // (from the original)
    *gptr<u32>(r0 + 0xc70u) = u32(r4);  // (from the original)
    *gptr<u8>(r0 + 0xcdcu) = u8(r4);  // (from the original)
    *gptr<u32>(r0 + 0xc60u) = u32(r4);  // (from the original)
    *gptr<u32>(r0 + 0xc74u) = u32(r4);  // (from the original)
    *gptr<u8>(r0 + 0xcddu) = u8(r4);  // (from the original)
    *gptr<u32>(r0 + 0xc64u) = u32(r4);  // (from the original)
    *gptr<u32>(r0 + 0xc78u) = u32(r4);  // (from the original)
    *gptr<u8>(r0 + 0xcdeu) = u8(r4);  // (from the original)
    *gptr<u32>(r0 + 0xc68u) = u32(r4);  // (from the original)
    *gptr<u32>(r0 + 0xc7cu) = u32(r4);  // (from the original)
    *gptr<u8>(r0 + 0xcdfu) = u8(r4);  // (from the original)
    r0 = r0 + 0xce4u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_001cb884(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = 0x8f6800u;  // (from the original)
    *gptr<u32>(r0) = u32(r1);
    r0 = r0 + 0x1b0u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00125aec(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    r2 = 0x1eu;  // (from the original)
    ea = r0 + 0x28u;  // (from the original)
    *gptr<u32>(ea) = u32(r4);
    r1 = 0x5eu;  // (from the original)
    r0 = ea + 4u;
    guest::cpu()->r[13] = r13;
    r0 = call_005d6fac(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = 0x32u;  // (from the original)
    r0 = r0 + 0x100u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_005e3128(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    r2 = 0x3cu;  // (from the original)
    r1 = 0xbcu;  // (from the original)
    r0 = r0 + 0xc4u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_005d6fac(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = 0x32u;  // (from the original)
    r0 = r0 + 0x100u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_005e3128(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 + 0xc4u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002b7c68(r0, r1, r2, r3);
    r0 = r0 - 0x564u;  // (from the original)
    r1 = 0x1520u;  // (from the original)
    *gptr<u32>(r0 + 0x5c0u) = u32(r4);  // (from the original)
    *gptr<u8>(r0 + 0x5c4u) = u8(r4);  // (from the original)
    r0 = r0 - 0xf58u;  // (from the original)
    *gptr<u8>(r1 + r0) = u8(r4);
    r13 = r13 + 8;
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_002ced34
GUEST_EXPORT(0x002ced34, d_002ced34::f_002ced34);

// f_002ceee0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002ceee0 {

struct __attribute__((packed)) Object_002ceee0_0 {
    u32 word_0;
    u8 unknown_4[0x20];  // (not used here)
    u32 word_24;
    u8 unknown_28[0xf30];  // (not used here)
    u32 word_f58;
};
GUEST_OFFSET(Object_002ceee0_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_002ceee0_0, word_24, 0x24);  // (from the original)
GUEST_OFFSET(Object_002ceee0_0, word_f58, 0xf58);  // (from the original)

inline constexpr guest::Function<0x001cb8fc, u32(u32, u32, u32, u32)> call_001cb8fc;  // (from the original)
inline constexpr guest::Function<0x002b7c94, u32(u32, u32, u32, u32)> call_002b7c94;  // (from the original)
inline constexpr guest::Function<0x002f76ad, u32(u32, u32, u32, u32)> call_002f76ac;  // (from the original)
inline constexpr guest::Function<0x002f7710, u32(u32, u32, u32, u32)> call_002f7710;  // (from the original)
inline constexpr guest::Function<0x00567ef0, u32(u32, u32, u32, u32)> call_00567ef0;  // (from the original)
inline constexpr guest::Function<0x0056988c, u32(u32, u32, u32, u32)> call_0056988c;  // (from the original)
inline constexpr guest::Function<0x005d703c, u32(u32, u32, u32, u32)> call_005d703c;  // (from the original)
inline constexpr guest::Function<0x005e3194, u32(u32, u32, u32, u32)> call_005e3194;  // (from the original)

u32 f_002ceee0(gptr<Object_002ceee0_0> arg0, u32 r1_unused, u32 r2_unused, u32 r3) {
    u32 ea = 0;
    u32 r0 = arg0.addr();
    u32 r1 = 0;
    u32 r2 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r13 = guest::cpu()->r[13];
    r1 = 0x8f2a2cu;  // (from the original)
    r13 = r13 - 8;
    r2 = r1 + 0x34u;  // (from the original)
    arg0->word_0 = u32(r1);
    r1 = 0x8f6800u;  // (from the original)
    ea = r0 + 0x24u;  // (from the original)
    arg0->word_24 = u32(r2);
    ea = ea + 0xf34u;  // (from the original)
    arg0->word_f58 = u32(r1);
    r0 = ea + 0x564u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002b7c94(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0xc4u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_005e3194(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0x100u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_005d703c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0xc4u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_005e3194(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0x100u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_005d703c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0x2cu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0056988c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0x1b0u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_001cb8fc(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = 0x8ebaccu;  // (from the original)
    *gptr<u32>(r0 - 0xce4u) = u32(r1);  // (from the original)
    r0 = r0 - 0x64u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002b7c94(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0x4cu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0056988c(r0, r1, r2, r3);
    r1 = 0x5e317cu;  // (from the original)
    r4 = r0 - 0xc34u;  // (from the original)
    r3 = 4u;
    r2 = 0x188u;  // (from the original)
    r0 = r0 - 0x620u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002f76ac(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    *gptr<u32>(r4) = u32(0x8f3fbcu);  // (from the original)
    r0 = r4 + 0x530u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002f7710(r0, r1, r2, r3);
    r4 = r0 - 0x530u;  // (from the original)
    r1 = 0x2b6ef8u;  // (from the original)
    r3 = 4u;
    r2 = 0xe0u;  // (from the original)
    r0 = r0 - 0x380u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002f76ac(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r4;
    guest::cpu()->r[13] = r13;
    r0 = call_001cb8fc(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0x248u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00567ef0(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r0 = r0 - 0x2cu;  // (from the original)
    r13 = r13 + 8;
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_002ceee0
GUEST_EXPORT(0x002ceee0, d_002ceee0::f_002ceee0);

// f_002cf018: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002cf018 {

inline constexpr guest::Function<0x00135748, u32(u32, u32, u32, u32)> call_00135748;  // (from the original)
inline constexpr guest::Function<0x001357ec, u32(u32, u32, u32, u32)> call_001357ec;  // (from the original)

u32 f_002cf018(u32 r0, u32 r1, u32 r2) {
    u32 ea = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 0x18;  // (from the original)
    r4 = r0;
    r5 = r0 + 8u;
    r6 = r1;
    r7 = r2;
    r0 = r5;
    guest::cpu()->r[13] = r13;
    r0 = call_00135748(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    ea = r4 + 0x2c0u;  // (from the original)
    *gptr<u32>(ea) = u32(r6);
    ea = ea + 0xcu;  // (from the original)
    *gptr<u32>(ea) = u32(r7);
    *gptr<u32>(ea + 0xcu) = u32(0u);  // (from the original)
    r0 = r5;
    r13 = r13 + 0x18;  // (from the original)
    guest::cpu()->r[13] = r13;
    return call_001357ec(r0, r1, r2, guest::cpu()->r[3]);
}

}  // namespace d_002cf018
GUEST_EXPORT(0x002cf018, d_002cf018::f_002cf018);

// f_002cf050: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002cf050 {

inline constexpr guest::Function<0x00135748, u32(u32, u32, u32, u32)> call_00135748;  // (from the original)
inline constexpr guest::Function<0x001357ec, u32(u32, u32, u32, u32)> call_001357ec;  // (from the original)

u32 f_002cf050(u32 r0, u32 r1, u32 r2) {
    u32 ea = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 0x18;  // (from the original)
    r4 = r0;
    r5 = r0 + 8u;
    r6 = r1;
    r7 = r2;
    r0 = r5;
    guest::cpu()->r[13] = r13;
    r0 = call_00135748(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    ea = r4 + 0x2c4u;  // (from the original)
    *gptr<u32>(ea) = u32(r6);
    ea = ea + 0xcu;  // (from the original)
    *gptr<u32>(ea) = u32(r7);
    *gptr<u32>(ea + 0xcu) = u32(0u);  // (from the original)
    r0 = r5;
    r13 = r13 + 0x18;  // (from the original)
    guest::cpu()->r[13] = r13;
    return call_001357ec(r0, r1, r2, guest::cpu()->r[3]);
}

}  // namespace d_002cf050
GUEST_EXPORT(0x002cf050, d_002cf050::f_002cf050);

// f_002cf088: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002cf088 {

inline constexpr guest::Function<0x00135748, u32(u32, u32, u32, u32)> call_00135748;  // (from the original)
inline constexpr guest::Function<0x001357ec, u32(u32, u32, u32, u32)> call_001357ec;  // (from the original)

u32 f_002cf088(u32 r0, u32 r1, u32 r2) {
    u32 ea = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 0x18;  // (from the original)
    r4 = r0;
    r5 = r0 + 8u;
    r6 = r1;
    r7 = r2;
    r0 = r5;
    guest::cpu()->r[13] = r13;
    r0 = call_00135748(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    ea = r4 + 0x2c8u;  // (from the original)
    *gptr<u32>(ea) = u32(r6);
    ea = ea + 0xcu;  // (from the original)
    *gptr<u32>(ea) = u32(r7);
    *gptr<u32>(ea + 0xcu) = u32(0u);  // (from the original)
    r0 = r5;
    r13 = r13 + 0x18;  // (from the original)
    guest::cpu()->r[13] = r13;
    return call_001357ec(r0, r1, r2, guest::cpu()->r[3]);
}

}  // namespace d_002cf088
GUEST_EXPORT(0x002cf088, d_002cf088::f_002cf088);

// f_002cf0c0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002cf0c0 {

struct __attribute__((packed)) Object_002cf0c0_0 {
    u8 unknown_0[0x2e4];  // (not used here)
    u8 byte_2e4;
};
GUEST_OFFSET(Object_002cf0c0_0, byte_2e4, 0x2e4);  // (from the original)


u32 f_002cf0c0(gptr<Object_002cf0c0_0> arg0) {
    u32 r0 = arg0.addr();
    if (u32(arg0->byte_2e4) >= 0xau) {  // (from the original)
        r0 = 1u;
    } else {
        r0 = 0u;
    }
    return r0;
}

}  // namespace d_002cf0c0
GUEST_EXPORT(0x002cf0c0, d_002cf0c0::f_002cf0c0);

// f_002cf1a8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002cf1a8 {

struct __attribute__((packed)) Object_002cf1a8_0 {
    u8 unknown_0[0x2e4];  // (not used here)
    u8 byte_2e4;
};
GUEST_OFFSET(Object_002cf1a8_0, byte_2e4, 0x2e4);  // (from the original)


u32 f_002cf1a8(gptr<Object_002cf1a8_0> arg0) {
    u32 r0 = arg0.addr();
    if (u32(arg0->byte_2e4) >= 0xdu) {  // (from the original)
        r0 = 1u;
    } else {
        r0 = 0u;
    }
    return r0;
}

}  // namespace d_002cf1a8
GUEST_EXPORT(0x002cf1a8, d_002cf1a8::f_002cf1a8);

// f_002cf87c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002cf87c {

inline constexpr guest::Function<0x002f76ad, u32(u32, u32, u32, u32)> call_002f76ac;  // (from the original)

u32 f_002cf87c(u32 r0) {
    u32 r1 = 0;
    u32 r2 = 0;
    u32 r3 = 0;
    u32 r4 = guest::cpu()->r[4];
    guest::cpu()->r[13] -= 8u;
    r4 = r0;
    r1 = 0x2cf4c4u;  // (from the original)
    r3 = 1u;
    r2 = 0x210u;  // (from the original)
    r0 = r0 + 0x7cu;  // (from the original)
    r0 = call_002f76ac(r0, r1, r2, r3);
    r1 = 0u;
    *gptr<u32>(0x953568u) = u32(r1);  // (from the original)
    r0 = r4;
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_002cf87c
GUEST_EXPORT(0x002cf87c, d_002cf87c::f_002cf87c);
