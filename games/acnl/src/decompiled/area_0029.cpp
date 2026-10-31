// Functions decompiled by tools/decomp (docs/decomp.md), each proved equal to the recompiled original (prove-cpp). The
// names are generated (d_<address>::f_<address>, Object_<address>_<argument>, word_<offset>) and still to be chosen.
#include "guest/guest.hpp"

#include <bit>

using guest::gptr;

// f_002900d4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002900d4 {


u32 f_002900d4() {
    u32 r0 = 0;
    u32 r1 = 0;
    u32 r2 = 0;
    u32 zf = 0;
    r0 = 0x950708u;  // (from the original)
    r1 = 0u;
    if (u32(*gptr<u8>(r0 + 8u)) != 0) {
        *gptr<u8>(r0 + 8u) = u8(r1);
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r2 = u32(*gptr<u8>(r0));
    zf = r2 == 3u;
    if (!zf) {
        zf = r2 == 1u;
    }
    if (zf) {
        *gptr<u8>(r0 + 1u) = u8(r1);
        *gptr<u8>(r0) = u8(r1);
    }
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_002900d4
GUEST_EXPORT(0x002900d4, d_002900d4::f_002900d4);

// f_00290108: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00290108 {


u32 f_00290108() {
    u32 res = 0;
    u32 r0 = 0;
    u32 r1 = 0;
    u32 zf = 0;
    r0 = 0x950708u;  // (from the original)
    r1 = u32(*gptr<u8>(r0));
    zf = r1 == 2u;
    if (zf) {
        r1 = u32(*gptr<u8>(r0 + 5u));
        zf = r1 == 0;
    }
    if (!zf) {
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r1 = *gptr<u32>(r0 + 0x18u) + 1u;  // (from the original)
    res = r1 - 0x3e8u;  // (from the original)
    *gptr<u32>(r0 + 0x18u) = u32(r1);  // (from the original)
    if (res >> 0x1f == ((r1 ^ 0x3e8u) & (r1 ^ res)) >> 0x1f) {  // (from the original)
        r1 = 0x3e7u;  // (from the original)
    }
    *gptr<u32>(r0 + 0x18u) = u32(r1);  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_00290108
GUEST_EXPORT(0x00290108, d_00290108::f_00290108);

// f_00290584: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00290584 {

inline constexpr guest::Function<0x001cddec, u32(u32, u32, u32, u32)> call_001cddec;  // (from the original)
inline constexpr guest::Function<0x001cdf04, u32(u32, u32, u32, u32)> call_001cdf04;  // (from the original)
inline constexpr guest::Function<0x00300904, u32(u32, u32, u32, u32)> call_00300904;  // (from the original)
inline constexpr guest::Function<0x0030b6c4, u32(u32, u32, u32, u32)> call_0030b6c4;  // (from the original)
inline constexpr guest::Function<0x0058a17c, u32(u32, u32, u32, u32)> call_0058a17c;  // (from the original)
inline constexpr guest::Function<0x0058c19c, u32(u32, u32, u32, u32)> call_0058c19c;  // (from the original)
inline constexpr guest::Function<0x0062512c, u32(u32, u32, u32, u32)> call_0062512c;  // (from the original)
inline constexpr guest::Function<0x006268f8, u32(u32, u32, u32, u32)> call_006268f8;  // (from the original)

u32 f_00290584(u32 r0_unused, u32 r1, u32 r2) {
    u32 r0 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 0x20u;  // (from the original)
    r5 = 0x950708u;  // (from the original)
    r0 = u32(*gptr<u8>(r5 + 6u));
    if (r0 != 0) {
        goto L_2905b4;
    }
    guest::cpu()->r[13] = r13;
    r0 = call_00300904(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    if (r0 == 0) {
        goto L_2905b4;
    }
    guest::cpu()->r[13] = r13;
    r0 = call_0030b6c4(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    if (r0 == 0) {
        r13 = r13 + 0x20u;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return r0;
    }
L_2905b4:;
    guest::cpu()->r[13] = r13;
    r0 = call_0058c19c(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    guest::cpu()->r[13] = r13;
    r0 = call_0058a17c(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    guest::cpu()->r[13] = r13;
    r0 = call_00300904(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    if (r0 == 0) {
        goto L_290624;
    }
    guest::cpu()->r[13] = r13;
    r0 = call_0030b6c4(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    if (r0 == 0) {
        goto L_290624;
    }
    r4 = r13;
    r0 = 0x90u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_006268f8(r0, r1, r2, guest::cpu()->r[3]);
    r2 = guest::cpu()->r[2];
    r1 = r0;
    r0 = r4;
    guest::cpu()->r[13] = r13;
    r0 = call_001cdf04(r0, r1, r2, guest::cpu()->r[3]);
    r2 = guest::cpu()->r[2];
    r1 = 2u;
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_001cddec(r0, r1, r2, guest::cpu()->r[3]);
    r2 = 1u;
    r1 = r13;
    r0 = 0x90u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0062512c(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
L_290624:;
    r0 = 1u;
    *gptr<u8>(r5 + 5u) = u8(r0);
    r13 = r13 + 0x20u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_00290584
GUEST_EXPORT(0x00290584, d_00290584::f_00290584);

// f_002915b0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002915b0 {


u32 f_002915b0() {
    u32 res = 0;
    u32 r0 = 0;
    u32 r1 = 0;
    u32 zf = 0;
    r0 = 0x950708u;  // (from the original)
    r1 = u32(*gptr<u8>(r0));
    zf = r1 == 2u;
    if (zf) {
        r1 = u32(*gptr<u8>(r0 + 5u));
        zf = r1 == 0;
    }
    if (!zf) {
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r1 = *gptr<u32>(r0 + 0x10u) + 1u;  // (from the original)
    res = r1 - 0x3e8u;  // (from the original)
    *gptr<u32>(r0 + 0x10u) = u32(r1);  // (from the original)
    if (res >> 0x1f == ((r1 ^ 0x3e8u) & (r1 ^ res)) >> 0x1f) {  // (from the original)
        r1 = 0x3e7u;  // (from the original)
    }
    *gptr<u32>(r0 + 0x10u) = u32(r1);  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_002915b0
GUEST_EXPORT(0x002915b0, d_002915b0::f_002915b0);

// f_00291990: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00291990 {

struct __attribute__((packed)) Object_00291990_0 {
    u8 unknown_0[0x688];  // (not used here)
    u32 word_688;
    u32 word_68c;
    u8 unknown_690[0x41d];  // (not used here)
    u8 byte_aad;
};
GUEST_OFFSET(Object_00291990_0, word_688, 0x688);  // (from the original)
GUEST_OFFSET(Object_00291990_0, word_68c, 0x68c);  // (from the original)
GUEST_OFFSET(Object_00291990_0, byte_aad, 0xaad);  // (from the original)

inline constexpr guest::Function<0x00291a18, u32(u32, u32, u32, u32)> call_00291a18;  // (from the original)

u32 f_00291990(gptr<Object_00291990_0> arg0, u32 r1_unused, u32 r2_unused, u32 r3) {
    u32 res = 0;
    u32 r0 = arg0.addr();
    u32 r1 = 0;
    u32 r2 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r13 = guest::cpu()->r[13];
    *gptr<u32>(r13 + 0xfffffff0u) = u32(r3);  // (from the original)
    r13 = r13 - 0x10;  // (from the original)
    r4 = r0;
    r5 = r4 + 0xa00u;  // (from the original)
    r2 = 6u;
    *gptr<u32>(r13) = u32(arg0->word_68c);
    r3 = arg0->word_688;
    r1 = u32(s32(s8(arg0->byte_aad)));
    r0 = r4;
    guest::cpu()->r[13] = r13;
    r0 = call_00291a18(r0, r1, r2, r3);
    if (u32(*gptr<u8>(0x950708u)) != 3u) {  // (from the original)
        goto L_2919f4;
    }
    r0 = u32(s32(s8(*gptr<u8>(r5 + 0xabu))));  // (from the original)
    res = r0;
    if (u32(res == 0) || res >> 0x1f != (r0 & (r0 ^ res)) >> 0x1f) {  // (from the original)
        goto L_2919f4;
    }
    r2 = 6u;
    r1 = 0x3cu;  // (from the original)
    *gptr<u32>(r13) = u32(*gptr<u32>(r4 + 0x684u));  // (from the original)
    r3 = *gptr<u32>(r4 + 0x680u);  // (from the original)
    r0 = r4;
    guest::cpu()->r[13] = r13;
    r0 = call_00291a18(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r13 = r13 + 0x10;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
L_2919f4:;
    r2 = 6u;
    *gptr<u32>(r13) = u32(*gptr<u32>(r4 + 0x684u));  // (from the original)
    r1 = u32(s32(s8(*gptr<u8>(r5 + 0xacu))));  // (from the original)
    r3 = *gptr<u32>(r4 + 0x680u);  // (from the original)
    r0 = r4;
    guest::cpu()->r[13] = r13;
    r0 = call_00291a18(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r13 = r13 + 0x10;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_00291990
GUEST_EXPORT(0x00291990, d_00291990::f_00291990);

// f_0029223c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0029223c {


u32 f_0029223c() {
    u32 r0 = 0;
    u32 r1 = 0;
    r1 = 0x950708u;  // (from the original)
    r0 = *gptr<u32>(r1 + 0xcu);  // (from the original)
    if (r0 == 0) {
        r0 = 5u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    if (u32(*gptr<u8>(r0 + 0xb90u)) != 0) {  // (from the original)
        r0 = u32(*gptr<u8>(r1 + 0xbu));  // (from the original)
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r0 = 5u;
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_0029223c
GUEST_EXPORT(0x0029223c, d_0029223c::f_0029223c);

// f_00292ccc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00292ccc {


u32 f_00292ccc() {
    u32 res = 0;
    u32 r0 = 0;
    u32 r1 = 0;
    u32 zf = 0;
    r0 = 0x950708u;  // (from the original)
    r1 = u32(*gptr<u8>(r0));
    zf = r1 == 2u;
    if (zf) {
        r1 = u32(*gptr<u8>(r0 + 5u));
        zf = r1 == 0;
    }
    if (!zf) {
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r1 = *gptr<u32>(r0 + 0x14u) + 1u;  // (from the original)
    res = r1 - 0x3e8u;  // (from the original)
    *gptr<u32>(r0 + 0x14u) = u32(r1);  // (from the original)
    if (res >> 0x1f == ((r1 ^ 0x3e8u) & (r1 ^ res)) >> 0x1f) {  // (from the original)
        r1 = 0x3e7u;  // (from the original)
    }
    *gptr<u32>(r0 + 0x14u) = u32(r1);  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_00292ccc
GUEST_EXPORT(0x00292ccc, d_00292ccc::f_00292ccc);

// f_00292d08: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00292d08 {


u32 f_00292d08() {
    u32 r0 = 0;
    u32 r1 = 0;
    r0 = 0x950708u;  // (from the original)
    r1 = 0u;
    *gptr<u8>(r0 + 1u) = u8(r1);
    *gptr<u8>(r0) = u8(r1);
    *gptr<u8>(r0 + 5u) = u8(1u);
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_00292d08
GUEST_EXPORT(0x00292d08, d_00292d08::f_00292d08);

// f_00292d28: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00292d28 {

inline constexpr guest::Function<0x002fb328, u32(u32, u32, u32, u32)> call_002fb328;  // (from the original)

u32 f_00292d28(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 res = 0;
    guest::cpu()->r[13] -= 8u;
    r0 = call_002fb328(r0, r1, r2, r3);
    r1 = r0 + 0x80u;  // (from the original)
    r0 = 0x950708u;  // (from the original)
    r1 = r1 - 0xfff901ccu;  // (from the original)
    if (u32(*gptr<u8>(r0)) != 3u) {
        r0 = 0u;
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r2 = *gptr<u32>(r0 + 0x10u);  // (from the original)
    res = r2;
    if (u32(res == 0) || res >> 0x1f != (r2 & (r2 ^ res)) >> 0x1f) {  // (from the original)
        r0 = 0u;
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    if (u32(*gptr<u8>(r0 + 5u)) != 0) {
        r0 = 0u;
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r0 = u32(*gptr<u8>(r1));
    if ((r0 & 8u) == 0) {
        r0 = 0u;
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    if ((r0 & 0x40u) == 0) {  // (from the original)
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

}  // namespace d_00292d28
GUEST_EXPORT(0x00292d28, d_00292d28::f_00292d28);

// f_00292dbc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00292dbc {


u32 f_00292dbc(u32 r0) {
    u32 r1 = 0;
    u32 r2 = 0;
    u32 r3 = 0;
    r1 = 0x950708u;  // (from the original)
    if (u32(*gptr<u8>(r1 + 0xau)) != 0) {  // (from the original)
        if (r0 == u32(*gptr<u8>(r1 + 0xbu))) {  // (from the original)
            r0 = 0u;
        } else {
            *gptr<u8>(r1 + 0xbu) = u8(r0);  // (from the original)
            r0 = 1u;
        }
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r3 = 1u;
    r2 = r0;
    *gptr<u8>(r1 + 0xau) = u8(r3);  // (from the original)
    r0 = r3;
    *gptr<u8>(r1 + 0xbu) = u8(r2);  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_00292dbc
GUEST_EXPORT(0x00292dbc, d_00292dbc::f_00292dbc);

// f_00292e30: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00292e30 {

struct __attribute__((packed)) Object_00292e30_0 {
    u8 unknown_0[0x18e];  // (not used here)
    u8 byte_18e;
    u8 unknown_18f[0x14b];  // (not used here)
    u8 byte_2da;
    u8 unknown_2db[0x40d];  // (not used here)
    u32 word_6e8;
    u32 word_6ec;
};
GUEST_OFFSET(Object_00292e30_0, byte_18e, 0x18e);  // (from the original)
GUEST_OFFSET(Object_00292e30_0, byte_2da, 0x2da);  // (from the original)
GUEST_OFFSET(Object_00292e30_0, word_6e8, 0x6e8);  // (from the original)
GUEST_OFFSET(Object_00292e30_0, word_6ec, 0x6ec);  // (from the original)


void f_00292e30(gptr<Object_00292e30_0> arg0, u32 r1) {
    u32 r2 = 0;
    u32 zf = 0;
    zf = r1 == 0;
    if (zf) {
        r1 = 0u;
    } else {
        r1 = 0xffu;  // (from the original)
    }
    *gptr<u8>(arg0->word_6e8 + 0xb4u) = u8(r1);  // (from the original)
    if (zf) {
        r2 = 0u;
    } else {
        r2 = 0xffu;  // (from the original)
    }
    *gptr<u8>(arg0->word_6ec + 0xb4u) = u8(r2);  // (from the original)
    r1 = 1u;
    if (u32(*gptr<u8>(0x950708u)) == 0) {  // (from the original)
        arg0->byte_18e = u8(r1);
    } else {
        arg0->byte_2da = u8(r1);
    }
    guest::cpu()->r[1] = r1;
    return;
}

}  // namespace d_00292e30
GUEST_EXPORT(0x00292e30, d_00292e30::f_00292e30);

// f_00292fe4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00292fe4 {


u32 f_00292fe4() {
    u32 r0 = 0;
    u32 r1 = 0;
    r0 = 0x950708u;  // (from the original)
    r1 = u32(*gptr<u8>(r0));
    if (r1 == 4u) {
        r0 = *gptr<u32>(r0 + 0x1cu);  // (from the original)
    } else {
        r0 = ~0u;
    }
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_00292fe4
GUEST_EXPORT(0x00292fe4, d_00292fe4::f_00292fe4);

// f_00293000: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00293000 {

inline constexpr guest::Function<0x001cddec, u32(u32, u32, u32, u32)> call_001cddec;  // (from the original)
inline constexpr guest::Function<0x001cdf04, u32(u32, u32, u32, u32)> call_001cdf04;  // (from the original)
inline constexpr guest::Function<0x00300904, u32(u32, u32, u32, u32)> call_00300904;  // (from the original)
inline constexpr guest::Function<0x0030b6c4, u32(u32, u32, u32, u32)> call_0030b6c4;  // (from the original)
inline constexpr guest::Function<0x0058d3b4, u32(u32, u32, u32, u32)> call_0058d3b4;  // (from the original)
inline constexpr guest::Function<0x0060be28, u32(u32, u32, u32, u32)> call_0060be28;  // (from the original)
inline constexpr guest::Function<0x0062512c, u32(u32, u32, u32, u32)> call_0062512c;  // (from the original)
inline constexpr guest::Function<0x006268f8, u32(u32, u32, u32, u32)> call_006268f8;  // (from the original)

u32 f_00293000(u32 r0_unused, u32 r1, u32 r2, float S0) {
    u32 res = 0;
    u32 r0 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 0x20u;  // (from the original)
    r5 = 0x950708u;  // (from the original)
    r0 = u32(*gptr<u8>(r5 + 6u));
    if (r0 != 0) {
        goto L_293030;
    }
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    r0 = call_00300904(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    S0 = guest::cpu()->s[0];
    if (r0 == 0) {
        goto L_293030;
    }
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    r0 = call_0030b6c4(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    S0 = guest::cpu()->s[0];
    if (r0 == 0) {
        r13 = r13 + 0x20u;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        guest::cpu()->s[0] = S0;
        return r0;
    }
L_293030:;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    r0 = call_00300904(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    S0 = guest::cpu()->s[0];
    if (r0 == 0) {
        goto L_293088;
    }
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    r0 = call_0030b6c4(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    S0 = guest::cpu()->s[0];
    if (r0 == 0) {
        goto L_293088;
    }
    r4 = r13;
    r0 = 0x90u;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    r0 = call_006268f8(r0, r1, r2, guest::cpu()->r[3]);
    r2 = guest::cpu()->r[2];
    S0 = guest::cpu()->s[0];
    r1 = r0;
    r0 = r4;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    r0 = call_001cdf04(r0, r1, r2, guest::cpu()->r[3]);
    r2 = guest::cpu()->r[2];
    S0 = guest::cpu()->s[0];
    r1 = 2u;
    r0 = r13;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    r0 = call_001cddec(r0, r1, r2, guest::cpu()->r[3]);
    S0 = guest::cpu()->s[0];
    r2 = 1u;
    r1 = r13;
    r0 = 0x90u;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    r0 = call_0062512c(r0, r1, r2, guest::cpu()->r[3]);
    r2 = guest::cpu()->r[2];
    S0 = guest::cpu()->s[0];
L_293088:;
    r1 = u32(*gptr<u8>(r5));
    r0 = 0u;
    if (r1 != 3u) {
        goto L_2930cc;
    }
    r1 = *gptr<u32>(r5 + 0x10u);  // (from the original)
    res = r1;
    if (u32(res == 0) || res >> 0x1f != (r1 & (r1 ^ res)) >> 0x1f) {  // (from the original)
        goto L_2930cc;
    }
    *gptr<u8>(r5 + 1u) = u8(r0);
    r0 = 0x22u;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    r0 = call_0060be28(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r0 = 0x10004a3u;  // (from the original)
    S0 = std::bit_cast<float>(*gptr<u32>(0x2930dcu));  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    r0 = call_0058d3b4(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    S0 = guest::cpu()->s[0];
    r0 = 1u;
    *gptr<u8>(r5 + 5u) = u8(r0);
    r13 = r13 + 0x20u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    return r0;
L_2930cc:;
    *gptr<u8>(r5 + 1u) = u8(r0);
    r13 = r13 + 0x20u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    return r0;
}

}  // namespace d_00293000
GUEST_EXPORT(0x00293000, d_00293000::f_00293000);

// f_00293258: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00293258 {

inline constexpr guest::Function<0x001cdeac, u32(u32, u32, u32, u32)> call_001cdeac;  // (from the original)
inline constexpr guest::Function<0x001cdf04, u32(u32, u32, u32, u32)> call_001cdf04;  // (from the original)
inline constexpr guest::Function<0x0062512c, u32(u32, u32, u32, u32)> call_0062512c;  // (from the original)
inline constexpr guest::Function<0x006268f8, u32(u32, u32, u32, u32)> call_006268f8;  // (from the original)

u32 f_00293258(u32 r0_unused, u32 r1, u32 r2) {
    u32 r0 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 0x18u;  // (from the original)
    r4 = r13;
    r0 = 0x90u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_006268f8(r0, r1, r2, guest::cpu()->r[3]);
    r2 = guest::cpu()->r[2];
    r1 = r0;
    r0 = r4;
    guest::cpu()->r[13] = r13;
    r0 = call_001cdf04(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_001cdeac(r0, r1, r2, guest::cpu()->r[3]);
    r2 = 1u;
    r1 = r13;
    r0 = 0x90u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0062512c(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r13 = r13 + 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_00293258
GUEST_EXPORT(0x00293258, d_00293258::f_00293258);

// f_00293298: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00293298 {

inline constexpr guest::Function<0x00114af1, u32(u32, u32, u32, u32)> call_00114af0;  // (from the original)
inline constexpr guest::Function<0x002fb378, u32(u32, u32, u32, u32)> call_002fb378;  // (from the original)
inline constexpr guest::Function<0x00300904, u32(u32, u32, u32, u32)> call_00300904;  // (from the original)
inline constexpr guest::Function<0x0030b6c4, u32(u32, u32, u32, u32)> call_0030b6c4;  // (from the original)
inline constexpr guest::Function<0x0056cc38, u32(u32, u32, u32, u32)> call_0056cc38;  // (from the original)
inline constexpr guest::Function<0x0056cce4, u32(u32, u32, u32, u32)> call_0056cce4;  // (from the original)
inline constexpr guest::Function<0x0056ce84, u32(u32, u32, u32, u32)> call_0056ce84;  // (from the original)
inline constexpr guest::Function<0x0056cedc, u32(u32, u32, u32, u32)> call_0056cedc;  // (from the original)
inline constexpr guest::Function<0x0058d3b4, u32(u32, u32, u32, u32)> call_0058d3b4;  // (from the original)
inline constexpr guest::Function<0x0060be28, u32(u32, u32, u32, u32)> call_0060be28;  // (from the original)

u32 f_00293298(u32 r0_unused, u32 r1, u32 r2, u32 r3, float S0) {
    u32 r0 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 zf = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r4 = 0x950708u;  // (from the original)
    r0 = u32(*gptr<u8>(r4 + 6u));
    if (r0 != 0) {
        goto L_2932c4;
    }
    guest::cpu()->s[0] = S0;
    r0 = call_00300904(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
    if (r0 == 0) {
        goto L_2932c4;
    }
    guest::cpu()->s[0] = S0;
    r0 = call_0030b6c4(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
    if (r0 == 0) {
        goto L_293314;
    }
L_2932c4:;
    r0 = u32(*gptr<u8>(r4));
    zf = r0 == 0;
    if (!zf) {
        zf = r0 == 2u;
    }
    if (!zf) {
        goto L_293314;
    }
    *gptr<u8>(r4 + 1u) = u8(3u);
    r0 = u32(*gptr<u8>(r4 + 6u));
    r6 = 0x997f88u;  // (from the original)
    r5 = 0u;
    if (r0 == 0) {
        goto L_293318;
    }
    r0 = r6 + 0x34u;  // (from the original)
    r6 = r6 + 0x40u;  // (from the original)
    r1 = *gptr<u32>(r0 + 4);
    r2 = *gptr<u32>(r0 + 8);
    *gptr<u32>(r6) = u32(*gptr<u32>(r0));
    *gptr<u32>(r6 + 4) = u32(r1);
    *gptr<u32>(r6 + 8) = u32(r2);
    r1 = ~0u;
    r0 = 0x997fc8u;  // (from the original)
    guest::cpu()->s[0] = S0;
    r0 = call_0056cc38(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    S0 = guest::cpu()->s[0];
    *gptr<u32>(r4 + 0x10u) = u32(r5);  // (from the original)
    *gptr<u32>(r4 + 0x14u) = u32(r5);  // (from the original)
L_293314:;
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->s[0] = S0;
    return r0;
L_293318:;
    guest::cpu()->s[0] = S0;
    r0 = call_00114af0(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
    r1 = r4 + 0x10u;  // (from the original)
    *gptr<u32>(r1) = u32(r0);
    *gptr<u32>(r1 + 4) = u32(r5);
    guest::cpu()->s[0] = S0;
    r0 = call_002fb378(r0, r1, r2, r3);
    S0 = guest::cpu()->s[0];
    r1 = *gptr<u32>(r0 + 4u);
    r2 = *gptr<u32>(r0);
    r0 = *gptr<u32>(r0 + 8u);
    *gptr<u32>(r6 + 0x38u) = u32(r1);  // (from the original)
    *gptr<u32>(r6 + 0x34u) = u32(r2);  // (from the original)
    r3 = r6 + 0x3cu;  // (from the original)
    *gptr<u32>(r6 + 0x44u) = u32(r1);  // (from the original)
    *gptr<u32>(r3) = u32(r0);
    *gptr<u32>(r3 + 4) = u32(r2);
    r1 = 1u;
    *gptr<u32>(r6 + 0x48u) = u32(r0);  // (from the original)
    r0 = 0x997fbcu;  // (from the original)
    guest::cpu()->s[0] = S0;
    r0 = call_0056cc38(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
    if (*gptr<u32>(r4 + 0x10u) != 0) {  // (from the original)
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        r0 = 0x21u;  // (from the original)
        guest::cpu()->s[0] = S0;
        return call_0060be28(r0, r1, r2, r3);
    }
    r0 = 0x997fbcu;  // (from the original)
    r1 = 0u;
    guest::cpu()->s[0] = S0;
    r0 = call_0056cce4(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
    r0 = 0x997fbcu;  // (from the original)
    r1 = 0u;
    guest::cpu()->s[0] = S0;
    r0 = call_0056ce84(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
    r0 = 0x997fbcu;  // (from the original)
    r1 = 0u;
    guest::cpu()->s[0] = S0;
    r0 = call_0056cedc(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
    r0 = 0x23u;  // (from the original)
    guest::cpu()->s[0] = S0;
    r0 = call_0060be28(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    r0 = 0x10004a3u;  // (from the original)
    S0 = std::bit_cast<float>(*gptr<u32>(0x2933c4u));  // (from the original)
    guest::cpu()->s[0] = S0;
    return call_0058d3b4(r0, r1, r2, r3);
}

}  // namespace d_00293298
GUEST_EXPORT(0x00293298, d_00293298::f_00293298);

// f_002933cc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002933cc {

inline constexpr guest::Function<0x001cdf04, u32(u32, u32, u32, u32)> call_001cdf04;  // (from the original)
inline constexpr guest::Function<0x001cdf18, u32(u32, u32, u32, u32)> call_001cdf18;  // (from the original)
inline constexpr guest::Function<0x002fae84, u32(u32, u32, u32, u32)> call_002fae84;  // (from the original)
inline constexpr guest::Function<0x00300904, u32(u32, u32, u32, u32)> call_00300904;  // (from the original)
inline constexpr guest::Function<0x0030b6c4, u32(u32, u32, u32, u32)> call_0030b6c4;  // (from the original)
inline constexpr guest::Function<0x0062512c, u32(u32, u32, u32, u32)> call_0062512c;  // (from the original)
inline constexpr guest::Function<0x006268f8, u32(u32, u32, u32, u32)> call_006268f8;  // (from the original)

u32 f_002933cc(u32 r0, u32 r1, u32 r2) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 0x20u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002fae84(r0, r1, r2, guest::cpu()->r[3]);
    r2 = guest::cpu()->r[2];
    r0 = r0 - 0xfff901ccu;  // (from the original)
    r1 = u32(*gptr<u8>(r0));
    if ((r1 & 8u) != 0) {
        r1 = r1 | 0x40u;  // (from the original)
        *gptr<u8>(r0) = u8(r1);
    }
    guest::cpu()->r[13] = r13;
    r0 = call_00300904(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r4 = 0x950708u;  // (from the original)
    r5 = 0u;
    r6 = 1u;
    if (r0 != 0) {
        guest::cpu()->r[13] = r13;
        r0 = call_0030b6c4(r0, r1, r2, guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        if (r0 != 0) {
            *gptr<u8>(r4 + 1u) = u8(r5);
            *gptr<u8>(r4) = u8(r5);
            *gptr<u8>(r4 + 5u) = u8(r6);
            r4 = r13;
            r0 = 0x90u;  // (from the original)
            guest::cpu()->r[13] = r13;
            r0 = call_006268f8(r0, r1, r2, guest::cpu()->r[3]);
            r2 = guest::cpu()->r[2];
            r1 = r0;
            r0 = r4;
            guest::cpu()->r[13] = r13;
            r0 = call_001cdf04(r0, r1, r2, guest::cpu()->r[3]);
            r1 = guest::cpu()->r[1];
            r2 = guest::cpu()->r[2];
            r0 = r13;
            guest::cpu()->r[13] = r13;
            r0 = call_001cdf18(r0, r1, r2, guest::cpu()->r[3]);
            r2 = 1u;
            r1 = r13;
            r0 = 0x90u;  // (from the original)
            guest::cpu()->r[13] = r13;
            r0 = call_0062512c(r0, r1, r2, guest::cpu()->r[3]);
            r1 = guest::cpu()->r[1];
        }
        r13 = r13 + 0x20u;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    *gptr<u8>(r4 + 1u) = u8(r5);
    *gptr<u8>(r4) = u8(r5);
    *gptr<u8>(r4 + 5u) = u8(r6);
    r13 = r13 + 0x20u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_002933cc
GUEST_EXPORT(0x002933cc, d_002933cc::f_002933cc);

// f_002941f0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002941f0 {

struct __attribute__((packed)) Object_002941f0_0 {
    u8 unknown_0[0xaab];  // (not used here)
    u8 byte_aab;
    u8 byte_aac;
    u8 byte_aad;
};
GUEST_OFFSET(Object_002941f0_0, byte_aab, 0xaab);  // (from the original)
GUEST_OFFSET(Object_002941f0_0, byte_aac, 0xaac);  // (from the original)
GUEST_OFFSET(Object_002941f0_0, byte_aad, 0xaad);  // (from the original)

inline constexpr guest::Function<0x0058d3b4, u32(u32, u32, u32, u32)> call_0058d3b4;  // (from the original)

u32 f_002941f0(gptr<Object_002941f0_0> arg0, float S0) {
    u32 r0 = arg0.addr();
    u32 r1 = 0;
    u32 r2 = 0;
    u32 r3 = 0;
    u32 zf = 0;
    r2 = 0x950708u;  // (from the original)
    r0 = u32(s32(s8(arg0->byte_aad)));
    if (u32(arg0->byte_aab) == 0) {
        r1 = u32(s32(s8(arg0->byte_aac)));
    } else {
        r1 = 0x3cu;  // (from the original)
    }
    r3 = u32(*gptr<u8>(r2));
    if (r3 != 3u) {
        zf = r1 == 0;
        if (zf) {
            zf = r0 == 0;
        }
        if (!zf) {
            goto L_294230;
        }
        guest::cpu()->r[1] = r1;
        guest::cpu()->s[0] = S0;
        return r0;
    }
    if (r1 == 0x3cu) {  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->s[0] = S0;
        return r0;
    }
L_294230:;
    if (r3 == 3u) {
        goto L_2942b8;
    }
    if (r1 != 0) {
        if (r1 == 1u) {
            goto L_29425c;
        }
        goto L_294264;
    }
    if (!u32(r0 >= 0xau) || u32(r0 == 0xau)) {  // (from the original)
        r0 = 0x10004a1u;  // (from the original)
        S0 = std::bit_cast<float>(*gptr<u32>(0x29433cu));  // (from the original)
        guest::cpu()->s[0] = S0;
        return call_0058d3b4(r0, r1, r2, r3);
    }
    goto L_294264;
L_29425c:;
    if (r0 == 0) {
        goto L_294278;
    }
L_294264:;
    if (r3 == 4u) {
        goto L_294290;
    }
    if (r3 == 3u) {
        goto L_2942b8;
    }
    goto L_2942e0;
L_294278:;
    if (r3 == 4u) {
        guest::cpu()->r[1] = r1;
        guest::cpu()->s[0] = S0;
        return r0;
    }
    r1 = 1u;
    r0 = 0x10004a0u;  // (from the original)
    *gptr<u8>(r2 + 7u) = u8(r1);
    S0 = std::bit_cast<float>(*gptr<u32>(0x29433cu));  // (from the original)
    guest::cpu()->s[0] = S0;
    return call_0058d3b4(r0, r1, r2, r3);
L_294290:;
    if (r1 != 0) {
        goto L_2942e0;
    }
    if (r0 < 0x18u) {  // (from the original)
        goto L_2942e0;
    }
    if (u32(r0 >= 0x1du) && !u32(r0 == 0x1du)) {  // (from the original)
        goto L_2942e0;
    }
    r1 = 0x856bccu;  // (from the original)
    r0 = *gptr<u32>(r1 + (r0 << 2) - 0x60u);  // (from the original)
    goto L_294314;
L_2942b8:;
    if (r1 != 0) {
        goto L_2942e0;
    }
    if (r0 == 0) {
        goto L_2942e0;
    }
    if (u32(r0 >= 6u) && !u32(r0 == 6u)) {
        goto L_2942e0;
    }
    r1 = 0x856be4u;  // (from the original)
    r0 = *gptr<u32>(r1 + (r0 << 2) - 4u);
    goto L_294314;
L_2942e0:;
    r1 = u32(*gptr<u8>(r2 + 7u));
    if (r1 == 0) {
        guest::cpu()->r[1] = r1;
        guest::cpu()->s[0] = S0;
        return r0;
    }
    if (r0 < 0x36u) {  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->s[0] = S0;
        return r0;
    }
    if (u32(r0 >= 0x3bu) && !u32(r0 == 0x3bu)) {  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->s[0] = S0;
        return r0;
    }
    zf = r0 == 0x36u;  // (from the original)
    r1 = 0x856bfcu + (r0 << 2);  // (from the original)
    r0 = *gptr<u32>(r1 - 0xd8u);  // (from the original)
    if (zf) {
        r1 = 0u;
        *gptr<u8>(r2 + 7u) = u8(r1);
    }
L_294314:;
    if (r0 == 0) {
        guest::cpu()->r[1] = r1;
        guest::cpu()->s[0] = S0;
        return r0;
    }
    S0 = std::bit_cast<float>(*gptr<u32>(0x29433cu));  // (from the original)
    guest::cpu()->s[0] = S0;
    return call_0058d3b4(r0, r1, r2, r3);
}

}  // namespace d_002941f0
GUEST_EXPORT(0x002941f0, d_002941f0::f_002941f0);

// f_00294340: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00294340 {


u32 f_00294340() {
    u32 r0 = 0;
    u32 r1 = 0;
    r0 = 0x950708u;  // (from the original)
    r1 = u32(*gptr<u8>(r0));
    if (r1 == 1u) {
        r1 = 0u;
        *gptr<u8>(r0 + 1u) = u8(r1);
    }
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_00294340
GUEST_EXPORT(0x00294340, d_00294340::f_00294340);

// f_002947ac: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002947ac {

inline constexpr guest::Function<0x00569dc4, u32(u32, u32, u32, u32)> call_00569dc4;  // (from the original)
inline constexpr guest::Function<0x0056a974, u32(u32, u32, u32, u32)> call_0056a974;  // (from the original)

u32 f_002947ac(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 0x10u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00569dc4(r0, r1, r2, r3);
    *gptr<u32>(r13 + 4u) = u32(0x2947e4u);  // (from the original)
    *gptr<u32>(r13) = u32(0x9047f8u);  // (from the original)
    r2 = *gptr<u32>(r0 + 4u);
    r0 = 0x997fd4u;  // (from the original)
    r1 = r13;
    r3 = 0x80u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0056a974(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r13 = r13 + 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_002947ac
GUEST_EXPORT(0x002947ac, d_002947ac::f_002947ac);

// f_002958ac: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002958ac {

struct __attribute__((packed)) Object_002958ac_0 {
    u32 word_0;
    u8 unknown_4[0x10];  // (not used here)
    u32 word_14;
    u8 unknown_18[0xb4c];  // (not used here)
    u32 word_b64;
};
GUEST_OFFSET(Object_002958ac_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_002958ac_0, word_14, 0x14);  // (from the original)
GUEST_OFFSET(Object_002958ac_0, word_b64, 0xb64);  // (from the original)

inline constexpr guest::Function<0x002f76ad, u32(u32, u32, u32, u32)> call_002f76ac;  // (from the original)
inline constexpr guest::Function<0x00521ae0, u32(u32, u32, u32, u32)> call_00521ae0;  // (from the original)
inline constexpr guest::Function<0x00567ef0, u32(u32, u32, u32, u32)> call_00567ef0;  // (from the original)
inline constexpr guest::Function<0x0056988c, u32(u32, u32, u32, u32)> call_0056988c;  // (from the original)
inline constexpr guest::Function<0x005bf744, u32(u32, u32, u32, u32)> call_005bf744;  // (from the original)

u32 f_002958ac(gptr<Object_002958ac_0> arg0, u32 r1_unused, u32 r2_unused, u32 r3) {
    u32 r0 = arg0.addr();
    u32 r1 = 0;
    u32 r2 = 0;
    u32 r4 = guest::cpu()->r[4];
    r1 = 0x8f076cu;  // (from the original)
    guest::cpu()->r[13] -= 8u;
    arg0->word_14 = u32(r1 + 0x48u);  // (from the original)
    r2 = 0x8fa930u;  // (from the original)
    arg0->word_0 = u32(r1);
    arg0->word_b64 = u32(r2);
    r0 = r0 + 0xbe8u;  // (from the original)
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
    r1 = 0x295544u;  // (from the original)
    r4 = r0 - 0xb98u;  // (from the original)
    r3 = 4u;
    r2 = 0x48u;  // (from the original)
    r0 = r0 - 0x214u;  // (from the original)
    r0 = call_002f76ac(r0, r1, r2, r3);
    r1 = 0x295544u;  // (from the original)
    r3 = 9u;
    r2 = 0x48u;  // (from the original)
    r0 = r4 + 0x6fcu;  // (from the original)
    r0 = call_002f76ac(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r4 + 0x63cu;  // (from the original)
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
    r0 = r0 - 0x28u;  // (from the original)
    r0 = call_0056988c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0x248u;  // (from the original)
    r0 = call_00567ef0(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0x14cu;  // (from the original)
    r0 = call_005bf744(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0x14cu;  // (from the original)
    r0 = call_005bf744(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    guest::cpu()->r[13] += 8u;
    r0 = r0 - 0x6cu;  // (from the original)
    return call_00521ae0(r0, r1, r2, r3);
}

}  // namespace d_002958ac
GUEST_EXPORT(0x002958ac, d_002958ac::f_002958ac);

// f_0029598c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0029598c {

inline constexpr guest::Function<0x00125b38, u32(u32, u32, u32, u32)> call_00125b38;  // (from the original)

u32 f_0029598c() {
    u32 r0 = 0;
    u32 r1 = 0;
    u32 r2 = 0;
    u32 r3 = 0;
    r3 = 0x80u;  // (from the original)
    r1 = 0x2959a8u;  // (from the original)
    r2 = *gptr<u32>(0x952c48u);  // (from the original)
    r0 = 0x9984ccu;  // (from the original)
    return call_00125b38(r0, r1, r2, r3);
}

}  // namespace d_0029598c
GUEST_EXPORT(0x0029598c, d_0029598c::f_0029598c);

// f_00297724: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00297724 {

inline constexpr guest::Function<0x002682ac, u32(u32, u32, u32, u32)> call_002682ac;  // (from the original)
inline constexpr guest::Function<0x002cdcb0, u32(u32, u32, u32, u32)> call_002cdcb0;  // (from the original)
inline constexpr guest::Function<0x00301d0d, u32(u32, u32, u32, u32)> call_00301d0c;  // (from the original)

u32 f_00297724(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r12 = 0;
    guest::cpu()->r[13] -= 8u;
    r0 = call_002682ac(r0, r1, r2, r3);
    r2 = 0x8f7fd4u;  // (from the original)
    r3 = 0xau;  // (from the original)
    *gptr<u32>(r0) = u32(r2);
    *gptr<u32>(r0 + 0xa40u) = u32(r2 + 0x4cu);  // (from the original)
    r1 = 0x2b9440u;  // (from the original)
    r2 = 0x36cu;  // (from the original)
    r0 = r0 + 0x1888u;  // (from the original)
    r0 = call_00301d0c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 + 0x2238u;  // (from the original)
    r0 = call_002cdcb0(r0, r1, r2, r3);
    r2 = 0x3ca0u;  // (from the original)
    r0 = r0 - 0x3ac0u;  // (from the original)
    r1 = 0u;
    *gptr<u8>(r2 + r0) = u8(r1);
    *gptr<u32>(r2 + 4u + r0) = u32(r1);
    *gptr<u32>(r0 + 0xa64u) = u32(0x2977c4u);  // (from the original)
    r12 = 0x8f0828u;  // (from the original)
    r1 = 0x2977ccu;  // (from the original)
    *gptr<u32>(r0 + 0xa6cu) = u32(r1);  // (from the original)
    *gptr<u32>(r0 + 0xa68u) = u32(0x9533c4u);  // (from the original)
    *gptr<u32>(r0 + 0x24u) = u32(0x2977b8u);  // (from the original)
    *gptr<u32>(r0 + 0xa40u) = u32(r12 + 0x4cu);  // (from the original)
    *gptr<u32>(r0) = u32(r12);
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_00297724
GUEST_EXPORT(0x00297724, d_00297724::f_00297724);

// f_00297b60: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00297b60 {

struct __attribute__((packed)) Object_00297b60_0 {
    u8 unknown_0[0x26c];  // (not used here)
    u32 word_26c;
};
GUEST_OFFSET(Object_00297b60_0, word_26c, 0x26c);  // (from the original)

inline constexpr guest::Function<0x004b6d74, u32(u32, u32, u32, u32)> call_004b6d74;  // (from the original)
inline constexpr guest::Function<0x004b6dc8, u32(u32, u32, u32, u32)> call_004b6dc8;  // (from the original)
inline constexpr guest::Function<0x0056878c, u32(u32, u32, u32, u32)> call_0056878c;  // (from the original)
inline constexpr guest::Function<0x00568c10, u32(u32, u32, u32, u32)> call_00568c10;  // (from the original)
inline constexpr guest::Function<0x006aa944, u32(u32, u32, u32, u32)> call_006aa944;  // (from the original)

u32 f_00297b60(gptr<Object_00297b60_0> arg0, u32 r1, float S0) {
    u32 r0 = arg0.addr();
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r5 = r1;
    r1 = arg0->word_26c;
    r4 = r0;
    r0 = *gptr<u32>(r1 + 0xcu);  // (from the original)
    if (r0 != 0) {
        guest::cpu()->s[0] = S0;
        r0 = call_004b6dc8(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        S0 = guest::cpu()->s[0];
    }
    if (r5 != 0) {
        r1 = *gptr<u32>(r4 + 0x26cu);  // (from the original)
        r0 = r5;
        guest::cpu()->s[0] = S0;
        r0 = call_004b6d74(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        S0 = guest::cpu()->s[0];
        r0 = r4 + 0x24cu;  // (from the original)
        guest::cpu()->s[0] = S0;
        r0 = call_00568c10(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        S0 = guest::cpu()->s[0];
        r0 = r5;
        guest::cpu()->s[0] = S0;
        r0 = call_006aa944(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
        S0 = guest::cpu()->s[0];
        r5 = r4 + 0x400u;  // (from the original)
        r1 = 0x857cb4u;  // (from the original)
        *gptr<u32>(r5 + 0x330u) = u32(std::bit_cast<u32>(S0));  // (from the original)
        r0 = r4 + 0x24cu;  // (from the original)
        guest::cpu()->s[0] = S0;
        r0 = call_0056878c(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        S0 = guest::cpu()->s[0];
        guest::cpu()->s[0] = S0;
        r0 = call_006aa944(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
        S0 = guest::cpu()->s[0];
        r1 = 0x857ca8u;  // (from the original)
        *gptr<u32>(r5 + 0x334u) = u32(std::bit_cast<u32>(S0));  // (from the original)
        r0 = r4 + 0x24cu;  // (from the original)
        guest::cpu()->s[0] = S0;
        r0 = call_0056878c(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        S0 = guest::cpu()->s[0];
        guest::cpu()->s[0] = S0;
        r0 = call_006aa944(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        S0 = guest::cpu()->s[0];
        *gptr<u32>(r5 + 0x338u) = u32(std::bit_cast<u32>(S0));  // (from the original)
    }
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_00297b60
GUEST_EXPORT(0x00297b60, d_00297b60::f_00297b60);

// f_00297d54: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00297d54 {

struct __attribute__((packed)) Object_00297d54_0 {
    u8 unknown_0[0x74c];  // (not used here)
    u32 word_74c;
    u32 word_750;
    u8 unknown_754[0x34];  // (not used here)
    u32 word_788;
};
GUEST_OFFSET(Object_00297d54_0, word_74c, 0x74c);  // (from the original)
GUEST_OFFSET(Object_00297d54_0, word_750, 0x750);  // (from the original)
GUEST_OFFSET(Object_00297d54_0, word_788, 0x788);  // (from the original)


u32 f_00297d54(gptr<Object_00297d54_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r1 = 0;
    u32 r2 = 0;
    u32 zf = 0;
    u32 cf = 0;
    r1 = arg0->word_750;
    r0 = arg0->word_788;
    r2 = arg0->word_74c - 1u;
    zf = r1 == r2;
    cf = r1 >= r2;
    if (cf && !zf) {
        r1 = 1u;
    }
    if (!cf || zf) {
        r1 = 0u;
    }
    r1 = r1 | u32(*gptr<u8>(r0 + 0xb7u)) & 0xfeu;  // (from the original)
    *gptr<u8>(r0 + 0xb7u) = u8(r1);  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_00297d54
GUEST_EXPORT(0x00297d54, d_00297d54::f_00297d54);

// f_00297f04: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00297f04 {

struct __attribute__((packed)) Object_00297f04_0 {
    u8 unknown_0[0x720];  // (not used here)
    u32 word_720;
    u8 unknown_724[0x28];  // (not used here)
    u32 word_74c;
    u32 word_750;
    u32 word_754;
    u8 unknown_758[0x30];  // (not used here)
    u32 word_788;
};
GUEST_OFFSET(Object_00297f04_0, word_720, 0x720);  // (from the original)
GUEST_OFFSET(Object_00297f04_0, word_74c, 0x74c);  // (from the original)
GUEST_OFFSET(Object_00297f04_0, word_750, 0x750);  // (from the original)
GUEST_OFFSET(Object_00297f04_0, word_754, 0x754);  // (from the original)
GUEST_OFFSET(Object_00297f04_0, word_788, 0x788);  // (from the original)

inline constexpr guest::Function<0x002982f0, u32(u32, u32, u32, u32)> call_002982f0;  // (from the original)
inline constexpr guest::Function<0x002986f0, u32(u32, u32, u32, u32)> call_002986f0;  // (from the original)

u32 f_00297f04(gptr<Object_00297f04_0> arg0, u32 r1, u32 r2, float S0, float S1, float S2) {
    u32 res = 0;
    u32 r0 = arg0.addr();
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 zf = 0;
    u32 cf = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r4 = r0;
    r0 = arg0->word_754;
    r5 = r2;
    if (!u32(r0 >= r1) || u32(r0 == r1)) {
        r0 = r1;
    }
    arg0->word_754 = u32(r0);
    arg0->word_750 = u32(r1);
    r0 = r1 - arg0->word_74c + 1u;
    res = r0;
    arg0->word_720 = u32(r0);
    if (u32(res == 0) || res >> 0x1f != (r0 & (r0 ^ res)) >> 0x1f) {  // (from the original)
        r0 = 0u;
    }
    arg0->word_720 = u32(r0);
    r0 = arg0->word_750;
    r1 = arg0->word_74c - 1u;
    zf = r0 == r1;
    cf = r0 >= r1;
    r0 = arg0->word_788;
    if (cf && !zf) {
        r1 = 1u;
    }
    if (!cf || zf) {
        r1 = 0u;
    }
    r2 = u32(*gptr<u8>(r0 + 0xb7u)) & 0xfeu;  // (from the original)
    r1 = r1 | r2;
    *gptr<u8>(r0 + 0xb7u) = u8(r1);  // (from the original)
    r0 = r4;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2;
    r0 = call_002986f0(r0, r1, r2, guest::cpu()->r[3]);
    r2 = guest::cpu()->r[2];
    r0 = r4 + 0x400u;  // (from the original)
    S1 = std::bit_cast<float>(*gptr<u32>(0x297fbcu));  // (from the original)
    S2 = std::bit_cast<float>(*gptr<u32>(*gptr<u32>(r4 + 0x768u) + 0x4cu));  // (from the original)
    r1 = 0u;
    S0 = std::bit_cast<float>(*gptr<u32>(r0 + 0x304u)) - S2 * S1;  // (from the original)
    *gptr<u32>(r0 + 0x314u) = u32(std::bit_cast<u32>(S0));  // (from the original)
    if (r5 != 0) {
        r0 = *gptr<u32>(r4 + 0x720u);  // (from the original)
        r1 = *gptr<u32>(r4 + 0x71cu);  // (from the original)
        res = r1 - r0;
        if (!u32(res == 0) && res >> 0x1f == ((r1 ^ r0) & (r1 ^ res)) >> 0x1f) {  // (from the original)
            r1 = r0;
        }
    }
    r0 = r4;
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2;
    return call_002982f0(r0, r1, r2, guest::cpu()->r[3]);
}

}  // namespace d_00297f04
GUEST_EXPORT(0x00297f04, d_00297f04::f_00297f04);

// f_00298834: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00298834 {

struct __attribute__((packed)) Object_00298834_0 {
    u8 unknown_0[0x784];  // (not used here)
    u32 word_784;
};
GUEST_OFFSET(Object_00298834_0, word_784, 0x784);  // (from the original)

inline constexpr guest::Function<0x004bef3c, u32(u32, u32, u32, u32)> call_004bef3c;  // (from the original)

u32 f_00298834(gptr<Object_00298834_0> arg0) {
    u32 r0 = arg0.addr();
    guest::cpu()->r[13] -= 8u;
    r0 = arg0->word_784;
    r0 = call_004bef3c(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    if (r0 != 0) {
        r0 = 1u;
    }
    guest::cpu()->r[13] += 8u;
    return r0;
}

}  // namespace d_00298834
GUEST_EXPORT(0x00298834, d_00298834::f_00298834);

// f_00298950: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00298950 {

struct __attribute__((packed)) Object_00298950_0 {
    u8 unknown_0[0x6ec];  // (not used here)
    u32 word_6ec;
    u8 unknown_6f0[0xe];  // (not used here)
    u8 byte_6fe;
};
GUEST_OFFSET(Object_00298950_0, word_6ec, 0x6ec);  // (from the original)
GUEST_OFFSET(Object_00298950_0, byte_6fe, 0x6fe);  // (from the original)

inline constexpr guest::Function<0x002982f0, u32(u32, u32, u32, u32)> call_002982f0;  // (from the original)
inline constexpr guest::Function<0x0058d3b4, u32(u32, u32, u32, u32)> call_0058d3b4;  // (from the original)
inline constexpr guest::Function<0x0072355c, u32(u32, u32, u32, u32)> call_0072355c;  // (from the original)

u32 f_00298950(gptr<Object_00298950_0> arg0, u32 r1, u32 r2, float S0) {
    u32 ea = 0;
    u32 res = 0;
    u32 r0 = arg0.addr();
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 0x18;  // (from the original)
    r4 = r0;
    r5 = r0 + 0x600u;  // (from the original)
    r0 = u32(arg0->byte_6fe);
    if (r0 == 1u) {
        goto L_298a48;
    }
    r0 = arg0->word_6ec;
    if (r0 != 0) {
        goto L_298a48;
    }
    r0 = r4 + 0x608u;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    r0 = call_0072355c(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    S0 = guest::cpu()->s[0];
    r6 = r4 + 0x700u;  // (from the original)
    r7 = r4 + 0x400u;  // (from the original)
    if (r0 != 0) {
        if (r0 != 1u) {
            goto L_298a48;
        }
        ea = r4 + 0x71cu;  // (from the original)
        r0 = *gptr<u32>(ea);
        r1 = *gptr<u32>(ea + 4);
        if (s32(r0) >= s32(r1)) {
            goto L_298a48;
        }
        r1 = r0 + 1u;
        r0 = r4;
        guest::cpu()->r[13] = r13;
        guest::cpu()->s[0] = S0;
        r0 = call_002982f0(r0, r1, r2, guest::cpu()->r[3]);
        r2 = u32(*gptr<u8>(r6 + 2u));
        if (u32(*gptr<u8>(r5 + 0xf4u)) == 0) {  // (from the original)
            r0 = 0x10003abu;  // (from the original)
            r1 = 1u;
        } else {
            r0 = 0x10003aau;  // (from the original)
            r1 = 0u;
        }
        if (r2 != 0) {
            if (r1 == 0) {
                r0 = 0x10003acu;  // (from the original)
            } else {
                r0 = 0x10003adu;  // (from the original)
            }
        }
        S0 = std::bit_cast<float>(*gptr<u32>(r7 + 0x338u));  // (from the original)
        r13 = r13 + 0x18;  // (from the original)
        guest::cpu()->r[13] = r13;
        guest::cpu()->s[0] = S0;
        return call_0058d3b4(r0, r1, r2, guest::cpu()->r[3]);
    }
    r0 = *gptr<u32>(r4 + 0x71cu);  // (from the original)
    res = r0;
    if (u32(res == 0) || res >> 0x1f != (r0 & (r0 ^ res)) >> 0x1f) {  // (from the original)
        goto L_298a48;
    }
    r1 = r0 - 1u;
    r0 = r4;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    r0 = call_002982f0(r0, r1, r2, guest::cpu()->r[3]);
    r2 = u32(*gptr<u8>(r6 + 2u));
    if (u32(*gptr<u8>(r5 + 0xf4u)) == 0) {  // (from the original)
        r0 = 0x10003a9u;  // (from the original)
        r1 = 1u;
    } else {
        r0 = 0x10003a8u;  // (from the original)
        r1 = 0u;
    }
    if (r2 != 0) {
        if (r1 == 0) {
            r0 = 0x10003aeu;  // (from the original)
        } else {
            r0 = 0x10003afu;  // (from the original)
        }
    }
    S0 = std::bit_cast<float>(*gptr<u32>(r7 + 0x334u));  // (from the original)
    r13 = r13 + 0x18;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    return call_0058d3b4(r0, r1, r2, guest::cpu()->r[3]);
L_298a48:;
    r13 = r13 + 0x18;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    return r0;
}

}  // namespace d_00298950
GUEST_EXPORT(0x00298950, d_00298950::f_00298950);

// f_00298a6c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00298a6c {

inline constexpr guest::Function<0x002b6a00, u32(u32, u32, u32, u32)> call_002b6a00;  // (from the original)
inline constexpr guest::Function<0x002f6a30, u32(u32, u32, u32, u32)> call_002f6a30;  // (from the original)
inline constexpr guest::Function<0x002f6e98, u32(u32, u32, u32, u32)> call_002f6e98;  // (from the original)
inline constexpr guest::Function<0x002f7508, u32(u32, u32, u32, u32)> call_002f7508;  // (from the original)
inline constexpr guest::Function<0x004b4fc0, u32(u32, u32, u32, u32)> call_004b4fc0;  // (from the original)
inline constexpr guest::Function<0x0056878c, u32(u32, u32, u32, u32)> call_0056878c;  // (from the original)

u32 f_00298a6c(u32 r0, float S0) {
    u32 ea = 0;
    u32 r1 = 0;
    u32 r2 = 0;
    u32 r3 = 0;
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
    r13 = r13 - 0x88u;  // (from the original)
    r5 = r0;
    r9 = r13 + 0x40u;  // (from the original)
    r4 = 0x857bc4u;  // (from the original)
    ea = r4 + 0x18u;  // (from the original)
    r2 = *gptr<u32>(ea);
    r3 = *gptr<u32>(ea + 4);
    r6 = *gptr<u32>(ea + 8);
    r7 = *gptr<u32>(ea + 0xc);  // (from the original)
    r8 = *gptr<u32>(ea + 0x10);  // (from the original)
    r12 = *gptr<u32>(ea + 0x14);  // (from the original)
    ea = r9;
    *gptr<u32>(ea) = u32(r2);
    *gptr<u32>(ea + 4) = u32(r3);
    *gptr<u32>(ea + 8) = u32(r6);
    *gptr<u32>(ea + 0xc) = u32(r7);  // (from the original)
    *gptr<u32>(ea + 0x10) = u32(r8);  // (from the original)
    *gptr<u32>(ea + 0x14) = u32(r12);  // (from the original)
    ea = r4 + 0x30u;  // (from the original)
    r2 = *gptr<u32>(ea);
    ea = r13 + 0x38u;  // (from the original)
    *gptr<u32>(ea) = u32(r0 + 4u);
    *gptr<u32>(ea + 4) = u32(r5 + 0x24cu);  // (from the original)
    r0 = r5 + 0x608u;  // (from the original)
    *gptr<u32>(r13 + 0x58u) = u32(r2);  // (from the original)
    r2 = 0u;
    r1 = r13 + 0x38u;  // (from the original)
    r8 = r0;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    r0 = call_002f6e98(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    ea = r5 + 0x6dcu;  // (from the original)
    r9 = 0u;
    S0 = std::bit_cast<float>(*gptr<u32>(0x298ba8u));  // (from the original)
    r0 = *gptr<u32>(ea) | 0x40u;  // (from the original)
    ea = r5 + 0x6dcu;  // (from the original)
    *gptr<u32>(ea) = u32(r0);
    ea = r13;
    *gptr<u32>(ea) = u32(r9);
    ea = r13 + 4u;
    *gptr<u32>(ea) = u32(r9);
    ea = r13 + 8u;
    *gptr<u32>(ea) = u32(r9);
    ea = r13 + 0xcu;  // (from the original)
    *gptr<u32>(ea) = u32(r9);
    ea = r13 + 0x10u;  // (from the original)
    *gptr<u32>(ea) = u32(r9);
    ea = r13 + 0x14u;  // (from the original)
    *gptr<u32>(ea) = u32(r9);
    ea = r13 + 0x18u;  // (from the original)
    *gptr<u32>(ea) = u32(r9);
    *gptr<u32>(r13 + 8u) = u32(std::bit_cast<u32>(S0));
    *gptr<u32>(r13 + 0xcu) = u32(std::bit_cast<u32>(S0));  // (from the original)
    ea = r4;
    r0 = *gptr<u32>(ea);
    r1 = *gptr<u32>(ea + 4);
    r10 = r13 + 0x28u;  // (from the original)
    r11 = r13 + 0x30u;  // (from the original)
    ea = r13 + 0x28u;  // (from the original)
    *gptr<u32>(ea) = u32(r0);
    *gptr<u32>(ea + 4) = u32(r1);
    ea = r4 + 8u;
    r0 = *gptr<u32>(ea);
    r1 = *gptr<u32>(ea + 4);
    r4 = r9;
    ea = r13 + 0x30u;  // (from the original)
    *gptr<u32>(ea) = u32(r0);
    *gptr<u32>(ea + 4) = u32(r1);
    do {
L_298b0c:;
        r1 = *gptr<u32>(r10 + (r4 << 2));
        r0 = r5 + 0x24cu;  // (from the original)
        guest::cpu()->r[13] = r13;
        guest::cpu()->s[0] = S0;
        r0 = call_0056878c(r0, r1, r2, r3);
        r3 = guest::cpu()->r[3];
        S0 = guest::cpu()->s[0];
        *gptr<u32>(r13) = u32(r0);
        r1 = *gptr<u32>(r11 + (r4 << 2));
        r2 = 1u;
        r0 = r5 + 0x24cu;  // (from the original)
        guest::cpu()->r[13] = r13;
        guest::cpu()->s[0] = S0;
        r0 = call_004b4fc0(r0, r1, r2, r3);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        S0 = guest::cpu()->s[0];
        *gptr<u32>(r13 + 4u) = u32(r0);
        r1 = r13;
        r6 = r5 + ((r4 << 3) - r4 << 5);
        r7 = r6 + 0x448u;  // (from the original)
        r0 = r7;
        *gptr<u32>(r13 + 0x14u) = u32(r4);  // (from the original)
        *gptr<u32>(r13 + 0x10u) = u32(r9);  // (from the original)
        guest::cpu()->r[13] = r13;
        guest::cpu()->s[0] = S0;
        r0 = call_002b6a00(r0, r1, r2, r3);
        r3 = guest::cpu()->r[3];
        S0 = guest::cpu()->s[0];
        *gptr<u8>(r6 + 0x522u) = u8(r9);  // (from the original)
        r2 = 1u;
        r1 = r7;
        r0 = r8;
        *gptr<u8>(r6 + 0x523u) = u8(r9);  // (from the original)
        guest::cpu()->r[13] = r13;
        guest::cpu()->s[0] = S0;
        r0 = call_002f7508(r0, r1, r2, r3);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        S0 = guest::cpu()->s[0];
        r4 = r4 + 1u;
        guest::preempt();
    } while (s32(r4) < s32(2u));
    r1 = 0u;
    r0 = r8;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    r0 = call_002f6a30(r0, r1, r2, r3);
    S0 = guest::cpu()->s[0];
    r1 = 0x6d8u;  // (from the original)
    *gptr<u32>(r5 + 0x6dcu) = u32(*gptr<u32>(r5 + 0x6dcu) & ~8u);  // (from the original)
    r0 = 0x23u;  // (from the original)
    *gptr<u16>(r1 + r5) = u16(r0);
    r13 = r13 + 0x88u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    return r0;
}

}  // namespace d_00298a6c
GUEST_EXPORT(0x00298a6c, d_00298a6c::f_00298a6c);

// f_00298bb0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00298bb0 {

struct __attribute__((packed)) Object_00298bb0_0 {
    u8 unknown_0[0x764];  // (not used here)
    u32 word_764;
};
GUEST_OFFSET(Object_00298bb0_0, word_764, 0x764);  // (from the original)

inline constexpr guest::Function<0x00148710, u32(u32, u32, u32, u32)> call_00148710;  // (from the original)
inline constexpr guest::Function<0x001f99e4, u32(u32, u32, u32, u32)> call_001f99e4;  // (from the original)
inline constexpr guest::Function<0x006d1e64, u32(u32, u32, u32, u32)> call_006d1e64;  // (from the original)

u32 f_00298bb0(gptr<Object_00298bb0_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r1 = 0;
    u32 r2 = 0;
    u32 r13 = guest::cpu()->r[13];
    float S0 = 0;
    r13 = r13 - 0x10u;  // (from the original)
    S0 = std::bit_cast<float>(*gptr<u32>(0x298c0cu));  // (from the original)
    r2 = r13;
    *gptr<u32>(r13) = u32(std::bit_cast<u32>(S0));
    *gptr<u32>(r13 + 4u) = u32(std::bit_cast<u32>(S0));
    *gptr<u32>(r13 + 8u) = u32(std::bit_cast<u32>(S0));
    r1 = arg0->word_764 + 0x80u;  // (from the original)
    r0 = r2;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    r0 = call_00148710(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    S0 = guest::cpu()->s[0];
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    r0 = call_006d1e64(r0, r1, r2, guest::cpu()->r[3]);
    r2 = guest::cpu()->r[2];
    S0 = guest::cpu()->s[0];
    r0 = *gptr<u32>(r0 + 0x1f4u);  // (from the original)
    *gptr<u32>(r0 + 0x4c0u) = u32(*gptr<u32>(r13));  // (from the original)
    r1 = *gptr<u32>(r13 + 4u);
    *gptr<u32>(r0 + 0x4c4u) = u32(r1);  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    r0 = call_006d1e64(r0, r1, r2, guest::cpu()->r[3]);
    r2 = guest::cpu()->r[2];
    S0 = guest::cpu()->s[0];
    r0 = *gptr<u32>(r0 + 0x1f4u);  // (from the original)
    r1 = r13;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    r0 = call_001f99e4(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    S0 = guest::cpu()->s[0];
    r13 = r13 + 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    return r0;
}

}  // namespace d_00298bb0
GUEST_EXPORT(0x00298bb0, d_00298bb0::f_00298bb0);

// f_00298e94: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00298e94 {

struct __attribute__((packed)) Object_00298e94_0 {
    u8 unknown_0[0x702];  // (not used here)
    u8 byte_702;
};
GUEST_OFFSET(Object_00298e94_0, byte_702, 0x702);  // (from the original)

inline constexpr guest::Function<0x0058d3b4, u32(u32, u32, u32, u32)> call_0058d3b4;  // (from the original)

u32 f_00298e94(gptr<Object_00298e94_0> arg0, u32 r1) {
    u32 r0 = arg0.addr();
    u32 r2 = 0;
    u32 r3 = 0;
    float S0 = 0;
    r3 = u32(arg0->byte_702);
    if (r1 == 0) {
        r2 = 0x10003a8u;  // (from the original)
    } else {
        r2 = 0x10003a9u;  // (from the original)
    }
    if (r3 == 0) {
        S0 = std::bit_cast<float>(*gptr<u32>(r0 + 0x734u));  // (from the original)
        r0 = r2;
        guest::cpu()->s[0] = S0;
        return call_0058d3b4(r0, r1, r2, r3);
    }
    if (r1 == 0) {
        r2 = 0x10003aeu;  // (from the original)
    } else {
        r2 = 0x10003afu;  // (from the original)
    }
    S0 = std::bit_cast<float>(*gptr<u32>(r0 + 0x734u));  // (from the original)
    r0 = r2;
    guest::cpu()->s[0] = S0;
    return call_0058d3b4(r0, r1, r2, r3);
}

}  // namespace d_00298e94
GUEST_EXPORT(0x00298e94, d_00298e94::f_00298e94);

// f_00298ed8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00298ed8 {

struct __attribute__((packed)) Object_00298ed8_0 {
    u8 unknown_0[0x77c];  // (not used here)
    u32 word_77c;
};
GUEST_OFFSET(Object_00298ed8_0, word_77c, 0x77c);  // (from the original)

inline constexpr guest::Function<0x004bef3c, u32(u32, u32, u32, u32)> call_004bef3c;  // (from the original)

u32 f_00298ed8(gptr<Object_00298ed8_0> arg0, u32 r1) {
    u32 r0 = arg0.addr();
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r4 = r0;
    r0 = arg0->word_77c;
    r5 = r1;
    r0 = call_004bef3c(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 != 0) {
        goto L_298f1c;
    }
    r0 = *gptr<u32>(r4 + 0x778u);  // (from the original)
    r1 = r5;
    r0 = call_004bef3c(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 != 0) {
        goto L_298f1c;
    }
    r0 = *gptr<u32>(r4 + 0x780u);  // (from the original)
    r1 = r5;
    r0 = call_004bef3c(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 == 0) {
        goto L_298f20;
    }
L_298f1c:;
    r0 = 1u;
L_298f20:;
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_00298ed8
GUEST_EXPORT(0x00298ed8, d_00298ed8::f_00298ed8);

// f_00298f2c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00298f2c {

struct __attribute__((packed)) Object_00298f2c_0 {
    u8 unknown_0[0x70c];  // (not used here)
    u32 word_70c;
    u32 word_710;
    u32 word_714;
    u8 unknown_718[0x4];  // (not used here)
    u32 word_71c;
    u8 unknown_720[0x4];  // (not used here)
    u32 word_724;
    u8 unknown_728[0x14];  // (not used here)
    u32 word_73c;
    u8 unknown_740[0x8];  // (not used here)
    u32 word_748;
    u8 unknown_74c[0x18];  // (not used here)
    u32 word_764;
};
GUEST_OFFSET(Object_00298f2c_0, word_70c, 0x70c);  // (from the original)
GUEST_OFFSET(Object_00298f2c_0, word_710, 0x710);  // (from the original)
GUEST_OFFSET(Object_00298f2c_0, word_714, 0x714);  // (from the original)
GUEST_OFFSET(Object_00298f2c_0, word_71c, 0x71c);  // (from the original)
GUEST_OFFSET(Object_00298f2c_0, word_724, 0x724);  // (from the original)
GUEST_OFFSET(Object_00298f2c_0, word_73c, 0x73c);  // (from the original)
GUEST_OFFSET(Object_00298f2c_0, word_748, 0x748);  // (from the original)
GUEST_OFFSET(Object_00298f2c_0, word_764, 0x764);  // (from the original)

inline constexpr guest::Function<0x005833b0, u32(u32, u32, u32, u32)> call_005833b0;  // (from the original)
inline constexpr guest::Function<0x006aa944, u32(u32, u32, u32, u32)> call_006aa944;  // (from the original)

u32 f_00298f2c(gptr<Object_00298f2c_0> arg0, u32 r1) {
    u32 r0 = arg0.addr();
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 zf = 0;
    u32 fpsr = guest::cpu()->fpscr;
    float S0 = 0;
    float S1 = 0;
    float S2 = 0;
    float S3 = 0;
    float S4 = 0;
    guest::cpu()->r[13] -= 0x18u;  // (from the original)
    r5 = r0;
    r4 = r5 + 0x400u;  // (from the original)
    r6 = arg0->word_71c;
    r7 = 0x10003a6u;  // (from the original)
    S0 = (std::bit_cast<float>(arg0->word_714) - std::bit_cast<float>(*gptr<u32>(arg0->word_764 + 0x2cu))) * std::bit_cast<float>(arg0->word_70c);  // (from the original)
    S3 = std::bit_cast<float>(*gptr<u32>(0x299068u));  // (from the original)
    r0 = std::bit_cast<u32>(std::bit_cast<float>(vcvt_sz_f((S0 + std::bit_cast<float>(*gptr<u32>(0x299064u))) / std::bit_cast<float>(arg0->word_748))));  // (from the original)
    arg0->word_71c = u32(r0);
    S2 = std::bit_cast<float>(arg0->word_748);
    S4 = float(s32(std::bit_cast<u32>(std::bit_cast<float>(r0))));
    arg0->word_724 = u32(std::bit_cast<u32>(S0 - S4 * S2));
    fpsr = fpsr & 0xfffffffu | vfp_cmpf(std::bit_cast<float>(arg0->word_710), S3);  // (from the original)
    if (!(fpsr >> 0x1d & 1)) {  // (from the original)
        S1 = std::bit_cast<float>(arg0->word_73c);
        fpsr = fpsr & 0xfffffffu | vfp_cmpf(S1, S0);  // (from the original)
        if (fpsr >> 0x1d & 1 && !(fpsr >> 0x1e & 1)) {  // (from the original)
            goto L_299040;
        }
        r0 = arg0->word_764;
        guest::cpu()->s[0] = S0;
        guest::cpu()->s[1] = S1;
        guest::cpu()->s[2] = S2;
        guest::cpu()->s[3] = S3;
        guest::cpu()->s[4] = S4;
        r0 = call_006aa944(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        S0 = guest::cpu()->s[0];
        S1 = guest::cpu()->s[1];
        S2 = guest::cpu()->s[2];
        S3 = guest::cpu()->s[3];
        S4 = guest::cpu()->s[4];
        r0 = r7;
        guest::cpu()->s[0] = S0;
        guest::cpu()->s[1] = S1;
        guest::cpu()->s[2] = S2;
        guest::cpu()->s[3] = S3;
        guest::cpu()->s[4] = S4;
        r0 = call_005833b0(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
        r0 = *gptr<u32>(r5 + 0x71cu);  // (from the original)
        S2 = std::bit_cast<float>(*gptr<u32>(r4 + 0x32cu));  // (from the original)
        S1 = std::bit_cast<float>(*gptr<u32>(r4 + 0x348u));  // (from the original)
        S0 = std::bit_cast<float>(r0);
        S4 = float(s32(std::bit_cast<u32>(S0)));
        S0 = float(s32(std::bit_cast<u32>(S0)));
        S3 = S2 + S1 + S4 * S1;
        S2 = S2 + S0 * S1;
        *gptr<u32>(r4 + 0x33cu) = u32(std::bit_cast<u32>(S3));  // (from the original)
        *gptr<u32>(r4 + 0x340u) = u32(std::bit_cast<u32>(S2));  // (from the original)
        goto L_299040;
    }
    S1 = std::bit_cast<float>(*gptr<u32>(r4 + 0x340u));  // (from the original)
    fpsr = fpsr & 0xfffffffu | vfp_cmpf(S1, S0);  // (from the original)
    if (fpsr >> 0x1f != (fpsr >> 0x1c & 1)) {  // (from the original)
        goto L_299040;
    }
    r0 = *gptr<u32>(r5 + 0x764u);  // (from the original)
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2;
    guest::cpu()->s[3] = S3;
    guest::cpu()->s[4] = S4;
    r0 = call_006aa944(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    S2 = guest::cpu()->s[2];
    S3 = guest::cpu()->s[3];
    S4 = guest::cpu()->s[4];
    r0 = r7;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2;
    guest::cpu()->s[3] = S3;
    guest::cpu()->s[4] = S4;
    r0 = call_005833b0(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r0 = *gptr<u32>(r5 + 0x71cu);  // (from the original)
    S1 = std::bit_cast<float>(*gptr<u32>(r4 + 0x32cu));  // (from the original)
    S2 = std::bit_cast<float>(*gptr<u32>(r4 + 0x348u));  // (from the original)
    S0 = std::bit_cast<float>(r0);
    r4 = r4 + 0x33cu;  // (from the original)
    S3 = float(s32(std::bit_cast<u32>(S0)));
    S4 = float(s32(std::bit_cast<u32>(S0)));
    S0 = S1;
    S1 = -S1 + S3 * S2;
    S0 = S0 + S4 * S2;
    *gptr<u32>(r4) = u32(std::bit_cast<u32>(S0));
    *gptr<u32>(r4 + 4) = u32(std::bit_cast<u32>(S1));
L_299040:;
    r1 = *gptr<u32>(r5 + 0x758u);  // (from the original)
    zf = r1 == 0;
    if (!zf) {
        r0 = *gptr<u32>(r5 + 0x71cu);  // (from the original)
        zf = r0 == r6;
    }
    if (!zf) {
        r0 = *gptr<u32>(r5 + 0x760u);  // (from the original)
        guest::cpu()->r[13] += 0x18u;  // (from the original)
        guest::cpu()->s[0] = S0;
        guest::cpu()->s[1] = S1;
        guest::cpu()->s[2] = S2;
        guest::cpu()->s[3] = S3;
        guest::cpu()->s[4] = S4;
        return guest::call_address<u32>(r1, r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    }
    guest::cpu()->r[13] += 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    return r0;
}

}  // namespace d_00298f2c
GUEST_EXPORT(0x00298f2c, d_00298f2c::f_00298f2c);

// f_00299094: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00299094 {

struct __attribute__((packed)) Object_00299094_0 {
    u8 unknown_0[0x702];  // (not used here)
    u8 byte_702;
};
GUEST_OFFSET(Object_00299094_0, byte_702, 0x702);  // (from the original)

inline constexpr guest::Function<0x0058d3b4, u32(u32, u32, u32, u32)> call_0058d3b4;  // (from the original)

u32 f_00299094(gptr<Object_00299094_0> arg0, u32 r1) {
    u32 r0 = arg0.addr();
    u32 r2 = 0;
    u32 r3 = 0;
    float S0 = 0;
    r3 = u32(arg0->byte_702);
    if (r1 == 0) {
        r2 = 0x10003aau;  // (from the original)
    } else {
        r2 = 0x10003abu;  // (from the original)
    }
    if (r3 == 0) {
        S0 = std::bit_cast<float>(*gptr<u32>(r0 + 0x738u));  // (from the original)
        r0 = r2;
        guest::cpu()->s[0] = S0;
        return call_0058d3b4(r0, r1, r2, r3);
    }
    if (r1 == 0) {
        r2 = 0x10003acu;  // (from the original)
    } else {
        r2 = 0x10003adu;  // (from the original)
    }
    S0 = std::bit_cast<float>(*gptr<u32>(r0 + 0x738u));  // (from the original)
    r0 = r2;
    guest::cpu()->s[0] = S0;
    return call_0058d3b4(r0, r1, r2, r3);
}

}  // namespace d_00299094
GUEST_EXPORT(0x00299094, d_00299094::f_00299094);

// f_002990d8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002990d8 {

inline constexpr guest::Function<0x004b4fc0, u32(u32, u32, u32, u32)> call_004b4fc0;  // (from the original)
inline constexpr guest::Function<0x0056878c, u32(u32, u32, u32, u32)> call_0056878c;  // (from the original)

u32 f_002990d8(u32 r0, u32 r1_unused, u32 r2) {
    u32 r1 = 0;
    u32 r4 = guest::cpu()->r[4];
    guest::cpu()->r[13] -= 8u;
    r4 = r0;
    r1 = 0x857c9cu;  // (from the original)
    r0 = r0 + 0x24cu;  // (from the original)
    r0 = call_0056878c(r0, r1, r2, guest::cpu()->r[3]);
    r2 = guest::cpu()->r[2];
    *gptr<u32>(r4 + 0x764u) = u32(r0);  // (from the original)
    r1 = 0x857c90u;  // (from the original)
    r0 = r4 + 0x24cu;  // (from the original)
    r0 = call_0056878c(r0, r1, r2, guest::cpu()->r[3]);
    r2 = guest::cpu()->r[2];
    *gptr<u32>(r4 + 0x768u) = u32(r0);  // (from the original)
    r1 = 0x857c80u;  // (from the original)
    r0 = r4 + 0x24cu;  // (from the original)
    r0 = call_0056878c(r0, r1, r2, guest::cpu()->r[3]);
    r2 = guest::cpu()->r[2];
    *gptr<u32>(r4 + 0x76cu) = u32(r0);  // (from the original)
    r1 = 0x857c70u;  // (from the original)
    r0 = r4 + 0x24cu;  // (from the original)
    r0 = call_0056878c(r0, r1, r2, guest::cpu()->r[3]);
    r2 = guest::cpu()->r[2];
    *gptr<u32>(r4 + 0x770u) = u32(r0);  // (from the original)
    r1 = 0x857c60u;  // (from the original)
    r0 = r4 + 0x24cu;  // (from the original)
    r0 = call_0056878c(r0, r1, r2, guest::cpu()->r[3]);
    r2 = guest::cpu()->r[2];
    *gptr<u32>(r4 + 0x774u) = u32(r0);  // (from the original)
    r1 = 0x857c54u;  // (from the original)
    r0 = r4 + 0x24cu;  // (from the original)
    r0 = call_0056878c(r0, r1, r2, guest::cpu()->r[3]);
    r2 = guest::cpu()->r[2];
    *gptr<u32>(r4 + 0x778u) = u32(r0);  // (from the original)
    r1 = 0x857c48u;  // (from the original)
    r0 = r4 + 0x24cu;  // (from the original)
    r0 = call_0056878c(r0, r1, r2, guest::cpu()->r[3]);
    r2 = guest::cpu()->r[2];
    *gptr<u32>(r4 + 0x77cu) = u32(r0);  // (from the original)
    r1 = 0x857c3cu;  // (from the original)
    r0 = r4 + 0x24cu;  // (from the original)
    r0 = call_0056878c(r0, r1, r2, guest::cpu()->r[3]);
    r2 = guest::cpu()->r[2];
    *gptr<u32>(r4 + 0x780u) = u32(r0);  // (from the original)
    r1 = 0x857c30u;  // (from the original)
    r0 = r4 + 0x24cu;  // (from the original)
    r0 = call_0056878c(r0, r1, r2, guest::cpu()->r[3]);
    r2 = guest::cpu()->r[2];
    *gptr<u32>(r4 + 0x784u) = u32(r0);  // (from the original)
    r1 = 0x857c28u;  // (from the original)
    r0 = r4 + 0x24cu;  // (from the original)
    r0 = call_0056878c(r0, r1, r2, guest::cpu()->r[3]);
    *gptr<u32>(r4 + 0x788u) = u32(r0);  // (from the original)
    r1 = 0x857c1cu;  // (from the original)
    r2 = 1u;
    r0 = r4 + 0x24cu;  // (from the original)
    r0 = call_004b4fc0(r0, r1, r2, guest::cpu()->r[3]);
    *gptr<u32>(r4 + 0x78cu) = u32(r0);  // (from the original)
    r1 = 0x857c04u;  // (from the original)
    r2 = 1u;
    r0 = r4 + 0x24cu;  // (from the original)
    r0 = call_004b4fc0(r0, r1, r2, guest::cpu()->r[3]);
    *gptr<u32>(r4 + 0x790u) = u32(r0);  // (from the original)
    r1 = 0x857bf8u;  // (from the original)
    r2 = 1u;
    r0 = r4 + 0x24cu;  // (from the original)
    r0 = call_004b4fc0(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    *gptr<u32>(r4 + 0x794u) = u32(r0);  // (from the original)
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_002990d8
GUEST_EXPORT(0x002990d8, d_002990d8::f_002990d8);

// f_002991f4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002991f4 {

struct __attribute__((packed)) Object_002991f4_0 {
    u8 unknown_0[0x744];  // (not used here)
    u8 byte_744;
};
GUEST_OFFSET(Object_002991f4_0, byte_744, 0x744);  // (from the original)

inline constexpr guest::Function<0x001f9b08, u32(u32, u32, u32, u32)> call_001f9b08;  // (from the original)
inline constexpr guest::Function<0x002992f8, u32(u32, u32, u32, u32)> call_002992f8;  // (from the original)
inline constexpr guest::Function<0x002993ac, u32(u32, u32, u32, u32)> call_002993ac;  // (from the original)
inline constexpr guest::Function<0x002f6b14, u32(u32, u32, u32, u32)> call_002f6b14;  // (from the original)
inline constexpr guest::Function<0x002f6e14, u32(u32, u32, u32, u32)> call_002f6e14;  // (from the original)
inline constexpr guest::Function<0x00568c10, u32(u32, u32, u32, u32)> call_00568c10;  // (from the original)
inline constexpr guest::Function<0x00569420, u32(u32, u32, u32, u32)> call_00569420;  // (from the original)
inline constexpr guest::Function<0x005697e0, u32(u32, u32, u32, u32)> call_005697e0;  // (from the original)
inline constexpr guest::Function<0x006d1e64, u32(u32, u32, u32, u32)> call_006d1e64;  // (from the original)

u32 f_002991f4(gptr<Object_002991f4_0> arg0, float S0) {
    u32 r0 = arg0.addr();
    u32 r1 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r4 = r0;
    r1 = u32(arg0->byte_744);
    r6 = 0u;
    if (r1 != 1u) {
        r0 = r4 + 0x600u;  // (from the original)
        if (r1 != 2u) {
            if (r1 != 3u) {
                goto L_2992ec;
            }
        } else {
            r0 = u32(*gptr<u8>(r0 + 0xfau));  // (from the original)
            if (r0 == 1u) {
                r0 = r4;
                guest::cpu()->s[0] = S0;
                r0 = call_002992f8(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
                r1 = guest::cpu()->r[1];
                S0 = guest::cpu()->s[0];
            }
            goto L_2992ec;
        }
        r0 = u32(*gptr<u8>(r0 + 0xfau));  // (from the original)
        if (r0 == 1u) {
            guest::cpu()->s[0] = S0;
            r0 = call_006d1e64(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
            S0 = guest::cpu()->s[0];
            r0 = *gptr<u32>(r0 + 0x1f4u);  // (from the original)
            r1 = 0u;
            guest::cpu()->s[0] = S0;
            r0 = call_001f9b08(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
            r1 = guest::cpu()->r[1];
            S0 = guest::cpu()->s[0];
            *gptr<u32>(r4 + 0x6dcu) = u32(*gptr<u32>(r4 + 0x6dcu) & ~8u);  // (from the original)
            r0 = r4;
            guest::cpu()->s[0] = S0;
            r0 = call_002992f8(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
            S0 = guest::cpu()->s[0];
        }
        r1 = 0u;
        r0 = r4;
        guest::cpu()->s[0] = S0;
        r0 = call_002993ac(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        S0 = guest::cpu()->s[0];
        r0 = r4 + 0x608u;  // (from the original)
        r5 = r0;
        guest::cpu()->s[0] = S0;
        r0 = call_002f6e14(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        S0 = guest::cpu()->s[0];
        r0 = r5;
        guest::cpu()->s[0] = S0;
        r0 = call_002f6b14(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        S0 = guest::cpu()->s[0];
        r0 = u32(*gptr<u8>(r4 + 0x3dcu));  // (from the original)
        if (r0 == 0) {
            goto L_2992ec;
        }
        r0 = r4 + 0x3c0u;  // (from the original)
        S0 = std::bit_cast<float>(*gptr<u32>(0x2992f4u));  // (from the original)
        guest::cpu()->s[0] = S0;
        r0 = call_005697e0(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        S0 = guest::cpu()->s[0];
        r0 = r4 + 0x24cu;  // (from the original)
        guest::cpu()->s[0] = S0;
        r0 = call_00568c10(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
        S0 = guest::cpu()->s[0];
        r1 = r4 + 0x3c0u;  // (from the original)
        r0 = r4 + 0x24cu;  // (from the original)
        guest::cpu()->s[0] = S0;
        r0 = call_00569420(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        S0 = guest::cpu()->s[0];
        goto L_2992ec;
    }
    r0 = *gptr<u32>(r4 + 0x6dcu) & ~8u;  // (from the original)
    *gptr<u32>(r4 + 0x6dcu) = u32(r0);  // (from the original)
    guest::cpu()->s[0] = S0;
    r0 = call_006d1e64(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    S0 = guest::cpu()->s[0];
    r0 = *gptr<u32>(r0 + 0x1f4u);  // (from the original)
    *gptr<u8>(r0 + 0x4d7u) = u8(r6);  // (from the original)
L_2992ec:;
    *gptr<u8>(r4 + 0x744u) = u8(r6);  // (from the original)
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->s[0] = S0;
    return r0;
}

}  // namespace d_002991f4
GUEST_EXPORT(0x002991f4, d_002991f4::f_002991f4);

// f_002993ac: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002993ac {

struct __attribute__((packed)) Object_002993ac_0 {
    u8 unknown_0[0x6f9];  // (not used here)
    u8 byte_6f9;
    u8 unknown_6fa[0x92];  // (not used here)
    u32 word_78c;
};
GUEST_OFFSET(Object_002993ac_0, byte_6f9, 0x6f9);  // (from the original)
GUEST_OFFSET(Object_002993ac_0, word_78c, 0x78c);  // (from the original)

inline constexpr guest::Function<0x00568630, u32(u32, u32, u32, u32)> call_00568630;  // (from the original)
inline constexpr guest::Function<0x00568984, u32(u32, u32, u32, u32)> call_00568984;  // (from the original)
inline constexpr guest::Function<0x00568c10, u32(u32, u32, u32, u32)> call_00568c10;  // (from the original)
inline constexpr guest::Function<0x005697e0, u32(u32, u32, u32, u32)> call_005697e0;  // (from the original)
inline constexpr guest::Function<0x0058d3b4, u32(u32, u32, u32, u32)> call_0058d3b4;  // (from the original)
inline constexpr guest::Function<0x006aa944, u32(u32, u32, u32, u32)> call_006aa944;  // (from the original)

u32 f_002993ac(gptr<Object_002993ac_0> arg0, u32 r1, float S0) {
    u32 r0 = arg0.addr();
    u32 r2 = 0;
    u32 r3 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r4 = r0;
    r5 = r1;
    r0 = u32(s32(s8(arg0->byte_6f9)));
    if (r0 == r5) {
        goto L_299448;
    }
    arg0->byte_6f9 = u8(r5);
    r2 = arg0->word_78c;
    r3 = 0u;
    r1 = r4 + 0x398u;  // (from the original)
    r0 = r4 + 0x24cu;  // (from the original)
    guest::cpu()->s[0] = S0;
    r0 = call_00568630(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r5 != 0) {
        r0 = r4 + 0x398u;  // (from the original)
        S0 = std::bit_cast<float>(*gptr<u32>(0x29944cu));  // (from the original)
        guest::cpu()->s[0] = S0;
        r0 = call_005697e0(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        S0 = guest::cpu()->s[0];
        if (u32(*gptr<u8>(r4 + 0x744u)) != 3u) {  // (from the original)
            goto L_299428;
        }
        r0 = *gptr<u32>(r4 + 0x764u);  // (from the original)
        guest::cpu()->s[0] = S0;
        r0 = call_006aa944(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        S0 = guest::cpu()->s[0];
        r0 = 0x10003a5u;  // (from the original)
        guest::cpu()->s[0] = S0;
        r0 = call_0058d3b4(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        S0 = guest::cpu()->s[0];
        *gptr<u8>(r4 + 0x6ffu) = u8(1u);  // (from the original)
        goto L_299428;
    }
    S0 = std::bit_cast<float>(*gptr<u32>(0x299454u));  // (from the original)
    r0 = r4 + 0x398u;  // (from the original)
    guest::cpu()->s[0] = S0;
    r0 = call_005697e0(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
L_299428:;
    r0 = r4 + 0x24cu;  // (from the original)
    guest::cpu()->s[0] = S0;
    r0 = call_00568c10(r0, r1, r2, r3);
    S0 = guest::cpu()->s[0];
    r2 = *gptr<u32>(r4 + 0x78cu);  // (from the original)
    r1 = r4 + 0x398u;  // (from the original)
    r0 = r4 + 0x24cu;  // (from the original)
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    r3 = 0u;
    guest::cpu()->s[0] = S0;
    return call_00568984(r0, r1, r2, r3);
L_299448:;
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->s[0] = S0;
    return r0;
}

}  // namespace d_002993ac
GUEST_EXPORT(0x002993ac, d_002993ac::f_002993ac);

// f_002999ac: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002999ac {

struct __attribute__((packed)) Object_002999ac_0 {
    u8 unknown_0[0x444];  // (not used here)
    u8 byte_444;
};
GUEST_OFFSET(Object_002999ac_0, byte_444, 0x444);  // (from the original)

inline constexpr guest::Function<0x004b4fc0, u32(u32, u32, u32, u32)> call_004b4fc0;  // (from the original)
inline constexpr guest::Function<0x00568630, u32(u32, u32, u32, u32)> call_00568630;  // (from the original)
inline constexpr guest::Function<0x00568984, u32(u32, u32, u32, u32)> call_00568984;  // (from the original)
inline constexpr guest::Function<0x00568c10, u32(u32, u32, u32, u32)> call_00568c10;  // (from the original)
inline constexpr guest::Function<0x005697e0, u32(u32, u32, u32, u32)> call_005697e0;  // (from the original)

u32 f_002999ac(gptr<Object_002999ac_0> arg0, u32 r1, u32 r2_unused, u32 r3, float S0) {
    u32 r0 = arg0.addr();
    u32 r2 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    arg0->byte_444 = u8(r1);
    r4 = r0;
    r1 = 0x857c10u;  // (from the original)
    r5 = r0 + 0x444u;  // (from the original)
    r2 = 1u;
    r0 = r0 + 0x24cu;  // (from the original)
    guest::cpu()->s[0] = S0;
    r0 = call_004b4fc0(r0, r1, r2, r3);
    S0 = guest::cpu()->s[0];
    r2 = r0;
    r3 = 0u;
    r1 = r4 + 0x3e8u;  // (from the original)
    r0 = r4 + 0x24cu;  // (from the original)
    guest::cpu()->s[0] = S0;
    r0 = call_00568630(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
    r1 = 0x857c04u;  // (from the original)
    r2 = 1u;
    r0 = r4 + 0x24cu;  // (from the original)
    guest::cpu()->s[0] = S0;
    r0 = call_004b4fc0(r0, r1, r2, r3);
    S0 = guest::cpu()->s[0];
    r2 = r0;
    r3 = 0u;
    r1 = r4 + 0x3e8u;  // (from the original)
    r0 = r4 + 0x24cu;  // (from the original)
    guest::cpu()->s[0] = S0;
    r0 = call_00568630(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
    r1 = 0x857bf8u;  // (from the original)
    r2 = 1u;
    r0 = r4 + 0x24cu;  // (from the original)
    guest::cpu()->s[0] = S0;
    r0 = call_004b4fc0(r0, r1, r2, r3);
    S0 = guest::cpu()->s[0];
    r2 = r0;
    r3 = 0u;
    r1 = r4 + 0x3e8u;  // (from the original)
    r0 = r4 + 0x24cu;  // (from the original)
    guest::cpu()->s[0] = S0;
    r0 = call_00568630(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r4 + 0x3e8u;  // (from the original)
    S0 = float(std::bit_cast<u32>(std::bit_cast<float>(u32(*gptr<u8>(r5)))));
    guest::cpu()->s[0] = S0;
    r0 = call_005697e0(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
    r0 = r4 + 0x24cu;  // (from the original)
    guest::cpu()->s[0] = S0;
    r0 = call_00568c10(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
    r1 = 0x857c10u;  // (from the original)
    r2 = 1u;
    r0 = r4 + 0x24cu;  // (from the original)
    guest::cpu()->s[0] = S0;
    r0 = call_004b4fc0(r0, r1, r2, r3);
    S0 = guest::cpu()->s[0];
    r2 = r0;
    r3 = 0u;
    r1 = r4 + 0x3e8u;  // (from the original)
    r0 = r4 + 0x24cu;  // (from the original)
    guest::cpu()->s[0] = S0;
    r0 = call_00568984(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
    r1 = 0x857c04u;  // (from the original)
    r2 = 1u;
    r0 = r4 + 0x24cu;  // (from the original)
    guest::cpu()->s[0] = S0;
    r0 = call_004b4fc0(r0, r1, r2, r3);
    S0 = guest::cpu()->s[0];
    r2 = r0;
    r3 = 0u;
    r1 = r4 + 0x3e8u;  // (from the original)
    r0 = r4 + 0x24cu;  // (from the original)
    guest::cpu()->s[0] = S0;
    r0 = call_00568984(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
    r1 = 0x857bf8u;  // (from the original)
    r2 = 1u;
    r0 = r4 + 0x24cu;  // (from the original)
    guest::cpu()->s[0] = S0;
    r0 = call_004b4fc0(r0, r1, r2, r3);
    S0 = guest::cpu()->s[0];
    r2 = r0;
    r1 = r4 + 0x3e8u;  // (from the original)
    r0 = r4 + 0x24cu;  // (from the original)
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    r3 = 0u;
    guest::cpu()->s[0] = S0;
    return call_00568984(r0, r1, r2, r3);
}

}  // namespace d_002999ac
GUEST_EXPORT(0x002999ac, d_002999ac::f_002999ac);

// f_00299b30: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00299b30 {

struct __attribute__((packed)) Object_00299b30_0 {
    u32 word_0;
};
GUEST_OFFSET(Object_00299b30_0, word_0, 0x0);  // (from the original)

inline constexpr guest::Function<0x001207d8, u32(u32, u32, u32, u32)> call_001207d8;  // (from the original)
inline constexpr guest::Function<0x00125aec, u32(u32, u32, u32, u32)> call_00125aec;  // (from the original)
inline constexpr guest::Function<0x00125e08, u32(u32, u32, u32, u32)> call_00125e08;  // (from the original)
inline constexpr guest::Function<0x00125e3c, u32(u32, u32, u32, u32)> call_00125e3c;  // (from the original)
inline constexpr guest::Function<0x002f7604, u32(u32, u32, u32, u32)> call_002f7604;  // (from the original)
inline constexpr guest::Function<0x00301d0d, u32(u32, u32, u32, u32)> call_00301d0c;  // (from the original)
inline constexpr guest::Function<0x006e5860, u32(u32, u32, u32, u32)> call_006e5860;  // (from the original)

u32 f_00299b30(gptr<Object_00299b30_0> arg0, u32 r1, u32 r2, u32 r3, float S0) {
    u32 r0 = arg0.addr();
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r4 = r1;
    r1 = 0x8f0888u;  // (from the original)
    arg0->word_0 = u32(r1);
    r0 = r0 + 4u;
    guest::cpu()->s[0] = S0;
    r0 = call_001207d8(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
    r0 = r0 + 0x248u;  // (from the original)
    guest::cpu()->s[0] = S0;
    r0 = call_00125e3c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
    r0 = r0 + 0x14cu;  // (from the original)
    guest::cpu()->s[0] = S0;
    r0 = call_00125aec(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
    r0 = r0 + 0x28u;  // (from the original)
    guest::cpu()->s[0] = S0;
    r0 = call_00125aec(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
    r0 = r0 + 0x28u;  // (from the original)
    guest::cpu()->s[0] = S0;
    r0 = call_00125aec(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
    r0 = r0 + 0x28u;  // (from the original)
    guest::cpu()->s[0] = S0;
    r0 = call_00125aec(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
    r0 = r0 + 0x28u;  // (from the original)
    guest::cpu()->s[0] = S0;
    r0 = call_00125e08(r0, r1, r2, r3);
    S0 = guest::cpu()->s[0];
    r0 = r0 - 0x438u;  // (from the original)
    r5 = 0u;
    *gptr<u8>(r0 + 0x444u) = u8(r5);  // (from the original)
    r1 = 0x2b6de0u;  // (from the original)
    r3 = 2u;
    r2 = 0xe0u;  // (from the original)
    r0 = r0 + 0x448u;  // (from the original)
    guest::cpu()->s[0] = S0;
    r0 = call_00301d0c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
    r0 = r0 + 0x1c0u;  // (from the original)
    guest::cpu()->s[0] = S0;
    r0 = call_002f7604(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
    r0 = r0 + 0xe4u;  // (from the original)
    guest::cpu()->s[0] = S0;
    r0 = call_006e5860(r0, r1, r2, r3);
    r0 = r0 - 0x6ecu;  // (from the original)
    r2 = 1u;
    *gptr<u8>(r0 + 0x6f8u) = u8(r5);  // (from the original)
    *gptr<u8>(r0 + 0x6f9u) = u8(r5);  // (from the original)
    *gptr<u8>(r0 + 0x6fau) = u8(r5);  // (from the original)
    *gptr<u8>(r0 + 0x6fbu) = u8(r5);  // (from the original)
    *gptr<u8>(r0 + 0x6fcu) = u8(r2);  // (from the original)
    *gptr<u8>(r0 + 0x6fdu) = u8(r5);  // (from the original)
    *gptr<u8>(r0 + 0x6feu) = u8(r5);  // (from the original)
    *gptr<u8>(r0 + 0x6ffu) = u8(r5);  // (from the original)
    *gptr<u8>(r0 + 0x700u) = u8(r5);  // (from the original)
    *gptr<u8>(r0 + 0x701u) = u8(r2);  // (from the original)
    S0 = std::bit_cast<float>(*gptr<u32>(0x299c94u));  // (from the original)
    r1 = r0 + 0x400u;  // (from the original)
    *gptr<u8>(r0 + 0x702u) = u8(r5);  // (from the original)
    *gptr<u8>(r0 + 0x703u) = u8(r5);  // (from the original)
    *gptr<u32>(r1 + 0x304u) = u32(std::bit_cast<u32>(S0));  // (from the original)
    *gptr<u32>(r1 + 0x308u) = u32(std::bit_cast<u32>(S0));  // (from the original)
    *gptr<u32>(r1 + 0x30cu) = u32(std::bit_cast<u32>(S0));  // (from the original)
    *gptr<u32>(r1 + 0x310u) = u32(std::bit_cast<u32>(S0));  // (from the original)
    *gptr<u32>(r1 + 0x314u) = u32(std::bit_cast<u32>(S0));  // (from the original)
    *gptr<u32>(r1 + 0x318u) = u32(std::bit_cast<u32>(S0));  // (from the original)
    *gptr<u32>(r0 + 0x71cu) = u32(r5);  // (from the original)
    *gptr<u32>(r0 + 0x720u) = u32(r5);  // (from the original)
    *gptr<u32>(r1 + 0x324u) = u32(std::bit_cast<u32>(S0));  // (from the original)
    *gptr<u32>(r0 + 0x728u) = u32(~0u);  // (from the original)
    *gptr<u32>(r1 + 0x32cu) = u32(std::bit_cast<u32>(S0));  // (from the original)
    *gptr<u32>(r1 + 0x330u) = u32(std::bit_cast<u32>(S0));  // (from the original)
    *gptr<u32>(r1 + 0x334u) = u32(std::bit_cast<u32>(S0));  // (from the original)
    *gptr<u32>(r1 + 0x338u) = u32(std::bit_cast<u32>(S0));  // (from the original)
    *gptr<u32>(r1 + 0x33cu) = u32(std::bit_cast<u32>(S0));  // (from the original)
    *gptr<u32>(r1 + 0x340u) = u32(std::bit_cast<u32>(S0));  // (from the original)
    *gptr<u8>(r0 + 0x744u) = u8(r5);  // (from the original)
    *gptr<u32>(r1 + 0x348u) = u32(std::bit_cast<u32>(S0));  // (from the original)
    *gptr<u32>(r0 + 0x74cu) = u32(r5);  // (from the original)
    *gptr<u32>(r0 + 0x750u) = u32(r5);  // (from the original)
    *gptr<u32>(r0 + 0x754u) = u32(r5);  // (from the original)
    r1 = r0 + 0x760u;  // (from the original)
    *gptr<u32>(r0 + 0x758u) = u32(r5);  // (from the original)
    *gptr<u32>(r0 + 0x75cu) = u32(r5);  // (from the original)
    *gptr<u32>(r1) = u32(r4);
    *gptr<u32>(r1 + 4) = u32(r5);
    *gptr<u32>(r0 + 0x768u) = u32(r5);  // (from the original)
    *gptr<u32>(r0 + 0x76cu) = u32(r5);  // (from the original)
    *gptr<u32>(r0 + 0x770u) = u32(r5);  // (from the original)
    *gptr<u32>(r0 + 0x774u) = u32(r5);  // (from the original)
    *gptr<u32>(r0 + 0x778u) = u32(r5);  // (from the original)
    *gptr<u32>(r0 + 0x77cu) = u32(r5);  // (from the original)
    *gptr<u32>(r0 + 0x780u) = u32(r5);  // (from the original)
    *gptr<u32>(r0 + 0x784u) = u32(r5);  // (from the original)
    *gptr<u32>(r0 + 0x788u) = u32(r5);  // (from the original)
    *gptr<u32>(r0 + 0x78cu) = u32(r5);  // (from the original)
    *gptr<u32>(r0 + 0x790u) = u32(r5);  // (from the original)
    *gptr<u32>(r0 + 0x794u) = u32(r5);  // (from the original)
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->s[0] = S0;
    return r0;
}

}  // namespace d_00299b30
GUEST_EXPORT(0x00299b30, d_00299b30::f_00299b30);

// f_0029a5f8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0029a5f8 {

struct __attribute__((packed)) Object_0029a5f8_0 {
    u8 unknown_0[0xcc];  // (not used here)
    u32 word_cc;
    u16 half_d0;
    u8 unknown_d2[0x2];  // (not used here)
    u32 word_d4;
};
GUEST_OFFSET(Object_0029a5f8_0, word_cc, 0xcc);  // (from the original)
GUEST_OFFSET(Object_0029a5f8_0, half_d0, 0xd0);  // (from the original)
GUEST_OFFSET(Object_0029a5f8_0, word_d4, 0xd4);  // (from the original)

inline constexpr guest::Function<0x001fa354, u32(u32, u32, u32, u32)> call_001fa354;  // (from the original)
inline constexpr guest::Function<0x006d1e64, u32(u32, u32, u32, u32)> call_006d1e64;  // (from the original)

u32 f_0029a5f8(gptr<Object_0029a5f8_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r1 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r4 = r0;
    arg0->word_d4 = u32(0x20cu);  // (from the original)
    r1 = 0xbu;  // (from the original)
    r0 = 7u;
    arg0->half_d0 = u16(r1);
    r5 = 0u;
    r6 = 1u;
    arg0->word_cc = u32(r0);
    r0 = call_006d1e64(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    *gptr<u8>(r0 + 0x40u) = u8(r6);  // (from the original)
    r0 = call_006d1e64(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r0 = *gptr<u32>(r0 + 0x1f4u);  // (from the original)
    r0 = call_001fa354(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r0 = *gptr<u32>(r4 + 0xccu);  // (from the original)
    r1 = *gptr<u32>(0x94fd3cu);  // (from the original)
    *gptr<u8>(r1 + 0x1fcu) = u8(r0);  // (from the original)
    r0 = call_006d1e64(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r4 = r0;
    r0 = *gptr<u32>(r0 + 0x1f4u);  // (from the original)
    r0 = call_001fa354(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    *gptr<u8>(r4 + 0x40u) = u8(r5);  // (from the original)
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_0029a5f8
GUEST_EXPORT(0x0029a5f8, d_0029a5f8::f_0029a5f8);

// f_0029b840: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0029b840 {


void f_0029b840(u32 r0, u32 r1) {
    if (r1 >= 0x18fu) {  // (from the original)
        return;
    }
    *gptr<u8>(r0 + (r1 >> 3)) = u8(u32(*gptr<u8>(r0 + (r1 >> 3))) | lsl_r(1u, r1 & 7u));
    return;
}

}  // namespace d_0029b840
GUEST_EXPORT(0x0029b840, d_0029b840::f_0029b840);

// f_0029b868: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0029b868 {

inline constexpr guest::Function<0x00301444, u32(u32, u32, u32, u32)> call_00301444;  // (from the original)

u32 f_0029b868() {
    u32 r1 = 0;
    r1 = 0x32u;  // (from the original)
    return call_00301444(guest::cpu()->r[0], r1, guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_0029b868
GUEST_EXPORT(0x0029b868, d_0029b868::f_0029b868);

// f_0029bde8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0029bde8 {

struct __attribute__((packed)) Object_0029bde8_1 {
    u8 byte_0;
    u8 byte_1;
};
GUEST_OFFSET(Object_0029bde8_1, byte_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_0029bde8_1, byte_1, 0x1);  // (from the original)

inline constexpr guest::Function<0x0057bb70, u32(u32, u32, u32, u32)> call_0057bb70;  // (from the original)
inline constexpr guest::Function<0x0057bb84, u32(u32, u32, u32, u32)> call_0057bb84;  // (from the original)
inline constexpr guest::Function<0x006a6ec0, u32(u32, u32, u32, u32)> call_006a6ec0;  // (from the original)
inline constexpr guest::Function<0x006c7a9c, u32(u32, u32, u32, u32)> call_006c7a9c;  // (from the original)

u32 f_0029bde8(u32 r0, gptr<Object_0029bde8_1> arg1) {
    u32 r1 = arg1.addr();
    u32 r2 = 0;
    u32 r3 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r13 = guest::cpu()->r[13];
    r4 = r0;
    r13 = r13 - 0x28u;  // (from the original)
    r1 = u32(arg1->byte_0);
    *gptr<u32>(r13 + 4u) = u32(u32(arg1->byte_1));
    r3 = r13 + 0x10u;  // (from the original)
    *gptr<u32>(r13) = u32(r1);
    r2 = r13 + 0x14u;  // (from the original)
    r1 = r13 + 0xcu;  // (from the original)
    r0 = r13 + 8u;
    guest::cpu()->r[13] = r13;
    r0 = call_006a6ec0(r0, r1, r2, r3);
    r5 = r13 + 8u;
    *gptr<u32>(r13) = u32(1u);
    r0 = *gptr<u32>(r5);
    r1 = *gptr<u32>(r5 + 4);
    r3 = *gptr<u32>(r5 + 8);
    r2 = *gptr<u32>(r13 + 0x14u);  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_006c7a9c(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r5 = r0;
    r1 = *gptr<u32>(r13 + 8u) << 1;
    *gptr<u8>(r4) = u8(r1);
    guest::cpu()->r[13] = r13;
    r0 = call_0057bb70(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        *gptr<u8>(r4) = u8(u32(*gptr<u8>(r4)) + 1u);
    }
    *gptr<u8>(r4 + 1u) = u8(*gptr<u32>(r13 + 0xcu) << 1);  // (from the original)
    r0 = r5;
    guest::cpu()->r[13] = r13;
    r0 = call_0057bb84(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    if (r0 != 0) {
        r13 = r13 + 0x28u;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    r0 = u32(*gptr<u8>(r4 + 1u)) + 1u;
    *gptr<u8>(r4 + 1u) = u8(r0);
    r13 = r13 + 0x28u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_0029bde8
GUEST_EXPORT(0x0029bde8, d_0029bde8::f_0029bde8);

// f_0029bfa4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0029bfa4 {

inline constexpr guest::Function<0x0014f914, u32(u32, u32, u32, u32)> call_0014f914;  // (from the original)
inline constexpr guest::Function<0x002a7190, u32(u32, u32, u32, u32)> call_002a7190;  // (from the original)
inline constexpr guest::Function<0x002fb94c, u32(u32, u32, u32, u32)> call_002fb94c;  // (from the original)
inline constexpr guest::Function<0x002fc8e8, u32(u32, u32, u32, u32)> call_002fc8e8;  // (from the original)
inline constexpr guest::Function<0x002fc900, u32(u32, u32, u32, u32)> call_002fc900;  // (from the original)
inline constexpr guest::Function<0x002fe8a8, u32(u32, u32, u32, u32)> call_002fe8a8;  // (from the original)

u32 f_0029bfa4(u32 r0, u32 r1) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    goto L_29bfa4;
L_29bfa4:;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r4 = r0;
    r5 = u32(*gptr<u8>(r0 + 0x18u));  // (from the original)
    r0 = call_002fc900(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 != 0) {
        r0 = 0u;
        r0 = call_002fe8a8(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    } else {
        r0 = call_002fb94c(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    }
    r1 = r5;
    r0 = r0 + 0x5544u;  // (from the original)
    r0 = call_002a7190(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r5 = r0;
    r1 = r4;
    r0 = call_002fc8e8(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = r4 + 4u;
    r0 = r5 + 4u;
    r0 = call_002fc8e8(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = r4 + 8u;
    r0 = r5 + 8u;
    r0 = call_002fc8e8(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = r4 + 0xcu;  // (from the original)
    r0 = r5 + 0xcu;  // (from the original)
    r0 = call_002fc8e8(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = r4 + 0x10u;  // (from the original)
    r0 = r5 + 0x10u;  // (from the original)
    r0 = call_002fc8e8(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = r4 + 0x14u;  // (from the original)
    r0 = r5 + 0x14u;  // (from the original)
    r0 = call_002fc8e8(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r5 = 0x9845b8u;  // (from the original)
    r4 = u32(*gptr<u8>(r4 + 0x18u));  // (from the original)
    r0 = *gptr<u32>(r5 + (r4 << 2));
    if (r0 != 0) {
        r0 = call_0014f914(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
        r0 = *gptr<u32>(r5 + (r4 << 2));
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        r1 = 0x1000583u;  // (from the original)
        return guest::call_address<u32>(*gptr<u32>(0x14f928u), r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    }
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_0029bfa4
GUEST_EXPORT(0x0029bfa4, d_0029bfa4::f_0029bfa4);

// f_0029c964: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0029c964 {

struct __attribute__((packed)) Object_0029c964_0 {
    u8 byte_0;
    u8 byte_1;
};
GUEST_OFFSET(Object_0029c964_0, byte_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_0029c964_0, byte_1, 0x1);  // (from the original)


void f_0029c964(gptr<Object_0029c964_0> arg0, u32 r1) {
    arg0->byte_0 = u8(r1);
    r1 = 0u;
    arg0->byte_1 = u8(r1);
    guest::cpu()->r[1] = r1;
    return;
}

}  // namespace d_0029c964
GUEST_EXPORT(0x0029c964, d_0029c964::f_0029c964);

// f_0029c974: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0029c974 {

struct __attribute__((packed)) Object_0029c974_0 {
    u8 byte_0;
    u8 byte_1;
    u8 unknown_2[0x2];  // (not used here)
    u32 word_4;
};
GUEST_OFFSET(Object_0029c974_0, byte_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_0029c974_0, byte_1, 0x1);  // (from the original)
GUEST_OFFSET(Object_0029c974_0, word_4, 0x4);  // (from the original)

struct __attribute__((packed)) Object_0029c974_1 {
    u32 word_0;
};
GUEST_OFFSET(Object_0029c974_1, word_0, 0x0);  // (from the original)


void f_0029c974(gptr<Object_0029c974_0> arg0, gptr<Object_0029c974_1> arg1) {
    u32 r1 = arg1.addr();
    arg0->byte_0 = u8(2u);
    arg0->byte_1 = u8(0u);
    r1 = arg1->word_0;
    arg0->word_4 = u32(r1);
    guest::cpu()->r[1] = r1;
    return;
}

}  // namespace d_0029c974
GUEST_EXPORT(0x0029c974, d_0029c974::f_0029c974);

// f_0029cf30: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0029cf30 {

inline constexpr guest::Function<0x0062512c, u32(u32, u32, u32, u32)> call_0062512c;  // (from the original)

u32 f_0029cf30(u32 r0, u32 r1) {
    u32 r3 = 0;
    r3 = r0;
    r0 = r1 + 9u & 0xffu;  // (from the original)
    r1 = r3;
    return call_0062512c(r0, r1, guest::cpu()->r[2], r3);
}

}  // namespace d_0029cf30
GUEST_EXPORT(0x0029cf30, d_0029cf30::f_0029cf30);

// f_0029cf7c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0029cf7c {

inline constexpr guest::Function<0x00131280, u32(u32, u32, u32, u32)> call_00131280;  // (from the original)
inline constexpr guest::Function<0x001320cc, u32(u32, u32, u32, u32)> call_001320cc;  // (from the original)
inline constexpr guest::Function<0x002f9aa8, u32(u32, u32, u32, u32)> call_002f9aa8;  // (from the original)

u32 f_0029cf7c(u32 r0, u32 r1) {
    u32 res = 0;
    u32 r2 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r5 = r0;
    r6 = 0x95386cu;  // (from the original)
    r0 = *gptr<u32>(r6);
    if (r0 == 0) {
        r2 = 4u;
        r1 = r5;
        r0 = 0xc4u;  // (from the original)
        r0 = call_00131280(r0, r1, r2, guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r4 = r0;
        res = r0 + 0xb4u;  // (from the original)
        r0 = res;
        if (res != 0) {
            r1 = r5;
            r2 = 3u;
            r0 = call_001320cc(r0, r1, r2, guest::cpu()->r[3]);
            r2 = guest::cpu()->r[2];
            r1 = 0x8fa968u;  // (from the original)
            *gptr<u32>(r0) = u32(r1);
        }
        *gptr<u32>(r6 + 4u) = u32(r0);
        if (r4 == 0) {
            r0 = 0u;
        } else {
            r0 = r4;
            r0 = call_002f9aa8(r0, r1, r2, guest::cpu()->r[3]);
            r1 = guest::cpu()->r[1];
        }
        *gptr<u32>(r6) = u32(r0);
    }
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_0029cf7c
GUEST_EXPORT(0x0029cf7c, d_0029cf7c::f_0029cf7c);

// f_0029d150: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0029d150 {


u32 f_0029d150(u32 r0) {
    u32 r1 = 0;
    u32 r2 = 0;
    u32 r12 = 0;
    r1 = r0 + 0x10u;  // (from the original)
    r0 = 0u;
    r2 = 0x40u;  // (from the original)
    r12 = r0;
    do {
L_29d160:;
        *gptr<u8>(r1 + r0) = u8(r12);
        r0 = r0 + 1u;
        guest::preempt();
    } while (r0 != r2);
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_0029d150
GUEST_EXPORT(0x0029d150, d_0029d150::f_0029d150);

// f_0029d228: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0029d228 {

inline constexpr guest::Function<0x002068b8, u32(u32, u32, u32, u32)> call_002068b8;  // (from the original)
inline constexpr guest::Function<0x00305f44, u32(u32, u32, u32, u32)> call_00305f44;  // (from the original)
inline constexpr guest::Function<0x0030b6c4, u32(u32, u32, u32, u32)> call_0030b6c4;  // (from the original)
inline constexpr guest::Function<0x006249b0, u32(u32, u32, u32, u32)> call_006249b0;  // (from the original)
inline constexpr guest::Function<0x00624f00, u32(u32, u32, u32, u32)> call_00624f00;  // (from the original)

u32 f_0029d228(u32 r0, u32 r1_unused, u32 r2_unused, u32 r3) {
    u32 r1 = 0;
    u32 r2 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 0x20u;  // (from the original)
    r7 = 0u;
    r2 = r0 & 0xf8u;  // (from the original)
    r0 = 9u | r0 << 5;
    *gptr<u8>(r13 + 2u) = u8(r7);
    *gptr<u8>(r13 + 3u) = u8(r7);
    *gptr<u8>(r13 + 4u) = u8(r7);
    r1 = r7 | r2 >> 3;
    *gptr<u8>(r13 + 5u) = u8(r7);
    *gptr<u8>(r13) = u8(r0);
    *gptr<u8>(r13 + 6u) = u8(r7);
    *gptr<u8>(r13 + 1u) = u8(r1);
    guest::cpu()->r[13] = r13;
    r0 = call_00305f44(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = u32(*gptr<u8>(r13 + 1u)) & ~0xe0u;  // (from the original)
    r0 = r1 | r0 << 5;
    *gptr<u8>(r13 + 1u) = u8(r0);
    guest::cpu()->r[13] = r13;
    r0 = call_0030b6c4(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        goto L_29d334;
    }
    r0 = 0x953874u;  // (from the original)
    r1 = *gptr<u32>(r0);
    if (r1 == 0) {
        goto L_29d32c;
    }
    r5 = r1 + 0x10u;  // (from the original)
    r6 = r13;
    r2 = u32(*gptr<u8>(r13)) >> 5;
    r0 = r2 + (u32(*gptr<u8>(r13 + 1u)) << 3) & 0xffu;  // (from the original)
    if (r0 < 0x40u) {  // (from the original)
        r5 = r5 + r0;
    }
    guest::cpu()->r[13] = r13;
    r0 = call_00305f44(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 < 4u) {
        r3 = r0 & 7u;
        r0 = r5 + (r0 >> 3);
        r2 = 1u;
        r1 = u32(*gptr<u8>(r0)) | lsl_r(r2, r3 & 0xff);  // (from the original)
        *gptr<u8>(r0) = u8(r1);
    }
    r4 = 0u;
L_29d2dc:;
    r0 = r4 & 0xffu;  // (from the original)
    if (r0 < 4u) {
        r1 = u32(*gptr<u8>(r5 + (r0 >> 3)));
        if ((lsr_r(r1, r0 & 7u) & 1u) != 0) {
            goto L_29d310;
        }
    }
    r0 = r4 & 0xffu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00624f00(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 != 0) {
        goto L_29d32c;
    }
L_29d310:;
    r4 = r4 + 1u;
    if (r4 < 4u) {
        guest::preempt();
        goto L_29d2dc;
    }
    r0 = r5;
    r1 = r6;
    *gptr<u8>(r5) = u8(r7);
    guest::cpu()->r[13] = r13;
    r0 = call_002068b8(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
L_29d32c:;
    r13 = r13 + 0x20u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
L_29d334:;
    r3 = 7u;
    r2 = r13;
    r1 = 0u;
    r0 = 0x40u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_006249b0(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r13 = r13 + 0x20u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_0029d228
GUEST_EXPORT(0x0029d228, d_0029d228::f_0029d228);

// f_0029d354: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0029d354 {

inline constexpr guest::Function<0x00206728, u32(u32, u32, u32, u32)> call_00206728;  // (from the original)
inline constexpr guest::Function<0x00305f44, u32(u32, u32, u32, u32)> call_00305f44;  // (from the original)
inline constexpr guest::Function<0x006249b0, u32(u32, u32, u32, u32)> call_006249b0;  // (from the original)

u32 f_0029d354(u32 r0_unused, u32 r1, u32 r2_unused, u32 r3) {
    u32 r0 = 0;
    u32 r2 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 0x10u;  // (from the original)
    r0 = 0u;
    r4 = r1;
    *gptr<u8>(r13 + 2u) = u8(r0);
    *gptr<u8>(r13 + 4u) = u8(r0);
    r2 = r4 & 0xf8u;  // (from the original)
    *gptr<u8>(r13 + 3u) = u8(r0);
    *gptr<u8>(r13 + 5u) = u8(r0);
    r1 = 7u | r4 << 5;
    *gptr<u8>(r13 + 6u) = u8(r0);
    r0 = r0 | r2 >> 3;
    *gptr<u8>(r13) = u8(r1);
    *gptr<u8>(r13 + 1u) = u8(r0);
    guest::cpu()->r[13] = r13;
    r0 = call_00305f44(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = u32(*gptr<u8>(r13 + 1u)) & ~0xe0u;  // (from the original)
    *gptr<u8>(r13 + 1u) = u8(r1 | r0 << 5);
    r0 = *gptr<u32>(0x953864u);  // (from the original)
    if (r0 != 0) {
        r0 = r0 + 0x400u;  // (from the original)
        if (r4 < 0x3fu) {  // (from the original)
            r0 = r0 + r4;
        }
        r1 = u32(*gptr<u8>(r0)) | 1u;
        *gptr<u8>(r0) = u8(r1);
    }
    guest::cpu()->r[13] = r13;
    r0 = call_00305f44(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    if (r0 != 0) {
        r3 = 7u;
        r2 = r13;
        r1 = 0u;
        r0 = 0x40u;  // (from the original)
        guest::cpu()->r[13] = r13;
        r0 = call_006249b0(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r13 = r13 + 0x10u;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    r0 = 0x953874u;  // (from the original)
    r1 = *gptr<u32>(r0);
    if (r1 == 0) {
        r13 = r13 + 0x10u;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    r4 = r1 + 0x10u;  // (from the original)
    r2 = u32(*gptr<u8>(r13)) >> 5;
    r0 = r2 + (u32(*gptr<u8>(r13 + 1u)) << 3) & 0xffu;  // (from the original)
    if (r0 < 0x40u) {  // (from the original)
        r4 = r4 + r0;
    }
    guest::cpu()->r[13] = r13;
    r0 = call_00305f44(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    r2 = r0;
    r1 = r13;
    r0 = r4;
    guest::cpu()->r[13] = r13;
    r0 = call_00206728(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r13 = r13 + 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_0029d354
GUEST_EXPORT(0x0029d354, d_0029d354::f_0029d354);

// f_0029e154: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0029e154 {

inline constexpr guest::Function<0x0023a9dc, u32(u32, u32, u32, u32)> call_0023a9dc;  // (from the original)

u32 f_0029e154(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = guest::cpu()->r[4];
    guest::cpu()->r[13] -= 8u;
    r4 = r2;
    r0 = call_0023a9dc(r0, r1, r2, r3);
    r3 = 0x8f0c00u;  // (from the original)
    r1 = r3 + 0x174u;  // (from the original)
    *gptr<u32>(r0 + 0x7cu) = u32(r1);  // (from the original)
    *gptr<u32>(r0 + 0x270u) = u32(0u);  // (from the original)
    *gptr<u32>(r0) = u32(r3);
    *gptr<u32>(r0 + 0x260u) = u32(r4);  // (from the original)
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_0029e154
GUEST_EXPORT(0x0029e154, d_0029e154::f_0029e154);

// f_0029e9a8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0029e9a8 {

struct __attribute__((packed)) Object_0029e9a8_0 {
    u8 byte_0;
    u8 unknown_1[0x2];  // (not used here)
    u8 byte_3;
};
GUEST_OFFSET(Object_0029e9a8_0, byte_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_0029e9a8_0, byte_3, 0x3);  // (from the original)


void f_0029e9a8(gptr<Object_0029e9a8_0> arg0) {
    u32 r1 = 0;
    arg0->byte_0 = u8(u32(arg0->byte_0) & ~0x3cu);  // (from the original)
    r1 = u32(arg0->byte_3) & ~0x1cu | 0x10u;  // (from the original)
    arg0->byte_3 = u8(r1);
    guest::cpu()->r[1] = r1;
    return;
}

}  // namespace d_0029e9a8
GUEST_EXPORT(0x0029e9a8, d_0029e9a8::f_0029e9a8);
