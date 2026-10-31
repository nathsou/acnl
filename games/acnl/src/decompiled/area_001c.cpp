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
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 0x18u;  // (from the original)
    r4 = r0;
    r5 = r1;
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_001e5894(r0, r1, r2, guest::cpu()->r[3]);
    r2 = r13;
    r1 = r5;
    r0 = r4;
    guest::cpu()->r[13] = r13;
    r0 = call_001d9c9c(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r0 = 1u;
    *gptr<u8>(r4 + 0xe8u) = u8(r0);  // (from the original)
    r13 = r13 + 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_001c0810
GUEST_EXPORT(0x001c0810, d_001c0810::f_001c0810);

// f_001c0c1c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001c0c1c {

inline constexpr guest::Function<0x001d9e44, u32(u32, u32, u32, u32)> call_001d9e44;  // (from the original)
inline constexpr guest::Function<0x001e5894, u32(u32, u32, u32, u32)> call_001e5894;  // (from the original)

u32 f_001c0c1c(u32 r0, u32 r1, u32 r2) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 0x18u;  // (from the original)
    r4 = r0;
    r5 = r1;
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_001e5894(r0, r1, r2, guest::cpu()->r[3]);
    r2 = r13;
    r1 = r5;
    r0 = r4;
    guest::cpu()->r[13] = r13;
    r0 = call_001d9e44(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r13 = r13 + 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
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
    u32 r4 = guest::cpu()->r[4];
    guest::cpu()->r[13] -= 8u;
    r4 = r0;
    r0 = u32(arg0->byte_e8);
    if (r0 == 0) {
        guest::cpu()->r[13] += 8u;
        return r0;
    }
    r0 = r4;
    r0 = call_001d9fb0(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    r0 = 0u;
    *gptr<u8>(r4 + 0xe8u) = u8(r0);  // (from the original)
    guest::cpu()->r[13] += 8u;
    return r0;
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
    u32 r0 = arg0.addr();
    u32 r1 = 0;
    r1 = u32(s32(s8(arg0->byte_c8)));
    arg0->byte_94 = u8(1u);
    r0 = r1;
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_001c0f64
GUEST_EXPORT(0x001c0f64, d_001c0f64::f_001c0f64);

// f_001c0fdc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001c0fdc {

inline constexpr guest::Function<0x001da01c, u32(u32, u32, u32, u32)> call_001da01c;  // (from the original)

u32 f_001c0fdc(u32 r0, u32 r1, float S0) {
    guest::cpu()->r[13] -= 8u;
    guest::cpu()->s[0] = S0;
    r0 = call_001da01c(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    S0 = std::bit_cast<float>(*gptr<u32>(0x1c0ff8u));  // (from the original)
    r1 = 0u;
    *gptr<u32>(r0 + 0xe4u) = u32(std::bit_cast<u32>(S0));  // (from the original)
    *gptr<u8>(r0 + 0xe8u) = u8(r1);  // (from the original)
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1;
    guest::cpu()->s[0] = S0;
    return r0;
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
    u32 r2 = 0;
    u32 r3 = 0;
    u32 r13 = guest::cpu()->r[13];
    r2 = r1;
    r1 = arg0->word_1bc;
    r13 = r13 - 0x10u;  // (from the original)
    if (r1 != 0) {
        r0 = 1u;
        r13 = r13 + 0x10u;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    *gptr<u32>(r13 + 4u) = u32(0x1c1ea0u);  // (from the original)
    r1 = r13;
    r3 = 4u;
    r0 = r0 + 0xecu;  // (from the original)
    *gptr<u32>(r13) = u32(0x9047f8u);  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0056aa98(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    if (r0 == 0) {
        r13 = r13 + 0x10u;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    r0 = 1u;
    r13 = r13 + 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_001c1e54
GUEST_EXPORT(0x001c1e54, d_001c1e54::f_001c1e54);

// f_001c1eb8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001c1eb8 {

inline constexpr guest::Function<0x0056a974, u32(u32, u32, u32, u32)> call_0056a974;  // (from the original)

u32 f_001c1eb8(u32 r0, u32 r1) {
    u32 r2 = 0;
    u32 r3 = 0;
    u32 r12 = 0;
    u32 r13 = guest::cpu()->r[13];
    r12 = r0;
    r13 = r13 - 0x10u;  // (from the original)
    r2 = *gptr<u32>(0x952c4cu);  // (from the original)
    r0 = 1u;
    if (r2 == 0) {
        r13 = r13 + 0x10u;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    *gptr<u32>(r13 + 4u) = u32(0x1c1f04u);  // (from the original)
    *gptr<u32>(r13) = u32(0x9047f8u);  // (from the original)
    r1 = r13;
    r3 = 4u;
    r0 = r12;
    guest::cpu()->r[13] = r13;
    r0 = call_0056a974(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r13 = r13 + 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_001c1eb8
GUEST_EXPORT(0x001c1eb8, d_001c1eb8::f_001c1eb8);

// f_001c1f1c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001c1f1c {

inline constexpr guest::Function<0x0056a974, u32(u32, u32, u32, u32)> call_0056a974;  // (from the original)

u32 f_001c1f1c(u32 r0, u32 r1) {
    u32 r2 = 0;
    u32 r3 = 0;
    u32 r12 = 0;
    u32 r13 = guest::cpu()->r[13];
    r12 = r0;
    r2 = r1;
    r13 = r13 - 0x10u;  // (from the original)
    r0 = 1u;
    if (r1 == 0) {
        r13 = r13 + 0x10u;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    *gptr<u32>(r13 + 4u) = u32(0x1c1f5cu);  // (from the original)
    *gptr<u32>(r13) = u32(0x9047f8u);  // (from the original)
    r1 = r13;
    r3 = 4u;
    r0 = r12 + 0xecu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0056a974(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r13 = r13 + 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_001c1f1c
GUEST_EXPORT(0x001c1f1c, d_001c1f1c::f_001c1f1c);

// f_001c1f74: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001c1f74 {

inline constexpr guest::Function<0x0056a758, u32(u32, u32, u32, u32)> call_0056a758;  // (from the original)

u32 f_001c1f74(u32 r0, u32 r1) {
    u32 r2 = 0;
    u32 r3 = 0;
    u32 r12 = 0;
    u32 r13 = guest::cpu()->r[13];
    r12 = r0;
    r2 = r1;
    r13 = r13 - 0x10u;  // (from the original)
    r0 = 1u;
    if (r1 == 0) {
        r13 = r13 + 0x10u;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    *gptr<u32>(r13 + 4u) = u32(0x1c1fb4u);  // (from the original)
    *gptr<u32>(r13) = u32(0x9047f8u);  // (from the original)
    r1 = r13;
    r3 = 4u;
    r0 = r12 + 0xecu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0056a758(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r13 = r13 + 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_001c1f74
GUEST_EXPORT(0x001c1f74, d_001c1f74::f_001c1f74);

// f_001c1fcc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001c1fcc {

inline constexpr guest::Function<0x006055f0, u32(u32, u32, u32, u32)> call_006055f0;  // (from the original)
inline constexpr guest::Function<0x00605600, u32(u32, u32, u32, u32)> call_00605600;  // (from the original)

u32 f_001c1fcc(u32 r0, u32 r1) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 zf = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r4 = r0;
    r5 = r1 + (r1 << 2);
    r0 = r1;
    if (!(u32(r1 >= 0x108u) && !u32(r1 == 0x108u))) {  // (from the original)
        r0 = call_006055f0(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        zf = r0 == 0;
        if (!zf) {
            zf = *gptr<u32>(r4 + 0xd0u) == 0;  // (from the original)
        }
        if (!zf) {
            r0 = *gptr<u32>(r4 + 0xd0u) + (r5 << 9);  // (from the original)
            goto L_1c202c;
        }
        goto L_1c2030;
    }
    r0 = call_00605600(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    zf = r0 == 0;
    if (!zf) {
        zf = *gptr<u32>(r4 + 0x1bcu) == 0;  // (from the original)
    }
    if (zf) {
        goto L_1c2030;
    }
    r1 = 0xfff5a600u + (r5 << 9);  // (from the original)
    r0 = *gptr<u32>(r4 + 0x1bcu) + r1;  // (from the original)
L_1c202c:;
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
L_1c2030:;
    r0 = 0u;
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_001c1fcc
GUEST_EXPORT(0x001c1fcc, d_001c1fcc::f_001c1fcc);

// f_001c2040: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001c2040 {

inline constexpr guest::Function<0x006055f0, u32(u32, u32, u32, u32)> call_006055f0;  // (from the original)

u32 f_001c2040(u32 r0, u32 r1) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 zf = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r4 = r0;
    r5 = r1;
    r0 = r1;
    r0 = call_006055f0(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    zf = r0 == 0;
    if (!zf) {
        zf = *gptr<u32>(r4 + 0xd0u) == 0;  // (from the original)
    }
    if (zf) {
        r0 = 0u;
    } else {
        r1 = r5 + (r5 << 2);
        r0 = *gptr<u32>(r4 + 0xd0u) + (r1 << 9);  // (from the original)
    }
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_001c2040
GUEST_EXPORT(0x001c2040, d_001c2040::f_001c2040);

// f_001c2074: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001c2074 {

inline constexpr guest::Function<0x00605600, u32(u32, u32, u32, u32)> call_00605600;  // (from the original)

u32 f_001c2074(u32 r0, u32 r1, u32 r2) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 zf = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r4 = r0;
    r5 = r1;
    r0 = r1;
    r0 = call_00605600(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    zf = r0 == 0;
    if (!zf) {
        zf = *gptr<u32>(r4 + 0x1bcu) == 0;  // (from the original)
    }
    if (zf) {
        r0 = 0u;
        goto L_1c20b0;
    }
    r1 = 0xfff5a600u + (r5 + (r5 << 2) << 9);  // (from the original)
    r0 = *gptr<u32>(r4 + 0x1bcu) + r1;  // (from the original)
L_1c20b0:;
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
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

inline constexpr guest::Function<0x0055d634, u32(u32, u32, u32, u32)> call_0055d634;  // (from the original)

u32 f_001c23b0(gptr<Object_001c23b0_0> arg0, gptr<Object_001c23b0_1> arg1, gptr<Object_001c23b0_2> arg2) {
    u32 r0 = arg0.addr();
    u32 r1 = arg1.addr();
    u32 r2 = arg2.addr();
    u32 r3 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r13 = guest::cpu()->r[13];
    float S1 = 0;
    float S2 = 0;
    float S3 = 0;
    float S4 = 0;
    float S5 = 0;
    float S6 = 0;
    r4 = r0;
    S2 = std::bit_cast<float>(arg1->word_4);
    S3 = std::bit_cast<float>(arg1->word_8);
    S4 = std::bit_cast<float>(arg1->word_c);
    S5 = std::bit_cast<float>(arg1->word_10);
    S6 = std::bit_cast<float>(arg1->word_14);
    r13 = r13 - 0x38u;  // (from the original)
    r0 = 0x8a3bc0u;  // (from the original)
    arg0->word_0 = u32(std::bit_cast<u32>(std::bit_cast<float>(arg1->word_0)));
    arg0->word_4 = u32(std::bit_cast<u32>(S2));
    arg0->word_8 = u32(std::bit_cast<u32>(S3));
    arg0->word_c = u32(std::bit_cast<u32>(S4));
    arg0->word_10 = u32(std::bit_cast<u32>(S5));
    arg0->word_14 = u32(std::bit_cast<u32>(S6));
    *gptr<u32>(r13) = u32(*gptr<u32>(r0));
    *gptr<u32>(r13 + 4u) = u32(*gptr<u32>(r0));
    r3 = r13 + 0x10u;  // (from the original)
    *gptr<u32>(r13 + 8u) = u32(*gptr<u32>(r0));
    *gptr<u32>(r13 + 0xcu) = u32(*gptr<u32>(0x8a3bbcu));  // (from the original)
    r0 = r13 + 0x20u;  // (from the original)
    S2 = std::bit_cast<float>(arg2->word_8);
    S3 = std::bit_cast<float>(arg2->word_c);
    S4 = std::bit_cast<float>(arg2->word_10);
    r2 = r0;
    *gptr<u32>(r0) = u32(std::bit_cast<u32>(std::bit_cast<float>(arg2->word_4)));
    *gptr<u32>(r0 + 4) = u32(std::bit_cast<u32>(S2));
    *gptr<u32>(r0 + 8) = u32(std::bit_cast<u32>(S3));
    *gptr<u32>(r0 + 0xc) = u32(std::bit_cast<u32>(S4));  // (from the original)
    r0 = r13;
    S1 = std::bit_cast<float>(arg1->word_4);
    S2 = std::bit_cast<float>(arg1->word_8);
    S3 = std::bit_cast<float>(arg1->word_c);
    S4 = std::bit_cast<float>(arg1->word_10);
    r1 = r3;
    *gptr<u32>(r3) = u32(std::bit_cast<u32>(S1));
    *gptr<u32>(r3 + 4) = u32(std::bit_cast<u32>(S2));
    *gptr<u32>(r3 + 8) = u32(std::bit_cast<u32>(S3));
    *gptr<u32>(r3 + 0xc) = u32(std::bit_cast<u32>(S4));  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2;
    guest::cpu()->s[3] = S3;
    guest::cpu()->s[4] = S4;
    guest::cpu()->s[5] = S5;
    guest::cpu()->s[6] = S6;
    r0 = call_0055d634(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    S1 = guest::cpu()->s[1];
    *gptr<u32>(r4 + 4u) = u32(*gptr<u32>(r13));
    *gptr<u32>(r4 + 8u) = u32(*gptr<u32>(r13 + 4u));
    *gptr<u32>(r4 + 0xcu) = u32(*gptr<u32>(r13 + 8u));  // (from the original)
    r0 = *gptr<u32>(r13 + 0xcu);  // (from the original)
    *gptr<u32>(r4 + 0x10u) = u32(r0);  // (from the original)
    r13 = r13 + 0x38u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[1] = S1;
    return r0;
}

}  // namespace d_001c23b0
GUEST_EXPORT(0x001c23b0, d_001c23b0::f_001c23b0);

// f_001c2764: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001c2764 {

inline constexpr guest::Function<0x00521a8c, u32(u32, u32, u32, u32)> call_00521a8c;  // (from the original)

u32 f_001c2764(u32 r0, u32 r1, u32 r2) {
    guest::cpu()->r[13] -= 8u;
    r0 = call_00521a8c(r0, r1, r2, guest::cpu()->r[3]);
    r1 = 0u;
    *gptr<u32>(r0 + 0x14u) = u32(r1);  // (from the original)
    *gptr<u32>(r0) = u32(0x8eb7fcu);  // (from the original)
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_001c2764
GUEST_EXPORT(0x001c2764, d_001c2764::f_001c2764);

// f_001c4bc8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001c4bc8 {

inline constexpr guest::Function<0x00757aa0, u32(u32, u32, u32, u32)> call_00757aa0;  // (from the original)

u32 f_001c4bc8(u32 r0, u32 r1, u32 r2_unused, u32 r3) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r4 = r0;
    r5 = r3;
    r0 = call_00757aa0(r0, r1, guest::cpu()->r[2], r3);
    r0 = *gptr<u32>(r4) + (r0 << 1);
    r1 = u32(*gptr<u16>(r0)) & 0xfu | r5;  // (from the original)
    *gptr<u16>(r0) = u16(r1);
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_001c4bc8
GUEST_EXPORT(0x001c4bc8, d_001c4bc8::f_001c4bc8);

// f_001c4bf4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001c4bf4 {

inline constexpr guest::Function<0x00757aa0, u32(u32, u32, u32, u32)> call_00757aa0;  // (from the original)

u32 f_001c4bf4(u32 r0, u32 r1, u32 r2_unused, u32 r3) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r4 = r0;
    r5 = r3;
    r0 = call_00757aa0(r0, r1, guest::cpu()->r[2], r3);
    r1 = *gptr<u32>(r4);
    r0 = r1 + (r0 << 1);
    *gptr<u16>(r0) = u16(r5);
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_001c4bf4
GUEST_EXPORT(0x001c4bf4, d_001c4bf4::f_001c4bf4);

// f_001c4c14: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001c4c14 {

inline constexpr guest::Function<0x005bf518, u32(u32, u32, u32, u32)> call_005bf518;  // (from the original)

u32 f_001c4c14(u32 r0_unused, u32 r1) {
    u32 r4 = guest::cpu()->r[4];
    guest::cpu()->r[13] -= 8u;
    r4 = r1;
    call_005bf518(guest::cpu()->r[0], r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
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


u32 f_001c50e0(gptr<Object_001c50e0_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r1 = 0;
    u32 r2 = 0;
    float S0 = 0;
    float S1 = 0;
    float S2 = 0;
    float S3 = 0;
    float S4 = 0;
    float S5 = 0;
    float S6 = 0;
    r1 = arg0->word_218;
    S4 = std::bit_cast<float>(*gptr<u32>(0x1c5130u));  // (from the original)
    S5 = std::bit_cast<float>(*gptr<u32>(0x1c5134u));  // (from the original)
    r2 = r1 + 0x48u;  // (from the original)
    r1 = r1 + 0x80u;  // (from the original)
    S2 = std::bit_cast<float>(*gptr<u32>(r2));
    S3 = std::bit_cast<float>(*gptr<u32>(r2 + 4));
    S6 = std::bit_cast<float>(*gptr<u32>(0x1c5138u));  // (from the original)
    S0 = std::bit_cast<float>(*gptr<u32>(r1 + 0xcu)) + S2 * S4;  // (from the original)
    S1 = std::bit_cast<float>(*gptr<u32>(r1 + 0x1cu)) - S3 * S4;  // (from the original)
    arg0->byte_164 = u8(1u);
    S4 = S5 - S0;
    S0 = S1 + S6;
    arg0->word_168 = u32(std::bit_cast<u32>(S4));
    arg0->word_16c = u32(std::bit_cast<u32>(S0));
    r0 = r0 + 0x170u;  // (from the original)
    arg0->word_170 = u32(std::bit_cast<u32>(S2));
    arg0->word_174 = u32(std::bit_cast<u32>(S3));
    guest::cpu()->r[1] = r1;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    return r0;
}

}  // namespace d_001c50e0
GUEST_EXPORT(0x001c50e0, d_001c50e0::f_001c50e0);

// f_001c53b8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001c53b8 {

inline constexpr guest::Function<0x001323bc, u32(u32, u32, u32, u32)> call_001323bc;  // (from the original)
inline constexpr guest::Function<0x00568c10, u32(u32, u32, u32, u32)> call_00568c10;  // (from the original)
inline constexpr guest::Function<0x00569e6c, u32(u32, u32, u32, u32)> call_00569e6c;  // (from the original)

u32 f_001c53b8(u32 r0, u32 r1, u32 r2) {
    u32 r4 = guest::cpu()->r[4];
    guest::cpu()->r[13] -= 8u;
    r4 = r0;
    r0 = r0 + 0x2cu;  // (from the original)
    r0 = call_00568c10(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r0 = call_001323bc(r0, r1, r2, guest::cpu()->r[3]);
    r1 = r4 + 0x2cu;  // (from the original)
    guest::cpu()->r[13] += 8u;
    r2 = 1u;
    return call_00569e6c(r0, r1, r2, guest::cpu()->r[3]);
}

}  // namespace d_001c53b8
GUEST_EXPORT(0x001c53b8, d_001c53b8::f_001c53b8);

// f_001c53dc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001c53dc {

inline constexpr guest::Function<0x00816b18, u32(u32, u32, u32, u32)> call_00816b18;  // (from the original)

u32 f_001c53dc() {
    u32 r1 = 0;
    u32 r2 = 0;
    guest::cpu()->r[13] -= 8u;
    r1 = *gptr<u32>(0x87a024u);  // (from the original)
    r2 = *gptr<u32>(0x87a024u + 4);  // (from the original)
    call_00816b18(guest::cpu()->r[0], r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1;
    return guest::cpu()->r[0];
}

}  // namespace d_001c53dc
GUEST_EXPORT(0x001c53dc, d_001c53dc::f_001c53dc);

// f_001c551c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001c551c {

inline constexpr guest::Function<0x00816b18, u32(u32, u32, u32, u32)> call_00816b18;  // (from the original)

u32 f_001c551c() {
    u32 r1 = 0;
    u32 r2 = 0;
    guest::cpu()->r[13] -= 8u;
    r1 = *gptr<u32>(0x87a02cu);  // (from the original)
    r2 = *gptr<u32>(0x87a02cu + 4);  // (from the original)
    call_00816b18(guest::cpu()->r[0], r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1;
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

inline constexpr guest::Function<0x00125aec, u32(u32, u32, u32, u32)> call_00125aec;  // (from the original)
inline constexpr guest::Function<0x00125e3c, u32(u32, u32, u32, u32)> call_00125e3c;  // (from the original)
inline constexpr guest::Function<0x00299b30, u32(u32, u32, u32, u32)> call_00299b30;  // (from the original)

u32 f_001c55b0(gptr<Object_001c55b0_0> arg0, float S0) {
    u32 ea = 0;
    u32 r0 = arg0.addr();
    u32 r1 = 0;
    u32 r2 = 0;
    u32 r3 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 0x10;  // (from the original)
    r4 = 0u;
    r5 = 0x87a024u;  // (from the original)
    arg0->word_4 = u32(r4);
    arg0->byte_8 = u8(r4);
    r3 = r0 + 0xcu;  // (from the original)
    ea = r5 + 0x28u;  // (from the original)
    r2 = *gptr<u32>(ea + 4);
    arg0->word_c = u32(*gptr<u32>(ea));
    arg0->word_10 = u32(r2);
    arg0->word_14 = u32(r4);
    arg0->byte_18 = u8(r4);
    arg0->word_1c = u32(r4);
    arg0->word_0 = u32(0x8eb984u);  // (from the original)
    arg0->word_20 = u32(r4);
    ea = r0 + 0x24u;  // (from the original)
    arg0->word_24 = u32(r4);
    r1 = r5 + 0xccu;  // (from the original)
    ea = ea + 4u;
    arg0->word_28 = u32(r1);
    r0 = ea + 4u;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    r0 = call_00125e3c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
    r0 = r0 + 0x14cu;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    r0 = call_00125aec(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
    r0 = r0 + 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    r0 = call_00125aec(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
    r0 = r0 + 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    r0 = call_00125aec(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
    r0 = r0 + 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    r0 = call_00125aec(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
    ea = r0 + 0x28u;  // (from the original)
    *gptr<u32>(ea) = u32(r4);
    r1 = r0 - 0x1f0u;  // (from the original)
    ea = r0 + 0x2cu;  // (from the original)
    *gptr<u32>(ea) = u32(r4);
    ea = r0 + 0x30u;  // (from the original)
    *gptr<u32>(ea) = u32(r4);
    r0 = ea + 4u;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    r0 = call_00299b30(r0, r1, r2, r3);
    r0 = r0 - 0x224u;  // (from the original)
    ea = r0 + 0x9bcu;  // (from the original)
    *gptr<u8>(ea) = u8(2u);
    ea = r0 + 0x9c0u;  // (from the original)
    *gptr<u32>(ea) = u32(~0u);
    *gptr<u32>(ea + 4) = u32(r4);
    S0 = std::bit_cast<float>(*gptr<u32>(0x1c5690u));  // (from the original)
    ea = r0 + 0x9c8u;  // (from the original)
    *gptr<u32>(ea) = u32(r4);
    *gptr<u32>(r0 + 0x9ccu) = u32(std::bit_cast<u32>(S0));  // (from the original)
    r1 = 1u;
    ea = r0 + 0x9d0u;  // (from the original)
    *gptr<u8>(ea) = u8(r4);
    ea = r0 + 0x9d1u;  // (from the original)
    *gptr<u8>(ea) = u8(r1);
    ea = r0 + 0x9d2u;  // (from the original)
    *gptr<u8>(ea) = u8(r4);
    ea = r0 + 0x9d3u;  // (from the original)
    *gptr<u8>(ea) = u8(r1);
    ea = r5 + 0x20u;  // (from the original)
    r1 = *gptr<u32>(ea);
    r2 = *gptr<u32>(ea + 4);
    ea = r0 + 0x9d4u;  // (from the original)
    *gptr<u32>(ea) = u32(r1);
    *gptr<u32>(ea + 4) = u32(r2);
    *gptr<u32>(ea + 8) = u32(r4);
    r13 = r13 + 0x10;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    return r0;
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
    u32 r1 = 0;
    u32 r2 = 0;
    u32 r3 = 0;
    u32 r4 = guest::cpu()->r[4];
    guest::cpu()->r[13] -= 8u;
    r4 = r0;
    r1 = 0x3009ccu;  // (from the original)
    r3 = 0x21u;  // (from the original)
    arg0->word_0 = u32(0x8eb9f0u);  // (from the original)
    r2 = 0x2cu;  // (from the original)
    r0 = r4 + 0xa44cu;  // (from the original)
    r0 = call_002f76ac(r0, r1, r2, r3);
    r1 = 0x3009ccu;  // (from the original)
    r3 = 0x66u;  // (from the original)
    r2 = 0x2cu;  // (from the original)
    r0 = r4 + 0x92c4u;  // (from the original)
    r0 = call_002f76ac(r0, r1, r2, r3);
    r1 = 0x3009ccu;  // (from the original)
    r3 = 0x48u;  // (from the original)
    r2 = 0x2cu;  // (from the original)
    r0 = r4 + 0x8664u;  // (from the original)
    r0 = call_002f76ac(r0, r1, r2, r3);
    r1 = 0x3009ccu;  // (from the original)
    r3 = 0x43u;  // (from the original)
    r2 = 0x2cu;  // (from the original)
    r0 = r4 + 0x7ae0u;  // (from the original)
    r0 = call_002f76ac(r0, r1, r2, r3);
    r1 = 0x1cbb00u;  // (from the original)
    r3 = 0x21u;  // (from the original)
    r2 = 0x5cu;  // (from the original)
    r0 = r4 + 0x6f04u;  // (from the original)
    r0 = call_002f76ac(r0, r1, r2, r3);
    r1 = 0x1cbb00u;  // (from the original)
    r3 = 0x66u;  // (from the original)
    r2 = 0x5cu;  // (from the original)
    r0 = r4 + 0x4a5cu;  // (from the original)
    r0 = call_002f76ac(r0, r1, r2, r3);
    r1 = 0x1cbb00u;  // (from the original)
    r3 = 0x48u;  // (from the original)
    r2 = 0x5cu;  // (from the original)
    r0 = r4 + 0x307cu;  // (from the original)
    r0 = call_002f76ac(r0, r1, r2, r3);
    r1 = 0x1cbb00u;  // (from the original)
    r3 = 0x43u;  // (from the original)
    r2 = 0x5cu;  // (from the original)
    r0 = r4 + 0x1868u;  // (from the original)
    r0 = call_002f76ac(r0, r1, r2, r3);
    r1 = 0x1c81ccu;  // (from the original)
    r3 = 8u;
    r2 = 0x1cu;  // (from the original)
    r0 = r4 + 0x172cu;  // (from the original)
    r0 = call_002f76ac(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = 0x8f727cu;  // (from the original)
    r0 = r4 + 0x1620u;  // (from the original)
    *gptr<u32>(r4 + 0xac0u) = u32(r1);  // (from the original)
    r0 = call_002f7710(r0, r1, r2, r3);
    r4 = r0 - 0xb60u;  // (from the original)
    r1 = 0x31c92cu;  // (from the original)
    r3 = 4u;
    r2 = 0xe0u;  // (from the original)
    r0 = r0 - 0x380u;  // (from the original)
    r0 = call_002f76ac(r0, r1, r2, r3);
    r1 = 0x56988cu;  // (from the original)
    r3 = 4u;
    r2 = 0x28u;  // (from the original)
    r0 = r4 + 0x740u;  // (from the original)
    r0 = call_002f76ac(r0, r1, r2, r3);
    r1 = 0x56988cu;  // (from the original)
    r3 = 4u;
    r2 = 0x28u;  // (from the original)
    r0 = r4 + 0x6a0u;  // (from the original)
    r0 = call_002f76ac(r0, r1, r2, r3);
    r1 = 0x5bf744u;  // (from the original)
    r3 = 4u;
    r2 = 0x14cu;  // (from the original)
    r0 = r4 + 0x170u;  // (from the original)
    r0 = call_002f76ac(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r4 + 0x24u;  // (from the original)
    r0 = call_005bf744(r0, r1, r2, r3);
    r4 = r0 - 0xae4u;  // (from the original)
    *gptr<u32>(r0 - 0xae4u) = u32(0x8ebba0u);  // (from the original)
    r1 = 0x1c81ccu;  // (from the original)
    r3 = 8u;
    r2 = 0x1cu;  // (from the original)
    r0 = r0 - 0x104u;  // (from the original)
    r0 = call_002f76ac(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r4 + 0x82cu;  // (from the original)
    *gptr<u32>(r4) = u32(0x8eb984u);  // (from the original)
    r1 = 0x8f0888u;  // (from the original)
    *gptr<u32>(r4 + 0x224u) = u32(r1);  // (from the original)
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
    r0 = r0 - 0x38u;  // (from the original)
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
    r0 = r0 - 0x2cu;  // (from the original)
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1;
    return r0;
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
    u32 ea = 0;
    u32 res = 0;
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
    ea = r13 - 0x2c;  // (from the original)
    *gptr<u32>(ea) = u32(r0);
    *gptr<u32>(ea + 4) = u32(r1);
    *gptr<u32>(ea + 8) = u32(r4);
    *gptr<u32>(ea + 0xc) = u32(r5);  // (from the original)
    *gptr<u32>(ea + 0x10) = u32(r6);  // (from the original)
    *gptr<u32>(ea + 0x14) = u32(r7);  // (from the original)
    *gptr<u32>(ea + 0x18) = u32(r8);  // (from the original)
    *gptr<u32>(ea + 0x1c) = u32(r9);  // (from the original)
    *gptr<u32>(ea + 0x20) = u32(r10);  // (from the original)
    *gptr<u32>(ea + 0x24) = u32(r11);  // (from the original)
    *gptr<u32>(ea + 0x28) = u32(r14);  // (from the original)
    r13 = r13 - 0x30u;  // (from the original)
    r5 = r1;
    guest::cpu()->r[13] = r13;
    r0 = call_001f9684(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    r0 = r0 + 0x24u;  // (from the original)
    r4 = r0;
    r1 = r0;
    r2 = r5;
    r0 = *gptr<u32>(r13 + 4u) + 0x1e70u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00170514(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r5 = 0u;
    r9 = *gptr<u32>(r13 + 4u) + 0x27b8u;  // (from the original)
    do {
L_1c8d14:;
        r1 = r5 + (r5 << 1);
        r7 = *gptr<u32>(r13 + 4u) + (r1 << 7);
        r8 = r7 + 0x1eb8u;  // (from the original)
        r0 = r8;
        guest::cpu()->r[13] = r13;
        r0 = call_001435b4(r0, r1, r2, r3);
        r1 = *gptr<u32>(r4 + 4u);
        r6 = *gptr<u32>(r13 + 4u) + ((r5 << 7) - ((r5 << 3) - r5) << 4);
        r2 = r0;
        r3 = 0xbu;  // (from the original)
        r0 = r6 + 0x18u;  // (from the original)
        guest::cpu()->r[13] = r13;
        r0 = call_0034a784(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r0 = r7 + 0x21b8u;  // (from the original)
        guest::cpu()->r[13] = r13;
        r0 = call_001435b4(r0, r1, r2, r3);
        r2 = r0;
        r1 = *gptr<u32>(r4 + 8u);
        r3 = 0xbu;  // (from the original)
        r0 = r6 + 0x18u;  // (from the original)
        guest::cpu()->r[13] = r13;
        r0 = call_0034a784(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r0 = r9;
        guest::cpu()->r[13] = r13;
        r0 = call_001435b4(r0, r1, r2, r3);
        r2 = r0;
        r1 = *gptr<u32>(r4 + 0x14u);  // (from the original)
        r3 = 7u;
        r0 = r6 + 0x18u;  // (from the original)
        guest::cpu()->r[13] = r13;
        r0 = call_0034a784(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r0 = r8;
        guest::cpu()->r[13] = r13;
        r0 = call_001435b4(r0, r1, r2, r3);
        r6 = r6 + 0xf38u;  // (from the original)
        r2 = r0;
        r1 = *gptr<u32>(r4 + 4u);
        r3 = 0xbu;  // (from the original)
        r0 = r6;
        guest::cpu()->r[13] = r13;
        r0 = call_0034a784(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r0 = r7 + 0x24b8u;  // (from the original)
        guest::cpu()->r[13] = r13;
        r0 = call_001435b4(r0, r1, r2, r3);
        r2 = r0;
        r1 = *gptr<u32>(r4 + 8u);
        r3 = 0xbu;  // (from the original)
        r0 = r6;
        guest::cpu()->r[13] = r13;
        r0 = call_0034a784(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r0 = r9;
        guest::cpu()->r[13] = r13;
        r0 = call_001435b4(r0, r1, r2, r3);
        r2 = r0;
        r1 = *gptr<u32>(r4 + 0x14u);  // (from the original)
        r3 = 7u;
        r0 = r6;
        guest::cpu()->r[13] = r13;
        r0 = call_0034a784(r0, r1, r2, r3);
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
        r1 = r12 + (r10 << 2);
        r6 = r11 + r7;
        r2 = r6 + r4;
        r9 = r1 + 1u;
        *gptr<u8>(r4 + r6) = u8(r1);
        r5 = r1 + 5u;
        *gptr<u8>(r2 + 1u) = u8(r9);
        *gptr<u8>(r2 + 2u) = u8(r5);
        r8 = r1 + 4u;
        *gptr<u8>(r2 + 3u) = u8(r5);
        *gptr<u8>(r2 + 4u) = u8(r8);
        r3 = r6 + r0;
        *gptr<u8>(r2 + 5u) = u8(r1);
        *gptr<u8>(r0 + r6) = u8(r9);
        *gptr<u8>(r3 + 1u) = u8(r1);
        *gptr<u8>(r3 + 2u) = u8(r5);
        *gptr<u8>(r3 + 3u) = u8(r8);
        r12 = r12 + 1u;
        *gptr<u8>(r3 + 4u) = u8(r5);
        res = r12 - 3u;
        r7 = r7 + 6u;
        *gptr<u8>(r3 + 5u) = u8(r1);
        guest::preempt();
    } while (res >> 0x1f != ((r12 ^ 3u) & (r12 ^ res)) >> 0x1f);  // (from the original)
    r10 = r10 + 1u;
    res = r10 - 3u;
    r11 = r11 + 0x12u;  // (from the original)
    if (res >> 0x1f != ((r10 ^ 3u) & (r10 ^ res)) >> 0x1f) {  // (from the original)
        guest::preempt();
        goto L_1c8e3c;
    }
    guest::cpu()->r[13] = r13;
    r0 = call_001435b4(r0, r1, r2, r3);
    r1 = r0;
    r0 = *gptr<u32>(r13 + 4u);
    r4 = 0x36u;  // (from the original)
    r5 = 1u;
    r2 = r0 + 0x1e58u;  // (from the original)
    r3 = r0 + 0x1e5cu;  // (from the original)
    *gptr<u32>(r2) = u32(r1);
    *gptr<u32>(r3) = u32(r4);
    *gptr<u8>(r0 + 0x1e60u) = u8(r5);  // (from the original)
    r0 = *gptr<u32>(r13);
    guest::cpu()->r[13] = r13;
    r0 = call_001435b4(r0, r1, r2, r3);
    r1 = r0;
    ea = r13 + 4u;
    r0 = *gptr<u32>(ea);
    r2 = r0 + 0x1e64u;  // (from the original)
    r3 = r0 + 0x1e68u;  // (from the original)
    r0 = r0 + 0x1e6cu;  // (from the original)
    ea = r2;
    *gptr<u32>(ea) = u32(r1);
    ea = r3;
    *gptr<u32>(ea) = u32(r4);
    ea = r0;
    *gptr<u8>(ea) = u8(r5);
    r13 = r13 + 0xcu;  // (from the original)
    ea = r13;
    r13 = r13 + 0x24;  // (from the original)
    r4 = *gptr<u32>(ea);
    r5 = *gptr<u32>(ea + 4);
    r6 = *gptr<u32>(ea + 8);
    r7 = *gptr<u32>(ea + 0xc);  // (from the original)
    r8 = *gptr<u32>(ea + 0x10);  // (from the original)
    r9 = *gptr<u32>(ea + 0x14);  // (from the original)
    r10 = *gptr<u32>(ea + 0x18);  // (from the original)
    r11 = *gptr<u32>(ea + 0x1c);  // (from the original)
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

}  // namespace d_001c8cd4
GUEST_EXPORT(0x001c8cd4, d_001c8cd4::f_001c8cd4);

// f_001c98d8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001c98d8 {

struct __attribute__((packed)) Object_001c98d8_0 {
    u8 unknown_0[0x44];  // (not used here)
    u32 word_44;
};
GUEST_OFFSET(Object_001c98d8_0, word_44, 0x44);  // (from the original)

inline constexpr guest::Function<0x0014f3cc, u32(u32, u32, u32, u32)> call_0014f3cc;  // (from the original)
inline constexpr guest::Function<0x001cb118, u32(u32, u32, u32, u32)> call_001cb118;  // (from the original)
inline constexpr guest::Function<0x0052e3ec, u32(u32, u32, u32, u32)> call_0052e3ec;  // (from the original)
inline constexpr guest::Function<0x0070ab44, u32(u32, u32, u32, u32)> call_0070ab44;  // (from the original)
inline constexpr guest::Function<0x00718a58, u32(u32, u32, u32, u32)> call_00718a58;  // (from the original)

u32 f_001c98d8(gptr<Object_001c98d8_0> arg0, u32 r1) {
    u32 ea = 0;
    u32 res = 0;
    u32 r0 = arg0.addr();
    u32 r2 = 0;
    u32 r3 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 0x60u;  // (from the original)
    r5 = arg0->word_44;
    r4 = r0;
    r6 = r13 + 0x40u;  // (from the original)
    if (r5 == 0) {
        goto L_1c9990;
    }
    r0 = *gptr<u32>(r5 + 0x68u);  // (from the original)
    r3 = 0u;
    r1 = r13 + 0x10u;  // (from the original)
    r2 = *gptr<u32>(r0 + 0xb4u);  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0070ab44(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    if (r0 == 0) {
        goto L_1c9990;
    }
    r2 = 0x846fa8u;  // (from the original)
    r3 = 0u;
    r1 = r13;
    r0 = r5 + 0xb4u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00718a58(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        r0 = 0xae5658u;  // (from the original)
        *gptr<u32>(r13) = u32(*gptr<u32>(r0));
        *gptr<u32>(r13 + 4u) = u32(*gptr<u32>(r0 + 4u));
        *gptr<u32>(r13 + 8u) = u32(*gptr<u32>(r0 + 8u));
    }
    r0 = r13;
    r1 = r13 + 0x10u;  // (from the original)
    r2 = r0;
    guest::cpu()->r[13] = r13;
    r0 = call_0014f3cc(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = r13;
    r0 = r6;
    guest::cpu()->r[13] = r13;
    r0 = call_0052e3ec(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    ea = r4 + 0xcu;  // (from the original)
    r1 = *gptr<u32>(ea + 4);
    r2 = *gptr<u32>(ea + 8);
    *gptr<u32>(r13) = u32(*gptr<u32>(ea));
    *gptr<u32>(r13 + 4) = u32(r1);
    *gptr<u32>(r13 + 8) = u32(r2);
    r1 = r13;
    r2 = *gptr<u32>(r4 + 0x3cu);  // (from the original)
    r0 = r4;
    guest::cpu()->r[13] = r13;
    r0 = call_001cb118(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r0 = *gptr<u32>(r4 + 0x3cu);  // (from the original)
    res = r0;
    if (!u32(res == 0) && res >> 0x1f == (r0 & (r0 ^ res)) >> 0x1f) {  // (from the original)
        r0 = r0 - 1u;
        *gptr<u32>(r4 + 0x3cu) = u32(r0);  // (from the original)
    }
L_1c9990:;
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


u32 f_001c9f88(gptr<Object_001c9f88_0> arg0, float S0, float S1) {
    u32 res = 0;
    u32 r0 = arg0.addr();
    u32 r1 = 0;
    float S2 = 0;
    float S3 = 0;
    r1 = arg0->word_38;
    res = r1;
    if (res >> 0x1f != (r1 & (r1 ^ res)) >> 0x1f) {  // (from the original)
        r1 = r1 + 1u;
        *gptr<u32>(r0 + 0x38u) = u32(r1);  // (from the original)
        r0 = 0u;
        guest::cpu()->r[1] = r1;
        guest::cpu()->s[0] = S0;
        guest::cpu()->s[1] = S1;
        return r0;
    }
    res = r1 - 0xeu;  // (from the original)
    S0 = std::bit_cast<float>(*gptr<u32>(0x1ca078u));  // (from the original)
    if (!(!u32(res == 0) && res >> 0x1f == ((r1 ^ 0xeu) & (r1 ^ res)) >> 0x1f)) {  // (from the original)
        S1 = float(s32(std::bit_cast<u32>(std::bit_cast<float>(r1)))) * std::bit_cast<float>(*gptr<u32>(0x1ca07cu));  // (from the original)
        S0 = std::bit_cast<float>(*gptr<u32>(0x1ca080u)) + std::bit_cast<float>(arg0->word_40) * S0 * S1;  // (from the original)
        arg0->word_24 = u32(std::bit_cast<u32>(S0));
        arg0->word_28 = u32(std::bit_cast<u32>(S0));
        arg0->word_2c = u32(std::bit_cast<u32>(S0));
        r1 = r1 + 1u;
        *gptr<u32>(r0 + 0x38u) = u32(r1);  // (from the original)
        r0 = 0u;
        guest::cpu()->r[1] = r1;
        guest::cpu()->s[0] = S0;
        guest::cpu()->s[1] = S1;
        return r0;
    }
    S1 = std::bit_cast<float>(*gptr<u32>(0x1ca084u));  // (from the original)
    S3 = std::bit_cast<float>(*gptr<u32>(0x1ca088u));  // (from the original)
    res = r1 - 0x11u;  // (from the original)
    if (!(!u32(res == 0) && res >> 0x1f == ((r1 ^ 0x11u) & (r1 ^ res)) >> 0x1f)) {  // (from the original)
        S1 = (float(s32(std::bit_cast<u32>(std::bit_cast<float>(r1)))) - std::bit_cast<float>(*gptr<u32>(0x1ca08cu))) * S1;  // (from the original)
        S2 = std::bit_cast<float>(*gptr<u32>(r0 + 0x40u));  // (from the original)
        S0 = S2 * S0;
        S0 = S0 + (S2 * S3 - S0) * S1;
        *gptr<u32>(r0 + 0x24u) = u32(std::bit_cast<u32>(S0));  // (from the original)
        *gptr<u32>(r0 + 0x28u) = u32(std::bit_cast<u32>(S0));  // (from the original)
        *gptr<u32>(r0 + 0x2cu) = u32(std::bit_cast<u32>(S0));  // (from the original)
        r1 = r1 + 1u;
        *gptr<u32>(r0 + 0x38u) = u32(r1);  // (from the original)
        r0 = 0u;
        guest::cpu()->r[1] = r1;
        guest::cpu()->s[0] = S0;
        guest::cpu()->s[1] = S1;
        return r0;
    }
    res = r1 - 0x14u;  // (from the original)
    if (!(!u32(res == 0) && res >> 0x1f == ((r1 ^ 0x14u) & (r1 ^ res)) >> 0x1f)) {  // (from the original)
        S2 = std::bit_cast<float>(*gptr<u32>(r0 + 0x40u));  // (from the original)
        S1 = (float(s32(std::bit_cast<u32>(std::bit_cast<float>(r1)))) - std::bit_cast<float>(*gptr<u32>(0x1ca090u))) * S1;  // (from the original)
        S0 = S2 * S3;
        S0 = S0 + (S2 - S0) * S1;
        *gptr<u32>(r0 + 0x24u) = u32(std::bit_cast<u32>(S0));  // (from the original)
        *gptr<u32>(r0 + 0x28u) = u32(std::bit_cast<u32>(S0));  // (from the original)
        *gptr<u32>(r0 + 0x2cu) = u32(std::bit_cast<u32>(S0));  // (from the original)
        r1 = r1 + 1u;
        *gptr<u32>(r0 + 0x38u) = u32(r1);  // (from the original)
        r0 = 0u;
        guest::cpu()->r[1] = r1;
        guest::cpu()->s[0] = S0;
        guest::cpu()->s[1] = S1;
        return r0;
    }
    r1 = *gptr<u32>(r0 + 0x40u);  // (from the original)
    *gptr<u32>(r0 + 0x24u) = u32(r1);  // (from the original)
    *gptr<u32>(r0 + 0x28u) = u32(r1);  // (from the original)
    *gptr<u32>(r0 + 0x2cu) = u32(r1);  // (from the original)
    r0 = 1u;
    guest::cpu()->r[1] = r1;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    return r0;
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


u32 f_001ca2c0(gptr<Object_001ca2c0_0> arg0, float S0, float S1) {
    u32 res = 0;
    u32 r0 = arg0.addr();
    u32 r1 = 0;
    r1 = arg0->word_38;
    res = r1;
    if (res >> 0x1f != (r1 & (r1 ^ res)) >> 0x1f) {  // (from the original)
        r1 = r1 + 1u;
        *gptr<u32>(r0 + 0x38u) = u32(r1);  // (from the original)
        r0 = 0u;
        guest::cpu()->r[1] = r1;
        guest::cpu()->s[0] = S0;
        guest::cpu()->s[1] = S1;
        return r0;
    }
    res = r1 - 9u;
    if (!u32(res == 0) && res >> 0x1f == ((r1 ^ 9u) & (r1 ^ res)) >> 0x1f) {  // (from the original)
        r0 = 1u;
        guest::cpu()->r[1] = r1;
        guest::cpu()->s[0] = S0;
        guest::cpu()->s[1] = S1;
        return r0;
    }
    S1 = float(s32(std::bit_cast<u32>(std::bit_cast<float>(r1)))) * std::bit_cast<float>(*gptr<u32>(0x1ca310u));  // (from the original)
    S0 = std::bit_cast<float>(*gptr<u32>(r0 + 0x40u));  // (from the original)
    S0 = S0 + -S0 * S1;
    *gptr<u32>(r0 + 0x24u) = u32(std::bit_cast<u32>(S0));  // (from the original)
    *gptr<u32>(r0 + 0x28u) = u32(std::bit_cast<u32>(S0));  // (from the original)
    *gptr<u32>(r0 + 0x2cu) = u32(std::bit_cast<u32>(S0));  // (from the original)
    r1 = r1 + 1u;
    *gptr<u32>(r0 + 0x38u) = u32(r1);  // (from the original)
    r0 = 0u;
    guest::cpu()->r[1] = r1;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    return r0;
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
    u32 r4 = guest::cpu()->r[4];
    guest::cpu()->r[13] -= 8u;
    r4 = r0;
    r0 = arg0->word_1a0;
    if (r0 == 0) {
        r0 = 1u;
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r0 = call_0074fdd0(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 != 0) {
        r1 = *gptr<u32>(r4 + 0x1a0u);  // (from the original)
        if (u32(*gptr<u8>(r1 + 0x1cu)) != 0) {  // (from the original)
            r2 = *gptr<u32>(r4 + 0x1a8u);  // (from the original)
            r3 = 0u;
            r0 = r4 + 4u;
            r0 = call_00568984(r0, r1, r2, r3);
            r1 = guest::cpu()->r[1];
        }
        r0 = 0u;
        *gptr<u32>(r4 + 0x1a0u) = u32(r0);  // (from the original)
        *gptr<u32>(r4 + 0x1a8u) = u32(r0);  // (from the original)
        r0 = 1u;
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r0 = *gptr<u32>(r4 + 0x1a0u);  // (from the original)
    r0 = call_00569544(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r4 + 4u;
    r0 = call_00568c10(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r0 = 0u;
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1;
    return r0;
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
    u32 r4 = guest::cpu()->r[4];
    guest::cpu()->r[13] -= 8u;
    r4 = r0;
    r0 = u32(arg0->byte_1ad);
    if (r0 != 0) {
        r0 = call_001323bc(r0, r1, r2, guest::cpu()->r[3]);
        r1 = r4 + 4u;
        guest::cpu()->r[13] += 8u;
        r2 = 0u;
        return call_00569e6c(r0, r1, r2, guest::cpu()->r[3]);
    }
    r0 = call_001323bc(r0, r1, r2, guest::cpu()->r[3]);
    r1 = r4 + 4u;
    guest::cpu()->r[13] += 8u;
    r2 = 1u;
    return call_00569e6c(r0, r1, r2, guest::cpu()->r[3]);
}

}  // namespace d_001cb690
GUEST_EXPORT(0x001cb690, d_001cb690::f_001cb690);

// f_001cb78c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001cb78c {

inline constexpr guest::Function<0x001323b4, u32(u32, u32, u32, u32)> call_001323b4;  // (from the original)
inline constexpr guest::Function<0x001fa354, u32(u32, u32, u32, u32)> call_001fa354;  // (from the original)
inline constexpr guest::Function<0x006d1e64, u32(u32, u32, u32, u32)> call_006d1e64;  // (from the original)

u32 f_001cb78c(u32 r0) {
    u32 r4 = guest::cpu()->r[4];
    guest::cpu()->r[13] -= 8u;
    r4 = r0;
    r0 = r0 + 4u;
    r0 = call_001323b4(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    r0 = 0u;
    *gptr<u8>(r4 + 0x1acu) = u8(r0);  // (from the original)
    r0 = call_006d1e64(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    r0 = *gptr<u32>(r0 + 0x1f4u);  // (from the original)
    r0 = call_001fa354(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    r0 = 1u;
    guest::cpu()->r[13] += 8u;
    return r0;
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

inline constexpr guest::Function<0x00568630, u32(u32, u32, u32, u32)> call_00568630;  // (from the original)
inline constexpr guest::Function<0x00568984, u32(u32, u32, u32, u32)> call_00568984;  // (from the original)

u32 f_001cb7ec(gptr<Object_001cb7ec_0> arg0, u32 r1, float S0) {
    u32 r0 = arg0.addr();
    u32 r2 = 0;
    u32 r3 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 zf = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r5 = r1;
    r1 = arg0->word_1a0;
    r4 = r0;
    zf = r1 == 0;
    if (!zf) {
        zf = u32(*gptr<u8>(r1 + 0x1cu)) == 0;  // (from the original)
    }
    if (!zf) {
        r2 = arg0->word_1a8;
        r3 = 0u;
        r0 = r4 + 4u;
        guest::cpu()->s[0] = S0;
        r0 = call_00568984(r0, r1, r2, r3);
        S0 = guest::cpu()->s[0];
    }
    if (r5 != 0) {
        if (r5 != 1u) {
            goto L_1cb854;
        }
    } else {
        *gptr<u32>(r4 + 0x1a8u) = u32(*gptr<u32>(r4 + 0x1a4u));  // (from the original)
        *gptr<u32>(r4 + 0x1a0u) = u32(r4 + 0x150u);  // (from the original)
        goto L_1cb854;
    }
    *gptr<u32>(r4 + 0x1a8u) = u32(*gptr<u32>(r4 + 0x1a4u));  // (from the original)
    *gptr<u32>(r4 + 0x1a0u) = u32(r4 + 0x178u);  // (from the original)
L_1cb854:;
    r1 = *gptr<u32>(r4 + 0x1a0u);  // (from the original)
    r2 = *gptr<u32>(r4 + 0x1a8u);  // (from the original)
    r3 = 0u;
    r0 = r4 + 4u;
    guest::cpu()->s[0] = S0;
    r0 = call_00568630(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = *gptr<u32>(r4 + 0x1a0u);  // (from the original)
    S0 = std::bit_cast<float>(*gptr<u32>(0x1cb880u));  // (from the original)
    r1 = *gptr<u32>(*gptr<u32>(r0) + 8u);
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->s[0] = S0;
    return guest::call_address<u32>(r1, r0, r1, r2, r3);
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
    u32 r1 = 0;
    r1 = 0x8ebb64u;  // (from the original)
    guest::cpu()->r[13] -= 8u;
    arg0->word_0 = u32(r1);
    r0 = r0 + 4u;
    r0 = call_00125e3c(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r0 = r0 + 0x14cu;  // (from the original)
    r0 = call_00125aec(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r0 = r0 + 0x28u;  // (from the original)
    r0 = call_00125aec(r0, r1, r2, guest::cpu()->r[3]);
    r0 = r0 - 0x178u;  // (from the original)
    r1 = 0u;
    *gptr<u32>(r0 + 0x1a0u) = u32(r1);  // (from the original)
    *gptr<u32>(r0 + 0x1a4u) = u32(r1);  // (from the original)
    *gptr<u32>(r0 + 0x1a8u) = u32(r1);  // (from the original)
    *gptr<u8>(r0 + 0x1acu) = u8(r1);  // (from the original)
    *gptr<u8>(r0 + 0x1adu) = u8(1u);  // (from the original)
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1;
    return r0;
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
    u32 r1 = 0;
    r1 = 0x8ebb64u;  // (from the original)
    guest::cpu()->r[13] -= 8u;
    arg0->word_0 = u32(r1);
    r0 = r0 + 0x178u;  // (from the original)
    r0 = call_0056988c(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r0 = r0 - 0x28u;  // (from the original)
    r0 = call_0056988c(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r0 = r0 - 0x14cu;  // (from the original)
    r0 = call_005bf744(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r0 = r0 - 4u;
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1;
    return r0;
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
    u32 r4 = guest::cpu()->r[4];
    u32 r13 = guest::cpu()->r[13];
    r4 = r0;
    r0 = r1;
    r1 = arg0->word_18;
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
    r0 = call_00745f10(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    if (r0 == 0) {
        r13 = r13 + 0x48u;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        guest::cpu()->s[0] = S0;
        guest::cpu()->s[1] = S1;
        return r0;
    }
    S0 = std::bit_cast<float>(*gptr<u32>(r0));
    S1 = std::bit_cast<float>(*gptr<u32>(r0 + 4));
    S2 = std::bit_cast<float>(*gptr<u32>(r0 + 8));
    S3 = std::bit_cast<float>(*gptr<u32>(r0 + 0xc));  // (from the original)
    S4 = std::bit_cast<float>(*gptr<u32>(r0 + 0x10));  // (from the original)
    S5 = std::bit_cast<float>(*gptr<u32>(r0 + 0x14));  // (from the original)
    S6 = std::bit_cast<float>(*gptr<u32>(r0 + 0x18));  // (from the original)
    S7 = std::bit_cast<float>(*gptr<u32>(r0 + 0x1c));  // (from the original)
    S8 = std::bit_cast<float>(*gptr<u32>(r0 + 0x20));  // (from the original)
    S9 = std::bit_cast<float>(*gptr<u32>(r0 + 0x24));  // (from the original)
    S10 = std::bit_cast<float>(*gptr<u32>(r0 + 0x28));  // (from the original)
    S11 = std::bit_cast<float>(*gptr<u32>(r0 + 0x2c));  // (from the original)
    r0 = r13 + 0x30u;  // (from the original)
    *gptr<u32>(r13) = u32(std::bit_cast<u32>(S0));
    *gptr<u32>(r13 + 4) = u32(std::bit_cast<u32>(S1));
    *gptr<u32>(r13 + 8) = u32(std::bit_cast<u32>(S2));
    *gptr<u32>(r13 + 0xc) = u32(std::bit_cast<u32>(S3));  // (from the original)
    *gptr<u32>(r13 + 0x10) = u32(std::bit_cast<u32>(S4));  // (from the original)
    *gptr<u32>(r13 + 0x14) = u32(std::bit_cast<u32>(S5));  // (from the original)
    *gptr<u32>(r13 + 0x18) = u32(std::bit_cast<u32>(S6));  // (from the original)
    *gptr<u32>(r13 + 0x1c) = u32(std::bit_cast<u32>(S7));  // (from the original)
    *gptr<u32>(r13 + 0x20) = u32(std::bit_cast<u32>(S8));  // (from the original)
    *gptr<u32>(r13 + 0x24) = u32(std::bit_cast<u32>(S9));  // (from the original)
    *gptr<u32>(r13 + 0x28) = u32(std::bit_cast<u32>(S10));  // (from the original)
    *gptr<u32>(r13 + 0x2c) = u32(std::bit_cast<u32>(S11));  // (from the original)
    S0 = std::bit_cast<float>(*gptr<u32>(r4 + 0x4cu));  // (from the original)
    S2 = S0;
    S1 = S0;
    *gptr<u32>(r0) = u32(std::bit_cast<u32>(S0));
    *gptr<u32>(r0 + 4) = u32(std::bit_cast<u32>(S1));
    *gptr<u32>(r0 + 8) = u32(std::bit_cast<u32>(S2));
    r0 = r13;
    r1 = r0;
    r2 = r4 + 0x1cu;  // (from the original)
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
    r0 = call_0014ef20(r0, r1, r2, guest::cpu()->r[3]);
    r2 = guest::cpu()->r[2];
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    S2 = guest::cpu()->s[2];
    S3 = guest::cpu()->s[3];
    S4 = guest::cpu()->s[4];
    S5 = guest::cpu()->s[5];
    S6 = guest::cpu()->s[6];
    S7 = guest::cpu()->s[7];
    S8 = guest::cpu()->s[8];
    S9 = guest::cpu()->s[9];
    S10 = guest::cpu()->s[10];
    S11 = guest::cpu()->s[11];
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
    guest::cpu()->s[7] = S7;
    guest::cpu()->s[8] = S8;
    guest::cpu()->s[9] = S9;
    guest::cpu()->s[10] = S10;
    guest::cpu()->s[11] = S11;
    r0 = call_004ee4c8(r0, r1, r2, guest::cpu()->r[3]);
    r2 = guest::cpu()->r[2];
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    S2 = guest::cpu()->s[2];
    S3 = guest::cpu()->s[3];
    S4 = guest::cpu()->s[4];
    S5 = guest::cpu()->s[5];
    S6 = guest::cpu()->s[6];
    S7 = guest::cpu()->s[7];
    S8 = guest::cpu()->s[8];
    S9 = guest::cpu()->s[9];
    S10 = guest::cpu()->s[10];
    S11 = guest::cpu()->s[11];
    r1 = r13 + 0x30u;  // (from the original)
    r0 = r4;
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
    r0 = call_004ee3e8(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    S2 = guest::cpu()->s[2];
    S3 = guest::cpu()->s[3];
    S4 = guest::cpu()->s[4];
    S5 = guest::cpu()->s[5];
    S6 = guest::cpu()->s[6];
    S7 = guest::cpu()->s[7];
    S8 = guest::cpu()->s[8];
    S9 = guest::cpu()->s[9];
    S10 = guest::cpu()->s[10];
    S11 = guest::cpu()->s[11];
    r0 = r4;
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
    r0 = call_004edd20(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    r13 = r13 + 0x48u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    return r0;
}

}  // namespace d_001cbb20
GUEST_EXPORT(0x001cbb20, d_001cbb20::f_001cbb20);

// f_001ccb14: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001ccb14 {

inline constexpr guest::Function<0x002134a0, u32(u32, u32, u32, u32)> call_002134a0;  // (from the original)
inline constexpr guest::Function<0x00301d0d, u32(u32, u32, u32, u32)> call_00301d0c;  // (from the original)
inline constexpr guest::Function<0x00810f00, u32(u32, u32, u32, u32)> call_00810f00;  // (from the original)

u32 f_001ccb14(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r0 = call_002134a0(r0, r1, r2, r3);
    r4 = 0x8f9060u;  // (from the original)
    r1 = 0x334e10u;  // (from the original)
    r3 = 0xau;  // (from the original)
    r2 = 0x14u;  // (from the original)
    *gptr<u32>(r0) = u32(r4);
    r0 = r0 + 0xcu;  // (from the original)
    r0 = call_00301d0c(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0xcu;  // (from the original)
    r5 = 0u;
    r1 = r0 + 0xd4u;  // (from the original)
    *gptr<u16>(r0 + 0xd4u) = u16(r5);  // (from the original)
    r0 = r0 + 0xd8u;  // (from the original)
    r0 = call_002134a0(r0, r1, r2, r3);
    r1 = 0x334e10u;  // (from the original)
    r3 = 0xau;  // (from the original)
    r2 = 0x14u;  // (from the original)
    *gptr<u32>(r0) = u32(r4);
    r0 = r0 + 0xcu;  // (from the original)
    r0 = call_00301d0c(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = r0 - 0xcu;  // (from the original)
    *gptr<u16>(r0 + 0xc8u) = u16(r5);  // (from the original)
    r0 = r1 + 0xd8u;  // (from the original)
    r0 = call_002134a0(r0, r1, r2, r3);
    r3 = 0xau;  // (from the original)
    r2 = 0x260u;  // (from the original)
    *gptr<u32>(r0) = u32(0x8f8ef8u);  // (from the original)
    r0 = r0 + 0xcu;  // (from the original)
    r1 = 0x1cdbc4u;  // (from the original)
    r0 = call_00301d0c(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = r0 - 0xcu;  // (from the original)
    *gptr<u16>(r0 + 0x17c0u) = u16(r5);  // (from the original)
    r0 = r1 + 0x17d0u;  // (from the original)
    r0 = call_002134a0(r0, r1, r2, r3);
    r2 = 0x8a8u;  // (from the original)
    r3 = 0xau;  // (from the original)
    *gptr<u32>(r0) = u32(0x8f91a0u);  // (from the original)
    r0 = r0 + 0xcu;  // (from the original)
    r1 = 0x6c32f8u;  // (from the original)
    r0 = call_00301d0c(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = r0 - 0xcu;  // (from the original)
    *gptr<u16>(r0 + 0x5690u) = u16(r5);  // (from the original)
    r0 = r1 + 0x56a0u;  // (from the original)
    r0 = call_002134a0(r0, r1, r2, r3);
    r3 = 0xau;  // (from the original)
    r2 = 0x14u;  // (from the original)
    *gptr<u32>(r0) = u32(0x8f90d8u);  // (from the original)
    r0 = r0 + 0xcu;  // (from the original)
    r1 = 0x7f3f98u;  // (from the original)
    r0 = call_00301d0c(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = r0 - 0xcu;  // (from the original)
    *gptr<u16>(r0 + 0xc8u) = u16(r5);  // (from the original)
    r0 = r1 + 0xdcu;  // (from the original)
    *gptr<u32>(r1 + 0xd8u) = u32(r5);  // (from the original)
    r0 = call_00810f00(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 + 0x2cu;  // (from the original)
    r0 = call_00810f00(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 + 0x2cu;  // (from the original)
    r0 = call_00810f00(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 + 0x2cu;  // (from the original)
    r0 = call_00810f00(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 + 0x2cu;  // (from the original)
    r0 = call_00810f00(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 + 0x2cu;  // (from the original)
    r0 = call_00810f00(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r0 = r0 - 0x71d8u;  // (from the original)
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_001ccb14
GUEST_EXPORT(0x001ccb14, d_001ccb14::f_001ccb14);

// f_001cce78: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001cce78 {

inline constexpr guest::Function<0x001ccc58, u32(u32, u32, u32, u32)> call_001ccc58;  // (from the original)

u32 f_001cce78(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 ea = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r13 = guest::cpu()->r[13];
    *gptr<u32>(r13 + 0xfffffff0u) = u32(r3);  // (from the original)
    r13 = r13 - 0x10;  // (from the original)
    r4 = r0;
    r5 = r2;
    r2 = r1;
    *gptr<u32>(r13) = u32(*gptr<u32>(r13 + 0x10u));  // (from the original)
    r1 = 5u;
    r0 = r4;
    guest::cpu()->r[13] = r13;
    r0 = call_001ccc58(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    if (r0 == 0) {
        r13 = r13 + 0x10;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    ea = r4 + 8u;
    r0 = *gptr<u32>(ea);
    r1 = u32(u64(s64(s32(0x66666667u)) * s32(*gptr<u32>(ea + 4) - r0)) >> 0x20);  // (from the original)
    r1 = u32(s32(r1) >> 4) - u32(s32(r1) >> 0x1f);  // (from the original)
    r1 = ~0x27u + (r1 + (r1 << 2) << 3);  // (from the original)
    *gptr<u32>(r0 + r1 + 4u) = u32(r5);
    r0 = 1u;
    r13 = r13 + 0x10;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_001cce78
GUEST_EXPORT(0x001cce78, d_001cce78::f_001cce78);

// f_001ccee0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001ccee0 {

inline constexpr guest::Function<0x001ccc58, u32(u32, u32, u32, u32)> call_001ccc58;  // (from the original)

u32 f_001ccee0(u32 r0, u32 r1, u32 r2, u32 r3, float S0, float S1) {
    u32 ea = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r13 = guest::cpu()->r[13];
    *gptr<u32>(r13 + 0xfffffff0u) = u32(r3);  // (from the original)
    r13 = r13 - 0x10;  // (from the original)
    r5 = r0;
    r4 = r2;
    r2 = r1;
    *gptr<u32>(r13) = u32(*gptr<u32>(r13 + 0x10u));  // (from the original)
    r1 = 2u;
    r0 = r5;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    r0 = call_001ccc58(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    if (r0 == 0) {
        r13 = r13 + 0x10;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        guest::cpu()->s[0] = S0;
        guest::cpu()->s[1] = S1;
        return r0;
    }
    ea = r5 + 8u;
    r0 = *gptr<u32>(ea);
    S1 = std::bit_cast<float>(*gptr<u32>(r4));
    S0 = std::bit_cast<float>(*gptr<u32>(r4 + 8u));
    r1 = u32(u64(s64(s32(0x66666667u)) * s32(*gptr<u32>(ea + 4) - r0)) >> 0x20);  // (from the original)
    r2 = u32(s32(r1) >> 4) - u32(s32(r1) >> 0x1f);  // (from the original)
    r1 = *gptr<u32>(r4 + 4u);
    r0 = r0 + (~0x27u + (r2 + (r2 << 2) << 3)) + 0x10u;  // (from the original)
    *gptr<u32>(r0) = u32(std::bit_cast<u32>(S1));
    *gptr<u32>(r0 + 4u) = u32(r1);
    *gptr<u32>(r0 + 8u) = u32(std::bit_cast<u32>(S0));
    r0 = 1u;
    r13 = r13 + 0x10;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    return r0;
}

}  // namespace d_001ccee0
GUEST_EXPORT(0x001ccee0, d_001ccee0::f_001ccee0);

// f_001cd538: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001cd538 {

inline constexpr guest::Function<0x001ccc58, u32(u32, u32, u32, u32)> call_001ccc58;  // (from the original)

u32 f_001cd538(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 ea = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r13 = guest::cpu()->r[13];
    *gptr<u32>(r13 + 0xffffffecu) = u32(r3);  // (from the original)
    r13 = r13 - 0x14;  // (from the original)
    r4 = r0;
    r5 = r2;
    r0 = 0x868474u;  // (from the original)
    r6 = r3;
    *gptr<u32>(r13) = u32(u32(s32(s16(*gptr<u16>(r0)))));
    r3 = u32(s32(s16(*gptr<u16>(r0))));
    r2 = r1;
    r1 = 4u;
    r0 = r4;
    guest::cpu()->r[13] = r13;
    r0 = call_001ccc58(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    if (r0 != 0) {
        ea = r4 + 8u;
        r2 = *gptr<u32>(ea);
        r0 = 0x66666667u;  // (from the original)
        r1 = ~0x27u;  // (from the original)
        r3 = u32(u64(s64(s32(r0)) * s32(*gptr<u32>(ea + 4) - r2)) >> 0x20);  // (from the original)
        r3 = u32(s32(r3) >> 4) - u32(s32(r3) >> 0x1f);  // (from the original)
        ea = r2 + (r1 + (r3 + (r3 << 2) << 3)) + 0x20u;  // (from the original)
        *gptr<u16>(ea) = u16(r5);
        ea = r4 + 8u;
        r2 = *gptr<u32>(ea);
        r3 = u32(u64(s64(s32(r0)) * s32(*gptr<u32>(ea + 4) - r2)) >> 0x20);  // (from the original)
        r3 = u32(s32(r3) >> 4) - u32(s32(r3) >> 0x1f);  // (from the original)
        ea = r2 + (r1 + (r3 + (r3 << 2) << 3)) + 0x1eu;  // (from the original)
        *gptr<u16>(ea) = u16(r6);
        ea = r4 + 8u;
        r2 = *gptr<u32>(ea);
        r0 = u32(u64(s64(s32(r0)) * s32(*gptr<u32>(ea + 4) - r2)) >> 0x20);  // (from the original)
        r0 = u32(s32(r0) >> 4) - u32(s32(r0) >> 0x1f);  // (from the original)
        r0 = r1 + (r0 + (r0 << 2) << 3) + r2;
        r1 = 0u;
        *gptr<u16>(r0 + 0x1cu) = u16(r1);  // (from the original)
        r0 = 1u;
    }
    r13 = r13 + 0x14;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_001cd538
GUEST_EXPORT(0x001cd538, d_001cd538::f_001cd538);

// f_001cd668: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001cd668 {

inline constexpr guest::Function<0x001ccc58, u32(u32, u32, u32, u32)> call_001ccc58;  // (from the original)

u32 f_001cd668(u32 r0_unused, u32 r1, u32 r2_unused, u32 r3) {
    u32 r2 = 0;
    u32 r13 = guest::cpu()->r[13];
    *gptr<u32>(r13 + 0xfffffff8u) = u32(r3);  // (from the original)
    r13 = r13 - 8;
    r3 = 0x868474u;  // (from the original)
    r2 = r1;
    r1 = 0u;
    *gptr<u32>(r13) = u32(u32(s32(s16(*gptr<u16>(r3)))));
    r3 = u32(s32(s16(*gptr<u16>(r3))));
    guest::cpu()->r[13] = r13;
    call_001ccc58(guest::cpu()->r[0], r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r13 = r13 + 8;
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return guest::cpu()->r[0];
}

}  // namespace d_001cd668
GUEST_EXPORT(0x001cd668, d_001cd668::f_001cd668);

// f_001cd690: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001cd690 {

inline constexpr guest::Function<0x001ccc58, u32(u32, u32, u32, u32)> call_001ccc58;  // (from the original)

u32 f_001cd690(u32 r0_unused, u32 r1, u32 r2_unused, u32 r3) {
    u32 r2 = 0;
    u32 r13 = guest::cpu()->r[13];
    *gptr<u32>(r13 + 0xfffffff8u) = u32(r3);  // (from the original)
    r13 = r13 - 8;
    r3 = 0x868474u;  // (from the original)
    r2 = r1;
    r1 = 1u;
    *gptr<u32>(r13) = u32(u32(s32(s16(*gptr<u16>(r3)))));
    r3 = u32(s32(s16(*gptr<u16>(r3))));
    guest::cpu()->r[13] = r13;
    call_001ccc58(guest::cpu()->r[0], r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r13 = r13 + 8;
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return guest::cpu()->r[0];
}

}  // namespace d_001cd690
GUEST_EXPORT(0x001cd690, d_001cd690::f_001cd690);

// f_001cd6b8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001cd6b8 {

inline constexpr guest::Function<0x001ccc58, u32(u32, u32, u32, u32)> call_001ccc58;  // (from the original)

u32 f_001cd6b8(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 ea = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r13 = guest::cpu()->r[13];
    *gptr<u32>(r13 + 0xfffffff0u) = u32(r3);  // (from the original)
    r13 = r13 - 0x10;  // (from the original)
    r4 = r0;
    r5 = r2;
    r2 = r1;
    *gptr<u32>(r13) = u32(*gptr<u32>(r13 + 0x10u));  // (from the original)
    r1 = 3u;
    r0 = r4;
    guest::cpu()->r[13] = r13;
    r0 = call_001ccc58(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    if (r0 == 0) {
        r13 = r13 + 0x10;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    ea = r4 + 8u;
    r2 = *gptr<u32>(ea);
    r0 = 0x66666667u;  // (from the original)
    r1 = ~0x27u;  // (from the original)
    r3 = u32(u64(s64(s32(r0)) * s32(*gptr<u32>(ea + 4) - r2)) >> 0x20);  // (from the original)
    r3 = u32(s32(r3) >> 4) - u32(s32(r3) >> 0x1f);  // (from the original)
    ea = r2 + (r1 + (r3 + (r3 << 2) << 3)) + 2u;
    *gptr<u8>(ea) = u8(r5);
    ea = r4 + 8u;
    r2 = *gptr<u32>(ea);
    r0 = u32(u64(s64(s32(r0)) * s32(*gptr<u32>(ea + 4) - r2)) >> 0x20);  // (from the original)
    r0 = u32(s32(r0) >> 4) - u32(s32(r0) >> 0x1f);  // (from the original)
    r0 = r1 + (r0 + (r0 << 2) << 3) + r2;
    r1 = 0u;
    *gptr<u16>(r0 + 0x1cu) = u16(r1);  // (from the original)
    r0 = 1u;
    r13 = r13 + 0x10;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
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
    u32 r1 = 0;
    u32 r2 = 0;
    u32 r3 = 0;
    guest::cpu()->r[13] -= 4u;
    r3 = arg0->word_8;
    r2 = arg0->word_c;
    r1 = u32(u64(s64(s32(0x66666667u)) * s32(r2 - r3)) >> 0x20);  // (from the original)
    r1 = u32(s32(r1) >> 4) - u32(s32(r1) >> 0x1f);  // (from the original)
    if (r1 == arg0->word_10) {
        guest::cpu()->r[13] += 4u;
        guest::cpu()->r[1] = r1;
        return;
    }
    r1 = ~0x27u + (r1 + (r1 << 2) << 3) + r3;  // (from the original)
    if (r2 != 0) {
        *gptr<u8>(r2) = u8(u32(*gptr<u8>(r1)));
        *gptr<u8>(r2 + 1u) = u8(u32(*gptr<u8>(r1 + 1u)));
        *gptr<u8>(r2 + 2u) = u8(u32(*gptr<u8>(r1 + 2u)));
        *gptr<u32>(r2 + 4u) = u32(*gptr<u32>(r1 + 4u));
        *gptr<u32>(r2 + 8u) = u32(*gptr<u32>(r1 + 8u));
        *gptr<u32>(r2 + 0xcu) = u32(*gptr<u32>(r1 + 0xcu));  // (from the original)
        *gptr<u32>(r2 + 0x10u) = u32(*gptr<u32>(r1 + 0x10u));  // (from the original)
        *gptr<u32>(r2 + 0x14u) = u32(*gptr<u32>(r1 + 0x14u));  // (from the original)
        *gptr<u32>(r2 + 0x18u) = u32(*gptr<u32>(r1 + 0x18u));  // (from the original)
        *gptr<u16>(r2 + 0x1cu) = u16(u32(*gptr<u16>(r1 + 0x1cu)));  // (from the original)
        *gptr<u16>(r2 + 0x1eu) = u16(u32(*gptr<u16>(r1 + 0x1eu)));  // (from the original)
        *gptr<u16>(r2 + 0x20u) = u16(u32(*gptr<u16>(r1 + 0x20u)));  // (from the original)
        *gptr<u16>(r2 + 0x22u) = u16(u32(*gptr<u16>(r1 + 0x22u)));  // (from the original)
        *gptr<u16>(r2 + 0x24u) = u16(u32(*gptr<u16>(r1 + 0x24u)));  // (from the original)
    }
    r1 = arg0->word_c + 0x28u;  // (from the original)
    arg0->word_c = u32(r1);
    guest::cpu()->r[13] += 4u;
    guest::cpu()->r[1] = r1;
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
    u32 r0 = arg0.addr();
    arg0->word_4 = u32(r1);
    r0 = 1u;
    return r0;
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
    u32 ea = 0;
    u32 r0 = arg0.addr();
    u32 r1 = 0;
    u32 r2 = 0;
    u32 r3 = 0;
    r1 = arg0->word_4;
    r3 = ~0x27u;  // (from the original)
    *gptr<u32>(*gptr<u32>(r1 + 0x68u) + 0x58u) = u32(*gptr<u32>(r1 + 0x828u));  // (from the original)
    r1 = arg0->word_8;
    r2 = u32(u64(s64(s32(0x66666667u)) * s32(arg0->word_c - r1)) >> 0x20);  // (from the original)
    r2 = u32(s32(r2) >> 4) - u32(s32(r2) >> 0x1f);  // (from the original)
    ea = 0x881128u + (u32(*gptr<u8>(r3 + (r2 + (r2 << 2) << 3) + r1)) << 3);  // (from the original)
    r1 = *gptr<u32>(ea);
    r2 = *gptr<u32>(ea + 4);
    r0 = r0 + u32(s32(r2) >> 1);
    if ((r2 & 1u) == 0) {
        return guest::call_address<u32>(r1, r0, r1, r2, r3);
    }
    r2 = *gptr<u32>(r0);
    r1 = *gptr<u32>(r2 + r1);
    return guest::call_address<u32>(r1, r0, r1, r2, r3);
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


void f_001cd888(gptr<Object_001cd888_0> arg0, float S0) {
    u32 r0 = arg0.addr();
    u32 r1 = 0;
    u32 r2 = 0;
    u32 r3 = 0;
    r2 = 0u;
    r3 = r0 + 0x14u;  // (from the original)
    arg0->word_0 = u32(0x8ebc0cu);  // (from the original)
    arg0->word_4 = u32(r2);
    arg0->word_8 = u32(r3);
    arg0->word_c = u32(r3);
    arg0->word_10 = u32(3u);
    arg0->byte_8c = u8(r2);
    r1 = arg0->word_c;
    if (r1 == 0) {
        r1 = arg0->word_c + 0x28u;  // (from the original)
        arg0->word_c = u32(r1);
        guest::cpu()->r[1] = r1;
        guest::cpu()->s[0] = S0;
        return;
    }
    *gptr<u8>(r1) = u8(r2);
    *gptr<u8>(r1 + 1u) = u8(r2);
    *gptr<u16>(r1 + 0x1cu) = u16(r2);  // (from the original)
    *gptr<u16>(r1 + 0x1eu) = u16(0x200u);  // (from the original)
    *gptr<u16>(r1 + 0x20u) = u16(r2);  // (from the original)
    *gptr<u8>(r1 + 2u) = u8(4u);
    *gptr<u32>(r1 + 4u) = u32(r2);
    *gptr<u32>(r1 + 8u) = u32(r2);
    S0 = std::bit_cast<float>(*gptr<u32>(0x1cd920u));  // (from the original)
    *gptr<u32>(r1 + 0xcu) = u32(r2);  // (from the original)
    *gptr<u32>(r1 + 0x10u) = u32(std::bit_cast<u32>(S0));  // (from the original)
    *gptr<u32>(r1 + 0x14u) = u32(std::bit_cast<u32>(S0));  // (from the original)
    *gptr<u32>(r1 + 0x18u) = u32(std::bit_cast<u32>(S0));  // (from the original)
    *gptr<u16>(r1 + 0x22u) = u16(u32(*gptr<u16>(0x868474u)));  // (from the original)
    *gptr<u16>(r1 + 0x24u) = u16(u32(*gptr<u16>(0x868476u)));  // (from the original)
    r1 = arg0->word_c + 0x28u;  // (from the original)
    arg0->word_c = u32(r1);
    guest::cpu()->r[1] = r1;
    guest::cpu()->s[0] = S0;
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
    u32 ea = 0;
    u32 r0 = arg0.addr();
    u32 r2 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r13 = guest::cpu()->r[13];
    u32 zf = 0;
    *gptr<u32>(r13 + 0xffffffe0u) = u32(r3);  // (from the original)
    r13 = r13 - 0x20;  // (from the original)
    r8 = 0u;
    r2 = u32(arg0->byte_24) & 1u;
    if (r2 >= 2u) {
        r0 = r0 + 0x38u;  // (from the original)
        goto L_1cda6c;
    }
    r3 = r2 + (r2 << 2);
    r0 = r0 + (r3 + (r2 << 6) << 2) + 0x38u;  // (from the original)
L_1cda6c:;
    zf = r0 == 0;
    if (!zf) {
        zf = r1 == 0;
    }
    if (zf) {
        goto L_1cdb24;
    }
    r5 = 0x1cdb28u;  // (from the original)
    ea = *gptr<u32>(r0 + 8u) + 0x28u;  // (from the original)
    r0 = ea;
    r2 = *gptr<u32>(ea);
    if (r2 == 0) {
        r0 = r8;
    } else {
        r0 = r0 + r2;
    }
    if (r0 == 0) {
        r4 = 0u;
        goto L_1cdaac;
    }
    ea = r0 + 0x28u;  // (from the original)
    r0 = ea;
    r2 = *gptr<u32>(ea);
    if (r2 == 0) {
        r4 = r8;
    } else {
        r4 = r2 + r0;
    }
L_1cdaac:;
    ea = r1 + 0xc0u;  // (from the original)
    r1 = ea;
    r0 = *gptr<u32>(ea);
    r7 = r13;
    r6 = r5;
    if (r0 == 0) {
        r0 = r8;
    } else {
        r0 = r0 + r1;
    }
    *gptr<u32>(r13) = u32(r0);
    if (r0 == 0) {
        goto L_1cdb04;
    }
    r0 = r5;
    guest::cpu()->r[13] = r13;
    r0 = call_002fa9d0(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    r2 = r0;
    r1 = r6;
    r0 = r7;
    guest::cpu()->r[13] = r13;
    r0 = call_00736a1c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    if (r0 == 0) {
        goto L_1cdb04;
    }
    ea = r0 + 0xcu;  // (from the original)
    r0 = ea;
    r1 = *gptr<u32>(ea);
    if (r1 != 0) {
        r8 = r1 + r0;
    }
    goto L_1cdb08;
L_1cdb04:;
    r8 = 0u;
L_1cdb08:;
    zf = r8 == 0;
    r0 = r8;
    if (!zf) {
        zf = r4 == 0;
    }
    if (zf) {
        goto L_1cdb24;
    }
    r2 = r4;
    r1 = r5;
    ea = r13;
    r13 = r13 + 0x20;  // (from the original)
    r3 = *gptr<u32>(ea);
    guest::cpu()->r[13] = r13;
    return call_004f2ef0(r0, r1, r2, r3);
L_1cdb24:;
    r13 = r13 + 0x20;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
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
    r1 = u32(arg0->byte_e) & ~0x30u | (r1 & 3u) << 4;  // (from the original)
    arg0->byte_e = u8(r1);
    guest::cpu()->r[1] = r1;
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
    u32 r1 = 0;
    u32 r2 = 0;
    r1 = arg0->word_8 & 0xff000000u;  // (from the original)
    r2 = u32(arg0->half_c) & ~0xffu;  // (from the original)
    arg0->word_8 = u32(r1);
    arg0->half_c = u16(r2);
    guest::cpu()->r[1] = r1;
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
    u32 r1 = 0;
    r1 = arg0->word_8 & ~0xc0000000u;  // (from the original)
    arg0->word_8 = u32(r1);
    guest::cpu()->r[1] = r1;
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
    if (r1 == 0) {
        r1 = 0u;
    } else {
        r1 = 0x8000u;  // (from the original)
    }
    r1 = r1 | u32(arg0->half_c) & ~0x8000u;  // (from the original)
    arg0->half_c = u16(r1);
    guest::cpu()->r[1] = r1;
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
    u32 r1 = 0;
    r1 = arg0->word_8 & ~0x3c000000u;  // (from the original)
    arg0->word_8 = u32(r1);
    guest::cpu()->r[1] = r1;
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
    u32 r1 = 0;
    r1 = arg0->word_8 & ~0xc0000000u & ~0x7800000u;  // (from the original)
    arg0->word_8 = u32(r1);
    guest::cpu()->r[1] = r1;
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
    r1 = arg0->word_8 & ~0x7800000u | (r1 & 0xfu) << 0x17;  // (from the original)
    arg0->word_8 = u32(r1);
    guest::cpu()->r[1] = r1;
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
    if (r1 != 0) {
        r1 = (r1 << 3) - 8u;
        r0 = lsr_r(arg0->word_8, r1 & 0xff) & 0x7fu;  // (from the original)
        if (u32(r0 >= 0x63u) && !u32(r0 == 0x63u)) {  // (from the original)
            r0 = 0x63u;  // (from the original)
        }
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r1 = 0x270fu;  // (from the original)
    r0 = u32(*gptr<u16>(r0 + 0xcu)) & ~0xc000u;  // (from the original)
    if (u32(r0 >= r1) && !u32(r0 == r1)) {
        r0 = r1;
    }
    guest::cpu()->r[1] = r1;
    return r0;
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
    u32 r1 = 0;
    r1 = arg0->word_8 & ~0x7800000u;  // (from the original)
    arg0->word_8 = u32(r1);
    guest::cpu()->r[1] = r1;
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
    r1 = r1 & 0xfu | u32(arg0->byte_e) & 0xf0u;  // (from the original)
    arg0->byte_e = u8(r1);
    guest::cpu()->r[1] = r1;
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
    u32 ea = 0;
    u32 r3 = arg3.addr();
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r13 = guest::cpu()->r[13];
    r6 = r0;
    r7 = r2;
    r13 = r13 - 0x28u;  // (from the original)
    r2 = 0xc8u;  // (from the original)
    r4 = 0u;
    *gptr<u8>(r13 + 0xcu) = u8(r2);  // (from the original)
    *gptr<u8>(r13 + 0x10u) = u8(r2);  // (from the original)
    *gptr<u8>(r13 + 0xdu) = u8(r2);  // (from the original)
    *gptr<u8>(r13 + 0x11u) = u8(r2);  // (from the original)
    *gptr<u8>(r13 + 0xeu) = u8(r4);  // (from the original)
    *gptr<u8>(r13 + 0x12u) = u8(r4);  // (from the original)
    r3 = u32(arg3->byte_1) << 8;
    r2 = r3 & 0xff00u;  // (from the original)
    r4 = ((u32(arg3->byte_0) | ((0xc8u | r0 & ~0xffu) & ~0xff00u | 0xc8u << 8 & 0xff00u) & ~0xff0000u & ~0xffu) & ~0xff00u | r2) & ~0xff0000u | u32(arg3->byte_2) << 0x10 & 0xff0000u;  // (from the original)
    r5 = *gptr<u32>(r13 + 0x28u);  // (from the original)
    r0 = r13 + 0xcu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0020cde4(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = r7;
    r0 = r13 + 0x10u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0020cd9c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r7 = ~0u;
    if ((r5 & 1u) != 0) {
        ea = r13;
        *gptr<u32>(ea) = u32(r4 << 0x10 >> 0x18);  // (from the original)
        ea = r13 + 4u;
        *gptr<u32>(ea) = u32(r4 << 8 >> 0x18);  // (from the original)
        *gptr<u32>(ea + 4) = u32(r7);
        r3 = r4 & 0xffu;  // (from the original)
        r2 = 0u;
        r1 = 0x1ceb5cu;  // (from the original)
        r0 = r6;
        guest::cpu()->r[13] = r13;
        r0 = call_004f1648(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
    }
    if ((r5 & 2u) != 0) {
        ea = r13;
        *gptr<u32>(ea) = u32(r4 << 0x10 >> 0x18);  // (from the original)
        ea = r13 + 4u;
        *gptr<u32>(ea) = u32(r4 << 8 >> 0x18);  // (from the original)
        *gptr<u32>(ea + 4) = u32(r7);
        r3 = r4 & 0xffu;  // (from the original)
        r2 = 0u;
        r1 = 0x1ceb60u;  // (from the original)
        r0 = r6;
        guest::cpu()->r[13] = r13;
        r0 = call_004f1648(r0, r1, r2, r3);
        ea = r13 + 0xdu;  // (from the original)
        r1 = u32(*gptr<u8>(ea));
        ea = r13 + 0xeu;  // (from the original)
        r0 = u32(*gptr<u8>(ea));
        ea = r13;
        *gptr<u32>(ea) = u32(r1);
        ea = r13 + 4u;
        *gptr<u32>(ea) = u32(r0);
        *gptr<u32>(ea + 4) = u32(r7);
        r2 = 1u;
        r3 = u32(*gptr<u8>(r13 + 0xcu));  // (from the original)
        r1 = 0x1ceb60u;  // (from the original)
        r0 = r6;
        guest::cpu()->r[13] = r13;
        r0 = call_004f1648(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
    }
    if ((r5 & 4u) != 0) {
        ea = r13;
        *gptr<u32>(ea) = u32(r4 << 0x10 >> 0x18);  // (from the original)
        ea = r13 + 4u;
        *gptr<u32>(ea) = u32(r4 << 8 >> 0x18);  // (from the original)
        *gptr<u32>(ea + 4) = u32(r7);
        r3 = r4 & 0xffu;  // (from the original)
        r2 = 0u;
        r1 = 0x1ceb64u;  // (from the original)
        r0 = r6;
        guest::cpu()->r[13] = r13;
        r0 = call_004f1648(r0, r1, r2, r3);
        ea = r13 + 0x11u;  // (from the original)
        r1 = u32(*gptr<u8>(ea));
        ea = r13 + 0x12u;  // (from the original)
        r0 = u32(*gptr<u8>(ea));
        ea = r13;
        *gptr<u32>(ea) = u32(r1);
        ea = r13 + 4u;
        *gptr<u32>(ea) = u32(r0);
        *gptr<u32>(ea + 4) = u32(r7);
        r2 = 1u;
        r3 = u32(*gptr<u8>(r13 + 0x10u));  // (from the original)
        r1 = 0x1ceb64u;  // (from the original)
        r0 = r6;
        guest::cpu()->r[13] = r13;
        r0 = call_004f1648(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
    }
    if ((r5 & 8u) != 0) {
        ea = r13;
        *gptr<u32>(ea) = u32(r4 << 0x10 >> 0x18);  // (from the original)
        ea = r13 + 4u;
        *gptr<u32>(ea) = u32(r4 << 8 >> 0x18);  // (from the original)
        *gptr<u32>(ea + 4) = u32(r7);
        r3 = r4 & 0xffu;  // (from the original)
        r2 = 0u;
        r1 = 0x1ceb68u;  // (from the original)
        r0 = r6;
        guest::cpu()->r[13] = r13;
        r0 = call_004f1648(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
    }
    if ((r5 & 0x10u) != 0) {  // (from the original)
        r5 = r13 + 4u;
        *gptr<u32>(r13) = u32(r4 << 0x10 >> 0x18);  // (from the original)
        *gptr<u32>(r5) = u32(r4 << 8 >> 0x18);  // (from the original)
        *gptr<u32>(r5 + 4) = u32(r7);
        r3 = r4 & 0xffu;  // (from the original)
        r2 = 0u;
        r1 = 0x1ceb70u;  // (from the original)
        r0 = r6;
        guest::cpu()->r[13] = r13;
        r0 = call_004f1648(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
    }
    r13 = r13 + 0x28u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
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
    u32 ea = 0;
    u32 r1 = arg1.addr();
    u32 r4 = guest::cpu()->r[4];
    u32 r12 = 0;
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 0x18u;  // (from the original)
    r4 = r2;
    ea = r13 + 0x18u;  // (from the original)
    r2 = *gptr<u32>(ea);
    r12 = *gptr<u32>(ea + 4);
    ea = r13;
    *gptr<u32>(ea) = u32(r3);
    ea = r13 + 4u;
    *gptr<u32>(ea) = u32(r2);
    *gptr<u32>(ea + 4) = u32(r12);
    r1 = r1 + 4u;
    r2 = 1u & ~u32(arg1->byte_55ba);
    r3 = r4;
    guest::cpu()->r[13] = r13;
    call_001cebc0(guest::cpu()->r[0], r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r13 = r13 + 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return guest::cpu()->r[0];
}

}  // namespace d_001ceb78
GUEST_EXPORT(0x001ceb78, d_001ceb78::f_001ceb78);
