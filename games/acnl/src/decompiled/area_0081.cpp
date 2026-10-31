// Functions decompiled by tools/decomp (docs/decomp.md), each proved equal to the recompiled original (prove-cpp). The
// names are generated (d_<address>::f_<address>, Object_<address>_<argument>, word_<offset>) and still to be chosen.
#include "guest/guest.hpp"

#include <bit>

using guest::gptr;

// f_00810aa0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00810aa0 {

struct __attribute__((packed)) Object_00810aa0_0 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
};
GUEST_OFFSET(Object_00810aa0_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_00810aa0_0, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_00810aa0_0, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Object_00810aa0_0, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Object_00810aa0_0, word_10, 0x10);  // (from the original)

inline constexpr guest::Function<0x00540c1c, u32(u32, u32, u32, u32)> call_00540c1c;  // (from the original)

u32 f_00810aa0(gptr<Object_00810aa0_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r1 = 0;
    u32 r2 = 0;
    u32 r3 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r8 = guest::cpu()->r[8];
    u32 r12 = 0;
    u32 res_1 = 0;
    u32 res_2 = 0;
    u32 r7_1 = 0;
    u32 r3_1 = 0;
    u32 r2_1 = 0;
    guest::cpu()->r[13] -= 0x18u;  // (from the original)
    r4 = r0;
    r8 = 0u;
    arg0->word_0 = u32(r8);
    arg0->word_4 = u32(r8);
    arg0->word_8 = u32(r8);
    arg0->word_c = u32(r8);
    res_1 = r4 + 0x14u;  // (from the original)
    r2 = res_1;
    arg0->word_10 = u32(r8);
    r0 = r4;
    r1 = 0x14u;  // (from the original)
    if (res_1 == 0) {
        goto L_810b14;
    }
    r12 = 2u;
    r3 = 0u;
    r5 = 0x13u;  // (from the original)
    arg0->word_c = u32(r2);
    do {
L_810ae0:;
        res_2 = r5 - 1u;
        r5 = res_2;
        r7_1 = r2 + (r12 + r3 << 2);
        *gptr<u32>(r2 + (r3 << 2)) = u32(r7_1);
        r3 = r3 + r12;
        guest::preempt();
    } while (res_2 != 0);
    r3_1 = r1 << 3;
    *gptr<u32>(r2 + (r12 * (r1 - 1u) << 2)) = u32(r8);
    *gptr<u32>(r0 + 0x10u) = u32(r2);  // (from the original)
    r2_1 = r2 + r3_1;
    call_00540c1c(r0, r1, r2_1, r3_1);
    r1 = guest::cpu()->r[1];
L_810b14:;
    guest::cpu()->r[13] += 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r4;
}

}  // namespace d_00810aa0
GUEST_EXPORT(0x00810aa0, d_00810aa0::f_00810aa0);

// f_00810b1c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00810b1c {

struct __attribute__((packed)) Object_00810b1c_0 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
};
GUEST_OFFSET(Object_00810b1c_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_00810b1c_0, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_00810b1c_0, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Object_00810b1c_0, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Object_00810b1c_0, word_10, 0x10);  // (from the original)

inline constexpr guest::Function<0x00540c1c, u32(u32, u32, u32, u32)> call_00540c1c;  // (from the original)

u32 f_00810b1c(gptr<Object_00810b1c_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r1 = 0;
    u32 r2 = 0;
    u32 r3 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r8 = guest::cpu()->r[8];
    u32 r12 = 0;
    u32 res_1 = 0;
    u32 res_2 = 0;
    u32 r7_1 = 0;
    u32 r3_1 = 0;
    u32 r2_1 = 0;
    guest::cpu()->r[13] -= 0x18u;  // (from the original)
    r4 = r0;
    r8 = 0u;
    arg0->word_0 = u32(r8);
    arg0->word_4 = u32(r8);
    arg0->word_8 = u32(r8);
    arg0->word_c = u32(r8);
    res_1 = r4 + 0x14u;  // (from the original)
    r2 = res_1;
    arg0->word_10 = u32(r8);
    r0 = r4;
    r1 = 0x100u;  // (from the original)
    if (res_1 == 0) {
        goto L_810b90;
    }
    r12 = 2u;
    r3 = 0u;
    r5 = 0xffu;  // (from the original)
    arg0->word_c = u32(r2);
    do {
L_810b5c:;
        res_2 = r5 - 1u;
        r5 = res_2;
        r7_1 = r2 + (r12 + r3 << 2);
        *gptr<u32>(r2 + (r3 << 2)) = u32(r7_1);
        r3 = r3 + r12;
        guest::preempt();
    } while (res_2 != 0);
    r3_1 = r1 << 3;
    *gptr<u32>(r2 + (r12 * (r1 - 1u) << 2)) = u32(r8);
    *gptr<u32>(r0 + 0x10u) = u32(r2);  // (from the original)
    r2_1 = r2 + r3_1;
    call_00540c1c(r0, r1, r2_1, r3_1);
    r1 = guest::cpu()->r[1];
L_810b90:;
    guest::cpu()->r[13] += 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r4;
}

}  // namespace d_00810b1c
GUEST_EXPORT(0x00810b1c, d_00810b1c::f_00810b1c);

// f_00810b98: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00810b98 {

struct __attribute__((packed)) Object_00810b98_0 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
};
GUEST_OFFSET(Object_00810b98_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_00810b98_0, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_00810b98_0, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Object_00810b98_0, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Object_00810b98_0, word_10, 0x10);  // (from the original)

inline constexpr guest::Function<0x00540c1c, u32(u32, u32, u32, u32)> call_00540c1c;  // (from the original)

u32 f_00810b98(gptr<Object_00810b98_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r1 = 0;
    u32 r2 = 0;
    u32 r3 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r8 = guest::cpu()->r[8];
    u32 r12 = 0;
    u32 res_1 = 0;
    u32 res_2 = 0;
    u32 r7_1 = 0;
    u32 r3_1 = 0;
    u32 r2_1 = 0;
    guest::cpu()->r[13] -= 0x18u;  // (from the original)
    r4 = r0;
    r8 = 0u;
    arg0->word_0 = u32(r8);
    arg0->word_4 = u32(r8);
    arg0->word_8 = u32(r8);
    arg0->word_c = u32(r8);
    res_1 = r4 + 0x14u;  // (from the original)
    r2 = res_1;
    arg0->word_10 = u32(r8);
    r0 = r4;
    r1 = 0x32u;  // (from the original)
    if (res_1 == 0) {
        goto L_810c0c;
    }
    r12 = 2u;
    r3 = 0u;
    r5 = 0x31u;  // (from the original)
    arg0->word_c = u32(r2);
    do {
L_810bd8:;
        res_2 = r5 - 1u;
        r5 = res_2;
        r7_1 = r2 + (r12 + r3 << 2);
        *gptr<u32>(r2 + (r3 << 2)) = u32(r7_1);
        r3 = r3 + r12;
        guest::preempt();
    } while (res_2 != 0);
    r3_1 = r1 << 3;
    *gptr<u32>(r2 + (r12 * (r1 - 1u) << 2)) = u32(r8);
    *gptr<u32>(r0 + 0x10u) = u32(r2);  // (from the original)
    r2_1 = r2 + r3_1;
    call_00540c1c(r0, r1, r2_1, r3_1);
    r1 = guest::cpu()->r[1];
L_810c0c:;
    guest::cpu()->r[13] += 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r4;
}

}  // namespace d_00810b98
GUEST_EXPORT(0x00810b98, d_00810b98::f_00810b98);

// f_00810c14: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00810c14 {

struct __attribute__((packed)) Object_00810c14_0 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
};
GUEST_OFFSET(Object_00810c14_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_00810c14_0, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_00810c14_0, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Object_00810c14_0, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Object_00810c14_0, word_10, 0x10);  // (from the original)

inline constexpr guest::Function<0x00540c1c, u32(u32, u32, u32, u32)> call_00540c1c;  // (from the original)

u32 f_00810c14(gptr<Object_00810c14_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r1 = 0;
    u32 r2 = 0;
    u32 r3 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r8 = guest::cpu()->r[8];
    u32 r12 = 0;
    u32 res_1 = 0;
    u32 res_2 = 0;
    u32 r7_1 = 0;
    u32 r3_1 = 0;
    u32 r2_1 = 0;
    guest::cpu()->r[13] -= 0x18u;  // (from the original)
    r4 = r0;
    r8 = 0u;
    arg0->word_0 = u32(r8);
    arg0->word_4 = u32(r8);
    arg0->word_8 = u32(r8);
    arg0->word_c = u32(r8);
    res_1 = r4 + 0x14u;  // (from the original)
    r6 = res_1;
    arg0->word_10 = u32(r8);
    r0 = r4;
    r1 = 0xau;  // (from the original)
    if (res_1 == 0) {
        goto L_810c90;
    }
    r2 = r6;
    r12 = 0x1eu;  // (from the original)
    r3 = 0u;
    r5 = 9u;
    arg0->word_c = u32(r6);
    do {
L_810c58:;
        res_2 = r5 - 1u;
        r5 = res_2;
        r7_1 = r2 + (r12 + r3 << 2);
        *gptr<u32>(r2 + (r3 << 2)) = u32(r7_1);
        r3 = r3 + r12;
        guest::preempt();
    } while (res_2 != 0);
    r3_1 = r12 * (r1 - 1u);
    *gptr<u32>(r2 + (r3_1 << 2)) = u32(r8);
    *gptr<u32>(r0 + 0x10u) = u32(r6);  // (from the original)
    r2_1 = ((r1 << 4) - r1 << 3) + r6;
    call_00540c1c(r0, r1, r2_1, r3_1);
    r1 = guest::cpu()->r[1];
L_810c90:;
    guest::cpu()->r[13] += 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r4;
}

}  // namespace d_00810c14
GUEST_EXPORT(0x00810c14, d_00810c14::f_00810c14);

// f_00810ccc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00810ccc {

struct __attribute__((packed)) Object_00810ccc_0 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Object_00810ccc_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_00810ccc_0, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_00810ccc_0, word_8, 0x8);  // (from the original)

inline guest::global<u8, 0x008c9f1c> global_008c9f1c;  // (from the original)

void f_00810ccc(gptr<Object_00810ccc_0> arg0) {
    u32 r0 = arg0.addr();
    arg0->word_4 = u32(r0 + 0xcu);  // (from the original)
    arg0->word_0 = u32(0x90558cu);  // (from the original)
    arg0->word_8 = u32(0x11u);  // (from the original)
    *gptr<u8>(0x11u + (arg0->word_4 - 1u)) = u8(u32(*global_008c9f1c));  // (from the original)
    arg0->word_0 = u32(0x9050d0u);  // (from the original)
    *gptr<u8>(arg0->word_4) = u8(u32(*global_008c9f1c));
    arg0->word_0 = u32(0x904888u);  // (from the original)
    guest::cpu()->r[1] = 0x904888u;  // (from the original)
    return;
}

}  // namespace d_00810ccc
GUEST_EXPORT(0x00810ccc, d_00810ccc::f_00810ccc);

// f_00811a38: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00811a38 {

struct __attribute__((packed)) Object_00811a38_0 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Object_00811a38_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_00811a38_0, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_00811a38_0, word_8, 0x8);  // (from the original)

inline guest::global<u8, 0x008c9f1c> global_008c9f1c;  // (from the original)
inline constexpr guest::Function<0x0054af38, u32(u32, u32, u32, u32)> call_0054af38;  // (from the original)

u32 f_00811a38(gptr<Object_00811a38_0> arg0, u32 r1, u32 r2, u32 r3) {
    u32 r0 = arg0.addr();
    u32 r4 = guest::cpu()->r[4];
    u32 r13 = guest::cpu()->r[13];
    u32 r14 = guest::cpu()->r[14];
    u32 ea_1 = 0;
    u32 ea_2 = 0;
    u32 r3_1 = 0;
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r1_2 = 0;
    u32 r1_3 = 0;
    u32 v_1 = 0;
    u32 v_2 = 0;
    ea_1 = r13 - 0x10;  // (from the original)
    *gptr<u32>(ea_1) = u32(r0);
    *gptr<u32>(ea_1 + 4) = u32(r1);
    *gptr<u32>(ea_1 + 8) = u32(r2);
    *gptr<u32>(ea_1 + 0xc) = u32(r3);  // (from the original)
    r13 = r13 - 0x10;  // (from the original)
    ea_2 = r13 - 8;
    *gptr<u32>(ea_2) = u32(r4);
    *gptr<u32>(ea_2 + 4) = u32(r14);
    r13 = r13 - 8;
    arg0->word_4 = u32(r0 + 0xcu);  // (from the original)
    arg0->word_0 = u32(0x90558cu);  // (from the original)
    arg0->word_8 = u32(0x80u);  // (from the original)
    r3_1 = u32(*global_008c9f1c);
    *gptr<u8>(0x80u + (arg0->word_4 - 1u)) = u8(r3_1);  // (from the original)
    arg0->word_0 = u32(0x9050bcu);  // (from the original)
    r1_1 = u32(*global_008c9f1c);
    r2_1 = r13 + 0x10u;  // (from the original)
    *gptr<u8>(arg0->word_4) = u8(r1_1);
    arg0->word_0 = u32(0x9054b0u);  // (from the original)
    r1_2 = *gptr<u32>(r13 + 0xcu);  // (from the original)
    guest::cpu()->r[13] = r13;
    call_0054af38(r0, r1_2, r2_1, r3_1);
    r1_3 = guest::cpu()->r[1];
    v_1 = *gptr<u32>(r13);
    r13 = r13 + 4u;
    v_2 = *gptr<u32>(r13);
    r13 = r13 + 0x14u;  // (from the original)
    guest::cpu()->r[1] = r1_3;
    guest::cpu()->r[4] = v_1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_00811a38
GUEST_EXPORT(0x00811a38, d_00811a38::f_00811a38);

// f_00811ab8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00811ab8 {

struct __attribute__((packed)) Object_00811ab8_0 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Object_00811ab8_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_00811ab8_0, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_00811ab8_0, word_8, 0x8);  // (from the original)

inline guest::global<u8, 0x008c9f1c> global_008c9f1c;  // (from the original)
inline constexpr guest::Function<0x0054af38, u32(u32, u32, u32, u32)> call_0054af38;  // (from the original)

u32 f_00811ab8(gptr<Object_00811ab8_0> arg0, u32 r1, u32 r2, u32 r3) {
    u32 r0 = arg0.addr();
    u32 r4 = guest::cpu()->r[4];
    u32 r13 = guest::cpu()->r[13];
    u32 r14 = guest::cpu()->r[14];
    u32 ea_1 = 0;
    u32 ea_2 = 0;
    u32 r3_1 = 0;
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r1_2 = 0;
    u32 r1_3 = 0;
    u32 v_1 = 0;
    u32 v_2 = 0;
    ea_1 = r13 - 0x10;  // (from the original)
    *gptr<u32>(ea_1) = u32(r0);
    *gptr<u32>(ea_1 + 4) = u32(r1);
    *gptr<u32>(ea_1 + 8) = u32(r2);
    *gptr<u32>(ea_1 + 0xc) = u32(r3);  // (from the original)
    r13 = r13 - 0x10;  // (from the original)
    ea_2 = r13 - 8;
    *gptr<u32>(ea_2) = u32(r4);
    *gptr<u32>(ea_2 + 4) = u32(r14);
    r13 = r13 - 8;
    arg0->word_4 = u32(r0 + 0xcu);  // (from the original)
    arg0->word_0 = u32(0x90558cu);  // (from the original)
    arg0->word_8 = u32(0x20u);  // (from the original)
    r3_1 = u32(*global_008c9f1c);
    *gptr<u8>(0x20u + (arg0->word_4 - 1u)) = u8(r3_1);  // (from the original)
    arg0->word_0 = u32(0x905120u);  // (from the original)
    r1_1 = u32(*global_008c9f1c);
    r2_1 = r13 + 0x10u;  // (from the original)
    *gptr<u8>(arg0->word_4) = u8(r1_1);
    arg0->word_0 = u32(0x9054c4u);  // (from the original)
    r1_2 = *gptr<u32>(r13 + 0xcu);  // (from the original)
    guest::cpu()->r[13] = r13;
    call_0054af38(r0, r1_2, r2_1, r3_1);
    r1_3 = guest::cpu()->r[1];
    v_1 = *gptr<u32>(r13);
    r13 = r13 + 4u;
    v_2 = *gptr<u32>(r13);
    r13 = r13 + 0x14u;  // (from the original)
    guest::cpu()->r[1] = r1_3;
    guest::cpu()->r[4] = v_1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_00811ab8
GUEST_EXPORT(0x00811ab8, d_00811ab8::f_00811ab8);

// f_00811b38: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00811b38 {

struct __attribute__((packed)) Object_00811b38_0 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Object_00811b38_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_00811b38_0, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_00811b38_0, word_8, 0x8);  // (from the original)

inline guest::global<u8, 0x008c9f1c> global_008c9f1c;  // (from the original)
inline constexpr guest::Function<0x0054af38, u32(u32, u32, u32, u32)> call_0054af38;  // (from the original)

u32 f_00811b38(gptr<Object_00811b38_0> arg0, u32 r1, u32 r2, u32 r3) {
    u32 r0 = arg0.addr();
    u32 r4 = guest::cpu()->r[4];
    u32 r13 = guest::cpu()->r[13];
    u32 r14 = guest::cpu()->r[14];
    u32 ea_1 = 0;
    u32 ea_2 = 0;
    u32 r3_1 = 0;
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r1_2 = 0;
    u32 r1_3 = 0;
    u32 v_1 = 0;
    u32 v_2 = 0;
    ea_1 = r13 - 0x10;  // (from the original)
    *gptr<u32>(ea_1) = u32(r0);
    *gptr<u32>(ea_1 + 4) = u32(r1);
    *gptr<u32>(ea_1 + 8) = u32(r2);
    *gptr<u32>(ea_1 + 0xc) = u32(r3);  // (from the original)
    r13 = r13 - 0x10;  // (from the original)
    ea_2 = r13 - 8;
    *gptr<u32>(ea_2) = u32(r4);
    *gptr<u32>(ea_2 + 4) = u32(r14);
    r13 = r13 - 8;
    arg0->word_4 = u32(r0 + 0xcu);  // (from the original)
    arg0->word_0 = u32(0x90558cu);  // (from the original)
    arg0->word_8 = u32(0x40u);  // (from the original)
    r3_1 = u32(*global_008c9f1c);
    *gptr<u8>(0x40u + (arg0->word_4 - 1u)) = u8(r3_1);  // (from the original)
    arg0->word_0 = u32(0x905170u);  // (from the original)
    r1_1 = u32(*global_008c9f1c);
    r2_1 = r13 + 0x10u;  // (from the original)
    *gptr<u8>(arg0->word_4) = u8(r1_1);
    arg0->word_0 = u32(0x9054d8u);  // (from the original)
    r1_2 = *gptr<u32>(r13 + 0xcu);  // (from the original)
    guest::cpu()->r[13] = r13;
    call_0054af38(r0, r1_2, r2_1, r3_1);
    r1_3 = guest::cpu()->r[1];
    v_1 = *gptr<u32>(r13);
    r13 = r13 + 4u;
    v_2 = *gptr<u32>(r13);
    r13 = r13 + 0x14u;  // (from the original)
    guest::cpu()->r[1] = r1_3;
    guest::cpu()->r[4] = v_1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_00811b38
GUEST_EXPORT(0x00811b38, d_00811b38::f_00811b38);

// f_00811bb8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00811bb8 {

struct __attribute__((packed)) Object_00811bb8_0 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Object_00811bb8_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_00811bb8_0, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_00811bb8_0, word_8, 0x8);  // (from the original)

inline guest::global<u8, 0x008c9f1c> global_008c9f1c;  // (from the original)
inline constexpr guest::Function<0x0054af38, u32(u32, u32, u32, u32)> call_0054af38;  // (from the original)

u32 f_00811bb8(gptr<Object_00811bb8_0> arg0, u32 r1, u32 r2, u32 r3) {
    u32 r0 = arg0.addr();
    u32 r4 = guest::cpu()->r[4];
    u32 r13 = guest::cpu()->r[13];
    u32 r14 = guest::cpu()->r[14];
    u32 ea_1 = 0;
    u32 ea_2 = 0;
    u32 r3_1 = 0;
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r1_2 = 0;
    u32 r1_3 = 0;
    u32 v_1 = 0;
    u32 v_2 = 0;
    ea_1 = r13 - 0x10;  // (from the original)
    *gptr<u32>(ea_1) = u32(r0);
    *gptr<u32>(ea_1 + 4) = u32(r1);
    *gptr<u32>(ea_1 + 8) = u32(r2);
    *gptr<u32>(ea_1 + 0xc) = u32(r3);  // (from the original)
    r13 = r13 - 0x10;  // (from the original)
    ea_2 = r13 - 8;
    *gptr<u32>(ea_2) = u32(r4);
    *gptr<u32>(ea_2 + 4) = u32(r14);
    r13 = r13 - 8;
    arg0->word_4 = u32(r0 + 0xcu);  // (from the original)
    arg0->word_0 = u32(0x90558cu);  // (from the original)
    arg0->word_8 = u32(6u);
    r3_1 = u32(*global_008c9f1c);
    *gptr<u8>(6u + (arg0->word_4 - 1u)) = u8(r3_1);
    arg0->word_0 = u32(0x905184u);  // (from the original)
    r1_1 = u32(*global_008c9f1c);
    r2_1 = r13 + 0x10u;  // (from the original)
    *gptr<u8>(arg0->word_4) = u8(r1_1);
    arg0->word_0 = u32(0x9054ecu);  // (from the original)
    r1_2 = *gptr<u32>(r13 + 0xcu);  // (from the original)
    guest::cpu()->r[13] = r13;
    call_0054af38(r0, r1_2, r2_1, r3_1);
    r1_3 = guest::cpu()->r[1];
    v_1 = *gptr<u32>(r13);
    r13 = r13 + 4u;
    v_2 = *gptr<u32>(r13);
    r13 = r13 + 0x14u;  // (from the original)
    guest::cpu()->r[1] = r1_3;
    guest::cpu()->r[4] = v_1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_00811bb8
GUEST_EXPORT(0x00811bb8, d_00811bb8::f_00811bb8);

// f_00812698: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00812698 {

struct __attribute__((packed)) Object_00812698_0 {
    u8 unknown_0[0x3];  // (not used here)
    u8 byte_3;
};
GUEST_OFFSET(Object_00812698_0, byte_3, 0x3);  // (from the original)

struct __attribute__((packed)) Object_00812698_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Object_00812698_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_00812698_1, word_4, 0x4);  // (from the original)

inline guest::global<u32, 0x008127a0> global_008127a0;  // (from the original)
inline guest::global<u32, 0x008127a4> global_008127a4;  // (from the original)
inline guest::global<u32, 0x008127a8> global_008127a8;  // (from the original)
inline guest::global<u32, 0x008127ac> global_008127ac;  // (from the original)
inline guest::global<u32, 0x008127b0> global_008127b0;  // (from the original)

u32 f_00812698(gptr<Object_00812698_0> arg0, gptr<Object_00812698_1> arg1, float S0) {
    u32 r0 = arg0.addr();
    u32 r1 = arg1.addr();
    u32 r2 = 0;
    u32 fpsr = guest::cpu()->fpscr;
    float S1_1 = 0;
    u32 fpsr_1 = 0;
    u32 nf_1 = 0;
    u32 vf_1 = 0;
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    float S1_2 = 0;
    float S0_1 = 0;
    float S0_2 = 0;
    u32 r3_1 = 0;
    float S1_3 = 0;
    u32 r0_4 = 0;
    float S1_4 = 0;
    float S4_1 = 0;
    float S9_1 = 0;
    float S5_1 = 0;
    u32 r0_5 = 0;
    float S0_3 = 0;
    float S4_2 = 0;
    float S3_1 = 0;
    float S1_5 = 0;
    float S1_6 = 0;
    float S0_4 = 0;
    float S0_5 = 0;
    S1_1 = std::bit_cast<float>(arg1->word_0);
    fpsr_1 = fpsr & 0xfffffffu | vfp_cmpf(S1_1, S0);  // (from the original)
    nf_1 = fpsr_1 >> 0x1f;  // (from the original)
    vf_1 = fpsr_1 >> 0x1c & 1;  // (from the original)
    r2 = u32(s32(s16(u32(arg0->byte_3))) * s32(s16(0xabu))) >> 9;  // (from the original)
    r0_1 = r2 - 1u;
    if (nf_1 == vf_1) {
        S0 = std::bit_cast<float>(arg1->word_4);
    }
    r0_2 = r0_1 + (r0_1 << 1);
    if (nf_1 == vf_1) {
        guest::cpu()->s[0] = S0;
        guest::cpu()->s[1] = S1_1;
        return r0_2;
    }
    r0_3 = r1 + (r0_2 << 2);
    S1_2 = std::bit_cast<float>(*gptr<u32>(r0_3));
    fpsr = fpsr_1 & 0xfffffffu | vfp_cmpf(S1_2, S0);  // (from the original)
    if (!(fpsr >> 0x1d & 1) || fpsr >> 0x1e & 1) {  // (from the original)
        S0_1 = std::bit_cast<float>(*gptr<u32>(r0_3 + 4u));
        guest::cpu()->s[0] = S0_1;
        guest::cpu()->s[1] = S1_2;
        return r0_3;
    }
    r0 = 0u;
    if (r2 == 0 || r2 >> 0x1f != (r2 & (r2 ^ r2)) >> 0x1f) {  // (from the original)
        S0_2 = std::bit_cast<float>(*global_008127b0);
        guest::cpu()->s[0] = S0_2;
        guest::cpu()->s[1] = S1_2;
        return r0;
    }
    do {
L_8126e8:;
        r3_1 = r0 + (r0 << 1);
        S1_3 = std::bit_cast<float>(*gptr<u32>(r1 + (r3_1 << 2) + 0xcu));  // (from the original)
        fpsr = fpsr & 0xfffffffu | vfp_cmpf(S1_3, S0);  // (from the original)
        if (!(fpsr >> 0x1e & 1 || fpsr >> 0x1f != (fpsr >> 0x1c & 1))) {  // (from the original)
            r0_4 = r1 + (r3_1 << 2);
            S1_4 = std::bit_cast<float>(*gptr<u32>(r0_4));
            S4_1 = std::bit_cast<float>(*gptr<u32>(r0_4 + 0xcu)) - S1_4;  // (from the original)
            S9_1 = std::bit_cast<float>(*gptr<u32>(r0_4 + 4u));
            S5_1 = std::bit_cast<float>(*gptr<u32>(r0_4 + 8u));
            r0_5 = r0_4 + 0x10u;  // (from the original)
            S0_3 = (S0 - S1_4) / S4_1;
            S4_2 = S0_3 * std::bit_cast<float>(*global_008127a0);
            S3_1 = S0_3 * std::bit_cast<float>(*global_008127a8);
            S1_5 = S0_3 * S0_3 * S0_3;
            S1_6 = S1_5 - S0_3 * S0_3;
            S0_4 = S9_1 * (S4_2 * S0_3 * S0_3 - S3_1 * S0_3 + std::bit_cast<float>(*global_008127ac)) + std::bit_cast<float>(*gptr<u32>(r0_5)) * (S0_3 * std::bit_cast<float>(*global_008127a4) * S0_3 * S0_3 + S3_1 * S0_3) + S5_1 * (S1_5 - S4_2 * S0_3 + S0_3) + std::bit_cast<float>(*gptr<u32>(r0_5 + 4)) * S1_6;
            guest::cpu()->s[0] = S0_4;
            guest::cpu()->s[1] = S1_6;
            return r0_5;
        }
        r0 = r0 + 1u;
        guest::preempt();
    } while (s32(r2) > s32(r0));
    S0_5 = std::bit_cast<float>(*global_008127b0);
    guest::cpu()->s[0] = S0_5;
    guest::cpu()->s[1] = S1_3;
    return r0;
}

}  // namespace d_00812698
GUEST_EXPORT(0x00812698, d_00812698::f_00812698);

// f_00812ae8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00812ae8 {

struct __attribute__((packed)) Object_00812ae8_0 {
    u8 unknown_0[0x3];  // (not used here)
    u8 byte_3;
};
GUEST_OFFSET(Object_00812ae8_0, byte_3, 0x3);  // (from the original)

struct __attribute__((packed)) Object_00812ae8_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Object_00812ae8_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_00812ae8_1, word_4, 0x4);  // (from the original)

inline guest::global<u32, 0x00812bf8> global_00812bf8;  // (from the original)
inline guest::global<u32, 0x00812bfc> global_00812bfc;  // (from the original)
inline guest::global<u32, 0x00812c00> global_00812c00;  // (from the original)
inline guest::global<u32, 0x00812c04> global_00812c04;  // (from the original)
inline guest::global<u32, 0x00812c08> global_00812c08;  // (from the original)

u32 f_00812ae8(gptr<Object_00812ae8_0> arg0, gptr<Object_00812ae8_1> arg1, float S0) {
    u32 r0 = arg0.addr();
    u32 r1 = arg1.addr();
    u32 r2 = 0;
    u32 fpsr = guest::cpu()->fpscr;
    float S1_1 = 0;
    u32 fpsr_1 = 0;
    u32 nf_1 = 0;
    u32 vf_1 = 0;
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    float S1_2 = 0;
    float S0_1 = 0;
    float S0_2 = 0;
    u32 r3_1 = 0;
    float S1_3 = 0;
    u32 r0_4 = 0;
    float S2_1 = 0;
    float S1_4 = 0;
    float S0_3 = 0;
    float S5_1 = 0;
    float S4_1 = 0;
    float S3_1 = 0;
    float S12_1 = 0;
    float S3_2 = 0;
    float S1_5 = 0;
    float S0_4 = 0;
    float S0_5 = 0;
    S1_1 = std::bit_cast<float>(arg1->word_0);
    fpsr_1 = fpsr & 0xfffffffu | vfp_cmpf(S1_1, S0);  // (from the original)
    nf_1 = fpsr_1 >> 0x1f;  // (from the original)
    vf_1 = fpsr_1 >> 0x1c & 1;  // (from the original)
    r2 = u32(s32(s16(u32(arg0->byte_3))) * s32(s16(0xabu))) >> 9;  // (from the original)
    r0_1 = r2 - 1u;
    if (nf_1 == vf_1) {
        S0 = std::bit_cast<float>(arg1->word_4);
    }
    r0_2 = r0_1 + (r0_1 << 1);
    if (nf_1 == vf_1) {
        guest::cpu()->s[0] = S0;
        guest::cpu()->s[1] = S1_1;
        return r0_2;
    }
    r0_3 = r1 + (r0_2 << 2);
    S1_2 = std::bit_cast<float>(*gptr<u32>(r0_3));
    fpsr = fpsr_1 & 0xfffffffu | vfp_cmpf(S1_2, S0);  // (from the original)
    if (!(fpsr >> 0x1d & 1) || fpsr >> 0x1e & 1) {  // (from the original)
        S0_1 = std::bit_cast<float>(*gptr<u32>(r0_3 + 4u));
        guest::cpu()->s[0] = S0_1;
        guest::cpu()->s[1] = S1_2;
        return r0_3;
    }
    r0 = 0u;
    if (r2 == 0 || r2 >> 0x1f != (r2 & (r2 ^ r2)) >> 0x1f) {  // (from the original)
        S0_2 = std::bit_cast<float>(*global_00812c08);
        guest::cpu()->s[0] = S0_2;
        guest::cpu()->s[1] = S1_2;
        return r0;
    }
    do {
L_812b38:;
        r3_1 = r0 + (r0 << 1);
        S1_3 = std::bit_cast<float>(*gptr<u32>(r1 + (r3_1 << 2) + 0xcu));  // (from the original)
        fpsr = fpsr & 0xfffffffu | vfp_cmpf(S1_3, S0);  // (from the original)
        if (!(fpsr >> 0x1e & 1 || fpsr >> 0x1f != (fpsr >> 0x1c & 1))) {  // (from the original)
            r0_4 = r1 + (r3_1 << 2);
            S2_1 = std::bit_cast<float>(*gptr<u32>(r0_4));
            S1_4 = std::bit_cast<float>(*gptr<u32>(r0_4 + 0xcu)) - S2_1;  // (from the original)
            S0_3 = (S0 - S2_1) / S1_4;
            S5_1 = S0_3 * std::bit_cast<float>(*global_00812bf8);
            S4_1 = S0_3 * std::bit_cast<float>(*global_00812c00);
            S3_1 = S0_3 * S0_3 * S0_3;
            S12_1 = S3_1 - S5_1 * S0_3;
            S3_2 = (S3_1 - S0_3 * S0_3) * S1_4;
            S1_5 = (S12_1 + S0_3) * S1_4;
            S0_4 = std::bit_cast<float>(*gptr<u32>(r0_4 + 4u)) * (S5_1 * S0_3 * S0_3 - S4_1 * S0_3 + std::bit_cast<float>(*global_00812c04)) + std::bit_cast<float>(*gptr<u32>(r0_4 + 0x10u)) * (S0_3 * std::bit_cast<float>(*global_00812bfc) * S0_3 * S0_3 + S4_1 * S0_3) + std::bit_cast<float>(*gptr<u32>(r0_4 + 8u)) * S1_5 + std::bit_cast<float>(*gptr<u32>(r0_4 + 0x14u)) * S3_2;  // (from the original)
            guest::cpu()->s[0] = S0_4;
            guest::cpu()->s[1] = S1_5;
            return r0_4;
        }
        r0 = r0 + 1u;
        guest::preempt();
    } while (s32(r2) > s32(r0));
    S0_5 = std::bit_cast<float>(*global_00812c08);
    guest::cpu()->s[0] = S0_5;
    guest::cpu()->s[1] = S1_3;
    return r0;
}

}  // namespace d_00812ae8
GUEST_EXPORT(0x00812ae8, d_00812ae8::f_00812ae8);

// f_00813340: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00813340 {

struct __attribute__((packed)) Object_00813340_0 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
    u32 word_18;
    u32 word_1c;
    u32 word_20;
    u32 word_24;
    u32 word_28;
    u32 word_2c;
};
GUEST_OFFSET(Object_00813340_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_00813340_0, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_00813340_0, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Object_00813340_0, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Object_00813340_0, word_10, 0x10);  // (from the original)
GUEST_OFFSET(Object_00813340_0, word_14, 0x14);  // (from the original)
GUEST_OFFSET(Object_00813340_0, word_18, 0x18);  // (from the original)
GUEST_OFFSET(Object_00813340_0, word_1c, 0x1c);  // (from the original)
GUEST_OFFSET(Object_00813340_0, word_20, 0x20);  // (from the original)
GUEST_OFFSET(Object_00813340_0, word_24, 0x24);  // (from the original)
GUEST_OFFSET(Object_00813340_0, word_28, 0x28);  // (from the original)
GUEST_OFFSET(Object_00813340_0, word_2c, 0x2c);  // (from the original)

inline guest::global<u32, 0x0081337c> global_0081337c;  // (from the original)
inline guest::global<u32, 0x00813380> global_00813380;  // (from the original)

u32 f_00813340(gptr<Object_00813340_0> arg0, float S0, float S1, float S2) {
    u32 r0 = arg0.addr();
    float S4_1 = 0;
    float S3_1 = 0;
    u32 r1_1 = 0;
    u32 r0_1 = 0;
    arg0->word_c = u32(std::bit_cast<u32>(S0));
    S4_1 = std::bit_cast<float>(*global_0081337c);
    arg0->word_1c = u32(std::bit_cast<u32>(S1));
    S3_1 = std::bit_cast<float>(*global_00813380);
    arg0->word_2c = u32(std::bit_cast<u32>(S2));
    arg0->word_0 = u32(std::bit_cast<u32>(S4_1));
    arg0->word_4 = u32(std::bit_cast<u32>(S3_1));
    arg0->word_8 = u32(std::bit_cast<u32>(S3_1));
    r1_1 = r0 + 0x10u;  // (from the original)
    arg0->word_10 = u32(std::bit_cast<u32>(S3_1));
    arg0->word_14 = u32(std::bit_cast<u32>(S4_1));
    arg0->word_18 = u32(std::bit_cast<u32>(S3_1));
    arg0->word_20 = u32(std::bit_cast<u32>(S3_1));
    r0_1 = r0 + 0x24u;  // (from the original)
    arg0->word_24 = u32(std::bit_cast<u32>(S3_1));
    arg0->word_28 = u32(std::bit_cast<u32>(S4_1));
    guest::cpu()->r[1] = r1_1;
    return r0_1;
}

}  // namespace d_00813340
GUEST_EXPORT(0x00813340, d_00813340::f_00813340);

// f_00813384: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00813384 {

struct __attribute__((packed)) Object_00813384_0 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
    u32 word_18;
    u32 word_1c;
    u32 word_20;
    u32 word_24;
    u32 word_28;
    u32 word_2c;
};
GUEST_OFFSET(Object_00813384_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_00813384_0, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_00813384_0, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Object_00813384_0, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Object_00813384_0, word_10, 0x10);  // (from the original)
GUEST_OFFSET(Object_00813384_0, word_14, 0x14);  // (from the original)
GUEST_OFFSET(Object_00813384_0, word_18, 0x18);  // (from the original)
GUEST_OFFSET(Object_00813384_0, word_1c, 0x1c);  // (from the original)
GUEST_OFFSET(Object_00813384_0, word_20, 0x20);  // (from the original)
GUEST_OFFSET(Object_00813384_0, word_24, 0x24);  // (from the original)
GUEST_OFFSET(Object_00813384_0, word_28, 0x28);  // (from the original)
GUEST_OFFSET(Object_00813384_0, word_2c, 0x2c);  // (from the original)

struct __attribute__((packed)) Object_00813384_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Object_00813384_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_00813384_1, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_00813384_1, word_8, 0x8);  // (from the original)

struct __attribute__((packed)) Object_00813384_2 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Object_00813384_2, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_00813384_2, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_00813384_2, word_8, 0x8);  // (from the original)

inline guest::global<u32, 0x008133d4> global_008133d4;  // (from the original)

void f_00813384(gptr<Object_00813384_0> arg0, gptr<Object_00813384_1> arg1, gptr<Object_00813384_2> arg2) {
    float S0_1 = 0;
    u32 r1_1 = 0;
    S0_1 = std::bit_cast<float>(*global_008133d4);
    arg0->word_0 = u32(arg1->word_0);
    arg0->word_10 = u32(std::bit_cast<u32>(S0_1));
    arg0->word_20 = u32(std::bit_cast<u32>(S0_1));
    arg0->word_4 = u32(std::bit_cast<u32>(S0_1));
    arg0->word_14 = u32(arg1->word_4);
    arg0->word_24 = u32(std::bit_cast<u32>(S0_1));
    arg0->word_8 = u32(std::bit_cast<u32>(S0_1));
    arg0->word_18 = u32(std::bit_cast<u32>(S0_1));
    arg0->word_28 = u32(arg1->word_8);
    arg0->word_c = u32(arg2->word_0);
    arg0->word_1c = u32(arg2->word_4);
    r1_1 = arg2->word_8;
    arg0->word_2c = u32(r1_1);
    guest::cpu()->r[1] = r1_1;
    guest::cpu()->s[0] = S0_1;
    return;
}

}  // namespace d_00813384
GUEST_EXPORT(0x00813384, d_00813384::f_00813384);

// f_008133d8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_008133d8 {

struct __attribute__((packed)) Object_008133d8_0 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
};
GUEST_OFFSET(Object_008133d8_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_008133d8_0, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_008133d8_0, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Object_008133d8_0, word_c, 0xc);  // (from the original)


void f_008133d8(gptr<Object_008133d8_0> arg0, float S0, float S1, float S2, float S3) {
    u32 fpsr = guest::cpu()->fpscr;
    u32 fpsr_1 = 0;
    fpsr_1 = fpsr & 0xfffffffu | vfp_cmpf(S0, S2);  // (from the original)
    if (fpsr_1 >> 0x1d & 1) {  // (from the original)
        arg0->word_0 = u32(std::bit_cast<u32>(S2));
        arg0->word_8 = u32(std::bit_cast<u32>(S0));
    } else {
        arg0->word_0 = u32(std::bit_cast<u32>(S0));
        arg0->word_8 = u32(std::bit_cast<u32>(S2));
    }
    if ((fpsr_1 & 0xfffffffu | vfp_cmpf(S1, S3)) >> 0x1d & 1) {  // (from the original)
        arg0->word_4 = u32(std::bit_cast<u32>(S3));
        arg0->word_c = u32(std::bit_cast<u32>(S1));
    } else {
        arg0->word_4 = u32(std::bit_cast<u32>(S1));
        arg0->word_c = u32(std::bit_cast<u32>(S3));
    }
    return;
}

}  // namespace d_008133d8
GUEST_EXPORT(0x008133d8, d_008133d8::f_008133d8);

// f_0081360c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0081360c {


u32 f_0081360c(u32 r0_unused, u32 r1_unused, u32 r2) {
    u32 r13 = guest::cpu()->r[13];
    u32 ea_1 = 0;
    u32 r4_1 = 0;
    u32 r5_1 = 0;
    ea_1 = r13;
    r13 = r13 + 8;
    r4_1 = *gptr<u32>(ea_1);
    r5_1 = *gptr<u32>(ea_1 + 4);
    guest::cpu()->r[13] = r13;
    guest::cpu()->r[4] = r4_1;
    guest::cpu()->r[5] = r5_1;
    return guest::call_address<u32>(r2, guest::cpu()->r[0], guest::cpu()->r[1], r2, guest::cpu()->r[3]);
}

}  // namespace d_0081360c
GUEST_EXPORT(0x0081360c, d_0081360c::f_0081360c);

// f_00813d2c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00813d2c {


u32 f_00813d2c(u32 r0, u32 r1, u32 r2) {
    u32 zf_1 = 0;
    u32 r2_1 = 0;
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r1_2 = 0;
    guest::cpu()->r[13] -= 4u;
    zf_1 = r2 == 0;
    r2_1 = lsl_r(1u, r1 & 7u);
    r0_1 = r0 + (r1 >> 3);
    if (!zf_1) {
        if (r1 < 0x60u) {  // (from the original)
            r1_1 = u32(*gptr<u8>(r0_1)) | r2_1;
            *gptr<u8>(r0_1) = u8(r1_1);
            guest::cpu()->r[13] += 4u;
            guest::cpu()->r[1] = r1_1;
            return r0_1;
        }
        guest::cpu()->r[13] += 4u;
        guest::cpu()->r[1] = r1;
        return r0_1;
    }
    if (r1 >= 0x60u) {  // (from the original)
        guest::cpu()->r[13] += 4u;
        guest::cpu()->r[1] = r1;
        return r0_1;
    } else {
        r1_2 = u32(*gptr<u8>(r0_1)) & ~r2_1;
    }
    *gptr<u8>(r0_1) = u8(r1_2);
    guest::cpu()->r[13] += 4u;
    guest::cpu()->r[1] = r1_2;
    return r0_1;
}

}  // namespace d_00813d2c
GUEST_EXPORT(0x00813d2c, d_00813d2c::f_00813d2c);

// f_008156fc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_008156fc {

struct __attribute__((packed)) Object_008156fc_0 {
    u8 unknown_0[0x244];  // (not used here)
    u32 word_244;
};
GUEST_OFFSET(Object_008156fc_0, word_244, 0x244);  // (from the original)

inline constexpr guest::Function<0x00132478, u32(u32, u32, u32, u32)> call_00132478;  // (from the original)
inline constexpr guest::Function<0x0013f134, u32(u32, u32, u32, u32)> call_0013f134;  // (from the original)
inline constexpr guest::Function<0x002f73b8, u32(u32, u32, u32, u32)> call_002f73b8;  // (from the original)
inline constexpr guest::Function<0x002f747c, u32(u32, u32, u32, u32)> call_002f747c;  // (from the original)
inline constexpr guest::Function<0x0031758c, u32(u32, u32, u32, u32)> call_0031758c;  // (from the original)
inline constexpr guest::Function<0x005b19f8, u32(u32, u32, u32, u32)> call_005b19f8;  // (from the original)

u32 f_008156fc(gptr<Object_008156fc_0> arg0, u32 r1, u32 r2, u32 r3) {
    u32 r0 = arg0.addr();
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r1_2 = 0;
    u32 r2_2 = 0;
    u32 r3_2 = 0;
    u32 r0_4 = 0;
    u32 r0_5 = 0;
    u32 r1_3 = 0;
    u32 r2_3 = 0;
    u32 r3_3 = 0;
    u32 r0_6 = 0;
    u32 r1_4 = 0;
    u32 r2_4 = 0;
    u32 r3_4 = 0;
    u32 r0_7 = 0;
    u32 r1_5 = 0;
    u32 r0_8 = 0;
    u32 r1_6 = 0;
    u32 r1_7 = 0;
    u32 r0_9 = 0;
    u32 r3_5 = 0;
    r13 = r13 - 0x28u;  // (from the original)
    r5 = r0;
    r4 = arg0->word_244;
    r6 = r1;
    r7 = r2;
    if (r4 == 0) {
        goto L_81573c;
    }
    do {
L_81571c:;
        r0_1 = r4 + 0xcu;  // (from the original)
        guest::cpu()->r[13] = r13;
        call_005b19f8(r0_1, r1, r2, r3);
        r1_1 = guest::cpu()->r[1];
        r2_1 = guest::cpu()->r[2];
        r3_1 = guest::cpu()->r[3];
        r0_2 = r4 + 0x14u;  // (from the original)
        guest::cpu()->r[13] = r13;
        call_002f73b8(r0_2, r1_1, r2_1, r3_1);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r4 = *gptr<u32>(r4 + 8u);
        guest::preempt();
    } while (r4 != 0);
L_81573c:;
    r4 = *gptr<u32>(r5 + 0x25cu);  // (from the original)
    if (r4 == 0) {
        goto L_815768;
    }
    do {
L_815748:;
        r0_3 = r4 + 0xcu;  // (from the original)
        guest::cpu()->r[13] = r13;
        call_005b19f8(r0_3, r1, r2, r3);
        r1_2 = guest::cpu()->r[1];
        r2_2 = guest::cpu()->r[2];
        r3_2 = guest::cpu()->r[3];
        r0_4 = r4 + 0x14u;  // (from the original)
        guest::cpu()->r[13] = r13;
        call_002f73b8(r0_4, r1_2, r2_2, r3_2);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r4 = *gptr<u32>(r4 + 8u);
        guest::preempt();
    } while (r4 != 0);
L_815768:;
    r0_5 = r5 + 0x240u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_00132478(r0_5, r1, r2, r3);
    r1_3 = guest::cpu()->r[1];
    r2_3 = guest::cpu()->r[2];
    r3_3 = guest::cpu()->r[3];
    r0_6 = r5 + 0x24cu;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_00132478(r0_6, r1_3, r2_3, r3_3);
    r1_4 = guest::cpu()->r[1];
    r2_4 = guest::cpu()->r[2];
    r3_4 = guest::cpu()->r[3];
    r0_7 = r5 + 0x258u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_00132478(r0_7, r1_4, r2_4, r3_4);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r4 = 0u;
    do {
L_81578c:;
        r1_5 = r5 + ((r4 << 3) - r4 + (r4 << 6) << 2) + 8u;
        r0_8 = r5 + 0x24cu;  // (from the original)
        guest::cpu()->r[13] = r13;
        call_0013f134(r0_8, r1_5, r2, r3);
        r1_6 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r4 = r4 + 1u;
        guest::preempt();
    } while (r4 < 2u);
    guest::cpu()->r[13] = r13;
    call_002f747c(r5, r1_6, r2, r3);
    r1_7 = guest::cpu()->r[1];
    if (r6 == 0) {
        r0_9 = 0u;
        r13 = r13 + 0x28u;  // (from the original)
        guest::cpu()->r[1] = r1_7;
        guest::cpu()->r[13] = r13;
        return r0_9;
    }
    *gptr<u32>(r13 + 0xcu) = u32(0x8157fcu);  // (from the original)
    *gptr<u32>(r13 + 8u) = u32(0x9047f8u);  // (from the original)
    *gptr<u32>(r13) = u32(1u);
    *gptr<u32>(r13 + 4) = u32(0u);
    r3_5 = r13 + 8u;
    guest::cpu()->r[13] = r13;
    r0_9 = call_0031758c(r5, r7, r6, r3_5);
    r1_7 = guest::cpu()->r[1];
    r13 = r13 + 0x28u;  // (from the original)
    guest::cpu()->r[1] = r1_7;
    guest::cpu()->r[13] = r13;
    return r0_9;
}

}  // namespace d_008156fc
GUEST_EXPORT(0x008156fc, d_008156fc::f_008156fc);

// f_0081c0a0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0081c0a0 {

struct __attribute__((packed)) Object_0081c0a0_0 {
    u8 unknown_0[0xc];  // (not used here)
    u32 word_c;
    u32 word_10;
    u8 unknown_14[0x8];  // (not used here)
    u32 word_1c;
    u32 word_20;
};
GUEST_OFFSET(Object_0081c0a0_0, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Object_0081c0a0_0, word_10, 0x10);  // (from the original)
GUEST_OFFSET(Object_0081c0a0_0, word_1c, 0x1c);  // (from the original)
GUEST_OFFSET(Object_0081c0a0_0, word_20, 0x20);  // (from the original)


void f_0081c0a0(gptr<Object_0081c0a0_0> arg0) {
    u32 r1 = 0;
    u32 r2 = 0;
    u32 r3 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r12 = guest::cpu()->r[12];
    u32 r13 = guest::cpu()->r[13];
    u32 zf_1 = 0;
    u32 cf_1 = 0;
    u32 ea_1 = 0;
    u32 r4_1 = 0;
    u32 r2_1 = 0;
    u32 r1_1 = 0;
    u32 ea_2 = 0;
    u32 r4_2 = 0;
    u32 r5_1 = 0;
    u32 ea_3 = 0;
    u32 r4_3 = 0;
    u32 r5_2 = 0;
    r2 = 0u;
    r1 = arg0->word_1c;
    r3 = arg0->word_20;
    zf_1 = r3 == 0;
    cf_1 = r3 >= 0u;
    if (cf_1 && !zf_1) {
        r12 = arg0->word_c;
    }
    if (!cf_1 || zf_1) {
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[4] = r4;
        guest::cpu()->r[5] = r5;
        guest::cpu()->r[13] = r13;
        return;
    }
    ea_1 = r13 - 8;
    *gptr<u32>(ea_1) = u32(r4);
    *gptr<u32>(ea_1 + 4) = u32(r5);
    r13 = r13 - 8;
L_81c0bc:;
    r4_1 = *gptr<u32>(r1 + 4u);
    if (r4_1 != r12) {
        goto L_81c118;
    }
    if (r4_1 == 0) {
        if (((*gptr<u32>(r1 + 8u) | arg0->word_10) & 1u) == 0) {
            goto L_81c0f4;
        }
    }
    if (*gptr<u32>(r1 + 8u) != arg0->word_10) {
        goto L_81c118;
    }
L_81c0f4:;
    if (s32(r3) <= s32(r2 + 1u)) {
        goto L_81c118;
    }
    r2_1 = *gptr<u32>(r1 + 0x14u);  // (from the original)
    r1_1 = *gptr<u32>(r1 + 0x10u);  // (from the original)
    arg0->word_c = u32(r1_1);
    arg0->word_10 = u32(r2_1);
    ea_2 = r13;
    r13 = r13 + 8;
    r4_2 = *gptr<u32>(ea_2);
    r5_1 = *gptr<u32>(ea_2 + 4);
    guest::cpu()->r[1] = r1_1;
    guest::cpu()->r[4] = r4_2;
    guest::cpu()->r[5] = r5_1;
    guest::cpu()->r[13] = r13;
    return;
L_81c118:;
    r2 = r2 + 1u;
    r1 = r1 + 0xcu;  // (from the original)
    if (r3 > r2) {
        guest::preempt();
        goto L_81c0bc;
    }
    ea_3 = r13;
    r13 = r13 + 8;
    r4_3 = *gptr<u32>(ea_3);
    r5_2 = *gptr<u32>(ea_3 + 4);
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[4] = r4_3;
    guest::cpu()->r[5] = r5_2;
    guest::cpu()->r[13] = r13;
    return;
}

}  // namespace d_0081c0a0
GUEST_EXPORT(0x0081c0a0, d_0081c0a0::f_0081c0a0);

// f_0081c694: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0081c694 {

struct __attribute__((packed)) Object_0081c694_0 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u8 byte_c;
    u8 unknown_d[0x3];  // (not used here)
    u32 word_10;
    u32 word_14;
};
GUEST_OFFSET(Object_0081c694_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_0081c694_0, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_0081c694_0, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Object_0081c694_0, byte_c, 0xc);  // (from the original)
GUEST_OFFSET(Object_0081c694_0, word_10, 0x10);  // (from the original)
GUEST_OFFSET(Object_0081c694_0, word_14, 0x14);  // (from the original)

inline constexpr guest::Function<0x002f825c, u32(u32, u32, u32, u32)> call_002f825c;  // (from the original)

u32 f_0081c694(gptr<Object_0081c694_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r1 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r13 = guest::cpu()->r[13];
    u32 r1_1 = 0;
    u32 r0_1 = 0;
    u32 ea_1 = 0;
    u32 res_1 = 0;
    u32 ea_2 = 0;
    r13 = r13 - 0x10;  // (from the original)
    r4 = r0;
    arg0->word_4 = u32(r0 + 0x18u);  // (from the original)
    arg0->word_8 = u32(0xbu);  // (from the original)
    r1_1 = ~0u;
    arg0->word_0 = u32(0x909968u);  // (from the original)
    arg0->byte_c = u8(4u);
    arg0->word_10 = u32(r1_1);
    arg0->word_14 = u32(r1_1);
    r5 = 0u;
    r0_1 = r4 + 0x18u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_002f825c(r0_1, 0x16u, 4u, guest::cpu()->r[3]);  // (from the original)
    r0 = r4 + 0x18u;  // (from the original)
    r1 = 5u;
    *gptr<u16>(r4 + 0x18u) = u16(r5);  // (from the original)
    do {
L_81c6e0:;
        ea_1 = r0 + 2u;
        *gptr<u16>(ea_1) = u16(r5);
        res_1 = r1 - 1u;
        r1 = res_1;
        ea_2 = r0 + 4u;
        *gptr<u16>(ea_2) = u16(r5);
        r0 = ea_2;
        guest::preempt();
    } while (res_1 != 0);
    r13 = r13 + 0x10;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r4;
}

}  // namespace d_0081c694
GUEST_EXPORT(0x0081c694, d_0081c694::f_0081c694);

// f_0081c8b8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0081c8b8 {

struct __attribute__((packed)) Object_0081c8b8_0 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u8 byte_c;
    u8 unknown_d[0x3];  // (not used here)
    u32 word_10;
    u32 word_14;
    u32 word_18;
    u32 word_1c;
    u32 word_20;
    u32 word_24;
    u32 word_28;
    u32 word_2c;
};
GUEST_OFFSET(Object_0081c8b8_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_0081c8b8_0, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_0081c8b8_0, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Object_0081c8b8_0, byte_c, 0xc);  // (from the original)
GUEST_OFFSET(Object_0081c8b8_0, word_10, 0x10);  // (from the original)
GUEST_OFFSET(Object_0081c8b8_0, word_14, 0x14);  // (from the original)
GUEST_OFFSET(Object_0081c8b8_0, word_18, 0x18);  // (from the original)
GUEST_OFFSET(Object_0081c8b8_0, word_1c, 0x1c);  // (from the original)
GUEST_OFFSET(Object_0081c8b8_0, word_20, 0x20);  // (from the original)
GUEST_OFFSET(Object_0081c8b8_0, word_24, 0x24);  // (from the original)
GUEST_OFFSET(Object_0081c8b8_0, word_28, 0x28);  // (from the original)
GUEST_OFFSET(Object_0081c8b8_0, word_2c, 0x2c);  // (from the original)


void f_0081c8b8(gptr<Object_0081c8b8_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r1 = 0;
    u32 r2 = 0;
    u32 r3 = 0;
    u32 r2_1 = 0;
    u32 ea_1 = 0;
    u32 res_1 = 0;
    u32 ea_2 = 0;
    arg0->word_4 = u32(r0 + 0x18u);  // (from the original)
    arg0->word_8 = u32(0xcu);  // (from the original)
    r2_1 = ~0u;
    arg0->word_0 = u32(0x909a10u);  // (from the original)
    arg0->byte_c = u8(4u);
    r1 = 0u;
    arg0->word_10 = u32(r2_1);
    arg0->word_18 = u32(r1);
    arg0->word_14 = u32(r2_1);
    arg0->word_1c = u32(r1);
    arg0->word_20 = u32(r1);
    arg0->word_24 = u32(r1);
    arg0->word_28 = u32(r1);
    r3 = r0 + 0x16u;  // (from the original)
    r2 = 6u;
    arg0->word_2c = u32(r1);
    do {
L_81c908:;
        ea_1 = r3 + 2u;
        *gptr<u16>(ea_1) = u16(r1);
        res_1 = r2 - 1u;
        r2 = res_1;
        ea_2 = r3 + 4u;
        *gptr<u16>(ea_2) = u16(r1);
        r3 = ea_2;
        guest::preempt();
    } while (res_1 != 0);
    guest::cpu()->r[1] = r1;
    return;
}

}  // namespace d_0081c8b8
GUEST_EXPORT(0x0081c8b8, d_0081c8b8::f_0081c8b8);

// f_0081c9bc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0081c9bc {

struct __attribute__((packed)) Object_0081c9bc_0 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u8 byte_c;
    u8 unknown_d[0x3];  // (not used here)
    u32 word_10;
    u32 word_14;
};
GUEST_OFFSET(Object_0081c9bc_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_0081c9bc_0, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_0081c9bc_0, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Object_0081c9bc_0, byte_c, 0xc);  // (from the original)
GUEST_OFFSET(Object_0081c9bc_0, word_10, 0x10);  // (from the original)
GUEST_OFFSET(Object_0081c9bc_0, word_14, 0x14);  // (from the original)

inline constexpr guest::Function<0x002f825c, u32(u32, u32, u32, u32)> call_002f825c;  // (from the original)

u32 f_0081c9bc(gptr<Object_0081c9bc_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r1 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r13 = guest::cpu()->r[13];
    u32 r1_1 = 0;
    u32 r0_1 = 0;
    u32 ea_1 = 0;
    u32 res_1 = 0;
    u32 ea_2 = 0;
    r13 = r13 - 0x10;  // (from the original)
    r4 = r0;
    arg0->word_4 = u32(r0 + 0x18u);  // (from the original)
    arg0->word_8 = u32(0xdu);  // (from the original)
    r1_1 = ~0u;
    arg0->word_0 = u32(0x909a48u);  // (from the original)
    arg0->byte_c = u8(4u);
    arg0->word_10 = u32(r1_1);
    arg0->word_14 = u32(r1_1);
    r5 = 0u;
    r0_1 = r4 + 0x18u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_002f825c(r0_1, 0x1au, 4u, guest::cpu()->r[3]);  // (from the original)
    r0 = r4 + 0x18u;  // (from the original)
    r1 = 6u;
    *gptr<u16>(r4 + 0x18u) = u16(r5);  // (from the original)
    do {
L_81ca08:;
        ea_1 = r0 + 2u;
        *gptr<u16>(ea_1) = u16(r5);
        res_1 = r1 - 1u;
        r1 = res_1;
        ea_2 = r0 + 4u;
        *gptr<u16>(ea_2) = u16(r5);
        r0 = ea_2;
        guest::preempt();
    } while (res_1 != 0);
    r13 = r13 + 0x10;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r4;
}

}  // namespace d_0081c9bc
GUEST_EXPORT(0x0081c9bc, d_0081c9bc::f_0081c9bc);

// f_0081d12c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0081d12c {

inline constexpr guest::Function<0x003083bc, u32(u32, u32, u32, u32)> call_003083bc;  // (from the original)
inline constexpr guest::Function<0x005f4bfc, u32(u32, u32, u32, u32)> call_005f4bfc;  // (from the original)

u32 f_0081d12c(u32 r0, u32 r1_unused, u32 r2_unused, u32 r3) {
    u32 r1 = 0;
    u32 r2 = 0;
    u32 r13 = guest::cpu()->r[13];
    u32 r1_1 = 0;
    u32 r0_1 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r12_1 = 0;
    u32 res_1 = 0;
    u32 ea_1 = 0;
    u32 r12_2 = 0;
    u32 ea_2 = 0;
    r1_1 = r0 + 0x18u;  // (from the original)
    r13 = r13 - 8;
    guest::cpu()->r[13] = r13;
    r0_1 = call_003083bc(r0, r1_1, 0x14u, r3);  // (from the original)
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    *gptr<u32>(r0_1) = u32(0x909ce8u);  // (from the original)
    r0_2 = r0_1 + 0xcu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_3 = call_005f4bfc(r0_2, 0x909ce8u, r2_1, r3_1);  // (from the original)
    r0 = r0_3 - 0xcu;  // (from the original)
    *gptr<u32>(r0 + 0x18u) = u32(0u);  // (from the original)
    *gptr<u32>(r0 + 0x1cu) = u32(0u);  // (from the original)
    *gptr<u32>(r0 + 0x20u) = u32(0u);  // (from the original)
    *gptr<u32>(r0 + 0x24u) = u32(0u);  // (from the original)
    *gptr<u32>(r0 + 0x28u) = u32(0u);  // (from the original)
    *gptr<u32>(r0 + 0x2cu) = u32(0u);  // (from the original)
    *gptr<u32>(r0 + 0x30u) = u32(0u);  // (from the original)
    *gptr<u32>(r0 + 0x34u) = u32(0u);  // (from the original)
    r3 = 0x8906ecu;  // (from the original)
    *gptr<u32>(r0 + 0x38u) = u32(0u);  // (from the original)
    *gptr<u32>(r0 + 0x3cu) = u32(0u);  // (from the original)
    r1 = r0 + 0x16u;  // (from the original)
    r2 = 0xau;  // (from the original)
    do {
L_81d184:;
        r12_1 = u32(*gptr<u16>(r3));
        res_1 = r2 - 1u;
        r2 = res_1;
        ea_1 = r1 + 2u;
        *gptr<u16>(ea_1) = u16(r12_1);
        r12_2 = u32(*gptr<u16>(r3));
        ea_2 = r1 + 4u;
        *gptr<u16>(ea_2) = u16(r12_2);
        r1 = ea_2;
        guest::preempt();
    } while (res_1 != 0);
    r13 = r13 + 8;
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_0081d12c
GUEST_EXPORT(0x0081d12c, d_0081d12c::f_0081d12c);

// f_0081d248: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0081d248 {

inline constexpr guest::Function<0x002f825c, u32(u32, u32, u32, u32)> call_002f825c;  // (from the original)
inline constexpr guest::Function<0x003083bc, u32(u32, u32, u32, u32)> call_003083bc;  // (from the original)
inline constexpr guest::Function<0x005f4bfc, u32(u32, u32, u32, u32)> call_005f4bfc;  // (from the original)

u32 f_0081d248(u32 r0, u32 r1_unused, u32 r2_unused, u32 r3) {
    u32 r1 = 0;
    u32 r2 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r13 = guest::cpu()->r[13];
    u32 r1_1 = 0;
    u32 r0_1 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r2_2 = 0;
    u32 r3_2 = 0;
    u32 r0_4 = 0;
    u32 r3_3 = 0;
    u32 res_1 = 0;
    u32 ea_1 = 0;
    u32 r3_4 = 0;
    u32 ea_2 = 0;
    r1_1 = r0 + 0x18u;  // (from the original)
    r13 = r13 - 8;
    guest::cpu()->r[13] = r13;
    r0_1 = call_003083bc(r0, r1_1, 0x15u, r3);  // (from the original)
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    *gptr<u32>(r0_1) = u32(0x909d20u);  // (from the original)
    r0_2 = r0_1 + 0xcu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_3 = call_005f4bfc(r0_2, 0x909d20u, r2_1, r3_1);  // (from the original)
    r2_2 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    r4 = r0_3 - 0xcu;  // (from the original)
    r0_4 = r0_3 + 0xcu;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_002f825c(r0_4, 0x2au, r2_2, r3_2);  // (from the original)
    r1 = 0x8906ecu;  // (from the original)
    r0 = r4 + 0x18u;  // (from the original)
    *gptr<u16>(r4 + 0x18u) = u16(u32(*gptr<u16>(r1)));  // (from the original)
    r2 = 0xau;  // (from the original)
    do {
L_81d288:;
        r3_3 = u32(*gptr<u16>(r1));
        res_1 = r2 - 1u;
        r2 = res_1;
        ea_1 = r0 + 2u;
        *gptr<u16>(ea_1) = u16(r3_3);
        r3_4 = u32(*gptr<u16>(r1));
        ea_2 = r0 + 4u;
        *gptr<u16>(ea_2) = u16(r3_4);
        r0 = ea_2;
        guest::preempt();
    } while (res_1 != 0);
    r13 = r13 + 8;
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r4;
}

}  // namespace d_0081d248
GUEST_EXPORT(0x0081d248, d_0081d248::f_0081d248);

// f_0081d8c0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0081d8c0 {

struct __attribute__((packed)) Object_0081d8c0_0 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u8 byte_c;
    u8 unknown_d[0x3];  // (not used here)
    u32 word_10;
    u32 word_14;
};
GUEST_OFFSET(Object_0081d8c0_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_0081d8c0_0, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_0081d8c0_0, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Object_0081d8c0_0, byte_c, 0xc);  // (from the original)
GUEST_OFFSET(Object_0081d8c0_0, word_10, 0x10);  // (from the original)
GUEST_OFFSET(Object_0081d8c0_0, word_14, 0x14);  // (from the original)

inline constexpr guest::Function<0x002f825c, u32(u32, u32, u32, u32)> call_002f825c;  // (from the original)

u32 f_0081d8c0(gptr<Object_0081d8c0_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r1 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r13 = guest::cpu()->r[13];
    u32 r1_1 = 0;
    u32 r0_1 = 0;
    u32 ea_1 = 0;
    u32 res_1 = 0;
    u32 ea_2 = 0;
    r13 = r13 - 0x10;  // (from the original)
    r4 = r0;
    arg0->word_4 = u32(r0 + 0x18u);  // (from the original)
    arg0->word_8 = u32(0x21u);  // (from the original)
    r1_1 = ~0u;
    arg0->word_0 = u32(0x909f18u);  // (from the original)
    arg0->byte_c = u8(4u);
    arg0->word_10 = u32(r1_1);
    arg0->word_14 = u32(r1_1);
    r5 = 0u;
    r0_1 = r4 + 0x18u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_002f825c(r0_1, 0x42u, 4u, guest::cpu()->r[3]);  // (from the original)
    r0 = r4 + 0x18u;  // (from the original)
    r1 = 0x10u;  // (from the original)
    *gptr<u16>(r4 + 0x18u) = u16(r5);  // (from the original)
    do {
L_81d90c:;
        ea_1 = r0 + 2u;
        *gptr<u16>(ea_1) = u16(r5);
        res_1 = r1 - 1u;
        r1 = res_1;
        ea_2 = r0 + 4u;
        *gptr<u16>(ea_2) = u16(r5);
        r0 = ea_2;
        guest::preempt();
    } while (res_1 != 0);
    r13 = r13 + 0x10;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r4;
}

}  // namespace d_0081d8c0
GUEST_EXPORT(0x0081d8c0, d_0081d8c0::f_0081d8c0);

// f_0081de64: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0081de64 {

struct __attribute__((packed)) Object_0081de64_0 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u8 byte_c;
    u8 unknown_d[0x3];  // (not used here)
    u32 word_10;
    u32 word_14;
};
GUEST_OFFSET(Object_0081de64_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_0081de64_0, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_0081de64_0, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Object_0081de64_0, byte_c, 0xc);  // (from the original)
GUEST_OFFSET(Object_0081de64_0, word_10, 0x10);  // (from the original)
GUEST_OFFSET(Object_0081de64_0, word_14, 0x14);  // (from the original)

inline constexpr guest::Function<0x002f825c, u32(u32, u32, u32, u32)> call_002f825c;  // (from the original)

u32 f_0081de64(gptr<Object_0081de64_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r1 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r13 = guest::cpu()->r[13];
    u32 r1_1 = 0;
    u32 r0_1 = 0;
    u32 ea_1 = 0;
    u32 res_1 = 0;
    u32 ea_2 = 0;
    r13 = r13 - 0x10;  // (from the original)
    r4 = r0;
    arg0->word_4 = u32(r0 + 0x18u);  // (from the original)
    arg0->word_8 = u32(0x2du);  // (from the original)
    r1_1 = ~0u;
    arg0->word_0 = u32(0x90a0d8u);  // (from the original)
    arg0->byte_c = u8(4u);
    arg0->word_10 = u32(r1_1);
    arg0->word_14 = u32(r1_1);
    r5 = 0u;
    r0_1 = r4 + 0x18u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_002f825c(r0_1, 0x5au, 4u, guest::cpu()->r[3]);  // (from the original)
    r0 = r4 + 0x18u;  // (from the original)
    r1 = 0x16u;  // (from the original)
    *gptr<u16>(r4 + 0x18u) = u16(r5);  // (from the original)
    do {
L_81deb0:;
        ea_1 = r0 + 2u;
        *gptr<u16>(ea_1) = u16(r5);
        res_1 = r1 - 1u;
        r1 = res_1;
        ea_2 = r0 + 4u;
        *gptr<u16>(ea_2) = u16(r5);
        r0 = ea_2;
        guest::preempt();
    } while (res_1 != 0);
    r13 = r13 + 0x10;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r4;
}

}  // namespace d_0081de64
GUEST_EXPORT(0x0081de64, d_0081de64::f_0081de64);

// f_0081e020: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0081e020 {

inline constexpr guest::Function<0x002f825c, u32(u32, u32, u32, u32)> call_002f825c;  // (from the original)
inline constexpr guest::Function<0x003083bc, u32(u32, u32, u32, u32)> call_003083bc;  // (from the original)
inline constexpr guest::Function<0x005f4bfc, u32(u32, u32, u32, u32)> call_005f4bfc;  // (from the original)

u32 f_0081e020(u32 r0, u32 r1_unused, u32 r2_unused, u32 r3) {
    u32 r1 = 0;
    u32 r2 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r13 = guest::cpu()->r[13];
    u32 r1_1 = 0;
    u32 r0_1 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r2_2 = 0;
    u32 r3_2 = 0;
    u32 r0_4 = 0;
    u32 res_1 = 0;
    u32 r3_3 = 0;
    u32 ea_1 = 0;
    u32 r3_4 = 0;
    u32 ea_2 = 0;
    r1_1 = r0 + 0x18u;  // (from the original)
    r13 = r13 - 8;
    guest::cpu()->r[13] = r13;
    r0_1 = call_003083bc(r0, r1_1, 0x32u, r3);  // (from the original)
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    *gptr<u32>(r0_1) = u32(0x90a148u);  // (from the original)
    r0_2 = r0_1 + 0xcu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_3 = call_005f4bfc(r0_2, 0x90a148u, r2_1, r3_1);  // (from the original)
    r2_2 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    r4 = r0_3 - 0xcu;  // (from the original)
    r0_4 = r0_3 + 0xcu;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_002f825c(r0_4, 0x64u, r2_2, r3_2);  // (from the original)
    r2 = 0x8906ecu;  // (from the original)
    r0 = r4 + 0x16u;  // (from the original)
    r1 = 0x19u;  // (from the original)
    do {
L_81e058:;
        res_1 = r1 - 1u;
        r1 = res_1;
        r3_3 = u32(*gptr<u16>(r2));
        ea_1 = r0 + 2u;
        *gptr<u16>(ea_1) = u16(r3_3);
        r3_4 = u32(*gptr<u16>(r2));
        ea_2 = r0 + 4u;
        *gptr<u16>(ea_2) = u16(r3_4);
        r0 = ea_2;
        guest::preempt();
    } while (res_1 != 0);
    r13 = r13 + 8;
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r4;
}

}  // namespace d_0081e020
GUEST_EXPORT(0x0081e020, d_0081e020::f_0081e020);

// f_0081e25c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0081e25c {

inline constexpr guest::Function<0x002f825c, u32(u32, u32, u32, u32)> call_002f825c;  // (from the original)
inline constexpr guest::Function<0x003083bc, u32(u32, u32, u32, u32)> call_003083bc;  // (from the original)
inline constexpr guest::Function<0x005f4bfc, u32(u32, u32, u32, u32)> call_005f4bfc;  // (from the original)

u32 f_0081e25c(u32 r0, u32 r1_unused, u32 r2_unused, u32 r3) {
    u32 r1 = 0;
    u32 r2 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r13 = guest::cpu()->r[13];
    u32 r1_1 = 0;
    u32 r0_1 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r2_2 = 0;
    u32 r3_2 = 0;
    u32 r0_4 = 0;
    u32 res_1 = 0;
    u32 r3_3 = 0;
    u32 ea_1 = 0;
    u32 r3_4 = 0;
    u32 ea_2 = 0;
    r1_1 = r0 + 0x18u;  // (from the original)
    r13 = r13 - 8;
    guest::cpu()->r[13] = r13;
    r0_1 = call_003083bc(r0, r1_1, 0x3cu, r3);  // (from the original)
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    *gptr<u32>(r0_1) = u32(0x90a1f0u);  // (from the original)
    r0_2 = r0_1 + 0xcu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_3 = call_005f4bfc(r0_2, 0x90a1f0u, r2_1, r3_1);  // (from the original)
    r2_2 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    r4 = r0_3 - 0xcu;  // (from the original)
    r0_4 = r0_3 + 0xcu;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_002f825c(r0_4, 0x78u, r2_2, r3_2);  // (from the original)
    r2 = 0x8906ecu;  // (from the original)
    r0 = r4 + 0x16u;  // (from the original)
    r1 = 0x1eu;  // (from the original)
    do {
L_81e294:;
        res_1 = r1 - 1u;
        r1 = res_1;
        r3_3 = u32(*gptr<u16>(r2));
        ea_1 = r0 + 2u;
        *gptr<u16>(ea_1) = u16(r3_3);
        r3_4 = u32(*gptr<u16>(r2));
        ea_2 = r0 + 4u;
        *gptr<u16>(ea_2) = u16(r3_4);
        r0 = ea_2;
        guest::preempt();
    } while (res_1 != 0);
    r13 = r13 + 8;
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r4;
}

}  // namespace d_0081e25c
GUEST_EXPORT(0x0081e25c, d_0081e25c::f_0081e25c);

// f_0081e35c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0081e35c {

inline constexpr guest::Function<0x002f825c, u32(u32, u32, u32, u32)> call_002f825c;  // (from the original)
inline constexpr guest::Function<0x003083bc, u32(u32, u32, u32, u32)> call_003083bc;  // (from the original)
inline constexpr guest::Function<0x005f4bfc, u32(u32, u32, u32, u32)> call_005f4bfc;  // (from the original)

u32 f_0081e35c(u32 r0, u32 r1_unused, u32 r2_unused, u32 r3) {
    u32 r1 = 0;
    u32 r2 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r13 = guest::cpu()->r[13];
    u32 r1_1 = 0;
    u32 r0_1 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r2_2 = 0;
    u32 r3_2 = 0;
    u32 r0_4 = 0;
    u32 res_1 = 0;
    u32 r3_3 = 0;
    u32 ea_1 = 0;
    u32 r3_4 = 0;
    u32 ea_2 = 0;
    r1_1 = r0 + 0x18u;  // (from the original)
    r13 = r13 - 8;
    guest::cpu()->r[13] = r13;
    r0_1 = call_003083bc(r0, r1_1, 0x40u, r3);  // (from the original)
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    *gptr<u32>(r0_1) = u32(0x90a228u);  // (from the original)
    r0_2 = r0_1 + 0xcu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_3 = call_005f4bfc(r0_2, 0x90a228u, r2_1, r3_1);  // (from the original)
    r2_2 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    r4 = r0_3 - 0xcu;  // (from the original)
    r0_4 = r0_3 + 0xcu;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_002f825c(r0_4, 0x80u, r2_2, r3_2);  // (from the original)
    r2 = 0x8906ecu;  // (from the original)
    r0 = r4 + 0x16u;  // (from the original)
    r1 = 0x20u;  // (from the original)
    do {
L_81e394:;
        res_1 = r1 - 1u;
        r1 = res_1;
        r3_3 = u32(*gptr<u16>(r2));
        ea_1 = r0 + 2u;
        *gptr<u16>(ea_1) = u16(r3_3);
        r3_4 = u32(*gptr<u16>(r2));
        ea_2 = r0 + 4u;
        *gptr<u16>(ea_2) = u16(r3_4);
        r0 = ea_2;
        guest::preempt();
    } while (res_1 != 0);
    r13 = r13 + 8;
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r4;
}

}  // namespace d_0081e35c
GUEST_EXPORT(0x0081e35c, d_0081e35c::f_0081e35c);
