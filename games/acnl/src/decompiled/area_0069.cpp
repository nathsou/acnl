// Functions decompiled by tools/decomp (docs/decomp.md), each proved equal to the recompiled original (prove-cpp). The
// names are generated (d_<address>::f_<address>, Object_<address>_<argument>, word_<offset>) and still to be chosen.
#include "guest/guest.hpp"

#include <bit>

using guest::gptr;

// f_006904b4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006904b4 {

inline guest::global<u32, 0x0094f310> global_0094f310;  // (from the original)
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
    u32 r13 = guest::cpu()->r[13];
    u32 r7_1 = 0;
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r6_1 = 0;
    u32 r0_2 = 0;
    u32 r2_2 = 0;
    u32 r3_2 = 0;
    u32 res_1 = 0;
    u32 r0_3 = 0;
    u32 r1_2 = 0;
    u32 r2_3 = 0;
    u32 r3_3 = 0;
    u32 r0_4 = 0;
    u32 r2_4 = 0;
    u32 r3_4 = 0;
    u32 r0_5 = 0;
    u32 r1_3 = 0;
    u32 r2_5 = 0;
    u32 r3_5 = 0;
    u32 r0_6 = 0;
    u32 r2_6 = 0;
    u32 r3_6 = 0;
    u32 r0_7 = 0;
    u32 r2_7 = 0;
    u32 r3_7 = 0;
    u32 r1_4 = 0;
    u32 r0_8 = 0;
    u32 r1_5 = 0;
    *gptr<u32>(r13 + 0xffffffe8u) = u32(r3);  // (from the original)
    r13 = r13 - 0x18;  // (from the original)
    r7_1 = *global_0094f310;
    guest::cpu()->r[13] = r13;
    r0_1 = call_005361a8(r0, r1, r2, r3);
    r1_1 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    if (u32(*gptr<u8>(r0 + 8u)) == 2u) {
        r6_1 = 1u;
    } else {
        r6_1 = 0u;
    }
    if (r0_1 == 0) {
        goto L_690524;
    }
    guest::cpu()->r[13] = r13;
    r0_2 = call_007486dc(r0_1, r1_1, r2_1, r3_1);
    r1_1 = guest::cpu()->r[1];
    r2_2 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    res_1 = r0_2 | r6_1;
    if (res_1 == 0) {
        goto L_690524;
    }
    guest::cpu()->r[13] = r13;
    r0_3 = call_002f74c8(res_1, r1_1, r2_2, r3_2);
    r1_2 = guest::cpu()->r[1];
    r2_3 = guest::cpu()->r[2];
    r3_3 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0_4 = call_005b4678(r0_3, r1_2, r2_3, r3_3);
    r1_1 = guest::cpu()->r[1];
    r2_4 = guest::cpu()->r[2];
    r3_4 = guest::cpu()->r[3];
    if (r0_4 != 0) {
        goto L_690524;
    }
    guest::cpu()->r[13] = r13;
    r0_5 = call_004ea048(r0_4, r1_1, r2_4, r3_4);
    r1_3 = guest::cpu()->r[1];
    r2_5 = guest::cpu()->r[2];
    r3_5 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0_6 = call_0074557c(r0_5, r1_3, r2_5, r3_5);
    r1_1 = guest::cpu()->r[1];
    r2_6 = guest::cpu()->r[2];
    r3_6 = guest::cpu()->r[3];
    if (r0_6 != 0) {
        goto L_69052c;
    }
    if (u32(*gptr<u8>(r0 + 8u)) == 2u) {
        goto L_69052c;
    }
L_690524:;
    r13 = r13 + 0x18;  // (from the original)
    guest::cpu()->r[1] = r1_1;
    guest::cpu()->r[13] = r13;
    return 0u;
L_69052c:;
    guest::cpu()->r[13] = r13;
    r0_7 = call_00536110(1u, r1_1, r2_6, r3_6);
    r2_7 = guest::cpu()->r[2];
    r3_7 = guest::cpu()->r[3];
    r1_4 = u32(*gptr<u8>(r0_1 + 0x11u));  // (from the original)
    if (r1_4 < 0x56u) {  // (from the original)
        if (r1_4 != 0) {
            guest::cpu()->r[13] = r13;
            r0_7 = call_00748574(r0_1, r1_4, r2_7, r3_7);
        }
    }
    *gptr<u32>(r13) = u32(0u);
    guest::cpu()->r[13] = r13;
    r0_8 = call_0057b9dc(r0_7, r7_1, r0, 0u);
    r1_5 = guest::cpu()->r[1];
    r13 = r13 + 0x18;  // (from the original)
    guest::cpu()->r[1] = r1_5;
    guest::cpu()->r[13] = r13;
    return r0_8;
}

}  // namespace d_006904b4
GUEST_EXPORT(0x006904b4, d_006904b4::f_006904b4);

// f_00691210: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00691210 {

inline constexpr guest::Function<0x005c33cc, u32(u32, u32, u32, u32)> call_005c33cc;  // (from the original)
inline constexpr guest::Function<0x00690fb8, u32(u32, u32, u32, u32)> call_00690fb8;  // (from the original)

u32 f_00691210(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r13 = guest::cpu()->r[13];
    u32 r14 = guest::cpu()->r[14];
    u32 ea_1 = 0;
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r0_2 = 0;
    u32 r2_1 = 0;
    u32 r1_2 = 0;
    u32 ea_2 = 0;
    u32 r4_1 = 0;
    u32 r5_1 = 0;
    u32 ea_3 = 0;
    u32 r4_2 = 0;
    u32 r5_2 = 0;
    ea_1 = r13 - 0x10;  // (from the original)
    *gptr<u32>(ea_1) = u32(r3);
    *gptr<u32>(ea_1 + 4) = u32(r4);
    *gptr<u32>(ea_1 + 8) = u32(r5);
    *gptr<u32>(ea_1 + 0xc) = u32(r14);  // (from the original)
    r13 = r13 - 0x10;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_1 = call_005c33cc(4u, 0u, r2, r3);
    r1_1 = guest::cpu()->r[1];
    if (r0_1 == 0) {
        r0_2 = ~0u;
        ea_3 = r13;
        r13 = r13 + 0x10;  // (from the original)
        r4_2 = *gptr<u32>(ea_3 + 4);
        r5_2 = *gptr<u32>(ea_3 + 8);
        guest::cpu()->r[1] = r1_1;
        guest::cpu()->r[4] = r4_2;
        guest::cpu()->r[5] = r5_2;
        guest::cpu()->r[13] = r13;
        return r0_2;
    }
    *gptr<u16>(r13) = u16(u32(*gptr<u16>(r0_1 + 0x2eu)));  // (from the original)
    r2_1 = *gptr<u32>(r13);
    r1_2 = r0_1 + 0x14u;  // (from the original)
    r13 = r13 + 4u;
    ea_2 = r13;
    r13 = r13 + 0xc;  // (from the original)
    r4_1 = *gptr<u32>(ea_2);
    r5_1 = *gptr<u32>(ea_2 + 4);
    r14 = *gptr<u32>(ea_2 + 8);
    guest::cpu()->r[13] = r13;
    guest::cpu()->r[4] = r4_1;
    guest::cpu()->r[5] = r5_1;
    return call_00690fb8(r0, r1_2, r2_1, r1);
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
    u32 r0_1 = 0;
    u32 r2_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r1_1 = 0;
    u32 r2_2 = 0;
    u32 r0_4 = 0;
    u32 r1_2 = 0;
    u32 r2_3 = 0;
    u32 zf_1 = 0;
    u32 r0_5 = 0;
    u32 r1_3 = 0;
    u32 r2_4 = 0;
    u32 zf_2 = 0;
    u32 zf_3 = 0;
    u32 zf_4 = 0;
    u32 zf_5 = 0;
    u32 r0_6 = 0;
    u32 r2_5 = 0;
    u32 r0_7 = 0;
    u32 r1_4 = 0;
    u32 r0_8 = 0;
    u32 r2_6 = 0;
    u32 r0_9 = 0;
    u32 r1_5 = 0;
    u32 r0_10 = 0;
    u32 r2_7 = 0;
    u32 r0_11 = 0;
    u32 r1_6 = 0;
    u32 r2_8 = 0;
    goto L_69125c;
L_57400c:;
    r0_1 = *gptr<u32>(r0 + 0x300u);  // (from the original)
    if (r0_1 == 0) {
        guest::cpu()->r[1] = r1;
        return r0_1;
    }
    r2_1 = *gptr<u32>(*gptr<u32>(r0_1) + 0x30u);  // (from the original)
    return guest::call_address<u32>(r2_1, r0_1, 0x100095au, r2_1, guest::cpu()->r[3]);  // (from the original)
L_69125c:;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r0_2 = call_004e0cb0(r0, r1, r2, guest::cpu()->r[3]);
    r0_3 = call_004e99f0(r0_2, r0, 0u, guest::cpu()->r[3]);
    r1_1 = guest::cpu()->r[1];
    r2_2 = guest::cpu()->r[2];
    if (r0_3 == 0) {
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        guest::cpu()->r[1] = r1_1;
        return r0_3;
    }
    r0_4 = call_007519b4(r0_3, r1_1, r2_2, guest::cpu()->r[3]);
    r1_2 = guest::cpu()->r[1];
    r2_3 = guest::cpu()->r[2];
    zf_1 = r0_4 == 0;
    if (zf_1) {
        goto L_69130c;
    }
    r0_5 = call_00751824(r0_3, r1_2, r2_3, guest::cpu()->r[3]);
    r1_3 = guest::cpu()->r[1];
    r2_4 = guest::cpu()->r[2];
    zf_2 = r0_5 == 0xb6u;  // (from the original)
    if (!zf_2) {
        zf_2 = r0_5 == 0xb8u;  // (from the original)
    }
    if (zf_2) {
        goto L_6912cc;
    }
    zf_3 = r0_5 == 0xbdu;  // (from the original)
    if (!zf_3) {
        zf_3 = r0_5 == 0xbfu;  // (from the original)
    }
    if (zf_3) {
        goto L_6912cc;
    }
    zf_4 = r0_5 == 0xc0u;  // (from the original)
    if (!zf_4) {
        zf_4 = r0_5 == 0xc3u;  // (from the original)
    }
    if (zf_4) {
        goto L_6912cc;
    }
    zf_5 = r0_5 == 0xc4u;  // (from the original)
    if (!zf_5) {
        zf_5 = r0_5 == 0xc5u;  // (from the original)
    }
    if (!zf_5) {
        zf_5 = r0_5 == 0xc6u;  // (from the original)
    }
    if (!zf_5) {
        goto L_69135c;
    }
L_6912cc:;
    if (r1 != 0) {
        call_0056e6a8(r0_3, 0xbau, r2_4, guest::cpu()->r[3]);  // (from the original)
        r2_4 = guest::cpu()->r[2];
        goto L_69135c;
    }
    r0_6 = call_00751824(r0_3, r1_3, r2_4, guest::cpu()->r[3]);
    r2_5 = guest::cpu()->r[2];
    call_0056e6a8(r0_3, r0_6, r2_5, guest::cpu()->r[3]);
    r2_4 = guest::cpu()->r[2];
    goto L_69135c;
L_69130c:;
    r0_7 = call_00751840(r0_3, r1_2, r2_3, guest::cpu()->r[3]);
    r1_4 = guest::cpu()->r[1];
    r2_4 = guest::cpu()->r[2];
    if (r0_7 == 0) {
        goto L_69135c;
    }
    r0_8 = call_002f74c8(r0_7, r1_4, r2_4, guest::cpu()->r[3]);
    r2_6 = guest::cpu()->r[2];
    r0_9 = call_002f74e0(4u, r0_8, r2_6, guest::cpu()->r[3]);
    r1_5 = guest::cpu()->r[1];
    r2_4 = guest::cpu()->r[2];
    if (r0_9 == 0) {
        goto L_69135c;
    }
    r0_10 = call_00751058(r0_3, r1_5, r2_4, guest::cpu()->r[3]);
    r2_7 = guest::cpu()->r[2];
    r0_11 = call_002fcb84(r0_10, 0x206cu, r2_7, guest::cpu()->r[3]);  // (from the original)
    r2_4 = guest::cpu()->r[2];
    if (r0_11 == 0) {
        goto L_691374;
    }
L_69135c:;
    call_0057456c(r0_3, r2, r2_4, guest::cpu()->r[3]);
    r1_6 = guest::cpu()->r[1];
    r2_8 = guest::cpu()->r[2];
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    return call_00571ea4(r0_3, r1_6, r2_8, guest::cpu()->r[3]);
L_691374:;
    call_0057456c(r0_3, r2, r2_4, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r0 = r0_3;
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::preempt();
    goto L_57400c;
}

}  // namespace d_0069125c
GUEST_EXPORT(0x0069125c, d_0069125c::f_0069125c);

// f_00691544: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00691544 {

inline constexpr guest::Function<0x002fc8e8, u32(u32, u32, u32, u32)> call_002fc8e8;  // (from the original)
inline constexpr guest::Function<0x002fc934, u32(u32, u32, u32, u32)> call_002fc934;  // (from the original)
inline constexpr guest::Function<0x006b9df8, u32(u32, u32, u32, u32)> call_006b9df8;  // (from the original)

u32 f_00691544(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r13 = guest::cpu()->r[13];
    u32 ea_1 = 0;
    u32 r5_1 = 0;
    u32 r6_1 = 0;
    u32 r7_1 = 0;
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r0_2 = 0;
    u32 r2_2 = 0;
    u32 r3_2 = 0;
    u32 r1_2 = 0;
    u32 r1_3 = 0;
    u32 r0_3 = 0;
    *gptr<u32>(r13 + 0xffffffe0u) = u32(r3);  // (from the original)
    r13 = r13 - 0x20;  // (from the original)
    ea_1 = r13 + 0x20u;  // (from the original)
    r5_1 = *gptr<u32>(ea_1);
    r6_1 = *gptr<u32>(ea_1 + 4);
    r7_1 = *gptr<u32>(ea_1 + 8);
    r0_1 = r13;
    guest::cpu()->r[13] = r13;
    call_002fc934(r0_1, r1, r2, r3);
    r1_1 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    r0_2 = r13;
    guest::cpu()->r[13] = r13;
    call_006b9df8(r0_2, r1_1, r2_1, r3_1);
    r2_2 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    r1_2 = r13;
    guest::cpu()->r[13] = r13;
    call_002fc8e8(r0, r1_2, r2_2, r3_2);
    r1_3 = guest::cpu()->r[1];
    *gptr<u8>(r0 + 4u) = u8(r2);
    *gptr<u8>(r0 + 6u) = u8(r5_1);
    *gptr<u8>(r0 + 5u) = u8(r3);
    *gptr<u8>(r0 + 7u) = u8(r6_1);
    *gptr<u8>(r0 + 8u) = u8(r7_1);
    r0_3 = r13;
    r13 = r13 + 0x20;  // (from the original)
    guest::cpu()->r[1] = r1_3;
    guest::cpu()->r[13] = r13;
    return r0_3;
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
    u32 r0_1 = 0;
    u32 r2_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r1_1 = 0;
    u32 r2_2 = 0;
    u32 r0_4 = 0;
    u32 r1_2 = 0;
    u32 r2_3 = 0;
    u32 zf_1 = 0;
    u32 r0_5 = 0;
    u32 r1_3 = 0;
    u32 r2_4 = 0;
    u32 zf_2 = 0;
    u32 zf_3 = 0;
    u32 zf_4 = 0;
    u32 zf_5 = 0;
    u32 r0_6 = 0;
    u32 r2_5 = 0;
    u32 r0_7 = 0;
    u32 r1_4 = 0;
    u32 r0_8 = 0;
    u32 r2_6 = 0;
    u32 r0_9 = 0;
    u32 r1_5 = 0;
    u32 r0_10 = 0;
    u32 r2_7 = 0;
    u32 r0_11 = 0;
    u32 r1_6 = 0;
    u32 r2_8 = 0;
    goto L_6915b0;
L_574168:;
    r0_1 = *gptr<u32>(r0 + 0x300u);  // (from the original)
    if (r0_1 == 0) {
        guest::cpu()->r[1] = r1;
        return r0_1;
    }
    r2_1 = *gptr<u32>(*gptr<u32>(r0_1) + 0x30u);  // (from the original)
    return guest::call_address<u32>(r2_1, r0_1, 0x100095bu, r2_1, guest::cpu()->r[3]);  // (from the original)
L_6915b0:;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r0_2 = call_004e0cb0(r0, r1, r2, guest::cpu()->r[3]);
    r0_3 = call_004e99f0(r0_2, r0, 0u, guest::cpu()->r[3]);
    r1_1 = guest::cpu()->r[1];
    r2_2 = guest::cpu()->r[2];
    if (r0_3 == 0) {
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        guest::cpu()->r[1] = r1_1;
        return r0_3;
    }
    r0_4 = call_007519b4(r0_3, r1_1, r2_2, guest::cpu()->r[3]);
    r1_2 = guest::cpu()->r[1];
    r2_3 = guest::cpu()->r[2];
    zf_1 = r0_4 == 0;
    if (zf_1) {
        goto L_691660;
    }
    r0_5 = call_00751824(r0_3, r1_2, r2_3, guest::cpu()->r[3]);
    r1_3 = guest::cpu()->r[1];
    r2_4 = guest::cpu()->r[2];
    zf_2 = r0_5 == 0xb6u;  // (from the original)
    if (!zf_2) {
        zf_2 = r0_5 == 0xb8u;  // (from the original)
    }
    if (zf_2) {
        goto L_691620;
    }
    zf_3 = r0_5 == 0xbdu;  // (from the original)
    if (!zf_3) {
        zf_3 = r0_5 == 0xbfu;  // (from the original)
    }
    if (zf_3) {
        goto L_691620;
    }
    zf_4 = r0_5 == 0xc0u;  // (from the original)
    if (!zf_4) {
        zf_4 = r0_5 == 0xc3u;  // (from the original)
    }
    if (zf_4) {
        goto L_691620;
    }
    zf_5 = r0_5 == 0xc4u;  // (from the original)
    if (!zf_5) {
        zf_5 = r0_5 == 0xc5u;  // (from the original)
    }
    if (!zf_5) {
        zf_5 = r0_5 == 0xc6u;  // (from the original)
    }
    if (!zf_5) {
        goto L_6916b0;
    }
L_691620:;
    if (r1 != 0) {
        call_0056e6a8(r0_3, 0xbau, r2_4, guest::cpu()->r[3]);  // (from the original)
        r2_4 = guest::cpu()->r[2];
        goto L_6916b0;
    }
    r0_6 = call_00751824(r0_3, r1_3, r2_4, guest::cpu()->r[3]);
    r2_5 = guest::cpu()->r[2];
    call_0056e6a8(r0_3, r0_6, r2_5, guest::cpu()->r[3]);
    r2_4 = guest::cpu()->r[2];
    goto L_6916b0;
L_691660:;
    r0_7 = call_00751840(r0_3, r1_2, r2_3, guest::cpu()->r[3]);
    r1_4 = guest::cpu()->r[1];
    r2_4 = guest::cpu()->r[2];
    if (r0_7 == 0) {
        goto L_6916b0;
    }
    r0_8 = call_002f74c8(r0_7, r1_4, r2_4, guest::cpu()->r[3]);
    r2_6 = guest::cpu()->r[2];
    r0_9 = call_002f74e0(4u, r0_8, r2_6, guest::cpu()->r[3]);
    r1_5 = guest::cpu()->r[1];
    r2_4 = guest::cpu()->r[2];
    if (r0_9 == 0) {
        goto L_6916b0;
    }
    r0_10 = call_00751058(r0_3, r1_5, r2_4, guest::cpu()->r[3]);
    r2_7 = guest::cpu()->r[2];
    r0_11 = call_002fcb84(r0_10, 0x206cu, r2_7, guest::cpu()->r[3]);  // (from the original)
    r2_4 = guest::cpu()->r[2];
    if (r0_11 == 0) {
        goto L_6916c8;
    }
L_6916b0:;
    call_0057456c(r0_3, r2, r2_4, guest::cpu()->r[3]);
    r1_6 = guest::cpu()->r[1];
    r2_8 = guest::cpu()->r[2];
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    return call_005724ec(r0_3, r1_6, r2_8, guest::cpu()->r[3]);
L_6916c8:;
    call_0057456c(r0_3, r2, r2_4, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r0 = r0_3;
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::preempt();
    goto L_574168;
}

}  // namespace d_006915b0
GUEST_EXPORT(0x006915b0, d_006915b0::f_006915b0);

// f_00691754: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00691754 {

inline constexpr guest::Function<0x005c33cc, u32(u32, u32, u32, u32)> call_005c33cc;  // (from the original)
inline constexpr guest::Function<0x00692504, u32(u32, u32, u32, u32)> call_00692504;  // (from the original)

u32 f_00691754(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r0_2 = 0;
    u32 r1_2 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    r13 = r13 - 0x18u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_1 = call_005c33cc(4u, 0u, r2, r3);
    r1_1 = guest::cpu()->r[1];
    if (r0_1 == 0) {
        r0_2 = 4u;
        r13 = r13 + 0x18u;  // (from the original)
        guest::cpu()->r[1] = r1_1;
        guest::cpu()->r[13] = r13;
        return r0_2;
    }
    *gptr<u32>(r13) = u32(r2);
    r1_2 = u32(*gptr<u16>(r0_1 + 0x2eu));  // (from the original)
    r2_1 = r0_1 + 0x14u;  // (from the original)
    *gptr<u16>(r13 + 4u) = u16(r1_2);
    r3_1 = *gptr<u32>(r13 + 4u);
    guest::cpu()->r[13] = r13;
    r0_2 = call_00692504(r0, r1, r2_1, r3_1);
    r1_1 = guest::cpu()->r[1];
    r13 = r13 + 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1_1;
    guest::cpu()->r[13] = r13;
    return r0_2;
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
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r1_1 = 0;
    guest::cpu()->r[13] -= 8u;
    r0_1 = arg0->word_0;
    if (r0_1 != 0) {
        call_005204b0(r0_1, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
        *gptr<u32>(r0) = u32(0u);
    }
    r0_2 = r0 + 4u;
    call_002fc8e8(r0_2, 0x95bfdcu, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    r1_1 = guest::cpu()->r[1];
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1_1;
    return 1u;
}

}  // namespace d_00691ae8
GUEST_EXPORT(0x00691ae8, d_00691ae8::f_00691ae8);

// f_00691b7c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00691b7c {

inline guest::global<u32, 0x00881ba0> global_00881ba0;  // (from the original)
inline constexpr guest::Function<0x00614760, u32(u32, u32, u32, u32)> call_00614760;  // (from the original)
inline constexpr guest::Function<0x006148e4, u32(u32, u32, u32, u32)> call_006148e4;  // (from the original)
inline constexpr guest::Function<0x00614a64, u32(u32, u32, u32, u32)> call_00614a64;  // (from the original)
inline constexpr guest::Function<0x006a6dbc, u32(u32, u32, u32, u32)> call_006a6dbc;  // (from the original)
inline constexpr guest::Function<0x0075dc00, u32(u32, u32, u32, u32)> call_0075dc00;  // (from the original)

u32 f_00691b7c(u32 r0, u32 r1, u32 r2, u32 r3, float S0) {
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 res_1 = 0;
    u32 zf_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r3_1 = 0;
    float S0_1 = 0;
    u32 r0_4 = 0;
    u32 r1_2 = 0;
    u32 r2_1 = 0;
    u32 r3_2 = 0;
    float S0_2 = 0;
    u32 r0_5 = 0;
    u32 r0_6 = 0;
    u32 r1_3 = 0;
    u32 r2_2 = 0;
    u32 r3_3 = 0;
    float S0_3 = 0;
    u32 r0_7 = 0;
    u32 ea_1 = 0;
    u32 ea_2 = 0;
    float S0_4 = 0;
    u32 r2_3 = 0;
    u32 r1_4 = 0;
    u32 r0_8 = 0;
    u32 r2_4 = 0;
    u32 r3_4 = 0;
    float S0_5 = 0;
    u32 r0_9 = 0;
    u32 r0_10 = 0;
    u32 r3_5 = 0;
    u32 r0_11 = 0;
    u32 r1_5 = 0;
    u32 r2_5 = 0;
    u32 r3_6 = 0;
    float S0_6 = 0;
    u32 r0_12 = 0;
    u32 r0_13 = 0;
    u32 r1_6 = 0;
    u32 r2_6 = 0;
    u32 r3_7 = 0;
    float S0_7 = 0;
    u32 r0_14 = 0;
    u32 ea_3 = 0;
    u32 ea_4 = 0;
    float S0_8 = 0;
    u32 r2_7 = 0;
    u32 r1_7 = 0;
    u32 r0_15 = 0;
    u32 r2_8 = 0;
    u32 r3_8 = 0;
    float S0_9 = 0;
    u32 r0_16 = 0;
    u32 r0_17 = 0;
    r0_1 = r0 - r2;
    if (r0_1 >> 0x1f != (r0_1 & (r0_1 ^ r0_1)) >> 0x1f) {  // (from the original)
        r0_1 = 0u - r0_1;
    }
    r1_1 = r1 - r3;
    if (r1_1 >> 0x1f != (r1_1 & (r1_1 ^ r1_1)) >> 0x1f) {  // (from the original)
        r1_1 = 0u - r1_1;
    }
    res_1 = r0_1 + r1_1;
    zf_1 = res_1 == 0;
    if (!zf_1) {
        zf_1 = res_1 == 1u;
    }
    r13 = r13 - 0x88u;  // (from the original)
    if (zf_1) {
        r0_2 = 1u;
        goto L_691c94;
    }
    r0_3 = r13 + 0x58u;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    call_006a6dbc(r0_3, r0, r1, r3);
    r3_1 = guest::cpu()->r[3];
    S0_1 = guest::cpu()->s[0];
    r0_4 = r13 + 0x64u;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_1;
    call_006a6dbc(r0_4, r2, r1, r3_1);
    r1_2 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    S0_2 = guest::cpu()->s[0];
    r0_5 = r13 + 0xcu;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_2;
    r0_6 = call_006148e4(r0_5, r1_2, r2_1, r3_2);
    r1_3 = guest::cpu()->r[1];
    r2_2 = guest::cpu()->r[2];
    r3_3 = guest::cpu()->r[3];
    S0_3 = guest::cpu()->s[0];
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_3;
    r0_7 = call_00614760(r0_6, r1_3, r2_2, r3_3);
    ea_1 = r13;
    *gptr<u32>(ea_1) = u32(1u);
    ea_2 = r13 + 4u;
    *gptr<u32>(ea_2) = u32(r0_7);
    *gptr<u32>(ea_2 + 4) = u32(0u);
    S0_4 = std::bit_cast<float>(*global_00881ba0);
    r2_3 = r13 + 0x58u;  // (from the original)
    r1_4 = r13 + 0x64u;  // (from the original)
    r0_8 = r13 + 0xcu;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_4;
    call_00614a64(r0_8, r1_4, r2_3, 0u);
    r2_4 = guest::cpu()->r[2];
    r3_4 = guest::cpu()->r[3];
    S0_5 = guest::cpu()->s[0];
    r0_9 = r13 + 0xcu;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_5;
    r0_10 = call_0075dc00(r0_9, 0xfu, r2_4, r3_4);  // (from the original)
    r1_1 = guest::cpu()->r[1];
    r3_5 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
    if (r0_10 == 0) {
        goto L_691c9c;
    }
    r0_11 = r13 + 0x64u;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    call_006a6dbc(r0_11, r0, r3, r3_5);
    r1_5 = guest::cpu()->r[1];
    r2_5 = guest::cpu()->r[2];
    r3_6 = guest::cpu()->r[3];
    S0_6 = guest::cpu()->s[0];
    r0_12 = r13 + 0xcu;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_6;
    r0_13 = call_006148e4(r0_12, r1_5, r2_5, r3_6);
    r1_6 = guest::cpu()->r[1];
    r2_6 = guest::cpu()->r[2];
    r3_7 = guest::cpu()->r[3];
    S0_7 = guest::cpu()->s[0];
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_7;
    r0_14 = call_00614760(r0_13, r1_6, r2_6, r3_7);
    ea_3 = r13;
    *gptr<u32>(ea_3) = u32(1u);
    ea_4 = r13 + 4u;
    *gptr<u32>(ea_4) = u32(r0_14);
    *gptr<u32>(ea_4 + 4) = u32(0u);
    S0_8 = std::bit_cast<float>(*global_00881ba0);
    r2_7 = r13 + 0x58u;  // (from the original)
    r1_7 = r13 + 0x64u;  // (from the original)
    r0_15 = r13 + 0xcu;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_8;
    call_00614a64(r0_15, r1_7, r2_7, 0u);
    r2_8 = guest::cpu()->r[2];
    r3_8 = guest::cpu()->r[3];
    S0_9 = guest::cpu()->s[0];
    r0_16 = r13 + 0xcu;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_9;
    r0_17 = call_0075dc00(r0_16, 0xfu, r2_8, r3_8);  // (from the original)
    r1_1 = guest::cpu()->r[1];
    S0 = guest::cpu()->s[0];
    if (r0_17 == 0) {
        goto L_691c9c;
    }
    r0_2 = 0u;
L_691c94:;
    r13 = r13 + 0x88u;  // (from the original)
    guest::cpu()->r[1] = r1_1;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    return r0_2;
L_691c9c:;
    r13 = r13 + 0x88u;  // (from the original)
    guest::cpu()->r[1] = r1_1;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    return 1u;
}

}  // namespace d_00691b7c
GUEST_EXPORT(0x00691b7c, d_00691b7c::f_00691b7c);

// f_00691cb4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00691cb4 {

inline guest::global<u32, 0x0095c6d0> global_0095c6d0;  // (from the original)
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
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r0_2 = 0;
    u32 r1_1 = 0;
    u32 r2_2 = 0;
    u32 r3_2 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r1_2 = 0;
    u32 r2_3 = 0;
    u32 r3_3 = 0;
    u32 r0_5 = 0;
    u32 r0_6 = 0;
    u32 r0_7 = 0;
    u32 r2_4 = 0;
    u32 r3_4 = 0;
    u32 r0_8 = 0;
    u32 r2_5 = 0;
    u32 r3_5 = 0;
    u32 r1_3 = 0;
    u32 r2_6 = 0;
    u32 r3_6 = 0;
    u32 r0_9 = 0;
    u32 r0_10 = 0;
    u32 r1_4 = 0;
    u32 r2_7 = 0;
    u32 r3_7 = 0;
    u32 r0_11 = 0;
    u32 r2_8 = 0;
    u32 r3_8 = 0;
    u32 r4_1 = 0;
    u32 r0_12 = 0;
    u32 r6_1 = 0;
    u32 r1_5 = 0;
    u32 r2_9 = 0;
    u32 r0_13 = 0;
    u32 r2_10 = 0;
    u32 r3_9 = 0;
    u32 r0_14 = 0;
    u32 r2_11 = 0;
    u32 r3_10 = 0;
    u32 r0_15 = 0;
    u32 r2_12 = 0;
    u32 r3_11 = 0;
    u32 r0_16 = 0;
    u32 r1_6 = 0;
    u32 r2_13 = 0;
    u32 r3_12 = 0;
    u32 r0_17 = 0;
    u32 r1_7 = 0;
    u32 r0_18 = 0;
    u32 r1_8 = 0;
    u32 r2_14 = 0;
    u32 r3_13 = 0;
    u32 r0_19 = 0;
    u32 r3_14 = 0;
    u32 r1_9 = 0;
    u32 r0_20 = 0;
    u32 r2_15 = 0;
    u32 r3_15 = 0;
    u32 r0_21 = 0;
    u32 r2_16 = 0;
    u32 r3_16 = 0;
    u32 r1_10 = 0;
    u32 r2_17 = 0;
    u32 r3_17 = 0;
    u32 r0_22 = 0;
    u32 r2_18 = 0;
    u32 r3_18 = 0;
    u32 r0_23 = 0;
    u32 r1_11 = 0;
    u32 r2_19 = 0;
    u32 r3_19 = 0;
    u32 r0_24 = 0;
    u32 r3_20 = 0;
    u32 r1_12 = 0;
    u32 r0_25 = 0;
    u32 r2_20 = 0;
    u32 r3_21 = 0;
    r13 = r13 - 0x30u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_1 = call_002f74c8(r0, r1, r2, r3);
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0_2 = call_002f74e0(0x4000u, r0_1, r2_1, r3_1);  // (from the original)
    r1_1 = guest::cpu()->r[1];
    r2_2 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    if (r0_2 != 0) {
        goto L_691d40;
    }
    guest::cpu()->r[13] = r13;
    r0_3 = call_002f74e0(0x2000u, r0_1, r2_2, r3_2);  // (from the original)
    r1_1 = guest::cpu()->r[1];
    r2_2 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    if (r0_3 != 0) {
        guest::cpu()->r[13] = r13;
        r0_3 = call_005b4018(r0_1, r1_1, r2_2, r3_2);
        r1_1 = guest::cpu()->r[1];
        r2_2 = guest::cpu()->r[2];
        r3_2 = guest::cpu()->r[3];
        if (r0_3 == 0) {
            goto L_691d40;
        }
    }
    guest::cpu()->r[13] = r13;
    r0_4 = call_002f74c8(r0_3, r1_1, r2_2, r3_2);
    r1_2 = guest::cpu()->r[1];
    r2_3 = guest::cpu()->r[2];
    r3_3 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0_5 = call_004e7344(r0_4, r1_2, r2_3, r3_3);
    r1_1 = guest::cpu()->r[1];
    r2_2 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    if (r0_5 == 0) {
        r13 = r13 + 0x30u;  // (from the original)
        guest::cpu()->r[1] = r1_1;
        guest::cpu()->r[13] = r13;
        return r0_5;
    }
    r0_6 = *global_0095c6d0;
    if (r0_6 == 0) {
        goto L_691d40;
    }
    r0_7 = r0_6 + 0x10u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_5 = call_0076e7c8(r0_7, r1_1, r2_2, r3_2);
    r1_1 = guest::cpu()->r[1];
    r2_2 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    if (r0_5 == 2u) {
        r13 = r13 + 0x30u;  // (from the original)
        guest::cpu()->r[1] = r1_1;
        guest::cpu()->r[13] = r13;
        return r0_5;
    }
L_691d40:;
    guest::cpu()->r[13] = r13;
    r0_5 = call_00521d3c(1u, r1_1, r2_2, r3_2);
    r1_1 = guest::cpu()->r[1];
    r2_4 = guest::cpu()->r[2];
    r3_4 = guest::cpu()->r[3];
    if (r0_5 == 0) {
        r13 = r13 + 0x30u;  // (from the original)
        guest::cpu()->r[1] = r1_1;
        guest::cpu()->r[13] = r13;
        return r0_5;
    }
    guest::cpu()->r[13] = r13;
    r0_8 = call_002fc8e8(0x94f320u, 0x95bfdcu, r2_4, r3_4);  // (from the original)
    r2_5 = guest::cpu()->r[2];
    r3_5 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    call_002fc8e8(0x94f31cu, r0_8, r2_5, r3_5);  // (from the original)
    r1_3 = guest::cpu()->r[1];
    r2_6 = guest::cpu()->r[2];
    r3_6 = guest::cpu()->r[3];
    r0_9 = r13 + 0xcu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_10 = call_002fc20c(r0_9, r1_3, r2_6, r3_6);
    r1_4 = guest::cpu()->r[1];
    r2_7 = guest::cpu()->r[2];
    r3_7 = guest::cpu()->r[3];
    r0_11 = r0_10 + 4u;
    guest::cpu()->r[13] = r13;
    call_002fc20c(r0_11, r1_4, r2_7, r3_7);
    r2_8 = guest::cpu()->r[2];
    r3_8 = guest::cpu()->r[3];
    r4_1 = r13;
    guest::cpu()->r[13] = r13;
    r0_12 = call_005c33cc(4u, 0u, r2_8, r3_8);
    r1_1 = guest::cpu()->r[1];
    r6_1 = r13;
    if (r0_12 == 0) {
        goto L_691ebc;
    }
    *gptr<u16>(r13 + 0x1cu) = u16(u32(*gptr<u16>(r0_12 + 0x2eu)));  // (from the original)
    r1_5 = r0_12 + 0x14u;  // (from the original)
    r2_9 = *gptr<u32>(r13 + 0x1cu);  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_13 = call_00690fb8(r4_1, r1_5, r2_9, 1u);
    r1_1 = guest::cpu()->r[1];
    r2_10 = guest::cpu()->r[2];
    r3_9 = guest::cpu()->r[3];
    if (r0_13 + 2u != 0) {
        if (r0_13 >> 0x1f != (r0_13 & (r0_13 ^ r0_13)) >> 0x1f) {  // (from the original)
            goto L_691ebc;
        }
        guest::cpu()->r[13] = r13;
        r0_14 = call_004ea048(r0_13, r1_1, r2_10, r3_9);
        r2_11 = guest::cpu()->r[2];
        r3_10 = guest::cpu()->r[3];
        guest::cpu()->r[13] = r13;
        r0_15 = call_004e958c(r0_14, r0_13, r2_11, r3_10);
        r1_1 = guest::cpu()->r[1];
        r2_12 = guest::cpu()->r[2];
        r3_11 = guest::cpu()->r[3];
        if (r0_15 == 0) {
            goto L_691ebc;
        }
        guest::cpu()->r[13] = r13;
        r0_16 = call_00751a20(r0_15, r1_1, r2_12, r3_11);
        r1_6 = guest::cpu()->r[1];
        r2_13 = guest::cpu()->r[2];
        r3_12 = guest::cpu()->r[3];
        if (r0_16 == 1u) {
            goto L_691e68;
        }
        if (r0_16 == 0) {
            r0_17 = r0_15;
            goto L_691ea0;
        }
        goto L_691eb4;
    }
    r1_7 = r6_1 + 0x10u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_18 = call_002fc8e8(0x94f320u, r1_7, r2_10, r3_9);  // (from the original)
    r1_8 = guest::cpu()->r[1];
    r2_14 = guest::cpu()->r[2];
    r3_13 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0_19 = call_004e0cb0(r0_18, r1_8, r2_14, r3_13);
    r3_14 = guest::cpu()->r[3];
    r1_9 = r13;
    guest::cpu()->r[13] = r13;
    r0_20 = call_004e99f0(r0_19, r1_9, 0u, r3_14);
    r1_1 = guest::cpu()->r[1];
    r2_15 = guest::cpu()->r[2];
    r3_15 = guest::cpu()->r[3];
    if (r0_20 == 0) {
        goto L_691ebc;
    }
    guest::cpu()->r[13] = r13;
    r0_21 = call_00751058(r0_20, r1_1, r2_15, r3_15);
    r2_16 = guest::cpu()->r[2];
    r3_16 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    call_002fc8e8(0x94f31cu, r0_21, r2_16, r3_16);  // (from the original)
    r1_10 = guest::cpu()->r[1];
    r2_17 = guest::cpu()->r[2];
    r3_17 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    call_0052c4d8(r0_20, r1_10, r2_17, r3_17);
    r1_1 = guest::cpu()->r[1];
    goto L_691ebc;
L_691e68:;
    guest::cpu()->r[13] = r13;
    r0_22 = call_00751058(r0_15, r1_6, r2_13, r3_12);
    r2_18 = guest::cpu()->r[2];
    r3_18 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0_23 = call_002fc8e8(0x94f320u, r0_22, r2_18, r3_18);  // (from the original)
    r1_11 = guest::cpu()->r[1];
    r2_19 = guest::cpu()->r[2];
    r3_19 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0_24 = call_004e0cb0(r0_23, r1_11, r2_19, r3_19);
    r3_20 = guest::cpu()->r[3];
    r1_12 = r13;
    guest::cpu()->r[13] = r13;
    r0_17 = call_004e99f0(r0_24, r1_12, 0u, r3_20);
    r1_6 = guest::cpu()->r[1];
    r2_13 = guest::cpu()->r[2];
    r3_12 = guest::cpu()->r[3];
    if (r0_17 == 0) {
        goto L_691eb4;
    }
L_691ea0:;
    guest::cpu()->r[13] = r13;
    r0_25 = call_00751058(r0_17, r1_6, r2_13, r3_12);
    r2_20 = guest::cpu()->r[2];
    r3_21 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    call_002fc8e8(0x94f31cu, r0_25, r2_20, r3_21);  // (from the original)
    r1_6 = guest::cpu()->r[1];
    r2_13 = guest::cpu()->r[2];
    r3_12 = guest::cpu()->r[3];
L_691eb4:;
    guest::cpu()->r[13] = r13;
    call_0052c4d8(r0_15, r1_6, r2_13, r3_12);
    r1_1 = guest::cpu()->r[1];
L_691ebc:;
    r0_5 = r6_1 + 0xcu;  // (from the original)
    r13 = r13 + 0x30u;  // (from the original)
    guest::cpu()->r[1] = r1_1;
    guest::cpu()->r[13] = r13;
    return r0_5;
}

}  // namespace d_00691cb4
GUEST_EXPORT(0x00691cb4, d_00691cb4::f_00691cb4);

// f_0069335c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0069335c {

inline guest::global<u32, 0x0095c6d0> global_0095c6d0;  // (from the original)
inline constexpr guest::Function<0x002f74c8, u32(u32, u32, u32, u32)> call_002f74c8;  // (from the original)
inline constexpr guest::Function<0x002f74e0, u32(u32, u32, u32, u32)> call_002f74e0;  // (from the original)
inline constexpr guest::Function<0x004e7344, u32(u32, u32, u32, u32)> call_004e7344;  // (from the original)
inline constexpr guest::Function<0x005b4018, u32(u32, u32, u32, u32)> call_005b4018;  // (from the original)
inline constexpr guest::Function<0x0076e7c8, u32(u32, u32, u32, u32)> call_0076e7c8;  // (from the original)

u32 f_0069335c(u32 r0) {
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r0_2 = 0;
    u32 r1_2 = 0;
    u32 r0_3 = 0;
    u32 r1_3 = 0;
    u32 r0_4 = 0;
    u32 r1_4 = 0;
    u32 r0_5 = 0;
    u32 r0_6 = 0;
    u32 r0_7 = 0;
    u32 r1_5 = 0;
    guest::cpu()->r[13] -= 8u;
    r0_1 = call_002f74e0(0x4000u, r0, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    r1_1 = guest::cpu()->r[1];
    if (r0_1 != 0) {
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1_1;
        return 1u;
    }
    r0_2 = call_002f74e0(0x2000u, r0, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    r1_2 = guest::cpu()->r[1];
    if (r0_2 != 0) {
        r0_2 = call_005b4018(r0, r1_2, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1_2 = guest::cpu()->r[1];
        if (r0_2 == 0) {
            guest::cpu()->r[13] += 8u;
            guest::cpu()->r[1] = r1_2;
            return 1u;
        }
    }
    r0_3 = call_002f74c8(r0_2, r1_2, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_3 = guest::cpu()->r[1];
    r0_4 = call_004e7344(r0_3, r1_3, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_4 = guest::cpu()->r[1];
    if (r0_4 == 0) {
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1_4;
        return r0_4;
    }
    r0_5 = *global_0095c6d0;
    if (r0_5 == 0) {
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1_4;
        return 1u;
    }
    r0_6 = r0_5 + 0x10u;  // (from the original)
    r0_7 = call_0076e7c8(r0_6, r1_4, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_5 = guest::cpu()->r[1];
    if (r0_7 == 2u) {
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1_5;
        return 0u;
    }
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1_5;
    return 1u;
}

}  // namespace d_0069335c
GUEST_EXPORT(0x0069335c, d_0069335c::f_0069335c);

// f_006934a0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006934a0 {

inline constexpr guest::Function<0x002f74c8, u32(u32, u32, u32, u32)> call_002f74c8;  // (from the original)
inline constexpr guest::Function<0x002f74e0, u32(u32, u32, u32, u32)> call_002f74e0;  // (from the original)
inline constexpr guest::Function<0x005b4954, u32(u32, u32, u32, u32)> call_005b4954;  // (from the original)

u32 f_006934a0(u32 r0, u32 r1) {
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r1_1 = 0;
    u32 r0_3 = 0;
    u32 r1_2 = 0;
    u32 r0_4 = 0;
    u32 r1_3 = 0;
    u32 r0_5 = 0;
    u32 r1_4 = 0;
    u32 r0_6 = 0;
    u32 r1_5 = 0;
    u32 r0_7 = 0;
    u32 r1_6 = 0;
    guest::cpu()->r[13] -= 8u;
    r0_1 = call_002f74c8(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r0_2 = call_002f74e0(0x80u, r0_1, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    r1_1 = guest::cpu()->r[1];
    if (r0_2 != 0) {
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1_1;
        return 1u;
    }
    r0_3 = call_002f74e0(0x40u, r0_1, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    r1_2 = guest::cpu()->r[1];
    if (r0_3 != 0) {
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1_2;
        return 1u;
    }
    r0_4 = call_002f74e0(0x2000u, r0_1, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    r1_3 = guest::cpu()->r[1];
    if (r0_4 != 0) {
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1_3;
        return 1u;
    }
    r0_5 = call_002f74e0(0x4000u, r0_1, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    r1_4 = guest::cpu()->r[1];
    if (r0_5 != 0) {
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1_4;
        return 1u;
    }
    r0_6 = call_002f74e0(0x20000000u, r0_1, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    r1_5 = guest::cpu()->r[1];
    if (r0_6 != 0) {
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1_5;
        return 1u;
    }
    r0_7 = call_005b4954(r0_1, r1_5, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_6 = guest::cpu()->r[1];
    if (r0_7 == 0) {
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1_6;
        return r0_7;
    }
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1_6;
    return 1u;
}

}  // namespace d_006934a0
GUEST_EXPORT(0x006934a0, d_006934a0::f_006934a0);

// f_00693a64: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00693a64 {

inline constexpr guest::Function<0x006935a8, u32(u32, u32, u32, u32)> call_006935a8;  // (from the original)

u32 f_00693a64(u32 r0_unused, u32 r1, u32 r2, u32 r3) {
    u32 r13 = guest::cpu()->r[13];
    u32 zf_1 = 0;
    u32 r1_1 = 0;
    u32 r1_2 = 0;
    *gptr<u32>(r13 + 0xfffffff8u) = u32(r3);  // (from the original)
    r13 = r13 - 8;
    zf_1 = r2 == 0;
    *gptr<u32>(r13) = u32(0u);
    if (zf_1) {
        r1_1 = 0x33a8u;  // (from the original)
    } else {
        r1_1 = 0x33a9u;  // (from the original)
    }
    guest::cpu()->r[13] = r13;
    call_006935a8(guest::cpu()->r[0], r1_1, r1, 1u);
    r1_2 = guest::cpu()->r[1];
    r13 = r13 + 8;
    guest::cpu()->r[1] = r1_2;
    guest::cpu()->r[13] = r13;
    return guest::cpu()->r[0];
}

}  // namespace d_00693a64
GUEST_EXPORT(0x00693a64, d_00693a64::f_00693a64);

// f_00693cc8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00693cc8 {


u32 f_00693cc8(u32 r0) {
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    r13 = r13 - 4u;
    if (r0 == 0) {
        r13 = r13 + 4u;
        guest::cpu()->r[1] = 0u;
        guest::cpu()->r[13] = r13;
        return 0u;
    }
    if (r0 != 1u) {
        if (r0 == 2u) {
            r0_1 = 0u - 0x8000u;  // (from the original)
            r0_2 = uxth(r0_1);
            r13 = r13 + 4u;
            guest::cpu()->r[1] = 0u;
            guest::cpu()->r[13] = r13;
            return r0_2;
        }
        if (r0 == 3u) {
            r0_3 = uxth(0xffffc000u);  // (from the original)
            r13 = r13 + 4u;
            guest::cpu()->r[1] = 0u;
            guest::cpu()->r[13] = r13;
            return r0_3;
        }
        r13 = r13 + 4u;
        guest::cpu()->r[1] = 0u;
        guest::cpu()->r[13] = r13;
        return 0u;
    }
    *gptr<u16>(r13) = u16(0x4000u);  // (from the original)
    r13 = r13 + 4u;
    guest::cpu()->r[1] = 0x4000u;  // (from the original)
    guest::cpu()->r[13] = r13;
    return 0x4000u;  // (from the original)
}

}  // namespace d_00693cc8
GUEST_EXPORT(0x00693cc8, d_00693cc8::f_00693cc8);

// f_00694178: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00694178 {

struct __attribute__((packed)) Object_00694178_0 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
};
GUEST_OFFSET(Object_00694178_0, word_4, 0x4);  // (from the original)


u32 f_00694178(gptr<Object_00694178_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r1 = 0;
    u32 r12 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r2_2 = 0;
    u32 r0_1 = 0;
    guest::cpu()->r[13] -= 4u;
    r12 = arg0->word_4;
    r1 = 0u;
    if (r12 < 0u || r12 == 0) {
        guest::cpu()->r[13] += 4u;
        guest::cpu()->r[1] = r1;
        return 0u;
    }
L_69418c:;
    r2_1 = r1 >> 3;
    r3_1 = r1 & 7u;
    if ((lsr_r(u32(*gptr<u8>(r0 + r2_1 + 0xcu)), r3_1 & 0xff) & 1u) != 0) {  // (from the original)
        r1 = r1 + 1u;
        if (r12 > r1) {
            guest::preempt();
            goto L_69418c;
        }
        guest::cpu()->r[13] += 4u;
        guest::cpu()->r[1] = r1;
        return 0u;
    }
    r2_2 = r2_1 + r0;
    *gptr<u8>(r2_2 + 0xcu) = u8(u32(*gptr<u8>(r2_2 + 0xcu)) | lsl_r(1u, r3_1 & 0xff));  // (from the original)
    guest::cpu()->r[13] += 4u;
    r0_1 = *gptr<u32>(r0) * r1 + *gptr<u32>(r0 + 8u);
    guest::cpu()->r[1] = r1;
    return r0_1;
}

}  // namespace d_00694178
GUEST_EXPORT(0x00694178, d_00694178::f_00694178);

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
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r1_2 = 0;
    u32 r1_3 = 0;
    u32 r2_2 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r1_4 = 0;
    r0_1 = arg0->word_2c;
    r13 = r13 - 0x18u;  // (from the original)
    if (r0_1 == 0) {
        r13 = r13 + 0x18u;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return 0u;
    }
    if (r0_1 != r2) {
        r13 = r13 + 0x18u;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return 0u;
    }
    guest::cpu()->r[13] = r13;
    call_004f1294(r0, r1, r2, guest::cpu()->r[3]);
    r1_1 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    guest::cpu()->r[13] = r13;
    call_004edd20(r0, r1_1, r2_1, guest::cpu()->r[3]);
    r1_2 = r13;
    guest::cpu()->r[13] = r13;
    call_00745bd8(r0, r1_2, 0u, guest::cpu()->r[3]);
    r1_3 = guest::cpu()->r[1];
    r2_2 = guest::cpu()->r[2];
    *gptr<u32>(r1) = u32(*gptr<u32>(r13));
    *gptr<u32>(r1 + 4u) = u32(*gptr<u32>(r13 + 4u));
    *gptr<u32>(r1 + 8u) = u32(*gptr<u32>(r13 + 8u));
    r0_2 = r0 + 0xcu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_3 = call_007460e8(r0_2, r1_3, r2_2, guest::cpu()->r[3]);
    r1_4 = guest::cpu()->r[1];
    if (r0_3 == 0) {
        r13 = r13 + 0x18u;  // (from the original)
        guest::cpu()->r[1] = r1_4;
        guest::cpu()->r[13] = r13;
        return r0_3;
    }
    *gptr<u32>(r0 + 0x2cu) = u32(0u);  // (from the original)
    r13 = r13 + 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1_4;
    guest::cpu()->r[13] = r13;
    return 1u;
}

}  // namespace d_0069438c
GUEST_EXPORT(0x0069438c, d_0069438c::f_0069438c);

// f_00694918: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00694918 {

inline guest::global<u32, 0x00848130> global_00848130;  // (from the original)
inline constexpr guest::Function<0x004b4fc0, u32(u32, u32, u32, u32)> call_004b4fc0;  // (from the original)
inline constexpr guest::Function<0x00568984, u32(u32, u32, u32, u32)> call_00568984;  // (from the original)
inline constexpr guest::Function<0x0081b218, u32(u32, u32, u32, u32)> call_0081b218;  // (from the original)

u32 f_00694918(u32 r0, u32 r1, u32 r2_unused, u32 r3) {
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r1_1 = 0;
    u32 r0_3 = 0;
    u32 r3_1 = 0;
    u32 r0_4 = 0;
    u32 r0_5 = 0;
    u32 r1_2 = 0;
    u32 r0_6 = 0;
    u32 r3_2 = 0;
    u32 r1_3 = 0;
    u32 r2_1 = 0;
    u32 r0_7 = 0;
    u32 r0_8 = 0;
    u32 r1_4 = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r0_1 = r0 + 0x280u;  // (from the original)
    r0_2 = call_004b4fc0(r0_1, 0x84817cu, 1u, r3);  // (from the original)
    r1_1 = r0 + 0x540u;  // (from the original)
    r0_3 = r0 + 0x280u;  // (from the original)
    call_00568984(r0_3, r1_1, r0_2, 0u);
    r3_1 = guest::cpu()->r[3];
    r0_4 = r0 + 0x280u;  // (from the original)
    r0_5 = call_004b4fc0(r0_4, 0x84817cu, 1u, r3_1);  // (from the original)
    r1_2 = r0 + 0x568u;  // (from the original)
    r0_6 = r0 + 0x280u;  // (from the original)
    call_00568984(r0_6, r1_2, r0_5, 0u);
    r3_2 = guest::cpu()->r[3];
    *gptr<u32>(r0 + 0x614u) = u32(r1);  // (from the original)
    r1_3 = *global_00848130;
    r2_1 = *gptr<u32>(0x848130u + 4);  // (from the original)
    r0_7 = r0 + 0x14u;  // (from the original)
    r0_8 = call_0081b218(r0_7, r1_3, r2_1, r3_2);
    r1_4 = guest::cpu()->r[1];
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1_4;
    return r0_8;
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

inline guest::global<u32, 0x00848130> global_00848130;  // (from the original)
inline constexpr guest::Function<0x004b4fc0, u32(u32, u32, u32, u32)> call_004b4fc0;  // (from the original)
inline constexpr guest::Function<0x00568984, u32(u32, u32, u32, u32)> call_00568984;  // (from the original)
inline constexpr guest::Function<0x0081b218, u32(u32, u32, u32, u32)> call_0081b218;  // (from the original)

u32 f_00694b54(gptr<Object_00694b54_0> arg0, u32 r1_unused, u32 r2_unused, u32 r3) {
    u32 r0 = arg0.addr();
    u32 r5_1 = 0;
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r1_1 = 0;
    u32 r0_3 = 0;
    u32 r3_1 = 0;
    u32 r0_4 = 0;
    u32 r0_5 = 0;
    u32 r1_2 = 0;
    u32 r0_6 = 0;
    u32 r3_2 = 0;
    u32 r1_3 = 0;
    u32 r2_1 = 0;
    u32 r0_7 = 0;
    u32 r0_8 = 0;
    u32 r1_4 = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    arg0->byte_612 = u8(0u);
    arg0->byte_611 = u8(0u);
    r5_1 = ~0u;
    arg0->word_614 = u32(r5_1);
    r0_1 = r0 + 0x280u;  // (from the original)
    r0_2 = call_004b4fc0(r0_1, 0x84817cu, 1u, r3);  // (from the original)
    r1_1 = r0 + 0x540u;  // (from the original)
    r0_3 = r0 + 0x280u;  // (from the original)
    call_00568984(r0_3, r1_1, r0_2, 0u);
    r3_1 = guest::cpu()->r[3];
    r0_4 = r0 + 0x280u;  // (from the original)
    r0_5 = call_004b4fc0(r0_4, 0x84817cu, 1u, r3_1);  // (from the original)
    r1_2 = r0 + 0x568u;  // (from the original)
    r0_6 = r0 + 0x280u;  // (from the original)
    call_00568984(r0_6, r1_2, r0_5, 0u);
    r3_2 = guest::cpu()->r[3];
    *gptr<u32>(r0 + 0x614u) = u32(r5_1);  // (from the original)
    r1_3 = *global_00848130;
    r2_1 = *gptr<u32>(0x848130u + 4);  // (from the original)
    r0_7 = r0 + 0x14u;  // (from the original)
    r0_8 = call_0081b218(r0_7, r1_3, r2_1, r3_2);
    r1_4 = guest::cpu()->r[1];
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1_4;
    return r0_8;
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

inline guest::global<u32, 0x00848128> global_00848128;  // (from the original)
inline constexpr guest::Function<0x0081b218, u32(u32, u32, u32, u32)> call_0081b218;  // (from the original)

u32 f_006953b8(gptr<Object_006953b8_0> arg0, u32 r1, u32 r2) {
    u32 r0 = arg0.addr();
    u32 r4 = guest::cpu()->r[4];
    u32 r13 = guest::cpu()->r[13];
    u32 r14 = guest::cpu()->r[14];
    u32 r3_1 = 0;
    u32 ea_1 = 0;
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r0_2 = 0;
    u32 r1_2 = 0;
    u32 ea_2 = 0;
    u32 r4_1 = 0;
    r3_1 = u32(s32(s8(arg0->byte_611)));
    if (r3_1 == r1) {
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[4] = r4;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    ea_1 = r13 - 8;
    *gptr<u32>(ea_1) = u32(r4);
    *gptr<u32>(ea_1 + 4) = u32(r14);
    r13 = r13 - 8;
    arg0->byte_611 = u8(r1);
    arg0->byte_618 = u8(r2);
    r0_1 = r0 + 0x14u;  // (from the original)
    r1_1 = *global_00848128;
    r2_1 = *gptr<u32>(0x848128u + 4);  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_2 = call_0081b218(r0_1, r1_1, r2_1, r3_1);
    r1_2 = guest::cpu()->r[1];
    ea_2 = r13;
    r13 = r13 + 8;
    r4_1 = *gptr<u32>(ea_2);
    guest::cpu()->r[1] = r1_2;
    guest::cpu()->r[4] = r4_1;
    guest::cpu()->r[13] = r13;
    return r0_2;
}

}  // namespace d_006953b8
GUEST_EXPORT(0x006953b8, d_006953b8::f_006953b8);

// f_00695584: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00695584 {

inline constexpr guest::Function<0x0057b9dc, u32(u32, u32, u32, u32)> call_0057b9dc;  // (from the original)

u32 f_00695584(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r1_2 = 0;
    u32 r2_1 = 0;
    *gptr<u32>(r13 + 0xfffffff0u) = u32(r3);  // (from the original)
    r13 = r13 - 0x10;  // (from the original)
    *gptr<u32>(r13) = u32(*gptr<u32>(r13 + 0x10u));  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_1 = call_0057b9dc(r1, r0, r2, r3);
    r1_1 = guest::cpu()->r[1];
    if (r0_1 == 0) {
        r13 = r13 + 0x10;  // (from the original)
        guest::cpu()->r[1] = r1_1;
        guest::cpu()->r[13] = r13;
        return r0_1;
    }
    r1_2 = r0 + 0xeb54u;  // (from the original)
    r2_1 = *gptr<u32>(r1_2 + 4u);
    if (r2_1 != 0) {
        *gptr<u32>(r2_1) = u32(r0_1);
    }
    *gptr<u32>(r1_2 + 4u) = u32(*gptr<u32>(r1_2 + 4u) + 4u);
    r13 = r13 + 0x10;  // (from the original)
    guest::cpu()->r[1] = r1_2;
    guest::cpu()->r[13] = r13;
    return r0_1;
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

inline guest::global<u32, 0x00952c3c> global_00952c3c;  // (from the original)
inline constexpr guest::Function<0x002f74c8, u32(u32, u32, u32, u32)> call_002f74c8;  // (from the original)
inline constexpr guest::Function<0x002f74e0, u32(u32, u32, u32, u32)> call_002f74e0;  // (from the original)
inline constexpr guest::Function<0x0057b9dc, u32(u32, u32, u32, u32)> call_0057b9dc;  // (from the original)
inline constexpr guest::Function<0x0060e77c, u32(u32, u32, u32, u32)> call_0060e77c;  // (from the original)
inline constexpr guest::Function<0x006ee628, u32(u32, u32, u32, u32)> call_006ee628;  // (from the original)

u32 f_00695ce4(u32 r0, gptr<Object_00695ce4_1> arg1, float S0) {
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
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    float S0_1 = 0;
    u32 r0_2 = 0;
    u32 r2_2 = 0;
    u32 r3_2 = 0;
    float S0_2 = 0;
    u32 r0_3 = 0;
    u32 r2_3 = 0;
    u32 r3_3 = 0;
    u32 r0_4 = 0;
    u32 r2_4 = 0;
    u32 r3_4 = 0;
    float S0_3 = 0;
    u32 r0_5 = 0;
    u32 zf_1 = 0;
    u32 r1_2 = 0;
    u32 r0_6 = 0;
    u32 r0_7 = 0;
    u32 r1_3 = 0;
    u32 r0_8 = 0;
    u32 r0_9 = 0;
    u32 r0_10 = 0;
    u32 nf_1 = 0;
    u32 zf_2 = 0;
    u32 r2_5 = 0;
    u32 r1_4 = 0;
    float S0_4 = 0;
    u32 r3_5 = 0;
    u32 v_1 = 0;
    u32 r2_6 = 0;
    u32 r0_11 = 0;
    u32 r1_5 = 0;
    u32 r0_12 = 0;
    r6 = r1;
    r13 = r13 - 0x38u;  // (from the original)
    r8 = r0;
    if (r1 == 0) {
        goto L_695ea8;
    }
    r3 = u32(arg1->half_2);
    r2 = arg1->word_4;
    r4 = 0u;
    r5 = r4;
    r0 = r4;
    if (r3 == 0 || r3 >> 0x1f != (r3 & (r3 ^ r3)) >> 0x1f) {  // (from the original)
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
    if (s32(r3) > s32(r0)) {
        guest::preempt();
        goto L_695d14;
    }
L_695d3c:;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    r0_1 = call_002f74c8(r0, r1, r2, r3);
    r1_1 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    S0_1 = guest::cpu()->s[0];
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_1;
    r0_2 = call_002f74c8(r0_1, r1_1, r2_1, r3_1);
    r2_2 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    S0_2 = guest::cpu()->s[0];
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_2;
    r0_3 = call_002f74e0(0x400000u, r0_2, r2_2, r3_2);  // (from the original)
    r1 = guest::cpu()->r[1];
    r2_3 = guest::cpu()->r[2];
    r3_3 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
    if (r0_3 != 0) {
        guest::cpu()->r[13] = r13;
        guest::cpu()->s[0] = S0;
        r0_4 = call_002f74c8(r0_3, r1, r2_3, r3_3);
        r2_4 = guest::cpu()->r[2];
        r3_4 = guest::cpu()->r[3];
        S0_3 = guest::cpu()->s[0];
        guest::cpu()->r[13] = r13;
        guest::cpu()->s[0] = S0_3;
        r0_5 = call_002f74e0(0x10u, r0_4, r2_4, r3_4);  // (from the original)
        r1 = guest::cpu()->r[1];
        r3_3 = guest::cpu()->r[3];
        S0 = guest::cpu()->s[0];
        if (r0_5 == 0) {
            r5 = r5 + 1u;
        }
    }
    zf_1 = r0_1 == 0x9eu;  // (from the original)
    if (zf_1) {
        r5 = r5 + 2u;
        r4 = r4 + 1u;
    }
    if (*gptr<u32>(0x710cu + r8) < r4) {  // (from the original)
        r1_2 = *global_00952c3c;
        r0_6 = r8 + 0x14u;  // (from the original)
        guest::cpu()->r[13] = r13;
        guest::cpu()->s[0] = S0;
        r0_7 = call_0060e77c(r0_6, r1_2, r4, r3_3);
        r1 = guest::cpu()->r[1];
        r3_3 = guest::cpu()->r[3];
        S0 = guest::cpu()->s[0];
        if (r0_7 == 0) {
            goto L_695ea8;
        }
    }
    if (*gptr<u32>(0xe3e8u + r8) < r5) {  // (from the original)
        r1_3 = *global_00952c3c;
        r0_8 = r8 + 0x72f0u;  // (from the original)
        guest::cpu()->r[13] = r13;
        guest::cpu()->s[0] = S0;
        r0_9 = call_006ee628(r0_8, r1_3, r5, r3_3);
        r1 = guest::cpu()->r[1];
        S0 = guest::cpu()->s[0];
        if (r0_9 == 0) {
            goto L_695ea8;
        }
    }
    r0_10 = u32(*gptr<u16>(r6 + 2u));
    r7 = *gptr<u32>(r6 + 4u);
    r4 = 0u;
    nf_1 = r0_10 >> 0x1f;  // (from the original)
    zf_2 = r0_10 == 0;
    if (!zf_2 && nf_1 == 0u) {
        r9 = 0x887402u;  // (from the original)
        r5 = r8 + 0xeb54u;  // (from the original)
    }
    if (zf_2 || nf_1 != 0u) {
        goto L_695e9c;
    }
L_695e0c:;
    r2_5 = r7 + (r4 << 5);
    if (u32(*gptr<u16>(r2_5)) == u32(*gptr<u16>(r9))) {
        goto L_695eb4;
    }
    r1_4 = *gptr<u32>(r2_5 + 0xcu);  // (from the original)
    S0_4 = std::bit_cast<float>(*gptr<u32>(r2_5 + 8u));
    *gptr<u32>(r13 + 4u) = u32(*gptr<u32>(r2_5 + 4u));
    *gptr<u32>(r13 + 8u) = u32(std::bit_cast<u32>(S0_4));
    *gptr<u32>(r13 + 0xcu) = u32(r1_4);  // (from the original)
    r3_5 = r13 + 4u;
    *gptr<u16>(r13 + 0x10u) = u16(u32(*gptr<u16>(r2_5 + 0x10u)));  // (from the original)
    *gptr<u16>(r13 + 0x12u) = u16(u32(*gptr<u16>(r2_5 + 0x12u)));  // (from the original)
    *gptr<u16>(r13 + 0x14u) = u16(u32(*gptr<u16>(r2_5 + 0x14u)));  // (from the original)
    v_1 = *gptr<u16>(r2_5);
    r2_6 = r2_5 + 0x18u;  // (from the original)
    *gptr<u32>(r13) = u32(r13 + 0x10u);  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_4;
    r0_11 = call_0057b9dc(v_1, r8, r2_6, r3_5);
    r1 = guest::cpu()->r[1];
    S0 = guest::cpu()->s[0];
    if (r0_11 == 0) {
        goto L_695ea0;
    }
    r1_5 = *gptr<u32>(r5 + 4u);
    if (r1_5 != 0) {
        *gptr<u32>(r1_5) = u32(r0_11);
    }
L_695e80:;
    r4 = r4 + 1u;
    r1 = *gptr<u32>(r5 + 4u) + 4u;
    *gptr<u32>(r5 + 4u) = u32(r1);
    if (s32(u32(*gptr<u16>(r6 + 2u))) > s32(r4)) {
        guest::preempt();
        goto L_695e0c;
    }
L_695e9c:;
    r0_11 = 1u;
L_695ea0:;
    r13 = r13 + 0x38u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    return r0_11;
L_695ea8:;
    r13 = r13 + 0x38u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    return 0u;
L_695eb4:;
    r0_12 = *gptr<u32>(r5 + 4u);
    if (r0_12 != 0) {
        *gptr<u32>(r0_12) = u32(0u);
    }
    guest::preempt();
    goto L_695e80;
}

}  // namespace d_00695ce4
GUEST_EXPORT(0x00695ce4, d_00695ce4::f_00695ce4);

// f_0069697c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0069697c {

inline constexpr guest::Function<0x002fae84, u32(u32, u32, u32, u32)> call_002fae84;  // (from the original)
inline constexpr guest::Function<0x002faea4, u32(u32, u32, u32, u32)> call_002faea4;  // (from the original)
inline constexpr guest::Function<0x002fb328, u32(u32, u32, u32, u32)> call_002fb328;  // (from the original)
inline constexpr guest::Function<0x002fb94c, u32(u32, u32, u32, u32)> call_002fb94c;  // (from the original)
inline constexpr guest::Function<0x002fbd54, u32(u32, u32, u32, u32)> call_002fbd54;  // (from the original)
inline constexpr guest::Function<0x002fcb34, u32(u32, u32, u32, u32)> call_002fcb34;  // (from the original)
inline constexpr guest::Function<0x002fe7cc, u32(u32, u32, u32, u32)> call_002fe7cc;  // (from the original)
inline constexpr guest::Function<0x002feb00, u32(u32, u32, u32, u32)> call_002feb00;  // (from the original)
inline constexpr guest::Function<0x002ff8b0, u32(u32, u32, u32, u32)> call_002ff8b0;  // (from the original)
inline constexpr guest::Function<0x006fa728, u32(u32, u32, u32, u32)> call_006fa728;  // (from the original)
inline constexpr guest::Function<0x0070eeec, u32(u32, u32, u32, u32)> call_0070eeec;  // (from the original)
inline constexpr guest::Function<0x007201d0, u32(u32, u32, u32, u32)> call_007201d0;  // (from the original)
inline constexpr guest::Function<0x00724424, u32(u32, u32, u32, u32)> call_00724424;  // (from the original)
inline constexpr guest::Function<0x0076ce3c, u32(u32, u32, u32, u32)> call_0076ce3c;  // (from the original)
inline constexpr guest::Function<0x0076eec4, u32(u32, u32, u32, u32)> call_0076eec4;  // (from the original)
inline constexpr guest::Function<0x0076f018, u32(u32, u32, u32, u32)> call_0076f018;  // (from the original)
inline constexpr guest::Function<0x00770364, u32(u32, u32, u32, u32)> call_00770364;  // (from the original)

u32 f_0069697c(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r9 = guest::cpu()->r[9];
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r2_1 = 0;
    u32 r0_3 = 0;
    u32 r1_1 = 0;
    u32 r2_2 = 0;
    u32 r3_1 = 0;
    u32 r0_4 = 0;
    u32 r1_2 = 0;
    u32 r2_3 = 0;
    u32 r3_2 = 0;
    u32 r0_5 = 0;
    u32 r0_6 = 0;
    u32 r0_7 = 0;
    u32 r1_3 = 0;
    u32 r2_4 = 0;
    u32 r3_3 = 0;
    u32 r0_8 = 0;
    u32 r0_9 = 0;
    u32 r1_4 = 0;
    u32 r2_5 = 0;
    u32 r3_4 = 0;
    u32 r0_10 = 0;
    u32 r0_11 = 0;
    u32 r1_5 = 0;
    u32 r2_6 = 0;
    u32 r3_5 = 0;
    u32 r0_12 = 0;
    u32 r2_7 = 0;
    u32 r3_6 = 0;
    u32 r0_13 = 0;
    u32 r1_6 = 0;
    u32 r2_8 = 0;
    u32 r3_7 = 0;
    u32 r0_14 = 0;
    u32 r2_9 = 0;
    u32 r3_8 = 0;
    u32 r0_15 = 0;
    u32 r0_16 = 0;
    u32 r0_17 = 0;
    u32 r1_7 = 0;
    u32 r2_10 = 0;
    u32 r3_9 = 0;
    u32 r0_18 = 0;
    u32 r5_1 = 0;
    u32 r0_19 = 0;
    u32 r1_8 = 0;
    u32 r2_11 = 0;
    u32 r3_10 = 0;
    u32 r0_20 = 0;
    u32 r1_9 = 0;
    u32 r2_12 = 0;
    u32 r3_11 = 0;
    u32 r0_21 = 0;
    u32 r0_22 = 0;
    u32 r2_13 = 0;
    u32 r3_12 = 0;
    u32 r1_10 = 0;
    u32 r0_23 = 0;
    u32 r0_24 = 0;
    u32 r1_11 = 0;
    u32 r2_14 = 0;
    u32 r3_13 = 0;
    u32 r4_1 = 0;
    u32 r0_25 = 0;
    u32 r0_26 = 0;
    u32 r1_12 = 0;
    u32 r2_15 = 0;
    u32 r3_14 = 0;
    u32 r0_27 = 0;
    guest::cpu()->r[13] -= 0x20u;  // (from the original)
    r0_1 = call_002fae84(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    r9 = r0_1 + 0x53400u;  // (from the original)
    r8 = 0u;
L_696990:;
    r6 = 0u;
L_696994:;
    r0_2 = call_002faea4(r9, r6, r8, r3);
    r1 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r7 = r0_2;
    if (r0_2 == 0) {
        goto L_6969f4;
    } else {
        r5 = 0u;
    }
L_6969b0:;
    r4 = 0u;
    do {
L_6969b4:;
        r0_3 = call_00770364(r7, r4, r5, r3);
        r1_1 = guest::cpu()->r[1];
        r2_2 = guest::cpu()->r[2];
        r3_1 = guest::cpu()->r[3];
        r0_2 = call_002fcb34(r0_3, r1_1, r2_2, r3_1);
        r1 = guest::cpu()->r[1];
        r2_1 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        if (r0_2 == 0x95u) {  // (from the original)
            goto L_696d3c;
        }
        r4 = r4 + 1u;
        guest::preempt();
    } while (r4 < 0x10u);  // (from the original)
    r5 = r5 + 1u;
    if (r5 < 0x10u) {  // (from the original)
        guest::preempt();
        goto L_6969b0;
    }
L_6969f4:;
    r6 = r6 + 1u;
    if (r6 < 5u) {
        guest::preempt();
        goto L_696994;
    }
    r8 = r8 + 1u;
    if (r8 < 4u) {
        guest::preempt();
        goto L_696990;
    }
    r0_4 = call_002fb94c(r0_2, r1, r2_1, r3);
    r1_2 = guest::cpu()->r[1];
    r2_3 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    r5 = r0_4;
    r0_5 = r0_4 + 0x55a6u;  // (from the original)
    r0_6 = call_002fbd54(r0_5, r1_2, r2_3, r3_2);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0_6 == 0) {
        goto L_696b8c;
    } else {
        r6 = r5 + 0x6bd0u;  // (from the original)
        r4 = 0u;
    }
    do {
L_696a34:;
        r0_7 = call_00724424(r6, r4, 0u, r3);
        r1_3 = guest::cpu()->r[1];
        r2_4 = guest::cpu()->r[2];
        r3_3 = guest::cpu()->r[3];
        r0_8 = call_002fcb34(r0_7, r1_3, r2_4, r3_3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        if (r0_8 == 0x95u) {  // (from the original)
            goto L_696d3c;
        }
        r4 = r4 + 1u;
        guest::preempt();
    } while (r4 < 0x10u);  // (from the original)
    r6 = r5 + 0x6f10u;  // (from the original)
    r4 = 0u;
    do {
L_696a74:;
        r0_9 = call_007201d0(r6, r4, r2, r3);
        r1_4 = guest::cpu()->r[1];
        r2_5 = guest::cpu()->r[2];
        r3_4 = guest::cpu()->r[3];
        r0_10 = call_002fcb34(r0_9, r1_4, r2_5, r3_4);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        if (r0_10 == 0x95u) {  // (from the original)
            goto L_696d3c;
        }
        r4 = r4 + 1u;
        guest::preempt();
    } while (r4 < 0x28u);  // (from the original)
    r7 = r5 + 0x92f0u;  // (from the original)
    r6 = 0u;
L_696ab0:;
    r5 = 0u;
L_696ab4:;
    r4 = 0u;
    do {
L_696ab8:;
        r0_11 = call_0076eec4(r7, r6, r5, r4);
        r1_5 = guest::cpu()->r[1];
        r2_6 = guest::cpu()->r[2];
        r3_5 = guest::cpu()->r[3];
        r0_12 = call_002fcb34(r0_11, r1_5, r2_6, r3_5);
        r1 = guest::cpu()->r[1];
        r2_7 = guest::cpu()->r[2];
        r3_6 = guest::cpu()->r[3];
        if (r0_12 == 0x95u) {  // (from the original)
            goto L_696d3c;
        }
        r4 = r4 + 1u;
        guest::preempt();
    } while (r4 < 0xau);  // (from the original)
    r5 = r5 + 1u;
    if (r5 < 6u) {
        guest::preempt();
        goto L_696ab4;
    }
    r6 = r6 + 1u;
    if (r6 < 3u) {
        guest::preempt();
        goto L_696ab0;
    }
    r0_13 = call_002ff8b0(4u, r1, r2_7, r3_6);
    r1_6 = guest::cpu()->r[1];
    r2_8 = guest::cpu()->r[2];
    r3_7 = guest::cpu()->r[3];
    r0_14 = call_002fb328(r0_13, r1_6, r2_8, r3_7);
    r2_9 = guest::cpu()->r[2];
    r3_8 = guest::cpu()->r[3];
    r0_15 = r0_14 + 0x71900u;  // (from the original)
    r0_16 = call_0070eeec(r0_15, r0_13, r2_9, r3_8);
    r7 = r0_16;
    r6 = 0u;
L_696b34:;
    r5 = 0u;
L_696b38:;
    r4 = 0u;
    do {
L_696b3c:;
        r0_17 = call_0076f018(r7, r6, r5, r4);
        r1_7 = guest::cpu()->r[1];
        r2_10 = guest::cpu()->r[2];
        r3_9 = guest::cpu()->r[3];
        r0_18 = call_002fcb34(r0_17, r1_7, r2_10, r3_9);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        if (r0_18 == 0x95u) {  // (from the original)
            goto L_696d3c;
        }
        r4 = r4 + 1u;
        guest::preempt();
    } while (r4 < 0xau);  // (from the original)
    r5 = r5 + 1u;
    if (r5 < 9u) {
        guest::preempt();
        goto L_696b38;
    }
    r6 = r6 + 1u;
    if (r6 < 4u) {
        guest::preempt();
        goto L_696b34;
    }
L_696b8c:;
    r6 = 2u;
L_696b90:;
    r5_1 = r6 & 0xffu;  // (from the original)
    r0_19 = call_006fa728(r5_1, r1, r2, r3);
    r1_8 = guest::cpu()->r[1];
    r2_11 = guest::cpu()->r[2];
    r3_10 = guest::cpu()->r[3];
    r0 = call_002ff8b0(4u, r1_8, r2_11, r3_10);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 != r0_19) {
        goto L_696c44;
    }
    r0 = call_002fe7cc(r5_1, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r7 = r0;
    if (r0 == 0) {
        goto L_696c44;
    } else {
        r5 = 0u;
    }
L_696bc8:;
    r4 = 0u;
    do {
L_696bcc:;
        r0_20 = call_002feb00(r7, r4, r5, 0u);
        r1_9 = guest::cpu()->r[1];
        r2_12 = guest::cpu()->r[2];
        r3_11 = guest::cpu()->r[3];
        if (!(r0_20 == 0)) {
            r0_21 = call_002fcb34(r0_20, r1_9, r2_12, r3_11);
            r1 = guest::cpu()->r[1];
            if (r0_21 == 0x95u) {  // (from the original)
                goto L_696d3c;
            }
        }
        r0 = call_002feb00(r7, r4, r5, 1u);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        if (!(r0 == 0)) {
            r0 = call_002fcb34(r0, r1, r2, r3);
            r1 = guest::cpu()->r[1];
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
            if (r0 == 0x95u) {  // (from the original)
                goto L_696d3c;
            }
        }
        r4 = r4 + 1u;
        guest::preempt();
    } while (s32(r4) < s32(0x10u));  // (from the original)
    r5 = r5 + 1u;
    if (s32(r5) < s32(0x10u)) {  // (from the original)
        guest::preempt();
        goto L_696bc8;
    }
L_696c44:;
    r6 = r6 + 1u;
    if (s32(r6) < s32(0x1au)) {  // (from the original)
        guest::preempt();
        goto L_696b90;
    }
    r8 = 0xfff951c8u;  // (from the original)
    r6 = 0u;
L_696c58:;
    r0_22 = call_002fb328(r0, r1, r2, r3);
    r2_13 = guest::cpu()->r[2];
    r3_12 = guest::cpu()->r[3];
    r1_10 = r6 & 0xffu;  // (from the original)
    r0_23 = r0_22 + 0x80u - r8;  // (from the original)
    r0_24 = call_0076ce3c(r0_23, r1_10, r2_13, r3_12);
    r1_11 = guest::cpu()->r[1];
    r2_14 = guest::cpu()->r[2];
    r3_13 = guest::cpu()->r[3];
    r4_1 = u32(s32(s8(*gptr<u8>(r0_24))));
    r0 = call_002ff8b0(4u, r1_11, r2_14, r3_13);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r4_1 != r0) {
        goto L_696d28;
    }
    r0_25 = r6 + 0x1au & 0xffu;  // (from the original)
    r0 = call_002fe7cc(r0_25, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r7 = r0;
    if (r0 == 0) {
        goto L_696d28;
    } else {
        r5 = 0u;
    }
L_696cac:;
    r4 = 0u;
    do {
L_696cb0:;
        r0_26 = call_002feb00(r7, r4, r5, 0u);
        r1_12 = guest::cpu()->r[1];
        r2_15 = guest::cpu()->r[2];
        r3_14 = guest::cpu()->r[3];
        if (!(r0_26 == 0)) {
            r0_27 = call_002fcb34(r0_26, r1_12, r2_15, r3_14);
            r1 = guest::cpu()->r[1];
            if (r0_27 == 0x95u) {  // (from the original)
                goto L_696d3c;
            }
        }
        r0 = call_002feb00(r7, r4, r5, 1u);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        if (!(r0 == 0)) {
            r0 = call_002fcb34(r0, r1, r2, r3);
            r1 = guest::cpu()->r[1];
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
            if (r0 == 0x95u) {  // (from the original)
                goto L_696d3c;
            }
        }
        r4 = r4 + 1u;
        guest::preempt();
    } while (s32(r4) < s32(0x10u));  // (from the original)
    r5 = r5 + 1u;
    if (s32(r5) < s32(0x10u)) {  // (from the original)
        guest::preempt();
        goto L_696cac;
    }
L_696d28:;
    r6 = r6 + 1u;
    if (s32(r6) < s32(4u)) {
        guest::preempt();
        goto L_696c58;
    }
    guest::cpu()->r[13] += 0x20u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return 0u;
L_696d3c:;
    guest::cpu()->r[13] += 0x20u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return 1u;
}

}  // namespace d_0069697c
GUEST_EXPORT(0x0069697c, d_0069697c::f_0069697c);

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
    u32 r1_1 = 0;
    u32 r1_2 = 0;
    float S0_1 = 0;
    float S1_1 = 0;
    float S2_1 = 0;
    u32 r1_3 = 0;
    u32 r1_4 = 0;
    r0 = r0 + 0xecacu;  // (from the original)
    r3 = arg0->word_ecb0;
    r2 = arg0->word_ecac;
    if (r2 == r3) {
        guest::cpu()->r[1] = r1;
        guest::cpu()->s[0] = S0;
        guest::cpu()->s[1] = S1;
        return 0u;
    }
L_697ea8:;
    if (*gptr<u32>(r2) != r1) {
        goto L_697eec;
    }
    r1_1 = r3 - 0xcu;  // (from the original)
    *gptr<u32>(r0 + 4u) = u32(r1_1);
    if (r1_1 == r2) {
        guest::cpu()->r[1] = r1_1;
        guest::cpu()->s[0] = S0;
        guest::cpu()->s[1] = S1;
        return 1u;
    }
    do {
L_697ec4:;
        r1_2 = r2 + 0xcu;  // (from the original)
        S0_1 = std::bit_cast<float>(*gptr<u32>(r1_2));
        S1_1 = std::bit_cast<float>(*gptr<u32>(r1_2 + 4));
        S2_1 = std::bit_cast<float>(*gptr<u32>(r1_2 + 8));
        r1_3 = r2;
        r2 = r2 + 0xcu;  // (from the original)
        *gptr<u32>(r1_3) = u32(std::bit_cast<u32>(S0_1));
        *gptr<u32>(r1_3 + 4) = u32(std::bit_cast<u32>(S1_1));
        *gptr<u32>(r1_3 + 8) = u32(std::bit_cast<u32>(S2_1));
        r1_4 = *gptr<u32>(r0 + 4u);
        guest::preempt();
    } while (r1_4 != r2);
    guest::cpu()->r[1] = r1_4;
    guest::cpu()->s[0] = S0_1;
    guest::cpu()->s[1] = S1_1;
    return 1u;
L_697eec:;
    r2 = r2 + 0xcu;  // (from the original)
    if (r2 != r3) {
        guest::preempt();
        goto L_697ea8;
    }
    guest::cpu()->r[1] = r1;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    return 0u;
}

}  // namespace d_00697e88
GUEST_EXPORT(0x00697e88, d_00697e88::f_00697e88);

// f_00697f60: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00697f60 {

inline guest::global<u8, 0x009506b0> global_009506b0;  // (from the original)
inline guest::global<u32, 0x009506b4> global_009506b4;  // (from the original)
inline constexpr guest::Function<0x0014fd9c, u32(u32, u32, u32, u32)> call_0014fd9c;  // (from the original)
inline constexpr guest::Function<0x0014fda4, u32(u32, u32, u32, u32)> call_0014fda4;  // (from the original)
inline constexpr guest::Function<0x006dccb4, u32(u32, u32, u32, u32)> call_006dccb4;  // (from the original)

u32 f_00697f60(u32 r0, u32 r1, u32 r2) {
    u32 r4_1 = 0;
    u32 r0_1 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r6_1 = 0;
    u32 r2_2 = 0;
    u32 r3_2 = 0;
    u32 r1_1 = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r4_1 = r1;
    r0_1 = u32(*global_009506b0);
    if (r0_1 != 0xffu) {  // (from the original)
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        guest::cpu()->r[1] = r1;
        return r0_1;
    }
    r0_1 = *global_009506b4;
    if (r0_1 == 0) {
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        guest::cpu()->r[1] = r1;
        return r0_1;
    }
    r0_1 = call_006dccb4(r0_1, r0, r2, r0);
    r1 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    r6_1 = r0_1;
    if (r0_1 == 0) {
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        guest::cpu()->r[1] = r1;
        return r0_1;
    }
    r0_1 = call_0014fd9c(r0_1, r4_1, r2_1, r3_1);
    r1 = guest::cpu()->r[1];
    r2_2 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    if (r2 != 0) {
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        guest::cpu()->r[1] = r1;
        return r0_1;
    }
    r1_1 = r4_1 ^ 1u;
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    return call_0014fda4(r6_1, r1_1, r2_2, r3_2);
}

}  // namespace d_00697f60
GUEST_EXPORT(0x00697f60, d_00697f60::f_00697f60);

// f_0069858c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0069858c {

struct __attribute__((packed)) Object_0069858c_0 {
    u8 unknown_0[0xeb54];  // (not used here)
    u32 word_eb54;
    u32 word_eb58;
};
GUEST_OFFSET(Object_0069858c_0, word_eb54, 0xeb54);  // (from the original)
GUEST_OFFSET(Object_0069858c_0, word_eb58, 0xeb58);  // (from the original)


u32 f_0069858c(gptr<Object_0069858c_0> arg0, u32 r1, u32 r2) {
    u32 r3 = 0;
    u32 r12 = 0;
    u32 r0_1 = 0;
    r12 = r1;
    guest::cpu()->r[13] -= 8u;
    r1 = arg0->word_eb54;
    r3 = arg0->word_eb58;
    if (r1 == r3) {
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        return 0u;
    }
L_6985b4:;
    r0_1 = *gptr<u32>(r1);
    if (r0_1 == 0) {
        goto L_6985dc;
    }
    if (u32(*gptr<u8>(r0_1 + 0x95eu)) != r12) {  // (from the original)
        goto L_6985dc;
    }
    *gptr<u32>(r0_1 + 0x938u) = u32(r2);  // (from the original)
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r2;
    return 1u;
L_6985dc:;
    r1 = r1 + 4u;
    if (r1 != r3) {
        guest::preempt();
        goto L_6985b4;
    }
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1;
    return 0u;
}

}  // namespace d_0069858c
GUEST_EXPORT(0x0069858c, d_0069858c::f_0069858c);

// f_006985f0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006985f0 {


u32 f_006985f0(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r6 = guest::cpu()->r[6];
    u32 r12 = 0;
    u32 r4_1 = 0;
    u32 r5_1 = 0;
    u32 r4_2 = 0;
    u32 r5_2 = 0;
    u32 r4_3 = 0;
    u32 r6_1 = 0;
    u32 r4_4 = 0;
    u32 r5_3 = 0;
    u32 r4_5 = 0;
    guest::cpu()->r[13] -= 0xcu;  // (from the original)
    if (r1 == 0) {
        r12 = 0u;
        goto L_69864c;
    }
    r12 = r1 & 1u;
    r6 = 0u;
    if (r12 == 0 || r12 >> 0x1f != (r12 & (r12 ^ r12)) >> 0x1f) {  // (from the original)
        goto L_69864c;
    }
    do {
L_698610:;
        r4_1 = r0 + (r6 << 1);
        r5_1 = r3 - u32(s32(s8(*gptr<u8>(r4_1 + 1u))));
        r4_2 = r2 - u32(s32(s8(*gptr<u8>(r4_1))));
        if (r4_2 >> 0x1f != (r4_2 & (r4_2 ^ r4_2)) >> 0x1f) {  // (from the original)
            r4_2 = 0u - r4_2;
        }
        if (r5_1 >> 0x1f != (r5_1 & (r5_1 ^ r5_1)) >> 0x1f) {  // (from the original)
            r5_1 = 0u - r5_1;
        }
        if (s32(r4_2 + r5_1) < s32(0x19u)) {  // (from the original)
            guest::cpu()->r[13] += 0xcu;  // (from the original)
            return 0u;
        }
        r6 = r6 + 1u;
        guest::preempt();
    } while (s32(r6) < s32(r12));
L_69864c:;
    if (r12 >= r1) {
        guest::cpu()->r[13] += 0xcu;  // (from the original)
        return 1u;
    }
L_698654:;
    r5_2 = r0 + (r12 << 1);
    r4_3 = r2 - u32(s32(s8(*gptr<u8>(r5_2))));
    r6_1 = r3 - u32(s32(s8(*gptr<u8>(r5_2 + 1u))));
    if (r4_3 >> 0x1f != (r4_3 & (r4_3 ^ r4_3)) >> 0x1f) {  // (from the original)
        r4_3 = 0u - r4_3;
    }
    if (r6_1 >> 0x1f != (r6_1 & (r6_1 ^ r6_1)) >> 0x1f) {  // (from the original)
        r6_1 = 0u - r6_1;
    }
    if (s32(r4_3 + r6_1) < s32(0x19u)) {  // (from the original)
        guest::cpu()->r[13] += 0xcu;  // (from the original)
        return 0u;
    }
    r4_4 = u32(s32(s8(*gptr<u8>(r5_2 + 3u))));
    r5_3 = r2 - u32(s32(s8(*gptr<u8>(r5_2 + 2u))));
    r4_5 = r3 - r4_4;
    if (r5_3 >> 0x1f != (r5_3 & (r5_3 ^ r5_3)) >> 0x1f) {  // (from the original)
        r5_3 = 0u - r5_3;
    }
    if (r4_5 >> 0x1f != (r4_5 & (r4_5 ^ r4_5)) >> 0x1f) {  // (from the original)
        r4_5 = 0u - r4_5;
    }
    if (s32(r4_5 + r5_3) >= s32(0x19u)) {  // (from the original)
        goto L_6986bc;
    }
    guest::cpu()->r[13] += 0xcu;  // (from the original)
    return 0u;
L_6986bc:;
    r12 = r12 + 2u;
    if (r12 < r1) {
        guest::preempt();
        goto L_698654;
    }
    guest::cpu()->r[13] += 0xcu;  // (from the original)
    return 1u;
}

}  // namespace d_006985f0
GUEST_EXPORT(0x006985f0, d_006985f0::f_006985f0);

// f_00698ac0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00698ac0 {

inline constexpr guest::Function<0x002fae84, u32(u32, u32, u32, u32)> call_002fae84;  // (from the original)
inline constexpr guest::Function<0x002fb328, u32(u32, u32, u32, u32)> call_002fb328;  // (from the original)
inline constexpr guest::Function<0x002fb94c, u32(u32, u32, u32, u32)> call_002fb94c;  // (from the original)
inline constexpr guest::Function<0x002fdf10, u32(u32, u32, u32, u32)> call_002fdf10;  // (from the original)
inline constexpr guest::Function<0x00300904, u32(u32, u32, u32, u32)> call_00300904;  // (from the original)

u32 f_00698ac0(u32 r0, u32 r1) {
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r1_2 = 0;
    u32 res_1 = 0;
    u32 r0_4 = 0;
    u32 r1_3 = 0;
    u32 r0_5 = 0;
    u32 r1_4 = 0;
    u32 r0_6 = 0;
    u32 r0_7 = 0;
    u32 r1_5 = 0;
    u32 r0_8 = 0;
    u32 r0_9 = 0;
    u32 r1_6 = 0;
    guest::cpu()->r[13] -= 8u;
    r0_1 = call_002fb94c(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_1 = guest::cpu()->r[1];
    if (r0_1 != 0) {
        r1_1 = u32(*gptr<u8>(0x8aa3u + r0_1));  // (from the original)
        if ((r1_1 & 8u) != 0) {
            r0_2 = call_002fae84(r0_1, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);
            r0_3 = r0_2 + 0x70e62u;  // (from the original)
            r1_2 = u32(*gptr<u8>(r0_3 + 9u)) | 2u;
            *gptr<u8>(r0_3 + 9u) = u8(r1_2);
            guest::cpu()->r[13] += 8u;
            guest::cpu()->r[1] = r1_2;
            return 0u;
        }
        res_1 = u32(*gptr<u8>(r0_1 + 0x5701u)) << 0x1e;  // (from the original)
        if (!(res_1 >> 0x1f)) {  // (from the original)
            guest::cpu()->r[13] += 8u;
            guest::cpu()->r[1] = r1_1;
            return 0u;
        }
    }
    r0_4 = call_002fdf10(0xdu, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    r1_3 = guest::cpu()->r[1];
    if (r0_4 != 0) {
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1_3;
        return 0u;
    }
    r0_5 = call_002fb328(r0_4, r1_3, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_4 = guest::cpu()->r[1];
    r0_6 = u32(*gptr<u8>(r0_5 + 0x80u + 0x70e62u + 9u));  // (from the original)
    if ((r0_6 & 1u) == 0) {
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1_4;
        return 0u;
    }
    r0_7 = call_002fb328(r0_6, r1_4, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_5 = guest::cpu()->r[1];
    r0_8 = u32(*gptr<u8>(r0_7 + 0x80u + 0x70e62u + 9u));  // (from the original)
    if ((r0_8 & 2u) != 0) {
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1_5;
        return 0u;
    }
    r0_9 = call_00300904(r0_8, r1_5, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_6 = guest::cpu()->r[1];
    if (r0_9 == 0) {
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1_6;
        return 1u;
    }
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1_6;
    return 0u;
}

}  // namespace d_00698ac0
GUEST_EXPORT(0x00698ac0, d_00698ac0::f_00698ac0);

// f_0069a214: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0069a214 {

inline guest::global<u8, 0x009506b0> global_009506b0;  // (from the original)
inline guest::global<u32, 0x009506b4> global_009506b4;  // (from the original)
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
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r0_2 = 0;
    u32 r1_1 = 0;
    u32 r2_2 = 0;
    u32 r3_2 = 0;
    u32 r2_3 = 0;
    u32 r3_3 = 0;
    u32 r0_3 = 0;
    u32 r1_2 = 0;
    u32 r2_4 = 0;
    u32 r3_4 = 0;
    u32 r0_4 = 0;
    u32 r2_5 = 0;
    u32 r3_5 = 0;
    u32 r4_1 = 0;
    u32 r7_1 = 0;
    u32 r1_3 = 0;
    u32 r2_6 = 0;
    u32 r3_6 = 0;
    u32 r5_1 = 0;
    u32 r1_4 = 0;
    u32 r0_5 = 0;
    u32 r1_5 = 0;
    u32 r2_7 = 0;
    u32 r3_7 = 0;
    u32 r2_8 = 0;
    u32 r3_8 = 0;
    u32 r2_9 = 0;
    u32 r3_9 = 0;
    u32 r2_10 = 0;
    u32 r3_10 = 0;
    u32 r1_6 = 0;
    u32 r3_11 = 0;
    u32 r1_7 = 0;
    u32 r2_11 = 0;
    u32 r3_12 = 0;
    u32 r2_12 = 0;
    u32 r3_13 = 0;
    u32 r1_8 = 0;
    u32 r0_6 = 0;
    u32 r0_7 = 0;
    u32 r2_13 = 0;
    u32 r3_14 = 0;
    u32 r1_9 = 0;
    u32 r0_8 = 0;
    u32 r0_9 = 0;
    u32 r2_14 = 0;
    u32 r3_15 = 0;
    u32 r1_10 = 0;
    u32 r0_10 = 0;
    u32 r1_11 = 0;
    *gptr<u32>(r13 + 0xffffffe0u) = u32(r3);  // (from the original)
    r13 = r13 - 0x20;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_1 = call_002f74c8(r0, r1, r2, r3);
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0_2 = call_002f74e0(0x20u, r0_1, r2_1, r3_1);  // (from the original)
    r1_1 = guest::cpu()->r[1];
    r2_2 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    if (r0_2 == 0) {
        goto L_69a394;
    }
    guest::cpu()->r[13] = r13;
    r0_2 = call_003170f8(3u, 0u, r2_2, r3_2);
    r1_1 = guest::cpu()->r[1];
    r2_3 = guest::cpu()->r[2];
    r3_3 = guest::cpu()->r[3];
    if (r0_2 != 0) {
        goto L_69a394;
    }
    guest::cpu()->r[13] = r13;
    r0_3 = call_002fae84(r0_2, r1_1, r2_3, r3_3);
    r1_2 = guest::cpu()->r[1];
    r2_4 = guest::cpu()->r[2];
    r3_4 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0_4 = call_002fb310(r0_3, r1_2, r2_4, r3_4);
    r2_5 = guest::cpu()->r[2];
    r3_5 = guest::cpu()->r[3];
    r4_1 = r0 + 0xf000u;  // (from the original)
    r7_1 = r0_4 + 4u;
    r1_3 = *gptr<u32>(r4_1 + 0x120u);  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_2 = call_003058c8(r7_1, r1_3, r2_5, r3_5);
    r1_1 = guest::cpu()->r[1];
    r2_6 = guest::cpu()->r[2];
    r3_6 = guest::cpu()->r[3];
    r5_1 = r0_2;
    if (r0_2 == 0) {
        goto L_69a394;
    }
    r0_2 = u32(*global_009506b0);
    if (r0_2 != 0xffu) {  // (from the original)
        goto L_69a394;
    }
    r0_2 = *global_009506b4;
    if (r0_2 == 0) {
        goto L_69a394;
    }
    r1_4 = *gptr<u32>(r4_1 + 0x120u);  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_5 = call_006dccb4(r0_2, r1_4, r2_6, r3_6);
    r1_5 = guest::cpu()->r[1];
    r2_7 = guest::cpu()->r[2];
    r3_7 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0_2 = call_0052c878(r0_5, r1_5, r2_7, r3_7);
    r1_1 = guest::cpu()->r[1];
    r2_8 = guest::cpu()->r[2];
    r3_8 = guest::cpu()->r[3];
    if (r0_2 == r0_5) {
        goto L_69a394;
    }
    r0_2 = u32(*gptr<u8>(0x250fu + r5_1));  // (from the original)
    if (r0_2 != 2u) {
        if (r0_2 != 0x17u) {  // (from the original)
            goto L_69a394;
        }
        guest::cpu()->r[13] = r13;
        r0_2 = call_00309ac8(r5_1, 0u, r2_8, r3_8);
        r1_1 = guest::cpu()->r[1];
        r2_9 = guest::cpu()->r[2];
        r3_9 = guest::cpu()->r[3];
        if (r0_2 != 0) {
            goto L_69a394;
        }
        guest::cpu()->r[13] = r13;
        call_001139fc(r5_1, 2u, r2_9, r3_9);
        r2_10 = guest::cpu()->r[2];
        r3_10 = guest::cpu()->r[3];
        r1_6 = *gptr<u32>(r4_1 + 0x120u);  // (from the original)
        if (u32(*global_009506b0) != 0xffu) {  // (from the original)
            goto L_69a3c8;
        }
        goto L_69a398;
    }
    guest::cpu()->r[13] = r13;
    r0_2 = call_00309ac8(r5_1, 0u, r2_8, r3_8);
    r1_1 = guest::cpu()->r[1];
    r3_11 = guest::cpu()->r[3];
    if (r0_2 == 0) {
        goto L_69a394;
    }
    r1_7 = *gptr<u32>(r4_1 + 0x120u);  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_2 = call_00119714(r7_1, r1_7, 0u, r3_11);
    r1_1 = guest::cpu()->r[1];
    r2_11 = guest::cpu()->r[2];
    r3_12 = guest::cpu()->r[3];
    if (r0_2 != 0) {
        goto L_69a394;
    }
    guest::cpu()->r[13] = r13;
    call_001139fc(r5_1, 0x17u, r2_11, r3_12);  // (from the original)
    r2_12 = guest::cpu()->r[2];
    r3_13 = guest::cpu()->r[3];
    r1_8 = *gptr<u32>(r4_1 + 0x120u);  // (from the original)
    if (u32(*global_009506b0) != 0xffu) {  // (from the original)
        goto L_69a378;
    }
    r0_6 = *global_009506b4;
    if (r0_6 == 0) {
        goto L_69a378;
    }
    guest::cpu()->r[13] = r13;
    r0_7 = call_006dccb4(r0_6, r1_8, r2_12, r3_13);
    r2_12 = guest::cpu()->r[2];
    r3_13 = guest::cpu()->r[3];
    if (r0_7 == 0) {
        goto L_69a378;
    }
    guest::cpu()->r[13] = r13;
    call_0014fd9c(r0_7, 1u, r2_12, r3_13);
    r2_13 = guest::cpu()->r[2];
    r3_14 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    call_0014fda4(r0_7, 0u, r2_13, r3_14);
    r2_12 = guest::cpu()->r[2];
    r3_13 = guest::cpu()->r[3];
L_69a378:;
    *gptr<u8>(r13) = u8(*gptr<u32>(r4_1 + 0x120u));  // (from the original)
    *gptr<u8>(r13 + 1u) = u8(0u);
    r1_9 = r13;
    guest::cpu()->r[13] = r13;
    r0_2 = call_007d1090(4u, r1_9, r2_12, r3_13);
    r1_1 = guest::cpu()->r[1];
L_69a394:;
    r13 = r13 + 0x20;  // (from the original)
    guest::cpu()->r[1] = r1_1;
    guest::cpu()->r[13] = r13;
    return r0_2;
L_69a398:;
    r0_8 = *global_009506b4;
    if (r0_8 == 0) {
        goto L_69a3c8;
    }
    guest::cpu()->r[13] = r13;
    r0_9 = call_006dccb4(r0_8, r1_6, r2_10, r3_10);
    r2_10 = guest::cpu()->r[2];
    r3_10 = guest::cpu()->r[3];
    if (r0_9 == 0) {
        goto L_69a3c8;
    }
    guest::cpu()->r[13] = r13;
    call_0014fd9c(r0_9, 0u, r2_10, r3_10);
    r2_14 = guest::cpu()->r[2];
    r3_15 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    call_0014fda4(r0_9, 1u, r2_14, r3_15);
    r2_10 = guest::cpu()->r[2];
    r3_10 = guest::cpu()->r[3];
L_69a3c8:;
    *gptr<u8>(r13) = u8(*gptr<u32>(r4_1 + 0x120u));  // (from the original)
    *gptr<u8>(r13 + 1u) = u8(1u);
    r1_10 = r13;
    guest::cpu()->r[13] = r13;
    r0_10 = call_007d1090(4u, r1_10, r2_10, r3_10);
    r1_11 = guest::cpu()->r[1];
    r13 = r13 + 0x20;  // (from the original)
    guest::cpu()->r[1] = r1_11;
    guest::cpu()->r[13] = r13;
    return r0_10;
}

}  // namespace d_0069a214
GUEST_EXPORT(0x0069a214, d_0069a214::f_0069a214);

// f_0069a764: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0069a764 {


u32 f_0069a764(u32 r0, u32 r1, u32 r2) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r6_1 = 0;
    u32 r0_2 = 0;
    guest::cpu()->r[13] -= 0x18u;  // (from the original)
    r8 = r1;
    r7 = r2;
    r4 = 0u;
    r5 = r0 + 0xeb54u;  // (from the original)
L_69a77c:;
    r0_1 = *gptr<u32>(r5);
    r1_1 = u32(s32(*gptr<u32>(r5 + 4) - r0_1) >> 2);
    if (r4 >= r1_1) {
        goto L_69a7c4;
    }
    r6_1 = *gptr<u32>(r0_1 + (r4 << 2));
    if (r6_1 == 0) {
        goto L_69a7c4;
    }
    if (u32(*gptr<u16>(r6_1 + 0xcu)) != r7) {  // (from the original)
        goto L_69a7c4;
    }
    r0_2 = r6_1;
    r1_1 = *gptr<u32>(0x1030u + r6_1);  // (from the original)
    if (r1_1 == r8) {
        goto L_69a7d4;
    }
L_69a7c4:;
    r4 = r4 + 1u;
    if (r4 < 0xau) {  // (from the original)
        guest::preempt();
        goto L_69a77c;
    }
    r0_2 = 0u;
L_69a7d4:;
    guest::cpu()->r[13] += 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1_1;
    return r0_2;
}

}  // namespace d_0069a764
GUEST_EXPORT(0x0069a764, d_0069a764::f_0069a764);

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
    u32 r2 = 0;
    u32 r3 = 0;
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    r2 = arg0->word_eb54;
    r3 = arg0->word_eb58;
    if (r2 == r3) {
        guest::cpu()->r[1] = r1;
        return 0u;
    }
L_69a93c:;
    r0_1 = *gptr<u32>(r2);
    if (r0_1 == 0) {
        goto L_69a960;
    }
    if (u32(*gptr<u8>(r0_1 + 0x95eu)) != r1) {  // (from the original)
        goto L_69a960;
    }
    r1_1 = *gptr<u32>(*gptr<u32>(r0_1) + 0xf0u);  // (from the original)
    return guest::call_address<u32>(r1_1, r0_1, r1_1, r2, r3);
L_69a960:;
    r2 = r2 + 4u;
    if (r2 != r3) {
        guest::preempt();
        goto L_69a93c;
    }
    guest::cpu()->r[1] = r1;
    return 0u;
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
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r0_2 = 0;
    u32 r3_2 = 0;
    u32 r1_2 = 0;
    u32 r2_2 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r1_3 = 0;
    u32 r2_3 = 0;
    u32 r3_3 = 0;
    u32 r0_5 = 0;
    u32 r1_4 = 0;
    u32 r2_4 = 0;
    u32 r3_4 = 0;
    u32 r0_6 = 0;
    u32 r0_7 = 0;
    u32 r1_5 = 0;
    u32 r2_5 = 0;
    u32 r3_5 = 0;
    u32 r0_8 = 0;
    u32 r0_9 = 0;
    u32 r0_10 = 0;
    u32 r1_6 = 0;
    u32 r2_6 = 0;
    u32 r3_6 = 0;
    u32 r0_11 = 0;
    u32 r1_7 = 0;
    u32 r2_7 = 0;
    u32 r3_7 = 0;
    u32 res_1 = 0;
    u32 r0_12 = 0;
    u32 r0_13 = 0;
    u32 r1_8 = 0;
    r13 = r13 - 0x20u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_1 = call_00300904(r0, r1, r2, r3);
    r1_1 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    if (r0_1 != 0) {
        r13 = r13 + 0x20u;  // (from the original)
        guest::cpu()->r[1] = r1_1;
        guest::cpu()->r[13] = r13;
        return 0u;
    }
    r0_2 = r13 + 0xcu;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_00300650(r0_2, r1_1, r2_1, r3_1);
    r3_2 = r13 + 0xcu;  // (from the original)
    r1_2 = *gptr<u32>(r3_2 + 4);
    r2_2 = *gptr<u32>(r3_2 + 8);
    *gptr<u32>(r13) = u32(*gptr<u32>(r3_2));
    *gptr<u32>(r13 + 4) = u32(r1_2);
    *gptr<u32>(r13 + 8) = u32(r2_2);
    r0_3 = r13;
    guest::cpu()->r[13] = r13;
    r0_4 = call_0074fff8(r0_3, 0u, r2_2, r3_2);
    r1_3 = guest::cpu()->r[1];
    r2_3 = guest::cpu()->r[2];
    r3_3 = guest::cpu()->r[3];
    if (r0_4 == 0) {
        r13 = r13 + 0x20u;  // (from the original)
        guest::cpu()->r[1] = r1_3;
        guest::cpu()->r[13] = r13;
        return 0u;
    }
    guest::cpu()->r[13] = r13;
    r0_5 = call_002fb378(r0_4, r1_3, r2_3, r3_3);
    r1_4 = guest::cpu()->r[1];
    r2_4 = guest::cpu()->r[2];
    r3_4 = guest::cpu()->r[3];
    r0_6 = u32(s32(s8(*gptr<u8>(r0_5 + 7u))));
    if (s32(r0_6) < s32(6u)) {
        r13 = r13 + 0x20u;  // (from the original)
        guest::cpu()->r[1] = r1_4;
        guest::cpu()->r[13] = r13;
        return 0u;
    }
    guest::cpu()->r[13] = r13;
    r0_7 = call_002fb378(r0_6, r1_4, r2_4, r3_4);
    r1_5 = guest::cpu()->r[1];
    r2_5 = guest::cpu()->r[2];
    r3_5 = guest::cpu()->r[3];
    r0_8 = u32(*gptr<u8>(r0_7 + 6u));
    if (r0_8 == 0) {
        guest::cpu()->r[13] = r13;
        r0_9 = call_002fb378(r0_8, r1_5, r2_5, r3_5);
        r1_5 = guest::cpu()->r[1];
        r2_5 = guest::cpu()->r[2];
        r3_5 = guest::cpu()->r[3];
        r0_8 = u32(s32(s8(*gptr<u8>(r0_9 + 7u))));
        if (s32(r0_8) < s32(0xcu)) {  // (from the original)
            r13 = r13 + 0x20u;  // (from the original)
            guest::cpu()->r[1] = r1_5;
            guest::cpu()->r[13] = r13;
            return 0u;
        }
    }
    guest::cpu()->r[13] = r13;
    r0_10 = call_0062f950(r0_8, r1_5, r2_5, r3_5);
    r1_6 = guest::cpu()->r[1];
    r2_6 = guest::cpu()->r[2];
    r3_6 = guest::cpu()->r[3];
    if (r0_10 != 0) {
        r13 = r13 + 0x20u;  // (from the original)
        guest::cpu()->r[1] = r1_6;
        guest::cpu()->r[13] = r13;
        return 0u;
    }
    guest::cpu()->r[13] = r13;
    r0_11 = call_002fb94c(r0_10, r1_6, r2_6, r3_6);
    r1_7 = guest::cpu()->r[1];
    r2_7 = guest::cpu()->r[2];
    r3_7 = guest::cpu()->r[3];
    if (r0_11 == 0) {
        r13 = r13 + 0x20u;  // (from the original)
        guest::cpu()->r[1] = r1_7;
        guest::cpu()->r[13] = r13;
        return 1u;
    }
    res_1 = u32(*gptr<u8>(0x5701u + r0_11)) << 0x1e;  // (from the original)
    if (!(res_1 >> 0x1f)) {  // (from the original)
        r13 = r13 + 0x20u;  // (from the original)
        guest::cpu()->r[1] = res_1;
        guest::cpu()->r[13] = r13;
        return 0u;
    }
    r0_12 = r0_11 + 0x55dcu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_13 = call_00716128(r0_12, res_1, r2_7, r3_7);
    r1_8 = guest::cpu()->r[1];
    if (r0_13 == 0) {
        r13 = r13 + 0x20u;  // (from the original)
        guest::cpu()->r[1] = r1_8;
        guest::cpu()->r[13] = r13;
        return r0_13;
    }
    r13 = r13 + 0x20u;  // (from the original)
    guest::cpu()->r[1] = r1_8;
    guest::cpu()->r[13] = r13;
    return 1u;
}

}  // namespace d_0069aec4
GUEST_EXPORT(0x0069aec4, d_0069aec4::f_0069aec4);

// f_0069b0ac: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0069b0ac {

inline guest::global<u32, 0x0069b3e0> global_0069b3e0;  // (from the original)
inline guest::global<u32, 0x0069b3e4> global_0069b3e4;  // (from the original)
inline guest::global<u32, 0x0085f2cc> global_0085f2cc;  // (from the original)
inline guest::global<u32, 0x0088129c> global_0088129c;  // (from the original)
inline guest::global<u32, 0x008812a0> global_008812a0;  // (from the original)
inline guest::global<u16, 0x00887292> global_00887292;  // (from the original)
inline guest::global<u16, 0x0088729a> global_0088729a;  // (from the original)
inline guest::global<u16, 0x0088729c> global_0088729c;  // (from the original)
inline guest::global<u8, 0x008c9f1c> global_008c9f1c;  // (from the original)
inline guest::global<u8, 0x0095013e> global_0095013e;  // (from the original)
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
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r13 = guest::cpu()->r[13];
    u32 r4_1 = 0;
    u32 r0_1 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    float S0_1 = 0;
    float S1_1 = 0;
    float S2_1 = 0;
    float S3_1 = 0;
    u32 r2_2 = 0;
    u32 r3_2 = 0;
    float S2_2 = 0;
    float S3_2 = 0;
    u32 r3_3 = 0;
    float S2_3 = 0;
    float S3_3 = 0;
    u32 res_1 = 0;
    u32 r1_1 = 0;
    u32 r0_2 = 0;
    u32 r3_4 = 0;
    float S0_2 = 0;
    float S1_2 = 0;
    float S2_4 = 0;
    float S3_4 = 0;
    u32 ea_1 = 0;
    u32 ea_2 = 0;
    u32 ea_3 = 0;
    u32 ea_4 = 0;
    u32 r1_2 = 0;
    u32 r2_3 = 0;
    u32 r0_3 = 0;
    float S3_5 = 0;
    float S0_3 = 0;
    float S1_3 = 0;
    float S2_5 = 0;
    float S0_4 = 0;
    u32 r3_5 = 0;
    u32 r1_3 = 0;
    u32 r2_4 = 0;
    u32 r0_4 = 0;
    u32 res_2 = 0;
    u32 r0_5 = 0;
    float S0_5 = 0;
    float S1_4 = 0;
    float S2_6 = 0;
    float S3_6 = 0;
    u32 r1_4 = 0;
    u32 r2_5 = 0;
    u32 r0_6 = 0;
    u32 r3_6 = 0;
    u32 res_3 = 0;
    u32 res_4 = 0;
    u32 r0_7 = 0;
    u32 r2_6 = 0;
    u32 r3_7 = 0;
    float S0_6 = 0;
    float S1_5 = 0;
    float S2_7 = 0;
    float S3_7 = 0;
    u32 r0_8 = 0;
    float S3_8 = 0;
    float S1_6 = 0;
    float S2_8 = 0;
    u32 r3_8 = 0;
    float S0_7 = 0;
    u32 r1_5 = 0;
    u32 r2_7 = 0;
    u32 r0_9 = 0;
    u32 r0_10 = 0;
    u32 r1_6 = 0;
    u32 r2_8 = 0;
    u32 r3_9 = 0;
    float S0_8 = 0;
    float S1_7 = 0;
    float S2_9 = 0;
    float S3_9 = 0;
    u32 r0_11 = 0;
    u32 r1_7 = 0;
    float S0_9 = 0;
    float S1_8 = 0;
    r13 = r13 - 0x58u;  // (from the original)
    r4_1 = r0;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2;
    guest::cpu()->s[3] = S3;
    r0_1 = call_002f74c8(r0, r1, r2, r3);
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    S0_1 = guest::cpu()->s[0];
    S1_1 = guest::cpu()->s[1];
    S2_1 = guest::cpu()->s[2];
    S3_1 = guest::cpu()->s[3];
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_1;
    guest::cpu()->s[1] = S1_1;
    guest::cpu()->s[2] = S2_1;
    guest::cpu()->s[3] = S3_1;
    r0 = call_002f74e0(0x10u, r0_1, r2_1, r3_1);  // (from the original)
    r1 = guest::cpu()->r[1];
    r2_2 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    S2_2 = guest::cpu()->s[2];
    S3_2 = guest::cpu()->s[3];
    if (r0 != 0) {
        goto L_69b1fc;
    }
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2_2;
    guest::cpu()->s[3] = S3_2;
    r0 = call_002fb94c(r0, r1, r2_2, r3_2);
    r1 = guest::cpu()->r[1];
    r3_3 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    S2_3 = guest::cpu()->s[2];
    S3_3 = guest::cpu()->s[3];
    if (r0 == 0) {
        goto L_69b1fc;
    }
    r1 = u32(*gptr<u8>(0x5704u + r0));  // (from the original)
    r5 = r4_1 + 0xeb54u;  // (from the original)
    res_1 = r1 >> 7;
    if (res_1 == 0) {
        goto L_69b204;
    }
    r0 = u32(*global_0095013e);
    if (r0 == 0) {
        goto L_69b1fc;
    }
    r1_1 = r13 + 8u;
    r0_2 = r13 + 4u;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2_3;
    guest::cpu()->s[3] = S3_3;
    call_006fa76c(r0_2, r1_1, res_1, r3_3);
    r3_4 = guest::cpu()->r[3];
    S0_2 = guest::cpu()->s[0];
    S1_2 = guest::cpu()->s[1];
    S2_4 = guest::cpu()->s[2];
    S3_4 = guest::cpu()->s[3];
    ea_1 = r13 + 0x1cu;  // (from the original)
    *gptr<u16>(ea_1) = u16(0u);
    ea_2 = r13 + 0x1eu;  // (from the original)
    *gptr<u16>(ea_2) = u16(0xffffc000u);  // (from the original)
    ea_3 = r13 + 0x20u;  // (from the original)
    *gptr<u16>(ea_3) = u16(0u);
    ea_4 = r13 + 4u;
    r1_2 = *gptr<u32>(ea_4);
    r2_3 = *gptr<u32>(ea_4 + 4);
    r0_3 = r13 + 0x10u;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_2;
    guest::cpu()->s[1] = S1_2;
    guest::cpu()->s[2] = S2_4;
    guest::cpu()->s[3] = S3_4;
    call_006a5f0c(r0_3, r1_2, r2_3, r3_4);
    S3_5 = guest::cpu()->s[3];
    S0_3 = std::bit_cast<float>(*gptr<u32>(r13 + 0x10u));  // (from the original)
    *gptr<u32>(r13 + 0x28u) = u32(*gptr<u32>(r13 + 0x14u));  // (from the original)
    S1_3 = std::bit_cast<float>(*gptr<u32>(r13 + 0x18u));  // (from the original)
    S2_5 = std::bit_cast<float>(*global_0088129c);
    *gptr<u32>(r13 + 0x24u) = u32(std::bit_cast<u32>(S0_3 + S2_5));  // (from the original)
    S0_4 = S1_3 - std::bit_cast<float>(*global_008812a0);
    r3_5 = r13 + 0x24u;  // (from the original)
    *gptr<u32>(r13 + 0x2cu) = u32(std::bit_cast<u32>(S0_4));  // (from the original)
    r1_3 = u32(*global_008c9f1c);
    *gptr<u8>(r13 + 0x30u) = u8(1u);  // (from the original)
    r2_4 = r13 + 0x30u;  // (from the original)
    *gptr<u8>(r13 + 0x31u) = u8(0u);  // (from the original)
    *gptr<u32>(r13 + 0x34u) = u32((((r6 & ~0xffu | 0x73u) & ~0xff00u | 0x7au << 8 & 0xff00u) & ~0xff0000u | 0x61u << 0x10 & 0xff0000u) & ~0xff000000u | r1_3 << 0x18);  // (from the original)
    r0_4 = u32(*global_0088729c);
    *gptr<u32>(r13) = u32(r13 + 0x1cu);  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_4;
    guest::cpu()->s[1] = S1_3;
    guest::cpu()->s[2] = S2_5;
    guest::cpu()->s[3] = S3_5;
    r0 = call_0057b9dc(r0_4, r4_1, r2_4, r3_5);
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
    res_2 = r1 << 0x1a;  // (from the original)
    if (!(res_2 >> 0x1f)) {  // (from the original)
        goto L_69b2bc;
    }
    r0_5 = r13 + 0x18u;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2_3;
    guest::cpu()->s[3] = S3_3;
    call_006a6dbc(r0_5, 0x3bu, 6u, r3_3);  // (from the original)
    S0_5 = guest::cpu()->s[0];
    S1_4 = guest::cpu()->s[1];
    S2_6 = guest::cpu()->s[2];
    S3_6 = guest::cpu()->s[3];
    *gptr<u16>(r13 + 4u) = u16(0u);
    *gptr<u16>(r13 + 6u) = u16(0u);
    *gptr<u16>(r13 + 8u) = u16(0u);
    r1_4 = ((r6 >> 0x10 << 0x10 | 0x72u | 0x63u << 8 & 0xff00u) & ~0xff0000u | 0x6fu << 0x10 & 0xff0000u) & ~0xff000000u | u32(*global_008c9f1c) << 0x18;  // (from the original)
    *gptr<u8>(r13 + 0x10u) = u8(1u);  // (from the original)
    *gptr<u8>(r13 + 0x11u) = u8(0u);  // (from the original)
    *gptr<u32>(r13 + 0x14u) = u32(r1_4);  // (from the original)
    r2_5 = r13 + 0x10u;  // (from the original)
    r0_6 = u32(*global_00887292);
    r3_6 = r13 + 0x18u;  // (from the original)
    *gptr<u32>(r13) = u32(r13 + 4u);
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_5;
    guest::cpu()->s[1] = S1_4;
    guest::cpu()->s[2] = S2_6;
    guest::cpu()->s[3] = S3_6;
    r0 = call_0057b9dc(r0_6, r4_1, r2_5, r3_6);
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
    res_3 = r1 << 0x19;  // (from the original)
    r1 = res_3;
    if (res_3 >> 0x1f) {  // (from the original)
        guest::preempt();
        goto L_69b1fc;
    }
    res_4 = u32(*gptr<u8>(r0 + 0x5700u)) << 0x1b;  // (from the original)
    r0 = res_4;
    if (!(res_4 >> 0x1f)) {  // (from the original)
        guest::preempt();
        goto L_69b1fc;
    }
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2_3;
    guest::cpu()->s[3] = S3_3;
    r0_7 = call_006cbbe4(r0, r1, res_2, r3_3);
    r2_6 = guest::cpu()->r[2];
    r3_7 = guest::cpu()->r[3];
    S0_6 = guest::cpu()->s[0];
    S1_5 = guest::cpu()->s[1];
    S2_7 = guest::cpu()->s[2];
    S3_7 = guest::cpu()->s[3];
    r0_8 = r13 + 0x10u;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_6;
    guest::cpu()->s[1] = S1_5;
    guest::cpu()->s[2] = S2_7;
    guest::cpu()->s[3] = S3_7;
    call_00307220(r0_8, r0_7, r2_6, r3_7);
    S3_8 = std::bit_cast<float>(*global_0069b3e0);
    S1_6 = std::bit_cast<float>(*global_0069b3e4);
    S2_8 = std::bit_cast<float>(*global_0085f2cc);
    r3_8 = r13 + 0x10u;  // (from the original)
    *gptr<u32>(r13 + 0x18u) = u32(std::bit_cast<u32>(std::bit_cast<float>(*gptr<u32>(r13 + 0x18u)) + S2_8 * S3_8));  // (from the original)
    S0_7 = std::bit_cast<float>(*gptr<u32>(r13 + 0x10u)) + S2_8 * S1_6;  // (from the original)
    *gptr<u32>(r13 + 0x10u) = u32(std::bit_cast<u32>(S0_7));  // (from the original)
    *gptr<u16>(r13 + 4u) = u16(0u);
    *gptr<u16>(r13 + 8u) = u16(0u);
    *gptr<u16>(r13 + 6u) = u16(0xffff8000u);  // (from the original)
    r1_5 = (((r6 & ~0xffu | 0x73u) & ~0xff00u | 0x7au << 8 & 0xff00u) & ~0xff0000u | 0x61u << 0x10 & 0xff0000u) & ~0xff000000u | u32(*global_008c9f1c) << 0x18;  // (from the original)
    *gptr<u8>(r13 + 0x20u) = u8(1u);  // (from the original)
    *gptr<u8>(r13 + 0x21u) = u8(0u);  // (from the original)
    *gptr<u32>(r13 + 0x24u) = u32(r1_5);  // (from the original)
    r2_7 = r13 + 0x20u;  // (from the original)
    r0_9 = u32(*global_0088729a);
    *gptr<u32>(r13) = u32(r13 + 4u);
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_7;
    guest::cpu()->s[1] = S1_6;
    guest::cpu()->s[2] = S2_8;
    guest::cpu()->s[3] = S3_8;
    r0_10 = call_0057b9dc(r0_9, r4_1, r2_7, r3_8);
    r1_6 = guest::cpu()->r[1];
    r2_8 = guest::cpu()->r[2];
    r3_9 = guest::cpu()->r[3];
    S0_8 = guest::cpu()->s[0];
    S1_7 = guest::cpu()->s[1];
    S2_9 = guest::cpu()->s[2];
    S3_9 = guest::cpu()->s[3];
    if (r0_10 != 0) {
        r1_6 = *gptr<u32>(r5 + 4u);
        if (r1_6 != 0) {
            *gptr<u32>(r1_6) = u32(r0_10);
        }
        r0_10 = *gptr<u32>(r5 + 4u) + 4u;
        *gptr<u32>(r5 + 4u) = u32(r0_10);
    }
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_8;
    guest::cpu()->s[1] = S1_7;
    guest::cpu()->s[2] = S2_9;
    guest::cpu()->s[3] = S3_9;
    r0_11 = call_005c886c(r0_10, r1_6, r2_8, r3_9);
    r1_7 = guest::cpu()->r[1];
    S0_9 = guest::cpu()->s[0];
    S1_8 = guest::cpu()->s[1];
    r13 = r13 + 0x58u;  // (from the original)
    guest::cpu()->r[1] = r1_7;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_9;
    guest::cpu()->s[1] = S1_8;
    return r0_11;
}

}  // namespace d_0069b0ac
GUEST_EXPORT(0x0069b0ac, d_0069b0ac::f_0069b0ac);

// f_0069b3f0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0069b3f0 {

inline guest::global<u32, 0x0069b590> global_0069b590;  // (from the original)
inline guest::global<u32, 0x0069b594> global_0069b594;  // (from the original)
inline guest::global<u16, 0x0088725e> global_0088725e;  // (from the original)
inline guest::global<u8, 0x008c9f1c> global_008c9f1c;  // (from the original)
inline constexpr guest::Function<0x00106319, u32(u32, u32, u32, u32)> call_00106318;  // (from the original)
inline constexpr guest::Function<0x00307220, u32(u32, u32, u32, u32)> call_00307220;  // (from the original)
inline constexpr guest::Function<0x0057b9dc, u32(u32, u32, u32, u32)> call_0057b9dc;  // (from the original)

u32 f_0069b3f0(u32 r0, u32 r1, u32 r2, u32 r3, float S0, float S1, float S2) {
    u32 r5 = guest::cpu()->r[5];
    u32 r13 = guest::cpu()->r[13];
    u32 r4_1 = 0;
    u32 r5_1 = 0;
    u32 r0_1 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    float S0_1 = 0;
    float S1_1 = 0;
    float S2_1 = 0;
    u32 r0_2 = 0;
    float S1_2 = 0;
    float S2_2 = 0;
    float S0_2 = 0;
    u32 r12_1 = 0;
    u32 zf_1 = 0;
    u32 r6_1 = 0;
    u32 r12_2 = 0;
    u32 r3_2 = 0;
    u32 r0_3 = 0;
    u32 r2_2 = 0;
    u32 r3_3 = 0;
    u32 r2_3 = 0;
    u32 r0_4 = 0;
    u32 r2_4 = 0;
    u32 r3_4 = 0;
    r4_1 = r0;
    r0 = 0xaaef18u;  // (from the original)
    r13 = r13 - 0x30u;  // (from the original)
    r5_1 = *gptr<u32>(r0 + 0x234u);  // (from the original)
    if (r5_1 == 0) {
        r13 = r13 + 0x30u;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        guest::cpu()->s[0] = S0;
        guest::cpu()->s[1] = S1;
        return r0;
    }
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2;
    r0_1 = call_00106318(r0, r1, r2, r3);
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    S0_1 = guest::cpu()->s[0];
    S1_1 = guest::cpu()->s[1];
    S2_1 = guest::cpu()->s[2];
    r0_2 = r13 + 4u;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_1;
    guest::cpu()->s[1] = S1_1;
    guest::cpu()->s[2] = S2_1;
    call_00307220(r0_2, r0_1, r2_1, r3_1);
    S1_2 = std::bit_cast<float>(*global_0069b590);
    S2_2 = std::bit_cast<float>(*global_0069b594);
    *gptr<u32>(r13 + 4u) = u32(std::bit_cast<u32>(std::bit_cast<float>(*gptr<u32>(r13 + 4u)) + S1_2));
    S0_2 = std::bit_cast<float>(*gptr<u32>(r13 + 0xcu)) + S2_2;  // (from the original)
    *gptr<u32>(r13 + 0xcu) = u32(std::bit_cast<u32>(S0_2));  // (from the original)
    *gptr<u16>(r13 + 0x10u) = u16(0u);  // (from the original)
    *gptr<u16>(r13 + 0x12u) = u16(0x4000u);  // (from the original)
    *gptr<u16>(r13 + 0x14u) = u16(0u);  // (from the original)
    r12_1 = u32(*gptr<u8>(r5_1 + 0x5700u)) & 0xfu;  // (from the original)
    zf_1 = r12_1 == 3u;
    r6_1 = r12_1 & ~0xffu;  // (from the original)
    r5 = r4_1 + 0xeb54u;  // (from the original)
    r12_2 = 0x6fu << 8;  // (from the original)
    if (zf_1) {
        goto L_69b500;
    }
    r3_2 = (((0x6du | r6_1) & ~0xff00u | r12_2 & 0xff00u) & ~0xff0000u | 0x6cu << 0x10 & 0xff0000u) & ~0xff000000u | u32(*global_008c9f1c) << 0x18;  // (from the original)
    *gptr<u8>(r13 + 0x18u) = u8(1u);  // (from the original)
    *gptr<u32>(r13 + 0x1cu) = u32(r3_2);  // (from the original)
    *gptr<u8>(r13 + 0x19u) = u8(0u);  // (from the original)
    r0_3 = u32(*global_0088725e);
    r2_2 = r13 + 0x18u;  // (from the original)
    r3_3 = r13 + 4u;
    *gptr<u32>(r13) = u32(r13 + 0x10u);  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_2;
    guest::cpu()->s[1] = S1_2;
    guest::cpu()->s[2] = S2_2;
    r0 = call_0057b9dc(r0_3, r4_1, r2_2, r3_3);
    r1 = guest::cpu()->r[1];
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    if (r0 == 0) {
        r13 = r13 + 0x30u;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        guest::cpu()->s[0] = S0;
        guest::cpu()->s[1] = S1;
        return r0;
    }
    r1 = *gptr<u32>(r5 + 4u);
    if (r1 == 0) {
        goto L_69b578;
    }
L_69b4f8:;
    *gptr<u32>(r1) = u32(r0);
    goto L_69b578;
L_69b500:;
    r2_3 = u32(*global_008c9f1c);
    *gptr<u8>(r13 + 0x18u) = u8(1u);  // (from the original)
    *gptr<u32>(r13 + 0x1cu) = u32((((0x6du | r6_1) & ~0xff00u | r12_2 & 0xff00u) & ~0xff0000u | 0x62u << 0x10 & 0xff0000u) & ~0xff000000u | r2_3 << 0x18);  // (from the original)
    *gptr<u8>(r13 + 0x19u) = u8(0u);  // (from the original)
    r0_4 = u32(*global_0088725e);
    r2_4 = r13 + 0x18u;  // (from the original)
    r3_4 = r13 + 4u;
    *gptr<u32>(r13) = u32(r13 + 0x10u);  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_2;
    guest::cpu()->s[1] = S1_2;
    guest::cpu()->s[2] = S2_2;
    r0 = call_0057b9dc(r0_4, r4_1, r2_4, r3_4);
    r1 = guest::cpu()->r[1];
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    if (r0 == 0) {
        r13 = r13 + 0x30u;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        guest::cpu()->s[0] = S0;
        guest::cpu()->s[1] = S1;
        return r0;
    }
    r1 = *gptr<u32>(r5 + 4u);
    if (r1 != 0) {
        guest::preempt();
        goto L_69b4f8;
    }
L_69b578:;
    r0 = *gptr<u32>(r5 + 4u) + 4u;
    *gptr<u32>(r5 + 4u) = u32(r0);
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
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 res_1 = 0;
    guest::cpu()->r[13] -= 8u;
    r0_1 = call_002fb94c(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    r0_2 = call_003188f0(r0_1, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    if (r0_2 != 0xeu) {  // (from the original)
        guest::cpu()->r[13] += 8u;
        return 0u;
    }
    if (r0_1 != 0) {
        if ((u32(*gptr<u8>(0x8a6bu + r0_1)) & 1u) == 0) {  // (from the original)
            guest::cpu()->r[13] += 8u;
            return 1u;
        }
    }
    res_1 = u32(*gptr<u8>(r0_1 + 0x8f7du)) << 0x1d;  // (from the original)
    if (!(res_1 >> 0x1f)) {  // (from the original)
        guest::cpu()->r[13] += 8u;
        return 0u;
    }
    guest::cpu()->r[13] += 8u;
    return 1u;
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
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r0_5 = 0;
    u32 r2_2 = 0;
    u32 r3_2 = 0;
    u32 r1_2 = 0;
    u32 r0_6 = 0;
    u32 r0_7 = 0;
    u32 r2_3 = 0;
    u32 r3_3 = 0;
    u32 r0_8 = 0;
    u32 r1_3 = 0;
    u32 r0_9 = 0;
    u32 r0_10 = 0;
    u32 r1_4 = 0;
    u32 res_1 = 0;
    u32 r0_11 = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r0_1 = call_002fe8a8(0u, r1, r2, r3);
    r1_1 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    if (r0_1 == 0) {
        goto L_69f2a0;
    }
    r0_2 = call_002fdf10(0xbu, r1_1, r2_1, r3_1);  // (from the original)
    r1 = guest::cpu()->r[1];
    if (r0_2 == 0) {
        goto L_69f2bc;
    }
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return 0u;
L_69f2a0:;
    r0_3 = call_002fae84(r0_1, r1_1, r2_1, r3_1);
    r0_4 = r0_3 + 0x6214fu;  // (from the original)
    r1 = u32(*gptr<u8>(r0_4 + 0xau)) & ~0x40u;  // (from the original)
    *gptr<u8>(r0_4 + 0xau) = u8(r1);  // (from the original)
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return 0u;
L_69f2bc:;
    r0_5 = u32(*gptr<u8>(r0_1 + 0x5719u));  // (from the original)
    r2_2 = u32(*gptr<u8>(r0_1 + 0x5701u));  // (from the original)
    r3_2 = r0_5 << 0x1d;  // (from the original)
    r1_2 = 0u | r0_5 << 0x1e >> 0x1f;  // (from the original)
    r0_6 = r1_2 | r3_2 >> 0x1f | r0_5 << 0x1c >> 0x1f;  // (from the original)
    if ((r0_6 & r2_2 >> 1) == 0) {
        r0_7 = call_002fae84(r0_6, r1_2, r2_2, r3_2);
        r2_3 = guest::cpu()->r[2];
        r3_3 = guest::cpu()->r[3];
        r0_8 = r0_7 - 0xfff901ccu;  // (from the original)
        r1_3 = u32(*gptr<u8>(r0_8)) & ~0x80u;  // (from the original)
        *gptr<u8>(r0_8) = u8(r1_3);
        r0_9 = call_002fae84(r0_8, r1_3, r2_3, r3_3);
        r2_2 = guest::cpu()->r[2];
        r3_2 = guest::cpu()->r[3];
        r0_6 = r0_9 + 0x6214fu;  // (from the original)
        r1_2 = u32(*gptr<u8>(r0_6 + 0xau)) & ~0x40u;  // (from the original)
        *gptr<u8>(r0_6 + 0xau) = u8(r1_2);  // (from the original)
    }
    r0_10 = call_002fb328(r0_6, r1_2, r2_2, r3_2);
    r1_4 = guest::cpu()->r[1];
    res_1 = u32(*gptr<u8>(r0_10 + 0x80u - 0xfff901ccu)) & 0x80u;  // (from the original)
    r0_11 = res_1;
    if (res_1 != 0) {
        r0_11 = 1u;
    }
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1_4;
    return r0_11;
}

}  // namespace d_0069f26c
GUEST_EXPORT(0x0069f26c, d_0069f26c::f_0069f26c);
