// Functions decompiled by tools/decomp (docs/decomp.md), each proved equal to the recompiled original (prove-cpp). The
// names are generated (d_<address>::f_<address>, Object_<address>_<argument>, word_<offset>) and still to be chosen.
#include "guest/guest.hpp"
#include "graphics/hemisphere_light.hpp"

#include <bit>

using guest::gptr;

// f_00710614: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00710614 {


u32 f_00710614(u32 r0, u32 r1) {
    r1 = r1 + (r1 << 2);
    r0 = r0 + (r1 << 7);
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_00710614
GUEST_EXPORT(0x00710614, d_00710614::f_00710614);

// f_007108c4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_007108c4 {

inline constexpr guest::Function<0x002fb328, u32(u32, u32, u32, u32)> call_002fb328;  // (from the original)
inline constexpr guest::Function<0x007111b4, u32(u32, u32, u32, u32)> call_007111b4;  // (from the original)

u32 f_007108c4(u32 r0, u32 r1) {
    u32 res = 0;
    guest::cpu()->r[13] -= 8u;
    r0 = call_002fb328(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = 0x6214fu;  // (from the original)
    res = u32(*gptr<u8>(r0 + 0x80u + r1 + 1u)) & 1u;  // (from the original)
    r0 = res;
    if (res == 0) {
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r0 = call_002fb328(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r0 = u32(*gptr<u8>(r0 + 0x62264u));  // (from the original)
    if (r0 != 3u) {
        r0 = 0u;
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r0 = call_002fb328(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r0 = r0 + 0x62250u;  // (from the original)
    r0 = call_007111b4(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 == 0) {
        r0 = 1u;
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r0 = 0u;
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_007108c4
GUEST_EXPORT(0x007108c4, d_007108c4::f_007108c4);

// f_0071109c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0071109c {

inline constexpr guest::Function<0x0056c0e4, u32(u32, u32, u32, u32)> call_0056c0e4;  // (from the original)
inline constexpr guest::Function<0x00710d50, u32(u32, u32, u32, u32)> call_00710d50;  // (from the original)

u32 f_0071109c(u32 r0) {
    u32 r4 = guest::cpu()->r[4];
    guest::cpu()->r[13] -= 8u;
    r4 = r0;
    r0 = call_0056c0e4(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    if (r0 != 0) {
        r0 = 0u;
        guest::cpu()->r[13] += 8u;
        return r0;
    }
    r0 = r4;
    guest::cpu()->r[13] += 8u;
    return call_00710d50(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_0071109c
GUEST_EXPORT(0x0071109c, d_0071109c::f_0071109c);

// f_007110c4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_007110c4 {

struct __attribute__((packed)) Object_007110c4_0 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Object_007110c4_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_007110c4_0, word_4, 0x4);  // (from the original)

inline constexpr guest::Function<0x002fb338, u32(u32, u32, u32, u32)> call_002fb338;  // (from the original)
inline constexpr guest::Function<0x00300650, u32(u32, u32, u32, u32)> call_00300650;  // (from the original)
inline constexpr guest::Function<0x003036dc, u32(u32, u32, u32, u32)> call_003036dc;  // (from the original)

u32 f_007110c4(gptr<Object_007110c4_0> arg0, u32 r1_unused, u32 r2, u32 r3) {
    u32 ea = 0;
    u32 r0 = arg0.addr();
    u32 r1 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r13 = guest::cpu()->r[13];
    r4 = r0;
    r13 = r13 - 0x28u;  // (from the original)
    r1 = arg0->word_4;
    *gptr<u32>(r13) = u32(arg0->word_0);
    *gptr<u32>(r13 + 4) = u32(r1);
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_002fb338(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        r13 = r13 + 0x28u;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    r0 = r13 + 0x14u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00300650(r0, r1, r2, r3);
    ea = r13 + 0x14u;  // (from the original)
    r0 = *gptr<u32>(ea);
    r1 = *gptr<u32>(ea + 4);
    r2 = *gptr<u32>(ea + 8);
    ea = r13 + 8u;
    *gptr<u32>(ea) = u32(r0);
    *gptr<u32>(ea + 4) = u32(r1);
    *gptr<u32>(ea + 8) = u32(r2);
    r3 = 1u;
    r1 = *gptr<u32>(r4 + 4);
    r2 = r3;
    *gptr<u32>(r13) = u32(*gptr<u32>(r4));
    *gptr<u32>(r13 + 4) = u32(r1);
    r1 = r13 + 8u;
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_003036dc(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    if (r0 != 1u) {
        r0 = 0u;
    }
    r13 = r13 + 0x28u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_007110c4
GUEST_EXPORT(0x007110c4, d_007110c4::f_007110c4);

// f_0071112c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0071112c {

struct __attribute__((packed)) Object_0071112c_0 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Object_0071112c_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_0071112c_0, word_4, 0x4);  // (from the original)

inline constexpr guest::Function<0x002fb338, u32(u32, u32, u32, u32)> call_002fb338;  // (from the original)
inline constexpr guest::Function<0x00300650, u32(u32, u32, u32, u32)> call_00300650;  // (from the original)
inline constexpr guest::Function<0x003036dc, u32(u32, u32, u32, u32)> call_003036dc;  // (from the original)

u32 f_0071112c(gptr<Object_0071112c_0> arg0, u32 r1_unused, u32 r2, u32 r3) {
    u32 ea = 0;
    u32 r0 = arg0.addr();
    u32 r1 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r13 = guest::cpu()->r[13];
    r4 = r0;
    r13 = r13 - 0x28u;  // (from the original)
    r1 = arg0->word_4;
    *gptr<u32>(r13) = u32(arg0->word_0);
    *gptr<u32>(r13 + 4) = u32(r1);
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_002fb338(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        r13 = r13 + 0x28u;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    r0 = r13 + 0x14u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00300650(r0, r1, r2, r3);
    ea = r13 + 0x14u;  // (from the original)
    r0 = *gptr<u32>(ea);
    r1 = *gptr<u32>(ea + 4);
    r2 = *gptr<u32>(ea + 8);
    ea = r13 + 8u;
    *gptr<u32>(ea) = u32(r0);
    *gptr<u32>(ea + 4) = u32(r1);
    *gptr<u32>(ea + 8) = u32(r2);
    r3 = 1u;
    r1 = *gptr<u32>(r4 + 4);
    r2 = r3;
    *gptr<u32>(r13) = u32(*gptr<u32>(r4));
    *gptr<u32>(r13 + 4) = u32(r1);
    r1 = r13 + 8u;
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_003036dc(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    if (r0 + 1u == 0) {
        r0 = 1u;
    } else {
        r0 = 0u;
    }
    r13 = r13 + 0x28u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_0071112c
GUEST_EXPORT(0x0071112c, d_0071112c::f_0071112c);

// f_007111b4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_007111b4 {

struct __attribute__((packed)) Object_007111b4_0 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Object_007111b4_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_007111b4_0, word_4, 0x4);  // (from the original)

inline constexpr guest::Function<0x002fb338, u32(u32, u32, u32, u32)> call_002fb338;  // (from the original)
inline constexpr guest::Function<0x00300650, u32(u32, u32, u32, u32)> call_00300650;  // (from the original)
inline constexpr guest::Function<0x003036dc, u32(u32, u32, u32, u32)> call_003036dc;  // (from the original)

u32 f_007111b4(gptr<Object_007111b4_0> arg0, u32 r1_unused, u32 r2, u32 r3) {
    u32 ea = 0;
    u32 r0 = arg0.addr();
    u32 r1 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r13 = guest::cpu()->r[13];
    r4 = r0;
    r13 = r13 - 0x28u;  // (from the original)
    r1 = arg0->word_4;
    *gptr<u32>(r13) = u32(arg0->word_0);
    *gptr<u32>(r13 + 4) = u32(r1);
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_002fb338(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        r13 = r13 + 0x28u;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    r0 = r13 + 0x14u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00300650(r0, r1, r2, r3);
    ea = r13 + 0x14u;  // (from the original)
    r0 = *gptr<u32>(ea);
    r1 = *gptr<u32>(ea + 4);
    r2 = *gptr<u32>(ea + 8);
    ea = r13 + 8u;
    *gptr<u32>(ea) = u32(r0);
    *gptr<u32>(ea + 4) = u32(r1);
    *gptr<u32>(ea + 8) = u32(r2);
    r3 = 1u;
    r1 = *gptr<u32>(r4 + 4);
    r2 = r3;
    *gptr<u32>(r13) = u32(*gptr<u32>(r4));
    *gptr<u32>(r13 + 4) = u32(r1);
    r1 = r13 + 8u;
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_003036dc(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    if (r0 == 0) {
        r0 = 1u;
    } else {
        r0 = 0u;
    }
    r13 = r13 + 0x28u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_007111b4
GUEST_EXPORT(0x007111b4, d_007111b4::f_007111b4);

// f_007112c8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_007112c8 {

inline constexpr guest::Function<0x002fb338, u32(u32, u32, u32, u32)> call_002fb338;  // (from the original)
inline constexpr guest::Function<0x0031703c, u32(u32, u32, u32, u32)> call_0031703c;  // (from the original)
inline constexpr guest::Function<0x0056c0e4, u32(u32, u32, u32, u32)> call_0056c0e4;  // (from the original)
inline constexpr guest::Function<0x00710d50, u32(u32, u32, u32, u32)> call_00710d50;  // (from the original)
inline constexpr guest::Function<0x007111b4, u32(u32, u32, u32, u32)> call_007111b4;  // (from the original)
inline constexpr guest::Function<0x007596ac, u32(u32, u32, u32, u32)> call_007596ac;  // (from the original)

u32 f_007112c8(u32 r0, u32 r1) {
    u32 res = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r4 = r0;
    r0 = call_007111b4(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 != 0) {
        goto L_71135c;
    }
    r5 = r4;
    r0 = call_0056c0e4(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 != 0) {
        goto L_71135c;
    }
    r0 = r5;
    r0 = call_00710d50(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 == 0) {
        goto L_71135c;
    }
    r0 = *gptr<u32>(0xaaf14cu);  // (from the original)
    if (r0 != 0) {
        res = u32(*gptr<u8>(r0 + 0x5701u)) << 0x1e;  // (from the original)
        if (!(res >> 0x1f)) {  // (from the original)
            goto L_71135c;
        }
    }
    r0 = r4 + 8u;
    r0 = call_002fb338(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 == 0) {
        goto L_71135c;
    }
    r1 = 1u;
    r0 = r4 + 8u;
    r0 = call_007596ac(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 == 0) {
        goto L_71135c;
    }
    r0 = r4 + 8u;
    r0 = call_0031703c(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 == 1u) {
        goto L_711360;
    }
L_71135c:;
    r0 = 0u;
L_711360:;
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_007112c8
GUEST_EXPORT(0x007112c8, d_007112c8::f_007112c8);

// f_00711858: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00711858 {

inline constexpr guest::Function<0x0056c0e4, u32(u32, u32, u32, u32)> call_0056c0e4;  // (from the original)
inline constexpr guest::Function<0x00710d50, u32(u32, u32, u32, u32)> call_00710d50;  // (from the original)
inline constexpr guest::Function<0x007111b4, u32(u32, u32, u32, u32)> call_007111b4;  // (from the original)

u32 f_00711858(u32 r0) {
    u32 r4 = guest::cpu()->r[4];
    guest::cpu()->r[13] -= 8u;
    r4 = r0;
    r0 = call_007111b4(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    if (r0 != 0) {
        r0 = 0u;
        guest::cpu()->r[13] += 8u;
        return r0;
    }
    r0 = call_0056c0e4(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    if (r0 != 0) {
        r0 = 0u;
        guest::cpu()->r[13] += 8u;
        return r0;
    }
    r0 = r4;
    r0 = call_00710d50(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    if (r0 == 0) {
        r0 = 0u;
        guest::cpu()->r[13] += 8u;
        return r0;
    }
    r0 = *gptr<u32>(0xaaf14cu);  // (from the original)
    if (r0 == 0) {
        r0 = 1u;
        guest::cpu()->r[13] += 8u;
        return r0;
    }
    if (u32(*gptr<u8>(r0 + 0x5701u)) & 2u) {  // (from the original)
        r0 = 1u;
        guest::cpu()->r[13] += 8u;
        return r0;
    }
    r0 = 0u;
    guest::cpu()->r[13] += 8u;
    return r0;
}

}  // namespace d_00711858
GUEST_EXPORT(0x00711858, d_00711858::f_00711858);

// f_00711bdc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00711bdc {

inline constexpr guest::Function<0x006c5c60, u32(u32, u32, u32, u32)> call_006c5c60;  // (from the original)

u32 f_00711bdc(u32 r0) {
    u32 r1 = 0;
    r1 = 0u;
    r0 = r0 + 0x6cu;  // (from the original)
    return call_006c5c60(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_00711bdc
GUEST_EXPORT(0x00711bdc, d_00711bdc::f_00711bdc);

// f_00711d9c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00711d9c {


u32 f_00711d9c(u32 r0_unused, u32 r1) {
    u32 r0 = 0;
    r0 = 0x986a10u;  // (from the original)
    if (r1 < 5u) {
        r0 = r0 + (r1 << 4);
    }
    return r0;
}

}  // namespace d_00711d9c
GUEST_EXPORT(0x00711d9c, d_00711d9c::f_00711d9c);

// f_0071262c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0071262c {

inline constexpr guest::Function<0x00305f44, u32(u32, u32, u32, u32)> call_00305f44;  // (from the original)
inline constexpr guest::Function<0x0061a7a0, u32(u32, u32, u32, u32)> call_0061a7a0;  // (from the original)

u32 f_0071262c(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = guest::cpu()->r[4];
    u32 zf = 0;
    guest::cpu()->r[13] -= 8u;
    r4 = r0;
    r0 = call_00305f44(r0, r1, r2, r3);
    r1 = r0;
    r0 = u32(*gptr<u8>(r4 + 5u));
    zf = 1u == r0 >> 6;
    if (!zf) {
        zf = 3u == r0 >> 6;
    }
    r2 = r0 & 7u;
    if (zf) {
        r0 = 0u;
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r3 = 2u;
    zf = r3 == r0 >> 6;
    if (!zf) {
        zf = r2 == r1;
    }
    if (zf) {
        r0 = 1u;
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    if (r2 == 4u) {
        guest::cpu()->r[13] += 8u;
        return call_0061a7a0(r0, r1, r2, r3);
    }
    r0 = 0u;
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_0071262c
GUEST_EXPORT(0x0071262c, d_0071262c::f_0071262c);

// f_0071268c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0071268c {

struct __attribute__((packed)) Object_0071268c_0 {
    u8 unknown_0[0xc];  // (not used here)
    u32 word_c;
    u32 word_10;
};
GUEST_OFFSET(Object_0071268c_0, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Object_0071268c_0, word_10, 0x10);  // (from the original)


u32 f_0071268c(gptr<Object_0071268c_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r1 = 0;
    u32 r2 = 0;
    u32 r3 = 0;
    r1 = 0x887774u;  // (from the original)
    r3 = arg0->word_c;
    r2 = *gptr<u32>(r1 + 0x10u);  // (from the original)
    r1 = *gptr<u32>(r1 + 0x14u);  // (from the original)
    if (r3 != r2) {
        r0 = 0u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    if (r3 == 0) {
        if (((arg0->word_10 | r1) & 1u) == 0) {
            r0 = 1u;
            guest::cpu()->r[1] = r1;
            return r0;
        }
    }
    if (*gptr<u32>(r0 + 0x10u) != r1) {  // (from the original)
        r0 = 0u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r0 = 1u;
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_0071268c
GUEST_EXPORT(0x0071268c, d_0071268c::f_0071268c);

// f_007126dc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_007126dc {

struct __attribute__((packed)) Object_007126dc_0 {
    u8 unknown_0[0xc];  // (not used here)
    u32 word_c;
    u32 word_10;
};
GUEST_OFFSET(Object_007126dc_0, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Object_007126dc_0, word_10, 0x10);  // (from the original)


u32 f_007126dc(gptr<Object_007126dc_0> arg0) {
    u32 ea = 0;
    u32 r0 = arg0.addr();
    u32 r1 = 0;
    u32 r3 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r12 = 0;
    u32 r13 = guest::cpu()->r[13];
    r12 = 0x887774u;  // (from the original)
    r13 = r13 - 4u;
    r3 = arg0->word_c;
    r1 = *gptr<u32>(r12 + 0x34u);  // (from the original)
    if (r3 != *gptr<u32>(r12 + 0x30u)) {  // (from the original)
        goto L_712724;
    }
    if (r3 == 0) {
        if (((arg0->word_10 | r1) & 1u) == 0) {
            goto L_71271c;
        }
    }
    if (*gptr<u32>(r0 + 0x10u) != r1) {  // (from the original)
        goto L_712724;
    }
L_71271c:;
    r4 = 1u;
    goto L_712728;
L_712724:;
    r4 = 0u;
L_712728:;
    ea = r12 + 0x20u;  // (from the original)
    r1 = *gptr<u32>(ea + 4u);
    if (r3 != *gptr<u32>(ea)) {
        goto L_712764;
    }
    if (r3 == 0) {
        if (((*gptr<u32>(r0 + 0x10u) | r1) & 1u) == 0) {  // (from the original)
            goto L_71275c;
        }
    }
    if (*gptr<u32>(r0 + 0x10u) != r1) {  // (from the original)
        goto L_712764;
    }
L_71275c:;
    r0 = 1u;
    r0 = r0 | r4;
    r13 = r13 + 4u;
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
L_712764:;
    r0 = 0u;
    r0 = r0 | r4;
    r13 = r13 + 4u;
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_007126dc
GUEST_EXPORT(0x007126dc, d_007126dc::f_007126dc);

// f_00712788: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00712788 {


u32 f_00712788(u32 r0, u32 r1) {
    if (r1 == 0x400u) {  // (from the original)
        r0 = r0 + 0xa4u;  // (from the original)
    } else {
        r0 = r0 + 0x144u;  // (from the original)
    }
    return r0;
}

}  // namespace d_00712788
GUEST_EXPORT(0x00712788, d_00712788::f_00712788);

// f_00712798: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00712798 {

inline constexpr guest::Function<0x0073682c, u32(u32, u32, u32, u32)> call_0073682c;  // (from the original)
inline constexpr guest::Function<0x0077a650, u32(u32, u32, u32, u32)> call_0077a650;  // (from the original)

u32 f_00712798(u32 r0, float S0, float S1, float S2) {
    guest::cpu()->r[13] -= 8u;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2;
    r0 = call_0073682c(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    S0 = guest::cpu()->s[0];
    S1 = S0;
    S2 = std::bit_cast<float>(*gptr<u32>(0x7127c0u));  // (from the original)
    S0 = std::bit_cast<float>(*gptr<u32>(0x7127c4u)) + S1 * S2;  // (from the original)
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2;
    r0 = call_0077a650(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    S0 = std::bit_cast<float>(vcvt_sz_f(S0));
    r0 = std::bit_cast<u32>(S0);
    guest::cpu()->r[13] += 8u;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    return r0;
}

}  // namespace d_00712798
GUEST_EXPORT(0x00712798, d_00712798::f_00712798);

// f_007127c8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_007127c8 {


u32 f_007127c8(u32 r0, u32 r1) {
    if (r1 == 0x400u) {  // (from the original)
        r0 = r0 + 0x64u;  // (from the original)
    } else {
        r0 = r0 + 0x104u;  // (from the original)
    }
    return r0;
}

}  // namespace d_007127c8
GUEST_EXPORT(0x007127c8, d_007127c8::f_007127c8);

// f_007127d8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_007127d8 {


u32 f_007127d8(u32 r0, u32 r1) {
    if (r1 == 0x400u) {  // (from the original)
        r0 = r0 + 0xd4u;  // (from the original)
    } else {
        r0 = r0 + 0x174u;  // (from the original)
    }
    return r0;
}

}  // namespace d_007127d8
GUEST_EXPORT(0x007127d8, d_007127d8::f_007127d8);

// f_00712800: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00712800 {

inline constexpr guest::Function<0x00718378, u32(u32, u32, u32, u32)> call_00718378;  // (from the original)

u32 f_00712800(u32 r0) {
    guest::cpu()->r[13] -= 8u;
    r0 = call_00718378(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    r0 = r0 ^ 1u;
    guest::cpu()->r[13] += 8u;
    return r0;
}

}  // namespace d_00712800
GUEST_EXPORT(0x00712800, d_00712800::f_00712800);

// f_00712810: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00712810 {


u32 f_00712810(u32 r0, u32 r1) {
    u32 b = 0;
    u32 res = 0;
    u32 sco = 0;
    u32 r2 = 0;
    u32 cf = 0;
    cf = r1 >= 6u;
    if (cf) {
        r0 = 0u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    b = r1 >> 3;
    r2 = r0 + b;
    b = 7u;
    r0 = r1 & b;
    r1 = u32(*gptr<u8>(r2 + 0x28u));  // (from the original)
    b = 1u;
    sco = cf;
    b = lsl_rc(b, r0 & 0xff, &sco);  // (from the original)
    res = r1 & b;
    r0 = res;
    if (res != 0) {
        r0 = 1u;
    }
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_00712810
GUEST_EXPORT(0x00712810, d_00712810::f_00712810);

// f_0071287c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0071287c {


u32 f_0071287c(u32 r0) {
    u32 r1 = 0;
    r1 = r0 + 0x5460u;  // (from the original)
    if (r0 >= r1) {
        r0 = 0u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    do {
L_71288c:;
        if (!(u32(*gptr<u8>(r0 + 0x86cu)) == 0)) {  // (from the original)
            r0 = 1u;
            guest::cpu()->r[1] = r1;
            return r0;
        }
        r0 = r0 + 0x870u;  // (from the original)
        guest::preempt();
    } while (r0 < r1);
    r0 = 0u;
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_0071287c
GUEST_EXPORT(0x0071287c, d_0071287c::f_0071287c);

// f_00712c88: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00712c88 {

inline constexpr guest::Function<0x002f825c, u32(u32, u32, u32, u32)> call_002f825c;  // (from the original)
inline constexpr guest::Function<0x003083bc, u32(u32, u32, u32, u32)> call_003083bc;  // (from the original)
inline constexpr guest::Function<0x0056d488, u32(u32, u32, u32, u32)> call_0056d488;  // (from the original)
inline constexpr guest::Function<0x005f4bfc, u32(u32, u32, u32, u32)> call_005f4bfc;  // (from the original)
inline constexpr guest::Function<0x0075b8b0, u32(u32, u32, u32, u32)> call_0075b8b0;  // (from the original)

u32 f_00712c88(u32 r0, u32 r1) {
    u32 ea = 0;
    u32 res = 0;
    u32 r2 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r9 = guest::cpu()->r[9];
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 0x78u;  // (from the original)
    r7 = r0;
    r6 = r1;
    r0 = r13;
    r9 = 0u;
    r2 = 9u;
    r1 = r13 + 0x18u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_003083bc(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r5 = 0x90a3e8u;  // (from the original)
    *gptr<u32>(r0) = u32(r5);
    r0 = r0 + 0xcu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_005f4bfc(r0, r1, r2, guest::cpu()->r[3]);
    r2 = guest::cpu()->r[2];
    r4 = r0 - 0xcu;  // (from the original)
    r1 = 0x12u;  // (from the original)
    r0 = r0 + 0xcu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002f825c(r0, r1, r2, guest::cpu()->r[3]);
    r8 = 0x8906ecu;  // (from the original)
    r0 = r4 + 0x18u;  // (from the original)
    *gptr<u16>(r4 + 0x18u) = u16(u32(*gptr<u16>(r8)));  // (from the original)
    r1 = 4u;
    do {
L_712cdc:;
        ea = r8;
        r2 = u32(*gptr<u16>(ea));
        res = r1 - 1u;
        r1 = res;
        ea = r0 + 2u;
        *gptr<u16>(ea) = u16(r2);
        ea = r8;
        r2 = u32(*gptr<u16>(ea));
        ea = r0 + 4u;
        *gptr<u16>(ea) = u16(r2);
        r0 = ea;
        guest::preempt();
    } while (res != 0);
    r0 = r4;
    r2 = r9;
    r1 = r7;
    guest::cpu()->r[13] = r13;
    r0 = call_0056d488(r0, r1, r2, guest::cpu()->r[3]);
    r0 = r13 + 0x2cu;  // (from the original)
    r7 = 0u;
    r2 = 9u;
    r1 = r13 + 0x44u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_003083bc(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    *gptr<u32>(r0) = u32(r5);
    r0 = r0 + 0xcu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_005f4bfc(r0, r1, r2, guest::cpu()->r[3]);
    r2 = guest::cpu()->r[2];
    r4 = r0 - 0xcu;  // (from the original)
    r1 = 0x12u;  // (from the original)
    r0 = r0 + 0xcu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002f825c(r0, r1, r2, guest::cpu()->r[3]);
    r0 = r4 + 0x18u;  // (from the original)
    *gptr<u16>(r4 + 0x18u) = u16(u32(*gptr<u16>(r8)));  // (from the original)
    r1 = 4u;
    do {
L_712d44:;
        ea = r8;
        r2 = u32(*gptr<u16>(ea));
        res = r1 - 1u;
        r1 = res;
        ea = r0 + 2u;
        *gptr<u16>(ea) = u16(r2);
        ea = r8;
        r2 = u32(*gptr<u16>(ea));
        ea = r0 + 4u;
        *gptr<u16>(ea) = u16(r2);
        r0 = ea;
        guest::preempt();
    } while (res != 0);
    r0 = r4;
    r2 = r7;
    r1 = r6;
    guest::cpu()->r[13] = r13;
    r0 = call_0056d488(r0, r1, r2, guest::cpu()->r[3]);
    r2 = guest::cpu()->r[2];
    r0 = r13;
    r1 = r13 + 0x2cu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0075b8b0(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    *gptr<u32>(r13 + 0x2cu) = u32(r5);  // (from the original)
    *gptr<u32>(r13) = u32(r5);
    r13 = r13 + 0x78u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_00712c88
GUEST_EXPORT(0x00712c88, d_00712c88::f_00712c88);

// f_007132e4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_007132e4 {

inline constexpr guest::Function<0x002fb328, u32(u32, u32, u32, u32)> call_002fb328;  // (from the original)
inline constexpr guest::Function<0x002fb378, u32(u32, u32, u32, u32)> call_002fb378;  // (from the original)
inline constexpr guest::Function<0x0056c0e4, u32(u32, u32, u32, u32)> call_0056c0e4;  // (from the original)
inline constexpr guest::Function<0x00758de4, u32(u32, u32, u32, u32)> call_00758de4;  // (from the original)
inline constexpr guest::Function<0x00758e08, u32(u32, u32, u32, u32)> call_00758e08;  // (from the original)

u32 f_007132e4(u32 r0) {
    u32 r4 = guest::cpu()->r[4];
    u32 zf = 0;
    guest::cpu()->r[13] -= 8u;
    r0 = call_0056c0e4(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    if (r0 != 0) {
        r0 = 0u;
        guest::cpu()->r[13] += 8u;
        return r0;
    }
    r0 = call_002fb378(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    r4 = *gptr<u32>(r0 + 4u);
    r0 = call_002fb328(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    r0 = r0 + 0x62250u;  // (from the original)
    r0 = call_00758de4(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    if (r0 != 0) {
        if (u32(s32(r4) >> 0x18) - 7u < 0xeu) {  // (from the original)
            r0 = 1u;
            guest::cpu()->r[13] += 8u;
            return r0;
        }
        r0 = 0u;
        guest::cpu()->r[13] += 8u;
        return r0;
    }
    r0 = call_002fb328(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    r0 = r0 + 0x62250u;  // (from the original)
    r0 = call_00758e08(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    zf = r0 == 0;
    r0 = u32(s32(r4) >> 0x18) - 0xau;  // (from the original)
    if (!zf) {
        if (r0 < 0xeu) {  // (from the original)
            r0 = 1u;
            guest::cpu()->r[13] += 8u;
            return r0;
        }
        r0 = 0u;
        guest::cpu()->r[13] += 8u;
        return r0;
    }
    if (r0 < 0xbu) {  // (from the original)
        r0 = 1u;
        guest::cpu()->r[13] += 8u;
        return r0;
    }
    r0 = 0u;
    guest::cpu()->r[13] += 8u;
    return r0;
}

}  // namespace d_007132e4
GUEST_EXPORT(0x007132e4, d_007132e4::f_007132e4);

// f_0071348c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0071348c {

inline constexpr guest::Function<0x00718c0c, u32(u32, u32, u32, u32)> call_00718c0c;  // (from the original)
inline constexpr guest::Function<0x0071ecc4, u32(u32, u32, u32, u32)> call_0071ecc4;  // (from the original)
inline constexpr guest::Function<0x0071ecf0, u32(u32, u32, u32, u32)> call_0071ecf0;  // (from the original)
inline constexpr guest::Function<0x00724400, u32(u32, u32, u32, u32)> call_00724400;  // (from the original)

u32 f_0071348c(u32 r0, u32 r1) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r4 = r0;
    r5 = r1;
    r0 = r0 + 0x4cu;  // (from the original)
    r0 = call_0071ecc4(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = r5;
    if (r0 != 0) {
        r0 = r4 + 0x4cu;  // (from the original)
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        return call_0071ecf0(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    }
    r0 = r4 + 0x3cf4u;  // (from the original)
    r4 = r0;
    r0 = call_00718c0c(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 == 0) {
        r0 = 0x95bfdcu;  // (from the original)
        goto L_7134e4;
    }
    r1 = r5;
    r0 = r4;
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    return call_00724400(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
L_7134e4:;
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_0071348c
GUEST_EXPORT(0x0071348c, d_0071348c::f_0071348c);

// f_00713bf0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00713bf0 {

struct __attribute__((packed)) Object_00713bf0_0 {
    u8 unknown_0[0x2c];  // (not used here)
    u32 word_2c;
    u8 unknown_30[0x24];  // (not used here)
    u8 byte_54;
};
GUEST_OFFSET(Object_00713bf0_0, word_2c, 0x2c);  // (from the original)
GUEST_OFFSET(Object_00713bf0_0, byte_54, 0x54);  // (from the original)


u32 f_00713bf0(gptr<Object_00713bf0_0> arg0) {
    u32 ea = 0;
    u32 r0 = arg0.addr();
    u32 r1 = 0;
    u32 r2 = 0;
    r1 = u32(arg0->byte_54);
    r2 = arg0->word_2c;
    if (s32(r1 + 1u) >= s32(r2)) {
        r0 = 0xffu;  // (from the original)
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r1 = r1 + 1u;
    if (!u32(r2 >= r1) || u32(r2 == r1)) {
        r0 = *gptr<u32>(r0 + 0x20u);  // (from the original)
        r0 = u32(*gptr<u8>(r0));
        guest::cpu()->r[1] = r1;
        return r0;
    }
    ea = r0 + 0x24u;  // (from the original)
    r2 = *gptr<u32>(ea);
    r1 = r1 + *gptr<u32>(ea + 4);
    if (s32(r2) <= s32(r1)) {
        r1 = r1 - r2;
    }
    r0 = *gptr<u32>(r0 + 0x20u) + r1;  // (from the original)
    r0 = u32(*gptr<u8>(r0));
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_00713bf0
GUEST_EXPORT(0x00713bf0, d_00713bf0::f_00713bf0);

// f_00713d94: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00713d94 {

inline constexpr guest::Function<0x0070eb60, u32(u32, u32, u32, u32)> call_0070eb60;  // (from the original)
inline constexpr guest::Function<0x0070eb8c, u32(u32, u32, u32, u32)> call_0070eb8c;  // (from the original)
inline constexpr guest::Function<0x0070ebb8, u32(u32, u32, u32, u32)> call_0070ebb8;  // (from the original)

u32 f_00713d94(u32 r0_unused, u32 r1, u32 r2) {
    u32 r0 = 0;
    u32 r3 = 0;
    u32 zf = 0;
    if (r1 == 0) {
        r0 = 0u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    zf = r1 == 4u;
    if (!zf) {
        zf = r1 == 5u;
    }
    if (zf) {
        r0 = 0x20u;  // (from the original)
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r3 = 0u;
    if (r2 != 0xffu) {  // (from the original)
        r3 = r2 & 0x7fu;  // (from the original)
    }
    r0 = *gptr<u32>(0x94d004u);  // (from the original)
    if (r1 == 1u) {
        r1 = r3;
        return call_0070eb8c(r0, r1, r2, r3);
    }
    if (r1 == 2u) {
        r1 = r3;
        return call_0070eb60(r0, r1, r2, r3);
    }
    if (r1 == 3u) {
        r1 = r3;
        return call_0070ebb8(r0, r1, r2, r3);
    }
    r0 = 0u;
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_00713d94
GUEST_EXPORT(0x00713d94, d_00713d94::f_00713d94);

// f_00714934: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00714934 {

struct __attribute__((packed)) Object_00714934_0 {
    u8 unknown_0[0x11];  // (not used here)
    u8 byte_11;
};
GUEST_OFFSET(Object_00714934_0, byte_11, 0x11);  // (from the original)

inline constexpr guest::Function<0x002fe7cc, u32(u32, u32, u32, u32)> call_002fe7cc;  // (from the original)
inline constexpr guest::Function<0x0052ed04, u32(u32, u32, u32, u32)> call_0052ed04;  // (from the original)
inline constexpr guest::Function<0x0052edfc, u32(u32, u32, u32, u32)> call_0052edfc;  // (from the original)
inline constexpr guest::Function<0x0052f144, u32(u32, u32, u32, u32)> call_0052f144;  // (from the original)
inline constexpr guest::Function<0x005cdfe8, u32(u32, u32, u32, u32)> call_005cdfe8;  // (from the original)
inline constexpr guest::Function<0x005ce13c, u32(u32, u32, u32, u32)> call_005ce13c;  // (from the original)
inline constexpr guest::Function<0x0060d20c, u32(u32, u32, u32, u32)> call_0060d20c;  // (from the original)
inline constexpr guest::Function<0x00748164, u32(u32, u32, u32, u32)> call_00748164;  // (from the original)
inline constexpr guest::Function<0x007481ec, u32(u32, u32, u32, u32)> call_007481ec;  // (from the original)
inline constexpr guest::Function<0x0074824c, u32(u32, u32, u32, u32)> call_0074824c;  // (from the original)
inline constexpr guest::Function<0x00748284, u32(u32, u32, u32, u32)> call_00748284;  // (from the original)
inline constexpr guest::Function<0x0075291c, u32(u32, u32, u32, u32)> call_0075291c;  // (from the original)
inline constexpr guest::Function<0x0075d608, u32(u32, u32, u32, u32)> call_0075d608;  // (from the original)

u32 f_00714934(gptr<Object_00714934_0> arg0, u32 r1_unused, u32 r2, u32 r3) {
    u32 ea = 0;
    u32 r0 = arg0.addr();
    u32 r1 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 0x78u;  // (from the original)
    r6 = r0;
    r1 = u32(arg0->byte_11);
    *gptr<u8>(r13 + 0x40u) = u8(2u);  // (from the original)
    r0 = r1;
    guest::cpu()->r[13] = r13;
    r0 = call_002fe7cc(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    *gptr<u32>(r13 + 0x44u) = u32(r0);  // (from the original)
    r1 = r6;
    r0 = r13 + 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00748284(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = r6;
    r0 = r13 + 0x10u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0074824c(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = r13 + 0x10u;  // (from the original)
    r0 = r13 + 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_007481ec(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        goto L_714b0c;
    } else {
        r8 = r13;
    }
L_714988:;
    r5 = r13 + 0x40u;  // (from the original)
    r7 = r13 + 0x30u;  // (from the original)
    if (*gptr<u32>(r13 + 0x44u) == 0) {  // (from the original)
        goto L_714aec;
    }
    r1 = r7;
    r0 = r13 + 0x38u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0052edfc(r0, r1, r2, r3);
    r3 = r13 + 0x38u;  // (from the original)
    r0 = *gptr<u32>(r13 + 0x44u);  // (from the original)
    r1 = *gptr<u32>(r3);
    r2 = *gptr<u32>(r3 + 4);
    guest::cpu()->r[13] = r13;
    r0 = call_0075291c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r4 = r0;
    if (r0 == 0) {
        goto L_714ae4;
    }
    r1 = r7;
    r0 = r13 + 0x20u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0052ed04(r0, r1, r2, r3);
    r3 = r13 + 0x20u;  // (from the original)
    r0 = r4;
    r1 = *gptr<u32>(r3);
    r2 = *gptr<u32>(r3 + 4);
    guest::cpu()->r[13] = r13;
    r0 = call_0075d608(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = r0;
    r0 = r13 + 8u;
    guest::cpu()->r[13] = r13;
    r0 = call_005cdfe8(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r4 = 0u;
    *gptr<u8>(r13) = u8(u32(*gptr<u8>(r13 + 8u)));
    *gptr<u8>(r13 + 1u) = u8(u32(*gptr<u8>(r13 + 0xau)));  // (from the original)
    *gptr<u8>(r13 + 2u) = u8(u32(*gptr<u8>(r13 + 9u)));
    *gptr<u8>(r13 + 3u) = u8(u32(*gptr<u8>(r13 + 0xbu)));  // (from the original)
    do {
L_714a18:;
        r0 = u32(*gptr<u8>(r8 + r4));
        guest::cpu()->r[13] = r13;
        r0 = call_005ce13c(r0, r1, r2, r3);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r1 = u32(*gptr<u8>(r5));
        if (!(r1 != r0)) {
            if (!(*gptr<u32>(r6 + 0x20u) == 0)) {  // (from the original)
                r1 = r13 + 0x30u;  // (from the original)
                r2 = r6 + 0x24u;  // (from the original)
                r0 = r13 + 0x48u;  // (from the original)
                guest::cpu()->r[13] = r13;
                r0 = call_00748164(r0, r1, r2, r3);
                r3 = guest::cpu()->r[3];
                ea = r13 + 0x48u;  // (from the original)
                r0 = *gptr<u32>(ea);
                r1 = *gptr<u32>(ea + 4);
                r2 = *gptr<u32>(r6 + 0x20u);  // (from the original)
                r1 = (r1 + (r1 << 2) << 5) + (r0 + (r0 << 2) << 1) + r2;
                r0 = r13 + 0x50u;  // (from the original)
                guest::cpu()->r[13] = r13;
                r0 = call_0060d20c(r0, r1, r2, r3);
                r1 = guest::cpu()->r[1];
                r2 = guest::cpu()->r[2];
                r3 = guest::cpu()->r[3];
                if (u32(*gptr<u8>(r13 + 0x58u)) == 0) {  // (from the original)
                    goto L_714b2c;
                }
            }
            r0 = 1u;
            r13 = r13 + 0x78u;  // (from the original)
            guest::cpu()->r[1] = r1;
            guest::cpu()->r[13] = r13;
            return r0;
        }
        r4 = r4 + 1u;
        guest::preempt();
    } while (r4 < 4u);
L_714ae4:;
L_714ae8:;
L_714aec:;
    r0 = r13 + 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0052f144(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = r13 + 0x10u;  // (from the original)
    r0 = r13 + 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_007481ec(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 != 0) {
        guest::preempt();
        goto L_714988;
    }
L_714b0c:;
    r0 = 0u;
    r13 = r13 + 0x78u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
L_714b2c:;
    guest::preempt();
    goto L_714ae8;
}

}  // namespace d_00714934
GUEST_EXPORT(0x00714934, d_00714934::f_00714934);

// f_00714b40: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00714b40 {

struct __attribute__((packed)) Object_00714b40_0 {
    u8 unknown_0[0x11];  // (not used here)
    u8 byte_11;
};
GUEST_OFFSET(Object_00714b40_0, byte_11, 0x11);  // (from the original)

inline constexpr guest::Function<0x002fe7cc, u32(u32, u32, u32, u32)> call_002fe7cc;  // (from the original)
inline constexpr guest::Function<0x0052ed04, u32(u32, u32, u32, u32)> call_0052ed04;  // (from the original)
inline constexpr guest::Function<0x0052edfc, u32(u32, u32, u32, u32)> call_0052edfc;  // (from the original)
inline constexpr guest::Function<0x0052f144, u32(u32, u32, u32, u32)> call_0052f144;  // (from the original)
inline constexpr guest::Function<0x005cdfe8, u32(u32, u32, u32, u32)> call_005cdfe8;  // (from the original)
inline constexpr guest::Function<0x005ce13c, u32(u32, u32, u32, u32)> call_005ce13c;  // (from the original)
inline constexpr guest::Function<0x0060d20c, u32(u32, u32, u32, u32)> call_0060d20c;  // (from the original)
inline constexpr guest::Function<0x00748164, u32(u32, u32, u32, u32)> call_00748164;  // (from the original)
inline constexpr guest::Function<0x007481ec, u32(u32, u32, u32, u32)> call_007481ec;  // (from the original)
inline constexpr guest::Function<0x0074824c, u32(u32, u32, u32, u32)> call_0074824c;  // (from the original)
inline constexpr guest::Function<0x00748284, u32(u32, u32, u32, u32)> call_00748284;  // (from the original)
inline constexpr guest::Function<0x0075291c, u32(u32, u32, u32, u32)> call_0075291c;  // (from the original)
inline constexpr guest::Function<0x0075d608, u32(u32, u32, u32, u32)> call_0075d608;  // (from the original)

u32 f_00714b40(gptr<Object_00714b40_0> arg0, u32 r1_unused, u32 r2, u32 r3) {
    u32 ea = 0;
    u32 r0 = arg0.addr();
    u32 r1 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 0x78u;  // (from the original)
    r6 = r0;
    r1 = u32(arg0->byte_11);
    *gptr<u8>(r13 + 0x40u) = u8(3u);  // (from the original)
    r0 = r1;
    guest::cpu()->r[13] = r13;
    r0 = call_002fe7cc(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    *gptr<u32>(r13 + 0x44u) = u32(r0);  // (from the original)
    r1 = r6;
    r0 = r13 + 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00748284(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = r6;
    r0 = r13 + 0x10u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0074824c(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = r13 + 0x10u;  // (from the original)
    r0 = r13 + 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_007481ec(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        goto L_714d18;
    } else {
        r8 = r13;
    }
L_714b94:;
    r5 = r13 + 0x40u;  // (from the original)
    r7 = r13 + 0x30u;  // (from the original)
    if (*gptr<u32>(r13 + 0x44u) == 0) {  // (from the original)
        goto L_714cf8;
    }
    r1 = r7;
    r0 = r13 + 0x38u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0052edfc(r0, r1, r2, r3);
    r3 = r13 + 0x38u;  // (from the original)
    r0 = *gptr<u32>(r13 + 0x44u);  // (from the original)
    r1 = *gptr<u32>(r3);
    r2 = *gptr<u32>(r3 + 4);
    guest::cpu()->r[13] = r13;
    r0 = call_0075291c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r4 = r0;
    if (r0 == 0) {
        goto L_714cf0;
    }
    r1 = r7;
    r0 = r13 + 0x20u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0052ed04(r0, r1, r2, r3);
    r3 = r13 + 0x20u;  // (from the original)
    r0 = r4;
    r1 = *gptr<u32>(r3);
    r2 = *gptr<u32>(r3 + 4);
    guest::cpu()->r[13] = r13;
    r0 = call_0075d608(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = r0;
    r0 = r13 + 8u;
    guest::cpu()->r[13] = r13;
    r0 = call_005cdfe8(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r4 = 0u;
    *gptr<u8>(r13) = u8(u32(*gptr<u8>(r13 + 8u)));
    *gptr<u8>(r13 + 1u) = u8(u32(*gptr<u8>(r13 + 0xau)));  // (from the original)
    *gptr<u8>(r13 + 2u) = u8(u32(*gptr<u8>(r13 + 9u)));
    *gptr<u8>(r13 + 3u) = u8(u32(*gptr<u8>(r13 + 0xbu)));  // (from the original)
    do {
L_714c24:;
        r0 = u32(*gptr<u8>(r8 + r4));
        guest::cpu()->r[13] = r13;
        r0 = call_005ce13c(r0, r1, r2, r3);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r1 = u32(*gptr<u8>(r5));
        if (!(r1 != r0)) {
            if (!(*gptr<u32>(r6 + 0x20u) == 0)) {  // (from the original)
                r1 = r13 + 0x30u;  // (from the original)
                r2 = r6 + 0x24u;  // (from the original)
                r0 = r13 + 0x48u;  // (from the original)
                guest::cpu()->r[13] = r13;
                r0 = call_00748164(r0, r1, r2, r3);
                r3 = guest::cpu()->r[3];
                ea = r13 + 0x48u;  // (from the original)
                r0 = *gptr<u32>(ea);
                r1 = *gptr<u32>(ea + 4);
                r2 = *gptr<u32>(r6 + 0x20u);  // (from the original)
                r1 = (r1 + (r1 << 2) << 5) + (r0 + (r0 << 2) << 1) + r2;
                r0 = r13 + 0x50u;  // (from the original)
                guest::cpu()->r[13] = r13;
                r0 = call_0060d20c(r0, r1, r2, r3);
                r1 = guest::cpu()->r[1];
                r2 = guest::cpu()->r[2];
                r3 = guest::cpu()->r[3];
                if (u32(*gptr<u8>(r13 + 0x58u)) == 0) {  // (from the original)
                    goto L_714d38;
                }
            }
            r0 = 1u;
            r13 = r13 + 0x78u;  // (from the original)
            guest::cpu()->r[1] = r1;
            guest::cpu()->r[13] = r13;
            return r0;
        }
        r4 = r4 + 1u;
        guest::preempt();
    } while (r4 < 4u);
L_714cf0:;
L_714cf4:;
L_714cf8:;
    r0 = r13 + 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0052f144(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = r13 + 0x10u;  // (from the original)
    r0 = r13 + 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_007481ec(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 != 0) {
        guest::preempt();
        goto L_714b94;
    }
L_714d18:;
    r0 = 0u;
    r13 = r13 + 0x78u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
L_714d38:;
    guest::preempt();
    goto L_714cf4;
}

}  // namespace d_00714b40
GUEST_EXPORT(0x00714b40, d_00714b40::f_00714b40);

// f_00715074: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00715074 {

struct __attribute__((packed)) Object_00715074_0 {
    u8 unknown_0[0x11];  // (not used here)
    u8 byte_11;
};
GUEST_OFFSET(Object_00715074_0, byte_11, 0x11);  // (from the original)

inline constexpr guest::Function<0x002fe7cc, u32(u32, u32, u32, u32)> call_002fe7cc;  // (from the original)
inline constexpr guest::Function<0x0052ed04, u32(u32, u32, u32, u32)> call_0052ed04;  // (from the original)
inline constexpr guest::Function<0x0052edfc, u32(u32, u32, u32, u32)> call_0052edfc;  // (from the original)
inline constexpr guest::Function<0x0052f144, u32(u32, u32, u32, u32)> call_0052f144;  // (from the original)
inline constexpr guest::Function<0x005cdfe8, u32(u32, u32, u32, u32)> call_005cdfe8;  // (from the original)
inline constexpr guest::Function<0x005ce13c, u32(u32, u32, u32, u32)> call_005ce13c;  // (from the original)
inline constexpr guest::Function<0x0060d20c, u32(u32, u32, u32, u32)> call_0060d20c;  // (from the original)
inline constexpr guest::Function<0x00748164, u32(u32, u32, u32, u32)> call_00748164;  // (from the original)
inline constexpr guest::Function<0x007481ec, u32(u32, u32, u32, u32)> call_007481ec;  // (from the original)
inline constexpr guest::Function<0x0074824c, u32(u32, u32, u32, u32)> call_0074824c;  // (from the original)
inline constexpr guest::Function<0x00748284, u32(u32, u32, u32, u32)> call_00748284;  // (from the original)
inline constexpr guest::Function<0x0075291c, u32(u32, u32, u32, u32)> call_0075291c;  // (from the original)
inline constexpr guest::Function<0x0075d608, u32(u32, u32, u32, u32)> call_0075d608;  // (from the original)

u32 f_00715074(gptr<Object_00715074_0> arg0, u32 r1_unused, u32 r2, u32 r3) {
    u32 ea = 0;
    u32 r0 = arg0.addr();
    u32 r1 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 0x78u;  // (from the original)
    r6 = r0;
    r1 = u32(arg0->byte_11);
    *gptr<u8>(r13 + 0x40u) = u8(1u);  // (from the original)
    r0 = r1;
    guest::cpu()->r[13] = r13;
    r0 = call_002fe7cc(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    *gptr<u32>(r13 + 0x44u) = u32(r0);  // (from the original)
    r1 = r6;
    r0 = r13 + 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00748284(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = r6;
    r0 = r13 + 0x10u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0074824c(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = r13 + 0x10u;  // (from the original)
    r0 = r13 + 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_007481ec(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        goto L_71524c;
    } else {
        r8 = r13;
    }
L_7150c8:;
    r5 = r13 + 0x40u;  // (from the original)
    r7 = r13 + 0x30u;  // (from the original)
    if (*gptr<u32>(r13 + 0x44u) == 0) {  // (from the original)
        goto L_71522c;
    }
    r1 = r7;
    r0 = r13 + 0x38u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0052edfc(r0, r1, r2, r3);
    r3 = r13 + 0x38u;  // (from the original)
    r0 = *gptr<u32>(r13 + 0x44u);  // (from the original)
    r1 = *gptr<u32>(r3);
    r2 = *gptr<u32>(r3 + 4);
    guest::cpu()->r[13] = r13;
    r0 = call_0075291c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r4 = r0;
    if (r0 == 0) {
        goto L_715224;
    }
    r1 = r7;
    r0 = r13 + 0x20u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0052ed04(r0, r1, r2, r3);
    r3 = r13 + 0x20u;  // (from the original)
    r0 = r4;
    r1 = *gptr<u32>(r3);
    r2 = *gptr<u32>(r3 + 4);
    guest::cpu()->r[13] = r13;
    r0 = call_0075d608(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = r0;
    r0 = r13 + 8u;
    guest::cpu()->r[13] = r13;
    r0 = call_005cdfe8(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r4 = 0u;
    *gptr<u8>(r13) = u8(u32(*gptr<u8>(r13 + 8u)));
    *gptr<u8>(r13 + 1u) = u8(u32(*gptr<u8>(r13 + 0xau)));  // (from the original)
    *gptr<u8>(r13 + 2u) = u8(u32(*gptr<u8>(r13 + 9u)));
    *gptr<u8>(r13 + 3u) = u8(u32(*gptr<u8>(r13 + 0xbu)));  // (from the original)
    do {
L_715158:;
        r0 = u32(*gptr<u8>(r8 + r4));
        guest::cpu()->r[13] = r13;
        r0 = call_005ce13c(r0, r1, r2, r3);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r1 = u32(*gptr<u8>(r5));
        if (!(r1 != r0)) {
            if (!(*gptr<u32>(r6 + 0x20u) == 0)) {  // (from the original)
                r1 = r13 + 0x30u;  // (from the original)
                r2 = r6 + 0x24u;  // (from the original)
                r0 = r13 + 0x48u;  // (from the original)
                guest::cpu()->r[13] = r13;
                r0 = call_00748164(r0, r1, r2, r3);
                r3 = guest::cpu()->r[3];
                ea = r13 + 0x48u;  // (from the original)
                r0 = *gptr<u32>(ea);
                r1 = *gptr<u32>(ea + 4);
                r2 = *gptr<u32>(r6 + 0x20u);  // (from the original)
                r1 = (r1 + (r1 << 2) << 5) + (r0 + (r0 << 2) << 1) + r2;
                r0 = r13 + 0x50u;  // (from the original)
                guest::cpu()->r[13] = r13;
                r0 = call_0060d20c(r0, r1, r2, r3);
                r1 = guest::cpu()->r[1];
                r2 = guest::cpu()->r[2];
                r3 = guest::cpu()->r[3];
                if (u32(*gptr<u8>(r13 + 0x58u)) == 0) {  // (from the original)
                    goto L_71526c;
                }
            }
            r0 = 1u;
            r13 = r13 + 0x78u;  // (from the original)
            guest::cpu()->r[1] = r1;
            guest::cpu()->r[13] = r13;
            return r0;
        }
        r4 = r4 + 1u;
        guest::preempt();
    } while (r4 < 4u);
L_715224:;
L_715228:;
L_71522c:;
    r0 = r13 + 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0052f144(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = r13 + 0x10u;  // (from the original)
    r0 = r13 + 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_007481ec(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 != 0) {
        guest::preempt();
        goto L_7150c8;
    }
L_71524c:;
    r0 = 0u;
    r13 = r13 + 0x78u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
L_71526c:;
    guest::preempt();
    goto L_715228;
}

}  // namespace d_00715074
GUEST_EXPORT(0x00715074, d_00715074::f_00715074);

// f_00715280: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00715280 {

struct __attribute__((packed)) Object_00715280_0 {
    u8 unknown_0[0x11];  // (not used here)
    u8 byte_11;
};
GUEST_OFFSET(Object_00715280_0, byte_11, 0x11);  // (from the original)

inline constexpr guest::Function<0x002fccdc, u32(u32, u32, u32, u32)> call_002fccdc;  // (from the original)
inline constexpr guest::Function<0x002fe7cc, u32(u32, u32, u32, u32)> call_002fe7cc;  // (from the original)
inline constexpr guest::Function<0x002feb00, u32(u32, u32, u32, u32)> call_002feb00;  // (from the original)
inline constexpr guest::Function<0x0052f144, u32(u32, u32, u32, u32)> call_0052f144;  // (from the original)
inline constexpr guest::Function<0x0060d20c, u32(u32, u32, u32, u32)> call_0060d20c;  // (from the original)
inline constexpr guest::Function<0x00748164, u32(u32, u32, u32, u32)> call_00748164;  // (from the original)
inline constexpr guest::Function<0x007481ec, u32(u32, u32, u32, u32)> call_007481ec;  // (from the original)
inline constexpr guest::Function<0x0074824c, u32(u32, u32, u32, u32)> call_0074824c;  // (from the original)
inline constexpr guest::Function<0x00748284, u32(u32, u32, u32, u32)> call_00748284;  // (from the original)

u32 f_00715280(gptr<Object_00715280_0> arg0, u32 r1, u32 r2, u32 r3) {
    u32 ea = 0;
    u32 r0 = arg0.addr();
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r13 = guest::cpu()->r[13];
    r5 = r0;
    r0 = u32(arg0->byte_11);
    r13 = r13 - 0x48u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002fe7cc(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r4 = r0;
    r1 = r5;
    r0 = r13 + 0x10u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00748284(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = r5;
    r0 = r13 + 0x20u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0074824c(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = r13 + 0x20u;  // (from the original)
    r0 = r13 + 0x10u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_007481ec(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        goto L_7153cc;
    }
L_7152c4:;
    r0 = r13 + 0x18u;  // (from the original)
    if (r4 == 0) {
        goto L_7153ac;
    }
    r1 = *gptr<u32>(r0);
    r2 = *gptr<u32>(r0 + 4);
    r3 = 0u;
    r0 = r4;
    guest::cpu()->r[13] = r13;
    r0 = call_002feb00(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        goto L_7153ac;
    }
    guest::cpu()->r[13] = r13;
    r0 = call_002fccdc(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 != 0xau) {  // (from the original)
        goto L_7153ac;
    }
    if (*gptr<u32>(r5 + 0x20u) != 0) {  // (from the original)
        r1 = r13 + 0x18u;  // (from the original)
        r2 = r5 + 0x24u;  // (from the original)
        r0 = r13 + 8u;
        guest::cpu()->r[13] = r13;
        r0 = call_00748164(r0, r1, r2, r3);
        r3 = guest::cpu()->r[3];
        ea = r13 + 8u;
        r0 = *gptr<u32>(ea);
        r2 = *gptr<u32>(ea + 4);
        r2 = r2 + (r2 << 2) << 5;
        r1 = *gptr<u32>(r5 + 0x20u) + (r2 + (r0 + (r0 << 2) << 1));  // (from the original)
        r0 = r13 + 0x30u;  // (from the original)
        guest::cpu()->r[13] = r13;
        r0 = call_0060d20c(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        if (u32(*gptr<u8>(r13 + 0x38u)) == 0) {  // (from the original)
            goto L_715398;
        }
    }
    r0 = 1u;
    r13 = r13 + 0x48u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
L_715398:;
L_7153ac:;
    r0 = r13 + 0x10u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0052f144(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = r13 + 0x20u;  // (from the original)
    r0 = r13 + 0x10u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_007481ec(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 != 0) {
        guest::preempt();
        goto L_7152c4;
    }
L_7153cc:;
    r0 = 0u;
    r13 = r13 + 0x48u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_00715280
GUEST_EXPORT(0x00715280, d_00715280::f_00715280);

// f_007153ec: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_007153ec {

struct __attribute__((packed)) Object_007153ec_0 {
    u8 unknown_0[0x1c];  // (not used here)
    u8 byte_1c;
};
GUEST_OFFSET(Object_007153ec_0, byte_1c, 0x1c);  // (from the original)

inline constexpr guest::Function<0x0023fc84, u32(u32, u32, u32, u32)> call_0023fc84;  // (from the original)
inline constexpr guest::Function<0x002fe7cc, u32(u32, u32, u32, u32)> call_002fe7cc;  // (from the original)
inline constexpr guest::Function<0x0052ed04, u32(u32, u32, u32, u32)> call_0052ed04;  // (from the original)
inline constexpr guest::Function<0x0052edfc, u32(u32, u32, u32, u32)> call_0052edfc;  // (from the original)
inline constexpr guest::Function<0x0052f144, u32(u32, u32, u32, u32)> call_0052f144;  // (from the original)
inline constexpr guest::Function<0x0060d20c, u32(u32, u32, u32, u32)> call_0060d20c;  // (from the original)
inline constexpr guest::Function<0x006cacdc, u32(u32, u32, u32, u32)> call_006cacdc;  // (from the original)
inline constexpr guest::Function<0x006cc304, u32(u32, u32, u32, u32)> call_006cc304;  // (from the original)
inline constexpr guest::Function<0x00748164, u32(u32, u32, u32, u32)> call_00748164;  // (from the original)
inline constexpr guest::Function<0x007481ec, u32(u32, u32, u32, u32)> call_007481ec;  // (from the original)
inline constexpr guest::Function<0x0074824c, u32(u32, u32, u32, u32)> call_0074824c;  // (from the original)
inline constexpr guest::Function<0x00748284, u32(u32, u32, u32, u32)> call_00748284;  // (from the original)
inline constexpr guest::Function<0x0075291c, u32(u32, u32, u32, u32)> call_0075291c;  // (from the original)
inline constexpr guest::Function<0x0075d608, u32(u32, u32, u32, u32)> call_0075d608;  // (from the original)

u32 f_007153ec(gptr<Object_007153ec_0> arg0, u32 r1, u32 r2, u32 r3) {
    u32 ea = 0;
    u32 r0 = arg0.addr();
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r13 = guest::cpu()->r[13];
    u32 zf = 0;
    r4 = r0;
    r13 = r13 - 0x78u;  // (from the original)
    r0 = u32(arg0->byte_1c);
    guest::cpu()->r[13] = r13;
    r0 = call_006cacdc(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        goto L_7155d8;
    }
    r0 = 1u;
    guest::cpu()->r[13] = r13;
    r0 = call_002fe7cc(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r5 = r0;
    r1 = r4;
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_00748284(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = r4;
    r0 = r13 + 0x50u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0074824c(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = r13 + 0x50u;  // (from the original)
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_007481ec(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        goto L_7155c4;
    }
L_715440:;
    r0 = r13 + 8u;
    r7 = r0;
    if (r5 == 0) {
        goto L_715508;
    }
    r1 = r0;
    r0 = r13 + 0x18u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0052edfc(r0, r1, r2, r3);
    r3 = r13 + 0x18u;  // (from the original)
    r0 = r5;
    r1 = *gptr<u32>(r3);
    r2 = *gptr<u32>(r3 + 4);
    guest::cpu()->r[13] = r13;
    r0 = call_0075291c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r6 = r0;
    if (r0 == 0) {
        goto L_715500;
    }
    r1 = r7;
    r0 = r13 + 0x20u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0052ed04(r0, r1, r2, r3);
    r3 = r13 + 0x20u;  // (from the original)
    r0 = r6;
    r1 = *gptr<u32>(r3);
    r2 = *gptr<u32>(r3 + 4);
    guest::cpu()->r[13] = r13;
    r0 = call_0075d608(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    zf = r0 == 0x14u;  // (from the original)
    if (!zf) {
        zf = r0 == 0x31u;  // (from the original)
    }
    if (zf) {
        goto L_7154e4;
    }
    zf = r0 == 0x32u;  // (from the original)
    if (!zf) {
        zf = r0 == 0x33u;  // (from the original)
    }
    if (zf) {
        goto L_7154e4;
    }
    r1 = *gptr<u32>(r7);
    r2 = *gptr<u32>(r7 + 4);
    r3 = 1u;
    r0 = r13 + 0x40u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0023fc84(r0, r1, r2, r3);
    r3 = r13 + 0x40u;  // (from the original)
    r0 = *gptr<u32>(r3);
    r1 = *gptr<u32>(r3 + 4);
    r2 = *gptr<u32>(r3 + 8) & 0xffu;  // (from the original)
    if (r2 >= 0xfcu) {  // (from the original)
        goto L_7154f8;
    }
    guest::cpu()->r[13] = r13;
    r0 = call_006cc304(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        goto L_7154f8;
    }
L_7154e4:;
    goto L_7155a4;
L_7154f8:;
L_715500:;
L_715508:;
    if (*gptr<u32>(r4 + 0x20u) != 0) {  // (from the original)
        r1 = r13 + 8u;
        r2 = r4 + 0x24u;  // (from the original)
        r0 = r13 + 0x38u;  // (from the original)
        guest::cpu()->r[13] = r13;
        r0 = call_00748164(r0, r1, r2, r3);
        r3 = guest::cpu()->r[3];
        ea = r13 + 0x38u;  // (from the original)
        r0 = *gptr<u32>(ea);
        r1 = *gptr<u32>(ea + 4);
        r2 = *gptr<u32>(r4 + 0x20u);  // (from the original)
        r1 = (r1 + (r1 << 2) << 5) + (r0 + (r0 << 2) << 1) + r2;
        r0 = r13 + 0x40u;  // (from the original)
        guest::cpu()->r[13] = r13;
        r0 = call_0060d20c(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        if (u32(*gptr<u8>(r13 + 0x48u)) == 0) {  // (from the original)
            goto L_715598;
        }
    }
    r0 = 1u;
    r13 = r13 + 0x78u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
L_715598:;
L_7155a4:;
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_0052f144(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = r13 + 0x50u;  // (from the original)
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_007481ec(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 != 0) {
        guest::preempt();
        goto L_715440;
    }
L_7155c4:;
    goto L_715770;
L_7155d8:;
    r0 = u32(*gptr<u8>(r4 + 0x11u));  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002fe7cc(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r5 = r0;
    r1 = r4;
    r0 = r13 + 8u;
    guest::cpu()->r[13] = r13;
    r0 = call_00748284(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = r4;
    r0 = r13 + 0x38u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0074824c(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = r13 + 0x38u;  // (from the original)
    r0 = r13 + 8u;
    guest::cpu()->r[13] = r13;
    r0 = call_007481ec(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        goto L_715764;
    }
L_715614:;
    r0 = r13 + 0x10u;  // (from the original)
    r7 = r0;
    if (r5 != 0) {
        r1 = r0;
        r0 = r13 + 0x28u;  // (from the original)
        guest::cpu()->r[13] = r13;
        r0 = call_0052edfc(r0, r1, r2, r3);
        r3 = r13 + 0x28u;  // (from the original)
        r0 = r5;
        r1 = *gptr<u32>(r3);
        r2 = *gptr<u32>(r3 + 4);
        guest::cpu()->r[13] = r13;
        r0 = call_0075291c(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r6 = r0;
        if (r0 != 0) {
            r1 = r7;
            r0 = r13 + 0x30u;  // (from the original)
            guest::cpu()->r[13] = r13;
            r0 = call_0052ed04(r0, r1, r2, r3);
            r3 = r13 + 0x30u;  // (from the original)
            r0 = r6;
            r1 = *gptr<u32>(r3);
            r2 = *gptr<u32>(r3 + 4);
            guest::cpu()->r[13] = r13;
            r0 = call_0075d608(r0, r1, r2, r3);
            r1 = guest::cpu()->r[1];
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
            zf = r0 == 0x14u;  // (from the original)
            if (!zf) {
                zf = r0 == 0x31u;  // (from the original)
            }
            if (zf) {
                goto L_715724;
            }
            zf = r0 == 0x32u;  // (from the original)
            if (!zf) {
                zf = r0 == 0x33u;  // (from the original)
            }
            if (zf) {
                goto L_715724;
            }
        }
    }
    if (*gptr<u32>(r4 + 0x20u) != 0) {  // (from the original)
        r1 = r13 + 0x10u;  // (from the original)
        r2 = r4 + 0x24u;  // (from the original)
        r0 = r13 + 0x48u;  // (from the original)
        guest::cpu()->r[13] = r13;
        r0 = call_00748164(r0, r1, r2, r3);
        r3 = guest::cpu()->r[3];
        ea = r13 + 0x48u;  // (from the original)
        r0 = *gptr<u32>(ea);
        r1 = *gptr<u32>(ea + 4);
        r2 = *gptr<u32>(r4 + 0x20u);  // (from the original)
        r1 = (r1 + (r1 << 2) << 5) + (r0 + (r0 << 2) << 1) + r2;
        r0 = r13 + 0x50u;  // (from the original)
        guest::cpu()->r[13] = r13;
        r0 = call_0060d20c(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        if (u32(*gptr<u8>(r13 + 0x58u)) == 0) {  // (from the original)
            goto L_715738;
        }
    }
    r0 = 1u;
    r13 = r13 + 0x78u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
L_715724:;
    goto L_715744;
L_715738:;
L_715744:;
    r0 = r13 + 8u;
    guest::cpu()->r[13] = r13;
    r0 = call_0052f144(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = r13 + 0x38u;  // (from the original)
    r0 = r13 + 8u;
    guest::cpu()->r[13] = r13;
    r0 = call_007481ec(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 != 0) {
        guest::preempt();
        goto L_715614;
    }
L_715764:;
L_715770:;
    r0 = 0u;
    r13 = r13 + 0x78u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_007153ec
GUEST_EXPORT(0x007153ec, d_007153ec::f_007153ec);

// f_00715780: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00715780 {

struct __attribute__((packed)) Object_00715780_0 {
    u8 unknown_0[0x11];  // (not used here)
    u8 byte_11;
};
GUEST_OFFSET(Object_00715780_0, byte_11, 0x11);  // (from the original)

inline constexpr guest::Function<0x002fe7cc, u32(u32, u32, u32, u32)> call_002fe7cc;  // (from the original)
inline constexpr guest::Function<0x00317148, u32(u32, u32, u32, u32)> call_00317148;  // (from the original)
inline constexpr guest::Function<0x0052edfc, u32(u32, u32, u32, u32)> call_0052edfc;  // (from the original)
inline constexpr guest::Function<0x0052f144, u32(u32, u32, u32, u32)> call_0052f144;  // (from the original)
inline constexpr guest::Function<0x00605618, u32(u32, u32, u32, u32)> call_00605618;  // (from the original)
inline constexpr guest::Function<0x0060d20c, u32(u32, u32, u32, u32)> call_0060d20c;  // (from the original)
inline constexpr guest::Function<0x00748164, u32(u32, u32, u32, u32)> call_00748164;  // (from the original)
inline constexpr guest::Function<0x007481ec, u32(u32, u32, u32, u32)> call_007481ec;  // (from the original)
inline constexpr guest::Function<0x0074824c, u32(u32, u32, u32, u32)> call_0074824c;  // (from the original)
inline constexpr guest::Function<0x00748284, u32(u32, u32, u32, u32)> call_00748284;  // (from the original)

u32 f_00715780(gptr<Object_00715780_0> arg0, u32 r1_unused, u32 r2) {
    u32 ea = 0;
    u32 r0 = arg0.addr();
    u32 r1 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 0x50u;  // (from the original)
    r4 = u32(arg0->byte_11);
    r6 = r0;
    r1 = r0;
    r0 = r13 + 0x10u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00748284(r0, r1, r2, guest::cpu()->r[3]);
    r2 = guest::cpu()->r[2];
    r1 = r6;
    r0 = r13 + 0x20u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0074824c(r0, r1, r2, guest::cpu()->r[3]);
    r2 = guest::cpu()->r[2];
    r1 = r13 + 0x20u;  // (from the original)
    r0 = r13 + 0x10u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_007481ec(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    if (r0 == 0) {
        goto L_7158f8;
    }
L_7157bc:;
    r1 = r13 + 0x18u;  // (from the original)
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_0052edfc(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r0 = r4 & 0xffu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002fe7cc(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    if (r0 == 0) {
        goto L_7158c0;
    }
    r1 = *gptr<u32>(r13);
    r2 = *gptr<u32>(r13 + 4);
    guest::cpu()->r[13] = r13;
    r0 = call_00317148(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    if (r0 == 0) {
        goto L_7158c0;
    }
    r0 = u32(*gptr<u16>(r0));
    guest::cpu()->r[13] = r13;
    r0 = call_00605618(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    if (r0 == 1u) {
        r5 = 1u;
    } else {
        r5 = 0u;
    }
    if (r5 == 0) {
        goto L_7158d8;
    }
    if (*gptr<u32>(r6 + 0x20u) != 0) {  // (from the original)
        r1 = r13 + 0x18u;  // (from the original)
        r2 = r6 + 0x24u;  // (from the original)
        r0 = r13 + 8u;
        guest::cpu()->r[13] = r13;
        r0 = call_00748164(r0, r1, r2, guest::cpu()->r[3]);
        ea = r13 + 8u;
        r0 = *gptr<u32>(ea);
        r2 = *gptr<u32>(ea + 4);
        r2 = r2 + (r2 << 2) << 5;
        r1 = *gptr<u32>(r6 + 0x20u) + (r2 + (r0 + (r0 << 2) << 1));  // (from the original)
        r0 = r13 + 0x30u;  // (from the original)
        guest::cpu()->r[13] = r13;
        r0 = call_0060d20c(r0, r1, r2, guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        if (u32(*gptr<u8>(r13 + 0x38u)) == 0) {  // (from the original)
            goto L_7158c8;
        }
    }
    r0 = 1u;
    r13 = r13 + 0x50u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
L_7158c0:;
    goto L_7158d4;
L_7158c8:;
L_7158d4:;
L_7158d8:;
    r0 = r13 + 0x10u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0052f144(r0, r1, r2, guest::cpu()->r[3]);
    r2 = guest::cpu()->r[2];
    r1 = r13 + 0x20u;  // (from the original)
    r0 = r13 + 0x10u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_007481ec(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    if (r0 != 0) {
        guest::preempt();
        goto L_7157bc;
    }
L_7158f8:;
    r0 = 0u;
    r13 = r13 + 0x50u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_00715780
GUEST_EXPORT(0x00715780, d_00715780::f_00715780);

// f_00715918: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00715918 {


u32 f_00715918(u32 r0, u32 r1_unused, u32 r2, u32 r3) {
    u32 ea = 0;
    u32 res = 0;
    u32 r1 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r12 = 0;
    u32 r13 = guest::cpu()->r[13];
    res = r2 | r3;
    r1 = res;
    r13 = r13 - 0xc;  // (from the original)
    if (res == 0) {
        goto L_715960;
    } else {
        r4 = 0u;
    }
    do {
L_715928:;
        ea = r0 + (r4 << 3);
        r1 = *gptr<u32>(ea);
        r12 = *gptr<u32>(ea + 4);
        res = r1 ^ r2 | r12 ^ r3;
        if (!(res != 0)) {
            r13 = r13 + 0xc;  // (from the original)
            r0 = 1u;
            guest::cpu()->r[1] = r1;
            guest::cpu()->r[13] = r13;
            return r0;
        }
        res = r1 | r12;
        r1 = res;
        if (res == 0) {
            goto L_715960;
        }
        r4 = r4 + 1u;
        guest::preempt();
    } while (r4 < 0x64u);  // (from the original)
L_715960:;
    r13 = r13 + 0xc;  // (from the original)
    r0 = 0u;
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_00715918
GUEST_EXPORT(0x00715918, d_00715918::f_00715918);

// f_0071596c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0071596c {


u32 f_0071596c(u32 r0) {
    u32 ea = 0;
    u32 res = 0;
    u32 r1 = 0;
    u32 r12 = 0;
    r1 = 0u;
    do {
L_715970:;
        r12 = r0 + (r1 << 3);
        res = *gptr<u32>(r12 + 4u) | *gptr<u32>(r12);
        if (!(res != 0)) {
            r0 = r1;
            guest::cpu()->r[1] = r1;
            return r0;
        }
        ea = r12 + 8u;
        res = *gptr<u32>(ea) | *gptr<u32>(ea + 4);
        if (!(res != 0)) {
            r0 = r1 + 1u;
            guest::cpu()->r[1] = r1;
            return r0;
        }
        r1 = r1 + 2u;
        guest::preempt();
    } while (s32(r1) < s32(0x64u));  // (from the original)
    r0 = r1;
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_0071596c
GUEST_EXPORT(0x0071596c, d_0071596c::f_0071596c);

// f_00715b88: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00715b88 {

inline constexpr guest::Function<0x0029b88c, u32(u32, u32, u32, u32)> call_0029b88c;  // (from the original)

u32 f_00715b88(u32 r0_unused, u32 r1) {
    u32 r0 = 0;
    u32 zf = 0;
    r0 = r1;
    guest::cpu()->r[13] -= 8u;
    r0 = call_0029b88c(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r0 = *gptr<u32>(r0 + 4u);
    if (r0 == 0) {
        r0 = 2u;
        guest::cpu()->r[13] += 8u;
        return r0;
    }
    zf = r0 == 1u;
    if (zf) {
        r0 = 3u;
    } else {
        zf = r0 == 2u;
    }
    if (zf) {
        guest::cpu()->r[13] += 8u;
        return r0;
    }
    if (r0 == 3u) {
        r0 = 1u;
    } else {
        r0 = 0u;
    }
    guest::cpu()->r[13] += 8u;
    return r0;
}

}  // namespace d_00715b88
GUEST_EXPORT(0x00715b88, d_00715b88::f_00715b88);

// f_00715c98: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00715c98 {

inline constexpr guest::Function<0x0029b88c, u32(u32, u32, u32, u32)> call_0029b88c;  // (from the original)

u32 f_00715c98(u32 r0, u32 r1) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 zf = 0;
    u32 cf = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r5 = r0;
    r4 = r1;
    r0 = r1;
    r0 = call_0029b88c(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r0 = *gptr<u32>(r0 + 0xcu);  // (from the original)
    r1 = *gptr<u32>(r5 + (r4 << 2) + 0x1cu);  // (from the original)
    zf = r0 == r1;
    cf = r0 >= r1;
    if (!cf || zf) {
        r0 = 1u;
    }
    if (cf && !zf) {
        r0 = 0u;
    }
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_00715c98
GUEST_EXPORT(0x00715c98, d_00715c98::f_00715c98);

// f_00715ffc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00715ffc {


u32 f_00715ffc(u32 r0) {
    u32 r1 = 0;
    u32 r2 = 0;
    u32 r3 = 0;
    r2 = r0;
    r0 = 0u;
    r1 = r0;
L_716008:;
    r3 = u32(*gptr<u8>((r1 & 0xffu) + r2 + 0xc0u));  // (from the original)
    if (r3 == 1u) {
        r0 = r0 + 1u;
        goto L_716034;
    }
    if (r3 == 2u) {
        r0 = r0 + 2u;
        goto L_716034;
    }
    if (r3 == 3u) {
        r0 = r0 + 3u;
    }
L_716034:;
    r1 = r1 + 1u;
    if (s32(r1) < s32(0x18u)) {  // (from the original)
        guest::preempt();
        goto L_716008;
    }
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_00715ffc
GUEST_EXPORT(0x00715ffc, d_00715ffc::f_00715ffc);

// f_00716044: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00716044 {

inline constexpr guest::Function<0x006158d4, u32(u32, u32, u32, u32)> call_006158d4;  // (from the original)

u32 f_00716044(u32 r0, u32 r1) {
    u32 r4 = guest::cpu()->r[4];
    guest::cpu()->r[13] -= 8u;
    r4 = r1;
    r0 = call_006158d4(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = r4 + (r4 << 2);
    r0 = *gptr<u32>(r0 + (r1 << 3) + 0x28u);  // (from the original)
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_00716044
GUEST_EXPORT(0x00716044, d_00716044::f_00716044);

// f_00716060: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00716060 {

inline constexpr guest::Function<0x006c91d0, u32(u32, u32, u32, u32)> call_006c91d0;  // (from the original)

u32 f_00716060(u32 r0) {
    u32 ea = 0;
    u32 r1 = 0;
    u32 r2 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 0x18;  // (from the original)
    r4 = 0u;
    r1 = r0;
    r7 = r4;
    r6 = r4;
    r5 = r4;
    r0 = r4;
L_71607c:;
    r2 = u32(*gptr<u8>((r0 & 0xffu) + r1 + 0xc0u));  // (from the original)
    if (r2 != 1u) {
        if (r2 != 2u) {
            if (r2 == 3u) {
                r4 = r4 + 0x30d40u;  // (from the original)
                r7 = r7 + 1u;
            } else {
                goto L_7160c4;
            }
        }
        r4 = r4 + 0x186a0u;  // (from the original)
        r6 = r6 + 1u;
    }
    r4 = r4 + 0xc350u;  // (from the original)
    r5 = r5 + 1u;
L_7160c4:;
    r0 = r0 + 1u;
    if (s32(r0) < s32(0x18u)) {  // (from the original)
        guest::preempt();
        goto L_71607c;
    }
    guest::cpu()->r[13] = r13;
    r0 = call_006c91d0(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    ea = r0 + 0x14u;  // (from the original)
    *gptr<u32>(ea) = u32(r7);
    r0 = ea;
    *gptr<u32>(r0 + 4u) = u32(r6);
    *gptr<u32>(r0 + 8u) = u32(r5);
    r0 = r4;
    r13 = r13 + 0x18;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_00716060
GUEST_EXPORT(0x00716060, d_00716060::f_00716060);

// f_00716168: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00716168 {

inline constexpr guest::Function<0x006158d4, u32(u32, u32, u32, u32)> call_006158d4;  // (from the original)

u32 f_00716168(u32 r0, u32 r1, u32 r2) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r4 = r1;
    r5 = r2;
    r0 = call_006158d4(r0, r1, r2, guest::cpu()->r[3]);
    r1 = r4 + (r4 << 2);
    r0 = *gptr<u32>(r0 + (r1 << 3) + (r5 << 2) + 0x18u);  // (from the original)
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_00716168
GUEST_EXPORT(0x00716168, d_00716168::f_00716168);

// f_0071618c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0071618c {

inline constexpr guest::Function<0x006158d4, u32(u32, u32, u32, u32)> call_006158d4;  // (from the original)

u32 f_0071618c(u32 r0, u32 r1, u32 r2) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r4 = r1;
    r5 = r2;
    r0 = call_006158d4(r0, r1, r2, guest::cpu()->r[3]);
    r1 = r4 + (r4 << 2);
    r0 = *gptr<u32>(r0 + (r1 << 3) + (r5 << 2) + 0x28u);  // (from the original)
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_0071618c
GUEST_EXPORT(0x0071618c, d_0071618c::f_0071618c);

// f_00716260: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00716260 {

struct __attribute__((packed)) Object_00716260_1 {
    u8 unknown_0[0xc];  // (not used here)
    u8 byte_c;
};
GUEST_OFFSET(Object_00716260_1, byte_c, 0xc);  // (from the original)

inline constexpr guest::Function<0x002fb94c, u32(u32, u32, u32, u32)> call_002fb94c;  // (from the original)
inline constexpr guest::Function<0x002fc934, u32(u32, u32, u32, u32)> call_002fc934;  // (from the original)
inline constexpr guest::Function<0x002fcaf4, u32(u32, u32, u32, u32)> call_002fcaf4;  // (from the original)
inline constexpr guest::Function<0x002fcb34, u32(u32, u32, u32, u32)> call_002fcb34;  // (from the original)
inline constexpr guest::Function<0x002fcb84, u32(u32, u32, u32, u32)> call_002fcb84;  // (from the original)
inline constexpr guest::Function<0x002fcbb0, u32(u32, u32, u32, u32)> call_002fcbb0;  // (from the original)
inline constexpr guest::Function<0x00306e7c, u32(u32, u32, u32, u32)> call_00306e7c;  // (from the original)
inline constexpr guest::Function<0x00306f60, u32(u32, u32, u32, u32)> call_00306f60;  // (from the original)
inline constexpr guest::Function<0x00307040, u32(u32, u32, u32, u32)> call_00307040;  // (from the original)
inline constexpr guest::Function<0x0030716c, u32(u32, u32, u32, u32)> call_0030716c;  // (from the original)
inline constexpr guest::Function<0x00724424, u32(u32, u32, u32, u32)> call_00724424;  // (from the original)

u32 f_00716260(u32 r0, gptr<Object_00716260_1> arg1, u32 r2) {
    u32 ea = 0;
    u32 r1 = arg1.addr();
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r9 = guest::cpu()->r[9];
    u32 r10 = guest::cpu()->r[10];
    u32 r11 = guest::cpu()->r[11];
    u32 r13 = guest::cpu()->r[13];
    u32 r14 = guest::cpu()->r[14];
    u32 zf = 0;
    ea = r13 - 0x30;  // (from the original)
    *gptr<u32>(ea) = u32(r0);
    *gptr<u32>(ea + 4) = u32(r1);
    *gptr<u32>(ea + 8) = u32(r2);
    *gptr<u32>(ea + 0xc) = u32(r4);  // (from the original)
    *gptr<u32>(ea + 0x10) = u32(r5);  // (from the original)
    *gptr<u32>(ea + 0x14) = u32(r6);  // (from the original)
    *gptr<u32>(ea + 0x18) = u32(r7);  // (from the original)
    *gptr<u32>(ea + 0x1c) = u32(r8);  // (from the original)
    *gptr<u32>(ea + 0x20) = u32(r9);  // (from the original)
    *gptr<u32>(ea + 0x24) = u32(r10);  // (from the original)
    *gptr<u32>(ea + 0x28) = u32(r11);  // (from the original)
    *gptr<u32>(ea + 0x2c) = u32(r14);  // (from the original)
    r13 = r13 - 0x58u;  // (from the original)
    r11 = r2;
    r0 = u32(arg1->byte_c);
    r2 = r13 + 0x14u;  // (from the original)
    r1 = r0 & 0x38u;  // (from the original)
    r0 = r0 & 7u;
    zf = r0 == 4u;
    r1 = r1 >> 3;
    r0 = r0 + (r0 << 2);
    if (zf) {
        r4 = r0 + r1 - 5u;
    } else {
        r4 = r0 + r1;
    }
    r0 = r13;
    r1 = 4u;
    guest::cpu()->r[13] = r13;
    r0 = call_00307040(r0, r1, r2, guest::cpu()->r[3]);
    r2 = guest::cpu()->r[2];
    r1 = 0x8eb34cu;  // (from the original)
    *gptr<u32>(r0) = u32(r1);
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_00306e7c(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    guest::cpu()->r[13] = r13;
    r0 = call_002fb94c(r0, r1, r2, guest::cpu()->r[3]);
    r2 = guest::cpu()->r[2];
    r9 = r0;
    r6 = 0u;
    r10 = r9 + 0x6bd0u;  // (from the original)
    r8 = 0x88ef84u + (r4 << 3);  // (from the original)
L_7162cc:;
    r5 = r8 + (r6 << 1);
    r4 = 0u;
    r1 = u32(*gptr<u16>(r5));
    r0 = r13 + 0x20u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002fcbb0(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    guest::cpu()->r[13] = r13;
    r0 = call_002fcb34(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    if (r0 == 0x27u) {  // (from the original)
        goto L_716348;
    }
    r1 = u32(*gptr<u16>(r5));
    r0 = r13 + 0x1cu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002fcbb0(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r4 = 1u;
    r0 = r13 + 0x1cu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002fcb34(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    if (r0 == 0x28u) {  // (from the original)
        goto L_716348;
    }
    r0 = r11;
    guest::cpu()->r[13] = r13;
    r0 = call_002fcaf4(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    if (r0 != 0) {
        goto L_716350;
    }
    r1 = u32(*gptr<u16>(r5));
    r0 = r11;
    guest::cpu()->r[13] = r13;
    r0 = call_002fcb84(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    if (r0 == 0) {
        goto L_716350;
    }
L_716348:;
    r7 = 1u;
    goto L_716354;
L_716350:;
    r7 = 0u;
L_716354:;
    if (r7 != 0) {
        goto L_7163ac;
    }
    if (r9 == 0) {
        goto L_7163d0;
    } else {
        r4 = 0u;
    }
L_716384:;
    r2 = 0u;
    r1 = r4;
    r0 = r10;
    guest::cpu()->r[13] = r13;
    r0 = call_00724424(r0, r1, r2, guest::cpu()->r[3]);
    r2 = guest::cpu()->r[2];
    r1 = u32(*gptr<u16>(r5));
    guest::cpu()->r[13] = r13;
    r0 = call_002fcb84(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    if (r0 == 0) {
        goto L_7163c4;
    }
L_7163ac:;
    r1 = r6;
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_0030716c(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    goto L_7163d0;
L_7163c4:;
    r4 = r4 + 1u;
    if (r4 < 0x10u) {  // (from the original)
        guest::preempt();
        goto L_716384;
    }
L_7163d0:;
    r6 = r6 + 1u;
    if (r6 < 4u) {
        guest::preempt();
        goto L_7162cc;
    }
    if (*gptr<u32>(r13 + 0x10u) != 0) {  // (from the original)
        r0 = r13;
        guest::cpu()->r[13] = r13;
        r0 = call_00306f60(r0, r1, r2, guest::cpu()->r[3]);
        r2 = guest::cpu()->r[2];
        r1 = u32(*gptr<u16>(r8 + (r0 << 1)));
        r0 = r13 + 0x18u;  // (from the original)
        guest::cpu()->r[13] = r13;
        r0 = call_002fcbb0(r0, r1, r2, guest::cpu()->r[3]);
        r2 = guest::cpu()->r[2];
        r0 = *gptr<u32>(r13 + 0x28u);  // (from the original)
        r1 = r13 + 0x18u;  // (from the original)
        guest::cpu()->r[13] = r13;
        r0 = call_002fc934(r0, r1, r2, guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        r0 = r13 + 0x18u;  // (from the original)
        r13 = r13 + 0x34u;  // (from the original)
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
    r1 = 0x7ffeu;  // (from the original)
    r0 = *gptr<u32>(r13 + 0x28u);  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002fcbb0(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r13 = r13 + 0x34u;  // (from the original)
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

}  // namespace d_00716260
GUEST_EXPORT(0x00716260, d_00716260::f_00716260);

// f_007164c0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_007164c0 {

inline constexpr guest::Function<0x006c91d0, u32(u32, u32, u32, u32)> call_006c91d0;  // (from the original)
inline constexpr guest::Function<0x007203bc, u32(u32, u32, u32, u32)> call_007203bc;  // (from the original)
inline constexpr guest::Function<0x0076d7a4, u32(u32, u32, u32, u32)> call_0076d7a4;  // (from the original)

u32 f_007164c0(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 ea = 0;
    u32 res = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r9 = guest::cpu()->r[9];
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 0x20;  // (from the original)
    r4 = 0u;
    r7 = r0;
    r8 = r1;
    r9 = 0x88f040u;  // (from the original)
    r5 = r4;
L_7164d8:;
    r6 = r7 + (r5 + (r5 << 7) + (r5 << 8) << 1);
    r0 = r6 + 0x18u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_007203bc(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        goto L_716550;
    }
    r1 = u32(*gptr<u8>(r6 + 0x36u));  // (from the original)
    r0 = r9 + (r5 + (r5 << 2) << 2) - 4u;
    if ((r1 & 1u) == 0) {
        ea = r0 + 4u;
        r0 = ea;
        r4 = r4 + *gptr<u32>(ea);
    }
    r2 = 0u;
    res = r1 + 1u >> 1;
    r1 = res;
    if (res == 0) {
        goto L_71654c;
    }
    do {
L_716530:;
        res = r1 - 1u;
        r1 = res;
        ea = r0 + 4u;
        r3 = *gptr<u32>(ea);
        r0 = r0 + 8u;
        r4 = r4 + r3;
        r2 = r2 + *gptr<u32>(ea + 4);
        guest::preempt();
    } while (res != 0);
L_71654c:;
    r4 = r4 + r2;
L_716550:;
    r5 = r5 + 1u;
    if (r5 < 6u) {
        guest::preempt();
        goto L_7164d8;
    }
    if (u32(*gptr<u8>(0x5727u + r8)) >> 7 != 0) {  // (from the original)
        r4 = r4 + 0x26930u;  // (from the original)
    }
    if (!(u32(*gptr<u8>(0x5704u + r8)) & 0x10u)) {  // (from the original)
        r0 = 0x2710u;  // (from the original)
        if (r4 >= r0) {
            r4 = r4 - r0;
        }
    }
    r0 = r8;
    guest::cpu()->r[13] = r13;
    r0 = call_0076d7a4(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (!(u32(r0 >= r4) && !u32(r0 == r4))) {
        r0 = r8;
        guest::cpu()->r[13] = r13;
        r0 = call_0076d7a4(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r4 = r4 - r0;
    }
    guest::cpu()->r[13] = r13;
    r0 = call_006c91d0(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    *gptr<u32>(r0 + 0xcu) = u32(r4);  // (from the original)
    r0 = r4;
    r13 = r13 + 0x20;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_007164c0
GUEST_EXPORT(0x007164c0, d_007164c0::f_007164c0);

// f_007165d0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_007165d0 {

struct __attribute__((packed)) Object_007165d0_0 {
    u8 unknown_0[0x36];  // (not used here)
    u8 byte_36;
};
GUEST_OFFSET(Object_007165d0_0, byte_36, 0x36);  // (from the original)

inline constexpr guest::Function<0x00305158, u32(u32, u32, u32, u32)> call_00305158;  // (from the original)

u32 f_007165d0(gptr<Object_007165d0_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 zf = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r5 = r0;
    r0 = u32(arg0->byte_36);
    if (r0 != 1u) {
        if (r0 == 0) {
            r0 = 1u;
            goto L_71660c;
        }
        zf = r0 == 2u;
        if (!zf) {
            zf = r0 == 3u;
        }
        if (zf) {
            goto L_71660c;
        }
        if (r0 == 4u) {
            goto L_716610;
        }
    }
    r0 = 0u;
L_71660c:;
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    return r0;
L_716610:;
    if (u32(*gptr<u8>(r5 + 0x338u)) == 1u) {  // (from the original)
        r0 = 4u;
        guest::preempt();
        goto L_71660c;
    }
    r4 = 0u;
    r0 = r5 + 0x61cu;  // (from the original)
    r0 = call_00305158(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    if (r0 != 0) {
        r4 = 1u;
    }
    r0 = r5 + 0xc20u;  // (from the original)
    r0 = call_00305158(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    if (r0 != 0) {
        r4 = r4 + 1u;
    }
    r0 = r5 + 0x91eu;  // (from the original)
    r0 = call_00305158(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    if (r0 != 0) {
        r4 = r4 + 1u;
    }
    r0 = r5 + 0xf22u;  // (from the original)
    r0 = call_00305158(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    if (r0 != 0) {
        r4 = r4 + 1u;
    }
    r0 = r4 + 5u & 0xffu;  // (from the original)
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    return r0;
}

}  // namespace d_007165d0
GUEST_EXPORT(0x007165d0, d_007165d0::f_007165d0);

// f_00716894: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00716894 {


u32 f_00716894(u32 r0, u32 r1) {
    u32 r2 = 0;
    r1 = u32(*gptr<u8>(r0 + r1));
    r2 = 0x88f29cu;  // (from the original)
    r0 = 0u;
    do {
L_7168a0:;
        if (u32(*gptr<u8>(r2 + r0)) == r1) {
            guest::cpu()->r[1] = r1;
            return r0;
        }
        if (!(u32(*gptr<u8>(r2 + r0 + 1u)) != r1)) {
            r0 = r0 + 1u;
            guest::cpu()->r[1] = r1;
            return r0;
        }
        r0 = r0 + 2u;
        guest::preempt();
    } while (s32(r0) < s32(0x28u));  // (from the original)
    r0 = ~0u;
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_00716894
GUEST_EXPORT(0x00716894, d_00716894::f_00716894);

// f_007168dc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_007168dc {


u32 f_007168dc(u32 r0, u32 r1) {
    r0 = u32(*gptr<u8>(r0 + r1));
    if (r0 != 0) {
        r0 = 1u;
    }
    return r0;
}

}  // namespace d_007168dc
GUEST_EXPORT(0x007168dc, d_007168dc::f_007168dc);

// f_00716928: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00716928 {


u32 f_00716928(u32 r0) {
    u32 r1 = 0;
    r1 = 0u;
    do {
L_71692c:;
        if (u32(*gptr<u8>(r0 + r1)) != 0) {
            r0 = 1u;
            guest::cpu()->r[1] = r1;
            return r0;
        }
        if (!(u32(*gptr<u8>(r0 + r1 + 1u)) == 0)) {
            r0 = 1u;
            guest::cpu()->r[1] = r1;
            return r0;
        }
        r1 = r1 + 2u;
        guest::preempt();
    } while (s32(r1) < s32(0x28u));  // (from the original)
    r0 = 0u;
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_00716928
GUEST_EXPORT(0x00716928, d_00716928::f_00716928);

// f_00716b74: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00716b74 {

inline constexpr guest::Function<0x002fae84, u32(u32, u32, u32, u32)> call_002fae84;  // (from the original)
inline constexpr guest::Function<0x002fb328, u32(u32, u32, u32, u32)> call_002fb328;  // (from the original)
inline constexpr guest::Function<0x002fb378, u32(u32, u32, u32, u32)> call_002fb378;  // (from the original)
inline constexpr guest::Function<0x00300650, u32(u32, u32, u32, u32)> call_00300650;  // (from the original)
inline constexpr guest::Function<0x0056c0e4, u32(u32, u32, u32, u32)> call_0056c0e4;  // (from the original)
inline constexpr guest::Function<0x00758de4, u32(u32, u32, u32, u32)> call_00758de4;  // (from the original)
inline constexpr guest::Function<0x00758e08, u32(u32, u32, u32, u32)> call_00758e08;  // (from the original)

u32 f_00716b74(u32 r0, u32 r1) {
    u32 res = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r13 = guest::cpu()->r[13];
    u32 zf = 0;
    r13 = r13 - 0x18u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002fae84(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = 0x6add4u;  // (from the original)
    res = r0 + r1;
    r0 = res;
    if (res != 0) {
        r0 = u32(*gptr<u16>(r0 + 0xeu));  // (from the original)
        res = r0 - 0x2007u;  // (from the original)
        r1 = res;
        if (res == 0) {
            r0 = 0u;
            r13 = r13 + 0x18u;  // (from the original)
            guest::cpu()->r[1] = r1;
            guest::cpu()->r[13] = r13;
            return r0;
        }
    }
    guest::cpu()->r[13] = r13;
    r0 = call_0056c0e4(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 != 0) {
        r0 = 0u;
        r13 = r13 + 0x18u;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_00300650(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r4 = *gptr<u32>(r13 + 4u);
    guest::cpu()->r[13] = r13;
    r0 = call_002fb378(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = r4 << 8;
    r4 = *gptr<u32>(r0 + 4u);
    r1 = r1 >> 0x18;  // (from the original)
    if (r1 == 6u) {
        r0 = 0u;
        r13 = r13 + 0x18u;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    guest::cpu()->r[13] = r13;
    r0 = call_002fb328(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r0 = r0 + 0x62250u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00758de4(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 != 0) {
        if (u32(s32(r4) >> 0x18) - 2u < 0x12u) {  // (from the original)
            r0 = 0u;
            r13 = r13 + 0x18u;  // (from the original)
            guest::cpu()->r[1] = r1;
            guest::cpu()->r[13] = r13;
            return r0;
        }
        r0 = 1u;
        r13 = r13 + 0x18u;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    guest::cpu()->r[13] = r13;
    r0 = call_002fb328(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r0 = r0 + 0x62250u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00758e08(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    zf = r0 == 0;
    r0 = u32(s32(r4) >> 0x18);  // (from the original)
    if (!zf) {
        if (r0 - 5u < 0xfu) {  // (from the original)
            r0 = 0u;
            r13 = r13 + 0x18u;  // (from the original)
            guest::cpu()->r[1] = r1;
            guest::cpu()->r[13] = r13;
            return r0;
        }
        r0 = 1u;
        r13 = r13 + 0x18u;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    if (r0 - 2u < 0x12u) {  // (from the original)
        r0 = 0u;
        r13 = r13 + 0x18u;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    r0 = 1u;
    r13 = r13 + 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_00716b74
GUEST_EXPORT(0x00716b74, d_00716b74::f_00716b74);

// f_00716c60: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00716c60 {

inline constexpr guest::Function<0x002fb328, u32(u32, u32, u32, u32)> call_002fb328;  // (from the original)
inline constexpr guest::Function<0x002fb378, u32(u32, u32, u32, u32)> call_002fb378;  // (from the original)
inline constexpr guest::Function<0x00308efc, u32(u32, u32, u32, u32)> call_00308efc;  // (from the original)
inline constexpr guest::Function<0x00758de4, u32(u32, u32, u32, u32)> call_00758de4;  // (from the original)
inline constexpr guest::Function<0x00758e08, u32(u32, u32, u32, u32)> call_00758e08;  // (from the original)

u32 f_00716c60(u32 r0, u32 r1) {
    u32 r4 = guest::cpu()->r[4];
    u32 r13 = guest::cpu()->r[13];
    u32 zf = 0;
    r13 = r13 - 0x18u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002fb378(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = *gptr<u32>(r0);
    r4 = *gptr<u32>(r0 + 4);
    *gptr<u32>(r13 + 8u) = u32(*gptr<u32>(r0 + 8u));
    r0 = r13;
    *gptr<u32>(r13) = u32(r1);
    *gptr<u32>(r13 + 4) = u32(r4);
    guest::cpu()->r[13] = r13;
    r0 = call_00308efc(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r0 = u32(*gptr<u8>(r13 + 6u));
    if (r0 != 6u) {
        guest::cpu()->r[13] = r13;
        r0 = call_002fb328(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        r0 = r0 + 0x62250u;  // (from the original)
        guest::cpu()->r[13] = r13;
        r0 = call_00758de4(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        if (r0 == 0) {
            goto L_716d2c;
        }
        if (u32(s32(r4) >> 0x18) - 2u >= 8u) {  // (from the original)
            r0 = 1u;
            r13 = r13 + 0x18u;  // (from the original)
            guest::cpu()->r[1] = r1;
            guest::cpu()->r[13] = r13;
            return r0;
        }
        r0 = 0u;
        r13 = r13 + 0x18u;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    guest::cpu()->r[13] = r13;
    r0 = call_002fb328(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r0 = r0 + 0x62250u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00758de4(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 != 0) {
        if (u32(s32(r4) >> 0x18) - 0xau < 0xeu) {  // (from the original)
            r0 = 1u;
            r13 = r13 + 0x18u;  // (from the original)
            guest::cpu()->r[1] = r1;
            guest::cpu()->r[13] = r13;
            return r0;
        }
        r0 = 0u;
        r13 = r13 + 0x18u;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    guest::cpu()->r[13] = r13;
    r0 = call_002fb328(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r0 = r0 + 0x62250u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00758e08(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    zf = r0 == 0;
    r0 = u32(s32(r4) >> 0x18) - 0xcu;  // (from the original)
    if (!zf) {
        if (r0 < 0xcu) {  // (from the original)
            r0 = 1u;
            r13 = r13 + 0x18u;  // (from the original)
            guest::cpu()->r[1] = r1;
            guest::cpu()->r[13] = r13;
            return r0;
        }
        r0 = 0u;
        r13 = r13 + 0x18u;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    if (r0 < 0xcu) {  // (from the original)
        r0 = 1u;
        r13 = r13 + 0x18u;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    r0 = 0u;
    r13 = r13 + 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
L_716d2c:;
    guest::cpu()->r[13] = r13;
    r0 = call_002fb328(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r0 = r0 + 0x62250u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00758e08(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    zf = r0 == 0;
    r0 = u32(s32(r4) >> 0x18);  // (from the original)
    if (!zf) {
        if (r0 - 5u >= 7u) {
            r0 = 1u;
            r13 = r13 + 0x18u;  // (from the original)
            guest::cpu()->r[1] = r1;
            guest::cpu()->r[13] = r13;
            return r0;
        }
        r0 = 0u;
        r13 = r13 + 0x18u;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    if (r0 - 2u < 0xau) {  // (from the original)
        r0 = 0u;
        r13 = r13 + 0x18u;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    r0 = 1u;
    r13 = r13 + 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_00716c60
GUEST_EXPORT(0x00716c60, d_00716c60::f_00716c60);

// f_00716d80: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00716d80 {

struct __attribute__((packed)) Object_00716d80_0 {
    u8 unknown_0[0x4];  // (not used here)
    u16 half_4;
    u16 half_6;
};
GUEST_OFFSET(Object_00716d80_0, half_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_00716d80_0, half_6, 0x6);  // (from the original)


u32 f_00716d80(gptr<Object_00716d80_0> arg0) {
    u32 ea = 0;
    u32 res = 0;
    u32 r0 = arg0.addr();
    u32 r1 = 0;
    u32 r2 = 0;
    u32 r3 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r12 = 0;
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 0xc;  // (from the original)
    r1 = r0 + 4u;
    r2 = 0xffffu;  // (from the original)
    r4 = u32(arg0->half_6);
    r3 = 0u;
    if (u32(arg0->half_4) != r2) {
        r3 = 1u;
    }
    r12 = 0u;
    r5 = 2u;
    do {
L_716da8:;
        ea = r1 + 4u;
        r1 = ea;
        if (r4 != r2) {
            r3 = r3 + 1u;
        }
        r4 = u32(*gptr<u16>(r1 + 2u));
        if (u32(*gptr<u16>(ea)) != r2) {
            r12 = r12 + 1u;
        }
        res = r5 - 1u;
        r5 = res;
        guest::preempt();
    } while (res != 0);
    r1 = u32(*gptr<u16>(r0 + 0xeu));  // (from the original)
    r0 = r3 + r12;
    r13 = r13 + 0xc;  // (from the original)
    if (r1 != r2) {
        r0 = r0 + 1u;
    }
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_00716d80
GUEST_EXPORT(0x00716d80, d_00716d80::f_00716d80);

// f_00716de4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00716de4 {

inline constexpr guest::Function<0x002fae84, u32(u32, u32, u32, u32)> call_002fae84;  // (from the original)
inline constexpr guest::Function<0x002fb378, u32(u32, u32, u32, u32)> call_002fb378;  // (from the original)
inline constexpr guest::Function<0x00300650, u32(u32, u32, u32, u32)> call_00300650;  // (from the original)
inline constexpr guest::Function<0x0056c0e4, u32(u32, u32, u32, u32)> call_0056c0e4;  // (from the original)

u32 f_00716de4(u32 r0, u32 r1) {
    u32 res = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 0x18u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002fae84(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = 0x6add4u;  // (from the original)
    res = r0 + r1;
    r0 = res;
    if (res != 0) {
        r0 = u32(*gptr<u16>(r0 + 0xeu));  // (from the original)
        res = r0 - 0x2007u;  // (from the original)
        r1 = res;
        if (res == 0) {
            r0 = 0u;
            r13 = r13 + 0x18u;  // (from the original)
            guest::cpu()->r[1] = r1;
            guest::cpu()->r[13] = r13;
            return r0;
        }
    }
    guest::cpu()->r[13] = r13;
    r0 = call_0056c0e4(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 != 0) {
        r0 = 0u;
        r13 = r13 + 0x18u;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_00300650(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r4 = *gptr<u32>(r13 + 4u);
    guest::cpu()->r[13] = r13;
    r0 = call_002fb378(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r0 = *gptr<u32>(r0 + 4u);
    r1 = r4 << 8 >> 0x18;  // (from the original)
    if (r1 != 6u) {
        r0 = 0u;
        r13 = r13 + 0x18u;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    if (s32(u32(s32(r0) >> 0x18)) >= s32(0x14u)) {  // (from the original)
        r0 = 1u;
        r13 = r13 + 0x18u;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    r0 = 0u;
    r13 = r13 + 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_00716de4
GUEST_EXPORT(0x00716de4, d_00716de4::f_00716de4);

// f_00716e68: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00716e68 {

inline constexpr guest::Function<0x0030b6c4, u32(u32, u32, u32, u32)> call_0030b6c4;  // (from the original)

u32 f_00716e68(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 ea = 0;
    u32 res = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r12 = 0;
    u32 r13 = guest::cpu()->r[13];
    u32 r14 = guest::cpu()->r[14];
    r13 = r13 - 0x10;  // (from the original)
    r4 = r0;
    guest::cpu()->r[13] = r13;
    r0 = call_0030b6c4(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    if (r0 == 0) {
        goto L_716f18;
    }
    r0 = *gptr<u32>(0xaaf14cu);  // (from the original)
    if (r0 == 0) {
        goto L_716f18;
    }
    r0 = r0 + 0x5700u;  // (from the original)
    res = u32(*gptr<u8>(r0)) << 0x1b;  // (from the original)
    r1 = res;
    if (!(res >> 0x1f)) {  // (from the original)
        goto L_716f14;
    }
    res = u32(*gptr<u8>(r0 + 0x13u)) >> 7;  // (from the original)
    if (res == 0) {
        goto L_716f14;
    }
    if (u32(*gptr<u8>(r4)) >= 2u) {
        goto L_716f14;
    }
    r1 = 0xffffu;  // (from the original)
    r0 = r4 + 4u;
    r2 = 0u;
    r12 = u32(*gptr<u16>(r0 + 2u));
    if (u32(*gptr<u16>(r4 + 4u)) != r1) {
        r2 = 1u;
    }
    r3 = 0u;
    r14 = 2u;
    do {
L_716ed8:;
        ea = r0 + 4u;
        r0 = ea;
        if (r12 != r1) {
            r2 = r2 + 1u;
        }
        r12 = u32(*gptr<u16>(r0 + 2u));
        if (u32(*gptr<u16>(ea)) != r1) {
            r3 = r3 + 1u;
        }
        res = r14 - 1u;
        r14 = res;
        guest::preempt();
    } while (res != 0);
    r0 = r2 + r3;
    if (u32(*gptr<u16>(r4 + 0xeu)) != r1) {  // (from the original)
        r0 = r0 + 1u;
    }
    if (r0 < 6u) {
        r0 = 1u;
        goto L_716f18;
    }
L_716f14:;
    r0 = 0u;
L_716f18:;
    r13 = r13 + 0x10;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_00716e68
GUEST_EXPORT(0x00716e68, d_00716e68::f_00716e68);

// f_007179a0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_007179a0 {

inline constexpr guest::Function<0x00300888, u32(u32, u32, u32, u32)> call_00300888;  // (from the original)
inline constexpr guest::Function<0x00535ab0, u32(u32, u32, u32, u32)> call_00535ab0;  // (from the original)
inline constexpr guest::Function<0x006a5e34, u32(u32, u32, u32, u32)> call_006a5e34;  // (from the original)

u32 f_007179a0(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 0x18u;  // (from the original)
    r5 = r1;
    r4 = r2;
    guest::cpu()->r[13] = r13;
    r0 = call_006a5e34(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    if (r0 == 0) {
        r13 = r13 + 0x18u;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    r3 = r4;
    r2 = 0x28u;  // (from the original)
    r1 = r13 + 4u;
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_00300888(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        r13 = r13 + 0x18u;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    r1 = *gptr<u32>(r13);
    r2 = *gptr<u32>(r13 + 4);
    r0 = r5;
    guest::cpu()->r[13] = r13;
    r0 = call_00535ab0(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r13 = r13 + 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_007179a0
GUEST_EXPORT(0x007179a0, d_007179a0::f_007179a0);

// f_007179ec: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_007179ec {


u32 f_007179ec(u32 r0, u32 r1) {
    u32 res = 0;
    u32 nf = 0;
    u32 vf = 0;
    if (r1 >= 8u) {
        r0 = ~0u;
        return r0;
    }
    r0 = u32(s32(s8(*gptr<u8>(r0 + r1 + 0x34u))));  // (from the original)
    res = r0;
    nf = res >> 0x1f;  // (from the original)
    vf = (r0 & (r0 ^ res)) >> 0x1f;  // (from the original)
    if (nf == vf) {
        res = r0 - 4u;
        nf = res >> 0x1f;  // (from the original)
        vf = ((r0 ^ 4u) & (r0 ^ res)) >> 0x1f;  // (from the original)
    }
    if (nf == vf) {
        r0 = r0 - 4u;
        return r0;
    }
    r0 = ~0u;
    return r0;
}

}  // namespace d_007179ec
GUEST_EXPORT(0x007179ec, d_007179ec::f_007179ec);

// f_00717aac: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00717aac {


u32 f_00717aac(u32 r0, u32 r1) {
    u32 res = 0;
    u32 nf = 0;
    u32 vf = 0;
    if (r1 >= 8u) {
        r0 = 0u;
        return r0;
    }
    r0 = u32(s32(s8(*gptr<u8>(r0 + r1 + 0x34u))));  // (from the original)
    res = r0;
    if (res >> 0x1f == (r0 & (r0 ^ res)) >> 0x1f) {  // (from the original)
        if (s32(r0) < s32(4u)) {
            r0 = 1u;
            return r0;
        }
    }
    res = r0;
    nf = res >> 0x1f;  // (from the original)
    vf = (r0 & (r0 ^ res)) >> 0x1f;  // (from the original)
    if (nf == vf) {
        res = r0 - 4u;
        nf = res >> 0x1f;  // (from the original)
        vf = ((r0 ^ 4u) & (r0 ^ res)) >> 0x1f;  // (from the original)
    }
    if (nf != vf) {
        r0 = 0u;
        return r0;
    }
    r0 = r0 - 4u;
    res = r0;
    if (res >> 0x1f == (r0 & (r0 ^ res)) >> 0x1f) {  // (from the original)
        r0 = 2u;
        return r0;
    }
    r0 = 0u;
    return r0;
}

}  // namespace d_00717aac
GUEST_EXPORT(0x00717aac, d_00717aac::f_00717aac);

// f_00718364: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00718364 {

struct __attribute__((packed)) Object_00718364_0 {
    u16 half_0;
};
GUEST_OFFSET(Object_00718364_0, half_0, 0x0);  // (from the original)


u32 f_00718364(gptr<Object_00718364_0> arg0) {
    u32 r0 = arg0.addr();
    u32 zf = 0;
    u32 cf = 0;
    r0 = u32(arg0->half_0);
    zf = r0 == 0xfcu;  // (from the original)
    cf = r0 >= 0xfcu;  // (from the original)
    if (!cf || zf) {
        r0 = 1u;
    }
    if (cf && !zf) {
        r0 = 0u;
    }
    return r0;
}

}  // namespace d_00718364
GUEST_EXPORT(0x00718364, d_00718364::f_00718364);

// f_007186c4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_007186c4 {

struct __attribute__((packed)) Object_007186c4_1 {
    u8 unknown_0[0x846bcb];  // (not used here)
    u8 byte_846bcb;
};
GUEST_OFFSET(Object_007186c4_1, byte_846bcb, 0x846bcb);  // (from the original)

inline constexpr guest::Function<0x0062512c, u32(u32, u32, u32, u32)> call_0062512c;  // (from the original)

u32 f_007186c4(u32 r0, gptr<Object_007186c4_1> arg1) {
    u32 res = 0;
    u32 r1 = arg1.addr();
    u32 r2 = 0;
    u32 r3 = 0;
    res = r1 - 8u;
    r2 = r0;
    if (res >> 0x1f == ((r1 ^ 8u) & (r1 ^ res)) >> 0x1f) {  // (from the original)
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r3 = r1 + (r1 << 1);
    r0 = u32(arg1->byte_846bcb);
    r1 = r2 + (r3 << 1) + 0xe4u;  // (from the original)
    r2 = 1u;
    return call_0062512c(r0, r1, r2, r3);
}

}  // namespace d_007186c4
GUEST_EXPORT(0x007186c4, d_007186c4::f_007186c4);

// f_007187e8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_007187e8 {

inline constexpr guest::Function<0x00284b48, u32(u32, u32, u32, u32)> call_00284b48;  // (from the original)
inline constexpr guest::Function<0x005b4cc0, u32(u32, u32, u32, u32)> call_005b4cc0;  // (from the original)

u32 f_007187e8(u32 r0_unused, u32 r1, u32 r2, u32 r3) {
    u32 r0 = 0;
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
    r0 = *gptr<u32>(0x94edd8u);  // (from the original)
    if (r0 == 0) {
        goto L_718998;
    }
    r5 = 0u;
    r7 = r5;
    r6 = r5;
    r8 = r5;
    r0 = 0xa5u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_005b4cc0(r0, r1, r2, r3);
    r2 = u32(*gptr<u16>(r0));
    r1 = 0u;
    if (!u32(r2 >= 0u) || u32(r2 == 0)) {
        goto L_718994;
    }
    r0 = *gptr<u32>(r0 + 4u);
    r12 = 4u;
    r4 = 2u;
L_718830:;
    r3 = u32(*gptr<u16>(r0 + (r1 << 3)));
    if (r3 != 0) {
        if (r3 == 1u) {
            goto L_718860;
        }
        goto L_718870;
    }
    r3 = r12 + (r1 << 3);
    r5 = *gptr<u32>(r0 + r3);
    r7 = u32(*gptr<u16>(r0 + (r4 + (r1 << 3))));
    goto L_718870;
L_718860:;
    r3 = r12 + (r1 << 3);
    r6 = *gptr<u32>(r0 + r3);
    r8 = u32(*gptr<u16>(r0 + (r4 + (r1 << 3))));
L_718870:;
    r1 = r1 + 1u;
    if (u32(r2 >= r1) && !u32(r2 == r1)) {
        guest::preempt();
        goto L_718830;
    }
    if (r7 == 0) {
        goto L_718948;
    }
    if (r5 == 0) {
        goto L_718948;
    }
    r4 = 0u;
    if (!u32(r7 >= 0u) || u32(r7 == 0)) {
        goto L_718948;
    }
    r9 = 0x886ed6u;  // (from the original)
    r10 = 0x950800u;  // (from the original)
    r11 = 0x886eecu;  // (from the original)
L_7188a4:;
    r1 = u32(*gptr<u16>(r9));
    r0 = u32(*gptr<u16>(r5 + (r4 << 3)));
    if (r0 == r1) {
        r0 = *gptr<u32>(r10);
        if (r0 == 0) {
            goto L_718998;
        }
        goto L_71893c;
    }
    r1 = u32(*gptr<u16>(r11));
    if (r0 == r1) {
        r0 = *gptr<u32>(0x94dfd4u);  // (from the original)
        if (r0 == 0) {
            goto L_718998;
        }
        goto L_71893c;
    }
    r1 = u32(*gptr<u16>(0x886edau));  // (from the original)
    if (r0 == r1) {
        guest::cpu()->r[13] = r13;
        r0 = call_00284b48(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        if (r0 == 0) {
            goto L_718998;
        }
        goto L_71893c;
    }
    r1 = u32(*gptr<u16>(0x886f00u));  // (from the original)
    if (r0 != r1) {
        goto L_71893c;
    }
    if (u32(*gptr<u8>(0x9506b0u)) != 0xffu) {  // (from the original)
        goto L_71899c;
    }
    if (*gptr<u32>(0x9506b4u) == 0) {  // (from the original)
        goto L_71899c;
    }
L_71893c:;
    r4 = r4 + 1u;
    if (r4 < r7) {
        guest::preempt();
        goto L_7188a4;
    }
L_718948:;
    zf = r8 == 0;
    if (!zf) {
        zf = r6 == 0;
    }
    if (zf) {
        goto L_718994;
    }
    r0 = 0u;
    if (!u32(r8 >= 0u) || u32(r8 == 0)) {
        goto L_718994;
    }
    r12 = 0x886f74u;  // (from the original)
    r1 = *gptr<u32>(0x94dfbcu);  // (from the original)
    do {
L_71896c:;
        zf = u32(*gptr<u16>(r6 + ((r0 << 3) - r0 << 2))) == u32(*gptr<u16>(r12));
        if (zf) {
            zf = r1 == 0;
        }
        if (zf) {
            goto L_71899c;
        }
        r0 = r0 + 1u;
        guest::preempt();
    } while (r0 < r8);
L_718994:;
    r0 = 1u;
L_718998:;
    r13 = r13 + 0x28;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
L_71899c:;
    r0 = 0u;
    r13 = r13 + 0x28;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_007187e8
GUEST_EXPORT(0x007187e8, d_007187e8::f_007187e8);

// f_00718c1c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00718c1c {

struct __attribute__((packed)) Object_00718c1c_0 {
    u8 unknown_0[0xc];  // (not used here)
    u32 word_c;
    u32 word_10;
};
GUEST_OFFSET(Object_00718c1c_0, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Object_00718c1c_0, word_10, 0x10);  // (from the original)


u32 f_00718c1c(gptr<Object_00718c1c_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r1 = 0;
    u32 r2 = 0;
    u32 r3 = 0;
    r1 = 0x87919cu;  // (from the original)
    r3 = arg0->word_c;
    r2 = *gptr<u32>(r1);
    r1 = *gptr<u32>(r1 + 4u);
    if (r3 != r2) {
        r0 = 0u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    if (r3 == 0) {
        if (((arg0->word_10 | r1) & 1u) == 0) {
            r0 = 1u;
            guest::cpu()->r[1] = r1;
            return r0;
        }
    }
    if (*gptr<u32>(r0 + 0x10u) != r1) {  // (from the original)
        r0 = 0u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r0 = 1u;
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_00718c1c
GUEST_EXPORT(0x00718c1c, d_00718c1c::f_00718c1c);

// f_00718c6c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00718c6c {

struct __attribute__((packed)) Object_00718c6c_0 {
    u8 unknown_0[0xc];  // (not used here)
    u32 word_c;
    u32 word_10;
};
GUEST_OFFSET(Object_00718c6c_0, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Object_00718c6c_0, word_10, 0x10);  // (from the original)


u32 f_00718c6c(gptr<Object_00718c6c_0> arg0) {
    u32 ea = 0;
    u32 r0 = arg0.addr();
    u32 r1 = 0;
    u32 r3 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r12 = 0;
    u32 r13 = guest::cpu()->r[13];
    r12 = 0x87919cu;  // (from the original)
    r13 = r13 - 4u;
    r3 = arg0->word_c;
    r1 = *gptr<u32>(r12 + 0x24u);  // (from the original)
    if (r3 != *gptr<u32>(r12 + 0x20u)) {  // (from the original)
        goto L_718cb4;
    }
    if (r3 == 0) {
        if (((arg0->word_10 | r1) & 1u) == 0) {
            goto L_718cac;
        }
    }
    if (*gptr<u32>(r0 + 0x10u) != r1) {  // (from the original)
        goto L_718cb4;
    }
L_718cac:;
    r4 = 1u;
    goto L_718cb8;
L_718cb4:;
    r4 = 0u;
L_718cb8:;
    ea = r12 + 0x18u;  // (from the original)
    r1 = *gptr<u32>(ea + 4u);
    if (r3 != *gptr<u32>(ea)) {
        goto L_718cf4;
    }
    if (r3 == 0) {
        if (((*gptr<u32>(r0 + 0x10u) | r1) & 1u) == 0) {  // (from the original)
            goto L_718cec;
        }
    }
    if (*gptr<u32>(r0 + 0x10u) != r1) {  // (from the original)
        goto L_718cf4;
    }
L_718cec:;
    r0 = 1u;
    r0 = r0 | r4;
    r13 = r13 + 4u;
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
L_718cf4:;
    r0 = 0u;
    r0 = r0 | r4;
    r13 = r13 + 4u;
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_00718c6c
GUEST_EXPORT(0x00718c6c, d_00718c6c::f_00718c6c);

// f_00718d38: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00718d38 {

struct __attribute__((packed)) Object_00718d38_0 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
    u8 unknown_8[0x106];  // (not used here)
    u8 byte_10e;
};
GUEST_OFFSET(Object_00718d38_0, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_00718d38_0, byte_10e, 0x10e);  // (from the original)

inline constexpr guest::Function<0x0075cd14, u32(u32, u32, u32, u32)> call_0075cd14;  // (from the original)
inline constexpr guest::Function<0x0075d0f0, u32(u32, u32, u32, u32)> call_0075d0f0;  // (from the original)

u32 f_00718d38(gptr<Object_00718d38_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r1 = 0;
    guest::cpu()->r[13] -= 8u;
    r1 = u32(arg0->byte_10e);
    if (r1 != 0) {
        r0 = arg0->word_4;
        if (r0 == 0) {
            r0 = 0u;
            guest::cpu()->r[13] += 8u;
            guest::cpu()->r[1] = r1;
            return r0;
        }
        r0 = call_0075d0f0(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        if (r0 == 0) {
            r0 = 0u;
            guest::cpu()->r[13] += 8u;
            guest::cpu()->r[1] = r1;
            return r0;
        }
        r0 = 1u;
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r0 = *gptr<u32>(r0 + 0x84u);  // (from the original)
    if (r0 == 0) {
        r0 = 0u;
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r0 = call_0075cd14(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 == 0) {
        r0 = 0u;
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r0 = 1u;
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_00718d38
GUEST_EXPORT(0x00718d38, d_00718d38::f_00718d38);

// f_00718dd8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00718dd8 {

inline constexpr guest::Function<0x0071ef10, u32(u32, u32, u32, u32)> call_0071ef10;  // (from the original)

u32 f_00718dd8(u32 r0) {
    r0 = r0 + 0x458u;  // (from the original)
    guest::cpu()->r[13] -= 8u;
    r0 = call_0071ef10(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    if (r0 == 0) {
        r0 = 1u;
    } else {
        r0 = 0u;
    }
    guest::cpu()->r[13] += 8u;
    return r0;
}

}  // namespace d_00718dd8
GUEST_EXPORT(0x00718dd8, d_00718dd8::f_00718dd8);

// f_0071900c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0071900c {

struct __attribute__((packed)) Object_0071900c_0 {
    u8 unknown_0[0x118];  // (not used here)
    u32 word_118;
};
GUEST_OFFSET(Object_0071900c_0, word_118, 0x118);  // (from the original)


u32 f_0071900c(gptr<Object_0071900c_0> arg0, u32 r1) {
    u32 r0 = arg0.addr();
    r0 = arg0->word_118;
    if (r0 == 0) {
        r0 = 0x18u;  // (from the original)
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r1 = *gptr<u32>(*gptr<u32>(r0) + 0x10u);  // (from the original)
    return guest::call_address<u32>(r1, r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_0071900c
GUEST_EXPORT(0x0071900c, d_0071900c::f_0071900c);

// f_0071902c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0071902c {

struct __attribute__((packed)) Object_0071902c_0 {
    u8 unknown_0[0x118];  // (not used here)
    u32 word_118;
};
GUEST_OFFSET(Object_0071902c_0, word_118, 0x118);  // (from the original)


u32 f_0071902c(gptr<Object_0071902c_0> arg0, u32 r1) {
    u32 r0 = arg0.addr();
    r0 = arg0->word_118;
    if (r0 == 0) {
        r0 = 0x18u;  // (from the original)
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r1 = *gptr<u32>(*gptr<u32>(r0) + 0x14u);  // (from the original)
    return guest::call_address<u32>(r1, r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_0071902c
GUEST_EXPORT(0x0071902c, d_0071902c::f_0071902c);

// f_0071904c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0071904c {

struct __attribute__((packed)) Object_0071904c_0 {
    u8 unknown_0[0x118];  // (not used here)
    u32 word_118;
};
GUEST_OFFSET(Object_0071904c_0, word_118, 0x118);  // (from the original)


u32 f_0071904c(gptr<Object_0071904c_0> arg0, u32 r1) {
    u32 r0 = arg0.addr();
    r0 = arg0->word_118;
    if (r0 == 0) {
        r0 = 0x18u;  // (from the original)
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r1 = *gptr<u32>(*gptr<u32>(r0) + 0x1cu);  // (from the original)
    return guest::call_address<u32>(r1, r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_0071904c
GUEST_EXPORT(0x0071904c, d_0071904c::f_0071904c);

// f_0071906c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0071906c {

struct __attribute__((packed)) Object_0071906c_0 {
    u8 unknown_0[0x118];  // (not used here)
    u32 word_118;
};
GUEST_OFFSET(Object_0071906c_0, word_118, 0x118);  // (from the original)


u32 f_0071906c(gptr<Object_0071906c_0> arg0, u32 r1) {
    u32 r0 = arg0.addr();
    r0 = arg0->word_118;
    if (r0 == 0) {
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r1 = *gptr<u32>(*gptr<u32>(r0) + 0x18u);  // (from the original)
    return guest::call_address<u32>(r1, r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_0071906c
GUEST_EXPORT(0x0071906c, d_0071906c::f_0071906c);

// f_0071a040: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0071a040 {


u32 f_0071a040(u32 r0_unused, u32 r1) {
    u32 r0 = 0;
    r0 = 0x83b146u;  // (from the original)
    if (r1 < 4u) {
        r0 = r0 + (r1 << 4);
    }
    return r0;
}

}  // namespace d_0071a040
GUEST_EXPORT(0x0071a040, d_0071a040::f_0071a040);

// f_0071a054: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0071a054 {


u32 f_0071a054(u32 r0, u32 r1) {
    u32 zf = 0;
    float S0 = 0;
    if (r1 >= 0x12u) {  // (from the original)
        S0 = std::bit_cast<float>(*gptr<u32>(0x71a080u));  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->s[0] = S0;
        return r0;
    }
    zf = u32(*gptr<u8>(r0 + r1 + 0x434u)) == 0;  // (from the original)
    if (zf) {
        r1 = (r1 << 3) - r1;
    }
    r0 = r0 + (r1 << 2);
    if (zf) {
        S0 = std::bit_cast<float>(*gptr<u32>(r0 + 0x1f8u));  // (from the original)
    } else {
        S0 = std::bit_cast<float>(*gptr<u32>(r0 + 0x3ecu));  // (from the original)
    }
    guest::cpu()->r[1] = r1;
    guest::cpu()->s[0] = S0;
    return r0;
}

}  // namespace d_0071a054
GUEST_EXPORT(0x0071a054, d_0071a054::f_0071a054);

// f_0071a310: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0071a310 {

inline constexpr guest::Function<0x003193e8, u32(u32, u32, u32, u32)> call_003193e8;  // (from the original)
inline constexpr guest::Function<0x00712bd4, u32(u32, u32, u32, u32)> call_00712bd4;  // (from the original)

u32 f_0071a310(u32 r0, u32 r1, u32 r2_unused, u32 r3) {
    u32 r2 = 0;
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
    *gptr<u32>(r13 + 0xfffffff8u) = u32(r12);  // (from the original)
    r13 = r13 - 0x28;  // (from the original)
    r5 = 1u;
    r4 = 0u;
    r8 = r0;
    r7 = r1;
    r9 = 0x38f4u;  // (from the original)
    r11 = r5;
    r10 = r4;
L_71a330:;
    r1 = r4;
    r2 = r7;
    r6 = r8 + (r4 * 0x149u << 7);  // (from the original)
    r0 = r6;
    guest::cpu()->r[13] = r13;
    r0 = call_00712bd4(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r3 = guest::cpu()->r[3];
    if (r0 != 0) {
        r6 = r6 + 0x6b88u;  // (from the original)
        r3 = ~0u;
        r1 = r9;
        r0 = r6 + 4u;
        r2 = r3;
        guest::cpu()->r[13] = r13;
        r0 = call_003193e8(r0, r1, r2, r3);
        r3 = guest::cpu()->r[3];
        r1 = *gptr<u32>(r6);
        if (r1 == r0) {
            r0 = r11;
            goto L_71a388;
        }
    }
    r0 = r10;
L_71a388:;
    r4 = r4 + 1u;
    r5 = r5 & r0;
    if (r4 < 4u) {
        guest::preempt();
        goto L_71a330;
    }
    r0 = r5;
    r13 = r13 + 0x28;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_0071a310
GUEST_EXPORT(0x0071a310, d_0071a310::f_0071a310);

// f_0071aa1c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0071aa1c {

struct __attribute__((packed)) Object_0071aa1c_1 {
    u32 word_0;
};
GUEST_OFFSET(Object_0071aa1c_1, word_0, 0x0);  // (from the original)

inline constexpr guest::Function<0x002fc934, u32(u32, u32, u32, u32)> call_002fc934;  // (from the original)

u32 f_0071aa1c(u32 r0_unused, gptr<Object_0071aa1c_1> arg1, u32 r2) {
    u32 r1 = arg1.addr();
    r1 = arg1->word_0;
    if (r1 == 0) {
        r1 = 0x95bfdcu;  // (from the original)
        return call_002fc934(guest::cpu()->r[0], r1, r2, guest::cpu()->r[3]);
    }
    r2 = *gptr<u32>(*gptr<u32>(r1) + 0xa4u);  // (from the original)
    return guest::call_address<u32>(r2, guest::cpu()->r[0], r1, r2, guest::cpu()->r[3]);
}

}  // namespace d_0071aa1c
GUEST_EXPORT(0x0071aa1c, d_0071aa1c::f_0071aa1c);

// f_0071ad3c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0071ad3c {

struct __attribute__((packed)) Object_0071ad3c_0 {
    u8 unknown_0[0x18];  // (not used here)
    u32 word_18;
    u32 word_1c;
};
GUEST_OFFSET(Object_0071ad3c_0, word_18, 0x18);  // (from the original)
GUEST_OFFSET(Object_0071ad3c_0, word_1c, 0x1c);  // (from the original)


u32 f_0071ad3c(gptr<Object_0071ad3c_0> arg0) {
    u32 res = 0;
    u32 r0 = arg0.addr();
    u32 r1 = 0;
    u32 nf = 0;
    u32 zf = 0;
    u32 vf = 0;
    r0 = arg0->word_18;
    r1 = arg0->word_1c;
    res = r1 - r0;
    nf = res >> 0x1f;  // (from the original)
    zf = res == 0;
    vf = ((r1 ^ r0) & (r1 ^ res)) >> 0x1f;  // (from the original)
    if (zf || nf != vf) {
        r0 = 1u;
    }
    if (!zf && nf == vf) {
        r0 = 0u;
    }
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_0071ad3c
GUEST_EXPORT(0x0071ad3c, d_0071ad3c::f_0071ad3c);

// f_0071ae0c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0071ae0c {

struct __attribute__((packed)) Object_0071ae0c_0 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Object_0071ae0c_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_0071ae0c_0, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_0071ae0c_0, word_8, 0x8);  // (from the original)

inline constexpr guest::Function<0x00148710, u32(u32, u32, u32, u32)> call_00148710;  // (from the original)

u32 f_0071ae0c(gptr<Object_0071ae0c_0> arg0, u32 r1_unused, u32 r2) {
    u32 r0 = arg0.addr();
    u32 r1 = 0;
    float S0 = 0;
    S0 = std::bit_cast<float>(*gptr<u32>(0x71ae2cu));  // (from the original)
    r1 = r2;
    arg0->word_0 = u32(std::bit_cast<u32>(S0));
    arg0->word_4 = u32(std::bit_cast<u32>(S0));
    arg0->word_8 = u32(std::bit_cast<u32>(S0));
    r2 = r0;
    r1 = r1 + 0x80u;  // (from the original)
    guest::cpu()->s[0] = S0;
    return call_00148710(r0, r1, r2, guest::cpu()->r[3]);
}

}  // namespace d_0071ae0c
GUEST_EXPORT(0x0071ae0c, d_0071ae0c::f_0071ae0c);

// f_0071ae30: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0071ae30 {

inline constexpr guest::Function<0x005ce6dc, u32(u32, u32, u32, u32)> call_005ce6dc;  // (from the original)
inline constexpr guest::Function<0x007237e0, u32(u32, u32, u32, u32)> call_007237e0;  // (from the original)

u32 f_0071ae30(u32 r0, u32 r1) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 zf = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r5 = r0;
    if (u32(*gptr<u8>(0xad56e0u)) != 0) {  // (from the original)
        goto L_71ae98;
    }
    r0 = 0x94fd3cu;  // (from the original)
    r4 = *gptr<u32>(r0);
    r0 = call_005ce6dc(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 != 0) {
        goto L_71ae74;
    }
    if (u32(*gptr<u8>(r4 + 0x208u)) != 0) {  // (from the original)
        goto L_71ae74;
    }
    if ((*gptr<u32>(r4 + 0x154u) & 4u) != 0) {  // (from the original)
        goto L_71ae98;
    }
L_71ae74:;
    if (u32(*gptr<u8>(r5 + 0xf8u)) == 0) {  // (from the original)
        r4 = r5;
    } else {
        goto L_71ae98;
    }
    r0 = r5;
    r0 = call_007237e0(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 == 0) {
        goto L_71aea0;
    }
L_71ae98:;
    r0 = 0u;
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
L_71aea0:;
    r1 = 0x2f635cu;  // (from the original)
    zf = *gptr<u32>(r4 + 0xb8u) == r1;  // (from the original)
    if (zf) {
        zf = *gptr<u32>(r4 + 0xbcu) == 0;  // (from the original)
    }
    if (zf) {
        guest::preempt();
        goto L_71ae98;
    } else {
        r0 = 1u;
    }
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_0071ae30
GUEST_EXPORT(0x0071ae30, d_0071ae30::f_0071ae30);

// f_0071b2a8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0071b2a8 {

struct __attribute__((packed)) Object_0071b2a8_0 {
    u8 unknown_0[0x104];  // (not used here)
    u32 word_104;
};
GUEST_OFFSET(Object_0071b2a8_0, word_104, 0x104);  // (from the original)

inline constexpr guest::Function<0x007237e0, u32(u32, u32, u32, u32)> call_007237e0;  // (from the original)

u32 f_0071b2a8(gptr<Object_0071b2a8_0> arg0, u32 r1) {
    u32 r0 = arg0.addr();
    u32 r4 = guest::cpu()->r[4];
    u32 zf = 0;
    guest::cpu()->r[13] -= 8u;
    r4 = r0;
    if (arg0->word_104 == 0) {
        r0 = ~0u;
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r0 = r4;
    r0 = call_007237e0(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 != 0) {
        r0 = ~0u;
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r1 = 0x2f635cu;  // (from the original)
    zf = *gptr<u32>(r4 + 0xb8u) == r1;  // (from the original)
    if (zf) {
        zf = *gptr<u32>(r4 + 0xbcu) == 0;  // (from the original)
    }
    if (zf) {
        r0 = ~0u;
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        return r0;
    } else {
        r0 = *gptr<u32>(*gptr<u32>(r4 + 0x104u) + 0xc8u);  // (from the original)
    }
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_0071b2a8
GUEST_EXPORT(0x0071b2a8, d_0071b2a8::f_0071b2a8);

// f_0071b708: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0071b708 {

inline constexpr guest::Function<0x002fbb30, u32(u32, u32, u32, u32)> call_002fbb30;  // (from the original)
inline constexpr guest::Function<0x003083e4, u32(u32, u32, u32, u32)> call_003083e4;  // (from the original)

u32 f_0071b708(u32 r0, u32 r1, u32 r2_unused, u32 r3) {
    u32 r2 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 0x650u;  // (from the original)
    r4 = r0;
    r5 = r1;
    r6 = r13;
    r2 = 0x63cu;  // (from the original)
    r1 = 0xa83afcu;  // (from the original)
    r0 = r6;
    guest::cpu()->r[13] = r13;
    r0 = call_002fbb30(r0, r1, r2, r3);
    r2 = 0x8810b4u;  // (from the original)
    r0 = *gptr<u32>(r6 + (u32(*gptr<u16>(r4)) << 2));
    r3 = r0 + 0xau;  // (from the original)
    *gptr<u8>(r0 + 0xfu) = u8(0u);  // (from the original)
    r1 = r5;
    r0 = *gptr<u32>(0x95debcu);  // (from the original)
    r13 = r13 + 0x650u;  // (from the original)
    guest::cpu()->r[13] = r13;
    return call_003083e4(r0, r1, r2, r3);
}

}  // namespace d_0071b708
GUEST_EXPORT(0x0071b708, d_0071b708::f_0071b708);

// f_0071b83c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0071b83c {

inline constexpr guest::Function<0x002fbb30, u32(u32, u32, u32, u32)> call_002fbb30;  // (from the original)

u32 f_0071b83c(u32 r0) {
    u32 r1 = 0;
    u32 r2 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 0x650u;  // (from the original)
    r4 = r0;
    r5 = r13;
    r2 = 0x63cu;  // (from the original)
    r1 = 0xa83afcu;  // (from the original)
    r0 = r5;
    guest::cpu()->r[13] = r13;
    r0 = call_002fbb30(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r0 = u32(s32(s8(*gptr<u8>(*gptr<u32>(r5 + (u32(*gptr<u16>(r4)) << 2)) + 2u))));
    r13 = r13 + 0x650u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_0071b83c
GUEST_EXPORT(0x0071b83c, d_0071b83c::f_0071b83c);

// f_0071b88c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0071b88c {

inline constexpr guest::Function<0x002fbb30, u32(u32, u32, u32, u32)> call_002fbb30;  // (from the original)

u32 f_0071b88c(u32 r0) {
    u32 r1 = 0;
    u32 r2 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 0x650u;  // (from the original)
    r4 = r0;
    r5 = r13;
    r2 = 0x63cu;  // (from the original)
    r1 = 0xa83afcu;  // (from the original)
    r0 = r5;
    guest::cpu()->r[13] = r13;
    r0 = call_002fbb30(r0, r1, r2, guest::cpu()->r[3]);
    r1 = *gptr<u32>(r5 + (u32(*gptr<u16>(r4)) << 2));
    r0 = r1 + 0xau;  // (from the original)
    *gptr<u8>(r1 + 0xfu) = u8(0u);  // (from the original)
    r13 = r13 + 0x650u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_0071b88c
GUEST_EXPORT(0x0071b88c, d_0071b88c::f_0071b88c);

// f_0071b8d0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0071b8d0 {

inline constexpr guest::Function<0x002fbb30, u32(u32, u32, u32, u32)> call_002fbb30;  // (from the original)

u32 f_0071b8d0(u32 r0) {
    u32 r1 = 0;
    u32 r2 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 0x650u;  // (from the original)
    r4 = r0;
    r5 = r13;
    r2 = 0x63cu;  // (from the original)
    r1 = 0xa83afcu;  // (from the original)
    r0 = r5;
    guest::cpu()->r[13] = r13;
    r0 = call_002fbb30(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r0 = u32(*gptr<u8>(*gptr<u32>(r5 + (u32(*gptr<u16>(r4)) << 2)) + 0x1cu)) >> 4;  // (from the original)
    r13 = r13 + 0x650u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_0071b8d0
GUEST_EXPORT(0x0071b8d0, d_0071b8d0::f_0071b8d0);

// f_0071c0d0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0071c0d0 {

inline constexpr guest::Function<0x0047ea68, u32(u32, u32, u32, u32)> call_0047ea68;  // (from the original)

u32 f_0071c0d0(u32 r0) {
    u32 r1 = 0;
    u32 r2 = 0;
    u32 r4 = guest::cpu()->r[4];
    guest::cpu()->r[13] -= 8u;
    r4 = r0;
    r1 = 0x1444u;  // (from the original)
    r2 = 0u;
    r0 = r0 + 4u;
    r0 = call_0047ea68(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    *gptr<u32>(r4) = u32(r0);
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_0071c0d0
GUEST_EXPORT(0x0071c0d0, d_0071c0d0::f_0071c0d0);

// f_0071c0f4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0071c0f4 {

inline constexpr guest::Function<0x0047ea68, u32(u32, u32, u32, u32)> call_0047ea68;  // (from the original)

u32 f_0071c0f4(u32 r0) {
    u32 r1 = 0;
    u32 r2 = 0;
    u32 r4 = guest::cpu()->r[4];
    guest::cpu()->r[13] -= 8u;
    r4 = r0;
    r1 = 0x1444u;  // (from the original)
    r2 = 0u;
    r0 = r0 + 4u;
    r0 = call_0047ea68(r0, r1, r2, guest::cpu()->r[3]);
    r1 = *gptr<u32>(r4);
    if (r0 == r1) {
        r0 = 1u;
    } else {
        r0 = 0u;
    }
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_0071c0f4
GUEST_EXPORT(0x0071c0f4, d_0071c0f4::f_0071c0f4);

// f_0071c124: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0071c124 {


u32 f_0071c124(u32 r0, u32 r1) {
    if (r1 < 4u) {
        r1 = r1 + (r1 << 1);
        r0 = r0 + (r1 << 3);
    }
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_0071c124
GUEST_EXPORT(0x0071c124, d_0071c124::f_0071c124);

// f_0071c2f8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0071c2f8 {

inline constexpr guest::Function<0x002fb328, u32(u32, u32, u32, u32)> call_002fb328;  // (from the original)
inline constexpr guest::Function<0x0056c0e4, u32(u32, u32, u32, u32)> call_0056c0e4;  // (from the original)
inline constexpr guest::Function<0x00710fcc, u32(u32, u32, u32, u32)> call_00710fcc;  // (from the original)

u32 f_0071c2f8(u32 r0) {
    u32 res = 0;
    u32 r4 = guest::cpu()->r[4];
    guest::cpu()->r[13] -= 8u;
    r4 = r0;
    r0 = call_002fb328(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    res = r0 + 0x62250u;  // (from the original)
    r0 = res;
    if (res == 0) {
        guest::cpu()->r[13] += 8u;
        return r0;
    }
    r0 = call_0056c0e4(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    if (r0 != 0) {
        r0 = 0u;
        guest::cpu()->r[13] += 8u;
        return r0;
    }
    r0 = r4;
    guest::cpu()->r[13] += 8u;
    return call_00710fcc(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_0071c2f8
GUEST_EXPORT(0x0071c2f8, d_0071c2f8::f_0071c2f8);

// f_0071c358: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0071c358 {

inline constexpr guest::Function<0x002fb328, u32(u32, u32, u32, u32)> call_002fb328;  // (from the original)
inline constexpr guest::Function<0x007111b4, u32(u32, u32, u32, u32)> call_007111b4;  // (from the original)

u32 f_0071c358(u32 r0) {
    u32 res = 0;
    u32 r4 = guest::cpu()->r[4];
    guest::cpu()->r[13] -= 8u;
    r4 = r0;
    r0 = call_002fb328(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    res = r0 + 0x62250u;  // (from the original)
    r0 = res;
    if (res == 0) {
        guest::cpu()->r[13] += 8u;
        return r0;
    }
    r0 = call_002fb328(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    r0 = u32(*gptr<u8>(r0 + 0x62264u));  // (from the original)
    if (r0 >= 2u) {
        r0 = call_002fb328(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
        guest::cpu()->r[13] += 8u;
        r0 = r0 + 0x62250u;  // (from the original)
        return call_007111b4(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    }
    r0 = u32(*gptr<u8>(r4 + 0x10u));  // (from the original)
    if (r0 != 1u) {
        r0 = 0u;
    }
    guest::cpu()->r[13] += 8u;
    return r0;
}

}  // namespace d_0071c358
GUEST_EXPORT(0x0071c358, d_0071c358::f_0071c358);

// f_0071c620: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0071c620 {

inline constexpr guest::Function<0x002fb328, u32(u32, u32, u32, u32)> call_002fb328;  // (from the original)
inline constexpr guest::Function<0x0056c0e4, u32(u32, u32, u32, u32)> call_0056c0e4;  // (from the original)
inline constexpr guest::Function<0x00710fcc, u32(u32, u32, u32, u32)> call_00710fcc;  // (from the original)

u32 f_0071c620(u32 r0, u32 r1) {
    u32 res = 0;
    u32 r4 = guest::cpu()->r[4];
    guest::cpu()->r[13] -= 8u;
    r4 = r0;
    r0 = call_002fb328(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    res = r0 + 0x62250u;  // (from the original)
    r0 = res;
    if (res == 0) {
        r0 = 0u;
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r0 = call_0056c0e4(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 != 0) {
        r0 = 0u;
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r0 = r4;
    r0 = call_00710fcc(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 == 0) {
        r0 = 0u;
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r0 = *gptr<u32>(0xaaf14cu);  // (from the original)
    if (r0 != 0) {
        res = u32(*gptr<u8>(r0 + 0x5701u)) << 0x1e;  // (from the original)
        r0 = res;
        if (!(res >> 0x1f)) {  // (from the original)
            r0 = 0u;
            guest::cpu()->r[13] += 8u;
            guest::cpu()->r[1] = r1;
            return r0;
        }
    }
    r0 = call_002fb328(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = 0x6214fu;  // (from the original)
    r0 = u32(*gptr<u8>(r0 + 0x80u + r1 + 0xau)) << 0x19;  // (from the original)
    res = r0;
    if (res >> 0x1f == (r0 & (r0 ^ res)) >> 0x1f) {  // (from the original)
        r0 = 1u;
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r0 = 0u;
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_0071c620
GUEST_EXPORT(0x0071c620, d_0071c620::f_0071c620);

// f_0071cba4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0071cba4 {

struct __attribute__((packed)) Object_0071cba4_1 {
    u8 unknown_0[0x846fb6];  // (not used here)
    u8 byte_846fb6;
};
GUEST_OFFSET(Object_0071cba4_1, byte_846fb6, 0x846fb6);  // (from the original)

inline constexpr guest::Function<0x0062512c, u32(u32, u32, u32, u32)> call_0062512c;  // (from the original)

u32 f_0071cba4(u32 r0, gptr<Object_0071cba4_1> arg1) {
    u32 res = 0;
    u32 r1 = arg1.addr();
    u32 r2 = 0;
    u32 r3 = 0;
    res = r1 - 0xcu;  // (from the original)
    r2 = r0;
    if (res >> 0x1f == ((r1 ^ 0xcu) & (r1 ^ res)) >> 0x1f) {  // (from the original)
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r3 = r1 + (r1 << 1);
    r0 = u32(arg1->byte_846fb6);
    r1 = r2 + (r3 << 1) + 0x1370u;  // (from the original)
    r2 = 1u;
    return call_0062512c(r0, r1, r2, r3);
}

}  // namespace d_0071cba4
GUEST_EXPORT(0x0071cba4, d_0071cba4::f_0071cba4);

// f_0071cff8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0071cff8 {

struct __attribute__((packed)) Object_0071cff8_0 {
    u32 word_0;
    u8 unknown_4[0x4];  // (not used here)
    u32 word_8;
    u32 word_c;
};
GUEST_OFFSET(Object_0071cff8_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_0071cff8_0, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Object_0071cff8_0, word_c, 0xc);  // (from the original)

struct __attribute__((packed)) Object_0071cff8_2 {
    u32 word_0;
    u8 unknown_4[0x4];  // (not used here)
    u32 word_8;
};
GUEST_OFFSET(Object_0071cff8_2, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_0071cff8_2, word_8, 0x8);  // (from the original)

inline constexpr guest::Function<0x0014f4d0, u32(u32, u32, u32, u32)> call_0014f4d0;  // (from the original)

u32 f_0071cff8(gptr<Object_0071cff8_0> arg0, gptr<Float3> arg1, gptr<Object_0071cff8_2> arg2) {
    u32 r0 = arg0.addr();
    u32 r1 = arg1.addr();
    u32 r2 = arg2.addr();
    u32 fpsr = guest::cpu()->fpscr;
    float S0 = 0;
    float S1 = 0;
    float S2 = 0;
    float S3 = 0;
    float S4 = 0;
    float S5 = 0;
    float S6 = 0;
    float S7 = 0;
    S1 = std::bit_cast<float>(arg0->word_0);
    S7 = std::bit_cast<float>(arg2->word_8);
    S3 = std::bit_cast<float>(arg0->word_8);
    S6 = arg1->v[2];
    S0 = std::bit_cast<float>(arg0->word_c);
    S2 = std::bit_cast<float>(*gptr<u32>(0x71d078u));  // (from the original)
    S4 = S1 * std::bit_cast<float>(arg2->word_0) + S3 * S7;
    S5 = S1 * arg1->v[0] + S3 * S6;
    S1 = S4 + S0;
    S0 = S5 + S0;
    fpsr = fpsr & 0xfffffffu | vfp_cmpf(S1, S2);  // (from the original)
    if (!(fpsr >> 0x1e & 1 || fpsr >> 0x1f != (fpsr >> 0x1c & 1))) {  // (from the original)
        fpsr = fpsr & 0xfffffffu | vfp_cmpf(S0, S2);  // (from the original)
        if (!(fpsr >> 0x1d & 1)) {  // (from the original)
            r2 = r1;
            S0 = -S0;
            r1 = r0;
            r0 = r2;
            guest::cpu()->s[0] = S0;
            guest::cpu()->s[1] = S1;
            guest::cpu()->s[2] = S2;
            guest::cpu()->s[3] = S3;
            guest::cpu()->s[4] = S4;
            guest::cpu()->s[5] = S5;
            guest::cpu()->s[6] = S6;
            guest::cpu()->s[7] = S7;
            return call_0014f4d0(r0, r1, r2, guest::cpu()->r[3]);
        }
    }
    fpsr = fpsr & 0xfffffffu | vfp_cmpf(S1, S2);  // (from the original)
    if (fpsr >> 0x1d & 1) {  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->s[0] = S0;
        guest::cpu()->s[1] = S1;
        return r0;
    }
    fpsr = fpsr & 0xfffffffu | vfp_cmpf(S0, S2);  // (from the original)
    if (fpsr >> 0x1e & 1 || fpsr >> 0x1f != (fpsr >> 0x1c & 1)) {  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->s[0] = S0;
        guest::cpu()->s[1] = S1;
        return r0;
    }
    r2 = r1;
    S0 = -S0;
    r1 = r0;
    r0 = r2;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2;
    guest::cpu()->s[3] = S3;
    guest::cpu()->s[4] = S4;
    guest::cpu()->s[5] = S5;
    guest::cpu()->s[6] = S6;
    guest::cpu()->s[7] = S7;
    return call_0014f4d0(r0, r1, r2, guest::cpu()->r[3]);
}

}  // namespace d_0071cff8
GUEST_EXPORT(0x0071cff8, d_0071cff8::f_0071cff8);

// f_0071d0b8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0071d0b8 {

struct __attribute__((packed)) Object_0071d0b8_0 {
    u8 unknown_0[0xc];  // (not used here)
    u32 word_c;
    u32 word_10;
};
GUEST_OFFSET(Object_0071d0b8_0, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Object_0071d0b8_0, word_10, 0x10);  // (from the original)


u32 f_0071d0b8(gptr<Object_0071d0b8_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r1 = 0;
    u32 r2 = 0;
    u32 r3 = 0;
    r1 = 0x8793f4u;  // (from the original)
    r3 = arg0->word_c;
    r2 = *gptr<u32>(r1);
    r1 = *gptr<u32>(r1 + 4u);
    if (r3 != r2) {
        r0 = 0u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    if (r3 == 0) {
        if (((arg0->word_10 | r1) & 1u) == 0) {
            r0 = 1u;
            guest::cpu()->r[1] = r1;
            return r0;
        }
    }
    if (*gptr<u32>(r0 + 0x10u) != r1) {  // (from the original)
        r0 = 0u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r0 = 1u;
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_0071d0b8
GUEST_EXPORT(0x0071d0b8, d_0071d0b8::f_0071d0b8);

// f_0071d108: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0071d108 {

struct __attribute__((packed)) Object_0071d108_0 {
    u8 unknown_0[0xc];  // (not used here)
    u32 word_c;
    u32 word_10;
};
GUEST_OFFSET(Object_0071d108_0, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Object_0071d108_0, word_10, 0x10);  // (from the original)


u32 f_0071d108(gptr<Object_0071d108_0> arg0) {
    u32 ea = 0;
    u32 r0 = arg0.addr();
    u32 r1 = 0;
    u32 r3 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r12 = 0;
    u32 r13 = guest::cpu()->r[13];
    r12 = 0x8793f4u;  // (from the original)
    r13 = r13 - 4u;
    r3 = arg0->word_c;
    r1 = *gptr<u32>(r12 + 0x24u);  // (from the original)
    if (r3 != *gptr<u32>(r12 + 0x20u)) {  // (from the original)
        goto L_71d150;
    }
    if (r3 == 0) {
        if (((arg0->word_10 | r1) & 1u) == 0) {
            goto L_71d148;
        }
    }
    if (*gptr<u32>(r0 + 0x10u) != r1) {  // (from the original)
        goto L_71d150;
    }
L_71d148:;
    r4 = 1u;
    goto L_71d154;
L_71d150:;
    r4 = 0u;
L_71d154:;
    ea = r12 + 0x18u;  // (from the original)
    r1 = *gptr<u32>(ea + 4u);
    if (r3 != *gptr<u32>(ea)) {
        goto L_71d190;
    }
    if (r3 == 0) {
        if (((*gptr<u32>(r0 + 0x10u) | r1) & 1u) == 0) {  // (from the original)
            goto L_71d188;
        }
    }
    if (*gptr<u32>(r0 + 0x10u) != r1) {  // (from the original)
        goto L_71d190;
    }
L_71d188:;
    r0 = 1u;
    r0 = r0 | r4;
    r13 = r13 + 4u;
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
L_71d190:;
    r0 = 0u;
    r0 = r0 | r4;
    r13 = r13 + 4u;
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_0071d108
GUEST_EXPORT(0x0071d108, d_0071d108::f_0071d108);

// f_0071d1a4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0071d1a4 {

struct __attribute__((packed)) Object_0071d1a4_0 {
    u8 unknown_0[0xc];  // (not used here)
    u32 word_c;
    u32 word_10;
};
GUEST_OFFSET(Object_0071d1a4_0, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Object_0071d1a4_0, word_10, 0x10);  // (from the original)


u32 f_0071d1a4(gptr<Object_0071d1a4_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r1 = 0;
    u32 r2 = 0;
    u32 r3 = 0;
    r1 = 0x8793f4u;  // (from the original)
    r3 = arg0->word_c;
    r2 = *gptr<u32>(r1 + 0x10u);  // (from the original)
    r1 = *gptr<u32>(r1 + 0x14u);  // (from the original)
    if (r3 != r2) {
        r0 = 0u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    if (r3 == 0) {
        if (((arg0->word_10 | r1) & 1u) == 0) {
            r0 = 1u;
            guest::cpu()->r[1] = r1;
            return r0;
        }
    }
    if (*gptr<u32>(r0 + 0x10u) != r1) {  // (from the original)
        r0 = 0u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r0 = 1u;
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_0071d1a4
GUEST_EXPORT(0x0071d1a4, d_0071d1a4::f_0071d1a4);

// f_0071d2b0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0071d2b0 {

struct __attribute__((packed)) Object_0071d2b0_0 {
    u8 unknown_0[0x1];  // (not used here)
    u8 byte_1;
};
GUEST_OFFSET(Object_0071d2b0_0, byte_1, 0x1);  // (from the original)


u32 f_0071d2b0(gptr<Object_0071d2b0_0> arg0) {
    u32 r0 = arg0.addr();
    r0 = u32(arg0->byte_1) & 0xfu;  // (from the original)
    if (r0 != 1u) {
        r0 = 0u;
    }
    return r0;
}

}  // namespace d_0071d2b0
GUEST_EXPORT(0x0071d2b0, d_0071d2b0::f_0071d2b0);

// f_0071d2d4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0071d2d4 {

struct __attribute__((packed)) Object_0071d2d4_0 {
    u8 unknown_0[0x10];  // (not used here)
    u32 word_10;
};
GUEST_OFFSET(Object_0071d2d4_0, word_10, 0x10);  // (from the original)

inline constexpr guest::Function<0x001332d4, u32(u32, u32, u32, u32)> call_001332d4;  // (from the original)

u32 f_0071d2d4(gptr<Object_0071d2d4_0> arg0) {
    u32 r0 = arg0.addr();
    r0 = *gptr<u32>(arg0->word_10 + 0x144u) + 0xcu;  // (from the original)
    return call_001332d4(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_0071d2d4
GUEST_EXPORT(0x0071d2d4, d_0071d2d4::f_0071d2d4);

// f_0071d2e4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0071d2e4 {

inline constexpr guest::Function<0x0013c0e8, u32(u32, u32, u32, u32)> call_0013c0e8;  // (from the original)

u32 f_0071d2e4(u32 r0, u32 r1) {
    u32 r2 = 0;
    if (r1 >= 6u) {
        r0 = 0u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r2 = *gptr<u32>(r0 + (r1 << 2) + 0x14u);  // (from the original)
    if (r2 == 0) {
        r0 = 0u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r1 = r1 + (r1 << 1);
    r0 = r0 + (r1 << 3) + 0x2cu;  // (from the original)
    return call_0013c0e8(r0, r1, r2, guest::cpu()->r[3]);
}

}  // namespace d_0071d2e4
GUEST_EXPORT(0x0071d2e4, d_0071d2e4::f_0071d2e4);

// f_0071d314: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0071d314 {


u32 f_0071d314(u32 r0, u32 r1) {
    if (r1 >= 6u) {
        r0 = 0u;
        return r0;
    }
    r0 = *gptr<u32>(r0 + (r1 << 2) + 0x14u);  // (from the original)
    if (r0 != 0) {
        r0 = 1u;
    }
    return r0;
}

}  // namespace d_0071d314
GUEST_EXPORT(0x0071d314, d_0071d314::f_0071d314);

// f_0071d474: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0071d474 {

inline constexpr guest::Function<0x003193e8, u32(u32, u32, u32, u32)> call_003193e8;  // (from the original)

u32 f_0071d474(u32 r0) {
    u32 r1 = 0;
    u32 r2 = 0;
    u32 r3 = 0;
    r3 = ~0u;
    r1 = 0x29604u;  // (from the original)
    r0 = r0 + 4u;
    r2 = r3;
    return call_003193e8(r0, r1, r2, r3);
}

}  // namespace d_0071d474
GUEST_EXPORT(0x0071d474, d_0071d474::f_0071d474);

// f_0071d7b4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0071d7b4 {

inline constexpr guest::Function<0x003193e8, u32(u32, u32, u32, u32)> call_003193e8;  // (from the original)

u32 f_0071d7b4(u32 r0) {
    u32 r1 = 0;
    u32 r2 = 0;
    u32 r3 = 0;
    r3 = ~0u;
    r1 = 0x17be0cu;  // (from the original)
    r0 = r0 + 4u;
    r2 = r3;
    return call_003193e8(r0, r1, r2, r3);
}

}  // namespace d_0071d7b4
GUEST_EXPORT(0x0071d7b4, d_0071d7b4::f_0071d7b4);

// f_0071d9c4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0071d9c4 {

inline constexpr guest::Function<0x0047ea68, u32(u32, u32, u32, u32)> call_0047ea68;  // (from the original)

u32 f_0071d9c4(u32 r0) {
    u32 r1 = 0;
    u32 r2 = 0;
    u32 r4 = guest::cpu()->r[4];
    guest::cpu()->r[13] -= 8u;
    r4 = r0;
    r1 = 0x28f0u;  // (from the original)
    r2 = 0u;
    r0 = r0 + 4u;
    r0 = call_0047ea68(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    *gptr<u32>(r4) = u32(r0);
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_0071d9c4
GUEST_EXPORT(0x0071d9c4, d_0071d9c4::f_0071d9c4);

// f_0071d9e8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0071d9e8 {

inline constexpr guest::Function<0x0047ea68, u32(u32, u32, u32, u32)> call_0047ea68;  // (from the original)

u32 f_0071d9e8(u32 r0) {
    u32 r1 = 0;
    u32 r2 = 0;
    u32 r4 = guest::cpu()->r[4];
    guest::cpu()->r[13] -= 8u;
    r4 = r0;
    r1 = 0x28f0u;  // (from the original)
    r2 = 0u;
    r0 = r0 + 4u;
    r0 = call_0047ea68(r0, r1, r2, guest::cpu()->r[3]);
    r1 = *gptr<u32>(r4);
    if (r0 == r1) {
        r0 = 1u;
    } else {
        r0 = 0u;
    }
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_0071d9e8
GUEST_EXPORT(0x0071d9e8, d_0071d9e8::f_0071d9e8);

// f_0071e6a8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0071e6a8 {

inline constexpr guest::Function<0x002fb328, u32(u32, u32, u32, u32)> call_002fb328;  // (from the original)
inline constexpr guest::Function<0x002ff8b0, u32(u32, u32, u32, u32)> call_002ff8b0;  // (from the original)
inline constexpr guest::Function<0x00300904, u32(u32, u32, u32, u32)> call_00300904;  // (from the original)
inline constexpr guest::Function<0x00303770, u32(u32, u32, u32, u32)> call_00303770;  // (from the original)
inline constexpr guest::Function<0x003041c8, u32(u32, u32, u32, u32)> call_003041c8;  // (from the original)

u32 f_0071e6a8(u32 r0, u32 r1) {
    u32 res = 0;
    u32 r4 = guest::cpu()->r[4];
    guest::cpu()->r[13] -= 8u;
    r0 = call_002fb328(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    res = r0 + 0x6ae54u;  // (from the original)
    r0 = res;
    if (res != 0) {
        res = u32(*gptr<u16>(r0 + 0xeu)) - 0x2004u;  // (from the original)
        r1 = res;
        if (res == 0) {
            r0 = 0u;
            guest::cpu()->r[13] += 8u;
            guest::cpu()->r[1] = r1;
            return r0;
        }
    }
    r0 = 0u;
    r0 = call_002ff8b0(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r0 = call_00303770(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r4 = r0;
    if (r0 == 0) {
        r0 = 0u;
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    res = u32(*gptr<u8>(0x5701u + r4)) << 0x1e;  // (from the original)
    if (!(res >> 0x1f)) {  // (from the original)
        r0 = 0u;
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    res = u32(*gptr<u8>(0x5712u + r4)) << 0x1a;  // (from the original)
    r0 = res;
    if (!(res >> 0x1f)) {  // (from the original)
        r0 = 0u;
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r0 = call_00300904(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 == 0) {
        r0 = call_003041c8(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        if (r0 != 0x60u) {  // (from the original)
            r0 = 1u;
            guest::cpu()->r[13] += 8u;
            guest::cpu()->r[1] = r1;
            return r0;
        }
    }
    if ((u32(*gptr<u8>(r4 + 0x5713u)) & 1u) == 0) {  // (from the original)
        r0 = 0u;
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r0 = 1u;
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_0071e6a8
GUEST_EXPORT(0x0071e6a8, d_0071e6a8::f_0071e6a8);

// f_0071ecf0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0071ecf0 {

struct __attribute__((packed)) Object_0071ecf0_0 {
    u8 unknown_0[0x3ca0];  // (not used here)
    u32 word_3ca0;
};
GUEST_OFFSET(Object_0071ecf0_0, word_3ca0, 0x3ca0);  // (from the original)

inline constexpr guest::Function<0x007201d0, u32(u32, u32, u32, u32)> call_007201d0;  // (from the original)

u32 f_0071ecf0(gptr<Object_0071ecf0_0> arg0, u32 r1) {
    u32 res = 0;
    u32 r0 = arg0.addr();
    u32 r2 = 0;
    u32 r3 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r12 = 0;
    guest::cpu()->r[13] -= 8u;
    r3 = arg0->word_3ca0;
    r2 = *gptr<u32>(0xaaf14cu);  // (from the original)
    res = r3 - r1;
    if (!(!u32(res == 0) && res >> 0x1f == ((r3 ^ r1) & (r3 ^ res)) >> 0x1f)) {  // (from the original)
        r4 = r3 + 0xau;  // (from the original)
        r12 = r1;
        if (u32(r4 >= r1) && !u32(r4 == r1)) {
            r1 = r12 - r3;
            goto L_71ed24;
        }
    }
    r1 = ~0u;
L_71ed24:;
    r3 = *gptr<u32>(0x185cu + r0);  // (from the original)
    guest::cpu()->r[13] += 8u;
    r0 = *gptr<u32>(r0 + (r3 << 2) + 0x1860u) - 1u;  // (from the original)
    r1 = r1 + (r0 + (r0 << 2) << 1);
    r0 = r2 + 0x6f10u;  // (from the original)
    return call_007201d0(r0, r1, r2, r3);
}

}  // namespace d_0071ecf0
GUEST_EXPORT(0x0071ecf0, d_0071ecf0::f_0071ecf0);

// f_0071ed64: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0071ed64 {

struct __attribute__((packed)) Object_0071ed64_0 {
    u8 unknown_0[0x3520];  // (not used here)
    u32 word_3520;
};
GUEST_OFFSET(Object_0071ed64_0, word_3520, 0x3520);  // (from the original)


u32 f_0071ed64(gptr<Object_0071ed64_0> arg0, u32 r1) {
    u32 res = 0;
    u32 r0 = arg0.addr();
    r0 = arg0->word_3520;
    res = r0 - r1;
    if (!u32(res == 0) && res >> 0x1f == ((r0 ^ r1) & (r0 ^ res)) >> 0x1f) {  // (from the original)
        r0 = 0u;
        return r0;
    }
    r0 = r0 + 0xau;  // (from the original)
    if (u32(r0 >= r1) && !u32(r0 == r1)) {
        r0 = 1u;
        return r0;
    }
    r0 = 0u;
    return r0;
}

}  // namespace d_0071ed64
GUEST_EXPORT(0x0071ed64, d_0071ed64::f_0071ed64);

// f_0071ed90: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0071ed90 {

struct __attribute__((packed)) Object_0071ed90_0 {
    u8 unknown_0[0x2780];  // (not used here)
    u32 word_2780;
};
GUEST_OFFSET(Object_0071ed90_0, word_2780, 0x2780);  // (from the original)


u32 f_0071ed90(gptr<Object_0071ed90_0> arg0, u32 r1) {
    u32 res = 0;
    u32 r0 = arg0.addr();
    r0 = arg0->word_2780;
    res = r0 - r1;
    if (!u32(res == 0) && res >> 0x1f == ((r0 ^ r1) & (r0 ^ res)) >> 0x1f) {  // (from the original)
        r0 = 0u;
        return r0;
    }
    r0 = r0 + 8u;
    if (u32(r0 >= r1) && !u32(r0 == r1)) {
        r0 = 1u;
        return r0;
    }
    r0 = 0u;
    return r0;
}

}  // namespace d_0071ed90
GUEST_EXPORT(0x0071ed90, d_0071ed90::f_0071ed90);

// f_0071edb8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0071edb8 {

inline constexpr guest::Function<0x002d5770, u32(u32, u32, u32, u32)> call_002d5770;  // (from the original)
inline constexpr guest::Function<0x002f74c8, u32(u32, u32, u32, u32)> call_002f74c8;  // (from the original)
inline constexpr guest::Function<0x002f74e0, u32(u32, u32, u32, u32)> call_002f74e0;  // (from the original)
inline constexpr guest::Function<0x00305f2c, u32(u32, u32, u32, u32)> call_00305f2c;  // (from the original)
inline constexpr guest::Function<0x0076e62c, u32(u32, u32, u32, u32)> call_0076e62c;  // (from the original)

u32 f_0071edb8(u32 r0, u32 r1, u32 r2) {
    u32 res = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r4 = r0;
    r5 = r1;
    r0 = call_00305f2c(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r4 = r4 + 0x2780u;  // (from the original)
    if (r0 != 3u) {
        r0 = call_002f74c8(r0, r1, r2, guest::cpu()->r[3]);
        r2 = guest::cpu()->r[2];
        r1 = r0;
        r0 = 0x40000u;  // (from the original)
        r0 = call_002f74e0(r0, r1, r2, guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        if (r0 == 0) {
            goto L_71ee18;
        }
    }
    r0 = *gptr<u32>(r4);
    res = r0 - r5;
    if (!(!u32(res == 0) && res >> 0x1f == ((r0 ^ r5) & (r0 ^ res)) >> 0x1f)) {  // (from the original)
        r2 = r0 + 8u;
        r1 = r5;
        if (u32(r2 >= r5) && !u32(r2 == r5)) {
            r0 = r1 - r0;
            goto L_71ee10;
        }
    }
    r0 = ~0u;
L_71ee10:;
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    return call_002d5770(r0, r1, r2, guest::cpu()->r[3]);
L_71ee18:;
    r0 = *gptr<u32>(r4);
    res = r0 - r5;
    if (!(!u32(res == 0) && res >> 0x1f == ((r0 ^ r5) & (r0 ^ res)) >> 0x1f)) {  // (from the original)
        r2 = r0 + 8u;
        r1 = r5;
        if (u32(r2 >= r5) && !u32(r2 == r5)) {
            r1 = r1 - r0;
            goto L_71ee3c;
        }
    }
    r1 = ~0u;
L_71ee3c:;
    r0 = *gptr<u32>(0x95c6d0u);  // (from the original)
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    return call_0076e62c(r0, r1, r2, guest::cpu()->r[3]);
}

}  // namespace d_0071edb8
GUEST_EXPORT(0x0071edb8, d_0071edb8::f_0071edb8);

// f_0071f27c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0071f27c {

inline constexpr guest::Function<0x00746ee4, u32(u32, u32, u32, u32)> call_00746ee4;  // (from the original)
inline constexpr guest::Function<0x00746f8c, u32(u32, u32, u32, u32)> call_00746f8c;  // (from the original)

u32 f_0071f27c() {
    u32 r0 = 0;
    r0 = 0xa22020u;  // (from the original)
    guest::cpu()->r[13] -= 8u;
    r0 = call_00746f8c(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    if (r0 == 0) {
        r0 = 1u;
        guest::cpu()->r[13] += 8u;
        return r0;
    }
    r0 = 0xa22020u;  // (from the original)
    guest::cpu()->r[13] += 8u;
    return call_00746ee4(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_0071f27c
GUEST_EXPORT(0x0071f27c, d_0071f27c::f_0071f27c);

// f_0071f2a8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0071f2a8 {

struct __attribute__((packed)) Object_0071f2a8_0 {
    u8 unknown_0[0x2e4];  // (not used here)
    u8 byte_2e4;
};
GUEST_OFFSET(Object_0071f2a8_0, byte_2e4, 0x2e4);  // (from the original)


u32 f_0071f2a8(gptr<Object_0071f2a8_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r1 = 0;
    r1 = u32(arg0->byte_2e4);
    if (r1 == 2u) {
        r0 = r0 + 0x28cu;  // (from the original)
    } else {
        r0 = 0u;
    }
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_0071f2a8
GUEST_EXPORT(0x0071f2a8, d_0071f2a8::f_0071f2a8);

// f_0071f2c4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0071f2c4 {

struct __attribute__((packed)) Object_0071f2c4_0 {
    u8 unknown_0[0x88];  // (not used here)
    u8 byte_88;
};
GUEST_OFFSET(Object_0071f2c4_0, byte_88, 0x88);  // (from the original)


u32 f_0071f2c4(gptr<Object_0071f2c4_0> arg0) {
    u32 r0 = arg0.addr();
    r0 = u32(arg0->byte_88);
    if (r0 >= 2u) {
        r0 = 0u;
    }
    return r0;
}

}  // namespace d_0071f2c4
GUEST_EXPORT(0x0071f2c4, d_0071f2c4::f_0071f2c4);

// f_0071f644: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0071f644 {

struct __attribute__((packed)) Object_0071f644_1 {
    u8 unknown_0[0x4];  // (not used here)
    u16 half_4;
};
GUEST_OFFSET(Object_0071f644_1, half_4, 0x4);  // (from the original)

inline constexpr guest::Function<0x002fcbb0, u32(u32, u32, u32, u32)> call_002fcbb0;  // (from the original)

u32 f_0071f644(u32 r0_unused, gptr<Object_0071f644_1> arg1) {
    u32 r1 = arg1.addr();
    r1 = u32(arg1->half_4);
    return call_002fcbb0(guest::cpu()->r[0], r1, guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_0071f644
GUEST_EXPORT(0x0071f644, d_0071f644::f_0071f644);

// f_0071f66c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0071f66c {

struct __attribute__((packed)) Object_0071f66c_1 {
    u8 unknown_0[0x86];  // (not used here)
    u16 half_86;
};
GUEST_OFFSET(Object_0071f66c_1, half_86, 0x86);  // (from the original)

inline constexpr guest::Function<0x002fcbb0, u32(u32, u32, u32, u32)> call_002fcbb0;  // (from the original)

u32 f_0071f66c(u32 r0_unused, gptr<Object_0071f66c_1> arg1) {
    u32 r1 = arg1.addr();
    r1 = u32(arg1->half_86);
    return call_002fcbb0(guest::cpu()->r[0], r1, guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_0071f66c
GUEST_EXPORT(0x0071f66c, d_0071f66c::f_0071f66c);

// f_0071f69c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0071f69c {

struct __attribute__((packed)) Object_0071f69c_0 {
    u8 byte_0;
};
GUEST_OFFSET(Object_0071f69c_0, byte_0, 0x0);  // (from the original)

inline constexpr guest::Function<0x002d0920, u32(u32, u32, u32, u32)> call_002d0920;  // (from the original)
inline constexpr guest::Function<0x0030b6b8, u32(u32, u32, u32, u32)> call_0030b6b8;  // (from the original)

u32 f_0071f69c(gptr<Object_0071f69c_0> arg0, u32 r1) {
    u32 res = 0;
    u32 r0 = arg0.addr();
    guest::cpu()->r[13] -= 8u;
    r0 = u32(arg0->byte_0);
    r0 = call_002d0920(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 == 0) {
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r1 = u32(*gptr<u8>(r0 + 0x24u)) & 1u;  // (from the original)
    r0 = r0 + (r1 << 4) + 0x3cu;  // (from the original)
    r0 = call_0030b6b8(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    res = r0 - 0x3356u;  // (from the original)
    r0 = res;
    if (res == 0) {
        r0 = 1u;
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    if (r0 == 1u) {
        r0 = 2u;
    } else {
        r0 = 0u;
    }
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_0071f69c
GUEST_EXPORT(0x0071f69c, d_0071f69c::f_0071f69c);

// f_0071f6e4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0071f6e4 {

struct __attribute__((packed)) Object_0071f6e4_0 {
    u8 byte_0;
};
GUEST_OFFSET(Object_0071f6e4_0, byte_0, 0x0);  // (from the original)

inline constexpr guest::Function<0x002d0920, u32(u32, u32, u32, u32)> call_002d0920;  // (from the original)
inline constexpr guest::Function<0x005c132c, u32(u32, u32, u32, u32)> call_005c132c;  // (from the original)
inline constexpr guest::Function<0x006c1678, u32(u32, u32, u32, u32)> call_006c1678;  // (from the original)
inline constexpr guest::Function<0x0070ab44, u32(u32, u32, u32, u32)> call_0070ab44;  // (from the original)

u32 f_0071f6e4(gptr<Object_0071f6e4_0> arg0, u32 r1, u32 r2, u32 r3) {
    u32 r0 = arg0.addr();
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r13 = guest::cpu()->r[13];
    r4 = r0;
    r0 = u32(arg0->byte_0);
    r13 = r13 - 0x40u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002d0920(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r5 = r0;
    if (r0 == 0) {
        goto L_71f744;
    }
    r0 = u32(*gptr<u8>(r4));
    r1 = 0u;
    guest::cpu()->r[13] = r13;
    r0 = call_005c132c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r4 = r0;
    if (r0 == 0) {
        goto L_71f744;
    }
    r2 = *gptr<u32>(r4 + 0x25cu);  // (from the original)
    r3 = 0u;
    r1 = r13;
    r0 = r4 + 0x1b4u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0070ab44(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    r2 = r13;
    r1 = r4;
    r0 = r5;
    guest::cpu()->r[13] = r13;
    r0 = call_006c1678(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r0 = 1u;
    r13 = r13 + 0x40u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
L_71f744:;
    r0 = 0u;
    r13 = r13 + 0x40u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_0071f6e4
GUEST_EXPORT(0x0071f6e4, d_0071f6e4::f_0071f6e4);

// f_0071f750: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0071f750 {

struct __attribute__((packed)) Object_0071f750_0 {
    u8 byte_0;
};
GUEST_OFFSET(Object_0071f750_0, byte_0, 0x0);  // (from the original)

inline constexpr guest::Function<0x002d0920, u32(u32, u32, u32, u32)> call_002d0920;  // (from the original)
inline constexpr guest::Function<0x006bead8, u32(u32, u32, u32, u32)> call_006bead8;  // (from the original)

u32 f_0071f750(gptr<Object_0071f750_0> arg0, u32 r1) {
    u32 r0 = arg0.addr();
    u32 r4 = guest::cpu()->r[4];
    guest::cpu()->r[13] -= 8u;
    r0 = u32(arg0->byte_0);
    r4 = r1;
    r0 = call_002d0920(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 == 0) {
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r1 = r4;
    guest::cpu()->r[13] += 8u;
    return call_006bead8(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_0071f750
GUEST_EXPORT(0x0071f750, d_0071f750::f_0071f750);

// f_0071f778: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0071f778 {

struct __attribute__((packed)) Object_0071f778_0 {
    u8 byte_0;
};
GUEST_OFFSET(Object_0071f778_0, byte_0, 0x0);  // (from the original)

inline constexpr guest::Function<0x002d0920, u32(u32, u32, u32, u32)> call_002d0920;  // (from the original)
inline constexpr guest::Function<0x006be888, u32(u32, u32, u32, u32)> call_006be888;  // (from the original)

u32 f_0071f778(gptr<Object_0071f778_0> arg0) {
    u32 r0 = arg0.addr();
    guest::cpu()->r[13] -= 8u;
    r0 = u32(arg0->byte_0);
    r0 = call_002d0920(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    if (r0 == 0) {
        guest::cpu()->r[13] += 8u;
        return r0;
    }
    guest::cpu()->r[13] += 8u;
    return call_006be888(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_0071f778
GUEST_EXPORT(0x0071f778, d_0071f778::f_0071f778);

// f_0071f798: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0071f798 {

struct __attribute__((packed)) Object_0071f798_0 {
    u8 byte_0;
};
GUEST_OFFSET(Object_0071f798_0, byte_0, 0x0);  // (from the original)

inline constexpr guest::Function<0x002d0920, u32(u32, u32, u32, u32)> call_002d0920;  // (from the original)

u32 f_0071f798(gptr<Object_0071f798_0> arg0, u32 r1) {
    u32 r0 = arg0.addr();
    u32 r4 = guest::cpu()->r[4];
    guest::cpu()->r[13] -= 8u;
    r0 = u32(arg0->byte_0);
    r4 = r1;
    r0 = call_002d0920(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 == 0) {
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    if (r4 == 0) {
        r0 = 1u;
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    *gptr<u32>(r4) = u32(*gptr<u32>(r0 + 0x644u));  // (from the original)
    r1 = *gptr<u32>(r0 + 0x648u);  // (from the original)
    *gptr<u32>(r4 + 4u) = u32(r1);
    *gptr<u32>(r4 + 8u) = u32(*gptr<u32>(r0 + 0x64cu));  // (from the original)
    r0 = 1u;
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_0071f798
GUEST_EXPORT(0x0071f798, d_0071f798::f_0071f798);

// f_0071f7d8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0071f7d8 {

struct __attribute__((packed)) Object_0071f7d8_0 {
    u8 byte_0;
};
GUEST_OFFSET(Object_0071f7d8_0, byte_0, 0x0);  // (from the original)

inline constexpr guest::Function<0x002d0920, u32(u32, u32, u32, u32)> call_002d0920;  // (from the original)

u32 f_0071f7d8(gptr<Object_0071f7d8_0> arg0, u32 r1) {
    u32 res = 0;
    u32 r0 = arg0.addr();
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 zf = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r6 = r0;
    r0 = u32(arg0->byte_0);
    r5 = r1;
    r0 = call_002d0920(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r4 = r0;
    if (r0 == 0) {
        goto L_71f848;
    }
    if (r5 != 0) {
        *gptr<u32>(r5) = u32(*gptr<u32>(r4 + 0x644u));  // (from the original)
        r1 = *gptr<u32>(r4 + 0x648u);  // (from the original)
        *gptr<u32>(r5 + 4u) = u32(r1);
        *gptr<u32>(r5 + 8u) = u32(*gptr<u32>(r4 + 0x64cu));  // (from the original)
    }
    r0 = u32(*gptr<u8>(r6));
    r0 = call_002d0920(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    res = r0;
    zf = res == 0;
    if (!zf) {
        res = r0 + 0x668u;  // (from the original)
        zf = res == 0;
        r0 = res;
    }
    if (!zf) {
        zf = *gptr<u32>(r0) == 0;
    }
    if (zf) {
        if (u32(*gptr<u8>(r4 + 0x640u)) == 4u) {  // (from the original)
            r0 = 1u;
            goto L_71f848;
        }
    }
    r0 = 0u;
L_71f848:;
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_0071f7d8
GUEST_EXPORT(0x0071f7d8, d_0071f7d8::f_0071f7d8);

// f_0071fc78: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0071fc78 {

struct __attribute__((packed)) Object_0071fc78_0 {
    u8 unknown_0[0x7dd6];  // (not used here)
    u8 byte_7dd6;
};
GUEST_OFFSET(Object_0071fc78_0, byte_7dd6, 0x7dd6);  // (from the original)


u32 f_0071fc78(gptr<Object_0071fc78_0> arg0) {
    u32 r0 = arg0.addr();
    r0 = (u32(arg0->byte_7dd6) & 4u) >> 2;
    return r0;
}

}  // namespace d_0071fc78
GUEST_EXPORT(0x0071fc78, d_0071fc78::f_0071fc78);

// f_0071fc90: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0071fc90 {


u32 f_0071fc90(u32 r0, u32 r1) {
    if (r1 >= 4u) {
        r0 = 0u;
        return r0;
    }
    r0 = (u32(*gptr<u8>(r0 + r1 + 0x7dd2u)) & 4u) >> 2;  // (from the original)
    return r0;
}

}  // namespace d_0071fc90
GUEST_EXPORT(0x0071fc90, d_0071fc90::f_0071fc90);

// f_0071fce4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0071fce4 {


u32 f_0071fce4(u32 r0, u32 r1) {
    if (r1 >= 4u) {
        r0 = 0u;
        return r0;
    }
    r0 = (u32(*gptr<u8>(r0 + r1 + 0x7dd2u)) & 8u) >> 3;  // (from the original)
    return r0;
}

}  // namespace d_0071fce4
GUEST_EXPORT(0x0071fce4, d_0071fce4::f_0071fce4);

// f_0071fd0c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0071fd0c {

struct __attribute__((packed)) Object_0071fd0c_0 {
    u8 unknown_0[0x7dc8];  // (not used here)
    u32 word_7dc8;
};
GUEST_OFFSET(Object_0071fd0c_0, word_7dc8, 0x7dc8);  // (from the original)

struct __attribute__((packed)) Object_0071fd0c_1 {
    u8 unknown_0[0x7dc8];  // (not used here)
    u32 word_7dc8;
};
GUEST_OFFSET(Object_0071fd0c_1, word_7dc8, 0x7dc8);  // (from the original)


u32 f_0071fd0c(gptr<Object_0071fd0c_0> arg0, gptr<Object_0071fd0c_1> arg1) {
    u32 r0 = arg0.addr();
    u32 r1 = arg1.addr();
    r1 = arg1->word_7dc8;
    if (arg0->word_7dc8 >= r1) {
        r0 = 0u;
    } else {
        r0 = 1u;
    }
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_0071fd0c
GUEST_EXPORT(0x0071fd0c, d_0071fd0c::f_0071fd0c);

// f_0071fe48: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0071fe48 {

inline constexpr guest::Function<0x0047ea68, u32(u32, u32, u32, u32)> call_0047ea68;  // (from the original)

u32 f_0071fe48(u32 r0) {
    u32 r1 = 0;
    u32 r2 = 0;
    u32 r4 = guest::cpu()->r[4];
    guest::cpu()->r[13] -= 8u;
    r4 = r0;
    r2 = 0u;
    r1 = 0x7f0u;  // (from the original)
    r0 = r0 + 4u;
    r0 = call_0047ea68(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    *gptr<u32>(r4) = u32(r0);
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_0071fe48
GUEST_EXPORT(0x0071fe48, d_0071fe48::f_0071fe48);

// f_0071fe68: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0071fe68 {

inline constexpr guest::Function<0x0047ea68, u32(u32, u32, u32, u32)> call_0047ea68;  // (from the original)

u32 f_0071fe68(u32 r0) {
    u32 r1 = 0;
    u32 r2 = 0;
    u32 r4 = guest::cpu()->r[4];
    guest::cpu()->r[13] -= 8u;
    r4 = r0;
    r2 = 0u;
    r1 = 0x7f0u;  // (from the original)
    r0 = r0 + 4u;
    r0 = call_0047ea68(r0, r1, r2, guest::cpu()->r[3]);
    r1 = *gptr<u32>(r4);
    if (r0 == r1) {
        r0 = 1u;
    } else {
        r0 = 0u;
    }
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_0071fe68
GUEST_EXPORT(0x0071fe68, d_0071fe68::f_0071fe68);
