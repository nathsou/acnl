// Functions decompiled by tools/decomp (docs/decomp.md), each proved equal to the recompiled original (prove-cpp). The
// names are generated (d_<address>::f_<address>, Object_<address>_<argument>, word_<offset>) and still to be chosen.
#include "guest/guest.hpp"

#include <bit>

using guest::gptr;

// f_006904b4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006904b4 {

inline constexpr guest::Function<0x002f74c8, u32(u32, u32, u32, u32)> call_002f74c8;  // (from the original)
inline constexpr guest::Function<0x004ea048, u32(u32, u32, u32, u32)> call_004ea048;  // (from the original)
inline constexpr guest::Function<0x00536110, u32(u32, u32, u32, u32)> call_00536110;  // (from the original)
inline constexpr guest::Function<0x005361a8, u32(u32, u32, u32, u32)> call_005361a8;  // (from the original)
inline constexpr guest::Function<0x0057b9dc, u32(u32, u32, u32, u32)> call_0057b9dc;  // (from the original)
inline constexpr guest::Function<0x005b4678, u32(u32, u32, u32, u32)> call_005b4678;  // (from the original)
inline constexpr guest::Function<0x0074557c, u32(u32, u32, u32, u32)> call_0074557c;  // (from the original)
inline constexpr guest::Function<0x00748574, u32(u32, u32, u32, u32)> call_00748574;  // (from the original)
inline constexpr guest::Function<0x007486dc, u32(u32, u32, u32, u32)> call_007486dc;  // (from the original)

u32 f_006904b4(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 res = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r13 = guest::cpu()->r[13];
    *gptr<u32>(r13 + 0xffffffe8u) = u32(r3);  // (from the original)
    r13 = r13 - 0x18;  // (from the original)
    r4 = r0;
    r7 = *gptr<u32>(0x94f310u);  // (from the original)
    r0 = r4;
    guest::cpu()->r[13] = r13;
    r0 = call_005361a8(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r5 = r0;
    if (u32(*gptr<u8>(r4 + 8u)) == 2u) {
        r6 = 1u;
    } else {
        r6 = 0u;
    }
    if (r5 == 0) {
        goto L_690524;
    }
    r0 = r5;
    guest::cpu()->r[13] = r13;
    r0 = call_007486dc(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    res = r0 | r6;
    r0 = res;
    if (res == 0) {
        goto L_690524;
    }
    guest::cpu()->r[13] = r13;
    r0 = call_002f74c8(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0 = call_005b4678(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 != 0) {
        goto L_690524;
    }
    guest::cpu()->r[13] = r13;
    r0 = call_004ea048(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0 = call_0074557c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 != 0) {
        goto L_69052c;
    }
    if (u32(*gptr<u8>(r4 + 8u)) == 2u) {
        goto L_69052c;
    }
L_690524:;
    r0 = 0u;
    r13 = r13 + 0x18;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
L_69052c:;
    r0 = 1u;
    guest::cpu()->r[13] = r13;
    r0 = call_00536110(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = u32(*gptr<u8>(r5 + 0x11u));  // (from the original)
    if (r1 < 0x56u) {  // (from the original)
        if (r1 != 0) {
            r0 = r5;
            guest::cpu()->r[13] = r13;
            r0 = call_00748574(r0, r1, r2, r3);
        }
    }
    r1 = 0u;
    r3 = r1;
    *gptr<u32>(r13) = u32(r1);
    r2 = r4;
    r1 = r7;
    guest::cpu()->r[13] = r13;
    r0 = call_0057b9dc(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r13 = r13 + 0x18;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_006904b4
GUEST_EXPORT(0x006904b4, d_006904b4::f_006904b4);

// f_00691210: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00691210 {

inline constexpr guest::Function<0x005c33cc, u32(u32, u32, u32, u32)> call_005c33cc;  // (from the original)
inline constexpr guest::Function<0x00690fb8, u32(u32, u32, u32, u32)> call_00690fb8;  // (from the original)

u32 f_00691210(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 ea = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r13 = guest::cpu()->r[13];
    u32 r14 = guest::cpu()->r[14];
    ea = r13 - 0x10;  // (from the original)
    *gptr<u32>(ea) = u32(r3);
    *gptr<u32>(ea + 4) = u32(r4);
    *gptr<u32>(ea + 8) = u32(r5);
    *gptr<u32>(ea + 0xc) = u32(r14);  // (from the original)
    r13 = r13 - 0x10;  // (from the original)
    r5 = r0;
    r4 = r1;
    r1 = 0u;
    r0 = 4u;
    guest::cpu()->r[13] = r13;
    r0 = call_005c33cc(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    if (r0 == 0) {
        r0 = ~0u;
        goto L_691258;
    }
    r3 = r4;
    *gptr<u16>(r13) = u16(u32(*gptr<u16>(r0 + 0x2eu)));  // (from the original)
    r2 = *gptr<u32>(r13);
    r1 = r0 + 0x14u;  // (from the original)
    r13 = r13 + 4u;
    r0 = r5;
    ea = r13;
    r13 = r13 + 0xc;  // (from the original)
    r4 = *gptr<u32>(ea);
    r5 = *gptr<u32>(ea + 4);
    r14 = *gptr<u32>(ea + 8);
    guest::cpu()->r[13] = r13;
    guest::cpu()->r[4] = r4;
    guest::cpu()->r[5] = r5;
    return call_00690fb8(r0, r1, r2, r3);
L_691258:;
    ea = r13;
    r13 = r13 + 0x10;  // (from the original)
    r4 = *gptr<u32>(ea + 4);
    r5 = *gptr<u32>(ea + 8);
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[4] = r4;
    guest::cpu()->r[5] = r5;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_00691210
GUEST_EXPORT(0x00691210, d_00691210::f_00691210);

// f_0069125c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0069125c {

inline constexpr guest::Function<0x002f74c8, u32(u32, u32, u32, u32)> call_002f74c8;  // (from the original)
inline constexpr guest::Function<0x002f74e0, u32(u32, u32, u32, u32)> call_002f74e0;  // (from the original)
inline constexpr guest::Function<0x002fcb84, u32(u32, u32, u32, u32)> call_002fcb84;  // (from the original)
inline constexpr guest::Function<0x004e0cb0, u32(u32, u32, u32, u32)> call_004e0cb0;  // (from the original)
inline constexpr guest::Function<0x004e99f0, u32(u32, u32, u32, u32)> call_004e99f0;  // (from the original)
inline constexpr guest::Function<0x0056e6a8, u32(u32, u32, u32, u32)> call_0056e6a8;  // (from the original)
inline constexpr guest::Function<0x00571ea4, u32(u32, u32, u32, u32)> call_00571ea4;  // (from the original)
inline constexpr guest::Function<0x0057456c, u32(u32, u32, u32, u32)> call_0057456c;  // (from the original)
inline constexpr guest::Function<0x00751058, u32(u32, u32, u32, u32)> call_00751058;  // (from the original)
inline constexpr guest::Function<0x00751824, u32(u32, u32, u32, u32)> call_00751824;  // (from the original)
inline constexpr guest::Function<0x00751840, u32(u32, u32, u32, u32)> call_00751840;  // (from the original)
inline constexpr guest::Function<0x007519b4, u32(u32, u32, u32, u32)> call_007519b4;  // (from the original)

u32 f_0069125c(u32 r0, u32 r1, u32 r2) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 zf = 0;
    goto L_69125c;
L_57400c:;
    r0 = *gptr<u32>(r0 + 0x300u);  // (from the original)
    if (r0 == 0) {
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r2 = *gptr<u32>(*gptr<u32>(r0) + 0x30u);  // (from the original)
    r1 = 0x100095au;  // (from the original)
    return guest::call_address<u32>(r2, r0, r1, r2, guest::cpu()->r[3]);
L_69125c:;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r4 = r0;
    r5 = r1;
    r6 = r2;
    r0 = call_004e0cb0(r0, r1, r2, guest::cpu()->r[3]);
    r2 = 0u;
    r1 = r4;
    r0 = call_004e99f0(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r4 = r0;
    if (r0 == 0) {
        goto L_69138c;
    }
    r0 = call_007519b4(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    zf = r0 == 0;
    r0 = r4;
    if (zf) {
        goto L_69130c;
    }
    r0 = call_00751824(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    zf = r0 == 0xb6u;  // (from the original)
    if (!zf) {
        zf = r0 == 0xb8u;  // (from the original)
    }
    if (zf) {
        goto L_6912cc;
    }
    zf = r0 == 0xbdu;  // (from the original)
    if (!zf) {
        zf = r0 == 0xbfu;  // (from the original)
    }
    if (zf) {
        goto L_6912cc;
    }
    zf = r0 == 0xc0u;  // (from the original)
    if (!zf) {
        zf = r0 == 0xc3u;  // (from the original)
    }
    if (zf) {
        goto L_6912cc;
    }
    zf = r0 == 0xc4u;  // (from the original)
    if (!zf) {
        zf = r0 == 0xc5u;  // (from the original)
    }
    if (!zf) {
        zf = r0 == 0xc6u;  // (from the original)
    }
    if (!zf) {
        goto L_69135c;
    }
L_6912cc:;
    if (r5 != 0) {
        r1 = 0xbau;  // (from the original)
        r0 = r4;
        r0 = call_0056e6a8(r0, r1, r2, guest::cpu()->r[3]);
        r2 = guest::cpu()->r[2];
        goto L_69135c;
    }
    r0 = r4;
    r0 = call_00751824(r0, r1, r2, guest::cpu()->r[3]);
    r2 = guest::cpu()->r[2];
    r1 = r0;
    r0 = r4;
    r0 = call_0056e6a8(r0, r1, r2, guest::cpu()->r[3]);
    r2 = guest::cpu()->r[2];
    goto L_69135c;
L_69130c:;
    r0 = call_00751840(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    if (r0 == 0) {
        goto L_69135c;
    }
    r0 = call_002f74c8(r0, r1, r2, guest::cpu()->r[3]);
    r2 = guest::cpu()->r[2];
    r1 = r0;
    r0 = 4u;
    r0 = call_002f74e0(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    if (r0 == 0) {
        goto L_69135c;
    }
    r0 = r4;
    r0 = call_00751058(r0, r1, r2, guest::cpu()->r[3]);
    r2 = guest::cpu()->r[2];
    r1 = 0x206cu;  // (from the original)
    r0 = call_002fcb84(r0, r1, r2, guest::cpu()->r[3]);
    r2 = guest::cpu()->r[2];
    if (r0 == 0) {
        goto L_691374;
    }
L_69135c:;
    r1 = r6;
    r0 = r4;
    r0 = call_0057456c(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r0 = r4;
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    return call_00571ea4(r0, r1, r2, guest::cpu()->r[3]);
L_691374:;
    r1 = r6;
    r0 = r4;
    r0 = call_0057456c(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r0 = r4;
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::preempt();
    goto L_57400c;
L_69138c:;
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_0069125c
GUEST_EXPORT(0x0069125c, d_0069125c::f_0069125c);

// f_00691544: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00691544 {

inline constexpr guest::Function<0x002fc8e8, u32(u32, u32, u32, u32)> call_002fc8e8;  // (from the original)
inline constexpr guest::Function<0x002fc934, u32(u32, u32, u32, u32)> call_002fc934;  // (from the original)
inline constexpr guest::Function<0x006b9df8, u32(u32, u32, u32, u32)> call_006b9df8;  // (from the original)

u32 f_00691544(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 ea = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r9 = guest::cpu()->r[9];
    u32 r13 = guest::cpu()->r[13];
    *gptr<u32>(r13 + 0xffffffe0u) = u32(r3);  // (from the original)
    r13 = r13 - 0x20;  // (from the original)
    r4 = r0;
    r8 = r2;
    ea = r13 + 0x20u;  // (from the original)
    r5 = *gptr<u32>(ea);
    r6 = *gptr<u32>(ea + 4);
    r7 = *gptr<u32>(ea + 8);
    r9 = r3;
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_002fc934(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_006b9df8(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = r13;
    r0 = r4;
    guest::cpu()->r[13] = r13;
    r0 = call_002fc8e8(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    *gptr<u8>(r4 + 4u) = u8(r8);
    *gptr<u8>(r4 + 6u) = u8(r5);
    *gptr<u8>(r4 + 5u) = u8(r9);
    *gptr<u8>(r4 + 7u) = u8(r6);
    *gptr<u8>(r4 + 8u) = u8(r7);
    r0 = r13;
    r13 = r13 + 0x20;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_00691544
GUEST_EXPORT(0x00691544, d_00691544::f_00691544);

// f_006915b0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006915b0 {

inline constexpr guest::Function<0x002f74c8, u32(u32, u32, u32, u32)> call_002f74c8;  // (from the original)
inline constexpr guest::Function<0x002f74e0, u32(u32, u32, u32, u32)> call_002f74e0;  // (from the original)
inline constexpr guest::Function<0x002fcb84, u32(u32, u32, u32, u32)> call_002fcb84;  // (from the original)
inline constexpr guest::Function<0x004e0cb0, u32(u32, u32, u32, u32)> call_004e0cb0;  // (from the original)
inline constexpr guest::Function<0x004e99f0, u32(u32, u32, u32, u32)> call_004e99f0;  // (from the original)
inline constexpr guest::Function<0x0056e6a8, u32(u32, u32, u32, u32)> call_0056e6a8;  // (from the original)
inline constexpr guest::Function<0x005724ec, u32(u32, u32, u32, u32)> call_005724ec;  // (from the original)
inline constexpr guest::Function<0x0057456c, u32(u32, u32, u32, u32)> call_0057456c;  // (from the original)
inline constexpr guest::Function<0x00751058, u32(u32, u32, u32, u32)> call_00751058;  // (from the original)
inline constexpr guest::Function<0x00751824, u32(u32, u32, u32, u32)> call_00751824;  // (from the original)
inline constexpr guest::Function<0x00751840, u32(u32, u32, u32, u32)> call_00751840;  // (from the original)
inline constexpr guest::Function<0x007519b4, u32(u32, u32, u32, u32)> call_007519b4;  // (from the original)

u32 f_006915b0(u32 r0, u32 r1, u32 r2) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 zf = 0;
    goto L_6915b0;
L_574168:;
    r0 = *gptr<u32>(r0 + 0x300u);  // (from the original)
    if (r0 == 0) {
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r2 = *gptr<u32>(*gptr<u32>(r0) + 0x30u);  // (from the original)
    r1 = 0x100095bu;  // (from the original)
    return guest::call_address<u32>(r2, r0, r1, r2, guest::cpu()->r[3]);
L_6915b0:;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r4 = r0;
    r5 = r1;
    r6 = r2;
    r0 = call_004e0cb0(r0, r1, r2, guest::cpu()->r[3]);
    r2 = 0u;
    r1 = r4;
    r0 = call_004e99f0(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r4 = r0;
    if (r0 == 0) {
        goto L_6916e0;
    }
    r0 = call_007519b4(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    zf = r0 == 0;
    r0 = r4;
    if (zf) {
        goto L_691660;
    }
    r0 = call_00751824(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    zf = r0 == 0xb6u;  // (from the original)
    if (!zf) {
        zf = r0 == 0xb8u;  // (from the original)
    }
    if (zf) {
        goto L_691620;
    }
    zf = r0 == 0xbdu;  // (from the original)
    if (!zf) {
        zf = r0 == 0xbfu;  // (from the original)
    }
    if (zf) {
        goto L_691620;
    }
    zf = r0 == 0xc0u;  // (from the original)
    if (!zf) {
        zf = r0 == 0xc3u;  // (from the original)
    }
    if (zf) {
        goto L_691620;
    }
    zf = r0 == 0xc4u;  // (from the original)
    if (!zf) {
        zf = r0 == 0xc5u;  // (from the original)
    }
    if (!zf) {
        zf = r0 == 0xc6u;  // (from the original)
    }
    if (!zf) {
        goto L_6916b0;
    }
L_691620:;
    if (r5 != 0) {
        r1 = 0xbau;  // (from the original)
        r0 = r4;
        r0 = call_0056e6a8(r0, r1, r2, guest::cpu()->r[3]);
        r2 = guest::cpu()->r[2];
        goto L_6916b0;
    }
    r0 = r4;
    r0 = call_00751824(r0, r1, r2, guest::cpu()->r[3]);
    r2 = guest::cpu()->r[2];
    r1 = r0;
    r0 = r4;
    r0 = call_0056e6a8(r0, r1, r2, guest::cpu()->r[3]);
    r2 = guest::cpu()->r[2];
    goto L_6916b0;
L_691660:;
    r0 = call_00751840(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    if (r0 == 0) {
        goto L_6916b0;
    }
    r0 = call_002f74c8(r0, r1, r2, guest::cpu()->r[3]);
    r2 = guest::cpu()->r[2];
    r1 = r0;
    r0 = 4u;
    r0 = call_002f74e0(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    if (r0 == 0) {
        goto L_6916b0;
    }
    r0 = r4;
    r0 = call_00751058(r0, r1, r2, guest::cpu()->r[3]);
    r2 = guest::cpu()->r[2];
    r1 = 0x206cu;  // (from the original)
    r0 = call_002fcb84(r0, r1, r2, guest::cpu()->r[3]);
    r2 = guest::cpu()->r[2];
    if (r0 == 0) {
        goto L_6916c8;
    }
L_6916b0:;
    r1 = r6;
    r0 = r4;
    r0 = call_0057456c(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r0 = r4;
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    return call_005724ec(r0, r1, r2, guest::cpu()->r[3]);
L_6916c8:;
    r1 = r6;
    r0 = r4;
    r0 = call_0057456c(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r0 = r4;
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::preempt();
    goto L_574168;
L_6916e0:;
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_006915b0
GUEST_EXPORT(0x006915b0, d_006915b0::f_006915b0);

// f_00691754: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00691754 {

inline constexpr guest::Function<0x005c33cc, u32(u32, u32, u32, u32)> call_005c33cc;  // (from the original)
inline constexpr guest::Function<0x00692504, u32(u32, u32, u32, u32)> call_00692504;  // (from the original)

u32 f_00691754(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r13 = guest::cpu()->r[13];
    r5 = r0;
    r6 = r1;
    r13 = r13 - 0x18u;  // (from the original)
    r4 = r2;
    r1 = 0u;
    r0 = 4u;
    guest::cpu()->r[13] = r13;
    r0 = call_005c33cc(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    if (r0 == 0) {
        r0 = 4u;
        goto L_6917a0;
    }
    *gptr<u32>(r13) = u32(r4);
    r1 = u32(*gptr<u16>(r0 + 0x2eu));  // (from the original)
    r2 = r0 + 0x14u;  // (from the original)
    r0 = r5;
    *gptr<u16>(r13 + 4u) = u16(r1);
    r3 = *gptr<u32>(r13 + 4u);
    r1 = r6;
    guest::cpu()->r[13] = r13;
    r0 = call_00692504(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
L_6917a0:;
    r13 = r13 + 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_00691754
GUEST_EXPORT(0x00691754, d_00691754::f_00691754);

// f_00691ae8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00691ae8 {

struct __attribute__((packed)) Object_00691ae8_0 {
    u32 word_0;
};
GUEST_OFFSET(Object_00691ae8_0, word_0, 0x0);  // (from the original)

inline constexpr guest::Function<0x002fc8e8, u32(u32, u32, u32, u32)> call_002fc8e8;  // (from the original)
inline constexpr guest::Function<0x005204b0, u32(u32, u32, u32, u32)> call_005204b0;  // (from the original)

u32 f_00691ae8(gptr<Object_00691ae8_0> arg0, u32 r1) {
    u32 r0 = arg0.addr();
    u32 r4 = guest::cpu()->r[4];
    guest::cpu()->r[13] -= 8u;
    r4 = r0;
    r0 = arg0->word_0;
    if (r0 != 0) {
        r0 = call_005204b0(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
        *gptr<u32>(r4) = u32(0u);
    }
    r1 = 0x95bfdcu;  // (from the original)
    r0 = r4 + 4u;
    r0 = call_002fc8e8(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r0 = 1u;
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_00691ae8
GUEST_EXPORT(0x00691ae8, d_00691ae8::f_00691ae8);

// f_00691b7c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00691b7c {

inline constexpr guest::Function<0x00614760, u32(u32, u32, u32, u32)> call_00614760;  // (from the original)
inline constexpr guest::Function<0x006148e4, u32(u32, u32, u32, u32)> call_006148e4;  // (from the original)
inline constexpr guest::Function<0x00614a64, u32(u32, u32, u32, u32)> call_00614a64;  // (from the original)
inline constexpr guest::Function<0x006a6dbc, u32(u32, u32, u32, u32)> call_006a6dbc;  // (from the original)
inline constexpr guest::Function<0x0075dc00, u32(u32, u32, u32, u32)> call_0075dc00;  // (from the original)

u32 f_00691b7c(u32 r0, u32 r1, u32 r2, u32 r3, float S0) {
    u32 ea = 0;
    u32 res = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r13 = guest::cpu()->r[13];
    u32 zf = 0;
    r4 = r0;
    r6 = r2;
    r0 = r0 - r6;
    res = r0;
    r5 = r1;
    r7 = r3;
    if (res >> 0x1f != (r0 & (r0 ^ res)) >> 0x1f) {  // (from the original)
        r0 = 0u - r0;
    }
    r1 = r5 - r7;
    res = r1;
    if (res >> 0x1f != (r1 & (r1 ^ res)) >> 0x1f) {  // (from the original)
        r1 = 0u - r1;
    }
    res = r0 + r1;
    zf = res == 0;
    r0 = res;
    if (!zf) {
        zf = r0 == 1u;
    }
    r13 = r13 - 0x88u;  // (from the original)
    if (zf) {
        r0 = 1u;
        goto L_691c94;
    }
    r2 = r5;
    r1 = r4;
    r0 = r13 + 0x58u;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    r0 = call_006a6dbc(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
    r2 = r5;
    r1 = r6;
    r0 = r13 + 0x64u;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    r0 = call_006a6dbc(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
    r0 = r13 + 0xcu;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    r0 = call_006148e4(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    r0 = call_00614760(r0, r1, r2, r3);
    r5 = 0u;
    r6 = 1u;
    r8 = 0x881ba0u;  // (from the original)
    ea = r13;
    *gptr<u32>(ea) = u32(r6);
    ea = r13 + 4u;
    *gptr<u32>(ea) = u32(r0);
    *gptr<u32>(ea + 4) = u32(r5);
    r3 = r5;
    S0 = std::bit_cast<float>(*gptr<u32>(r8));
    r2 = r13 + 0x58u;  // (from the original)
    r1 = r13 + 0x64u;  // (from the original)
    r0 = r13 + 0xcu;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    r0 = call_00614a64(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
    r1 = 0xfu;  // (from the original)
    r0 = r13 + 0xcu;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    r0 = call_0075dc00(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r3 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
    if (r0 == 0) {
        goto L_691c9c;
    }
    r2 = r7;
    r1 = r4;
    r0 = r13 + 0x64u;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    r0 = call_006a6dbc(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
    r0 = r13 + 0xcu;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    r0 = call_006148e4(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    r0 = call_00614760(r0, r1, r2, r3);
    ea = r13;
    *gptr<u32>(ea) = u32(r6);
    ea = r13 + 4u;
    *gptr<u32>(ea) = u32(r0);
    *gptr<u32>(ea + 4) = u32(r5);
    r3 = 0u;
    S0 = std::bit_cast<float>(*gptr<u32>(r8));
    r2 = r13 + 0x58u;  // (from the original)
    r1 = r13 + 0x64u;  // (from the original)
    r0 = r13 + 0xcu;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    r0 = call_00614a64(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
    r1 = 0xfu;  // (from the original)
    r0 = r13 + 0xcu;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    r0 = call_0075dc00(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    S0 = guest::cpu()->s[0];
    if (r0 == 0) {
        goto L_691c9c;
    }
    r0 = 0u;
L_691c94:;
    r13 = r13 + 0x88u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    return r0;
L_691c9c:;
    r0 = 1u;
    r13 = r13 + 0x88u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    return r0;
}

}  // namespace d_00691b7c
GUEST_EXPORT(0x00691b7c, d_00691b7c::f_00691b7c);

// f_00691cb4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00691cb4 {

inline constexpr guest::Function<0x002f74c8, u32(u32, u32, u32, u32)> call_002f74c8;  // (from the original)
inline constexpr guest::Function<0x002f74e0, u32(u32, u32, u32, u32)> call_002f74e0;  // (from the original)
inline constexpr guest::Function<0x002fc20c, u32(u32, u32, u32, u32)> call_002fc20c;  // (from the original)
inline constexpr guest::Function<0x002fc8e8, u32(u32, u32, u32, u32)> call_002fc8e8;  // (from the original)
inline constexpr guest::Function<0x004e0cb0, u32(u32, u32, u32, u32)> call_004e0cb0;  // (from the original)
inline constexpr guest::Function<0x004e7344, u32(u32, u32, u32, u32)> call_004e7344;  // (from the original)
inline constexpr guest::Function<0x004e958c, u32(u32, u32, u32, u32)> call_004e958c;  // (from the original)
inline constexpr guest::Function<0x004e99f0, u32(u32, u32, u32, u32)> call_004e99f0;  // (from the original)
inline constexpr guest::Function<0x004ea048, u32(u32, u32, u32, u32)> call_004ea048;  // (from the original)
inline constexpr guest::Function<0x00521d3c, u32(u32, u32, u32, u32)> call_00521d3c;  // (from the original)
inline constexpr guest::Function<0x0052c4d8, u32(u32, u32, u32, u32)> call_0052c4d8;  // (from the original)
inline constexpr guest::Function<0x005b4018, u32(u32, u32, u32, u32)> call_005b4018;  // (from the original)
inline constexpr guest::Function<0x005c33cc, u32(u32, u32, u32, u32)> call_005c33cc;  // (from the original)
inline constexpr guest::Function<0x00690fb8, u32(u32, u32, u32, u32)> call_00690fb8;  // (from the original)
inline constexpr guest::Function<0x00751058, u32(u32, u32, u32, u32)> call_00751058;  // (from the original)
inline constexpr guest::Function<0x00751a20, u32(u32, u32, u32, u32)> call_00751a20;  // (from the original)
inline constexpr guest::Function<0x0076e7c8, u32(u32, u32, u32, u32)> call_0076e7c8;  // (from the original)

u32 f_00691cb4(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 res = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 0x30u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002f74c8(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r4 = r0;
    r1 = r0;
    r0 = 0x4000u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002f74e0(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 != 0) {
        goto L_691d40;
    }
    r1 = r4;
    r0 = 0x2000u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002f74e0(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 != 0) {
        r0 = r4;
        guest::cpu()->r[13] = r13;
        r0 = call_005b4018(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        if (r0 == 0) {
            goto L_691d40;
        }
    }
    guest::cpu()->r[13] = r13;
    r0 = call_002f74c8(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0 = call_004e7344(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        goto L_691ed0;
    }
    r0 = *gptr<u32>(0x95c6d0u);  // (from the original)
    if (r0 == 0) {
        goto L_691d40;
    }
    r0 = r0 + 0x10u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0076e7c8(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 == 2u) {
        goto L_691ed0;
    }
L_691d40:;
    r0 = 1u;
    guest::cpu()->r[13] = r13;
    r0 = call_00521d3c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        goto L_691ed0;
    }
    r1 = 0x95bfdcu;  // (from the original)
    r0 = 0x94f320u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002fc8e8(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = r0;
    r0 = 0x94f31cu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002fc8e8(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r13 + 0xcu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002fc20c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 + 4u;
    guest::cpu()->r[13] = r13;
    r0 = call_002fc20c(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r4 = r13;
    r5 = 1u;
    r1 = 0u;
    r0 = 4u;
    guest::cpu()->r[13] = r13;
    r0 = call_005c33cc(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r6 = r13;
    if (r0 == 0) {
        goto L_691ebc;
    }
    r3 = r5;
    *gptr<u16>(r13 + 0x1cu) = u16(u32(*gptr<u16>(r0 + 0x2eu)));  // (from the original)
    r1 = r0 + 0x14u;  // (from the original)
    r2 = *gptr<u32>(r13 + 0x1cu);  // (from the original)
    r0 = r4;
    guest::cpu()->r[13] = r13;
    r0 = call_00690fb8(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r4 = r0;
    if (r0 + 2u != 0) {
        res = r4;
        if (res >> 0x1f != (r4 & (r4 ^ res)) >> 0x1f) {  // (from the original)
            goto L_691ebc;
        }
        guest::cpu()->r[13] = r13;
        r0 = call_004ea048(r0, r1, r2, r3);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r1 = r4;
        guest::cpu()->r[13] = r13;
        r0 = call_004e958c(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r4 = r0;
        if (r0 == 0) {
            goto L_691ebc;
        }
        guest::cpu()->r[13] = r13;
        r0 = call_00751a20(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        if (r0 == 1u) {
            goto L_691e68;
        }
        if (r0 == 0) {
            r0 = r4;
            goto L_691ea0;
        }
        goto L_691eb4;
    }
    r0 = 0x94f320u;  // (from the original)
    r1 = r6 + 0x10u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002fc8e8(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0 = call_004e0cb0(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    r2 = 0u;
    r1 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_004e99f0(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r4 = r0;
    if (r0 == 0) {
        goto L_691ebc;
    }
    guest::cpu()->r[13] = r13;
    r0 = call_00751058(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = r0;
    r0 = 0x94f31cu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002fc8e8(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r4;
    guest::cpu()->r[13] = r13;
    r0 = call_0052c4d8(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    goto L_691ebc;
L_691e68:;
    r0 = r4;
    guest::cpu()->r[13] = r13;
    r0 = call_00751058(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = r0;
    r0 = 0x94f320u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002fc8e8(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0 = call_004e0cb0(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    r2 = 0u;
    r1 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_004e99f0(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        goto L_691eb4;
    }
L_691ea0:;
    guest::cpu()->r[13] = r13;
    r0 = call_00751058(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = r0;
    r0 = 0x94f31cu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002fc8e8(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
L_691eb4:;
    r0 = r4;
    guest::cpu()->r[13] = r13;
    r0 = call_0052c4d8(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
L_691ebc:;
    r0 = r6 + 0xcu;  // (from the original)
L_691ed0:;
    r13 = r13 + 0x30u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_00691cb4
GUEST_EXPORT(0x00691cb4, d_00691cb4::f_00691cb4);

// f_0069335c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0069335c {

inline constexpr guest::Function<0x002f74c8, u32(u32, u32, u32, u32)> call_002f74c8;  // (from the original)
inline constexpr guest::Function<0x002f74e0, u32(u32, u32, u32, u32)> call_002f74e0;  // (from the original)
inline constexpr guest::Function<0x004e7344, u32(u32, u32, u32, u32)> call_004e7344;  // (from the original)
inline constexpr guest::Function<0x005b4018, u32(u32, u32, u32, u32)> call_005b4018;  // (from the original)
inline constexpr guest::Function<0x0076e7c8, u32(u32, u32, u32, u32)> call_0076e7c8;  // (from the original)

u32 f_0069335c(u32 r0) {
    u32 r1 = 0;
    u32 r4 = guest::cpu()->r[4];
    guest::cpu()->r[13] -= 8u;
    r4 = r0;
    r1 = r0;
    r0 = 0x4000u;  // (from the original)
    r0 = call_002f74e0(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 != 0) {
        r0 = 1u;
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r1 = r4;
    r0 = 0x2000u;  // (from the original)
    r0 = call_002f74e0(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 != 0) {
        r0 = r4;
        r0 = call_005b4018(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        if (r0 == 0) {
            r0 = 1u;
            guest::cpu()->r[13] += 8u;
            guest::cpu()->r[1] = r1;
            return r0;
        }
    }
    r0 = call_002f74c8(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r0 = call_004e7344(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 == 0) {
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r0 = *gptr<u32>(0x95c6d0u);  // (from the original)
    if (r0 == 0) {
        r0 = 1u;
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r0 = r0 + 0x10u;  // (from the original)
    r0 = call_0076e7c8(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 == 2u) {
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

}  // namespace d_0069335c
GUEST_EXPORT(0x0069335c, d_0069335c::f_0069335c);

// f_006934a0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006934a0 {

inline constexpr guest::Function<0x002f74c8, u32(u32, u32, u32, u32)> call_002f74c8;  // (from the original)
inline constexpr guest::Function<0x002f74e0, u32(u32, u32, u32, u32)> call_002f74e0;  // (from the original)
inline constexpr guest::Function<0x005b4954, u32(u32, u32, u32, u32)> call_005b4954;  // (from the original)

u32 f_006934a0(u32 r0, u32 r1) {
    u32 r4 = guest::cpu()->r[4];
    guest::cpu()->r[13] -= 8u;
    r0 = call_002f74c8(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r4 = r0;
    r1 = r0;
    r0 = 0x80u;  // (from the original)
    r0 = call_002f74e0(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 != 0) {
        r0 = 1u;
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r1 = r4;
    r0 = 0x40u;  // (from the original)
    r0 = call_002f74e0(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 != 0) {
        r0 = 1u;
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r1 = r4;
    r0 = 0x2000u;  // (from the original)
    r0 = call_002f74e0(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 != 0) {
        r0 = 1u;
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r1 = r4;
    r0 = 0x4000u;  // (from the original)
    r0 = call_002f74e0(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 != 0) {
        r0 = 1u;
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r1 = r4;
    r0 = 0x20000000u;  // (from the original)
    r0 = call_002f74e0(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 != 0) {
        r0 = 1u;
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r0 = r4;
    r0 = call_005b4954(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
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

}  // namespace d_006934a0
GUEST_EXPORT(0x006934a0, d_006934a0::f_006934a0);

// f_00693a64: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00693a64 {

inline constexpr guest::Function<0x006935a8, u32(u32, u32, u32, u32)> call_006935a8;  // (from the original)

u32 f_00693a64(u32 r0_unused, u32 r1, u32 r2, u32 r3) {
    u32 r13 = guest::cpu()->r[13];
    u32 zf = 0;
    *gptr<u32>(r13 + 0xfffffff8u) = u32(r3);  // (from the original)
    r13 = r13 - 8;
    zf = r2 == 0;
    *gptr<u32>(r13) = u32(0u);
    r2 = r1;
    if (zf) {
        r1 = 0x33a8u;  // (from the original)
    } else {
        r1 = 0x33a9u;  // (from the original)
    }
    r3 = 1u;
    guest::cpu()->r[13] = r13;
    call_006935a8(guest::cpu()->r[0], r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r13 = r13 + 8;
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return guest::cpu()->r[0];
}

}  // namespace d_00693a64
GUEST_EXPORT(0x00693a64, d_00693a64::f_00693a64);

// f_00693cc8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00693cc8 {


u32 f_00693cc8(u32 r0) {
    u32 r1 = 0;
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 4u;
    r1 = 0u;
    if (r0 == 0) {
        r0 = r1;
        r13 = r13 + 4u;
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    if (r0 != 1u) {
        if (r0 == 2u) {
            r0 = r1 - 0x8000u;  // (from the original)
            r0 = uxth(r0);
            r13 = r13 + 4u;
            guest::cpu()->r[1] = r1;
            guest::cpu()->r[13] = r13;
            return r0;
        }
        if (r0 == 3u) {
            r0 = 0xffffc000u;  // (from the original)
            r0 = uxth(r0);
            r13 = r13 + 4u;
            guest::cpu()->r[1] = r1;
            guest::cpu()->r[13] = r13;
            return r0;
        }
        r0 = r1;
        r13 = r13 + 4u;
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    r1 = 0x4000u;  // (from the original)
    *gptr<u16>(r13) = u16(r1);
    r0 = r1;
    r13 = r13 + 4u;
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_00693cc8
GUEST_EXPORT(0x00693cc8, d_00693cc8::f_00693cc8);

// f_0069438c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0069438c {

struct __attribute__((packed)) Object_0069438c_0 {
    u8 unknown_0[0x2c];  // (not used here)
    u32 word_2c;
};
GUEST_OFFSET(Object_0069438c_0, word_2c, 0x2c);  // (from the original)

inline constexpr guest::Function<0x004edd20, u32(u32, u32, u32, u32)> call_004edd20;  // (from the original)
inline constexpr guest::Function<0x004f1294, u32(u32, u32, u32, u32)> call_004f1294;  // (from the original)
inline constexpr guest::Function<0x00745bd8, u32(u32, u32, u32, u32)> call_00745bd8;  // (from the original)
inline constexpr guest::Function<0x007460e8, u32(u32, u32, u32, u32)> call_007460e8;  // (from the original)

u32 f_0069438c(gptr<Object_0069438c_0> arg0, u32 r1, u32 r2) {
    u32 r0 = arg0.addr();
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r13 = guest::cpu()->r[13];
    r4 = r0;
    r0 = arg0->word_2c;
    r13 = r13 - 0x18u;  // (from the original)
    r5 = r1;
    if (r0 == 0) {
        goto L_69440c;
    }
    if (r0 != r2) {
        goto L_69440c;
    }
    r0 = r4;
    guest::cpu()->r[13] = r13;
    r0 = call_004f1294(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r0 = r4;
    guest::cpu()->r[13] = r13;
    r0 = call_004edd20(r0, r1, r2, guest::cpu()->r[3]);
    r2 = 0u;
    r1 = r13;
    r0 = r4;
    guest::cpu()->r[13] = r13;
    r0 = call_00745bd8(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    *gptr<u32>(r5) = u32(*gptr<u32>(r13));
    *gptr<u32>(r5 + 4u) = u32(*gptr<u32>(r13 + 4u));
    *gptr<u32>(r5 + 8u) = u32(*gptr<u32>(r13 + 8u));
    r0 = r4 + 0xcu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_007460e8(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 == 0) {
        r13 = r13 + 0x18u;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    *gptr<u32>(r4 + 0x2cu) = u32(0u);  // (from the original)
    r0 = 1u;
    r13 = r13 + 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
L_69440c:;
    r0 = 0u;
    r13 = r13 + 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_0069438c
GUEST_EXPORT(0x0069438c, d_0069438c::f_0069438c);

// f_00694918: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00694918 {

inline constexpr guest::Function<0x004b4fc0, u32(u32, u32, u32, u32)> call_004b4fc0;  // (from the original)
inline constexpr guest::Function<0x00568984, u32(u32, u32, u32, u32)> call_00568984;  // (from the original)
inline constexpr guest::Function<0x0081b218, u32(u32, u32, u32, u32)> call_0081b218;  // (from the original)

u32 f_00694918(u32 r0, u32 r1, u32 r2_unused, u32 r3) {
    u32 r2 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r4 = r0;
    r5 = r1;
    r1 = 0x84817cu;  // (from the original)
    r2 = 1u;
    r0 = r0 + 0x280u;  // (from the original)
    r0 = call_004b4fc0(r0, r1, r2, r3);
    r2 = r0;
    r3 = 0u;
    r1 = r4 + 0x540u;  // (from the original)
    r0 = r4 + 0x280u;  // (from the original)
    r0 = call_00568984(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    r1 = 0x84817cu;  // (from the original)
    r2 = 1u;
    r0 = r4 + 0x280u;  // (from the original)
    r0 = call_004b4fc0(r0, r1, r2, r3);
    r2 = r0;
    r3 = 0u;
    r1 = r4 + 0x568u;  // (from the original)
    r0 = r4 + 0x280u;  // (from the original)
    r0 = call_00568984(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    *gptr<u32>(r4 + 0x614u) = u32(r5);  // (from the original)
    r1 = *gptr<u32>(0x848130u);  // (from the original)
    r2 = *gptr<u32>(0x848130u + 4);  // (from the original)
    r0 = r4 + 0x14u;  // (from the original)
    r0 = call_0081b218(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_00694918
GUEST_EXPORT(0x00694918, d_00694918::f_00694918);

// f_00694b54: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00694b54 {

struct __attribute__((packed)) Object_00694b54_0 {
    u8 unknown_0[0x611];  // (not used here)
    u8 byte_611;
    u8 byte_612;
    u8 unknown_613[0x1];  // (not used here)
    u32 word_614;
};
GUEST_OFFSET(Object_00694b54_0, byte_611, 0x611);  // (from the original)
GUEST_OFFSET(Object_00694b54_0, byte_612, 0x612);  // (from the original)
GUEST_OFFSET(Object_00694b54_0, word_614, 0x614);  // (from the original)

inline constexpr guest::Function<0x004b4fc0, u32(u32, u32, u32, u32)> call_004b4fc0;  // (from the original)
inline constexpr guest::Function<0x00568984, u32(u32, u32, u32, u32)> call_00568984;  // (from the original)
inline constexpr guest::Function<0x0081b218, u32(u32, u32, u32, u32)> call_0081b218;  // (from the original)

u32 f_00694b54(gptr<Object_00694b54_0> arg0, u32 r1_unused, u32 r2_unused, u32 r3) {
    u32 r0 = arg0.addr();
    u32 r1 = 0;
    u32 r2 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r1 = 0u;
    arg0->byte_612 = u8(r1);
    arg0->byte_611 = u8(r1);
    r5 = ~0u;
    r4 = r0;
    arg0->word_614 = u32(r5);
    r1 = 0x84817cu;  // (from the original)
    r2 = 1u;
    r0 = r0 + 0x280u;  // (from the original)
    r0 = call_004b4fc0(r0, r1, r2, r3);
    r2 = r0;
    r3 = 0u;
    r1 = r4 + 0x540u;  // (from the original)
    r0 = r4 + 0x280u;  // (from the original)
    r0 = call_00568984(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    r1 = 0x84817cu;  // (from the original)
    r2 = 1u;
    r0 = r4 + 0x280u;  // (from the original)
    r0 = call_004b4fc0(r0, r1, r2, r3);
    r2 = r0;
    r3 = 0u;
    r1 = r4 + 0x568u;  // (from the original)
    r0 = r4 + 0x280u;  // (from the original)
    r0 = call_00568984(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    *gptr<u32>(r4 + 0x614u) = u32(r5);  // (from the original)
    r1 = *gptr<u32>(0x848130u);  // (from the original)
    r2 = *gptr<u32>(0x848130u + 4);  // (from the original)
    r0 = r4 + 0x14u;  // (from the original)
    r0 = call_0081b218(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_00694b54
GUEST_EXPORT(0x00694b54, d_00694b54::f_00694b54);

// f_006953b8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006953b8 {

struct __attribute__((packed)) Object_006953b8_0 {
    u8 unknown_0[0x611];  // (not used here)
    u8 byte_611;
    u8 unknown_612[0x6];  // (not used here)
    u8 byte_618;
};
GUEST_OFFSET(Object_006953b8_0, byte_611, 0x611);  // (from the original)
GUEST_OFFSET(Object_006953b8_0, byte_618, 0x618);  // (from the original)

inline constexpr guest::Function<0x0081b218, u32(u32, u32, u32, u32)> call_0081b218;  // (from the original)

u32 f_006953b8(gptr<Object_006953b8_0> arg0, u32 r1, u32 r2) {
    u32 ea = 0;
    u32 r0 = arg0.addr();
    u32 r3 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r13 = guest::cpu()->r[13];
    u32 r14 = guest::cpu()->r[14];
    r3 = u32(s32(s8(arg0->byte_611)));
    if (r3 == r1) {
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[4] = r4;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    ea = r13 - 8;
    *gptr<u32>(ea) = u32(r4);
    *gptr<u32>(ea + 4) = u32(r14);
    r13 = r13 - 8;
    arg0->byte_611 = u8(r1);
    arg0->byte_618 = u8(r2);
    r0 = r0 + 0x14u;  // (from the original)
    r1 = *gptr<u32>(0x848128u);  // (from the original)
    r2 = *gptr<u32>(0x848128u + 4);  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0081b218(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    ea = r13;
    r13 = r13 + 8;
    r4 = *gptr<u32>(ea);
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[4] = r4;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_006953b8
GUEST_EXPORT(0x006953b8, d_006953b8::f_006953b8);

// f_00695584: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00695584 {

inline constexpr guest::Function<0x0057b9dc, u32(u32, u32, u32, u32)> call_0057b9dc;  // (from the original)

u32 f_00695584(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = guest::cpu()->r[4];
    u32 r12 = 0;
    u32 r13 = guest::cpu()->r[13];
    *gptr<u32>(r13 + 0xfffffff0u) = u32(r3);  // (from the original)
    r13 = r13 - 0x10;  // (from the original)
    r4 = r0;
    r12 = r1;
    r1 = r4;
    *gptr<u32>(r13) = u32(*gptr<u32>(r13 + 0x10u));  // (from the original)
    r0 = r12;
    guest::cpu()->r[13] = r13;
    r0 = call_0057b9dc(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    if (r0 == 0) {
        r13 = r13 + 0x10;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    r1 = r4 + 0xeb54u;  // (from the original)
    r2 = *gptr<u32>(r1 + 4u);
    if (r2 != 0) {
        *gptr<u32>(r2) = u32(r0);
    }
    *gptr<u32>(r1 + 4u) = u32(*gptr<u32>(r1 + 4u) + 4u);
    r13 = r13 + 0x10;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_00695584
GUEST_EXPORT(0x00695584, d_00695584::f_00695584);

// f_00695ce4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00695ce4 {

struct __attribute__((packed)) Object_00695ce4_1 {
    u8 unknown_0[0x2];  // (not used here)
    u16 half_2;
    u32 word_4;
};
GUEST_OFFSET(Object_00695ce4_1, half_2, 0x2);  // (from the original)
GUEST_OFFSET(Object_00695ce4_1, word_4, 0x4);  // (from the original)

inline constexpr guest::Function<0x002f74c8, u32(u32, u32, u32, u32)> call_002f74c8;  // (from the original)
inline constexpr guest::Function<0x002f74e0, u32(u32, u32, u32, u32)> call_002f74e0;  // (from the original)
inline constexpr guest::Function<0x0057b9dc, u32(u32, u32, u32, u32)> call_0057b9dc;  // (from the original)
inline constexpr guest::Function<0x0060e77c, u32(u32, u32, u32, u32)> call_0060e77c;  // (from the original)
inline constexpr guest::Function<0x006ee628, u32(u32, u32, u32, u32)> call_006ee628;  // (from the original)

u32 f_00695ce4(u32 r0, gptr<Object_00695ce4_1> arg1, float S0) {
    u32 res = 0;
    u32 v = 0;
    u32 r1 = arg1.addr();
    u32 r2 = 0;
    u32 r3 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r9 = guest::cpu()->r[9];
    u32 r13 = guest::cpu()->r[13];
    u32 nf = 0;
    u32 zf = 0;
    u32 vf = 0;
    r6 = r1;
    r13 = r13 - 0x38u;  // (from the original)
    r8 = r0;
    if (r1 == 0) {
        goto L_695ea8;
    }
    r3 = u32(arg1->half_2);
    r2 = arg1->word_4;
    r4 = 0u;
    res = r3;
    r5 = r4;
    r0 = r4;
    if (u32(res == 0) || res >> 0x1f != (r3 & (r3 ^ res)) >> 0x1f) {  // (from the original)
        goto L_695d3c;
    }
L_695d14:;
    r1 = u32(*gptr<u8>(r2 + (r0 << 5) + 0x18u));  // (from the original)
    if (r1 == 0) {
        r4 = r4 + 1u;
        goto L_695d30;
    }
    if (r1 == 1u) {
        r5 = r5 + 1u;
    }
L_695d30:;
    r0 = r0 + 1u;
    res = r3 - r0;
    if (!u32(res == 0) && res >> 0x1f == ((r3 ^ r0) & (r3 ^ res)) >> 0x1f) {  // (from the original)
        guest::preempt();
        goto L_695d14;
    }
L_695d3c:;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    r0 = call_002f74c8(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
    r7 = r0;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    r0 = call_002f74c8(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
    r1 = r0;
    r0 = 0x400000u;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    r0 = call_002f74e0(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
    if (r0 != 0) {
        guest::cpu()->r[13] = r13;
        guest::cpu()->s[0] = S0;
        r0 = call_002f74c8(r0, r1, r2, r3);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        S0 = guest::cpu()->s[0];
        r1 = r0;
        r0 = 0x10u;  // (from the original)
        guest::cpu()->r[13] = r13;
        guest::cpu()->s[0] = S0;
        r0 = call_002f74e0(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r3 = guest::cpu()->r[3];
        S0 = guest::cpu()->s[0];
        if (r0 == 0) {
            r5 = r5 + 1u;
        }
    }
    zf = r7 == 0x9eu;  // (from the original)
    r7 = 0x952c3cu;  // (from the original)
    if (zf) {
        r5 = r5 + 2u;
        r4 = r4 + 1u;
    }
    if (*gptr<u32>(0x710cu + r8) < r4) {  // (from the original)
        r1 = *gptr<u32>(r7);
        r2 = r4;
        r0 = r8 + 0x14u;  // (from the original)
        guest::cpu()->r[13] = r13;
        guest::cpu()->s[0] = S0;
        r0 = call_0060e77c(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r3 = guest::cpu()->r[3];
        S0 = guest::cpu()->s[0];
        if (r0 == 0) {
            goto L_695ea8;
        }
    }
    if (*gptr<u32>(0xe3e8u + r8) < r5) {  // (from the original)
        r1 = *gptr<u32>(r7);
        r2 = r5;
        r0 = r8 + 0x72f0u;  // (from the original)
        guest::cpu()->r[13] = r13;
        guest::cpu()->s[0] = S0;
        r0 = call_006ee628(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        S0 = guest::cpu()->s[0];
        if (r0 == 0) {
            goto L_695ea8;
        }
    }
    r0 = u32(*gptr<u16>(r6 + 2u));
    r7 = *gptr<u32>(r6 + 4u);
    r4 = 0u;
    nf = r0 >> 0x1f;  // (from the original)
    zf = r0 == 0;
    vf = 0u;
    if (!zf && nf == vf) {
        r9 = 0x887402u;  // (from the original)
        r5 = r8 + 0xeb54u;  // (from the original)
    }
    if (zf || nf != vf) {
        goto L_695e9c;
    }
L_695e0c:;
    r2 = r7 + (r4 << 5);
    if (u32(*gptr<u16>(r2)) == u32(*gptr<u16>(r9))) {
        goto L_695eb4;
    }
    r1 = *gptr<u32>(r2 + 0xcu);  // (from the original)
    S0 = std::bit_cast<float>(*gptr<u32>(r2 + 8u));
    *gptr<u32>(r13 + 4u) = u32(*gptr<u32>(r2 + 4u));
    *gptr<u32>(r13 + 8u) = u32(std::bit_cast<u32>(S0));
    *gptr<u32>(r13 + 0xcu) = u32(r1);  // (from the original)
    r3 = r13 + 4u;
    *gptr<u16>(r13 + 0x10u) = u16(u32(*gptr<u16>(r2 + 0x10u)));  // (from the original)
    r1 = r8;
    *gptr<u16>(r13 + 0x12u) = u16(u32(*gptr<u16>(r2 + 0x12u)));  // (from the original)
    *gptr<u16>(r13 + 0x14u) = u16(u32(*gptr<u16>(r2 + 0x14u)));  // (from the original)
    v = *gptr<u16>(r2);
    r2 = r2 + 0x18u;  // (from the original)
    r0 = v;
    *gptr<u32>(r13) = u32(r13 + 0x10u);  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    r0 = call_0057b9dc(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    S0 = guest::cpu()->s[0];
    if (r0 == 0) {
        goto L_695ea0;
    }
    r1 = *gptr<u32>(r5 + 4u);
    if (r1 != 0) {
        *gptr<u32>(r1) = u32(r0);
    }
L_695e80:;
    r4 = r4 + 1u;
    r1 = *gptr<u32>(r5 + 4u) + 4u;
    *gptr<u32>(r5 + 4u) = u32(r1);
    r0 = u32(*gptr<u16>(r6 + 2u));
    res = r0 - r4;
    if (!u32(res == 0) && res >> 0x1f == ((r0 ^ r4) & (r0 ^ res)) >> 0x1f) {  // (from the original)
        guest::preempt();
        goto L_695e0c;
    }
L_695e9c:;
    r0 = 1u;
L_695ea0:;
    r13 = r13 + 0x38u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    return r0;
L_695ea8:;
    r0 = 0u;
    r13 = r13 + 0x38u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    return r0;
L_695eb4:;
    r0 = *gptr<u32>(r5 + 4u);
    r1 = 0u;
    if (r0 != 0) {
        *gptr<u32>(r0) = u32(r1);
    }
    guest::preempt();
    goto L_695e80;
}

}  // namespace d_00695ce4
GUEST_EXPORT(0x00695ce4, d_00695ce4::f_00695ce4);

// f_00697e88: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00697e88 {

struct __attribute__((packed)) Object_00697e88_0 {
    u8 unknown_0[0xecac];  // (not used here)
    u32 word_ecac;
    u32 word_ecb0;
};
GUEST_OFFSET(Object_00697e88_0, word_ecac, 0xecac);  // (from the original)
GUEST_OFFSET(Object_00697e88_0, word_ecb0, 0xecb0);  // (from the original)


u32 f_00697e88(gptr<Object_00697e88_0> arg0, u32 r1, float S0, float S1) {
    u32 r0 = arg0.addr();
    u32 r2 = 0;
    u32 r3 = 0;
    float S2 = 0;
    r0 = r0 + 0xecacu;  // (from the original)
    r3 = arg0->word_ecb0;
    r2 = arg0->word_ecac;
    if (r2 == r3) {
        r0 = 0u;
        guest::cpu()->r[1] = r1;
        guest::cpu()->s[0] = S0;
        guest::cpu()->s[1] = S1;
        return r0;
    }
L_697ea8:;
    if (*gptr<u32>(r2) != r1) {
        goto L_697eec;
    }
    r1 = r3 - 0xcu;  // (from the original)
    *gptr<u32>(r0 + 4u) = u32(r1);
    if (r1 == r2) {
        r0 = 1u;
        guest::cpu()->r[1] = r1;
        guest::cpu()->s[0] = S0;
        guest::cpu()->s[1] = S1;
        return r0;
    }
    do {
L_697ec4:;
        r1 = r2 + 0xcu;  // (from the original)
        S0 = std::bit_cast<float>(*gptr<u32>(r1));
        S1 = std::bit_cast<float>(*gptr<u32>(r1 + 4));
        S2 = std::bit_cast<float>(*gptr<u32>(r1 + 8));
        r1 = r2;
        r2 = r2 + 0xcu;  // (from the original)
        *gptr<u32>(r1) = u32(std::bit_cast<u32>(S0));
        *gptr<u32>(r1 + 4) = u32(std::bit_cast<u32>(S1));
        *gptr<u32>(r1 + 8) = u32(std::bit_cast<u32>(S2));
        r1 = *gptr<u32>(r0 + 4u);
        guest::preempt();
    } while (r1 != r2);
    r0 = 1u;
    guest::cpu()->r[1] = r1;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    return r0;
L_697eec:;
    r2 = r2 + 0xcu;  // (from the original)
    if (r2 != r3) {
        guest::preempt();
        goto L_697ea8;
    }
    r0 = 0u;
    guest::cpu()->r[1] = r1;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    return r0;
}

}  // namespace d_00697e88
GUEST_EXPORT(0x00697e88, d_00697e88::f_00697e88);

// f_00697f60: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00697f60 {

inline constexpr guest::Function<0x0014fd9c, u32(u32, u32, u32, u32)> call_0014fd9c;  // (from the original)
inline constexpr guest::Function<0x0014fda4, u32(u32, u32, u32, u32)> call_0014fda4;  // (from the original)
inline constexpr guest::Function<0x006dccb4, u32(u32, u32, u32, u32)> call_006dccb4;  // (from the original)

u32 f_00697f60(u32 r0, u32 r1, u32 r2) {
    u32 r3 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    r3 = r0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r4 = r1;
    r5 = r2;
    r0 = u32(*gptr<u8>(0x9506b0u));  // (from the original)
    if (r0 != 0xffu) {  // (from the original)
        goto L_697fc0;
    }
    r0 = *gptr<u32>(0x9506b4u);  // (from the original)
    if (r0 == 0) {
        goto L_697fc0;
    }
    r1 = r3;
    r0 = call_006dccb4(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r6 = r0;
    if (r0 == 0) {
        goto L_697fc0;
    }
    r1 = r4;
    r0 = call_0014fd9c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r5 != 0) {
        goto L_697fc0;
    }
    r1 = r4 ^ 1u;
    r0 = r6;
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    return call_0014fda4(r0, r1, r2, r3);
L_697fc0:;
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_00697f60
GUEST_EXPORT(0x00697f60, d_00697f60::f_00697f60);

// f_00698ac0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00698ac0 {

inline constexpr guest::Function<0x002fae84, u32(u32, u32, u32, u32)> call_002fae84;  // (from the original)
inline constexpr guest::Function<0x002fb328, u32(u32, u32, u32, u32)> call_002fb328;  // (from the original)
inline constexpr guest::Function<0x002fb94c, u32(u32, u32, u32, u32)> call_002fb94c;  // (from the original)
inline constexpr guest::Function<0x002fdf10, u32(u32, u32, u32, u32)> call_002fdf10;  // (from the original)
inline constexpr guest::Function<0x00300904, u32(u32, u32, u32, u32)> call_00300904;  // (from the original)

u32 f_00698ac0(u32 r0, u32 r1) {
    u32 res = 0;
    u32 r4 = guest::cpu()->r[4];
    guest::cpu()->r[13] -= 8u;
    r0 = call_002fb94c(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r4 = 0x70e62u;  // (from the original)
    if (r0 != 0) {
        r1 = u32(*gptr<u8>(0x8aa3u + r0));  // (from the original)
        if ((r1 & 8u) != 0) {
            r0 = call_002fae84(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
            r0 = r0 + r4;
            r1 = u32(*gptr<u8>(r0 + 9u)) | 2u;
            *gptr<u8>(r0 + 9u) = u8(r1);
            r0 = 0u;
            guest::cpu()->r[13] += 8u;
            guest::cpu()->r[1] = r1;
            return r0;
        }
        res = u32(*gptr<u8>(r0 + 0x5701u)) << 0x1e;  // (from the original)
        if (!(res >> 0x1f)) {  // (from the original)
            r0 = 0u;
            guest::cpu()->r[13] += 8u;
            guest::cpu()->r[1] = r1;
            return r0;
        }
    }
    r0 = 0xdu;  // (from the original)
    r0 = call_002fdf10(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 != 0) {
        r0 = 0u;
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r0 = call_002fb328(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r0 = u32(*gptr<u8>(r0 + 0x80u + r4 + 9u));  // (from the original)
    if ((r0 & 1u) == 0) {
        r0 = 0u;
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r0 = call_002fb328(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r0 = u32(*gptr<u8>(r0 + 0x80u + r4 + 9u));  // (from the original)
    if ((r0 & 2u) != 0) {
        r0 = 0u;
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r0 = call_00300904(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
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

}  // namespace d_00698ac0
GUEST_EXPORT(0x00698ac0, d_00698ac0::f_00698ac0);

// f_0069a214: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0069a214 {

inline constexpr guest::Function<0x001139fd, u32(u32, u32, u32, u32)> call_001139fc;  // (from the original)
inline constexpr guest::Function<0x00119715, u32(u32, u32, u32, u32)> call_00119714;  // (from the original)
inline constexpr guest::Function<0x0014fd9c, u32(u32, u32, u32, u32)> call_0014fd9c;  // (from the original)
inline constexpr guest::Function<0x0014fda4, u32(u32, u32, u32, u32)> call_0014fda4;  // (from the original)
inline constexpr guest::Function<0x002f74c8, u32(u32, u32, u32, u32)> call_002f74c8;  // (from the original)
inline constexpr guest::Function<0x002f74e0, u32(u32, u32, u32, u32)> call_002f74e0;  // (from the original)
inline constexpr guest::Function<0x002fae84, u32(u32, u32, u32, u32)> call_002fae84;  // (from the original)
inline constexpr guest::Function<0x002fb310, u32(u32, u32, u32, u32)> call_002fb310;  // (from the original)
inline constexpr guest::Function<0x003058c9, u32(u32, u32, u32, u32)> call_003058c8;  // (from the original)
inline constexpr guest::Function<0x00309ac9, u32(u32, u32, u32, u32)> call_00309ac8;  // (from the original)
inline constexpr guest::Function<0x003170f8, u32(u32, u32, u32, u32)> call_003170f8;  // (from the original)
inline constexpr guest::Function<0x0052c878, u32(u32, u32, u32, u32)> call_0052c878;  // (from the original)
inline constexpr guest::Function<0x006dccb4, u32(u32, u32, u32, u32)> call_006dccb4;  // (from the original)
inline constexpr guest::Function<0x007d1090, u32(u32, u32, u32, u32)> call_007d1090;  // (from the original)

u32 f_0069a214(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r9 = guest::cpu()->r[9];
    u32 r13 = guest::cpu()->r[13];
    *gptr<u32>(r13 + 0xffffffe0u) = u32(r3);  // (from the original)
    r13 = r13 - 0x20;  // (from the original)
    r4 = r0;
    guest::cpu()->r[13] = r13;
    r0 = call_002f74c8(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = r0;
    r0 = 0x20u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002f74e0(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        goto L_69a394;
    }
    r1 = 0u;
    r0 = 3u;
    guest::cpu()->r[13] = r13;
    r0 = call_003170f8(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 != 0) {
        goto L_69a394;
    }
    guest::cpu()->r[13] = r13;
    r0 = call_002fae84(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0 = call_002fb310(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r4 = r4 + 0xf000u;  // (from the original)
    r7 = r0 + 4u;
    r1 = *gptr<u32>(r4 + 0x120u);  // (from the original)
    r0 = r7;
    guest::cpu()->r[13] = r13;
    r0 = call_003058c8(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r5 = r0;
    if (r0 == 0) {
        goto L_69a394;
    }
    r8 = 0x9506b0u;  // (from the original)
    r0 = u32(*gptr<u8>(r8));
    if (r0 != 0xffu) {  // (from the original)
        goto L_69a394;
    }
    r9 = 0x9506b4u;  // (from the original)
    r0 = *gptr<u32>(r9);
    if (r0 == 0) {
        goto L_69a394;
    }
    r1 = *gptr<u32>(r4 + 0x120u);  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_006dccb4(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r6 = r0;
    guest::cpu()->r[13] = r13;
    r0 = call_0052c878(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 == r6) {
        goto L_69a394;
    }
    r0 = u32(*gptr<u8>(0x250fu + r5));  // (from the original)
    if (r0 != 2u) {
        if (r0 != 0x17u) {  // (from the original)
            goto L_69a394;
        }
        r1 = 0u;
        r0 = r5;
        guest::cpu()->r[13] = r13;
        r0 = call_00309ac8(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        if (r0 != 0) {
            goto L_69a394;
        }
        r1 = 2u;
        r0 = r5;
        guest::cpu()->r[13] = r13;
        r0 = call_001139fc(r0, r1, r2, r3);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r1 = *gptr<u32>(r4 + 0x120u);  // (from the original)
        r6 = 0u;
        if (u32(*gptr<u8>(r8)) != 0xffu) {  // (from the original)
            goto L_69a3c8;
        }
        goto L_69a398;
    }
    r1 = 0u;
    r0 = r5;
    guest::cpu()->r[13] = r13;
    r0 = call_00309ac8(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        goto L_69a394;
    }
    r1 = *gptr<u32>(r4 + 0x120u);  // (from the original)
    r2 = 0u;
    r0 = r7;
    guest::cpu()->r[13] = r13;
    r0 = call_00119714(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 != 0) {
        goto L_69a394;
    }
    r1 = 0x17u;  // (from the original)
    r0 = r5;
    guest::cpu()->r[13] = r13;
    r0 = call_001139fc(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = *gptr<u32>(r4 + 0x120u);  // (from the original)
    r6 = 1u;
    if (u32(*gptr<u8>(r8)) != 0xffu) {  // (from the original)
        goto L_69a378;
    }
    r0 = *gptr<u32>(r9);
    if (r0 == 0) {
        goto L_69a378;
    }
    guest::cpu()->r[13] = r13;
    r0 = call_006dccb4(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r5 = r0;
    if (r0 == 0) {
        goto L_69a378;
    }
    r1 = r6;
    guest::cpu()->r[13] = r13;
    r0 = call_0014fd9c(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = 0u;
    r0 = r5;
    guest::cpu()->r[13] = r13;
    r0 = call_0014fda4(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
L_69a378:;
    *gptr<u8>(r13) = u8(*gptr<u32>(r4 + 0x120u));  // (from the original)
    *gptr<u8>(r13 + 1u) = u8(0u);
    r1 = r13;
    r0 = 4u;
    guest::cpu()->r[13] = r13;
    r0 = call_007d1090(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
L_69a394:;
    r13 = r13 + 0x20;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
L_69a398:;
    r0 = *gptr<u32>(r9);
    if (r0 == 0) {
        goto L_69a3c8;
    }
    guest::cpu()->r[13] = r13;
    r0 = call_006dccb4(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r5 = r0;
    if (r0 == 0) {
        goto L_69a3c8;
    }
    r1 = r6;
    guest::cpu()->r[13] = r13;
    r0 = call_0014fd9c(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = 1u;
    r0 = r5;
    guest::cpu()->r[13] = r13;
    r0 = call_0014fda4(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
L_69a3c8:;
    *gptr<u8>(r13) = u8(*gptr<u32>(r4 + 0x120u));  // (from the original)
    *gptr<u8>(r13 + 1u) = u8(1u);
    r1 = r13;
    r0 = 4u;
    guest::cpu()->r[13] = r13;
    r0 = call_007d1090(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r13 = r13 + 0x20;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_0069a214
GUEST_EXPORT(0x0069a214, d_0069a214::f_0069a214);

// f_0069a91c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0069a91c {

struct __attribute__((packed)) Object_0069a91c_0 {
    u8 unknown_0[0xeb54];  // (not used here)
    u32 word_eb54;
    u32 word_eb58;
};
GUEST_OFFSET(Object_0069a91c_0, word_eb54, 0xeb54);  // (from the original)
GUEST_OFFSET(Object_0069a91c_0, word_eb58, 0xeb58);  // (from the original)


u32 f_0069a91c(gptr<Object_0069a91c_0> arg0, u32 r1) {
    u32 r0 = arg0.addr();
    u32 r2 = 0;
    u32 r3 = 0;
    r2 = arg0->word_eb54;
    r3 = arg0->word_eb58;
    if (r2 == r3) {
        r0 = 0u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
L_69a93c:;
    r0 = *gptr<u32>(r2);
    if (r0 == 0) {
        goto L_69a960;
    }
    if (u32(*gptr<u8>(r0 + 0x95eu)) != r1) {  // (from the original)
        goto L_69a960;
    }
    r1 = *gptr<u32>(*gptr<u32>(r0) + 0xf0u);  // (from the original)
    return guest::call_address<u32>(r1, r0, r1, r2, r3);
L_69a960:;
    r2 = r2 + 4u;
    if (r2 != r3) {
        guest::preempt();
        goto L_69a93c;
    }
    r0 = 0u;
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_0069a91c
GUEST_EXPORT(0x0069a91c, d_0069a91c::f_0069a91c);

// f_0069aec4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0069aec4 {

inline constexpr guest::Function<0x002fb378, u32(u32, u32, u32, u32)> call_002fb378;  // (from the original)
inline constexpr guest::Function<0x002fb94c, u32(u32, u32, u32, u32)> call_002fb94c;  // (from the original)
inline constexpr guest::Function<0x00300650, u32(u32, u32, u32, u32)> call_00300650;  // (from the original)
inline constexpr guest::Function<0x00300904, u32(u32, u32, u32, u32)> call_00300904;  // (from the original)
inline constexpr guest::Function<0x0062f950, u32(u32, u32, u32, u32)> call_0062f950;  // (from the original)
inline constexpr guest::Function<0x00716128, u32(u32, u32, u32, u32)> call_00716128;  // (from the original)
inline constexpr guest::Function<0x0074fff8, u32(u32, u32, u32, u32)> call_0074fff8;  // (from the original)

u32 f_0069aec4(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 res = 0;
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 0x20u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00300904(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 != 0) {
        r0 = 0u;
        r13 = r13 + 0x20u;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    r0 = r13 + 0xcu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00300650(r0, r1, r2, r3);
    r3 = r13 + 0xcu;  // (from the original)
    r1 = *gptr<u32>(r3 + 4);
    r2 = *gptr<u32>(r3 + 8);
    *gptr<u32>(r13) = u32(*gptr<u32>(r3));
    *gptr<u32>(r13 + 4) = u32(r1);
    *gptr<u32>(r13 + 8) = u32(r2);
    r1 = 0u;
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_0074fff8(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        r0 = 0u;
        r13 = r13 + 0x20u;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    guest::cpu()->r[13] = r13;
    r0 = call_002fb378(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = u32(s32(s8(*gptr<u8>(r0 + 7u))));
    if (s32(r0) < s32(6u)) {
        r0 = 0u;
        r13 = r13 + 0x20u;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    guest::cpu()->r[13] = r13;
    r0 = call_002fb378(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = u32(*gptr<u8>(r0 + 6u));
    if (r0 == 0) {
        guest::cpu()->r[13] = r13;
        r0 = call_002fb378(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r0 = u32(s32(s8(*gptr<u8>(r0 + 7u))));
        if (s32(r0) < s32(0xcu)) {  // (from the original)
            r0 = 0u;
            r13 = r13 + 0x20u;  // (from the original)
            guest::cpu()->r[1] = r1;
            guest::cpu()->r[13] = r13;
            return r0;
        }
    }
    guest::cpu()->r[13] = r13;
    r0 = call_0062f950(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 != 0) {
        r0 = 0u;
        r13 = r13 + 0x20u;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    guest::cpu()->r[13] = r13;
    r0 = call_002fb94c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        r0 = 1u;
        r13 = r13 + 0x20u;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    res = u32(*gptr<u8>(0x5701u + r0)) << 0x1e;  // (from the original)
    r1 = res;
    if (!(res >> 0x1f)) {  // (from the original)
        r0 = 0u;
        r13 = r13 + 0x20u;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    r0 = r0 + 0x55dcu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00716128(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    if (r0 == 0) {
        r13 = r13 + 0x20u;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    r0 = 1u;
    r13 = r13 + 0x20u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_0069aec4
GUEST_EXPORT(0x0069aec4, d_0069aec4::f_0069aec4);

// f_0069b0ac: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0069b0ac {

inline constexpr guest::Function<0x002f74c8, u32(u32, u32, u32, u32)> call_002f74c8;  // (from the original)
inline constexpr guest::Function<0x002f74e0, u32(u32, u32, u32, u32)> call_002f74e0;  // (from the original)
inline constexpr guest::Function<0x002fb94c, u32(u32, u32, u32, u32)> call_002fb94c;  // (from the original)
inline constexpr guest::Function<0x00307220, u32(u32, u32, u32, u32)> call_00307220;  // (from the original)
inline constexpr guest::Function<0x0057b9dc, u32(u32, u32, u32, u32)> call_0057b9dc;  // (from the original)
inline constexpr guest::Function<0x005c886c, u32(u32, u32, u32, u32)> call_005c886c;  // (from the original)
inline constexpr guest::Function<0x006a5f0c, u32(u32, u32, u32, u32)> call_006a5f0c;  // (from the original)
inline constexpr guest::Function<0x006a6dbc, u32(u32, u32, u32, u32)> call_006a6dbc;  // (from the original)
inline constexpr guest::Function<0x006cbbe4, u32(u32, u32, u32, u32)> call_006cbbe4;  // (from the original)
inline constexpr guest::Function<0x006fa76c, u32(u32, u32, u32, u32)> call_006fa76c;  // (from the original)

u32 f_0069b0ac(u32 r0, u32 r1, u32 r2, u32 r3, float S0, float S1, float S2, float S3) {
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
    r13 = r13 - 0x58u;  // (from the original)
    r4 = r0;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2;
    guest::cpu()->s[3] = S3;
    r0 = call_002f74c8(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    S2 = guest::cpu()->s[2];
    S3 = guest::cpu()->s[3];
    r1 = r0;
    r0 = 0x10u;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2;
    guest::cpu()->s[3] = S3;
    r0 = call_002f74e0(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    S2 = guest::cpu()->s[2];
    S3 = guest::cpu()->s[3];
    if (r0 != 0) {
        goto L_69b1fc;
    }
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2;
    guest::cpu()->s[3] = S3;
    r0 = call_002fb94c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r3 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    S2 = guest::cpu()->s[2];
    S3 = guest::cpu()->s[3];
    if (r0 == 0) {
        goto L_69b1fc;
    }
    r8 = 0x8c9f1cu;  // (from the original)
    r7 = 0x73u;  // (from the original)
    r1 = u32(*gptr<u8>(0x5704u + r0));  // (from the original)
    r9 = 0x7au;  // (from the original)
    r10 = 0x61u;  // (from the original)
    r5 = r4 + 0xeb54u;  // (from the original)
    res = r1 >> 7;
    r2 = res;
    if (res == 0) {
        goto L_69b204;
    }
    r0 = u32(*gptr<u8>(0x95013eu));  // (from the original)
    if (r0 == 0) {
        goto L_69b1fc;
    }
    r1 = r13 + 8u;
    r0 = r13 + 4u;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2;
    guest::cpu()->s[3] = S3;
    r0 = call_006fa76c(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    S2 = guest::cpu()->s[2];
    S3 = guest::cpu()->s[3];
    r1 = 0u;
    ea = r13 + 0x1cu;  // (from the original)
    *gptr<u16>(ea) = u16(r1);
    ea = r13 + 0x1eu;  // (from the original)
    *gptr<u16>(ea) = u16(0xffffc000u);  // (from the original)
    ea = r13 + 0x20u;  // (from the original)
    *gptr<u16>(ea) = u16(r1);
    ea = r13 + 4u;
    r1 = *gptr<u32>(ea);
    r2 = *gptr<u32>(ea + 4);
    r0 = r13 + 0x10u;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2;
    guest::cpu()->s[3] = S3;
    r0 = call_006a5f0c(r0, r1, r2, r3);
    S3 = guest::cpu()->s[3];
    S0 = std::bit_cast<float>(*gptr<u32>(r13 + 0x10u));  // (from the original)
    *gptr<u32>(r13 + 0x28u) = u32(*gptr<u32>(r13 + 0x14u));  // (from the original)
    S1 = std::bit_cast<float>(*gptr<u32>(r13 + 0x18u));  // (from the original)
    S2 = std::bit_cast<float>(*gptr<u32>(0x88129cu));  // (from the original)
    *gptr<u32>(r13 + 0x24u) = u32(std::bit_cast<u32>(S0 + S2));  // (from the original)
    S0 = S1 - std::bit_cast<float>(*gptr<u32>(0x8812a0u));  // (from the original)
    r3 = r13 + 0x24u;  // (from the original)
    *gptr<u32>(r13 + 0x2cu) = u32(std::bit_cast<u32>(S0));  // (from the original)
    r1 = u32(*gptr<u8>(r8));
    *gptr<u8>(r13 + 0x30u) = u8(1u);  // (from the original)
    r2 = r13 + 0x30u;  // (from the original)
    *gptr<u8>(r13 + 0x31u) = u8(0u);  // (from the original)
    *gptr<u32>(r13 + 0x34u) = u32((((r6 & ~0xffu | r7) & ~0xff00u | r9 << 8 & 0xff00u) & ~0xff0000u | r10 << 0x10 & 0xff0000u) & ~0xff000000u | r1 << 0x18);  // (from the original)
    r1 = r4;
    r0 = u32(*gptr<u16>(0x88729cu));  // (from the original)
    *gptr<u32>(r13) = u32(r13 + 0x1cu);  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2;
    guest::cpu()->s[3] = S3;
    r0 = call_0057b9dc(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    if (r0 == 0) {
        goto L_69b1fc;
    }
    r1 = *gptr<u32>(r5 + 4u);
    if (r1 != 0) {
        goto L_69b2b4;
    }
L_69b1f0:;
    r0 = *gptr<u32>(r5 + 4u) + 4u;
    *gptr<u32>(r5 + 4u) = u32(r0);
L_69b1fc:;
    r13 = r13 + 0x58u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    return r0;
L_69b204:;
    res = r1 << 0x1a;  // (from the original)
    r2 = res;
    if (!(res >> 0x1f)) {  // (from the original)
        goto L_69b2bc;
    }
    r2 = 6u;
    r1 = 0x3bu;  // (from the original)
    r0 = r13 + 0x18u;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2;
    guest::cpu()->s[3] = S3;
    r0 = call_006a6dbc(r0, r1, r2, r3);
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    S2 = guest::cpu()->s[2];
    S3 = guest::cpu()->s[3];
    r0 = 0u;
    *gptr<u16>(r13 + 4u) = u16(r0);
    *gptr<u16>(r13 + 6u) = u16(r0);
    *gptr<u16>(r13 + 8u) = u16(r0);
    r1 = ((r6 >> 0x10 << 0x10 | 0x72u | 0x63u << 8 & 0xff00u) & ~0xff0000u | 0x6fu << 0x10 & 0xff0000u) & ~0xff000000u | u32(*gptr<u8>(r8)) << 0x18;  // (from the original)
    *gptr<u8>(r13 + 0x10u) = u8(1u);  // (from the original)
    *gptr<u8>(r13 + 0x11u) = u8(0u);  // (from the original)
    *gptr<u32>(r13 + 0x14u) = u32(r1);  // (from the original)
    r2 = r13 + 0x10u;  // (from the original)
    r0 = u32(*gptr<u16>(0x887292u));  // (from the original)
    r3 = r13 + 0x18u;  // (from the original)
    r1 = r4;
    *gptr<u32>(r13) = u32(r13 + 4u);
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2;
    guest::cpu()->s[3] = S3;
    r0 = call_0057b9dc(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    if (r0 == 0) {
        guest::preempt();
        goto L_69b1fc;
    }
    r1 = *gptr<u32>(r5 + 4u);
    if (r1 == 0) {
        guest::preempt();
        goto L_69b1f0;
    }
L_69b2b4:;
    *gptr<u32>(r1) = u32(r0);
    guest::preempt();
    goto L_69b1f0;
L_69b2bc:;
    res = r1 << 0x19;  // (from the original)
    r1 = res;
    if (res >> 0x1f) {  // (from the original)
        guest::preempt();
        goto L_69b1fc;
    }
    res = u32(*gptr<u8>(r0 + 0x5700u)) << 0x1b;  // (from the original)
    r0 = res;
    if (!(res >> 0x1f)) {  // (from the original)
        guest::preempt();
        goto L_69b1fc;
    }
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2;
    guest::cpu()->s[3] = S3;
    r0 = call_006cbbe4(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    S2 = guest::cpu()->s[2];
    S3 = guest::cpu()->s[3];
    r1 = r0;
    r0 = r13 + 0x10u;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2;
    guest::cpu()->s[3] = S3;
    r0 = call_00307220(r0, r1, r2, r3);
    S3 = std::bit_cast<float>(*gptr<u32>(0x69b3e0u));  // (from the original)
    S1 = std::bit_cast<float>(*gptr<u32>(0x69b3e4u));  // (from the original)
    S2 = std::bit_cast<float>(*gptr<u32>(0x85f2ccu));  // (from the original)
    r1 = 0u;
    r3 = r13 + 0x10u;  // (from the original)
    *gptr<u32>(r13 + 0x18u) = u32(std::bit_cast<u32>(std::bit_cast<float>(*gptr<u32>(r13 + 0x18u)) + S2 * S3));  // (from the original)
    S0 = std::bit_cast<float>(*gptr<u32>(r13 + 0x10u)) + S2 * S1;  // (from the original)
    *gptr<u32>(r13 + 0x10u) = u32(std::bit_cast<u32>(S0));  // (from the original)
    *gptr<u16>(r13 + 4u) = u16(r1);
    *gptr<u16>(r13 + 8u) = u16(r1);
    *gptr<u16>(r13 + 6u) = u16(0xffff8000u);  // (from the original)
    r1 = (((r6 & ~0xffu | r7) & ~0xff00u | r9 << 8 & 0xff00u) & ~0xff0000u | r10 << 0x10 & 0xff0000u) & ~0xff000000u | u32(*gptr<u8>(r8)) << 0x18;  // (from the original)
    *gptr<u8>(r13 + 0x20u) = u8(1u);  // (from the original)
    *gptr<u8>(r13 + 0x21u) = u8(0u);  // (from the original)
    *gptr<u32>(r13 + 0x24u) = u32(r1);  // (from the original)
    r2 = r13 + 0x20u;  // (from the original)
    r1 = r4;
    r0 = u32(*gptr<u16>(0x88729au));  // (from the original)
    *gptr<u32>(r13) = u32(r13 + 4u);
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2;
    guest::cpu()->s[3] = S3;
    r0 = call_0057b9dc(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    S2 = guest::cpu()->s[2];
    S3 = guest::cpu()->s[3];
    if (r0 != 0) {
        r1 = *gptr<u32>(r5 + 4u);
        if (r1 != 0) {
            *gptr<u32>(r1) = u32(r0);
        }
        r0 = *gptr<u32>(r5 + 4u) + 4u;
        *gptr<u32>(r5 + 4u) = u32(r0);
    }
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2;
    guest::cpu()->s[3] = S3;
    r0 = call_005c886c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    r13 = r13 + 0x58u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    return r0;
}

}  // namespace d_0069b0ac
GUEST_EXPORT(0x0069b0ac, d_0069b0ac::f_0069b0ac);

// f_0069b3f0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0069b3f0 {

inline constexpr guest::Function<0x00106319, u32(u32, u32, u32, u32)> call_00106318;  // (from the original)
inline constexpr guest::Function<0x00307220, u32(u32, u32, u32, u32)> call_00307220;  // (from the original)
inline constexpr guest::Function<0x0057b9dc, u32(u32, u32, u32, u32)> call_0057b9dc;  // (from the original)

u32 f_0069b3f0(u32 r0, u32 r1, u32 r2, u32 r3, float S0, float S1, float S2) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r12 = 0;
    u32 r13 = guest::cpu()->r[13];
    u32 zf = 0;
    r4 = r0;
    r0 = 0xaaef18u;  // (from the original)
    r13 = r13 - 0x30u;  // (from the original)
    r5 = *gptr<u32>(r0 + 0x234u);  // (from the original)
    if (r5 == 0) {
        goto L_69b584;
    }
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2;
    r0 = call_00106318(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    S2 = guest::cpu()->s[2];
    r1 = r0;
    r0 = r13 + 4u;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2;
    r0 = call_00307220(r0, r1, r2, r3);
    S1 = std::bit_cast<float>(*gptr<u32>(0x69b590u));  // (from the original)
    S2 = std::bit_cast<float>(*gptr<u32>(0x69b594u));  // (from the original)
    r2 = 0u;
    r1 = 0x88725eu;  // (from the original)
    *gptr<u32>(r13 + 4u) = u32(std::bit_cast<u32>(std::bit_cast<float>(*gptr<u32>(r13 + 4u)) + S1));
    S0 = std::bit_cast<float>(*gptr<u32>(r13 + 0xcu)) + S2;  // (from the original)
    *gptr<u32>(r13 + 0xcu) = u32(std::bit_cast<u32>(S0));  // (from the original)
    *gptr<u16>(r13 + 0x10u) = u16(r2);  // (from the original)
    *gptr<u16>(r13 + 0x12u) = u16(0x4000u);  // (from the original)
    *gptr<u16>(r13 + 0x14u) = u16(r2);  // (from the original)
    r2 = 0x8c9f1cu;  // (from the original)
    r12 = u32(*gptr<u8>(r5 + 0x5700u)) & 0xfu;  // (from the original)
    zf = r12 == 3u;
    r6 = r12 & ~0xffu;  // (from the original)
    r0 = 0x6du;  // (from the original)
    r5 = r4 + 0xeb54u;  // (from the original)
    r12 = 0x6fu << 8;  // (from the original)
    if (zf) {
        goto L_69b500;
    }
    r3 = (((r0 | r6) & ~0xff00u | r12 & 0xff00u) & ~0xff0000u | 0x6cu << 0x10 & 0xff0000u) & ~0xff000000u | u32(*gptr<u8>(r2)) << 0x18;  // (from the original)
    *gptr<u8>(r13 + 0x18u) = u8(1u);  // (from the original)
    *gptr<u32>(r13 + 0x1cu) = u32(r3);  // (from the original)
    *gptr<u8>(r13 + 0x19u) = u8(0u);  // (from the original)
    r0 = u32(*gptr<u16>(r1));
    r2 = r13 + 0x18u;  // (from the original)
    r3 = r13 + 4u;
    r1 = r4;
    *gptr<u32>(r13) = u32(r13 + 0x10u);  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2;
    r0 = call_0057b9dc(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    if (r0 == 0) {
        goto L_69b584;
    }
    r1 = *gptr<u32>(r5 + 4u);
    if (r1 == 0) {
        goto L_69b578;
    }
L_69b4f8:;
    *gptr<u32>(r1) = u32(r0);
    goto L_69b578;
L_69b500:;
    r2 = u32(*gptr<u8>(r2));
    *gptr<u8>(r13 + 0x18u) = u8(1u);  // (from the original)
    *gptr<u32>(r13 + 0x1cu) = u32((((r0 | r6) & ~0xff00u | r12 & 0xff00u) & ~0xff0000u | 0x62u << 0x10 & 0xff0000u) & ~0xff000000u | r2 << 0x18);  // (from the original)
    *gptr<u8>(r13 + 0x19u) = u8(0u);  // (from the original)
    r0 = u32(*gptr<u16>(r1));
    r2 = r13 + 0x18u;  // (from the original)
    r3 = r13 + 4u;
    r1 = r4;
    *gptr<u32>(r13) = u32(r13 + 0x10u);  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2;
    r0 = call_0057b9dc(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    if (r0 == 0) {
        goto L_69b584;
    }
    r1 = *gptr<u32>(r5 + 4u);
    if (r1 != 0) {
        guest::preempt();
        goto L_69b4f8;
    }
L_69b578:;
    r0 = *gptr<u32>(r5 + 4u) + 4u;
    *gptr<u32>(r5 + 4u) = u32(r0);
L_69b584:;
    r13 = r13 + 0x30u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    return r0;
}

}  // namespace d_0069b3f0
GUEST_EXPORT(0x0069b3f0, d_0069b3f0::f_0069b3f0);

// f_0069c838: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0069c838 {

inline constexpr guest::Function<0x002fb94c, u32(u32, u32, u32, u32)> call_002fb94c;  // (from the original)
inline constexpr guest::Function<0x003188f0, u32(u32, u32, u32, u32)> call_003188f0;  // (from the original)

u32 f_0069c838(u32 r0) {
    u32 res = 0;
    u32 r4 = guest::cpu()->r[4];
    guest::cpu()->r[13] -= 8u;
    r0 = call_002fb94c(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    r4 = r0;
    r0 = call_003188f0(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    if (r0 != 0xeu) {  // (from the original)
        r0 = 0u;
        guest::cpu()->r[13] += 8u;
        return r0;
    }
    if (r4 != 0) {
        if ((u32(*gptr<u8>(0x8a6bu + r4)) & 1u) == 0) {  // (from the original)
            r0 = 1u;
            guest::cpu()->r[13] += 8u;
            return r0;
        }
    }
    res = u32(*gptr<u8>(r4 + 0x8f7du)) << 0x1d;  // (from the original)
    if (!(res >> 0x1f)) {  // (from the original)
        r0 = 0u;
        guest::cpu()->r[13] += 8u;
        return r0;
    }
    r0 = 1u;
    guest::cpu()->r[13] += 8u;
    return r0;
}

}  // namespace d_0069c838
GUEST_EXPORT(0x0069c838, d_0069c838::f_0069c838);

// f_0069f26c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0069f26c {

inline constexpr guest::Function<0x002fae84, u32(u32, u32, u32, u32)> call_002fae84;  // (from the original)
inline constexpr guest::Function<0x002fb328, u32(u32, u32, u32, u32)> call_002fb328;  // (from the original)
inline constexpr guest::Function<0x002fdf10, u32(u32, u32, u32, u32)> call_002fdf10;  // (from the original)
inline constexpr guest::Function<0x002fe8a8, u32(u32, u32, u32, u32)> call_002fe8a8;  // (from the original)

u32 f_0069f26c(u32 r0_unused, u32 r1, u32 r2, u32 r3) {
    u32 res = 0;
    u32 r0 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r5 = 0u;
    r0 = r5;
    r0 = call_002fe8a8(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r6 = 0x6214fu;  // (from the original)
    r4 = r0;
    if (r0 == 0) {
        goto L_69f2a0;
    }
    r0 = 0xbu;  // (from the original)
    r0 = call_002fdf10(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    if (r0 == 0) {
        goto L_69f2bc;
    }
L_69f298:;
    r0 = 0u;
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
L_69f2a0:;
    r0 = call_002fae84(r0, r1, r2, r3);
    r0 = r0 + r6;
    r1 = u32(*gptr<u8>(r0 + 0xau)) & ~0x40u;  // (from the original)
    *gptr<u8>(r0 + 0xau) = u8(r1);  // (from the original)
    guest::preempt();
    goto L_69f298;
L_69f2bc:;
    r0 = u32(*gptr<u8>(r4 + 0x5719u));  // (from the original)
    r2 = u32(*gptr<u8>(r4 + 0x5701u));  // (from the original)
    r3 = r0 << 0x1d;  // (from the original)
    r1 = r5 | r0 << 0x1e >> 0x1f;  // (from the original)
    r4 = 0xfff901ccu;  // (from the original)
    r0 = r1 | r3 >> 0x1f | r0 << 0x1c >> 0x1f;  // (from the original)
    if ((r0 & r2 >> 1) == 0) {
        r0 = call_002fae84(r0, r1, r2, r3);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r0 = r0 - r4;
        r1 = u32(*gptr<u8>(r0)) & ~0x80u;  // (from the original)
        *gptr<u8>(r0) = u8(r1);
        r0 = call_002fae84(r0, r1, r2, r3);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r0 = r0 + r6;
        r1 = u32(*gptr<u8>(r0 + 0xau)) & ~0x40u;  // (from the original)
        *gptr<u8>(r0 + 0xau) = u8(r1);  // (from the original)
    }
    r0 = call_002fb328(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    res = u32(*gptr<u8>(r0 + 0x80u - r4)) & 0x80u;  // (from the original)
    r0 = res;
    if (res != 0) {
        r0 = 1u;
    }
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_0069f26c
GUEST_EXPORT(0x0069f26c, d_0069f26c::f_0069f26c);
