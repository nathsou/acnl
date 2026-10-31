// Functions decompiled by tools/decomp (docs/decomp.md), each proved equal to the recompiled original (prove-cpp). The
// names are generated (d_<address>::f_<address>, Object_<address>_<argument>, word_<offset>) and still to be chosen.
#include "guest/guest.hpp"

#include <bit>

using guest::gptr;

// f_006d12d0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006d12d0 {

struct __attribute__((packed)) Object_006d12d0_0 {
    u32 word_0;
    u8 unknown_4[0x24];  // (not used here)
    u32 word_28;
    u8 unknown_2c[0x240c];  // (not used here)
    u32 word_2438;
    u8 unknown_243c[0x394];  // (not used here)
    u32 word_27d0;
    u8 unknown_27d4[0xe0];  // (not used here)
    u32 word_28b4;
};
GUEST_OFFSET(Object_006d12d0_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_006d12d0_0, word_28, 0x28);  // (from the original)
GUEST_OFFSET(Object_006d12d0_0, word_2438, 0x2438);  // (from the original)
GUEST_OFFSET(Object_006d12d0_0, word_27d0, 0x27d0);  // (from the original)
GUEST_OFFSET(Object_006d12d0_0, word_28b4, 0x28b4);  // (from the original)

inline constexpr guest::Function<0x002f76ad, u32(u32, u32, u32, u32)> call_002f76ac;  // (from the original)
inline constexpr guest::Function<0x002f770c, u32(u32, u32, u32, u32)> call_002f770c;  // (from the original)
inline constexpr guest::Function<0x002f7710, u32(u32, u32, u32, u32)> call_002f7710;  // (from the original)
inline constexpr guest::Function<0x00567ef0, u32(u32, u32, u32, u32)> call_00567ef0;  // (from the original)
inline constexpr guest::Function<0x0056988c, u32(u32, u32, u32, u32)> call_0056988c;  // (from the original)
inline constexpr guest::Function<0x005bf744, u32(u32, u32, u32, u32)> call_005bf744;  // (from the original)
inline constexpr guest::Function<0x005e3194, u32(u32, u32, u32, u32)> call_005e3194;  // (from the original)
inline constexpr guest::Function<0x006aaa30, u32(u32, u32, u32, u32)> call_006aaa30;  // (from the original)

u32 f_006d12d0(gptr<Object_006d12d0_0> arg0) {
    u32 ea = 0;
    u32 r0 = arg0.addr();
    u32 r1 = 0;
    u32 r2 = 0;
    u32 r3 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r13 = guest::cpu()->r[13];
    r1 = 0x8f924cu;  // (from the original)
    r13 = r13 - 8;
    arg0->word_28 = u32(r1 + 0x6cu);  // (from the original)
    arg0->word_0 = u32(r1);
    r4 = r0 + 0x27d0u;  // (from the original)
    r3 = 2u;
    arg0->word_2438 = u32(0x8ee228u);  // (from the original)
    r2 = 0x8ef284u;  // (from the original)
    r0 = r0 + 0x28e8u;  // (from the original)
    arg0->word_27d0 = u32(r2);
    arg0->word_28b4 = u32(r2 + 0x44u);  // (from the original)
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
    r1 = 0x2b6ef8u;  // (from the original)
    ea = r0 + 0xffffe73cu;  // (from the original)
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
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = 0x8f8ee4u;  // (from the original)
    *gptr<u32>(r0 - 0xb50u) = u32(r1);  // (from the original)
    r0 = r0 - 0x100u;  // (from the original)
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
    r0 = r0 - 0x70u;  // (from the original)
    guest::cpu()->r[13] = r13;
    return call_006aaa30(r0, r1, r2, r3);
}

}  // namespace d_006d12d0
GUEST_EXPORT(0x006d12d0, d_006d12d0::f_006d12d0);

// f_006d1bc8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006d1bc8 {


u32 f_006d1bc8(u32 r0) {
    goto L_6d1bc8;
L_6d1bc8:;
    if (u32(*gptr<u8>(r0 + 0x40u)) != 2u) {  // (from the original)
        r0 = 1u;
        return r0;
    }
    r0 = *gptr<u32>(0x94fc2cu);  // (from the original)
    if (r0 == 0) {
        return r0;
    }
    return guest::call_address<u32>(*gptr<u32>(0x14fe00u), r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
}

}  // namespace d_006d1bc8
GUEST_EXPORT(0x006d1bc8, d_006d1bc8::f_006d1bc8);

// f_006d1ce4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006d1ce4 {

inline constexpr guest::Function<0x006d40d4, u32(u32, u32, u32, u32)> call_006d40d4;  // (from the original)

u32 f_006d1ce4() {
    u32 r0 = 0;
    u32 r1 = 0;
    r1 = 8u;
    r0 = *gptr<u32>(0x94fd3cu);  // (from the original)
    return call_006d40d4(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_006d1ce4
GUEST_EXPORT(0x006d1ce4, d_006d1ce4::f_006d1ce4);

// f_006d1cf8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006d1cf8 {

inline constexpr guest::Function<0x00138920, u32(u32, u32, u32, u32)> call_00138920;  // (from the original)
inline constexpr guest::Function<0x0013f134, u32(u32, u32, u32, u32)> call_0013f134;  // (from the original)

u32 f_006d1cf8(u32 r0) {
    u32 r1 = 0;
    u32 r4 = guest::cpu()->r[4];
    guest::cpu()->r[13] -= 8u;
    r4 = r0;
    r1 = r0;
    r0 = 0x98c4fcu;  // (from the original)
    r0 = call_00138920(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 != 0) {
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r0 = 0x98c4fcu;  // (from the original)
    r1 = r4;
    r0 = call_0013f134(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r0 = 0x94fd0cu;  // (from the original)
    r1 = u32(*gptr<u8>(r0 + 2u));
    if (r1 == 3u) {
        r1 = 1u;
        *gptr<u8>(r0 + 2u) = u8(r1);
    }
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_006d1cf8
GUEST_EXPORT(0x006d1cf8, d_006d1cf8::f_006d1cf8);

// f_006d2528: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006d2528 {

inline constexpr guest::Function<0x002fb94c, u32(u32, u32, u32, u32)> call_002fb94c;  // (from the original)
inline constexpr guest::Function<0x002fc934, u32(u32, u32, u32, u32)> call_002fc934;  // (from the original)
inline constexpr guest::Function<0x00724424, u32(u32, u32, u32, u32)> call_00724424;  // (from the original)

u32 f_006d2528(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 res = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r13 = guest::cpu()->r[13];
    *gptr<u32>(r13 + 0xfffffff0u) = u32(r3);  // (from the original)
    r13 = r13 - 0x10;  // (from the original)
    res = r0 - 0x14u;  // (from the original)
    r5 = 0x94fd0cu;  // (from the original)
    *gptr<u32>(r5 + 0x44u) = u32(r0);  // (from the original)
    if (res >> 0x1f == ((r0 ^ 0x14u) & (r0 ^ res)) >> 0x1f) {  // (from the original)
        r0 = 0u;
        *gptr<u8>(r5 + 1u) = u8(r0);
        r13 = r13 + 0x10;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    r4 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_002fb94c(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    r1 = *gptr<u32>(r5 + 0x44u);  // (from the original)
    r0 = r0 + 0x6bd0u;  // (from the original)
    r2 = 0u;
    guest::cpu()->r[13] = r13;
    r0 = call_00724424(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = r0;
    r0 = r4;
    guest::cpu()->r[13] = r13;
    r0 = call_002fc934(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    *gptr<u8>(r5 + 1u) = u8(1u);
    r0 = r13;
    r13 = r13 + 0x10;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_006d2528
GUEST_EXPORT(0x006d2528, d_006d2528::f_006d2528);

// f_006d2584: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006d2584 {

inline constexpr guest::Function<0x003170f8, u32(u32, u32, u32, u32)> call_003170f8;  // (from the original)

u32 f_006d2584(u32 r0_unused, u32 r1) {
    u32 r0 = 0;
    guest::cpu()->r[13] -= 8u;
    if ((*gptr<u32>(0x94fd58u) & 0x400u) != 0) {  // (from the original)
        r0 = 0u;
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r1 = 0u;
    r0 = 5u;
    r0 = call_003170f8(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 != 0) {
        r0 = 1u;
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r1 = 0u;
    r0 = 6u;
    r0 = call_003170f8(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 != 0) {
        r0 = 1u;
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r1 = 0u;
    r0 = r1;
    r0 = call_003170f8(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 != 0) {
        r0 = 1u;
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r1 = 0u;
    r0 = 3u;
    r0 = call_003170f8(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 != 0) {
        r0 = 1u;
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r1 = 0u;
    r0 = 4u;
    r0 = call_003170f8(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 != 0) {
        r0 = 1u;
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r1 = 0u;
    r0 = 9u;
    r0 = call_003170f8(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 != 0) {
        r0 = 1u;
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r1 = 0u;
    r0 = 0xau;  // (from the original)
    r0 = call_003170f8(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 != 0) {
        r0 = 1u;
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r1 = 0u;
    r0 = 0xbu;  // (from the original)
    r0 = call_003170f8(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 != 0) {
        r0 = 1u;
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r1 = 0u;
    r0 = 0xcu;  // (from the original)
    r0 = call_003170f8(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 == 0) {
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r0 = 1u;
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_006d2584
GUEST_EXPORT(0x006d2584, d_006d2584::f_006d2584);

// f_006d2750: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006d2750 {


u32 f_006d2750() {
    u32 r0 = 0;
    u32 r1 = 0;
    r0 = 0x98c508u;  // (from the original)
    r1 = 0x248u;  // (from the original)
    *gptr<u32>(r0) = u32(r1);
    *gptr<u32>(r0 + 4u) = u32(r1);
    *gptr<u32>(r0 + 8u) = u32(r1);
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_006d2750
GUEST_EXPORT(0x006d2750, d_006d2750::f_006d2750);

// f_006d276c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006d276c {


u32 f_006d276c() {
    u32 r0 = 0;
    r0 = u32(s32(*gptr<u32>(0x94fd38u)) >> 0x10);  // (from the original)
    return r0;
}

}  // namespace d_006d276c
GUEST_EXPORT(0x006d276c, d_006d276c::f_006d276c);

// f_006d2800: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006d2800 {

inline constexpr guest::Function<0x00138920, u32(u32, u32, u32, u32)> call_00138920;  // (from the original)
inline constexpr guest::Function<0x0013f000, u32(u32, u32, u32, u32)> call_0013f000;  // (from the original)
inline constexpr guest::Function<0x00584134, u32(u32, u32, u32, u32)> call_00584134;  // (from the original)
inline constexpr guest::Function<0x0058c5f0, u32(u32, u32, u32, u32)> call_0058c5f0;  // (from the original)

u32 f_006d2800(u32 r0) {
    u32 r1 = 0;
    u32 r4 = guest::cpu()->r[4];
    guest::cpu()->r[13] -= 8u;
    r4 = r0;
    r1 = r0;
    r0 = 0x98c4fcu;  // (from the original)
    r0 = call_00138920(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 == 0) {
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r0 = 0x98c4fcu;  // (from the original)
    r1 = r4;
    r0 = call_0013f000(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r0 = *gptr<u32>(0x98c500u);  // (from the original)
    if (r0 != 0) {
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r4 = 0x94fd0cu;  // (from the original)
    r0 = u32(*gptr<u8>(r4 + 4u));
    if (r0 == 0) {
        r0 = call_00584134(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1 = 0x21u;  // (from the original)
        r0 = call_0058c5f0(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        r0 = call_00584134(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1 = 0x1fu;  // (from the original)
        r0 = call_0058c5f0(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        r0 = call_00584134(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1 = 0x1eu;  // (from the original)
        r0 = call_0058c5f0(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
    }
    r0 = *gptr<u32>(r4 + 0x30u);  // (from the original)
    if (r0 != 0) {
        r1 = 0u;
        *gptr<u8>(r0 + 0x208u) = u8(r1);  // (from the original)
    }
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_006d2800
GUEST_EXPORT(0x006d2800, d_006d2800::f_006d2800);

// f_006d2e34: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006d2e34 {

struct __attribute__((packed)) Object_006d2e34_0 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Object_006d2e34_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_006d2e34_0, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_006d2e34_0, word_8, 0x8);  // (from the original)


void f_006d2e34(gptr<Object_006d2e34_0> arg0) {
    u32 ea = 0;
    u32 r1 = 0;
    u32 r2 = 0;
    u32 r3 = 0;
    r1 = 0x98c34cu;  // (from the original)
    r2 = r1 + 0x208u;  // (from the original)
    r1 = *gptr<u32>(r1 + 0x210u);  // (from the original)
    ea = r2;
    r2 = *gptr<u32>(ea);
    r3 = *gptr<u32>(ea + 4);
    arg0->word_8 = u32(r1);
    arg0->word_0 = u32(r2);
    arg0->word_4 = u32(r3);
    guest::cpu()->r[1] = r1;
    return;
}

}  // namespace d_006d2e34
GUEST_EXPORT(0x006d2e34, d_006d2e34::f_006d2e34);

// f_006d2e98: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006d2e98 {


u32 f_006d2e98() {
    u32 r0 = 0;
    u32 r1 = 0;
    r1 = *gptr<u32>(0x98c508u);  // (from the original)
    r0 = 1u;
    if (r1 == 0x248u) {  // (from the original)
        r0 = 0u;
    }
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_006d2e98
GUEST_EXPORT(0x006d2e98, d_006d2e98::f_006d2e98);

// f_006d2f24: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006d2f24 {

inline constexpr guest::Function<0x00195488, u32(u32, u32, u32, u32)> call_00195488;  // (from the original)
inline constexpr guest::Function<0x006d1ffc, u32(u32, u32, u32, u32)> call_006d1ffc;  // (from the original)

u32 f_006d2f24(u32 r0, u32 r1) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r5 = r0;
    r6 = r1;
    r1 = 0u;
    r0 = 0x7bu;  // (from the original)
    r0 = call_006d1ffc(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r4 = r0;
    if (r0 != 0) {
        *gptr<u8>(0x94fd2bu) = u8(2u);  // (from the original)
        r1 = r6;
        r0 = r5;
        r0 = call_00195488(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
    }
    r0 = r4;
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_006d2f24
GUEST_EXPORT(0x006d2f24, d_006d2f24::f_006d2f24);

// f_006d3020: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006d3020 {

inline constexpr guest::Function<0x002bf9cc, u32(u32, u32, u32, u32)> call_002bf9cc;  // (from the original)
inline constexpr guest::Function<0x002fb94c, u32(u32, u32, u32, u32)> call_002fb94c;  // (from the original)
inline constexpr guest::Function<0x002fc934, u32(u32, u32, u32, u32)> call_002fc934;  // (from the original)
inline constexpr guest::Function<0x006bb230, u32(u32, u32, u32, u32)> call_006bb230;  // (from the original)
inline constexpr guest::Function<0x006bb76c, u32(u32, u32, u32, u32)> call_006bb76c;  // (from the original)
inline constexpr guest::Function<0x00724424, u32(u32, u32, u32, u32)> call_00724424;  // (from the original)

u32 f_006d3020(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 0x18u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002fb94c(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    r5 = 0x94fd0cu;  // (from the original)
    r4 = r0 + 0x6bd0u;  // (from the original)
    r2 = 0u;
    r1 = *gptr<u32>(r5 + 0x44u);  // (from the original)
    r0 = r4;
    guest::cpu()->r[13] = r13;
    r0 = call_00724424(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = r0;
    r0 = r13 + 4u;
    guest::cpu()->r[13] = r13;
    r0 = call_002fc934(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r13 + 4u;
    guest::cpu()->r[13] = r13;
    r0 = call_006bb76c(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = r0;
    r6 = 1u;
    if (r0 == 0) {
        goto L_6d3098;
    }
    r0 = r13 + 4u;
    guest::cpu()->r[13] = r13;
    r0 = call_006bb230(r0, r1, r2, r3);
    *gptr<u32>(r13) = u32(r6);
    r1 = *gptr<u32>(r5 + 0x44u);  // (from the original)
    r3 = 0u;
    r2 = r13 + 4u;
    r0 = r4;
    guest::cpu()->r[13] = r13;
    r0 = call_002bf9cc(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
L_6d3088:;
    r0 = r13 + 4u;
    r13 = r13 + 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
L_6d3098:;
    r1 = *gptr<u32>(r5 + 0x44u);  // (from the original)
    r2 = 0x95bfdcu;  // (from the original)
    r3 = 0u;
    r0 = r4;
    *gptr<u32>(r13) = u32(r6);
    guest::cpu()->r[13] = r13;
    r0 = call_002bf9cc(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    guest::preempt();
    goto L_6d3088;
}

}  // namespace d_006d3020
GUEST_EXPORT(0x006d3020, d_006d3020::f_006d3020);

// f_006d30c4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006d30c4 {

struct __attribute__((packed)) Object_006d30c4_0 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Object_006d30c4_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_006d30c4_0, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_006d30c4_0, word_8, 0x8);  // (from the original)


u32 f_006d30c4(gptr<Object_006d30c4_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r1 = 0;
    u32 r2 = 0;
    u32 r3 = 0;
    r1 = arg0->word_0;
    r2 = arg0->word_4;
    r3 = arg0->word_8;
    r0 = 0x98c554u;  // (from the original)
    *gptr<u32>(r0) = u32(r1);
    *gptr<u32>(r0 + 4) = u32(r2);
    *gptr<u32>(r0 + 8) = u32(r3);
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_006d30c4
GUEST_EXPORT(0x006d30c4, d_006d30c4::f_006d30c4);

// f_006d337c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006d337c {


u32 f_006d337c() {
    u32 res = 0;
    u32 r0 = 0;
    u32 r1 = 0;
    r0 = *gptr<u32>(0x94fd38u);  // (from the original)
    res = r0 << 0x10 >> 0x10;  // (from the original)
    r1 = res;
    if (res == 0) {
        r0 = 1u;
    } else {
        r0 = uxth(r0);
    }
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_006d337c
GUEST_EXPORT(0x006d337c, d_006d337c::f_006d337c);

// f_006d3738: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006d3738 {

inline constexpr guest::Function<0x0058d3b4, u32(u32, u32, u32, u32)> call_0058d3b4;  // (from the original)
inline constexpr guest::Function<0x006d1ffc, u32(u32, u32, u32, u32)> call_006d1ffc;  // (from the original)

u32 f_006d3738(u32 r0, float S0) {
    u32 r1 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 zf = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r6 = 0x94fd0cu;  // (from the original)
    *gptr<u32>(*gptr<u32>(r6 + 0x30u) + 0x204u) = u32(r0);  // (from the original)
    r1 = 0u;
    r0 = 0x47u;  // (from the original)
    guest::cpu()->s[0] = S0;
    r0 = call_006d1ffc(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    S0 = guest::cpu()->s[0];
    zf = r0 == 0;
    r4 = r0;
    if (zf) {
        r0 = *gptr<u32>(r6 + 0x30u);  // (from the original)
    }
    r5 = 0u;
    if (zf) {
        *gptr<u32>(r0 + 0x204u) = u32(r5);  // (from the original)
        goto L_6d377c;
    }
    r0 = 0x100045eu;  // (from the original)
    S0 = std::bit_cast<float>(*gptr<u32>(0x6d3788u));  // (from the original)
    guest::cpu()->s[0] = S0;
    r0 = call_0058d3b4(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    S0 = guest::cpu()->s[0];
    *gptr<u8>(r6 + 0x15u) = u8(r5);  // (from the original)
    *gptr<u8>(r6 + 0x16u) = u8(r5);  // (from the original)
L_6d377c:;
    r0 = r4;
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->s[0] = S0;
    return r0;
}

}  // namespace d_006d3738
GUEST_EXPORT(0x006d3738, d_006d3738::f_006d3738);

// f_006d37e4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006d37e4 {

inline constexpr guest::Function<0x002fcb34, u32(u32, u32, u32, u32)> call_002fcb34;  // (from the original)
inline constexpr guest::Function<0x002fd068, u32(u32, u32, u32, u32)> call_002fd068;  // (from the original)
inline constexpr guest::Function<0x006b6d6c, u32(u32, u32, u32, u32)> call_006b6d6c;  // (from the original)
inline constexpr guest::Function<0x006b73f4, u32(u32, u32, u32, u32)> call_006b73f4;  // (from the original)
inline constexpr guest::Function<0x0076c590, u32(u32, u32, u32, u32)> call_0076c590;  // (from the original)

u32 f_006d37e4(u32 r0, u32 r1) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 zf = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r4 = r0;
    r0 = call_0076c590(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 == 0) {
        goto L_6d3840;
    }
    r0 = call_002fd068(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r5 = r0;
    r0 = r4;
    r0 = call_002fcb34(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 != 0x36u) {  // (from the original)
        zf = r0 == 0x37u;  // (from the original)
        if (!zf) {
            zf = r0 == 0x38u;  // (from the original)
        }
        if (!zf) {
            zf = r0 == 0x92u;  // (from the original)
        }
        if (!zf) {
            goto L_6d3840;
        }
        r0 = r5;
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        r1 = 1u;
        return call_006b73f4(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    }
    r0 = r5;
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    r1 = 1u;
    return call_006b6d6c(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
L_6d3840:;
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_006d37e4
GUEST_EXPORT(0x006d37e4, d_006d37e4::f_006d37e4);

// f_006d40d4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006d40d4 {

inline constexpr guest::Function<0x002f74c8, u32(u32, u32, u32, u32)> call_002f74c8;  // (from the original)
inline constexpr guest::Function<0x002f74e0, u32(u32, u32, u32, u32)> call_002f74e0;  // (from the original)
inline constexpr guest::Function<0x005ce6dc, u32(u32, u32, u32, u32)> call_005ce6dc;  // (from the original)
inline constexpr guest::Function<0x0075e058, u32(u32, u32, u32, u32)> call_0075e058;  // (from the original)

u32 f_006d40d4(u32 r0, u32 r1) {
    u32 res = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r4 = r0;
    r5 = r1;
    r0 = call_005ce6dc(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 != 0) {
        r0 = 0u;
        goto L_6d416c;
    }
    if ((r5 & 8u) == 0) {
        goto L_6d415c;
    }
    r0 = call_002f74c8(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = r0;
    r0 = 0x80000u;  // (from the original)
    r0 = call_002f74e0(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 == 0) {
        r0 = call_002f74c8(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1 = r0;
        r0 = 0x100000u;  // (from the original)
        r0 = call_002f74e0(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        if (r0 == 0) {
            goto L_6d4150;
        }
    }
    r0 = *gptr<u32>(0x95362cu);  // (from the original)
    if (r0 == 0) {
        goto L_6d4150;
    }
    r1 = 4u;
    r0 = r0 + 0x1e4u;  // (from the original)
    r0 = call_0075e058(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 != 0) {
        goto L_6d4168;
    }
L_6d4150:;
    if (u32(*gptr<u8>(r4 + 0x208u)) != 0) {  // (from the original)
        goto L_6d4168;
    }
L_6d415c:;
    res = *gptr<u32>(r4 + 0x48u) & r5;  // (from the original)
    r0 = res;
    if (res == 0) {
        goto L_6d416c;
    }
L_6d4168:;
    r0 = 1u;
L_6d416c:;
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_006d40d4
GUEST_EXPORT(0x006d40d4, d_006d40d4::f_006d40d4);

// f_006d4724: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006d4724 {

inline constexpr guest::Function<0x002f86c0, u32(u32, u32, u32, u32)> call_002f86c0;  // (from the original)

u32 f_006d4724(u32 r0) {
    u32 r1 = 0;
    u32 r4 = guest::cpu()->r[4];
    r1 = 0x3e8u;  // (from the original)
    guest::cpu()->r[13] -= 8u;
    r0 = call_002f86c0(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r4 = 0x94fd60u;  // (from the original)
    *gptr<u8>(r4) = u8(r0);
    r0 = r1;
    r1 = 0x64u;  // (from the original)
    r0 = call_002f86c0(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    *gptr<u8>(r4 + 1u) = u8(r0);
    r0 = r1;
    r1 = 0xau;  // (from the original)
    r0 = call_002f86c0(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    *gptr<u8>(r4 + 2u) = u8(r0);
    *gptr<u8>(r4 + 3u) = u8(r1);
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_006d4724
GUEST_EXPORT(0x006d4724, d_006d4724::f_006d4724);

// f_006d5364: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006d5364 {

struct __attribute__((packed)) Object_006d5364_0 {
    u8 unknown_0[0x548];  // (not used here)
    u32 word_548;
};
GUEST_OFFSET(Object_006d5364_0, word_548, 0x548);  // (from the original)

inline constexpr guest::Function<0x002f67ac, u32(u32, u32, u32, u32)> call_002f67ac;  // (from the original)

u32 f_006d5364(gptr<Object_006d5364_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r4 = guest::cpu()->r[4];
    guest::cpu()->r[13] -= 8u;
    r4 = r0;
    if (arg0->word_548 != 0) {
        r0 = r4 + 0x494u;  // (from the original)
        r0 = call_002f67ac(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    }
    r0 = *gptr<u32>(r4 + 0x6ccu);  // (from the original)
    if (r0 == 0) {
        guest::cpu()->r[13] += 8u;
        return r0;
    }
    r0 = r4 + 0x400u;  // (from the original)
    guest::cpu()->r[13] += 8u;
    r0 = r0 + 0x218u;  // (from the original)
    return call_002f67ac(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_006d5364
GUEST_EXPORT(0x006d5364, d_006d5364::f_006d5364);

// f_006d5df4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006d5df4 {

struct __attribute__((packed)) Object_006d5df4_0 {
    u8 unknown_0[0x19b2];  // (not used here)
    u16 half_19b2;
};
GUEST_OFFSET(Object_006d5df4_0, half_19b2, 0x19b2);  // (from the original)

inline constexpr guest::Function<0x002dfbf0, u32(u32, u32, u32, u32)> call_002dfbf0;  // (from the original)
inline constexpr guest::Function<0x00568984, u32(u32, u32, u32, u32)> call_00568984;  // (from the original)
inline constexpr guest::Function<0x00568c10, u32(u32, u32, u32, u32)> call_00568c10;  // (from the original)
inline constexpr guest::Function<0x00569544, u32(u32, u32, u32, u32)> call_00569544;  // (from the original)
inline constexpr guest::Function<0x0074fdd0, u32(u32, u32, u32, u32)> call_0074fdd0;  // (from the original)

u32 f_006d5df4(gptr<Object_006d5df4_0> arg0, u32 r1, u32 r2, u32 r3) {
    u32 r0 = arg0.addr();
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 zf = 0;
    guest::cpu()->r[13] -= 0x18u;  // (from the original)
    r4 = r0;
    r6 = r4 + 0x19b2u;  // (from the original)
    r5 = r1;
    r1 = u32(arg0->half_19b2);
    r8 = lsl_r(1u, r5 & 0xff);  // (from the original)
    if ((r1 & r8) != 0) {
        r0 = r4 + 0x3f4u;  // (from the original)
        r0 = call_0074fdd0(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        if (r0 == 0) {
            goto L_6d5eb8;
        }
        r7 = r4 + (r5 << 2);
        r3 = 0u;
        r1 = r4 + 0x3f4u;  // (from the original)
        r2 = *gptr<u32>(0x1920u + r7);  // (from the original)
        r0 = r4 + 0x280u;  // (from the original)
        r0 = call_00568984(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r0 = r4 + (r5 + (r5 << 5) + (r5 << 6) << 2) + 0x79cu;  // (from the original)
        r0 = call_002dfbf0(r0, r1, r2, r3);
        r0 = *gptr<u32>(r7 + 0x194cu);  // (from the original)
        *gptr<u8>(r0 + 0xb7u) = u8(u32(*gptr<u8>(r0 + 0xb7u)) & 0xfeu);  // (from the original)
        r0 = u32(*gptr<u16>(r6)) & ~uxth(r8);
        *gptr<u16>(r6) = u16(r0);
        if ((r0 & 0x400u) == 0) {  // (from the original)
            r1 = 1u;
        } else {
            r1 = 0u;
        }
        r0 = r4 + 0x19b0u;  // (from the original)
        zf = r1 == 0;
        r1 = u32(*gptr<u16>(r0));
        if (zf) {
            r1 = r1 & ~2u;
        } else {
            r1 = r1 | 2u;
        }
        *gptr<u16>(r0) = u16(r1);
    }
    r0 = 1u;
    guest::cpu()->r[13] += 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
L_6d5eb8:;
    r0 = r4 + 0x3f4u;  // (from the original)
    r0 = call_00569544(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r4 + 0x280u;  // (from the original)
    r0 = call_00568c10(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r0 = 0u;
    guest::cpu()->r[13] += 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_006d5df4
GUEST_EXPORT(0x006d5df4, d_006d5df4::f_006d5df4);

// f_006d6404: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006d6404 {

inline constexpr guest::Function<0x002f74c8, u32(u32, u32, u32, u32)> call_002f74c8;  // (from the original)
inline constexpr guest::Function<0x002f74e0, u32(u32, u32, u32, u32)> call_002f74e0;  // (from the original)
inline constexpr guest::Function<0x0056878c, u32(u32, u32, u32, u32)> call_0056878c;  // (from the original)

u32 f_006d6404(u32 r0, u32 r1, u32 r2) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r5 = r0;
    r0 = call_002f74c8(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    if (r0 == 0x73u) {  // (from the original)
        goto L_6d64c8;
    }
    r0 = call_002f74c8(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    if (r0 == 0x74u) {  // (from the original)
        goto L_6d64c8;
    }
    r4 = 0u;
    r0 = call_002f74c8(r0, r1, r2, guest::cpu()->r[3]);
    r2 = guest::cpu()->r[2];
    r1 = r0;
    r0 = 0x40000u;  // (from the original)
    r0 = call_002f74e0(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    if (r0 != 0) {
        r4 = 1u;
    }
    r0 = call_002f74c8(r0, r1, r2, guest::cpu()->r[3]);
    r2 = guest::cpu()->r[2];
    r1 = r0;
    r0 = 0x100000u;  // (from the original)
    r0 = call_002f74e0(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    if (r0 != 0) {
        r4 = 1u;
    }
    r0 = call_002f74c8(r0, r1, r2, guest::cpu()->r[3]);
    r2 = guest::cpu()->r[2];
    r1 = r0;
    r0 = 0x20000u;  // (from the original)
    r0 = call_002f74e0(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    if (r0 != 0) {
        r4 = 1u;
    }
    r0 = call_002f74c8(r0, r1, r2, guest::cpu()->r[3]);
    r2 = guest::cpu()->r[2];
    r1 = r0;
    r0 = 0x80000u;  // (from the original)
    r0 = call_002f74e0(r0, r1, r2, guest::cpu()->r[3]);
    r2 = guest::cpu()->r[2];
    r1 = 0x853a90u;  // (from the original)
    if (r0 != 0) {
        r4 = 1u;
    }
    r0 = r5 + 0x280u;  // (from the original)
    r0 = call_0056878c(r0, r1, r2, guest::cpu()->r[3]);
    r2 = guest::cpu()->r[2];
    *gptr<u8>(r0 + 0xb7u) = u8(u32(*gptr<u8>(r0 + 0xb7u)) & 0xfeu | r4);  // (from the original)
    r1 = 0x853a84u;  // (from the original)
    r0 = r5 + 0x280u;  // (from the original)
    r0 = call_0056878c(r0, r1, r2, guest::cpu()->r[3]);
    r1 = r4 ^ 1u | u32(*gptr<u8>(r0 + 0xb7u)) & 0xfeu;  // (from the original)
    *gptr<u8>(r0 + 0xb7u) = u8(r1);  // (from the original)
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
L_6d64c8:;
    r5 = r5 + 0x19b4u;  // (from the original)
    r0 = u32(*gptr<u16>(r5)) & ~1u;
    *gptr<u16>(r5) = u16(r0);
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_006d6404
GUEST_EXPORT(0x006d6404, d_006d6404::f_006d6404);

// f_006d7354: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006d7354 {

inline constexpr guest::Function<0x002f74c8, u32(u32, u32, u32, u32)> call_002f74c8;  // (from the original)
inline constexpr guest::Function<0x002fc900, u32(u32, u32, u32, u32)> call_002fc900;  // (from the original)
inline constexpr guest::Function<0x00305f44, u32(u32, u32, u32, u32)> call_00305f44;  // (from the original)
inline constexpr guest::Function<0x006d6500, u32(u32, u32, u32, u32)> call_006d6500;  // (from the original)
inline constexpr guest::Function<0x0075f020, u32(u32, u32, u32, u32)> call_0075f020;  // (from the original)

u32 f_006d7354(u32 r0) {
    u32 r1 = 0;
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
    u32 zf = 0;
    *gptr<u32>(r13 + 0xfffffff8u) = u32(r12);  // (from the original)
    r13 = r13 - 0x28;  // (from the original)
    r4 = 0u;
    r10 = 1u;
    r11 = r0;
    r9 = 0x95362cu;  // (from the original)
    r8 = 0x94ddf8u;  // (from the original)
    r6 = r0 + 0x1900u;  // (from the original)
    r7 = r0 + 0x19b4u;  // (from the original)
    goto L_6d738c;
L_6d737c:;
    if (r4 == 8u) {
        goto L_6d7398;
    }
    if (r4 == 9u) {
        goto L_6d742c;
    }
L_6d738c:;
    r1 = u32(*gptr<u16>(r7));
    r0 = r1 | lsl_r(r10, r4 & 0xff);  // (from the original)
    goto L_6d74a4;
L_6d7398:;
    r1 = 0u;
    r5 = *gptr<u32>(r9) + 0x7874u;  // (from the original)
    r0 = r5;
    guest::cpu()->r[13] = r13;
    r0 = call_0075f020(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 != 0) {
        goto L_6d74a8;
    }
    r1 = 1u;
    r0 = r5;
    guest::cpu()->r[13] = r13;
    r0 = call_0075f020(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 != 0) {
        guest::cpu()->r[13] = r13;
        r0 = call_002fc900(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        if (r0 != 0) {
            goto L_6d74a8;
        }
    } else {
        r1 = 2u;
        r0 = r5;
        guest::cpu()->r[13] = r13;
        r0 = call_0075f020(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        if (r0 != 0) {
            goto L_6d74a8;
        }
    }
    r0 = u32(s32(s8(*gptr<u8>(r6 + 0x1bu))));  // (from the original)
    zf = r0 == 0xau;  // (from the original)
    if (!zf) {
        zf = r0 + 1u == 0;
    }
    if (!zf) {
        if (r0 != 8u) {
            r4 = 9u;
            guest::preempt();
            goto L_6d737c;
        }
    }
    *gptr<u16>(r7) = u16(u32(*gptr<u16>(r7)) | 0x100u);  // (from the original)
    goto L_6d74a8;
L_6d742c:;
    r0 = *gptr<u32>(r9);
    r5 = r0 + 0x7874u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002f74c8(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 != 0x67u) {  // (from the original)
        goto L_6d74a8;
    }
    r1 = 2u;
    r0 = r5;
    guest::cpu()->r[13] = r13;
    r0 = call_0075f020(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 == 0) {
        goto L_6d74a8;
    }
    r0 = u32(*gptr<u8>(r8));
    if (r0 == 1u) {
        guest::cpu()->r[13] = r13;
        r0 = call_00305f44(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1 = u32(*gptr<u8>(r8 + 2u));
        if (r0 == r1) {
            goto L_6d74a8;
        }
    }
    r0 = u32(s32(s8(*gptr<u8>(r6 + 0x1bu))));  // (from the original)
    zf = r0 == 0xau;  // (from the original)
    if (!zf) {
        zf = r0 + 1u == 0;
    }
    if (!zf) {
        zf = r0 == 5u;
        if (!zf) {
            zf = r0 == 9u;
        }
        if (!zf) {
            r4 = 0xau;  // (from the original)
            guest::preempt();
            goto L_6d737c;
        }
    }
    r0 = u32(*gptr<u16>(r7)) | 0x200u;  // (from the original)
L_6d74a4:;
    *gptr<u16>(r7) = u16(r0);
L_6d74a8:;
    r4 = r4 + 1u;
    if (s32(r4) < s32(0xbu)) {  // (from the original)
        guest::preempt();
        goto L_6d737c;
    }
    *gptr<u16>(r7) = u16(u32(*gptr<u16>(r7)) & ~0x400u);  // (from the original)
    r0 = r11;
    r13 = r13 + 0x28;  // (from the original)
    guest::cpu()->r[13] = r13;
    return call_006d6500(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_006d7354
GUEST_EXPORT(0x006d7354, d_006d7354::f_006d7354);

// f_006d8d48: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006d8d48 {

struct __attribute__((packed)) Object_006d8d48_0 {
    u8 unknown_0[0x568];  // (not used here)
    u32 word_568;
    u8 unknown_56c[0x180];  // (not used here)
    u32 word_6ec;
};
GUEST_OFFSET(Object_006d8d48_0, word_568, 0x568);  // (from the original)
GUEST_OFFSET(Object_006d8d48_0, word_6ec, 0x6ec);  // (from the original)


void f_006d8d48(gptr<Object_006d8d48_0> arg0, u32 r1) {
    u32 r2 = 0;
    u32 zf = 0;
    zf = r1 == 0;
    r1 = arg0->word_568;
    r2 = arg0->word_6ec;
    if (zf) {
        r1 = r1 & ~8u;
    } else {
        r1 = r1 | 8u;
    }
    arg0->word_568 = u32(r1);
    if (zf) {
        r1 = r2 & ~8u;
    } else {
        r1 = r2 | 8u;
    }
    arg0->word_6ec = u32(r1);
    guest::cpu()->r[1] = r1;
    return;
}

}  // namespace d_006d8d48
GUEST_EXPORT(0x006d8d48, d_006d8d48::f_006d8d48);

// f_006d8f68: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006d8f68 {

struct __attribute__((packed)) Object_006d8f68_0 {
    u32 word_0;
    u8 unknown_4[0x10];  // (not used here)
    u32 word_14;
};
GUEST_OFFSET(Object_006d8f68_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_006d8f68_0, word_14, 0x14);  // (from the original)

inline constexpr guest::Function<0x002f76ad, u32(u32, u32, u32, u32)> call_002f76ac;  // (from the original)
inline constexpr guest::Function<0x002f7710, u32(u32, u32, u32, u32)> call_002f7710;  // (from the original)
inline constexpr guest::Function<0x00521ae0, u32(u32, u32, u32, u32)> call_00521ae0;  // (from the original)
inline constexpr guest::Function<0x00567ef0, u32(u32, u32, u32, u32)> call_00567ef0;  // (from the original)
inline constexpr guest::Function<0x0056988c, u32(u32, u32, u32, u32)> call_0056988c;  // (from the original)
inline constexpr guest::Function<0x005bf744, u32(u32, u32, u32, u32)> call_005bf744;  // (from the original)
inline constexpr guest::Function<0x005e3194, u32(u32, u32, u32, u32)> call_005e3194;  // (from the original)

u32 f_006d8f68(gptr<Object_006d8f68_0> arg0, u32 r1_unused, u32 r2_unused, u32 r3) {
    u32 r0 = arg0.addr();
    u32 r1 = 0;
    u32 r2 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    r1 = 0x8f9384u;  // (from the original)
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r2 = r1 + 0x48u;  // (from the original)
    arg0->word_0 = u32(r1);
    arg0->word_14 = u32(r2);
    r0 = r0 + 0x1848u;  // (from the original)
    r0 = call_005e3194(r0, r1, r2, r3);
    r1 = 0x2e00e0u;  // (from the original)
    r4 = r0 - 0x1848u;  // (from the original)
    r3 = 0xbu;  // (from the original)
    r2 = 0x184u;  // (from the original)
    r0 = r0 - 0x10acu;  // (from the original)
    r0 = call_002f76ac(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r5 = 0x8f5084u;  // (from the original)
    r0 = r4 + 0x774u;  // (from the original)
    *gptr<u32>(r4 + 0x618u) = u32(r5);  // (from the original)
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
    r0 = r0 - 0xe4u;  // (from the original)
    r0 = call_002f7710(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    *gptr<u32>(r0 - 0x184u) = u32(r5);  // (from the original)
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
    r0 = r0 - 0xe4u;  // (from the original)
    r0 = call_002f7710(r0, r1, r2, r3);
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
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    r0 = r0 - 0x38u;  // (from the original)
    return call_00521ae0(r0, r1, r2, r3);
}

}  // namespace d_006d8f68
GUEST_EXPORT(0x006d8f68, d_006d8f68::f_006d8f68);

// f_006d926c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006d926c {


u32 f_006d926c(u32 r0_unused, u32 r1) {
    u32 ea = 0;
    u32 r0 = 0;
    u32 zf = 0;
    r0 = *gptr<u32>(0x95063cu);  // (from the original)
    if (r0 == 0) {
        r0 = 3u;
        return r0;
    }
    ea = r0 + 0x2cu;  // (from the original)
    r0 = ea;
    if (u32(*gptr<u8>(ea)) != r1) {
        r0 = 3u;
        return r0;
    }
    r0 = u32(*gptr<u8>(r0 + 1u)) & 0xfu;  // (from the original)
    zf = r0 == 4u;
    if (!zf) {
        zf = r0 == 5u;
    }
    if (!zf) {
        zf = r0 == 0;
    }
    if (!zf) {
        return r0;
    }
    r0 = 3u;
    return r0;
}

}  // namespace d_006d926c
GUEST_EXPORT(0x006d926c, d_006d926c::f_006d926c);

// f_006d96c0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006d96c0 {

inline constexpr guest::Function<0x001f5e5c, u32(u32, u32, u32, u32)> call_001f5e5c;  // (from the original)

u32 f_006d96c0(u32 r0) {
    u32 r2 = 0;
    u32 r3 = 0;
    r3 = *gptr<u32>(0x95063cu);  // (from the original)
    if (r3 == 0) {
        r0 = 0u;
        return r0;
    }
    r2 = *gptr<u32>(r3 + (r0 << 3) + 0x34u);  // (from the original)
    if (r2 != 0) {
        r0 = r2 + 0x14u;  // (from the original)
        return r0;
    }
    r0 = *gptr<u32>(r3 + (r0 << 2) + 0x1cu);  // (from the original)
    return call_001f5e5c(r0, guest::cpu()->r[1], r2, r3);
}

}  // namespace d_006d96c0
GUEST_EXPORT(0x006d96c0, d_006d96c0::f_006d96c0);

// f_006d9748: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006d9748 {

inline constexpr guest::Function<0x002fcb34, u32(u32, u32, u32, u32)> call_002fcb34;  // (from the original)
inline constexpr guest::Function<0x006d9e38, u32(u32, u32, u32, u32)> call_006d9e38;  // (from the original)

u32 f_006d9748(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 zf = 0;
    guest::cpu()->r[13] -= 0x18u;  // (from the original)
    r5 = r0;
    r6 = r1;
    r7 = r2;
    r4 = r3;
    r0 = r3;
    r0 = call_002fcb34(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    zf = r0 == 0x27u;  // (from the original)
    if (!zf) {
        zf = r0 == 0x28u;  // (from the original)
    }
    if (!zf) {
        r0 = 0u;
        goto L_6d978c;
    }
    r3 = r4;
    r2 = r7;
    r1 = r6;
    r0 = r5;
    r0 = call_006d9e38(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r0 = 1u;
L_6d978c:;
    guest::cpu()->r[13] += 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_006d9748
GUEST_EXPORT(0x006d9748, d_006d9748::f_006d9748);

// f_006d99fc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006d99fc {

inline constexpr guest::Function<0x00300904, u32(u32, u32, u32, u32)> call_00300904;  // (from the original)
inline constexpr guest::Function<0x00305f44, u32(u32, u32, u32, u32)> call_00305f44;  // (from the original)
inline constexpr guest::Function<0x006249b0, u32(u32, u32, u32, u32)> call_006249b0;  // (from the original)

u32 f_006d99fc(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r13 = guest::cpu()->r[13];
    u32 zf = 0;
    *gptr<u32>(r13 + 0xfffffff0u) = u32(r3);  // (from the original)
    r13 = r13 - 0x10;  // (from the original)
    r4 = r0;
    r0 = *gptr<u32>(0x95063cu);  // (from the original)
    if (r0 == 0) {
        r13 = r13 + 0x10;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    r0 = *gptr<u32>(r0 + (r4 << 2) + 0x1cu);  // (from the original)
    zf = r0 == 0;
    if (!zf) {
        r1 = u32(*gptr<u8>(r0 + 0x248u));  // (from the original)
        zf = r1 == 0;
    }
    if (zf) {
        r13 = r13 + 0x10;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    r5 = 0u;
    *gptr<u8>(r0 + 0x248u) = u8(r5);  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00300904(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        r13 = r13 + 0x10;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    guest::cpu()->r[13] = r13;
    r0 = call_00305f44(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    if (r0 != r4) {
        r13 = r13 + 0x10;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    *gptr<u8>(r13) = u8(r5);
    *gptr<u8>(r13 + 1u) = u8(r5);
    r3 = 4u;
    *gptr<u8>(r13 + 2u) = u8(r5);
    r2 = r13;
    r1 = r3;
    r0 = 0x3du;  // (from the original)
    *gptr<u8>(r13 + 3u) = u8(r5);
    guest::cpu()->r[13] = r13;
    r0 = call_006249b0(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r13 = r13 + 0x10;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_006d99fc
GUEST_EXPORT(0x006d99fc, d_006d99fc::f_006d99fc);

// f_006d9a78: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006d9a78 {

struct __attribute__((packed)) Object_006d9a78_0 {
    u8 unknown_0[0x1ac];  // (not used here)
    u8 byte_1ac;
};
GUEST_OFFSET(Object_006d9a78_0, byte_1ac, 0x1ac);  // (from the original)


u32 f_006d9a78(gptr<Object_006d9a78_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r1 = 0;
    r0 = u32(arg0->byte_1ac);
    r1 = *gptr<u32>(0x95063cu);  // (from the original)
    if (r1 == 0) {
        r0 = 0u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r0 = *gptr<u32>(r1 + (r0 << 2) + 0x1cu);  // (from the original)
    if (r0 == 0) {
        guest::cpu()->r[1] = r1;
        return r0;
    }
    if (u32(*gptr<u8>(r0 + 0x248u)) == 3u) {  // (from the original)
        r0 = 1u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r0 = 0u;
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_006d9a78
GUEST_EXPORT(0x006d9a78, d_006d9a78::f_006d9a78);

// f_006d9abc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006d9abc {

inline constexpr guest::Function<0x002fcb34, u32(u32, u32, u32, u32)> call_002fcb34;  // (from the original)
inline constexpr guest::Function<0x00300904, u32(u32, u32, u32, u32)> call_00300904;  // (from the original)
inline constexpr guest::Function<0x006d9058, u32(u32, u32, u32, u32)> call_006d9058;  // (from the original)
inline constexpr guest::Function<0x006d9864, u32(u32, u32, u32, u32)> call_006d9864;  // (from the original)

u32 f_006d9abc(u32 r0, u32 r1) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 zf = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r5 = r0;
    r6 = 0x95063cu;  // (from the original)
    r4 = r1;
    r0 = *gptr<u32>(r6);
    if (r0 == 0) {
        goto L_6d9b88;
    }
    r0 = r5;
    r0 = call_002fcb34(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    zf = r0 == 0x24u;  // (from the original)
    if (!zf) {
        zf = r0 == 0x26u;  // (from the original)
    }
    if (zf) {
        goto L_6d9b48;
    }
    zf = r0 == 0x25u;  // (from the original)
    if (!zf) {
        zf = r0 == 0x98u;  // (from the original)
    }
    if (!zf) {
        zf = r0 == 0x9au;  // (from the original)
    }
    if (zf) {
        goto L_6d9b48;
    }
    zf = r0 == 0x27u;  // (from the original)
    if (!zf) {
        zf = r0 == 0x28u;  // (from the original)
    }
    if (!zf) {
        zf = r0 == 0x66u;  // (from the original)
        if (!zf) {
            zf = r0 == 0x65u;  // (from the original)
        }
        if (!zf) {
            goto L_6d9b88;
        }
    }
    r0 = call_00300904(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    zf = r0 == 0;
    r4 = *gptr<u32>(*gptr<u32>(r6) + (r4 << 2) + 0x1cu);  // (from the original)
    r0 = r4 + 0x20cu;  // (from the original)
    if (zf) {
        goto L_6d9b68;
    }
    r0 = call_002fcb34(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 == 0x27u) {  // (from the original)
        goto L_6d9b88;
    }
    goto L_6d9b7c;
L_6d9b48:;
    r0 = r5;
    r0 = call_006d9058(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 == 0x3fu) {  // (from the original)
        goto L_6d9b88;
    }
    r0 = r4;
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    return call_006d9864(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
L_6d9b68:;
    r0 = call_002fcb34(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 == 0x27u) {  // (from the original)
        goto L_6d9b88;
    }
L_6d9b7c:;
    r0 = r4 + 0x20cu;  // (from the original)
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    return call_002fcb34(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
L_6d9b88:;
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    return r0;
}

}  // namespace d_006d9abc
GUEST_EXPORT(0x006d9abc, d_006d9abc::f_006d9abc);

// f_006d9b90: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006d9b90 {

struct __attribute__((packed)) Object_006d9b90_1 {
    u8 byte_0;
    u8 byte_1;
};
GUEST_OFFSET(Object_006d9b90_1, byte_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_006d9b90_1, byte_1, 0x1);  // (from the original)

inline constexpr guest::Function<0x001f6844, u32(u32, u32, u32, u32)> call_001f6844;  // (from the original)
inline constexpr guest::Function<0x006162e0, u32(u32, u32, u32, u32)> call_006162e0;  // (from the original)
inline constexpr guest::Function<0x006c5ef8, u32(u32, u32, u32, u32)> call_006c5ef8;  // (from the original)

u32 f_006d9b90(u32 r0, gptr<Object_006d9b90_1> arg1, u32 r2_unused, u32 r3, float S0, float S1) {
    u32 r1 = arg1.addr();
    u32 r2 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r13 = guest::cpu()->r[13];
    r5 = r0;
    r13 = r13 - 0x38u;  // (from the original)
    r7 = 0x95063cu;  // (from the original)
    r4 = r1;
    r0 = *gptr<u32>(r7);
    if (r0 == 0) {
        goto L_6d9c9c;
    }
    r0 = *gptr<u32>(r0 + (r5 << 2) + 0x1cu);  // (from the original)
    if (r0 == 0) {
        goto L_6d9c9c;
    }
    r2 = 0u;
    r6 = (u32(arg1->byte_0) >> 2) + ((u32(arg1->byte_1) & 1u) << 6);
    r1 = r6;
    r0 = r13 + 0x1cu;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    r0 = call_006162e0(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    S1 = guest::cpu()->s[1];
    *gptr<u32>(r13 + 4u) = u32(std::bit_cast<u32>(float(std::bit_cast<u32>(std::bit_cast<float>((u32(*gptr<u8>(r4 + 1u)) >> 1) + ((u32(*gptr<u8>(r4 + 2u)) & 7u) << 7) << 2)))));
    r1 = 0u;
    r0 = r13 + 4u;
    S0 = float(std::bit_cast<u32>(std::bit_cast<float>((u32(*gptr<u8>(r4 + 2u)) >> 3) + ((u32(*gptr<u8>(r4 + 3u)) & 0x1fu) << 5) << 2)));  // (from the original)
    *gptr<u32>(r13 + 0xcu) = u32(std::bit_cast<u32>(S0));  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    r0 = call_006c5ef8(r0, r1, r2, r3);
    S0 = guest::cpu()->s[0];
    *gptr<u32>(r13 + 8u) = u32(std::bit_cast<u32>(S0));
    r0 = 0x68cu + (r6 + (r6 << 2) << 2) + *gptr<u32>(*gptr<u32>(r7 + 4u) + 0x14u);  // (from the original)
    r2 = r0 + 4u;
    S0 = std::bit_cast<float>(*gptr<u32>(r2));
    S1 = std::bit_cast<float>(*gptr<u32>(r2 + 4));
    r2 = r13 + 0x14u;  // (from the original)
    *gptr<u32>(r13 + 0x10u) = u32(*gptr<u32>(r0));  // (from the original)
    *gptr<u32>(r2) = u32(std::bit_cast<u32>(S0));
    *gptr<u32>(r2 + 4) = u32(std::bit_cast<u32>(S1));
    r2 = r13 + 4u;
    *gptr<u32>(r13) = u32(r13 + 0x10u);  // (from the original)
    r3 = u32(s32(s16(*gptr<u16>(r0 + 0x10u))));  // (from the original)
    S0 = std::bit_cast<float>(*gptr<u32>(r0 + 0xcu));  // (from the original)
    r0 = *gptr<u32>(*gptr<u32>(r7) + (r5 << 2) + 0x1cu);  // (from the original)
    r1 = r13 + 0x1cu;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    r0 = call_001f6844(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    r0 = r13 + 0x1cu;  // (from the original)
L_6d9c9c:;
    r13 = r13 + 0x38u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    return r0;
}

}  // namespace d_006d9b90
GUEST_EXPORT(0x006d9b90, d_006d9b90::f_006d9b90);

// f_006d9cac: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006d9cac {

inline constexpr guest::Function<0x001f6844, u32(u32, u32, u32, u32)> call_001f6844;  // (from the original)
inline constexpr guest::Function<0x00300904, u32(u32, u32, u32, u32)> call_00300904;  // (from the original)
inline constexpr guest::Function<0x00305f44, u32(u32, u32, u32, u32)> call_00305f44;  // (from the original)
inline constexpr guest::Function<0x006249b0, u32(u32, u32, u32, u32)> call_006249b0;  // (from the original)
inline constexpr guest::Function<0x006d9058, u32(u32, u32, u32, u32)> call_006d9058;  // (from the original)

u32 f_006d9cac(u32 r0, u32 r1, u32 r2, u32 r3, float S0, float S1, float S2) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r13 = guest::cpu()->r[13];
    r6 = r0;
    r13 = r13 - 0x30u;  // (from the original)
    r7 = 0x95063cu;  // (from the original)
    r5 = r1;
    r0 = *gptr<u32>(r7);
    if (r0 == 0) {
        goto L_6d9e28;
    }
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2;
    r0 = call_00305f44(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    S2 = guest::cpu()->s[2];
    r1 = *gptr<u32>(r7);
    r0 = *gptr<u32>(r1 + (r0 << 2) + 0x1cu);  // (from the original)
    if (r0 == 0) {
        goto L_6d9e28;
    }
    r0 = r6;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2;
    r0 = call_006d9058(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    if (r0 >= 0x6bu) {  // (from the original)
        r0 = 0u;
    }
    S1 = std::bit_cast<float>(*gptr<u32>(r5 + 4));
    S2 = std::bit_cast<float>(*gptr<u32>(r5 + 8));
    r0 = 0x68cu + (r0 + (r0 << 2) << 2);  // (from the original)
    r2 = *gptr<u32>(*gptr<u32>(r7 + 4u) + 0x14u);  // (from the original)
    r1 = r13 + 4u;
    *gptr<u32>(r1) = u32(std::bit_cast<u32>(std::bit_cast<float>(*gptr<u32>(r5))));
    *gptr<u32>(r1 + 4) = u32(std::bit_cast<u32>(S1));
    *gptr<u32>(r1 + 8) = u32(std::bit_cast<u32>(S2));
    r4 = r2 + r0;
    r1 = r13 + 0x10u;  // (from the original)
    S0 = std::bit_cast<float>(*gptr<u32>(r4));
    S1 = std::bit_cast<float>(*gptr<u32>(r4 + 4));
    S2 = std::bit_cast<float>(*gptr<u32>(r4 + 8));
    *gptr<u32>(r1) = u32(std::bit_cast<u32>(S0));
    *gptr<u32>(r1 + 4) = u32(std::bit_cast<u32>(S1));
    *gptr<u32>(r1 + 8) = u32(std::bit_cast<u32>(S2));
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2;
    r0 = call_00305f44(r0, r1, r2, r3);
    S1 = guest::cpu()->s[1];
    S2 = guest::cpu()->s[2];
    r2 = r13 + 4u;
    r0 = *gptr<u32>(*gptr<u32>(r7) + (r0 << 2) + 0x1cu);  // (from the original)
    *gptr<u32>(r13) = u32(r13 + 0x10u);  // (from the original)
    r3 = u32(s32(s16(*gptr<u16>(r4 + 0x10u))));  // (from the original)
    S0 = std::bit_cast<float>(*gptr<u32>(r4 + 0xcu));  // (from the original)
    r1 = r6;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2;
    r0 = call_001f6844(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    S2 = guest::cpu()->s[2];
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2;
    r0 = call_00300904(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    S2 = guest::cpu()->s[2];
    if (r0 == 0) {
        goto L_6d9e28;
    }
    r0 = 0u;
    *gptr<u8>(r13) = u8(r0);
    *gptr<u8>(r13 + 1u) = u8(r0);
    *gptr<u8>(r13 + 2u) = u8(r0);
    *gptr<u8>(r13 + 3u) = u8(r0);
    r0 = r6;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2;
    r0 = call_006d9058(r0, r1, r2, r3);
    S1 = guest::cpu()->s[1];
    S2 = guest::cpu()->s[2];
    *gptr<u8>(r13) = u8((u32(*gptr<u8>(r13)) & ~3u | 1u) & ~0xfcu | r0 << 2);  // (from the original)
    r0 = u32(*gptr<u8>(r13 + 1u)) & ~1u | (r0 & 0x40u) >> 6;  // (from the original)
    *gptr<u8>(r13 + 1u) = u8(r0);
    r1 = r0 & ~0xfeu;  // (from the original)
    r0 = std::bit_cast<u32>(std::bit_cast<float>(vcvt_uz_f(std::bit_cast<float>(*gptr<u32>(r5)))));
    *gptr<u8>(r13 + 1u) = u8(r1 | 0xfeu & r0 >> 1);  // (from the original)
    r0 = u32(*gptr<u8>(r13 + 2u)) & ~7u | (0x380u & r0 >> 2) >> 7;  // (from the original)
    *gptr<u8>(r13 + 2u) = u8(r0);
    r1 = r0 & ~0xf8u;  // (from the original)
    S0 = std::bit_cast<float>(vcvt_uz_f(std::bit_cast<float>(*gptr<u32>(r5 + 8u))));
    r0 = std::bit_cast<u32>(S0);
    *gptr<u8>(r13 + 2u) = u8(r1 | 0xf8u & r0 << 1);  // (from the original)
    r3 = 4u;
    r1 = r3;
    *gptr<u8>(r13 + 3u) = u8(u32(*gptr<u8>(r13 + 3u)) & ~0x1fu | (0x3e0u & r0 >> 2) >> 5);  // (from the original)
    r2 = r13;
    r0 = 0x3du;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2;
    r0 = call_006249b0(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
L_6d9e28:;
    r13 = r13 + 0x30u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    return r0;
}

}  // namespace d_006d9cac
GUEST_EXPORT(0x006d9cac, d_006d9cac::f_006d9cac);

// f_006d9f38: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006d9f38 {

inline constexpr guest::Function<0x002abf60, u32(u32, u32, u32, u32)> call_002abf60;  // (from the original)
inline constexpr guest::Function<0x002c2d58, u32(u32, u32, u32, u32)> call_002c2d58;  // (from the original)
inline constexpr guest::Function<0x002c2fd4, u32(u32, u32, u32, u32)> call_002c2fd4;  // (from the original)
inline constexpr guest::Function<0x00305f44, u32(u32, u32, u32, u32)> call_00305f44;  // (from the original)
inline constexpr guest::Function<0x0061a7a0, u32(u32, u32, u32, u32)> call_0061a7a0;  // (from the original)
inline constexpr guest::Function<0x006249b0, u32(u32, u32, u32, u32)> call_006249b0;  // (from the original)
inline constexpr guest::Function<0x006da030, u32(u32, u32, u32, u32)> call_006da030;  // (from the original)

u32 f_006d9f38(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 ea = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r13 = guest::cpu()->r[13];
    u32 zf = 0;
    r13 = r13 - 0x18;  // (from the original)
    r5 = r1;
    r4 = r2;
    guest::cpu()->r[13] = r13;
    r0 = call_0061a7a0(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        goto L_6da010;
    }
    r7 = 0x95063cu;  // (from the original)
    r1 = r4;
    r4 = 0u;
    r0 = *gptr<u32>(0x94f524u);  // (from the original)
    if (r0 == 0) {
        goto L_6d9fd4;
    }
    guest::cpu()->r[13] = r13;
    r0 = call_002abf60(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 != 0) {
        r6 = *gptr<u32>(r0);
        zf = r6 == 0;
        if (!zf) {
            r0 = u32(*gptr<u8>(r6 + 0x1c8u));  // (from the original)
            zf = r0 == 2u;
        }
        if (zf) {
            goto L_6d9fd4;
        } else {
            r4 = r6;
        }
    }
    if (r4 == 0) {
        goto L_6d9fd4;
    }
    r6 = *gptr<u32>(r7);
    guest::cpu()->r[13] = r13;
    r0 = call_00305f44(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    ea = r6 + (r0 << 3) + 0x34u;  // (from the original)
    r6 = ea;
    r0 = *gptr<u32>(ea);
    if (r0 != 0) {
        r1 = r6;
        guest::cpu()->r[13] = r13;
        r0 = call_002c2fd4(r0, r1, r2, r3);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
    }
    r1 = r6;
    r0 = r4;
    guest::cpu()->r[13] = r13;
    r0 = call_002c2d58(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    r0 = *gptr<u32>(r7);
    r2 = r5;
    r1 = r4;
    r13 = r13 + 0x18;  // (from the original)
    guest::cpu()->r[13] = r13;
    return call_006da030(r0, r1, r2, r3);
L_6d9fd4:;
    r4 = *gptr<u32>(r7);
    r0 = u32(*gptr<u8>(r5 + 1u)) & ~0xfu | 3u;  // (from the original)
    *gptr<u8>(r5 + 1u) = u8(r0);
    guest::cpu()->r[13] = r13;
    r0 = call_00305f44(r0, r1, r2, r3);
    r1 = u32(*gptr<u8>(r5 + 1u)) << 0x1a;  // (from the original)
    if (r0 == r1 >> 0x1e) {  // (from the original)
        r1 = u32(*gptr<u8>(r4 + 0x2du)) & ~0xfu | 3u;  // (from the original)
        *gptr<u8>(r4 + 0x2du) = u8(r1);  // (from the original)
    }
    r13 = r13 + 0x18;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
L_6da010:;
    r2 = r5;
    r13 = r13 + 0x18;  // (from the original)
    r3 = 2u;
    r1 = 5u;
    r0 = 0x3bu;  // (from the original)
    guest::cpu()->r[13] = r13;
    return call_006249b0(r0, r1, r2, r3);
}

}  // namespace d_006d9f38
GUEST_EXPORT(0x006d9f38, d_006d9f38::f_006d9f38);

// f_006dab3c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006dab3c {

struct __attribute__((packed)) Object_006dab3c_0 {
    u8 unknown_0[0x67cc];  // (not used here)
    u32 word_67cc;
    u8 unknown_67d0[0x4];  // (not used here)
    u32 word_67d4;
};
GUEST_OFFSET(Object_006dab3c_0, word_67cc, 0x67cc);  // (from the original)
GUEST_OFFSET(Object_006dab3c_0, word_67d4, 0x67d4);  // (from the original)


u32 f_006dab3c(gptr<Object_006dab3c_0> arg0, u32 r1_unused, u32 r2) {
    u32 r0 = arg0.addr();
    u32 r3 = 0;
    u32 zf = 0;
    u32 cf = 0;
    r0 = r0 + 0x67ccu;  // (from the original)
    r3 = arg0->word_67cc;
    zf = r3 == r2;
    cf = r3 >= r2;
    if (cf && !zf) {
        r0 = *gptr<u32>(arg0->word_67d4 + (r2 << 2));
    }
    if (!cf || zf) {
        r0 = 0u;
    }
    r2 = *gptr<u32>(*gptr<u32>(r0) + 0x9cu);  // (from the original)
    return guest::call_address<u32>(r2, r0, guest::cpu()->r[1], r2, r3);
}

}  // namespace d_006dab3c
GUEST_EXPORT(0x006dab3c, d_006dab3c::f_006dab3c);

// f_006dc224: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006dc224 {


u32 f_006dc224(u32 r0) {
    goto L_6dc224;
L_6dc224:;
    r0 = *gptr<u32>(r0 + 0x6b4cu);  // (from the original)
    if (r0 == 0) {
        return r0;
    }
    return guest::call_address<u32>(*gptr<u32>(0x14fe38u), r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
}

}  // namespace d_006dc224
GUEST_EXPORT(0x006dc224, d_006dc224::f_006dc224);

// f_006dc8cc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006dc8cc {

inline constexpr guest::Function<0x002fae84, u32(u32, u32, u32, u32)> call_002fae84;  // (from the original)

u32 f_006dc8cc() {
    u32 ea = 0;
    u32 r0 = 0;
    u32 r1 = 0;
    u32 r13 = guest::cpu()->r[13];
    float S0 = 0;
    float S1 = 0;
    float S2 = 0;
    float S3 = 0;
    float S4 = 0;
    float S5 = 0;
    float S6 = 0;
    float S7 = 0;
    r0 = 0x854660u;  // (from the original)
    r13 = r13 - 0x30u;  // (from the original)
    ea = r0;
    S0 = std::bit_cast<float>(*gptr<u32>(ea));
    S1 = std::bit_cast<float>(*gptr<u32>(ea + 4));
    S2 = std::bit_cast<float>(*gptr<u32>(ea + 8));
    S3 = std::bit_cast<float>(*gptr<u32>(ea + 0xc));  // (from the original)
    S4 = std::bit_cast<float>(*gptr<u32>(ea + 0x10));  // (from the original)
    S5 = std::bit_cast<float>(*gptr<u32>(ea + 0x14));  // (from the original)
    S6 = std::bit_cast<float>(*gptr<u32>(ea + 0x18));  // (from the original)
    S7 = std::bit_cast<float>(*gptr<u32>(ea + 0x1c));  // (from the original)
    ea = r13;
    *gptr<u32>(ea) = u32(std::bit_cast<u32>(S0));
    *gptr<u32>(ea + 4) = u32(std::bit_cast<u32>(S1));
    *gptr<u32>(ea + 8) = u32(std::bit_cast<u32>(S2));
    *gptr<u32>(ea + 0xc) = u32(std::bit_cast<u32>(S3));  // (from the original)
    *gptr<u32>(ea + 0x10) = u32(std::bit_cast<u32>(S4));  // (from the original)
    *gptr<u32>(ea + 0x14) = u32(std::bit_cast<u32>(S5));  // (from the original)
    *gptr<u32>(ea + 0x18) = u32(std::bit_cast<u32>(S6));  // (from the original)
    *gptr<u32>(ea + 0x1c) = u32(std::bit_cast<u32>(S7));  // (from the original)
    ea = r0 + 0x20u;  // (from the original)
    r0 = *gptr<u32>(ea);
    r1 = *gptr<u32>(ea + 4);
    ea = r13 + 0x20u;  // (from the original)
    *gptr<u32>(ea) = u32(r0);
    *gptr<u32>(ea + 4) = u32(r1);
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2;
    guest::cpu()->s[3] = S3;
    guest::cpu()->s[4] = S4;
    guest::cpu()->s[5] = S5;
    guest::cpu()->s[6] = S6;
    guest::cpu()->s[7] = S7;
    r0 = call_002fae84(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    r1 = 0x6214eu;  // (from the original)
    r0 = *gptr<u32>(r13 + ((u32(*gptr<u8>(r0 + r1)) & 0xfu) << 2));  // (from the original)
    r13 = r13 + 0x30u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    return r0;
}

}  // namespace d_006dc8cc
GUEST_EXPORT(0x006dc8cc, d_006dc8cc::f_006dc8cc);

// f_006dcaf8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006dcaf8 {


u32 f_006dcaf8(u32 r0) {
    u32 r1 = 0;
    r1 = 0x997c70u;  // (from the original)
    r0 = u32(*gptr<u8>(r1 + r0)) & 0xfu;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_006dcaf8
GUEST_EXPORT(0x006dcaf8, d_006dcaf8::f_006dcaf8);

// f_006dcc94: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006dcc94 {

inline constexpr guest::Function<0x002f825c, u32(u32, u32, u32, u32)> call_002f825c;  // (from the original)
inline constexpr guest::Function<0x003082bc, u32(u32, u32, u32, u32)> call_003082bc;  // (from the original)

u32 f_006dcc94(u32 r0, u32 r1) {
    guest::cpu()->r[13] -= 8u;
    r0 = call_003082bc(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    guest::cpu()->r[13] += 8u;
    r0 = 0x997c70u;  // (from the original)
    r1 = 0x12u;  // (from the original)
    return call_002f825c(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_006dcc94
GUEST_EXPORT(0x006dcc94, d_006dcc94::f_006dcc94);

// f_006dcd28: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006dcd28 {


u32 f_006dcd28(u32 r0) {
    goto L_6dcd28;
L_6dcd28:;
    r0 = *gptr<u32>(r0 + 0x6b4cu);  // (from the original)
    if (r0 == 0) {
        return r0;
    }
    return guest::call_address<u32>(*gptr<u32>(0x14fe40u), r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
}

}  // namespace d_006dcd28
GUEST_EXPORT(0x006dcd28, d_006dcd28::f_006dcd28);

// f_006dcd50: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006dcd50 {

inline constexpr guest::Function<0x002fb328, u32(u32, u32, u32, u32)> call_002fb328;  // (from the original)
inline constexpr guest::Function<0x007111b4, u32(u32, u32, u32, u32)> call_007111b4;  // (from the original)

u32 f_006dcd50() {
    u32 r0 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r13 = guest::cpu()->r[13];
    u32 zf = 0;
    u32 cf = 0;
    float S0 = 0;
    float S1 = 0;
    float S2 = 0;
    float S3 = 0;
    float S4 = 0;
    float S5 = 0;
    float S6 = 0;
    r0 = 0x854688u;  // (from the original)
    r13 = r13 - 0x28u;  // (from the original)
    S0 = std::bit_cast<float>(*gptr<u32>(r0));
    S1 = std::bit_cast<float>(*gptr<u32>(r0 + 4));
    S2 = std::bit_cast<float>(*gptr<u32>(r0 + 8));
    S3 = std::bit_cast<float>(*gptr<u32>(r0 + 0xc));  // (from the original)
    S4 = std::bit_cast<float>(*gptr<u32>(r0 + 0x10));  // (from the original)
    S5 = std::bit_cast<float>(*gptr<u32>(r0 + 0x14));  // (from the original)
    S6 = std::bit_cast<float>(*gptr<u32>(r0 + 0x18));  // (from the original)
    *gptr<u32>(r13) = u32(std::bit_cast<u32>(S0));
    *gptr<u32>(r13 + 4) = u32(std::bit_cast<u32>(S1));
    *gptr<u32>(r13 + 8) = u32(std::bit_cast<u32>(S2));
    *gptr<u32>(r13 + 0xc) = u32(std::bit_cast<u32>(S3));  // (from the original)
    *gptr<u32>(r13 + 0x10) = u32(std::bit_cast<u32>(S4));  // (from the original)
    *gptr<u32>(r13 + 0x14) = u32(std::bit_cast<u32>(S5));  // (from the original)
    *gptr<u32>(r13 + 0x18) = u32(std::bit_cast<u32>(S6));  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2;
    guest::cpu()->s[3] = S3;
    guest::cpu()->s[4] = S4;
    guest::cpu()->s[5] = S5;
    guest::cpu()->s[6] = S6;
    r0 = call_002fb328(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    S2 = guest::cpu()->s[2];
    S3 = guest::cpu()->s[3];
    S4 = guest::cpu()->s[4];
    S5 = guest::cpu()->s[5];
    S6 = guest::cpu()->s[6];
    r4 = r0 + 0x62250u;  // (from the original)
    r0 = r4;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2;
    guest::cpu()->s[3] = S3;
    guest::cpu()->s[4] = S4;
    guest::cpu()->s[5] = S5;
    guest::cpu()->s[6] = S6;
    r0 = call_007111b4(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    if (r0 == 0) {
        r0 = *gptr<u32>(r13 + (u32(*gptr<u8>(r4 + 0x14u)) << 2));  // (from the original)
        r13 = r13 + 0x28u;  // (from the original)
        guest::cpu()->r[13] = r13;
        guest::cpu()->s[0] = S0;
        guest::cpu()->s[1] = S1;
        return r0;
    }
    r0 = u32(*gptr<u8>(r4 + 0x15u));  // (from the original)
    zf = r0 == 2u;
    cf = r0 >= 2u;
    if (!cf || zf) {
        r0 = *gptr<u32>(r13 + 0x14u);  // (from the original)
    }
    if (cf && !zf) {
        r0 = *gptr<u32>(r13 + 0x18u);  // (from the original)
    }
    r13 = r13 + 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    return r0;
}

}  // namespace d_006dcd50
GUEST_EXPORT(0x006dcd50, d_006dcd50::f_006dcd50);

// f_006dd0c8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006dd0c8 {


u32 f_006dd0c8(u32 r0) {
    goto L_6dd0c8;
L_6dd0c8:;
    r0 = *gptr<u32>(r0 + 0x6b4cu);  // (from the original)
    if (r0 == 0) {
        return r0;
    }
    return guest::call_address<u32>(*gptr<u32>(0x14fe50u), r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
}

}  // namespace d_006dd0c8
GUEST_EXPORT(0x006dd0c8, d_006dd0c8::f_006dd0c8);

// f_006dd294: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006dd294 {

inline constexpr guest::Function<0x002fb328, u32(u32, u32, u32, u32)> call_002fb328;  // (from the original)
inline constexpr guest::Function<0x0071c358, u32(u32, u32, u32, u32)> call_0071c358;  // (from the original)

u32 f_006dd294() {
    u32 ea = 0;
    u32 r0 = 0;
    u32 r1 = 0;
    u32 r2 = 0;
    u32 r3 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r12 = 0;
    u32 r13 = guest::cpu()->r[13];
    u32 zf = 0;
    r4 = 0x854660u;  // (from the original)
    r13 = r13 - 0x20u;  // (from the original)
    r0 = r4 + 0x50u;  // (from the original)
    r4 = *gptr<u32>(r4 + 0x64u);  // (from the original)
    ea = r0;
    r0 = *gptr<u32>(ea);
    r1 = *gptr<u32>(ea + 4);
    r2 = *gptr<u32>(ea + 8);
    r3 = *gptr<u32>(ea + 0xc);  // (from the original)
    r12 = *gptr<u32>(ea + 0x10);  // (from the original)
    *gptr<u32>(r13 + 0x14u) = u32(r4);  // (from the original)
    *gptr<u32>(r13) = u32(r0);
    *gptr<u32>(r13 + 4) = u32(r1);
    *gptr<u32>(r13 + 8) = u32(r2);
    *gptr<u32>(r13 + 0xc) = u32(r3);  // (from the original)
    *gptr<u32>(r13 + 0x10) = u32(r12);  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002fb328(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r4 = r0 + 0x666e4u;  // (from the original)
    r0 = r4;
    guest::cpu()->r[13] = r13;
    r0 = call_0071c358(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    zf = r0 == 0;
    r0 = u32(*gptr<u8>(r4 + 0x10u));  // (from the original)
    if (zf) {
        r0 = *gptr<u32>(r13 + (r0 << 2));
        r13 = r13 + 0x20u;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    if (r0 == 1u) {
        r0 = *gptr<u32>(r13 + 4u);
    } else {
        r0 = *gptr<u32>(r13 + 0x14u);  // (from the original)
    }
    r13 = r13 + 0x20u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_006dd294
GUEST_EXPORT(0x006dd294, d_006dd294::f_006dd294);

// f_006dd2f8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006dd2f8 {

inline constexpr guest::Function<0x002fb328, u32(u32, u32, u32, u32)> call_002fb328;  // (from the original)

u32 f_006dd2f8() {
    u32 r0 = 0;
    u32 r1 = 0;
    u32 r2 = 0;
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 0x10u;  // (from the original)
    r0 = *gptr<u32>(0x8546a4u);  // (from the original)
    r1 = *gptr<u32>(0x8546a4u + 4);  // (from the original)
    r2 = *gptr<u32>(0x8546a4u + 8);  // (from the original)
    *gptr<u32>(r13) = u32(r0);
    *gptr<u32>(r13 + 4) = u32(r1);
    *gptr<u32>(r13 + 8) = u32(r2);
    guest::cpu()->r[13] = r13;
    r0 = call_002fb328(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r0 = *gptr<u32>(r13 + (u32(*gptr<u8>(r0 + 0x6682cu)) << 2));  // (from the original)
    r13 = r13 + 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_006dd2f8
GUEST_EXPORT(0x006dd2f8, d_006dd2f8::f_006dd2f8);

// f_006dd334: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006dd334 {

inline constexpr guest::Function<0x00779548, u32(u32, u32, u32, u32)> call_00779548;  // (from the original)

u32 f_006dd334() {
    u32 r0 = 0;
    r0 = 0x997c70u;  // (from the original)
    return call_00779548(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_006dd334
GUEST_EXPORT(0x006dd334, d_006dd334::f_006dd334);

// f_006dd7b4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006dd7b4 {

inline constexpr guest::Function<0x002fb328, u32(u32, u32, u32, u32)> call_002fb328;  // (from the original)

u32 f_006dd7b4() {
    u32 r0 = 0;
    u32 r1 = 0;
    u32 r2 = 0;
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 0x10u;  // (from the original)
    r0 = *gptr<u32>(0x8546c8u);  // (from the original)
    r1 = *gptr<u32>(0x8546c8u + 4);  // (from the original)
    r2 = *gptr<u32>(0x8546c8u + 8);  // (from the original)
    *gptr<u32>(r13) = u32(r0);
    *gptr<u32>(r13 + 4) = u32(r1);
    *gptr<u32>(r13 + 8) = u32(r2);
    guest::cpu()->r[13] = r13;
    r0 = call_002fb328(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r0 = *gptr<u32>(r13 + (u32(*gptr<u8>(r0 + 0x6adb4u)) << 2));  // (from the original)
    r13 = r13 + 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_006dd7b4
GUEST_EXPORT(0x006dd7b4, d_006dd7b4::f_006dd7b4);

// f_006dd7e8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006dd7e8 {

inline constexpr guest::Function<0x006cc934, u32(u32, u32, u32, u32)> call_006cc934;  // (from the original)

u32 f_006dd7e8(u32 r0, u32 r1) {
    u32 r4 = guest::cpu()->r[4];
    guest::cpu()->r[13] -= 8u;
    if (r1 >= 3u) {
        r0 = 0u;
        guest::cpu()->r[13] += 8u;
        return r0;
    }
    r4 = r0 + (r1 << 4);
    r0 = u32(*gptr<u8>(0x6b60u + r4));  // (from the original)
    r0 = call_006cc934(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 != 0) {
        r0 = r4 + 0x6b64u;  // (from the original)
        guest::cpu()->r[13] += 8u;
        return r0;
    }
    r0 = 0u;
    guest::cpu()->r[13] += 8u;
    return r0;
}

}  // namespace d_006dd7e8
GUEST_EXPORT(0x006dd7e8, d_006dd7e8::f_006dd7e8);

// f_006de398: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006de398 {

inline constexpr guest::Function<0x0014fe74, u32(u32, u32, u32, u32)> call_0014fe74;  // (from the original)
inline constexpr guest::Function<0x003171b4, u32(u32, u32, u32, u32)> call_003171b4;  // (from the original)

u32 f_006de398(u32 r0, u32 r1, float S0, float S1) {
    u32 res = 0;
    u32 v = 0;
    u32 r2 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r9 = guest::cpu()->r[9];
    u32 r10 = guest::cpu()->r[10];
    u32 r13 = guest::cpu()->r[13];
    u32 nf = 0;
    u32 vf = 0;
    r13 = r13 - 0x30u;  // (from the original)
    r5 = 0u;
    r10 = r0;
    r8 = r1;
    r2 = r1;
    r1 = r13 + 0xcu;  // (from the original)
    r0 = r13 + 8u;
    *gptr<u32>(r13 + 8u) = u32(r5);
    *gptr<u32>(r13 + 0xcu) = u32(r5);  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    r0 = call_003171b4(r0, r1, r2, guest::cpu()->r[3]);
    r2 = guest::cpu()->r[2];
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    r0 = r10 + 0x6758u;  // (from the original)
    *gptr<u32>(r13) = u32(r5);
    *gptr<u32>(r13 + 4u) = u32(r5);
    r1 = *gptr<u32>(r0);
    r4 = 0x2710u;  // (from the original)
    r5 = *gptr<u32>(r0 + 8u);
    r6 = 0u;
    r7 = r5 + (r1 << 2);
    if (r5 == r7) {
        goto L_6de44c;
    }
    do {
L_6de3f0:;
        r0 = *gptr<u32>(r5);
        guest::cpu()->r[13] = r13;
        guest::cpu()->s[0] = S0;
        guest::cpu()->s[1] = S1;
        r0 = call_0014fe74(r0, r1, r2, guest::cpu()->r[3]);
        S0 = guest::cpu()->s[0];
        S1 = guest::cpu()->s[1];
        r2 = r0;
        r1 = r13 + 4u;
        r0 = r13;
        guest::cpu()->r[13] = r13;
        guest::cpu()->s[0] = S0;
        guest::cpu()->s[1] = S1;
        r0 = call_003171b4(r0, r1, r2, guest::cpu()->r[3]);
        S0 = guest::cpu()->s[0];
        S1 = guest::cpu()->s[1];
        r2 = *gptr<u32>(r13 + 0xcu);  // (from the original)
        r0 = *gptr<u32>(r13 + 8u) - *gptr<u32>(r13);
        res = r0;
        if (res >> 0x1f != (r0 & (r0 ^ res)) >> 0x1f) {  // (from the original)
            r0 = 0u - r0;
        }
        r1 = r2 - *gptr<u32>(r13 + 4u);
        res = r1;
        if (res >> 0x1f != (r1 & (r1 ^ res)) >> 0x1f) {  // (from the original)
            r1 = 0u - r1;
        }
        r0 = r0 + r1;
        if (s32(r0) < s32(r4)) {
            r6 = *gptr<u32>(r5);
            r4 = r0;
        }
        r5 = r5 + 4u;
        guest::preempt();
    } while (r5 != r7);
L_6de44c:;
    r0 = r10 + 0x6774u;  // (from the original)
    r1 = *gptr<u32>(r0);
    r5 = *gptr<u32>(r0 + 8u);
    r7 = r5 + (r1 << 2);
    if (r5 == r7) {
        goto L_6de4c4;
    }
    do {
L_6de468:;
        r0 = *gptr<u32>(r5);
        guest::cpu()->r[13] = r13;
        guest::cpu()->s[0] = S0;
        guest::cpu()->s[1] = S1;
        r0 = call_0014fe74(r0, r1, r2, guest::cpu()->r[3]);
        S0 = guest::cpu()->s[0];
        S1 = guest::cpu()->s[1];
        r2 = r0;
        r1 = r13 + 4u;
        r0 = r13;
        guest::cpu()->r[13] = r13;
        guest::cpu()->s[0] = S0;
        guest::cpu()->s[1] = S1;
        r0 = call_003171b4(r0, r1, r2, guest::cpu()->r[3]);
        S0 = guest::cpu()->s[0];
        S1 = guest::cpu()->s[1];
        r2 = *gptr<u32>(r13 + 4u);
        r0 = *gptr<u32>(r13 + 8u) - *gptr<u32>(r13);
        res = r0;
        if (res >> 0x1f != (r0 & (r0 ^ res)) >> 0x1f) {  // (from the original)
            r0 = 0u - r0;
        }
        r1 = *gptr<u32>(r13 + 0xcu) - r2;  // (from the original)
        res = r1;
        if (res >> 0x1f != (r1 & (r1 ^ res)) >> 0x1f) {  // (from the original)
            r1 = 0u - r1;
        }
        r0 = r0 + r1;
        if (s32(r0) < s32(r4)) {
            r6 = *gptr<u32>(r5);
            r4 = r0;
        }
        r5 = r5 + 4u;
        guest::preempt();
    } while (r5 != r7);
L_6de4c4:;
    r0 = r10 + 0x68c0u;  // (from the original)
    r1 = *gptr<u32>(r0);
    r5 = *gptr<u32>(r0 + 8u);
    r9 = r5 + (r1 << 2);
    if (r5 == r9) {
        goto L_6de55c;
    }
    do {
L_6de4e0:;
        r0 = *gptr<u32>(r5);
        guest::cpu()->r[13] = r13;
        guest::cpu()->s[0] = S0;
        guest::cpu()->s[1] = S1;
        r0 = call_0014fe74(r0, r1, r2, guest::cpu()->r[3]);
        S0 = guest::cpu()->s[0];
        S1 = guest::cpu()->s[1];
        r2 = r0;
        r1 = r13 + 4u;
        r0 = r13;
        guest::cpu()->r[13] = r13;
        guest::cpu()->s[0] = S0;
        guest::cpu()->s[1] = S1;
        r0 = call_003171b4(r0, r1, r2, guest::cpu()->r[3]);
        S0 = guest::cpu()->s[0];
        S1 = guest::cpu()->s[1];
        r2 = *gptr<u32>(r13 + 4u);
        r0 = *gptr<u32>(r13 + 8u) - *gptr<u32>(r13);
        res = r0;
        if (res >> 0x1f != (r0 & (r0 ^ res)) >> 0x1f) {  // (from the original)
            r0 = 0u - r0;
        }
        r1 = *gptr<u32>(r13 + 0xcu) - r2;  // (from the original)
        res = r1;
        if (res >> 0x1f != (r1 & (r1 ^ res)) >> 0x1f) {  // (from the original)
            r1 = 0u - r1;
        }
        r7 = r0 + r1;
        r0 = *gptr<u32>(r5);
        guest::cpu()->r[13] = r13;
        guest::cpu()->s[0] = S0;
        guest::cpu()->s[1] = S1;
        r0 = call_0014fe74(r0, r1, r2, guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        S1 = std::bit_cast<float>(*gptr<u32>(r0 + 4u));
        res = r7 - r4;
        nf = res >> 0x1f;  // (from the original)
        vf = ((r7 ^ r4) & (r7 ^ res)) >> 0x1f;  // (from the original)
        S0 = fabsf(S1 - std::bit_cast<float>(*gptr<u32>(r8 + 4u)));
        if (nf != vf) {
            r0 = std::bit_cast<u32>(S0);
            res = r0 - 0x42000000u;  // (from the original)
            nf = res >> 0x1f;  // (from the original)
            vf = ((r0 ^ 0x42000000u) & (r0 ^ res)) >> 0x1f;  // (from the original)
        }
        if (nf != vf) {
            r6 = *gptr<u32>(r5);
            r4 = r7;
        }
        r5 = r5 + 4u;
        guest::preempt();
    } while (r5 != r9);
L_6de55c:;
    r0 = r10 + 0x67ccu;  // (from the original)
    r1 = *gptr<u32>(r0);
    r5 = *gptr<u32>(r0 + 8u);
    r9 = r5 + (r1 << 2);
    if (r5 == r9) {
        goto L_6de5f4;
    }
    do {
L_6de578:;
        r0 = *gptr<u32>(r5);
        guest::cpu()->r[13] = r13;
        guest::cpu()->s[0] = S0;
        guest::cpu()->s[1] = S1;
        r0 = call_0014fe74(r0, r1, r2, guest::cpu()->r[3]);
        S0 = guest::cpu()->s[0];
        S1 = guest::cpu()->s[1];
        r2 = r0;
        r1 = r13 + 4u;
        r0 = r13;
        guest::cpu()->r[13] = r13;
        guest::cpu()->s[0] = S0;
        guest::cpu()->s[1] = S1;
        r0 = call_003171b4(r0, r1, r2, guest::cpu()->r[3]);
        S0 = guest::cpu()->s[0];
        S1 = guest::cpu()->s[1];
        r2 = *gptr<u32>(r13 + 4u);
        r0 = *gptr<u32>(r13 + 8u) - *gptr<u32>(r13);
        res = r0;
        if (res >> 0x1f != (r0 & (r0 ^ res)) >> 0x1f) {  // (from the original)
            r0 = 0u - r0;
        }
        r1 = *gptr<u32>(r13 + 0xcu) - r2;  // (from the original)
        res = r1;
        if (res >> 0x1f != (r1 & (r1 ^ res)) >> 0x1f) {  // (from the original)
            r1 = 0u - r1;
        }
        r7 = r0 + r1;
        r0 = *gptr<u32>(r5);
        guest::cpu()->r[13] = r13;
        guest::cpu()->s[0] = S0;
        guest::cpu()->s[1] = S1;
        r0 = call_0014fe74(r0, r1, r2, guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        S1 = std::bit_cast<float>(*gptr<u32>(r8 + 4u));
        res = r7 - r4;
        nf = res >> 0x1f;  // (from the original)
        vf = ((r7 ^ r4) & (r7 ^ res)) >> 0x1f;  // (from the original)
        S0 = fabsf(std::bit_cast<float>(*gptr<u32>(r0 + 4u)) - S1);
        if (nf != vf) {
            r0 = std::bit_cast<u32>(S0);
            res = r0 - 0x42000000u;  // (from the original)
            nf = res >> 0x1f;  // (from the original)
            vf = ((r0 ^ 0x42000000u) & (r0 ^ res)) >> 0x1f;  // (from the original)
        }
        if (nf != vf) {
            r6 = *gptr<u32>(r5);
            r4 = r7;
        }
        r5 = r5 + 4u;
        guest::preempt();
    } while (r5 != r9);
L_6de5f4:;
    r0 = r10 + 0x67a8u;  // (from the original)
    r1 = *gptr<u32>(r0);
    r5 = *gptr<u32>(r0 + 8u);
    r7 = r5 + (r1 << 2);
    if (r5 == r7) {
        goto L_6de66c;
    }
    do {
L_6de610:;
        r0 = *gptr<u32>(r5);
        guest::cpu()->r[13] = r13;
        guest::cpu()->s[0] = S0;
        guest::cpu()->s[1] = S1;
        r0 = call_0014fe74(r0, r1, r2, guest::cpu()->r[3]);
        S0 = guest::cpu()->s[0];
        S1 = guest::cpu()->s[1];
        r2 = r0;
        r1 = r13 + 4u;
        r0 = r13;
        guest::cpu()->r[13] = r13;
        guest::cpu()->s[0] = S0;
        guest::cpu()->s[1] = S1;
        r0 = call_003171b4(r0, r1, r2, guest::cpu()->r[3]);
        S0 = guest::cpu()->s[0];
        S1 = guest::cpu()->s[1];
        r2 = *gptr<u32>(r13 + 4u);
        r0 = *gptr<u32>(r13 + 8u) - *gptr<u32>(r13);
        res = r0;
        if (res >> 0x1f != (r0 & (r0 ^ res)) >> 0x1f) {  // (from the original)
            r0 = 0u - r0;
        }
        r1 = *gptr<u32>(r13 + 0xcu) - r2;  // (from the original)
        res = r1;
        if (res >> 0x1f != (r1 & (r1 ^ res)) >> 0x1f) {  // (from the original)
            r1 = 0u - r1;
        }
        r0 = r0 + r1;
        if (s32(r0) < s32(r4)) {
            r6 = *gptr<u32>(r5);
            r4 = r0;
        }
        r5 = r5 + 4u;
        guest::preempt();
    } while (r5 != r7);
L_6de66c:;
    r10 = r10 + 0x6a6cu;  // (from the original)
    v = *gptr<u32>(r10);
    r10 = r10 + 8u;
    r5 = *gptr<u32>(r10);
    r7 = r5 + (v << 2);
    if (r5 == r7) {
        goto L_6de6e4;
    }
    do {
L_6de688:;
        r0 = *gptr<u32>(r5);
        guest::cpu()->r[13] = r13;
        guest::cpu()->s[0] = S0;
        guest::cpu()->s[1] = S1;
        r0 = call_0014fe74(r0, r1, r2, guest::cpu()->r[3]);
        S0 = guest::cpu()->s[0];
        S1 = guest::cpu()->s[1];
        r2 = r0;
        r1 = r13 + 4u;
        r0 = r13;
        guest::cpu()->r[13] = r13;
        guest::cpu()->s[0] = S0;
        guest::cpu()->s[1] = S1;
        r0 = call_003171b4(r0, r1, r2, guest::cpu()->r[3]);
        S0 = guest::cpu()->s[0];
        S1 = guest::cpu()->s[1];
        r2 = *gptr<u32>(r13 + 4u);
        r0 = *gptr<u32>(r13 + 8u) - *gptr<u32>(r13);
        res = r0;
        if (res >> 0x1f != (r0 & (r0 ^ res)) >> 0x1f) {  // (from the original)
            r0 = 0u - r0;
        }
        r1 = *gptr<u32>(r13 + 0xcu) - r2;  // (from the original)
        res = r1;
        if (res >> 0x1f != (r1 & (r1 ^ res)) >> 0x1f) {  // (from the original)
            r1 = 0u - r1;
        }
        r0 = r0 + r1;
        if (s32(r0) < s32(r4)) {
            r6 = *gptr<u32>(r5);
            r4 = r0;
        }
        r5 = r5 + 4u;
        guest::preempt();
    } while (r5 != r7);
L_6de6e4:;
    r0 = r6;
    r13 = r13 + 0x30u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    return r0;
}

}  // namespace d_006de398
GUEST_EXPORT(0x006de398, d_006de398::f_006de398);

// f_006dfe10: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006dfe10 {

inline constexpr guest::Function<0x002f74c8, u32(u32, u32, u32, u32)> call_002f74c8;  // (from the original)
inline constexpr guest::Function<0x00301d0d, u32(u32, u32, u32, u32)> call_00301d0c;  // (from the original)
inline constexpr guest::Function<0x004e24e4, u32(u32, u32, u32, u32)> call_004e24e4;  // (from the original)
inline constexpr guest::Function<0x004e24f4, u32(u32, u32, u32, u32)> call_004e24f4;  // (from the original)
inline constexpr guest::Function<0x005b4340, u32(u32, u32, u32, u32)> call_005b4340;  // (from the original)

u32 f_006dfe10(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 res = 0;
    u32 r13 = guest::cpu()->r[13];
    u32 nf = 0;
    u32 vf = 0;
    r13 = r13 - 0x88u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_004e24e4(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 != 0) {
        r0 = 0u;
        r13 = r13 + 0x88u;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    guest::cpu()->r[13] = r13;
    r0 = call_004e24f4(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 != 0) {
        r0 = 0u;
        r13 = r13 + 0x88u;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    r0 = *gptr<u32>(0x950148u);  // (from the original)
    if (r0 != 0) {
        *gptr<u32>(r13 + 4u) = u32(0u);
        *gptr<u32>(r13) = u32(0x90af48u);  // (from the original)
        r1 = 0x3040fcu;  // (from the original)
        r3 = 0xau;  // (from the original)
        r2 = 0xcu;  // (from the original)
        r0 = r13 + 8u;
        guest::cpu()->r[13] = r13;
        r0 = call_00301d0c(r0, r1, r2, r3);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r1 = 0u;
        *gptr<u32>(r0 + 0x78u) = u32(r1);  // (from the original)
        r0 = *gptr<u32>(r13 + 0x80u);  // (from the original)
        res = r0;
        if (!u32(res == 0) && res >> 0x1f == (r0 & (r0 ^ res)) >> 0x1f) {  // (from the original)
            r0 = 0u;
            r13 = r13 + 0x88u;  // (from the original)
            guest::cpu()->r[1] = r1;
            guest::cpu()->r[13] = r13;
            return r0;
        }
    }
    guest::cpu()->r[13] = r13;
    r0 = call_002f74c8(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0 = call_005b4340(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    res = r0 - 2u;
    nf = res >> 0x1f;  // (from the original)
    vf = ((r0 ^ 2u) & (r0 ^ res)) >> 0x1f;  // (from the original)
    if (res == 0) {
        r0 = 0xcu;  // (from the original)
        goto L_6dfed0;
    }
    if (nf != vf) {
        if (r0 == 0) {
            r0 = 0xau;  // (from the original)
            goto L_6dfed0;
        }
        if (r0 == 1u) {
            r0 = 0xbu;  // (from the original)
            goto L_6dfed0;
        }
        r0 = 1u;
        r13 = r13 + 0x88u;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    if (r0 == 3u) {
        r0 = 0xdu;  // (from the original)
        goto L_6dfed0;
    }
    if (r0 == 0x84u) {  // (from the original)
        r0 = 0xeu;  // (from the original)
    } else {
        r0 = 1u;
        r13 = r13 + 0x88u;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return r0;
    }
L_6dfed0:;
    r1 = 0u;
    res = u32(*gptr<u8>(0x997c70u + r0)) >> 4;  // (from the original)
    r0 = res;
    if (res == 0) {
        r0 = 1u;
        r13 = r13 + 0x88u;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    do {
L_6dfee4:;
        if ((r0 & 1u) != 0) {
            r1 = r1 + 1u;
        }
        res = r0 >> 1;
        r0 = res;
        guest::preempt();
    } while (res != 0);
    if (u32(r1 >= 1u) && !u32(r1 == 1u)) {
        r0 = 0u;
        r13 = r13 + 0x88u;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    r0 = 1u;
    r13 = r13 + 0x88u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_006dfe10
GUEST_EXPORT(0x006dfe10, d_006dfe10::f_006dfe10);
