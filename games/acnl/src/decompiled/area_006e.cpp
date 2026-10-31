// Functions decompiled by tools/decomp (docs/decomp.md), each proved equal to the recompiled original (prove-cpp). The
// names are generated (d_<address>::f_<address>, Object_<address>_<argument>, word_<offset>) and still to be chosen.
#include "guest/guest.hpp"
#include "graphics/hemisphere_light.hpp"

#include <bit>

using guest::gptr;

// f_006e140c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006e140c {

inline constexpr guest::Function<0x0013fac4, u32(u32, u32, u32, u32)> call_0013fac4;  // (from the original)
inline constexpr guest::Function<0x00160c10, u32(u32, u32, u32, u32)> call_00160c10;  // (from the original)
inline constexpr guest::Function<0x00160c68, u32(u32, u32, u32, u32)> call_00160c68;  // (from the original)
inline constexpr guest::Function<0x002f9e1c, u32(u32, u32, u32, u32)> call_002f9e1c;  // (from the original)

u32 f_006e140c(u32 r0, u32 r1, u32 r2, u32 r3) {
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
    u32 r13 = guest::cpu()->r[13];
    u32 r14 = guest::cpu()->r[14];
    ea = r13 - 0x34;  // (from the original)
    *gptr<u32>(ea) = u32(r0);
    *gptr<u32>(ea + 4) = u32(r1);
    *gptr<u32>(ea + 8) = u32(r2);
    *gptr<u32>(ea + 0xc) = u32(r3);  // (from the original)
    *gptr<u32>(ea + 0x10) = u32(r4);  // (from the original)
    *gptr<u32>(ea + 0x14) = u32(r5);  // (from the original)
    *gptr<u32>(ea + 0x18) = u32(r6);  // (from the original)
    *gptr<u32>(ea + 0x1c) = u32(r7);  // (from the original)
    *gptr<u32>(ea + 0x20) = u32(r8);  // (from the original)
    *gptr<u32>(ea + 0x24) = u32(r9);  // (from the original)
    *gptr<u32>(ea + 0x28) = u32(r10);  // (from the original)
    *gptr<u32>(ea + 0x2c) = u32(r11);  // (from the original)
    *gptr<u32>(ea + 0x30) = u32(r14);  // (from the original)
    r13 = r13 - 0x80u;  // (from the original)
    r5 = r3;
    r7 = r1;
    r10 = *gptr<u32>(r13 + 0x80u);  // (from the original)
    r0 = *gptr<u32>(*gptr<u32>(r13 + 0x4cu) + 0x288u);  // (from the original)
    *gptr<u32>(r13 + 0x10u) = u32(r0);  // (from the original)
    r1 = r0 + (r0 << 1);
    *gptr<u32>(r13 + 4u) = u32(r1);
    r0 = r1 * r0;
    guest::cpu()->r[13] = r13;
    r0 = call_00160c68(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r3 = guest::cpu()->r[3];
    *gptr<u32>(r13 + 0x18u) = u32(r0);  // (from the original)
    if (r0 == 0) {
        goto L_6e162c;
    }
    r6 = *gptr<u32>(r13 + 0x18u);  // (from the original)
    r2 = 0xffu;  // (from the original)
    r4 = r5 * *gptr<u32>(r13 + 0x54u);  // (from the original)
    r1 = r4 * *gptr<u32>(r13 + 4u);
    r0 = r6;
    guest::cpu()->r[13] = r13;
    r0 = call_0013fac4(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    *gptr<u32>(r13 + 0x28u) = u32(0u);  // (from the original)
    r1 = *gptr<u32>(r13 + 0x54u);  // (from the original)
    res = 0u;
    r8 = res;
    *gptr<u32>(r13 + 0xcu) = u32(r4);  // (from the original)
    r0 = (r5 + r7) * r1;
    r1 = *gptr<u32>(r13 + 4u);
    res = r0 - r4;
    *gptr<u32>(r13 + 8u) = u32(r0);
    r11 = r1 * r4 + r6;
    if (u32(res == 0) || res >> 0x1f != ((r0 ^ r4) & (r0 ^ res)) >> 0x1f) {  // (from the original)
        goto L_6e15b0;
    }
    r1 = r4 + (r4 << 1);
    *gptr<u32>(r13 + 0x20u) = u32(r1);  // (from the original)
    r1 = r0 + (r0 << 1) - r1 + 2u;
    *gptr<u32>(r13 + 0x30u) = u32(r1);  // (from the original)
    r0 = u32(u64(s64(s32(0x55555556u)) * s32(r1)) >> 0x20);  // (from the original)
    r9 = *gptr<u32>(r13 + 0x54u) - 1u;  // (from the original)
    *gptr<u32>(r13 + 0x38u) = u32(r0 - u32(s32(r0) >> 0x1f));  // (from the original)
L_6e14c8:;
    r4 = *gptr<u32>(r13 + 0x20u);  // (from the original)
    r2 = 0xffu;  // (from the original)
    r0 = r11;
    r1 = r4;
    guest::cpu()->r[13] = r13;
    r0 = call_0013fac4(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    *gptr<u32>(r13 + 0x1cu) = u32(r4);  // (from the original)
    r0 = *gptr<u32>(r13 + 0x30u);  // (from the original)
    r5 = 0u;
    res = r0 - 2u;
    *gptr<u32>(r13 + 0x48u) = u32(r0);  // (from the original)
    if (u32(res == 0) || res >> 0x1f != ((r0 ^ 2u) & (r0 ^ res)) >> 0x1f) {  // (from the original)
        goto L_6e155c;
    }
    r6 = *gptr<u32>(r13 + 0x38u);  // (from the original)
    r4 = r11 + r4 + 2u;
    r7 = 0u;
    do {
L_6e1504:;
        r0 = ~u32(*gptr<u8>(*gptr<u32>(r10 + (r8 << 2)) + r5));
        *gptr<u8>(r4 - 1u) = u8(r0);
        *gptr<u8>(r4 - 2u) = u8(r0);
        *gptr<u8>(r4) = u8(r0);
        r1 = *gptr<u32>(r13 + 0x54u);  // (from the original)
        r0 = r7;
        guest::cpu()->r[13] = r13;
        r0 = call_002f9e1c(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        if (r1 == r9) {
            r5 = r5 + 1u;
        }
        res = r6 - 1u;
        r6 = res;
        r4 = r4 + 3u;
        r7 = r7 + 1u;
        guest::preempt();
    } while (res != 0);
    r0 = u32(u64(s64(s32(0x55555556u)) * s32(*gptr<u32>(r13 + 0x48u))) >> 0x20);  // (from the original)
    r0 = r0 - u32(s32(r0) >> 0x1f);  // (from the original)
    r4 = r0 + (r0 << 1) + *gptr<u32>(r13 + 0x1cu);  // (from the original)
L_6e155c:;
    r2 = 0xffu;  // (from the original)
    r1 = *gptr<u32>(r13 + 4u) - r4;
    r0 = r11 + r4;
    guest::cpu()->r[13] = r13;
    r0 = call_0013fac4(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = *gptr<u32>(r13 + 0x54u);  // (from the original)
    r11 = r11 + *gptr<u32>(r13 + 4u);
    r0 = *gptr<u32>(r13 + 0x28u);  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002f9e1c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r3 = guest::cpu()->r[3];
    ea = r13 + 0xcu;  // (from the original)
    if (r1 == r9) {
        r8 = r8 + 1u;
    }
    r0 = *gptr<u32>(ea) + 1u;
    ea = r13 + 0xcu;  // (from the original)
    *gptr<u32>(ea) = u32(r0);
    ea = r13 + 0x28u;  // (from the original)
    r0 = *gptr<u32>(ea) + 1u;
    ea = r13 + 0x28u;  // (from the original)
    *gptr<u32>(ea) = u32(r0);
    ea = r13 + 8u;
    if (s32(*gptr<u32>(ea + 4)) < s32(*gptr<u32>(ea))) {
        guest::preempt();
        goto L_6e14c8;
    }
L_6e15b0:;
    r2 = 0xffu;  // (from the original)
    r1 = (*gptr<u32>(r13 + 0x10u) - *gptr<u32>(r13 + 0xcu)) * *gptr<u32>(r13 + 4u);  // (from the original)
    r0 = r11;
    guest::cpu()->r[13] = r13;
    r0 = call_0013fac4(r0, r1, r2, r3);
    r0 = *gptr<u32>(r13 + 0x84u);  // (from the original)
    r3 = u32(u64(s64(s32(0x55555556u)) * s32(*gptr<u32>(r13 + 4u))) >> 0x20);  // (from the original)
    r2 = *gptr<u32>(r13 + 0x10u);  // (from the original)
    r4 = *gptr<u32>(r13 + 0x4cu) + (r0 + (r0 << 1) << 3);  // (from the original)
    r0 = 0u;
    r1 = *gptr<u32>(r4 + 4u);
    *gptr<u32>(r4 + 0x10u) = u32(r0);  // (from the original)
    *gptr<u32>(r4 + 0xcu) = u32(r0);  // (from the original)
    r3 = r3 - u32(s32(r3) >> 0x1f);  // (from the original)
    *gptr<u16>(r4 + 2u) = u16(r2);
    *gptr<u16>(r4) = u16(r3);
    *gptr<u32>(r4 + 0x14u) = u32(r0);  // (from the original)
    *gptr<u32>(r4 + 8u) = u32(r0);
    if (r1 != 0) {
        r0 = r1;
        guest::cpu()->r[13] = r13;
        r0 = call_00160c10(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
    }
    *gptr<u32>(r4 + 4u) = u32(*gptr<u32>(r13 + 0x18u));  // (from the original)
    r0 = 1u;
L_6e162c:;
    r13 = r13 + 0x5cu;  // (from the original)
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

}  // namespace d_006e140c
GUEST_EXPORT(0x006e140c, d_006e140c::f_006e140c);

// f_006e1d28: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006e1d28 {

inline constexpr guest::Function<0x00100ef9, u32(u32, u32, u32, u32)> call_00100ef8;  // (from the original)
inline constexpr guest::Function<0x0015f67c, u32(u32, u32, u32, u32)> call_0015f67c;  // (from the original)

u32 f_006e1d28(u32 r0, u32 r1, u32 r2) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    goto L_6e1d28;
L_6e1d28:;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r4 = r0;
    r5 = r1;
    r0 = call_0015f67c(r0, r1, r2, guest::cpu()->r[3]);
    if (r0 == 1u) {
        goto L_6e1d78;
    }
    if (r0 == 2u) {
        goto L_6e1db0;
    }
    if (r0 == 7u) {
        goto L_6e1d94;
    }
    if (r0 == 8u) {
        goto L_6e1dcc;
    }
    r2 = 0x6e1de8u;  // (from the original)
    r1 = 0x6e1dfcu;  // (from the original)
    r0 = r4 + 0x180u;  // (from the original)
    r0 = call_00100ef8(r0, r1, r2, guest::cpu()->r[3]);
    r2 = guest::cpu()->r[2];
L_6e1d68:;
    r1 = r5;
    r0 = r4 + 0x180u;  // (from the original)
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    return guest::call_address<u32>(0x1019c5u, r0, r1, r2, guest::cpu()->r[3]);  // (from the original)
L_6e1d78:;
    r2 = 0x6e1e00u;  // (from the original)
    r1 = 0x6e1dfcu;  // (from the original)
    r0 = r4 + 0x180u;  // (from the original)
    r0 = call_00100ef8(r0, r1, r2, guest::cpu()->r[3]);
    r2 = guest::cpu()->r[2];
    guest::preempt();
    goto L_6e1d68;
L_6e1d94:;
    r2 = 0x6e1e1cu;  // (from the original)
    r1 = 0x6e1dfcu;  // (from the original)
    r0 = r4 + 0x180u;  // (from the original)
    r0 = call_00100ef8(r0, r1, r2, guest::cpu()->r[3]);
    r2 = guest::cpu()->r[2];
    guest::preempt();
    goto L_6e1d68;
L_6e1db0:;
    r2 = 0x6e1e34u;  // (from the original)
    r1 = 0x6e1dfcu;  // (from the original)
    r0 = r4 + 0x180u;  // (from the original)
    r0 = call_00100ef8(r0, r1, r2, guest::cpu()->r[3]);
    r2 = guest::cpu()->r[2];
    guest::preempt();
    goto L_6e1d68;
L_6e1dcc:;
    r2 = 0x8aec1cu;  // (from the original)
    r1 = 0x6e1dfcu;  // (from the original)
    r0 = r4 + 0x180u;  // (from the original)
    r0 = call_00100ef8(r0, r1, r2, guest::cpu()->r[3]);
    r2 = guest::cpu()->r[2];
    guest::preempt();
    goto L_6e1d68;
}

}  // namespace d_006e1d28
GUEST_EXPORT(0x006e1d28, d_006e1d28::f_006e1d28);

// f_006e23dc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006e23dc {

struct __attribute__((packed)) Object_006e23dc_0 {
    u8 unknown_0[0x2760];  // (not used here)
    u32 word_2760;
    u32 word_2764;
};
GUEST_OFFSET(Object_006e23dc_0, word_2760, 0x2760);  // (from the original)
GUEST_OFFSET(Object_006e23dc_0, word_2764, 0x2764);  // (from the original)

inline constexpr guest::Function<0x00617110, u32(u32, u32, u32, u32)> call_00617110;  // (from the original)

u32 f_006e23dc(gptr<Object_006e23dc_0> arg0, u32 r1, u32 r2, u32 r3) {
    u32 ea = 0;
    u32 r0 = arg0.addr();
    u32 r4 = guest::cpu()->r[4];
    u32 r13 = guest::cpu()->r[13];
    u32 r14 = guest::cpu()->r[14];
    r13 = r13 - 8;
    r4 = r0;
    if (arg0->word_2760 != 0) {
        r0 = 0u;
        r13 = r13 + 8;
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    r0 = arg0->word_2764;
    if ((r0 & 1u) == 0) {
        goto L_6e2418;
    }
    if (r0 == 0) {
        goto L_6e2418;
    }
    r0 = 0u;
    r13 = r13 + 8;
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
L_6e2418:;
    guest::cpu()->r[13] = r13;
    r0 = call_00617110(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    if (r0 == 0) {
        r13 = r13 + 8;
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    r1 = 0x27c3u;  // (from the original)
    r0 = 0u;
    r3 = r1 - 0x1bu;  // (from the original)
    r14 = r1 + 3u;
    ea = r1 + r4;
    *gptr<u8>(ea) = u8(r0);
    ea = 0x85e1ecu;  // (from the original)
    r1 = *gptr<u32>(ea);
    r2 = *gptr<u32>(ea + 4);
    ea = r4 + 0x2760u;  // (from the original)
    *gptr<u32>(ea) = u32(r1);
    *gptr<u32>(ea + 4) = u32(r2);
    *gptr<u32>(r3 + r4) = u32(r0);
    *gptr<u8>(r14 + r4) = u8(r0);
    r0 = 1u;
    *gptr<u8>(r4 + 0x27c4u) = u8(r0);  // (from the original)
    r13 = r13 + 8;
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_006e23dc
GUEST_EXPORT(0x006e23dc, d_006e23dc::f_006e23dc);

// f_006e247c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006e247c {

inline constexpr guest::Function<0x005c394c, u32(u32, u32, u32, u32)> call_005c394c;  // (from the original)

u32 f_006e247c() {
    u32 r0 = 0;
    u32 r1 = 0;
    u32 r2 = 0;
    u32 r4 = guest::cpu()->r[4];
    guest::cpu()->r[13] -= 8u;
    r4 = 0x951694u;  // (from the original)
    r2 = 0u;
    r0 = r2;
    r1 = u32(*gptr<u8>(r4));
    r0 = call_005c394c(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r0 = 8u;
    *gptr<u8>(r4) = u8(r0);
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_006e247c
GUEST_EXPORT(0x006e247c, d_006e247c::f_006e247c);

// f_006e2534: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006e2534 {

struct __attribute__((packed)) Object_006e2534_0 {
    u8 unknown_0[0x2760];  // (not used here)
    u32 word_2760;
    u32 word_2764;
};
GUEST_OFFSET(Object_006e2534_0, word_2760, 0x2760);  // (from the original)
GUEST_OFFSET(Object_006e2534_0, word_2764, 0x2764);  // (from the original)

inline constexpr guest::Function<0x006295d8, u32(u32, u32, u32, u32)> call_006295d8;  // (from the original)
inline constexpr guest::Function<0x0075f0b0, u32(u32, u32, u32, u32)> call_0075f0b0;  // (from the original)

u32 f_006e2534(gptr<Object_006e2534_0> arg0, u32 r1, u32 r2, u32 r3) {
    u32 ea = 0;
    u32 r0 = arg0.addr();
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 0x10;  // (from the original)
    r4 = r0;
    if (arg0->word_2760 == 0) {
        r0 = arg0->word_2764;
        if ((r0 & 1u) == 0) {
            goto L_6e2570;
        }
        if (r0 == 0) {
            goto L_6e2570;
        }
    }
    r0 = 0u;
L_6e256c:;
    r13 = r13 + 0x10;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
L_6e2570:;
    r5 = 0x95362cu;  // (from the original)
    r1 = 4u;
    r0 = *gptr<u32>(r5) + 0x7874u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0075f0b0(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 != 0) {
        r1 = 4u;
        r0 = *gptr<u32>(r5) + 0x7874u;  // (from the original)
        guest::cpu()->r[13] = r13;
        r0 = call_006295d8(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        if (r0 == 0) {
            guest::preempt();
            goto L_6e256c;
        }
    }
    ea = 0x85e1f4u;  // (from the original)
    r1 = *gptr<u32>(ea);
    r2 = *gptr<u32>(ea + 4);
    r0 = 0u;
    ea = r4 + 0x2760u;  // (from the original)
    *gptr<u32>(ea) = u32(r1);
    *gptr<u32>(ea + 4) = u32(r2);
    *gptr<u32>(r4 + 0x27a8u) = u32(r0);  // (from the original)
    *gptr<u8>(r4 + 0x27c6u) = u8(r0);  // (from the original)
    r0 = 1u;
    r13 = r13 + 0x10;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_006e2534
GUEST_EXPORT(0x006e2534, d_006e2534::f_006e2534);

// f_006e2724: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006e2724 {

struct __attribute__((packed)) Object_006e2724_0 {
    u8 unknown_0[0x27a0];  // (not used here)
    u32 word_27a0;
};
GUEST_OFFSET(Object_006e2724_0, word_27a0, 0x27a0);  // (from the original)

inline constexpr guest::Function<0x0050d128, u32(u32, u32, u32, u32)> call_0050d128;  // (from the original)
inline constexpr guest::Function<0x006e3da0, u32(u32, u32, u32, u32)> call_006e3da0;  // (from the original)
inline constexpr guest::Function<0x00746e4c, u32(u32, u32, u32, u32)> call_00746e4c;  // (from the original)
inline constexpr guest::Function<0x00746ed0, u32(u32, u32, u32, u32)> call_00746ed0;  // (from the original)
inline constexpr guest::Function<0x00746efc, u32(u32, u32, u32, u32)> call_00746efc;  // (from the original)
inline constexpr guest::Function<0x00746f8c, u32(u32, u32, u32, u32)> call_00746f8c;  // (from the original)

u32 f_006e2724(gptr<Object_006e2724_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r1 = 0;
    u32 r2 = 0;
    u32 r3 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r13 = guest::cpu()->r[13];
    u32 zf = 0;
    r5 = r0;
    r2 = 0x2770u;  // (from the original)
    r13 = r13 - 0x18u;  // (from the original)
    r3 = arg0->word_27a0;
    r0 = *gptr<u32>(r2 + r5);
    r1 = u32(*gptr<u8>((r2 | u32(s32(r2) >> 0xb)) + r5));  // (from the original)
    r2 = r5 + 0x2790u;  // (from the original)
    *gptr<u32>(r13) = u32(r0);
    *gptr<u32>(r13 + 4) = u32(r1);
    r0 = 0xa22020u;  // (from the original)
    r1 = r5 + 0x44u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0050d128(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        goto L_6e27ac;
    }
    r6 = *gptr<u32>(r5 + 0x1d8u);  // (from the original)
    zf = r6 == 0;
    if (!zf) {
        r4 = 0u;
    }
    if (!u32(r6 >= 0u) || zf) {
        goto L_6e27a0;
    }
    do {
L_6e277c:;
        r1 = r4;
        r0 = r5 + 0x44u;  // (from the original)
        guest::cpu()->r[13] = r13;
        r0 = call_00746e4c(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        if (r0 != 0) {
            guest::cpu()->r[13] = r13;
            r0 = call_006e3da0(r0, r1, r2, r3);
            r1 = guest::cpu()->r[1];
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
        }
        r4 = r4 + 1u;
        guest::preempt();
    } while (r4 < r6);
L_6e27a0:;
    r0 = 1u;
L_6e27a4:;
    r13 = r13 + 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
L_6e27ac:;
    r0 = 0xa22020u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00746f8c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        guest::preempt();
        goto L_6e27a4;
    }
    r0 = 0xa22020u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00746efc(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 < 2u) {
        goto L_6e280c;
    }
    r0 = 0xa22020u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00746ed0(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        goto L_6e280c;
    }
    r0 = 0xa22020u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00746ed0(r0, r1, r2, r3);
    r1 = r5 + 0x27a8u;  // (from the original)
    *gptr<u32>(r1) = u32(r0);
    *gptr<u8>(r5 + 0x27c6u) = u8(1u);  // (from the original)
L_6e280c:;
    r0 = ~0u;
    r13 = r13 + 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_006e2724
GUEST_EXPORT(0x006e2724, d_006e2724::f_006e2724);

// f_006e2820: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006e2820 {

inline constexpr guest::Function<0x0050cb2c, u32(u32, u32, u32, u32)> call_0050cb2c;  // (from the original)

u32 f_006e2820(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 res = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r9 = guest::cpu()->r[9];
    u32 r10 = guest::cpu()->r[10];
    u32 r12 = 0;
    u32 r13 = guest::cpu()->r[13];
    u32 zf = 0;
    r13 = r13 - 0x20;  // (from the original)
    r4 = r0;
    r7 = r1;
    r8 = r2;
    r6 = *gptr<u32>(r13 + 0x20u);  // (from the original)
    r5 = r3;
    r0 = r0 + 0x44u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0050cb2c(r0, r1, r2, r3);
    r1 = 0xffffu;  // (from the original)
    r0 = 0u;
    r3 = r4 + 0x2788u;  // (from the original)
    zf = r5 == r1;
    *gptr<u32>(r3) = u32(r0);
    *gptr<u32>(r3 + 4) = u32(r0);
    if (zf) {
        r3 = 0u;
    }
    r12 = r4 + 0x27a0u;  // (from the original)
    if (zf) {
        r0 = r3;
    } else {
        goto L_6e28b8;
    }
    do {
L_6e2870:;
        r2 = r0 << 0x1c >> 0x14;  // (from the original)
        r10 = r4 + (r3 << 1) + 0x2700u;  // (from the original)
        r3 = r3 + 1u;
        *gptr<u16>(r10 + 0x90u) = u16(r2 | 0x8000u | 1u);  // (from the original)
        r9 = r4 + (r3 << 1) + 0x2700u;  // (from the original)
        r0 = r0 + 1u;
        res = r0 - 4u;
        r3 = r3 + 1u;
        *gptr<u16>(r9 + 0x90u) = u16(r2 | 1u);  // (from the original)
        guest::preempt();
    } while (res >> 0x1f != ((r0 ^ 4u) & (r0 ^ res)) >> 0x1f);  // (from the original)
    *gptr<u32>(r12) = u32(r3);
    goto L_6e2900;
L_6e28b8:;
    r3 = r4 + 0x2700u;  // (from the original)
    r2 = 1u;
    *gptr<u16>(r3 + 0x90u) = u16(r5);  // (from the original)
    r0 = r2;
    *gptr<u16>(r3 + 0x92u) = u16(r1);  // (from the original)
    do {
L_6e28cc:;
        r3 = r4 + (r2 << 1);
        r2 = r2 + 1u;
        r9 = r4 + (r2 << 1) + 0x2700u;  // (from the original)
        r0 = r0 + 2u;
        *gptr<u16>(r3 + 0x2792u) = u16(r1);  // (from the original)
        r2 = r2 + 1u;
        *gptr<u16>(r9 + 0x92u) = u16(r1);  // (from the original)
        guest::preempt();
    } while (r0 < 7u);
    *gptr<u32>(r12) = u32(1u);
L_6e2900:;
    r0 = 0x2770u;  // (from the original)
    zf = r5 == r1;
    if (!zf) {
        r1 = 0u;
    }
    r2 = r0 + 0x55u;  // (from the original)
    *gptr<u32>(r0 + r4) = u32(r7);
    r0 = r4 + 0x2774u;  // (from the original)
    *gptr<u8>(r2 + r4) = u8(r6);
    if (zf) {
        *gptr<u8>(r0) = u8(r8);
    } else {
        *gptr<u8>(r0) = u8(r1);
    }
    r13 = r13 + 0x20;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_006e2820
GUEST_EXPORT(0x006e2820, d_006e2820::f_006e2820);

// f_006e35fc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006e35fc {

struct __attribute__((packed)) Object_006e35fc_0 {
    u8 unknown_0[0x2760];  // (not used here)
    u32 word_2760;
    u32 word_2764;
};
GUEST_OFFSET(Object_006e35fc_0, word_2760, 0x2760);  // (from the original)
GUEST_OFFSET(Object_006e35fc_0, word_2764, 0x2764);  // (from the original)

inline constexpr guest::Function<0x002fb328, u32(u32, u32, u32, u32)> call_002fb328;  // (from the original)
inline constexpr guest::Function<0x0035072c, u32(u32, u32, u32, u32)> call_0035072c;  // (from the original)
inline constexpr guest::Function<0x004dcf6c, u32(u32, u32, u32, u32)> call_004dcf6c;  // (from the original)
inline constexpr guest::Function<0x0050c9a4, u32(u32, u32, u32, u32)> call_0050c9a4;  // (from the original)
inline constexpr guest::Function<0x006d3cd4, u32(u32, u32, u32, u32)> call_006d3cd4;  // (from the original)

u32 f_006e35fc(gptr<Object_006e35fc_0> arg0, u32 r1, u32 r2, u32 r3) {
    u32 ea = 0;
    u32 r0 = arg0.addr();
    u32 r4 = guest::cpu()->r[4];
    u32 r13 = guest::cpu()->r[13];
    *gptr<u32>(r13 + 0xfffffff0u) = u32(r3);  // (from the original)
    r13 = r13 - 0x10;  // (from the original)
    r4 = r0;
    if (arg0->word_2760 == 0) {
        r0 = arg0->word_2764;
        if ((r0 & 1u) == 0) {
            goto L_6e3638;
        }
        if (r0 == 0) {
            goto L_6e3638;
        }
    }
    r0 = 0u;
    r13 = r13 + 0x10;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
L_6e3638:;
    r0 = r4 + 0x10u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0050c9a4(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r4 + 0x10u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_004dcf6c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_0035072c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = *gptr<u32>(r13) >> 0x18;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_006d3cd4(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 << 0x1c >> 0x14 | 0x8000u | 2u;  // (from the original)
    *gptr<u16>(r4 + 0x36u) = u16(r0);  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002fb328(r0, r1, r2, r3);
    ea = r4 + 0x3cu;  // (from the original)
    *gptr<u32>(ea) = u32(*gptr<u32>(r0 + 0x8880cu));  // (from the original)
    ea = 0x85e234u;  // (from the original)
    r1 = *gptr<u32>(ea);
    r2 = *gptr<u32>(ea + 4);
    ea = r4 + 0x2760u;  // (from the original)
    *gptr<u32>(ea) = u32(r1);
    *gptr<u32>(ea + 4) = u32(r2);
    r0 = 0u;
    *gptr<u32>(r4 + 0x27a8u) = u32(r0);  // (from the original)
    *gptr<u8>(r4 + 0x27c6u) = u8(r0);  // (from the original)
    r0 = 1u;
    r13 = r13 + 0x10;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_006e35fc
GUEST_EXPORT(0x006e35fc, d_006e35fc::f_006e35fc);

// f_006e4490: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006e4490 {

inline constexpr guest::Function<0x00132478, u32(u32, u32, u32, u32)> call_00132478;  // (from the original)

u32 f_006e4490() {
    u32 r0 = 0;
    r0 = 0x9ab57cu;  // (from the original)
    return call_00132478(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_006e4490
GUEST_EXPORT(0x006e4490, d_006e4490::f_006e4490);

// f_006e449c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006e449c {


u32 f_006e449c(u32 r0, u32 r1) {
    r1 = r1 << 0xe >> 0xe;  // (from the original)
    r0 = r1 | r0 << 0x12;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_006e449c
GUEST_EXPORT(0x006e449c, d_006e449c::f_006e449c);

// f_006e44bc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006e44bc {

inline constexpr guest::Function<0x0013f000, u32(u32, u32, u32, u32)> call_0013f000;  // (from the original)
inline constexpr guest::Function<0x005bf748, u32(u32, u32, u32, u32)> call_005bf748;  // (from the original)

u32 f_006e44bc(u32 r0, u32 r1) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r5 = r1;
    r4 = r0;
    r1 = r0 + 0x48u;  // (from the original)
    r0 = 0x9ab57cu;  // (from the original)
    r0 = call_0013f000(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    *gptr<u32>(r4 + 0x54u) = u32(r5 << 0xe >> 0xe | u32(*gptr<u16>(r4 + 0xcu)) << 0x12);  // (from the original)
    r1 = r4 + 0x48u;  // (from the original)
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    r0 = 0x9ab57cu;  // (from the original)
    return call_005bf748(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_006e44bc
GUEST_EXPORT(0x006e44bc, d_006e44bc::f_006e44bc);

// f_006e46c8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006e46c8 {

inline constexpr guest::Function<0x005bf758, u32(u32, u32, u32, u32)> call_005bf758;  // (from the original)

u32 f_006e46c8(u32 r0) {
    u32 r1 = 0;
    r1 = r0;
    r0 = 0x9ab57cu;  // (from the original)
    guest::cpu()->r[13] -= 8u;
    r0 = call_005bf758(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 != 0) {
        r0 = *gptr<u32>(r0 + 0x10u);  // (from the original)
    }
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_006e46c8
GUEST_EXPORT(0x006e46c8, d_006e46c8::f_006e46c8);

// f_006e46f4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006e46f4 {

inline constexpr guest::Function<0x0057ba40, u32(u32, u32, u32, u32)> call_0057ba40;  // (from the original)

u32 f_006e46f4(u32 r0, u32 r1, float S0, float S1) {
    u32 ea = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 8;
    r4 = r0;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    r0 = call_0057ba40(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    if (r0 == 0) {
        r13 = r13 + 8;
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        guest::cpu()->s[0] = S0;
        guest::cpu()->s[1] = S1;
        return r0;
    }
    ea = r4 + 0x54u;  // (from the original)
    *gptr<u32>(ea) = u32(0u);
    *gptr<u32>(ea + 4) = u32(r4);
    r1 = r4 + 0x5cu;  // (from the original)
    S0 = std::bit_cast<float>(*gptr<u32>(0x6e4734u));  // (from the original)
    S1 = std::bit_cast<float>(*gptr<u32>(0x6e4738u));  // (from the original)
    *gptr<u32>(r1) = u32(std::bit_cast<u32>(S0));
    *gptr<u32>(r1 + 4) = u32(std::bit_cast<u32>(S1));
    *gptr<u16>(r4 + 0x64u) = u16(2u);  // (from the original)
    r0 = 1u;
    r13 = r13 + 8;
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    return r0;
}

}  // namespace d_006e46f4
GUEST_EXPORT(0x006e46f4, d_006e46f4::f_006e46f4);

// f_006e47a0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006e47a0 {

inline constexpr guest::Function<0x001324a8, u32(u32, u32, u32, u32)> call_001324a8;  // (from the original)
inline constexpr guest::Function<0x0057ba68, u32(u32, u32, u32, u32)> call_0057ba68;  // (from the original)

u32 f_006e47a0(u32 r0, u32 r1, u32 r2, float S0) {
    guest::cpu()->r[13] -= 8u;
    guest::cpu()->s[0] = S0;
    r0 = call_0057ba68(r0, r1, r2, guest::cpu()->r[3]);
    r2 = guest::cpu()->r[2];
    S0 = guest::cpu()->s[0];
    r1 = 0x8f9530u;  // (from the original)
    *gptr<u32>(r0) = u32(r1);
    r0 = r0 + 0x48u;  // (from the original)
    guest::cpu()->s[0] = S0;
    r0 = call_001324a8(r0, r1, r2, guest::cpu()->r[3]);
    r1 = 0u;
    *gptr<u32>(r0 + 0xcu) = u32(r1);  // (from the original)
    *gptr<u32>(r0) = u32(0x90b134u);  // (from the original)
    *gptr<u32>(r0 + 0x10u) = u32(r1);  // (from the original)
    S0 = std::bit_cast<float>(*gptr<u32>(0x6e47e8u));  // (from the original)
    r0 = r0 - 0x48u;  // (from the original)
    *gptr<u32>(r0 + 0x5cu) = u32(std::bit_cast<u32>(S0));  // (from the original)
    *gptr<u32>(r0 + 0x60u) = u32(std::bit_cast<u32>(S0));  // (from the original)
    *gptr<u16>(r0 + 0x64u) = u16(r1);  // (from the original)
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1;
    guest::cpu()->s[0] = S0;
    return r0;
}

}  // namespace d_006e47a0
GUEST_EXPORT(0x006e47a0, d_006e47a0::f_006e47a0);

// f_006e4a48: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006e4a48 {

inline constexpr guest::Function<0x005664d8, u32(u32, u32, u32, u32)> call_005664d8;  // (from the original)

u32 f_006e4a48(u32 r0, u32 r1) {
    guest::cpu()->r[13] -= 8u;
    r0 = call_005664d8(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = 0x8f95d8u;  // (from the original)
    *gptr<u32>(r0) = u32(r1);
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_006e4a48
GUEST_EXPORT(0x006e4a48, d_006e4a48::f_006e4a48);

// f_006e4b0c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006e4b0c {


u32 f_006e4b0c(u32 r0, u32 r1) {
    if (r0 >= 5u) {
        r0 = 0x9b3b08u;  // (from the original)
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r1 = 0x9b3b08u;  // (from the original)
    r0 = r1 + ((r0 << 6) - (r0 + (r0 << 2)) << 2);
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_006e4b0c
GUEST_EXPORT(0x006e4b0c, d_006e4b0c::f_006e4b0c);

// f_006e4b30: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006e4b30 {

inline constexpr guest::Function<0x00200ab4, u32(u32, u32, u32, u32)> call_00200ab4;  // (from the original)

u32 f_006e4b30(u32 r0, u32 r1, u32 r2) {
    u32 r3 = 0;
    r3 = r2;
    r2 = r1;
    r1 = r0;
    r0 = 0x9b3b08u;  // (from the original)
    return call_00200ab4(r0, r1, r2, r3);
}

}  // namespace d_006e4b30
GUEST_EXPORT(0x006e4b30, d_006e4b30::f_006e4b30);

// f_006e4b48: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006e4b48 {

inline constexpr guest::Function<0x00200ab4, u32(u32, u32, u32, u32)> call_00200ab4;  // (from the original)

u32 f_006e4b48(u32 r0, u32 r1, u32 r2) {
    u32 r3 = 0;
    r3 = r2;
    r2 = r1;
    r1 = r0;
    r0 = 0x9b3dccu;  // (from the original)
    guest::cpu()->r[13] -= 8u;
    r0 = call_00200ab4(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r0 = 1u;
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_006e4b48
GUEST_EXPORT(0x006e4b48, d_006e4b48::f_006e4b48);

// f_006e4d30: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006e4d30 {

inline constexpr guest::Function<0x006e5718, u32(u32, u32, u32, u32)> call_006e5718;  // (from the original)

u32 f_006e4d30(u32 r0) {
    u32 r1 = 0;
    r1 = 0x276u;  // (from the original)
    guest::cpu()->r[13] -= 4u;
    if (r0 >= r1) {
        r0 = 0u;
        guest::cpu()->r[13] += 4u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r0 = call_006e5718(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r0 = u32(*gptr<u8>(r0 + 0x10u)) << 0x1c >> 0x1f;  // (from the original)
    guest::cpu()->r[13] += 4u;
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_006e4d30
GUEST_EXPORT(0x006e4d30, d_006e4d30::f_006e4d30);

// f_006e4d80: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006e4d80 {


u32 f_006e4d80(u32 r0) {
    u32 r1 = 0;
    r1 = 0x865cf8u;  // (from the original)
    r0 = u32(*gptr<u16>(r1 + ((r0 & 3u) << 1)));
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_006e4d80
GUEST_EXPORT(0x006e4d80, d_006e4d80::f_006e4d80);

// f_006e4d98: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006e4d98 {


u32 f_006e4d98(u32 r0) {
    u32 zf = 0;
    zf = r0 == 0x6au;  // (from the original)
    if (!zf) {
        zf = r0 == 0x6bu;  // (from the original)
    }
    if (zf) {
        r0 = 1u;
    } else {
        r0 = 0u;
    }
    return r0;
}

}  // namespace d_006e4d98
GUEST_EXPORT(0x006e4d98, d_006e4d98::f_006e4d98);

// f_006e4e70: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006e4e70 {


u32 f_006e4e70(u32 r0) {
    if (r0 == 0) {
        r0 = 0x1au;  // (from the original)
    } else {
        r0 = 0x1bu;  // (from the original)
    }
    return r0;
}

}  // namespace d_006e4e70
GUEST_EXPORT(0x006e4e70, d_006e4e70::f_006e4e70);

// f_006e50f0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006e50f0 {


u32 f_006e50f0(u32 r0, u32 r1) {
    u32 ea = 0;
    u32 res = 0;
    u32 r2 = 0;
    u32 r3 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r9 = guest::cpu()->r[9];
    u32 r10 = guest::cpu()->r[10];
    u32 r12 = 0;
    u32 r13 = guest::cpu()->r[13];
    if (r1 >= 0xeu) {  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[4] = r4;
        guest::cpu()->r[5] = r5;
        guest::cpu()->r[6] = r6;
        guest::cpu()->r[7] = r7;
        guest::cpu()->r[8] = r8;
        guest::cpu()->r[9] = r9;
        guest::cpu()->r[10] = r10;
        guest::cpu()->r[13] = r13;
        return r0;
    } else {
        r12 = 0u;
    }
    ea = r13 - 0x1c;  // (from the original)
    *gptr<u32>(ea) = u32(r4);
    *gptr<u32>(ea + 4) = u32(r5);
    *gptr<u32>(ea + 8) = u32(r6);
    *gptr<u32>(ea + 0xc) = u32(r7);  // (from the original)
    *gptr<u32>(ea + 0x10) = u32(r8);  // (from the original)
    *gptr<u32>(ea + 0x14) = u32(r9);  // (from the original)
    *gptr<u32>(ea + 0x18) = u32(r10);  // (from the original)
    r13 = r13 - 0x1c;  // (from the original)
    r6 = 0u;
    r4 = r0 + 0x35e0u;  // (from the original)
    r7 = 0xa14b48u;  // (from the original)
    r5 = 0x276u;  // (from the original)
L_6e5114:;
    r2 = uxth(r12);
    r3 = *gptr<u32>(0xa159d0u);  // (from the original)
    if (r3 != 0) {
        if (r2 >= r5) {
            goto L_6e515c;
        }
        res = r3 + (r2 + (r2 << 3) << 1);
        r2 = res;
        if (res != 0) {
            goto L_6e5160;
        }
        goto L_6e515c;
    }
    *gptr<u32>(r7) = u32(r6);
    *gptr<u32>(r7 + 4u) = u32(r6);
    *gptr<u32>(r7 + 8u) = u32(r6);
    *gptr<u32>(r7 + 0xcu) = u32(r6);  // (from the original)
    r2 = r7;
    *gptr<u16>(r7 + 0x10u) = u16(r6);  // (from the original)
    goto L_6e5160;
L_6e515c:;
    r2 = r3;
L_6e5160:;
    r2 = u32(*gptr<u8>(r2 + 0xfu)) >> 4;  // (from the original)
    if (r2 >= 0xeu) {  // (from the original)
        r2 = 0u;
    }
    if (r1 != r2) {
        goto L_6e51b8;
    }
    r8 = r0 + (r12 << 4) + 0xe80u;  // (from the original)
    if (r1 == 0) {
        goto L_6e51a4;
    }
    if ((u32(*gptr<u8>(r4)) & 1u) == 0) {
        goto L_6e51a4;
    }
    ea = r0 + 0xf40u;  // (from the original)
    r3 = *gptr<u32>(ea + 4);
    r9 = *gptr<u32>(ea + 8);
    r10 = *gptr<u32>(ea + 0xc);  // (from the original)
    *gptr<u32>(r8) = u32(*gptr<u32>(ea));
    *gptr<u32>(r8 + 4) = u32(r3);
    *gptr<u32>(r8 + 8) = u32(r9);
    *gptr<u32>(r8 + 0xc) = u32(r10);  // (from the original)
    goto L_6e51b8;
L_6e51a4:;
    r3 = 0u;
    *gptr<u32>(r8) = u32(r3);
    *gptr<u32>(r8 + 4u) = u32(r3);
    *gptr<u32>(r8 + 8u) = u32(r3);
    *gptr<u32>(r8 + 0xcu) = u32(r3);  // (from the original)
L_6e51b8:;
    r12 = r12 + 1u;
    if (u32(r5 >= r12) && !u32(r5 == r12)) {
        guest::preempt();
        goto L_6e5114;
    }
    if (r1 < 0xeu) {  // (from the original)
        ea = (r1 >> 3) + r4;
        r0 = ea;
        r1 = u32(*gptr<u8>(ea)) & ~lsl_r(1u, r1 & 7u);
        *gptr<u8>(r0) = u8(r1);
    }
    ea = r13;
    r13 = r13 + 0x1c;  // (from the original)
    r4 = *gptr<u32>(ea);
    r5 = *gptr<u32>(ea + 4);
    r6 = *gptr<u32>(ea + 8);
    r7 = *gptr<u32>(ea + 0xc);  // (from the original)
    r8 = *gptr<u32>(ea + 0x10);  // (from the original)
    r9 = *gptr<u32>(ea + 0x14);  // (from the original)
    r10 = *gptr<u32>(ea + 0x18);  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[4] = r4;
    guest::cpu()->r[5] = r5;
    guest::cpu()->r[6] = r6;
    guest::cpu()->r[7] = r7;
    guest::cpu()->r[8] = r8;
    guest::cpu()->r[9] = r9;
    guest::cpu()->r[10] = r10;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_006e50f0
GUEST_EXPORT(0x006e50f0, d_006e50f0::f_006e50f0);

// f_006e5920: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006e5920 {

inline constexpr guest::Function<0x004b4fc0, u32(u32, u32, u32, u32)> call_004b4fc0;  // (from the original)
inline constexpr guest::Function<0x00568630, u32(u32, u32, u32, u32)> call_00568630;  // (from the original)
inline constexpr guest::Function<0x00568984, u32(u32, u32, u32, u32)> call_00568984;  // (from the original)
inline constexpr guest::Function<0x00568c10, u32(u32, u32, u32, u32)> call_00568c10;  // (from the original)
inline constexpr guest::Function<0x005697e0, u32(u32, u32, u32, u32)> call_005697e0;  // (from the original)

u32 f_006e5920(u32 r0, u32 r1, u32 r2_unused, u32 r3, float S0) {
    u32 r2 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r4 = r0;
    r5 = r1;
    r2 = 1u;
    r1 = 0x6e5998u;  // (from the original)
    r0 = r0 + 0x460u;  // (from the original)
    guest::cpu()->s[0] = S0;
    r0 = call_004b4fc0(r0, r1, r2, r3);
    S0 = guest::cpu()->s[0];
    r2 = r0;
    r1 = r4 + 0xa58u;  // (from the original)
    r3 = 0u;
    r6 = r1;
    r0 = r4 + 0x460u;  // (from the original)
    guest::cpu()->s[0] = S0;
    r0 = call_00568630(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r6;
    S0 = float(std::bit_cast<u32>(std::bit_cast<float>(r5)));
    guest::cpu()->s[0] = S0;
    r0 = call_005697e0(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
    r0 = r4 + 0x460u;  // (from the original)
    guest::cpu()->s[0] = S0;
    r0 = call_00568c10(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
    r2 = 1u;
    r1 = 0x6e5998u;  // (from the original)
    r0 = r4 + 0x460u;  // (from the original)
    guest::cpu()->s[0] = S0;
    r0 = call_004b4fc0(r0, r1, r2, r3);
    S0 = guest::cpu()->s[0];
    r2 = r0;
    r1 = r6;
    r0 = r4 + 0x460u;  // (from the original)
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    r3 = 0u;
    guest::cpu()->s[0] = S0;
    return call_00568984(r0, r1, r2, r3);
}

}  // namespace d_006e5920
GUEST_EXPORT(0x006e5920, d_006e5920::f_006e5920);

// f_006e59c0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006e59c0 {

inline constexpr guest::Function<0x004b4fc0, u32(u32, u32, u32, u32)> call_004b4fc0;  // (from the original)
inline constexpr guest::Function<0x00568630, u32(u32, u32, u32, u32)> call_00568630;  // (from the original)
inline constexpr guest::Function<0x00568984, u32(u32, u32, u32, u32)> call_00568984;  // (from the original)
inline constexpr guest::Function<0x00568c10, u32(u32, u32, u32, u32)> call_00568c10;  // (from the original)
inline constexpr guest::Function<0x005697e0, u32(u32, u32, u32, u32)> call_005697e0;  // (from the original)

u32 f_006e59c0(u32 r0, u32 r1, u32 r2_unused, u32 r3, float S0) {
    u32 r2 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r4 = r0;
    r5 = r1;
    r2 = 1u;
    r1 = 0x6e5a34u;  // (from the original)
    r0 = r0 + 0x460u;  // (from the original)
    guest::cpu()->s[0] = S0;
    r0 = call_004b4fc0(r0, r1, r2, r3);
    S0 = guest::cpu()->s[0];
    r2 = r0;
    r3 = 0u;
    r1 = r4 + 0xa80u;  // (from the original)
    r0 = r4 + 0x460u;  // (from the original)
    guest::cpu()->s[0] = S0;
    r0 = call_00568630(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r4 + 0xa80u;  // (from the original)
    S0 = float(std::bit_cast<u32>(std::bit_cast<float>(r5)));
    guest::cpu()->s[0] = S0;
    r0 = call_005697e0(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
    r0 = r4 + 0x460u;  // (from the original)
    guest::cpu()->s[0] = S0;
    r0 = call_00568c10(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
    r2 = 1u;
    r1 = 0x6e5a34u;  // (from the original)
    r0 = r4 + 0x460u;  // (from the original)
    guest::cpu()->s[0] = S0;
    r0 = call_004b4fc0(r0, r1, r2, r3);
    S0 = guest::cpu()->s[0];
    r2 = r0;
    r3 = 0u;
    r1 = r4 + 0xa80u;  // (from the original)
    r0 = r4 + 0x460u;  // (from the original)
    guest::cpu()->s[0] = S0;
    r0 = call_00568984(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    S0 = guest::cpu()->s[0];
    *gptr<u8>(r4 + 0xaf0u) = u8(r5);  // (from the original)
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->s[0] = S0;
    return r0;
}

}  // namespace d_006e59c0
GUEST_EXPORT(0x006e59c0, d_006e59c0::f_006e59c0);

// f_006e5e94: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006e5e94 {

inline constexpr guest::Function<0x004b4fc0, u32(u32, u32, u32, u32)> call_004b4fc0;  // (from the original)
inline constexpr guest::Function<0x00568630, u32(u32, u32, u32, u32)> call_00568630;  // (from the original)
inline constexpr guest::Function<0x0056878c, u32(u32, u32, u32, u32)> call_0056878c;  // (from the original)
inline constexpr guest::Function<0x00568984, u32(u32, u32, u32, u32)> call_00568984;  // (from the original)
inline constexpr guest::Function<0x005697e0, u32(u32, u32, u32, u32)> call_005697e0;  // (from the original)

u32 f_006e5e94(u32 r0, u32 r1, u32 r2, u32 r3, float S0) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r4 = r0;
    r5 = r1;
    r1 = 0x6e5f38u;  // (from the original)
    r0 = r0 + 0x460u;  // (from the original)
    guest::cpu()->s[0] = S0;
    r0 = call_0056878c(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
    r1 = u32(*gptr<u8>(r0 + 0xb7u)) & 0xfeu | r5;  // (from the original)
    *gptr<u8>(r0 + 0xb7u) = u8(r1);  // (from the original)
    r0 = u32(*gptr<u8>(r4 + 0xaedu));  // (from the original)
    if (r5 != 0) {
        if (r0 != 0) {
            goto L_6e5f30;
        }
        r2 = 1u;
        r1 = 0x6e5f48u;  // (from the original)
        r0 = r4 + 0x460u;  // (from the original)
        guest::cpu()->s[0] = S0;
        r0 = call_004b4fc0(r0, r1, r2, r3);
        S0 = guest::cpu()->s[0];
        r2 = r0;
        r3 = 0u;
        r1 = r4 + 0xa30u;  // (from the original)
        r0 = r4 + 0x460u;  // (from the original)
        guest::cpu()->s[0] = S0;
        r0 = call_00568630(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        S0 = std::bit_cast<float>(*gptr<u32>(0x6e5f54u));  // (from the original)
        r0 = r4 + 0xa30u;  // (from the original)
        guest::cpu()->s[0] = S0;
        r0 = call_005697e0(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        S0 = guest::cpu()->s[0];
        goto L_6e5f30;
    }
    if (r0 != 1u) {
        goto L_6e5f30;
    }
    r2 = 1u;
    r1 = 0x6e5f48u;  // (from the original)
    r0 = r4 + 0x460u;  // (from the original)
    guest::cpu()->s[0] = S0;
    r0 = call_004b4fc0(r0, r1, r2, r3);
    S0 = guest::cpu()->s[0];
    r2 = r0;
    r3 = 0u;
    r1 = r4 + 0xa30u;  // (from the original)
    r0 = r4 + 0x460u;  // (from the original)
    guest::cpu()->s[0] = S0;
    r0 = call_00568984(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    S0 = guest::cpu()->s[0];
L_6e5f30:;
    *gptr<u8>(r4 + 0xaedu) = u8(r5);  // (from the original)
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->s[0] = S0;
    return r0;
}

}  // namespace d_006e5e94
GUEST_EXPORT(0x006e5e94, d_006e5e94::f_006e5e94);

// f_006e5f58: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006e5f58 {

struct __attribute__((packed)) Object_006e5f58_0 {
    u8 unknown_0[0xaee];  // (not used here)
    u8 byte_aee;
};
GUEST_OFFSET(Object_006e5f58_0, byte_aee, 0xaee);  // (from the original)

inline constexpr guest::Function<0x006c8e30, u32(u32, u32, u32, u32)> call_006c8e30;  // (from the original)
inline constexpr guest::Function<0x006c9050, u32(u32, u32, u32, u32)> call_006c9050;  // (from the original)

u32 f_006e5f58(gptr<Object_006e5f58_0> arg0, u32 r1) {
    u32 r0 = arg0.addr();
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r4 = r0;
    r5 = r1;
    r0 = u32(s32(s8(arg0->byte_aee)));
    if (r0 != r5) {
        r0 = r4 + 0x24u;  // (from the original)
        if (r5 != 0) {
            r0 = call_006c8e30(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
            r1 = guest::cpu()->r[1];
        } else {
            r0 = call_006c9050(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
            r1 = guest::cpu()->r[1];
        }
        *gptr<u8>(r4 + 0xaeeu) = u8(r5);  // (from the original)
    }
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    return r0;
}

}  // namespace d_006e5f58
GUEST_EXPORT(0x006e5f58, d_006e5f58::f_006e5f58);

// f_006e64c4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006e64c4 {

struct __attribute__((packed)) Object_006e64c4_0 {
    u8 unknown_0[0xae0];  // (not used here)
    u32 word_ae0;
    u8 unknown_ae4[0x4];  // (not used here)
    u32 word_ae8;
};
GUEST_OFFSET(Object_006e64c4_0, word_ae0, 0xae0);  // (from the original)
GUEST_OFFSET(Object_006e64c4_0, word_ae8, 0xae8);  // (from the original)

inline constexpr guest::Function<0x001323b4, u32(u32, u32, u32, u32)> call_001323b4;  // (from the original)
inline constexpr guest::Function<0x004b6d74, u32(u32, u32, u32, u32)> call_004b6d74;  // (from the original)
inline constexpr guest::Function<0x004b6dc8, u32(u32, u32, u32, u32)> call_004b6dc8;  // (from the original)
inline constexpr guest::Function<0x00584134, u32(u32, u32, u32, u32)> call_00584134;  // (from the original)
inline constexpr guest::Function<0x0058660c, u32(u32, u32, u32, u32)> call_0058660c;  // (from the original)
inline constexpr guest::Function<0x0058c5f0, u32(u32, u32, u32, u32)> call_0058c5f0;  // (from the original)
inline constexpr guest::Function<0x006c8ef0, u32(u32, u32, u32, u32)> call_006c8ef0;  // (from the original)

u32 f_006e64c4(gptr<Object_006e64c4_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r1 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r4 = r0;
    r0 = arg0->word_ae8;
    r1 = *gptr<u32>(r0 + 0x10u);  // (from the original)
    if (r1 != 0) {
        r1 = arg0->word_ae0;
        r5 = r4 + 0xae0u;  // (from the original)
        r0 = call_004b6dc8(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1 = *gptr<u32>(r5);
        r0 = *gptr<u32>(r4 + 0x5ccu);  // (from the original)
        r0 = call_004b6d74(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
    }
    r0 = call_0058660c(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r0 = u32(*gptr<u16>(r0 + 0xeu));  // (from the original)
    if ((r0 & 8u) == 0) {
        r0 = call_00584134(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1 = 0x24u;  // (from the original)
        r0 = call_0058c5f0(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
    }
    r0 = r4 + 0x24u;  // (from the original)
    r0 = call_006c8ef0(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r0 = r4 + 0x460u;  // (from the original)
    r0 = call_001323b4(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r0 = r4 + 0x5acu;  // (from the original)
    r0 = call_001323b4(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r0 = 1u;
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_006e64c4
GUEST_EXPORT(0x006e64c4, d_006e64c4::f_006e64c4);

// f_006e69cc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006e69cc {

struct __attribute__((packed)) Object_006e69cc_0 {
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
    u8 byte_2c;
    u8 unknown_2d[0x3];  // (not used here)
    u32 word_30;
    u32 word_34;
    u32 word_38;
    u8 byte_3c;
    u8 unknown_3d[0x3];  // (not used here)
    u32 word_40;
    u32 word_44;
};
GUEST_OFFSET(Object_006e69cc_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_006e69cc_0, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_006e69cc_0, byte_8, 0x8);  // (from the original)
GUEST_OFFSET(Object_006e69cc_0, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Object_006e69cc_0, word_10, 0x10);  // (from the original)
GUEST_OFFSET(Object_006e69cc_0, word_14, 0x14);  // (from the original)
GUEST_OFFSET(Object_006e69cc_0, byte_18, 0x18);  // (from the original)
GUEST_OFFSET(Object_006e69cc_0, word_1c, 0x1c);  // (from the original)
GUEST_OFFSET(Object_006e69cc_0, word_20, 0x20);  // (from the original)
GUEST_OFFSET(Object_006e69cc_0, word_24, 0x24);  // (from the original)
GUEST_OFFSET(Object_006e69cc_0, word_28, 0x28);  // (from the original)
GUEST_OFFSET(Object_006e69cc_0, byte_2c, 0x2c);  // (from the original)
GUEST_OFFSET(Object_006e69cc_0, word_30, 0x30);  // (from the original)
GUEST_OFFSET(Object_006e69cc_0, word_34, 0x34);  // (from the original)
GUEST_OFFSET(Object_006e69cc_0, word_38, 0x38);  // (from the original)
GUEST_OFFSET(Object_006e69cc_0, byte_3c, 0x3c);  // (from the original)
GUEST_OFFSET(Object_006e69cc_0, word_40, 0x40);  // (from the original)
GUEST_OFFSET(Object_006e69cc_0, word_44, 0x44);  // (from the original)

inline constexpr guest::Function<0x001207d8, u32(u32, u32, u32, u32)> call_001207d8;  // (from the original)
inline constexpr guest::Function<0x00125aec, u32(u32, u32, u32, u32)> call_00125aec;  // (from the original)
inline constexpr guest::Function<0x00125e3c, u32(u32, u32, u32, u32)> call_00125e3c;  // (from the original)

u32 f_006e69cc(gptr<Object_006e69cc_0> arg0, float S0) {
    u32 ea = 0;
    u32 r0 = arg0.addr();
    u32 r1 = 0;
    u32 r2 = 0;
    u32 r3 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r13 = guest::cpu()->r[13];
    r1 = 0x87aa7cu;  // (from the original)
    r13 = r13 - 8;
    r4 = 0u;
    arg0->word_4 = u32(r4);
    arg0->byte_8 = u8(r4);
    ea = r1 + 0x40u;  // (from the original)
    r3 = *gptr<u32>(ea + 4);
    arg0->word_c = u32(*gptr<u32>(ea));
    arg0->word_10 = u32(r3);
    arg0->word_14 = u32(r4);
    arg0->byte_18 = u8(r4);
    arg0->word_1c = u32(r4);
    arg0->word_0 = u32(0x8f9618u);  // (from the original)
    arg0->word_20 = u32(r4);
    r0 = r0 + 0x24u;  // (from the original)
    r3 = r0 + 0x10u;  // (from the original)
    arg0->word_28 = u32(r4);
    arg0->byte_2c = u8(r4);
    r2 = *gptr<u32>(r1 + 0x38u);  // (from the original)
    r1 = *gptr<u32>(r1 + 0x3cu);  // (from the original)
    arg0->word_30 = u32(r2);
    arg0->word_34 = u32(r1);
    arg0->word_38 = u32(r4);
    r1 = 0x8f8ed0u;  // (from the original)
    arg0->byte_3c = u8(r4);
    arg0->word_40 = u32(r4);
    arg0->word_24 = u32(r1);
    arg0->word_44 = u32(r4);
    r0 = r0 + 0x24u;  // (from the original)
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
    r0 = call_001207d8(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
    r0 = r0 + 0x248u;  // (from the original)
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
    r0 = r0 - 0x408u;  // (from the original)
    r1 = r0 + 0x400u;  // (from the original)
    *gptr<u8>(r0 + 0x430u) = u8(r4);  // (from the original)
    *gptr<u8>(r0 + 0x431u) = u8(r4);  // (from the original)
    *gptr<u32>(r0 + 0x434u) = u32(r4);  // (from the original)
    S0 = std::bit_cast<float>(*gptr<u32>(0x6e6b54u));  // (from the original)
    *gptr<u32>(r1 + 0x38u) = u32(std::bit_cast<u32>(S0));  // (from the original)
    r0 = r0 + 0x43cu;  // (from the original)
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
    r0 = call_00125e3c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
    r0 = r0 + 0x14cu;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    r0 = call_001207d8(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
    r0 = r0 + 0x248u;  // (from the original)
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
    S0 = guest::cpu()->s[0];
    r0 = r0 - 0xa80u;  // (from the original)
    *gptr<u32>(r0 + 0xaa8u) = u32(r4);  // (from the original)
    *gptr<u32>(r0 + 0xaacu) = u32(r4);  // (from the original)
    *gptr<u32>(r0 + 0xab0u) = u32(r4);  // (from the original)
    *gptr<u32>(r0 + 0xab4u) = u32(r4);  // (from the original)
    *gptr<u32>(r0 + 0xab8u) = u32(r4);  // (from the original)
    *gptr<u32>(r0 + 0xabcu) = u32(r4);  // (from the original)
    *gptr<u32>(r0 + 0xad4u) = u32(r4);  // (from the original)
    *gptr<u32>(r0 + 0xad8u) = u32(r4);  // (from the original)
    *gptr<u32>(r0 + 0xadcu) = u32(r4);  // (from the original)
    *gptr<u32>(r0 + 0xae0u) = u32(r4);  // (from the original)
    *gptr<u32>(r0 + 0xae4u) = u32(r4);  // (from the original)
    *gptr<u32>(r0 + 0xae8u) = u32(r4);  // (from the original)
    *gptr<u8>(r0 + 0xaecu) = u8(1u);  // (from the original)
    *gptr<u8>(r0 + 0xaedu) = u8(r4);  // (from the original)
    *gptr<u8>(r0 + 0xaeeu) = u8(r4);  // (from the original)
    *gptr<u8>(r0 + 0xaefu) = u8(r4);  // (from the original)
    r1 = 2u;
    *gptr<u8>(r0 + 0xaf0u) = u8(7u);  // (from the original)
    *gptr<u8>(r0 + 0xaf1u) = u8(r1);  // (from the original)
    *gptr<u32>(r0 + 0xac0u) = u32(r4);  // (from the original)
    *gptr<u32>(r0 + 0xac4u) = u32(r4);  // (from the original)
    *gptr<u32>(r0 + 0xac8u) = u32(r4);  // (from the original)
    *gptr<u32>(r0 + 0xaccu) = u32(r4);  // (from the original)
    *gptr<u32>(r0 + 0xad0u) = u32(r4);  // (from the original)
    r13 = r13 + 8;
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    return r0;
}

}  // namespace d_006e69cc
GUEST_EXPORT(0x006e69cc, d_006e69cc::f_006e69cc);

// f_006e7c8c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006e7c8c {

struct __attribute__((packed)) Object_006e7c8c_0 {
    u8 unknown_0[0x474];  // (not used here)
    u8 byte_474;
    u8 unknown_475[0x23];  // (not used here)
    u16 half_498;
    u8 unknown_49a[0x66];  // (not used here)
    u16 half_500;
};
GUEST_OFFSET(Object_006e7c8c_0, byte_474, 0x474);  // (from the original)
GUEST_OFFSET(Object_006e7c8c_0, half_498, 0x498);  // (from the original)
GUEST_OFFSET(Object_006e7c8c_0, half_500, 0x500);  // (from the original)

struct __attribute__((packed)) Object_006e7c8c_1 {
    u16 half_0;
};
GUEST_OFFSET(Object_006e7c8c_1, half_0, 0x0);  // (from the original)


u32 f_006e7c8c(gptr<Object_006e7c8c_0> arg0, gptr<Object_006e7c8c_1> arg1) {
    u32 r0 = arg0.addr();
    u32 r1 = arg1.addr();
    arg0->half_500 = u16(u32(arg1->half_0));
    if (u32(arg0->byte_474) >= 0x1du) {  // (from the original)
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r1 = u32(arg1->half_0);
    r0 = r0 + 0x478u;  // (from the original)
    arg0->half_498 = u16(r1);
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_006e7c8c
GUEST_EXPORT(0x006e7c8c, d_006e7c8c::f_006e7c8c);

// f_006e7d98: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006e7d98 {

struct __attribute__((packed)) Object_006e7d98_0 {
    u8 unknown_0[0x474];  // (not used here)
    u8 byte_474;
    u8 unknown_475[0xf];  // (not used here)
    u32 word_484;
    u32 word_488;
    u32 word_48c;
    u8 unknown_490[0x5c];  // (not used here)
    u32 word_4ec;
    u32 word_4f0;
    u32 word_4f4;
};
GUEST_OFFSET(Object_006e7d98_0, byte_474, 0x474);  // (from the original)
GUEST_OFFSET(Object_006e7d98_0, word_484, 0x484);  // (from the original)
GUEST_OFFSET(Object_006e7d98_0, word_488, 0x488);  // (from the original)
GUEST_OFFSET(Object_006e7d98_0, word_48c, 0x48c);  // (from the original)
GUEST_OFFSET(Object_006e7d98_0, word_4ec, 0x4ec);  // (from the original)
GUEST_OFFSET(Object_006e7d98_0, word_4f0, 0x4f0);  // (from the original)
GUEST_OFFSET(Object_006e7d98_0, word_4f4, 0x4f4);  // (from the original)

inline constexpr guest::Function<0x007523a8, u32(u32, u32, u32, u32)> call_007523a8;  // (from the original)

u32 f_006e7d98(gptr<Object_006e7d98_0> arg0, gptr<Float3> arg1, u32 r2_unused, u32 r3, float S0, float S1) {
    u32 r0 = arg0.addr();
    u32 r1 = arg1.addr();
    u32 r2 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 zf = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r4 = r0;
    r5 = r0 + 0x4e0u;  // (from the original)
    arg0->word_4ec = u32(std::bit_cast<u32>(arg1->v[0]));
    arg0->word_4f0 = u32(std::bit_cast<u32>(arg1->v[1]));
    r2 = std::bit_cast<u32>(arg1->v[2]);
    arg0->word_4f4 = u32(r2);
    if (u32(arg0->byte_474) < 0x1du) {  // (from the original)
        arg0->word_484 = u32(std::bit_cast<u32>(arg1->v[0]));
        r2 = std::bit_cast<u32>(arg1->v[1]);
        arg0->word_488 = u32(r2);
        r1 = std::bit_cast<u32>(arg1->v[2]);
        arg0->word_48c = u32(r1);
    }
    r0 = *gptr<u32>(r4 + 0x28u);  // (from the original)
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    r0 = call_007523a8(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    if (r0 == 0) {
        goto L_6e7ec0;
    }
    r0 = u32(*gptr<u8>(r4 + 0x4a8u));  // (from the original)
    if (r0 != 0) {
        goto L_6e7ec0;
    }
    r0 = *gptr<u32>(r4 + 0x28u);  // (from the original)
    r1 = *gptr<u32>(r0 + 0xaa0u);  // (from the original)
    if (r1 == 0) {
        goto L_6e7ec0;
    }
    r0 = u32(*gptr<u8>(r4 + 0x30u));  // (from the original)
    zf = r0 == 1u;
    if (!zf) {
        zf = r0 == 2u;
    }
    if (zf) {
        goto L_6e7e50;
    }
    zf = r0 == 3u;
    if (!zf) {
        zf = r0 == 5u;
    }
    if (zf) {
        goto L_6e7e50;
    }
    zf = r0 == 6u;
    if (!zf) {
        zf = r0 == 7u;
    }
    if (zf) {
        goto L_6e7e50;
    }
    zf = r0 == 8u;
    if (!zf) {
        zf = r0 == 9u;
    }
    if (zf) {
        goto L_6e7e50;
    }
    zf = r0 == 0xau;  // (from the original)
    if (!zf) {
        zf = r0 == 0xbu;  // (from the original)
    }
    if (!zf) {
        goto L_6e7ec0;
    }
L_6e7e50:;
    r2 = u32(*gptr<u8>(r1 + 7u)) & ~0x3fu | r0 & 0x3fu;  // (from the original)
    *gptr<u8>(r1 + 7u) = u8(r2);
    *gptr<u8>(r1 + 7u) = u8(r2 & ~0xc0u | u32(*gptr<u8>(r4 + 0x4ddu)) << 6);  // (from the original)
    r0 = r1 + 9u;
    S1 = std::bit_cast<float>(*gptr<u32>(r5 + 0x14u));  // (from the original)
    r1 = std::bit_cast<u32>(std::bit_cast<float>(vcvt_uz_f(std::bit_cast<float>(*gptr<u32>(r5 + 0xcu)))));  // (from the original)
    S0 = std::bit_cast<float>(vcvt_uz_f(S1));
    *gptr<u8>(r0) = u8(r1);
    r3 = u32(*gptr<u8>(r0 + 1u)) & ~0xfu | (r1 & 0xf00u) >> 8;  // (from the original)
    r1 = std::bit_cast<u32>(S0);
    r3 = r3 & ~0xf0u | r1 << 4;  // (from the original)
    r1 = 0u | r1 >> 4;
    *gptr<u8>(r0 + 1u) = u8(r3);
    *gptr<u8>(r0 + 2u) = u8(r1);
L_6e7ec0:;
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    return r0;
}

}  // namespace d_006e7d98
GUEST_EXPORT(0x006e7d98, d_006e7d98::f_006e7d98);

// f_006e9cf0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006e9cf0 {

struct __attribute__((packed)) Object_006e9cf0_0 {
    u8 unknown_0[0x474];  // (not used here)
    u8 byte_474;
    u8 unknown_475[0x25];  // (not used here)
    u16 half_49a;
    u8 unknown_49c[0x64];  // (not used here)
    u16 half_500;
};
GUEST_OFFSET(Object_006e9cf0_0, byte_474, 0x474);  // (from the original)
GUEST_OFFSET(Object_006e9cf0_0, half_49a, 0x49a);  // (from the original)
GUEST_OFFSET(Object_006e9cf0_0, half_500, 0x500);  // (from the original)

struct __attribute__((packed)) Object_006e9cf0_1 {
    u16 half_0;
};
GUEST_OFFSET(Object_006e9cf0_1, half_0, 0x0);  // (from the original)


u32 f_006e9cf0(gptr<Object_006e9cf0_0> arg0, gptr<Object_006e9cf0_1> arg1) {
    u32 r0 = arg0.addr();
    u32 r1 = arg1.addr();
    arg0->half_500 = u16(u32(arg1->half_0));
    if (u32(arg0->byte_474) >= 0x1du) {  // (from the original)
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r1 = u32(arg1->half_0);
    r0 = r0 + 0x478u;  // (from the original)
    arg0->half_49a = u16(r1);
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_006e9cf0
GUEST_EXPORT(0x006e9cf0, d_006e9cf0::f_006e9cf0);

// f_006ea210: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006ea210 {

struct __attribute__((packed)) Object_006ea210_0 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u8 byte_10;
    u8 unknown_11[0x3];  // (not used here)
    u32 word_14;
    u32 word_18;
    u32 word_1c;
    u16 half_20;
    u16 half_22;
    u8 unknown_24[0x4];  // (not used here)
    u32 word_28;
    u8 unknown_2c[0x480];  // (not used here)
    u32 word_4ac;
    u32 word_4b0;
    u32 word_4b4;
    u32 word_4b8;
    u32 word_4bc;
    u32 word_4c0;
    u8 unknown_4c4[0xa];  // (not used here)
    u16 half_4ce;
    u8 byte_4d0;
};
GUEST_OFFSET(Object_006ea210_0, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_006ea210_0, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Object_006ea210_0, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Object_006ea210_0, byte_10, 0x10);  // (from the original)
GUEST_OFFSET(Object_006ea210_0, word_14, 0x14);  // (from the original)
GUEST_OFFSET(Object_006ea210_0, word_18, 0x18);  // (from the original)
GUEST_OFFSET(Object_006ea210_0, word_1c, 0x1c);  // (from the original)
GUEST_OFFSET(Object_006ea210_0, half_20, 0x20);  // (from the original)
GUEST_OFFSET(Object_006ea210_0, half_22, 0x22);  // (from the original)
GUEST_OFFSET(Object_006ea210_0, word_28, 0x28);  // (from the original)
GUEST_OFFSET(Object_006ea210_0, word_4ac, 0x4ac);  // (from the original)
GUEST_OFFSET(Object_006ea210_0, word_4b0, 0x4b0);  // (from the original)
GUEST_OFFSET(Object_006ea210_0, word_4b4, 0x4b4);  // (from the original)
GUEST_OFFSET(Object_006ea210_0, word_4b8, 0x4b8);  // (from the original)
GUEST_OFFSET(Object_006ea210_0, word_4bc, 0x4bc);  // (from the original)
GUEST_OFFSET(Object_006ea210_0, word_4c0, 0x4c0);  // (from the original)
GUEST_OFFSET(Object_006ea210_0, half_4ce, 0x4ce);  // (from the original)
GUEST_OFFSET(Object_006ea210_0, byte_4d0, 0x4d0);  // (from the original)

inline constexpr guest::Function<0x006ea9dc, u32(u32, u32, u32, u32)> call_006ea9dc;  // (from the original)

u32 f_006ea210(gptr<Object_006ea210_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r1 = 0;
    u32 r2 = 0;
    u32 r3 = 0;
    u32 r4 = guest::cpu()->r[4];
    guest::cpu()->r[13] -= 8u;
    r4 = r0;
    r1 = r0 + 0x4acu;  // (from the original)
    arg0->word_4 = u32(arg0->word_4b8);
    r3 = r4 + 0x14u;  // (from the original)
    arg0->word_8 = u32(arg0->word_4bc);
    arg0->word_c = u32(arg0->word_4c0);
    arg0->half_20 = u16(u32(*gptr<u16>(arg0->word_28 + 0x2eu)));  // (from the original)
    arg0->half_22 = u16(u32(arg0->half_4ce));
    r2 = arg0->word_4b0;
    arg0->word_14 = u32(arg0->word_4ac);
    arg0->word_18 = u32(r2);
    arg0->byte_10 = u8(u32(arg0->byte_4d0));
    arg0->word_1c = u32(arg0->word_4b4);
    r0 = r4;
    r0 = call_006ea9dc(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    *gptr<u8>(r4 + 0x4dcu) = u8(0u);  // (from the original)
    r0 = 1u;
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_006ea210
GUEST_EXPORT(0x006ea210, d_006ea210::f_006ea210);

// f_006ea318: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006ea318 {

struct __attribute__((packed)) Object_006ea318_0 {
    u8 unknown_0[0x434];  // (not used here)
    u32 word_434;
};
GUEST_OFFSET(Object_006ea318_0, word_434, 0x434);  // (from the original)

inline constexpr guest::Function<0x0026a418, u32(u32, u32, u32, u32)> call_0026a418;  // (from the original)

u32 f_006ea318(gptr<Object_006ea318_0> arg0, u32 r1_unused, u32 r2) {
    u32 r0 = arg0.addr();
    u32 r1 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 zf = 0;
    guest::cpu()->r[13] -= 8u;
    r1 = arg0->word_434;
    r4 = r0;
    r0 = r0 + 0x3cu;  // (from the original)
    r0 = call_0026a418(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r0 = *gptr<u32>(r4 + 0x34u);  // (from the original)
    if (r0 == 0) {
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r1 = *gptr<u32>(r0 + 0x10u);  // (from the original)
    if (r1 == 0) {
        r2 = *gptr<u32>(r0 + 0x14u);  // (from the original)
        if ((r2 & 1u) == 0) {
            guest::cpu()->r[13] += 8u;
            guest::cpu()->r[1] = r1;
            return r0;
        }
        if (r2 == 0) {
            guest::cpu()->r[13] += 8u;
            guest::cpu()->r[1] = r1;
            return r0;
        }
    }
    r0 = *gptr<u32>(r0 + 0x14u);  // (from the original)
    zf = (r0 & 1u) == 0;
    r0 = r4 + u32(s32(r0) >> 1);
    if (zf) {
        guest::cpu()->r[13] += 8u;
        return guest::call_address<u32>(r1, r0, r1, r2, guest::cpu()->r[3]);
    }
    r2 = *gptr<u32>(r0);
    r1 = *gptr<u32>(r2 + r1);
    guest::cpu()->r[13] += 8u;
    return guest::call_address<u32>(r1, r0, r1, r2, guest::cpu()->r[3]);
}

}  // namespace d_006ea318
GUEST_EXPORT(0x006ea318, d_006ea318::f_006ea318);

// f_006ed200: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006ed200 {

struct __attribute__((packed)) Object_006ed200_0 {
    u8 unknown_0[0x28];  // (not used here)
    u32 word_28;
};
GUEST_OFFSET(Object_006ed200_0, word_28, 0x28);  // (from the original)

inline constexpr guest::Function<0x007523a8, u32(u32, u32, u32, u32)> call_007523a8;  // (from the original)

u32 f_006ed200(gptr<Object_006ed200_0> arg0, u32 r1, u32 r2, float S0, float S1) {
    u32 r0 = arg0.addr();
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r5 = r0 + 0x400u;  // (from the original)
    r4 = r0;
    r0 = arg0->word_28;
    r5 = r5 + 0xacu;  // (from the original)
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    r0 = call_007523a8(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    if (r0 == 0) {
        goto L_6ed2c0;
    }
    r0 = u32(*gptr<u8>(r4 + 0x4a8u));  // (from the original)
    if (r0 != 0) {
        goto L_6ed2c0;
    }
    r0 = *gptr<u32>(*gptr<u32>(r4 + 0x28u) + 0xaa0u);  // (from the original)
    if (r0 == 0) {
        goto L_6ed2c0;
    }
    r2 = u32(*gptr<u8>(r4 + 0x30u)) & 0x3fu | u32(*gptr<u8>(r0 + 7u)) & ~0x3fu;  // (from the original)
    *gptr<u8>(r0 + 7u) = u8(r2);
    *gptr<u8>(r0 + 7u) = u8(r2 & ~0xc0u | u32(*gptr<u8>(r4 + 0x4ddu)) << 6);  // (from the original)
    r1 = u32(*gptr<u8>(r0 + 8u)) + 1u;
    *gptr<u8>(r0 + 8u) = u8(r1);
    *gptr<u8>(r4 + 0x552u) = u8(r1);  // (from the original)
    r0 = r0 + 9u;
    S1 = std::bit_cast<float>(*gptr<u32>(r5 + 0x14u));  // (from the original)
    r1 = std::bit_cast<u32>(std::bit_cast<float>(vcvt_uz_f(std::bit_cast<float>(*gptr<u32>(r5 + 0xcu)))));  // (from the original)
    S0 = std::bit_cast<float>(vcvt_uz_f(S1));
    *gptr<u8>(r0) = u8(r1);
    r2 = u32(*gptr<u8>(r0 + 1u)) & ~0xfu | (r1 & 0xf00u) >> 8;  // (from the original)
    r1 = std::bit_cast<u32>(S0);
    r2 = r2 & ~0xf0u | r1 << 4;  // (from the original)
    r1 = 0u | r1 >> 4;
    *gptr<u8>(r0 + 1u) = u8(r2);
    *gptr<u8>(r0 + 2u) = u8(r1);
L_6ed2c0:;
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    return r0;
}

}  // namespace d_006ed200
GUEST_EXPORT(0x006ed200, d_006ed200::f_006ed200);

// f_006ee02c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006ee02c {

struct __attribute__((packed)) Object_006ee02c_0 {
    u8 unknown_0[0x474];  // (not used here)
    u8 byte_474;
    u8 unknown_475[0x3];  // (not used here)
    u32 word_478;
    u32 word_47c;
    u8 unknown_480[0x60];  // (not used here)
    u32 word_4e0;
    u32 word_4e4;
};
GUEST_OFFSET(Object_006ee02c_0, byte_474, 0x474);  // (from the original)
GUEST_OFFSET(Object_006ee02c_0, word_478, 0x478);  // (from the original)
GUEST_OFFSET(Object_006ee02c_0, word_47c, 0x47c);  // (from the original)
GUEST_OFFSET(Object_006ee02c_0, word_4e0, 0x4e0);  // (from the original)
GUEST_OFFSET(Object_006ee02c_0, word_4e4, 0x4e4);  // (from the original)

struct __attribute__((packed)) Object_006ee02c_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Object_006ee02c_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_006ee02c_1, word_4, 0x4);  // (from the original)


void f_006ee02c(gptr<Object_006ee02c_0> arg0, gptr<Object_006ee02c_1> arg1) {
    u32 r1 = arg1.addr();
    u32 r2 = 0;
    u32 r3 = 0;
    r3 = arg1->word_4;
    arg0->word_4e0 = u32(arg1->word_0);
    arg0->word_4e4 = u32(r3);
    if (u32(arg0->byte_474) >= 0x1du) {  // (from the original)
        guest::cpu()->r[1] = r1;
        return;
    }
    r1 = arg1->word_0;
    r2 = arg1->word_4;
    arg0->word_478 = u32(r1);
    arg0->word_47c = u32(r2);
    guest::cpu()->r[1] = r1;
    return;
}

}  // namespace d_006ee02c
GUEST_EXPORT(0x006ee02c, d_006ee02c::f_006ee02c);

// f_006ee264: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006ee264 {

struct __attribute__((packed)) Object_006ee264_0 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u8 byte_10;
    u8 unknown_11[0x3];  // (not used here)
    u32 word_14;
    u32 word_18;
    u32 word_1c;
    u16 half_20;
    u16 half_22;
    u16 half_24;
    u8 byte_26;
    u8 byte_27;
    u32 word_28;
    u32 word_2c;
    u8 byte_30;
    u8 byte_31;
    u8 byte_32;
    u8 unknown_33[0x1];  // (not used here)
    u32 word_34;
};
GUEST_OFFSET(Object_006ee264_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_006ee264_0, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_006ee264_0, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Object_006ee264_0, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Object_006ee264_0, byte_10, 0x10);  // (from the original)
GUEST_OFFSET(Object_006ee264_0, word_14, 0x14);  // (from the original)
GUEST_OFFSET(Object_006ee264_0, word_18, 0x18);  // (from the original)
GUEST_OFFSET(Object_006ee264_0, word_1c, 0x1c);  // (from the original)
GUEST_OFFSET(Object_006ee264_0, half_20, 0x20);  // (from the original)
GUEST_OFFSET(Object_006ee264_0, half_22, 0x22);  // (from the original)
GUEST_OFFSET(Object_006ee264_0, half_24, 0x24);  // (from the original)
GUEST_OFFSET(Object_006ee264_0, byte_26, 0x26);  // (from the original)
GUEST_OFFSET(Object_006ee264_0, byte_27, 0x27);  // (from the original)
GUEST_OFFSET(Object_006ee264_0, word_28, 0x28);  // (from the original)
GUEST_OFFSET(Object_006ee264_0, word_2c, 0x2c);  // (from the original)
GUEST_OFFSET(Object_006ee264_0, byte_30, 0x30);  // (from the original)
GUEST_OFFSET(Object_006ee264_0, byte_31, 0x31);  // (from the original)
GUEST_OFFSET(Object_006ee264_0, byte_32, 0x32);  // (from the original)
GUEST_OFFSET(Object_006ee264_0, word_34, 0x34);  // (from the original)

inline constexpr guest::Function<0x00269478, u32(u32, u32, u32, u32)> call_00269478;  // (from the original)
inline constexpr guest::Function<0x002fc20c, u32(u32, u32, u32, u32)> call_002fc20c;  // (from the original)
inline constexpr guest::Function<0x003166a8, u32(u32, u32, u32, u32)> call_003166a8;  // (from the original)

u32 f_006ee264(gptr<Object_006ee264_0> arg0, u32 r1, float S0_unused, float S1, float S2, float S3, float S4) {
    u32 ea = 0;
    u32 r0 = arg0.addr();
    u32 r2 = 0;
    u32 r3 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r12 = 0;
    u32 r13 = guest::cpu()->r[13];
    u32 r14 = guest::cpu()->r[14];
    float S0 = 0;
    r13 = r13 - 0x10;  // (from the original)
    r14 = 0xae5658u;  // (from the original)
    r5 = 0u;
    r6 = 0x1du;  // (from the original)
    r4 = r1;
    ea = r14;
    r12 = *gptr<u32>(ea + 4);
    S0 = std::bit_cast<float>(*gptr<u32>(r14 + 8u));
    arg0->word_4 = u32(*gptr<u32>(ea));
    arg0->word_8 = u32(r12);
    arg0->word_c = u32(std::bit_cast<u32>(S0));
    arg0->byte_10 = u8(r5);
    S0 = std::bit_cast<float>(*gptr<u32>(0x6ee44cu));  // (from the original)
    ea = 0x8806bcu;  // (from the original)
    r3 = *gptr<u32>(ea + 4);
    arg0->word_14 = u32(*gptr<u32>(ea));
    arg0->word_18 = u32(r3);
    arg0->word_1c = u32(std::bit_cast<u32>(S0));
    arg0->half_20 = u16(r5);
    arg0->half_22 = u16(r5);
    r2 = 0x8f969cu;  // (from the original)
    arg0->half_24 = u16(r5);
    arg0->byte_26 = u8(r5);
    arg0->byte_27 = u8(r5);
    arg0->word_0 = u32(r2);
    arg0->word_28 = u32(r5);
    arg0->word_2c = u32(r5);
    arg0->byte_30 = u8(r6);
    arg0->byte_31 = u8(r6);
    arg0->byte_32 = u8(r6);
    ea = r0 + 0x34u;  // (from the original)
    arg0->word_34 = u32(r5);
    r0 = ea + 4u;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2;
    guest::cpu()->s[3] = S3;
    guest::cpu()->s[4] = S4;
    r0 = call_00269478(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    S2 = guest::cpu()->s[2];
    S3 = guest::cpu()->s[3];
    S4 = guest::cpu()->s[4];
    r1 = 0x8f1904u;  // (from the original)
    *gptr<u32>(r0) = u32(r1);
    r0 = r0 + 0x408u;  // (from the original)
    *gptr<u32>(r0) = u32(r4);
    r0 = r0 + 0x38u;  // (from the original)
    *gptr<u16>(r0 + 0x20u) = u16(r5);  // (from the original)
    *gptr<u16>(r0 + 0x22u) = u16(r5);  // (from the original)
    r0 = r0 + 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2;
    guest::cpu()->s[3] = S3;
    guest::cpu()->s[4] = S4;
    r0 = call_002fc20c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    S2 = guest::cpu()->s[2];
    S3 = guest::cpu()->s[3];
    S4 = guest::cpu()->s[4];
    r0 = r0 + 0xcu;  // (from the original)
    *gptr<u16>(r0 + 0x20u) = u16(r5);  // (from the original)
    *gptr<u16>(r0 + 0x22u) = u16(r5);  // (from the original)
    r0 = r0 + 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2;
    guest::cpu()->s[3] = S3;
    guest::cpu()->s[4] = S4;
    r0 = call_002fc20c(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    S2 = guest::cpu()->s[2];
    S3 = guest::cpu()->s[3];
    S4 = guest::cpu()->s[4];
    r1 = 0x276u;  // (from the original)
    r0 = r0 - 0x4d4u;  // (from the original)
    r4 = 1u;
    r2 = r1 + 0x268u;  // (from the original)
    *gptr<u8>(r0 + 0x4dcu) = u8(r4);  // (from the original)
    *gptr<u8>(r0 + 0x4ddu) = u8(r5);  // (from the original)
    *gptr<u16>(r2 + r0) = u16(r1);
    r0 = r0 + 0x4e0u;  // (from the original)
    *gptr<u16>(r0 + 0x20u) = u16(r5);  // (from the original)
    *gptr<u16>(r0 + 0x22u) = u16(r5);  // (from the original)
    r0 = r0 + 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2;
    guest::cpu()->s[3] = S3;
    guest::cpu()->s[4] = S4;
    r0 = call_002fc20c(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = r0 - 0x400u;  // (from the original)
    S0 = std::bit_cast<float>(*gptr<u32>(0x6ee460u));  // (from the original)
    S1 = std::bit_cast<float>(*gptr<u32>(0x6ee464u));  // (from the original)
    S2 = std::bit_cast<float>(*gptr<u32>(0x6ee468u));  // (from the original)
    S3 = std::bit_cast<float>(*gptr<u32>(0x6ee46cu));  // (from the original)
    S4 = std::bit_cast<float>(*gptr<u32>(0x6ee470u));  // (from the original)
    r0 = r0 + 8u;
    r1 = r1 - 0x108u;  // (from the original)
    *gptr<u32>(r0) = u32(std::bit_cast<u32>(S0));
    *gptr<u32>(r0 + 4) = u32(std::bit_cast<u32>(S1));
    *gptr<u32>(r0 + 8) = u32(std::bit_cast<u32>(S2));
    *gptr<u32>(r0 + 0xc) = u32(std::bit_cast<u32>(S3));  // (from the original)
    *gptr<u32>(r0 + 0x10) = u32(std::bit_cast<u32>(S4));  // (from the original)
    *gptr<u8>(r0 + 0x14u) = u8(r4);  // (from the original)
    *gptr<u32>(r1 + 0x528u) = u32(r5);  // (from the original)
    r0 = r1 + 0x538u;  // (from the original)
    *gptr<u32>(r1 + 0x52cu) = u32(r5);  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2;
    guest::cpu()->s[3] = S3;
    guest::cpu()->s[4] = S4;
    r0 = call_003166a8(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    r0 = r0 - 0x538u;  // (from the original)
    r2 = 2u;
    *gptr<u8>(r0 + 0x550u) = u8(r5);  // (from the original)
    *gptr<u8>(r0 + 0x551u) = u8(r2);  // (from the original)
    *gptr<u8>(r0 + 0x554u) = u8(r5);  // (from the original)
    *gptr<u8>(r0 + 0x555u) = u8(r5);  // (from the original)
    *gptr<u32>(r0 + 0x4acu) = u32(r5);  // (from the original)
    *gptr<u32>(r0 + 0x4b0u) = u32(r5);  // (from the original)
    *gptr<u32>(r0 + 0x4b4u) = u32(r5);  // (from the original)
    *gptr<u32>(r0 + 0x4b8u) = u32(r5);  // (from the original)
    *gptr<u32>(r0 + 0x4bcu) = u32(r5);  // (from the original)
    *gptr<u32>(r0 + 0x4c0u) = u32(r5);  // (from the original)
    *gptr<u32>(r0 + 0x4c4u) = u32(r5);  // (from the original)
    *gptr<u32>(r0 + 0x4c8u) = u32(r5);  // (from the original)
    *gptr<u32>(r0 + 0x4ccu) = u32(r5);  // (from the original)
    *gptr<u32>(r0 + 0x4d0u) = u32(r5);  // (from the original)
    *gptr<u32>(r0 + 0x4d4u) = u32(r5);  // (from the original)
    *gptr<u32>(r0 + 0x4d8u) = u32(r5);  // (from the original)
    *gptr<u8>(r0 + 0x4d8u) = u8(r2);  // (from the original)
    *gptr<u32>(r0 + 0x4e0u) = u32(r5);  // (from the original)
    *gptr<u32>(r0 + 0x4e4u) = u32(r5);  // (from the original)
    *gptr<u32>(r0 + 0x4e8u) = u32(r5);  // (from the original)
    *gptr<u32>(r0 + 0x4ecu) = u32(r5);  // (from the original)
    *gptr<u32>(r0 + 0x4f0u) = u32(r5);  // (from the original)
    *gptr<u32>(r0 + 0x4f4u) = u32(r5);  // (from the original)
    *gptr<u32>(r0 + 0x4f8u) = u32(r5);  // (from the original)
    *gptr<u32>(r0 + 0x4fcu) = u32(r5);  // (from the original)
    *gptr<u32>(r0 + 0x500u) = u32(r5);  // (from the original)
    *gptr<u32>(r0 + 0x504u) = u32(r5);  // (from the original)
    *gptr<u32>(r0 + 0x508u) = u32(r5);  // (from the original)
    *gptr<u32>(r0 + 0x50cu) = u32(r5);  // (from the original)
    *gptr<u8>(r0 + 0x50cu) = u8(r2);  // (from the original)
    *gptr<u8>(r0 + 0x474u) = u8(r6);  // (from the original)
    *gptr<u8>(r0 + 0x475u) = u8(r5);  // (from the original)
    *gptr<u8>(r0 + 0x4a8u) = u8(r5);  // (from the original)
    *gptr<u32>(r0 + 0x478u) = u32(r5);  // (from the original)
    *gptr<u32>(r0 + 0x47cu) = u32(r5);  // (from the original)
    *gptr<u32>(r0 + 0x480u) = u32(r5);  // (from the original)
    *gptr<u32>(r0 + 0x484u) = u32(r5);  // (from the original)
    *gptr<u32>(r0 + 0x488u) = u32(r5);  // (from the original)
    *gptr<u32>(r0 + 0x48cu) = u32(r5);  // (from the original)
    *gptr<u32>(r0 + 0x490u) = u32(r5);  // (from the original)
    *gptr<u32>(r0 + 0x494u) = u32(r5);  // (from the original)
    *gptr<u32>(r0 + 0x498u) = u32(r5);  // (from the original)
    *gptr<u32>(r0 + 0x49cu) = u32(r5);  // (from the original)
    *gptr<u32>(r0 + 0x4a0u) = u32(r5);  // (from the original)
    *gptr<u32>(r0 + 0x4a4u) = u32(r5);  // (from the original)
    *gptr<u8>(r0 + 0x4a4u) = u8(r2);  // (from the original)
    r13 = r13 + 0x10;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    return r0;
}

}  // namespace d_006ee264
GUEST_EXPORT(0x006ee264, d_006ee264::f_006ee264);

// f_006ee4b8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006ee4b8 {

struct __attribute__((packed)) Object_006ee4b8_0 {
    u32 word_0;
};
GUEST_OFFSET(Object_006ee4b8_0, word_0, 0x0);  // (from the original)

inline constexpr guest::Function<0x002694b8, u32(u32, u32, u32, u32)> call_002694b8;  // (from the original)
inline constexpr guest::Function<0x002e6944, u32(u32, u32, u32, u32)> call_002e6944;  // (from the original)

u32 f_006ee4b8(gptr<Object_006ee4b8_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r1 = 0;
    r1 = 0x8f969cu;  // (from the original)
    guest::cpu()->r[13] -= 8u;
    arg0->word_0 = u32(r1);
    r0 = r0 + 0x538u;  // (from the original)
    r0 = call_002e6944(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r0 = r0 - 0x500u;  // (from the original)
    r0 = call_002694b8(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r0 = r0 - 0x38u;  // (from the original)
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_006ee4b8
GUEST_EXPORT(0x006ee4b8, d_006ee4b8::f_006ee4b8);

// f_006eedc8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006eedc8 {

inline constexpr guest::Function<0x002f8574, u32(u32, u32, u32, u32)> call_002f8574;  // (from the original)

u32 f_006eedc8(u32 r0, u32 r1, u32 r2) {
    u32 ea = 0;
    u32 res = 0;
    u32 r3 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r9 = guest::cpu()->r[9];
    u32 r10 = guest::cpu()->r[10];
    u32 r12 = 0;
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 0x20;  // (from the original)
    r6 = r0;
    r5 = 0xab7fc0u;  // (from the original)
    if (*gptr<u32>(r5 + 0xd0u) == 0) {  // (from the original)
        goto L_6eee64;
    }
    ea = r5 + 0xd0u;  // (from the original)
    r3 = *gptr<u32>(ea);
    r0 = 0u;
    ea = r5 + 0xd0u;  // (from the original)
    r4 = u32(*gptr<u8>(r3 + r2 + 2u));
    ea = *gptr<u32>(ea);
    r7 = r4 << 3;
    r8 = u32(*gptr<u16>(ea)) + 2u;
    if (r2 == 0) {
        goto L_6eee3c;
    }
    r3 = r3 + 1u;
    if ((r2 & 1u) != 0) {
        ea = r3 + 1u;
        r3 = ea;
        r0 = u32(*gptr<u8>(ea));
    }
    res = r2 >> 1;
    r2 = res;
    r12 = 0u;
    if (res == 0) {
        goto L_6eee38;
    }
    do {
L_6eee20:;
        ea = r3 + 1u;
        r9 = u32(*gptr<u8>(ea));
        ea = r3 + 2u;
        r3 = ea;
        r10 = u32(*gptr<u8>(ea));
        res = r2 - 1u;
        r2 = res;
        r0 = r0 + r9;
        r12 = r12 + r10;
        guest::preempt();
    } while (res != 0);
L_6eee38:;
    r0 = r0 + r12;
L_6eee3c:;
    if (r1 < r4 << 3) {
        goto L_6eee64;
    }
    r2 = r7;
    r1 = *gptr<u32>(r5 + 0xd0u) + (r8 + (r0 << 3));  // (from the original)
    r0 = r6;
    guest::cpu()->r[13] = r13;
    r0 = call_002f8574(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r0 = r4;
    r13 = r13 + 0x20;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
L_6eee64:;
    r0 = 0u;
    r13 = r13 + 0x20;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_006eedc8
GUEST_EXPORT(0x006eedc8, d_006eedc8::f_006eedc8);

// f_006ef0a0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006ef0a0 {

struct __attribute__((packed)) Object_006ef0a0_0 {
    u8 unknown_0[0x84];  // (not used here)
    u8 byte_84;
    u8 byte_85;
    u8 unknown_86[0x2];  // (not used here)
    u32 word_88;
};
GUEST_OFFSET(Object_006ef0a0_0, byte_84, 0x84);  // (from the original)
GUEST_OFFSET(Object_006ef0a0_0, byte_85, 0x85);  // (from the original)
GUEST_OFFSET(Object_006ef0a0_0, word_88, 0x88);  // (from the original)

inline constexpr guest::Function<0x0028f7fc, u32(u32, u32, u32, u32)> call_0028f7fc;  // (from the original)

u32 f_006ef0a0(gptr<Object_006ef0a0_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r1 = 0;
    u32 r2 = 0;
    u32 r3 = 0;
    r1 = u32(arg0->byte_84);
    if ((r1 & 0x10u) != 0) {  // (from the original)
        guest::cpu()->r[1] = r1;
        return r0;
    }
    if (u32(arg0->byte_85) >= 0x1bu) {  // (from the original)
        guest::cpu()->r[1] = r1;
        return r0;
    }
    arg0->byte_84 = u8(r1 | 0x10u);  // (from the original)
    r2 = 0xac1854u;  // (from the original)
    r3 = u32(arg0->byte_85);
    r1 = r2 + 0x6cu;  // (from the original)
    arg0->word_88 = u32(*gptr<u32>(r2 + (r3 << 2)));
    *gptr<u32>(r2 + (r3 << 2)) = u32(r0);
    r2 = u32(arg0->byte_85);
    r3 = *gptr<u32>(r1 + (r2 << 2));
    if (r3 == 0) {
        *gptr<u32>(r1 + (r2 << 2)) = u32(r0);
    }
    r1 = u32(arg0->byte_84);
    if ((r1 & 1u) == 0) {
        guest::cpu()->r[1] = r1;
        return r0;
    }
    if ((r1 & 0x20u) != 0) {  // (from the original)
        guest::cpu()->r[1] = r1;
        return r0;
    }
    return call_0028f7fc(r0, r1, r2, r3);
}

}  // namespace d_006ef0a0
GUEST_EXPORT(0x006ef0a0, d_006ef0a0::f_006ef0a0);

// f_006ef39c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006ef39c {

inline constexpr guest::Function<0x0028f7fc, u32(u32, u32, u32, u32)> call_0028f7fc;  // (from the original)
inline constexpr guest::Function<0x006ef4d8, u32(u32, u32, u32, u32)> call_006ef4d8;  // (from the original)

u32 f_006ef39c(u32 r0, u32 r1, u32 r2, u32 r3, float S0_unused, float S1_unused, float S2_unused, float S3) {
    u32 r4 = guest::cpu()->r[4];
    u32 r12 = 0;
    u32 r13 = guest::cpu()->r[13];
    u32 fpsr = guest::cpu()->fpscr;
    float S4 = 0;
    float S5 = 0;
    float S6 = 0;
    r12 = 0x957318u;  // (from the original)
    r13 = r13 - 0x10u;  // (from the original)
    r4 = *gptr<u32>(r12);
    S6 = std::bit_cast<float>(*gptr<u32>(r13 + 0x10u));  // (from the original)
    if (r4 == 0) {
        r13 = r13 + 0x10u;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    S5 = std::bit_cast<float>(*gptr<u32>(0x6ef484u));  // (from the original)
    *gptr<u32>(r12) = u32(std::bit_cast<u32>(std::bit_cast<float>(*gptr<u32>(r4 + 0x88u))));  // (from the original)
    S4 = std::bit_cast<float>(*gptr<u32>(0x6ef480u));  // (from the original)
    fpsr = fpsr & 0xfffffffu | vfp_cmpf(S3, S4);  // (from the original)
    if (!(fpsr >> 0x1d & 1)) {  // (from the original)
        S3 = S4;
        goto L_6ef3e4;
    }
    fpsr = fpsr & 0xfffffffu | vfp_cmpf(S3, S5);  // (from the original)
    if (!(fpsr >> 0x1e & 1) && fpsr >> 0x1f == (fpsr >> 0x1c & 1)) {  // (from the original)
        S3 = S5;
    }
L_6ef3e4:;
    *gptr<u32>(r4 + 0x7cu) = u32(std::bit_cast<u32>(S3));  // (from the original)
    *gptr<u32>(r13) = u32(r3);
    r3 = r2;
    r2 = r1;
    r1 = r0;
    *gptr<u32>(r13 + 4u) = u32(std::bit_cast<u32>(S6));
    r0 = r4;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[3] = S3;
    guest::cpu()->s[4] = S4;
    guest::cpu()->s[5] = S5;
    guest::cpu()->s[6] = S6;
    r0 = call_006ef4d8(r0, r1, r2, r3);
    S3 = guest::cpu()->s[3];
    S4 = guest::cpu()->s[4];
    S5 = guest::cpu()->s[5];
    S6 = guest::cpu()->s[6];
    r1 = u32(*gptr<u8>(r4 + 0x84u));  // (from the original)
    r0 = r4;
    if ((r1 & 0x10u) != 0) {  // (from the original)
        r13 = r13 + 0x10u;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    if (u32(*gptr<u8>(r0 + 0x85u)) >= 0x1bu) {  // (from the original)
        r13 = r13 + 0x10u;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    *gptr<u8>(r0 + 0x84u) = u8(r1 | 0x10u);  // (from the original)
    r2 = 0xac1854u;  // (from the original)
    r1 = r2 + 0x6cu;  // (from the original)
    *gptr<u32>(r0 + 0x88u) = u32(*gptr<u32>(r2 + (u32(*gptr<u8>(r0 + 0x85u)) << 2)));  // (from the original)
    *gptr<u32>(r2 + (u32(*gptr<u8>(r0 + 0x85u)) << 2)) = u32(r0);  // (from the original)
    r2 = u32(*gptr<u8>(r0 + 0x85u));  // (from the original)
    r3 = *gptr<u32>(r1 + (r2 << 2));
    if (r3 == 0) {
        *gptr<u32>(r1 + (r2 << 2)) = u32(r0);
    }
    r1 = u32(*gptr<u8>(r0 + 0x84u));  // (from the original)
    if ((r1 & 1u) == 0) {
        r13 = r13 + 0x10u;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    if ((r1 & 0x20u) != 0) {  // (from the original)
        r13 = r13 + 0x10u;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    r13 = r13 + 0x10u;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[3] = S3;
    guest::cpu()->s[4] = S4;
    guest::cpu()->s[5] = S5;
    guest::cpu()->s[6] = S6;
    return call_0028f7fc(r0, r1, r2, r3);
}

}  // namespace d_006ef39c
GUEST_EXPORT(0x006ef39c, d_006ef39c::f_006ef39c);

// f_006ef48c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006ef48c {


u32 f_006ef48c(float S0) {
    u32 r0 = 0;
    u32 r1 = 0;
    r1 = 0x957318u;  // (from the original)
    r0 = *gptr<u32>(r1);
    if (r0 == 0) {
        guest::cpu()->r[1] = r1;
        guest::cpu()->s[0] = S0;
        return r0;
    }
    S0 = std::bit_cast<float>(*gptr<u32>(0x6ef4d4u));  // (from the original)
    *gptr<u8>(r0 + 0x84u) = u8(u32(*gptr<u8>(r0 + 0x84u)) & ~0x20u | 5u);  // (from the original)
    *gptr<u32>(r1) = u32(*gptr<u32>(*gptr<u32>(r1) + 0x88u));  // (from the original)
    *gptr<u16>(r0 + 0x82u) = u16(~0u);  // (from the original)
    *gptr<u32>(r0 + 0x7cu) = u32(std::bit_cast<u32>(S0));  // (from the original)
    *gptr<u32>(r0 + 0x38u) = u32(std::bit_cast<u32>(S0));  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->s[0] = S0;
    return r0;
}

}  // namespace d_006ef48c
GUEST_EXPORT(0x006ef48c, d_006ef48c::f_006ef48c);

// f_006ef61c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006ef61c {

struct __attribute__((packed)) Object_006ef61c_0 {
    u8 unknown_0[0x84];  // (not used here)
    u8 byte_84;
    u8 unknown_85[0x3];  // (not used here)
    u32 word_88;
};
GUEST_OFFSET(Object_006ef61c_0, byte_84, 0x84);  // (from the original)
GUEST_OFFSET(Object_006ef61c_0, word_88, 0x88);  // (from the original)


void f_006ef61c(gptr<Object_006ef61c_0> arg0, u32 r1) {
    u32 r0 = arg0.addr();
    u32 r2 = 0;
    if (r0 == 0) {
        guest::cpu()->r[1] = r1;
        return;
    }
    r1 = u32(arg0->byte_84);
    r2 = r1 & ~0x24u;  // (from the original)
    arg0->byte_84 = u8(r2);
    if ((r2 & 0x10u) != 0) {  // (from the original)
        guest::cpu()->r[1] = r1;
        return;
    }
    r1 = 0x957318u;  // (from the original)
    arg0->word_88 = u32(*gptr<u32>(r1));
    *gptr<u32>(r1) = u32(r0);
    guest::cpu()->r[1] = r1;
    return;
}

}  // namespace d_006ef61c
GUEST_EXPORT(0x006ef61c, d_006ef61c::f_006ef61c);

// f_006ef8e8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006ef8e8 {

struct __attribute__((packed)) Object_006ef8e8_0 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
};
GUEST_OFFSET(Object_006ef8e8_0, word_4, 0x4);  // (from the original)

inline constexpr guest::Function<0x002fcbb0, u32(u32, u32, u32, u32)> call_002fcbb0;  // (from the original)
inline constexpr guest::Function<0x005359fc, u32(u32, u32, u32, u32)> call_005359fc;  // (from the original)
inline constexpr guest::Function<0x006b9b30, u32(u32, u32, u32, u32)> call_006b9b30;  // (from the original)
inline constexpr guest::Function<0x006bbd54, u32(u32, u32, u32, u32)> call_006bbd54;  // (from the original)
inline constexpr guest::Function<0x00768248, u32(u32, u32, u32, u32)> call_00768248;  // (from the original)
inline constexpr guest::Function<0x00768da0, u32(u32, u32, u32, u32)> call_00768da0;  // (from the original)

u32 f_006ef8e8(gptr<Object_006ef8e8_0> arg0, u32 r1, u32 r2, u32 r3) {
    u32 res = 0;
    u32 r0 = arg0.addr();
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r9 = guest::cpu()->r[9];
    u32 r10 = guest::cpu()->r[10];
    u32 r11 = guest::cpu()->r[11];
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 0x30u;  // (from the original)
    r5 = r1;
    r4 = ~0u;
    r10 = r0;
    r6 = 0x6edu;  // (from the original)
    r1 = 1u;
    arg0->word_4 = u32(r4);
    r8 = r2;
    r11 = r3;
    r0 = r1;
    do {
L_6ef914:;
        r2 = r10 + (r1 << 2);
        r1 = r1 + 1u;
        r0 = r0 + 2u;
        r3 = r10 + (r1 << 2);
        *gptr<u32>(r2 + 4u) = u32(r4);
        r1 = r1 + 1u;
        *gptr<u32>(r3 + 4u) = u32(r4);
        guest::preempt();
    } while (r0 < r6);
    *gptr<u8>(r10) = u8(0x9bu);  // (from the original)
    r9 = 0u;
    r0 = r8;
    guest::cpu()->r[13] = r13;
    r0 = call_005359fc(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r3 = guest::cpu()->r[3];
    r7 = *gptr<u32>(r0 + 4u);
    if (!u32(r7 >= r6) || u32(r7 == r6)) {
        goto L_6ef99c;
    }
    r0 = 1u;
    r1 = r0;
    *gptr<u32>(r10 + 4u) = u32(r4);
    do {
L_6ef964:;
        r2 = r10 + (r0 << 2);
        r0 = r0 + 1u;
        r1 = r1 + 2u;
        r3 = r10 + (r0 << 2);
        *gptr<u32>(r2 + 4u) = u32(r4);
        r0 = r0 + 1u;
        *gptr<u32>(r3 + 4u) = u32(r4);
        guest::preempt();
    } while (r1 < r6);
    *gptr<u8>(r10) = u8(0x9bu);  // (from the original)
    r0 = 0u;
    r13 = r13 + 0x30u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
L_6ef99c:;
    r4 = 0u;
    if (!u32(r7 >= 0u) || u32(r7 == 0)) {
        goto L_6efa54;
    }
L_6ef9a8:;
    r2 = r4;
    r1 = r8;
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_006bbd54(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r8;
    r1 = r4;
    guest::cpu()->r[13] = r13;
    r0 = call_006b9b30(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = r0;
    r0 = r13 + 4u;
    guest::cpu()->r[13] = r13;
    r0 = call_002fcbb0(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r13 + 4u;
    guest::cpu()->r[13] = r13;
    r0 = call_00768da0(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    res = r0;
    if (res >> 0x1f != (r0 & (r0 ^ res)) >> 0x1f) {  // (from the original)
        goto L_6efa08;
    }
    r1 = u32(s32(r0) >> 5);
    r0 = r0 & 0x1fu;  // (from the original)
    if (r1 >= 0xbau) {  // (from the original)
        goto L_6efa08;
    }
    r1 = *gptr<u32>(r5 + (r1 << 2));
    r6 = lsr_r(r1, r0 & 0xff) & 1u;  // (from the original)
    goto L_6efa0c;
L_6efa08:;
    r6 = 0u;
L_6efa0c:;
    if (r6 == 0) {
        goto L_6efa40;
    }
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_00768248(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r3 = guest::cpu()->r[3];
    if (r0 != r11) {
        goto L_6efa40;
    }
    r0 = r10 + (r9 << 2);
    r9 = r9 + 1u;
    *gptr<u32>(r0 + 4u) = u32(r4);
L_6efa40:;
    r4 = r4 + 1u;
    if (u32(r7 >= r4) && !u32(r7 == r4)) {
        guest::preempt();
        goto L_6ef9a8;
    }
L_6efa54:;
    *gptr<u8>(r10) = u8(r8);
    r0 = 1u;
    r13 = r13 + 0x30u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_006ef8e8
GUEST_EXPORT(0x006ef8e8, d_006ef8e8::f_006ef8e8);

// f_006efab8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006efab8 {

struct __attribute__((packed)) Object_006efab8_0 {
    u8 byte_0;
};
GUEST_OFFSET(Object_006efab8_0, byte_0, 0x0);  // (from the original)

inline constexpr guest::Function<0x0013fac4, u32(u32, u32, u32, u32)> call_0013fac4;  // (from the original)
inline constexpr guest::Function<0x005359fc, u32(u32, u32, u32, u32)> call_005359fc;  // (from the original)
inline constexpr guest::Function<0x006bbd54, u32(u32, u32, u32, u32)> call_006bbd54;  // (from the original)
inline constexpr guest::Function<0x00768248, u32(u32, u32, u32, u32)> call_00768248;  // (from the original)

u32 f_006efab8(gptr<Object_006efab8_0> arg0, u32 r1, u32 r2_unused, u32 r3) {
    u32 res = 0;
    u32 r0 = arg0.addr();
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
    u32 zf = 0;
    u32 cf = 0;
    *gptr<u32>(r13 + 0xfffffff8u) = u32(r12);  // (from the original)
    r13 = r13 - 0x1be8u;  // (from the original)
    r6 = r0;
    r9 = r1;
    r4 = u32(arg0->byte_0);
    if (r4 == 0x9bu) {  // (from the original)
        goto L_6efbb4;
    }
    r11 = r13;
    r1 = 0x1bb4u;  // (from the original)
    r2 = ~0u;
    r0 = r11;
    guest::cpu()->r[13] = r13;
    r0 = call_0013fac4(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r7 = 0u;
    r0 = r4;
    guest::cpu()->r[13] = r13;
    r0 = call_005359fc(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    r1 = r6 + (*gptr<u32>(r0 + 4u) << 2);
    r0 = r6 + 4u;
    r1 = r1 + 4u;
    if (!u32(r1 >= r0) || u32(r1 == r0)) {
        goto L_6efb28;
    }
    do {
L_6efb0c:;
        if (*gptr<u32>(r0) + 1u == 0) {
            goto L_6efb28;
        }
        r0 = r0 + 4u;
        r7 = r7 + 1u;
        guest::preempt();
    } while (u32(r1 >= r0) && !u32(r1 == r0));
L_6efb28:;
    zf = r7 == 0;
    cf = r7 >= 0u;
    if (cf && !zf) {
        r8 = r13 + 0x1800u;  // (from the original)
    }
    r4 = 0u;
    if (cf && !zf) {
        r10 = ~0u;
        r8 = r8 + 0x3b4u;  // (from the original)
    }
    if (!cf || zf) {
        goto L_6efb88;
    }
    do {
L_6efb40:;
        r5 = r6 + (r4 << 2);
        r1 = u32(*gptr<u8>(r6));
        r2 = *gptr<u32>(r5 + 4u);
        r0 = r8;
        guest::cpu()->r[13] = r13;
        r0 = call_006bbd54(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r0 = r8;
        guest::cpu()->r[13] = r13;
        r0 = call_00768248(r0, r1, r2, r3);
        r3 = guest::cpu()->r[3];
        if (r0 == r9) {
            *gptr<u32>(r5 + 4u) = u32(r10);
        }
        *gptr<u32>(r11 + (r4 << 2)) = u32(*gptr<u32>(r5 + 4u));
        *gptr<u32>(r5 + 4u) = u32(r10);
        r4 = r4 + 1u;
        guest::preempt();
    } while (r4 < r7);
L_6efb88:;
    r1 = 0x6edu;  // (from the original)
    r0 = 0u;
    do {
L_6efb90:;
        r2 = *gptr<u32>(r11);
        if (!(r2 + 1u == 0)) {
            r3 = r6 + (r0 << 2);
            r0 = r0 + 1u;
            *gptr<u32>(r3 + 4u) = u32(r2);
        }
        res = r1 - 1u;
        r1 = res;
        r11 = r11 + 4u;
        guest::preempt();
    } while (res != 0);
L_6efbb4:;
    r13 = r13 + 0x1be8u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_006efab8
GUEST_EXPORT(0x006efab8, d_006efab8::f_006efab8);

// f_006efbe8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006efbe8 {

struct __attribute__((packed)) Object_006efbe8_0 {
    u32 word_0;
    u32 word_4;
    u8 byte_8;
    u8 byte_9;
};
GUEST_OFFSET(Object_006efbe8_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_006efbe8_0, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_006efbe8_0, byte_8, 0x8);  // (from the original)
GUEST_OFFSET(Object_006efbe8_0, byte_9, 0x9);  // (from the original)


void f_006efbe8(gptr<Object_006efbe8_0> arg0, u32 r1_unused, u32 r2, u32 r3) {
    u32 res = 0;
    u32 r1 = 0;
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 4u;
    r1 = *gptr<u32>(r13 + 4u);
    arg0->byte_8 = u8(u32(arg0->byte_8) | 1u);
    res = arg0->word_0 ^ r2 | arg0->word_4 ^ r3;
    if (res == 0) {
        r13 = r13 + 4u;
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return;
    }
    arg0->word_0 = u32(r2);
    arg0->word_4 = u32(r3);
    if (r1 != 0) {
        r1 = 0u;
        arg0->byte_9 = u8(r1);
    }
    r13 = r13 + 4u;
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return;
}

}  // namespace d_006efbe8
GUEST_EXPORT(0x006efbe8, d_006efbe8::f_006efbe8);

// f_006efc2c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006efc2c {

struct __attribute__((packed)) Object_006efc2c_0 {
    u32 word_0;
    u32 word_4;
    u8 byte_8;
    u8 byte_9;
};
GUEST_OFFSET(Object_006efc2c_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_006efc2c_0, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_006efc2c_0, byte_8, 0x8);  // (from the original)
GUEST_OFFSET(Object_006efc2c_0, byte_9, 0x9);  // (from the original)

struct __attribute__((packed)) Object_006efc2c_1 {
    u32 word_0;
    u32 word_4;
    u8 byte_8;
    u8 byte_9;
};
GUEST_OFFSET(Object_006efc2c_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_006efc2c_1, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_006efc2c_1, byte_8, 0x8);  // (from the original)
GUEST_OFFSET(Object_006efc2c_1, byte_9, 0x9);  // (from the original)


void f_006efc2c(gptr<Object_006efc2c_0> arg0, gptr<Object_006efc2c_1> arg1) {
    u32 r1 = arg1.addr();
    u32 r3 = 0;
    r3 = arg1->word_4;
    arg0->word_0 = u32(arg1->word_0);
    arg0->word_4 = u32(r3);
    arg0->byte_9 = u8(u32(arg1->byte_9));
    r1 = u32(arg1->byte_8);
    arg0->byte_8 = u8(r1);
    guest::cpu()->r[1] = r1;
    return;
}

}  // namespace d_006efc2c
GUEST_EXPORT(0x006efc2c, d_006efc2c::f_006efc2c);

// f_006efcdc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006efcdc {

struct __attribute__((packed)) Object_006efcdc_0 {
    u32 word_0;
    u32 word_4;
    u8 byte_8;
    u8 byte_9;
};
GUEST_OFFSET(Object_006efcdc_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_006efcdc_0, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_006efcdc_0, byte_8, 0x8);  // (from the original)
GUEST_OFFSET(Object_006efcdc_0, byte_9, 0x9);  // (from the original)


void f_006efcdc(gptr<Object_006efcdc_0> arg0) {
    u32 r2 = 0;
    r2 = 0u;
    arg0->word_0 = u32(r2);
    arg0->word_4 = u32(r2);
    arg0->byte_9 = u8(r2);
    arg0->byte_8 = u8(r2);
    return;
}

}  // namespace d_006efcdc
GUEST_EXPORT(0x006efcdc, d_006efcdc::f_006efcdc);

// f_006efd24: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006efd24 {

struct __attribute__((packed)) Object_006efd24_0 {
    u32 word_0;
    u32 word_4;
    u8 byte_8;
    u8 byte_9;
};
GUEST_OFFSET(Object_006efd24_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_006efd24_0, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_006efd24_0, byte_8, 0x8);  // (from the original)
GUEST_OFFSET(Object_006efd24_0, byte_9, 0x9);  // (from the original)


void f_006efd24(gptr<Object_006efd24_0> arg0) {
    u32 r2 = 0;
    r2 = 0u;
    arg0->word_0 = u32(r2);
    arg0->word_4 = u32(r2);
    arg0->byte_9 = u8(r2);
    arg0->byte_8 = u8(r2);
    return;
}

}  // namespace d_006efd24
GUEST_EXPORT(0x006efd24, d_006efd24::f_006efd24);

// f_006efd9c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006efd9c {


u32 f_006efd9c() {
    u32 r1 = 0;
    u32 r2 = 0;
    u32 r3 = 0;
    r1 = 0x2fc20cu;  // (from the original)
    r3 = 0x100u;  // (from the original)
    r2 = 4u;
    return guest::call_address<u32>(0x301d0du, guest::cpu()->r[0], r1, r2, r3);  // (from the original)
}

}  // namespace d_006efd9c
GUEST_EXPORT(0x006efd9c, d_006efd9c::f_006efd9c);

// f_006efdb0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006efdb0 {

inline constexpr guest::Function<0x006f0450, u32(u32, u32, u32, u32)> call_006f0450;  // (from the original)

u32 f_006efdb0(u32 r0, u32 r1_unused, u32 r2_unused, u32 r3) {
    u32 r1 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r9 = guest::cpu()->r[9];
    u32 r10 = guest::cpu()->r[10];
    u32 r11 = guest::cpu()->r[11];
    u32 cf = 0;
    guest::cpu()->r[13] -= 0x24u;  // (from the original)
    r1 = 0xeu;  // (from the original)
    r11 = r0;
    r0 = call_006f0450(r0, r1, guest::cpu()->r[2], r3);
    r1 = guest::cpu()->r[1];
    r3 = guest::cpu()->r[3];
    if (r0 >= 0xau) {  // (from the original)
        r0 = 3u;
        goto L_6f0010;
    }
    r1 = 0xcu;  // (from the original)
    r0 = r11;
    r0 = call_006f0450(r0, r1, guest::cpu()->r[2], r3);
    r3 = r0;
    r1 = 8u;
    r0 = r11;
    r0 = call_006f0450(r0, r1, guest::cpu()->r[2], r3);
    r1 = guest::cpu()->r[1];
    r3 = guest::cpu()->r[3];
    cf = r3 >= 0xfu;  // (from the original)
    r4 = r0;
    if (cf) {
        cf = r4 >= 0xau;  // (from the original)
    }
    if (cf) {
        r0 = 4u;
        goto L_6f0010;
    }
    if (r3 >= 0x14u) {  // (from the original)
        r0 = 5u;
        goto L_6f0010;
    }
    if (r4 >= 0x14u) {  // (from the original)
        r0 = 6u;
        goto L_6f0010;
    }
    r1 = 5u;
    r0 = r11;
    r0 = call_006f0450(r0, r1, guest::cpu()->r[2], r3);
    r1 = guest::cpu()->r[1];
    r3 = guest::cpu()->r[3];
    if (r0 >= 0x14u) {  // (from the original)
        r0 = 7u;
        goto L_6f0010;
    }
    r1 = 0xbu;  // (from the original)
    r0 = r11;
    r0 = call_006f0450(r0, r1, guest::cpu()->r[2], r3);
    r1 = guest::cpu()->r[1];
    r3 = guest::cpu()->r[3];
    r8 = r0;
    if (r0 >= 0x96u) {  // (from the original)
        r0 = 8u;
        goto L_6f0010;
    }
    r1 = 0x11u;  // (from the original)
    r0 = r11;
    r0 = call_006f0450(r0, r1, guest::cpu()->r[2], r3);
    r1 = guest::cpu()->r[1];
    r3 = guest::cpu()->r[3];
    if (r0 >= 0xau) {  // (from the original)
        r0 = 9u;
        goto L_6f0010;
    }
    r1 = 0u;
    r0 = r11;
    r0 = call_006f0450(r0, r1, guest::cpu()->r[2], r3);
    r3 = guest::cpu()->r[3];
    r5 = r0;
    r1 = 1u;
    r0 = r11;
    r0 = call_006f0450(r0, r1, guest::cpu()->r[2], r3);
    r1 = guest::cpu()->r[1];
    r3 = guest::cpu()->r[3];
    cf = r5 >= 0x46u;  // (from the original)
    r6 = r0;
    if (cf) {
        cf = r6 >= 0x46u;  // (from the original)
    }
    if (cf) {
        r0 = 0xau;  // (from the original)
        goto L_6f0010;
    }
    r1 = 2u;
    r0 = r11;
    r0 = call_006f0450(r0, r1, guest::cpu()->r[2], r3);
    r1 = guest::cpu()->r[1];
    r3 = guest::cpu()->r[3];
    r9 = r0;
    if (r0 >= 0x32u) {  // (from the original)
        r0 = 0xbu;  // (from the original)
        goto L_6f0010;
    }
    if (r5 >= 0x64u) {  // (from the original)
        r0 = 0xcu;  // (from the original)
        goto L_6f0010;
    }
    if (r6 >= 0x64u) {  // (from the original)
        r0 = 0xdu;  // (from the original)
        goto L_6f0010;
    }
    r1 = 6u;
    r0 = r11;
    r0 = call_006f0450(r0, r1, guest::cpu()->r[2], r3);
    r3 = guest::cpu()->r[3];
    r7 = r0;
    r1 = 7u;
    r0 = r11;
    r0 = call_006f0450(r0, r1, guest::cpu()->r[2], r3);
    r3 = guest::cpu()->r[3];
    r1 = 0xc350u;  // (from the original)
    cf = r7 >= r1;
    if (cf) {
        r1 = r1 << 2;
        cf = r0 >= r1;
    }
    if (cf) {
        r0 = 0xeu;  // (from the original)
        goto L_6f0010;
    }
    r1 = 0x186a0u;  // (from the original)
    if (r7 >= r1) {
        r0 = 0xfu;  // (from the original)
        goto L_6f0010;
    }
    r1 = 0x493e0u;  // (from the original)
    if (r0 >= r1) {
        r0 = 0x10u;  // (from the original)
        goto L_6f0010;
    }
    r1 = 0xdu;  // (from the original)
    r0 = r11;
    r0 = call_006f0450(r0, r1, guest::cpu()->r[2], r3);
    r1 = guest::cpu()->r[1];
    r3 = guest::cpu()->r[3];
    if (r0 >= 0x32u) {  // (from the original)
        r0 = 0x11u;  // (from the original)
        goto L_6f0010;
    }
    r1 = 3u;
    r0 = r11;
    r0 = call_006f0450(r0, r1, guest::cpu()->r[2], r3);
    r3 = guest::cpu()->r[3];
    r10 = r0;
    r1 = 4u;
    r0 = r11;
    r0 = call_006f0450(r0, r1, guest::cpu()->r[2], r3);
    r1 = guest::cpu()->r[1];
    r3 = guest::cpu()->r[3];
    cf = r10 >= 0xau;  // (from the original)
    if (cf) {
        cf = r0 >= 0xfu;  // (from the original)
    }
    if (cf) {
        r0 = 0x12u;  // (from the original)
        goto L_6f0010;
    }
    r1 = 9u;
    r0 = r11;
    r0 = call_006f0450(r0, r1, guest::cpu()->r[2], r3);
    r3 = guest::cpu()->r[3];
    r10 = r0;
    r1 = 0xau;  // (from the original)
    r0 = r11;
    r0 = call_006f0450(r0, r1, guest::cpu()->r[2], r3);
    r1 = guest::cpu()->r[1];
    r3 = guest::cpu()->r[3];
    cf = r10 >= 0x1eu;  // (from the original)
    if (cf) {
        cf = r0 >= 0xau;  // (from the original)
    }
    if (cf) {
        r0 = 0x13u;  // (from the original)
        goto L_6f0010;
    }
    if (r10 >= 0x32u) {  // (from the original)
        r0 = 0x14u;  // (from the original)
        goto L_6f0010;
    }
    if (r5 >= 0x46u) {  // (from the original)
        r0 = 0x15u;  // (from the original)
        goto L_6f0010;
    }
    if (r6 >= 0x46u) {  // (from the original)
        r0 = 0x16u;  // (from the original)
        goto L_6f0010;
    }
    if (r9 >= 0x1eu) {  // (from the original)
        r0 = 0x17u;  // (from the original)
        goto L_6f0010;
    }
    if (0x1388u >= r7) {  // (from the original)
        r0 = 0x18u;  // (from the original)
        goto L_6f0010;
    }
    if (r8 >= 0x64u) {  // (from the original)
        r0 = 0x19u;  // (from the original)
        goto L_6f0010;
    }
    r1 = 0xfu;  // (from the original)
    r0 = r11;
    r0 = call_006f0450(r0, r1, guest::cpu()->r[2], r3);
    r1 = guest::cpu()->r[1];
    r3 = guest::cpu()->r[3];
    if (r0 >= 0xfu) {  // (from the original)
        r0 = 0x1au;  // (from the original)
        goto L_6f0010;
    }
    r1 = 0x10u;  // (from the original)
    r0 = r11;
    r0 = call_006f0450(r0, r1, guest::cpu()->r[2], r3);
    r1 = guest::cpu()->r[1];
    r3 = guest::cpu()->r[3];
    if (r0 >= 0x384u) {  // (from the original)
        r0 = 0x1bu;  // (from the original)
        goto L_6f0010;
    }
    if ((r3 | r4) == 0) {
        r0 = 0x1cu;  // (from the original)
    } else {
        r0 = 0x31u;  // (from the original)
    }
L_6f0010:;
    guest::cpu()->r[13] += 0x24u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_006efdb0
GUEST_EXPORT(0x006efdb0, d_006efdb0::f_006efdb0);
