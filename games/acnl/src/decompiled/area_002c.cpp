// Functions decompiled by tools/decomp (docs/decomp.md), each proved equal to the recompiled original (prove-cpp). The
// names are generated (d_<address>::f_<address>, Object_<address>_<argument>, word_<offset>) and still to be chosen.
#include "guest/guest.hpp"
#include "graphics/hemisphere_light.hpp"
#include "recovered/structs.hpp"

#include <bit>

using guest::gptr;

// f_002c2024: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002c2024 {

inline constexpr guest::Function<0x0011d258, u32(u32, u32, u32, u32)> call_0011d258;  // (from the original)
inline constexpr guest::Function<0x0011e340, u32(u32, u32, u32, u32)> call_0011e340;  // (from the original)

u32 f_002c2024(u32 r0, u32 r1) {
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    u32 r0_1 = call_0011d258(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r1_1 = guest::cpu()->r[1];
    if (r0_1 == 0) {
        u32 r0_2 = sxth(r1);
        *gptr<u8>(r0) = 1;
        *gptr<u16>(r0 + 2u) = u16(r0_2);
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        return call_0011e340(r0_2, 1u, guest::cpu()->r[2], guest::cpu()->r[3]);
    }
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1_1;
    return r0_1;
}

}  // namespace d_002c2024
GUEST_EXPORT(0x002c2024, d_002c2024::f_002c2024);

// f_002c2058: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002c2058 {

struct __attribute__((packed)) Object_002c2058_0 {
    u8 byte_0;
    u8 unknown_1[0x1];  // (not used here)
    u16 half_2;
};
GUEST_OFFSET(Object_002c2058_0, byte_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_002c2058_0, half_2, 0x2);  // (from the original)

inline constexpr guest::Function<0x0011e340, u32(u32, u32, u32, u32)> call_0011e340;  // (from the original)

u32 f_002c2058(gptr<Object_002c2058_0> arg0) {
    arg0->half_2 = 0x1e;  // (from the original)
    call_0011e340(0x1eu, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    arg0->byte_0 = 0;
    return 0u;
}

}  // namespace d_002c2058
GUEST_EXPORT_FRAMED(0x002c2058, d_002c2058::f_002c2058, 0x4010);  // pushes {r4, lr} first, as the original

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

inline guest::global<u16, 0x008c9f1e> global_008c9f1e;  // (from the original)

void f_002c2078(gptr<Object_002c2078_0> arg0) {
    arg0->half_a = u16(u32(*global_008c9f1e));
    arg0->byte_0 = u8(u32(arg0->byte_0) & ~0xbcu);  // (from the original)
    arg0->byte_1 = u8(u32(arg0->byte_1) & ~0xffu | 0x5eu);  // (from the original)
    arg0->byte_2 = 0xff;  // (from the original)
    arg0->byte_3 = 0x3f;  // (from the original)
    arg0->byte_4 = 0;
    arg0->byte_5 = u8(u32(arg0->byte_5) & ~0x7fu);  // (from the original)
    arg0->byte_34 = 0;
    arg0->byte_38 = 0;
    arg0->byte_35 = 0;
    arg0->byte_39 = 0;
    arg0->byte_36 = 0;
    arg0->byte_3a = 0;
    arg0->byte_37 = 0;
    arg0->byte_3b = 0;
    guest::cpu()->r[1] = 0u;
    return;
}

}  // namespace d_002c2078
GUEST_EXPORT(0x002c2078, d_002c2078::f_002c2078);

// f_002c2510: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002c2510 {

inline constexpr guest::Function<0x002fae84, u32(u32, u32, u32, u32)> call_002fae84;  // (from the original)
inline constexpr guest::Function<0x00313a84, u32(u32, u32)> call_00313a84;  // (from the original)

void f_002c2510(u32 r0, u32 r1) {
    u32 r0_1 = call_002fae84(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r0_3 = call_00313a84(r0_1 + 0x62138u, r1);  // (from the original)
    *gptr<u32>(r0 + 0x2cu) = r0_3;  // (from the original)
    *gptr<u8>(r0 + 0x34u) = 1;  // (from the original)
    guest::cpu()->r[1] = 1u;
    return;
}

}  // namespace d_002c2510
GUEST_EXPORT_FRAMED(0x002c2510, d_002c2510::f_002c2510, 0x4010);  // pushes {r4, lr} first, as the original

// f_002c2544: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002c2544 {

struct __attribute__((packed)) Object_002c2544_0 {
    u8 unknown_0[0x31];  // (not used here)
    u8 byte_31;
};
GUEST_OFFSET(Object_002c2544_0, byte_31, 0x31);  // (from the original)

inline constexpr guest::Function<0x002bb4b0, u32(u32, u32, u32)> call_002bb4b0;  // (from the original)

void f_002c2544(gptr<Object_002c2544_0> arg0) {
    u32 r0 = arg0.addr();
    arg0->byte_31 = 1;
    call_002bb4b0(r0 + 0x22u, 1u, guest::cpu()->r[2]);  // (from the original)
    return;
}

}  // namespace d_002c2544
GUEST_EXPORT_FRAMED(0x002c2544, d_002c2544::f_002c2544, 0x4010);  // pushes {r4, lr} first, as the original

// f_002c2710: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002c2710 {

struct __attribute__((packed)) Object_002c2710_0 {
    u8 unknown_0[0x31];  // (not used here)
    u8 byte_31;
};
GUEST_OFFSET(Object_002c2710_0, byte_31, 0x31);  // (from the original)

inline constexpr guest::Function<0x002bb4b0, u32(u32, u32, u32)> call_002bb4b0;  // (from the original)

u32 f_002c2710(gptr<Object_002c2710_0> arg0) {
    u32 r0 = arg0.addr();
    arg0->byte_31 = 0;
    u32 r0_2 = call_002bb4b0(r0 + 0x22u, 0u, guest::cpu()->r[2]);  // (from the original)
    return r0_2;
}

}  // namespace d_002c2710
GUEST_EXPORT_FRAMED(0x002c2710, d_002c2710::f_002c2710, 0x4010);  // pushes {r4, lr} first, as the original

// f_002c2974: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002c2974 {

struct __attribute__((packed)) Object_002c2974_1 {
    u32 word_0;
};
GUEST_OFFSET(Object_002c2974_1, word_0, 0x0);  // (from the original)

inline constexpr guest::Function<0x002fcbb0, u32(u32, u32, u32, u32)> call_002fcbb0;  // (from the original)

void f_002c2974(u32 r0_unused, gptr<Object_002c2974_1> arg1) {
    u32 r2 = 0;
    u32 r1_1 = arg1->word_0;
    if (r1_1 == 0) {
        call_002fcbb0(guest::cpu()->r[0], 0x7ffeu, r2, guest::cpu()->r[3]);
        return;  // (from the original)
    }
    u32 r2_1 = *gptr<u32>(*gptr<u32>(r1_1) + 0x44u);  // (from the original)
    // virtual function 17 of r1_1
    guest::call_address<u32>(r2_1, guest::cpu()->r[0], r1_1, r2_1, guest::cpu()->r[3]);
    return;
}

}  // namespace d_002c2974
GUEST_EXPORT(0x002c2974, d_002c2974::f_002c2974);

// f_002c2a64: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002c2a64 {

struct __attribute__((packed)) Object_002c2a64_0 {
    u32 word_0;
};
GUEST_OFFSET(Object_002c2a64_0, word_0, 0x0);  // (from the original)

inline constexpr guest::Function<0x006d926c, u32(u32, u32)> call_006d926c;  // (from the original)

u32 f_002c2a64(gptr<Object_002c2a64_0> arg0, u32 r1) {
    u32 r0_1 = arg0->word_0;
    if (r0_1 == 0 || u32(s32(s8(*gptr<u8>(r0_1 + 0xfu)))) != 0) {  // (from the original)
        return 3u;
    }
    u32 r1_1 = *gptr<u8>(arg0->word_0 + 0x18cu);  // (from the original)
    u32 r0_2 = call_006d926c(1u, r1_1);
    return r0_2 & 0xffu;  // (from the original)
}

}  // namespace d_002c2a64
GUEST_EXPORT_FRAMED(0x002c2a64, d_002c2a64::f_002c2a64, 0x4010);  // pushes {r4, lr} first, as the original

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
    arg1->word_4 = arg0->word_1b0;
    arg0->word_1b0 = r1;
    arg1->word_0 = r0;
    return;
}

}  // namespace d_002c2d58
GUEST_EXPORT(0x002c2d58, d_002c2d58::f_002c2d58);

// f_002c2fd4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002c2fd4 {

struct __attribute__((packed)) Object_002c2fd4_0 {
    u8 unknown_0[0x1b0];  // (not used here)
    u32 word_1b0;
};
GUEST_OFFSET(Object_002c2fd4_0, word_1b0, 0x1b0);  // (from the original)

struct __attribute__((packed)) Object_002c2fd4_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Object_002c2fd4_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_002c2fd4_1, word_4, 0x4);  // (from the original)


u32 f_002c2fd4(gptr<Object_002c2fd4_0> arg0, gptr<Object_002c2fd4_1> arg1) {
    u32 r0 = arg0.addr();
    u32 r1 = arg1.addr();
    if (r1 == 0) {
        return r0;
    }
    u32 r2 = arg0->word_1b0;
    u32 r12 = 0u;
    u32 r3 = r12;
    if (r2 == 0) {
        arg1->word_0 = r12;
        arg1->word_4 = r12;
        return r0;
    }
    do {
        if (r2 == r1) {
            if (r3 == 0) {
                *gptr<u32>(r0 + 0x1b0u) = *gptr<u32>(r2 + 4u);  // (from the original)
            } else {
                r0 = *gptr<u32>(r2 + 4u);
                *gptr<u32>(r3 + 4u) = r0;
            }
            arg1->word_0 = r12;
            arg1->word_4 = r12;
            return r0;
        }
        r3 = r2;
        r2 = *gptr<u32>(r2 + 4u);
        guest::preempt();
    } while (r2 != 0);
    arg1->word_0 = r12;
    arg1->word_4 = r12;
    return r0;
}

}  // namespace d_002c2fd4
GUEST_EXPORT(0x002c2fd4, d_002c2fd4::f_002c2fd4);

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
    u32 r13 = guest::cpu()->r[13];
    r13 -= 8u;
    if (u32(arg0->byte_1cc) != 0) {
        r13 += 8u;
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    arg0->byte_1cc = 1;
    arg0->byte_1c8 = 0;
    arg0->word_6c = std::bit_cast<u32>(arg1->v[0]);
    arg0->word_70 = std::bit_cast<u32>(arg1->v[1]);
    arg0->word_74 = std::bit_cast<u32>(arg1->v[2]);
    arg0->word_14 = std::bit_cast<u32>(arg1->v[0]);
    arg0->word_18 = std::bit_cast<u32>(arg1->v[1]);
    arg0->word_1c = std::bit_cast<u32>(arg1->v[2]);
    arg0->word_20 = std::bit_cast<u32>(arg1->v[0]);
    arg0->word_24 = std::bit_cast<u32>(arg1->v[1]);
    arg0->word_28 = std::bit_cast<u32>(arg1->v[2]);
    *gptr<u16>(r13) = 0;
    *gptr<u16>(r13 + 2u) = 0;
    *gptr<u16>(r13 + 4u) = 0;
    arg0->half_38 = u16(uxth(0u));
    arg0->half_3a = u16(u32(*gptr<u16>(r13 + 2u)));
    arg0->half_3c = u16(u32(*gptr<u16>(r13 + 4u)));
    arg0->half_2c = u16(u32(*gptr<u16>(r13)));
    arg0->half_2e = u16(u32(*gptr<u16>(r13 + 2u)));
    u32 r2_1 = *gptr<u16>(r13 + 4u);
    arg0->half_30 = u16(r2_1);
    u32 r1_1 = *gptr<u32>(arg0->word_0 + 0xa8u);  // (from the original)
    r13 += 8u;
    // virtual function 42 of arg0.addr()
    guest::cpu()->r[13] = r13;
    return guest::call_address<u32>(r1_1, r0, r1_1, r2_1, 0u);
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
    u32 r1_1 = arg0->word_1b4;
    if (r1_1 == 0) {
        guest::cpu()->r[1] = r1_1;
        return;
    }
    *gptr<u32>(r1_1) = 0;
    arg0->word_1b4 = 0;
    guest::cpu()->r[1] = r1_1;
    return;
}

}  // namespace d_002c3954
GUEST_EXPORT(0x002c3954, d_002c3954::f_002c3954);

// f_002c3b70: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002c3b70 {

inline constexpr guest::Function<0x0024f400, u32(u32, u32, u32, u32)> call_0024f400;  // (from the original)

u32 f_002c3b70(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r0_1 = call_0024f400(r0, r1 + 4u, r2, r3);
    u32 r2_1 = *gptr<u32>(r1);
    *gptr<u32>(r0_1) = r2_1;
    *gptr<u32>(r0_1 + *gptr<u32>(r2_1 - 0xcu)) = *gptr<u32>(r1 + 0x14u);  // (from the original)
    *gptr<u32>(r0_1 + 0x190u) = 0;  // (from the original)
    *gptr<u8>(r0_1 + 0x19cu) = 0;  // (from the original)
    *gptr<u8>(r0_1 + 0x19du) = 0;  // (from the original)
    *gptr<u8>(r0_1 + 0x1a8u) = 0;  // (from the original)
    *gptr<u32>(r0_1 + 0x1acu) = 0;  // (from the original)
    *gptr<u32>(r0_1 + 0x1b0u) = 0;  // (from the original)
    *gptr<u32>(r0_1 + 0x1b4u) = 0;  // (from the original)
    *gptr<u32>(r0_1 + 0x1b8u) = 0;  // (from the original)
    *gptr<u32>(r0_1 + 0x1bcu) = 0;  // (from the original)
    *gptr<u8>(r0_1 + 0x1cau) = 0;  // (from the original)
    *gptr<u8>(r0_1 + 0x1ceu) = 0;  // (from the original)
    guest::cpu()->r[1] = 0u;
    return r0_1;
}

}  // namespace d_002c3b70
GUEST_EXPORT_FRAMED(0x002c3b70, d_002c3b70::f_002c3b70, 0x4010);  // pushes {r4, lr} first, as the original

// f_002c44d8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002c44d8 {

inline guest::global<u8, 0x0094d76c> global_0094d76c;  // (from the original)
inline guest::global<u32, 0x0094d770> global_0094d770;  // (from the original)
inline guest::global<u32, 0x0094d774> global_0094d774;  // (from the original)
inline constexpr guest::Function<0x006165c4, u32(u32)> call_006165c4;  // (from the original)
inline constexpr guest::Function<0x007017a8, u32(u32)> call_007017a8;  // (from the original)

u32 f_002c44d8() {
    if (*global_0094d770 == 0) {
        return ~0u;
    }
    u32 r0_2 = *global_0094d774;
    if (u32(*global_0094d76c) != 0) {
        u32 r0_3 = call_007017a8(r0_2);
        return *gptr<u8>(*gptr<u32>(*gptr<u32>(r0_3 + 4u) + (u32(*gptr<u8>(*global_0094d770 + 0xe1u)) << 2)));  // (from the original)
    }
    u32 r0_5 = call_006165c4(r0_2);
    return *gptr<u8>(*gptr<u32>(*gptr<u32>(r0_5 + 4u) + (u32(*gptr<u8>(*global_0094d770 + 0xe1u)) << 2)));  // (from the original)
}

}  // namespace d_002c44d8
GUEST_EXPORT_FRAMED(0x002c44d8, d_002c44d8::f_002c44d8, 0x4010);  // pushes {r4, lr} first, as the original

// f_002c4544: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002c4544 {

inline guest::global<u8, 0x0094d76c> global_0094d76c;  // (from the original)
inline guest::global<u32, 0x0094d770> global_0094d770;  // (from the original)
inline guest::global<u32, 0x0094d774> global_0094d774;  // (from the original)
inline constexpr guest::Function<0x002fb328, u32(u32, u32, u32)> call_002fb328;  // (from the original)
inline constexpr guest::Function<0x002fc934, u32(u32, u32)> call_002fc934;  // (from the original)
inline constexpr guest::Function<0x006162e0, u32(u32, u32, u32)> call_006162e0;  // (from the original)
inline constexpr guest::Function<0x006165c4, u32(u32, u32, u32, u32)> call_006165c4;  // (from the original)
inline constexpr guest::Function<0x00616c68, u32(u32, u32, u32)> call_00616c68;  // (from the original)
inline constexpr guest::Function<0x00701694, u32(u32, u32, u32, u32)> call_00701694;  // (from the original)
inline constexpr guest::Function<0x007017a8, u32(u32, u32, u32, u32)> call_007017a8;  // (from the original)
inline constexpr guest::Function<0x0076c808, u32(u32, u32, u32)> call_0076c808;  // (from the original)

void f_002c4544(u32 r0, u32 r1, u32 r2) {
    u32 r13 = guest::cpu()->r[13];
    r13 -= 0x20u;  // (from the original)
    if (*global_0094d770 == 0) {
        r13 += 0x20u;  // (from the original)
        guest::cpu()->r[13] = r13;
        call_002fc934(r0, 0x95bfdcu);
        return;  // (from the original)
    }
    u32 r1_1 = *global_0094d76c;
    u32 r0_1 = *global_0094d774;
    if (r1_1 != 0) {
        guest::cpu()->r[13] = r13;
        u32 r0_2 = call_007017a8(r0_1, r1_1, r2, guest::cpu()->r[3]);
        u32 r2_1 = guest::cpu()->r[2];
        u32 r1_2 = *gptr<u8>(*global_0094d770 + 0xe1u);  // (from the original)
        u32 r0_3 = *gptr<u32>(*gptr<u32>(*gptr<u32>(r0_2 + 4u) + (r1_2 << 2)) + 4u);
        u32 r4_1 = *gptr<u8>(r0_3 + r1);
        guest::cpu()->r[13] = r13;
        u32 r0_4 = call_002fb328(r0_3, r1_2, r2_1);
        guest::cpu()->r[13] = r13;
        u32 r0_6 = call_0076c808(r0_4 + 0x80u - 0xfff951c8u, 0x24u, r4_1);  // (from the original)
        if (r0_6 == 0) {
            r13 += 0x20u;  // (from the original)
            guest::cpu()->r[13] = r13;
            call_002fc934(r0, 0x95bfdcu);
            return;  // (from the original)
        }
        r13 += 0x20u;  // (from the original)
        guest::cpu()->r[13] = r13;
        call_00701694(r0, r4_1, 0u, guest::cpu()->r[3]);
        return;
    }
    guest::cpu()->r[13] = r13;
    u32 r0_7 = call_006165c4(r0_1, r1_1, r2, guest::cpu()->r[3]);
    u32 r4_2 = *gptr<u8>(*gptr<u32>(*gptr<u32>(*gptr<u32>(r0_7 + 4u) + (u32(*gptr<u8>(*global_0094d770 + 0xe1u)) << 2)) + 4u) + r1);  // (from the original)
    *gptr<u32>(r13) = 0;
    *gptr<u32>(r13 + 4u) = 0x27;  // (from the original)
    guest::cpu()->r[13] = r13;
    u32 r0_9 = call_00616c68(r13, r13 + 4u, r4_2);
    u32 r1_4 = guest::cpu()->r[1];
    u32 r2_2 = guest::cpu()->r[2];
    guest::cpu()->r[13] = r13;
    u32 r0_10 = call_002fb328(r0_9, r1_4, r2_2);
    u32 r2_3 = *gptr<u32>(r13);
    u32 r1_5 = *gptr<u32>(r13 + 4u) & 0xffu;  // (from the original)
    guest::cpu()->r[13] = r13;
    u32 r0_12 = call_0076c808(r0_10 + 0x80u - 0xfff951c8u, r1_5, r2_3);  // (from the original)
    if (r0_12 == 0) {
        r13 += 0x20u;  // (from the original)
        guest::cpu()->r[13] = r13;
        call_002fc934(r0, 0x95bfdcu);
        return;  // (from the original)
    }
    guest::cpu()->r[13] = r13;
    call_006162e0(r0, r4_2, 0u);
    r13 += 0x20u;  // (from the original)
    guest::cpu()->r[13] = r13;
    return;
}

}  // namespace d_002c4544
GUEST_EXPORT(0x002c4544, d_002c4544::f_002c4544);

// f_002c4ad4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002c4ad4 {

inline guest::global<u16, 0x0094d92e> global_0094d92e;  // (from the original)

void f_002c4ad4() {
    *global_0094d92e = 0;
    guest::cpu()->r[1] = 0x94d92cu;  // (from the original)
    return;
}

}  // namespace d_002c4ad4
GUEST_EXPORT(0x002c4ad4, d_002c4ad4::f_002c4ad4);

// f_002c61e8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002c61e8 {

struct __attribute__((packed)) Local_002c61e8_r4_1 {
    u8 unknown_0[0x38c];  // (not used here)
    u32 word_38c;
    u32 word_390;
};
GUEST_OFFSET(Local_002c61e8_r4_1, word_38c, 0x38c);  // (from the original)
GUEST_OFFSET(Local_002c61e8_r4_1, word_390, 0x390);  // (from the original)

inline constexpr guest::Function<0x0014fb4c, u32(u32, u32, u32, u32)> call_0014fb4c;  // (from the original)
inline constexpr guest::Function<0x001e5df4, u32(u32, u32, u32, u32)> call_001e5df4;  // (from the original)
inline constexpr guest::Function<0x001e7de0, u32(u32, u32, u32, u32)> call_001e7de0;  // (from the original)
inline constexpr guest::Function<0x004f2d48, u32(u32, u32, u32, u32)> call_004f2d48;  // (from the original)

void f_002c61e8(u32 r0, u32 r1_unused, u32 r2, u32 r3) {
    guest::StackFrame frame(0x18);  // the original's stack frame
    call_001e5df4(frame.at(8).addr(), 0xcu, r2, r3);  // (from the original)
    call_001e5df4(frame.at(0xc).addr(), 0xdu, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r2_2 = guest::cpu()->r[2];
    u32 r3_2 = guest::cpu()->r[3];
    gptr<Local_002c61e8_r4_1> r4_1 = gptr<Local_002c61e8_r4_1>(r0 + 0x3850u);  // (from the original)
    u32 r6_1 = ~0u;
    u32 r0_3 = r4_1->word_38c;
    if (r0_3 != 0) {
        *frame.at<u32>(0) = u32(*frame.at<u8>(9));
        *frame.at<u32>(4) = r6_1;
        u32 r3_3 = *frame.at<u8>(0xa);  // (from the original)
        u32 r2_3 = *frame.at<u8>(0xb);  // (from the original)
        call_004f2d48(r0_3, 0u, r2_3, r3_3);
        *frame.at<u32>(0) = u32(*frame.at<u8>(0xd));  // (from the original)
        *frame.at<u32>(4) = r6_1;
        u32 r3_4 = *frame.at<u8>(0xe);  // (from the original)
        u32 r2_4 = *frame.at<u8>(0xf);  // (from the original)
        call_004f2d48(r4_1->word_38c, 1u, r2_4, r3_4);
        r2_2 = guest::cpu()->r[2];
        r3_2 = guest::cpu()->r[3];
    }
    u32 r0_5 = r4_1->word_390;
    if (r0_5 != 0) {
        *frame.at<u32>(0) = u32(*frame.at<u8>(9));
        *frame.at<u32>(4) = r6_1;
        u32 r3_5 = *frame.at<u8>(0xa);  // (from the original)
        u32 r2_5 = *frame.at<u8>(0xb);  // (from the original)
        call_004f2d48(r0_5, 0u, r2_5, r3_5);
        *frame.at<u32>(0) = u32(*frame.at<u8>(0xd));  // (from the original)
        *frame.at<u32>(4) = r6_1;
        u32 r3_6 = *frame.at<u8>(0xe);  // (from the original)
        u32 r2_6 = *frame.at<u8>(0xf);  // (from the original)
        call_004f2d48(r4_1->word_390, 1u, r2_6, r3_6);
        r2_2 = guest::cpu()->r[2];
        r3_2 = guest::cpu()->r[3];
    }
    u32 r0_8 = call_001e5df4(frame.at(0x10).addr(), 1u, r2_2, r3_2);  // (from the original)
    u32 r0_9 = call_001e7de0(r0_8, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    call_0014fb4c(r0 + 0x3538u, frame.at(0x10).addr(), r0_9, guest::cpu()->r[3]);  // (from the original)
    return;
}

}  // namespace d_002c61e8
GUEST_EXPORT_FRAMED(0x002c61e8, d_002c61e8::f_002c61e8, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_002c6b0c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002c6b0c {

inline constexpr guest::Function<0x0014fb84, u32(u32, u32, u32, u32)> call_0014fb84;  // (from the original)
inline constexpr guest::Function<0x0018e970, u32(u32, u32, u32, u32)> call_0018e970;  // (from the original)
inline constexpr guest::Function<0x002f76ad, u32(u32, u32, u32, u32)> call_002f76ac;  // (from the original)
inline constexpr guest::Function<0x00317dec, u32(u32, u32, u32, u32)> call_00317dec;  // (from the original)
inline constexpr guest::Function<0x004f14ac, u32(u32, u32, u32, u32)> call_004f14ac;  // (from the original)
inline constexpr guest::Function<0x00521ae0, u32(u32, u32)> call_00521ae0;  // (from the original)
inline constexpr guest::Function<0x007c9cac, u32(u32, u32, u32, u32)> call_007c9cac;  // (from the original)
inline constexpr guest::Function<0x007ca3b8, u32(u32, u32, u32, u32)> call_007ca3b8;  // (from the original)

u32 f_002c6b0c(gptr<BsCharRoomViewMgr> arg0) {
    u32 r0 = arg0.addr();
    u32 r13 = guest::cpu()->r[13];
    r13 -= 0x10;  // (from the original)
    arg0->word_0 = 0x8f2390;  // (from the original)
    arg0->word_3cb8 = 0x8f0aa8;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_002f76ac(r0 + 0x3d18u, 0x53721cu, 0x114u, 2u);  // (from the original)
    u32 r1_1 = guest::cpu()->r[1];
    u32 r2_1 = guest::cpu()->r[2];
    u32 r3_1 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    u32 r0_2 = call_007ca3b8(r0 + 0x3cb8u, r1_1, r2_1, r3_1);  // (from the original)
    u32 r4_2 = r0_2 - 0xd0u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_002f76ac(r4_2, 0x60d5ccu, 0x34u, 4u);  // (from the original)
    u32 r4_3 = r4_2 - 0x398u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_002f76ac(r4_3 + 0x28cu, 0x52b4c4u, 0x40u, 4u);  // (from the original)
    *gptr<u32>(r4_3) = 0x8f0aa8;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_002f76ac(r4_3 + 0x60u, 0x53721cu, 0x114u, 2u);  // (from the original)
    u32 r1_2 = guest::cpu()->r[1];
    u32 r2_2 = guest::cpu()->r[2];
    u32 r3_2 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    u32 r0_5 = call_007ca3b8(r4_3, r1_2, r2_2, r3_2);
    u32 r1_3 = guest::cpu()->r[1];
    u32 r2_3 = guest::cpu()->r[2];
    u32 r3_3 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    u32 r0_7 = call_004f14ac(r0_5 - 0x1cu, r1_3, r2_3, r3_3);  // (from the original)
    u32 ea_1 = r0_7 + 0xfffffd74u;  // (from the original)
    *gptr<u32>(ea_1) = 0x8f0a58;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_002f76ac(ea_1 + 0x60u, 0x53721cu, 0x114u, 2u);  // (from the original)
    u32 r1_4 = guest::cpu()->r[1];
    u32 r2_4 = guest::cpu()->r[2];
    u32 r3_4 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    u32 r0_9 = call_007c9cac(ea_1, r1_4, r2_4, r3_4);
    u32 r1_5 = guest::cpu()->r[1];
    u32 r2_5 = guest::cpu()->r[2];
    u32 r3_5 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    u32 r0_11 = call_00317dec(r0_9 - 8u, r1_5, r2_5, r3_5);
    u32 r1_6 = guest::cpu()->r[1];
    u32 r2_6 = guest::cpu()->r[2];
    u32 r3_6 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    u32 r0_13 = call_0014fb84(r0_11 - 0x68u, r1_6, r2_6, r3_6);  // (from the original)
    u32 r1_7 = guest::cpu()->r[1];
    u32 r2_7 = guest::cpu()->r[2];
    u32 r3_7 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    u32 r0_15 = call_0018e970(r0_13 - 0x3290u, r1_7, r2_7, r3_7);  // (from the original)
    u32 r0_16 = r0_15 - 0x10u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_002f76ac(r0_16 - 0x25cu, 0x5b1c68u, 0x11cu, 2u);  // (from the original)
    u32 r1_8 = guest::cpu()->r[1];
    u32 r2_8 = guest::cpu()->r[2];
    u32 r3_8 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    u32 r0_18 = call_00317dec(r0_16 - 0x264u, r1_8, r2_8, r3_8);  // (from the original)
    u32 r1_9 = guest::cpu()->r[1];
    u32 r2_9 = guest::cpu()->r[2];
    u32 r3_9 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    u32 r0_20 = call_00317dec(r0_18 - 0x1cu, r1_9, r2_9, r3_9);  // (from the original)
    u32 r1_10 = guest::cpu()->r[1];
    r13 += 0x10;  // (from the original)
    guest::cpu()->r[13] = r13;
    return call_00521ae0(r0_20 - 0x18u, r1_10);  // (from the original)
}

}  // namespace d_002c6b0c
GUEST_EXPORT(0x002c6b0c, d_002c6b0c::f_002c6b0c);

// f_002c7060: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002c7060 {

inline constexpr guest::Function<0x004ee39c, u32(u32, u32, u32, u32)> call_004ee39c;  // (from the original)
inline constexpr guest::Function<0x00521a2c, u32(u32)> call_00521a2c;  // (from the original)

u32 f_002c7060(u32 r0) {
    u32 r0_1 = r0 + 0x18u;  // (from the original)
    call_004ee39c(r0_1, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    call_00521a2c(r0_1);
    return 2u;
}

}  // namespace d_002c7060
GUEST_EXPORT_FRAMED(0x002c7060, d_002c7060::f_002c7060, 0x4010);  // pushes {r4, lr} first, as the original

// f_002c71ec: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002c71ec {

inline constexpr guest::Function<0x002c83a8, u32(u32, u32, u32, u32)> call_002c83a8;  // (from the original)
inline constexpr guest::Function<0x002cc1b0, u32(u32, u32, u32)> call_002cc1b0;  // (from the original)
inline constexpr guest::Function<0x002e354c, u32(u32, u32, u32)> call_002e354c;  // (from the original)
inline constexpr guest::Function<0x002f77e8, u32(u32)> call_002f77e8;  // (from the original)
inline constexpr guest::Function<0x002f8574, u32(u32, u32, u32)> call_002f8574;  // (from the original)
inline constexpr guest::Function<0x002fbb30, u32(u32, u32, u32)> call_002fbb30;  // (from the original)
inline constexpr guest::Function<0x002fc8e8, u32(u32, u32, u32)> call_002fc8e8;  // (from the original)
inline constexpr guest::Function<0x002ff368, u32(u32, u32, u32)> call_002ff368;  // (from the original)
inline constexpr guest::Function<0x00311c70, u32(u32, u32, u32)> call_00311c70;  // (from the original)
inline constexpr guest::Function<0x0071ed64, u32(u32, u32, u32)> call_0071ed64;  // (from the original)
inline constexpr guest::Function<0x00723f84, u32(u32, u32, u32)> call_00723f84;  // (from the original)

void f_002c71ec(u32 r0, u32 r1, u32 r2) {
    guest::StackFrame frame(0x284);  // the original's stack frame
    u32 r2_11 = 0;
    u32 r0_25 = 0;
    u32 r0_29 = 0;
    u32 r7_1 = 0;
    u32 r0_1 = call_002c83a8(r0, r1, r2, guest::cpu()->r[3]);
    u32 r0_2 = call_002c83a8(r0, r2, guest::cpu()->r[2], guest::cpu()->r[3]);
    call_002ff368(frame.at(0).addr(), guest::cpu()->r[1], guest::cpu()->r[2]);
    u32 r6_1 = frame.at(0).addr();
    call_002fbb30(r6_1, r0_1, 0x31u);  // (from the original)
    call_002fbb30(r6_1 + 0x34u, r0_1 + 0x34u, 0x31u);  // (from the original)
    call_002fbb30(r6_1 + 0x68u, r0_1 + 0x68u, 0x42u);  // (from the original)
    call_002f8574(r6_1 + 0xaau, r0_1 + 0xaau, 0x182u);  // (from the original)
    call_002fbb30(r6_1 + 0x22cu, r0_1 + 0x22cu, 0x42u);  // (from the original)
    *frame.at<u8>(0x26e) = u8(u32(*gptr<u8>(r0_1 + 0x26eu)));  // (from the original)
    *frame.at<u8>(0x26f) = u8(u32(*gptr<u8>(r0_1 + 0x26fu)));  // (from the original)
    *frame.at<u8>(0x270) = u8(u32(*gptr<u8>(r0_1 + 0x270u)));  // (from the original)
    *frame.at<u8>(0x271) = u8(u32(*gptr<u8>(r0_1 + 0x271u)));  // (from the original)
    *frame.at<u8>(0x272) = u8(u32(*gptr<u8>(r0_1 + 0x272u)));  // (from the original)
    call_002fc8e8(r6_1 + 0x274u, r0_1 + 0x274u, guest::cpu()->r[2]);  // (from the original)
    call_00311c70(r6_1 + 0x278u, r0_1 + 0x278u, guest::cpu()->r[2]);  // (from the original)
    call_002fbb30(r0_1, r0_2, 0x31u);  // (from the original)
    call_002fbb30(r0_1 + 0x34u, r0_2 + 0x34u, 0x31u);  // (from the original)
    call_002fbb30(r0_1 + 0x68u, r0_2 + 0x68u, 0x42u);  // (from the original)
    call_002f8574(r0_1 + 0xaau, r0_2 + 0xaau, 0x182u);  // (from the original)
    call_002fbb30(r0_1 + 0x22cu, r0_2 + 0x22cu, 0x42u);  // (from the original)
    *gptr<u8>(r0_1 + 0x26eu) = u8(u32(*gptr<u8>(r0_2 + 0x26eu)));  // (from the original)
    *gptr<u8>(r0_1 + 0x26fu) = u8(u32(*gptr<u8>(r0_2 + 0x26fu)));  // (from the original)
    *gptr<u8>(r0_1 + 0x270u) = u8(u32(*gptr<u8>(r0_2 + 0x270u)));  // (from the original)
    *gptr<u8>(r0_1 + 0x271u) = u8(u32(*gptr<u8>(r0_2 + 0x271u)));  // (from the original)
    *gptr<u8>(r0_1 + 0x272u) = u8(u32(*gptr<u8>(r0_2 + 0x272u)));  // (from the original)
    call_002fc8e8(r0_1 + 0x274u, r0_2 + 0x274u, guest::cpu()->r[2]);  // (from the original)
    call_00311c70(r0_1 + 0x278u, r0_2 + 0x278u, guest::cpu()->r[2]);  // (from the original)
    u32 r5_1 = frame.at(0).addr();
    call_002fbb30(r0_2, r5_1, 0x31u);  // (from the original)
    call_002fbb30(r0_2 + 0x34u, r5_1 + 0x34u, 0x31u);  // (from the original)
    call_002fbb30(r0_2 + 0x68u, r5_1 + 0x68u, 0x42u);  // (from the original)
    call_002f8574(r0_2 + 0xaau, r5_1 + 0xaau, 0x182u);  // (from the original)
    call_002fbb30(r0_2 + 0x22cu, r5_1 + 0x22cu, 0x42u);  // (from the original)
    *gptr<u8>(r0_2 + 0x26eu) = u8(u32(*frame.at<u8>(0x26e)));  // (from the original)
    *gptr<u8>(r0_2 + 0x26fu) = u8(u32(*frame.at<u8>(0x26f)));  // (from the original)
    *gptr<u8>(r0_2 + 0x270u) = u8(u32(*frame.at<u8>(0x270)));  // (from the original)
    *gptr<u8>(r0_2 + 0x271u) = u8(u32(*frame.at<u8>(0x271)));  // (from the original)
    *gptr<u8>(r0_2 + 0x272u) = u8(u32(*frame.at<u8>(0x272)));  // (from the original)
    call_002fc8e8(r0_2 + 0x274u, r5_1 + 0x274u, guest::cpu()->r[2]);  // (from the original)
    call_00311c70(r0_2 + 0x278u, r5_1 + 0x278u, guest::cpu()->r[2]);  // (from the original)
    u32 r0_23 = call_0071ed64(r0 + 0x294u, r1, guest::cpu()->r[2]);  // (from the original)
    u32 r2_10 = guest::cpu()->r[2];
    u32 r4_1 = r0 + 0x37b8u;  // (from the original)
    if (r0_23 != 0) {
        call_002cc1b0(r0 + 0x294u, r1, r2_10);  // (from the original)
        r2_11 = guest::cpu()->r[2];
        goto L_2c7438;
    }
    r0_25 = call_00723f84(r4_1, r1, r2_10);
    r2_11 = guest::cpu()->r[2];
    if (r0_25 == 0) {
        goto L_2c7438;
    }
    call_002e354c(r4_1, r1, r2_11);
    r2_11 = guest::cpu()->r[2];
L_2c7438:;
    u32 r0_27 = call_0071ed64(r0 + 0x294u, r2, r2_11);  // (from the original)
    u32 r2_12 = guest::cpu()->r[2];
    if (r0_27 != 0) {
        call_002cc1b0(r0 + 0x294u, r2, r2_12);  // (from the original)
        goto L_2c7484;
    }
    r0_29 = call_00723f84(r4_1, r2, r2_12);
    if (r0_29 == 0) {
        goto L_2c7484;
    }
    call_002e354c(r4_1, r2, r2_12);
L_2c7484:;
    u32 r0_31 = call_0071ed64(r0 + 0x294u, r1, r2_12);  // (from the original)
    if (r0_31 == 0) {
        r0_31 = call_0071ed64(r0 + 0x294u, r2, r2_12);  // (from the original)
        if (r0_31 == 0) {
            goto L_2c74c4;
        }
    }
    r7_1 = r0 + 0x6c48u;  // (from the original)
    *gptr<u8>(r7_1) = 1;
L_2c74c4:;
    call_002f77e8(r0_31);
    return;
}

}  // namespace d_002c71ec
GUEST_EXPORT_FRAMED(0x002c71ec, d_002c71ec::f_002c71ec, 0x4ff0);  // pushes {r4, r5, r6, r7, r8, r9, r10, r11, lr} first, as the original

// f_002c85bc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002c85bc {

struct __attribute__((packed)) Local_002c85bc_r0_16 {
    u32 word_0;
    u8 unknown_4[0xa3c];  // (not used here)
    u32 word_a40;
};
GUEST_OFFSET(Local_002c85bc_r0_16, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_002c85bc_r0_16, word_a40, 0xa40);  // (from the original)

inline constexpr guest::Function<0x002684c0, u32(u32, u32, u32, u32)> call_002684c0;  // (from the original)
inline constexpr guest::Function<0x002f76ad, u32(u32, u32, u32, u32)> call_002f76ac;  // (from the original)
inline constexpr guest::Function<0x002f7710, u32(u32, u32, u32, u32)> call_002f7710;  // (from the original)
inline constexpr guest::Function<0x003288a4, u32(u32, u32, u32, u32)> call_003288a4;  // (from the original)
inline constexpr guest::Function<0x00567ef0, u32(u32, u32, u32, u32)> call_00567ef0;  // (from the original)
inline constexpr guest::Function<0x0056988c, u32(u32, u32, u32, u32)> call_0056988c;  // (from the original)
inline constexpr guest::Function<0x005bf744, u32(u32, u32, u32, u32)> call_005bf744;  // (from the original)
inline constexpr guest::Function<0x005e3194, u32(u32, u32, u32, u32)> call_005e3194;  // (from the original)
inline constexpr guest::Function<0x005e8a7c, u32(u32, u32, u32, u32)> call_005e8a7c;  // (from the original)
inline constexpr guest::Function<0x006aaa30, u32(u32, u32)> call_006aaa30;  // (from the original)

u32 f_002c85bc(gptr<BsMenuLetterStock> arg0, u32 r1_unused, u32 r2_unused, u32 r3) {
    u32 r0 = arg0.addr();
    u32 r13 = guest::cpu()->r[13];
    r13 -= 8;
    arg0->word_28 = 0x8f24b4;  // (from the original)
    arg0->word_0 = 0x8f2448;  // (from the original)
    arg0->word_6bd4 = 0x90a030;  // (from the original)
    arg0->word_66e4 = 0x8f47a0;  // (from the original)
    guest::cpu()->r[13] = r13;
    u32 r0_2 = call_005e3194(r0 + 0x6b00u, 0x8f47a0u, 0x8f2448u, r3);  // (from the original)
    u32 r1_1 = guest::cpu()->r[1];
    u32 r2_1 = guest::cpu()->r[2];
    u32 r3_1 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    u32 r0_4 = call_0056988c(r0_2 - 0x28u, r1_1, r2_1, r3_1);  // (from the original)
    u32 r1_2 = guest::cpu()->r[1];
    u32 r2_2 = guest::cpu()->r[2];
    u32 r3_2 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    u32 r0_6 = call_0056988c(r0_4 - 0x28u, r1_2, r2_2, r3_2);  // (from the original)
    u32 r1_3 = guest::cpu()->r[1];
    u32 r2_3 = guest::cpu()->r[2];
    u32 r3_3 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    u32 r0_8 = call_005bf744(r0_6 - 0x15cu, r1_3, r2_3, r3_3);  // (from the original)
    u32 r1_4 = guest::cpu()->r[1];
    u32 r2_4 = guest::cpu()->r[2];
    u32 r3_4 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    u32 r0_10 = call_00567ef0(r0_8 - 0x24cu, r1_4, r2_4, r3_4);  // (from the original)
    u32 r1_5 = guest::cpu()->r[1];
    u32 r2_5 = guest::cpu()->r[2];
    u32 r3_5 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    u32 r0_12 = call_005e8a7c(r0_10 - 0xc88u, r1_5, r2_5, r3_5);  // (from the original)
    u32 r2_6 = guest::cpu()->r[2];
    u32 r3_6 = guest::cpu()->r[3];
    u32 ea_1 = r0_12 - 0x118u;  // (from the original)
    *gptr<u32>(ea_1) = 0x8f08ac;  // (from the original)
    guest::cpu()->r[13] = r13;
    u32 r0_13 = call_002f7710(ea_1, 0x8f08acu, r2_6, r3_6);  // (from the original)
    u32 r1_6 = guest::cpu()->r[1];
    u32 r2_7 = guest::cpu()->r[2];
    u32 r3_7 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    u32 r0_15 = call_003288a4(r0_13 - 0x21b0u, r1_6, r2_7, r3_7);  // (from the original)
    gptr<Local_002c85bc_r0_16> r0_16 = gptr<Local_002c85bc_r0_16>(r0_15 - 0x3524u);  // (from the original)
    r0_16->word_a40 = 0x8f26e4;  // (from the original)
    r0_16->word_0 = 0x8f26b8;  // (from the original)
    *gptr<u32>(0x1888u + r0_16.addr()) = 0x8f26f8;  // (from the original)
    u32 r0_17 = r0_16.addr() + 0x33dcu;  // (from the original)
    u32 r1_7 = 0x8ee258u;  // (from the original)
    *gptr<u32>(r0_17) = 0x8ee248;  // (from the original)
    u32 r0_18 = r0_17 + 0xcu;  // (from the original)
    *gptr<u32>(r0_18) = r1_7;
    guest::cpu()->r[13] = r13;
    u32 r0_20 = call_0056988c(r0_18 + 0x108u, r1_7, 0x8ee248u, 0x8f26b8u);  // (from the original)
    u32 r1_8 = guest::cpu()->r[1];
    u32 r2_8 = guest::cpu()->r[2];
    u32 r3_8 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    u32 r0_22 = call_0056988c(r0_20 - 0x28u, r1_8, r2_8, r3_8);  // (from the original)
    u32 r1_9 = guest::cpu()->r[1];
    u32 r2_9 = guest::cpu()->r[2];
    u32 r3_9 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    u32 r0_24 = call_0056988c(r0_22 - 0x28u, r1_9, r2_9, r3_9);  // (from the original)
    u32 r1_10 = guest::cpu()->r[1];
    u32 r2_10 = guest::cpu()->r[2];
    u32 r3_10 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    u32 r0_26 = call_0056988c(r0_24 - 0x28u, r1_10, r2_10, r3_10);  // (from the original)
    u32 r1_11 = guest::cpu()->r[1];
    u32 r2_11 = guest::cpu()->r[2];
    u32 r3_11 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    u32 r0_28 = call_0056988c(r0_26 - 0x28u, r1_11, r2_11, r3_11);  // (from the original)
    u32 r1_12 = guest::cpu()->r[1];
    u32 r2_12 = guest::cpu()->r[2];
    u32 r3_12 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    u32 r0_30 = call_0056988c(r0_28 - 0x28u, r1_12, r2_12, r3_12);  // (from the original)
    u32 r1_13 = guest::cpu()->r[1];
    u32 r2_13 = guest::cpu()->r[2];
    u32 r3_13 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    u32 r0_32 = call_0056988c(r0_30 - 0x2cu, r1_13, r2_13, r3_13);  // (from the original)
    guest::cpu()->r[13] = r13;
    call_002f76ac(r0_32 - 0x1b28u, 0x2e3854u, 0x2b4u, 0xau);  // (from the original)
    u32 r1_14 = guest::cpu()->r[1];
    u32 r2_14 = guest::cpu()->r[2];
    u32 r3_14 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    u32 r0_35 = call_0056988c((r0_32 - 0x33fcu) + 0x18acu, r1_14, r2_14, r3_14);  // (from the original)
    u32 r1_15 = guest::cpu()->r[1];
    u32 r2_15 = guest::cpu()->r[2];
    u32 r3_15 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    u32 r0_37 = call_002684c0(r0_35 - 0x18acu, r1_15, r2_15, r3_15);  // (from the original)
    u32 r1_16 = guest::cpu()->r[1];
    u32 r2_16 = guest::cpu()->r[2];
    u32 r3_16 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    u32 r0_39 = call_00567ef0(r0_37 - 0x248u, r1_16, r2_16, r3_16);  // (from the original)
    u32 r1_17 = guest::cpu()->r[1];
    r13 += 8;
    guest::cpu()->r[13] = r13;
    return call_006aaa30(r0_39 - 0x4cu, r1_17);  // (from the original)
}

}  // namespace d_002c85bc
GUEST_EXPORT(0x002c85bc, d_002c85bc::f_002c85bc);

// f_002c8f70: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002c8f70 {

inline constexpr guest::Function<0x002f76ad, u32(u32, u32, u32, u32)> call_002f76ac;  // (from the original)
inline constexpr guest::Function<0x002f770c, u32(u32, u32, u32, u32)> call_002f770c;  // (from the original)
inline constexpr guest::Function<0x002f7710, u32(u32, u32, u32, u32)> call_002f7710;  // (from the original)
inline constexpr guest::Function<0x00567ef0, u32(u32, u32, u32, u32)> call_00567ef0;  // (from the original)
inline constexpr guest::Function<0x0056988c, u32(u32, u32, u32, u32)> call_0056988c;  // (from the original)
inline constexpr guest::Function<0x005bf744, u32(u32, u32, u32, u32)> call_005bf744;  // (from the original)
inline constexpr guest::Function<0x005d703c, u32(u32, u32, u32, u32)> call_005d703c;  // (from the original)
inline constexpr guest::Function<0x005e3194, u32(u32, u32, u32, u32)> call_005e3194;  // (from the original)
inline constexpr guest::Function<0x006aaa30, u32(u32, u32)> call_006aaa30;  // (from the original)

u32 f_002c8f70(gptr<BsMenuNumberInput> arg0) {
    u32 r0 = arg0.addr();
    u32 r13 = guest::cpu()->r[13];
    r13 -= 8;
    arg0->word_28 = 0x8f2534;  // (from the original)
    arg0->word_0 = 0x8f24c8;  // (from the original)
    arg0->word_2260 = 0x8ee228;  // (from the original)
    arg0->word_25f8 = 0x8ef284;  // (from the original)
    arg0->word_26dc = 0x8ef2c8;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_002f76ac(r0 + 0x2710u, 0x2e0b3cu, 0x518u, 2u);  // (from the original)
    u32 r1_1 = guest::cpu()->r[1];
    u32 r2_1 = guest::cpu()->r[2];
    u32 r3_1 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    u32 r0_2 = call_002f770c(r0 + 0x25f8u, r1_1, r2_1, r3_1);  // (from the original)
    u32 r2_2 = guest::cpu()->r[2];
    u32 r3_2 = guest::cpu()->r[3];
    *gptr<u32>(r0_2 - 0x398u) = 0x8f18f4;  // (from the original)
    guest::cpu()->r[13] = r13;
    u32 r0_4 = call_00567ef0(r0_2 - 0x248u, 0x8f18f4u, r2_2, r3_2);  // (from the original)
    u32 r1_2 = guest::cpu()->r[1];
    u32 r2_3 = guest::cpu()->r[2];
    u32 r3_3 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    u32 r0_6 = call_005bf744(r0_4 - 0x14cu, r1_2, r2_3, r3_3);  // (from the original)
    u32 r2_4 = guest::cpu()->r[2];
    u32 r3_4 = guest::cpu()->r[3];
    *gptr<u32>(r0_6 - 0x954u) = 0x8f8b4c;  // (from the original)
    guest::cpu()->r[13] = r13;
    u32 r0_8 = call_0056988c(r0_6 - 0x44u, 0x8f8b4cu, r2_4, r3_4);  // (from the original)
    u32 r1_3 = guest::cpu()->r[1];
    u32 r2_5 = guest::cpu()->r[2];
    u32 r3_5 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    u32 r0_10 = call_0056988c(r0_8 - 0x28u, r1_3, r2_5, r3_5);  // (from the original)
    u32 r1_4 = guest::cpu()->r[1];
    u32 r2_6 = guest::cpu()->r[2];
    u32 r3_6 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    u32 r0_12 = call_0056988c(r0_10 - 0x28u, r1_4, r2_6, r3_6);  // (from the original)
    u32 r1_5 = guest::cpu()->r[1];
    u32 r2_7 = guest::cpu()->r[2];
    u32 r3_7 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    u32 r0_14 = call_0056988c(r0_12 - 0x28u, r1_5, r2_7, r3_7);  // (from the original)
    u32 r1_6 = guest::cpu()->r[1];
    u32 r2_8 = guest::cpu()->r[2];
    u32 r3_8 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    u32 r0_16 = call_00567ef0(r0_14 - 0x248u, r1_6, r2_8, r3_8);  // (from the original)
    u32 r1_7 = guest::cpu()->r[1];
    u32 r2_9 = guest::cpu()->r[2];
    u32 r3_9 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    u32 r0_18 = call_005bf744(r0_16 - 0x14cu, r1_7, r2_9, r3_9);  // (from the original)
    u32 r1_8 = guest::cpu()->r[1];
    u32 r2_10 = guest::cpu()->r[2];
    u32 r3_10 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    u32 r0_20 = call_005e3194(r0_18 - 0xd0u, r1_8, r2_10, r3_10);  // (from the original)
    u32 r1_9 = guest::cpu()->r[1];
    u32 r2_11 = guest::cpu()->r[2];
    u32 r3_11 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    u32 r0_22 = call_005e3194(r0_20 - 0xc4u, r1_9, r2_11, r3_11);  // (from the original)
    u32 r1_10 = guest::cpu()->r[1];
    u32 r2_12 = guest::cpu()->r[2];
    u32 r3_12 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    u32 r0_24 = call_005e3194(r0_22 - 0xc4u, r1_10, r2_12, r3_12);  // (from the original)
    u32 r1_11 = guest::cpu()->r[1];
    u32 r2_13 = guest::cpu()->r[2];
    u32 r3_13 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    u32 r0_26 = call_005e3194(r0_24 - 0xc4u, r1_11, r2_13, r3_13);  // (from the original)
    u32 r1_12 = guest::cpu()->r[1];
    u32 r2_14 = guest::cpu()->r[2];
    u32 r3_14 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    u32 r0_28 = call_005e3194(r0_26 - 0xc4u, r1_12, r2_14, r3_14);  // (from the original)
    u32 r1_13 = guest::cpu()->r[1];
    u32 r2_15 = guest::cpu()->r[2];
    u32 r3_15 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    u32 r0_30 = call_005d703c(r0_28 - 0x100u, r1_13, r2_15, r3_15);  // (from the original)
    u32 ea_1 = r0_30 + 0xffffe71cu;  // (from the original)
    *gptr<u32>(ea_1) = 0x8f978c;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_002f76ac(ea_1 + 0xe40u, 0x2b6ef8u, 0xe0u, 0xcu);  // (from the original)
    u32 r1_14 = guest::cpu()->r[1];
    u32 r2_16 = guest::cpu()->r[2];
    u32 r3_16 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    u32 r0_33 = call_002f7710(ea_1 + 0xd5cu, r1_14, r2_16, r3_16);  // (from the original)
    guest::cpu()->r[13] = r13;
    call_002f76ac(r0_33 - 0x930u, 0x6eed5cu, 0xc4u, 0xcu);  // (from the original)
    u32 r1_15 = guest::cpu()->r[1];
    u32 r2_17 = guest::cpu()->r[2];
    u32 r3_17 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    u32 r0_36 = call_0056988c((r0_33 - 0xd5cu) + 0x3e0u, r1_15, r2_17, r3_17);  // (from the original)
    u32 r1_16 = guest::cpu()->r[1];
    u32 r2_18 = guest::cpu()->r[2];
    u32 r3_18 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    u32 r0_38 = call_0056988c(r0_36 - 0x28u, r1_16, r2_18, r3_18);  // (from the original)
    u32 r1_17 = guest::cpu()->r[1];
    u32 r2_19 = guest::cpu()->r[2];
    u32 r3_19 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    u32 r0_40 = call_005bf744(r0_38 - 0x14cu, r1_17, r2_19, r3_19);  // (from the original)
    u32 r1_18 = guest::cpu()->r[1];
    u32 r2_20 = guest::cpu()->r[2];
    u32 r3_20 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    u32 r0_42 = call_00567ef0(r0_40 - 0x248u, r1_18, r2_20, r3_20);  // (from the original)
    u32 r1_19 = guest::cpu()->r[1];
    r13 += 8;
    guest::cpu()->r[13] = r13;
    return call_006aaa30(r0_42 - 0x74u, r1_19);  // (from the original)
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
    guest::StackFrame frame(0x10);  // the original's stack frame
    u32 r0_1 = call_002fa9d0(r1, r1, r2, r3);
    u32 r3_1 = ~0u;
    u32 r0_2 = call_003193e8(r1, r0_1, r3_1, r3_1);
    u32 r0_3 = call_005b1a1c(frame.at(0).addr(), guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    call_005b19e8(r0_3, r0_2, guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r0_5 = call_005b1a08(frame.at(8).addr(), frame.at(0).addr(), guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r1_3 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    u32 r5 = r0_5;
    u32 r6 = 0u;
    u32 r4 = *gptr<u32>(0x1368u + r0);  // (from the original)
    if (r4 == 0) {
        return r6;
    }
    do {
        u32 r0_6 = call_00755ad4(r5, r4 + 0xcu, r2, r3);  // (from the original)
        r1_3 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        if (r0_6 != 0) {
            return r4 + 0x14u;  // (from the original)
        }
        r4 = *gptr<u32>(r4 + 8u);
        guest::preempt();
    } while (r4 != 0);
    guest::cpu()->r[1] = r1_3;
    return r6;
}

}  // namespace d_002caabc
GUEST_EXPORT_FRAMED(0x002caabc, d_002caabc::f_002caabc, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_002cab78: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002cab78 {

inline constexpr guest::Function<0x002fa9d0, u32(u32, u32, u32, u32)> call_002fa9d0;  // (from the original)
inline constexpr guest::Function<0x003193e8, u32(u32, u32, u32, u32)> call_003193e8;  // (from the original)
inline constexpr guest::Function<0x005b19e8, u32(u32, u32, u32, u32)> call_005b19e8;  // (from the original)
inline constexpr guest::Function<0x005b1a08, u32(u32, u32, u32, u32)> call_005b1a08;  // (from the original)
inline constexpr guest::Function<0x005b1a1c, u32(u32, u32, u32, u32)> call_005b1a1c;  // (from the original)
inline constexpr guest::Function<0x00755ad4, u32(u32, u32, u32, u32)> call_00755ad4;  // (from the original)

u32 f_002cab78(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0x10);  // the original's stack frame
    u32 r0_1 = call_002fa9d0(0x2cac2cu, r1, r2, r3);  // (from the original)
    u32 r3_1 = ~0u;
    u32 r0_2 = call_003193e8(0x2cac2cu, r0_1, r3_1, r3_1);  // (from the original)
    u32 r0_3 = call_005b1a1c(frame.at(0).addr(), guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    call_005b19e8(r0_3, r0_2, guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r0_5 = call_005b1a08(frame.at(8).addr(), frame.at(0).addr(), guest::cpu()->r[2], guest::cpu()->r[3]);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    u32 r4 = *gptr<u32>(r0 + 0x13cu);  // (from the original)
    u32 r5 = r0_5;
    u32 r6 = 0u;
    if (r4 == 0) {
        return r6;
    }
    do {
        u32 r0_6 = call_00755ad4(r5, r4 + 0xcu, r2, r3);  // (from the original)
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        if (r0_6 != 0) {
            return r4 + 0x14u;  // (from the original)
        }
        r4 = *gptr<u32>(r4 + 8u);
        guest::preempt();
    } while (r4 != 0);
    return r6;
}

}  // namespace d_002cab78
GUEST_EXPORT_FRAMED(0x002cab78, d_002cab78::f_002cab78, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

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

inline guest::global<u32, 0x002caebc> global_002caebc;  // (from the original)
inline guest::global<u32, 0x002caec0> global_002caec0;  // (from the original)
inline guest::global<u32, 0x002caec4> global_002caec4;  // (from the original)

void f_002cae6c(gptr<Object_002cae6c_0> arg0, gptr<Object_002cae6c_1> arg1) {
    float S2_1 = std::bit_cast<float>(arg1->word_48);
    float S3_1 = std::bit_cast<float>(arg1->word_4c);
    float S4_1 = std::bit_cast<float>(*global_002caebc);
    float S6_1 = std::bit_cast<float>(*global_002caec0);
    float S0_1 = std::bit_cast<float>(arg1->word_8c) + S2_1 * S4_1;
    float S1_1 = std::bit_cast<float>(arg1->word_9c) - S3_1 * S4_1;
    float S5_1 = std::bit_cast<float>(*global_002caec4);
    arg0->byte_13c = 1;
    float S4_2 = S6_1 - S0_1;
    float S0_2 = S1_1 + S5_1;
    arg0->word_140 = std::bit_cast<u32>(S4_2);
    arg0->word_144 = std::bit_cast<u32>(S0_2);
    arg0->word_148 = std::bit_cast<u32>(S2_1);
    arg0->word_14c = std::bit_cast<u32>(S3_1);
    guest::cpu()->r[1] = 1u;
    guest::cpu()->s[0] = S0_2;
    guest::cpu()->s[1] = S1_1;
    return;
}

}  // namespace d_002cae6c
GUEST_EXPORT(0x002cae6c, d_002cae6c::f_002cae6c);

// f_002cb150: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002cb150 {

inline guest::global<u32, 0x0095decc> global_0095decc;  // (from the original)
inline constexpr guest::Function<0x002f825c, u32(u32, u32, u32, u32)> call_002f825c;  // (from the original)
inline constexpr guest::Function<0x003083bc, u32(u32, u32, u32, u32)> call_003083bc;  // (from the original)
inline constexpr guest::Function<0x005e2e50, u32(u32, u32, u32, u32)> call_005e2e50;  // (from the original)
inline constexpr guest::Function<0x005e2f94, u32(u32, u32)> call_005e2f94;  // (from the original)
inline constexpr guest::Function<0x005ea8dc, u32(u32, u32, u32, u32)> call_005ea8dc;  // (from the original)
inline constexpr guest::Function<0x005ea8f8, u32(u32, u32, u32, u32)> call_005ea8f8;  // (from the original)
inline constexpr guest::Function<0x005ea964, u32(u32, u32, u32, u32)> call_005ea964;  // (from the original)
inline constexpr guest::Function<0x005f4bfc, u32(u32, u32, u32, u32)> call_005f4bfc;  // (from the original)

void f_002cb150(u32 r0, u32 r1_unused, u32 r2_unused, u32 r3) {
    guest::StackFrame frame(0xa4);  // the original's stack frame
    u32 res_1 = 0;
    u32 r3_4 = 0;
    u32 r6 = r0;
    u32 r0_2 = call_003083bc(frame.at(8).addr(), frame.at(0x20).addr(), 0x40u, r3);  // (from the original)
    u32 r5 = 0x90a228u;  // (from the original)
    *gptr<u32>(r0_2) = r5;
    u32 r0_4 = call_005f4bfc(r0_2 + 0xcu, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    call_002f825c(r0_4 + 0xcu, 0x80u, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r2 = 0x8906ecu;  // (from the original)
    u32 r4 = 0u;
    r0 = ((r0_4 - 0xcu) + 0x18u) - 2u;  // (from the original)
    u32 r1 = 0x20u;  // (from the original)
    do {
        u32 r3_3 = *gptr<u16>(r2);
        res_1 = r1 - 1u;
        r1 = res_1;
        *gptr<u16>(r0 + 2u) = u16(r3_3);
        r3_4 = *gptr<u16>(r2);
        u32 ea_2 = r0 + 4u;
        *gptr<u16>(ea_2) = u16(r3_4);
        r0 = ea_2;
        guest::preempt();
    } while (res_1 != 0);
    call_005ea8f8(*global_0095decc, 0u, r2, r3_4);
    *frame.at<u32>(0) = r4;
    call_005ea964(*global_0095decc, frame.at(8).addr(), 0x879e2cu, 0x1d8u);  // (from the original)
    call_005ea8dc(*global_0095decc, 0u, guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r0_10 = r6 + 0xd24u;  // (from the original)
    call_005e2e50(r0_10, frame.at(8).addr(), guest::cpu()->r[2], guest::cpu()->r[3]);
    call_005e2f94(r0_10, guest::cpu()->r[1]);
    *frame.at<u32>(8) = r5;
    return;
}

}  // namespace d_002cb150
GUEST_EXPORT_FRAMED(0x002cb150, d_002cb150::f_002cb150, 0x40f0);  // pushes {r4, r5, r6, r7, lr} first, as the original

// f_002cb8e4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002cb8e4 {

struct __attribute__((packed)) Object_002cb8e4_0 {
    u8 unknown_0[0xd04];  // (not used here)
    u32 word_d04;
    u8 unknown_d08[0x7fc];  // (not used here)
    u32 word_1504;
    u8 unknown_1508[0x13c];  // (not used here)
    u32 word_1644;
};
GUEST_OFFSET(Object_002cb8e4_0, word_d04, 0xd04);  // (from the original)
GUEST_OFFSET(Object_002cb8e4_0, word_1504, 0x1504);  // (from the original)
GUEST_OFFSET(Object_002cb8e4_0, word_1644, 0x1644);  // (from the original)

struct __attribute__((packed)) Local_002cb8e4_r0_1 {
    u8 unknown_0[0xb7];  // (not used here)
    u8 byte_b7;
};
GUEST_OFFSET(Local_002cb8e4_r0_1, byte_b7, 0xb7);  // (from the original)

struct __attribute__((packed)) Local_002cb8e4_r0_2 {
    u8 unknown_0[0x30];  // (not used here)
    u32 word_30;
    u8 unknown_34[0x83];  // (not used here)
    u8 byte_b7;
};
GUEST_OFFSET(Local_002cb8e4_r0_2, word_30, 0x30);  // (from the original)
GUEST_OFFSET(Local_002cb8e4_r0_2, byte_b7, 0xb7);  // (from the original)

struct __attribute__((packed)) Local_002cb8e4_r12_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_002cb8e4_r12_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_002cb8e4_r12_1, word_4, 0x4);  // (from the original)

struct __attribute__((packed)) Local_002cb8e4_r1_2 {
    u8 unknown_0[0xb7];  // (not used here)
    u8 byte_b7;
};
GUEST_OFFSET(Local_002cb8e4_r1_2, byte_b7, 0xb7);  // (from the original)

struct __attribute__((packed)) Local_002cb8e4_r1_3 {
    u8 unknown_0[0x324];  // (not used here)
    u32 word_324;
    u8 unknown_328[0x20];  // (not used here)
    u32 word_348;
};
GUEST_OFFSET(Local_002cb8e4_r1_3, word_324, 0x324);  // (from the original)
GUEST_OFFSET(Local_002cb8e4_r1_3, word_348, 0x348);  // (from the original)

struct __attribute__((packed)) Local_002cb8e4_r1_4 {
    u8 unknown_0[0x28];  // (not used here)
    u32 word_28;
    u8 unknown_2c[0x4];  // (not used here)
    u32 word_30;
};
GUEST_OFFSET(Local_002cb8e4_r1_4, word_28, 0x28);  // (from the original)
GUEST_OFFSET(Local_002cb8e4_r1_4, word_30, 0x30);  // (from the original)

struct __attribute__((packed)) Local_002cb8e4_r2_1 {
    u32 word_0;
};
GUEST_OFFSET(Local_002cb8e4_r2_1, word_0, 0x0);  // (from the original)


void f_002cb8e4(gptr<Object_002cb8e4_0> arg0, float S0, float S1) {
    u32 r0 = arg0.addr();
    gptr<Local_002cb8e4_r2_1> r2_1 = gptr<Local_002cb8e4_r2_1>(r0 + 0xd04u);  // (from the original)
    if (arg0->word_1504 != 0) {
        gptr<Local_002cb8e4_r0_1> r0_1 = gptr<Local_002cb8e4_r0_1>(arg0->word_d04);
        u32 r1_1 = u32(r0_1->byte_b7) & 0xfeu;  // (from the original)
        r0_1->byte_b7 = u8(r1_1);
        guest::cpu()->r[1] = r1_1;
        return;
    }
    gptr<Local_002cb8e4_r1_2> r1_2 = gptr<Local_002cb8e4_r1_2>(arg0->word_d04);
    r1_2->byte_b7 = u8(u32(r1_2->byte_b7) & 0xfeu | 1u);  // (from the original)
    gptr<Local_002cb8e4_r1_3> r1_3 = gptr<Local_002cb8e4_r1_3>(r0 + 0x11e8u);  // (from the original)
    float S1_1 = std::bit_cast<float>(r1_3->word_324);
    float S2_1 = std::bit_cast<float>(r1_3->word_348);
    gptr<Local_002cb8e4_r1_4> r1_4 = gptr<Local_002cb8e4_r1_4>(r2_1->word_0);
    float S1_2 = S1_1 + float(s32(std::bit_cast<u32>(std::bit_cast<float>(*gptr<u32>(r0 + 0x1504u))))) * S2_1;  // (from the original)
    float S2_2 = std::bit_cast<float>(arg0->word_1644);
    gptr<Local_002cb8e4_r0_2> r0_2 = gptr<Local_002cb8e4_r0_2>(r2_1->word_0);
    float S0_1 = std::bit_cast<float>(r1_4->word_28);
    u32 r1_5 = r1_4->word_30;
    gptr<Local_002cb8e4_r12_1> r12_1 = gptr<Local_002cb8e4_r12_1>(r0_2.addr() + 0x28u);  // (from the original)
    float S1_3 = S2_2 + S1_2;
    r12_1->word_0 = std::bit_cast<u32>(S0_1);
    r12_1->word_4 = std::bit_cast<u32>(S1_3);
    r0_2->word_30 = r1_5;
    u32 r1_6 = u32(r0_2->byte_b7) & 0xcfu;  // (from the original)
    r0_2->byte_b7 = u8(r1_6);
    guest::cpu()->r[1] = r1_6;
    guest::cpu()->s[0] = S0_1;
    guest::cpu()->s[1] = S1_3;
    return;
}

}  // namespace d_002cb8e4
GUEST_EXPORT(0x002cb8e4, d_002cb8e4::f_002cb8e4);

// f_002cbad8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002cbad8 {

inline constexpr guest::Function<0x001cb8fc, u32(u32, u32, u32, u32)> call_001cb8fc;  // (from the original)
inline constexpr guest::Function<0x002b7c94, u32(u32, u32, u32, u32)> call_002b7c94;  // (from the original)
inline constexpr guest::Function<0x002f76ad, u32(u32, u32, u32, u32)> call_002f76ac;  // (from the original)
inline constexpr guest::Function<0x002f7710, u32(u32, u32, u32, u32)> call_002f7710;  // (from the original)
inline constexpr guest::Function<0x00567ef0, u32(u32, u32, u32, u32)> call_00567ef0;  // (from the original)
inline constexpr guest::Function<0x0056988c, u32(u32, u32, u32, u32)> call_0056988c;  // (from the original)
inline constexpr guest::Function<0x005bf744, u32(u32, u32, u32, u32)> call_005bf744;  // (from the original)
inline constexpr guest::Function<0x005e3194, u32(u32, u32, u32, u32)> call_005e3194;  // (from the original)

u32 f_002cbad8(gptr<CensusContentList> arg0, u32 r1_unused, u32 r2, u32 r3) {
    u32 r0 = arg0.addr();
    guest::cpu()->r[13] -= 8u;
    arg0->word_0 = 0x8f2638;  // (from the original)
    u32 r0_2 = call_002b7c94(r0 + 0x1650u, 0x8f2638u, r2, r3);  // (from the original)
    u32 r4_1 = r0_2 - 0x1650u;  // (from the original)
    call_002f76ac(r0_2 - 0xd0u, 0x1c81ccu, 0x1cu, 7u);  // (from the original)
    *gptr<u32>(r4_1 + 0xde8u) = 0x8f0888;  // (from the original)
    u32 r0_5 = call_002f7710(r4_1 + 0x13f0u, 0x8f0888u, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    call_002f76ac(r0_5 - 0x1c0u, 0x2b6ef8u, 0xe0u, 2u);  // (from the original)
    u32 r0_7 = (r0_5 - 0x608u) + 0x410u;  // (from the original)
    u32 r0_8 = call_0056988c(r0_7, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r0_10 = call_0056988c(r0_8 - 0x28u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r0_12 = call_0056988c(r0_10 - 0x28u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r0_14 = call_0056988c(r0_12 - 0x28u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r0_16 = call_005bf744(r0_14 - 0x14cu, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r0_18 = call_00567ef0(r0_16 - 0x248u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r0_20 = call_005e3194(r0_18 - 0xc8u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r0_22 = call_0056988c(r0_20 - 0x4cu, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    call_002f76ac(r0_22 - 0xb28u, 0x2caf00u, 0x198u, 7u);  // (from the original)
    u32 r1_9 = guest::cpu()->r[1];
    u32 r2_10 = guest::cpu()->r[2];
    u32 r3_10 = guest::cpu()->r[3];
    guest::cpu()->r[13] += 8u;
    return call_001cb8fc(r0_22 - 0xcd8u, r1_9, r2_10, r3_10);  // (from the original)
}

}  // namespace d_002cbad8
GUEST_EXPORT(0x002cbad8, d_002cbad8::f_002cbad8);

// f_002cbbbc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002cbbbc {

inline constexpr guest::Function<0x002fb94c, u32(u32, u32, u32, u32)> call_002fb94c;  // (from the original)
inline constexpr guest::Function<0x007200fc, u32(u32, u32)> call_007200fc;  // (from the original)

u32 f_002cbbbc(u32 r0, u32 r1) {
    u32 r0_1 = call_002fb94c(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r0_3 = call_007200fc(r0_1 + 0x6f10u, *gptr<u32>(r0 + (*gptr<u32>(0x185cu + r0) << 2) + 0x1860u) - 1u);  // (from the original)
    if (s32(r0_3) < 0) {
        return r0_3;
    }
    u32 r1_3 = *gptr<u32>(r0 + 0x3ca0u);  // (from the original)
    guest::cpu()->r[1] = r1_3;
    return r0_3 + r1_3;
}

}  // namespace d_002cbbbc
GUEST_EXPORT_FRAMED(0x002cbbbc, d_002cbbbc::f_002cbbbc, 0x4010);  // pushes {r4, lr} first, as the original

// f_002cbea4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002cbea4 {

inline constexpr guest::Function<0x002d49d8, u32(u32, u32, u32, u32)> call_002d49d8;  // (from the original)
inline constexpr guest::Function<0x002fb94c, u32(u32, u32, u32, u32)> call_002fb94c;  // (from the original)

void f_002cbea4(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r1_2 = 0;
    u32 r0_2 = 0;
    u32 r2_1 = 0;
    u32 r1_3 = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    u32 r0_1 = call_002fb94c(r0, r1, r2, r3);
    u32 r3_1 = guest::cpu()->r[3];
    u32 r1_1 = *gptr<u32>(0x3ca0u + r0);  // (from the original)
    if (s32(r1_1) <= s32(r1)) {
        r3_1 = r1_1 + 0xau;  // (from the original)
        if (r3_1 > r1) {
            r1_2 = r1 - r1_1;
            r0_2 = r0_1 + 0x6f10u;  // (from the original)
            r2_1 = *gptr<u32>(r0 + (*gptr<u32>(0x185cu + r0) << 2) + 0x1860u) - 1u;  // (from the original)
            r1_3 = r1_2 + (r2_1 + (r2_1 << 2) << 1);
            guest::cpu()->r[13] += 0x10u;  // (from the original)
            call_002d49d8(r0_2, r1_3, r2, r3_1);
            return;
        }
    }
    r1_2 = ~0u;
    r0_2 = r0_1 + 0x6f10u;  // (from the original)
    r2_1 = *gptr<u32>(r0 + (*gptr<u32>(0x185cu + r0) << 2) + 0x1860u) - 1u;  // (from the original)
    r1_3 = r1_2 + (r2_1 + (r2_1 << 2) << 1);
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    call_002d49d8(r0_2, r1_3, r2, r3_1);
    return;
}

}  // namespace d_002cbea4
GUEST_EXPORT(0x002cbea4, d_002cbea4::f_002cbea4);

// f_002cc00c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002cc00c {

struct __attribute__((packed)) Local_002cc00c_ea_5 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_002cc00c_ea_5, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_002cc00c_ea_5, word_4, 0x4);  // (from the original)

inline constexpr guest::Function<0x002682ac, u32(u32, u32, u32, u32)> call_002682ac;  // (from the original)
inline constexpr guest::Function<0x002cdcb0, u32(u32)> call_002cdcb0;  // (from the original)
inline constexpr guest::Function<0x00301d0d, u32(u32, u32, u32, u32)> call_00301d0c;  // (from the original)

u32 f_002cc00c(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r0_1 = call_002682ac(r0, r1, r2, r3);
    *gptr<u32>(r0_1 + 0xa40u) = 0x8f26a4;  // (from the original)
    *gptr<u32>(r0_1) = 0x8f2674;  // (from the original)
    u32 r0_3 = call_00301d0c(r0_1 + 0x1888u, 0x2b9440u, 0x36cu, 0xau);  // (from the original)
    u32 r0_5 = call_002cdcb0(r0_3 + 0x2238u);  // (from the original)
    u32 r0_6 = r0_5 - 0x3ac0u;  // (from the original)
    *gptr<u32>(0x3ca0u + r0_6) = 0;  // (from the original)
    *gptr<u8>(0x3ca4u + r0_6) = 0;  // (from the original)
    *gptr<u32>(r0_6 + 0xa64u) = 0x2cc0a0;  // (from the original)
    *gptr<u32>(r0_6 + 0x24u) = 0x2cc090;  // (from the original)
    gptr<Local_002cc00c_ea_5> ea_5 = gptr<Local_002cc00c_ea_5>(r0_6 + 0xa68u);  // (from the original)
    ea_5->word_0 = 0xa1877c;  // (from the original)
    ea_5->word_4 = 0x2cc0b0;  // (from the original)
    guest::cpu()->r[1] = 0xa1877cu;  // (from the original)
    return r0_6;
}

}  // namespace d_002cc00c
GUEST_EXPORT_FRAMED(0x002cc00c, d_002cc00c::f_002cc00c, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_002cc1b0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002cc1b0 {

struct __attribute__((packed)) Object_002cc1b0_0 {
    u8 unknown_0[0x3520];  // (not used here)
    u32 word_3520;
};
GUEST_OFFSET(Object_002cc1b0_0, word_3520, 0x3520);  // (from the original)

inline constexpr guest::Function<0x002e3568, u32(u32, u32, u32, u32)> call_002e3568;  // (from the original)

void f_002cc1b0(gptr<Object_002cc1b0_0> arg0, u32 r1, u32 r2_unused, u32 r3) {
    u32 r0 = arg0.addr();
    u32 r2_1 = arg0->word_3520;
    if (s32(r2_1) > s32(r1)) {
        u32 r1_2 = (~0u) * 0xadu;  // (from the original)
        call_002e3568(r0 + (r1_2 << 2) + 0x18d4u, r1_2, 0xadu, r3);  // (from the original)
        return;  // (from the original)
    }
    if (r2_1 + 0xau > r1) {  // (from the original)
        u32 r1_4 = (r1 - r2_1) * 0xadu;  // (from the original)
        call_002e3568(r0 + (r1_4 << 2) + 0x18d4u, r1_4, 0xadu, r1);  // (from the original)
        return;  // (from the original)
    }
    u32 r1_6 = (~0u) * 0xadu;  // (from the original)
    call_002e3568(r0 + (r1_6 << 2) + 0x18d4u, r1_6, 0xadu, r1);  // (from the original)
    return;  // (from the original)
}

}  // namespace d_002cc1b0
GUEST_EXPORT(0x002cc1b0, d_002cc1b0::f_002cc1b0);

// f_002cc4bc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002cc4bc {

struct __attribute__((packed)) Local_002cc4bc_ea_3 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_002cc4bc_ea_3, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_002cc4bc_ea_3, word_4, 0x4);  // (from the original)

struct __attribute__((packed)) Local_002cc4bc_r1_1 {
    u32 word_0;
    u32 word_4;
    u8 byte_8;
    u8 unknown_9[0xf];  // (not used here)
    u8 byte_18;
    u8 unknown_19[0x3];  // (not used here)
    u32 word_1c;
    u32 word_20;
};
GUEST_OFFSET(Local_002cc4bc_r1_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_002cc4bc_r1_1, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_002cc4bc_r1_1, byte_8, 0x8);  // (from the original)
GUEST_OFFSET(Local_002cc4bc_r1_1, byte_18, 0x18);  // (from the original)
GUEST_OFFSET(Local_002cc4bc_r1_1, word_1c, 0x1c);  // (from the original)
GUEST_OFFSET(Local_002cc4bc_r1_1, word_20, 0x20);  // (from the original)

struct __attribute__((packed)) Local_002cc4bc_r5_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_002cc4bc_r5_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_002cc4bc_r5_1, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_002cc4bc_r5_1, word_8, 0x8);  // (from the original)

inline guest::global<u32, 0x0087a2a8> global_0087a2a8;  // (from the original)
inline guest::global<u32, 0x0087a2ac> global_0087a2ac;  // (from the original)
inline constexpr guest::Function<0x00125aec, u32(u32, u32, u32, u32)> call_00125aec;  // (from the original)
inline constexpr guest::Function<0x002682ac, u32(u32, u32, u32, u32)> call_002682ac;  // (from the original)
inline constexpr guest::Function<0x002f915c, u32(u32)> call_002f915c;  // (from the original)
inline constexpr guest::Function<0x00301d0d, u32(u32, u32, u32, u32)> call_00301d0c;  // (from the original)

u32 f_002cc4bc(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r0_1 = call_002682ac(r0, r1, r2, r3);
    gptr<Local_002cc4bc_r1_1> r1_1 = gptr<Local_002cc4bc_r1_1>(r0_1 + 0x1888u);  // (from the original)
    r1_1->word_4 = 0;
    r1_1->byte_8 = 0;
    u32 r3_1 = *global_0087a2ac;
    gptr<Local_002cc4bc_r5_1> r5_1 = gptr<Local_002cc4bc_r5_1>(r0_1 + 0x1894u);  // (from the original)
    r5_1->word_0 = *global_0087a2a8;
    r5_1->word_4 = r3_1;
    r5_1->word_8 = 0;
    r1_1->byte_18 = 0;
    r1_1->word_1c = 0;
    u32 r3_2 = 0x8f26e4u;  // (from the original)
    r1_1->word_20 = 0;
    *gptr<u32>(r0_1) = 0x8f26b8;  // (from the original)
    *gptr<u32>(r0_1 + 0xa40u) = r3_2;  // (from the original)
    r1_1->word_0 = r3_2 + 0x14u;  // (from the original)
    u32 r0_3 = call_00125aec(r0_1 + 0x18acu, r1_1.addr(), 0x8f26b8u, r3_2);  // (from the original)
    u32 r0_5 = call_00301d0c(r0_3 + 0x28u, 0x2e37acu, 0x2b4u, 0xau);  // (from the original)
    u32 r0_7 = call_002f915c(r0_5 + 0x1b08u);  // (from the original)
    u32 r0_8 = r0_7 - 0x33dcu;  // (from the original)
    *gptr<u8>(0x351cu + r0_8) = 0;  // (from the original)
    *gptr<u32>(0x3520u + r0_8) = 0;  // (from the original)
    *gptr<u32>(r0_8 + 0x24u) = 0x2cc588;  // (from the original)
    *gptr<u32>(r0_8 + 0xa64u) = 0x2cc594;  // (from the original)
    gptr<Local_002cc4bc_ea_3> ea_3 = gptr<Local_002cc4bc_ea_3>(r0_8 + 0xa68u);  // (from the original)
    ea_3->word_0 = 0x9533c4;  // (from the original)
    ea_3->word_4 = 0x2cc59c;  // (from the original)
    guest::cpu()->r[1] = 0x9533c4u;  // (from the original)
    return r0_8;
}

}  // namespace d_002cc4bc
GUEST_EXPORT_FRAMED(0x002cc4bc, d_002cc4bc::f_002cc4bc, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_002cc5c4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002cc5c4 {

inline constexpr guest::Function<0x002684c0, u32(u32, u32, u32, u32)> call_002684c0;  // (from the original)
inline constexpr guest::Function<0x002f76ad, u32(u32, u32, u32, u32)> call_002f76ac;  // (from the original)
inline constexpr guest::Function<0x0056988c, u32(u32, u32, u32, u32)> call_0056988c;  // (from the original)

u32 f_002cc5c4(gptr<ChangeStockLetter> arg0) {
    u32 r0 = arg0.addr();
    guest::cpu()->r[13] -= 8u;
    arg0->word_a40 = 0x8f26e4;  // (from the original)
    arg0->word_0 = 0x8f26b8;  // (from the original)
    arg0->word_1888 = 0x8f26f8;  // (from the original)
    u32 r1_1 = 0x8ee258u;  // (from the original)
    arg0->word_33dc = 0x8ee248;  // (from the original)
    arg0->word_33e8 = r1_1;
    u32 r0_2 = call_0056988c(r0 + 0x34f0u, r1_1, 0x8ee248u, 0x8f26b8u);  // (from the original)
    u32 r0_4 = call_0056988c(r0_2 - 0x28u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r0_6 = call_0056988c(r0_4 - 0x28u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r0_8 = call_0056988c(r0_6 - 0x28u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r0_10 = call_0056988c(r0_8 - 0x28u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r0_12 = call_0056988c(r0_10 - 0x28u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r0_14 = call_0056988c(r0_12 - 0x2cu, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    call_002f76ac(r0_14 - 0x1b28u, 0x2e3854u, 0x2b4u, 0xau);  // (from the original)
    u32 r0_16 = (r0_14 - 0x33fcu) + 0x18acu;  // (from the original)
    u32 r0_17 = call_0056988c(r0_16, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r1_9 = guest::cpu()->r[1];
    u32 r2_8 = guest::cpu()->r[2];
    u32 r3_8 = guest::cpu()->r[3];
    guest::cpu()->r[13] += 8u;
    return call_002684c0(r0_17 - 0x18acu, r1_9, r2_8, r3_8);  // (from the original)
}

}  // namespace d_002cc5c4
GUEST_EXPORT(0x002cc5c4, d_002cc5c4::f_002cc5c4);

// f_002cca88: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002cca88 {

inline constexpr guest::Function<0x002b7938, u32(u32, u32, u32, u32)> call_002b7938;  // (from the original)
inline constexpr guest::Function<0x002cdcb0, u32(u32)> call_002cdcb0;  // (from the original)
inline constexpr guest::Function<0x00301d0d, u32(u32, u32, u32, u32)> call_00301d0c;  // (from the original)

u32 f_002cca88(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r0_1 = call_002b7938(r0, r1, r2, r3);
    *gptr<u32>(r0_1) = 0x8f270c;  // (from the original)
    u32 r0_3 = call_00301d0c(r0_1 + 0xa40u, 0x2b9440u, 0x36cu, 8u);  // (from the original)
    u32 r0_5 = call_002cdcb0(r0_3 + 0x1b60u);  // (from the original)
    u32 r0_6 = r0_5 - 0x25a0u;  // (from the original)
    *gptr<u32>(0x2780u + r0_6) = 0;  // (from the original)
    *gptr<u8>((0x2780u | u32(s32(0x2780u) >> 0xb)) + r0_6) = 0;  // (from the original)
    *gptr<u32>(r0_6 + 0x24u) = 0x2ccae4;  // (from the original)
    guest::cpu()->r[1] = 0u;
    return r0_6;
}

}  // namespace d_002cca88
GUEST_EXPORT_FRAMED(0x002cca88, d_002cca88::f_002cca88, 0x4010);  // pushes {r4, lr} first, as the original

// f_002ccb84: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002ccb84 {

struct __attribute__((packed)) Object_002ccb84_0 {
    u8 byte_0;
    u8 byte_1;
};
GUEST_OFFSET(Object_002ccb84_0, byte_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_002ccb84_0, byte_1, 0x1);  // (from the original)

struct __attribute__((packed)) Local_002ccb84_r1_1 {
    u8 unknown_0[0x9f];  // (not used here)
    u8 byte_9f;
};
GUEST_OFFSET(Local_002ccb84_r1_1, byte_9f, 0x9f);  // (from the original)

inline guest::global<u32, 0x0095386c> global_0095386c;  // (from the original)

u32 f_002ccb84(gptr<Object_002ccb84_0> arg0) {
    u32 r0 = arg0.addr();
    gptr<Local_002ccb84_r1_1> r1_1 = gptr<Local_002ccb84_r1_1>(*global_0095386c);
    if (r1_1.addr() == 0) {
        guest::cpu()->r[1] = r1_1.addr();
        return r0;
    }
    u32 r2_1 = r1_1->byte_9f;
    u32 r2_2 = u32(arg0->byte_0) == 0 ? r2_1 & ~1u : r2_1 | 1u;
    r1_1->byte_9f = u8(r2_2);
    u32 r0_1 = r2_2 & 0xffu;  // (from the original)
    u32 r0_2 = u32(arg0->byte_1) == 0 ? r0_1 & ~4u : r0_1 | 4u;
    r1_1->byte_9f = u8(r0_2);
    guest::cpu()->r[1] = r1_1.addr();
    return r0_2;
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


void f_002ccbd4(gptr<Object_002ccbd4_0> arg0) {
    u32 r1_1 = 1u;
    *gptr<u8>(*gptr<u32>(arg0->word_318 + 0x4a0u) + (0u << 3) + 0xd9u) = u8(r1_1);  // (from the original)
    guest::cpu()->r[1] = r1_1;
    return;
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
    u32 r3_1 = r1 * 0xa3u;  // (from the original)
    u32 r2_1 = r2 ^ 1u;
    *gptr<u8>(arg0->word_108 + (r3_1 << 3) + 0xd9u) = u8(r2_1);  // (from the original)
    return call_002e0428(arg0->word_108 + (r3_1 << 3), r2, r2_1, r3_1);
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

struct __attribute__((packed)) Local_002cd064_ea_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
};
GUEST_OFFSET(Local_002cd064_ea_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_002cd064_ea_1, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_002cd064_ea_1, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Local_002cd064_ea_1, word_c, 0xc);  // (from the original)

struct __attribute__((packed)) Local_002cd064_ea_2 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
};
GUEST_OFFSET(Local_002cd064_ea_2, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_002cd064_ea_2, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_002cd064_ea_2, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Local_002cd064_ea_2, word_c, 0xc);  // (from the original)

inline guest::global<u32, 0x00857d28> global_00857d28;  // (from the original)
inline guest::global<u32, 0x00857d2c> global_00857d2c;  // (from the original)
inline constexpr guest::Function<0x0056939c, u32(u32, u32, u32, u32)> call_0056939c;  // (from the original)
inline constexpr guest::Function<0x00818fa0, u32(u32, u32, u32)> call_00818fa0;  // (from the original)

u32 f_002cd064(gptr<Object_002cd064_0> arg0, u32 r1_unused, u32 r2) {
    guest::StackFrame frame(0x10);  // the original's stack frame
    u32 r0 = arg0.addr();
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r14 = guest::cpu()->r[14];
    gptr<Local_002cd064_ea_1> ea_1 = gptr<Local_002cd064_ea_1>(frame.at(0).addr());
    ea_1->word_0 = r4;
    ea_1->word_4 = r5;
    ea_1->word_8 = r6;
    ea_1->word_c = r14;
    r5 = r0;
    r4 = arg0->word_110;
    if (s32(arg0->word_10c) > s32(r4)) {
        do {
            u32 r1_1 = r4 * 0xa3u;  // (from the original)
            call_0056939c(*gptr<u32>(r5 + 0x108u) + (r1_1 << 3), r1_1, r2, guest::cpu()->r[3]);  // (from the original)
            r2 = guest::cpu()->r[2];
            r4 += 1u;
            guest::preempt();
        } while (s32(*gptr<u32>(r5 + 0x10cu)) > s32(r4));  // (from the original)
    }
    u32 r0_3 = call_00818fa0(r5 + 0xe4u, *global_00857d28, *global_00857d2c);  // (from the original)
    gptr<Local_002cd064_ea_2> ea_2 = gptr<Local_002cd064_ea_2>(frame.at(0).addr());
    u32 r4_1 = ea_2->word_0;
    u32 r5_1 = ea_2->word_4;
    u32 r6_1 = ea_2->word_8;
    guest::cpu()->r[4] = r4_1;
    guest::cpu()->r[5] = r5_1;
    guest::cpu()->r[6] = r6_1;
    return r0_3;
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

struct __attribute__((packed)) Local_002cd120_ea_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
};
GUEST_OFFSET(Local_002cd120_ea_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_002cd120_ea_1, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_002cd120_ea_1, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Local_002cd120_ea_1, word_c, 0xc);  // (from the original)

struct __attribute__((packed)) Local_002cd120_ea_2 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
};
GUEST_OFFSET(Local_002cd120_ea_2, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_002cd120_ea_2, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_002cd120_ea_2, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Local_002cd120_ea_2, word_c, 0xc);  // (from the original)

inline guest::global<u32, 0x00857d30> global_00857d30;  // (from the original)
inline guest::global<u32, 0x00857d34> global_00857d34;  // (from the original)
inline constexpr guest::Function<0x002e086c, u32(u32, u32, u32, u32)> call_002e086c;  // (from the original)
inline constexpr guest::Function<0x00818fa0, u32(u32, u32, u32)> call_00818fa0;  // (from the original)

u32 f_002cd120(gptr<Object_002cd120_0> arg0, u32 r1_unused, u32 r2) {
    guest::StackFrame frame(0x10);  // the original's stack frame
    u32 r0 = arg0.addr();
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r14 = guest::cpu()->r[14];
    gptr<Local_002cd120_ea_1> ea_1 = gptr<Local_002cd120_ea_1>(frame.at(0).addr());
    ea_1->word_0 = r4;
    ea_1->word_4 = r5;
    ea_1->word_8 = r6;
    ea_1->word_c = r14;
    r5 = r0;
    r4 = arg0->word_110;
    if (s32(arg0->word_10c) > s32(r4)) {
        do {
            u32 r1_1 = r4 * 0xa3u;  // (from the original)
            call_002e086c(*gptr<u32>(r5 + 0x108u) + (r1_1 << 3), r1_1, r2, guest::cpu()->r[3]);  // (from the original)
            r2 = guest::cpu()->r[2];
            r4 += 1u;
            guest::preempt();
        } while (s32(*gptr<u32>(r5 + 0x10cu)) > s32(r4));  // (from the original)
    }
    u32 r0_3 = call_00818fa0(r5 + 0xe4u, *global_00857d30, *global_00857d34);  // (from the original)
    gptr<Local_002cd120_ea_2> ea_2 = gptr<Local_002cd120_ea_2>(frame.at(0).addr());
    u32 r4_1 = ea_2->word_0;
    u32 r5_1 = ea_2->word_4;
    u32 r6_1 = ea_2->word_8;
    guest::cpu()->r[4] = r4_1;
    guest::cpu()->r[5] = r5_1;
    guest::cpu()->r[6] = r6_1;
    return r0_3;
}

}  // namespace d_002cd120
GUEST_EXPORT(0x002cd120, d_002cd120::f_002cd120);

// f_002cd2c0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002cd2c0 {

inline guest::global<u32, 0x00857d18> global_00857d18;  // (from the original)
inline guest::global<u32, 0x00857d1c> global_00857d1c;  // (from the original)
inline constexpr guest::Function<0x00818fa0, u32(u32, u32, u32)> call_00818fa0;  // (from the original)

u32 f_002cd2c0(u32 r0) {
    call_00818fa0(r0 + 0xe4u, *global_00857d18, *global_00857d1c);  // (from the original)
    return 1u;
}

}  // namespace d_002cd2c0
GUEST_EXPORT_FRAMED(0x002cd2c0, d_002cd2c0::f_002cd2c0, 0x4010);  // pushes {r4, lr} first, as the original

// f_002cd2e0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002cd2e0 {

struct __attribute__((packed)) Object_002cd2e0_0 {
    u8 unknown_0[0x108];  // (not used here)
    u32 word_108;
};
GUEST_OFFSET(Object_002cd2e0_0, word_108, 0x108);  // (from the original)

struct __attribute__((packed)) Local_002cd2e0_r0_1 {
    u8 unknown_0[0xcc];  // (not used here)
    u32 word_cc;
    u8 unknown_d0[0xa];  // (not used here)
    u8 byte_da;
};
GUEST_OFFSET(Local_002cd2e0_r0_1, word_cc, 0xcc);  // (from the original)
GUEST_OFFSET(Local_002cd2e0_r0_1, byte_da, 0xda);  // (from the original)


u32 f_002cd2e0(gptr<Object_002cd2e0_0> arg0, u32 r1, u32 r2) {
    gptr<Local_002cd2e0_r0_1> r0_1 = gptr<Local_002cd2e0_r0_1>(arg0->word_108 + (r2 * 0xa3u << 3));  // (from the original)
    r0_1->word_cc = r1;
    r0_1->byte_da = 1;
    return r0_1.addr();
}

}  // namespace d_002cd2e0
GUEST_EXPORT(0x002cd2e0, d_002cd2e0::f_002cd2e0);

// f_002cd30c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002cd30c {

inline guest::global<u32, 0x00857d20> global_00857d20;  // (from the original)
inline guest::global<u32, 0x00857d24> global_00857d24;  // (from the original)
inline constexpr guest::Function<0x00818fa0, u32(u32, u32, u32)> call_00818fa0;  // (from the original)

u32 f_002cd30c(u32 r0) {
    call_00818fa0(r0 + 0xe4u, *global_00857d20, *global_00857d24);  // (from the original)
    return 1u;
}

}  // namespace d_002cd30c
GUEST_EXPORT_FRAMED(0x002cd30c, d_002cd30c::f_002cd30c, 0x4010);  // pushes {r4, lr} first, as the original

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

struct __attribute__((packed)) Local_002cd378_ea_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
};
GUEST_OFFSET(Local_002cd378_ea_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_002cd378_ea_1, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_002cd378_ea_1, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Local_002cd378_ea_1, word_c, 0xc);  // (from the original)

struct __attribute__((packed)) Local_002cd378_ea_2 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
};
GUEST_OFFSET(Local_002cd378_ea_2, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_002cd378_ea_2, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_002cd378_ea_2, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Local_002cd378_ea_2, word_c, 0xc);  // (from the original)

inline constexpr guest::Function<0x002e0428, u32(u32, u32, u32, u32)> call_002e0428;  // (from the original)

u32 f_002cd378(gptr<Object_002cd378_0> arg0, u32 r1) {
    guest::StackFrame frame(0x10);  // the original's stack frame
    u32 r0 = arg0.addr();
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r14 = guest::cpu()->r[14];
    gptr<Local_002cd378_ea_1> ea_1 = gptr<Local_002cd378_ea_1>(frame.at(0).addr());
    ea_1->word_0 = r4;
    ea_1->word_4 = r5;
    ea_1->word_8 = r6;
    ea_1->word_c = r14;
    r5 = r0;
    u32 r0_1 = arg0->word_d4;
    r6 = r1;
    r4 = 0u;
    arg0->word_d4 = r1 == 0 ? r0_1 & ~8u : r0_1 | 8u;
    u32 r0_2 = arg0->word_10c;
    if (s32(r0_2) > 0) {
        do {
            call_002e0428(*gptr<u32>(r5 + 0x108u) + (r4 * 0xa3u << 3), r6, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
            r1 = guest::cpu()->r[1];
            r0_2 = *gptr<u32>(r5 + 0x10cu);  // (from the original)
            r4 += 1u;
            guest::preempt();
        } while (s32(r0_2) > s32(r4));
    }
    gptr<Local_002cd378_ea_2> ea_2 = gptr<Local_002cd378_ea_2>(frame.at(0).addr());
    u32 r4_1 = ea_2->word_0;
    u32 r5_1 = ea_2->word_4;
    u32 r6_1 = ea_2->word_8;
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[4] = r4_1;
    guest::cpu()->r[5] = r5_1;
    guest::cpu()->r[6] = r6_1;
    return r0_2;
}

}  // namespace d_002cd378
GUEST_EXPORT(0x002cd378, d_002cd378::f_002cd378);

// f_002cd4bc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002cd4bc {

struct __attribute__((packed)) Object_002cd4bc_0 {
    u32 word_0;
};
GUEST_OFFSET(Object_002cd4bc_0, word_0, 0x0);  // (from the original)

inline guest::global<u32, 0x0095262c> global_0095262c;  // (from the original)
inline constexpr guest::Function<0x002bed58, u32(u32, u32, u32, u32)> call_002bed58;  // (from the original)

void f_002cd4bc(gptr<Object_002cd4bc_0> arg0, u32 r1, u32 r2) {
    u32 r0 = arg0.addr();
    if (r1 != 0) {
        call_002bed58(arg0->word_0, r1, r2, guest::cpu()->r[3]);
    }
    *global_0095262c = *gptr<u32>(r0);
    *gptr<u8>(r0 + 0x40u) = 1;  // (from the original)
    return;
}

}  // namespace d_002cd4bc
GUEST_EXPORT_FRAMED(0x002cd4bc, d_002cd4bc::f_002cd4bc, 0x4010);  // pushes {r4, lr} first, as the original

// f_002cd520: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002cd520 {

struct __attribute__((packed)) Object_002cd520_0 {
    u32 word_0;
};
GUEST_OFFSET(Object_002cd520_0, word_0, 0x0);  // (from the original)

inline constexpr guest::Function<0x001b8b74, u32(u32, u32, u32, u32)> call_001b8b74;  // (from the original)

u32 f_002cd520(gptr<Object_002cd520_0> arg0) {
    return call_001b8b74(0x85ed32u, 0u, arg0->word_0, 0x17be10u);  // (from the original)
}

}  // namespace d_002cd520
GUEST_EXPORT(0x002cd520, d_002cd520::f_002cd520);

// f_002cd574: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002cd574 {

struct __attribute__((packed)) Object_002cd574_0 {
    u32 word_0;
};
GUEST_OFFSET(Object_002cd574_0, word_0, 0x0);  // (from the original)

inline guest::global<u32, 0x00952c3c> global_00952c3c;  // (from the original)
inline guest::global<u32, 0x00952ca4> global_00952ca4;  // (from the original)
inline constexpr guest::Function<0x002bee6c, u32(u32, u32, u32)> call_002bee6c;  // (from the original)
inline constexpr guest::Function<0x002fd108, u32(u32, u32, u32, u32)> call_002fd108;  // (from the original)

void f_002cd574(gptr<Object_002cd574_0> arg0, u32 r1) {
    if (arg0->word_0 != 0) {
        return;
    }
    u32 r1_1 = *global_00952ca4;
    if (r1_1 != 0) {
        u32 r0_1 = call_002fd108(0x17be10u, r1_1, 4u, guest::cpu()->r[3]);  // (from the original)
        u32 r0_2 = call_002bee6c(r0_1, guest::cpu()->r[1], guest::cpu()->r[2]);
        arg0->word_0 = r0_2;
        return;
    }
    u32 r0_3 = call_002fd108(0x17be10u, *global_00952c3c, 4u, guest::cpu()->r[3]);  // (from the original)
    u32 r0_4 = call_002bee6c(r0_3, guest::cpu()->r[1], guest::cpu()->r[2]);
    arg0->word_0 = r0_4;
    return;
}

}  // namespace d_002cd574
GUEST_EXPORT_FRAMED(0x002cd574, d_002cd574::f_002cd574, 0x4010);  // pushes {r4, lr} first, as the original

// f_002cd5e4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002cd5e4 {

struct __attribute__((packed)) Object_002cd5e4_0 {
    u32 word_0;
    u8 unknown_4[0x3c];  // (not used here)
    u8 byte_40;
};
GUEST_OFFSET(Object_002cd5e4_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_002cd5e4_0, byte_40, 0x40);  // (from the original)

inline constexpr guest::Function<0x002bef2c, u32(u32, u32, u32, u32)> call_002bef2c;  // (from the original)
inline constexpr guest::Function<0x002ffb64, u32(u32)> call_002ffb64;  // (from the original)
inline constexpr guest::Function<0x00537464, u32(u32)> call_00537464;  // (from the original)

u32 f_002cd5e4(gptr<Object_002cd5e4_0> arg0) {
    u32 r0_1 = arg0->word_0;
    if (r0_1 != 0) {
        u32 r0_2 = call_002bef2c(r0_1, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
        call_002ffb64(r0_2);
        r0_1 = 0x952628u;  // (from the original)
        arg0->word_0 = 0;
        *gptr<u32>(r0_1 + 4u) = 0;
        arg0->byte_40 = 0;
    }
    u32 r0_3 = call_00537464(r0_1);
    if (r0_3 != 0) {
        *gptr<u8>(r0_3 + 0xa1u) = 0;  // (from the original)
    }
    return r0_3;
}

}  // namespace d_002cd5e4
GUEST_EXPORT_FRAMED(0x002cd5e4, d_002cd5e4::f_002cd5e4, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_002cd640: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002cd640 {

struct __attribute__((packed)) Local_002cd640_ea_3 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_002cd640_ea_3, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_002cd640_ea_3, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_002cd640_ea_3, word_8, 0x8);  // (from the original)

inline constexpr guest::Function<0x005cd270, u32(u32, u32, u32, u32)> call_005cd270;  // (from the original)

void f_002cd640(u32 r0, u32 r1, u32 r2, u32 r3) {
    call_005cd270(r0 + 8u, r1, r2, r3);
    u32 ea_1 = r0 + 0x10u;  // (from the original)
    *gptr<u32>(ea_1) = 0x3800;  // (from the original)
    u32 ea_2 = ea_1 + 4u;
    *gptr<u32>(ea_2) = 0;
    gptr<Local_002cd640_ea_3> ea_3 = gptr<Local_002cd640_ea_3>(ea_2 + 0x14u);  // (from the original)
    ea_3->word_0 = r1;
    ea_3->word_4 = r2;
    ea_3->word_8 = r3;
    guest::cpu()->r[1] = 0x3800u;  // (from the original)
    return;
}

}  // namespace d_002cd640
GUEST_EXPORT_FRAMED(0x002cd640, d_002cd640::f_002cd640, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original

// f_002cdcb0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002cdcb0 {

inline constexpr guest::Function<0x00125aec, u32(u32)> call_00125aec;  // (from the original)
inline constexpr guest::Function<0x0022c53c, u32(u32)> call_0022c53c;  // (from the original)

u32 f_002cdcb0(u32 r0) {
    u32 r0_1 = call_0022c53c(r0);
    *gptr<u32>(r0_1) = 0x8f2a0c;  // (from the original)
    u32 r0_2 = r0_1 + 0xcu;  // (from the original)
    *gptr<u32>(r0_2) = 0x8f2a1c;  // (from the original)
    u32 r0_4 = call_00125aec(r0_2 + 0x134u);  // (from the original)
    u32 r0_6 = call_00125aec(r0_4 + 0x28u);  // (from the original)
    u32 r0_8 = call_00125aec(r0_6 + 0x28u);  // (from the original)
    u32 r0_10 = call_00125aec(r0_8 + 0x28u);  // (from the original)
    return r0_10 - 0x1b8u;  // (from the original)
}

}  // namespace d_002cdcb0
GUEST_EXPORT_FRAMED(0x002cdcb0, d_002cdcb0::f_002cdcb0, 0x4010);  // pushes {r4, lr} first, as the original

// f_002cdd00: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002cdd00 {

inline constexpr guest::Function<0x0022c5d8, u32(u32, u32, u32)> call_0022c5d8;  // (from the original)
inline constexpr guest::Function<0x0056988c, u32(u32, u32, u32, u32)> call_0056988c;  // (from the original)

u32 f_002cdd00(gptr<ItemDragIconGroup> arg0) {
    u32 r0 = arg0.addr();
    arg0->word_0 = 0x8f2a0c;  // (from the original)
    u32 r2_1 = 0x8f2a1cu;  // (from the original)
    arg0->word_c = r2_1;
    u32 r0_2 = call_0056988c(r0 + 0x1b8u, 0x8f2a0cu, r2_1, guest::cpu()->r[3]);  // (from the original)
    u32 r0_4 = call_0056988c(r0_2 - 0x28u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r0_6 = call_0056988c(r0_4 - 0x28u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r0_8 = call_0056988c(r0_6 - 0x28u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r0_10 = call_0022c5d8(r0_8 - 0x140u, guest::cpu()->r[1], guest::cpu()->r[2]);  // (from the original)
    return r0_10;
}

}  // namespace d_002cdd00
GUEST_EXPORT_FRAMED(0x002cdd00, d_002cdd00::f_002cdd00, 0x4010);  // pushes {r4, lr} first, as the original

// f_002cdd40: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002cdd40 {

struct __attribute__((packed)) Object_002cdd40_0 {
    u8 unknown_0[0x20];  // (not used here)
    u32 word_20;
};
GUEST_OFFSET(Object_002cdd40_0, word_20, 0x20);  // (from the original)

inline constexpr guest::Function<0x004b6d74, u32(u32, u32)> call_004b6d74;  // (from the original)

void f_002cdd40(gptr<Object_002cdd40_0> arg0, u32 r1) {
    call_004b6d74(r1, arg0->word_20);
    return;
}

}  // namespace d_002cdd40
GUEST_EXPORT(0x002cdd40, d_002cdd40::f_002cdd40);

// f_002cdf30: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002cdf30 {

inline guest::global<u32, 0x00953364> global_00953364;  // (from the original)
inline constexpr guest::Function<0x002fb94c, u32(u32, u32, u32, u32)> call_002fb94c;  // (from the original)
inline constexpr guest::Function<0x007159b0, u32(u32, u32)> call_007159b0;  // (from the original)

u32 f_002cdf30(u32 r0_unused, u32 r1) {
    u32 r1_1 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r0_1 = *global_00953364;
    if (r0_1 + 1u != 0) {
        u32 r0_2 = call_002fb94c(r0_1, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        u32 r5_1 = ~0u;
        if (r0_2 == 0) {
            goto L_2cdf78;
        }
        r1_1 = *global_00953364;
        r0_3 = r0_2 + 0x8ae0u;  // (from the original)
        r0_4 = call_007159b0(r0_3, r1_1);
        r1 = guest::cpu()->r[1];
        if (r0_4 == 0) {
            goto L_2cdf78;
        }
        if (r0_4 < 0x66u) {  // (from the original)
            return 1u;
        }
L_2cdf78:;
        *global_00953364 = r5_1;
    }
    guest::cpu()->r[1] = r1;
    return 0u;
}

}  // namespace d_002cdf30
GUEST_EXPORT_FRAMED(0x002cdf30, d_002cdf30::f_002cdf30, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_002ced34: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002ced34 {

struct __attribute__((packed)) Local_002ced34_r0_17 {
    u8 unknown_0[0xc5c];  // (not used here)
    u32 word_c5c;
    u32 word_c60;
    u32 word_c64;
    u32 word_c68;
    u8 unknown_c6c[0x4];  // (not used here)
    u32 word_c70;
    u32 word_c74;
    u32 word_c78;
    u32 word_c7c;
    u8 unknown_c80[0x5c];  // (not used here)
    u8 byte_cdc;
    u8 byte_cdd;
    u8 byte_cde;
    u8 byte_cdf;
    u32 word_ce0;
};
GUEST_OFFSET(Local_002ced34_r0_17, word_c5c, 0xc5c);  // (from the original)
GUEST_OFFSET(Local_002ced34_r0_17, word_c60, 0xc60);  // (from the original)
GUEST_OFFSET(Local_002ced34_r0_17, word_c64, 0xc64);  // (from the original)
GUEST_OFFSET(Local_002ced34_r0_17, word_c68, 0xc68);  // (from the original)
GUEST_OFFSET(Local_002ced34_r0_17, word_c70, 0xc70);  // (from the original)
GUEST_OFFSET(Local_002ced34_r0_17, word_c74, 0xc74);  // (from the original)
GUEST_OFFSET(Local_002ced34_r0_17, word_c78, 0xc78);  // (from the original)
GUEST_OFFSET(Local_002ced34_r0_17, word_c7c, 0xc7c);  // (from the original)
GUEST_OFFSET(Local_002ced34_r0_17, byte_cdc, 0xcdc);  // (from the original)
GUEST_OFFSET(Local_002ced34_r0_17, byte_cdd, 0xcdd);  // (from the original)
GUEST_OFFSET(Local_002ced34_r0_17, byte_cde, 0xcde);  // (from the original)
GUEST_OFFSET(Local_002ced34_r0_17, byte_cdf, 0xcdf);  // (from the original)
GUEST_OFFSET(Local_002ced34_r0_17, word_ce0, 0xce0);  // (from the original)

struct __attribute__((packed)) Local_002ced34_r0_32 {
    u8 unknown_0[0x5c0];  // (not used here)
    u32 word_5c0;
    u8 byte_5c4;
};
GUEST_OFFSET(Local_002ced34_r0_32, word_5c0, 0x5c0);  // (from the original)
GUEST_OFFSET(Local_002ced34_r0_32, byte_5c4, 0x5c4);  // (from the original)

inline guest::global<u32, 0x00879ea0> global_00879ea0;  // (from the original)
inline guest::global<u32, 0x00879ea4> global_00879ea4;  // (from the original)
inline constexpr guest::Function<0x001207d8, u32(u32, u32, u32, u32)> call_001207d8;  // (from the original)
inline constexpr guest::Function<0x00125aec, u32(u32, u32, u32, u32)> call_00125aec;  // (from the original)
inline constexpr guest::Function<0x001cb884, u32(u32, u32, u32, u32)> call_001cb884;  // (from the original)
inline constexpr guest::Function<0x002b7c68, u32(u32, u32, u32, u32)> call_002b7c68;  // (from the original)
inline constexpr guest::Function<0x002bc928, u32(u32, u32, u32, u32)> call_002bc928;  // (from the original)
inline constexpr guest::Function<0x002f7604, u32(u32, u32, u32, u32)> call_002f7604;  // (from the original)
inline constexpr guest::Function<0x00301d0d, u32(u32, u32, u32, u32)> call_00301d0c;  // (from the original)
inline constexpr guest::Function<0x005d6fac, u32(u32, u32, u32, u32)> call_005d6fac;  // (from the original)
inline constexpr guest::Function<0x005e3128, u32(u32, u32, u32, u32)> call_005e3128;  // (from the original)

u32 f_002ced34(gptr<state__Mode_LifeSupportWindow_> arg0) {
    u32 r0 = arg0.addr();
    arg0->word_4 = 0;
    arg0->byte_8 = 0;
    u32 r2_1 = *global_00879ea4;
    arg0->word_c = *global_00879ea0;
    arg0->word_10 = r2_1;
    arg0->word_14 = 0;
    arg0->word_0 = 0x9081d8;  // (from the original)
    arg0->byte_18 = 0;
    arg0->word_1c = 0;
    arg0->word_20 = 0;
    u32 r0_2 = call_002bc928((r0 + 0x20u) + 4u, 0x9081d8u, r2_1, r0 + 0xcu);  // (from the original)
    u32 r2_2 = 0x8f2a60u;  // (from the original)
    *gptr<u32>(r0_2 - 0x24u) = 0x8f2a2c;  // (from the original)
    *gptr<u32>(r0_2) = r2_2;
    u32 r0_4 = call_001207d8(r0_2 + 8u, 0x8f2a2cu, r2_2, guest::cpu()->r[3]);  // (from the original)
    u32 r0_6 = call_001cb884(r0_4 + 0x248u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    *gptr<u32>(r0_6) = 0x8f3fbc;  // (from the original)
    u32 r0_8 = call_00301d0c(r0_6 + 0x1b0u, 0x2b6de0u, 0xe0u, 4u);  // (from the original)
    u32 r0_10 = call_002f7604(r0_8 + 0x380u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 ea_2 = r0_10 - 0x530u;  // (from the original)
    *gptr<u32>(ea_2) = 0x8ebacc;  // (from the original)
    u32 r0_12 = call_00301d0c(ea_2 + 0x614u, 0x1c79a8u, 0x188u, 4u);  // (from the original)
    u32 r0_14 = call_00125aec(r0_12 + 0x620u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 ea_3 = r0_14 + 0x38u;  // (from the original)
    *gptr<u32>(ea_3) = 0;
    u32 r0_16 = call_002b7c68(ea_3 + 0x14u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    gptr<Local_002ced34_r0_17> r0_17 = gptr<Local_002ced34_r0_17>(r0_16 - 0xc80u);  // (from the original)
    r0_17->word_ce0 = 0;
    r0_17->word_c5c = 0;
    r0_17->word_c70 = 0;
    r0_17->byte_cdc = 0;
    r0_17->word_c60 = 0;
    r0_17->word_c74 = 0;
    r0_17->byte_cdd = 0;
    r0_17->word_c64 = 0;
    r0_17->word_c78 = 0;
    r0_17->byte_cde = 0;
    r0_17->word_c68 = 0;
    r0_17->word_c7c = 0;
    r0_17->byte_cdf = 0;
    u32 r0_19 = call_001cb884(r0_17.addr() + 0xce4u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    *gptr<u32>(r0_19) = 0x8f6800;  // (from the original)
    u32 r0_21 = call_00125aec(r0_19 + 0x1b0u, 0x8f6800u, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 ea_4 = r0_21 + 0x28u;  // (from the original)
    *gptr<u32>(ea_4) = 0;
    u32 r0_23 = call_005d6fac(ea_4 + 4u, 0x5eu, 0x1eu, guest::cpu()->r[3]);  // (from the original)
    u32 r0_25 = call_005e3128(r0_23 + 0x100u, 0x32u, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r3_11 = guest::cpu()->r[3];
    u32 r0_27 = call_005d6fac(r0_25 + 0xc4u, 0xbcu, 0x3cu, r3_11);  // (from the original)
    u32 r0_29 = call_005e3128(r0_27 + 0x100u, 0x32u, 0x3cu, r3_11);  // (from the original)
    u32 r0_31 = call_002b7c68(r0_29 + 0xc4u, 0x32u, 0x3cu, r3_11);  // (from the original)
    gptr<Local_002ced34_r0_32> r0_32 = gptr<Local_002ced34_r0_32>(r0_31 - 0x564u);  // (from the original)
    r0_32->word_5c0 = 0;
    r0_32->byte_5c4 = 0;
    u32 r0_33 = r0_32.addr() - 0xf58u;  // (from the original)
    *gptr<u8>(0x1520u + r0_33) = 0;  // (from the original)
    return r0_33;
}

}  // namespace d_002ced34
GUEST_EXPORT_FRAMED(0x002ced34, d_002ced34::f_002ced34, 0x4010);  // pushes {r4, lr} first, as the original

// f_002ceee0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002ceee0 {

inline constexpr guest::Function<0x001cb8fc, u32(u32, u32, u32, u32)> call_001cb8fc;  // (from the original)
inline constexpr guest::Function<0x002b7c94, u32(u32, u32, u32, u32)> call_002b7c94;  // (from the original)
inline constexpr guest::Function<0x002f76ad, u32(u32, u32, u32, u32)> call_002f76ac;  // (from the original)
inline constexpr guest::Function<0x002f7710, u32(u32, u32, u32, u32)> call_002f7710;  // (from the original)
inline constexpr guest::Function<0x00567ef0, u32(u32, u32, u32, u32)> call_00567ef0;  // (from the original)
inline constexpr guest::Function<0x0056988c, u32(u32, u32, u32, u32)> call_0056988c;  // (from the original)
inline constexpr guest::Function<0x005d703c, u32(u32, u32, u32, u32)> call_005d703c;  // (from the original)
inline constexpr guest::Function<0x005e3194, u32(u32, u32, u32, u32)> call_005e3194;  // (from the original)

u32 f_002ceee0(gptr<LifeSupportWindow_rec> arg0, u32 r1_unused, u32 r2_unused, u32 r3) {
    u32 r0 = arg0.addr();
    u32 r2_1 = 0x8f2a60u;  // (from the original)
    arg0->word_0 = 0x8f2a2c;  // (from the original)
    arg0->word_24 = r2_1;
    arg0->word_f58 = 0x8f6800;  // (from the original)
    u32 r0_2 = call_002b7c94(((r0 + 0x24u) + 0xf34u) + 0x564u, 0x8f6800u, r2_1, r3);  // (from the original)
    u32 r0_4 = call_005e3194(r0_2 - 0xc4u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r0_6 = call_005d703c(r0_4 - 0x100u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r0_8 = call_005e3194(r0_6 - 0xc4u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r0_10 = call_005d703c(r0_8 - 0x100u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r0_12 = call_0056988c(r0_10 - 0x2cu, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r0_14 = call_001cb8fc(r0_12 - 0x1b0u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    *gptr<u32>(r0_14 - 0xce4u) = 0x8ebacc;  // (from the original)
    u32 r0_16 = call_002b7c94(r0_14 - 0x64u, 0x8ebaccu, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r0_18 = call_0056988c(r0_16 - 0x4cu, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r4_1 = r0_18 - 0xc34u;  // (from the original)
    call_002f76ac(r0_18 - 0x620u, 0x5e317cu, 0x188u, 4u);  // (from the original)
    *gptr<u32>(r4_1) = 0x8f3fbc;  // (from the original)
    u32 r0_21 = call_002f7710(r4_1 + 0x530u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    call_002f76ac(r0_21 - 0x380u, 0x2b6ef8u, 0xe0u, 4u);  // (from the original)
    u32 r0_23 = call_001cb8fc(r0_21 - 0x530u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r0_25 = call_00567ef0(r0_23 - 0x248u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    return r0_25 - 0x2cu;  // (from the original)
}

}  // namespace d_002ceee0
GUEST_EXPORT_FRAMED(0x002ceee0, d_002ceee0::f_002ceee0, 0x4010);  // pushes {r4, lr} first, as the original

// f_002cf018: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002cf018 {

struct __attribute__((packed)) Local_002cf018_ea_2 {
    u32 word_0;
    u8 unknown_4[0x8];  // (not used here)
    u32 word_c;
};
GUEST_OFFSET(Local_002cf018_ea_2, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_002cf018_ea_2, word_c, 0xc);  // (from the original)

inline constexpr guest::Function<0x00135748, u32(u32)> call_00135748;  // (from the original)
inline constexpr guest::Function<0x001357ec, u32(u32, u32)> call_001357ec;  // (from the original)

void f_002cf018(u32 r0, u32 r1, u32 r2) {
    u32 r13 = guest::cpu()->r[13];
    r13 -= 0x18;  // (from the original)
    u32 r5_1 = r0 + 8u;
    guest::cpu()->r[13] = r13;
    call_00135748(r5_1);
    u32 ea_1 = r0 + 0x2c0u;  // (from the original)
    *gptr<u32>(ea_1) = r1;
    gptr<Local_002cf018_ea_2> ea_2 = gptr<Local_002cf018_ea_2>(ea_1 + 0xcu);  // (from the original)
    ea_2->word_0 = r2;
    ea_2->word_c = 0;
    r13 += 0x18;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_001357ec(r5_1, r1);
    return;
}

}  // namespace d_002cf018
GUEST_EXPORT(0x002cf018, d_002cf018::f_002cf018);

// f_002cf050: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002cf050 {

struct __attribute__((packed)) Local_002cf050_ea_2 {
    u32 word_0;
    u8 unknown_4[0x8];  // (not used here)
    u32 word_c;
};
GUEST_OFFSET(Local_002cf050_ea_2, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_002cf050_ea_2, word_c, 0xc);  // (from the original)

inline constexpr guest::Function<0x00135748, u32(u32)> call_00135748;  // (from the original)
inline constexpr guest::Function<0x001357ec, u32(u32, u32)> call_001357ec;  // (from the original)

void f_002cf050(u32 r0, u32 r1, u32 r2) {
    u32 r13 = guest::cpu()->r[13];
    r13 -= 0x18;  // (from the original)
    u32 r5_1 = r0 + 8u;
    guest::cpu()->r[13] = r13;
    call_00135748(r5_1);
    u32 ea_1 = r0 + 0x2c4u;  // (from the original)
    *gptr<u32>(ea_1) = r1;
    gptr<Local_002cf050_ea_2> ea_2 = gptr<Local_002cf050_ea_2>(ea_1 + 0xcu);  // (from the original)
    ea_2->word_0 = r2;
    ea_2->word_c = 0;
    r13 += 0x18;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_001357ec(r5_1, r1);
    return;
}

}  // namespace d_002cf050
GUEST_EXPORT(0x002cf050, d_002cf050::f_002cf050);

// f_002cf088: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002cf088 {

struct __attribute__((packed)) Local_002cf088_ea_2 {
    u32 word_0;
    u8 unknown_4[0x8];  // (not used here)
    u32 word_c;
};
GUEST_OFFSET(Local_002cf088_ea_2, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_002cf088_ea_2, word_c, 0xc);  // (from the original)

inline constexpr guest::Function<0x00135748, u32(u32)> call_00135748;  // (from the original)
inline constexpr guest::Function<0x001357ec, u32(u32, u32)> call_001357ec;  // (from the original)

void f_002cf088(u32 r0, u32 r1, u32 r2) {
    u32 r13 = guest::cpu()->r[13];
    r13 -= 0x18;  // (from the original)
    u32 r5_1 = r0 + 8u;
    guest::cpu()->r[13] = r13;
    call_00135748(r5_1);
    u32 ea_1 = r0 + 0x2c8u;  // (from the original)
    *gptr<u32>(ea_1) = r1;
    gptr<Local_002cf088_ea_2> ea_2 = gptr<Local_002cf088_ea_2>(ea_1 + 0xcu);  // (from the original)
    ea_2->word_0 = r2;
    ea_2->word_c = 0;
    r13 += 0x18;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_001357ec(r5_1, r1);
    return;
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
    return u32(arg0->byte_2e4) >= 0xau ? 1u : 0u;  // (from the original)
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
    return u32(arg0->byte_2e4) >= 0xdu ? 1u : 0u;  // (from the original)
}

}  // namespace d_002cf1a8
GUEST_EXPORT(0x002cf1a8, d_002cf1a8::f_002cf1a8);

// f_002cf87c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002cf87c {

inline guest::global<u32, 0x00953568> global_00953568;  // (from the original)
inline constexpr guest::Function<0x002f76ad, u32(u32, u32, u32, u32)> call_002f76ac;  // (from the original)

u32 f_002cf87c(u32 r0) {
    call_002f76ac(r0 + 0x7cu, 0x2cf4c4u, 0x210u, 1u);  // (from the original)
    *global_00953568 = 0;
    guest::cpu()->r[1] = 0u;
    return r0;
}

}  // namespace d_002cf87c
GUEST_EXPORT_FRAMED(0x002cf87c, d_002cf87c::f_002cf87c, 0x4010);  // pushes {r4, lr} first, as the original
