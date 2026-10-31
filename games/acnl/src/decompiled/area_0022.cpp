// Functions decompiled by tools/decomp (docs/decomp.md), each proved equal to the recompiled original (prove-cpp). The
// names are generated (d_<address>::f_<address>, Object_<address>_<argument>, word_<offset>) and still to be chosen.
#include "guest/guest.hpp"

#include <bit>

using guest::gptr;

// f_00220c28: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00220c28 {

struct __attribute__((packed)) Object_00220c28_0 {
    u8 unknown_0[0xb28c];  // (not used here)
    u32 word_b28c;
};
GUEST_OFFSET(Object_00220c28_0, word_b28c, 0xb28c);  // (from the original)

inline constexpr guest::Function<0x0060e094, u32(u32, u32, u32, u32)> call_0060e094;  // (from the original)
inline constexpr guest::Function<0x0060e0cc, u32(u32, u32, u32, u32)> call_0060e0cc;  // (from the original)

u32 f_00220c28(gptr<Object_00220c28_0> arg0, u32 r1) {
    u32 r0 = arg0.addr();
    u32 r2 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 zf = 0;
    r2 = r0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r6 = r1;
    r4 = r2 + 0xb000u;  // (from the original)
    r0 = arg0->word_b28c;
    r5 = r2 + (r1 * 0xc5u << 2) + 0x2b1cu;  // (from the original)
    zf = r0 == r5;
    if (!zf) {
        zf = r0 == 0;
    }
    if (!zf) {
        r1 = u32(*gptr<u8>(r0 + 0x26bu));  // (from the original)
        if (r1 == 1u) {
            r0 = call_0060e0cc(r0, r1, r2, guest::cpu()->r[3]);
        }
    }
    r2 = 2u;
    *gptr<u32>(r4 + 0x28cu) = u32(r5);  // (from the original)
    *gptr<u8>(r4 + 0x3a8u) = u8(r2);  // (from the original)
    *gptr<u32>(r4 + 0x3c0u) = u32(r6);  // (from the original)
    r1 = u32(*gptr<u8>(r5 + 0x26bu));  // (from the original)
    r0 = r5;
    if (r1 == 0) {
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        return call_0060e094(r0, r1, r2, guest::cpu()->r[3]);
    }
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_00220c28
GUEST_EXPORT(0x00220c28, d_00220c28::f_00220c28);

// f_0022105c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0022105c {

struct __attribute__((packed)) Object_0022105c_0 {
    u8 unknown_0[0xb28c];  // (not used here)
    u32 word_b28c;
};
GUEST_OFFSET(Object_0022105c_0, word_b28c, 0xb28c);  // (from the original)

inline constexpr guest::Function<0x0060e094, u32(u32, u32, u32, u32)> call_0060e094;  // (from the original)
inline constexpr guest::Function<0x0060e0cc, u32(u32, u32, u32, u32)> call_0060e0cc;  // (from the original)

u32 f_0022105c(gptr<Object_0022105c_0> arg0, u32 r1) {
    u32 r0 = arg0.addr();
    u32 r2 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 zf = 0;
    r2 = r0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r6 = r1;
    r4 = r2 + 0xb000u;  // (from the original)
    r0 = arg0->word_b28c;
    r5 = r2 + (r1 * 0xc5u << 2) + 4u;  // (from the original)
    zf = r0 == r5;
    if (!zf) {
        zf = r0 == 0;
    }
    if (!zf) {
        r1 = u32(*gptr<u8>(r0 + 0x26bu));  // (from the original)
        if (r1 == 1u) {
            r0 = call_0060e0cc(r0, r1, r2, guest::cpu()->r[3]);
        }
    }
    r2 = 1u;
    *gptr<u32>(r4 + 0x28cu) = u32(r5);  // (from the original)
    *gptr<u8>(r4 + 0x3a8u) = u8(r2);  // (from the original)
    *gptr<u32>(r4 + 0x3c0u) = u32(r6);  // (from the original)
    r1 = u32(*gptr<u8>(r5 + 0x26bu));  // (from the original)
    r0 = r5;
    if (r1 == 0) {
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        return call_0060e094(r0, r1, r2, guest::cpu()->r[3]);
    }
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_0022105c
GUEST_EXPORT(0x0022105c, d_0022105c::f_0022105c);

// f_002214e4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002214e4 {

inline constexpr guest::Function<0x002f74c8, u32(u32, u32, u32, u32)> call_002f74c8;  // (from the original)
inline constexpr guest::Function<0x002f74e0, u32(u32, u32, u32, u32)> call_002f74e0;  // (from the original)
inline constexpr guest::Function<0x0060e094, u32(u32, u32, u32, u32)> call_0060e094;  // (from the original)
inline constexpr guest::Function<0x0060e0cc, u32(u32, u32, u32, u32)> call_0060e0cc;  // (from the original)

u32 f_002214e4(u32 r0, u32 r1, u32 r2_unused, u32 r3) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 zf = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r5 = r0;
    r0 = call_002f74c8(r0, r1, guest::cpu()->r[2], r3);
    r3 = guest::cpu()->r[3];
    r1 = r0;
    r0 = 0x20u;  // (from the original)
    r0 = call_002f74e0(r0, r1, guest::cpu()->r[2], r3);
    r1 = guest::cpu()->r[1];
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        goto L_221558;
    }
    r4 = r5 + 0xb000u;  // (from the original)
    r0 = *gptr<u32>(r4 + 0x28cu);  // (from the original)
    r5 = r5 + 0xac64u;  // (from the original)
    zf = r0 == r5;
    if (!zf) {
        zf = r0 == 0;
    }
    if (!zf) {
        r1 = u32(*gptr<u8>(r0 + 0x26bu));  // (from the original)
        if (r1 == 1u) {
            r0 = call_0060e0cc(r0, r1, guest::cpu()->r[2], r3);
        }
    }
    r3 = 5u;
    *gptr<u32>(r4 + 0x28cu) = u32(r5);  // (from the original)
    *gptr<u8>(r4 + 0x3a8u) = u8(r3);  // (from the original)
    *gptr<u32>(r4 + 0x3c0u) = u32(0u);  // (from the original)
    r1 = u32(*gptr<u8>(r5 + 0x26bu));  // (from the original)
    r0 = r5;
    if (r1 != 0) {
        goto L_221558;
    }
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    return call_0060e094(r0, r1, guest::cpu()->r[2], r3);
L_221558:;
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_002214e4
GUEST_EXPORT(0x002214e4, d_002214e4::f_002214e4);

// f_0022328c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0022328c {

struct __attribute__((packed)) Object_0022328c_0 {
    u32 word_0;
    u8 unknown_4[0xb34c];  // (not used here)
    u32 word_b350;
};
GUEST_OFFSET(Object_0022328c_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_0022328c_0, word_b350, 0xb350);  // (from the original)

inline constexpr guest::Function<0x002f76ad, u32(u32, u32, u32, u32)> call_002f76ac;  // (from the original)
inline constexpr guest::Function<0x0056988c, u32(u32, u32, u32, u32)> call_0056988c;  // (from the original)
inline constexpr guest::Function<0x005bf744, u32(u32, u32, u32, u32)> call_005bf744;  // (from the original)

u32 f_0022328c(gptr<Object_0022328c_0> arg0) {
    u32 ea = 0;
    u32 r0 = arg0.addr();
    u32 r1 = 0;
    u32 r2 = 0;
    u32 r3 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 0x10;  // (from the original)
    arg0->word_0 = u32(0x8edfa0u);  // (from the original)
    arg0->word_b350 = u32(0x909d20u);  // (from the original)
    r0 = r0 + 0xb350u;  // (from the original)
    r4 = r0;
    r1 = 0x56988cu;  // (from the original)
    r3 = 2u;
    r2 = 0x28u;  // (from the original)
    r0 = r0 - 0x54u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002f76ac(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r5 = 0x8f80b8u;  // (from the original)
    ea = r4 - 0x3d8u;  // (from the original)
    *gptr<u32>(ea) = u32(r5);
    r4 = ea;
    r0 = r4 + 0x2e8u;  // (from the original)
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
    r4 = 0x8f8b80u;  // (from the original)
    *gptr<u32>(r0 - 0x270u) = u32(r4);  // (from the original)
    r0 = r0 - 0x168u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_005bf744(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0x3cu;  // (from the original)
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
    *gptr<u32>(r0 - 0x318u) = u32(r5);  // (from the original)
    r0 = r0 - 0x30u;  // (from the original)
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
    *gptr<u32>(r0 - 0x270u) = u32(r4);  // (from the original)
    r0 = r0 - 0x168u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_005bf744(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0x3cu;  // (from the original)
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
    r1 = 0x60e704u;  // (from the original)
    r4 = r0 - 0xac68u;  // (from the original)
    r3 = 0x10u;  // (from the original)
    r2 = 0x314u;  // (from the original)
    r0 = r0 - 0x3144u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002f76ac(r0, r1, r2, r3);
    r1 = 0x60e704u;  // (from the original)
    r3 = 8u;
    r2 = 0x314u;  // (from the original)
    r0 = r4 + 0x6284u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002f76ac(r0, r1, r2, r3);
    r1 = 0x60e704u;  // (from the original)
    r3 = 8u;
    r2 = 0x314u;  // (from the original)
    r0 = r4 + 0x49e4u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002f76ac(r0, r1, r2, r3);
    r1 = 0x60e704u;  // (from the original)
    r3 = 0xau;  // (from the original)
    r2 = 0x314u;  // (from the original)
    r0 = r4 + 0x2b1cu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002f76ac(r0, r1, r2, r3);
    r1 = 0x60e704u;  // (from the original)
    r3 = 0xeu;  // (from the original)
    r2 = 0x314u;  // (from the original)
    r0 = r4 + 4u;
    guest::cpu()->r[13] = r13;
    r0 = call_002f76ac(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r0 = r4;
    r13 = r13 + 0x10;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_0022328c
GUEST_EXPORT(0x0022328c, d_0022328c::f_0022328c);

// f_00223778: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00223778 {

struct __attribute__((packed)) Object_00223778_0 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
};
GUEST_OFFSET(Object_00223778_0, word_4, 0x4);  // (from the original)

inline constexpr guest::Function<0x004b4fc0, u32(u32, u32, u32, u32)> call_004b4fc0;  // (from the original)
inline constexpr guest::Function<0x00568984, u32(u32, u32, u32, u32)> call_00568984;  // (from the original)

u32 f_00223778(gptr<Object_00223778_0> arg0, u32 r1, u32 r2_unused, u32 r3) {
    u32 r0 = arg0.addr();
    u32 r2 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r12 = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r5 = r1;
    r4 = r0;
    r0 = arg0->word_4;
    r2 = 1u;
    r1 = *gptr<u32>(0x94fcc4u + (r5 << 2));  // (from the original)
    r0 = call_004b4fc0(r0, r1, r2, r3);
    r12 = *gptr<u32>(r4 + 4u);
    r1 = r4 + (r5 + (r5 << 2) << 3);
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    r2 = r0;
    r1 = r1 + 0xcu;  // (from the original)
    r3 = 0u;
    r0 = r12;
    return call_00568984(r0, r1, r2, r3);
}

}  // namespace d_00223778
GUEST_EXPORT(0x00223778, d_00223778::f_00223778);

// f_00224204: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00224204 {

struct __attribute__((packed)) Object_00224204_0 {
    u8 unknown_0[0x2934];  // (not used here)
    u32 word_2934;
};
GUEST_OFFSET(Object_00224204_0, word_2934, 0x2934);  // (from the original)


u32 f_00224204(gptr<Object_00224204_0> arg0, u32 r1_unused, u32 r2, u32 r3) {
    u32 r0 = arg0.addr();
    u32 r1 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r12 = 0;
    u32 r13 = guest::cpu()->r[13];
    r1 = r0 + 0x2934u;  // (from the original)
    r13 = r13 - 4u;
    r12 = arg0->word_2934;
    r4 = *gptr<u32>(r13 + 4u);
    if (s32(r12) >= s32(0x1cu)) {  // (from the original)
        r13 = r13 + 4u;
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    *gptr<u32>(r0 + (r12 << 3) + 0x1cd8u) = u32(r2);  // (from the original)
    *gptr<u8>(r0 + (arg0->word_2934 << 3) + 0x1cdcu) = u8(r4);  // (from the original)
    *gptr<u8>(r0 + (arg0->word_2934 << 3) + 0x1cddu) = u8(r3);  // (from the original)
    r0 = arg0->word_2934 + 1u;
    arg0->word_2934 = u32(r0);
    r13 = r13 + 4u;
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_00224204
GUEST_EXPORT(0x00224204, d_00224204::f_00224204);

// f_00224950: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00224950 {

struct __attribute__((packed)) Object_00224950_0 {
    u8 unknown_0[0x88];  // (not used here)
    u32 word_88;
};
GUEST_OFFSET(Object_00224950_0, word_88, 0x88);  // (from the original)

inline constexpr guest::Function<0x00224a7c, u32(u32, u32, u32, u32)> call_00224a7c;  // (from the original)
inline constexpr guest::Function<0x0056878c, u32(u32, u32, u32, u32)> call_0056878c;  // (from the original)

u32 f_00224950(gptr<Object_00224950_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r1 = 0;
    u32 r4 = guest::cpu()->r[4];
    float S0 = 0;
    float S1 = 0;
    guest::cpu()->r[13] -= 8u;
    S1 = std::bit_cast<float>(*gptr<u32>(0x224988u));  // (from the original)
    r4 = r0;
    r1 = 3u;
    S0 = std::bit_cast<float>(arg0->word_88) - S1;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    r0 = call_00224a7c(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    r0 = *gptr<u32>(r4 + 4u);
    r1 = 0x22498cu;  // (from the original)
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    r0 = call_0056878c(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    r1 = u32(*gptr<u8>(r0 + 0xb7u)) & 0xfeu;  // (from the original)
    *gptr<u8>(r0 + 0xb7u) = u8(r1);  // (from the original)
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    return r0;
}

}  // namespace d_00224950
GUEST_EXPORT(0x00224950, d_00224950::f_00224950);

// f_00224b10: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00224b10 {

struct __attribute__((packed)) Object_00224b10_0 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Object_00224b10_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_00224b10_0, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_00224b10_0, word_8, 0x8);  // (from the original)

inline constexpr guest::Function<0x002b6de0, u32(u32, u32, u32, u32)> call_002b6de0;  // (from the original)
inline constexpr guest::Function<0x002f7604, u32(u32, u32, u32, u32)> call_002f7604;  // (from the original)
inline constexpr guest::Function<0x00301d0d, u32(u32, u32, u32, u32)> call_00301d0c;  // (from the original)

u32 f_00224b10(gptr<Object_00224b10_0> arg0, float S0) {
    u32 ea = 0;
    u32 r0 = arg0.addr();
    u32 r1 = 0;
    u32 r2 = 0;
    u32 r3 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r12 = 0;
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 0x10;  // (from the original)
    r4 = 0u;
    arg0->word_0 = u32(0x8edfb0u);  // (from the original)
    arg0->word_4 = u32(r4);
    r3 = 6u;
    ea = r0 + 8u;
    arg0->word_8 = u32(r4);
    r1 = 0x125aecu;  // (from the original)
    r2 = 0x28u;  // (from the original)
    r0 = ea + 4u;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    r0 = call_00301d0c(r0, r1, r2, r3);
    r0 = r0 - 0xcu;  // (from the original)
    S0 = std::bit_cast<float>(*gptr<u32>(0x224c28u));  // (from the original)
    *gptr<u32>(r0 + 0xfcu) = u32(r4);  // (from the original)
    *gptr<u32>(r0 + 0x100u) = u32(r4);  // (from the original)
    *gptr<u32>(r0 + 0x104u) = u32(std::bit_cast<u32>(S0));  // (from the original)
    *gptr<u32>(r0 + 0x108u) = u32(std::bit_cast<u32>(S0));  // (from the original)
    *gptr<u32>(r0 + 0x10cu) = u32(std::bit_cast<u32>(S0));  // (from the original)
    r1 = 0x60e5c0u;  // (from the original)
    r3 = 7u;
    r2 = 0x314u;  // (from the original)
    r0 = r0 + 0x110u;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    r0 = call_00301d0c(r0, r1, r2, r3);
    S0 = guest::cpu()->s[0];
    r1 = 0x6ab2a0u;  // (from the original)
    r3 = 7u;
    r2 = 0xe4u;  // (from the original)
    r0 = r0 + 0x158cu;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    r0 = call_00301d0c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
    r0 = r0 + 0x71cu;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    r0 = call_002f7604(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
    r0 = r0 + 0xe4u;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    r0 = call_002b6de0(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
    r0 = r0 + 0xe0u;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    r0 = call_002f7604(r0, r1, r2, r3);
    S0 = guest::cpu()->s[0];
    r1 = 0x2b6de0u;  // (from the original)
    r3 = 2u;
    r2 = 0xe0u;  // (from the original)
    r0 = r0 + 0xe4u;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    r0 = call_00301d0c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
    r0 = r0 + 0x1c0u;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    r0 = call_002f7604(r0, r1, r2, r3);
    S0 = guest::cpu()->s[0];
    r1 = 0x2b6de0u;  // (from the original)
    r3 = 7u;
    r2 = 0xe0u;  // (from the original)
    r0 = r0 + 0xe4u;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    r0 = call_00301d0c(r0, r1, r2, r3);
    r0 = r0 - 0x2304u;  // (from the original)
    S0 = std::bit_cast<float>(*gptr<u32>(0x224c38u));  // (from the original)
    r1 = r0 + 0x2924u;  // (from the original)
    r2 = 0x292cu;  // (from the original)
    *gptr<u32>(r1) = u32(std::bit_cast<u32>(S0));
    *gptr<u32>(r1 + 4u) = u32(std::bit_cast<u32>(S0));
    r1 = ~0u;
    *gptr<u8>(r2 + r0) = u8(r4);
    r3 = r2 - (r1 << 2);
    r12 = r3 - (r1 << 2);
    r5 = r12 - (r1 << 2);
    *gptr<u32>(r3 + r0) = u32(r4);
    *gptr<u32>(r12 + r0) = u32(r4);
    *gptr<u32>(r5 + r0) = u32(r1);
    *gptr<u32>(r5 - (r1 << 2) + r0) = u32(r4);
    *gptr<u32>(0x2940u + r0) = u32(r1);  // (from the original)
    r13 = r13 + 0x10;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    return r0;
}

}  // namespace d_00224b10
GUEST_EXPORT(0x00224b10, d_00224b10::f_00224b10);

// f_0022526c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0022526c {

struct __attribute__((packed)) Object_0022526c_0 {
    u8 unknown_0[0x38];  // (not used here)
    u32 word_38;
};
GUEST_OFFSET(Object_0022526c_0, word_38, 0x38);  // (from the original)


u32 f_0022526c(gptr<Object_0022526c_0> arg0, u32 r1) {
    u32 r0 = arg0.addr();
    r0 = arg0->word_38;
    if (r0 != 0) {
        *gptr<u8>(r0 + 0xabcu) = u8(r1);  // (from the original)
    }
    return r0;
}

}  // namespace d_0022526c
GUEST_EXPORT(0x0022526c, d_0022526c::f_0022526c);

// f_00225948: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00225948 {

inline constexpr guest::Function<0x0014f8ec, u32(u32, u32, u32, u32)> call_0014f8ec;  // (from the original)

u32 f_00225948(u32 r0) {
    u32 r1 = 0;
    u32 r2 = 0;
    r1 = *gptr<u32>(0x950694u);  // (from the original)
    if (r1 == 0) {
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r1 = 0x997c30u;  // (from the original)
    r0 = *gptr<u32>(r1 + (r0 << 2));
    if (r0 == 0) {
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r2 = 0u;
    r1 = 1u;
    return call_0014f8ec(r0, r1, r2, guest::cpu()->r[3]);
}

}  // namespace d_00225948
GUEST_EXPORT(0x00225948, d_00225948::f_00225948);

// f_00225984: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00225984 {

inline constexpr guest::Function<0x002f74c8, u32(u32, u32, u32, u32)> call_002f74c8;  // (from the original)
inline constexpr guest::Function<0x002fb328, u32(u32, u32, u32, u32)> call_002fb328;  // (from the original)
inline constexpr guest::Function<0x002fcb84, u32(u32, u32, u32, u32)> call_002fcb84;  // (from the original)
inline constexpr guest::Function<0x002fe7cc, u32(u32, u32, u32, u32)> call_002fe7cc;  // (from the original)
inline constexpr guest::Function<0x00317148, u32(u32, u32, u32, u32)> call_00317148;  // (from the original)
inline constexpr guest::Function<0x0057b9dc, u32(u32, u32, u32, u32)> call_0057b9dc;  // (from the original)
inline constexpr guest::Function<0x006a6e1c, u32(u32, u32, u32, u32)> call_006a6e1c;  // (from the original)
inline constexpr guest::Function<0x007482b8, u32(u32, u32, u32, u32)> call_007482b8;  // (from the original)
inline constexpr guest::Function<0x0074830c, u32(u32, u32, u32, u32)> call_0074830c;  // (from the original)
inline constexpr guest::Function<0x0075281c, u32(u32, u32, u32, u32)> call_0075281c;  // (from the original)

u32 f_00225984(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 res = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r9 = guest::cpu()->r[9];
    u32 r10 = guest::cpu()->r[10];
    u32 r11 = guest::cpu()->r[11];
    u32 r13 = guest::cpu()->r[13];
    u32 nf = 0;
    u32 vf = 0;
    r13 = r13 - 0x48u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002f74c8(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 != 0) {
        goto L_225ab0;
    }
    guest::cpu()->r[13] = r13;
    r0 = call_002fb328(r0, r1, r2, r3);
    r8 = 0u;
    r2 = r0 + 0x6fe78u;  // (from the original)
    r0 = r8;
    r3 = 0x997c30u;  // (from the original)
    r1 = r0;
    r10 = r8;
    goto L_2259c8;
L_2259c0:;
    r1 = r0;
    if (nf == vf) {
        r1 = 0u;
    }
L_2259c8:;
    r1 = u32(*gptr<u8>(r2 + (r1 + (r1 << 1) << 2) + 0xau));  // (from the original)
    if ((r1 & 1u) != 0) {
        r8 = r8 + 1u;
        goto L_2259f0;
    }
    r1 = r3 + (r0 << 2);
    if (*gptr<u32>(r1 + 8u) != 0) {
        *gptr<u32>(r1 + 8u) = u32(r10);
    }
L_2259f0:;
    r0 = r0 + 1u;
    res = r0 - 4u;
    nf = res >> 0x1f;  // (from the original)
    vf = ((r0 ^ 4u) & (r0 ^ res)) >> 0x1f;  // (from the original)
    if (nf != vf) {
        guest::preempt();
        goto L_2259c0;
    }
    if (r8 == 0) {
        goto L_225ab0;
    }
    r0 = 1u;
    guest::cpu()->r[13] = r13;
    r0 = call_002fe7cc(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    *gptr<u32>(r13 + 8u) = u32(r0);
    if (r0 == 0) {
        goto L_225ab4;
    }
    guest::cpu()->r[13] = r13;
    r0 = call_007482b8(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r4 = r0;
    r0 = *gptr<u32>(r13 + 8u);
    guest::cpu()->r[13] = r13;
    r0 = call_0074830c(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    r1 = r4 - 1u;
    r6 = 0u;
    *gptr<u32>(r13 + 0xcu) = u32(r1);  // (from the original)
    *gptr<u32>(r13 + 4u) = u32(1u);
    if (!u32(r1 >= 1u) || u32(r1 == 1u)) {
        goto L_225b7c;
    }
    r11 = 0x950694u;  // (from the original)
    r0 = r0 - 1u;
    *gptr<u32>(r13 + 0x1cu) = u32(r0);  // (from the original)
L_225a50:;
    r9 = 1u;
    if (!u32(r0 >= 1u) || u32(r0 == 1u)) {
        goto L_225b60;
    }
L_225a5c:;
    r0 = *gptr<u32>(r13 + 8u);
    r1 = *gptr<u32>(r13 + 4u);
    r2 = r9;
    guest::cpu()->r[13] = r13;
    r0 = call_00317148(r0, r1, r2, r3);
    r3 = 0u;
    r2 = r3;
    r1 = r3;
    guest::cpu()->r[13] = r13;
    r0 = call_0075281c(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r4 = r0;
    r5 = 0u;
L_225a84:;
    if (r4 == 0) {
        goto L_225b40;
    }
    r1 = 0x7ff8u;  // (from the original)
    r0 = r4;
    guest::cpu()->r[13] = r13;
    r0 = call_002fcb84(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        goto L_225abc;
    } else {
        r7 = 0u;
    }
L_225aa4:;
    r6 = r6 + 1u;
    if (!u32(r6 >= r8) || u32(r6 == r8)) {
        goto L_225b08;
    }
L_225ab0:;
    r0 = 0u;
L_225ab4:;
    r13 = r13 + 0x48u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
L_225abc:;
    r1 = 0x7ff9u;  // (from the original)
    r0 = r4;
    guest::cpu()->r[13] = r13;
    r0 = call_002fcb84(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 != 0) {
        r7 = 1u;
        guest::preempt();
        goto L_225aa4;
    }
    r1 = 0x7ffau;  // (from the original)
    r0 = r4;
    guest::cpu()->r[13] = r13;
    r0 = call_002fcb84(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 != 0) {
        r7 = 2u;
        guest::preempt();
        goto L_225aa4;
    }
    r1 = 0x7ffbu;  // (from the original)
    r0 = r4;
    guest::cpu()->r[13] = r13;
    r0 = call_002fcb84(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 != 0) {
        r7 = 3u;
        guest::preempt();
        goto L_225aa4;
    }
    goto L_225b40;
L_225b08:;
    *gptr<u32>(r13) = u32(r5 >> 4);
    r1 = *gptr<u32>(r13 + 4u);
    r3 = r5 & 0xfu;  // (from the original)
    r2 = r9;
    r0 = r13 + 0x10u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_006a6e1c(r0, r1, r2, r3);
    *gptr<u32>(r13) = u32(r10);
    r1 = *gptr<u32>(r11);
    r3 = r13 + 0x10u;  // (from the original)
    r0 = u32(*gptr<u16>(0x887312u));  // (from the original)
    r2 = r7 + 2u;
    guest::cpu()->r[13] = r13;
    r0 = call_0057b9dc(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
L_225b40:;
    r5 = r5 + 1u;
    r4 = r4 + 4u;
    if (r5 < 0x100u) {  // (from the original)
        guest::preempt();
        goto L_225a84;
    }
    r9 = r9 + 1u;
    if (r9 < *gptr<u32>(r13 + 0x1cu)) {  // (from the original)
        guest::preempt();
        goto L_225a5c;
    }
L_225b60:;
    r1 = *gptr<u32>(r13 + 0xcu);  // (from the original)
    r0 = *gptr<u32>(r13 + 4u) + 1u;
    *gptr<u32>(r13 + 4u) = u32(r0);
    if (r0 < r1) {
        r0 = *gptr<u32>(r13 + 0x1cu);  // (from the original)
        guest::preempt();
        goto L_225a50;
    }
L_225b7c:;
    r0 = 1u;
    r13 = r13 + 0x48u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_00225984
GUEST_EXPORT(0x00225984, d_00225984::f_00225984);

// f_00226750: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00226750 {


u32 f_00226750() {
    u32 r0 = 0;
    u32 r1 = 0;
    u32 r2 = 0;
    r2 = 0x997c30u;  // (from the original)
    r0 = 0u;
    do {
L_226758:;
        r1 = *gptr<u32>(r2 + (r0 << 2));
        if (!(r1 == 0)) {
            r1 = r1 + 0x5adu;  // (from the original)
            *gptr<u8>(r1 + 2u) = u8(u32(*gptr<u8>(r1 + 2u)) & ~0x10u);  // (from the original)
        }
        r0 = r0 + 1u;
        guest::preempt();
    } while (s32(r0) < s32(6u));
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_00226750
GUEST_EXPORT(0x00226750, d_00226750::f_00226750);

// f_002267e4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002267e4 {


u32 f_002267e4() {
    u32 r0 = 0;
    u32 r1 = 0;
    u32 r2 = 0;
    u32 r3 = 0;
    u32 r12 = 0;
    r3 = 0x997c48u;  // (from the original)
    r0 = 0u;
    r2 = r0;
    r12 = r3 - 0x18u;  // (from the original)
    do {
L_2267f4:;
        r1 = r0;
        if (r0 >= 2u) {
            r1 = 0u;
        }
        r1 = r3 + (r1 + (r1 << 2) << 2);
        *gptr<u8>(r1 + 0x10u) = u8(r2);  // (from the original)
        if (r0 < 6u) {
            *gptr<u32>(r12 + (r0 << 2)) = u32(r2);
        }
        r0 = r0 + 1u;
        guest::preempt();
    } while (r0 < 2u);
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_002267e4
GUEST_EXPORT(0x002267e4, d_002267e4::f_002267e4);

// f_00226828: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00226828 {

inline constexpr guest::Function<0x002fcb84, u32(u32, u32, u32, u32)> call_002fcb84;  // (from the original)
inline constexpr guest::Function<0x002fe7cc, u32(u32, u32, u32, u32)> call_002fe7cc;  // (from the original)
inline constexpr guest::Function<0x00317148, u32(u32, u32, u32, u32)> call_00317148;  // (from the original)
inline constexpr guest::Function<0x006a6e90, u32(u32, u32, u32, u32)> call_006a6e90;  // (from the original)
inline constexpr guest::Function<0x006fb50c, u32(u32, u32, u32, u32)> call_006fb50c;  // (from the original)
inline constexpr guest::Function<0x007482b8, u32(u32, u32, u32, u32)> call_007482b8;  // (from the original)
inline constexpr guest::Function<0x0074830c, u32(u32, u32, u32, u32)> call_0074830c;  // (from the original)
inline constexpr guest::Function<0x0075281c, u32(u32, u32, u32, u32)> call_0075281c;  // (from the original)

u32 f_00226828(u32 r0_unused, u32 r1, u32 r2, u32 r3) {
    u32 ea = 0;
    u32 r0 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r9 = guest::cpu()->r[9];
    u32 r10 = guest::cpu()->r[10];
    u32 r11 = guest::cpu()->r[11];
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 0x50u;  // (from the original)
    r0 = 1u;
    guest::cpu()->r[13] = r13;
    r0 = call_002fe7cc(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    *gptr<u32>(r13 + 0x10u) = u32(r0);  // (from the original)
    if (r0 == 0) {
        goto L_226988;
    }
    guest::cpu()->r[13] = r13;
    r0 = call_007482b8(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r4 = r0;
    r0 = *gptr<u32>(r13 + 0x10u);  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0074830c(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    r1 = r4 - 1u;
    r2 = 1u;
    *gptr<u32>(r13 + 0x20u) = u32(r1);  // (from the original)
    *gptr<u32>(r13 + 8u) = u32(r2);
    if (!u32(r1 >= 1u) || u32(r1 == 1u)) {
        goto L_226988;
    }
    r9 = 0x7ff8u;  // (from the original)
    r8 = ~0u;
    r7 = r0 - 1u;
    r10 = r9 | r2;
    r11 = r10 + r2;
L_226880:;
    r6 = 1u;
    if (!u32(r7 >= 1u) || u32(r7 == 1u)) {
        goto L_226970;
    }
L_22688c:;
    r0 = *gptr<u32>(r13 + 0x10u);  // (from the original)
    r1 = *gptr<u32>(r13 + 8u);
    r2 = r6;
    guest::cpu()->r[13] = r13;
    r0 = call_00317148(r0, r1, r2, r3);
    r3 = 0u;
    r2 = r3;
    r1 = r3;
    guest::cpu()->r[13] = r13;
    r0 = call_0075281c(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r5 = r0;
    r4 = 0u;
L_2268b4:;
    if (r5 == 0) {
        goto L_226954;
    }
    r1 = r9;
    r0 = r5;
    guest::cpu()->r[13] = r13;
    r0 = call_002fcb84(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 != 0) {
        goto L_22691c;
    }
    r1 = r10;
    r0 = r5;
    guest::cpu()->r[13] = r13;
    r0 = call_002fcb84(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 != 0) {
        goto L_22691c;
    }
    r1 = r11;
    r0 = r5;
    guest::cpu()->r[13] = r13;
    r0 = call_002fcb84(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 != 0) {
        goto L_22691c;
    }
    r1 = 0x7ffbu;  // (from the original)
    r0 = r5;
    guest::cpu()->r[13] = r13;
    r0 = call_002fcb84(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        goto L_226954;
    }
L_22691c:;
    *gptr<u32>(r13 + 0x14u) = u32(r8);  // (from the original)
    *gptr<u32>(r13 + 4u) = u32(r4 >> 4);
    *gptr<u32>(r13) = u32(r4 & 0xfu);  // (from the original)
    r2 = *gptr<u32>(r13 + 8u);
    r3 = r6;
    r1 = r13 + 0x18u;  // (from the original)
    r0 = r13 + 0x14u;  // (from the original)
    *gptr<u32>(r13 + 0x18u) = u32(r8);  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_006a6e90(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    ea = r13 + 0x10u;  // (from the original)
    r2 = *gptr<u32>(ea);
    ea = r13 + 0x14u;  // (from the original)
    r0 = *gptr<u32>(ea);
    r1 = *gptr<u32>(ea + 4);
    guest::cpu()->r[13] = r13;
    r0 = call_006fb50c(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
L_226954:;
    r4 = r4 + 1u;
    r5 = r5 + 4u;
    if (r4 < 0x100u) {  // (from the original)
        guest::preempt();
        goto L_2268b4;
    }
    r6 = r6 + 1u;
    if (r6 < r7) {
        guest::preempt();
        goto L_22688c;
    }
L_226970:;
    r1 = *gptr<u32>(r13 + 0x20u);  // (from the original)
    r0 = *gptr<u32>(r13 + 8u) + 1u;
    *gptr<u32>(r13 + 8u) = u32(r0);
    if (r0 < r1) {
        guest::preempt();
        goto L_226880;
    }
L_226988:;
    r13 = r13 + 0x50u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_00226828
GUEST_EXPORT(0x00226828, d_00226828::f_00226828);

// f_00228dec: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00228dec {

struct __attribute__((packed)) Object_00228dec_0 {
    u32 word_0;
};
GUEST_OFFSET(Object_00228dec_0, word_0, 0x0);  // (from the original)

inline constexpr guest::Function<0x002f76ad, u32(u32, u32, u32, u32)> call_002f76ac;  // (from the original)
inline constexpr guest::Function<0x00317dec, u32(u32, u32, u32, u32)> call_00317dec;  // (from the original)
inline constexpr guest::Function<0x00317e2c, u32(u32, u32, u32, u32)> call_00317e2c;  // (from the original)
inline constexpr guest::Function<0x004ecbe0, u32(u32, u32, u32, u32)> call_004ecbe0;  // (from the original)
inline constexpr guest::Function<0x004ecf70, u32(u32, u32, u32, u32)> call_004ecf70;  // (from the original)
inline constexpr guest::Function<0x004edd84, u32(u32, u32, u32, u32)> call_004edd84;  // (from the original)
inline constexpr guest::Function<0x004f14ac, u32(u32, u32, u32, u32)> call_004f14ac;  // (from the original)
inline constexpr guest::Function<0x00521ae0, u32(u32, u32, u32, u32)> call_00521ae0;  // (from the original)

u32 f_00228dec(gptr<Object_00228dec_0> arg0, u32 r1_unused, u32 r2, u32 r3) {
    u32 r0 = arg0.addr();
    u32 r1 = 0;
    u32 r4 = guest::cpu()->r[4];
    r1 = 0x8ee0c4u;  // (from the original)
    guest::cpu()->r[13] -= 8u;
    arg0->word_0 = u32(r1);
    r0 = r0 + 0x1150u;  // (from the original)
    r0 = call_004ecf70(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0x20u;  // (from the original)
    r0 = call_004ecbe0(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0xcu;  // (from the original)
    r0 = call_004edd84(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0x108u;  // (from the original)
    r0 = call_00317e2c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0xcu;  // (from the original)
    r0 = call_004edd84(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0x108u;  // (from the original)
    r0 = call_00317e2c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0xcu;  // (from the original)
    r0 = call_004f14ac(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0x108u;  // (from the original)
    r0 = call_00317e2c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0xcu;  // (from the original)
    r0 = call_004f14ac(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0x108u;  // (from the original)
    r0 = call_00317e2c(r0, r1, r2, r3);
    r4 = r0 - 0xce0u;  // (from the original)
    r1 = 0x250560u;  // (from the original)
    r3 = 2u;
    r2 = 0x60u;  // (from the original)
    r0 = r0 - 0xc4u;  // (from the original)
    r0 = call_002f76ac(r0, r1, r2, r3);
    r1 = 0x53721cu;  // (from the original)
    r3 = 2u;
    r2 = 0x114u;  // (from the original)
    r0 = r4 + 0x9f4u;  // (from the original)
    r0 = call_002f76ac(r0, r1, r2, r3);
    r1 = 0x58dc70u;  // (from the original)
    r3 = 2u;
    r2 = 0x70u;  // (from the original)
    r0 = r4 + 0x908u;  // (from the original)
    r0 = call_002f76ac(r0, r1, r2, r3);
    r1 = 0x317e2cu;  // (from the original)
    r3 = 2u;
    r2 = 0x108u;  // (from the original)
    r0 = r4 + 0x6f8u;  // (from the original)
    r0 = call_002f76ac(r0, r1, r2, r3);
    r1 = 0x317e2cu;  // (from the original)
    r3 = 2u;
    r2 = 0x108u;  // (from the original)
    r0 = r4 + 0x4e8u;  // (from the original)
    r0 = call_002f76ac(r0, r1, r2, r3);
    r1 = 0x317e2cu;  // (from the original)
    r3 = 2u;
    r2 = 0x108u;  // (from the original)
    r0 = r4 + 0x2d8u;  // (from the original)
    r0 = call_002f76ac(r0, r1, r2, r3);
    r1 = 0x4ecf70u;  // (from the original)
    r3 = 2u;
    r2 = 0x18u;  // (from the original)
    r0 = r4 + 0x2a8u;  // (from the original)
    r0 = call_002f76ac(r0, r1, r2, r3);
    r1 = 0x4ecbe0u;  // (from the original)
    r3 = 2u;
    r2 = 0x20u;  // (from the original)
    r0 = r4 + 0x268u;  // (from the original)
    r0 = call_002f76ac(r0, r1, r2, r3);
    r1 = 0x4edd84u;  // (from the original)
    r3 = 2u;
    r2 = 0xcu;  // (from the original)
    r0 = r4 + 0x250u;  // (from the original)
    r0 = call_002f76ac(r0, r1, r2, r3);
    r1 = 0x4edd84u;  // (from the original)
    r3 = 2u;
    r2 = 0xcu;  // (from the original)
    r0 = r4 + 0x238u;  // (from the original)
    r0 = call_002f76ac(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r4 + 0x12cu;  // (from the original)
    r0 = call_00317e2c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0x108u;  // (from the original)
    r0 = call_00317e2c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 8u;
    r0 = call_00317dec(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 8u;
    r0 = call_00317dec(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    guest::cpu()->r[13] += 8u;
    r0 = r0 - 0x14u;  // (from the original)
    return call_00521ae0(r0, r1, r2, r3);
}

}  // namespace d_00228dec
GUEST_EXPORT(0x00228dec, d_00228dec::f_00228dec);

// f_00228f74: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00228f74 {

inline constexpr guest::Function<0x00125b38, u32(u32, u32, u32, u32)> call_00125b38;  // (from the original)

u32 f_00228f74() {
    u32 r0 = 0;
    u32 r1 = 0;
    u32 r2 = 0;
    u32 r3 = 0;
    r3 = 0x80u;  // (from the original)
    r1 = 0x228f90u;  // (from the original)
    r2 = *gptr<u32>(0x952c48u);  // (from the original)
    r0 = 0x9984bcu;  // (from the original)
    return call_00125b38(r0, r1, r2, r3);
}

}  // namespace d_00228f74
GUEST_EXPORT(0x00228f74, d_00228f74::f_00228f74);

// f_00229c50: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00229c50 {

inline constexpr guest::Function<0x0062f03c, u32(u32, u32, u32, u32)> call_0062f03c;  // (from the original)

u32 f_00229c50() {
    u32 r0 = 0;
    u32 r4 = guest::cpu()->r[4];
    r0 = 0x950834u;  // (from the original)
    guest::cpu()->r[13] -= 8u;
    r4 = *gptr<u32>(r0 + 4u);
    if (r4 != 0) {
        r0 = u32(*gptr<u8>(r4 + 0xeu));  // (from the original)
        if (r0 == 1u) {
            r0 = *gptr<u32>(r4 + 0x48a0u);  // (from the original)
            guest::cpu()->r[13] += 8u;
            return r0;
        }
    }
    r0 = call_0062f03c(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    if (r0 == 3u) {
        r0 = 0x20u;  // (from the original)
        guest::cpu()->r[13] += 8u;
        return r0;
    }
    if (r0 == 4u) {
        r0 = 0x80u;  // (from the original)
    } else {
        r0 = 0u;
    }
    guest::cpu()->r[13] += 8u;
    return r0;
}

}  // namespace d_00229c50
GUEST_EXPORT(0x00229c50, d_00229c50::f_00229c50);

// f_0022a250: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0022a250 {

inline constexpr guest::Function<0x00125b38, u32(u32, u32, u32, u32)> call_00125b38;  // (from the original)

u32 f_0022a250() {
    u32 r0 = 0;
    u32 r1 = 0;
    u32 r2 = 0;
    u32 r3 = 0;
    r3 = 0x80u;  // (from the original)
    r1 = 0x22a26cu;  // (from the original)
    r2 = *gptr<u32>(0x952c48u);  // (from the original)
    r0 = 0x9984dcu;  // (from the original)
    return call_00125b38(r0, r1, r2, r3);
}

}  // namespace d_0022a250
GUEST_EXPORT(0x0022a250, d_0022a250::f_0022a250);

// f_0022ba54: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0022ba54 {

struct __attribute__((packed)) Object_0022ba54_0 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
    u32 word_18;
    u16 half_1c;
    u16 half_1e;
    u32 word_20;
};
GUEST_OFFSET(Object_0022ba54_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_0022ba54_0, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_0022ba54_0, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Object_0022ba54_0, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Object_0022ba54_0, word_10, 0x10);  // (from the original)
GUEST_OFFSET(Object_0022ba54_0, word_14, 0x14);  // (from the original)
GUEST_OFFSET(Object_0022ba54_0, word_18, 0x18);  // (from the original)
GUEST_OFFSET(Object_0022ba54_0, half_1c, 0x1c);  // (from the original)
GUEST_OFFSET(Object_0022ba54_0, half_1e, 0x1e);  // (from the original)
GUEST_OFFSET(Object_0022ba54_0, word_20, 0x20);  // (from the original)

inline constexpr guest::Function<0x001a113c, u32(u32, u32, u32, u32)> call_001a113c;  // (from the original)

u32 f_0022ba54(gptr<Object_0022ba54_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r1 = 0;
    u32 r2 = 0;
    u32 r4 = guest::cpu()->r[4];
    float S0 = 0;
    guest::cpu()->r[13] -= 8u;
    r4 = r0;
    S0 = std::bit_cast<float>(*gptr<u32>(0x22baacu));  // (from the original)
    r2 = 0u;
    arg0->word_4 = u32(std::bit_cast<u32>(S0));
    arg0->word_8 = u32(std::bit_cast<u32>(S0));
    arg0->word_c = u32(std::bit_cast<u32>(S0));
    arg0->word_10 = u32(std::bit_cast<u32>(S0));
    arg0->word_14 = u32(std::bit_cast<u32>(S0));
    arg0->word_18 = u32(std::bit_cast<u32>(S0));
    S0 = std::bit_cast<float>(*gptr<u32>(0x22bab0u));  // (from the original)
    arg0->half_1c = u16(r2);
    arg0->half_1e = u16(r2);
    arg0->word_20 = u32(std::bit_cast<u32>(S0));
    r1 = 0x8572a8u;  // (from the original)
    arg0->word_0 = u32(0x8ee1e4u);  // (from the original)
    r0 = r4;
    guest::cpu()->s[0] = S0;
    r0 = call_001a113c(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    S0 = guest::cpu()->s[0];
    r0 = r4;
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1;
    guest::cpu()->s[0] = S0;
    return r0;
}

}  // namespace d_0022ba54
GUEST_EXPORT(0x0022ba54, d_0022ba54::f_0022ba54);

// f_0022bac4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0022bac4 {

inline constexpr guest::Function<0x004b4fc0, u32(u32, u32, u32, u32)> call_004b4fc0;  // (from the original)
inline constexpr guest::Function<0x00568984, u32(u32, u32, u32, u32)> call_00568984;  // (from the original)

u32 f_0022bac4(u32 r0, u32 r1_unused, u32 r2_unused, u32 r3) {
    u32 r1 = 0;
    u32 r2 = 0;
    u32 r4 = guest::cpu()->r[4];
    guest::cpu()->r[13] -= 8u;
    r4 = r0;
    r2 = 1u;
    r1 = 0x22baf4u;  // (from the original)
    r0 = r0 + 0x24u;  // (from the original)
    r0 = call_004b4fc0(r0, r1, r2, r3);
    r2 = r0;
    r1 = r4 + 0x3b8u;  // (from the original)
    r0 = r4 + 0x24u;  // (from the original)
    guest::cpu()->r[13] += 8u;
    r3 = 0u;
    return call_00568984(r0, r1, r2, r3);
}

}  // namespace d_0022bac4
GUEST_EXPORT(0x0022bac4, d_0022bac4::f_0022bac4);

// f_0022bb00: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0022bb00 {

inline constexpr guest::Function<0x001323bc, u32(u32, u32, u32, u32)> call_001323bc;  // (from the original)
inline constexpr guest::Function<0x00569e6c, u32(u32, u32, u32, u32)> call_00569e6c;  // (from the original)

u32 f_0022bb00(u32 r0, u32 r1, u32 r2) {
    u32 r4 = guest::cpu()->r[4];
    guest::cpu()->r[13] -= 8u;
    r4 = r0;
    r0 = call_001323bc(r0, r1, r2, guest::cpu()->r[3]);
    r1 = r4 + 0x24u;  // (from the original)
    guest::cpu()->r[13] += 8u;
    r2 = 0u;
    return call_00569e6c(r0, r1, r2, guest::cpu()->r[3]);
}

}  // namespace d_0022bb00
GUEST_EXPORT(0x0022bb00, d_0022bb00::f_0022bb00);

// f_0022bb1c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0022bb1c {

inline constexpr guest::Function<0x00567d60, u32(u32, u32, u32, u32)> call_00567d60;  // (from the original)
inline constexpr guest::Function<0x00569184, u32(u32, u32, u32, u32)> call_00569184;  // (from the original)
inline constexpr guest::Function<0x005695e4, u32(u32, u32, u32, u32)> call_005695e4;  // (from the original)

u32 f_0022bb1c(u32 r0, u32 r1_unused, u32 r2, u32 r3) {
    u32 r1 = 0;
    u32 r4 = guest::cpu()->r[4];
    guest::cpu()->r[13] -= 8u;
    r4 = r0;
    r1 = *gptr<u32>(0x952cc0u) + 0x27cu;  // (from the original)
    r0 = r4 + 0x170u;  // (from the original)
    r0 = call_00567d60(r0, r1, r2, r3);
    *gptr<u32>(r4 + 0x110u) = u32(r4 + 0x170u);  // (from the original)
    r3 = 0x500u;  // (from the original)
    r2 = 0u;
    r1 = 0x22bb74u;  // (from the original)
    r0 = r4 + 0x24u;  // (from the original)
    r0 = call_00569184(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    *gptr<u8>(r4 + 0x30u) = u8(0x8cu);  // (from the original)
    r2 = r4 + 0x170u;  // (from the original)
    r0 = r4 + 0x3b8u;  // (from the original)
    guest::cpu()->r[13] += 8u;
    r1 = 0x22bb88u;  // (from the original)
    return call_005695e4(r0, r1, r2, r3);
}

}  // namespace d_0022bb1c
GUEST_EXPORT(0x0022bb1c, d_0022bb1c::f_0022bb1c);

// f_0022bba4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0022bba4 {

inline constexpr guest::Function<0x001323b4, u32(u32, u32, u32, u32)> call_001323b4;  // (from the original)

u32 f_0022bba4(u32 r0) {
    r0 = r0 + 0x24u;  // (from the original)
    return call_001323b4(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_0022bba4
GUEST_EXPORT(0x0022bba4, d_0022bba4::f_0022bba4);

// f_0022bbac: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0022bbac {

struct __attribute__((packed)) Object_0022bbac_0 {
    u8 unknown_0[0x3d4];  // (not used here)
    u8 byte_3d4;
};
GUEST_OFFSET(Object_0022bbac_0, byte_3d4, 0x3d4);  // (from the original)

inline constexpr guest::Function<0x004b4fc0, u32(u32, u32, u32, u32)> call_004b4fc0;  // (from the original)
inline constexpr guest::Function<0x00568630, u32(u32, u32, u32, u32)> call_00568630;  // (from the original)
inline constexpr guest::Function<0x005697e0, u32(u32, u32, u32, u32)> call_005697e0;  // (from the original)

u32 f_0022bbac(gptr<Object_0022bbac_0> arg0, u32 r1, u32 r2_unused, u32 r3, float S0) {
    u32 r0 = arg0.addr();
    u32 r2 = 0;
    u32 r4 = guest::cpu()->r[4];
    guest::cpu()->r[13] -= 8u;
    r4 = r0;
    r0 = u32(arg0->byte_3d4);
    if (r0 != 0) {
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        guest::cpu()->s[0] = S0;
        return r0;
    }
    r2 = 1u;
    r1 = 0x22bbf8u;  // (from the original)
    r0 = r4 + 0x24u;  // (from the original)
    guest::cpu()->s[0] = S0;
    r0 = call_004b4fc0(r0, r1, r2, r3);
    S0 = guest::cpu()->s[0];
    r2 = r0;
    r3 = 0u;
    r1 = r4 + 0x3b8u;  // (from the original)
    r0 = r4 + 0x24u;  // (from the original)
    guest::cpu()->s[0] = S0;
    r0 = call_00568630(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r4 + 0x3b8u;  // (from the original)
    guest::cpu()->r[13] += 8u;
    S0 = std::bit_cast<float>(*gptr<u32>(0x22bc04u));  // (from the original)
    guest::cpu()->s[0] = S0;
    return call_005697e0(r0, r1, r2, r3);
}

}  // namespace d_0022bbac
GUEST_EXPORT(0x0022bbac, d_0022bbac::f_0022bbac);

// f_0022bc08: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0022bc08 {

inline constexpr guest::Function<0x00568c10, u32(u32, u32, u32, u32)> call_00568c10;  // (from the original)
inline constexpr guest::Function<0x00569544, u32(u32, u32, u32, u32)> call_00569544;  // (from the original)

u32 f_0022bc08(u32 r0) {
    u32 r4 = guest::cpu()->r[4];
    guest::cpu()->r[13] -= 8u;
    r4 = r0;
    r0 = r0 + 0x3b8u;  // (from the original)
    r0 = call_00569544(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    r0 = r4 + 0x24u;  // (from the original)
    guest::cpu()->r[13] += 8u;
    return call_00568c10(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_0022bc08
GUEST_EXPORT(0x0022bc08, d_0022bc08::f_0022bc08);

// f_0022bc80: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0022bc80 {

struct __attribute__((packed)) Object_0022bc80_0 {
    u8 unknown_0[0xf0];  // (not used here)
    u32 word_f0;
};
GUEST_OFFSET(Object_0022bc80_0, word_f0, 0xf0);  // (from the original)

inline constexpr guest::Function<0x002ccfd4, u32(u32, u32, u32, u32)> call_002ccfd4;  // (from the original)
inline constexpr guest::Function<0x002e0374, u32(u32, u32, u32, u32)> call_002e0374;  // (from the original)
inline constexpr guest::Function<0x0056878c, u32(u32, u32, u32, u32)> call_0056878c;  // (from the original)
inline constexpr guest::Function<0x00569184, u32(u32, u32, u32, u32)> call_00569184;  // (from the original)

u32 f_0022bc80(gptr<Object_0022bc80_0> arg0, u32 r1) {
    u32 r0 = arg0.addr();
    u32 r2 = 0;
    u32 r3 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r4 = r0;
    r5 = r1;
    arg0->word_f0 = u32(r0 + 0x150u);  // (from the original)
    r1 = 0x857a40u;  // (from the original)
    r3 = 0x2500u;  // (from the original)
    r2 = 0u;
    r0 = r4 + 4u;
    r0 = call_00569184(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    *gptr<u8>(r4 + 0x10u) = u8(0x9bu);  // (from the original)
    r0 = r4 + 0x398u;  // (from the original)
    r0 = call_002ccfd4(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    *gptr<u32>(r4 + 0x3a4u) = u32(r4 + 4u);  // (from the original)
    r1 = *gptr<u32>(0x951658u + (r5 << 2));  // (from the original)
    r0 = r4 + 4u;
    r0 = call_0056878c(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = r0;
    r0 = r4 + 0x398u;  // (from the original)
    r0 = call_002e0374(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r0 = 1u;
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_0022bc80
GUEST_EXPORT(0x0022bc80, d_0022bc80::f_0022bc80);

// f_0022bcec: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0022bcec {

inline constexpr guest::Function<0x00132364, u32(u32, u32, u32, u32)> call_00132364;  // (from the original)
inline constexpr guest::Function<0x002cd0e0, u32(u32, u32, u32, u32)> call_002cd0e0;  // (from the original)

u32 f_0022bcec(u32 r0) {
    u32 r4 = guest::cpu()->r[4];
    guest::cpu()->r[13] -= 8u;
    r4 = r0;
    r0 = r0 + 0x398u;  // (from the original)
    r0 = call_002cd0e0(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    r0 = r4 + 0x150u;  // (from the original)
    r0 = call_00132364(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    r0 = 1u;
    guest::cpu()->r[13] += 8u;
    return r0;
}

}  // namespace d_0022bcec
GUEST_EXPORT(0x0022bcec, d_0022bcec::f_0022bcec);

// f_0022bdf0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0022bdf0 {

inline constexpr guest::Function<0x00268928, u32(u32, u32, u32, u32)> call_00268928;  // (from the original)
inline constexpr guest::Function<0x002cd3d0, u32(u32, u32, u32, u32)> call_002cd3d0;  // (from the original)
inline constexpr guest::Function<0x0056878c, u32(u32, u32, u32, u32)> call_0056878c;  // (from the original)
inline constexpr guest::Function<0x00568c10, u32(u32, u32, u32, u32)> call_00568c10;  // (from the original)

u32 f_0022bdf0(u32 r0, u32 r1_unused, u32 r2) {
    u32 r1 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r4 = r0;
    r1 = 0x22be3cu;  // (from the original)
    r0 = r0 + 4u;
    r0 = call_0056878c(r0, r1, r2, guest::cpu()->r[3]);
    r2 = guest::cpu()->r[2];
    r5 = r0;
    r1 = 0x22be4cu;  // (from the original)
    r0 = r4 + 4u;
    r0 = call_0056878c(r0, r1, r2, guest::cpu()->r[3]);
    r1 = r0;
    r2 = r5;
    r0 = r4 + 0x398u;  // (from the original)
    r0 = call_00268928(r0, r1, r2, guest::cpu()->r[3]);
    r2 = guest::cpu()->r[2];
    r1 = 2u;
    r0 = r4 + 0x398u;  // (from the original)
    r0 = call_002cd3d0(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r0 = r4 + 4u;
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    return call_00568c10(r0, r1, r2, guest::cpu()->r[3]);
}

}  // namespace d_0022bdf0
GUEST_EXPORT(0x0022bdf0, d_0022bdf0::f_0022bdf0);

// f_0022be5c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0022be5c {

inline constexpr guest::Function<0x00268928, u32(u32, u32, u32, u32)> call_00268928;  // (from the original)
inline constexpr guest::Function<0x002cd3d0, u32(u32, u32, u32, u32)> call_002cd3d0;  // (from the original)
inline constexpr guest::Function<0x0056878c, u32(u32, u32, u32, u32)> call_0056878c;  // (from the original)
inline constexpr guest::Function<0x00568c10, u32(u32, u32, u32, u32)> call_00568c10;  // (from the original)

u32 f_0022be5c(u32 r0, u32 r1, u32 r2) {
    u32 r4 = guest::cpu()->r[4];
    guest::cpu()->r[13] -= 8u;
    r4 = r0;
    r1 = *gptr<u32>(0x951658u + (r1 << 2));  // (from the original)
    r0 = r4 + 4u;
    r0 = call_0056878c(r0, r1, r2, guest::cpu()->r[3]);
    r2 = r0;
    r1 = 0u;
    r0 = r4 + 0x398u;  // (from the original)
    r0 = call_00268928(r0, r1, r2, guest::cpu()->r[3]);
    r2 = guest::cpu()->r[2];
    r1 = 1u;
    r0 = r4 + 0x398u;  // (from the original)
    r0 = call_002cd3d0(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r0 = r4 + 4u;
    guest::cpu()->r[13] += 8u;
    return call_00568c10(r0, r1, r2, guest::cpu()->r[3]);
}

}  // namespace d_0022be5c
GUEST_EXPORT(0x0022be5c, d_0022be5c::f_0022be5c);

// f_0022bea0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0022bea0 {

struct __attribute__((packed)) Object_0022bea0_0 {
    u8 unknown_0[0xf0];  // (not used here)
    u32 word_f0;
};
GUEST_OFFSET(Object_0022bea0_0, word_f0, 0xf0);  // (from the original)

inline constexpr guest::Function<0x00268928, u32(u32, u32, u32, u32)> call_00268928;  // (from the original)
inline constexpr guest::Function<0x002ccfd4, u32(u32, u32, u32, u32)> call_002ccfd4;  // (from the original)
inline constexpr guest::Function<0x0056878c, u32(u32, u32, u32, u32)> call_0056878c;  // (from the original)
inline constexpr guest::Function<0x00569184, u32(u32, u32, u32, u32)> call_00569184;  // (from the original)

u32 f_0022bea0(gptr<Object_0022bea0_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r1 = 0;
    u32 r2 = 0;
    u32 r3 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r4 = r0;
    arg0->word_f0 = u32(r0 + 0x150u);  // (from the original)
    r1 = 0x857a40u;  // (from the original)
    r3 = 0x2500u;  // (from the original)
    r2 = 0u;
    r0 = r4 + 4u;
    r0 = call_00569184(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    *gptr<u8>(r4 + 0x10u) = u8(0x9bu);  // (from the original)
    r0 = r4 + 0x398u;  // (from the original)
    r0 = call_002ccfd4(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    *gptr<u32>(r4 + 0x3a4u) = u32(r4 + 4u);  // (from the original)
    r1 = 0x22bf14u;  // (from the original)
    r0 = r4 + 4u;
    r0 = call_0056878c(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r5 = r0;
    r1 = 0x22bf24u;  // (from the original)
    r0 = r4 + 4u;
    r0 = call_0056878c(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    r1 = r0;
    r2 = r5;
    r0 = r4 + 0x398u;  // (from the original)
    r0 = call_00268928(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r0 = 1u;
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_0022bea0
GUEST_EXPORT(0x0022bea0, d_0022bea0::f_0022bea0);

// f_0022bf34: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0022bf34 {

inline constexpr guest::Function<0x00132364, u32(u32, u32, u32, u32)> call_00132364;  // (from the original)
inline constexpr guest::Function<0x002cd0e0, u32(u32, u32, u32, u32)> call_002cd0e0;  // (from the original)

u32 f_0022bf34(u32 r0) {
    u32 r4 = guest::cpu()->r[4];
    guest::cpu()->r[13] -= 8u;
    r4 = r0;
    r0 = r0 + 0x398u;  // (from the original)
    r0 = call_002cd0e0(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    r0 = r4 + 0x150u;  // (from the original)
    r0 = call_00132364(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    r0 = 1u;
    guest::cpu()->r[13] += 8u;
    return r0;
}

}  // namespace d_0022bf34
GUEST_EXPORT(0x0022bf34, d_0022bf34::f_0022bf34);

// f_0022bf54: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0022bf54 {

inline constexpr guest::Function<0x002cd17c, u32(u32, u32, u32, u32)> call_002cd17c;  // (from the original)

u32 f_0022bf54(u32 r0) {
    r0 = r0 + 0x398u;  // (from the original)
    return call_002cd17c(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_0022bf54
GUEST_EXPORT(0x0022bf54, d_0022bf54::f_0022bf54);

// f_0022c040: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0022c040 {

struct __attribute__((packed)) Object_0022c040_0 {
    u8 unknown_0[0xf0];  // (not used here)
    u32 word_f0;
};
GUEST_OFFSET(Object_0022c040_0, word_f0, 0xf0);  // (from the original)

inline constexpr guest::Function<0x00268b68, u32(u32, u32, u32, u32)> call_00268b68;  // (from the original)
inline constexpr guest::Function<0x002ccfd4, u32(u32, u32, u32, u32)> call_002ccfd4;  // (from the original)
inline constexpr guest::Function<0x0056878c, u32(u32, u32, u32, u32)> call_0056878c;  // (from the original)
inline constexpr guest::Function<0x00569184, u32(u32, u32, u32, u32)> call_00569184;  // (from the original)

u32 f_0022c040(gptr<Object_0022c040_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r1 = 0;
    u32 r2 = 0;
    u32 r3 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r4 = r0;
    arg0->word_f0 = u32(r0 + 0x150u);  // (from the original)
    r1 = 0x857a40u;  // (from the original)
    r3 = 0x2500u;  // (from the original)
    r2 = 0u;
    r0 = r4 + 4u;
    r0 = call_00569184(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    *gptr<u8>(r4 + 0x10u) = u8(0x9bu);  // (from the original)
    r0 = r4 + 0x398u;  // (from the original)
    r0 = call_002ccfd4(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    *gptr<u32>(r4 + 0x3a4u) = u32(r4 + 4u);  // (from the original)
    r1 = 0x22c0c8u;  // (from the original)
    r0 = r4 + 4u;
    r0 = call_0056878c(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r6 = r0;
    r1 = 0x22c0d8u;  // (from the original)
    r0 = r4 + 4u;
    r0 = call_0056878c(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r5 = r0;
    r1 = 0x22c0e8u;  // (from the original)
    r0 = r4 + 4u;
    r0 = call_0056878c(r0, r1, r2, r3);
    r1 = r0;
    r3 = r6;
    r2 = r5;
    r0 = r4 + 0x398u;  // (from the original)
    r0 = call_00268b68(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r0 = 1u;
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_0022c040
GUEST_EXPORT(0x0022c040, d_0022c040::f_0022c040);

// f_0022c0f8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0022c0f8 {

inline constexpr guest::Function<0x00132364, u32(u32, u32, u32, u32)> call_00132364;  // (from the original)
inline constexpr guest::Function<0x002cd0e0, u32(u32, u32, u32, u32)> call_002cd0e0;  // (from the original)

u32 f_0022c0f8(u32 r0) {
    u32 r4 = guest::cpu()->r[4];
    guest::cpu()->r[13] -= 8u;
    r4 = r0;
    r0 = r0 + 0x398u;  // (from the original)
    r0 = call_002cd0e0(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    r0 = r4 + 0x150u;  // (from the original)
    r0 = call_00132364(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    r0 = 1u;
    guest::cpu()->r[13] += 8u;
    return r0;
}

}  // namespace d_0022c0f8
GUEST_EXPORT(0x0022c0f8, d_0022c0f8::f_0022c0f8);

// f_0022c118: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0022c118 {

inline constexpr guest::Function<0x002cd17c, u32(u32, u32, u32, u32)> call_002cd17c;  // (from the original)

u32 f_0022c118(u32 r0) {
    r0 = r0 + 0x398u;  // (from the original)
    return call_002cd17c(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_0022c118
GUEST_EXPORT(0x0022c118, d_0022c118::f_0022c118);

// f_0022c368: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0022c368 {

struct __attribute__((packed)) Object_0022c368_0 {
    u8 unknown_0[0x18];  // (not used here)
    u32 word_18;
    u32 word_1c;
};
GUEST_OFFSET(Object_0022c368_0, word_18, 0x18);  // (from the original)
GUEST_OFFSET(Object_0022c368_0, word_1c, 0x1c);  // (from the original)


u32 f_0022c368(gptr<Object_0022c368_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r1 = 0;
    r1 = arg0->word_1c;
    if (r1 == 0) {
        guest::cpu()->r[1] = r1;
        return r0;
    }
    *gptr<u8>(r1 + 0xb7u) = u8(u32(*gptr<u8>(r1 + 0xb7u)) & 0xfeu);  // (from the original)
    r0 = arg0->word_18;
    *gptr<u8>(r0 + 0x122u) = u8(1u);  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_0022c368
GUEST_EXPORT(0x0022c368, d_0022c368::f_0022c368);

// f_0022c53c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0022c53c {

inline constexpr guest::Function<0x00125aec, u32(u32, u32, u32, u32)> call_00125aec;  // (from the original)
inline constexpr guest::Function<0x00125e08, u32(u32, u32, u32, u32)> call_00125e08;  // (from the original)
inline constexpr guest::Function<0x001324a8, u32(u32, u32, u32, u32)> call_001324a8;  // (from the original)

u32 f_0022c53c(u32 r0, u32 r1, u32 r2) {
    u32 ea = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 8;
    guest::cpu()->r[13] = r13;
    r0 = call_00125e08(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r0 = r0 + 0xcu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_001324a8(r0, r1, r2, guest::cpu()->r[3]);
    r1 = 0x8ee248u;  // (from the original)
    r4 = 0u;
    *gptr<u32>(r0 + 0xcu) = u32(r4);  // (from the original)
    r2 = r1 + 0x10u;  // (from the original)
    *gptr<u32>(r0) = u32(r2);
    r0 = r0 - 0xcu;  // (from the original)
    ea = r0;
    *gptr<u32>(ea) = u32(r1);
    ea = r0 + 0x1cu;  // (from the original)
    *gptr<u32>(ea) = u32(r4);
    r0 = ea + 4u;
    guest::cpu()->r[13] = r13;
    r0 = call_00125aec(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    ea = r0 + 0x28u;  // (from the original)
    *gptr<u32>(ea) = u32(r4);
    r0 = ea + 4u;
    guest::cpu()->r[13] = r13;
    r0 = call_00125aec(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r0 = r0 + 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00125aec(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r0 = r0 + 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00125aec(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r0 = r0 + 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00125aec(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r0 = r0 + 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00125aec(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r0 = r0 + 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00125aec(r0, r1, r2, guest::cpu()->r[3]);
    r0 = r0 - 0x114u;  // (from the original)
    r1 = 1u;
    *gptr<u8>(r0 + 0x13cu) = u8(r1);  // (from the original)
    *gptr<u8>(r0 + 0x13du) = u8(r1);  // (from the original)
    *gptr<u8>(r0 + 0x13eu) = u8(r1);  // (from the original)
    *gptr<u8>(r0 + 0x13fu) = u8(r1);  // (from the original)
    r13 = r13 + 8;
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_0022c53c
GUEST_EXPORT(0x0022c53c, d_0022c53c::f_0022c53c);

// f_0022c5d8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0022c5d8 {

struct __attribute__((packed)) Object_0022c5d8_0 {
    u32 word_0;
    u8 unknown_4[0x8];  // (not used here)
    u32 word_c;
};
GUEST_OFFSET(Object_0022c5d8_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_0022c5d8_0, word_c, 0xc);  // (from the original)

inline constexpr guest::Function<0x0056988c, u32(u32, u32, u32, u32)> call_0056988c;  // (from the original)

u32 f_0022c5d8(gptr<Object_0022c5d8_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r1 = 0;
    u32 r2 = 0;
    r1 = 0x8ee248u;  // (from the original)
    guest::cpu()->r[13] -= 8u;
    arg0->word_0 = u32(r1);
    r2 = r1 + 0x10u;  // (from the original)
    arg0->word_c = u32(r2);
    r0 = r0 + 0x114u;  // (from the original)
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
    r0 = r0 - 0x28u;  // (from the original)
    r0 = call_0056988c(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r0 = r0 - 0x28u;  // (from the original)
    r0 = call_0056988c(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r0 = r0 - 0x2cu;  // (from the original)
    r0 = call_0056988c(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r0 = r0 - 0x20u;  // (from the original)
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_0022c5d8
GUEST_EXPORT(0x0022c5d8, d_0022c5d8::f_0022c5d8);

// f_0022c720: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0022c720 {

inline constexpr guest::Function<0x00568630, u32(u32, u32, u32, u32)> call_00568630;  // (from the original)

u32 f_0022c720(u32 r0, u32 r1, float S0) {
    u32 r2 = 0;
    u32 r3 = 0;
    u32 r4 = guest::cpu()->r[4];
    guest::cpu()->r[13] -= 8u;
    r4 = r0;
    if (r1 != 0) {
        if (r1 == 1u) {
            goto L_22c760;
        }
        if (r1 == 2u) {
            goto L_22c774;
        }
        if (r1 != 3u) {
            goto L_22c798;
        }
        goto L_22c788;
    }
    *gptr<u32>(r4 + 0x1a8u) = u32(*gptr<u32>(r4 + 0x1a4u));  // (from the original)
    *gptr<u32>(r4 + 0x1a0u) = u32(r4 + 0x150u);  // (from the original)
    goto L_22c798;
L_22c760:;
    *gptr<u32>(r4 + 0x1a8u) = u32(*gptr<u32>(r4 + 0x1a4u));  // (from the original)
    *gptr<u32>(r4 + 0x1a0u) = u32(r4 + 0x178u);  // (from the original)
    goto L_22c798;
L_22c774:;
    *gptr<u32>(r4 + 0x1a8u) = u32(*gptr<u32>(r4 + 0x200u));  // (from the original)
    *gptr<u32>(r4 + 0x1a0u) = u32(r4 + 0x1b0u);  // (from the original)
    goto L_22c798;
L_22c788:;
    *gptr<u32>(r4 + 0x1a8u) = u32(*gptr<u32>(r4 + 0x200u));  // (from the original)
    *gptr<u32>(r4 + 0x1a0u) = u32(r4 + 0x1d8u);  // (from the original)
L_22c798:;
    r1 = *gptr<u32>(r4 + 0x1a0u);  // (from the original)
    r2 = *gptr<u32>(r4 + 0x1a8u);  // (from the original)
    r3 = 0u;
    r0 = r4 + 4u;
    guest::cpu()->s[0] = S0;
    r0 = call_00568630(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = *gptr<u32>(r4 + 0x1a0u);  // (from the original)
    S0 = std::bit_cast<float>(*gptr<u32>(0x22c7c4u));  // (from the original)
    r1 = *gptr<u32>(*gptr<u32>(r0) + 8u);
    guest::cpu()->r[13] += 8u;
    guest::cpu()->s[0] = S0;
    return guest::call_address<u32>(r1, r0, r1, r2, r3);
}

}  // namespace d_0022c720
GUEST_EXPORT(0x0022c720, d_0022c720::f_0022c720);

// f_0022c7c8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0022c7c8 {

struct __attribute__((packed)) Object_0022c7c8_0 {
    u32 word_0;
};
GUEST_OFFSET(Object_0022c7c8_0, word_0, 0x0);  // (from the original)

inline constexpr guest::Function<0x00125aec, u32(u32, u32, u32, u32)> call_00125aec;  // (from the original)
inline constexpr guest::Function<0x00125e3c, u32(u32, u32, u32, u32)> call_00125e3c;  // (from the original)

u32 f_0022c7c8(gptr<Object_0022c7c8_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r1 = 0;
    u32 r4 = guest::cpu()->r[4];
    r1 = 0x8ebb64u;  // (from the original)
    guest::cpu()->r[13] -= 8u;
    arg0->word_0 = u32(r1);
    r0 = r0 + 4u;
    r0 = call_00125e3c(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r0 = r0 + 0x14cu;  // (from the original)
    r0 = call_00125aec(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r0 = r0 + 0x28u;  // (from the original)
    r0 = call_00125aec(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r0 = r0 - 0x178u;  // (from the original)
    r4 = 0u;
    *gptr<u32>(r0 + 0x1a0u) = u32(r4);  // (from the original)
    *gptr<u32>(r0 + 0x1a4u) = u32(r4);  // (from the original)
    *gptr<u32>(r0 + 0x1a8u) = u32(r4);  // (from the original)
    *gptr<u8>(r0 + 0x1acu) = u8(r4);  // (from the original)
    *gptr<u8>(r0 + 0x1adu) = u8(1u);  // (from the original)
    r1 = 0x8ee268u;  // (from the original)
    *gptr<u32>(r0) = u32(r1);
    r0 = r0 + 0x1b0u;  // (from the original)
    r0 = call_00125aec(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r0 = r0 + 0x28u;  // (from the original)
    r0 = call_00125aec(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r0 = r0 - 0x1d8u;  // (from the original)
    *gptr<u32>(r0 + 0x200u) = u32(r4);  // (from the original)
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_0022c7c8
GUEST_EXPORT(0x0022c7c8, d_0022c7c8::f_0022c7c8);

// f_0022c87c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0022c87c {

struct __attribute__((packed)) Object_0022c87c_0 {
    u32 word_0;
};
GUEST_OFFSET(Object_0022c87c_0, word_0, 0x0);  // (from the original)

inline constexpr guest::Function<0x0056988c, u32(u32, u32, u32, u32)> call_0056988c;  // (from the original)
inline constexpr guest::Function<0x005bf744, u32(u32, u32, u32, u32)> call_005bf744;  // (from the original)

u32 f_0022c87c(gptr<Object_0022c87c_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r1 = 0;
    r1 = 0x8ee268u;  // (from the original)
    guest::cpu()->r[13] -= 8u;
    arg0->word_0 = u32(r1);
    r0 = r0 + 0x1d8u;  // (from the original)
    r0 = call_0056988c(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r0 = r0 - 0x28u;  // (from the original)
    r0 = call_0056988c(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = 0x8ebb64u;  // (from the original)
    *gptr<u32>(r0 - 0x1b0u) = u32(r1);  // (from the original)
    r0 = r0 - 0x38u;  // (from the original)
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

}  // namespace d_0022c87c
GUEST_EXPORT(0x0022c87c, d_0022c87c::f_0022c87c);

// f_0022d734: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0022d734 {

inline constexpr guest::Function<0x0055cabc, u32(u32, u32, u32, u32)> call_0055cabc;  // (from the original)

u32 f_0022d734() {
    u32 r0 = 0;
    u32 r1 = 0;
    r0 = 0xa182f8u;  // (from the original)
    r1 = 0u;
    *gptr<u8>(r0) = u8(r1);
    r0 = r0 + 4u;
    return call_0055cabc(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_0022d734
GUEST_EXPORT(0x0022d734, d_0022d734::f_0022d734);

// f_0022d74c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0022d74c {

inline constexpr guest::Function<0x001b4a8c, u32(u32, u32, u32, u32)> call_001b4a8c;  // (from the original)
inline constexpr guest::Function<0x002ff408, u32(u32, u32, u32, u32)> call_002ff408;  // (from the original)
inline constexpr guest::Function<0x00303c84, u32(u32, u32, u32, u32)> call_00303c84;  // (from the original)
inline constexpr guest::Function<0x003052f0, u32(u32, u32, u32, u32)> call_003052f0;  // (from the original)
inline constexpr guest::Function<0x003084d0, u32(u32, u32, u32, u32)> call_003084d0;  // (from the original)
inline constexpr guest::Function<0x005cc070, u32(u32, u32, u32, u32)> call_005cc070;  // (from the original)
inline constexpr guest::Function<0x005cc4b4, u32(u32, u32, u32, u32)> call_005cc4b4;  // (from the original)
inline constexpr guest::Function<0x005cc4e4, u32(u32, u32, u32, u32)> call_005cc4e4;  // (from the original)
inline constexpr guest::Function<0x005cc504, u32(u32, u32, u32, u32)> call_005cc504;  // (from the original)
inline constexpr guest::Function<0x005dd348, u32(u32, u32, u32, u32)> call_005dd348;  // (from the original)
inline constexpr guest::Function<0x005f4cf8, u32(u32, u32, u32, u32)> call_005f4cf8;  // (from the original)
inline constexpr guest::Function<0x005fcf88, u32(u32, u32, u32, u32)> call_005fcf88;  // (from the original)

u32 f_0022d74c(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 ea = 0;
    u32 res = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r9 = guest::cpu()->r[9];
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 0x48u;  // (from the original)
    r4 = r0;
    r9 = r1;
    r7 = *gptr<u32>(r13 + 0x4cu);  // (from the original)
    r8 = *gptr<u32>(r13 + 0x48u);  // (from the original)
    r5 = r2;
    r6 = r3;
    r0 = r13 + 0x1cu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_005cc504(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = r13 + 0x1cu;  // (from the original)
    r0 = r4 + 0xb0u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_005fcf88(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = r9;
    r0 = r13 + 0x1cu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_005cc4b4(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = r13 + 0x1cu;  // (from the original)
    r0 = r4 + 0xbcu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_005fcf88(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = r9;
    r0 = r13 + 0x1cu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_005cc4e4(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = r13 + 0x1cu;  // (from the original)
    r0 = r4 + 0xc8u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_005fcf88(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r4 + 0xd8u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_003084d0(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r7 != 0) {
        r1 = r7;
        r0 = r4 + 0x108u;  // (from the original)
        guest::cpu()->r[13] = r13;
        r0 = call_001b4a8c(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
    } else {
        r0 = r4 + 0x108u;  // (from the original)
        guest::cpu()->r[13] = r13;
        r0 = call_003052f0(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
    }
    r0 = r9;
    guest::cpu()->r[13] = r13;
    r0 = call_002ff408(r0, r1, r2, r3);
    ea = r13 + 0xcu;  // (from the original)
    *gptr<u32>(ea) = u32(r5);
    *gptr<u32>(ea + 4) = u32(r6);
    r3 = r4 + 0xc8u;  // (from the original)
    ea = r13 + 0x14u;  // (from the original)
    *gptr<u32>(ea) = u32(r5);
    *gptr<u32>(ea + 4) = u32(r6);
    r2 = r4 + 0xbcu;  // (from the original)
    *gptr<u32>(r13) = u32(r4 + 0xd4u);  // (from the original)
    *gptr<u32>(r13 + 4) = u32(r5);
    *gptr<u32>(r13 + 8) = u32(r6);
    r1 = r4 + 0xb0u;  // (from the original)
    r0 = r4;
    guest::cpu()->r[13] = r13;
    r0 = call_005dd348(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = *gptr<u32>(0x95dec4u);  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_005f4cf8(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r4;
    guest::cpu()->r[13] = r13;
    r0 = call_00303c84(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 != 0) {
        if (r8 != 0) {
            r0 = r9;
            guest::cpu()->r[13] = r13;
            r0 = call_005cc070(r0, r1, r2, r3);
        }
        r0 = *gptr<u32>(r4 + 0xd4u);  // (from the original)
        res = r0;
        if (res >> 0x1f == (r0 & (r0 ^ res)) >> 0x1f) {  // (from the original)
            r1 = r0 & 0xffu;  // (from the original)
            r0 = r9;
            *gptr<u8>(r0 + 0x26eu) = u8(r1);  // (from the original)
            r13 = r13 + 0x48u;  // (from the original)
            guest::cpu()->r[1] = r1;
            guest::cpu()->r[13] = r13;
            return r0;
        }
        r1 = 0u;
        r0 = r9;
        *gptr<u8>(r0 + 0x26eu) = u8(r1);  // (from the original)
        r13 = r13 + 0x48u;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    r0 = r9;
    guest::cpu()->r[13] = r13;
    r0 = call_002ff408(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r13 = r13 + 0x48u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_0022d74c
GUEST_EXPORT(0x0022d74c, d_0022d74c::f_0022d74c);

// f_0022d958: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0022d958 {

inline constexpr guest::Function<0x001b4a80, u32(u32, u32, u32, u32)> call_001b4a80;  // (from the original)
inline constexpr guest::Function<0x001b4a8c, u32(u32, u32, u32, u32)> call_001b4a8c;  // (from the original)
inline constexpr guest::Function<0x002ff408, u32(u32, u32, u32, u32)> call_002ff408;  // (from the original)
inline constexpr guest::Function<0x00303c84, u32(u32, u32, u32, u32)> call_00303c84;  // (from the original)
inline constexpr guest::Function<0x005cbc3c, u32(u32, u32, u32, u32)> call_005cbc3c;  // (from the original)
inline constexpr guest::Function<0x005cbe34, u32(u32, u32, u32, u32)> call_005cbe34;  // (from the original)
inline constexpr guest::Function<0x005cbea4, u32(u32, u32, u32, u32)> call_005cbea4;  // (from the original)
inline constexpr guest::Function<0x005cc454, u32(u32, u32, u32, u32)> call_005cc454;  // (from the original)
inline constexpr guest::Function<0x005cc4b4, u32(u32, u32, u32, u32)> call_005cc4b4;  // (from the original)
inline constexpr guest::Function<0x005cc4e4, u32(u32, u32, u32, u32)> call_005cc4e4;  // (from the original)
inline constexpr guest::Function<0x005cc504, u32(u32, u32, u32, u32)> call_005cc504;  // (from the original)
inline constexpr guest::Function<0x005dd348, u32(u32, u32, u32, u32)> call_005dd348;  // (from the original)
inline constexpr guest::Function<0x005f4cf8, u32(u32, u32, u32, u32)> call_005f4cf8;  // (from the original)
inline constexpr guest::Function<0x005fcf88, u32(u32, u32, u32, u32)> call_005fcf88;  // (from the original)
inline constexpr guest::Function<0x00613de4, u32(u32, u32, u32, u32)> call_00613de4;  // (from the original)

u32 f_0022d958(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 ea = 0;
    u32 res = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r9 = guest::cpu()->r[9];
    u32 r10 = guest::cpu()->r[10];
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 0x48u;  // (from the original)
    r4 = r0;
    r10 = r1;
    ea = r13 + 0x48u;  // (from the original)
    r7 = *gptr<u32>(ea);
    r8 = *gptr<u32>(ea + 4);
    r9 = *gptr<u32>(ea + 8);
    r5 = r2;
    r6 = r3;
    r0 = r13 + 0x1cu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_005cc504(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = r13 + 0x1cu;  // (from the original)
    r0 = r4 + 0xb0u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_005fcf88(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = r10;
    r0 = r13 + 0x1cu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_005cc4b4(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = r13 + 0x1cu;  // (from the original)
    r0 = r4 + 0xbcu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_005fcf88(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = r10;
    r0 = r13 + 0x1cu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_005cc4e4(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = r13 + 0x1cu;  // (from the original)
    r0 = r4 + 0xc8u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_005fcf88(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = r7;
    r0 = r4 + 0xd8u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00613de4(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = r8;
    r0 = r4 + 0x108u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_001b4a8c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r10;
    guest::cpu()->r[13] = r13;
    r0 = call_002ff408(r0, r1, r2, r3);
    ea = r13 + 0xcu;  // (from the original)
    *gptr<u32>(ea) = u32(r5);
    *gptr<u32>(ea + 4) = u32(r6);
    r3 = r4 + 0xc8u;  // (from the original)
    ea = r13 + 0x14u;  // (from the original)
    *gptr<u32>(ea) = u32(r5);
    *gptr<u32>(ea + 4) = u32(r6);
    r2 = r4 + 0xbcu;  // (from the original)
    *gptr<u32>(r13) = u32(r4 + 0xd4u);  // (from the original)
    *gptr<u32>(r13 + 4) = u32(r5);
    *gptr<u32>(r13 + 8) = u32(r6);
    r1 = r4 + 0xb0u;  // (from the original)
    r0 = r4;
    guest::cpu()->r[13] = r13;
    r0 = call_005dd348(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = *gptr<u32>(0x95dec4u);  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_005f4cf8(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r4;
    guest::cpu()->r[13] = r13;
    r0 = call_00303c84(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 != 0) {
        r1 = r9;
        r0 = r10;
        guest::cpu()->r[13] = r13;
        r0 = call_005cbea4(r0, r1, r2, r3);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        *gptr<u8>(r10 + 0x271u) = u8(0u);  // (from the original)
        r1 = r8;
        r0 = r10;
        guest::cpu()->r[13] = r13;
        r0 = call_001b4a80(r0, r1, r2, r3);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r1 = r7;
        r0 = r10;
        guest::cpu()->r[13] = r13;
        r0 = call_005cbe34(r0, r1, r2, r3);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r1 = 1u;
        r0 = r10;
        guest::cpu()->r[13] = r13;
        r0 = call_005cbc3c(r0, r1, r2, r3);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r0 = *gptr<u32>(r4 + 0xd4u);  // (from the original)
        res = r0;
        if (res >> 0x1f == (r0 & (r0 ^ res)) >> 0x1f) {  // (from the original)
            r1 = r0 & 0xffu;  // (from the original)
            r0 = r10;
            *gptr<u8>(r0 + 0x26eu) = u8(r1);  // (from the original)
            r13 = r13 + 0x48u;  // (from the original)
            guest::cpu()->r[1] = r1;
            guest::cpu()->r[13] = r13;
            return r0;
        }
        r1 = 0u;
        *gptr<u8>(r10 + 0x26eu) = u8(r1);  // (from the original)
        r0 = r10;
        guest::cpu()->r[13] = r13;
        r0 = call_005cc454(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r13 = r13 + 0x48u;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    r0 = r10;
    guest::cpu()->r[13] = r13;
    r0 = call_002ff408(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r13 = r13 + 0x48u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_0022d958
GUEST_EXPORT(0x0022d958, d_0022d958::f_0022d958);

// f_0022dacc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0022dacc {

inline constexpr guest::Function<0x0022dd30, u32(u32, u32, u32, u32)> call_0022dd30;  // (from the original)

u32 f_0022dacc(u32 r0_unused, u32 r1_unused, u32 r2_unused, u32 r3) {
    u32 r12 = 0;
    u32 r13 = guest::cpu()->r[13];
    float S0 = 0;
    float S1 = 0;
    float S2 = 0;
    r13 = r13 - 0x18u;  // (from the original)
    r12 = r13 + 0x18u;  // (from the original)
    S0 = std::bit_cast<float>(*gptr<u32>(r12));
    S1 = std::bit_cast<float>(*gptr<u32>(r12 + 4));
    S2 = std::bit_cast<float>(*gptr<u32>(r12 + 8));
    r12 = r13 + 8u;
    *gptr<u32>(r13 + 4u) = u32(r3);
    *gptr<u32>(r12) = u32(std::bit_cast<u32>(S0));
    *gptr<u32>(r12 + 4) = u32(std::bit_cast<u32>(S1));
    *gptr<u32>(r12 + 8) = u32(std::bit_cast<u32>(S2));
    *gptr<u32>(r13) = u32(r3);
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2;
    call_0022dd30(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], r3);
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    r13 = r13 + 0x18u;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    return guest::cpu()->r[0];
}

}  // namespace d_0022dacc
GUEST_EXPORT(0x0022dacc, d_0022dacc::f_0022dacc);

// f_0022e08c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0022e08c {

inline constexpr guest::Function<0x005dd490, u32(u32, u32, u32, u32)> call_005dd490;  // (from the original)
inline constexpr guest::Function<0x005fcf9c, u32(u32, u32, u32, u32)> call_005fcf9c;  // (from the original)

u32 f_0022e08c(u32 r0, u32 r1, u32 r2) {
    u32 ea = 0;
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 8;
    guest::cpu()->r[13] = r13;
    r0 = call_005dd490(r0, r1, r2, guest::cpu()->r[3]);
    r2 = guest::cpu()->r[2];
    r1 = 0x8ee2a4u;  // (from the original)
    *gptr<u32>(r0) = u32(r1);
    r0 = r0 + 0xb0u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_005fcf9c(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r0 = r0 + 0xcu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_005fcf9c(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r0 = r0 + 0xcu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_005fcf9c(r0, r1, r2, guest::cpu()->r[3]);
    r0 = r0 - 0xc8u;  // (from the original)
    r1 = 0u;
    ea = r0 + 0xd8u;  // (from the original)
    *gptr<u32>(ea) = u32(r1);
    ea = r0 + 0xd4u;  // (from the original)
    *gptr<u32>(ea) = u32(~0u);
    ea = r0 + 0xdcu;  // (from the original)
    *gptr<u32>(ea) = u32(r1);
    ea = r0 + 0xe0u;  // (from the original)
    *gptr<u32>(ea) = u32(r1);
    ea = r0 + 0xe4u;  // (from the original)
    *gptr<u32>(ea) = u32(r1);
    ea = r0 + 0xe8u;  // (from the original)
    *gptr<u32>(ea) = u32(r1);
    ea = r0 + 0xecu;  // (from the original)
    *gptr<u32>(ea) = u32(r1);
    ea = r0 + 0xf0u;  // (from the original)
    *gptr<u32>(ea) = u32(r1);
    ea = r0 + 0xf4u;  // (from the original)
    *gptr<u32>(ea) = u32(r1);
    ea = r0 + 0xf8u;  // (from the original)
    *gptr<u32>(ea) = u32(r1);
    ea = r0 + 0xfcu;  // (from the original)
    *gptr<u32>(ea) = u32(r1);
    ea = r0 + 0x100u;  // (from the original)
    *gptr<u32>(ea) = u32(r1);
    ea = r0 + 0x104u;  // (from the original)
    *gptr<u32>(ea) = u32(r1);
    r0 = ea + 0xfffffefcu;  // (from the original)
    r13 = r13 + 8;
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_0022e08c
GUEST_EXPORT(0x0022e08c, d_0022e08c::f_0022e08c);

// f_0022e138: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0022e138 {

struct __attribute__((packed)) Object_0022e138_0 {
    u32 word_0;
};
GUEST_OFFSET(Object_0022e138_0, word_0, 0x0);  // (from the original)

inline constexpr guest::Function<0x005dd50c, u32(u32, u32, u32, u32)> call_005dd50c;  // (from the original)

u32 f_0022e138(gptr<Object_0022e138_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r1 = 0;
    r1 = 0x8ee2a4u;  // (from the original)
    arg0->word_0 = u32(r1);
    return call_005dd50c(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_0022e138
GUEST_EXPORT(0x0022e138, d_0022e138::f_0022e138);

// f_0022e168: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0022e168 {

inline constexpr guest::Function<0x002fbb30, u32(u32, u32, u32, u32)> call_002fbb30;  // (from the original)

u32 f_0022e168(u32 r0, u32 r1) {
    u32 r2 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r5 = r1;
    r4 = r0;
    r2 = 0x26cu;  // (from the original)
    r1 = r5;
    r0 = r4;
    r0 = call_002fbb30(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r0 = r4;
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_0022e168
GUEST_EXPORT(0x0022e168, d_0022e168::f_0022e168);

// f_0022e194: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0022e194 {

struct __attribute__((packed)) Object_0022e194_0 {
    u8 unknown_0[0x67];  // (not used here)
    u8 byte_67;
    u8 byte_68;
    u8 byte_69;
};
GUEST_OFFSET(Object_0022e194_0, byte_67, 0x67);  // (from the original)
GUEST_OFFSET(Object_0022e194_0, byte_68, 0x68);  // (from the original)
GUEST_OFFSET(Object_0022e194_0, byte_69, 0x69);  // (from the original)


void f_0022e194(gptr<Object_0022e194_0> arg0) {
    u32 r1 = 0;
    arg0->byte_67 = u8(1u);
    r1 = 4u;
    arg0->byte_68 = u8(0u);
    arg0->byte_69 = u8(r1);
    guest::cpu()->r[1] = r1;
    return;
}

}  // namespace d_0022e194
GUEST_EXPORT(0x0022e194, d_0022e194::f_0022e194);

// f_0022e1c0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0022e1c0 {

inline constexpr guest::Function<0x00746ed0, u32(u32, u32, u32, u32)> call_00746ed0;  // (from the original)
inline constexpr guest::Function<0x00746ee4, u32(u32, u32, u32, u32)> call_00746ee4;  // (from the original)
inline constexpr guest::Function<0x00746efc, u32(u32, u32, u32, u32)> call_00746efc;  // (from the original)
inline constexpr guest::Function<0x00746f8c, u32(u32, u32, u32, u32)> call_00746f8c;  // (from the original)

u32 f_0022e1c0(u32 r0, u32 r1, u32 r2) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r4 = r0;
    r0 = 0xa22020u;  // (from the original)
    r6 = r1;
    r5 = r2;
    r0 = call_00746f8c(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    if (r0 == 0) {
        r0 = 1u;
        goto L_22e204;
    }
    r0 = 0xa22020u;  // (from the original)
    r0 = call_00746ee4(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    *gptr<u8>(r4 + 0x3du) = u8(r0);  // (from the original)
    r0 = 0xa22020u;  // (from the original)
    r0 = call_00746ed0(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    *gptr<u32>(r4 + 0x40u) = u32(r0);  // (from the original)
    r0 = 0xa22020u;  // (from the original)
    r0 = call_00746efc(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
L_22e204:;
    if (r5 == 0) {
        if (r0 < 2u) {
            goto L_22e22c;
        }
    }
    r1 = u32(*gptr<u8>(r4 + 0x3du));  // (from the original)
    r0 = 1u;
    if (r1 >= 3u) {
        *gptr<u8>(r4 + 0x3du) = u8(r0);  // (from the original)
    }
    *gptr<u8>(r4 + 0x3cu) = u8(r6);  // (from the original)
    *gptr<u8>(r4 + 0x5du) = u8(r0);  // (from the original)
L_22e22c:;
    r0 = *gptr<u32>(r4 + 0x48u);  // (from the original)
    *gptr<u32>(r4 + 0x44u) = u32(r0);  // (from the original)
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_0022e1c0
GUEST_EXPORT(0x0022e1c0, d_0022e1c0::f_0022e1c0);

// f_0022fcb8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0022fcb8 {

struct __attribute__((packed)) Object_0022fcb8_0 {
    u8 unknown_0[0x164];  // (not used here)
    u32 word_164;
};
GUEST_OFFSET(Object_0022fcb8_0, word_164, 0x164);  // (from the original)

inline constexpr guest::Function<0x002fa9d0, u32(u32, u32, u32, u32)> call_002fa9d0;  // (from the original)
inline constexpr guest::Function<0x004f26a4, u32(u32, u32, u32, u32)> call_004f26a4;  // (from the original)
inline constexpr guest::Function<0x00736a1c, u32(u32, u32, u32, u32)> call_00736a1c;  // (from the original)

u32 f_0022fcb8(gptr<Object_0022fcb8_0> arg0, u32 r1, u32 r2_unused, u32 r3) {
    u32 ea = 0;
    u32 r0 = arg0.addr();
    u32 r2 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r13 = guest::cpu()->r[13];
    u32 zf = 0;
    *gptr<u32>(r13 + 0xffffffe8u) = u32(r3);  // (from the original)
    r13 = r13 - 0x18;  // (from the original)
    r4 = r0;
    r0 = arg0->word_164;
    zf = *gptr<u32>(r0 + 0x64u) == 0;  // (from the original)
    if (!zf) {
        zf = *gptr<u32>(r0 + 0x1cu) == 0;  // (from the original)
    }
    if (zf) {
        goto L_22fd50;
    }
    ea = r0 + 0x68u;  // (from the original)
    r0 = ea;
    r2 = *gptr<u32>(ea);
    r7 = 0u;
    r5 = r1;
    if (r2 == 0) {
        r0 = r7;
    } else {
        r0 = r0 + r2;
    }
    zf = r0 == 0;
    if (!zf) {
        zf = r5 == 0;
    }
    r6 = r13;
    *gptr<u32>(r13) = u32(r0);
    if (zf) {
        goto L_22fd34;
    }
    r0 = r1;
    guest::cpu()->r[13] = r13;
    r0 = call_002fa9d0(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    r2 = r0;
    r1 = r5;
    r0 = r6;
    guest::cpu()->r[13] = r13;
    r0 = call_00736a1c(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        goto L_22fd34;
    }
    ea = r0 + 0xcu;  // (from the original)
    r0 = ea;
    r1 = *gptr<u32>(ea);
    if (r1 != 0) {
        r7 = r1 + r0;
    }
    goto L_22fd38;
L_22fd34:;
    r7 = 0u;
L_22fd38:;
    r1 = r7;
    if (r7 == 0) {
        goto L_22fd50;
    }
    r0 = r4 + 0x4e0u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_004f26a4(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r0 = 1u;
    *gptr<u8>(r4 + 0x4f9u) = u8(r0);  // (from the original)
L_22fd50:;
    r13 = r13 + 0x18;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_0022fcb8
GUEST_EXPORT(0x0022fcb8, d_0022fcb8::f_0022fcb8);
