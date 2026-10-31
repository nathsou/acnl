// Functions decompiled by tools/decomp (docs/decomp.md), each proved equal to the recompiled original (prove-cpp). The
// names are generated (d_<address>::f_<address>, Object_<address>_<argument>, word_<offset>) and still to be chosen.
#include "guest/guest.hpp"

#include <bit>

using guest::gptr;

// f_001c0810: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001c0810 {

inline constexpr guest::Function<0x001d9c9c, u32(u32, u32, u32, u32)> call_001d9c9c;  // (from the original)
inline constexpr guest::Function<0x001e5894, u32(u32, u32, u32, u32)> call_001e5894;  // (from the original)

u32 f_001c0810(u32 r0, u32 r1, u32 r2) {
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 r2_1 = 0;
    u32 r1_1 = 0;
    r13 = r13 - 0x18u;  // (from the original)
    r0_1 = r13;
    guest::cpu()->r[13] = r13;
    call_001e5894(r0_1, r1, r2, guest::cpu()->r[3]);
    r2_1 = r13;
    guest::cpu()->r[13] = r13;
    call_001d9c9c(r0, r1, r2_1, guest::cpu()->r[3]);
    r1_1 = guest::cpu()->r[1];
    *gptr<u8>(r0 + 0xe8u) = u8(1u);  // (from the original)
    r13 = r13 + 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1_1;
    guest::cpu()->r[13] = r13;
    return 1u;
}

}  // namespace d_001c0810
GUEST_EXPORT(0x001c0810, d_001c0810::f_001c0810);

// f_001c0c1c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001c0c1c {

inline constexpr guest::Function<0x001d9e44, u32(u32, u32, u32, u32)> call_001d9e44;  // (from the original)
inline constexpr guest::Function<0x001e5894, u32(u32, u32, u32, u32)> call_001e5894;  // (from the original)

u32 f_001c0c1c(u32 r0, u32 r1, u32 r2) {
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 r2_1 = 0;
    u32 r0_2 = 0;
    u32 r1_1 = 0;
    r13 = r13 - 0x18u;  // (from the original)
    r0_1 = r13;
    guest::cpu()->r[13] = r13;
    call_001e5894(r0_1, r1, r2, guest::cpu()->r[3]);
    r2_1 = r13;
    guest::cpu()->r[13] = r13;
    r0_2 = call_001d9e44(r0, r1, r2_1, guest::cpu()->r[3]);
    r1_1 = guest::cpu()->r[1];
    r13 = r13 + 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1_1;
    guest::cpu()->r[13] = r13;
    return r0_2;
}

}  // namespace d_001c0c1c
GUEST_EXPORT(0x001c0c1c, d_001c0c1c::f_001c0c1c);

// f_001c0f3c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001c0f3c {

struct __attribute__((packed)) Object_001c0f3c_0 {
    u8 unknown_0[0xe8];  // (not used here)
    u8 byte_e8;
};
GUEST_OFFSET(Object_001c0f3c_0, byte_e8, 0xe8);  // (from the original)

inline constexpr guest::Function<0x001d9fb0, u32(u32, u32, u32, u32)> call_001d9fb0;  // (from the original)

u32 f_001c0f3c(gptr<Object_001c0f3c_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r0_1 = 0;
    guest::cpu()->r[13] -= 8u;
    r0_1 = u32(arg0->byte_e8);
    if (r0_1 == 0) {
        guest::cpu()->r[13] += 8u;
        return r0_1;
    }
    call_001d9fb0(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    *gptr<u8>(r0 + 0xe8u) = u8(0u);  // (from the original)
    guest::cpu()->r[13] += 8u;
    return 0u;
}

}  // namespace d_001c0f3c
GUEST_EXPORT(0x001c0f3c, d_001c0f3c::f_001c0f3c);

// f_001c0f64: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001c0f64 {

struct __attribute__((packed)) Object_001c0f64_0 {
    u8 unknown_0[0x94];  // (not used here)
    u8 byte_94;
    u8 unknown_95[0x33];  // (not used here)
    u8 byte_c8;
};
GUEST_OFFSET(Object_001c0f64_0, byte_94, 0x94);  // (from the original)
GUEST_OFFSET(Object_001c0f64_0, byte_c8, 0xc8);  // (from the original)


u32 f_001c0f64(gptr<Object_001c0f64_0> arg0) {
    u32 r1_1 = 0;
    r1_1 = u32(s32(s8(arg0->byte_c8)));
    arg0->byte_94 = u8(1u);
    guest::cpu()->r[1] = r1_1;
    return r1_1;
}

}  // namespace d_001c0f64
GUEST_EXPORT(0x001c0f64, d_001c0f64::f_001c0f64);

// f_001c0fdc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001c0fdc {

inline guest::global<u32, 0x001c0ff8> global_001c0ff8;  // (from the original)
inline constexpr guest::Function<0x001da01c, u32(u32, u32, u32, u32)> call_001da01c;  // (from the original)

u32 f_001c0fdc(u32 r0, u32 r1, float S0) {
    u32 r0_1 = 0;
    float S0_1 = 0;
    guest::cpu()->r[13] -= 8u;
    guest::cpu()->s[0] = S0;
    r0_1 = call_001da01c(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    S0_1 = std::bit_cast<float>(*global_001c0ff8);
    *gptr<u32>(r0_1 + 0xe4u) = u32(std::bit_cast<u32>(S0_1));  // (from the original)
    *gptr<u8>(r0_1 + 0xe8u) = u8(0u);  // (from the original)
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = 0u;
    guest::cpu()->s[0] = S0_1;
    return r0_1;
}

}  // namespace d_001c0fdc
GUEST_EXPORT(0x001c0fdc, d_001c0fdc::f_001c0fdc);

// f_001c1e54: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001c1e54 {

struct __attribute__((packed)) Object_001c1e54_0 {
    u8 unknown_0[0x1bc];  // (not used here)
    u32 word_1bc;
};
GUEST_OFFSET(Object_001c1e54_0, word_1bc, 0x1bc);  // (from the original)

inline constexpr guest::Function<0x0056aa98, u32(u32, u32, u32, u32)> call_0056aa98;  // (from the original)

u32 f_001c1e54(gptr<Object_001c1e54_0> arg0, u32 r1) {
    u32 r0 = arg0.addr();
    u32 r13 = guest::cpu()->r[13];
    u32 r1_1 = 0;
    u32 r1_2 = 0;
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r1_3 = 0;
    r1_1 = arg0->word_1bc;
    r13 = r13 - 0x10u;  // (from the original)
    if (r1_1 != 0) {
        r13 = r13 + 0x10u;  // (from the original)
        guest::cpu()->r[1] = r1_1;
        guest::cpu()->r[13] = r13;
        return 1u;
    }
    *gptr<u32>(r13 + 4u) = u32(0x1c1ea0u);  // (from the original)
    r1_2 = r13;
    r0_1 = r0 + 0xecu;  // (from the original)
    *gptr<u32>(r13) = u32(0x9047f8u);  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_2 = call_0056aa98(r0_1, r1_2, r1, 4u);
    r1_3 = guest::cpu()->r[1];
    if (r0_2 == 0) {
        r13 = r13 + 0x10u;  // (from the original)
        guest::cpu()->r[1] = r1_3;
        guest::cpu()->r[13] = r13;
        return r0_2;
    }
    r13 = r13 + 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1_3;
    guest::cpu()->r[13] = r13;
    return 1u;
}

}  // namespace d_001c1e54
GUEST_EXPORT(0x001c1e54, d_001c1e54::f_001c1e54);

// f_001c1eb8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001c1eb8 {

inline guest::global<u32, 0x00952c4c> global_00952c4c;  // (from the original)
inline constexpr guest::Function<0x0056a974, u32(u32, u32, u32, u32)> call_0056a974;  // (from the original)

u32 f_001c1eb8(u32 r0, u32 r1) {
    u32 r13 = guest::cpu()->r[13];
    u32 r2_1 = 0;
    u32 r1_1 = 0;
    u32 r0_1 = 0;
    u32 r1_2 = 0;
    r13 = r13 - 0x10u;  // (from the original)
    r2_1 = *global_00952c4c;
    if (r2_1 == 0) {
        r13 = r13 + 0x10u;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return 1u;
    }
    *gptr<u32>(r13 + 4u) = u32(0x1c1f04u);  // (from the original)
    *gptr<u32>(r13) = u32(0x9047f8u);  // (from the original)
    r1_1 = r13;
    guest::cpu()->r[13] = r13;
    r0_1 = call_0056a974(r0, r1_1, r2_1, 4u);
    r1_2 = guest::cpu()->r[1];
    r13 = r13 + 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1_2;
    guest::cpu()->r[13] = r13;
    return r0_1;
}

}  // namespace d_001c1eb8
GUEST_EXPORT(0x001c1eb8, d_001c1eb8::f_001c1eb8);

// f_001c1f1c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001c1f1c {

inline constexpr guest::Function<0x0056a974, u32(u32, u32, u32, u32)> call_0056a974;  // (from the original)

u32 f_001c1f1c(u32 r0, u32 r1) {
    u32 r13 = guest::cpu()->r[13];
    u32 r1_1 = 0;
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r1_2 = 0;
    r13 = r13 - 0x10u;  // (from the original)
    if (r1 == 0) {
        r13 = r13 + 0x10u;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return 1u;
    }
    *gptr<u32>(r13 + 4u) = u32(0x1c1f5cu);  // (from the original)
    *gptr<u32>(r13) = u32(0x9047f8u);  // (from the original)
    r1_1 = r13;
    r0_1 = r0 + 0xecu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_2 = call_0056a974(r0_1, r1_1, r1, 4u);
    r1_2 = guest::cpu()->r[1];
    r13 = r13 + 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1_2;
    guest::cpu()->r[13] = r13;
    return r0_2;
}

}  // namespace d_001c1f1c
GUEST_EXPORT(0x001c1f1c, d_001c1f1c::f_001c1f1c);

// f_001c1f74: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001c1f74 {

inline constexpr guest::Function<0x0056a758, u32(u32, u32, u32, u32)> call_0056a758;  // (from the original)

u32 f_001c1f74(u32 r0, u32 r1) {
    u32 r13 = guest::cpu()->r[13];
    u32 r1_1 = 0;
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r1_2 = 0;
    r13 = r13 - 0x10u;  // (from the original)
    if (r1 == 0) {
        r13 = r13 + 0x10u;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return 1u;
    }
    *gptr<u32>(r13 + 4u) = u32(0x1c1fb4u);  // (from the original)
    *gptr<u32>(r13) = u32(0x9047f8u);  // (from the original)
    r1_1 = r13;
    r0_1 = r0 + 0xecu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_2 = call_0056a758(r0_1, r1_1, r1, 4u);
    r1_2 = guest::cpu()->r[1];
    r13 = r13 + 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1_2;
    guest::cpu()->r[13] = r13;
    return r0_2;
}

}  // namespace d_001c1f74
GUEST_EXPORT(0x001c1f74, d_001c1f74::f_001c1f74);

// f_001c1fcc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001c1fcc {

inline constexpr guest::Function<0x006055f0, u32(u32, u32, u32, u32)> call_006055f0;  // (from the original)
inline constexpr guest::Function<0x00605600, u32(u32, u32, u32, u32)> call_00605600;  // (from the original)

u32 f_001c1fcc(u32 r0, u32 r1) {
    u32 r5_1 = 0;
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 zf_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 zf_2 = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r5_1 = r1 + (r1 << 2);
    if (r1 <= 0x108u) {  // (from the original)
        r0_1 = call_006055f0(r1, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1_1 = guest::cpu()->r[1];
        zf_1 = r0_1 == 0;
        if (!zf_1) {
            zf_1 = *gptr<u32>(r0 + 0xd0u) == 0;  // (from the original)
        }
        if (!zf_1) {
            r0_2 = *gptr<u32>(r0 + 0xd0u) + (r5_1 << 9);  // (from the original)
            guest::cpu()->r[13] += 0x10u;  // (from the original)
            guest::cpu()->r[1] = r1_1;
            return r0_2;
        }
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        guest::cpu()->r[1] = r1_1;
        return 0u;
    }
    r0_3 = call_00605600(r1, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_1 = guest::cpu()->r[1];
    zf_2 = r0_3 == 0;
    if (!zf_2) {
        zf_2 = *gptr<u32>(r0 + 0x1bcu) == 0;  // (from the original)
    }
    if (zf_2) {
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        guest::cpu()->r[1] = r1_1;
        return 0u;
    }
    r1_1 = 0xfff5a600u + (r5_1 << 9);  // (from the original)
    r0_2 = *gptr<u32>(r0 + 0x1bcu) + r1_1;  // (from the original)
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1_1;
    return r0_2;
}

}  // namespace d_001c1fcc
GUEST_EXPORT(0x001c1fcc, d_001c1fcc::f_001c1fcc);

// f_001c2040: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001c2040 {

inline constexpr guest::Function<0x006055f0, u32(u32, u32, u32, u32)> call_006055f0;  // (from the original)

u32 f_001c2040(u32 r0, u32 r1) {
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 zf_1 = 0;
    u32 r0_2 = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r0_1 = call_006055f0(r1, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_1 = guest::cpu()->r[1];
    zf_1 = r0_1 == 0;
    if (!zf_1) {
        zf_1 = *gptr<u32>(r0 + 0xd0u) == 0;  // (from the original)
    }
    if (zf_1) {
        r0_2 = 0u;
    } else {
        r1_1 = r1 + (r1 << 2);
        r0_2 = *gptr<u32>(r0 + 0xd0u) + (r1_1 << 9);  // (from the original)
    }
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1_1;
    return r0_2;
}

}  // namespace d_001c2040
GUEST_EXPORT(0x001c2040, d_001c2040::f_001c2040);

// f_001c2074: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001c2074 {

inline constexpr guest::Function<0x00605600, u32(u32, u32, u32, u32)> call_00605600;  // (from the original)

u32 f_001c2074(u32 r0, u32 r1, u32 r2) {
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 zf_1 = 0;
    u32 r0_2 = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r0_1 = call_00605600(r1, r1, r2, guest::cpu()->r[3]);
    r1_1 = guest::cpu()->r[1];
    zf_1 = r0_1 == 0;
    if (!zf_1) {
        zf_1 = *gptr<u32>(r0 + 0x1bcu) == 0;  // (from the original)
    }
    if (zf_1) {
        r0_2 = 0u;
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        guest::cpu()->r[1] = r1_1;
        return r0_2;
    }
    r1_1 = 0xfff5a600u + (r1 + (r1 << 2) << 9);  // (from the original)
    r0_2 = *gptr<u32>(r0 + 0x1bcu) + r1_1;  // (from the original)
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1_1;
    return r0_2;
}

}  // namespace d_001c2074
GUEST_EXPORT(0x001c2074, d_001c2074::f_001c2074);

// f_001c23b0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001c23b0 {

struct __attribute__((packed)) Object_001c23b0_0 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
};
GUEST_OFFSET(Object_001c23b0_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_001c23b0_0, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_001c23b0_0, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Object_001c23b0_0, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Object_001c23b0_0, word_10, 0x10);  // (from the original)
GUEST_OFFSET(Object_001c23b0_0, word_14, 0x14);  // (from the original)

struct __attribute__((packed)) Object_001c23b0_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
};
GUEST_OFFSET(Object_001c23b0_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_001c23b0_1, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_001c23b0_1, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Object_001c23b0_1, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Object_001c23b0_1, word_10, 0x10);  // (from the original)
GUEST_OFFSET(Object_001c23b0_1, word_14, 0x14);  // (from the original)

struct __attribute__((packed)) Object_001c23b0_2 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
};
GUEST_OFFSET(Object_001c23b0_2, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_001c23b0_2, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Object_001c23b0_2, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Object_001c23b0_2, word_10, 0x10);  // (from the original)

inline guest::global<u32, 0x008a3bbc> global_008a3bbc;  // (from the original)
inline guest::global<u32, 0x008a3bc0> global_008a3bc0;  // (from the original)
inline constexpr guest::Function<0x0055d634, u32(u32, u32, u32, u32)> call_0055d634;  // (from the original)

u32 f_001c23b0(gptr<Object_001c23b0_0> arg0, gptr<Object_001c23b0_1> arg1, gptr<Object_001c23b0_2> arg2) {
    u32 r0 = arg0.addr();
    u32 r13 = guest::cpu()->r[13];
    float S2_1 = 0;
    float S3_1 = 0;
    float S4_1 = 0;
    float S5_1 = 0;
    float S6_1 = 0;
    u32 r3_1 = 0;
    u32 r0_1 = 0;
    float S2_2 = 0;
    float S3_2 = 0;
    float S4_2 = 0;
    u32 r0_2 = 0;
    float S1_1 = 0;
    float S2_3 = 0;
    float S3_3 = 0;
    float S4_3 = 0;
    u32 r1_1 = 0;
    float S1_2 = 0;
    u32 r0_3 = 0;
    S2_1 = std::bit_cast<float>(arg1->word_4);
    S3_1 = std::bit_cast<float>(arg1->word_8);
    S4_1 = std::bit_cast<float>(arg1->word_c);
    S5_1 = std::bit_cast<float>(arg1->word_10);
    S6_1 = std::bit_cast<float>(arg1->word_14);
    r13 = r13 - 0x38u;  // (from the original)
    arg0->word_0 = u32(std::bit_cast<u32>(std::bit_cast<float>(arg1->word_0)));
    arg0->word_4 = u32(std::bit_cast<u32>(S2_1));
    arg0->word_8 = u32(std::bit_cast<u32>(S3_1));
    arg0->word_c = u32(std::bit_cast<u32>(S4_1));
    arg0->word_10 = u32(std::bit_cast<u32>(S5_1));
    arg0->word_14 = u32(std::bit_cast<u32>(S6_1));
    *gptr<u32>(r13) = u32(*global_008a3bc0);
    *gptr<u32>(r13 + 4u) = u32(*global_008a3bc0);
    r3_1 = r13 + 0x10u;  // (from the original)
    *gptr<u32>(r13 + 8u) = u32(*global_008a3bc0);
    *gptr<u32>(r13 + 0xcu) = u32(*global_008a3bbc);  // (from the original)
    r0_1 = r13 + 0x20u;  // (from the original)
    S2_2 = std::bit_cast<float>(arg2->word_8);
    S3_2 = std::bit_cast<float>(arg2->word_c);
    S4_2 = std::bit_cast<float>(arg2->word_10);
    *gptr<u32>(r0_1) = u32(std::bit_cast<u32>(std::bit_cast<float>(arg2->word_4)));
    *gptr<u32>(r0_1 + 4) = u32(std::bit_cast<u32>(S2_2));
    *gptr<u32>(r0_1 + 8) = u32(std::bit_cast<u32>(S3_2));
    *gptr<u32>(r0_1 + 0xc) = u32(std::bit_cast<u32>(S4_2));  // (from the original)
    r0_2 = r13;
    S1_1 = std::bit_cast<float>(arg1->word_4);
    S2_3 = std::bit_cast<float>(arg1->word_8);
    S3_3 = std::bit_cast<float>(arg1->word_c);
    S4_3 = std::bit_cast<float>(arg1->word_10);
    *gptr<u32>(r3_1) = u32(std::bit_cast<u32>(S1_1));
    *gptr<u32>(r3_1 + 4) = u32(std::bit_cast<u32>(S2_3));
    *gptr<u32>(r3_1 + 8) = u32(std::bit_cast<u32>(S3_3));
    *gptr<u32>(r3_1 + 0xc) = u32(std::bit_cast<u32>(S4_3));  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[1] = S1_1;
    guest::cpu()->s[2] = S2_3;
    guest::cpu()->s[3] = S3_3;
    guest::cpu()->s[4] = S4_3;
    guest::cpu()->s[5] = S5_1;
    guest::cpu()->s[6] = S6_1;
    call_0055d634(r0_2, r3_1, r0_1, r3_1);
    r1_1 = guest::cpu()->r[1];
    S1_2 = guest::cpu()->s[1];
    *gptr<u32>(r0 + 4u) = u32(*gptr<u32>(r13));
    *gptr<u32>(r0 + 8u) = u32(*gptr<u32>(r13 + 4u));
    *gptr<u32>(r0 + 0xcu) = u32(*gptr<u32>(r13 + 8u));  // (from the original)
    r0_3 = *gptr<u32>(r13 + 0xcu);  // (from the original)
    *gptr<u32>(r0 + 0x10u) = u32(r0_3);  // (from the original)
    r13 = r13 + 0x38u;  // (from the original)
    guest::cpu()->r[1] = r1_1;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[1] = S1_2;
    return r0_3;
}

}  // namespace d_001c23b0
GUEST_EXPORT(0x001c23b0, d_001c23b0::f_001c23b0);

// f_001c2764: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001c2764 {

inline constexpr guest::Function<0x00521a8c, u32(u32, u32, u32, u32)> call_00521a8c;  // (from the original)

u32 f_001c2764(u32 r0, u32 r1, u32 r2) {
    u32 r0_1 = 0;
    guest::cpu()->r[13] -= 8u;
    r0_1 = call_00521a8c(r0, r1, r2, guest::cpu()->r[3]);
    *gptr<u32>(r0_1 + 0x14u) = u32(0u);  // (from the original)
    *gptr<u32>(r0_1) = u32(0x8eb7fcu);  // (from the original)
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = 0u;
    return r0_1;
}

}  // namespace d_001c2764
GUEST_EXPORT(0x001c2764, d_001c2764::f_001c2764);

// f_001c4bc8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001c4bc8 {

inline constexpr guest::Function<0x00757aa0, u32(u32, u32, u32, u32)> call_00757aa0;  // (from the original)

u32 f_001c4bc8(u32 r0, u32 r1, u32 r2_unused, u32 r3) {
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r1_1 = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r0_1 = call_00757aa0(r0, r1, guest::cpu()->r[2], r3);
    r0_2 = *gptr<u32>(r0) + (r0_1 << 1);
    r1_1 = u32(*gptr<u16>(r0_2)) & 0xfu | r3;  // (from the original)
    *gptr<u16>(r0_2) = u16(r1_1);
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1_1;
    return r0_2;
}

}  // namespace d_001c4bc8
GUEST_EXPORT(0x001c4bc8, d_001c4bc8::f_001c4bc8);

// f_001c4bf4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001c4bf4 {

inline constexpr guest::Function<0x00757aa0, u32(u32, u32, u32, u32)> call_00757aa0;  // (from the original)

u32 f_001c4bf4(u32 r0, u32 r1, u32 r2_unused, u32 r3) {
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r0_2 = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r0_1 = call_00757aa0(r0, r1, guest::cpu()->r[2], r3);
    r1_1 = *gptr<u32>(r0);
    r0_2 = r1_1 + (r0_1 << 1);
    *gptr<u16>(r0_2) = u16(r3);
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1_1;
    return r0_2;
}

}  // namespace d_001c4bf4
GUEST_EXPORT(0x001c4bf4, d_001c4bf4::f_001c4bf4);

// f_001c4c14: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001c4c14 {

inline constexpr guest::Function<0x005bf518, u32(u32, u32, u32, u32)> call_005bf518;  // (from the original)

u32 f_001c4c14(u32 r0_unused, u32 r1) {
    u32 r1_1 = 0;
    guest::cpu()->r[13] -= 8u;
    call_005bf518(guest::cpu()->r[0], r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_1 = guest::cpu()->r[1];
    guest::cpu()->r[13] += 8u;
    return guest::cpu()->r[0];
}

}  // namespace d_001c4c14
GUEST_EXPORT(0x001c4c14, d_001c4c14::f_001c4c14);

// f_001c50e0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001c50e0 {

struct __attribute__((packed)) Object_001c50e0_0 {
    u8 unknown_0[0x164];  // (not used here)
    u8 byte_164;
    u8 unknown_165[0x3];  // (not used here)
    u32 word_168;
    u32 word_16c;
    u32 word_170;
    u32 word_174;
    u8 unknown_178[0xa0];  // (not used here)
    u32 word_218;
};
GUEST_OFFSET(Object_001c50e0_0, byte_164, 0x164);  // (from the original)
GUEST_OFFSET(Object_001c50e0_0, word_168, 0x168);  // (from the original)
GUEST_OFFSET(Object_001c50e0_0, word_16c, 0x16c);  // (from the original)
GUEST_OFFSET(Object_001c50e0_0, word_170, 0x170);  // (from the original)
GUEST_OFFSET(Object_001c50e0_0, word_174, 0x174);  // (from the original)
GUEST_OFFSET(Object_001c50e0_0, word_218, 0x218);  // (from the original)

inline guest::global<u32, 0x001c5130> global_001c5130;  // (from the original)
inline guest::global<u32, 0x001c5134> global_001c5134;  // (from the original)
inline guest::global<u32, 0x001c5138> global_001c5138;  // (from the original)

u32 f_001c50e0(gptr<Object_001c50e0_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r1_1 = 0;
    float S4_1 = 0;
    float S5_1 = 0;
    u32 r2_1 = 0;
    u32 r1_2 = 0;
    float S2_1 = 0;
    float S3_1 = 0;
    float S6_1 = 0;
    float S0_1 = 0;
    float S1_1 = 0;
    float S4_2 = 0;
    float S0_2 = 0;
    u32 r0_1 = 0;
    r1_1 = arg0->word_218;
    S4_1 = std::bit_cast<float>(*global_001c5130);
    S5_1 = std::bit_cast<float>(*global_001c5134);
    r2_1 = r1_1 + 0x48u;  // (from the original)
    r1_2 = r1_1 + 0x80u;  // (from the original)
    S2_1 = std::bit_cast<float>(*gptr<u32>(r2_1));
    S3_1 = std::bit_cast<float>(*gptr<u32>(r2_1 + 4));
    S6_1 = std::bit_cast<float>(*global_001c5138);
    S0_1 = std::bit_cast<float>(*gptr<u32>(r1_2 + 0xcu)) + S2_1 * S4_1;  // (from the original)
    S1_1 = std::bit_cast<float>(*gptr<u32>(r1_2 + 0x1cu)) - S3_1 * S4_1;  // (from the original)
    arg0->byte_164 = u8(1u);
    S4_2 = S5_1 - S0_1;
    S0_2 = S1_1 + S6_1;
    arg0->word_168 = u32(std::bit_cast<u32>(S4_2));
    arg0->word_16c = u32(std::bit_cast<u32>(S0_2));
    r0_1 = r0 + 0x170u;  // (from the original)
    arg0->word_170 = u32(std::bit_cast<u32>(S2_1));
    arg0->word_174 = u32(std::bit_cast<u32>(S3_1));
    guest::cpu()->r[1] = r1_2;
    guest::cpu()->s[0] = S0_2;
    guest::cpu()->s[1] = S1_1;
    return r0_1;
}

}  // namespace d_001c50e0
GUEST_EXPORT(0x001c50e0, d_001c50e0::f_001c50e0);

// f_001c53b8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001c53b8 {

inline constexpr guest::Function<0x001323bc, u32(u32, u32, u32, u32)> call_001323bc;  // (from the original)
inline constexpr guest::Function<0x00568c10, u32(u32, u32, u32, u32)> call_00568c10;  // (from the original)
inline constexpr guest::Function<0x00569e6c, u32(u32, u32, u32, u32)> call_00569e6c;  // (from the original)

u32 f_001c53b8(u32 r0, u32 r1, u32 r2) {
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r0_3 = 0;
    u32 r1_2 = 0;
    guest::cpu()->r[13] -= 8u;
    r0_1 = r0 + 0x2cu;  // (from the original)
    r0_2 = call_00568c10(r0_1, r1, r2, guest::cpu()->r[3]);
    r1_1 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    r0_3 = call_001323bc(r0_2, r1_1, r2_1, guest::cpu()->r[3]);
    r1_2 = r0 + 0x2cu;  // (from the original)
    guest::cpu()->r[13] += 8u;
    return call_00569e6c(r0_3, r1_2, 1u, guest::cpu()->r[3]);
}

}  // namespace d_001c53b8
GUEST_EXPORT(0x001c53b8, d_001c53b8::f_001c53b8);

// f_001c53dc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001c53dc {

inline guest::global<u32, 0x0087a024> global_0087a024;  // (from the original)
inline constexpr guest::Function<0x00816b18, u32(u32, u32, u32, u32)> call_00816b18;  // (from the original)

u32 f_001c53dc() {
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r1_2 = 0;
    guest::cpu()->r[13] -= 8u;
    r1_1 = *global_0087a024;
    r2_1 = *gptr<u32>(0x87a024u + 4);  // (from the original)
    call_00816b18(guest::cpu()->r[0], r1_1, r2_1, guest::cpu()->r[3]);
    r1_2 = guest::cpu()->r[1];
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1_2;
    return guest::cpu()->r[0];
}

}  // namespace d_001c53dc
GUEST_EXPORT(0x001c53dc, d_001c53dc::f_001c53dc);

// f_001c551c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001c551c {

inline guest::global<u32, 0x0087a02c> global_0087a02c;  // (from the original)
inline constexpr guest::Function<0x00816b18, u32(u32, u32, u32, u32)> call_00816b18;  // (from the original)

u32 f_001c551c() {
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r1_2 = 0;
    guest::cpu()->r[13] -= 8u;
    r1_1 = *global_0087a02c;
    r2_1 = *gptr<u32>(0x87a02cu + 4);  // (from the original)
    call_00816b18(guest::cpu()->r[0], r1_1, r2_1, guest::cpu()->r[3]);
    r1_2 = guest::cpu()->r[1];
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1_2;
    return guest::cpu()->r[0];
}

}  // namespace d_001c551c
GUEST_EXPORT(0x001c551c, d_001c551c::f_001c551c);

// f_001c55b0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001c55b0 {

struct __attribute__((packed)) Object_001c55b0_0 {
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
    u32 word_28;
};
GUEST_OFFSET(Object_001c55b0_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_001c55b0_0, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_001c55b0_0, byte_8, 0x8);  // (from the original)
GUEST_OFFSET(Object_001c55b0_0, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Object_001c55b0_0, word_10, 0x10);  // (from the original)
GUEST_OFFSET(Object_001c55b0_0, word_14, 0x14);  // (from the original)
GUEST_OFFSET(Object_001c55b0_0, byte_18, 0x18);  // (from the original)
GUEST_OFFSET(Object_001c55b0_0, word_1c, 0x1c);  // (from the original)
GUEST_OFFSET(Object_001c55b0_0, word_20, 0x20);  // (from the original)
GUEST_OFFSET(Object_001c55b0_0, word_24, 0x24);  // (from the original)
GUEST_OFFSET(Object_001c55b0_0, word_28, 0x28);  // (from the original)

inline guest::global<u32, 0x001c5690> global_001c5690;  // (from the original)
inline constexpr guest::Function<0x00125aec, u32(u32, u32, u32, u32)> call_00125aec;  // (from the original)
inline constexpr guest::Function<0x00125e3c, u32(u32, u32, u32, u32)> call_00125e3c;  // (from the original)
inline constexpr guest::Function<0x00299b30, u32(u32, u32, u32, u32)> call_00299b30;  // (from the original)

u32 f_001c55b0(gptr<Object_001c55b0_0> arg0, float S0) {
    u32 r0 = arg0.addr();
    u32 r13 = guest::cpu()->r[13];
    u32 r3_1 = 0;
    u32 ea_1 = 0;
    u32 r2_1 = 0;
    u32 ea_2 = 0;
    u32 r1_1 = 0;
    u32 ea_3 = 0;
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r1_2 = 0;
    u32 r2_2 = 0;
    u32 r3_2 = 0;
    float S0_1 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r1_3 = 0;
    u32 r2_3 = 0;
    u32 r3_3 = 0;
    float S0_2 = 0;
    u32 r0_5 = 0;
    u32 r0_6 = 0;
    u32 r1_4 = 0;
    u32 r2_4 = 0;
    u32 r3_4 = 0;
    float S0_3 = 0;
    u32 r0_7 = 0;
    u32 r0_8 = 0;
    u32 r1_5 = 0;
    u32 r2_5 = 0;
    u32 r3_5 = 0;
    float S0_4 = 0;
    u32 r0_9 = 0;
    u32 r0_10 = 0;
    u32 r2_6 = 0;
    u32 r3_6 = 0;
    float S0_5 = 0;
    u32 ea_4 = 0;
    u32 r1_6 = 0;
    u32 ea_5 = 0;
    u32 ea_6 = 0;
    u32 r0_11 = 0;
    u32 r0_12 = 0;
    u32 r0_13 = 0;
    u32 ea_7 = 0;
    u32 ea_8 = 0;
    float S0_6 = 0;
    u32 ea_9 = 0;
    u32 ea_10 = 0;
    u32 ea_11 = 0;
    u32 ea_12 = 0;
    u32 ea_13 = 0;
    u32 ea_14 = 0;
    u32 r1_7 = 0;
    u32 r2_7 = 0;
    u32 ea_15 = 0;
    r13 = r13 - 0x10;  // (from the original)
    arg0->word_4 = u32(0u);
    arg0->byte_8 = u8(0u);
    r3_1 = r0 + 0xcu;  // (from the original)
    ea_1 = 0x87a024u + 0x28u;  // (from the original)
    r2_1 = *gptr<u32>(ea_1 + 4);
    arg0->word_c = u32(*gptr<u32>(ea_1));
    arg0->word_10 = u32(r2_1);
    arg0->word_14 = u32(0u);
    arg0->byte_18 = u8(0u);
    arg0->word_1c = u32(0u);
    arg0->word_0 = u32(0x8eb984u);  // (from the original)
    arg0->word_20 = u32(0u);
    ea_2 = r0 + 0x24u;  // (from the original)
    arg0->word_24 = u32(0u);
    r1_1 = 0x87a024u + 0xccu;  // (from the original)
    ea_3 = ea_2 + 4u;
    arg0->word_28 = u32(r1_1);
    r0_1 = ea_3 + 4u;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    r0_2 = call_00125e3c(r0_1, r1_1, r2_1, r3_1);
    r1_2 = guest::cpu()->r[1];
    r2_2 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    S0_1 = guest::cpu()->s[0];
    r0_3 = r0_2 + 0x14cu;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_1;
    r0_4 = call_00125aec(r0_3, r1_2, r2_2, r3_2);
    r1_3 = guest::cpu()->r[1];
    r2_3 = guest::cpu()->r[2];
    r3_3 = guest::cpu()->r[3];
    S0_2 = guest::cpu()->s[0];
    r0_5 = r0_4 + 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_2;
    r0_6 = call_00125aec(r0_5, r1_3, r2_3, r3_3);
    r1_4 = guest::cpu()->r[1];
    r2_4 = guest::cpu()->r[2];
    r3_4 = guest::cpu()->r[3];
    S0_3 = guest::cpu()->s[0];
    r0_7 = r0_6 + 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_3;
    r0_8 = call_00125aec(r0_7, r1_4, r2_4, r3_4);
    r1_5 = guest::cpu()->r[1];
    r2_5 = guest::cpu()->r[2];
    r3_5 = guest::cpu()->r[3];
    S0_4 = guest::cpu()->s[0];
    r0_9 = r0_8 + 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_4;
    r0_10 = call_00125aec(r0_9, r1_5, r2_5, r3_5);
    r2_6 = guest::cpu()->r[2];
    r3_6 = guest::cpu()->r[3];
    S0_5 = guest::cpu()->s[0];
    ea_4 = r0_10 + 0x28u;  // (from the original)
    *gptr<u32>(ea_4) = u32(0u);
    r1_6 = r0_10 - 0x1f0u;  // (from the original)
    ea_5 = r0_10 + 0x2cu;  // (from the original)
    *gptr<u32>(ea_5) = u32(0u);
    ea_6 = r0_10 + 0x30u;  // (from the original)
    *gptr<u32>(ea_6) = u32(0u);
    r0_11 = ea_6 + 4u;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_5;
    r0_12 = call_00299b30(r0_11, r1_6, r2_6, r3_6);
    r0_13 = r0_12 - 0x224u;  // (from the original)
    ea_7 = r0_13 + 0x9bcu;  // (from the original)
    *gptr<u8>(ea_7) = u8(2u);
    ea_8 = r0_13 + 0x9c0u;  // (from the original)
    *gptr<u32>(ea_8) = u32(~0u);
    *gptr<u32>(ea_8 + 4) = u32(0u);
    S0_6 = std::bit_cast<float>(*global_001c5690);
    ea_9 = r0_13 + 0x9c8u;  // (from the original)
    *gptr<u32>(ea_9) = u32(0u);
    *gptr<u32>(r0_13 + 0x9ccu) = u32(std::bit_cast<u32>(S0_6));  // (from the original)
    ea_10 = r0_13 + 0x9d0u;  // (from the original)
    *gptr<u8>(ea_10) = u8(0u);
    ea_11 = r0_13 + 0x9d1u;  // (from the original)
    *gptr<u8>(ea_11) = u8(1u);
    ea_12 = r0_13 + 0x9d2u;  // (from the original)
    *gptr<u8>(ea_12) = u8(0u);
    ea_13 = r0_13 + 0x9d3u;  // (from the original)
    *gptr<u8>(ea_13) = u8(1u);
    ea_14 = 0x87a024u + 0x20u;  // (from the original)
    r1_7 = *gptr<u32>(ea_14);
    r2_7 = *gptr<u32>(ea_14 + 4);
    ea_15 = r0_13 + 0x9d4u;  // (from the original)
    *gptr<u32>(ea_15) = u32(r1_7);
    *gptr<u32>(ea_15 + 4) = u32(r2_7);
    *gptr<u32>(ea_15 + 8) = u32(0u);
    r13 = r13 + 0x10;  // (from the original)
    guest::cpu()->r[1] = r1_7;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_6;
    return r0_13;
}

}  // namespace d_001c55b0
GUEST_EXPORT(0x001c55b0, d_001c55b0::f_001c55b0);

// f_001c6748: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001c6748 {

struct __attribute__((packed)) Object_001c6748_0 {
    u32 word_0;
};
GUEST_OFFSET(Object_001c6748_0, word_0, 0x0);  // (from the original)

inline constexpr guest::Function<0x002f76ad, u32(u32, u32, u32, u32)> call_002f76ac;  // (from the original)
inline constexpr guest::Function<0x002f7710, u32(u32, u32, u32, u32)> call_002f7710;  // (from the original)
inline constexpr guest::Function<0x00567ef0, u32(u32, u32, u32, u32)> call_00567ef0;  // (from the original)
inline constexpr guest::Function<0x0056988c, u32(u32, u32, u32, u32)> call_0056988c;  // (from the original)
inline constexpr guest::Function<0x005bf744, u32(u32, u32, u32, u32)> call_005bf744;  // (from the original)

u32 f_001c6748(gptr<Object_001c6748_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r0_5 = 0;
    u32 r0_6 = 0;
    u32 r0_7 = 0;
    u32 r0_8 = 0;
    u32 r0_9 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r0_10 = 0;
    u32 r0_11 = 0;
    u32 r4_1 = 0;
    u32 r0_12 = 0;
    u32 r0_13 = 0;
    u32 r0_14 = 0;
    u32 r0_15 = 0;
    u32 r1_1 = 0;
    u32 r2_2 = 0;
    u32 r3_2 = 0;
    u32 r0_16 = 0;
    u32 r0_17 = 0;
    u32 r4_2 = 0;
    u32 r0_18 = 0;
    u32 r2_3 = 0;
    u32 r3_3 = 0;
    u32 r0_19 = 0;
    u32 r0_20 = 0;
    u32 r4_3 = 0;
    u32 r0_21 = 0;
    u32 r1_2 = 0;
    u32 r2_4 = 0;
    u32 r3_4 = 0;
    u32 r0_22 = 0;
    u32 r0_23 = 0;
    u32 r1_3 = 0;
    u32 r2_5 = 0;
    u32 r3_5 = 0;
    u32 r0_24 = 0;
    u32 r0_25 = 0;
    u32 r1_4 = 0;
    u32 r2_6 = 0;
    u32 r3_6 = 0;
    u32 r0_26 = 0;
    u32 r0_27 = 0;
    u32 r1_5 = 0;
    u32 r2_7 = 0;
    u32 r3_7 = 0;
    u32 r0_28 = 0;
    u32 r0_29 = 0;
    u32 r1_6 = 0;
    u32 r2_8 = 0;
    u32 r3_8 = 0;
    u32 r0_30 = 0;
    u32 r0_31 = 0;
    u32 r1_7 = 0;
    u32 r2_9 = 0;
    u32 r3_9 = 0;
    u32 r0_32 = 0;
    u32 r0_33 = 0;
    u32 r1_8 = 0;
    u32 r2_10 = 0;
    u32 r3_10 = 0;
    u32 r0_34 = 0;
    u32 r0_35 = 0;
    u32 r1_9 = 0;
    u32 r2_11 = 0;
    u32 r3_11 = 0;
    u32 r0_36 = 0;
    u32 r0_37 = 0;
    u32 r1_10 = 0;
    u32 r2_12 = 0;
    u32 r3_12 = 0;
    u32 r0_38 = 0;
    u32 r0_39 = 0;
    u32 r1_11 = 0;
    u32 r2_13 = 0;
    u32 r3_13 = 0;
    u32 r0_40 = 0;
    u32 r0_41 = 0;
    u32 r1_12 = 0;
    u32 r2_14 = 0;
    u32 r3_14 = 0;
    u32 r0_42 = 0;
    u32 r0_43 = 0;
    u32 r1_13 = 0;
    u32 r0_44 = 0;
    guest::cpu()->r[13] -= 8u;
    arg0->word_0 = u32(0x8eb9f0u);  // (from the original)
    r0_1 = r0 + 0xa44cu;  // (from the original)
    call_002f76ac(r0_1, 0x3009ccu, 0x2cu, 0x21u);  // (from the original)
    r0_2 = r0 + 0x92c4u;  // (from the original)
    call_002f76ac(r0_2, 0x3009ccu, 0x2cu, 0x66u);  // (from the original)
    r0_3 = r0 + 0x8664u;  // (from the original)
    call_002f76ac(r0_3, 0x3009ccu, 0x2cu, 0x48u);  // (from the original)
    r0_4 = r0 + 0x7ae0u;  // (from the original)
    call_002f76ac(r0_4, 0x3009ccu, 0x2cu, 0x43u);  // (from the original)
    r0_5 = r0 + 0x6f04u;  // (from the original)
    call_002f76ac(r0_5, 0x1cbb00u, 0x5cu, 0x21u);  // (from the original)
    r0_6 = r0 + 0x4a5cu;  // (from the original)
    call_002f76ac(r0_6, 0x1cbb00u, 0x5cu, 0x66u);  // (from the original)
    r0_7 = r0 + 0x307cu;  // (from the original)
    call_002f76ac(r0_7, 0x1cbb00u, 0x5cu, 0x48u);  // (from the original)
    r0_8 = r0 + 0x1868u;  // (from the original)
    call_002f76ac(r0_8, 0x1cbb00u, 0x5cu, 0x43u);  // (from the original)
    r0_9 = r0 + 0x172cu;  // (from the original)
    call_002f76ac(r0_9, 0x1c81ccu, 0x1cu, 8u);  // (from the original)
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    r0_10 = r0 + 0x1620u;  // (from the original)
    *gptr<u32>(r0 + 0xac0u) = u32(0x8f727cu);  // (from the original)
    r0_11 = call_002f7710(r0_10, 0x8f727cu, r2_1, r3_1);  // (from the original)
    r4_1 = r0_11 - 0xb60u;  // (from the original)
    r0_12 = r0_11 - 0x380u;  // (from the original)
    call_002f76ac(r0_12, 0x31c92cu, 0xe0u, 4u);  // (from the original)
    r0_13 = r4_1 + 0x740u;  // (from the original)
    call_002f76ac(r0_13, 0x56988cu, 0x28u, 4u);  // (from the original)
    r0_14 = r4_1 + 0x6a0u;  // (from the original)
    call_002f76ac(r0_14, 0x56988cu, 0x28u, 4u);  // (from the original)
    r0_15 = r4_1 + 0x170u;  // (from the original)
    call_002f76ac(r0_15, 0x5bf744u, 0x14cu, 4u);  // (from the original)
    r1_1 = guest::cpu()->r[1];
    r2_2 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    r0_16 = r4_1 + 0x24u;  // (from the original)
    r0_17 = call_005bf744(r0_16, r1_1, r2_2, r3_2);
    r4_2 = r0_17 - 0xae4u;  // (from the original)
    *gptr<u32>(r0_17 - 0xae4u) = u32(0x8ebba0u);  // (from the original)
    r0_18 = r0_17 - 0x104u;  // (from the original)
    call_002f76ac(r0_18, 0x1c81ccu, 0x1cu, 8u);  // (from the original)
    r2_3 = guest::cpu()->r[2];
    r3_3 = guest::cpu()->r[3];
    r0_19 = r4_2 + 0x82cu;  // (from the original)
    *gptr<u32>(r4_2) = u32(0x8eb984u);  // (from the original)
    *gptr<u32>(r4_2 + 0x224u) = u32(0x8f0888u);  // (from the original)
    r0_20 = call_002f7710(r0_19, 0x8f0888u, r2_3, r3_3);  // (from the original)
    r4_3 = r0_20 - 0x608u;  // (from the original)
    r0_21 = r0_20 - 0x1c0u;  // (from the original)
    call_002f76ac(r0_21, 0x2b6ef8u, 0xe0u, 2u);  // (from the original)
    r1_2 = guest::cpu()->r[1];
    r2_4 = guest::cpu()->r[2];
    r3_4 = guest::cpu()->r[3];
    r0_22 = r4_3 + 0x410u;  // (from the original)
    r0_23 = call_0056988c(r0_22, r1_2, r2_4, r3_4);
    r1_3 = guest::cpu()->r[1];
    r2_5 = guest::cpu()->r[2];
    r3_5 = guest::cpu()->r[3];
    r0_24 = r0_23 - 0x28u;  // (from the original)
    r0_25 = call_0056988c(r0_24, r1_3, r2_5, r3_5);
    r1_4 = guest::cpu()->r[1];
    r2_6 = guest::cpu()->r[2];
    r3_6 = guest::cpu()->r[3];
    r0_26 = r0_25 - 0x28u;  // (from the original)
    r0_27 = call_0056988c(r0_26, r1_4, r2_6, r3_6);
    r1_5 = guest::cpu()->r[1];
    r2_7 = guest::cpu()->r[2];
    r3_7 = guest::cpu()->r[3];
    r0_28 = r0_27 - 0x28u;  // (from the original)
    r0_29 = call_0056988c(r0_28, r1_5, r2_7, r3_7);
    r1_6 = guest::cpu()->r[1];
    r2_8 = guest::cpu()->r[2];
    r3_8 = guest::cpu()->r[3];
    r0_30 = r0_29 - 0x14cu;  // (from the original)
    r0_31 = call_005bf744(r0_30, r1_6, r2_8, r3_8);
    r1_7 = guest::cpu()->r[1];
    r2_9 = guest::cpu()->r[2];
    r3_9 = guest::cpu()->r[3];
    r0_32 = r0_31 - 0x248u;  // (from the original)
    r0_33 = call_00567ef0(r0_32, r1_7, r2_9, r3_9);
    r1_8 = guest::cpu()->r[1];
    r2_10 = guest::cpu()->r[2];
    r3_10 = guest::cpu()->r[3];
    r0_34 = r0_33 - 0x38u;  // (from the original)
    r0_35 = call_0056988c(r0_34, r1_8, r2_10, r3_10);
    r1_9 = guest::cpu()->r[1];
    r2_11 = guest::cpu()->r[2];
    r3_11 = guest::cpu()->r[3];
    r0_36 = r0_35 - 0x28u;  // (from the original)
    r0_37 = call_0056988c(r0_36, r1_9, r2_11, r3_11);
    r1_10 = guest::cpu()->r[1];
    r2_12 = guest::cpu()->r[2];
    r3_12 = guest::cpu()->r[3];
    r0_38 = r0_37 - 0x28u;  // (from the original)
    r0_39 = call_0056988c(r0_38, r1_10, r2_12, r3_12);
    r1_11 = guest::cpu()->r[1];
    r2_13 = guest::cpu()->r[2];
    r3_13 = guest::cpu()->r[3];
    r0_40 = r0_39 - 0x28u;  // (from the original)
    r0_41 = call_0056988c(r0_40, r1_11, r2_13, r3_13);
    r1_12 = guest::cpu()->r[1];
    r2_14 = guest::cpu()->r[2];
    r3_14 = guest::cpu()->r[3];
    r0_42 = r0_41 - 0x14cu;  // (from the original)
    r0_43 = call_005bf744(r0_42, r1_12, r2_14, r3_14);
    r1_13 = guest::cpu()->r[1];
    r0_44 = r0_43 - 0x2cu;  // (from the original)
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1_13;
    return r0_44;
}

}  // namespace d_001c6748
GUEST_EXPORT(0x001c6748, d_001c6748::f_001c6748);

// f_001c8cd4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001c8cd4 {

inline constexpr guest::Function<0x001435b4, u32(u32, u32, u32, u32)> call_001435b4;  // (from the original)
inline constexpr guest::Function<0x00170514, u32(u32, u32, u32, u32)> call_00170514;  // (from the original)
inline constexpr guest::Function<0x001f9684, u32(u32, u32, u32, u32)> call_001f9684;  // (from the original)
inline constexpr guest::Function<0x0034a784, u32(u32, u32, u32, u32)> call_0034a784;  // (from the original)

u32 f_001c8cd4(u32 r0, u32 r1, u32 r2, u32 r3) {
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
    u32 ea_1 = 0;
    u32 r0_1 = 0;
    u32 r3_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r1_1 = 0;
    u32 r7_1 = 0;
    u32 r8_1 = 0;
    u32 r0_4 = 0;
    u32 r1_2 = 0;
    u32 r6_1 = 0;
    u32 r0_5 = 0;
    u32 r1_3 = 0;
    u32 r2_1 = 0;
    u32 r3_2 = 0;
    u32 r0_6 = 0;
    u32 r0_7 = 0;
    u32 r1_4 = 0;
    u32 r0_8 = 0;
    u32 r1_5 = 0;
    u32 r2_2 = 0;
    u32 r3_3 = 0;
    u32 r0_9 = 0;
    u32 r1_6 = 0;
    u32 r0_10 = 0;
    u32 r1_7 = 0;
    u32 r2_3 = 0;
    u32 r3_4 = 0;
    u32 r0_11 = 0;
    u32 r6_2 = 0;
    u32 r1_8 = 0;
    u32 r1_9 = 0;
    u32 r2_4 = 0;
    u32 r3_5 = 0;
    u32 r0_12 = 0;
    u32 r0_13 = 0;
    u32 r1_10 = 0;
    u32 r1_11 = 0;
    u32 r2_5 = 0;
    u32 r3_6 = 0;
    u32 r0_14 = 0;
    u32 r1_12 = 0;
    u32 r1_13 = 0;
    u32 r6_3 = 0;
    u32 r2_6 = 0;
    u32 r9_1 = 0;
    u32 r5_1 = 0;
    u32 r8_2 = 0;
    u32 r3_7 = 0;
    u32 res_1 = 0;
    u32 res_2 = 0;
    u32 r0_15 = 0;
    u32 r0_16 = 0;
    u32 r2_7 = 0;
    u32 r3_8 = 0;
    u32 r0_17 = 0;
    u32 r0_18 = 0;
    u32 ea_2 = 0;
    u32 r0_19 = 0;
    u32 r2_8 = 0;
    u32 r3_9 = 0;
    u32 r0_20 = 0;
    u32 ea_3 = 0;
    u32 r4_1 = 0;
    u32 r5_2 = 0;
    u32 r6_4 = 0;
    u32 r7_2 = 0;
    u32 r8_3 = 0;
    u32 r9_2 = 0;
    u32 r10_1 = 0;
    u32 r11_1 = 0;
    ea_1 = r13 - 0x2c;  // (from the original)
    *gptr<u32>(ea_1) = u32(r0);
    *gptr<u32>(ea_1 + 4) = u32(r1);
    *gptr<u32>(ea_1 + 8) = u32(r4);
    *gptr<u32>(ea_1 + 0xc) = u32(r5);  // (from the original)
    *gptr<u32>(ea_1 + 0x10) = u32(r6);  // (from the original)
    *gptr<u32>(ea_1 + 0x14) = u32(r7);  // (from the original)
    *gptr<u32>(ea_1 + 0x18) = u32(r8);  // (from the original)
    *gptr<u32>(ea_1 + 0x1c) = u32(r9);  // (from the original)
    *gptr<u32>(ea_1 + 0x20) = u32(r10);  // (from the original)
    *gptr<u32>(ea_1 + 0x24) = u32(r11);  // (from the original)
    *gptr<u32>(ea_1 + 0x28) = u32(r14);  // (from the original)
    r13 = r13 - 0x30u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_1 = call_001f9684(r0, r1, r2, r3);
    r3_1 = guest::cpu()->r[3];
    r0_2 = r0_1 + 0x24u;  // (from the original)
    r4 = r0_2;
    r0_3 = *gptr<u32>(r13 + 4u) + 0x1e70u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_00170514(r0_3, r0_2, r1, r3_1);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r5 = 0u;
    r9 = *gptr<u32>(r13 + 4u) + 0x27b8u;  // (from the original)
    do {
L_1c8d14:;
        r1_1 = r5 + (r5 << 1);
        r7_1 = *gptr<u32>(r13 + 4u) + (r1_1 << 7);
        r8_1 = r7_1 + 0x1eb8u;  // (from the original)
        guest::cpu()->r[13] = r13;
        r0_4 = call_001435b4(r8_1, r1_1, r2, r3);
        r1_2 = *gptr<u32>(r4 + 4u);
        r6_1 = *gptr<u32>(r13 + 4u) + ((r5 << 7) - ((r5 << 3) - r5) << 4);
        r0_5 = r6_1 + 0x18u;  // (from the original)
        guest::cpu()->r[13] = r13;
        call_0034a784(r0_5, r1_2, r0_4, 0xbu);  // (from the original)
        r1_3 = guest::cpu()->r[1];
        r2_1 = guest::cpu()->r[2];
        r3_2 = guest::cpu()->r[3];
        r0_6 = r7_1 + 0x21b8u;  // (from the original)
        guest::cpu()->r[13] = r13;
        r0_7 = call_001435b4(r0_6, r1_3, r2_1, r3_2);
        r1_4 = *gptr<u32>(r4 + 8u);
        r0_8 = r6_1 + 0x18u;  // (from the original)
        guest::cpu()->r[13] = r13;
        call_0034a784(r0_8, r1_4, r0_7, 0xbu);  // (from the original)
        r1_5 = guest::cpu()->r[1];
        r2_2 = guest::cpu()->r[2];
        r3_3 = guest::cpu()->r[3];
        guest::cpu()->r[13] = r13;
        r0_9 = call_001435b4(r9, r1_5, r2_2, r3_3);
        r1_6 = *gptr<u32>(r4 + 0x14u);  // (from the original)
        r0_10 = r6_1 + 0x18u;  // (from the original)
        guest::cpu()->r[13] = r13;
        call_0034a784(r0_10, r1_6, r0_9, 7u);
        r1_7 = guest::cpu()->r[1];
        r2_3 = guest::cpu()->r[2];
        r3_4 = guest::cpu()->r[3];
        guest::cpu()->r[13] = r13;
        r0_11 = call_001435b4(r8_1, r1_7, r2_3, r3_4);
        r6_2 = r6_1 + 0xf38u;  // (from the original)
        r1_8 = *gptr<u32>(r4 + 4u);
        guest::cpu()->r[13] = r13;
        call_0034a784(r6_2, r1_8, r0_11, 0xbu);  // (from the original)
        r1_9 = guest::cpu()->r[1];
        r2_4 = guest::cpu()->r[2];
        r3_5 = guest::cpu()->r[3];
        r0_12 = r7_1 + 0x24b8u;  // (from the original)
        guest::cpu()->r[13] = r13;
        r0_13 = call_001435b4(r0_12, r1_9, r2_4, r3_5);
        r1_10 = *gptr<u32>(r4 + 8u);
        guest::cpu()->r[13] = r13;
        call_0034a784(r6_2, r1_10, r0_13, 0xbu);  // (from the original)
        r1_11 = guest::cpu()->r[1];
        r2_5 = guest::cpu()->r[2];
        r3_6 = guest::cpu()->r[3];
        guest::cpu()->r[13] = r13;
        r0_14 = call_001435b4(r9, r1_11, r2_5, r3_6);
        r1_12 = *gptr<u32>(r4 + 0x14u);  // (from the original)
        guest::cpu()->r[13] = r13;
        call_0034a784(r6_2, r1_12, r0_14, 7u);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r5 = r5 + 1u;
        guest::preempt();
    } while (s32(r5) < s32(2u));
    r11 = 0u;
    r0 = *gptr<u32>(r13 + 4u) + 0x28b8u;  // (from the original)
    r4 = *gptr<u32>(r13 + 4u) + 0x28eeu;  // (from the original)
    r10 = r11;
    *gptr<u32>(r13) = u32(r4);
L_1c8e3c:;
    r7 = 0u;
    r12 = r7;
    do {
L_1c8e44:;
        r1_13 = r12 + (r10 << 2);
        r6_3 = r11 + r7;
        r2_6 = r6_3 + r4;
        r9_1 = r1_13 + 1u;
        *gptr<u8>(r4 + r6_3) = u8(r1_13);
        r5_1 = r1_13 + 5u;
        *gptr<u8>(r2_6 + 1u) = u8(r9_1);
        *gptr<u8>(r2_6 + 2u) = u8(r5_1);
        r8_2 = r1_13 + 4u;
        *gptr<u8>(r2_6 + 3u) = u8(r5_1);
        *gptr<u8>(r2_6 + 4u) = u8(r8_2);
        r3_7 = r6_3 + r0;
        *gptr<u8>(r2_6 + 5u) = u8(r1_13);
        *gptr<u8>(r0 + r6_3) = u8(r9_1);
        *gptr<u8>(r3_7 + 1u) = u8(r1_13);
        *gptr<u8>(r3_7 + 2u) = u8(r5_1);
        *gptr<u8>(r3_7 + 3u) = u8(r8_2);
        r12 = r12 + 1u;
        *gptr<u8>(r3_7 + 4u) = u8(r5_1);
        res_1 = r12 - 3u;
        r7 = r7 + 6u;
        *gptr<u8>(r3_7 + 5u) = u8(r1_13);
        guest::preempt();
    } while (res_1 >> 0x1f != ((r12 ^ 3u) & (r12 ^ res_1)) >> 0x1f);  // (from the original)
    r10 = r10 + 1u;
    res_2 = r10 - 3u;
    r11 = r11 + 0x12u;  // (from the original)
    if (res_2 >> 0x1f != ((r10 ^ 3u) & (r10 ^ res_2)) >> 0x1f) {  // (from the original)
        guest::preempt();
        goto L_1c8e3c;
    }
    guest::cpu()->r[13] = r13;
    r0_15 = call_001435b4(r0, r1_13, r2_6, r3_7);
    r0_16 = *gptr<u32>(r13 + 4u);
    r2_7 = r0_16 + 0x1e58u;  // (from the original)
    r3_8 = r0_16 + 0x1e5cu;  // (from the original)
    *gptr<u32>(r2_7) = u32(r0_15);
    *gptr<u32>(r3_8) = u32(0x36u);  // (from the original)
    *gptr<u8>(r0_16 + 0x1e60u) = u8(1u);  // (from the original)
    r0_17 = *gptr<u32>(r13);
    guest::cpu()->r[13] = r13;
    r0_18 = call_001435b4(r0_17, r0_15, r2_7, r3_8);
    ea_2 = r13 + 4u;
    r0_19 = *gptr<u32>(ea_2);
    r2_8 = r0_19 + 0x1e64u;  // (from the original)
    r3_9 = r0_19 + 0x1e68u;  // (from the original)
    r0_20 = r0_19 + 0x1e6cu;  // (from the original)
    *gptr<u32>(r2_8) = u32(r0_18);
    *gptr<u32>(r3_9) = u32(0x36u);  // (from the original)
    *gptr<u8>(r0_20) = u8(1u);
    r13 = r13 + 0xcu;  // (from the original)
    ea_3 = r13;
    r13 = r13 + 0x24;  // (from the original)
    r4_1 = *gptr<u32>(ea_3);
    r5_2 = *gptr<u32>(ea_3 + 4);
    r6_4 = *gptr<u32>(ea_3 + 8);
    r7_2 = *gptr<u32>(ea_3 + 0xc);  // (from the original)
    r8_3 = *gptr<u32>(ea_3 + 0x10);  // (from the original)
    r9_2 = *gptr<u32>(ea_3 + 0x14);  // (from the original)
    r10_1 = *gptr<u32>(ea_3 + 0x18);  // (from the original)
    r11_1 = *gptr<u32>(ea_3 + 0x1c);  // (from the original)
    guest::cpu()->r[1] = r0_18;
    guest::cpu()->r[4] = r4_1;
    guest::cpu()->r[5] = r5_2;
    guest::cpu()->r[6] = r6_4;
    guest::cpu()->r[7] = r7_2;
    guest::cpu()->r[8] = r8_3;
    guest::cpu()->r[9] = r9_2;
    guest::cpu()->r[10] = r10_1;
    guest::cpu()->r[11] = r11_1;
    guest::cpu()->r[13] = r13;
    return r0_20;
}

}  // namespace d_001c8cd4
GUEST_EXPORT(0x001c8cd4, d_001c8cd4::f_001c8cd4);

// f_001c98d8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001c98d8 {

struct __attribute__((packed)) Object_001c98d8_0 {
    u8 unknown_0[0x44];  // (not used here)
    u32 word_44;
};
GUEST_OFFSET(Object_001c98d8_0, word_44, 0x44);  // (from the original)

inline guest::global<u32, 0x00ae5658> global_00ae5658;  // (from the original)
inline constexpr guest::Function<0x0014f3cc, u32(u32, u32, u32, u32)> call_0014f3cc;  // (from the original)
inline constexpr guest::Function<0x001cb118, u32(u32, u32, u32, u32)> call_001cb118;  // (from the original)
inline constexpr guest::Function<0x0052e3ec, u32(u32, u32, u32, u32)> call_0052e3ec;  // (from the original)
inline constexpr guest::Function<0x0070ab44, u32(u32, u32, u32, u32)> call_0070ab44;  // (from the original)
inline constexpr guest::Function<0x00718a58, u32(u32, u32, u32, u32)> call_00718a58;  // (from the original)

u32 f_001c98d8(gptr<Object_001c98d8_0> arg0, u32 r1) {
    u32 r0 = arg0.addr();
    u32 r13 = guest::cpu()->r[13];
    u32 r5_1 = 0;
    u32 r4_1 = 0;
    u32 r6_1 = 0;
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r1_2 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r3_1 = 0;
    u32 r0_4 = 0;
    u32 r1_3 = 0;
    u32 r2_2 = 0;
    u32 r3_2 = 0;
    u32 r1_4 = 0;
    u32 r3_3 = 0;
    u32 ea_1 = 0;
    u32 r1_5 = 0;
    u32 r2_3 = 0;
    u32 r1_6 = 0;
    u32 r2_4 = 0;
    r13 = r13 - 0x60u;  // (from the original)
    r5_1 = arg0->word_44;
    r4_1 = r0;
    r6_1 = r13 + 0x40u;  // (from the original)
    if (r5_1 == 0) {
        r13 = r13 + 0x60u;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    r0_1 = *gptr<u32>(r5_1 + 0x68u);  // (from the original)
    r1_1 = r13 + 0x10u;  // (from the original)
    r2_1 = *gptr<u32>(r0_1 + 0xb4u);  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0070ab44(r0_1, r1_1, r2_1, 0u);
    r1 = guest::cpu()->r[1];
    if (r0 == 0) {
        r13 = r13 + 0x60u;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    r1_2 = r13;
    r0_2 = r5_1 + 0xb4u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_3 = call_00718a58(r0_2, r1_2, 0x846fa8u, 0u);  // (from the original)
    r3_1 = guest::cpu()->r[3];
    if (r0_3 == 0) {
        *gptr<u32>(r13) = u32(*global_00ae5658);
        *gptr<u32>(r13 + 4u) = u32(*gptr<u32>(0xae5658u + 4u));  // (from the original)
        *gptr<u32>(r13 + 8u) = u32(*gptr<u32>(0xae5658u + 8u));  // (from the original)
    }
    r0_4 = r13;
    r1_3 = r13 + 0x10u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_0014f3cc(r0_4, r1_3, r0_4, r3_1);
    r2_2 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    r1_4 = r13;
    guest::cpu()->r[13] = r13;
    call_0052e3ec(r6_1, r1_4, r2_2, r3_2);
    r3_3 = guest::cpu()->r[3];
    ea_1 = r4_1 + 0xcu;  // (from the original)
    r1_5 = *gptr<u32>(ea_1 + 4);
    r2_3 = *gptr<u32>(ea_1 + 8);
    *gptr<u32>(r13) = u32(*gptr<u32>(ea_1));
    *gptr<u32>(r13 + 4) = u32(r1_5);
    *gptr<u32>(r13 + 8) = u32(r2_3);
    r1_6 = r13;
    r2_4 = *gptr<u32>(r4_1 + 0x3cu);  // (from the original)
    guest::cpu()->r[13] = r13;
    call_001cb118(r4_1, r1_6, r2_4, r3_3);
    r1 = guest::cpu()->r[1];
    r0 = *gptr<u32>(r4_1 + 0x3cu);  // (from the original)
    if (r0 != 0 && r0 >> 0x1f == (r0 & (r0 ^ r0)) >> 0x1f) {  // (from the original)
        r0 = r0 - 1u;
        *gptr<u32>(r4_1 + 0x3cu) = u32(r0);  // (from the original)
    }
    r13 = r13 + 0x60u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_001c98d8
GUEST_EXPORT(0x001c98d8, d_001c98d8::f_001c98d8);

// f_001c9f88: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001c9f88 {

struct __attribute__((packed)) Object_001c9f88_0 {
    u8 unknown_0[0x24];  // (not used here)
    u32 word_24;
    u32 word_28;
    u32 word_2c;
    u8 unknown_30[0x8];  // (not used here)
    u32 word_38;
    u8 unknown_3c[0x4];  // (not used here)
    u32 word_40;
};
GUEST_OFFSET(Object_001c9f88_0, word_24, 0x24);  // (from the original)
GUEST_OFFSET(Object_001c9f88_0, word_28, 0x28);  // (from the original)
GUEST_OFFSET(Object_001c9f88_0, word_2c, 0x2c);  // (from the original)
GUEST_OFFSET(Object_001c9f88_0, word_38, 0x38);  // (from the original)
GUEST_OFFSET(Object_001c9f88_0, word_40, 0x40);  // (from the original)

inline guest::global<u32, 0x001ca078> global_001ca078;  // (from the original)
inline guest::global<u32, 0x001ca07c> global_001ca07c;  // (from the original)
inline guest::global<u32, 0x001ca080> global_001ca080;  // (from the original)
inline guest::global<u32, 0x001ca084> global_001ca084;  // (from the original)
inline guest::global<u32, 0x001ca088> global_001ca088;  // (from the original)
inline guest::global<u32, 0x001ca08c> global_001ca08c;  // (from the original)
inline guest::global<u32, 0x001ca090> global_001ca090;  // (from the original)

u32 f_001c9f88(gptr<Object_001c9f88_0> arg0, float S0, float S1) {
    u32 r0 = arg0.addr();
    u32 r1_1 = 0;
    u32 r1_2 = 0;
    u32 res_1 = 0;
    float S0_1 = 0;
    float S1_1 = 0;
    float S0_2 = 0;
    u32 r1_3 = 0;
    float S1_2 = 0;
    float S3_1 = 0;
    float S1_3 = 0;
    float S2_1 = 0;
    float S0_3 = 0;
    float S0_4 = 0;
    u32 r1_4 = 0;
    float S2_2 = 0;
    float S1_4 = 0;
    float S0_5 = 0;
    float S0_6 = 0;
    u32 r1_5 = 0;
    u32 r1_6 = 0;
    r1_1 = arg0->word_38;
    if (r1_1 >> 0x1f != (r1_1 & (r1_1 ^ r1_1)) >> 0x1f) {  // (from the original)
        r1_2 = r1_1 + 1u;
        *gptr<u32>(r0 + 0x38u) = u32(r1_2);  // (from the original)
        guest::cpu()->r[1] = r1_2;
        guest::cpu()->s[0] = S0;
        guest::cpu()->s[1] = S1;
        return 0u;
    }
    res_1 = r1_1 - 0xeu;  // (from the original)
    S0_1 = std::bit_cast<float>(*global_001ca078);
    if (res_1 == 0 || res_1 >> 0x1f != ((r1_1 ^ 0xeu) & (r1_1 ^ res_1)) >> 0x1f) {  // (from the original)
        S1_1 = float(s32(std::bit_cast<u32>(std::bit_cast<float>(r1_1)))) * std::bit_cast<float>(*global_001ca07c);
        S0_2 = std::bit_cast<float>(*global_001ca080) + std::bit_cast<float>(arg0->word_40) * S0_1 * S1_1;
        arg0->word_24 = u32(std::bit_cast<u32>(S0_2));
        arg0->word_28 = u32(std::bit_cast<u32>(S0_2));
        arg0->word_2c = u32(std::bit_cast<u32>(S0_2));
        r1_3 = r1_1 + 1u;
        *gptr<u32>(r0 + 0x38u) = u32(r1_3);  // (from the original)
        guest::cpu()->r[1] = r1_3;
        guest::cpu()->s[0] = S0_2;
        guest::cpu()->s[1] = S1_1;
        return 0u;
    }
    S1_2 = std::bit_cast<float>(*global_001ca084);
    S3_1 = std::bit_cast<float>(*global_001ca088);
    if (s32(r1_1) <= s32(0x11u)) {  // (from the original)
        S1_3 = (float(s32(std::bit_cast<u32>(std::bit_cast<float>(r1_1)))) - std::bit_cast<float>(*global_001ca08c)) * S1_2;
        S2_1 = std::bit_cast<float>(*gptr<u32>(r0 + 0x40u));  // (from the original)
        S0_3 = S2_1 * S0_1;
        S0_4 = S0_3 + (S2_1 * S3_1 - S0_3) * S1_3;
        *gptr<u32>(r0 + 0x24u) = u32(std::bit_cast<u32>(S0_4));  // (from the original)
        *gptr<u32>(r0 + 0x28u) = u32(std::bit_cast<u32>(S0_4));  // (from the original)
        *gptr<u32>(r0 + 0x2cu) = u32(std::bit_cast<u32>(S0_4));  // (from the original)
        r1_4 = r1_1 + 1u;
        *gptr<u32>(r0 + 0x38u) = u32(r1_4);  // (from the original)
        guest::cpu()->r[1] = r1_4;
        guest::cpu()->s[0] = S0_4;
        guest::cpu()->s[1] = S1_3;
        return 0u;
    }
    if (s32(r1_1) <= s32(0x14u)) {  // (from the original)
        S2_2 = std::bit_cast<float>(*gptr<u32>(r0 + 0x40u));  // (from the original)
        S1_4 = (float(s32(std::bit_cast<u32>(std::bit_cast<float>(r1_1)))) - std::bit_cast<float>(*global_001ca090)) * S1_2;
        S0_5 = S2_2 * S3_1;
        S0_6 = S0_5 + (S2_2 - S0_5) * S1_4;
        *gptr<u32>(r0 + 0x24u) = u32(std::bit_cast<u32>(S0_6));  // (from the original)
        *gptr<u32>(r0 + 0x28u) = u32(std::bit_cast<u32>(S0_6));  // (from the original)
        *gptr<u32>(r0 + 0x2cu) = u32(std::bit_cast<u32>(S0_6));  // (from the original)
        r1_5 = r1_1 + 1u;
        *gptr<u32>(r0 + 0x38u) = u32(r1_5);  // (from the original)
        guest::cpu()->r[1] = r1_5;
        guest::cpu()->s[0] = S0_6;
        guest::cpu()->s[1] = S1_4;
        return 0u;
    }
    r1_6 = *gptr<u32>(r0 + 0x40u);  // (from the original)
    *gptr<u32>(r0 + 0x24u) = u32(r1_6);  // (from the original)
    *gptr<u32>(r0 + 0x28u) = u32(r1_6);  // (from the original)
    *gptr<u32>(r0 + 0x2cu) = u32(r1_6);  // (from the original)
    guest::cpu()->r[1] = r1_6;
    guest::cpu()->s[0] = S0_1;
    guest::cpu()->s[1] = S1_2;
    return 1u;
}

}  // namespace d_001c9f88
GUEST_EXPORT(0x001c9f88, d_001c9f88::f_001c9f88);

// f_001ca2c0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001ca2c0 {

struct __attribute__((packed)) Object_001ca2c0_0 {
    u8 unknown_0[0x38];  // (not used here)
    u32 word_38;
};
GUEST_OFFSET(Object_001ca2c0_0, word_38, 0x38);  // (from the original)

inline guest::global<u32, 0x001ca310> global_001ca310;  // (from the original)

u32 f_001ca2c0(gptr<Object_001ca2c0_0> arg0, float S0, float S1) {
    u32 r0 = arg0.addr();
    u32 r1_1 = 0;
    u32 r1_2 = 0;
    float S1_1 = 0;
    float S0_1 = 0;
    float S0_2 = 0;
    u32 r1_3 = 0;
    r1_1 = arg0->word_38;
    if (r1_1 >> 0x1f != (r1_1 & (r1_1 ^ r1_1)) >> 0x1f) {  // (from the original)
        r1_2 = r1_1 + 1u;
        *gptr<u32>(r0 + 0x38u) = u32(r1_2);  // (from the original)
        guest::cpu()->r[1] = r1_2;
        guest::cpu()->s[0] = S0;
        guest::cpu()->s[1] = S1;
        return 0u;
    }
    if (s32(r1_1) > s32(9u)) {
        guest::cpu()->r[1] = r1_1;
        guest::cpu()->s[0] = S0;
        guest::cpu()->s[1] = S1;
        return 1u;
    }
    S1_1 = float(s32(std::bit_cast<u32>(std::bit_cast<float>(r1_1)))) * std::bit_cast<float>(*global_001ca310);
    S0_1 = std::bit_cast<float>(*gptr<u32>(r0 + 0x40u));  // (from the original)
    S0_2 = S0_1 + -S0_1 * S1_1;
    *gptr<u32>(r0 + 0x24u) = u32(std::bit_cast<u32>(S0_2));  // (from the original)
    *gptr<u32>(r0 + 0x28u) = u32(std::bit_cast<u32>(S0_2));  // (from the original)
    *gptr<u32>(r0 + 0x2cu) = u32(std::bit_cast<u32>(S0_2));  // (from the original)
    r1_3 = r1_1 + 1u;
    *gptr<u32>(r0 + 0x38u) = u32(r1_3);  // (from the original)
    guest::cpu()->r[1] = r1_3;
    guest::cpu()->s[0] = S0_2;
    guest::cpu()->s[1] = S1_1;
    return 0u;
}

}  // namespace d_001ca2c0
GUEST_EXPORT(0x001ca2c0, d_001ca2c0::f_001ca2c0);

// f_001cb474: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001cb474 {

struct __attribute__((packed)) Object_001cb474_0 {
    u8 unknown_0[0x1a0];  // (not used here)
    u32 word_1a0;
};
GUEST_OFFSET(Object_001cb474_0, word_1a0, 0x1a0);  // (from the original)

inline constexpr guest::Function<0x00568984, u32(u32, u32, u32, u32)> call_00568984;  // (from the original)
inline constexpr guest::Function<0x00568c10, u32(u32, u32, u32, u32)> call_00568c10;  // (from the original)
inline constexpr guest::Function<0x00569544, u32(u32, u32, u32, u32)> call_00569544;  // (from the original)
inline constexpr guest::Function<0x0074fdd0, u32(u32, u32, u32, u32)> call_0074fdd0;  // (from the original)

u32 f_001cb474(gptr<Object_001cb474_0> arg0, u32 r1, u32 r2, u32 r3) {
    u32 r0 = arg0.addr();
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r1_2 = 0;
    u32 r2_2 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r1_3 = 0;
    u32 r2_3 = 0;
    u32 r3_2 = 0;
    u32 r0_5 = 0;
    u32 r1_4 = 0;
    guest::cpu()->r[13] -= 8u;
    r0_1 = arg0->word_1a0;
    if (r0_1 == 0) {
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        return 1u;
    }
    r0_2 = call_0074fdd0(r0_1, r1, r2, r3);
    r1_1 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    if (r0_2 != 0) {
        r1_2 = *gptr<u32>(r0 + 0x1a0u);  // (from the original)
        if (u32(*gptr<u8>(r1_2 + 0x1cu)) != 0) {  // (from the original)
            r2_2 = *gptr<u32>(r0 + 0x1a8u);  // (from the original)
            r0_3 = r0 + 4u;
            call_00568984(r0_3, r1_2, r2_2, 0u);
            r1_2 = guest::cpu()->r[1];
        }
        *gptr<u32>(r0 + 0x1a0u) = u32(0u);  // (from the original)
        *gptr<u32>(r0 + 0x1a8u) = u32(0u);  // (from the original)
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1_2;
        return 1u;
    }
    r0_4 = *gptr<u32>(r0 + 0x1a0u);  // (from the original)
    call_00569544(r0_4, r1_1, r2_1, r3_1);
    r1_3 = guest::cpu()->r[1];
    r2_3 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    r0_5 = r0 + 4u;
    call_00568c10(r0_5, r1_3, r2_3, r3_2);
    r1_4 = guest::cpu()->r[1];
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1_4;
    return 0u;
}

}  // namespace d_001cb474
GUEST_EXPORT(0x001cb474, d_001cb474::f_001cb474);

// f_001cb690: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001cb690 {

struct __attribute__((packed)) Object_001cb690_0 {
    u8 unknown_0[0x1ad];  // (not used here)
    u8 byte_1ad;
};
GUEST_OFFSET(Object_001cb690_0, byte_1ad, 0x1ad);  // (from the original)

inline constexpr guest::Function<0x001323bc, u32(u32, u32, u32, u32)> call_001323bc;  // (from the original)
inline constexpr guest::Function<0x00569e6c, u32(u32, u32, u32, u32)> call_00569e6c;  // (from the original)

u32 f_001cb690(gptr<Object_001cb690_0> arg0, u32 r1, u32 r2) {
    u32 r0 = arg0.addr();
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r1_1 = 0;
    u32 r0_3 = 0;
    u32 r1_2 = 0;
    guest::cpu()->r[13] -= 8u;
    r0_1 = u32(arg0->byte_1ad);
    if (r0_1 != 0) {
        r0_2 = call_001323bc(r0_1, r1, r2, guest::cpu()->r[3]);
        r1_1 = r0 + 4u;
        guest::cpu()->r[13] += 8u;
        return call_00569e6c(r0_2, r1_1, 0u, guest::cpu()->r[3]);
    }
    r0_3 = call_001323bc(r0_1, r1, r2, guest::cpu()->r[3]);
    r1_2 = r0 + 4u;
    guest::cpu()->r[13] += 8u;
    return call_00569e6c(r0_3, r1_2, 1u, guest::cpu()->r[3]);
}

}  // namespace d_001cb690
GUEST_EXPORT(0x001cb690, d_001cb690::f_001cb690);

// f_001cb78c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001cb78c {

inline constexpr guest::Function<0x001323b4, u32(u32, u32, u32, u32)> call_001323b4;  // (from the original)
inline constexpr guest::Function<0x001fa354, u32(u32, u32, u32, u32)> call_001fa354;  // (from the original)
inline constexpr guest::Function<0x006d1e64, u32(u32, u32, u32, u32)> call_006d1e64;  // (from the original)

u32 f_001cb78c(u32 r0) {
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    guest::cpu()->r[13] -= 8u;
    r0_1 = r0 + 4u;
    call_001323b4(r0_1, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    *gptr<u8>(r0 + 0x1acu) = u8(0u);  // (from the original)
    r0_2 = call_006d1e64(0u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    r0_3 = *gptr<u32>(r0_2 + 0x1f4u);  // (from the original)
    call_001fa354(r0_3, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    guest::cpu()->r[13] += 8u;
    return 1u;
}

}  // namespace d_001cb78c
GUEST_EXPORT(0x001cb78c, d_001cb78c::f_001cb78c);

// f_001cb7ec: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001cb7ec {

struct __attribute__((packed)) Object_001cb7ec_0 {
    u8 unknown_0[0x1a0];  // (not used here)
    u32 word_1a0;
    u8 unknown_1a4[0x4];  // (not used here)
    u32 word_1a8;
};
GUEST_OFFSET(Object_001cb7ec_0, word_1a0, 0x1a0);  // (from the original)
GUEST_OFFSET(Object_001cb7ec_0, word_1a8, 0x1a8);  // (from the original)

inline guest::global<u32, 0x001cb880> global_001cb880;  // (from the original)
inline constexpr guest::Function<0x00568630, u32(u32, u32, u32, u32)> call_00568630;  // (from the original)
inline constexpr guest::Function<0x00568984, u32(u32, u32, u32, u32)> call_00568984;  // (from the original)

u32 f_001cb7ec(gptr<Object_001cb7ec_0> arg0, u32 r1, float S0) {
    u32 r0 = arg0.addr();
    u32 r1_1 = 0;
    u32 zf_1 = 0;
    u32 r2_1 = 0;
    u32 r0_1 = 0;
    u32 r1_2 = 0;
    u32 r2_2 = 0;
    u32 r0_2 = 0;
    u32 r2_3 = 0;
    u32 r3_1 = 0;
    u32 r0_3 = 0;
    float S0_1 = 0;
    u32 r1_3 = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r1_1 = arg0->word_1a0;
    zf_1 = r1_1 == 0;
    if (!zf_1) {
        zf_1 = u32(*gptr<u8>(r1_1 + 0x1cu)) == 0;  // (from the original)
    }
    if (!zf_1) {
        r2_1 = arg0->word_1a8;
        r0_1 = r0 + 4u;
        guest::cpu()->s[0] = S0;
        call_00568984(r0_1, r1_1, r2_1, 0u);
        S0 = guest::cpu()->s[0];
    }
    if (r1 != 0) {
        if (r1 != 1u) {
            goto L_1cb854;
        }
    } else {
        *gptr<u32>(r0 + 0x1a8u) = u32(*gptr<u32>(r0 + 0x1a4u));  // (from the original)
        *gptr<u32>(r0 + 0x1a0u) = u32(r0 + 0x150u);  // (from the original)
        goto L_1cb854;
    }
    *gptr<u32>(r0 + 0x1a8u) = u32(*gptr<u32>(r0 + 0x1a4u));  // (from the original)
    *gptr<u32>(r0 + 0x1a0u) = u32(r0 + 0x178u);  // (from the original)
L_1cb854:;
    r1_2 = *gptr<u32>(r0 + 0x1a0u);  // (from the original)
    r2_2 = *gptr<u32>(r0 + 0x1a8u);  // (from the original)
    r0_2 = r0 + 4u;
    guest::cpu()->s[0] = S0;
    call_00568630(r0_2, r1_2, r2_2, 0u);
    r2_3 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    r0_3 = *gptr<u32>(r0 + 0x1a0u);  // (from the original)
    S0_1 = std::bit_cast<float>(*global_001cb880);
    r1_3 = *gptr<u32>(*gptr<u32>(r0_3) + 8u);
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->s[0] = S0_1;
    return guest::call_address<u32>(r1_3, r0_3, r1_3, r2_3, r3_1);
}

}  // namespace d_001cb7ec
GUEST_EXPORT(0x001cb7ec, d_001cb7ec::f_001cb7ec);

// f_001cb884: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001cb884 {

struct __attribute__((packed)) Object_001cb884_0 {
    u32 word_0;
};
GUEST_OFFSET(Object_001cb884_0, word_0, 0x0);  // (from the original)

inline constexpr guest::Function<0x00125aec, u32(u32, u32, u32, u32)> call_00125aec;  // (from the original)
inline constexpr guest::Function<0x00125e3c, u32(u32, u32, u32, u32)> call_00125e3c;  // (from the original)

u32 f_001cb884(gptr<Object_001cb884_0> arg0, u32 r1_unused, u32 r2) {
    u32 r0 = arg0.addr();
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r1_2 = 0;
    u32 r2_2 = 0;
    u32 r0_5 = 0;
    u32 r0_6 = 0;
    u32 r0_7 = 0;
    guest::cpu()->r[13] -= 8u;
    arg0->word_0 = u32(0x8ebb64u);  // (from the original)
    r0_1 = r0 + 4u;
    r0_2 = call_00125e3c(r0_1, 0x8ebb64u, r2, guest::cpu()->r[3]);  // (from the original)
    r1_1 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    r0_3 = r0_2 + 0x14cu;  // (from the original)
    r0_4 = call_00125aec(r0_3, r1_1, r2_1, guest::cpu()->r[3]);
    r1_2 = guest::cpu()->r[1];
    r2_2 = guest::cpu()->r[2];
    r0_5 = r0_4 + 0x28u;  // (from the original)
    r0_6 = call_00125aec(r0_5, r1_2, r2_2, guest::cpu()->r[3]);
    r0_7 = r0_6 - 0x178u;  // (from the original)
    *gptr<u32>(r0_7 + 0x1a0u) = u32(0u);  // (from the original)
    *gptr<u32>(r0_7 + 0x1a4u) = u32(0u);  // (from the original)
    *gptr<u32>(r0_7 + 0x1a8u) = u32(0u);  // (from the original)
    *gptr<u8>(r0_7 + 0x1acu) = u8(0u);  // (from the original)
    *gptr<u8>(r0_7 + 0x1adu) = u8(1u);  // (from the original)
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = 0u;
    return r0_7;
}

}  // namespace d_001cb884
GUEST_EXPORT(0x001cb884, d_001cb884::f_001cb884);

// f_001cb8fc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001cb8fc {

struct __attribute__((packed)) Object_001cb8fc_0 {
    u32 word_0;
};
GUEST_OFFSET(Object_001cb8fc_0, word_0, 0x0);  // (from the original)

inline constexpr guest::Function<0x0056988c, u32(u32, u32, u32, u32)> call_0056988c;  // (from the original)
inline constexpr guest::Function<0x005bf744, u32(u32, u32, u32, u32)> call_005bf744;  // (from the original)

u32 f_001cb8fc(gptr<Object_001cb8fc_0> arg0) {
    u32 r0 = arg0.addr();
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
    guest::cpu()->r[13] -= 8u;
    arg0->word_0 = u32(0x8ebb64u);  // (from the original)
    r0_1 = r0 + 0x178u;  // (from the original)
    r0_2 = call_0056988c(r0_1, 0x8ebb64u, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    r1_1 = guest::cpu()->r[1];
    r0_3 = r0_2 - 0x28u;  // (from the original)
    r0_4 = call_0056988c(r0_3, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_2 = guest::cpu()->r[1];
    r0_5 = r0_4 - 0x14cu;  // (from the original)
    r0_6 = call_005bf744(r0_5, r1_2, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_3 = guest::cpu()->r[1];
    r0_7 = r0_6 - 4u;
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1_3;
    return r0_7;
}

}  // namespace d_001cb8fc
GUEST_EXPORT(0x001cb8fc, d_001cb8fc::f_001cb8fc);

// f_001cbb20: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001cbb20 {

struct __attribute__((packed)) Object_001cbb20_0 {
    u8 unknown_0[0x18];  // (not used here)
    u32 word_18;
};
GUEST_OFFSET(Object_001cbb20_0, word_18, 0x18);  // (from the original)

inline constexpr guest::Function<0x0014ef20, u32(u32, u32, u32, u32)> call_0014ef20;  // (from the original)
inline constexpr guest::Function<0x004edd20, u32(u32, u32, u32, u32)> call_004edd20;  // (from the original)
inline constexpr guest::Function<0x004ee3e8, u32(u32, u32, u32, u32)> call_004ee3e8;  // (from the original)
inline constexpr guest::Function<0x004ee4c8, u32(u32, u32, u32, u32)> call_004ee4c8;  // (from the original)
inline constexpr guest::Function<0x00745f10, u32(u32, u32, u32, u32)> call_00745f10;  // (from the original)

u32 f_001cbb20(gptr<Object_001cbb20_0> arg0, u32 r1, u32 r2, float S0, float S1, float S2, float S3, float S4, float S5, float S6, float S7, float S8, float S9, float S10, float S11) {
    u32 r0 = arg0.addr();
    u32 r13 = guest::cpu()->r[13];
    u32 r1_1 = 0;
    u32 r0_1 = 0;
    u32 r1_2 = 0;
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
    u32 r0_2 = 0;
    float S0_3 = 0;
    u32 r0_3 = 0;
    u32 r2_1 = 0;
    u32 r2_2 = 0;
    float S0_4 = 0;
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
    u32 r2_3 = 0;
    float S0_5 = 0;
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
    u32 r1_5 = 0;
    u32 r2_4 = 0;
    float S0_6 = 0;
    float S1_5 = 0;
    float S2_4 = 0;
    float S3_4 = 0;
    float S4_4 = 0;
    float S5_4 = 0;
    float S6_4 = 0;
    float S7_4 = 0;
    float S8_4 = 0;
    float S9_4 = 0;
    float S10_4 = 0;
    float S11_4 = 0;
    u32 r0_4 = 0;
    u32 r1_6 = 0;
    float S0_7 = 0;
    float S1_6 = 0;
    r1_1 = arg0->word_18;
    r13 = r13 - 0x48u;  // (from the original)
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
    r0_1 = call_00745f10(r1, r1_1, r2, guest::cpu()->r[3]);
    r1_2 = guest::cpu()->r[1];
    S0_1 = guest::cpu()->s[0];
    S1_1 = guest::cpu()->s[1];
    if (r0_1 == 0) {
        r13 = r13 + 0x48u;  // (from the original)
        guest::cpu()->r[1] = r1_2;
        guest::cpu()->r[13] = r13;
        guest::cpu()->s[0] = S0_1;
        guest::cpu()->s[1] = S1_1;
        return r0_1;
    }
    S0_2 = std::bit_cast<float>(*gptr<u32>(r0_1));
    S1_2 = std::bit_cast<float>(*gptr<u32>(r0_1 + 4));
    S2_1 = std::bit_cast<float>(*gptr<u32>(r0_1 + 8));
    S3_1 = std::bit_cast<float>(*gptr<u32>(r0_1 + 0xc));  // (from the original)
    S4_1 = std::bit_cast<float>(*gptr<u32>(r0_1 + 0x10));  // (from the original)
    S5_1 = std::bit_cast<float>(*gptr<u32>(r0_1 + 0x14));  // (from the original)
    S6_1 = std::bit_cast<float>(*gptr<u32>(r0_1 + 0x18));  // (from the original)
    S7_1 = std::bit_cast<float>(*gptr<u32>(r0_1 + 0x1c));  // (from the original)
    S8_1 = std::bit_cast<float>(*gptr<u32>(r0_1 + 0x20));  // (from the original)
    S9_1 = std::bit_cast<float>(*gptr<u32>(r0_1 + 0x24));  // (from the original)
    S10_1 = std::bit_cast<float>(*gptr<u32>(r0_1 + 0x28));  // (from the original)
    S11_1 = std::bit_cast<float>(*gptr<u32>(r0_1 + 0x2c));  // (from the original)
    r0_2 = r13 + 0x30u;  // (from the original)
    *gptr<u32>(r13) = u32(std::bit_cast<u32>(S0_2));
    *gptr<u32>(r13 + 4) = u32(std::bit_cast<u32>(S1_2));
    *gptr<u32>(r13 + 8) = u32(std::bit_cast<u32>(S2_1));
    *gptr<u32>(r13 + 0xc) = u32(std::bit_cast<u32>(S3_1));  // (from the original)
    *gptr<u32>(r13 + 0x10) = u32(std::bit_cast<u32>(S4_1));  // (from the original)
    *gptr<u32>(r13 + 0x14) = u32(std::bit_cast<u32>(S5_1));  // (from the original)
    *gptr<u32>(r13 + 0x18) = u32(std::bit_cast<u32>(S6_1));  // (from the original)
    *gptr<u32>(r13 + 0x1c) = u32(std::bit_cast<u32>(S7_1));  // (from the original)
    *gptr<u32>(r13 + 0x20) = u32(std::bit_cast<u32>(S8_1));  // (from the original)
    *gptr<u32>(r13 + 0x24) = u32(std::bit_cast<u32>(S9_1));  // (from the original)
    *gptr<u32>(r13 + 0x28) = u32(std::bit_cast<u32>(S10_1));  // (from the original)
    *gptr<u32>(r13 + 0x2c) = u32(std::bit_cast<u32>(S11_1));  // (from the original)
    S0_3 = std::bit_cast<float>(*gptr<u32>(r0 + 0x4cu));  // (from the original)
    *gptr<u32>(r0_2) = u32(std::bit_cast<u32>(S0_3));
    *gptr<u32>(r0_2 + 4) = u32(std::bit_cast<u32>(S0_3));
    *gptr<u32>(r0_2 + 8) = u32(std::bit_cast<u32>(S0_3));
    r0_3 = r13;
    r2_1 = r0 + 0x1cu;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_3;
    guest::cpu()->s[1] = S0_3;
    guest::cpu()->s[2] = S0_3;
    guest::cpu()->s[3] = S3_1;
    guest::cpu()->s[4] = S4_1;
    guest::cpu()->s[5] = S5_1;
    guest::cpu()->s[6] = S6_1;
    guest::cpu()->s[7] = S7_1;
    guest::cpu()->s[8] = S8_1;
    guest::cpu()->s[9] = S9_1;
    guest::cpu()->s[10] = S10_1;
    guest::cpu()->s[11] = S11_1;
    call_0014ef20(r0_3, r0_3, r2_1, guest::cpu()->r[3]);
    r2_2 = guest::cpu()->r[2];
    S0_4 = guest::cpu()->s[0];
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
    r1_3 = r13;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_4;
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
    call_004ee4c8(r0, r1_3, r2_2, guest::cpu()->r[3]);
    r2_3 = guest::cpu()->r[2];
    S0_5 = guest::cpu()->s[0];
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
    r1_4 = r13 + 0x30u;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_5;
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
    call_004ee3e8(r0, r1_4, r2_3, guest::cpu()->r[3]);
    r1_5 = guest::cpu()->r[1];
    r2_4 = guest::cpu()->r[2];
    S0_6 = guest::cpu()->s[0];
    S1_5 = guest::cpu()->s[1];
    S2_4 = guest::cpu()->s[2];
    S3_4 = guest::cpu()->s[3];
    S4_4 = guest::cpu()->s[4];
    S5_4 = guest::cpu()->s[5];
    S6_4 = guest::cpu()->s[6];
    S7_4 = guest::cpu()->s[7];
    S8_4 = guest::cpu()->s[8];
    S9_4 = guest::cpu()->s[9];
    S10_4 = guest::cpu()->s[10];
    S11_4 = guest::cpu()->s[11];
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_6;
    guest::cpu()->s[1] = S1_5;
    guest::cpu()->s[2] = S2_4;
    guest::cpu()->s[3] = S3_4;
    guest::cpu()->s[4] = S4_4;
    guest::cpu()->s[5] = S5_4;
    guest::cpu()->s[6] = S6_4;
    guest::cpu()->s[7] = S7_4;
    guest::cpu()->s[8] = S8_4;
    guest::cpu()->s[9] = S9_4;
    guest::cpu()->s[10] = S10_4;
    guest::cpu()->s[11] = S11_4;
    r0_4 = call_004edd20(r0, r1_5, r2_4, guest::cpu()->r[3]);
    r1_6 = guest::cpu()->r[1];
    S0_7 = guest::cpu()->s[0];
    S1_6 = guest::cpu()->s[1];
    r13 = r13 + 0x48u;  // (from the original)
    guest::cpu()->r[1] = r1_6;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_7;
    guest::cpu()->s[1] = S1_6;
    return r0_4;
}

}  // namespace d_001cbb20
GUEST_EXPORT(0x001cbb20, d_001cbb20::f_001cbb20);

// f_001ccb14: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001ccb14 {

inline constexpr guest::Function<0x002134a0, u32(u32, u32, u32, u32)> call_002134a0;  // (from the original)
inline constexpr guest::Function<0x00301d0d, u32(u32, u32, u32, u32)> call_00301d0c;  // (from the original)
inline constexpr guest::Function<0x00810f00, u32(u32, u32, u32, u32)> call_00810f00;  // (from the original)

u32 f_001ccb14(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r0_4 = 0;
    u32 r1_1 = 0;
    u32 r0_5 = 0;
    u32 r0_6 = 0;
    u32 r0_7 = 0;
    u32 r0_8 = 0;
    u32 r2_2 = 0;
    u32 r3_2 = 0;
    u32 r1_2 = 0;
    u32 r0_9 = 0;
    u32 r0_10 = 0;
    u32 r0_11 = 0;
    u32 r0_12 = 0;
    u32 r2_3 = 0;
    u32 r3_3 = 0;
    u32 r1_3 = 0;
    u32 r0_13 = 0;
    u32 r0_14 = 0;
    u32 r0_15 = 0;
    u32 r0_16 = 0;
    u32 r2_4 = 0;
    u32 r3_4 = 0;
    u32 r1_4 = 0;
    u32 r0_17 = 0;
    u32 r0_18 = 0;
    u32 r0_19 = 0;
    u32 r0_20 = 0;
    u32 r2_5 = 0;
    u32 r3_5 = 0;
    u32 r1_5 = 0;
    u32 r0_21 = 0;
    u32 r0_22 = 0;
    u32 r1_6 = 0;
    u32 r2_6 = 0;
    u32 r3_6 = 0;
    u32 r0_23 = 0;
    u32 r0_24 = 0;
    u32 r1_7 = 0;
    u32 r2_7 = 0;
    u32 r3_7 = 0;
    u32 r0_25 = 0;
    u32 r0_26 = 0;
    u32 r1_8 = 0;
    u32 r2_8 = 0;
    u32 r3_8 = 0;
    u32 r0_27 = 0;
    u32 r0_28 = 0;
    u32 r1_9 = 0;
    u32 r2_9 = 0;
    u32 r3_9 = 0;
    u32 r0_29 = 0;
    u32 r0_30 = 0;
    u32 r1_10 = 0;
    u32 r2_10 = 0;
    u32 r3_10 = 0;
    u32 r0_31 = 0;
    u32 r0_32 = 0;
    u32 r1_11 = 0;
    u32 r0_33 = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r0_1 = call_002134a0(r0, r1, r2, r3);
    *gptr<u32>(r0_1) = u32(0x8f9060u);  // (from the original)
    r0_2 = r0_1 + 0xcu;  // (from the original)
    r0_3 = call_00301d0c(r0_2, 0x334e10u, 0x14u, 0xau);  // (from the original)
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    r0_4 = r0_3 - 0xcu;  // (from the original)
    r1_1 = r0_4 + 0xd4u;  // (from the original)
    *gptr<u16>(r0_4 + 0xd4u) = u16(0u);  // (from the original)
    r0_5 = r0_4 + 0xd8u;  // (from the original)
    r0_6 = call_002134a0(r0_5, r1_1, r2_1, r3_1);
    *gptr<u32>(r0_6) = u32(0x8f9060u);  // (from the original)
    r0_7 = r0_6 + 0xcu;  // (from the original)
    r0_8 = call_00301d0c(r0_7, 0x334e10u, 0x14u, 0xau);  // (from the original)
    r2_2 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    r1_2 = r0_8 - 0xcu;  // (from the original)
    *gptr<u16>(r0_8 + 0xc8u) = u16(0u);  // (from the original)
    r0_9 = r1_2 + 0xd8u;  // (from the original)
    r0_10 = call_002134a0(r0_9, r1_2, r2_2, r3_2);
    *gptr<u32>(r0_10) = u32(0x8f8ef8u);  // (from the original)
    r0_11 = r0_10 + 0xcu;  // (from the original)
    r0_12 = call_00301d0c(r0_11, 0x1cdbc4u, 0x260u, 0xau);  // (from the original)
    r2_3 = guest::cpu()->r[2];
    r3_3 = guest::cpu()->r[3];
    r1_3 = r0_12 - 0xcu;  // (from the original)
    *gptr<u16>(r0_12 + 0x17c0u) = u16(0u);  // (from the original)
    r0_13 = r1_3 + 0x17d0u;  // (from the original)
    r0_14 = call_002134a0(r0_13, r1_3, r2_3, r3_3);
    *gptr<u32>(r0_14) = u32(0x8f91a0u);  // (from the original)
    r0_15 = r0_14 + 0xcu;  // (from the original)
    r0_16 = call_00301d0c(r0_15, 0x6c32f8u, 0x8a8u, 0xau);  // (from the original)
    r2_4 = guest::cpu()->r[2];
    r3_4 = guest::cpu()->r[3];
    r1_4 = r0_16 - 0xcu;  // (from the original)
    *gptr<u16>(r0_16 + 0x5690u) = u16(0u);  // (from the original)
    r0_17 = r1_4 + 0x56a0u;  // (from the original)
    r0_18 = call_002134a0(r0_17, r1_4, r2_4, r3_4);
    *gptr<u32>(r0_18) = u32(0x8f90d8u);  // (from the original)
    r0_19 = r0_18 + 0xcu;  // (from the original)
    r0_20 = call_00301d0c(r0_19, 0x7f3f98u, 0x14u, 0xau);  // (from the original)
    r2_5 = guest::cpu()->r[2];
    r3_5 = guest::cpu()->r[3];
    r1_5 = r0_20 - 0xcu;  // (from the original)
    *gptr<u16>(r0_20 + 0xc8u) = u16(0u);  // (from the original)
    r0_21 = r1_5 + 0xdcu;  // (from the original)
    *gptr<u32>(r1_5 + 0xd8u) = u32(0u);  // (from the original)
    r0_22 = call_00810f00(r0_21, r1_5, r2_5, r3_5);
    r1_6 = guest::cpu()->r[1];
    r2_6 = guest::cpu()->r[2];
    r3_6 = guest::cpu()->r[3];
    r0_23 = r0_22 + 0x2cu;  // (from the original)
    r0_24 = call_00810f00(r0_23, r1_6, r2_6, r3_6);
    r1_7 = guest::cpu()->r[1];
    r2_7 = guest::cpu()->r[2];
    r3_7 = guest::cpu()->r[3];
    r0_25 = r0_24 + 0x2cu;  // (from the original)
    r0_26 = call_00810f00(r0_25, r1_7, r2_7, r3_7);
    r1_8 = guest::cpu()->r[1];
    r2_8 = guest::cpu()->r[2];
    r3_8 = guest::cpu()->r[3];
    r0_27 = r0_26 + 0x2cu;  // (from the original)
    r0_28 = call_00810f00(r0_27, r1_8, r2_8, r3_8);
    r1_9 = guest::cpu()->r[1];
    r2_9 = guest::cpu()->r[2];
    r3_9 = guest::cpu()->r[3];
    r0_29 = r0_28 + 0x2cu;  // (from the original)
    r0_30 = call_00810f00(r0_29, r1_9, r2_9, r3_9);
    r1_10 = guest::cpu()->r[1];
    r2_10 = guest::cpu()->r[2];
    r3_10 = guest::cpu()->r[3];
    r0_31 = r0_30 + 0x2cu;  // (from the original)
    r0_32 = call_00810f00(r0_31, r1_10, r2_10, r3_10);
    r1_11 = guest::cpu()->r[1];
    r0_33 = r0_32 - 0x71d8u;  // (from the original)
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1_11;
    return r0_33;
}

}  // namespace d_001ccb14
GUEST_EXPORT(0x001ccb14, d_001ccb14::f_001ccb14);

// f_001cce78: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001cce78 {

inline constexpr guest::Function<0x001ccc58, u32(u32, u32, u32, u32)> call_001ccc58;  // (from the original)

u32 f_001cce78(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 ea_1 = 0;
    u32 r0_2 = 0;
    u32 r1_2 = 0;
    u32 r1_3 = 0;
    u32 r1_4 = 0;
    *gptr<u32>(r13 + 0xfffffff0u) = u32(r3);  // (from the original)
    r13 = r13 - 0x10;  // (from the original)
    *gptr<u32>(r13) = u32(*gptr<u32>(r13 + 0x10u));  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_1 = call_001ccc58(r0, 5u, r1, r3);
    r1_1 = guest::cpu()->r[1];
    if (r0_1 == 0) {
        r13 = r13 + 0x10;  // (from the original)
        guest::cpu()->r[1] = r1_1;
        guest::cpu()->r[13] = r13;
        return r0_1;
    }
    ea_1 = r0 + 8u;
    r0_2 = *gptr<u32>(ea_1);
    r1_2 = u32(u64(s64(s32(0x66666667u)) * s32(*gptr<u32>(ea_1 + 4) - r0_2)) >> 0x20);  // (from the original)
    r1_3 = u32(s32(r1_2) >> 4) - u32(s32(r1_2) >> 0x1f);  // (from the original)
    r1_4 = ~0x27u + (r1_3 + (r1_3 << 2) << 3);  // (from the original)
    *gptr<u32>(r0_2 + r1_4 + 4u) = u32(r2);
    r13 = r13 + 0x10;  // (from the original)
    guest::cpu()->r[1] = r1_4;
    guest::cpu()->r[13] = r13;
    return 1u;
}

}  // namespace d_001cce78
GUEST_EXPORT(0x001cce78, d_001cce78::f_001cce78);

// f_001ccee0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001ccee0 {

inline constexpr guest::Function<0x001ccc58, u32(u32, u32, u32, u32)> call_001ccc58;  // (from the original)

u32 f_001ccee0(u32 r0, u32 r1, u32 r2, u32 r3, float S0, float S1) {
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    float S0_1 = 0;
    float S1_1 = 0;
    u32 ea_1 = 0;
    u32 r0_2 = 0;
    float S1_2 = 0;
    float S0_2 = 0;
    u32 r1_2 = 0;
    u32 r2_1 = 0;
    u32 r1_3 = 0;
    u32 r0_3 = 0;
    *gptr<u32>(r13 + 0xfffffff0u) = u32(r3);  // (from the original)
    r13 = r13 - 0x10;  // (from the original)
    *gptr<u32>(r13) = u32(*gptr<u32>(r13 + 0x10u));  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    r0_1 = call_001ccc58(r0, 2u, r1, r3);
    r1_1 = guest::cpu()->r[1];
    S0_1 = guest::cpu()->s[0];
    S1_1 = guest::cpu()->s[1];
    if (r0_1 == 0) {
        r13 = r13 + 0x10;  // (from the original)
        guest::cpu()->r[1] = r1_1;
        guest::cpu()->r[13] = r13;
        guest::cpu()->s[0] = S0_1;
        guest::cpu()->s[1] = S1_1;
        return r0_1;
    }
    ea_1 = r0 + 8u;
    r0_2 = *gptr<u32>(ea_1);
    S1_2 = std::bit_cast<float>(*gptr<u32>(r2));
    S0_2 = std::bit_cast<float>(*gptr<u32>(r2 + 8u));
    r1_2 = u32(u64(s64(s32(0x66666667u)) * s32(*gptr<u32>(ea_1 + 4) - r0_2)) >> 0x20);  // (from the original)
    r2_1 = u32(s32(r1_2) >> 4) - u32(s32(r1_2) >> 0x1f);  // (from the original)
    r1_3 = *gptr<u32>(r2 + 4u);
    r0_3 = r0_2 + (~0x27u + (r2_1 + (r2_1 << 2) << 3)) + 0x10u;  // (from the original)
    *gptr<u32>(r0_3) = u32(std::bit_cast<u32>(S1_2));
    *gptr<u32>(r0_3 + 4u) = u32(r1_3);
    *gptr<u32>(r0_3 + 8u) = u32(std::bit_cast<u32>(S0_2));
    r13 = r13 + 0x10;  // (from the original)
    guest::cpu()->r[1] = r1_3;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_2;
    guest::cpu()->s[1] = S1_2;
    return 1u;
}

}  // namespace d_001ccee0
GUEST_EXPORT(0x001ccee0, d_001ccee0::f_001ccee0);

// f_001cd538: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001cd538 {

inline guest::global<u16, 0x00868474> global_00868474;  // (from the original)
inline constexpr guest::Function<0x001ccc58, u32(u32, u32, u32, u32)> call_001ccc58;  // (from the original)

u32 f_001cd538(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r13 = guest::cpu()->r[13];
    u32 r3_1 = 0;
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 ea_1 = 0;
    u32 r2_1 = 0;
    u32 r1_2 = 0;
    u32 r3_2 = 0;
    u32 r3_3 = 0;
    u32 ea_2 = 0;
    u32 ea_3 = 0;
    u32 r2_2 = 0;
    u32 r3_4 = 0;
    u32 r3_5 = 0;
    u32 ea_4 = 0;
    u32 ea_5 = 0;
    u32 r2_3 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    *gptr<u32>(r13 + 0xffffffecu) = u32(r3);  // (from the original)
    r13 = r13 - 0x14;  // (from the original)
    *gptr<u32>(r13) = u32(u32(s32(s16(*global_00868474))));
    r3_1 = u32(s32(s16(*global_00868474)));
    guest::cpu()->r[13] = r13;
    r0_1 = call_001ccc58(r0, 4u, r1, r3_1);
    r1_1 = guest::cpu()->r[1];
    if (r0_1 != 0) {
        ea_1 = r0 + 8u;
        r2_1 = *gptr<u32>(ea_1);
        r1_2 = ~0x27u;  // (from the original)
        r3_2 = u32(u64(s64(s32(0x66666667u)) * s32(*gptr<u32>(ea_1 + 4) - r2_1)) >> 0x20);  // (from the original)
        r3_3 = u32(s32(r3_2) >> 4) - u32(s32(r3_2) >> 0x1f);  // (from the original)
        ea_2 = r2_1 + (r1_2 + (r3_3 + (r3_3 << 2) << 3)) + 0x20u;  // (from the original)
        *gptr<u16>(ea_2) = u16(r2);
        ea_3 = r0 + 8u;
        r2_2 = *gptr<u32>(ea_3);
        r3_4 = u32(u64(s64(s32(0x66666667u)) * s32(*gptr<u32>(ea_3 + 4) - r2_2)) >> 0x20);  // (from the original)
        r3_5 = u32(s32(r3_4) >> 4) - u32(s32(r3_4) >> 0x1f);  // (from the original)
        ea_4 = r2_2 + (r1_2 + (r3_5 + (r3_5 << 2) << 3)) + 0x1eu;  // (from the original)
        *gptr<u16>(ea_4) = u16(r3);
        ea_5 = r0 + 8u;
        r2_3 = *gptr<u32>(ea_5);
        r0_2 = u32(u64(s64(s32(0x66666667u)) * s32(*gptr<u32>(ea_5 + 4) - r2_3)) >> 0x20);  // (from the original)
        r0_3 = u32(s32(r0_2) >> 4) - u32(s32(r0_2) >> 0x1f);  // (from the original)
        r0_4 = r1_2 + (r0_3 + (r0_3 << 2) << 3) + r2_3;
        r1_1 = 0u;
        *gptr<u16>(r0_4 + 0x1cu) = u16(r1_1);  // (from the original)
        r0_1 = 1u;
    }
    r13 = r13 + 0x14;  // (from the original)
    guest::cpu()->r[1] = r1_1;
    guest::cpu()->r[13] = r13;
    return r0_1;
}

}  // namespace d_001cd538
GUEST_EXPORT(0x001cd538, d_001cd538::f_001cd538);

// f_001cd668: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001cd668 {

inline guest::global<u16, 0x00868474> global_00868474;  // (from the original)
inline constexpr guest::Function<0x001ccc58, u32(u32, u32, u32, u32)> call_001ccc58;  // (from the original)

u32 f_001cd668(u32 r0_unused, u32 r1, u32 r2_unused, u32 r3) {
    u32 r13 = guest::cpu()->r[13];
    u32 r3_1 = 0;
    u32 r1_1 = 0;
    *gptr<u32>(r13 + 0xfffffff8u) = u32(r3);  // (from the original)
    r13 = r13 - 8;
    *gptr<u32>(r13) = u32(u32(s32(s16(*global_00868474))));
    r3_1 = u32(s32(s16(*global_00868474)));
    guest::cpu()->r[13] = r13;
    call_001ccc58(guest::cpu()->r[0], 0u, r1, r3_1);
    r1_1 = guest::cpu()->r[1];
    r13 = r13 + 8;
    guest::cpu()->r[1] = r1_1;
    guest::cpu()->r[13] = r13;
    return guest::cpu()->r[0];
}

}  // namespace d_001cd668
GUEST_EXPORT(0x001cd668, d_001cd668::f_001cd668);

// f_001cd690: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001cd690 {

inline guest::global<u16, 0x00868474> global_00868474;  // (from the original)
inline constexpr guest::Function<0x001ccc58, u32(u32, u32, u32, u32)> call_001ccc58;  // (from the original)

u32 f_001cd690(u32 r0_unused, u32 r1, u32 r2_unused, u32 r3) {
    u32 r13 = guest::cpu()->r[13];
    u32 r3_1 = 0;
    u32 r1_1 = 0;
    *gptr<u32>(r13 + 0xfffffff8u) = u32(r3);  // (from the original)
    r13 = r13 - 8;
    *gptr<u32>(r13) = u32(u32(s32(s16(*global_00868474))));
    r3_1 = u32(s32(s16(*global_00868474)));
    guest::cpu()->r[13] = r13;
    call_001ccc58(guest::cpu()->r[0], 1u, r1, r3_1);
    r1_1 = guest::cpu()->r[1];
    r13 = r13 + 8;
    guest::cpu()->r[1] = r1_1;
    guest::cpu()->r[13] = r13;
    return guest::cpu()->r[0];
}

}  // namespace d_001cd690
GUEST_EXPORT(0x001cd690, d_001cd690::f_001cd690);

// f_001cd6b8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001cd6b8 {

inline constexpr guest::Function<0x001ccc58, u32(u32, u32, u32, u32)> call_001ccc58;  // (from the original)

u32 f_001cd6b8(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 ea_1 = 0;
    u32 r2_1 = 0;
    u32 r1_2 = 0;
    u32 r3_1 = 0;
    u32 r3_2 = 0;
    u32 ea_2 = 0;
    u32 ea_3 = 0;
    u32 r2_2 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    *gptr<u32>(r13 + 0xfffffff0u) = u32(r3);  // (from the original)
    r13 = r13 - 0x10;  // (from the original)
    *gptr<u32>(r13) = u32(*gptr<u32>(r13 + 0x10u));  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_1 = call_001ccc58(r0, 3u, r1, r3);
    r1_1 = guest::cpu()->r[1];
    if (r0_1 == 0) {
        r13 = r13 + 0x10;  // (from the original)
        guest::cpu()->r[1] = r1_1;
        guest::cpu()->r[13] = r13;
        return r0_1;
    }
    ea_1 = r0 + 8u;
    r2_1 = *gptr<u32>(ea_1);
    r1_2 = ~0x27u;  // (from the original)
    r3_1 = u32(u64(s64(s32(0x66666667u)) * s32(*gptr<u32>(ea_1 + 4) - r2_1)) >> 0x20);  // (from the original)
    r3_2 = u32(s32(r3_1) >> 4) - u32(s32(r3_1) >> 0x1f);  // (from the original)
    ea_2 = r2_1 + (r1_2 + (r3_2 + (r3_2 << 2) << 3)) + 2u;
    *gptr<u8>(ea_2) = u8(r2);
    ea_3 = r0 + 8u;
    r2_2 = *gptr<u32>(ea_3);
    r0_2 = u32(u64(s64(s32(0x66666667u)) * s32(*gptr<u32>(ea_3 + 4) - r2_2)) >> 0x20);  // (from the original)
    r0_3 = u32(s32(r0_2) >> 4) - u32(s32(r0_2) >> 0x1f);  // (from the original)
    r0_4 = r1_2 + (r0_3 + (r0_3 << 2) << 3) + r2_2;
    *gptr<u16>(r0_4 + 0x1cu) = u16(0u);  // (from the original)
    r13 = r13 + 0x10;  // (from the original)
    guest::cpu()->r[1] = 0u;
    guest::cpu()->r[13] = r13;
    return 1u;
}

}  // namespace d_001cd6b8
GUEST_EXPORT(0x001cd6b8, d_001cd6b8::f_001cd6b8);

// f_001cd744: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001cd744 {

struct __attribute__((packed)) Object_001cd744_0 {
    u8 unknown_0[0x8];  // (not used here)
    u32 word_8;
    u32 word_c;
    u32 word_10;
};
GUEST_OFFSET(Object_001cd744_0, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Object_001cd744_0, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Object_001cd744_0, word_10, 0x10);  // (from the original)


void f_001cd744(gptr<Object_001cd744_0> arg0) {
    u32 r3_1 = 0;
    u32 r2_1 = 0;
    u32 r1_1 = 0;
    u32 r1_2 = 0;
    u32 r1_3 = 0;
    u32 r1_4 = 0;
    guest::cpu()->r[13] -= 4u;
    r3_1 = arg0->word_8;
    r2_1 = arg0->word_c;
    r1_1 = u32(u64(s64(s32(0x66666667u)) * s32(r2_1 - r3_1)) >> 0x20);  // (from the original)
    r1_2 = u32(s32(r1_1) >> 4) - u32(s32(r1_1) >> 0x1f);  // (from the original)
    if (r1_2 == arg0->word_10) {
        guest::cpu()->r[13] += 4u;
        guest::cpu()->r[1] = r1_2;
        return;
    }
    r1_3 = ~0x27u + (r1_2 + (r1_2 << 2) << 3) + r3_1;  // (from the original)
    if (r2_1 != 0) {
        *gptr<u8>(r2_1) = u8(u32(*gptr<u8>(r1_3)));
        *gptr<u8>(r2_1 + 1u) = u8(u32(*gptr<u8>(r1_3 + 1u)));
        *gptr<u8>(r2_1 + 2u) = u8(u32(*gptr<u8>(r1_3 + 2u)));
        *gptr<u32>(r2_1 + 4u) = u32(*gptr<u32>(r1_3 + 4u));
        *gptr<u32>(r2_1 + 8u) = u32(*gptr<u32>(r1_3 + 8u));
        *gptr<u32>(r2_1 + 0xcu) = u32(*gptr<u32>(r1_3 + 0xcu));  // (from the original)
        *gptr<u32>(r2_1 + 0x10u) = u32(*gptr<u32>(r1_3 + 0x10u));  // (from the original)
        *gptr<u32>(r2_1 + 0x14u) = u32(*gptr<u32>(r1_3 + 0x14u));  // (from the original)
        *gptr<u32>(r2_1 + 0x18u) = u32(*gptr<u32>(r1_3 + 0x18u));  // (from the original)
        *gptr<u16>(r2_1 + 0x1cu) = u16(u32(*gptr<u16>(r1_3 + 0x1cu)));  // (from the original)
        *gptr<u16>(r2_1 + 0x1eu) = u16(u32(*gptr<u16>(r1_3 + 0x1eu)));  // (from the original)
        *gptr<u16>(r2_1 + 0x20u) = u16(u32(*gptr<u16>(r1_3 + 0x20u)));  // (from the original)
        *gptr<u16>(r2_1 + 0x22u) = u16(u32(*gptr<u16>(r1_3 + 0x22u)));  // (from the original)
        *gptr<u16>(r2_1 + 0x24u) = u16(u32(*gptr<u16>(r1_3 + 0x24u)));  // (from the original)
    }
    r1_4 = arg0->word_c + 0x28u;  // (from the original)
    arg0->word_c = u32(r1_4);
    guest::cpu()->r[13] += 4u;
    guest::cpu()->r[1] = r1_4;
    return;
}

}  // namespace d_001cd744
GUEST_EXPORT(0x001cd744, d_001cd744::f_001cd744);

// f_001cd810: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001cd810 {

struct __attribute__((packed)) Object_001cd810_0 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
};
GUEST_OFFSET(Object_001cd810_0, word_4, 0x4);  // (from the original)


u32 f_001cd810(gptr<Object_001cd810_0> arg0, u32 r1) {
    arg0->word_4 = u32(r1);
    return 1u;
}

}  // namespace d_001cd810
GUEST_EXPORT(0x001cd810, d_001cd810::f_001cd810);

// f_001cd81c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001cd81c {

struct __attribute__((packed)) Object_001cd81c_0 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
    u32 word_8;
    u32 word_c;
};
GUEST_OFFSET(Object_001cd81c_0, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_001cd81c_0, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Object_001cd81c_0, word_c, 0xc);  // (from the original)


u32 f_001cd81c(gptr<Object_001cd81c_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r1_1 = 0;
    u32 r3_1 = 0;
    u32 r1_2 = 0;
    u32 r2_1 = 0;
    u32 r2_2 = 0;
    u32 ea_1 = 0;
    u32 r1_3 = 0;
    u32 r2_3 = 0;
    u32 r0_1 = 0;
    u32 r2_4 = 0;
    u32 r1_4 = 0;
    r1_1 = arg0->word_4;
    r3_1 = ~0x27u;  // (from the original)
    *gptr<u32>(*gptr<u32>(r1_1 + 0x68u) + 0x58u) = u32(*gptr<u32>(r1_1 + 0x828u));  // (from the original)
    r1_2 = arg0->word_8;
    r2_1 = u32(u64(s64(s32(0x66666667u)) * s32(arg0->word_c - r1_2)) >> 0x20);  // (from the original)
    r2_2 = u32(s32(r2_1) >> 4) - u32(s32(r2_1) >> 0x1f);  // (from the original)
    ea_1 = 0x881128u + (u32(*gptr<u8>(r3_1 + (r2_2 + (r2_2 << 2) << 3) + r1_2)) << 3);  // (from the original)
    r1_3 = *gptr<u32>(ea_1);
    r2_3 = *gptr<u32>(ea_1 + 4);
    r0_1 = r0 + u32(s32(r2_3) >> 1);
    if ((r2_3 & 1u) == 0) {
        return guest::call_address<u32>(r1_3, r0_1, r1_3, r2_3, r3_1);
    }
    r2_4 = *gptr<u32>(r0_1);
    r1_4 = *gptr<u32>(r2_4 + r1_3);
    return guest::call_address<u32>(r1_4, r0_1, r1_4, r2_4, r3_1);
}

}  // namespace d_001cd81c
GUEST_EXPORT(0x001cd81c, d_001cd81c::f_001cd81c);

// f_001cd888: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001cd888 {

struct __attribute__((packed)) Object_001cd888_0 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u8 unknown_14[0x78];  // (not used here)
    u8 byte_8c;
};
GUEST_OFFSET(Object_001cd888_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_001cd888_0, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_001cd888_0, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Object_001cd888_0, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Object_001cd888_0, word_10, 0x10);  // (from the original)
GUEST_OFFSET(Object_001cd888_0, byte_8c, 0x8c);  // (from the original)

inline guest::global<u32, 0x001cd920> global_001cd920;  // (from the original)
inline guest::global<u16, 0x00868474> global_00868474;  // (from the original)
inline guest::global<u16, 0x00868476> global_00868476;  // (from the original)

void f_001cd888(gptr<Object_001cd888_0> arg0, float S0) {
    u32 r0 = arg0.addr();
    u32 r3_1 = 0;
    u32 r1_1 = 0;
    u32 r1_2 = 0;
    float S0_1 = 0;
    u32 r1_3 = 0;
    r3_1 = r0 + 0x14u;  // (from the original)
    arg0->word_0 = u32(0x8ebc0cu);  // (from the original)
    arg0->word_4 = u32(0u);
    arg0->word_8 = u32(r3_1);
    arg0->word_c = u32(r3_1);
    arg0->word_10 = u32(3u);
    arg0->byte_8c = u8(0u);
    r1_1 = arg0->word_c;
    if (r1_1 == 0) {
        r1_2 = arg0->word_c + 0x28u;  // (from the original)
        arg0->word_c = u32(r1_2);
        guest::cpu()->r[1] = r1_2;
        guest::cpu()->s[0] = S0;
        return;
    }
    *gptr<u8>(r1_1) = u8(0u);
    *gptr<u8>(r1_1 + 1u) = u8(0u);
    *gptr<u16>(r1_1 + 0x1cu) = u16(0u);  // (from the original)
    *gptr<u16>(r1_1 + 0x1eu) = u16(0x200u);  // (from the original)
    *gptr<u16>(r1_1 + 0x20u) = u16(0u);  // (from the original)
    *gptr<u8>(r1_1 + 2u) = u8(4u);
    *gptr<u32>(r1_1 + 4u) = u32(0u);
    *gptr<u32>(r1_1 + 8u) = u32(0u);
    S0_1 = std::bit_cast<float>(*global_001cd920);
    *gptr<u32>(r1_1 + 0xcu) = u32(0u);  // (from the original)
    *gptr<u32>(r1_1 + 0x10u) = u32(std::bit_cast<u32>(S0_1));  // (from the original)
    *gptr<u32>(r1_1 + 0x14u) = u32(std::bit_cast<u32>(S0_1));  // (from the original)
    *gptr<u32>(r1_1 + 0x18u) = u32(std::bit_cast<u32>(S0_1));  // (from the original)
    *gptr<u16>(r1_1 + 0x22u) = u16(u32(*global_00868474));  // (from the original)
    *gptr<u16>(r1_1 + 0x24u) = u16(u32(*global_00868476));  // (from the original)
    r1_3 = arg0->word_c + 0x28u;  // (from the original)
    arg0->word_c = u32(r1_3);
    guest::cpu()->r[1] = r1_3;
    guest::cpu()->s[0] = S0_1;
    return;
}

}  // namespace d_001cd888
GUEST_EXPORT(0x001cd888, d_001cd888::f_001cd888);

// f_001cda40: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001cda40 {

struct __attribute__((packed)) Object_001cda40_0 {
    u8 unknown_0[0x24];  // (not used here)
    u8 byte_24;
};
GUEST_OFFSET(Object_001cda40_0, byte_24, 0x24);  // (from the original)

inline constexpr guest::Function<0x002fa9d0, u32(u32, u32, u32, u32)> call_002fa9d0;  // (from the original)
inline constexpr guest::Function<0x004f2ef0, u32(u32, u32, u32, u32)> call_004f2ef0;  // (from the original)
inline constexpr guest::Function<0x00736a1c, u32(u32, u32, u32, u32)> call_00736a1c;  // (from the original)

u32 f_001cda40(gptr<Object_001cda40_0> arg0, u32 r1, u32 r2_unused, u32 r3) {
    u32 r0 = arg0.addr();
    u32 r13 = guest::cpu()->r[13];
    u32 r8_1 = 0;
    u32 r2_1 = 0;
    u32 r0_1 = 0;
    u32 zf_1 = 0;
    u32 ea_1 = 0;
    u32 r2_2 = 0;
    u32 r0_2 = 0;
    u32 r4_1 = 0;
    u32 ea_2 = 0;
    u32 ea_3 = 0;
    u32 r0_3 = 0;
    u32 r7_1 = 0;
    u32 r0_4 = 0;
    u32 r0_5 = 0;
    u32 r3_1 = 0;
    u32 r0_6 = 0;
    u32 ea_4 = 0;
    u32 zf_2 = 0;
    u32 ea_5 = 0;
    u32 r3_2 = 0;
    *gptr<u32>(r13 + 0xffffffe0u) = u32(r3);  // (from the original)
    r13 = r13 - 0x20;  // (from the original)
    r8_1 = 0u;
    r2_1 = u32(arg0->byte_24) & 1u;
    if (r2_1 >= 2u) {
        r0_1 = r0 + 0x38u;  // (from the original)
        goto L_1cda6c;
    }
    r3 = r2_1 + (r2_1 << 2);
    r0_1 = r0 + (r3 + (r2_1 << 6) << 2) + 0x38u;  // (from the original)
L_1cda6c:;
    zf_1 = r0_1 == 0;
    if (!zf_1) {
        zf_1 = r1 == 0;
    }
    if (zf_1) {
        goto L_1cdb24;
    }
    ea_1 = *gptr<u32>(r0_1 + 8u) + 0x28u;  // (from the original)
    r2_2 = *gptr<u32>(ea_1);
    if (r2_2 == 0) {
        r0_2 = r8_1;
    } else {
        r0_2 = ea_1 + r2_2;
    }
    if (r0_2 == 0) {
        r4_1 = 0u;
        goto L_1cdaac;
    }
    ea_2 = r0_2 + 0x28u;  // (from the original)
    r2_2 = *gptr<u32>(ea_2);
    if (r2_2 == 0) {
        r4_1 = r8_1;
    } else {
        r4_1 = r2_2 + ea_2;
    }
L_1cdaac:;
    ea_3 = r1 + 0xc0u;  // (from the original)
    r1 = ea_3;
    r0_3 = *gptr<u32>(ea_3);
    r7_1 = r13;
    if (r0_3 == 0) {
        r0_4 = r8_1;
    } else {
        r0_4 = r0_3 + r1;
    }
    *gptr<u32>(r13) = u32(r0_4);
    if (r0_4 == 0) {
        goto L_1cdb04;
    }
    guest::cpu()->r[13] = r13;
    r0_5 = call_002fa9d0(0x1cdb28u, r1, r2_2, r3);  // (from the original)
    r3_1 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0_6 = call_00736a1c(r7_1, 0x1cdb28u, r0_5, r3_1);  // (from the original)
    r1 = guest::cpu()->r[1];
    if (r0_6 == 0) {
        goto L_1cdb04;
    }
    ea_4 = r0_6 + 0xcu;  // (from the original)
    r1 = *gptr<u32>(ea_4);
    if (r1 != 0) {
        r8_1 = r1 + ea_4;
    }
    goto L_1cdb08;
L_1cdb04:;
    r8_1 = 0u;
L_1cdb08:;
    zf_2 = r8_1 == 0;
    r0_1 = r8_1;
    if (!zf_2) {
        zf_2 = r4_1 == 0;
    }
    if (zf_2) {
        goto L_1cdb24;
    }
    ea_5 = r13;
    r13 = r13 + 0x20;  // (from the original)
    r3_2 = *gptr<u32>(ea_5);
    guest::cpu()->r[13] = r13;
    return call_004f2ef0(r0_1, 0x1cdb28u, r4_1, r3_2);  // (from the original)
L_1cdb24:;
    r13 = r13 + 0x20;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0_1;
}

}  // namespace d_001cda40
GUEST_EXPORT(0x001cda40, d_001cda40::f_001cda40);

// f_001cddc4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001cddc4 {

struct __attribute__((packed)) Object_001cddc4_0 {
    u8 unknown_0[0xe];  // (not used here)
    u8 byte_e;
};
GUEST_OFFSET(Object_001cddc4_0, byte_e, 0xe);  // (from the original)


void f_001cddc4(gptr<Object_001cddc4_0> arg0, u32 r1) {
    u32 r1_1 = 0;
    r1_1 = u32(arg0->byte_e) & ~0x30u | (r1 & 3u) << 4;  // (from the original)
    arg0->byte_e = u8(r1_1);
    guest::cpu()->r[1] = r1_1;
    return;
}

}  // namespace d_001cddc4
GUEST_EXPORT(0x001cddc4, d_001cddc4::f_001cddc4);

// f_001cde00: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001cde00 {

struct __attribute__((packed)) Object_001cde00_0 {
    u8 unknown_0[0x8];  // (not used here)
    u32 word_8;
    u16 half_c;
};
GUEST_OFFSET(Object_001cde00_0, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Object_001cde00_0, half_c, 0xc);  // (from the original)


void f_001cde00(gptr<Object_001cde00_0> arg0) {
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    r1_1 = arg0->word_8 & 0xff000000u;  // (from the original)
    r2_1 = u32(arg0->half_c) & ~0xffu;  // (from the original)
    arg0->word_8 = u32(r1_1);
    arg0->half_c = u16(r2_1);
    guest::cpu()->r[1] = r1_1;
    return;
}

}  // namespace d_001cde00
GUEST_EXPORT(0x001cde00, d_001cde00::f_001cde00);

// f_001cde1c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001cde1c {

struct __attribute__((packed)) Object_001cde1c_0 {
    u8 unknown_0[0x8];  // (not used here)
    u32 word_8;
};
GUEST_OFFSET(Object_001cde1c_0, word_8, 0x8);  // (from the original)


void f_001cde1c(gptr<Object_001cde1c_0> arg0) {
    u32 r1_1 = 0;
    r1_1 = arg0->word_8 & ~0xc0000000u;  // (from the original)
    arg0->word_8 = u32(r1_1);
    guest::cpu()->r[1] = r1_1;
    return;
}

}  // namespace d_001cde1c
GUEST_EXPORT(0x001cde1c, d_001cde1c::f_001cde1c);

// f_001cde2c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001cde2c {

struct __attribute__((packed)) Object_001cde2c_0 {
    u8 unknown_0[0xc];  // (not used here)
    u16 half_c;
};
GUEST_OFFSET(Object_001cde2c_0, half_c, 0xc);  // (from the original)


void f_001cde2c(gptr<Object_001cde2c_0> arg0, u32 r1) {
    u32 r1_1 = 0;
    u32 r1_2 = 0;
    if (r1 == 0) {
        r1_1 = 0u;
    } else {
        r1_1 = 0x8000u;  // (from the original)
    }
    r1_2 = r1_1 | u32(arg0->half_c) & ~0x8000u;  // (from the original)
    arg0->half_c = u16(r1_2);
    guest::cpu()->r[1] = r1_2;
    return;
}

}  // namespace d_001cde2c
GUEST_EXPORT(0x001cde2c, d_001cde2c::f_001cde2c);

// f_001cde9c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001cde9c {

struct __attribute__((packed)) Object_001cde9c_0 {
    u8 unknown_0[0x8];  // (not used here)
    u32 word_8;
};
GUEST_OFFSET(Object_001cde9c_0, word_8, 0x8);  // (from the original)


void f_001cde9c(gptr<Object_001cde9c_0> arg0) {
    u32 r1_1 = 0;
    r1_1 = arg0->word_8 & ~0x3c000000u;  // (from the original)
    arg0->word_8 = u32(r1_1);
    guest::cpu()->r[1] = r1_1;
    return;
}

}  // namespace d_001cde9c
GUEST_EXPORT(0x001cde9c, d_001cde9c::f_001cde9c);

// f_001cdf18: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001cdf18 {

struct __attribute__((packed)) Object_001cdf18_0 {
    u8 unknown_0[0x8];  // (not used here)
    u32 word_8;
};
GUEST_OFFSET(Object_001cdf18_0, word_8, 0x8);  // (from the original)


void f_001cdf18(gptr<Object_001cdf18_0> arg0) {
    u32 r1_1 = 0;
    r1_1 = arg0->word_8 & ~0xc0000000u & ~0x7800000u;  // (from the original)
    arg0->word_8 = u32(r1_1);
    guest::cpu()->r[1] = r1_1;
    return;
}

}  // namespace d_001cdf18
GUEST_EXPORT(0x001cdf18, d_001cdf18::f_001cdf18);

// f_001cdf2c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001cdf2c {

struct __attribute__((packed)) Object_001cdf2c_0 {
    u8 unknown_0[0x8];  // (not used here)
    u32 word_8;
};
GUEST_OFFSET(Object_001cdf2c_0, word_8, 0x8);  // (from the original)


void f_001cdf2c(gptr<Object_001cdf2c_0> arg0, u32 r1) {
    u32 r1_1 = 0;
    r1_1 = arg0->word_8 & ~0x7800000u | (r1 & 0xfu) << 0x17;  // (from the original)
    arg0->word_8 = u32(r1_1);
    guest::cpu()->r[1] = r1_1;
    return;
}

}  // namespace d_001cdf2c
GUEST_EXPORT(0x001cdf2c, d_001cdf2c::f_001cdf2c);

// f_001cdf44: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001cdf44 {

struct __attribute__((packed)) Object_001cdf44_0 {
    u8 unknown_0[0x8];  // (not used here)
    u32 word_8;
};
GUEST_OFFSET(Object_001cdf44_0, word_8, 0x8);  // (from the original)


u32 f_001cdf44(gptr<Object_001cdf44_0> arg0, u32 r1) {
    u32 r0 = arg0.addr();
    u32 r1_1 = 0;
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    if (r1 != 0) {
        r1_1 = (r1 << 3) - 8u;
        r0_1 = lsr_r(arg0->word_8, r1_1 & 0xff) & 0x7fu;  // (from the original)
        if (r0_1 > 0x63u) {  // (from the original)
            r0_1 = 0x63u;  // (from the original)
        }
        guest::cpu()->r[1] = r1_1;
        return r0_1;
    }
    r0_2 = u32(*gptr<u16>(r0 + 0xcu)) & ~0xc000u;  // (from the original)
    if (r0_2 > 0x270fu) {  // (from the original)
        r0_2 = 0x270fu;  // (from the original)
    }
    guest::cpu()->r[1] = 0x270fu;  // (from the original)
    return r0_2;
}

}  // namespace d_001cdf44
GUEST_EXPORT(0x001cdf44, d_001cdf44::f_001cdf44);

// f_001cdf88: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001cdf88 {

struct __attribute__((packed)) Object_001cdf88_0 {
    u8 unknown_0[0x8];  // (not used here)
    u32 word_8;
};
GUEST_OFFSET(Object_001cdf88_0, word_8, 0x8);  // (from the original)


void f_001cdf88(gptr<Object_001cdf88_0> arg0) {
    u32 r1_1 = 0;
    r1_1 = arg0->word_8 & ~0x7800000u;  // (from the original)
    arg0->word_8 = u32(r1_1);
    guest::cpu()->r[1] = r1_1;
    return;
}

}  // namespace d_001cdf88
GUEST_EXPORT(0x001cdf88, d_001cdf88::f_001cdf88);

// f_001cdf98: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001cdf98 {

struct __attribute__((packed)) Object_001cdf98_0 {
    u8 unknown_0[0xe];  // (not used here)
    u8 byte_e;
};
GUEST_OFFSET(Object_001cdf98_0, byte_e, 0xe);  // (from the original)


void f_001cdf98(gptr<Object_001cdf98_0> arg0, u32 r1) {
    u32 r1_1 = 0;
    r1_1 = r1 & 0xfu | u32(arg0->byte_e) & 0xf0u;  // (from the original)
    arg0->byte_e = u8(r1_1);
    guest::cpu()->r[1] = r1_1;
    return;
}

}  // namespace d_001cdf98
GUEST_EXPORT(0x001cdf98, d_001cdf98::f_001cdf98);

// f_001ce934: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001ce934 {

struct __attribute__((packed)) Object_001ce934_3 {
    u8 byte_0;
    u8 byte_1;
    u8 byte_2;
};
GUEST_OFFSET(Object_001ce934_3, byte_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_001ce934_3, byte_1, 0x1);  // (from the original)
GUEST_OFFSET(Object_001ce934_3, byte_2, 0x2);  // (from the original)

inline constexpr guest::Function<0x0020cd9c, u32(u32, u32, u32, u32)> call_0020cd9c;  // (from the original)
inline constexpr guest::Function<0x0020cde4, u32(u32, u32, u32, u32)> call_0020cde4;  // (from the original)
inline constexpr guest::Function<0x004f1648, u32(u32, u32, u32, u32)> call_004f1648;  // (from the original)

u32 f_001ce934(u32 r0, u32 r1, u32 r2, gptr<Object_001ce934_3> arg3) {
    u32 r13 = guest::cpu()->r[13];
    u32 r3_1 = 0;
    u32 r2_1 = 0;
    u32 r4_1 = 0;
    u32 r5_1 = 0;
    u32 r0_1 = 0;
    u32 r2_2 = 0;
    u32 r3_2 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r1_1 = 0;
    u32 r7_1 = 0;
    u32 ea_1 = 0;
    u32 ea_2 = 0;
    u32 r3_3 = 0;
    u32 ea_3 = 0;
    u32 ea_4 = 0;
    u32 r3_4 = 0;
    u32 ea_5 = 0;
    u32 r1_2 = 0;
    u32 ea_6 = 0;
    u32 r0_4 = 0;
    u32 ea_7 = 0;
    u32 ea_8 = 0;
    u32 r3_5 = 0;
    u32 ea_9 = 0;
    u32 ea_10 = 0;
    u32 r3_6 = 0;
    u32 ea_11 = 0;
    u32 r1_3 = 0;
    u32 ea_12 = 0;
    u32 r0_5 = 0;
    u32 ea_13 = 0;
    u32 ea_14 = 0;
    u32 r3_7 = 0;
    u32 ea_15 = 0;
    u32 ea_16 = 0;
    u32 r3_8 = 0;
    u32 r5_2 = 0;
    u32 r3_9 = 0;
    r13 = r13 - 0x28u;  // (from the original)
    *gptr<u8>(r13 + 0xcu) = u8(0xc8u);  // (from the original)
    *gptr<u8>(r13 + 0x10u) = u8(0xc8u);  // (from the original)
    *gptr<u8>(r13 + 0xdu) = u8(0xc8u);  // (from the original)
    *gptr<u8>(r13 + 0x11u) = u8(0xc8u);  // (from the original)
    *gptr<u8>(r13 + 0xeu) = u8(0u);  // (from the original)
    *gptr<u8>(r13 + 0x12u) = u8(0u);  // (from the original)
    r3_1 = u32(arg3->byte_1) << 8;
    r2_1 = r3_1 & 0xff00u;  // (from the original)
    r4_1 = ((u32(arg3->byte_0) | ((0xc8u | r0 & ~0xffu) & ~0xff00u | 0xc8u << 8 & 0xff00u) & ~0xff0000u & ~0xffu) & ~0xff00u | r2_1) & ~0xff0000u | u32(arg3->byte_2) << 0x10 & 0xff0000u;  // (from the original)
    r5_1 = *gptr<u32>(r13 + 0x28u);  // (from the original)
    r0_1 = r13 + 0xcu;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_0020cde4(r0_1, r1, r2_1, r3_1);
    r2_2 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    r0_2 = r13 + 0x10u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_3 = call_0020cd9c(r0_2, r2, r2_2, r3_2);
    r1_1 = guest::cpu()->r[1];
    r7_1 = ~0u;
    if ((r5_1 & 1u) != 0) {
        ea_1 = r13;
        *gptr<u32>(ea_1) = u32(r4_1 << 0x10 >> 0x18);  // (from the original)
        ea_2 = r13 + 4u;
        *gptr<u32>(ea_2) = u32(r4_1 << 8 >> 0x18);  // (from the original)
        *gptr<u32>(ea_2 + 4) = u32(r7_1);
        r3_3 = r4_1 & 0xffu;  // (from the original)
        guest::cpu()->r[13] = r13;
        r0_3 = call_004f1648(r0, 0x1ceb5cu, 0u, r3_3);  // (from the original)
        r1_1 = guest::cpu()->r[1];
    }
    if ((r5_1 & 2u) != 0) {
        ea_3 = r13;
        *gptr<u32>(ea_3) = u32(r4_1 << 0x10 >> 0x18);  // (from the original)
        ea_4 = r13 + 4u;
        *gptr<u32>(ea_4) = u32(r4_1 << 8 >> 0x18);  // (from the original)
        *gptr<u32>(ea_4 + 4) = u32(r7_1);
        r3_4 = r4_1 & 0xffu;  // (from the original)
        guest::cpu()->r[13] = r13;
        call_004f1648(r0, 0x1ceb60u, 0u, r3_4);  // (from the original)
        ea_5 = r13 + 0xdu;  // (from the original)
        r1_2 = u32(*gptr<u8>(ea_5));
        ea_6 = r13 + 0xeu;  // (from the original)
        r0_4 = u32(*gptr<u8>(ea_6));
        ea_7 = r13;
        *gptr<u32>(ea_7) = u32(r1_2);
        ea_8 = r13 + 4u;
        *gptr<u32>(ea_8) = u32(r0_4);
        *gptr<u32>(ea_8 + 4) = u32(r7_1);
        r3_5 = u32(*gptr<u8>(r13 + 0xcu));  // (from the original)
        guest::cpu()->r[13] = r13;
        r0_3 = call_004f1648(r0, 0x1ceb60u, 1u, r3_5);  // (from the original)
        r1_1 = guest::cpu()->r[1];
    }
    if ((r5_1 & 4u) != 0) {
        ea_9 = r13;
        *gptr<u32>(ea_9) = u32(r4_1 << 0x10 >> 0x18);  // (from the original)
        ea_10 = r13 + 4u;
        *gptr<u32>(ea_10) = u32(r4_1 << 8 >> 0x18);  // (from the original)
        *gptr<u32>(ea_10 + 4) = u32(r7_1);
        r3_6 = r4_1 & 0xffu;  // (from the original)
        guest::cpu()->r[13] = r13;
        call_004f1648(r0, 0x1ceb64u, 0u, r3_6);  // (from the original)
        ea_11 = r13 + 0x11u;  // (from the original)
        r1_3 = u32(*gptr<u8>(ea_11));
        ea_12 = r13 + 0x12u;  // (from the original)
        r0_5 = u32(*gptr<u8>(ea_12));
        ea_13 = r13;
        *gptr<u32>(ea_13) = u32(r1_3);
        ea_14 = r13 + 4u;
        *gptr<u32>(ea_14) = u32(r0_5);
        *gptr<u32>(ea_14 + 4) = u32(r7_1);
        r3_7 = u32(*gptr<u8>(r13 + 0x10u));  // (from the original)
        guest::cpu()->r[13] = r13;
        r0_3 = call_004f1648(r0, 0x1ceb64u, 1u, r3_7);  // (from the original)
        r1_1 = guest::cpu()->r[1];
    }
    if ((r5_1 & 8u) != 0) {
        ea_15 = r13;
        *gptr<u32>(ea_15) = u32(r4_1 << 0x10 >> 0x18);  // (from the original)
        ea_16 = r13 + 4u;
        *gptr<u32>(ea_16) = u32(r4_1 << 8 >> 0x18);  // (from the original)
        *gptr<u32>(ea_16 + 4) = u32(r7_1);
        r3_8 = r4_1 & 0xffu;  // (from the original)
        guest::cpu()->r[13] = r13;
        r0_3 = call_004f1648(r0, 0x1ceb68u, 0u, r3_8);  // (from the original)
        r1_1 = guest::cpu()->r[1];
    }
    if ((r5_1 & 0x10u) != 0) {  // (from the original)
        r5_2 = r13 + 4u;
        *gptr<u32>(r13) = u32(r4_1 << 0x10 >> 0x18);  // (from the original)
        *gptr<u32>(r5_2) = u32(r4_1 << 8 >> 0x18);  // (from the original)
        *gptr<u32>(r5_2 + 4) = u32(r7_1);
        r3_9 = r4_1 & 0xffu;  // (from the original)
        guest::cpu()->r[13] = r13;
        r0_3 = call_004f1648(r0, 0x1ceb70u, 0u, r3_9);  // (from the original)
        r1_1 = guest::cpu()->r[1];
    }
    r13 = r13 + 0x28u;  // (from the original)
    guest::cpu()->r[1] = r1_1;
    guest::cpu()->r[13] = r13;
    return r0_3;
}

}  // namespace d_001ce934
GUEST_EXPORT(0x001ce934, d_001ce934::f_001ce934);

// f_001ceb78: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001ceb78 {

struct __attribute__((packed)) Object_001ceb78_1 {
    u8 unknown_0[0x55ba];  // (not used here)
    u8 byte_55ba;
};
GUEST_OFFSET(Object_001ceb78_1, byte_55ba, 0x55ba);  // (from the original)

inline constexpr guest::Function<0x001cebc0, u32(u32, u32, u32, u32)> call_001cebc0;  // (from the original)

u32 f_001ceb78(u32 r0_unused, gptr<Object_001ceb78_1> arg1, u32 r2, u32 r3) {
    u32 r1 = arg1.addr();
    u32 r13 = guest::cpu()->r[13];
    u32 ea_1 = 0;
    u32 r2_1 = 0;
    u32 r12_1 = 0;
    u32 ea_2 = 0;
    u32 ea_3 = 0;
    u32 r1_1 = 0;
    u32 r2_2 = 0;
    u32 r1_2 = 0;
    r13 = r13 - 0x18u;  // (from the original)
    ea_1 = r13 + 0x18u;  // (from the original)
    r2_1 = *gptr<u32>(ea_1);
    r12_1 = *gptr<u32>(ea_1 + 4);
    ea_2 = r13;
    *gptr<u32>(ea_2) = u32(r3);
    ea_3 = r13 + 4u;
    *gptr<u32>(ea_3) = u32(r2_1);
    *gptr<u32>(ea_3 + 4) = u32(r12_1);
    r1_1 = r1 + 4u;
    r2_2 = 1u & ~u32(arg1->byte_55ba);
    guest::cpu()->r[13] = r13;
    call_001cebc0(guest::cpu()->r[0], r1_1, r2_2, r2);
    r1_2 = guest::cpu()->r[1];
    r13 = r13 + 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1_2;
    guest::cpu()->r[13] = r13;
    return guest::cpu()->r[0];
}

}  // namespace d_001ceb78
GUEST_EXPORT(0x001ceb78, d_001ceb78::f_001ceb78);
