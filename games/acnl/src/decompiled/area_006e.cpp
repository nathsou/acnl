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
    u32 ea_1 = 0;
    u32 r5_1 = 0;
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r1_2 = 0;
    u32 r3_1 = 0;
    u32 r6_1 = 0;
    u32 r4_1 = 0;
    u32 r1_3 = 0;
    u32 r1_4 = 0;
    u32 r0_4 = 0;
    u32 r1_5 = 0;
    u32 res_1 = 0;
    u32 r1_6 = 0;
    u32 r1_7 = 0;
    u32 r0_5 = 0;
    u32 r4_2 = 0;
    u32 r0_6 = 0;
    u32 res_2 = 0;
    u32 r0_7 = 0;
    u32 r1_8 = 0;
    u32 r1_9 = 0;
    u32 res_3 = 0;
    u32 r0_8 = 0;
    u32 r0_9 = 0;
    u32 r1_10 = 0;
    u32 r0_10 = 0;
    u32 r2_1 = 0;
    u32 r3_2 = 0;
    u32 r1_11 = 0;
    u32 r0_11 = 0;
    u32 r1_12 = 0;
    u32 ea_2 = 0;
    u32 r0_12 = 0;
    u32 ea_3 = 0;
    u32 ea_4 = 0;
    u32 r0_13 = 0;
    u32 ea_5 = 0;
    u32 ea_6 = 0;
    u32 r1_13 = 0;
    u32 r0_14 = 0;
    u32 r3_3 = 0;
    u32 r2_2 = 0;
    u32 r4_3 = 0;
    u32 r3_4 = 0;
    u32 ea_7 = 0;
    u32 r4_4 = 0;
    u32 r5_2 = 0;
    u32 r6_2 = 0;
    u32 r7_1 = 0;
    u32 r8_1 = 0;
    u32 r9_1 = 0;
    u32 r10_1 = 0;
    u32 r11_1 = 0;
    ea_1 = r13 - 0x34;  // (from the original)
    *gptr<u32>(ea_1) = u32(r0);
    *gptr<u32>(ea_1 + 4) = u32(r1);
    *gptr<u32>(ea_1 + 8) = u32(r2);
    *gptr<u32>(ea_1 + 0xc) = u32(r3);  // (from the original)
    *gptr<u32>(ea_1 + 0x10) = u32(r4);  // (from the original)
    *gptr<u32>(ea_1 + 0x14) = u32(r5);  // (from the original)
    *gptr<u32>(ea_1 + 0x18) = u32(r6);  // (from the original)
    *gptr<u32>(ea_1 + 0x1c) = u32(r7);  // (from the original)
    *gptr<u32>(ea_1 + 0x20) = u32(r8);  // (from the original)
    *gptr<u32>(ea_1 + 0x24) = u32(r9);  // (from the original)
    *gptr<u32>(ea_1 + 0x28) = u32(r10);  // (from the original)
    *gptr<u32>(ea_1 + 0x2c) = u32(r11);  // (from the original)
    *gptr<u32>(ea_1 + 0x30) = u32(r14);  // (from the original)
    r13 = r13 - 0x80u;  // (from the original)
    r5_1 = r3;
    r10 = *gptr<u32>(r13 + 0x80u);  // (from the original)
    r0_1 = *gptr<u32>(*gptr<u32>(r13 + 0x4cu) + 0x288u);  // (from the original)
    *gptr<u32>(r13 + 0x10u) = u32(r0_1);  // (from the original)
    r1_1 = r0_1 + (r0_1 << 1);
    *gptr<u32>(r13 + 4u) = u32(r1_1);
    r0_2 = r1_1 * r0_1;
    guest::cpu()->r[13] = r13;
    r0_3 = call_00160c68(r0_2, r1_1, r2, r3);
    r1_2 = guest::cpu()->r[1];
    r3_1 = guest::cpu()->r[3];
    *gptr<u32>(r13 + 0x18u) = u32(r0_3);  // (from the original)
    if (r0_3 == 0) {
        goto L_6e162c;
    }
    r6_1 = *gptr<u32>(r13 + 0x18u);  // (from the original)
    r4_1 = r5_1 * *gptr<u32>(r13 + 0x54u);  // (from the original)
    r1_3 = r4_1 * *gptr<u32>(r13 + 4u);
    guest::cpu()->r[13] = r13;
    call_0013fac4(r6_1, r1_3, 0xffu, r3_1);  // (from the original)
    r3 = guest::cpu()->r[3];
    *gptr<u32>(r13 + 0x28u) = u32(0u);  // (from the original)
    r1_4 = *gptr<u32>(r13 + 0x54u);  // (from the original)
    r8 = 0u;
    *gptr<u32>(r13 + 0xcu) = u32(r4_1);  // (from the original)
    r0_4 = (r5_1 + r1) * r1_4;
    r1_5 = *gptr<u32>(r13 + 4u);
    res_1 = r0_4 - r4_1;
    *gptr<u32>(r13 + 8u) = u32(r0_4);
    r11 = r1_5 * r4_1 + r6_1;
    if (res_1 == 0 || res_1 >> 0x1f != ((r0_4 ^ r4_1) & (r0_4 ^ res_1)) >> 0x1f) {  // (from the original)
        goto L_6e15b0;
    }
    r1_6 = r4_1 + (r4_1 << 1);
    *gptr<u32>(r13 + 0x20u) = u32(r1_6);  // (from the original)
    r1_7 = r0_4 + (r0_4 << 1) - r1_6 + 2u;
    *gptr<u32>(r13 + 0x30u) = u32(r1_7);  // (from the original)
    r0_5 = u32(u64(s64(s32(0x55555556u)) * s32(r1_7)) >> 0x20);  // (from the original)
    r9 = *gptr<u32>(r13 + 0x54u) - 1u;  // (from the original)
    *gptr<u32>(r13 + 0x38u) = u32(r0_5 - u32(s32(r0_5) >> 0x1f));  // (from the original)
L_6e14c8:;
    r4_2 = *gptr<u32>(r13 + 0x20u);  // (from the original)
    guest::cpu()->r[13] = r13;
    call_0013fac4(r11, r4_2, 0xffu, r3);  // (from the original)
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    *gptr<u32>(r13 + 0x1cu) = u32(r4_2);  // (from the original)
    r0_6 = *gptr<u32>(r13 + 0x30u);  // (from the original)
    r5 = 0u;
    res_2 = r0_6 - 2u;
    *gptr<u32>(r13 + 0x48u) = u32(r0_6);  // (from the original)
    if (res_2 == 0 || res_2 >> 0x1f != ((r0_6 ^ 2u) & (r0_6 ^ res_2)) >> 0x1f) {  // (from the original)
        goto L_6e155c;
    }
    r6 = *gptr<u32>(r13 + 0x38u);  // (from the original)
    r4 = r11 + r4_2 + 2u;
    r7 = 0u;
    do {
L_6e1504:;
        r0_7 = ~u32(*gptr<u8>(*gptr<u32>(r10 + (r8 << 2)) + r5));
        *gptr<u8>(r4 - 1u) = u8(r0_7);
        *gptr<u8>(r4 - 2u) = u8(r0_7);
        *gptr<u8>(r4) = u8(r0_7);
        r1_8 = *gptr<u32>(r13 + 0x54u);  // (from the original)
        guest::cpu()->r[13] = r13;
        call_002f9e1c(r7, r1_8, r2, r3);
        r1_9 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        if (r1_9 == r9) {
            r5 = r5 + 1u;
        }
        res_3 = r6 - 1u;
        r6 = res_3;
        r4 = r4 + 3u;
        r7 = r7 + 1u;
        guest::preempt();
    } while (res_3 != 0);
    r0_8 = u32(u64(s64(s32(0x55555556u)) * s32(*gptr<u32>(r13 + 0x48u))) >> 0x20);  // (from the original)
    r0_9 = r0_8 - u32(s32(r0_8) >> 0x1f);  // (from the original)
    r4_2 = r0_9 + (r0_9 << 1) + *gptr<u32>(r13 + 0x1cu);  // (from the original)
L_6e155c:;
    r1_10 = *gptr<u32>(r13 + 4u) - r4_2;
    r0_10 = r11 + r4_2;
    guest::cpu()->r[13] = r13;
    call_0013fac4(r0_10, r1_10, 0xffu, r3);  // (from the original)
    r2_1 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    r1_11 = *gptr<u32>(r13 + 0x54u);  // (from the original)
    r11 = r11 + *gptr<u32>(r13 + 4u);
    r0_11 = *gptr<u32>(r13 + 0x28u);  // (from the original)
    guest::cpu()->r[13] = r13;
    call_002f9e1c(r0_11, r1_11, r2_1, r3_2);
    r1_12 = guest::cpu()->r[1];
    r3 = guest::cpu()->r[3];
    ea_2 = r13 + 0xcu;  // (from the original)
    if (r1_12 == r9) {
        r8 = r8 + 1u;
    }
    r0_12 = *gptr<u32>(ea_2) + 1u;
    ea_3 = r13 + 0xcu;  // (from the original)
    *gptr<u32>(ea_3) = u32(r0_12);
    ea_4 = r13 + 0x28u;  // (from the original)
    r0_13 = *gptr<u32>(ea_4) + 1u;
    ea_5 = r13 + 0x28u;  // (from the original)
    *gptr<u32>(ea_5) = u32(r0_13);
    ea_6 = r13 + 8u;
    if (s32(*gptr<u32>(ea_6 + 4)) < s32(*gptr<u32>(ea_6))) {
        guest::preempt();
        goto L_6e14c8;
    }
L_6e15b0:;
    r1_13 = (*gptr<u32>(r13 + 0x10u) - *gptr<u32>(r13 + 0xcu)) * *gptr<u32>(r13 + 4u);  // (from the original)
    guest::cpu()->r[13] = r13;
    call_0013fac4(r11, r1_13, 0xffu, r3);  // (from the original)
    r0_14 = *gptr<u32>(r13 + 0x84u);  // (from the original)
    r3_3 = u32(u64(s64(s32(0x55555556u)) * s32(*gptr<u32>(r13 + 4u))) >> 0x20);  // (from the original)
    r2_2 = *gptr<u32>(r13 + 0x10u);  // (from the original)
    r4_3 = *gptr<u32>(r13 + 0x4cu) + (r0_14 + (r0_14 << 1) << 3);  // (from the original)
    r1_2 = *gptr<u32>(r4_3 + 4u);
    *gptr<u32>(r4_3 + 0x10u) = u32(0u);  // (from the original)
    *gptr<u32>(r4_3 + 0xcu) = u32(0u);  // (from the original)
    r3_4 = r3_3 - u32(s32(r3_3) >> 0x1f);  // (from the original)
    *gptr<u16>(r4_3 + 2u) = u16(r2_2);
    *gptr<u16>(r4_3) = u16(r3_4);
    *gptr<u32>(r4_3 + 0x14u) = u32(0u);  // (from the original)
    *gptr<u32>(r4_3 + 8u) = u32(0u);
    if (r1_2 != 0) {
        guest::cpu()->r[13] = r13;
        call_00160c10(r1_2, r1_2, r2_2, r3_4);
        r1_2 = guest::cpu()->r[1];
    }
    *gptr<u32>(r4_3 + 4u) = u32(*gptr<u32>(r13 + 0x18u));  // (from the original)
    r0_3 = 1u;
L_6e162c:;
    r13 = r13 + 0x5cu;  // (from the original)
    ea_7 = r13;
    r13 = r13 + 0x24;  // (from the original)
    r4_4 = *gptr<u32>(ea_7);
    r5_2 = *gptr<u32>(ea_7 + 4);
    r6_2 = *gptr<u32>(ea_7 + 8);
    r7_1 = *gptr<u32>(ea_7 + 0xc);  // (from the original)
    r8_1 = *gptr<u32>(ea_7 + 0x10);  // (from the original)
    r9_1 = *gptr<u32>(ea_7 + 0x14);  // (from the original)
    r10_1 = *gptr<u32>(ea_7 + 0x18);  // (from the original)
    r11_1 = *gptr<u32>(ea_7 + 0x1c);  // (from the original)
    guest::cpu()->r[1] = r1_2;
    guest::cpu()->r[4] = r4_4;
    guest::cpu()->r[5] = r5_2;
    guest::cpu()->r[6] = r6_2;
    guest::cpu()->r[7] = r7_1;
    guest::cpu()->r[8] = r8_1;
    guest::cpu()->r[9] = r9_1;
    guest::cpu()->r[10] = r10_1;
    guest::cpu()->r[11] = r11_1;
    guest::cpu()->r[13] = r13;
    return r0_3;
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
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r0_5 = 0;
    u32 r0_6 = 0;
    u32 r0_7 = 0;
    goto L_6e1d28;
L_6e1d28:;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r4 = r0;
    r5 = r1;
    r0_1 = call_0015f67c(r0, r1, r2, guest::cpu()->r[3]);
    if (r0_1 == 1u) {
        goto L_6e1d78;
    }
    if (r0_1 == 2u) {
        goto L_6e1db0;
    }
    if (r0_1 == 7u) {
        goto L_6e1d94;
    }
    if (r0_1 == 8u) {
        goto L_6e1dcc;
    }
    r0_2 = r4 + 0x180u;  // (from the original)
    call_00100ef8(r0_2, 0x6e1dfcu, 0x6e1de8u, guest::cpu()->r[3]);  // (from the original)
    r2 = guest::cpu()->r[2];
L_6e1d68:;
    r0_3 = r4 + 0x180u;  // (from the original)
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    return guest::call_address<u32>(0x1019c5u, r0_3, r5, r2, guest::cpu()->r[3]);  // (from the original)
L_6e1d78:;
    r0_4 = r4 + 0x180u;  // (from the original)
    call_00100ef8(r0_4, 0x6e1dfcu, 0x6e1e00u, guest::cpu()->r[3]);  // (from the original)
    r2 = guest::cpu()->r[2];
    guest::preempt();
    goto L_6e1d68;
L_6e1d94:;
    r0_5 = r4 + 0x180u;  // (from the original)
    call_00100ef8(r0_5, 0x6e1dfcu, 0x6e1e1cu, guest::cpu()->r[3]);  // (from the original)
    r2 = guest::cpu()->r[2];
    guest::preempt();
    goto L_6e1d68;
L_6e1db0:;
    r0_6 = r4 + 0x180u;  // (from the original)
    call_00100ef8(r0_6, 0x6e1dfcu, 0x6e1e34u, guest::cpu()->r[3]);  // (from the original)
    r2 = guest::cpu()->r[2];
    guest::preempt();
    goto L_6e1d68;
L_6e1dcc:;
    r0_7 = r4 + 0x180u;  // (from the original)
    call_00100ef8(r0_7, 0x6e1dfcu, 0x8aec1cu, guest::cpu()->r[3]);  // (from the original)
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

inline guest::global<u32, 0x0085e1ec> global_0085e1ec;  // (from the original)
inline constexpr guest::Function<0x00617110, u32(u32, u32, u32, u32)> call_00617110;  // (from the original)

u32 f_006e23dc(gptr<Object_006e23dc_0> arg0, u32 r1, u32 r2, u32 r3) {
    u32 r0 = arg0.addr();
    u32 r13 = guest::cpu()->r[13];
    u32 r14 = guest::cpu()->r[14];
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r1_1 = 0;
    u32 r3_1 = 0;
    u32 ea_1 = 0;
    u32 r1_2 = 0;
    u32 r2_1 = 0;
    u32 ea_2 = 0;
    r13 = r13 - 8;
    if (arg0->word_2760 != 0) {
        r13 = r13 + 8;
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return 0u;
    }
    r0_1 = arg0->word_2764;
    if ((r0_1 & 1u) == 0) {
        goto L_6e2418;
    }
    if (r0_1 == 0) {
        goto L_6e2418;
    }
    r13 = r13 + 8;
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return 0u;
L_6e2418:;
    guest::cpu()->r[13] = r13;
    r0_2 = call_00617110(r0_1, r1, r2, r3);
    r1_1 = guest::cpu()->r[1];
    if (r0_2 == 0) {
        r13 = r13 + 8;
        guest::cpu()->r[1] = r1_1;
        guest::cpu()->r[13] = r13;
        return r0_2;
    }
    r3_1 = 0x27c3u - 0x1bu;  // (from the original)
    r14 = 0x27c3u + 3u;  // (from the original)
    ea_1 = 0x27c3u + r0;  // (from the original)
    *gptr<u8>(ea_1) = u8(0u);
    r1_2 = *global_0085e1ec;
    r2_1 = *gptr<u32>(0x85e1ecu + 4);  // (from the original)
    ea_2 = r0 + 0x2760u;  // (from the original)
    *gptr<u32>(ea_2) = u32(r1_2);
    *gptr<u32>(ea_2 + 4) = u32(r2_1);
    *gptr<u32>(r3_1 + r0) = u32(0u);
    *gptr<u8>(r14 + r0) = u8(0u);
    *gptr<u8>(r0 + 0x27c4u) = u8(1u);  // (from the original)
    r13 = r13 + 8;
    guest::cpu()->r[1] = r1_2;
    guest::cpu()->r[13] = r13;
    return 1u;
}

}  // namespace d_006e23dc
GUEST_EXPORT(0x006e23dc, d_006e23dc::f_006e23dc);

// f_006e247c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006e247c {

inline guest::global<u8, 0x00951694> global_00951694;  // (from the original)
inline constexpr guest::Function<0x005c394c, u32(u32, u32, u32, u32)> call_005c394c;  // (from the original)

u32 f_006e247c() {
    u32 r1_1 = 0;
    u32 r1_2 = 0;
    guest::cpu()->r[13] -= 8u;
    r1_1 = u32(*global_00951694);
    call_005c394c(0u, r1_1, 0u, guest::cpu()->r[3]);
    r1_2 = guest::cpu()->r[1];
    *global_00951694 = u8(8u);
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1_2;
    return 8u;
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

inline guest::global<u32, 0x0085e1f4> global_0085e1f4;  // (from the original)
inline guest::global<u32, 0x0095362c> global_0095362c;  // (from the original)
inline constexpr guest::Function<0x006295d8, u32(u32, u32, u32, u32)> call_006295d8;  // (from the original)
inline constexpr guest::Function<0x0075f0b0, u32(u32, u32, u32, u32)> call_0075f0b0;  // (from the original)

u32 f_006e2534(gptr<Object_006e2534_0> arg0, u32 r1, u32 r2, u32 r3) {
    u32 r0 = arg0.addr();
    u32 r13 = guest::cpu()->r[13];
    u32 r4_1 = 0;
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r0_4 = 0;
    u32 r1_1 = 0;
    u32 r2_2 = 0;
    u32 ea_1 = 0;
    r13 = r13 - 0x10;  // (from the original)
    r4_1 = r0;
    if (arg0->word_2760 == 0) {
        r0_1 = arg0->word_2764;
        if ((r0_1 & 1u) == 0) {
            goto L_6e2570;
        }
        if (r0_1 == 0) {
            goto L_6e2570;
        }
    }
    r0 = 0u;
    r13 = r13 + 0x10;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
L_6e2570:;
    r0_2 = *global_0095362c + 0x7874u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_3 = call_0075f0b0(r0_2, 4u, r2, r3);
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    if (r0_3 != 0) {
        r0_4 = *global_0095362c + 0x7874u;  // (from the original)
        guest::cpu()->r[13] = r13;
        r0 = call_006295d8(r0_4, 4u, r2_1, r3_1);
        r1 = guest::cpu()->r[1];
        if (r0 == 0) {
            r13 = r13 + 0x10;  // (from the original)
            guest::cpu()->r[1] = r1;
            guest::cpu()->r[13] = r13;
            return r0;
        }
    }
    r1_1 = *global_0085e1f4;
    r2_2 = *gptr<u32>(0x85e1f4u + 4);  // (from the original)
    ea_1 = r4_1 + 0x2760u;  // (from the original)
    *gptr<u32>(ea_1) = u32(r1_1);
    *gptr<u32>(ea_1 + 4) = u32(r2_2);
    *gptr<u32>(r4_1 + 0x27a8u) = u32(0u);  // (from the original)
    *gptr<u8>(r4_1 + 0x27c6u) = u8(0u);  // (from the original)
    r13 = r13 + 0x10;  // (from the original)
    guest::cpu()->r[1] = r1_1;
    guest::cpu()->r[13] = r13;
    return 1u;
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
    u32 r3_1 = 0;
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r1_2 = 0;
    u32 r0_2 = 0;
    u32 zf_1 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r2_2 = 0;
    u32 r3_2 = 0;
    u32 r0_5 = 0;
    u32 r1_3 = 0;
    u32 r2_3 = 0;
    u32 r3_3 = 0;
    u32 r0_6 = 0;
    u32 r2_4 = 0;
    u32 r3_4 = 0;
    u32 r0_7 = 0;
    u32 r0_8 = 0;
    r5 = r0;
    r13 = r13 - 0x18u;  // (from the original)
    r3_1 = arg0->word_27a0;
    r0_1 = *gptr<u32>(0x2770u + r5);  // (from the original)
    r1_1 = u32(*gptr<u8>((0x2770u | u32(s32(0x2770u) >> 0xb)) + r5));  // (from the original)
    r2_1 = r5 + 0x2790u;  // (from the original)
    *gptr<u32>(r13) = u32(r0_1);
    *gptr<u32>(r13 + 4) = u32(r1_1);
    r1_2 = r5 + 0x44u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_2 = call_0050d128(0xa22020u, r1_2, r2_1, r3_1);  // (from the original)
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0_2 == 0) {
        goto L_6e27ac;
    }
    r6 = *gptr<u32>(r5 + 0x1d8u);  // (from the original)
    zf_1 = r6 == 0;
    if (!zf_1) {
        r4 = 0u;
    }
    if (r6 < 0u || zf_1) {
        goto L_6e27a0;
    }
    do {
L_6e277c:;
        r0_3 = r5 + 0x44u;  // (from the original)
        guest::cpu()->r[13] = r13;
        r0_4 = call_00746e4c(r0_3, r4, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        if (r0_4 != 0) {
            guest::cpu()->r[13] = r13;
            call_006e3da0(r0_4, r1, r2, r3);
            r1 = guest::cpu()->r[1];
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
        }
        r4 = r4 + 1u;
        guest::preempt();
    } while (r4 < r6);
L_6e27a0:;
    r0 = 1u;
    r13 = r13 + 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
L_6e27ac:;
    guest::cpu()->r[13] = r13;
    r0 = call_00746f8c(0xa22020u, r1, r2, r3);  // (from the original)
    r1 = guest::cpu()->r[1];
    r2_2 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    if (r0 == 0) {
        r13 = r13 + 0x18u;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    guest::cpu()->r[13] = r13;
    r0_5 = call_00746efc(0xa22020u, r1, r2_2, r3_2);  // (from the original)
    r1_3 = guest::cpu()->r[1];
    r2_3 = guest::cpu()->r[2];
    r3_3 = guest::cpu()->r[3];
    if (r0_5 < 2u) {
        r0_8 = ~0u;
        r13 = r13 + 0x18u;  // (from the original)
        guest::cpu()->r[1] = r1_3;
        guest::cpu()->r[13] = r13;
        return r0_8;
    }
    guest::cpu()->r[13] = r13;
    r0_6 = call_00746ed0(0xa22020u, r1_3, r2_3, r3_3);  // (from the original)
    r1_3 = guest::cpu()->r[1];
    r2_4 = guest::cpu()->r[2];
    r3_4 = guest::cpu()->r[3];
    if (r0_6 == 0) {
        r0_8 = ~0u;
        r13 = r13 + 0x18u;  // (from the original)
        guest::cpu()->r[1] = r1_3;
        guest::cpu()->r[13] = r13;
        return r0_8;
    }
    guest::cpu()->r[13] = r13;
    r0_7 = call_00746ed0(0xa22020u, r1_3, r2_4, r3_4);  // (from the original)
    r1_3 = r5 + 0x27a8u;  // (from the original)
    *gptr<u32>(r1_3) = u32(r0_7);
    *gptr<u8>(r5 + 0x27c6u) = u8(1u);  // (from the original)
    r0_8 = ~0u;
    r13 = r13 + 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1_3;
    guest::cpu()->r[13] = r13;
    return r0_8;
}

}  // namespace d_006e2724
GUEST_EXPORT(0x006e2724, d_006e2724::f_006e2724);

// f_006e2820: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006e2820 {

inline constexpr guest::Function<0x0050cb2c, u32(u32, u32, u32, u32)> call_0050cb2c;  // (from the original)

u32 f_006e2820(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r12 = 0;
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 zf_1 = 0;
    u32 r2_1 = 0;
    u32 r10_1 = 0;
    u32 r3_1 = 0;
    u32 r9_1 = 0;
    u32 res_1 = 0;
    u32 r3_2 = 0;
    u32 r3_3 = 0;
    u32 r2_2 = 0;
    u32 r9_2 = 0;
    u32 zf_2 = 0;
    u32 r2_3 = 0;
    u32 r0_2 = 0;
    r13 = r13 - 0x20;  // (from the original)
    r4 = r0;
    r7 = r1;
    r8 = r2;
    r6 = *gptr<u32>(r13 + 0x20u);  // (from the original)
    r5 = r3;
    r0_1 = r0 + 0x44u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_0050cb2c(r0_1, r1, r2, r3);
    r1 = 0xffffu;  // (from the original)
    r3 = r4 + 0x2788u;  // (from the original)
    zf_1 = r5 == r1;
    *gptr<u32>(r3) = u32(0u);
    *gptr<u32>(r3 + 4) = u32(0u);
    if (zf_1) {
        r3 = 0u;
    }
    r12 = r4 + 0x27a0u;  // (from the original)
    if (zf_1) {
        r0 = r3;
    } else {
        goto L_6e28b8;
    }
    do {
L_6e2870:;
        r2_1 = r0 << 0x1c >> 0x14;  // (from the original)
        r10_1 = r4 + (r3 << 1) + 0x2700u;  // (from the original)
        r3_1 = r3 + 1u;
        *gptr<u16>(r10_1 + 0x90u) = u16(r2_1 | 0x8000u | 1u);  // (from the original)
        r9_1 = r4 + (r3_1 << 1) + 0x2700u;  // (from the original)
        r0 = r0 + 1u;
        res_1 = r0 - 4u;
        r3 = r3_1 + 1u;
        *gptr<u16>(r9_1 + 0x90u) = u16(r2_1 | 1u);  // (from the original)
        guest::preempt();
    } while (res_1 >> 0x1f != ((r0 ^ 4u) & (r0 ^ res_1)) >> 0x1f);  // (from the original)
    *gptr<u32>(r12) = u32(r3);
    goto L_6e2900;
L_6e28b8:;
    r3_2 = r4 + 0x2700u;  // (from the original)
    r2 = 1u;
    *gptr<u16>(r3_2 + 0x90u) = u16(r5);  // (from the original)
    r0 = r2;
    *gptr<u16>(r3_2 + 0x92u) = u16(r1);  // (from the original)
    do {
L_6e28cc:;
        r3_3 = r4 + (r2 << 1);
        r2_2 = r2 + 1u;
        r9_2 = r4 + (r2_2 << 1) + 0x2700u;  // (from the original)
        r0 = r0 + 2u;
        *gptr<u16>(r3_3 + 0x2792u) = u16(r1);  // (from the original)
        r2 = r2_2 + 1u;
        *gptr<u16>(r9_2 + 0x92u) = u16(r1);  // (from the original)
        guest::preempt();
    } while (r0 < 7u);
    *gptr<u32>(r12) = u32(1u);
L_6e2900:;
    zf_2 = r5 == r1;
    if (!zf_2) {
        r1 = 0u;
    }
    r2_3 = 0x2770u + 0x55u;  // (from the original)
    *gptr<u32>(0x2770u + r4) = u32(r7);  // (from the original)
    r0_2 = r4 + 0x2774u;  // (from the original)
    *gptr<u8>(r2_3 + r4) = u8(r6);
    if (zf_2) {
        *gptr<u8>(r0_2) = u8(r8);
    } else {
        *gptr<u8>(r0_2) = u8(r1);
    }
    r13 = r13 + 0x20;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0_2;
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

inline guest::global<u32, 0x0085e234> global_0085e234;  // (from the original)
inline constexpr guest::Function<0x002fb328, u32(u32, u32, u32, u32)> call_002fb328;  // (from the original)
inline constexpr guest::Function<0x0035072c, u32(u32, u32, u32, u32)> call_0035072c;  // (from the original)
inline constexpr guest::Function<0x004dcf6c, u32(u32, u32, u32, u32)> call_004dcf6c;  // (from the original)
inline constexpr guest::Function<0x0050c9a4, u32(u32, u32, u32, u32)> call_0050c9a4;  // (from the original)
inline constexpr guest::Function<0x006d3cd4, u32(u32, u32, u32, u32)> call_006d3cd4;  // (from the original)

u32 f_006e35fc(gptr<Object_006e35fc_0> arg0, u32 r1, u32 r2, u32 r3) {
    u32 r0 = arg0.addr();
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r0_3 = 0;
    u32 r1_2 = 0;
    u32 r2_2 = 0;
    u32 r3_2 = 0;
    u32 r0_4 = 0;
    u32 r1_3 = 0;
    u32 r2_3 = 0;
    u32 r3_3 = 0;
    u32 r0_5 = 0;
    u32 r0_6 = 0;
    u32 r1_4 = 0;
    u32 r2_4 = 0;
    u32 r3_4 = 0;
    u32 r0_7 = 0;
    u32 r0_8 = 0;
    u32 ea_1 = 0;
    u32 r1_5 = 0;
    u32 r2_5 = 0;
    u32 ea_2 = 0;
    *gptr<u32>(r13 + 0xfffffff0u) = u32(r3);  // (from the original)
    r13 = r13 - 0x10;  // (from the original)
    if (arg0->word_2760 == 0) {
        r0_1 = arg0->word_2764;
        if ((r0_1 & 1u) == 0) {
            goto L_6e3638;
        }
        if (r0_1 == 0) {
            goto L_6e3638;
        }
    }
    r13 = r13 + 0x10;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return 0u;
L_6e3638:;
    r0_2 = r0 + 0x10u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_0050c9a4(r0_2, r1, r2, r3);
    r1_1 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    r0_3 = r0 + 0x10u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_004dcf6c(r0_3, r1_1, r2_1, r3_1);
    r1_2 = guest::cpu()->r[1];
    r2_2 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    r0_4 = r13;
    guest::cpu()->r[13] = r13;
    call_0035072c(r0_4, r1_2, r2_2, r3_2);
    r1_3 = guest::cpu()->r[1];
    r2_3 = guest::cpu()->r[2];
    r3_3 = guest::cpu()->r[3];
    r0_5 = *gptr<u32>(r13) >> 0x18;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_6 = call_006d3cd4(r0_5, r1_3, r2_3, r3_3);
    r1_4 = guest::cpu()->r[1];
    r2_4 = guest::cpu()->r[2];
    r3_4 = guest::cpu()->r[3];
    r0_7 = r0_6 << 0x1c >> 0x14 | 0x8000u | 2u;  // (from the original)
    *gptr<u16>(r0 + 0x36u) = u16(r0_7);  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_8 = call_002fb328(r0_7, r1_4, r2_4, r3_4);
    ea_1 = r0 + 0x3cu;  // (from the original)
    *gptr<u32>(ea_1) = u32(*gptr<u32>(r0_8 + 0x8880cu));  // (from the original)
    r1_5 = *global_0085e234;
    r2_5 = *gptr<u32>(0x85e234u + 4);  // (from the original)
    ea_2 = r0 + 0x2760u;  // (from the original)
    *gptr<u32>(ea_2) = u32(r1_5);
    *gptr<u32>(ea_2 + 4) = u32(r2_5);
    *gptr<u32>(r0 + 0x27a8u) = u32(0u);  // (from the original)
    *gptr<u8>(r0 + 0x27c6u) = u8(0u);  // (from the original)
    r13 = r13 + 0x10;  // (from the original)
    guest::cpu()->r[1] = r1_5;
    guest::cpu()->r[13] = r13;
    return 1u;
}

}  // namespace d_006e35fc
GUEST_EXPORT(0x006e35fc, d_006e35fc::f_006e35fc);

// f_006e4490: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006e4490 {

inline constexpr guest::Function<0x00132478, u32(u32, u32, u32, u32)> call_00132478;  // (from the original)

u32 f_006e4490() {
    return call_00132478(0x9ab57cu, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
}

}  // namespace d_006e4490
GUEST_EXPORT(0x006e4490, d_006e4490::f_006e4490);

// f_006e449c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006e449c {


u32 f_006e449c(u32 r0, u32 r1) {
    u32 r1_1 = 0;
    u32 r0_1 = 0;
    r1_1 = r1 << 0xe >> 0xe;  // (from the original)
    r0_1 = r1_1 | r0 << 0x12;  // (from the original)
    guest::cpu()->r[1] = r1_1;
    return r0_1;
}

}  // namespace d_006e449c
GUEST_EXPORT(0x006e449c, d_006e449c::f_006e449c);

// f_006e44bc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006e44bc {

inline constexpr guest::Function<0x0013f000, u32(u32, u32, u32, u32)> call_0013f000;  // (from the original)
inline constexpr guest::Function<0x005bf748, u32(u32, u32, u32, u32)> call_005bf748;  // (from the original)

u32 f_006e44bc(u32 r0, u32 r1) {
    u32 r1_1 = 0;
    u32 r1_2 = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r1_1 = r0 + 0x48u;  // (from the original)
    call_0013f000(0x9ab57cu, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    *gptr<u32>(r0 + 0x54u) = u32(r1 << 0xe >> 0xe | u32(*gptr<u16>(r0 + 0xcu)) << 0x12);  // (from the original)
    r1_2 = r0 + 0x48u;  // (from the original)
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    return call_005bf748(0x9ab57cu, r1_2, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
}

}  // namespace d_006e44bc
GUEST_EXPORT(0x006e44bc, d_006e44bc::f_006e44bc);

// f_006e46c8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006e46c8 {

inline constexpr guest::Function<0x005bf758, u32(u32, u32, u32, u32)> call_005bf758;  // (from the original)

u32 f_006e46c8(u32 r0) {
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    guest::cpu()->r[13] -= 8u;
    r0_1 = call_005bf758(0x9ab57cu, r0, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    r1_1 = guest::cpu()->r[1];
    if (r0_1 != 0) {
        r0_1 = *gptr<u32>(r0_1 + 0x10u);  // (from the original)
    }
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1_1;
    return r0_1;
}

}  // namespace d_006e46c8
GUEST_EXPORT(0x006e46c8, d_006e46c8::f_006e46c8);

// f_006e46f4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006e46f4 {

inline guest::global<u32, 0x006e4734> global_006e4734;  // (from the original)
inline guest::global<u32, 0x006e4738> global_006e4738;  // (from the original)
inline constexpr guest::Function<0x0057ba40, u32(u32, u32, u32, u32)> call_0057ba40;  // (from the original)

u32 f_006e46f4(u32 r0, u32 r1, float S0, float S1) {
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    float S0_1 = 0;
    float S1_1 = 0;
    u32 ea_1 = 0;
    u32 r1_2 = 0;
    float S0_2 = 0;
    float S1_2 = 0;
    r13 = r13 - 8;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    r0_1 = call_0057ba40(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_1 = guest::cpu()->r[1];
    S0_1 = guest::cpu()->s[0];
    S1_1 = guest::cpu()->s[1];
    if (r0_1 == 0) {
        r13 = r13 + 8;
        guest::cpu()->r[1] = r1_1;
        guest::cpu()->r[13] = r13;
        guest::cpu()->s[0] = S0_1;
        guest::cpu()->s[1] = S1_1;
        return r0_1;
    }
    ea_1 = r0 + 0x54u;  // (from the original)
    *gptr<u32>(ea_1) = u32(0u);
    *gptr<u32>(ea_1 + 4) = u32(r0);
    r1_2 = r0 + 0x5cu;  // (from the original)
    S0_2 = std::bit_cast<float>(*global_006e4734);
    S1_2 = std::bit_cast<float>(*global_006e4738);
    *gptr<u32>(r1_2) = u32(std::bit_cast<u32>(S0_2));
    *gptr<u32>(r1_2 + 4) = u32(std::bit_cast<u32>(S1_2));
    *gptr<u16>(r0 + 0x64u) = u16(2u);  // (from the original)
    r13 = r13 + 8;
    guest::cpu()->r[1] = r1_2;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_2;
    guest::cpu()->s[1] = S1_2;
    return 1u;
}

}  // namespace d_006e46f4
GUEST_EXPORT(0x006e46f4, d_006e46f4::f_006e46f4);

// f_006e47a0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006e47a0 {

inline guest::global<u32, 0x006e47e8> global_006e47e8;  // (from the original)
inline constexpr guest::Function<0x001324a8, u32(u32, u32, u32, u32)> call_001324a8;  // (from the original)
inline constexpr guest::Function<0x0057ba68, u32(u32, u32, u32, u32)> call_0057ba68;  // (from the original)

u32 f_006e47a0(u32 r0, u32 r1, u32 r2, float S0) {
    u32 r0_1 = 0;
    u32 r2_1 = 0;
    float S0_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    float S0_2 = 0;
    u32 r0_4 = 0;
    guest::cpu()->r[13] -= 8u;
    guest::cpu()->s[0] = S0;
    r0_1 = call_0057ba68(r0, r1, r2, guest::cpu()->r[3]);
    r2_1 = guest::cpu()->r[2];
    S0_1 = guest::cpu()->s[0];
    *gptr<u32>(r0_1) = u32(0x8f9530u);  // (from the original)
    r0_2 = r0_1 + 0x48u;  // (from the original)
    guest::cpu()->s[0] = S0_1;
    r0_3 = call_001324a8(r0_2, 0x8f9530u, r2_1, guest::cpu()->r[3]);  // (from the original)
    *gptr<u32>(r0_3 + 0xcu) = u32(0u);  // (from the original)
    *gptr<u32>(r0_3) = u32(0x90b134u);  // (from the original)
    *gptr<u32>(r0_3 + 0x10u) = u32(0u);  // (from the original)
    S0_2 = std::bit_cast<float>(*global_006e47e8);
    r0_4 = r0_3 - 0x48u;  // (from the original)
    *gptr<u32>(r0_4 + 0x5cu) = u32(std::bit_cast<u32>(S0_2));  // (from the original)
    *gptr<u32>(r0_4 + 0x60u) = u32(std::bit_cast<u32>(S0_2));  // (from the original)
    *gptr<u16>(r0_4 + 0x64u) = u16(0u);  // (from the original)
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = 0u;
    guest::cpu()->s[0] = S0_2;
    return r0_4;
}

}  // namespace d_006e47a0
GUEST_EXPORT(0x006e47a0, d_006e47a0::f_006e47a0);

// f_006e4a48: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006e4a48 {

inline constexpr guest::Function<0x005664d8, u32(u32, u32, u32, u32)> call_005664d8;  // (from the original)

u32 f_006e4a48(u32 r0, u32 r1) {
    u32 r0_1 = 0;
    guest::cpu()->r[13] -= 8u;
    r0_1 = call_005664d8(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    *gptr<u32>(r0_1) = u32(0x8f95d8u);  // (from the original)
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = 0x8f95d8u;  // (from the original)
    return r0_1;
}

}  // namespace d_006e4a48
GUEST_EXPORT(0x006e4a48, d_006e4a48::f_006e4a48);

// f_006e4b0c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006e4b0c {


u32 f_006e4b0c(u32 r0, u32 r1) {
    u32 r0_1 = 0;
    if (r0 >= 5u) {
        guest::cpu()->r[1] = r1;
        return 0x9b3b08u;  // (from the original)
    }
    r0_1 = 0x9b3b08u + ((r0 << 6) - (r0 + (r0 << 2)) << 2);  // (from the original)
    guest::cpu()->r[1] = 0x9b3b08u;  // (from the original)
    return r0_1;
}

}  // namespace d_006e4b0c
GUEST_EXPORT(0x006e4b0c, d_006e4b0c::f_006e4b0c);

// f_006e4b30: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006e4b30 {

inline constexpr guest::Function<0x00200ab4, u32(u32, u32, u32, u32)> call_00200ab4;  // (from the original)

u32 f_006e4b30(u32 r0, u32 r1, u32 r2) {
    return call_00200ab4(0x9b3b08u, r0, r1, r2);  // (from the original)
}

}  // namespace d_006e4b30
GUEST_EXPORT(0x006e4b30, d_006e4b30::f_006e4b30);

// f_006e4b48: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006e4b48 {

inline constexpr guest::Function<0x00200ab4, u32(u32, u32, u32, u32)> call_00200ab4;  // (from the original)

u32 f_006e4b48(u32 r0, u32 r1, u32 r2) {
    u32 r1_1 = 0;
    guest::cpu()->r[13] -= 8u;
    call_00200ab4(0x9b3dccu, r0, r1, r2);  // (from the original)
    r1_1 = guest::cpu()->r[1];
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1_1;
    return 1u;
}

}  // namespace d_006e4b48
GUEST_EXPORT(0x006e4b48, d_006e4b48::f_006e4b48);

// f_006e4c94: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006e4c94 {

inline constexpr guest::Function<0x002f73b8, u32(u32, u32, u32, u32)> call_002f73b8;  // (from the original)
inline constexpr guest::Function<0x006e50f0, u32(u32, u32, u32, u32)> call_006e50f0;  // (from the original)

u32 f_006e4c94(u32 r0, u32 r1, u32 r2) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r9 = guest::cpu()->r[9];
    u32 r10 = guest::cpu()->r[10];
    u32 res_1 = 0;
    u32 r0_1 = 0;
    u32 r8_1 = 0;
    u32 r7_1 = 0;
    u32 r2_1 = 0;
    u32 r1_1 = 0;
    u32 r0_2 = 0;
    guest::cpu()->r[13] -= 0x20u;  // (from the original)
    r6 = r0;
    r4 = 0u;
    r10 = 1u;
    r5 = r0 + 0x35e0u;  // (from the original)
    r9 = r0 + 0x35e2u;  // (from the original)
L_6e4cb4:;
    res_1 = r4 & 0xffu;  // (from the original)
    r0_1 = res_1;
    if (res_1 == 0) {
        goto L_6e4d04;
    }
    if (r0_1 >= 0xeu) {  // (from the original)
        goto L_6e4d04;
    }
    r1 = u32(*gptr<u8>(r5 + (r0_1 >> 3)));
    r8_1 = r0_1 & 7u;
    r0_1 = lsr_r(r1, r8_1 & 0xff);  // (from the original)
    if ((r0_1 & 1u) == 0) {
        goto L_6e4d04;
    } else {
        r7_1 = r4 & 0xffu;  // (from the original)
    }
    call_006e50f0(r6, r7_1, r2, guest::cpu()->r[3]);
    r2_1 = guest::cpu()->r[2];
    r1_1 = r7_1 + (r7_1 << 5);
    r0_2 = r6 + (r1_1 << 3);
    call_002f73b8(r0_2, r1_1, r2_1, guest::cpu()->r[3]);
    r0_1 = r9 + (r7_1 >> 3);
    r2 = u32(*gptr<u8>(r0_1));
    r1 = r2 & ~lsl_r(r10, r8_1 & 0xff);  // (from the original)
    *gptr<u8>(r0_1) = u8(r1);
L_6e4d04:;
    r4 = r4 + 1u;
    if (r4 < 0xeu) {  // (from the original)
        guest::preempt();
        goto L_6e4cb4;
    }
    guest::cpu()->r[13] += 0x20u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0_1;
}

}  // namespace d_006e4c94
GUEST_EXPORT(0x006e4c94, d_006e4c94::f_006e4c94);

// f_006e4d30: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006e4d30 {

inline constexpr guest::Function<0x006e5718, u32(u32, u32, u32, u32)> call_006e5718;  // (from the original)

u32 f_006e4d30(u32 r0) {
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r0_2 = 0;
    guest::cpu()->r[13] -= 4u;
    if (r0 >= 0x276u) {  // (from the original)
        guest::cpu()->r[13] += 4u;
        guest::cpu()->r[1] = 0x276u;  // (from the original)
        return 0u;
    }
    r0_1 = call_006e5718(r0, 0x276u, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    r1_1 = guest::cpu()->r[1];
    r0_2 = u32(*gptr<u8>(r0_1 + 0x10u)) << 0x1c >> 0x1f;  // (from the original)
    guest::cpu()->r[13] += 4u;
    guest::cpu()->r[1] = r1_1;
    return r0_2;
}

}  // namespace d_006e4d30
GUEST_EXPORT(0x006e4d30, d_006e4d30::f_006e4d30);

// f_006e4d80: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006e4d80 {


u32 f_006e4d80(u32 r0) {
    u32 r0_1 = 0;
    r0_1 = u32(*gptr<u16>(0x865cf8u + ((r0 & 3u) << 1)));  // (from the original)
    guest::cpu()->r[1] = 0x865cf8u;  // (from the original)
    return r0_1;
}

}  // namespace d_006e4d80
GUEST_EXPORT(0x006e4d80, d_006e4d80::f_006e4d80);

// f_006e4d98: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006e4d98 {


u32 f_006e4d98(u32 r0) {
    u32 zf_1 = 0;
    u32 r0_1 = 0;
    zf_1 = r0 == 0x6au;  // (from the original)
    if (!zf_1) {
        zf_1 = r0 == 0x6bu;  // (from the original)
    }
    if (zf_1) {
        r0_1 = 1u;
    } else {
        r0_1 = 0u;
    }
    return r0_1;
}

}  // namespace d_006e4d98
GUEST_EXPORT(0x006e4d98, d_006e4d98::f_006e4d98);

// f_006e4e70: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006e4e70 {


u32 f_006e4e70(u32 r0) {
    u32 r0_1 = 0;
    if (r0 == 0) {
        r0_1 = 0x1au;  // (from the original)
    } else {
        r0_1 = 0x1bu;  // (from the original)
    }
    return r0_1;
}

}  // namespace d_006e4e70
GUEST_EXPORT(0x006e4e70, d_006e4e70::f_006e4e70);

// f_006e5920: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006e5920 {

inline constexpr guest::Function<0x004b4fc0, u32(u32, u32, u32, u32)> call_004b4fc0;  // (from the original)
inline constexpr guest::Function<0x00568630, u32(u32, u32, u32, u32)> call_00568630;  // (from the original)
inline constexpr guest::Function<0x00568984, u32(u32, u32, u32, u32)> call_00568984;  // (from the original)
inline constexpr guest::Function<0x00568c10, u32(u32, u32, u32, u32)> call_00568c10;  // (from the original)
inline constexpr guest::Function<0x005697e0, u32(u32, u32, u32, u32)> call_005697e0;  // (from the original)

u32 f_006e5920(u32 r0, u32 r1, u32 r2_unused, u32 r3, float S0) {
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    float S0_1 = 0;
    u32 r1_1 = 0;
    u32 r0_3 = 0;
    u32 r1_2 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    float S0_2 = 0;
    u32 r1_3 = 0;
    u32 r2_2 = 0;
    u32 r3_2 = 0;
    float S0_3 = 0;
    u32 r0_4 = 0;
    u32 r3_3 = 0;
    float S0_4 = 0;
    u32 r0_5 = 0;
    u32 r0_6 = 0;
    float S0_5 = 0;
    u32 r0_7 = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r0_1 = r0 + 0x460u;  // (from the original)
    guest::cpu()->s[0] = S0;
    r0_2 = call_004b4fc0(r0_1, 0x6e5998u, 1u, r3);  // (from the original)
    S0_1 = guest::cpu()->s[0];
    r1_1 = r0 + 0xa58u;  // (from the original)
    r0_3 = r0 + 0x460u;  // (from the original)
    guest::cpu()->s[0] = S0_1;
    call_00568630(r0_3, r1_1, r0_2, 0u);
    r1_2 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    S0_2 = float(std::bit_cast<u32>(std::bit_cast<float>(r1)));
    guest::cpu()->s[0] = S0_2;
    call_005697e0(r1_1, r1_2, r2_1, r3_1);
    r1_3 = guest::cpu()->r[1];
    r2_2 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    S0_3 = guest::cpu()->s[0];
    r0_4 = r0 + 0x460u;  // (from the original)
    guest::cpu()->s[0] = S0_3;
    call_00568c10(r0_4, r1_3, r2_2, r3_2);
    r3_3 = guest::cpu()->r[3];
    S0_4 = guest::cpu()->s[0];
    r0_5 = r0 + 0x460u;  // (from the original)
    guest::cpu()->s[0] = S0_4;
    r0_6 = call_004b4fc0(r0_5, 0x6e5998u, 1u, r3_3);  // (from the original)
    S0_5 = guest::cpu()->s[0];
    r0_7 = r0 + 0x460u;  // (from the original)
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->s[0] = S0_5;
    return call_00568984(r0_7, r1_1, r0_6, 0u);
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
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    float S0_1 = 0;
    u32 r1_1 = 0;
    u32 r0_3 = 0;
    u32 r1_2 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r0_4 = 0;
    float S0_2 = 0;
    u32 r1_3 = 0;
    u32 r2_2 = 0;
    u32 r3_2 = 0;
    float S0_3 = 0;
    u32 r0_5 = 0;
    u32 r3_3 = 0;
    float S0_4 = 0;
    u32 r0_6 = 0;
    u32 r0_7 = 0;
    float S0_5 = 0;
    u32 r1_4 = 0;
    u32 r0_8 = 0;
    u32 r0_9 = 0;
    u32 r1_5 = 0;
    float S0_6 = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r0_1 = r0 + 0x460u;  // (from the original)
    guest::cpu()->s[0] = S0;
    r0_2 = call_004b4fc0(r0_1, 0x6e5a34u, 1u, r3);  // (from the original)
    S0_1 = guest::cpu()->s[0];
    r1_1 = r0 + 0xa80u;  // (from the original)
    r0_3 = r0 + 0x460u;  // (from the original)
    guest::cpu()->s[0] = S0_1;
    call_00568630(r0_3, r1_1, r0_2, 0u);
    r1_2 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    r0_4 = r0 + 0xa80u;  // (from the original)
    S0_2 = float(std::bit_cast<u32>(std::bit_cast<float>(r1)));
    guest::cpu()->s[0] = S0_2;
    call_005697e0(r0_4, r1_2, r2_1, r3_1);
    r1_3 = guest::cpu()->r[1];
    r2_2 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    S0_3 = guest::cpu()->s[0];
    r0_5 = r0 + 0x460u;  // (from the original)
    guest::cpu()->s[0] = S0_3;
    call_00568c10(r0_5, r1_3, r2_2, r3_2);
    r3_3 = guest::cpu()->r[3];
    S0_4 = guest::cpu()->s[0];
    r0_6 = r0 + 0x460u;  // (from the original)
    guest::cpu()->s[0] = S0_4;
    r0_7 = call_004b4fc0(r0_6, 0x6e5a34u, 1u, r3_3);  // (from the original)
    S0_5 = guest::cpu()->s[0];
    r1_4 = r0 + 0xa80u;  // (from the original)
    r0_8 = r0 + 0x460u;  // (from the original)
    guest::cpu()->s[0] = S0_5;
    r0_9 = call_00568984(r0_8, r1_4, r0_7, 0u);
    r1_5 = guest::cpu()->r[1];
    S0_6 = guest::cpu()->s[0];
    *gptr<u8>(r0 + 0xaf0u) = u8(r1);  // (from the original)
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1_5;
    guest::cpu()->s[0] = S0_6;
    return r0_9;
}

}  // namespace d_006e59c0
GUEST_EXPORT(0x006e59c0, d_006e59c0::f_006e59c0);

// f_006e5e94: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006e5e94 {

inline guest::global<u32, 0x006e5f54> global_006e5f54;  // (from the original)
inline constexpr guest::Function<0x004b4fc0, u32(u32, u32, u32, u32)> call_004b4fc0;  // (from the original)
inline constexpr guest::Function<0x00568630, u32(u32, u32, u32, u32)> call_00568630;  // (from the original)
inline constexpr guest::Function<0x0056878c, u32(u32, u32, u32, u32)> call_0056878c;  // (from the original)
inline constexpr guest::Function<0x00568984, u32(u32, u32, u32, u32)> call_00568984;  // (from the original)
inline constexpr guest::Function<0x005697e0, u32(u32, u32, u32, u32)> call_005697e0;  // (from the original)

u32 f_006e5e94(u32 r0, u32 r1, u32 r2, u32 r3, float S0) {
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r3_1 = 0;
    float S0_1 = 0;
    u32 r1_1 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r0_5 = 0;
    float S0_2 = 0;
    u32 r1_2 = 0;
    u32 r0_6 = 0;
    u32 r1_3 = 0;
    u32 r2_1 = 0;
    u32 r3_2 = 0;
    float S0_3 = 0;
    u32 r0_7 = 0;
    u32 r0_8 = 0;
    u32 r0_9 = 0;
    float S0_4 = 0;
    u32 r1_4 = 0;
    u32 r0_10 = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r0_1 = r0 + 0x460u;  // (from the original)
    guest::cpu()->s[0] = S0;
    r0_2 = call_0056878c(r0_1, 0x6e5f38u, r2, r3);  // (from the original)
    r3_1 = guest::cpu()->r[3];
    S0_1 = guest::cpu()->s[0];
    r1_1 = u32(*gptr<u8>(r0_2 + 0xb7u)) & 0xfeu | r1;  // (from the original)
    *gptr<u8>(r0_2 + 0xb7u) = u8(r1_1);  // (from the original)
    r0_3 = u32(*gptr<u8>(r0 + 0xaedu));  // (from the original)
    if (r1 != 0) {
        if (r0_3 != 0) {
            *gptr<u8>(r0 + 0xaedu) = u8(r1);  // (from the original)
            guest::cpu()->r[13] += 0x10u;  // (from the original)
            guest::cpu()->r[1] = r1_1;
            guest::cpu()->s[0] = S0_1;
            return r0_3;
        }
        r0_4 = r0 + 0x460u;  // (from the original)
        guest::cpu()->s[0] = S0_1;
        r0_5 = call_004b4fc0(r0_4, 0x6e5f48u, 1u, r3_1);  // (from the original)
        S0_2 = guest::cpu()->s[0];
        r1_2 = r0 + 0xa30u;  // (from the original)
        r0_6 = r0 + 0x460u;  // (from the original)
        guest::cpu()->s[0] = S0_2;
        call_00568630(r0_6, r1_2, r0_5, 0u);
        r1_3 = guest::cpu()->r[1];
        r2_1 = guest::cpu()->r[2];
        r3_2 = guest::cpu()->r[3];
        S0_3 = std::bit_cast<float>(*global_006e5f54);
        r0_7 = r0 + 0xa30u;  // (from the original)
        guest::cpu()->s[0] = S0_3;
        r0_3 = call_005697e0(r0_7, r1_3, r2_1, r3_2);
        r1_1 = guest::cpu()->r[1];
        S0_1 = guest::cpu()->s[0];
        *gptr<u8>(r0 + 0xaedu) = u8(r1);  // (from the original)
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        guest::cpu()->r[1] = r1_1;
        guest::cpu()->s[0] = S0_1;
        return r0_3;
    }
    if (r0_3 != 1u) {
        *gptr<u8>(r0 + 0xaedu) = u8(r1);  // (from the original)
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        guest::cpu()->r[1] = r1_1;
        guest::cpu()->s[0] = S0_1;
        return r0_3;
    }
    r0_8 = r0 + 0x460u;  // (from the original)
    guest::cpu()->s[0] = S0_1;
    r0_9 = call_004b4fc0(r0_8, 0x6e5f48u, 1u, r3_1);  // (from the original)
    S0_4 = guest::cpu()->s[0];
    r1_4 = r0 + 0xa30u;  // (from the original)
    r0_10 = r0 + 0x460u;  // (from the original)
    guest::cpu()->s[0] = S0_4;
    r0_3 = call_00568984(r0_10, r1_4, r0_9, 0u);
    r1_1 = guest::cpu()->r[1];
    S0_1 = guest::cpu()->s[0];
    *gptr<u8>(r0 + 0xaedu) = u8(r1);  // (from the original)
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1_1;
    guest::cpu()->s[0] = S0_1;
    return r0_3;
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
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r1_1 = 0;
    u32 r1_2 = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r0_1 = u32(s32(s8(arg0->byte_aee)));
    if (r0_1 != r1) {
        r0_2 = r0 + 0x24u;  // (from the original)
        if (r1 != 0) {
            r0_1 = call_006c8e30(r0_2, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
            r1_1 = guest::cpu()->r[1];
        } else {
            r0_1 = call_006c9050(r0_2, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
            r1_2 = guest::cpu()->r[1];
        }
        *gptr<u8>(r0 + 0xaeeu) = u8(r1);  // (from the original)
    }
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    return r0_1;
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
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r1_2 = 0;
    u32 r5_1 = 0;
    u32 r1_3 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r1_4 = 0;
    u32 r0_4 = 0;
    u32 r0_5 = 0;
    u32 r0_6 = 0;
    u32 r1_5 = 0;
    u32 r0_7 = 0;
    u32 r1_6 = 0;
    u32 r0_8 = 0;
    u32 r1_7 = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r0_1 = arg0->word_ae8;
    r1_1 = *gptr<u32>(r0_1 + 0x10u);  // (from the original)
    if (r1_1 != 0) {
        r1_2 = arg0->word_ae0;
        r5_1 = r0 + 0xae0u;  // (from the original)
        call_004b6dc8(r0_1, r1_2, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1_3 = *gptr<u32>(r5_1);
        r0_2 = *gptr<u32>(r0 + 0x5ccu);  // (from the original)
        r0_1 = call_004b6d74(r0_2, r1_3, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1_1 = guest::cpu()->r[1];
    }
    r0_3 = call_0058660c(r0_1, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_4 = guest::cpu()->r[1];
    r0_4 = u32(*gptr<u16>(r0_3 + 0xeu));  // (from the original)
    if ((r0_4 & 8u) == 0) {
        r0_5 = call_00584134(r0_4, r1_4, guest::cpu()->r[2], guest::cpu()->r[3]);
        call_0058c5f0(r0_5, 0x24u, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
        r1_4 = guest::cpu()->r[1];
    }
    r0_6 = r0 + 0x24u;  // (from the original)
    call_006c8ef0(r0_6, r1_4, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_5 = guest::cpu()->r[1];
    r0_7 = r0 + 0x460u;  // (from the original)
    call_001323b4(r0_7, r1_5, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_6 = guest::cpu()->r[1];
    r0_8 = r0 + 0x5acu;  // (from the original)
    call_001323b4(r0_8, r1_6, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_7 = guest::cpu()->r[1];
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1_7;
    return 1u;
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

inline guest::global<u32, 0x006e6b54> global_006e6b54;  // (from the original)
inline constexpr guest::Function<0x001207d8, u32(u32, u32, u32, u32)> call_001207d8;  // (from the original)
inline constexpr guest::Function<0x00125aec, u32(u32, u32, u32, u32)> call_00125aec;  // (from the original)
inline constexpr guest::Function<0x00125e3c, u32(u32, u32, u32, u32)> call_00125e3c;  // (from the original)

u32 f_006e69cc(gptr<Object_006e69cc_0> arg0, float S0) {
    u32 r0 = arg0.addr();
    u32 r13 = guest::cpu()->r[13];
    u32 ea_1 = 0;
    u32 r3_1 = 0;
    u32 r0_1 = 0;
    u32 r3_2 = 0;
    u32 r2_1 = 0;
    u32 r1_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r1_2 = 0;
    u32 r2_2 = 0;
    u32 r3_3 = 0;
    float S0_1 = 0;
    u32 r0_4 = 0;
    u32 r0_5 = 0;
    u32 r1_3 = 0;
    u32 r2_3 = 0;
    u32 r3_4 = 0;
    float S0_2 = 0;
    u32 r0_6 = 0;
    u32 r0_7 = 0;
    u32 r1_4 = 0;
    u32 r2_4 = 0;
    u32 r3_5 = 0;
    float S0_3 = 0;
    u32 r0_8 = 0;
    u32 r0_9 = 0;
    u32 r1_5 = 0;
    u32 r2_5 = 0;
    u32 r3_6 = 0;
    float S0_4 = 0;
    u32 r0_10 = 0;
    u32 r0_11 = 0;
    u32 r2_6 = 0;
    u32 r3_7 = 0;
    u32 r0_12 = 0;
    u32 r1_6 = 0;
    float S0_5 = 0;
    u32 r0_13 = 0;
    u32 r0_14 = 0;
    u32 r1_7 = 0;
    u32 r2_7 = 0;
    u32 r3_8 = 0;
    float S0_6 = 0;
    u32 r0_15 = 0;
    u32 r0_16 = 0;
    u32 r1_8 = 0;
    u32 r2_8 = 0;
    u32 r3_9 = 0;
    float S0_7 = 0;
    u32 r0_17 = 0;
    u32 r0_18 = 0;
    u32 r1_9 = 0;
    u32 r2_9 = 0;
    u32 r3_10 = 0;
    float S0_8 = 0;
    u32 r0_19 = 0;
    u32 r0_20 = 0;
    u32 r1_10 = 0;
    u32 r2_10 = 0;
    u32 r3_11 = 0;
    float S0_9 = 0;
    u32 r0_21 = 0;
    u32 r0_22 = 0;
    u32 r1_11 = 0;
    u32 r2_11 = 0;
    u32 r3_12 = 0;
    float S0_10 = 0;
    u32 r0_23 = 0;
    u32 r0_24 = 0;
    u32 r1_12 = 0;
    u32 r2_12 = 0;
    u32 r3_13 = 0;
    float S0_11 = 0;
    u32 r0_25 = 0;
    u32 r0_26 = 0;
    u32 r1_13 = 0;
    u32 r2_13 = 0;
    u32 r3_14 = 0;
    float S0_12 = 0;
    u32 r0_27 = 0;
    u32 r0_28 = 0;
    u32 r1_14 = 0;
    u32 r2_14 = 0;
    u32 r3_15 = 0;
    float S0_13 = 0;
    u32 r0_29 = 0;
    u32 r0_30 = 0;
    u32 r1_15 = 0;
    u32 r2_15 = 0;
    u32 r3_16 = 0;
    float S0_14 = 0;
    u32 r0_31 = 0;
    u32 r0_32 = 0;
    u32 r1_16 = 0;
    u32 r2_16 = 0;
    u32 r3_17 = 0;
    float S0_15 = 0;
    u32 r0_33 = 0;
    u32 r0_34 = 0;
    u32 r1_17 = 0;
    u32 r2_17 = 0;
    u32 r3_18 = 0;
    float S0_16 = 0;
    u32 r0_35 = 0;
    u32 r0_36 = 0;
    float S0_17 = 0;
    u32 r0_37 = 0;
    r13 = r13 - 8;
    arg0->word_4 = u32(0u);
    arg0->byte_8 = u8(0u);
    ea_1 = 0x87aa7cu + 0x40u;  // (from the original)
    r3_1 = *gptr<u32>(ea_1 + 4);
    arg0->word_c = u32(*gptr<u32>(ea_1));
    arg0->word_10 = u32(r3_1);
    arg0->word_14 = u32(0u);
    arg0->byte_18 = u8(0u);
    arg0->word_1c = u32(0u);
    arg0->word_0 = u32(0x8f9618u);  // (from the original)
    arg0->word_20 = u32(0u);
    r0_1 = r0 + 0x24u;  // (from the original)
    r3_2 = r0_1 + 0x10u;  // (from the original)
    arg0->word_28 = u32(0u);
    arg0->byte_2c = u8(0u);
    r2_1 = *gptr<u32>(0x87aa7cu + 0x38u);  // (from the original)
    r1_1 = *gptr<u32>(0x87aa7cu + 0x3cu);  // (from the original)
    arg0->word_30 = u32(r2_1);
    arg0->word_34 = u32(r1_1);
    arg0->word_38 = u32(0u);
    arg0->byte_3c = u8(0u);
    arg0->word_40 = u32(0u);
    arg0->word_24 = u32(0x8f8ed0u);  // (from the original)
    arg0->word_44 = u32(0u);
    r0_2 = r0_1 + 0x24u;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    r0_3 = call_00125e3c(r0_2, 0x8f8ed0u, r2_1, r3_2);  // (from the original)
    r1_2 = guest::cpu()->r[1];
    r2_2 = guest::cpu()->r[2];
    r3_3 = guest::cpu()->r[3];
    S0_1 = guest::cpu()->s[0];
    r0_4 = r0_3 + 0x14cu;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_1;
    r0_5 = call_001207d8(r0_4, r1_2, r2_2, r3_3);
    r1_3 = guest::cpu()->r[1];
    r2_3 = guest::cpu()->r[2];
    r3_4 = guest::cpu()->r[3];
    S0_2 = guest::cpu()->s[0];
    r0_6 = r0_5 + 0x248u;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_2;
    r0_7 = call_00125aec(r0_6, r1_3, r2_3, r3_4);
    r1_4 = guest::cpu()->r[1];
    r2_4 = guest::cpu()->r[2];
    r3_5 = guest::cpu()->r[3];
    S0_3 = guest::cpu()->s[0];
    r0_8 = r0_7 + 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_3;
    r0_9 = call_00125aec(r0_8, r1_4, r2_4, r3_5);
    r1_5 = guest::cpu()->r[1];
    r2_5 = guest::cpu()->r[2];
    r3_6 = guest::cpu()->r[3];
    S0_4 = guest::cpu()->s[0];
    r0_10 = r0_9 + 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_4;
    r0_11 = call_00125aec(r0_10, r1_5, r2_5, r3_6);
    r2_6 = guest::cpu()->r[2];
    r3_7 = guest::cpu()->r[3];
    r0_12 = r0_11 - 0x408u;  // (from the original)
    r1_6 = r0_12 + 0x400u;  // (from the original)
    *gptr<u8>(r0_12 + 0x430u) = u8(0u);  // (from the original)
    *gptr<u8>(r0_12 + 0x431u) = u8(0u);  // (from the original)
    *gptr<u32>(r0_12 + 0x434u) = u32(0u);  // (from the original)
    S0_5 = std::bit_cast<float>(*global_006e6b54);
    *gptr<u32>(r1_6 + 0x38u) = u32(std::bit_cast<u32>(S0_5));  // (from the original)
    r0_13 = r0_12 + 0x43cu;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_5;
    r0_14 = call_00125e3c(r0_13, r1_6, r2_6, r3_7);
    r1_7 = guest::cpu()->r[1];
    r2_7 = guest::cpu()->r[2];
    r3_8 = guest::cpu()->r[3];
    S0_6 = guest::cpu()->s[0];
    r0_15 = r0_14 + 0x14cu;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_6;
    r0_16 = call_00125e3c(r0_15, r1_7, r2_7, r3_8);
    r1_8 = guest::cpu()->r[1];
    r2_8 = guest::cpu()->r[2];
    r3_9 = guest::cpu()->r[3];
    S0_7 = guest::cpu()->s[0];
    r0_17 = r0_16 + 0x14cu;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_7;
    r0_18 = call_001207d8(r0_17, r1_8, r2_8, r3_9);
    r1_9 = guest::cpu()->r[1];
    r2_9 = guest::cpu()->r[2];
    r3_10 = guest::cpu()->r[3];
    S0_8 = guest::cpu()->s[0];
    r0_19 = r0_18 + 0x248u;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_8;
    r0_20 = call_00125aec(r0_19, r1_9, r2_9, r3_10);
    r1_10 = guest::cpu()->r[1];
    r2_10 = guest::cpu()->r[2];
    r3_11 = guest::cpu()->r[3];
    S0_9 = guest::cpu()->s[0];
    r0_21 = r0_20 + 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_9;
    r0_22 = call_00125aec(r0_21, r1_10, r2_10, r3_11);
    r1_11 = guest::cpu()->r[1];
    r2_11 = guest::cpu()->r[2];
    r3_12 = guest::cpu()->r[3];
    S0_10 = guest::cpu()->s[0];
    r0_23 = r0_22 + 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_10;
    r0_24 = call_00125aec(r0_23, r1_11, r2_11, r3_12);
    r1_12 = guest::cpu()->r[1];
    r2_12 = guest::cpu()->r[2];
    r3_13 = guest::cpu()->r[3];
    S0_11 = guest::cpu()->s[0];
    r0_25 = r0_24 + 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_11;
    r0_26 = call_00125aec(r0_25, r1_12, r2_12, r3_13);
    r1_13 = guest::cpu()->r[1];
    r2_13 = guest::cpu()->r[2];
    r3_14 = guest::cpu()->r[3];
    S0_12 = guest::cpu()->s[0];
    r0_27 = r0_26 + 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_12;
    r0_28 = call_00125aec(r0_27, r1_13, r2_13, r3_14);
    r1_14 = guest::cpu()->r[1];
    r2_14 = guest::cpu()->r[2];
    r3_15 = guest::cpu()->r[3];
    S0_13 = guest::cpu()->s[0];
    r0_29 = r0_28 + 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_13;
    r0_30 = call_00125aec(r0_29, r1_14, r2_14, r3_15);
    r1_15 = guest::cpu()->r[1];
    r2_15 = guest::cpu()->r[2];
    r3_16 = guest::cpu()->r[3];
    S0_14 = guest::cpu()->s[0];
    r0_31 = r0_30 + 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_14;
    r0_32 = call_00125aec(r0_31, r1_15, r2_15, r3_16);
    r1_16 = guest::cpu()->r[1];
    r2_16 = guest::cpu()->r[2];
    r3_17 = guest::cpu()->r[3];
    S0_15 = guest::cpu()->s[0];
    r0_33 = r0_32 + 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_15;
    r0_34 = call_00125aec(r0_33, r1_16, r2_16, r3_17);
    r1_17 = guest::cpu()->r[1];
    r2_17 = guest::cpu()->r[2];
    r3_18 = guest::cpu()->r[3];
    S0_16 = guest::cpu()->s[0];
    r0_35 = r0_34 + 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_16;
    r0_36 = call_00125aec(r0_35, r1_17, r2_17, r3_18);
    S0_17 = guest::cpu()->s[0];
    r0_37 = r0_36 - 0xa80u;  // (from the original)
    *gptr<u32>(r0_37 + 0xaa8u) = u32(0u);  // (from the original)
    *gptr<u32>(r0_37 + 0xaacu) = u32(0u);  // (from the original)
    *gptr<u32>(r0_37 + 0xab0u) = u32(0u);  // (from the original)
    *gptr<u32>(r0_37 + 0xab4u) = u32(0u);  // (from the original)
    *gptr<u32>(r0_37 + 0xab8u) = u32(0u);  // (from the original)
    *gptr<u32>(r0_37 + 0xabcu) = u32(0u);  // (from the original)
    *gptr<u32>(r0_37 + 0xad4u) = u32(0u);  // (from the original)
    *gptr<u32>(r0_37 + 0xad8u) = u32(0u);  // (from the original)
    *gptr<u32>(r0_37 + 0xadcu) = u32(0u);  // (from the original)
    *gptr<u32>(r0_37 + 0xae0u) = u32(0u);  // (from the original)
    *gptr<u32>(r0_37 + 0xae4u) = u32(0u);  // (from the original)
    *gptr<u32>(r0_37 + 0xae8u) = u32(0u);  // (from the original)
    *gptr<u8>(r0_37 + 0xaecu) = u8(1u);  // (from the original)
    *gptr<u8>(r0_37 + 0xaedu) = u8(0u);  // (from the original)
    *gptr<u8>(r0_37 + 0xaeeu) = u8(0u);  // (from the original)
    *gptr<u8>(r0_37 + 0xaefu) = u8(0u);  // (from the original)
    *gptr<u8>(r0_37 + 0xaf0u) = u8(7u);  // (from the original)
    *gptr<u8>(r0_37 + 0xaf1u) = u8(2u);  // (from the original)
    *gptr<u32>(r0_37 + 0xac0u) = u32(0u);  // (from the original)
    *gptr<u32>(r0_37 + 0xac4u) = u32(0u);  // (from the original)
    *gptr<u32>(r0_37 + 0xac8u) = u32(0u);  // (from the original)
    *gptr<u32>(r0_37 + 0xaccu) = u32(0u);  // (from the original)
    *gptr<u32>(r0_37 + 0xad0u) = u32(0u);  // (from the original)
    r13 = r13 + 8;
    guest::cpu()->r[1] = 2u;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_17;
    return r0_37;
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
    u32 r1_1 = 0;
    u32 r0_1 = 0;
    arg0->half_500 = u16(u32(arg1->half_0));
    if (u32(arg0->byte_474) >= 0x1du) {  // (from the original)
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r1_1 = u32(arg1->half_0);
    r0_1 = r0 + 0x478u;  // (from the original)
    arg0->half_498 = u16(r1_1);
    guest::cpu()->r[1] = r1_1;
    return r0_1;
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
    u32 r5_1 = 0;
    u32 r2_1 = 0;
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r1_1 = 0;
    float S0_1 = 0;
    float S1_1 = 0;
    u32 zf_1 = 0;
    u32 zf_2 = 0;
    u32 zf_3 = 0;
    u32 zf_4 = 0;
    u32 zf_5 = 0;
    u32 r2_2 = 0;
    u32 r1_2 = 0;
    u32 r3_1 = 0;
    u32 r1_3 = 0;
    u32 r3_2 = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r5_1 = r0 + 0x4e0u;  // (from the original)
    arg0->word_4ec = u32(std::bit_cast<u32>(arg1->v[0]));
    arg0->word_4f0 = u32(std::bit_cast<u32>(arg1->v[1]));
    r2_1 = std::bit_cast<u32>(arg1->v[2]);
    arg0->word_4f4 = u32(r2_1);
    if (u32(arg0->byte_474) < 0x1du) {  // (from the original)
        arg0->word_484 = u32(std::bit_cast<u32>(arg1->v[0]));
        r2_1 = std::bit_cast<u32>(arg1->v[1]);
        arg0->word_488 = u32(r2_1);
        r1 = std::bit_cast<u32>(arg1->v[2]);
        arg0->word_48c = u32(r1);
    }
    r0_1 = *gptr<u32>(r0 + 0x28u);  // (from the original)
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    r0_2 = call_007523a8(r0_1, r1, r2_1, r3);
    r1_1 = guest::cpu()->r[1];
    S0_1 = guest::cpu()->s[0];
    S1_1 = guest::cpu()->s[1];
    if (r0_2 == 0) {
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        guest::cpu()->r[1] = r1_1;
        guest::cpu()->s[0] = S0_1;
        guest::cpu()->s[1] = S1_1;
        return r0_2;
    }
    r0_2 = u32(*gptr<u8>(r0 + 0x4a8u));  // (from the original)
    if (r0_2 != 0) {
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        guest::cpu()->r[1] = r1_1;
        guest::cpu()->s[0] = S0_1;
        guest::cpu()->s[1] = S1_1;
        return r0_2;
    }
    r0_2 = *gptr<u32>(r0 + 0x28u);  // (from the original)
    r1_1 = *gptr<u32>(r0_2 + 0xaa0u);  // (from the original)
    if (r1_1 == 0) {
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        guest::cpu()->r[1] = r1_1;
        guest::cpu()->s[0] = S0_1;
        guest::cpu()->s[1] = S1_1;
        return r0_2;
    }
    r0_2 = u32(*gptr<u8>(r0 + 0x30u));  // (from the original)
    zf_1 = r0_2 == 1u;
    if (!zf_1) {
        zf_1 = r0_2 == 2u;
    }
    if (zf_1) {
        goto L_6e7e50;
    }
    zf_2 = r0_2 == 3u;
    if (!zf_2) {
        zf_2 = r0_2 == 5u;
    }
    if (zf_2) {
        goto L_6e7e50;
    }
    zf_3 = r0_2 == 6u;
    if (!zf_3) {
        zf_3 = r0_2 == 7u;
    }
    if (zf_3) {
        goto L_6e7e50;
    }
    zf_4 = r0_2 == 8u;
    if (!zf_4) {
        zf_4 = r0_2 == 9u;
    }
    if (zf_4) {
        goto L_6e7e50;
    }
    zf_5 = r0_2 == 0xau;  // (from the original)
    if (!zf_5) {
        zf_5 = r0_2 == 0xbu;  // (from the original)
    }
    if (!zf_5) {
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        guest::cpu()->r[1] = r1_1;
        guest::cpu()->s[0] = S0_1;
        guest::cpu()->s[1] = S1_1;
        return r0_2;
    }
L_6e7e50:;
    r2_2 = u32(*gptr<u8>(r1_1 + 7u)) & ~0x3fu | r0_2 & 0x3fu;  // (from the original)
    *gptr<u8>(r1_1 + 7u) = u8(r2_2);
    *gptr<u8>(r1_1 + 7u) = u8(r2_2 & ~0xc0u | u32(*gptr<u8>(r0 + 0x4ddu)) << 6);  // (from the original)
    r0_2 = r1_1 + 9u;
    S1_1 = std::bit_cast<float>(*gptr<u32>(r5_1 + 0x14u));  // (from the original)
    r1_2 = std::bit_cast<u32>(std::bit_cast<float>(vcvt_uz_f(std::bit_cast<float>(*gptr<u32>(r5_1 + 0xcu)))));  // (from the original)
    S0_1 = std::bit_cast<float>(vcvt_uz_f(S1_1));
    *gptr<u8>(r0_2) = u8(r1_2);
    r3_1 = u32(*gptr<u8>(r0_2 + 1u)) & ~0xfu | (r1_2 & 0xf00u) >> 8;  // (from the original)
    r1_3 = std::bit_cast<u32>(S0_1);
    r3_2 = r3_1 & ~0xf0u | r1_3 << 4;  // (from the original)
    r1_1 = 0u | r1_3 >> 4;
    *gptr<u8>(r0_2 + 1u) = u8(r3_2);
    *gptr<u8>(r0_2 + 2u) = u8(r1_1);
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1_1;
    guest::cpu()->s[0] = S0_1;
    guest::cpu()->s[1] = S1_1;
    return r0_2;
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
    u32 r1_1 = 0;
    u32 r0_1 = 0;
    arg0->half_500 = u16(u32(arg1->half_0));
    if (u32(arg0->byte_474) >= 0x1du) {  // (from the original)
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r1_1 = u32(arg1->half_0);
    r0_1 = r0 + 0x478u;  // (from the original)
    arg0->half_49a = u16(r1_1);
    guest::cpu()->r[1] = r1_1;
    return r0_1;
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
    u32 r1_1 = 0;
    u32 r3_1 = 0;
    u32 r2_1 = 0;
    u32 r1_2 = 0;
    guest::cpu()->r[13] -= 8u;
    r1_1 = r0 + 0x4acu;  // (from the original)
    arg0->word_4 = u32(arg0->word_4b8);
    r3_1 = r0 + 0x14u;  // (from the original)
    arg0->word_8 = u32(arg0->word_4bc);
    arg0->word_c = u32(arg0->word_4c0);
    arg0->half_20 = u16(u32(*gptr<u16>(arg0->word_28 + 0x2eu)));  // (from the original)
    arg0->half_22 = u16(u32(arg0->half_4ce));
    r2_1 = arg0->word_4b0;
    arg0->word_14 = u32(arg0->word_4ac);
    arg0->word_18 = u32(r2_1);
    arg0->byte_10 = u8(u32(arg0->byte_4d0));
    arg0->word_1c = u32(arg0->word_4b4);
    call_006ea9dc(r0, r1_1, r2_1, r3_1);
    r1_2 = guest::cpu()->r[1];
    *gptr<u8>(r0 + 0x4dcu) = u8(0u);  // (from the original)
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1_2;
    return 1u;
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
    u32 r1_1 = 0;
    u32 r0_1 = 0;
    u32 r1_2 = 0;
    u32 r2_1 = 0;
    u32 r0_2 = 0;
    u32 r1_3 = 0;
    u32 r0_3 = 0;
    u32 zf_1 = 0;
    u32 r0_4 = 0;
    u32 r2_2 = 0;
    u32 r1_4 = 0;
    guest::cpu()->r[13] -= 8u;
    r1_1 = arg0->word_434;
    r0_1 = r0 + 0x3cu;  // (from the original)
    call_0026a418(r0_1, r1_1, r2, guest::cpu()->r[3]);
    r1_2 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    r0_2 = *gptr<u32>(r0 + 0x34u);  // (from the original)
    if (r0_2 == 0) {
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1_2;
        return r0_2;
    }
    r1_3 = *gptr<u32>(r0_2 + 0x10u);  // (from the original)
    if (r1_3 == 0) {
        r2_1 = *gptr<u32>(r0_2 + 0x14u);  // (from the original)
        if ((r2_1 & 1u) == 0) {
            guest::cpu()->r[13] += 8u;
            guest::cpu()->r[1] = r1_3;
            return r0_2;
        }
        if (r2_1 == 0) {
            guest::cpu()->r[13] += 8u;
            guest::cpu()->r[1] = r1_3;
            return r0_2;
        }
    }
    r0_3 = *gptr<u32>(r0_2 + 0x14u);  // (from the original)
    zf_1 = (r0_3 & 1u) == 0;
    r0_4 = r0 + u32(s32(r0_3) >> 1);
    if (zf_1) {
        guest::cpu()->r[13] += 8u;
        return guest::call_address<u32>(r1_3, r0_4, r1_3, r2_1, guest::cpu()->r[3]);
    }
    r2_2 = *gptr<u32>(r0_4);
    r1_4 = *gptr<u32>(r2_2 + r1_3);
    guest::cpu()->r[13] += 8u;
    return guest::call_address<u32>(r1_4, r0_4, r1_4, r2_2, guest::cpu()->r[3]);
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
    u32 r5_1 = 0;
    u32 r0_1 = 0;
    u32 r5_2 = 0;
    u32 r0_2 = 0;
    u32 r1_1 = 0;
    float S0_1 = 0;
    float S1_1 = 0;
    u32 r2_1 = 0;
    u32 r1_2 = 0;
    u32 r1_3 = 0;
    u32 r2_2 = 0;
    u32 r1_4 = 0;
    u32 r2_3 = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r5_1 = r0 + 0x400u;  // (from the original)
    r0_1 = arg0->word_28;
    r5_2 = r5_1 + 0xacu;  // (from the original)
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    r0_2 = call_007523a8(r0_1, r1, r2, guest::cpu()->r[3]);
    r1_1 = guest::cpu()->r[1];
    S0_1 = guest::cpu()->s[0];
    S1_1 = guest::cpu()->s[1];
    if (r0_2 == 0) {
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        guest::cpu()->r[1] = r1_1;
        guest::cpu()->s[0] = S0_1;
        guest::cpu()->s[1] = S1_1;
        return r0_2;
    }
    r0_2 = u32(*gptr<u8>(r0 + 0x4a8u));  // (from the original)
    if (r0_2 != 0) {
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        guest::cpu()->r[1] = r1_1;
        guest::cpu()->s[0] = S0_1;
        guest::cpu()->s[1] = S1_1;
        return r0_2;
    }
    r0_2 = *gptr<u32>(*gptr<u32>(r0 + 0x28u) + 0xaa0u);  // (from the original)
    if (r0_2 == 0) {
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        guest::cpu()->r[1] = r1_1;
        guest::cpu()->s[0] = S0_1;
        guest::cpu()->s[1] = S1_1;
        return r0_2;
    }
    r2_1 = u32(*gptr<u8>(r0 + 0x30u)) & 0x3fu | u32(*gptr<u8>(r0_2 + 7u)) & ~0x3fu;  // (from the original)
    *gptr<u8>(r0_2 + 7u) = u8(r2_1);
    *gptr<u8>(r0_2 + 7u) = u8(r2_1 & ~0xc0u | u32(*gptr<u8>(r0 + 0x4ddu)) << 6);  // (from the original)
    r1_2 = u32(*gptr<u8>(r0_2 + 8u)) + 1u;
    *gptr<u8>(r0_2 + 8u) = u8(r1_2);
    *gptr<u8>(r0 + 0x552u) = u8(r1_2);  // (from the original)
    r0_2 = r0_2 + 9u;
    S1_1 = std::bit_cast<float>(*gptr<u32>(r5_2 + 0x14u));  // (from the original)
    r1_3 = std::bit_cast<u32>(std::bit_cast<float>(vcvt_uz_f(std::bit_cast<float>(*gptr<u32>(r5_2 + 0xcu)))));  // (from the original)
    S0_1 = std::bit_cast<float>(vcvt_uz_f(S1_1));
    *gptr<u8>(r0_2) = u8(r1_3);
    r2_2 = u32(*gptr<u8>(r0_2 + 1u)) & ~0xfu | (r1_3 & 0xf00u) >> 8;  // (from the original)
    r1_4 = std::bit_cast<u32>(S0_1);
    r2_3 = r2_2 & ~0xf0u | r1_4 << 4;  // (from the original)
    r1_1 = 0u | r1_4 >> 4;
    *gptr<u8>(r0_2 + 1u) = u8(r2_3);
    *gptr<u8>(r0_2 + 2u) = u8(r1_1);
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1_1;
    guest::cpu()->s[0] = S0_1;
    guest::cpu()->s[1] = S1_1;
    return r0_2;
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
    u32 r3_1 = 0;
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    r3_1 = arg1->word_4;
    arg0->word_4e0 = u32(arg1->word_0);
    arg0->word_4e4 = u32(r3_1);
    if (u32(arg0->byte_474) >= 0x1du) {  // (from the original)
        guest::cpu()->r[1] = r1;
        return;
    }
    r1_1 = arg1->word_0;
    r2_1 = arg1->word_4;
    arg0->word_478 = u32(r1_1);
    arg0->word_47c = u32(r2_1);
    guest::cpu()->r[1] = r1_1;
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

inline guest::global<u32, 0x006ee44c> global_006ee44c;  // (from the original)
inline guest::global<u32, 0x006ee460> global_006ee460;  // (from the original)
inline guest::global<u32, 0x006ee464> global_006ee464;  // (from the original)
inline guest::global<u32, 0x006ee468> global_006ee468;  // (from the original)
inline guest::global<u32, 0x006ee46c> global_006ee46c;  // (from the original)
inline guest::global<u32, 0x006ee470> global_006ee470;  // (from the original)
inline guest::global<u32, 0x008806bc> global_008806bc;  // (from the original)
inline constexpr guest::Function<0x00269478, u32(u32, u32, u32, u32)> call_00269478;  // (from the original)
inline constexpr guest::Function<0x002fc20c, u32(u32, u32, u32, u32)> call_002fc20c;  // (from the original)
inline constexpr guest::Function<0x003166a8, u32(u32, u32, u32, u32)> call_003166a8;  // (from the original)

u32 f_006ee264(gptr<Object_006ee264_0> arg0, u32 r1, float S0_unused, float S1, float S2, float S3, float S4) {
    u32 r0 = arg0.addr();
    u32 r13 = guest::cpu()->r[13];
    u32 r14 = guest::cpu()->r[14];
    u32 ea_1 = 0;
    u32 r12_1 = 0;
    float S0_1 = 0;
    float S0_2 = 0;
    u32 r3_1 = 0;
    u32 ea_2 = 0;
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r2_1 = 0;
    u32 r3_2 = 0;
    float S0_3 = 0;
    float S1_1 = 0;
    float S2_1 = 0;
    float S3_1 = 0;
    float S4_1 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r0_5 = 0;
    u32 r0_6 = 0;
    u32 r1_1 = 0;
    u32 r2_2 = 0;
    u32 r3_3 = 0;
    float S0_4 = 0;
    float S1_2 = 0;
    float S2_2 = 0;
    float S3_2 = 0;
    float S4_2 = 0;
    u32 r0_7 = 0;
    u32 r0_8 = 0;
    u32 r0_9 = 0;
    u32 r3_4 = 0;
    float S0_5 = 0;
    float S1_3 = 0;
    float S2_3 = 0;
    float S3_3 = 0;
    float S4_3 = 0;
    u32 r0_10 = 0;
    u32 r2_3 = 0;
    u32 r0_11 = 0;
    u32 r0_12 = 0;
    u32 r0_13 = 0;
    u32 r2_4 = 0;
    u32 r3_5 = 0;
    u32 r1_2 = 0;
    float S0_6 = 0;
    float S1_4 = 0;
    float S2_4 = 0;
    float S3_4 = 0;
    float S4_4 = 0;
    u32 r0_14 = 0;
    u32 r1_3 = 0;
    u32 r0_15 = 0;
    u32 r0_16 = 0;
    u32 r1_4 = 0;
    float S0_7 = 0;
    float S1_5 = 0;
    u32 r0_17 = 0;
    r13 = r13 - 0x10;  // (from the original)
    r14 = 0xae5658u;  // (from the original)
    ea_1 = r14;
    r12_1 = *gptr<u32>(ea_1 + 4);
    S0_1 = std::bit_cast<float>(*gptr<u32>(r14 + 8u));
    arg0->word_4 = u32(*gptr<u32>(ea_1));
    arg0->word_8 = u32(r12_1);
    arg0->word_c = u32(std::bit_cast<u32>(S0_1));
    arg0->byte_10 = u8(0u);
    S0_2 = std::bit_cast<float>(*global_006ee44c);
    r3_1 = *gptr<u32>(0x8806bcu + 4);  // (from the original)
    arg0->word_14 = u32(*global_008806bc);
    arg0->word_18 = u32(r3_1);
    arg0->word_1c = u32(std::bit_cast<u32>(S0_2));
    arg0->half_20 = u16(0u);
    arg0->half_22 = u16(0u);
    arg0->half_24 = u16(0u);
    arg0->byte_26 = u8(0u);
    arg0->byte_27 = u8(0u);
    arg0->word_0 = u32(0x8f969cu);  // (from the original)
    arg0->word_28 = u32(0u);
    arg0->word_2c = u32(0u);
    arg0->byte_30 = u8(0x1du);  // (from the original)
    arg0->byte_31 = u8(0x1du);  // (from the original)
    arg0->byte_32 = u8(0x1du);  // (from the original)
    ea_2 = r0 + 0x34u;  // (from the original)
    arg0->word_34 = u32(0u);
    r0_1 = ea_2 + 4u;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_2;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2;
    guest::cpu()->s[3] = S3;
    guest::cpu()->s[4] = S4;
    r0_2 = call_00269478(r0_1, r1, 0x8f969cu, r3_1);  // (from the original)
    r2_1 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    S0_3 = guest::cpu()->s[0];
    S1_1 = guest::cpu()->s[1];
    S2_1 = guest::cpu()->s[2];
    S3_1 = guest::cpu()->s[3];
    S4_1 = guest::cpu()->s[4];
    *gptr<u32>(r0_2) = u32(0x8f1904u);  // (from the original)
    r0_3 = r0_2 + 0x408u;  // (from the original)
    *gptr<u32>(r0_3) = u32(r1);
    r0_4 = r0_3 + 0x38u;  // (from the original)
    *gptr<u16>(r0_4 + 0x20u) = u16(0u);  // (from the original)
    *gptr<u16>(r0_4 + 0x22u) = u16(0u);  // (from the original)
    r0_5 = r0_4 + 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_3;
    guest::cpu()->s[1] = S1_1;
    guest::cpu()->s[2] = S2_1;
    guest::cpu()->s[3] = S3_1;
    guest::cpu()->s[4] = S4_1;
    r0_6 = call_002fc20c(r0_5, 0x8f1904u, r2_1, r3_2);  // (from the original)
    r1_1 = guest::cpu()->r[1];
    r2_2 = guest::cpu()->r[2];
    r3_3 = guest::cpu()->r[3];
    S0_4 = guest::cpu()->s[0];
    S1_2 = guest::cpu()->s[1];
    S2_2 = guest::cpu()->s[2];
    S3_2 = guest::cpu()->s[3];
    S4_2 = guest::cpu()->s[4];
    r0_7 = r0_6 + 0xcu;  // (from the original)
    *gptr<u16>(r0_7 + 0x20u) = u16(0u);  // (from the original)
    *gptr<u16>(r0_7 + 0x22u) = u16(0u);  // (from the original)
    r0_8 = r0_7 + 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_4;
    guest::cpu()->s[1] = S1_2;
    guest::cpu()->s[2] = S2_2;
    guest::cpu()->s[3] = S3_2;
    guest::cpu()->s[4] = S4_2;
    r0_9 = call_002fc20c(r0_8, r1_1, r2_2, r3_3);
    r3_4 = guest::cpu()->r[3];
    S0_5 = guest::cpu()->s[0];
    S1_3 = guest::cpu()->s[1];
    S2_3 = guest::cpu()->s[2];
    S3_3 = guest::cpu()->s[3];
    S4_3 = guest::cpu()->s[4];
    r0_10 = r0_9 - 0x4d4u;  // (from the original)
    r2_3 = 0x276u + 0x268u;  // (from the original)
    *gptr<u8>(r0_10 + 0x4dcu) = u8(1u);  // (from the original)
    *gptr<u8>(r0_10 + 0x4ddu) = u8(0u);  // (from the original)
    *gptr<u16>(r2_3 + r0_10) = u16(0x276u);  // (from the original)
    r0_11 = r0_10 + 0x4e0u;  // (from the original)
    *gptr<u16>(r0_11 + 0x20u) = u16(0u);  // (from the original)
    *gptr<u16>(r0_11 + 0x22u) = u16(0u);  // (from the original)
    r0_12 = r0_11 + 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_5;
    guest::cpu()->s[1] = S1_3;
    guest::cpu()->s[2] = S2_3;
    guest::cpu()->s[3] = S3_3;
    guest::cpu()->s[4] = S4_3;
    r0_13 = call_002fc20c(r0_12, 0x276u, r2_3, r3_4);  // (from the original)
    r2_4 = guest::cpu()->r[2];
    r3_5 = guest::cpu()->r[3];
    r1_2 = r0_13 - 0x400u;  // (from the original)
    S0_6 = std::bit_cast<float>(*global_006ee460);
    S1_4 = std::bit_cast<float>(*global_006ee464);
    S2_4 = std::bit_cast<float>(*global_006ee468);
    S3_4 = std::bit_cast<float>(*global_006ee46c);
    S4_4 = std::bit_cast<float>(*global_006ee470);
    r0_14 = r0_13 + 8u;
    r1_3 = r1_2 - 0x108u;  // (from the original)
    *gptr<u32>(r0_14) = u32(std::bit_cast<u32>(S0_6));
    *gptr<u32>(r0_14 + 4) = u32(std::bit_cast<u32>(S1_4));
    *gptr<u32>(r0_14 + 8) = u32(std::bit_cast<u32>(S2_4));
    *gptr<u32>(r0_14 + 0xc) = u32(std::bit_cast<u32>(S3_4));  // (from the original)
    *gptr<u32>(r0_14 + 0x10) = u32(std::bit_cast<u32>(S4_4));  // (from the original)
    *gptr<u8>(r0_14 + 0x14u) = u8(1u);  // (from the original)
    *gptr<u32>(r1_3 + 0x528u) = u32(0u);  // (from the original)
    r0_15 = r1_3 + 0x538u;  // (from the original)
    *gptr<u32>(r1_3 + 0x52cu) = u32(0u);  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_6;
    guest::cpu()->s[1] = S1_4;
    guest::cpu()->s[2] = S2_4;
    guest::cpu()->s[3] = S3_4;
    guest::cpu()->s[4] = S4_4;
    r0_16 = call_003166a8(r0_15, r1_3, r2_4, r3_5);
    r1_4 = guest::cpu()->r[1];
    S0_7 = guest::cpu()->s[0];
    S1_5 = guest::cpu()->s[1];
    r0_17 = r0_16 - 0x538u;  // (from the original)
    *gptr<u8>(r0_17 + 0x550u) = u8(0u);  // (from the original)
    *gptr<u8>(r0_17 + 0x551u) = u8(2u);  // (from the original)
    *gptr<u8>(r0_17 + 0x554u) = u8(0u);  // (from the original)
    *gptr<u8>(r0_17 + 0x555u) = u8(0u);  // (from the original)
    *gptr<u32>(r0_17 + 0x4acu) = u32(0u);  // (from the original)
    *gptr<u32>(r0_17 + 0x4b0u) = u32(0u);  // (from the original)
    *gptr<u32>(r0_17 + 0x4b4u) = u32(0u);  // (from the original)
    *gptr<u32>(r0_17 + 0x4b8u) = u32(0u);  // (from the original)
    *gptr<u32>(r0_17 + 0x4bcu) = u32(0u);  // (from the original)
    *gptr<u32>(r0_17 + 0x4c0u) = u32(0u);  // (from the original)
    *gptr<u32>(r0_17 + 0x4c4u) = u32(0u);  // (from the original)
    *gptr<u32>(r0_17 + 0x4c8u) = u32(0u);  // (from the original)
    *gptr<u32>(r0_17 + 0x4ccu) = u32(0u);  // (from the original)
    *gptr<u32>(r0_17 + 0x4d0u) = u32(0u);  // (from the original)
    *gptr<u32>(r0_17 + 0x4d4u) = u32(0u);  // (from the original)
    *gptr<u32>(r0_17 + 0x4d8u) = u32(0u);  // (from the original)
    *gptr<u8>(r0_17 + 0x4d8u) = u8(2u);  // (from the original)
    *gptr<u32>(r0_17 + 0x4e0u) = u32(0u);  // (from the original)
    *gptr<u32>(r0_17 + 0x4e4u) = u32(0u);  // (from the original)
    *gptr<u32>(r0_17 + 0x4e8u) = u32(0u);  // (from the original)
    *gptr<u32>(r0_17 + 0x4ecu) = u32(0u);  // (from the original)
    *gptr<u32>(r0_17 + 0x4f0u) = u32(0u);  // (from the original)
    *gptr<u32>(r0_17 + 0x4f4u) = u32(0u);  // (from the original)
    *gptr<u32>(r0_17 + 0x4f8u) = u32(0u);  // (from the original)
    *gptr<u32>(r0_17 + 0x4fcu) = u32(0u);  // (from the original)
    *gptr<u32>(r0_17 + 0x500u) = u32(0u);  // (from the original)
    *gptr<u32>(r0_17 + 0x504u) = u32(0u);  // (from the original)
    *gptr<u32>(r0_17 + 0x508u) = u32(0u);  // (from the original)
    *gptr<u32>(r0_17 + 0x50cu) = u32(0u);  // (from the original)
    *gptr<u8>(r0_17 + 0x50cu) = u8(2u);  // (from the original)
    *gptr<u8>(r0_17 + 0x474u) = u8(0x1du);  // (from the original)
    *gptr<u8>(r0_17 + 0x475u) = u8(0u);  // (from the original)
    *gptr<u8>(r0_17 + 0x4a8u) = u8(0u);  // (from the original)
    *gptr<u32>(r0_17 + 0x478u) = u32(0u);  // (from the original)
    *gptr<u32>(r0_17 + 0x47cu) = u32(0u);  // (from the original)
    *gptr<u32>(r0_17 + 0x480u) = u32(0u);  // (from the original)
    *gptr<u32>(r0_17 + 0x484u) = u32(0u);  // (from the original)
    *gptr<u32>(r0_17 + 0x488u) = u32(0u);  // (from the original)
    *gptr<u32>(r0_17 + 0x48cu) = u32(0u);  // (from the original)
    *gptr<u32>(r0_17 + 0x490u) = u32(0u);  // (from the original)
    *gptr<u32>(r0_17 + 0x494u) = u32(0u);  // (from the original)
    *gptr<u32>(r0_17 + 0x498u) = u32(0u);  // (from the original)
    *gptr<u32>(r0_17 + 0x49cu) = u32(0u);  // (from the original)
    *gptr<u32>(r0_17 + 0x4a0u) = u32(0u);  // (from the original)
    *gptr<u32>(r0_17 + 0x4a4u) = u32(0u);  // (from the original)
    *gptr<u8>(r0_17 + 0x4a4u) = u8(2u);  // (from the original)
    r13 = r13 + 0x10;  // (from the original)
    guest::cpu()->r[1] = r1_4;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_7;
    guest::cpu()->s[1] = S1_5;
    return r0_17;
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
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r1_1 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r1_2 = 0;
    u32 r0_5 = 0;
    guest::cpu()->r[13] -= 8u;
    arg0->word_0 = u32(0x8f969cu);  // (from the original)
    r0_1 = r0 + 0x538u;  // (from the original)
    r0_2 = call_002e6944(r0_1, 0x8f969cu, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    r1_1 = guest::cpu()->r[1];
    r0_3 = r0_2 - 0x500u;  // (from the original)
    r0_4 = call_002694b8(r0_3, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_2 = guest::cpu()->r[1];
    r0_5 = r0_4 - 0x38u;  // (from the original)
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1_2;
    return r0_5;
}

}  // namespace d_006ee4b8
GUEST_EXPORT(0x006ee4b8, d_006ee4b8::f_006ee4b8);

// f_006eedc8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006eedc8 {

inline constexpr guest::Function<0x002f8574, u32(u32, u32, u32, u32)> call_002f8574;  // (from the original)

u32 f_006eedc8(u32 r0, u32 r1, u32 r2) {
    u32 r3 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r12 = 0;
    u32 r13 = guest::cpu()->r[13];
    u32 ea_1 = 0;
    u32 ea_2 = 0;
    u32 ea_3 = 0;
    u32 ea_4 = 0;
    u32 res_1 = 0;
    u32 ea_5 = 0;
    u32 r9_1 = 0;
    u32 ea_6 = 0;
    u32 r10_1 = 0;
    u32 res_2 = 0;
    u32 r1_1 = 0;
    u32 r1_2 = 0;
    r13 = r13 - 0x20;  // (from the original)
    r6 = r0;
    r5 = 0xab7fc0u;  // (from the original)
    if (*gptr<u32>(r5 + 0xd0u) == 0) {  // (from the original)
        goto L_6eee64;
    }
    ea_1 = r5 + 0xd0u;  // (from the original)
    r3 = *gptr<u32>(ea_1);
    r0 = 0u;
    ea_2 = r5 + 0xd0u;  // (from the original)
    r4 = u32(*gptr<u8>(r3 + r2 + 2u));
    ea_3 = *gptr<u32>(ea_2);
    r7 = r4 << 3;
    r8 = u32(*gptr<u16>(ea_3)) + 2u;
    if (r2 == 0) {
        goto L_6eee3c;
    }
    r3 = r3 + 1u;
    if ((r2 & 1u) != 0) {
        ea_4 = r3 + 1u;
        r3 = ea_4;
        r0 = u32(*gptr<u8>(ea_4));
    }
    res_1 = r2 >> 1;
    r2 = res_1;
    r12 = 0u;
    if (res_1 == 0) {
        goto L_6eee38;
    }
    do {
L_6eee20:;
        ea_5 = r3 + 1u;
        r9_1 = u32(*gptr<u8>(ea_5));
        ea_6 = r3 + 2u;
        r3 = ea_6;
        r10_1 = u32(*gptr<u8>(ea_6));
        res_2 = r2 - 1u;
        r2 = res_2;
        r0 = r0 + r9_1;
        r12 = r12 + r10_1;
        guest::preempt();
    } while (res_2 != 0);
L_6eee38:;
    r0 = r0 + r12;
L_6eee3c:;
    if (r1 < r4 << 3) {
        goto L_6eee64;
    }
    r1_1 = *gptr<u32>(r5 + 0xd0u) + (r8 + (r0 << 3));  // (from the original)
    guest::cpu()->r[13] = r13;
    call_002f8574(r6, r1_1, r7, r3);
    r1_2 = guest::cpu()->r[1];
    r13 = r13 + 0x20;  // (from the original)
    guest::cpu()->r[1] = r1_2;
    guest::cpu()->r[13] = r13;
    return r4;
L_6eee64:;
    r13 = r13 + 0x20;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return 0u;
}

}  // namespace d_006eedc8
GUEST_EXPORT(0x006eedc8, d_006eedc8::f_006eedc8);

// f_006eeef4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006eeef4 {

inline guest::global<u32, 0x00957318> global_00957318;  // (from the original)
inline guest::global<u32, 0x00ac1850> global_00ac1850;  // (from the original)

u32 f_006eeef4() {
    u32 r0 = 0;
    u32 r1 = 0;
    u32 r2 = 0;
    u32 r3 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r12 = 0;
    u32 r4_1 = 0;
    u32 res_1 = 0;
    u32 r4_2 = 0;
    u32 res_2 = 0;
    r1 = 0xabe1a4u;  // (from the original)
    r2 = 0u;
    r3 = 0x63u;  // (from the original)
    r0 = r1 + 0x84u;  // (from the original)
    r12 = 8u;
    guest::cpu()->r[13] -= 8u;
    do {
L_6eef0c:;
        r4_1 = (r2 << 3) - r2;
        res_1 = r3 - 1u;
        r3 = res_1;
        r2 = r2 + 1u;
        r4_2 = r1 + (r4_1 + (r4_1 << 2) << 2);
        *gptr<u32>(r4_2 + 0x88u) = u32(r4_2 + 0x8cu);  // (from the original)
        *gptr<u8>(r0) = u8(r12);
        r0 = r0 + 0x8cu;  // (from the original)
        guest::preempt();
    } while (res_1 != 0);
    r2 = 0u;
    *global_00ac1850 = u32(r2);
    *gptr<u8>(0xac1850u - 4u) = u8(r12);  // (from the original)
    r12 = 0xac1854u;  // (from the original)
    r0 = r2;
    r3 = 0x1bu;  // (from the original)
    r4 = r12 + 0x6cu;  // (from the original)
    do {
L_6eef54:;
        *gptr<u32>(r12 + (r0 << 2)) = u32(r2);
        *gptr<u32>(r4 + (r0 << 2)) = u32(r2);
        res_2 = r3 - 1u;
        r3 = res_2;
        r0 = r0 + 1u;
        guest::preempt();
    } while (res_2 != 0);
    *global_00957318 = u32(r1);
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1;
    return 0x957318u;  // (from the original)
}

}  // namespace d_006eeef4
GUEST_EXPORT(0x006eeef4, d_006eeef4::f_006eeef4);

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
    u32 r1_1 = 0;
    u32 r3_1 = 0;
    u32 r1_2 = 0;
    u32 r2_1 = 0;
    u32 r3_2 = 0;
    u32 r1_3 = 0;
    r1_1 = u32(arg0->byte_84);
    if ((r1_1 & 0x10u) != 0) {  // (from the original)
        guest::cpu()->r[1] = r1_1;
        return r0;
    }
    if (u32(arg0->byte_85) >= 0x1bu) {  // (from the original)
        guest::cpu()->r[1] = r1_1;
        return r0;
    }
    arg0->byte_84 = u8(r1_1 | 0x10u);  // (from the original)
    r3_1 = u32(arg0->byte_85);
    r1_2 = 0xac1854u + 0x6cu;  // (from the original)
    arg0->word_88 = u32(*gptr<u32>(0xac1854u + (r3_1 << 2)));  // (from the original)
    *gptr<u32>(0xac1854u + (r3_1 << 2)) = u32(r0);  // (from the original)
    r2_1 = u32(arg0->byte_85);
    r3_2 = *gptr<u32>(r1_2 + (r2_1 << 2));
    if (r3_2 == 0) {
        *gptr<u32>(r1_2 + (r2_1 << 2)) = u32(r0);
    }
    r1_3 = u32(arg0->byte_84);
    if ((r1_3 & 1u) == 0) {
        guest::cpu()->r[1] = r1_3;
        return r0;
    }
    if ((r1_3 & 0x20u) != 0) {  // (from the original)
        guest::cpu()->r[1] = r1_3;
        return r0;
    }
    return call_0028f7fc(r0, r1_3, r2_1, r3_2);
}

}  // namespace d_006ef0a0
GUEST_EXPORT(0x006ef0a0, d_006ef0a0::f_006ef0a0);

// f_006ef39c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006ef39c {

inline guest::global<u32, 0x006ef480> global_006ef480;  // (from the original)
inline guest::global<u32, 0x006ef484> global_006ef484;  // (from the original)
inline guest::global<u32, 0x00957318> global_00957318;  // (from the original)
inline constexpr guest::Function<0x0028f7fc, u32(u32, u32, u32, u32)> call_0028f7fc;  // (from the original)
inline constexpr guest::Function<0x006ef4d8, u32(u32, u32, u32, u32)> call_006ef4d8;  // (from the original)

u32 f_006ef39c(u32 r0, u32 r1, u32 r2, u32 r3, float S0_unused, float S1_unused, float S2_unused, float S3) {
    u32 r13 = guest::cpu()->r[13];
    u32 fpsr = guest::cpu()->fpscr;
    u32 r4_1 = 0;
    float S6_1 = 0;
    float S5_1 = 0;
    float S4_1 = 0;
    u32 fpsr_1 = 0;
    u32 fpsr_2 = 0;
    float S3_1 = 0;
    float S4_2 = 0;
    float S5_2 = 0;
    float S6_2 = 0;
    u32 r1_1 = 0;
    u32 r1_2 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r1_3 = 0;
    r13 = r13 - 0x10u;  // (from the original)
    r4_1 = *global_00957318;
    S6_1 = std::bit_cast<float>(*gptr<u32>(r13 + 0x10u));  // (from the original)
    if (r4_1 == 0) {
        r13 = r13 + 0x10u;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    S5_1 = std::bit_cast<float>(*global_006ef484);
    *global_00957318 = u32(std::bit_cast<u32>(std::bit_cast<float>(*gptr<u32>(r4_1 + 0x88u))));  // (from the original)
    S4_1 = std::bit_cast<float>(*global_006ef480);
    fpsr_1 = fpsr & 0xfffffffu | vfp_cmpf(S3, S4_1);  // (from the original)
    if (!(fpsr_1 >> 0x1d & 1)) {  // (from the original)
        S3 = S4_1;
        goto L_6ef3e4;
    }
    fpsr_2 = fpsr_1 & 0xfffffffu | vfp_cmpf(S3, S5_1);  // (from the original)
    if (!(fpsr_2 >> 0x1e & 1) && fpsr_2 >> 0x1f == (fpsr_2 >> 0x1c & 1)) {  // (from the original)
        S3 = S5_1;
    }
L_6ef3e4:;
    *gptr<u32>(r4_1 + 0x7cu) = u32(std::bit_cast<u32>(S3));  // (from the original)
    *gptr<u32>(r13) = u32(r3);
    *gptr<u32>(r13 + 4u) = u32(std::bit_cast<u32>(S6_1));
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[3] = S3;
    guest::cpu()->s[4] = S4_1;
    guest::cpu()->s[5] = S5_1;
    guest::cpu()->s[6] = S6_1;
    call_006ef4d8(r4_1, r0, r1, r2);
    S3_1 = guest::cpu()->s[3];
    S4_2 = guest::cpu()->s[4];
    S5_2 = guest::cpu()->s[5];
    S6_2 = guest::cpu()->s[6];
    r1_1 = u32(*gptr<u8>(r4_1 + 0x84u));  // (from the original)
    if ((r1_1 & 0x10u) != 0) {  // (from the original)
        r13 = r13 + 0x10u;  // (from the original)
        guest::cpu()->r[1] = r1_1;
        guest::cpu()->r[13] = r13;
        return r4_1;
    }
    if (u32(*gptr<u8>(r4_1 + 0x85u)) >= 0x1bu) {  // (from the original)
        r13 = r13 + 0x10u;  // (from the original)
        guest::cpu()->r[1] = r1_1;
        guest::cpu()->r[13] = r13;
        return r4_1;
    }
    *gptr<u8>(r4_1 + 0x84u) = u8(r1_1 | 0x10u);  // (from the original)
    r1_2 = 0xac1854u + 0x6cu;  // (from the original)
    *gptr<u32>(r4_1 + 0x88u) = u32(*gptr<u32>(0xac1854u + (u32(*gptr<u8>(r4_1 + 0x85u)) << 2)));  // (from the original)
    *gptr<u32>(0xac1854u + (u32(*gptr<u8>(r4_1 + 0x85u)) << 2)) = u32(r4_1);  // (from the original)
    r2_1 = u32(*gptr<u8>(r4_1 + 0x85u));  // (from the original)
    r3_1 = *gptr<u32>(r1_2 + (r2_1 << 2));
    if (r3_1 == 0) {
        *gptr<u32>(r1_2 + (r2_1 << 2)) = u32(r4_1);
    }
    r1_3 = u32(*gptr<u8>(r4_1 + 0x84u));  // (from the original)
    if ((r1_3 & 1u) == 0) {
        r13 = r13 + 0x10u;  // (from the original)
        guest::cpu()->r[1] = r1_3;
        guest::cpu()->r[13] = r13;
        return r4_1;
    }
    if ((r1_3 & 0x20u) != 0) {  // (from the original)
        r13 = r13 + 0x10u;  // (from the original)
        guest::cpu()->r[1] = r1_3;
        guest::cpu()->r[13] = r13;
        return r4_1;
    }
    r13 = r13 + 0x10u;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[3] = S3_1;
    guest::cpu()->s[4] = S4_2;
    guest::cpu()->s[5] = S5_2;
    guest::cpu()->s[6] = S6_2;
    return call_0028f7fc(r4_1, r1_3, r2_1, r3_1);
}

}  // namespace d_006ef39c
GUEST_EXPORT(0x006ef39c, d_006ef39c::f_006ef39c);

// f_006ef48c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006ef48c {

inline guest::global<u32, 0x006ef4d4> global_006ef4d4;  // (from the original)
inline guest::global<u32, 0x00957318> global_00957318;  // (from the original)

u32 f_006ef48c(float S0) {
    u32 r0_1 = 0;
    float S0_1 = 0;
    r0_1 = *global_00957318;
    if (r0_1 == 0) {
        guest::cpu()->r[1] = 0x957318u;  // (from the original)
        guest::cpu()->s[0] = S0;
        return r0_1;
    }
    S0_1 = std::bit_cast<float>(*global_006ef4d4);
    *gptr<u8>(r0_1 + 0x84u) = u8(u32(*gptr<u8>(r0_1 + 0x84u)) & ~0x20u | 5u);  // (from the original)
    *global_00957318 = u32(*gptr<u32>(*global_00957318 + 0x88u));  // (from the original)
    *gptr<u16>(r0_1 + 0x82u) = u16(~0u);  // (from the original)
    *gptr<u32>(r0_1 + 0x7cu) = u32(std::bit_cast<u32>(S0_1));  // (from the original)
    *gptr<u32>(r0_1 + 0x38u) = u32(std::bit_cast<u32>(S0_1));  // (from the original)
    guest::cpu()->r[1] = 0x957318u;  // (from the original)
    guest::cpu()->s[0] = S0_1;
    return r0_1;
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

inline guest::global<u32, 0x00957318> global_00957318;  // (from the original)

void f_006ef61c(gptr<Object_006ef61c_0> arg0, u32 r1) {
    u32 r0 = arg0.addr();
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    if (r0 == 0) {
        guest::cpu()->r[1] = r1;
        return;
    }
    r1_1 = u32(arg0->byte_84);
    r2_1 = r1_1 & ~0x24u;  // (from the original)
    arg0->byte_84 = u8(r2_1);
    if ((r2_1 & 0x10u) != 0) {  // (from the original)
        guest::cpu()->r[1] = r1_1;
        return;
    }
    arg0->word_88 = u32(*global_00957318);
    *global_00957318 = u32(r0);
    guest::cpu()->r[1] = 0x957318u;  // (from the original)
    return;
}

}  // namespace d_006ef61c
GUEST_EXPORT(0x006ef61c, d_006ef61c::f_006ef61c);

// f_006ef650: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006ef650 {


u32 f_006ef650(u32 r0_unused, u32 r1) {
    u32 r0 = 0;
    u32 r3 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 zf_1 = 0;
    u32 r12_1 = 0;
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    guest::cpu()->r[13] -= 0x14u;  // (from the original)
    r3 = 0u;
    r6 = r3;
    r5 = 0xac18c0u;  // (from the original)
    r4 = 0x957318u;  // (from the original)
    r7 = r5 - 0x6cu;  // (from the original)
L_6ef668:;
    r0 = *gptr<u32>(r5 + (r3 << 2));
    zf_1 = r0 == 0;
    if (!zf_1) {
        r0 = *gptr<u32>(r7 + (r3 << 2));
        zf_1 = r0 == 0;
    }
    if (zf_1) {
        goto L_6ef6bc;
    }
L_6ef67c:;
    r12_1 = r0 + 0x84u;  // (from the original)
    r1_1 = u32(*gptr<u8>(r0 + 0x84u));  // (from the original)
    r2_1 = r0;
    r0 = *gptr<u32>(r0 + 0x88u);  // (from the original)
    r1 = r1_1 & ~0x30u;  // (from the original)
    *gptr<u8>(r12_1) = u8(r1);
    if ((r1 & 8u) == 0) {
        goto L_6ef6b4;
    }
    if ((r1 & 4u) != 0) {
        goto L_6ef6b4;
    }
    r1 = *gptr<u32>(r4);
    *gptr<u32>(r2_1 + 0x88u) = u32(r1);  // (from the original)
    *gptr<u32>(r4) = u32(r2_1);
L_6ef6b4:;
    if (r0 != 0) {
        guest::preempt();
        goto L_6ef67c;
    }
L_6ef6bc:;
    *gptr<u32>(r7 + (r3 << 2)) = u32(r6);
    *gptr<u32>(r5 + (r3 << 2)) = u32(r6);
    r3 = r3 + 1u;
    if (s32(r3) < s32(0x1bu)) {  // (from the original)
        guest::preempt();
        goto L_6ef668;
    }
    guest::cpu()->r[13] += 0x14u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_006ef650
GUEST_EXPORT(0x006ef650, d_006ef650::f_006ef650);

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
    u32 r2_1 = 0;
    u32 r1_1 = 0;
    u32 r3_1 = 0;
    u32 r0_1 = 0;
    u32 r1_2 = 0;
    u32 r2_2 = 0;
    u32 r0_2 = 0;
    u32 r3_2 = 0;
    u32 r0_3 = 0;
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
    u32 r0_7 = 0;
    u32 r2_6 = 0;
    u32 r0_8 = 0;
    u32 r6_1 = 0;
    u32 r0_9 = 0;
    u32 r0_10 = 0;
    u32 r0_11 = 0;
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
        r2_1 = r10 + (r1 << 2);
        r1_1 = r1 + 1u;
        r0 = r0 + 2u;
        r3_1 = r10 + (r1_1 << 2);
        *gptr<u32>(r2_1 + 4u) = u32(r4);
        r1 = r1_1 + 1u;
        *gptr<u32>(r3_1 + 4u) = u32(r4);
        guest::preempt();
    } while (r0 < r6);
    *gptr<u8>(r10) = u8(0x9bu);  // (from the original)
    r9 = 0u;
    guest::cpu()->r[13] = r13;
    r0_1 = call_005359fc(r8, r1, r2_1, r3_1);
    r1_2 = guest::cpu()->r[1];
    r3 = guest::cpu()->r[3];
    r7 = *gptr<u32>(r0_1 + 4u);
    if (r7 <= r6) {
        goto L_6ef99c;
    }
    r0 = 1u;
    r1 = r0;
    *gptr<u32>(r10 + 4u) = u32(r4);
    do {
L_6ef964:;
        r2_2 = r10 + (r0 << 2);
        r0_2 = r0 + 1u;
        r1 = r1 + 2u;
        r3_2 = r10 + (r0_2 << 2);
        *gptr<u32>(r2_2 + 4u) = u32(r4);
        r0 = r0_2 + 1u;
        *gptr<u32>(r3_2 + 4u) = u32(r4);
        guest::preempt();
    } while (r1 < r6);
    *gptr<u8>(r10) = u8(0x9bu);  // (from the original)
    r13 = r13 + 0x30u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return 0u;
L_6ef99c:;
    r4 = 0u;
    if (r7 < 0u || r7 == 0) {
        goto L_6efa54;
    }
L_6ef9a8:;
    r0_3 = r13;
    guest::cpu()->r[13] = r13;
    call_006bbd54(r0_3, r8, r4, r3);
    r2_3 = guest::cpu()->r[2];
    r3_3 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0_4 = call_006b9b30(r8, r4, r2_3, r3_3);
    r2_4 = guest::cpu()->r[2];
    r3_4 = guest::cpu()->r[3];
    r0_5 = r13 + 4u;
    guest::cpu()->r[13] = r13;
    call_002fcbb0(r0_5, r0_4, r2_4, r3_4);
    r1_3 = guest::cpu()->r[1];
    r2_5 = guest::cpu()->r[2];
    r3_5 = guest::cpu()->r[3];
    r0_6 = r13 + 4u;
    guest::cpu()->r[13] = r13;
    r0_7 = call_00768da0(r0_6, r1_3, r2_5, r3_5);
    r1_2 = guest::cpu()->r[1];
    r2_6 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0_7 >> 0x1f != (r0_7 & (r0_7 ^ r0_7)) >> 0x1f) {  // (from the original)
        goto L_6efa08;
    }
    r1_2 = u32(s32(r0_7) >> 5);
    r0_8 = r0_7 & 0x1fu;  // (from the original)
    if (r1_2 >= 0xbau) {  // (from the original)
        goto L_6efa08;
    }
    r1_2 = *gptr<u32>(r5 + (r1_2 << 2));
    r6_1 = lsr_r(r1_2, r0_8 & 0xff) & 1u;  // (from the original)
    goto L_6efa0c;
L_6efa08:;
    r6_1 = 0u;
L_6efa0c:;
    if (r6_1 == 0) {
        goto L_6efa40;
    }
    r0_9 = r13;
    guest::cpu()->r[13] = r13;
    r0_10 = call_00768248(r0_9, r1_2, r2_6, r3);
    r1_2 = guest::cpu()->r[1];
    r3 = guest::cpu()->r[3];
    if (r0_10 != r11) {
        goto L_6efa40;
    }
    r0_11 = r10 + (r9 << 2);
    r9 = r9 + 1u;
    *gptr<u32>(r0_11 + 4u) = u32(r4);
L_6efa40:;
    r4 = r4 + 1u;
    if (r7 > r4) {
        guest::preempt();
        goto L_6ef9a8;
    }
L_6efa54:;
    *gptr<u8>(r10) = u8(r8);
    r13 = r13 + 0x30u;  // (from the original)
    guest::cpu()->r[1] = r1_2;
    guest::cpu()->r[13] = r13;
    return 1u;
}

}  // namespace d_006ef8e8
GUEST_EXPORT(0x006ef8e8, d_006ef8e8::f_006ef8e8);

// f_006efa68: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006efa68 {

struct __attribute__((packed)) Object_006efa68_0 {
    u8 byte_0;
    u8 unknown_1[0x3];  // (not used here)
    u32 word_4;
};
GUEST_OFFSET(Object_006efa68_0, byte_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_006efa68_0, word_4, 0x4);  // (from the original)


void f_006efa68(gptr<Object_006efa68_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r1 = 0;
    u32 r2 = 0;
    u32 r3 = 0;
    u32 r12 = 0;
    u32 r4_1 = 0;
    u32 r3_1 = 0;
    u32 r5_1 = 0;
    r12 = 0x6edu;  // (from the original)
    r1 = ~0u;
    r3 = 1u;
    guest::cpu()->r[13] -= 8u;
    r2 = r3;
    arg0->word_4 = u32(r1);
    do {
L_6efa80:;
        r4_1 = r0 + (r3 << 2);
        r3_1 = r3 + 1u;
        r2 = r2 + 2u;
        r5_1 = r0 + (r3_1 << 2);
        *gptr<u32>(r4_1 + 4u) = u32(r1);
        r3 = r3_1 + 1u;
        *gptr<u32>(r5_1 + 4u) = u32(r1);
        guest::preempt();
    } while (r2 < r12);
    arg0->byte_0 = u8(0x9bu);  // (from the original)
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = 0x9bu;  // (from the original)
    return;
}

}  // namespace d_006efa68
GUEST_EXPORT(0x006efa68, d_006efa68::f_006efa68);

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
    u32 r0 = arg0.addr();
    u32 r4 = guest::cpu()->r[4];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r9 = guest::cpu()->r[9];
    u32 r10 = guest::cpu()->r[10];
    u32 r11 = guest::cpu()->r[11];
    u32 r12 = guest::cpu()->r[12];
    u32 r13 = guest::cpu()->r[13];
    u32 r4_1 = 0;
    u32 r2_1 = 0;
    u32 r1_1 = 0;
    u32 r2_2 = 0;
    u32 r3_1 = 0;
    u32 r0_1 = 0;
    u32 r1_2 = 0;
    u32 zf_1 = 0;
    u32 cf_1 = 0;
    u32 r5_1 = 0;
    u32 r1_3 = 0;
    u32 r2_3 = 0;
    u32 r1_4 = 0;
    u32 r2_4 = 0;
    u32 r3_2 = 0;
    u32 r0_2 = 0;
    u32 r2_5 = 0;
    u32 r3_3 = 0;
    u32 res_1 = 0;
    *gptr<u32>(r13 + 0xfffffff8u) = u32(r12);  // (from the original)
    r13 = r13 - 0x1be8u;  // (from the original)
    r6 = r0;
    r9 = r1;
    r4_1 = u32(arg0->byte_0);
    if (r4_1 == 0x9bu) {  // (from the original)
        goto L_6efbb4;
    }
    r11 = r13;
    r2_1 = ~0u;
    guest::cpu()->r[13] = r13;
    call_0013fac4(r11, 0x1bb4u, r2_1, r3);  // (from the original)
    r1_1 = guest::cpu()->r[1];
    r2_2 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    r7 = 0u;
    guest::cpu()->r[13] = r13;
    r0_1 = call_005359fc(r4_1, r1_1, r2_2, r3_1);
    r3 = guest::cpu()->r[3];
    r1_2 = r6 + (*gptr<u32>(r0_1 + 4u) << 2);
    r0 = r6 + 4u;
    r1 = r1_2 + 4u;
    if (r1 <= r0) {
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
    } while (r1 > r0);
L_6efb28:;
    zf_1 = r7 == 0;
    cf_1 = r7 >= 0u;
    if (cf_1 && !zf_1) {
        r8 = r13 + 0x1800u;  // (from the original)
    }
    r4 = 0u;
    if (cf_1 && !zf_1) {
        r10 = ~0u;
        r8 = r8 + 0x3b4u;  // (from the original)
    }
    if (!cf_1 || zf_1) {
        goto L_6efb88;
    }
    do {
L_6efb40:;
        r5_1 = r6 + (r4 << 2);
        r1_3 = u32(*gptr<u8>(r6));
        r2_3 = *gptr<u32>(r5_1 + 4u);
        guest::cpu()->r[13] = r13;
        call_006bbd54(r8, r1_3, r2_3, r3);
        r1_4 = guest::cpu()->r[1];
        r2_4 = guest::cpu()->r[2];
        r3_2 = guest::cpu()->r[3];
        guest::cpu()->r[13] = r13;
        r0_2 = call_00768248(r8, r1_4, r2_4, r3_2);
        r3 = guest::cpu()->r[3];
        if (r0_2 == r9) {
            *gptr<u32>(r5_1 + 4u) = u32(r10);
        }
        *gptr<u32>(r11 + (r4 << 2)) = u32(*gptr<u32>(r5_1 + 4u));
        *gptr<u32>(r5_1 + 4u) = u32(r10);
        r4 = r4 + 1u;
        guest::preempt();
    } while (r4 < r7);
L_6efb88:;
    r1 = 0x6edu;  // (from the original)
    r0 = 0u;
    do {
L_6efb90:;
        r2_5 = *gptr<u32>(r11);
        if (!(r2_5 + 1u == 0)) {
            r3_3 = r6 + (r0 << 2);
            r0 = r0 + 1u;
            *gptr<u32>(r3_3 + 4u) = u32(r2_5);
        }
        res_1 = r1 - 1u;
        r1 = res_1;
        r11 = r11 + 4u;
        guest::preempt();
    } while (res_1 != 0);
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
    u32 r13 = guest::cpu()->r[13];
    u32 r1_1 = 0;
    u32 res_1 = 0;
    r13 = r13 - 4u;
    r1_1 = *gptr<u32>(r13 + 4u);
    arg0->byte_8 = u8(u32(arg0->byte_8) | 1u);
    res_1 = arg0->word_0 ^ r2 | arg0->word_4 ^ r3;
    if (res_1 == 0) {
        r13 = r13 + 4u;
        guest::cpu()->r[1] = r1_1;
        guest::cpu()->r[13] = r13;
        return;
    }
    arg0->word_0 = u32(r2);
    arg0->word_4 = u32(r3);
    if (r1_1 != 0) {
        r1_1 = 0u;
        arg0->byte_9 = u8(r1_1);
    }
    r13 = r13 + 4u;
    guest::cpu()->r[1] = r1_1;
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
    u32 r3_1 = 0;
    u32 r1_1 = 0;
    r3_1 = arg1->word_4;
    arg0->word_0 = u32(arg1->word_0);
    arg0->word_4 = u32(r3_1);
    arg0->byte_9 = u8(u32(arg1->byte_9));
    r1_1 = u32(arg1->byte_8);
    arg0->byte_8 = u8(r1_1);
    guest::cpu()->r[1] = r1_1;
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
    arg0->word_0 = u32(0u);
    arg0->word_4 = u32(0u);
    arg0->byte_9 = u8(0u);
    arg0->byte_8 = u8(0u);
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
    arg0->word_0 = u32(0u);
    arg0->word_4 = u32(0u);
    arg0->byte_9 = u8(0u);
    arg0->byte_8 = u8(0u);
    return;
}

}  // namespace d_006efd24
GUEST_EXPORT(0x006efd24, d_006efd24::f_006efd24);

// f_006efd40: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006efd40 {

inline constexpr guest::Function<0x002fc8e8, u32(u32, u32, u32, u32)> call_002fc8e8;  // (from the original)
inline constexpr guest::Function<0x0057bc2c, u32(u32, u32, u32, u32)> call_0057bc2c;  // (from the original)

u32 f_006efd40(u32 r0) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r0_2 = 0;
    guest::cpu()->r[13] -= 0x18u;  // (from the original)
    r5 = 0u;
    r8 = r0;
L_6efd4c:;
    r4 = 0u;
    r7 = r8 + (r5 << 6);
    do {
L_6efd54:;
        r0_1 = call_0057bc2c(r4, r5, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1_1 = guest::cpu()->r[1];
        if (!(r0_1 == 0)) {
            r0_2 = r7 + (r4 << 2);
            r0_1 = call_002fc8e8(r0_2, 0x95bfd2u, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
            r1_1 = guest::cpu()->r[1];
        }
        r4 = r4 + 1u;
        guest::preempt();
    } while (r4 < 0x10u);  // (from the original)
    r5 = r5 + 1u;
    if (r5 < 0x10u) {  // (from the original)
        guest::preempt();
        goto L_6efd4c;
    }
    guest::cpu()->r[13] += 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1_1;
    return r0_1;
}

}  // namespace d_006efd40
GUEST_EXPORT(0x006efd40, d_006efd40::f_006efd40);

// f_006efd9c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006efd9c {


u32 f_006efd9c() {
    return guest::call_address<u32>(0x301d0du, guest::cpu()->r[0], 0x2fc20cu, 4u, 0x100u);  // (from the original)
}

}  // namespace d_006efd9c
GUEST_EXPORT(0x006efd9c, d_006efd9c::f_006efd9c);

// f_006efdb0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006efdb0 {

inline constexpr guest::Function<0x006f0450, u32(u32, u32, u32, u32)> call_006f0450;  // (from the original)

u32 f_006efdb0(u32 r0, u32 r1_unused, u32 r2_unused, u32 r3) {
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r3_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r3_2 = 0;
    u32 cf_1 = 0;
    u32 r0_5 = 0;
    u32 r3_3 = 0;
    u32 r0_6 = 0;
    u32 r3_4 = 0;
    u32 r0_7 = 0;
    u32 r3_5 = 0;
    u32 r0_8 = 0;
    u32 r3_6 = 0;
    u32 r0_9 = 0;
    u32 r3_7 = 0;
    u32 cf_2 = 0;
    u32 r0_10 = 0;
    u32 r3_8 = 0;
    u32 r0_11 = 0;
    u32 r3_9 = 0;
    u32 r0_12 = 0;
    u32 r3_10 = 0;
    u32 cf_3 = 0;
    u32 r0_13 = 0;
    u32 r3_11 = 0;
    u32 r0_14 = 0;
    u32 r3_12 = 0;
    u32 r0_15 = 0;
    u32 r3_13 = 0;
    u32 cf_4 = 0;
    u32 r0_16 = 0;
    u32 r3_14 = 0;
    u32 r0_17 = 0;
    u32 r3_15 = 0;
    u32 cf_5 = 0;
    u32 r0_18 = 0;
    u32 r3_16 = 0;
    u32 r0_19 = 0;
    u32 r3_17 = 0;
    guest::cpu()->r[13] -= 0x24u;  // (from the original)
    r0_1 = call_006f0450(r0, 0xeu, guest::cpu()->r[2], r3);  // (from the original)
    r1_1 = guest::cpu()->r[1];
    r3_1 = guest::cpu()->r[3];
    if (r0_1 >= 0xau) {  // (from the original)
        r0_2 = 3u;
        goto L_6f0010;
    }
    r0_3 = call_006f0450(r0, 0xcu, guest::cpu()->r[2], r3_1);  // (from the original)
    r0_4 = call_006f0450(r0, 8u, guest::cpu()->r[2], r0_3);
    r1_1 = guest::cpu()->r[1];
    r3_2 = guest::cpu()->r[3];
    cf_1 = r3_2 >= 0xfu;  // (from the original)
    if (cf_1) {
        cf_1 = r0_4 >= 0xau;  // (from the original)
    }
    if (cf_1) {
        r0_2 = 4u;
        goto L_6f0010;
    }
    if (r3_2 >= 0x14u) {  // (from the original)
        r0_2 = 5u;
        goto L_6f0010;
    }
    if (r0_4 >= 0x14u) {  // (from the original)
        r0_2 = 6u;
        goto L_6f0010;
    }
    r0_5 = call_006f0450(r0, 5u, guest::cpu()->r[2], r3_2);
    r1_1 = guest::cpu()->r[1];
    r3_3 = guest::cpu()->r[3];
    if (r0_5 >= 0x14u) {  // (from the original)
        r0_2 = 7u;
        goto L_6f0010;
    }
    r0_6 = call_006f0450(r0, 0xbu, guest::cpu()->r[2], r3_3);  // (from the original)
    r1_1 = guest::cpu()->r[1];
    r3_4 = guest::cpu()->r[3];
    if (r0_6 >= 0x96u) {  // (from the original)
        r0_2 = 8u;
        goto L_6f0010;
    }
    r0_7 = call_006f0450(r0, 0x11u, guest::cpu()->r[2], r3_4);  // (from the original)
    r1_1 = guest::cpu()->r[1];
    r3_5 = guest::cpu()->r[3];
    if (r0_7 >= 0xau) {  // (from the original)
        r0_2 = 9u;
        goto L_6f0010;
    }
    r0_8 = call_006f0450(r0, 0u, guest::cpu()->r[2], r3_5);
    r3_6 = guest::cpu()->r[3];
    r0_9 = call_006f0450(r0, 1u, guest::cpu()->r[2], r3_6);
    r1_1 = guest::cpu()->r[1];
    r3_7 = guest::cpu()->r[3];
    cf_2 = r0_8 >= 0x46u;  // (from the original)
    if (cf_2) {
        cf_2 = r0_9 >= 0x46u;  // (from the original)
    }
    if (cf_2) {
        r0_2 = 0xau;  // (from the original)
        goto L_6f0010;
    }
    r0_10 = call_006f0450(r0, 2u, guest::cpu()->r[2], r3_7);
    r1_1 = guest::cpu()->r[1];
    r3_8 = guest::cpu()->r[3];
    if (r0_10 >= 0x32u) {  // (from the original)
        r0_2 = 0xbu;  // (from the original)
        goto L_6f0010;
    }
    if (r0_8 >= 0x64u) {  // (from the original)
        r0_2 = 0xcu;  // (from the original)
        goto L_6f0010;
    }
    if (r0_9 >= 0x64u) {  // (from the original)
        r0_2 = 0xdu;  // (from the original)
        goto L_6f0010;
    }
    r0_11 = call_006f0450(r0, 6u, guest::cpu()->r[2], r3_8);
    r3_9 = guest::cpu()->r[3];
    r0_12 = call_006f0450(r0, 7u, guest::cpu()->r[2], r3_9);
    r3_10 = guest::cpu()->r[3];
    r1_1 = 0xc350u;  // (from the original)
    cf_3 = r0_11 >= r1_1;
    if (cf_3) {
        r1_1 = r1_1 << 2;
        cf_3 = r0_12 >= r1_1;
    }
    if (cf_3) {
        r0_2 = 0xeu;  // (from the original)
        goto L_6f0010;
    }
    r1_1 = 0x186a0u;  // (from the original)
    if (r0_11 >= r1_1) {
        r0_2 = 0xfu;  // (from the original)
        goto L_6f0010;
    }
    r1_1 = 0x493e0u;  // (from the original)
    if (r0_12 >= r1_1) {
        r0_2 = 0x10u;  // (from the original)
        goto L_6f0010;
    }
    r0_13 = call_006f0450(r0, 0xdu, guest::cpu()->r[2], r3_10);  // (from the original)
    r1_1 = guest::cpu()->r[1];
    r3_11 = guest::cpu()->r[3];
    if (r0_13 >= 0x32u) {  // (from the original)
        r0_2 = 0x11u;  // (from the original)
        goto L_6f0010;
    }
    r0_14 = call_006f0450(r0, 3u, guest::cpu()->r[2], r3_11);
    r3_12 = guest::cpu()->r[3];
    r0_15 = call_006f0450(r0, 4u, guest::cpu()->r[2], r3_12);
    r1_1 = guest::cpu()->r[1];
    r3_13 = guest::cpu()->r[3];
    cf_4 = r0_14 >= 0xau;  // (from the original)
    if (cf_4) {
        cf_4 = r0_15 >= 0xfu;  // (from the original)
    }
    if (cf_4) {
        r0_2 = 0x12u;  // (from the original)
        goto L_6f0010;
    }
    r0_16 = call_006f0450(r0, 9u, guest::cpu()->r[2], r3_13);
    r3_14 = guest::cpu()->r[3];
    r0_17 = call_006f0450(r0, 0xau, guest::cpu()->r[2], r3_14);  // (from the original)
    r1_1 = guest::cpu()->r[1];
    r3_15 = guest::cpu()->r[3];
    cf_5 = r0_16 >= 0x1eu;  // (from the original)
    if (cf_5) {
        cf_5 = r0_17 >= 0xau;  // (from the original)
    }
    if (cf_5) {
        r0_2 = 0x13u;  // (from the original)
        goto L_6f0010;
    }
    if (r0_16 >= 0x32u) {  // (from the original)
        r0_2 = 0x14u;  // (from the original)
        goto L_6f0010;
    }
    if (r0_8 >= 0x46u) {  // (from the original)
        r0_2 = 0x15u;  // (from the original)
        goto L_6f0010;
    }
    if (r0_9 >= 0x46u) {  // (from the original)
        r0_2 = 0x16u;  // (from the original)
        goto L_6f0010;
    }
    if (r0_10 >= 0x1eu) {  // (from the original)
        r0_2 = 0x17u;  // (from the original)
        goto L_6f0010;
    }
    if (0x1388u >= r0_11) {  // (from the original)
        r0_2 = 0x18u;  // (from the original)
        goto L_6f0010;
    }
    if (r0_6 >= 0x64u) {  // (from the original)
        r0_2 = 0x19u;  // (from the original)
        goto L_6f0010;
    }
    r0_18 = call_006f0450(r0, 0xfu, guest::cpu()->r[2], r3_15);  // (from the original)
    r1_1 = guest::cpu()->r[1];
    r3_16 = guest::cpu()->r[3];
    if (r0_18 >= 0xfu) {  // (from the original)
        r0_2 = 0x1au;  // (from the original)
        goto L_6f0010;
    }
    r0_19 = call_006f0450(r0, 0x10u, guest::cpu()->r[2], r3_16);  // (from the original)
    r1_1 = guest::cpu()->r[1];
    r3_17 = guest::cpu()->r[3];
    if (r0_19 >= 0x384u) {  // (from the original)
        r0_2 = 0x1bu;  // (from the original)
        goto L_6f0010;
    }
    if ((r3_17 | r0_4) == 0) {
        r0_2 = 0x1cu;  // (from the original)
    } else {
        r0_2 = 0x31u;  // (from the original)
    }
L_6f0010:;
    guest::cpu()->r[13] += 0x24u;  // (from the original)
    guest::cpu()->r[1] = r1_1;
    return r0_2;
}

}  // namespace d_006efdb0
GUEST_EXPORT(0x006efdb0, d_006efdb0::f_006efdb0);
