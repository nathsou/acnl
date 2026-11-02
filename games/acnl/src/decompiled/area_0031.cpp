// Functions decompiled by tools/decomp (docs/decomp.md), each proved equal to the recompiled original (prove-cpp). The
// names are generated (d_<address>::f_<address>, Object_<address>_<argument>, word_<offset>) and still to be chosen.
#include "guest/guest.hpp"
#include "recovered/structs.hpp"

#include <bit>

using guest::gptr;

// f_0031032c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0031032c {

struct __attribute__((packed)) Object_0031032c_0 {
    u8 unknown_0[0xa05];  // (not used here)
    u8 byte_a05;
    u8 unknown_a06[0x29a];  // (not used here)
    u32 word_ca0;
    u8 unknown_ca4[0x700];  // (not used here)
    u32 word_13a4;
    u8 unknown_13a8[0x700];  // (not used here)
    u32 word_1aa8;
    u8 unknown_1aac[0xcb8];  // (not used here)
    u32 word_2764;
};
GUEST_OFFSET(Object_0031032c_0, byte_a05, 0xa05);
GUEST_OFFSET(Object_0031032c_0, word_ca0, 0xca0);
GUEST_OFFSET(Object_0031032c_0, word_13a4, 0x13a4);
GUEST_OFFSET(Object_0031032c_0, word_1aa8, 0x1aa8);
GUEST_OFFSET(Object_0031032c_0, word_2764, 0x2764);

struct __attribute__((packed)) Local_0031032c_r0_1 {
    u8 unknown_0[0xb7];  // (not used here)
    u8 byte_b7;
};
GUEST_OFFSET(Local_0031032c_r0_1, byte_b7, 0xb7);

struct __attribute__((packed)) Local_0031032c_r0_2 {
    u8 unknown_0[0xb7];  // (not used here)
    u8 byte_b7;
};
GUEST_OFFSET(Local_0031032c_r0_2, byte_b7, 0xb7);

inline constexpr u32 vtable_script__WordFix_60u_ = 0x0090a1f0u;
inline guest::global<u32, 0x0095decc> global_0095decc;
inline constexpr guest::Function<0x00299984, u32(u32, u32)> call_00299984;
inline constexpr guest::Function<0x002f825c, u32(u32, u32)> call_002f825c;
inline constexpr guest::Function<0x00305784, u32(u32, u32)> call_00305784;
inline constexpr guest::Function<0x003083bc, u32(u32, u32, u32)> call_003083bc;
inline constexpr guest::Function<0x0030af7c, u32(u32, u32)> call_0030af7c;
inline constexpr guest::Function<0x0030b4a8, u32(u32, u32)> call_0030b4a8;
inline constexpr guest::Function<0x0030baa8, u32(u32, u32)> call_0030baa8;
inline constexpr guest::Function<0x00568630, u32(u32, u32, u32, u32)> call_00568630;
inline constexpr guest::Function<0x00568984, u32(u32, u32, u32, u32)> call_00568984;
inline constexpr guest::Function<0x00568c10, u32(u32, u32, u32, u32)> call_00568c10;
inline constexpr guest::Function<0x005697e0, u32(u32)> call_005697e0;
inline constexpr guest::Function<0x005e2e50, u32(u32, u32)> call_005e2e50;
inline constexpr guest::Function<0x005e2f94, u32(u32)> call_005e2f94;
inline constexpr guest::Function<0x005ea8dc, u32(u32, u32)> call_005ea8dc;
inline constexpr guest::Function<0x005ea8f8, u32(u32, u32, u32, u32)> call_005ea8f8;
inline constexpr guest::Function<0x005ea964, u32(u32, u32, u32, u32)> call_005ea964;
inline constexpr guest::Function<0x005f4bfc, u32(u32)> call_005f4bfc;

struct __attribute__((packed)) Frame_0031032c {
    u32 word_0;
    u8 unknown_4[0x4];  // (not read or written by name)
    u32 word_8;
    u8 unknown_c[0x90];  // (not read or written by name)
};
GUEST_OFFSET(Frame_0031032c, word_0, 0x0);
GUEST_OFFSET(Frame_0031032c, word_8, 0x8);
GUEST_SIZE(Frame_0031032c, 0x9c);

u32 f_0031032c(gptr<Object_0031032c_0> arg0, u32 r1_unused, u32 r2_unused, u32 r3, float S0) {
    guest::StackFrameOf<Frame_0031032c> frame;  // the original's stack frame
    u32 r0 = arg0.addr();
    u32 res_1 = 0;
    u32 r3_12 = 0;
    u32 r4 = r0;
    *gptr<u8>(r4 + 0x35b4u) = 1;  // (from the original)
    gptr<Local_0031032c_r0_1> r0_1 = gptr<Local_0031032c_r0_1>(*gptr<u32>(r4 + 0x2754u));  // (from the original)
    u32 r7 = 0u;
    r0_1->byte_b7 = u8(u32(r0_1->byte_b7) & 0xfeu | 1u);  // (from the original)
    gptr<Local_0031032c_r0_2> r0_2 = gptr<Local_0031032c_r0_2>(*gptr<u32>(r4 + 0x2750u));  // (from the original)
    u32 r1_1 = u32(r0_2->byte_b7) & 0xfeu;  // (from the original)
    r0_2->byte_b7 = u8(r1_1);
    call_00568c10(r4 + 0x4d0u, r1_1, 0x2754u, r3);  // (from the original)
    arg0->word_ca0 = arg0->word_ca0 | 8u;
    arg0->word_13a4 = arg0->word_13a4 | 8u;
    arg0->word_1aa8 = arg0->word_1aa8 | 8u;
    call_00299984(r4 + 0x1ab8u, 1u);  // (from the original)
    call_00305784(r4, 0u);
    if (arg0->byte_a05 == 1u) {
        u32 r5_1 = r4 + 0x2764u;  // (from the original)
        u32 r1_2 = r4 + 0x458u;  // (from the original)
        call_00568630(r4 + 0x294u, r1_2, arg0->word_2764, 0u);  // (from the original)
        float S0_4 = 0.0f;
        guest::cpu()->s[0] = S0_4;
        call_005697e0(r1_2);
        arg0->byte_a05 = u8(r7);
        call_00568c10(r4 + 0x294u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
        call_00568984(r4 + 0x294u, r1_2, arg0->word_2764, 0u);  // (from the original)
    }
    call_0030af7c(r4, 1u);
    call_0030b4a8(r4, 1u);
    call_0030baa8(r4, 1u);
    u32 r0_8 = frame.at(8).addr();
    call_003083bc(r0_8, frame.at(0x20).addr(), 0x3cu);  // (from the original)
    u32 r6 = vtable_script__WordFix_60u_;
    *gptr<u32>(r0_8) = r6;
    u32 r0_9 = r0_8 + 0xcu;  // (from the original)
    call_005f4bfc(r0_9);
    call_002f825c(r0_9 + 0xcu, 0x78u);  // (from the original)
    S0 = guest::cpu()->s[0];
    u32 r2 = 0x8906ecu;  // (from the original)
    r0 = (r0_9 - 0xcu) + 0x16u;  // (from the original)
    u32 r1 = 0x1eu;  // (from the original)
    do {
        res_1 = r1 - 1u;
        r1 = res_1;
        u32 r3_11 = *gptr<u16>(r2);
        *gptr<u16>(r0 + 2u) = u16(r3_11);
        r3_12 = *gptr<u16>(r2);
        u32 ea_2 = r0 + 4u;
        *gptr<u16>(ea_2) = u16(r3_12);
        r0 = ea_2;
        guest::preempt();
    } while (res_1 != 0);
    u32 r0_11 = *global_0095decc;
    guest::cpu()->s[0] = S0;
    call_005ea8f8(r0_11, 0u, r2, r3_12);
    frame->word_0 = r7;
    call_005ea964(*global_0095decc, frame.at(8).addr(), 0x310524u, 0x17cu);  // (from the original)
    call_005ea8dc(*global_0095decc, 0u);
    u32 r0_14 = r4 + 0x34f0u;  // (from the original)
    call_005e2e50(r0_14, frame.at(8).addr());
    call_005e2f94(r0_14);
    frame->word_8 = r6;
    return frame.at(8).addr();
}

}  // namespace d_0031032c
GUEST_EXPORT_FRAMED(0x0031032c, d_0031032c::f_0031032c, 0x40f0);  // pushes {r4, r5, r6, r7, lr} first, as the original

// f_00310530: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00310530 {

struct __attribute__((packed)) Object_00310530_1 {
    u8 unknown_0[0x310542];  // (not used here)
    u8 byte_310542;
};
GUEST_OFFSET(Object_00310530_1, byte_310542, 0x310542);


u32 f_00310530(u32 r0, gptr<Object_00310530_1> arg1) {
    u32 r1 = arg1.addr();
    u32 r0_2 = 0;
    u32 r0_5 = 0;
    u32 r0_7 = 0;
    u32 r0_9 = 0;
    u32 r0_11 = 0;
    u32 r0_13 = 0;
    u32 r0_15 = 0;
    if (r0 == 0 || r1 >= 0xau) {  // (from the original)
        return 0u;
    }
    u32 r2_1 = arg1->byte_310542;
    u32 r2_2 = r2_1 + r2_1;
    u32 tpc_1 = r2_2 + 0x310544u | 1;  // (from the original)
    switch (tpc_1) {
        case 0x31054d: goto L_31054c;  // (from the original)
        case 0x310555: goto L_310554;  // (from the original)
        case 0x310559: goto L_310558;  // (from the original)
        case 0x310561: goto L_310560;  // (from the original)
        case 0x310569: goto L_310568;  // (from the original)
        case 0x310573: goto L_310572;  // (from the original)
        case 0x31057b: goto L_31057a;  // (from the original)
        case 0x310583: goto L_310582;  // (from the original)
        case 0x31058b: goto L_31058a;  // (from the original)
        case 0x310593: goto L_310592;  // (from the original)
        default: break;
    }
    return guest::call_address<u32>(tpc_1, r0, r1, r2_2, guest::cpu()->r[3]);
L_31054c:;
    return u32(*gptr<u8>(r0 + 0x1fu)) >> 1u & 1u;  // (from the original)
L_310554:;
    r0_2 = *gptr<u8>(r0 + 0x1fu);  // (from the original)
    return r0_2 & 1u;
L_310558:;
    return u32(*gptr<u8>(r0 + 0x20u)) >> 7;  // (from the original)
L_310560:;
    r0_5 = u32(*gptr<u8>(r0 + 0x20u)) << 0x19;  // (from the original)
    return r0_5 >> 0x1f;  // (from the original)
L_310568:;
    r0_7 = u32(*gptr<u8>(r0 + 0x20u)) << 0x1a;  // (from the original)
    return r0_7 >> 0x1f;  // (from the original)
L_310572:;
    r0_9 = u32(*gptr<u8>(r0 + 0x20u)) << 0x1b;  // (from the original)
    return r0_9 >> 0x1f;  // (from the original)
L_31057a:;
    r0_11 = u32(*gptr<u8>(r0 + 0x20u)) << 0x1c;  // (from the original)
    return r0_11 >> 0x1f;  // (from the original)
L_310582:;
    r0_13 = u32(*gptr<u8>(r0 + 0x20u)) << 0x1d;  // (from the original)
    return r0_13 >> 0x1f;  // (from the original)
L_31058a:;
    r0_15 = u32(*gptr<u8>(r0 + 0x20u)) << 0x1e;  // (from the original)
    return r0_15 >> 0x1f;  // (from the original)
L_310592:;
    u32 r0_17 = *gptr<u8>(r0 + 0x20u);  // (from the original)
    return r0_17 & 1u;
}

}  // namespace d_00310530
GUEST_EXPORT(0x00310531, d_00310530::f_00310530);

// f_00310a30: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00310a30 {

struct __attribute__((packed)) Local_00310a30_r5_1 {
    u8 byte_0;
    u8 byte_1;
    u8 byte_2;
    u8 byte_3;
    u8 byte_4;
    u8 byte_5;
    u8 byte_6;
    u8 byte_7;
};
GUEST_OFFSET(Local_00310a30_r5_1, byte_0, 0x0);
GUEST_OFFSET(Local_00310a30_r5_1, byte_1, 0x1);
GUEST_OFFSET(Local_00310a30_r5_1, byte_2, 0x2);
GUEST_OFFSET(Local_00310a30_r5_1, byte_3, 0x3);
GUEST_OFFSET(Local_00310a30_r5_1, byte_4, 0x4);
GUEST_OFFSET(Local_00310a30_r5_1, byte_5, 0x5);
GUEST_OFFSET(Local_00310a30_r5_1, byte_6, 0x6);
GUEST_OFFSET(Local_00310a30_r5_1, byte_7, 0x7);

struct __attribute__((packed)) Local_00310a30_r6_1 {
    u8 unknown_0[0x10];  // (not used here)
    u16 half_10;
    u16 half_12;
    u8 unknown_14[0x6];  // (not used here)
    u16 half_1a;
};
GUEST_OFFSET(Local_00310a30_r6_1, half_10, 0x10);
GUEST_OFFSET(Local_00310a30_r6_1, half_12, 0x12);
GUEST_OFFSET(Local_00310a30_r6_1, half_1a, 0x1a);

inline constexpr guest::Function<0x002f825c, u32(u32, u32)> call_002f825c;
inline constexpr guest::Function<0x00301444, u32(u32, u32)> call_00301444;
inline constexpr guest::Function<0x00308355, u32(u32, u32, u32, u32)> call_00308354;
inline constexpr guest::Function<0x00308d4d, u32(u32, u32, u32, u32)> call_00308d4c;
inline constexpr guest::Function<0x0030b8bc, u32(u32)> call_0030b8bc;
inline constexpr guest::Function<0x0030c428, u32(u32, u32, u32, u32)> call_0030c428;
inline constexpr guest::Function<0x0030c4d0, u32(u32)> call_0030c4d0;
inline constexpr guest::Function<0x0030c4f4, u32(u32)> call_0030c4f4;
inline constexpr guest::Function<0x0030c599, u32(u32)> call_0030c598;
inline constexpr guest::Function<0x005bbdf8, u32(u32)> call_005bbdf8;

struct __attribute__((packed)) Frame_00310a30 {
    u32 word_0;
};
GUEST_OFFSET(Frame_00310a30, word_0, 0x0);
GUEST_SIZE(Frame_00310a30, 0x4);

u32 f_00310a30(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_00310a30> frame;  // the original's stack frame
    u32 res_1 = 0;
    frame->word_0 = r3;
    u32 r5 = 0u;
    u32 r4 = r0;
    do {
        call_00308d4c(0x2518u * r5 + r4, r1, r2, r3);  // (from the original)
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r5 += 1u;
        guest::preempt();
    } while (s32(r5) < 0xa);  // (from the original)
    u32 r1_1 = r4 + 0x172e0u;  // (from the original)
    *gptr<u32>(r1_1 + 0x10u) = 0;  // (from the original)
    call_0030c428(r4 + 0x172f4u, r1_1, r2, r3);  // (from the original)
    call_0030b8bc(r4 + 0x173a0u);  // (from the original)
    call_0030b8bc(r4 + 0x173c6u);  // (from the original)
    call_0030c4d0(r4 + 0x173ecu);  // (from the original)
    call_0030c4f4(r4 + 0x17448u);  // (from the original)
    call_005bbdf8(r4 + 0x1764au);  // (from the original)
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r5 = 0xffffu;  // (from the original)
    r0 = r4 + 0x17654u;  // (from the original)
    r1 = 8u;
    do {
        *gptr<u16>(r0 + 2u) = u16(r5);
        r0 += 4u;
        res_1 = r1 - 1u;
        r1 = res_1;
        *gptr<u16>(r0) = u16(r5);
        guest::preempt();
    } while (res_1 != 0);
    call_00308354(r4 + 0x17676u, r1, r2, r3);  // (from the original)
    call_00308354(r4 + 0x185f2u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    call_0030c598(r4 + 0x19570u);  // (from the original)
    call_0030c598(r4 + 0x19630u);  // (from the original)
    gptr<Local_00310a30_r6_1> r6_1 = gptr<Local_00310a30_r6_1>(r4 + 0x196e0u);  // (from the original)
    r6_1->half_10 = u16(r5);
    gptr<Local_00310a30_r5_1> r5_1 = gptr<Local_00310a30_r5_1>(r4 + 0x19760u);  // (from the original)
    r6_1->half_1a = 0x7ffe;  // (from the original)
    u32 r7_1 = ~0u;
    r5_1->byte_7 = u8(r7_1);
    call_002f825c(r4 + 0x196fcu, 0x32u);  // (from the original)
    call_00301444(r4 + 0x1972eu, 0x32u);  // (from the original)
    r5_1->byte_0 = 0;
    r5_1->byte_1 = u8(r7_1);
    r5_1->byte_2 = u8(r7_1);
    r5_1->byte_3 = u8(r7_1);
    r5_1->byte_5 = u8(r7_1);
    r5_1->byte_4 = u8(r7_1);
    r5_1->byte_6 = 0;
    r6_1->half_12 = 0x7db;  // (from the original)
    u32 r1_10 = r4 + 0x196e6u;  // (from the original)
    *gptr<u16>((r4 + 0x196e2u) + 0x12u) = 0x7db;  // (from the original)
    *gptr<u16>((r4 + 0x196e4u) + 0x12u) = 0x7db;  // (from the original)
    *gptr<u16>(r1_10 + 0x12u) = 0x7db;  // (from the original)
    guest::cpu()->r[1] = r1_10;
    return 0x7dbu;  // (from the original)
}

}  // namespace d_00310a30
GUEST_EXPORT_FRAMED(0x00310a31, d_00310a30::f_00310a30, 0x40f0);  // pushes {r4, r5, r6, r7, lr} first, as the original

// f_0031108c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0031108c {

struct __attribute__((packed)) Local_0031108c_ea_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
    u32 word_18;
    u32 word_1c;
    u32 word_20;
};
GUEST_OFFSET(Local_0031108c_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_0031108c_ea_1, word_4, 0x4);
GUEST_OFFSET(Local_0031108c_ea_1, word_8, 0x8);
GUEST_OFFSET(Local_0031108c_ea_1, word_c, 0xc);
GUEST_OFFSET(Local_0031108c_ea_1, word_10, 0x10);
GUEST_OFFSET(Local_0031108c_ea_1, word_14, 0x14);
GUEST_OFFSET(Local_0031108c_ea_1, word_18, 0x18);
GUEST_OFFSET(Local_0031108c_ea_1, word_1c, 0x1c);
GUEST_OFFSET(Local_0031108c_ea_1, word_20, 0x20);

struct __attribute__((packed)) Local_0031108c_r1_9 {
    u8 unknown_0[0x2];  // (not used here)
    u8 byte_2;
    u8 unknown_3[0x3];  // (not used here)
    u8 byte_6;
};
GUEST_OFFSET(Local_0031108c_r1_9, byte_2, 0x2);
GUEST_OFFSET(Local_0031108c_r1_9, byte_6, 0x6);

inline constexpr guest::Function<0x0010d691, u32(u32, u32, u32, u32)> call_0010d690;
inline constexpr guest::Function<0x0010edd5, u32(u32, u32, u32, u32)> call_0010edd4;
inline constexpr guest::Function<0x001b63b4, u32(u32, u32, u32)> call_001b63b4;
inline constexpr guest::Function<0x0024088c, u32(u32)> call_0024088c;
inline constexpr guest::Function<0x0024e8cc, u32(u32, u32, u32)> call_0024e8cc;
inline constexpr guest::Function<0x002fae84, u32(u32, u32, u32, u32)> call_002fae84;
inline constexpr guest::Function<0x002fb7e8, u32(u32, u32, u32, u32)> call_002fb7e8;
inline constexpr guest::Function<0x002fbd54, u32(u32, u32, u32, u32)> call_002fbd54;
inline constexpr guest::Function<0x002fe470, u32(u32, u32, u32, u32)> call_002fe470;
inline constexpr guest::Function<0x00301e20, u32(u32, u32, u32, u32)> call_00301e20;
inline constexpr guest::Function<0x00308d4d, u32(u32)> call_00308d4c;
inline constexpr guest::Function<0x005be844, u32(u32, u32, u32, u32)> call_005be844;

void f_0031108c(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r13 = guest::cpu()->r[13];
    u32 r14 = guest::cpu()->r[14];
    u32 r4_1 = 0;
    u32 r2_2 = 0;
    u32 r3_3 = 0;
    gptr<Local_0031108c_ea_1> ea_1 = gptr<Local_0031108c_ea_1>(r13 - 0x24);  // (from the original)
    ea_1->word_0 = r0;
    ea_1->word_4 = r1;
    ea_1->word_8 = r2;
    ea_1->word_c = r3;
    ea_1->word_10 = r4;
    ea_1->word_14 = r5;
    ea_1->word_18 = r6;
    ea_1->word_1c = r7;
    ea_1->word_20 = r14;
    r13 = ea_1.addr() - 0x14u;  // (from the original)
    u32 r0_1 = *gptr<u32>(r13 + 0x18u);  // (from the original)
    u32 r1_1 = *gptr<u32>(r13 + 0x14u);  // (from the original)
    if (r0_1 >= 0xau) {  // (from the original)
        r4_1 = 0u;
    } else {
        r2 = 0x2518u;  // (from the original)
        r4_1 = r0_1 * r2 + r1_1;
        if (r4_1 == 0) {
            goto L_3110ee;
        }
        guest::cpu()->r[13] = r13;
        u32 r0_2 = call_002fe470(r4_1, r1_1, r2, r3);
        r1_1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        if (r0_2 == 0) {
            goto L_3110ee;
        }
    }
    if (r4_1 != 0) {
        guest::cpu()->r[13] = r13;
        u32 r0_3 = call_00301e20(r4_1, r1_1, r2, r3);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        if (r0_3 != 0) {
            u32 r0_4 = *gptr<u16>(r4_1 + 0x2cu);  // (from the original)
            *gptr<u32>(r13 + 0xcu) = r0_4;  // (from the original)
            guest::cpu()->r[13] = r13;
            u32 r0_5 = call_002fae84(r0_4, guest::cpu()->r[1], r2, r3);
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
            r6 = 0x55a6u;  // (from the original)
            r7 = 0x8ebeu;  // (from the original)
            r4 = 0u;
            *gptr<u32>(r13) = r0_5 + 0x20u;  // (from the original)
            do {
                u32 r0_6 = *gptr<u32>(r13);
                guest::cpu()->r[13] = r13;
                u32 r0_7 = call_002fb7e8(r0_6, uxtb(r4), r2, r3);
                r2 = guest::cpu()->r[2];
                r3 = guest::cpu()->r[3];
                if (r0_7 != 0) {
                    guest::cpu()->r[13] = r13;
                    u32 r0_9 = call_002fbd54(r0_7 + r6, guest::cpu()->r[1], r2, r3);
                    r2 = guest::cpu()->r[2];
                    r3 = guest::cpu()->r[3];
                    if (r0_9 != 0) {
                        u32 r1_5 = *gptr<u32>(r13 + 0xcu);  // (from the original)
                        guest::cpu()->r[13] = r13;
                        call_005be844(r0_7 + r7, r1_5, r2, r3);
                        r2 = guest::cpu()->r[2];
                        r3 = guest::cpu()->r[3];
                    }
                }
                r4 += 1u;
                guest::preempt();
            } while (s32(r4) < 4);
        }
    }
L_3110ee:;
    u32 r1_6 = *gptr<u32>(r13 + 0x1cu);  // (from the original)
    u32 r0_11 = *gptr<u32>(r13 + 0x14u);  // (from the original)
    guest::cpu()->r[13] = r13;
    u32 r0_12 = call_0010edd4(r0_11, r1_6, r2, r3);
    guest::cpu()->r[13] = r13;
    u32 r0_13 = call_002fae84(r0_12, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r1_8 = *gptr<u32>(r13 + 0x18u);  // (from the original)
    guest::cpu()->r[13] = r13;
    call_001b63b4(r0_13 + 0x7170cu, r1_8, 0x7170cu);  // (from the original)
    r4 = 0u;
    r5 = 0xfdu;  // (from the original)
    r0 = *gptr<u32>(r13 + 0x1cu) + 0x8eeu;  // (from the original)
    r6 = 0xfbu;  // (from the original)
    r7 = 0xf7u;  // (from the original)
    do {
        gptr<Local_0031108c_r1_9> r1_9 = gptr<Local_0031108c_r1_9>(r0 + 0xb6u);  // (from the original)
        r0 += 0xf2u;  // (from the original)
        r4 += 1u;
        r2_2 = u32(r1_9->byte_2) & r5 & r6;
        r3_3 = u32(r1_9->byte_6) & r5 & r7;
        r1_9->byte_2 = u8(r2_2);
        r1_9->byte_6 = u8(r3_3);
        guest::preempt();
    } while (s32(r4) < 0x10);  // (from the original)
    u32 r1_10 = *gptr<u16>(*gptr<u32>(r13 + 0x1cu) + 0x2cu);  // (from the original)
    u32 r0_15 = *gptr<u32>(r13 + 0x14u);  // (from the original)
    guest::cpu()->r[13] = r13;
    call_0010d690(r0_15, r1_10, r2_2, r3_3);
    u32 r0_16 = *gptr<u32>(r13 + 0x1cu);  // (from the original)
    guest::cpu()->r[13] = r13;
    call_00308d4c(r0_16);
    u32 r0_17 = uxtb(*gptr<u32>(r13 + 0x18u) + 8u);  // (from the original)
    guest::cpu()->r[13] = r13;
    call_0024088c(r0_17);
    u32 r1_13 = guest::cpu()->r[1];
    u32 r2_5 = guest::cpu()->r[2];
    u32 r0_18 = *gptr<u32>(r13 + 0x20u);  // (from the original)
    if (!(r0_18 != 0)) {
        r2_5 = 0x19760u;  // (from the original)
        r0_18 = 0u;
        r1_13 = *gptr<u32>(r13 + 0x14u) + r2_5;  // (from the original)
        *gptr<u8>(r1_13) = u8(r0_18);
    }
    guest::cpu()->r[13] = r13;
    u32 r0_19 = call_002fae84(r0_18, r1_13, r2_5, guest::cpu()->r[3]);
    u32 r1_14 = *gptr<u32>(r13 + 0x18u);  // (from the original)
    guest::cpu()->r[13] = r13;
    call_0024e8cc(r0_19 + 0x621d0u, r1_14, 0x621d0u);  // (from the original)
    r13 += 0x24u;  // (from the original)
    u32 r4_2 = *gptr<u32>(r13);
    u32 r5_1 = *gptr<u32>(r13 + 4);
    u32 r6_1 = *gptr<u32>(r13 + 8);
    u32 r7_1 = *gptr<u32>(r13 + 0xc);  // (from the original)
    u32 tpc_1 = *gptr<u32>(r13 + 0x10);  // (from the original)
    r13 += 0x14;  // (from the original)
    guest::cpu()->r[4] = r4_2;
    guest::cpu()->r[5] = r5_1;
    guest::cpu()->r[6] = r6_1;
    guest::cpu()->r[7] = r7_1;
    guest::cpu()->r[13] = r13;
}

}  // namespace d_0031108c
GUEST_EXPORT(0x0031108d, d_0031108c::f_0031108c);

// f_003113b8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_003113b8 {

struct __attribute__((packed)) Object_003113b8_0 {
    u8 unknown_0[0x1e];  // (not used here)
    u8 byte_1e;
    u8 byte_1f;
    u8 byte_20;
    u8 byte_21;
    u8 byte_22;
    u8 byte_23;
    u8 byte_24;
};
GUEST_OFFSET(Object_003113b8_0, byte_1e, 0x1e);
GUEST_OFFSET(Object_003113b8_0, byte_1f, 0x1f);
GUEST_OFFSET(Object_003113b8_0, byte_20, 0x20);
GUEST_OFFSET(Object_003113b8_0, byte_21, 0x21);
GUEST_OFFSET(Object_003113b8_0, byte_22, 0x22);
GUEST_OFFSET(Object_003113b8_0, byte_23, 0x23);
GUEST_OFFSET(Object_003113b8_0, byte_24, 0x24);

inline constexpr guest::Function<0x0027a48c, u32(u32)> call_0027a48c;
inline constexpr guest::Function<0x00303cdc, u32(u32)> call_00303cdc;
inline constexpr guest::Function<0x005cdf48, u32(u32, u32, u32, u32)> call_005cdf48;

u32 f_003113b8(gptr<Object_003113b8_0> arg0, u32 r1) {
    u32 r4_1 = arg0.addr() + 0x16u;  // (from the original)
    call_005cdf48(r4_1, r1, ~0u, ~0x80000000u);  // (from the original)
    arg0->byte_1e = 0x21;  // (from the original)
    call_00303cdc(r4_1);
    arg0->byte_1f = 0xff;  // (from the original)
    arg0->byte_20 = 9;
    arg0->byte_1e = 0x21;  // (from the original)
    call_00303cdc(arg0.addr() + 0x16u);  // (from the original)
    arg0->byte_1f = 0xff;  // (from the original)
    arg0->byte_20 = 9;
    call_0027a48c(arg0.addr());
    arg0->byte_21 = 0xff;  // (from the original)
    arg0->byte_22 = 0;
    arg0->byte_23 = 0;
    arg0->byte_24 = 0;
    return arg0.addr();
}

}  // namespace d_003113b8
GUEST_EXPORT_FRAMED(0x003113b8, d_003113b8::f_003113b8, 0x47f0);  // pushes {r4, r5, r6, r7, r8, r9, r10, lr} first, as the original

// f_00311744: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00311744 {

struct __attribute__((packed)) Object_00311744_0 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
};
GUEST_OFFSET(Object_00311744_0, word_4, 0x4);


u32 f_00311744(gptr<Object_00311744_0> arg0, u32 r1) {
    u32 r0_1 = arg0->word_4;
    u32 zf_1 = r0_1 == 0;
    u32 cf_1 = r0_1 >= 0u;
    if (!zf_1) {
        zf_1 = 0x18fu == r1;  // (from the original)
        cf_1 = 0x18fu >= r1;  // (from the original)
    }
    if (!cf_1 || zf_1) {
        guest::cpu()->r[1] = r1;
        return 0u;
    }
    u32 r1_1 = r1 * 3u + (r1 << 3);
    guest::cpu()->r[1] = r1_1;
    return r0_1 + (r1_1 << 3);
}

}  // namespace d_00311744
GUEST_EXPORT(0x00311744, d_00311744::f_00311744);

// f_00311f7c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00311f7c {

struct __attribute__((packed)) Object_00311f7c_2 {
    u8 unknown_0[0x14];  // (not used here)
    u8 byte_14;
};
GUEST_OFFSET(Object_00311f7c_2, byte_14, 0x14);

struct __attribute__((packed)) Local_00311f7c_ea_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
    u32 word_18;
    u32 word_1c;
    u32 word_20;
};
GUEST_OFFSET(Local_00311f7c_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_00311f7c_ea_1, word_4, 0x4);
GUEST_OFFSET(Local_00311f7c_ea_1, word_8, 0x8);
GUEST_OFFSET(Local_00311f7c_ea_1, word_c, 0xc);
GUEST_OFFSET(Local_00311f7c_ea_1, word_10, 0x10);
GUEST_OFFSET(Local_00311f7c_ea_1, word_14, 0x14);
GUEST_OFFSET(Local_00311f7c_ea_1, word_18, 0x18);
GUEST_OFFSET(Local_00311f7c_ea_1, word_1c, 0x1c);
GUEST_OFFSET(Local_00311f7c_ea_1, word_20, 0x20);

inline constexpr guest::Function<0x001df598, u32(u32, u32)> call_001df598;
inline constexpr guest::Function<0x002fc224, u32(u32, u32)> call_002fc224;
inline constexpr guest::Function<0x00309f85, u32(u32, u32, u32, u32)> call_00309f84;
inline constexpr guest::Function<0x0030e228, u32(u32)> call_0030e228;

u32 f_00311f7c(u32 r0, u32 r1, gptr<Object_00311f7c_2> arg2, u32 r3) {
    u32 r2 = arg2.addr();
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r13 = guest::cpu()->r[13];
    u32 r14 = guest::cpu()->r[14];
    u32 r4_2 = 0;
    u32 r5_2 = 0;
    u32 r6_1 = 0;
    u32 r7_1 = 0;
    u32 tpc_1 = 0;
    gptr<Local_00311f7c_ea_1> ea_1 = gptr<Local_00311f7c_ea_1>(r13 - 0x24);  // (from the original)
    ea_1->word_0 = r0;
    ea_1->word_4 = r1;
    ea_1->word_8 = r2;
    ea_1->word_c = r3;
    ea_1->word_10 = r4;
    ea_1->word_14 = r5;
    ea_1->word_18 = r6;
    ea_1->word_1c = r7;
    ea_1->word_20 = r14;
    r13 = ea_1.addr() - 4u;
    u32 r4_1 = r1;
    u32 r0_1 = *gptr<u32>(r13 + 4u);
    guest::cpu()->r[13] = r13;
    u32 r0_2 = call_00309f84(r0_1, r2, r2, r3);
    if (r0_2 != 0) {
        if (r3 == 0) {
            goto L_311ff0;
        }
        u32 r0_3 = *gptr<u32>(r13 + 4u);
        guest::cpu()->r[13] = r13;
        u32 r0_4 = call_0030e228(r0_3);
        u32 r1_2 = u32(arg2->byte_14) & 1u;
        u32 r5_1 = r0_4 == r1_2;
        guest::cpu()->r[13] = r13;
        u32 r0_5 = call_002fc224(r0_4, r1_2);
        if (r0_5 != 2u) {
            if (r0_5 == 3u) {
                if (r5_1 == 0) {
                    goto L_311ff0;
                }
                if (s32(r4_1) >= 0) {
                    goto L_311fea;
                }
                goto L_311ff0;
            }
            if (r0_5 == 4u) {
                if (r5_1 != 0) {
                    goto L_311ff0;
                }
                if (s32(r4_1) <= 0) {
                    goto L_311fea;
                }
                r4_1 += 1u;
                goto L_311ff0;
            }
            if (r0_5 != 5u || r5_1 != 0 || s32(r4_1) < 0) {
                goto L_311ff0;
            }
            goto L_311fea;
        }
        if (r5_1 == 0) {
            goto L_311ff0;
        }
        if (s32(r4_1) <= 0) {
            goto L_311fea;
        }
        r4_1 += 1u;
        goto L_311ff0;
L_311fea:;
        r0_2 = 0u;
    }
    r13 += 0x14u;  // (from the original)
    r4_2 = *gptr<u32>(r13);
    r5_2 = *gptr<u32>(r13 + 4);
    r6_1 = *gptr<u32>(r13 + 8);
    r7_1 = *gptr<u32>(r13 + 0xc);  // (from the original)
    tpc_1 = *gptr<u32>(r13 + 0x10);  // (from the original)
    r13 += 0x14;  // (from the original)
    guest::cpu()->r[4] = r4_2;
    guest::cpu()->r[5] = r5_2;
    guest::cpu()->r[6] = r6_1;
    guest::cpu()->r[7] = r7_1;
    guest::cpu()->r[13] = r13;
    return r0_2;
L_311ff0:;
    guest::cpu()->r[13] = r13;
    call_001df598(r0_2 + 0xb6u, r4_1);  // (from the original)
    r13 += 0x14u;  // (from the original)
    u32 r4_3 = *gptr<u32>(r13);
    u32 r5_3 = *gptr<u32>(r13 + 4);
    u32 r6_2 = *gptr<u32>(r13 + 8);
    u32 r7_2 = *gptr<u32>(r13 + 0xc);  // (from the original)
    u32 tpc_2 = *gptr<u32>(r13 + 0x10);  // (from the original)
    r13 += 0x14;  // (from the original)
    guest::cpu()->r[4] = r4_3;
    guest::cpu()->r[5] = r5_3;
    guest::cpu()->r[6] = r6_2;
    guest::cpu()->r[7] = r7_2;
    guest::cpu()->r[13] = r13;
    return r4_1;
}

}  // namespace d_00311f7c
GUEST_EXPORT(0x00311f7d, d_00311f7c::f_00311f7c);

// f_00312008: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00312008 {

struct __attribute__((packed)) Object_00312008_0 {
    u8 unknown_0[0x10];  // (not used here)
    u8 byte_10;
    u8 unknown_11[0x3];  // (not used here)
    u32 word_14;
    u8 byte_18;
};
GUEST_OFFSET(Object_00312008_0, byte_10, 0x10);
GUEST_OFFSET(Object_00312008_0, word_14, 0x14);
GUEST_OFFSET(Object_00312008_0, byte_18, 0x18);


void f_00312008(gptr<Object_00312008_0> arg0, u32 r1) {
    arg0->byte_10 = u8(r1);
    arg0->word_14 = 0;
    arg0->byte_18 = 0;
}

}  // namespace d_00312008
GUEST_EXPORT(0x00312008, d_00312008::f_00312008);

// f_003120a8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_003120a8 {

inline constexpr guest::Function<0x002f76ad, u32(u32, u32, u32, u32)> call_002f76ac;
inline constexpr guest::Function<0x002f777c, u32(u32)> call_002f777c;
inline constexpr guest::Function<0x002fc8e8, u32(u32, u32, u32, u32)> call_002fc8e8;
inline constexpr guest::Function<0x002fcaf4, u32(u32)> call_002fcaf4;
inline constexpr guest::Function<0x00301d0d, u32(u32, u32, u32, u32)> call_00301d0c;
inline constexpr guest::Function<0x003107d5, u32(u32, u32, u32)> call_003107d4;

struct __attribute__((packed)) Frame_003120a8 {
    u8 unknown_0[0x14];  // (not read or written by name)
    u32 word_14;
    u32 word_18;
    u32 word_1c;
    u32 word_20;
};
GUEST_OFFSET(Frame_003120a8, word_14, 0x14);
GUEST_OFFSET(Frame_003120a8, word_18, 0x18);
GUEST_OFFSET(Frame_003120a8, word_1c, 0x1c);
GUEST_OFFSET(Frame_003120a8, word_20, 0x20);
GUEST_SIZE(Frame_003120a8, 0x24);

u32 f_003120a8(u32 r0, u32 r1, u32 r2) {
    guest::StackFrameOf<Frame_003120a8> frame;  // the original's stack frame
    u32 r1_1 = 0;
    u32 r4 = r0;
    frame->word_14 = r4 + 0x24d6u;  // (from the original)
    frame->word_18 = r4 + 0x24dau;  // (from the original)
    u32 r3_1 = r4 + 0x24deu;  // (from the original)
    u32 r0_1 = r4 + 0x24e2u;  // (from the original)
    frame->word_1c = r3_1;
    frame->word_20 = r0_1;
    if (r1 != 0) {
        if (r1 == 1u) {
            r0_1 = frame->word_18;
            r1_1 = r2;
        } else if (r1 == 2u) {
            r1_1 = r2;
            r0_1 = r3_1;
        } else {
            if (r1 != 3u) {
                goto L_3120f0;
            }
            r1_1 = r2;
        }
    } else {
        r0_1 = frame->word_14;
        r1_1 = r2;
    }
    call_002fc8e8(r0_1, r1_1, r2, r3_1);
L_3120f0:;
    call_00301d0c(frame.at(0).addr(), 0x2fc20cu, 4u, 4u);  // (from the original)
    r2 = guest::cpu()->r[2];
    u32 r3 = guest::cpu()->r[3];
    u32 r7 = 0u;
    u32 r5 = r7;
    u32 r6 = frame.at(0).addr();
    do {
        call_002fc8e8((r5 << 2) + r6, 0x95bfdcu, r2, r3);  // (from the original)
        call_003107d4(frame.at(0x10).addr(), r4, r5);  // (from the original)
        u32 r0_6 = call_002fcaf4(frame.at(0x10).addr());  // (from the original)
        if (r0_6 == 0) {
            call_002fc8e8((r7 << 2) + r6, frame.at(0x10).addr(), guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
            r7 += 1u;
        }
        call_002f777c(frame.at(0x10).addr());  // (from the original)
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r5 += 1u;
        guest::preempt();
    } while (s32(r5) < 4);
    call_002fc8e8(frame->word_14, frame.at(0).addr(), r2, r3);
    call_002fc8e8(frame->word_18, r6 + 4u, guest::cpu()->r[2], guest::cpu()->r[3]);
    call_002fc8e8(frame->word_1c, frame.at(8).addr(), guest::cpu()->r[2], guest::cpu()->r[3]);
    call_002fc8e8(frame->word_20, frame.at(0xc).addr(), guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r0_14 = call_002f76ac(frame.at(0).addr(), 0x2f777cu, 4u, 4u);  // (from the original)
    return r0_14;
}

}  // namespace d_003120a8
GUEST_EXPORT_FRAMED(0x003120a9, d_003120a8::f_003120a8, 0x40f0);  // pushes {r4, r5, r6, r7, lr} first, as the original

// f_00312178: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00312178 {

inline constexpr guest::Function<0x002fc8e8, u32(u32, u32)> call_002fc8e8;

u32 f_00312178(u32 r0) {
    return call_002fc8e8(r0 + 0x24eau, guest::cpu()->r[1]);  // (from the original)
}

}  // namespace d_00312178
GUEST_EXPORT(0x00312178, d_00312178::f_00312178);

// f_00312184: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00312184 {

inline constexpr guest::Function<0x002fc8e8, u32(u32, u32)> call_002fc8e8;

u32 f_00312184(u32 r0) {
    return call_002fc8e8(r0 + 0x24e6u, guest::cpu()->r[1]);  // (from the original)
}

}  // namespace d_00312184
GUEST_EXPORT(0x00312184, d_00312184::f_00312184);

// f_00312190: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00312190 {

struct __attribute__((packed)) Object_00312190_1 {
    u8 unknown_0[0x3121a0];  // (not used here)
    u8 byte_3121a0;
};
GUEST_OFFSET(Object_00312190_1, byte_3121a0, 0x3121a0);

inline constexpr guest::Function<0x002fc8e8, u32(u32, u32)> call_002fc8e8;

u32 f_00312190(u32 r0, gptr<Object_00312190_1> arg1, u32 r2) {
    u32 r1 = arg1.addr();
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r0_5 = 0;
    u32 r0_6 = 0;
    u32 r0_7 = 0;
    u32 r0_8 = 0;
    u32 r0_9 = 0;
    guest::cpu()->r[13] -= 8u;
    if (r1 >= 0xau) {  // (from the original)
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    u32 r3_1 = arg1->byte_3121a0;
    u32 r3_2 = r3_1 + r3_1;
    u32 tpc_1 = r3_2 + 0x3121a2u | 1;  // (from the original)
    switch (tpc_1) {
        case 0x3121ab: goto L_3121aa;  // (from the original)
        case 0x3121b7: goto L_3121b6;  // (from the original)
        case 0x3121c3: goto L_3121c2;  // (from the original)
        case 0x3121cf: goto L_3121ce;  // (from the original)
        case 0x3121db: goto L_3121da;  // (from the original)
        case 0x3121e7: goto L_3121e6;  // (from the original)
        case 0x3121f3: goto L_3121f2;  // (from the original)
        case 0x3121ff: goto L_3121fe;  // (from the original)
        case 0x31220b: goto L_31220a;  // (from the original)
        case 0x312217: goto L_312216;  // (from the original)
        default: break;
    }
    return guest::call_address<u32>(tpc_1, r0, r1, r2, r3_2);
L_3121aa:;
    r0_1 = r0 + 0x24aeu;  // (from the original)
    call_002fc8e8(r0_1, r2);
    guest::cpu()->r[13] += 8u;
    return r0_1;
L_3121b6:;
    r0_2 = r0 + 0x24b2u;  // (from the original)
    call_002fc8e8(r0_2, r2);
    guest::cpu()->r[13] += 8u;
    return r0_2;
L_3121c2:;
    r0_3 = r0 + 0x24b6u;  // (from the original)
    call_002fc8e8(r0_3, r2);
    guest::cpu()->r[13] += 8u;
    return r0_3;
L_3121ce:;
    r0_4 = r0 + 0x24bau;  // (from the original)
    call_002fc8e8(r0_4, r2);
    guest::cpu()->r[13] += 8u;
    return r0_4;
L_3121da:;
    r0_5 = r0 + 0x24beu;  // (from the original)
    call_002fc8e8(r0_5, r2);
    guest::cpu()->r[13] += 8u;
    return r0_5;
L_3121e6:;
    r0_6 = r0 + 0x24c2u;  // (from the original)
    call_002fc8e8(r0_6, r2);
    guest::cpu()->r[13] += 8u;
    return r0_6;
L_3121f2:;
    r0_7 = r0 + 0x24c6u;  // (from the original)
    call_002fc8e8(r0_7, r2);
    guest::cpu()->r[13] += 8u;
    return r0_7;
L_3121fe:;
    r0_8 = r0 + 0x24cau;  // (from the original)
    call_002fc8e8(r0_8, r2);
    guest::cpu()->r[13] += 8u;
    return r0_8;
L_31220a:;
    r0_9 = r0 + 0x24ceu;  // (from the original)
    call_002fc8e8(r0_9, r2);
    guest::cpu()->r[13] += 8u;
    return r0_9;
L_312216:;
    u32 r0_10 = r0 + 0x24d2u;  // (from the original)
    call_002fc8e8(r0_10, r2);
    guest::cpu()->r[13] += 8u;
    return r0_10;
}

}  // namespace d_00312190
GUEST_EXPORT(0x00312191, d_00312190::f_00312190);

// f_00312274: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00312274 {

struct __attribute__((packed)) Object_00312274_1 {
    u32 word_0;
};
GUEST_OFFSET(Object_00312274_1, word_0, 0x0);

inline constexpr guest::Function<0x00300904, u32(u32, u32, u32, u32)> call_00300904;
inline constexpr guest::Function<0x006249b0, u32(u32, u32, u32, u32)> call_006249b0;

struct __attribute__((packed)) Frame_00312274 {
    u8 byte_0;
    u32 word_1;
    u8 unknown_5[0x7];  // (not read or written by name)
};
GUEST_OFFSET(Frame_00312274, byte_0, 0x0);
GUEST_OFFSET(Frame_00312274, word_1, 0x1);
GUEST_SIZE(Frame_00312274, 0xc);

u32 f_00312274(u32 r0, gptr<Object_00312274_1> arg1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_00312274> frame;  // the original's stack frame
    u32 r0_1 = call_00300904(r0, arg1.addr(), r2, r3);
    if (r0_1 == 0) {
        return r0_1;
    }
    frame->byte_0 = 0x11;  // (from the original)
    frame->word_1 = arg1->word_0;
    u32 r0_2 = call_006249b0(0x41u, r0, frame.at(0).addr(), 5u);  // (from the original)
    return r0_2;
}

}  // namespace d_00312274
GUEST_EXPORT_FRAMED(0x00312274, d_00312274::f_00312274, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_003122bc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_003122bc {

inline guest::global<u32, 0x0095debc> global_0095debc;
inline constexpr guest::Function<0x00301e64, u32(u32, u32, u32, u32)> call_00301e64;
inline constexpr guest::Function<0x00301e6c, u32(u32, u32)> call_00301e6c;
inline constexpr guest::Function<0x003083bc, u32(u32, u32, u32)> call_003083bc;
inline constexpr guest::Function<0x003083d4, u32(u32)> call_003083d4;
inline constexpr guest::Function<0x003083e4, u32(u32, u32, u32, u32)> call_003083e4;
inline constexpr guest::Function<0x00308450, u32(u32, u32)> call_00308450;
inline constexpr guest::Function<0x0030846c, u32(u32, u32)> call_0030846c;
inline constexpr guest::Function<0x003084c8, u32(u32)> call_003084c8;
inline constexpr guest::Function<0x003084cc, u32(u32)> call_003084cc;
inline constexpr guest::Function<0x00312a40, u32(u32)> call_00312a40;
inline constexpr guest::Function<0x00312a4c, u32(u32, u32, u32, u32)> call_00312a4c;

void f_003122bc(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0x30);  // the original's stack frame
    u32 r0_1 = call_00301e64(r0, r1, r2, r3);
    u32 r0_2 = call_00301e6c(0xa83aecu, r0_1);  // (from the original)
    if (r0_2 != 0) {
        call_003083bc(frame.at(0).addr(), frame.at(0x18).addr(), 0xbu);  // (from the original)
        u32 r0_4 = call_003083d4(r0_2);
        u32 r0_6 = call_003083e4(*global_0095debc, frame.at(0).addr(), 0x312368u, r0_4);  // (from the original)
        if (r0_6 != 0) {
            u32 r0_7 = call_00312a40(r0);
            call_00308450(frame.at(0xc).addr(), r0_7);  // (from the original)
            u32 r0_9 = frame.at(0xc).addr();  // (from the original)
            call_0030846c(r0_9, frame.at(0).addr());
            call_003084c8(r0_9);
            call_003084cc(r0_9);
            return;
        }
        call_003084cc(frame.at(0).addr());
    }
    call_003083bc(frame.at(0).addr(), frame.at(0x18).addr(), 0xbu);  // (from the original)
    u32 r0_13 = call_00312a4c(*global_0095debc, frame.at(0).addr(), 0x88eed0u, 0x27u);  // (from the original)
    if (r0_13 != 0) {
        u32 r0_14 = call_00312a40(r0);
        call_00308450(frame.at(0xc).addr(), r0_14);  // (from the original)
        r0_13 = frame.at(0xc).addr();  // (from the original)
        call_0030846c(r0_13, frame.at(0).addr());
        call_003084c8(r0_13);
    }
    call_003084cc(r0_13);
}

}  // namespace d_003122bc
GUEST_EXPORT_FRAMED(0x003122bd, d_003122bc::f_003122bc, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_0031237c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0031237c {

struct __attribute__((packed)) Object_0031237c_0 {
    u8 unknown_0[0x2c];  // (not used here)
    u16 half_2c;
};
GUEST_OFFSET(Object_0031237c_0, half_2c, 0x2c);

inline constexpr guest::Function<0x002f777c, u32(u32, u32)> call_002f777c;
inline constexpr guest::Function<0x002fc8e8, u32(u32, u32)> call_002fc8e8;
inline constexpr guest::Function<0x002fcbb0, u32(u32, u32)> call_002fcbb0;
inline constexpr guest::Function<0x003059f8, u32(u32, u32, u32, u32)> call_003059f8;
inline constexpr guest::Function<0x0030e228, u32(u32)> call_0030e228;
inline constexpr guest::Function<0x0030f588, u32(u32, u32)> call_0030f588;
inline constexpr guest::Function<0x0030f594, u32(u32)> call_0030f594;
inline constexpr guest::Function<0x00311744, u32(u32, u32)> call_00311744;
inline constexpr guest::Function<0x00312b20, u32(u32, u32)> call_00312b20;

void f_0031237c(gptr<Object_0031237c_0> arg0, u32 r1) {
    guest::StackFrame frame(0x10);  // the original's stack frame
    u32 r0_1 = arg0.addr() + 0x30u;  // (from the original)
    call_003059f8(r0_1, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    call_0030f588(frame.at(0).addr(), arg0.addr());
    u32 r0_4 = call_0030f594(frame.at(0).addr());
    call_002f777c(frame.at(0).addr(), guest::cpu()->r[1]);
    if (r0_4 != 0) {
        u32 r1_3 = arg0->half_2c;
        u32 r0_6 = call_00311744(0xa8349cu, r1_3);  // (from the original)
        if (r0_6 == 0) {
            call_003059f8(r0_1, r0_6, guest::cpu()->r[2], guest::cpu()->r[3]);
            call_0030f588(frame.at(4).addr(), arg0.addr());
            u32 r0_9 = call_0030f594(frame.at(4).addr());
            call_002f777c(frame.at(4).addr(), guest::cpu()->r[1]);
            if (r0_9 != 0) {
                u32 r0_11 = call_0030e228(arg0.addr());
                if (r0_11 != 0) {
                    u32 r0_12 = frame.at(8).addr();
                    call_002fcbb0(r0_12, 0x4bu << 7);  // (from the original)
                    call_00312b20(arg0.addr(), r0_12);
                    call_002f777c(arg0.addr(), r0_12);
                    return;
                }
                u32 r0_13 = frame.at(8).addr();
                call_002fcbb0(r0_13, 0x2581u);  // (from the original)
                call_00312b20(arg0.addr(), r0_13);
                call_002f777c(arg0.addr(), r0_13);
                return;
            }
        } else {
            call_002fc8e8(arg0.addr() + 0x249au, r0_6);  // (from the original)
        }
    }
}

}  // namespace d_0031237c
GUEST_EXPORT_FRAMED(0x0031237d, d_0031237c::f_0031237c, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_00312434: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00312434 {

struct __attribute__((packed)) Object_00312434_0 {
    u8 unknown_0[0x5700];  // (not used here)
    u8 byte_5700;
    u8 unknown_5701[0xd];  // (not used here)
    u8 byte_570e;
    u8 unknown_570f[0xa];  // (not used here)
    u8 byte_5719;
    u8 byte_571a;
    u8 byte_571b;
};
GUEST_OFFSET(Object_00312434_0, byte_5700, 0x5700);
GUEST_OFFSET(Object_00312434_0, byte_570e, 0x570e);
GUEST_OFFSET(Object_00312434_0, byte_5719, 0x5719);
GUEST_OFFSET(Object_00312434_0, byte_571a, 0x571a);
GUEST_OFFSET(Object_00312434_0, byte_571b, 0x571b);


u32 f_00312434(gptr<Object_00312434_0> arg0, u32 r1, u32 r2) {
    u32 r0 = arg0.addr();
    u32 r4_1 = 0;
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    r0 += 0x5700u;  // (from the original)
    if (!!((u32(arg0->byte_5700) << 0x1b) >> 0x1f) && s32(r1) > 0 && !(u32(arg0->byte_570e) & 8u)) {  // (from the original)
        u32 r3 = arg0->byte_571a;
        u32 res_2 = u32(arg0->byte_5719) >> 7;
        r1 += ((r3 >> 1) + ((u32(arg0->byte_571b) & 7u) << 7));
        if (res_2 == 0) {
            goto L_3124bc;
        }
        if (r2 != 0) {
            r1 += 2u;
        }
L_312488:;
        if (r1 > 0x64u) {  // (from the original)
            r1 = 0x64u;  // (from the original)
        }
        r4_1 = r1 & 0x380u;  // (from the original)
        r1_1 = r3 & ~0xfeu | r1 << 1;  // (from the original)
        r2_1 = u32(*gptr<u8>(r0 + 0x1bu)) & ~7u | r4_1 >> 7;  // (from the original)
        *gptr<u8>(r0 + 0x1au) = u8(r1_1);  // (from the original)
        *gptr<u8>(r0 + 0x1bu) = u8(r2_1);  // (from the original)
        guest::cpu()->r[1] = r1_1;
        return 1u;
L_3124bc:;
        if (r2 != 0) {
            u32 zf_1 = r1 == 0x32u;  // (from the original)
            u32 cf_1 = r1 >= 0x32u;  // (from the original)
            if (r1 > 0x32u) {  // (from the original)
                r1 = 0x32u;  // (from the original)
            }
            if (!cf_1 || zf_1) {
                guest::preempt();
                goto L_312488;
            }
            r4_1 = r1 & 0x380u;  // (from the original)
            r1_1 = r3 & ~0xfeu | r1 << 1;  // (from the original)
            r2_1 = u32(*gptr<u8>(r0 + 0x1bu)) & ~7u | r4_1 >> 7;  // (from the original)
            *gptr<u8>(r0 + 0x1au) = u8(r1_1);  // (from the original)
            *gptr<u8>(r0 + 0x1bu) = u8(r2_1);  // (from the original)
            guest::cpu()->r[1] = r1_1;
            return 1u;
        }
    }
    guest::cpu()->r[1] = r1;
    return 0u;
}

}  // namespace d_00312434
GUEST_EXPORT_FRAMED(0x00312434, d_00312434::f_00312434, 0x30);  // pushes {r4, r5} first, as the original

// f_00312ab8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00312ab8 {

inline constexpr guest::Function<0x0030a488, u32(u32, u32, u32, u32)> call_0030a488;

struct __attribute__((packed)) Frame_00312ab8 {
    u32 word_0;
};
GUEST_OFFSET(Frame_00312ab8, word_0, 0x0);
GUEST_SIZE(Frame_00312ab8, 0x4);

u32 f_00312ab8(u32 r0_unused, u32 r1_unused, u32 r2_unused, u32 r3) {
    guest::StackFrameOf<Frame_00312ab8> frame;  // the original's stack frame
    frame->word_0 = r3;
    frame->word_0 = *frame.at<u32>(8);
    call_0030a488(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], r3);
    return guest::cpu()->r[0];
}

}  // namespace d_00312ab8
GUEST_EXPORT_FRAMED(0x00312ab8, d_00312ab8::f_00312ab8, 0x4000);  // pushes {lr} first, as the original

// f_00312acc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00312acc {

inline constexpr guest::Function<0x005cddb4, u32(u32, u32)> call_005cddb4;

u32 f_00312acc(u32 r0) {
    call_005cddb4(r0, guest::cpu()->r[1]);
    return r0;
}

}  // namespace d_00312acc
GUEST_EXPORT_FRAMED(0x00312acc, d_00312acc::f_00312acc, 0x4010);  // pushes {r4, lr} first, as the original

// f_00312ae0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00312ae0 {

struct __attribute__((packed)) Object_00312ae0_0 {
    u8 unknown_0[0x2510];  // (not used here)
    u32 word_2510;
};
GUEST_OFFSET(Object_00312ae0_0, word_2510, 0x2510);


void f_00312ae0(gptr<Object_00312ae0_0> arg0) {
    u32 r1_1 = arg0->word_2510 | 0x100u;  // (from the original)
    arg0->word_2510 = r1_1;
    guest::cpu()->r[1] = r1_1;
}

}  // namespace d_00312ae0
GUEST_EXPORT(0x00312ae0, d_00312ae0::f_00312ae0);

// f_00312af8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00312af8 {

inline constexpr guest::Function<0x0030e430, u32(u32, u32)> call_0030e430;

u32 f_00312af8(u32 r0) {
    u32 r1_1 = *gptr<u32>(r0 + (0x25u << 8) + 0x10u);  // (from the original)
    if ((r1_1 >> 1u & 1u) != 0) {
        r1_1 &= 1u;
        if (r1_1 == 0) {
            guest::cpu()->r[1] = r1_1;
            return 0u;
        }
    }
    u32 r0_1 = call_0030e430(r0, r1_1);
    return r0_1 == 0;
}

}  // namespace d_00312af8
GUEST_EXPORT_FRAMED(0x00312af9, d_00312af8::f_00312af8, 0x4010);  // pushes {r4, lr} first, as the original

// f_00312b20: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00312b20 {

inline constexpr guest::Function<0x002fc8e8, u32(u32, u32)> call_002fc8e8;

void f_00312b20(u32 r0) {
    call_002fc8e8(r0 + 0x249au, guest::cpu()->r[1]);  // (from the original)
}

}  // namespace d_00312b20
GUEST_EXPORT(0x00312b20, d_00312b20::f_00312b20);

// f_00313414: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00313414 {

inline constexpr guest::Function<0x005cdf48, u32(u32, u32, u32, u32)> call_005cdf48;

u32 f_00313414(u32 r0) {
    call_005cdf48(r0, guest::cpu()->r[1], ~0u, ~0x80000000u);  // (from the original)
    return r0;
}

}  // namespace d_00313414
GUEST_EXPORT_FRAMED(0x00313414, d_00313414::f_00313414, 0x4010);  // pushes {r4, lr} first, as the original

// f_00313a40: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00313a40 {

inline guest::global<u32, 0x00a83af0> global_00a83af0;

u32 f_00313a40(u32 r0) {
    u32 r1_1 = *global_00a83af0;
    u32 zf_1 = r1_1 == 0;
    u32 cf_1 = r1_1 >= 0u;
    if (!zf_1) {
        zf_1 = 0x18fu == r0;  // (from the original)
        cf_1 = 0x18fu >= r0;  // (from the original)
    }
    if (!cf_1 || zf_1) {
        guest::cpu()->r[1] = r1_1;
        return 0u;
    }
    u32 r0_1 = r1_1 + r0 * 0x22u;  // (from the original)
    if (r0_1 == 0) {
        guest::cpu()->r[1] = r1_1;
        return 0u;
    }
    if ((u32(*gptr<u8>(r0_1 + 0x1cu)) & 0xfu) == 0) {  // (from the original)
        guest::cpu()->r[1] = r1_1;
        return 1u;
    }
    guest::cpu()->r[1] = r1_1;
    return 0u;
}

}  // namespace d_00313a40
GUEST_EXPORT(0x00313a40, d_00313a40::f_00313a40);

// f_00313a8c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00313a8c {


u32 f_00313a8c() {
    return 0xab7f30u;  // (from the original)
}

}  // namespace d_00313a8c
GUEST_EXPORT(0x00313a8d, d_00313a8c::f_00313a8c);

// f_00313acc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00313acc {

struct __attribute__((packed)) Local_00313acc_ea_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_00313acc_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_00313acc_ea_1, word_4, 0x4);

struct __attribute__((packed)) Local_00313acc_ea_2 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_00313acc_ea_2, word_0, 0x0);
GUEST_OFFSET(Local_00313acc_ea_2, word_4, 0x4);

struct __attribute__((packed)) Local_00313acc_r0_63 {
    u8 unknown_0[0x18];  // (not used here)
    u32 word_18;
    u32 word_1c;
    u32 word_20;
    u32 word_24;
    u32 word_28;
    u32 word_2c;
    u32 word_30;
    u32 word_34;
    u32 word_38;
    u32 word_3c;
    u32 word_40;
    u32 word_44;
    u32 word_48;
    u32 word_4c;
    u32 word_50;
};
GUEST_OFFSET(Local_00313acc_r0_63, word_18, 0x18);
GUEST_OFFSET(Local_00313acc_r0_63, word_1c, 0x1c);
GUEST_OFFSET(Local_00313acc_r0_63, word_20, 0x20);
GUEST_OFFSET(Local_00313acc_r0_63, word_24, 0x24);
GUEST_OFFSET(Local_00313acc_r0_63, word_28, 0x28);
GUEST_OFFSET(Local_00313acc_r0_63, word_2c, 0x2c);
GUEST_OFFSET(Local_00313acc_r0_63, word_30, 0x30);
GUEST_OFFSET(Local_00313acc_r0_63, word_34, 0x34);
GUEST_OFFSET(Local_00313acc_r0_63, word_38, 0x38);
GUEST_OFFSET(Local_00313acc_r0_63, word_3c, 0x3c);
GUEST_OFFSET(Local_00313acc_r0_63, word_40, 0x40);
GUEST_OFFSET(Local_00313acc_r0_63, word_44, 0x44);
GUEST_OFFSET(Local_00313acc_r0_63, word_48, 0x48);
GUEST_OFFSET(Local_00313acc_r0_63, word_4c, 0x4c);
GUEST_OFFSET(Local_00313acc_r0_63, word_50, 0x50);

struct __attribute__((packed)) Local_00313acc_r0_9 {
    u8 unknown_0[0x18];  // (not used here)
    u32 word_18;
    u32 word_1c;
    u32 word_20;
    u32 word_24;
    u32 word_28;
    u32 word_2c;
    u32 word_30;
    u32 word_34;
};
GUEST_OFFSET(Local_00313acc_r0_9, word_18, 0x18);
GUEST_OFFSET(Local_00313acc_r0_9, word_1c, 0x1c);
GUEST_OFFSET(Local_00313acc_r0_9, word_20, 0x20);
GUEST_OFFSET(Local_00313acc_r0_9, word_24, 0x24);
GUEST_OFFSET(Local_00313acc_r0_9, word_28, 0x28);
GUEST_OFFSET(Local_00313acc_r0_9, word_2c, 0x2c);
GUEST_OFFSET(Local_00313acc_r0_9, word_30, 0x30);
GUEST_OFFSET(Local_00313acc_r0_9, word_34, 0x34);

inline constexpr u32 vtable_script__WordFix_16u_ = 0x00909b28u;
inline constexpr u32 vtable_script__WordFix_19u_ = 0x00909c78u;
inline constexpr u32 vtable_script__WordFix_30u_ = 0x00909ea8u;
inline constexpr u32 vtable_script__WordFix_40u_ = 0x0090a030u;
inline constexpr u32 vtable_script__WordFix_50u_ = 0x0090a148u;
inline constexpr u32 vtable_script__WordFix_9u_ = 0x0090a3e8u;
inline guest::global<u32, 0x0095decc> global_0095decc;
inline constexpr guest::Function<0x002f825c, u32(u32, u32)> call_002f825c;
inline constexpr guest::Function<0x00300914, u32(u32, u32, u32)> call_00300914;
inline constexpr guest::Function<0x00300924, u32(u32, u32, u32)> call_00300924;
inline constexpr guest::Function<0x00300a64, u32(u32, u32, u32)> call_00300a64;
inline constexpr guest::Function<0x003083bc, u32(u32, u32, u32, u32)> call_003083bc;
inline constexpr guest::Function<0x00312bd0, u32(u32)> call_00312bd0;
inline constexpr guest::Function<0x00312c4c, u32(u32, u32, u32, u32)> call_00312c4c;
inline constexpr guest::Function<0x00312ca0, u32(u32, u32, u32)> call_00312ca0;
inline constexpr guest::Function<0x00312cb0, u32(u32)> call_00312cb0;
inline constexpr guest::Function<0x00568a80, u32(u32, u32, u32, u32)> call_00568a80;
inline constexpr guest::Function<0x0056d374, u32(u32, u32, u32, u32)> call_0056d374;
inline constexpr guest::Function<0x0056d488, u32(u32, u32, u32)> call_0056d488;
inline constexpr guest::Function<0x0056e04c, u32(u32, u32, u32, u32)> call_0056e04c;
inline constexpr guest::Function<0x005e2c98, u32(u32, u32, u32)> call_005e2c98;
inline constexpr guest::Function<0x005e2eb4, u32(u32, u32)> call_005e2eb4;
inline constexpr guest::Function<0x005ea8dc, u32(u32, u32)> call_005ea8dc;
inline constexpr guest::Function<0x005ea8f8, u32(u32, u32, u32, u32)> call_005ea8f8;
inline constexpr guest::Function<0x005ea964, u32(u32, u32, u32, u32)> call_005ea964;
inline constexpr guest::Function<0x005f11f4, u32(u32, u32, u32)> call_005f11f4;
inline constexpr guest::Function<0x005f1224, u32(u32, u32, u32)> call_005f1224;
inline constexpr guest::Function<0x005f12f4, u32(u32, u32, u32)> call_005f12f4;
inline constexpr guest::Function<0x005f4bfc, u32(u32, u32)> call_005f4bfc;
inline constexpr guest::Function<0x0070eebc, u32(u32)> call_0070eebc;

struct __attribute__((packed)) Frame_00313acc {
    u32 word_0;
    u32 word_4;
    u8 unknown_8[0x78];  // (not read or written by name)
    u32 word_80;
    u8 unknown_84[0x64];  // (not read or written by name)
    u32 word_e8;
    u8 unknown_ec[0x3c];  // (not read or written by name)
    u32 word_128;
    u8 unknown_12c[0x3c];  // (not read or written by name)
    u32 word_168;
    u8 unknown_16c[0x34];  // (not read or written by name)
    u32 word_1a0;
    u8 unknown_1a4[0x28];  // (not read or written by name)
    u32 word_1cc;
    u8 unknown_1d0[0x28];  // (not read or written by name)
    u32 word_1f8;
    u8 unknown_1fc[0x9c];  // (not read or written by name)
    u32 word_298;
    u8 unknown_29c[0x10];  // (not read or written by name)
};
GUEST_OFFSET(Frame_00313acc, word_0, 0x0);
GUEST_OFFSET(Frame_00313acc, word_4, 0x4);
GUEST_OFFSET(Frame_00313acc, word_80, 0x80);
GUEST_OFFSET(Frame_00313acc, word_e8, 0xe8);
GUEST_OFFSET(Frame_00313acc, word_128, 0x128);
GUEST_OFFSET(Frame_00313acc, word_168, 0x168);
GUEST_OFFSET(Frame_00313acc, word_1a0, 0x1a0);
GUEST_OFFSET(Frame_00313acc, word_1cc, 0x1cc);
GUEST_OFFSET(Frame_00313acc, word_1f8, 0x1f8);
GUEST_OFFSET(Frame_00313acc, word_298, 0x298);
GUEST_SIZE(Frame_00313acc, 0x2ac);

void f_00313acc(u32 r0, u32 r1_unused, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_00313acc> frame;  // the original's stack frame
    u32 nf_1 = 0;
    u32 vf_1 = 0;
    u32 zf_1 = 0;
    u32 r2_3 = 0;
    u32 zf_2 = 0;
    u32 r2_9 = 0;
    u32 zf_3 = 0;
    u32 r2_13 = 0;
    u32 zf_4 = 0;
    u32 r2_19 = 0;
    u32 zf_5 = 0;
    u32 r2_25 = 0;
    u32 zf_6 = 0;
    u32 r2_32 = 0;
    u32 zf_8 = 0;
    u32 zf_9 = 0;
    u32 r2_42 = 0;
    u32 r5 = r0;
    u32 r4 = 0u;
    u32 r8 = 0x94feccu;  // (from the original)
    do {
        u32 r0_1 = r4 + (r4 << 4);
        u32 r1_1 = *gptr<u32>(r8 + (r4 << 2));
        u32 r6_2 = ((r5 + ((r0_1 + (r0_1 << 1)) << 2)) + 0x400u) + 0xd4u;  // (from the original)
        u32 r0_5 = call_00568a80(r5 + 0x4cu, r1_1, r2, r3);  // (from the original)
        call_005e2c98(r6_2, r0_5, 0u);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        gptr<Local_00313acc_ea_1> ea_1 = gptr<Local_00313acc_ea_1>(r0_5 + 0xe4u);  // (from the original)
        u32 r0_6 = ea_1->word_0;
        u32 r1_2 = ea_1->word_4;
        r4 += 1u;
        u32 res_1 = r4 - 5u;
        nf_1 = res_1 >> 0x1f;  // (from the original)
        vf_1 = ((r4 ^ 5u) & (r4 ^ res_1)) >> 0x1f;  // (from the original)
        gptr<Local_00313acc_ea_2> ea_2 = gptr<Local_00313acc_ea_2>(r6_2 + 0xc4u);  // (from the original)
        ea_2->word_0 = r0_6;
        ea_2->word_4 = r1_2;
        guest::preempt();
    } while (nf_1 != vf_1);
    u32 r0_7 = frame.at(0x168).addr();  // (from the original)
    call_003083bc(r0_7, frame.at(0x180).addr(), 0x10u, r3);  // (from the original)
    frame->word_298 = vtable_script__WordFix_16u_;
    *gptr<u32>(r0_7) = vtable_script__WordFix_16u_;
    u32 r0_8 = r0_7 + 0xcu;  // (from the original)
    call_005f4bfc(r0_8, 0x909b28u);  // (from the original)
    r3 = guest::cpu()->r[3];
    gptr<Local_00313acc_r0_9> r0_9 = gptr<Local_00313acc_r0_9>(r0_8 - 0xcu);  // (from the original)
    r4 = 0u;
    r0_9->word_18 = r4;
    r0_9->word_1c = r4;
    r0_9->word_20 = r4;
    r0_9->word_24 = r4;
    r0_9->word_28 = r4;
    r0_9->word_2c = r4;
    u32 r9 = 0x8906ecu;  // (from the original)
    r0_9->word_30 = r4;
    r0_9->word_34 = r4;
    u32 r1 = 8u;
    r0 = r0_9.addr() + 0x16u;  // (from the original)
    do {
        u32 r2_2 = *gptr<u16>(r9);
        u32 res_2 = r1 - 1u;
        zf_1 = res_2 == 0;
        r1 = res_2;
        *gptr<u16>(r0 + 2u) = u16(r2_2);
        r2_3 = *gptr<u16>(r9);
        u32 ea_4 = r0 + 4u;
        *gptr<u16>(ea_4) = u16(r2_3);
        r0 = ea_4;
        guest::preempt();
    } while (!zf_1);
    u32 r10 = 0x95deccu;  // (from the original)
    call_005ea8f8(*gptr<u32>(r10), 0u, r2_3, r3);
    frame->word_0 = r4;
    u32 r0_11 = *gptr<u32>(r10);
    u32 r11 = r4;
    call_005ea964(r0_11, frame.at(0x168).addr(), 0x313f48u, 0xe9u);  // (from the original)
    call_005ea8dc(*gptr<u32>(r10), 0u);
    call_005e2eb4((r5 + 0x400u) + 0xd4u, frame.at(0x168).addr());  // (from the original)
    u32 r0_15 = frame.at(0x1a0).addr();  // (from the original)
    call_003083bc(r0_15, frame.at(0x1b8).addr(), 9u, guest::cpu()->r[3]);  // (from the original)
    r8 = vtable_script__WordFix_9u_;
    *gptr<u32>(r0_15) = r8;
    u32 r0_16 = r0_15 + 0xcu;  // (from the original)
    call_005f4bfc(r0_16, guest::cpu()->r[1]);
    u32 r4_1 = r0_16 - 0xcu;  // (from the original)
    call_002f825c(r0_16 + 0xcu, 0x12u);  // (from the original)
    r3 = guest::cpu()->r[3];
    u32 r1_8 = *gptr<u16>(r9);
    r0 = r4_1 + 0x18u;  // (from the original)
    *gptr<u16>(r4_1 + 0x18u) = u16(r1_8);  // (from the original)
    r1 = 4u;
    do {
        u32 r2_8 = *gptr<u16>(r9);
        u32 res_3 = r1 - 1u;
        zf_2 = res_3 == 0;
        r1 = res_3;
        *gptr<u16>(r0 + 2u) = u16(r2_8);
        r2_9 = *gptr<u16>(r9);
        u32 ea_6 = r0 + 4u;
        *gptr<u16>(ea_6) = u16(r2_9);
        r0 = ea_6;
        guest::preempt();
    } while (!zf_2);
    r4 = (r5 + 0x1800u) + 0x84u;  // (from the original)
    call_0056e04c(frame.at(0x1a0).addr(), (*gptr<u32>(r4) + 0x5400u) + 0x1bcu, r2_9, r3);  // (from the original)
    u32 r0_20 = frame.at(0xe8).addr();  // (from the original)
    call_003083bc(r0_20, frame.at(0x100).addr(), 0x13u, guest::cpu()->r[3]);  // (from the original)
    u32 r7 = vtable_script__WordFix_19u_;
    *gptr<u32>(r0_20) = r7;
    u32 r0_21 = r0_20 + 0xcu;  // (from the original)
    call_005f4bfc(r0_21, guest::cpu()->r[1]);
    u32 r6_3 = r0_21 - 0xcu;  // (from the original)
    call_002f825c(r0_21 + 0xcu, 0x26u);  // (from the original)
    r3 = guest::cpu()->r[3];
    u32 r1_13 = *gptr<u16>(r9);
    r0 = r6_3 + 0x18u;  // (from the original)
    *gptr<u16>(r6_3 + 0x18u) = u16(r1_13);  // (from the original)
    r1 = 9u;
    do {
        u32 r2_12 = *gptr<u16>(r9);
        u32 res_4 = r1 - 1u;
        zf_3 = res_4 == 0;
        r1 = res_4;
        *gptr<u16>(r0 + 2u) = u16(r2_12);
        r2_13 = *gptr<u16>(r9);
        u32 ea_8 = r0 + 4u;
        *gptr<u16>(ea_8) = u16(r2_13);
        r0 = ea_8;
        guest::preempt();
    } while (!zf_3);
    call_005ea8f8(*gptr<u32>(r10), 0u, r2_13, r3);
    call_005f12f4(*gptr<u32>(*gptr<u32>(r10) + 0x14u), frame.at(0x1a0).addr(), 0u);  // (from the original)
    frame->word_0 = r11;
    call_005ea964(*gptr<u32>(r10), frame.at(0xe8).addr(), 0x313f48u, 0xeau);  // (from the original)
    call_005ea8dc(*gptr<u32>(r10), 0u);
    call_005e2eb4(r5 + 0x5a0u, frame.at(0xe8).addr());  // (from the original)
    frame->word_1f8 = 4;
    u32 r0_29 = frame.at(0x1cc).addr();  // (from the original)
    call_003083bc(r0_29, frame.at(0x1e4).addr(), 9u, guest::cpu()->r[3]);  // (from the original)
    *gptr<u32>(r0_29) = r8;
    u32 r0_30 = r0_29 + 0xcu;  // (from the original)
    call_005f4bfc(r0_30, guest::cpu()->r[1]);
    u32 r6 = r0_30 - 0xcu;  // (from the original)
    call_002f825c(r0_30 + 0xcu, 0x12u);  // (from the original)
    r3 = guest::cpu()->r[3];
    u32 r1_19 = *gptr<u16>(r9);
    r0 = r6 + 0x18u;  // (from the original)
    *gptr<u16>(r6 + 0x18u) = u16(r1_19);  // (from the original)
    r1 = 4u;
    do {
        u32 r2_18 = *gptr<u16>(r9);
        u32 res_5 = r1 - 1u;
        zf_4 = res_5 == 0;
        r1 = res_5;
        *gptr<u16>(r0 + 2u) = u16(r2_18);
        r2_19 = *gptr<u16>(r9);
        u32 ea_10 = r0 + 4u;
        *gptr<u16>(ea_10) = u16(r2_19);
        r0 = ea_10;
        guest::preempt();
    } while (!zf_4);
    call_0056d374(r6, frame->word_1f8, r2_19, r3);
    u32 r1_22 = (*gptr<u32>(r4) + 0x5500u) + 0xa6u;  // (from the original)
    u32 r2_20 = *gptr<u8>(r1_22 + 0x14u);  // (from the original)
    call_0056d488(frame.at(0x1cc).addr(), r1_22 + 2u, r2_20 & 1u);  // (from the original)
    u32 r0_34 = frame.at(0x128).addr();  // (from the original)
    call_003083bc(r0_34, frame.at(0x140).addr(), 0x13u, guest::cpu()->r[3]);  // (from the original)
    *gptr<u32>(r0_34) = r7;
    u32 r0_35 = r0_34 + 0xcu;  // (from the original)
    call_005f4bfc(r0_35, guest::cpu()->r[1]);
    u32 r6_4 = r0_35 - 0xcu;  // (from the original)
    call_002f825c(r0_35 + 0xcu, 0x26u);  // (from the original)
    r3 = guest::cpu()->r[3];
    u32 r1_26 = *gptr<u16>(r9);
    r0 = r6_4 + 0x18u;  // (from the original)
    *gptr<u16>(r6_4 + 0x18u) = u16(r1_26);  // (from the original)
    r1 = 9u;
    do {
        u32 r2_24 = *gptr<u16>(r9);
        u32 res_6 = r1 - 1u;
        zf_5 = res_6 == 0;
        r1 = res_6;
        *gptr<u16>(r0 + 2u) = u16(r2_24);
        r2_25 = *gptr<u16>(r9);
        u32 ea_12 = r0 + 4u;
        *gptr<u16>(ea_12) = u16(r2_25);
        r0 = ea_12;
        guest::preempt();
    } while (!zf_5);
    call_005ea8f8(*global_0095decc, 0u, r2_25, r3);
    call_00300a64(*gptr<u32>(*global_0095decc + 0x14u), frame.at(0x1cc).addr(), 0u);  // (from the original)
    frame->word_0 = r11;
    call_005ea964(*global_0095decc, frame.at(0x128).addr(), 0x313f48u, 0xebu);  // (from the original)
    call_005ea8dc(*global_0095decc, 0u);
    call_005e2eb4((r5 + 0x400u) + 0x26cu, frame.at(0x128).addr());  // (from the original)
    call_00312bd0(frame.at(0x254).addr());  // (from the original)
    u32 r0_48 = *gptr<u32>((*gptr<u32>(r4) + 0x5400u) + 0x2c4u);  // (from the original)
    frame->word_0 = 4;
    call_00312c4c(frame.at(0x254).addr(), r0_48, 0xau, 0xau);  // (from the original)
    u32 r0_50 = frame.at(4).addr();
    call_003083bc(r0_50, frame.at(0x1c).addr(), 0x32u, guest::cpu()->r[3]);  // (from the original)
    r11 = vtable_script__WordFix_50u_;
    *gptr<u32>(r0_50) = r11;
    u32 r0_51 = r0_50 + 0xcu;  // (from the original)
    call_005f4bfc(r0_51, guest::cpu()->r[1]);
    call_002f825c(r0_51 + 0xcu, 0x64u);  // (from the original)
    r3 = guest::cpu()->r[3];
    r0 = (r0_51 - 0xcu) + 0x16u;  // (from the original)
    r1 = 0x19u;  // (from the original)
    do {
        u32 r2_31 = *gptr<u16>(r9);
        u32 res_7 = r1 - 1u;
        zf_6 = res_7 == 0;
        r1 = res_7;
        *gptr<u16>(r0 + 2u) = u16(r2_31);
        r2_32 = *gptr<u16>(r9);
        u32 ea_14 = r0 + 4u;
        *gptr<u16>(ea_14) = u16(r2_32);
        r0 = ea_14;
        guest::preempt();
    } while (!zf_6);
    r10 = 0x95deccu;  // (from the original)
    call_005ea8f8(*gptr<u32>(r10), 0u, r2_32, r3);
    call_00312ca0(*gptr<u32>(*gptr<u32>(r10) + 0x14u), frame.at(0x254).addr(), 0u);  // (from the original)
    u32 r0_59 = call_0070eebc((*gptr<u32>(r4) + 0x5400u) + 0x2c4u);  // (from the original)
    u32 zf_7 = r0_59 == 0;
    if (zf_7) {
        frame->word_0 = 0;
        call_005ea964(*gptr<u32>(r10), frame.at(4).addr(), 0x313f48u, 0xecu);  // (from the original)
    } else {
        u32 r0_61 = frame.at(0x1f8).addr();  // (from the original)
        call_003083bc(r0_61, frame.at(0x210).addr(), 0x1eu, guest::cpu()->r[3]);  // (from the original)
        r6 = vtable_script__WordFix_30u_;
        *gptr<u32>(r0_61) = r6;
        u32 r0_62 = r0_61 + 0xcu;  // (from the original)
        call_005f4bfc(r0_62, guest::cpu()->r[1]);
        gptr<Local_00313acc_r0_63> r0_63 = gptr<Local_00313acc_r0_63>(r0_62 - 0xcu);  // (from the original)
        r0_63->word_18 = 0;
        r0_63->word_1c = 0;
        r0_63->word_20 = 0;
        r0_63->word_24 = 0;
        r0_63->word_28 = 0;
        r0_63->word_2c = 0;
        r0_63->word_30 = 0;
        r0_63->word_34 = 0;
        r0_63->word_38 = 0;
        r0_63->word_3c = 0;
        r0_63->word_40 = 0;
        r0_63->word_44 = 0;
        r0_63->word_48 = 0;
        r0_63->word_4c = 0;
        r0_63->word_50 = 0;
        r0 = r0_63.addr() + 0x16u;  // (from the original)
        r1 = 0xfu;  // (from the original)
        do {
            u32 r2_36 = *gptr<u16>(r9);
            u32 res_8 = r1 - 1u;
            zf_8 = res_8 == 0;
            r1 = res_8;
            *gptr<u16>(r0 + 2u) = u16(r2_36);
            u32 r2_37 = *gptr<u16>(r9);
            u32 ea_16 = r0 + 4u;
            *gptr<u16>(ea_16) = u16(r2_37);
            r0 = ea_16;
            guest::preempt();
        } while (!zf_8);
        u32 r0_67 = *gptr<u8>(((*gptr<u32>(r4) + 0x5400u) + 0x2c4u) + 0x14u);  // (from the original)
        frame->word_0 = 0;
        call_005ea964(*gptr<u32>(r10), frame.at(0x1f8).addr(), 0x314210u, r0_67 + 0x21u);  // (from the original)
        call_005f11f4(*gptr<u32>(*gptr<u32>(r10) + 0x14u), frame.at(0x1f8).addr(), 0x11u);  // (from the original)
        frame->word_0 = 0;
        call_005ea964(*gptr<u32>(r10), frame.at(4).addr(), 0x313f48u, 0x1b0u);  // (from the original)
        frame->word_1f8 = r6;
    }
    call_005ea8dc(*global_0095decc, 0u);
    call_005e2eb4((r5 + 0x400u) + 0x338u, frame.at(4).addr());  // (from the original)
    r4 = *gptr<u32>((*gptr<u32>(r5 + 0x1880u) + 0x7d00u) + 0xccu);  // (from the original)
    u32 r0_77 = frame.at(0x80).addr();  // (from the original)
    call_003083bc(r0_77, frame.at(0x98).addr(), 0x28u, guest::cpu()->r[3]);  // (from the original)
    r10 = vtable_script__WordFix_40u_;
    *gptr<u32>(r0_77) = r10;
    u32 r0_78 = r0_77 + 0xcu;  // (from the original)
    call_005f4bfc(r0_78, guest::cpu()->r[1]);
    call_002f825c(r0_78 + 0xcu, 0x50u);  // (from the original)
    r3 = guest::cpu()->r[3];
    r1 = (r0_78 - 0xcu) + 0x16u;  // (from the original)
    r0 = 0x14u;  // (from the original)
    do {
        u32 r2_41 = *gptr<u16>(r9);
        u32 res_9 = r0 - 1u;
        zf_9 = res_9 == 0;
        r0 = res_9;
        *gptr<u16>(r1 + 2u) = u16(r2_41);
        r2_42 = *gptr<u16>(r9);
        u32 ea_18 = r1 + 4u;
        *gptr<u16>(ea_18) = u16(r2_42);
        r1 = ea_18;
        guest::preempt();
    } while (!zf_9);
    call_005ea8f8(*global_0095decc, 0u, r2_42, r3);
    call_005f1224(*gptr<u32>(*global_0095decc + 0x14u), uxth(r4), 0u);  // (from the original)
    call_00300914(*gptr<u32>(*global_0095decc + 0x14u), (r4 << 8) >> 0x18, 0u);  // (from the original)
    call_00300924(*gptr<u32>(*global_0095decc + 0x14u), r4 >> 0x18, 0u);  // (from the original)
    frame->word_0 = 0;
    call_005ea964(*global_0095decc, frame.at(0x80).addr(), 0x313f48u, 0xedu);  // (from the original)
    call_005ea8dc(*global_0095decc, 0u);
    call_005e2eb4((r5 + 0x800u) + 4u, frame.at(0x80).addr());  // (from the original)
    frame->word_80 = r10;
    frame->word_4 = r11;
    call_00312cb0(frame.at(0x254).addr());  // (from the original)
    frame->word_128 = r7;
    frame->word_1cc = r8;
    frame->word_e8 = r7;
    frame->word_1a0 = r8;
    frame->word_168 = frame->word_298;
}

}  // namespace d_00313acc
GUEST_EXPORT_FRAMED(0x00313acc, d_00313acc::f_00313acc, 0x4ff0);  // pushes {r4, r5, r6, r7, r8, r9, r10, r11, lr} first, as the original

// f_00314278: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00314278 {


u32 f_00314278(u32 r0, u32 r1, u32 r2_unused, u32 r3) {
    u32 r13 = guest::cpu()->r[13];
    u32 r2_1 = *gptr<u32>(r13);
    if (r0 != r3 || sxtb(r1) != sxtb(r2_1)) {
        guest::cpu()->r[1] = r1;
        return 0u;
    }
    u32 r0_1 = s32(r1 << 0x10) >> 0x18;  // (from the original)
    u32 r1_1 = s32(r2_1 << 0x10) >> 0x18;  // (from the original)
    if (r0_1 == r1_1) {
        guest::cpu()->r[1] = r1_1;
        return 1u;
    }
    guest::cpu()->r[1] = r1_1;
    return 0u;
}

}  // namespace d_00314278
GUEST_EXPORT(0x00314278, d_00314278::f_00314278);

// f_00314b40: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00314b40 {


u32 f_00314b40(u32 r0, u32 r1) {
    u32 r0_1 = 0;
    if (r0 >= 0xfcu) {  // (from the original)
        r0_1 = 0u;
    } else {
        r1 = 0x88c528u;  // (from the original)
        r0_1 = *gptr<s8>(r1 + r0);
    }
    guest::cpu()->r[1] = r1;
    return r0_1;
}

}  // namespace d_00314b40
GUEST_EXPORT(0x00314b40, d_00314b40::f_00314b40);

// f_00314c04: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00314c04 {


u32 f_00314c04(u32 r0, u32 r1) {
    u32 r0_1 = 0;
    if (r0 >= 0xfcu) {  // (from the original)
        r0_1 = 0u;
    } else {
        r1 = 0x88c626u;  // (from the original)
        r0_1 = *gptr<s8>(r1 + r0);
    }
    guest::cpu()->r[1] = r1;
    return r0_1;
}

}  // namespace d_00314c04
GUEST_EXPORT(0x00314c04, d_00314c04::f_00314c04);

// f_00314d40: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00314d40 {

struct __attribute__((packed)) Object_00314d40_0 {
    u8 unknown_0[0x34];  // (not used here)
    u32 word_34;
    u32 word_38;
};
GUEST_OFFSET(Object_00314d40_0, word_34, 0x34);
GUEST_OFFSET(Object_00314d40_0, word_38, 0x38);

inline guest::global<u32, 0x00851ae8> global_00851ae8;
inline guest::global<u32, 0x00851aec> global_00851aec;
inline guest::global<u32, 0x00851b08> global_00851b08;
inline guest::global<u32, 0x00851b0c> global_00851b0c;
inline guest::global<u32, 0x00851b10> global_00851b10;
inline guest::global<u32, 0x00851b14> global_00851b14;
inline guest::global<u32, 0x00851b60> global_00851b60;
inline guest::global<u32, 0x00851b64> global_00851b64;
inline guest::global<u8, 0x0094fe94> global_0094fe94;
inline constexpr guest::Function<0x001fa354, u32(u32)> call_001fa354;
inline constexpr guest::Function<0x002f6adc, u32(u32, u32, u32)> call_002f6adc;
inline constexpr guest::Function<0x002f6b14, u32(u32)> call_002f6b14;
inline constexpr guest::Function<0x002f6e14, u32(u32)> call_002f6e14;
inline constexpr guest::Function<0x002f71e4, u32(u32, u32, u32, u32)> call_002f71e4;
inline constexpr guest::Function<0x006d1e64, u32(u32, u32, u32, u32)> call_006d1e64;
inline constexpr guest::Function<0x00819c2c, u32(u32, u32, u32, u32)> call_00819c2c;

void f_00314d40(gptr<Object_00314d40_0> arg0) {
    guest::StackFrame frame(0x10);  // the original's stack frame
    u32 r0 = arg0.addr();
    u32 r1 = 0;
    u32 r2 = 0;
    u32 r0_2 = 0;
    u32 r1_1 = 0;
    u32 r2_2 = 0;
    u32 r1_2 = 0;
    u32 r0_6 = 0;
    u32 r1_4 = 0;
    u32 r2_4 = 0;
    u32 r0_7 = 0;
    u32 r4 = r0;
    *global_0094fe94 = 1;
    u32 r2_1 = arg0->word_34;
    u32 r0_1 = *global_00851b64;
    if (r2_1 != *global_00851b60) {
        goto L_314da4;
    }
    if ((r2_1 != 0 || ((arg0->word_38 | r0_1) & 1u) != 0) && *gptr<u32>(r4 + 0x38u) != r0_1) {  // (from the original)
        goto L_314da4;
    }
    r0_2 = r4 + 0x28u;  // (from the original)
    r1_1 = *global_00851b08;
    r2_2 = *global_00851b0c;
    call_00819c2c(r0_2, r1_1, r2_2, guest::cpu()->r[3]);
    return;
L_314da4:;
    u32 r0_3 = *global_00851aec;
    if (r2_1 == *global_00851ae8) {
        if (r2_1 == 0) {
            r1_2 = *gptr<u32>(r4 + 0x38u) | r0_3;  // (from the original)
            if ((r1_2 & 1u) == 0) {
                goto L_314dd8;
            }
        }
        r1_2 = *gptr<u32>(r4 + 0x38u);  // (from the original)
        if (r1_2 != r0_3) {
            return;
        }
L_314dd8:;
        u32 r0_4 = call_006d1e64(r0_3, r1_2, r2_1, guest::cpu()->r[3]);
        u32 r0_5 = *gptr<u32>(r0_4 + 0x1f4u);  // (from the original)
        *gptr<u8>(r0_5 + 0x4d7u) = 1;  // (from the original)
        call_001fa354(r0_5);
        if (*gptr<u8>(r4 + 0x1890u) == 1u) {  // (from the original)
            goto L_314e4c;
        }
        r0_6 = r4 + 0x28u;  // (from the original)
        r1_4 = *global_00851b08;
        r2_4 = *global_00851b0c;
        call_00819c2c(r0_6, r1_4, r2_4, guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
L_314e0c:;
        r0_7 = r4 + 0xb34u;  // (from the original)
        call_002f6adc(r0_7, r1, r2);
        call_002f6b14(r0_7);
        call_002f6e14(r0_7);
        *gptr<u32>(r4 + 0xc08u) = *gptr<u32>(r4 + 0xc08u) | 8u;  // (from the original)
        frame.release();
        call_002f71e4(r0_7, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
        return;
L_314e4c:;
        call_00819c2c(r4 + 0x28u, *global_00851b10, *global_00851b14, guest::cpu()->r[3]);  // (from the original)
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        guest::preempt();
        goto L_314e0c;
    }
}

}  // namespace d_00314d40
GUEST_EXPORT(0x00314d40, d_00314d40::f_00314d40);

// f_00315110: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00315110 {

struct __attribute__((packed)) Local_00315110_ea_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
    u32 word_18;
    u32 word_1c;
    u32 word_20;
};
GUEST_OFFSET(Local_00315110_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_00315110_ea_1, word_4, 0x4);
GUEST_OFFSET(Local_00315110_ea_1, word_8, 0x8);
GUEST_OFFSET(Local_00315110_ea_1, word_c, 0xc);
GUEST_OFFSET(Local_00315110_ea_1, word_10, 0x10);
GUEST_OFFSET(Local_00315110_ea_1, word_14, 0x14);
GUEST_OFFSET(Local_00315110_ea_1, word_18, 0x18);
GUEST_OFFSET(Local_00315110_ea_1, word_1c, 0x1c);
GUEST_OFFSET(Local_00315110_ea_1, word_20, 0x20);

struct __attribute__((packed)) Local_00315110_r0_1 {
    u8 unknown_0[0x8];  // (not used here)
    u32 word_8;
    u32 word_c;
};
GUEST_OFFSET(Local_00315110_r0_1, word_8, 0x8);
GUEST_OFFSET(Local_00315110_r0_1, word_c, 0xc);

struct __attribute__((packed)) Local_00315110_r0_11 {
    u32 word_0;
    u8 unknown_4[0xc];  // (not used here)
    u16 half_10;
};
GUEST_OFFSET(Local_00315110_r0_11, word_0, 0x0);
GUEST_OFFSET(Local_00315110_r0_11, half_10, 0x10);

struct __attribute__((packed)) Local_00315110_r0_8 {
    u8 unknown_0[0x8];  // (not used here)
    u32 word_8;
    u32 word_c;
};
GUEST_OFFSET(Local_00315110_r0_8, word_8, 0x8);
GUEST_OFFSET(Local_00315110_r0_8, word_c, 0xc);

struct __attribute__((packed)) Local_00315110_r2_2 {
    u8 unknown_0[0x8];  // (not used here)
    u32 word_8;
    u32 word_c;
};
GUEST_OFFSET(Local_00315110_r2_2, word_8, 0x8);
GUEST_OFFSET(Local_00315110_r2_2, word_c, 0xc);

struct __attribute__((packed)) Local_00315110_r2_8 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_00315110_r2_8, word_0, 0x0);
GUEST_OFFSET(Local_00315110_r2_8, word_4, 0x4);
GUEST_OFFSET(Local_00315110_r2_8, word_8, 0x8);

inline guest::global<u8, 0x00952b9d> global_00952b9d;
inline constexpr guest::Function<0x002fc8e8, u32(u32, u32)> call_002fc8e8;
inline constexpr guest::Function<0x002fcaf4, u32(u32, u32)> call_002fcaf4;
inline constexpr guest::Function<0x002feb00, u32(u32, u32, u32, u32)> call_002feb00;
inline constexpr guest::Function<0x002ff160, u32(u32, u32, u32)> call_002ff160;
inline constexpr guest::Function<0x00300a74, u32(u32, u32, u32, u32)> call_00300a74;

void f_00315110(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r13 = guest::cpu()->r[13];
    u32 r14 = guest::cpu()->r[14];
    u32 r0_12 = 0;
    gptr<Local_00315110_ea_1> ea_1 = gptr<Local_00315110_ea_1>(r13 - 0x24);  // (from the original)
    ea_1->word_0 = r0;
    ea_1->word_4 = r1;
    ea_1->word_8 = r2;
    ea_1->word_c = r3;
    ea_1->word_10 = r4;
    ea_1->word_14 = r5;
    ea_1->word_18 = r6;
    ea_1->word_1c = r7;
    ea_1->word_20 = r14;
    r13 = ea_1.addr() - 0xcu;  // (from the original)
    r5 = r0;
    *gptr<u32>(r13 + 4u) = 0;
    *gptr<u32>(r13) = r5 + 0x180u;  // (from the original)
    do {
        gptr<Local_00315110_r0_1> r0_1 = gptr<Local_00315110_r0_1>(*gptr<u32>(r13 + 0x10u));  // (from the original)
        u32 r3_1 = r0_1->word_c;
        u32 r2_1 = r0_1->word_8;
        r1 = *gptr<u32>(*gptr<u32>(r13 + 0x14u) + 8u);  // (from the original)
        u32 r0_2 = *gptr<u32>(r13 + 4u) << 2;
        r6 = r3_1 + *gptr<u32>(r0_2 + 0x8657ccu);  // (from the original)
        r4 = r2_1 + *gptr<u32>(r0_2 + 0x8657acu);  // (from the original)
        if (r1 != r4 || *gptr<u32>(*gptr<u32>(r13 + 0x14u) + 0xcu) != r6) {  // (from the original)
            if (*gptr<u32>(r13 + 0x30u) == 0) {  // (from the original)
                r1 = *gptr<u32>(*gptr<u32>(r13));
                r0 = 0u;
                if (s32(r1) > 0) {
                    do {
                        gptr<Local_00315110_r2_2> r2_2 = gptr<Local_00315110_r2_2>(0x14u * r0 + r5);  // (from the original)
                        if (r2_2->word_8 == r4 && r2_2->word_c == r6) {
                            goto L_3151fe;
                        }
                        r0 += 1u;
                        guest::preempt();
                    } while (s32(r1) > s32(r0));
                }
            }
            u32 r0_3 = *gptr<u32>(r13 + 0x18u);  // (from the original)
            guest::cpu()->r[13] = r13;
            u32 r0_4 = call_002feb00(r0_3, r4, r6, 0u);
            r1 = guest::cpu()->r[1];
            *gptr<u32>(r13 + 8u) = r0_4;
            if (r0_4 != 0) {
                guest::cpu()->r[13] = r13;
                u32 r0_5 = call_002fcaf4(r0_4, r1);
                r1 = guest::cpu()->r[1];
                if (r0_5 != 0) {
                    u32 r2_4 = *global_00952b9d;
                    guest::cpu()->r[13] = r13;
                    u32 r0_6 = call_002ff160(r4, r6, r2_4);
                    r1 = guest::cpu()->r[1];
                    if (r0_6 != 0) {
                        u32 r2_5 = *global_00952b9d;
                        guest::cpu()->r[13] = r13;
                        u32 r0_7 = call_00300a74(r4, r6, r2_5, guest::cpu()->r[3]);
                        gptr<Local_00315110_r0_8> r0_8 = gptr<Local_00315110_r0_8>(*gptr<u32>(r13 + 0x10u));  // (from the original)
                        u32 r3_5 = r0_8->word_8;
                        u32 r1_1 = r0_8->word_c;
                        u32 r2_6 = *global_00952b9d;
                        guest::cpu()->r[13] = r13;
                        u32 r0_9 = call_00300a74(r3_5, r1_1, r2_6, r3_5);
                        r1 = guest::cpu()->r[1];
                        if (r0_7 == r0_9) {
                            u32 r1_2 = *gptr<u32>(r13 + 8u);
                            u32 r0_10 = (*gptr<u32>(*gptr<u32>(r13)) << 2) + r5 + 0x140u;  // (from the original)
                            guest::cpu()->r[13] = r13;
                            call_002fc8e8(r0_10, r1_2);
                            gptr<Local_00315110_r0_11> r0_11 = gptr<Local_00315110_r0_11>(*gptr<u32>(*gptr<u32>(r13)) * 0x14u + r5);  // (from the original)
                            gptr<Local_00315110_r2_8> r2_8 = gptr<Local_00315110_r2_8>(r0_11.addr() + 4u);
                            u32 r1_3 = r4 & 0xfu;  // (from the original)
                            r2_8->word_0 = r1_3;
                            r2_8->word_4 = r4;
                            r2_8->word_8 = r6;
                            r0_11->word_0 = (r4 - 0x10u >> 4) + (r6 + (r6 << 2)) - 0x50u;  // (from the original)
                            r0_11->half_10 = u16(lsl_r(1u, r1_3 & 0xff));  // (from the original)
                            r1 = *gptr<u32>(r13);
                            *gptr<u32>(r1) = *gptr<u32>(*gptr<u32>(r13)) + 1u;
                        }
                    }
                }
            }
        }
L_3151fe:;
        r0_12 = *gptr<u32>(r13 + 4u) + 1u;
        *gptr<u32>(r13 + 4u) = r0_12;
        guest::preempt();
    } while (r0_12 < 8u);
    r13 += 0x1cu;  // (from the original)
    u32 r4_1 = *gptr<u32>(r13);
    u32 r5_1 = *gptr<u32>(r13 + 4);
    u32 r6_1 = *gptr<u32>(r13 + 8);
    u32 r7_1 = *gptr<u32>(r13 + 0xc);  // (from the original)
    u32 tpc_1 = *gptr<u32>(r13 + 0x10);  // (from the original)
    r13 += 0x14;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[4] = r4_1;
    guest::cpu()->r[5] = r5_1;
    guest::cpu()->r[6] = r6_1;
    guest::cpu()->r[7] = r7_1;
    guest::cpu()->r[13] = r13;
}

}  // namespace d_00315110
GUEST_EXPORT(0x00315111, d_00315110::f_00315110);

// f_00315924: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00315924 {

inline guest::global<u32, 0x00952bcc> global_00952bcc;
inline constexpr guest::Function<0x002fc949, u32(u32, u32, u32, u32)> call_002fc948;
inline constexpr guest::Function<0x002fc994, u32(u32, u32, u32, u32)> call_002fc994;
inline constexpr guest::Function<0x002fcbb0, u32(u32, u32)> call_002fcbb0;
inline constexpr guest::Function<0x002fe7dd, u32(u32, u32, u32, u32)> call_002fe7dc;
inline constexpr guest::Function<0x002fe7f0, u32(u32, u32, u32)> call_002fe7f0;

struct __attribute__((packed)) Frame_00315924 {
    u32 word_0;
};
GUEST_OFFSET(Frame_00315924, word_0, 0x0);
GUEST_SIZE(Frame_00315924, 0x4);

u32 f_00315924(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_00315924> frame;  // the original's stack frame
    frame->word_0 = r3;
    if ((*global_00952bcc & 1u) == 0u) {
        u32 r0_1 = call_002fe7dc(0x952bccu, r1, r2, r3);  // (from the original)
        if (r0_1 != 0) {
            call_002fcbb0(0x952bd0u, 2u);  // (from the original)
            call_002fe7f0(0x952bd0u, 0x2f777cu, 0x100000u);  // (from the original)
        }
    }
    u32 r2_2 = *gptr<u16>(r1 + 0x10u);  // (from the original)
    u32 r1_1 = *gptr<u32>(r1) << 1;
    u32 r3_3 = u32(*gptr<u16>(r0 + 0xf5cu + r1_1)) & ~r2_2;  // (from the original)
    *gptr<u16>(r0 + 0xf5cu + r1_1) = u16(r3_3);  // (from the original)
    u32 r0_3 = call_002fc948(r0 + 0xf5cu, r1_1, r2_2, r3_3);  // (from the original)
    frame->word_0 = 0;
    u32 r0_4 = call_002fc994(r0_3, 0x952bd0u, *gptr<u32>(r1 + 8u), *gptr<u32>(r1 + 0xcu));  // (from the original)
    return r0_4;
}

}  // namespace d_00315924
GUEST_EXPORT_FRAMED(0x00315925, d_00315924::f_00315924, 0x40f0);  // pushes {r4, r5, r6, r7, lr} first, as the original

// f_00315df4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00315df4 {

inline guest::global<u32, 0x00952bb4> global_00952bb4;
inline constexpr guest::Function<0x002fc949, u32(u32, u32, u32, u32)> call_002fc948;
inline constexpr guest::Function<0x002fc994, u32(u32, u32, u32, u32)> call_002fc994;
inline constexpr guest::Function<0x002fcbb0, u32(u32, u32)> call_002fcbb0;
inline constexpr guest::Function<0x002fe7dd, u32(u32, u32, u32, u32)> call_002fe7dc;
inline constexpr guest::Function<0x002fe7f0, u32(u32, u32, u32)> call_002fe7f0;

struct __attribute__((packed)) Frame_00315df4 {
    u32 word_0;
};
GUEST_OFFSET(Frame_00315df4, word_0, 0x0);
GUEST_SIZE(Frame_00315df4, 0x4);

u32 f_00315df4(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_00315df4> frame;  // the original's stack frame
    frame->word_0 = r3;
    if ((*global_00952bb4 & 1u) == 0u) {
        u32 r0_1 = call_002fe7dc(0x952bb4u, r1, r2, r3);  // (from the original)
        if (r0_1 != 0) {
            call_002fcbb0(0x952bb8u, 3u);  // (from the original)
            call_002fe7f0(0x952bb8u, 0x2f777cu, 0x100000u);  // (from the original)
        }
    }
    u32 r3_3 = *gptr<u16>(r1 + 0x10u);  // (from the original)
    u32 r0_2 = *gptr<u32>(r1) << 1;
    u32 r2_2 = u32(*gptr<u16>(r0 + 0xa54u + r0_2)) & ~r3_3;  // (from the original)
    *gptr<u16>(r0 + 0xa54u + r0_2) = u16(r2_2);  // (from the original)
    u32 r0_3 = call_002fc948(r0_2, r0 + 0xa54u, r2_2, r3_3);  // (from the original)
    frame->word_0 = 0;
    call_002fc994(r0_3, 0x952bb8u, *gptr<u32>(r1 + 8u), *gptr<u32>(r1 + 0xcu));  // (from the original)
    u32 r1_2 = *gptr<u32>(r1) << 1;
    *gptr<u16>(r0 + 0x1464u + r1_2) = u16(u32(*gptr<u16>(r0 + 0x1464u + r1_2)) & ~u32(*gptr<u16>(r1 + 0x10u)));  // (from the original)
    guest::cpu()->r[1] = r1_2;
    return r0 + 0x1464u;  // (from the original)
}

}  // namespace d_00315df4
GUEST_EXPORT_FRAMED(0x00315df5, d_00315df4::f_00315df4, 0x40f0);  // pushes {r4, r5, r6, r7, lr} first, as the original

// f_0031600c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0031600c {

inline guest::global<u32, 0x00952bbc> global_00952bbc;
inline constexpr guest::Function<0x002fc949, u32(u32, u32, u32, u32)> call_002fc948;
inline constexpr guest::Function<0x002fc994, u32(u32, u32, u32, u32)> call_002fc994;
inline constexpr guest::Function<0x002fcbb0, u32(u32, u32)> call_002fcbb0;
inline constexpr guest::Function<0x002fe7dd, u32(u32, u32, u32, u32)> call_002fe7dc;
inline constexpr guest::Function<0x002fe7f0, u32(u32, u32, u32)> call_002fe7f0;

struct __attribute__((packed)) Frame_0031600c {
    u32 word_0;
};
GUEST_OFFSET(Frame_0031600c, word_0, 0x0);
GUEST_SIZE(Frame_0031600c, 0x4);

u32 f_0031600c(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_0031600c> frame;  // the original's stack frame
    frame->word_0 = r3;
    if ((*global_00952bbc & 1u) == 0u) {
        u32 r0_1 = call_002fe7dc(0x952bbcu, r1, r2, r3);  // (from the original)
        if (r0_1 != 0) {
            call_002fcbb0(0x952bc0u, 4u);  // (from the original)
            call_002fe7f0(0x952bc0u, 0x2f777cu, 0x100000u);  // (from the original)
        }
    }
    u32 r3_3 = *gptr<u16>(r1 + 0x10u);  // (from the original)
    u32 r0_2 = *gptr<u32>(r1) << 1;
    u32 r2_2 = u32(*gptr<u16>(r0 + 0xcd8u + r0_2)) & ~r3_3;  // (from the original)
    *gptr<u16>(r0 + 0xcd8u + r0_2) = u16(r2_2);  // (from the original)
    u32 r0_3 = call_002fc948(r0_2, r0 + 0xcd8u, r2_2, r3_3);  // (from the original)
    frame->word_0 = 0;
    call_002fc994(r0_3, 0x952bc0u, *gptr<u32>(r1 + 8u), *gptr<u32>(r1 + 0xcu));  // (from the original)
    u32 r1_2 = *gptr<u32>(r1) << 1;
    *gptr<u16>(r0 + 0x1464u + r1_2) = u16(u32(*gptr<u16>(r0 + 0x1464u + r1_2)) & ~u32(*gptr<u16>(r1 + 0x10u)));  // (from the original)
    guest::cpu()->r[1] = r1_2;
    return r0 + 0x1464u;  // (from the original)
}

}  // namespace d_0031600c
GUEST_EXPORT_FRAMED(0x0031600d, d_0031600c::f_0031600c, 0x40f0);  // pushes {r4, r5, r6, r7, lr} first, as the original

// f_00316664: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00316664 {

struct __attribute__((packed)) Object_00316664_0 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
};
GUEST_OFFSET(Object_00316664_0, word_4, 0x4);

inline constexpr guest::Function<0x00723998, u32(u32, u32, u32, u32)> call_00723998;

u32 f_00316664(gptr<Object_00316664_0> arg0, u32 r1) {
    u32 r0_1 = call_00723998(arg0.addr(), r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 zf_1 = r0_1 - 0xffffu == 0;  // (from the original)
    u32 r1_1 = r0_1 - 0xffffu;  // (from the original)
    if (!zf_1) {
        r1_1 = arg0->word_4;
        zf_1 = r1_1 == 0;
    }
    if (zf_1) {
        guest::cpu()->r[1] = r1_1;
        return 0u;
    }
    if (r0_1 < 0x48u) {  // (from the original)
        guest::cpu()->r[1] = r1_1;
        return r1_1 + r0_1 * 0xcu;  // (from the original)
    }
    guest::cpu()->r[1] = r1_1;
    return 0u;
}

}  // namespace d_00316664
GUEST_EXPORT_FRAMED(0x00316664, d_00316664::f_00316664, 0x4010);  // pushes {r4, lr} first, as the original

// f_00316ebc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00316ebc {


u32 f_00316ebc(u32 r0, u32 r1) {
    if (r1 >= 0x60u) {  // (from the original)
        guest::cpu()->r[1] = r1;
        return 0u;
    }
    u32 r0_1 = *gptr<u8>(r0 + (r1 >> 3));
    u32 r1_1 = r1 & 7u;
    guest::cpu()->r[1] = r1_1;
    return lsr_r(r0_1, r1_1 & 0xff) & 1u;  // (from the original)
}

}  // namespace d_00316ebc
GUEST_EXPORT(0x00316ebc, d_00316ebc::f_00316ebc);

// f_00316edc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00316edc {


u32 f_00316edc(u32 r0, u32 r1) {
    if (r1 >= 7u) {
        guest::cpu()->r[1] = r1;
        return 0u;
    }
    u32 r0_1 = *gptr<u8>(r0 + (r1 >> 3));
    u32 r1_1 = r1 & 7u;
    guest::cpu()->r[1] = r1_1;
    return lsr_r(r0_1, r1_1 & 0xff) & 1u;  // (from the original)
}

}  // namespace d_00316edc
GUEST_EXPORT(0x00316edc, d_00316edc::f_00316edc);

// f_0031708c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0031708c {

struct __attribute__((packed)) Object_0031708c_0 {
    u32 word_0;
};
GUEST_OFFSET(Object_0031708c_0, word_0, 0x0);

inline constexpr u32 vtable_sead__SafeStringBase_char_ = 0x009047f8u;
inline constexpr guest::Function<0x0013cd00, u32(u32, u32, u32, u32)> call_0013cd00;

struct __attribute__((packed)) Frame_0031708c {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Frame_0031708c, word_0, 0x0);
GUEST_OFFSET(Frame_0031708c, word_4, 0x4);
GUEST_SIZE(Frame_0031708c, 0x8);

u32 f_0031708c(gptr<Object_0031708c_0> arg0, u32 r1) {
    guest::StackFrameOf<Frame_0031708c> frame;  // the original's stack frame
    frame->word_0 = vtable_sead__SafeStringBase_char_;
    frame->word_4 = r1;
    call_0013cd00(arg0.addr() + 0xcu, frame.at(0).addr(), ~0u, guest::cpu()->r[3]);  // (from the original)
    arg0->word_0 = 4;
    return 4u;
}

}  // namespace d_0031708c
GUEST_EXPORT_FRAMED(0x0031708c, d_0031708c::f_0031708c, 0x4010);  // pushes {r4, lr} first, as the original

// f_003171b0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_003171b0 {

inline constexpr guest::Function<0x00521ae0, u32(u32, u32)> call_00521ae0;

u32 f_003171b0() {
    return call_00521ae0(guest::cpu()->r[0], guest::cpu()->r[1]);
}

}  // namespace d_003171b0
GUEST_EXPORT(0x003171b0, d_003171b0::f_003171b0);

// f_00317a50: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00317a50 {

struct __attribute__((packed)) Object_00317a50_0 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
    u32 word_8;
    u8 unknown_c[0xe0];  // (not used here)
    u32 word_ec;
};
GUEST_OFFSET(Object_00317a50_0, word_4, 0x4);
GUEST_OFFSET(Object_00317a50_0, word_8, 0x8);
GUEST_OFFSET(Object_00317a50_0, word_ec, 0xec);

inline constexpr guest::Function<0x0056a974, u32(u32, u32, u32, u32)> call_0056a974;

u32 f_00317a50(gptr<Object_00317a50_0> arg0, u32 r1) {
    u32 r0_2 = call_0056a974(arg0.addr() + 0x1cu, r1, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    if (r0_2 == 0 || arg0->word_4 != 0) {
        guest::cpu()->r[1] = r0_2;
        return r0_2;
    }
    u32 r0_3 = arg0->word_ec;
    arg0->word_4 = r0_3;
    arg0->word_8 = r0_3;
    guest::cpu()->r[1] = r0_2;
    return r0_2;
}

}  // namespace d_00317a50
GUEST_EXPORT_FRAMED(0x00317a50, d_00317a50::f_00317a50, 0x4010);  // pushes {r4, lr} first, as the original

// f_00317cc8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00317cc8 {

struct __attribute__((packed)) Object_00317cc8_0 {
    u32 word_0;
};
GUEST_OFFSET(Object_00317cc8_0, word_0, 0x0);


u32 f_00317cc8(gptr<Object_00317cc8_0> arg0, u32 r1) {
    u32 r0_1 = 0u;
    u32 ea_1 = arg0->word_0 + 0x20u;  // (from the original)
    u32 r3_1 = *gptr<u32>(ea_1);
    u32 r2_1 = r3_1 == 0 ? r0_1 : ea_1 + r3_1;
    if (r2_1 == 0) {
        return 0u;
    }
    u32 ea_2 = r2_1 + (r1 << 4) + 0x28u;  // (from the original)
    u32 r2_2 = *gptr<u32>(ea_2);
    if (r2_2 != 0) {
        r0_1 = r2_2 + ea_2;
    }
    guest::cpu()->r[1] = ea_2;
    return r0_1;
}

}  // namespace d_00317cc8
GUEST_EXPORT(0x00317cc8, d_00317cc8::f_00317cc8);

// f_00317d8c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00317d8c {

inline constexpr u32 vtable_bgcheck__GuardBox = 0x0090ab88u;
inline constexpr guest::Function<0x002f74b0, u32(u32)> call_002f74b0;
inline constexpr guest::Function<0x006148ac, u32(u32, u32)> call_006148ac;

u32 f_00317d8c(gptr<bgcheck__GuardBox> arg0) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    arg0->word_0 = vtable_bgcheck__GuardBox;
    call_002f74b0(arg0.addr());
    frame.release();
    return call_006148ac(arg0.addr(), guest::cpu()->r[1]);
}

}  // namespace d_00317d8c
GUEST_EXPORT(0x00317d8c, d_00317d8c::f_00317d8c);

// f_00317e2c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00317e2c {

inline constexpr u32 vtable_g3d__ResourceSet = 0x0090289cu;
inline constexpr u32 vtable_g3d__ResourceLoader = 0x0090298cu;
inline constexpr guest::Function<0x00130804, u32(u32)> call_00130804;
inline constexpr guest::Function<0x001329c4, u32(u32, u32, u32, u32)> call_001329c4;
inline constexpr guest::Function<0x00132a3c, u32(u32, u32, u32)> call_00132a3c;
inline constexpr guest::Function<0x0013bc00, u32(u32, u32, u32, u32)> call_0013bc00;

struct __attribute__((packed)) Frame_00317e2c {
    u8 unknown_0[0x4];  // (not read or written by name)
    u32 word_4;
    u8 unknown_8[0x10];  // (not read or written by name)
};
GUEST_OFFSET(Frame_00317e2c, word_4, 0x4);
GUEST_SIZE(Frame_00317e2c, 0x18);

u32 f_00317e2c(gptr<g3d__ResourceSet> arg0, u32 r1_unused, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_00317e2c> frame;  // the original's stack frame
    arg0->word_0 = vtable_g3d__ResourceLoader;
    u32 r0_1 = arg0.addr() + 0x1cu;  // (from the original)
    call_0013bc00(r0_1, 0x90298cu, r2, r3);  // (from the original)
    arg0->word_0 = vtable_g3d__ResourceSet;
    if (arg0->word_4 == 0) {
        return r0_1 - 0x1cu;  // (from the original)
    }
    call_001329c4(frame.at(8).addr(), arg0->word_18, arg0->word_10, arg0->word_14);
    u32 r0_3 = arg0->word_8;
    frame->word_4 = r0_3;
    if (r0_3 != 0) {
        call_00130804(frame.at(4).addr());
    }
    u32 r1_4 = ~0u;
    arg0->word_c = r1_4;
    arg0->word_4 = 0;
    call_00132a3c(frame.at(8).addr(), r1_4, 0u);
    return r0_1 - 0x1cu;  // (from the original)
}

}  // namespace d_00317e2c
GUEST_EXPORT_FRAMED(0x00317e2c, d_00317e2c::f_00317e2c, 0x4010);  // pushes {r4, lr} first, as the original

// f_00317eac: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00317eac {

struct __attribute__((packed)) Object_00317eac_0 {
    u32 word_0;
};
GUEST_OFFSET(Object_00317eac_0, word_0, 0x0);

inline constexpr guest::Function<0x00757aa0, u32(u32, u32, u32, u32)> call_00757aa0;

u32 f_00317eac(gptr<Object_00317eac_0> arg0, u32 r1) {
    u32 r0_1 = call_00757aa0(arg0.addr(), r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r1_1 = arg0->word_0;
    u32 r0_2 = *gptr<u8>(r1_1 + r0_1);
    guest::cpu()->r[1] = r1_1;
    return r0_2;
}

}  // namespace d_00317eac
GUEST_EXPORT_FRAMED(0x00317eac, d_00317eac::f_00317eac, 0x4010);  // pushes {r4, lr} first, as the original

// f_00317ec4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00317ec4 {


u32 f_00317ec4(u32 r0, u32 r1, u32 r2) {
    if (s32(r0) < s32(r1)) {
        return r1;
    }
    if (s32(r2) < s32(r0)) {
        r0 = r2;
    }
    return r0;
}

}  // namespace d_00317ec4
GUEST_EXPORT(0x00317ec4, d_00317ec4::f_00317ec4);

// f_00317fd8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00317fd8 {

struct __attribute__((packed)) Local_00317fd8_ea_10 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_00317fd8_ea_10, word_0, 0x0);
GUEST_OFFSET(Local_00317fd8_ea_10, word_4, 0x4);

struct __attribute__((packed)) Local_00317fd8_ea_11 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_00317fd8_ea_11, word_0, 0x0);
GUEST_OFFSET(Local_00317fd8_ea_11, word_4, 0x4);
GUEST_OFFSET(Local_00317fd8_ea_11, word_8, 0x8);

struct __attribute__((packed)) Local_00317fd8_ea_2 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_00317fd8_ea_2, word_0, 0x0);
GUEST_OFFSET(Local_00317fd8_ea_2, word_4, 0x4);

struct __attribute__((packed)) Local_00317fd8_ea_3 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_00317fd8_ea_3, word_0, 0x0);
GUEST_OFFSET(Local_00317fd8_ea_3, word_4, 0x4);

struct __attribute__((packed)) Local_00317fd8_ea_4 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_00317fd8_ea_4, word_0, 0x0);
GUEST_OFFSET(Local_00317fd8_ea_4, word_4, 0x4);

struct __attribute__((packed)) Local_00317fd8_ea_7 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_00317fd8_ea_7, word_0, 0x0);
GUEST_OFFSET(Local_00317fd8_ea_7, word_4, 0x4);

struct __attribute__((packed)) Local_00317fd8_ea_8 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_00317fd8_ea_8, word_0, 0x0);
GUEST_OFFSET(Local_00317fd8_ea_8, word_4, 0x4);
GUEST_OFFSET(Local_00317fd8_ea_8, word_8, 0x8);

struct __attribute__((packed)) Local_00317fd8_ea_9 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_00317fd8_ea_9, word_0, 0x0);
GUEST_OFFSET(Local_00317fd8_ea_9, word_4, 0x4);

struct __attribute__((packed)) Local_00317fd8_r7_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_00317fd8_r7_1, word_0, 0x0);
GUEST_OFFSET(Local_00317fd8_r7_1, word_4, 0x4);

struct __attribute__((packed)) Local_00317fd8_r7_2 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_00317fd8_r7_2, word_0, 0x0);
GUEST_OFFSET(Local_00317fd8_r7_2, word_4, 0x4);

struct __attribute__((packed)) Local_00317fd8_r8_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_00317fd8_r8_1, word_0, 0x0);
GUEST_OFFSET(Local_00317fd8_r8_1, word_4, 0x4);

inline constexpr guest::Function<0x0016dad0, u32(u32, u32, u32, u32)> call_0016dad0;
inline constexpr guest::Function<0x002fe7cc, u32(u32)> call_002fe7cc;
inline constexpr guest::Function<0x002feb00, u32(u32, u32, u32, u32)> call_002feb00;
inline constexpr guest::Function<0x00302fec, u32(u32)> call_00302fec;
inline constexpr guest::Function<0x0030b654, u32(u32)> call_0030b654;
inline constexpr guest::Function<0x006fb27c, u32(u32, u32)> call_006fb27c;
inline constexpr guest::Function<0x006fb3f4, u32(u32, u32, u32, u32)> call_006fb3f4;

void f_00317fd8(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0;
    u32 r5 = 0;
    u32 r6 = 0;
    u32 r7 = 0;
    u32 r8 = 0;
    u32 r10 = 0;
    u32 r11 = 0;
    u32 r13 = guest::cpu()->r[13];
    u32 r0_7 = 0;
    u32 r0_8 = 0;
    u32 r0_12 = 0;
    u32 r0_13 = 0;
    u32 ea_5 = 0;
    u32 ea_6 = 0;
    gptr<Local_00317fd8_ea_7> ea_7 = gptr<Local_00317fd8_ea_7>(0u);
    gptr<Local_00317fd8_r8_1> r8_1 = gptr<Local_00317fd8_r8_1>(0u);
    gptr<Local_00317fd8_ea_8> ea_8 = gptr<Local_00317fd8_ea_8>(0u);
    u32 r0_16 = 0;
    u32 r3_11 = 0;
    u32 r2_11 = 0;
    u32 r0_17 = 0;
    u32 r0_18 = 0;
    r13 -= 0x60u;  // (from the original)
    guest::cpu()->r[13] = r13;
    u32 r0_1 = call_006fb3f4(r1, 0u, r2, r3);
    guest::cpu()->r[13] = r13;
    u32 r0_2 = call_006fb3f4(r1, r0, guest::cpu()->r[2], guest::cpu()->r[3]);
    guest::cpu()->r[13] = r13;
    u32 r0_3 = call_002fe7cc(r0_1);
    *gptr<u32>(r13 + 0x1cu) = r0_3;  // (from the original)
    guest::cpu()->r[13] = r13;
    u32 r0_4 = call_002fe7cc(r0_2);
    u32 r9 = r0_4;
    if (*gptr<u32>(r13 + 0x1cu) != 0 && r9 != 0) {  // (from the original)
        guest::cpu()->r[13] = r13;
        u32 r0_5 = call_006fb27c(r1, 0u);
        *gptr<u32>(r13 + 0x24u) = r0_5;  // (from the original)
        guest::cpu()->r[13] = r13;
        u32 r0_6 = call_006fb27c(r1, r0);
        r6 = 0u;
        r5 = 1u;
        r8 = 8u;
        *gptr<u32>(r13 + 0x20u) = r0_6;  // (from the original)
        if (r0 != 3u) {
            if (r0 == 4u) {
                r7 = ~0u;
                r4 = 0xcu;  // (from the original)
                r11 = 3u;
                r10 = 7u;
                goto L_318140;
            }
            if (r0 != 5u) {
                r13 += 0x60u;  // (from the original)
                guest::cpu()->r[13] = r13;
                return;
            }
            r4 = 6u;
            r11 = 4u;
            r10 = r5;
            goto L_3181cc;
        }
        r4 = 9u;
        r11 = 0xcu;  // (from the original)
        r10 = r5;
        goto L_31809c;
L_318094:;
        if (r4 != 9u) {
            goto L_3180e0;
        }
L_31809c:;
        r0_7 = *gptr<u32>(r13 + 0x1cu);  // (from the original)
        guest::cpu()->r[13] = r13;
        r0_8 = call_002feb00(r0_7, 0xcu, r4, 0u);  // (from the original)
        if (r0_8 != 0) {
            guest::cpu()->r[13] = r13;
            u32 r0_9 = call_0030b654(r0_8);
            if (r0_9 != 0) {
                guest::cpu()->r[13] = r13;
                u32 r0_10 = call_00302fec(r0_8);
                if (r0_10 == 0) {
                    r4 = 0xau;  // (from the original)
                    guest::preempt();
                    goto L_318094;
                }
            }
        }
L_3180e0:;
        *gptr<u32>(r13) = r11;
        gptr<Local_00317fd8_ea_2> ea_2 = gptr<Local_00317fd8_ea_2>(r13 + 4u);
        ea_2->word_0 = r4;
        ea_2->word_4 = r8;
        gptr<Local_00317fd8_r7_1> r7_1 = gptr<Local_00317fd8_r7_1>(r13 + 0x1cu);  // (from the original)
        gptr<Local_00317fd8_ea_3> ea_3 = gptr<Local_00317fd8_ea_3>(r13 + 0xcu);  // (from the original)
        ea_3->word_0 = r4;
        ea_3->word_4 = r6;
        gptr<Local_00317fd8_ea_4> ea_4 = gptr<Local_00317fd8_ea_4>(r13 + 0x14u);  // (from the original)
        ea_4->word_0 = r5;
        ea_4->word_4 = r10;
        u32 r0_11 = r7_1->word_0;
        u32 r3_8 = r7_1->word_4;
        u32 r2_8 = *gptr<u32>(r13 + 0x24u);  // (from the original)
        guest::cpu()->r[13] = r13;
        call_0016dad0(r0_11, r9, r2_8, r3_8);
        r4 += 1u;
        if (s32(r4) <= 0xb) {  // (from the original)
            guest::preempt();
            goto L_318094;
        }
    }
    r13 += 0x60u;  // (from the original)
    guest::cpu()->r[13] = r13;
    return;
L_318138:;
    if (r4 != 0xcu) {  // (from the original)
        goto L_318184;
    }
L_318140:;
    r0_12 = *gptr<u32>(r13 + 0x1cu);  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_13 = call_002feb00(r0_12, 3u, r4, 0u);
    if (r0_13 != 0) {
        guest::cpu()->r[13] = r13;
        u32 r0_14 = call_0030b654(r0_13);
        if (r0_14 != 0) {
            guest::cpu()->r[13] = r13;
            u32 r0_15 = call_00302fec(r0_13);
            if (r0_15 == 0) {
                r4 = 0xbu;  // (from the original)
                guest::preempt();
                goto L_318138;
            }
        }
    }
L_318184:;
    ea_5 = r13 + 0x18u;  // (from the original)
    *gptr<u32>(ea_5) = r5;
    ea_6 = r13;
    *gptr<u32>(ea_6) = r11;
    ea_7 = gptr<Local_00317fd8_ea_7>(r13 + 4u);
    ea_7->word_0 = r4;
    ea_7->word_4 = r10;
    r8_1 = gptr<Local_00317fd8_r8_1>(r13 + 0x1cu);  // (from the original)
    ea_8 = gptr<Local_00317fd8_ea_8>(r13 + 0xcu);  // (from the original)
    ea_8->word_0 = r4;
    ea_8->word_4 = r6;
    ea_8->word_8 = r7;
    r0_16 = r8_1->word_0;
    r3_11 = r8_1->word_4;
    r2_11 = *gptr<u32>(r13 + 0x24u);  // (from the original)
    guest::cpu()->r[13] = r13;
    call_0016dad0(r0_16, r9, r2_11, r3_11);
    r4 -= 1u;
    if (s32(r4) >= 0xa) {  // (from the original)
        guest::preempt();
        goto L_318138;
    }
    r13 += 0x60u;  // (from the original)
    guest::cpu()->r[13] = r13;
    return;
L_3181c4:;
    if (r4 != 6u) {
        goto L_318210;
    }
L_3181cc:;
    r0_17 = *gptr<u32>(r13 + 0x1cu);  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_18 = call_002feb00(r0_17, r4, 4u, 0u);
    if (r0_18 != 0) {
        guest::cpu()->r[13] = r13;
        u32 r0_19 = call_0030b654(r0_18);
        if (r0_19 != 0) {
            guest::cpu()->r[13] = r13;
            u32 r0_20 = call_00302fec(r0_18);
            if (r0_20 == 0) {
                r4 = 7u;
                guest::preempt();
                goto L_3181c4;
            }
        }
    }
L_318210:;
    gptr<Local_00317fd8_ea_9> ea_9 = gptr<Local_00317fd8_ea_9>(r13);
    ea_9->word_0 = r4;
    ea_9->word_4 = r11;
    gptr<Local_00317fd8_ea_10> ea_10 = gptr<Local_00317fd8_ea_10>(r13 + 8u);
    ea_10->word_0 = r4;
    ea_10->word_4 = r8;
    gptr<Local_00317fd8_r7_2> r7_2 = gptr<Local_00317fd8_r7_2>(r13 + 0x1cu);  // (from the original)
    gptr<Local_00317fd8_ea_11> ea_11 = gptr<Local_00317fd8_ea_11>(r13 + 0x10u);  // (from the original)
    ea_11->word_0 = r5;
    ea_11->word_4 = r6;
    ea_11->word_8 = r10;
    u32 r0_21 = r7_2->word_0;
    u32 r3_14 = r7_2->word_4;
    u32 r2_14 = *gptr<u32>(r13 + 0x24u);  // (from the original)
    guest::cpu()->r[13] = r13;
    call_0016dad0(r0_21, r9, r2_14, r3_14);
    r4 += 1u;
    if (s32(r4) > 8) {
        r13 += 0x60u;  // (from the original)
        guest::cpu()->r[13] = r13;
        return;
    }
    guest::preempt();
    goto L_3181c4;
}

}  // namespace d_00317fd8
GUEST_EXPORT(0x00317fd8, d_00317fd8::f_00317fd8);

// f_00318540: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00318540 {

struct __attribute__((packed)) Object_00318540_0 {
    u16 half_0;
};
GUEST_OFFSET(Object_00318540_0, half_0, 0x0);


void f_00318540(gptr<Object_00318540_0> arg0, u32 r1) {
    u32 r1_1 = r1 | u32(arg0->half_0);
    arg0->half_0 = u16(r1_1);
    guest::cpu()->r[1] = r1_1;
}

}  // namespace d_00318540
GUEST_EXPORT(0x00318540, d_00318540::f_00318540);

// f_003187a8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_003187a8 {

inline constexpr u32 vtable_ComButton1Lyt = 0x008ee218u;
inline constexpr u32 vtable_Control1Button = 0x008ef22cu;
inline constexpr u32 vtable_Control1Button_at_e4 = 0x008ef270u;
inline constexpr u32 vtable_ComButtonLytBase = 0x008f18f4u;
inline constexpr u32 vtable_BsMenuModelHomeBoard = 0x008f43ccu;
inline constexpr u32 vtable_BsMenuModelHomeBoard_at_28 = 0x008f4438u;
inline constexpr guest::Function<0x002f76ad, u32(u32, u32, u32, u32)> call_002f76ac;
inline constexpr guest::Function<0x002f770c, u32(u32)> call_002f770c;
inline constexpr guest::Function<0x002f7710, u32(u32)> call_002f7710;
inline constexpr guest::Function<0x00567ef0, u32(u32, u32)> call_00567ef0;
inline constexpr guest::Function<0x0056988c, u32(u32)> call_0056988c;
inline constexpr guest::Function<0x005bf744, u32(u32)> call_005bf744;
inline constexpr guest::Function<0x006aaa30, u32(u32, u32)> call_006aaa30;

u32 f_003187a8(gptr<BsMenuModelHomeBoard> arg0) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    arg0->word_28 = vtable_BsMenuModelHomeBoard_at_28;
    arg0->word_0 = vtable_BsMenuModelHomeBoard;
    u32 r4_1 = arg0.addr() + 0x1250u;  // (from the original)
    arg0->word_eb8 = vtable_ComButton1Lyt;
    arg0->word_1250 = vtable_Control1Button;
    arg0->word_1334 = vtable_Control1Button_at_e4;
    call_002f76ac(arg0.addr() + 0x1368u, 0x2e0b3cu, 0x518u, 1u);  // (from the original)
    call_002f770c(r4_1);
    arg0->word_eb8 = vtable_ComButtonLytBase;
    u32 r0_3 = call_00567ef0(r4_1 - 0x248u, 0x8f18f4u);  // (from the original)
    u32 r0_5 = call_005bf744(r0_3 - 0x14cu);  // (from the original)
    call_002f76ac(r0_5 - 0x2a4u, 0x2b6ef8u, 0xe0u, 3u);  // (from the original)
    call_002f7710(r0_5 - 0x388u);  // (from the original)
    call_002f76ac(r0_5 - 0x5ecu, 0x68eaccu, 0xccu, 3u);  // (from the original)
    call_002f76ac(r0_5 - 0x9e8u, 0x68eaccu, 0xccu, 5u);  // (from the original)
    call_0056988c(r0_5 - 0xa14u);  // (from the original)
    call_0056988c(r0_5 - 0xa3cu);  // (from the original)
    call_002f76ac(r0_5 - 0xa8cu, 0x56988cu, 0x28u, 2u);  // (from the original)
    call_0056988c(r0_5 - 0xab4u);  // (from the original)
    call_0056988c(r0_5 - 0xadcu);  // (from the original)
    u32 r0_16 = call_00567ef0(r0_5 - 0xd24u, guest::cpu()->r[1]);  // (from the original)
    u32 r0_18 = call_005bf744(r0_16 - 0x14cu);  // (from the original)
    frame.release();
    return call_006aaa30(r0_18 - 0x4cu, guest::cpu()->r[1]);  // (from the original)
}

}  // namespace d_003187a8
GUEST_EXPORT(0x003187a8, d_003187a8::f_003187a8);

// f_00318960: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00318960 {

struct __attribute__((packed)) Object_00318960_0 {
    u8 unknown_0[0x8];  // (not used here)
    u8 byte_8;
};
GUEST_OFFSET(Object_00318960_0, byte_8, 0x8);


u32 f_00318960(gptr<Object_00318960_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r2 = arg0->byte_8;
    u32 r3 = 0x88f364u;  // (from the original)
    r0 = 0xcu;  // (from the original)
    u32 r1 = 0u;
    do {
        if (s32(r2) < s32(*gptr<u32>(r3 + (r1 << 2)))) {
            guest::cpu()->r[1] = r1;
            return r1 & 0xffu;  // (from the original)
        }
        r1 += 1u;
        guest::preempt();
    } while (s32(r1) < 0xc);  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_00318960
GUEST_EXPORT(0x00318960, d_00318960::f_00318960);

// f_00318d8c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00318d8c {


u32 f_00318d8c(u32 r0, u32 r1) {
    return r1 >= 3u ? ~0u : u32(*gptr<s8>(r0 + r1 + 0x56u));  // (from the original)
}

}  // namespace d_00318d8c
GUEST_EXPORT(0x00318d8c, d_00318d8c::f_00318d8c);

// f_00318da0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00318da0 {

struct __attribute__((packed)) Object_00318da0_0 {
    u16 half_0;
    u8 unknown_2[0x12];  // (not used here)
    u8 byte_14;
    u8 unknown_15[0x1];  // (not used here)
    u16 half_16;
    u8 unknown_18[0x12];  // (not used here)
    u8 byte_2a;
    u8 unknown_2b[0x1];  // (not used here)
    u16 half_2c;
};
GUEST_OFFSET(Object_00318da0_0, half_0, 0x0);
GUEST_OFFSET(Object_00318da0_0, byte_14, 0x14);
GUEST_OFFSET(Object_00318da0_0, half_16, 0x16);
GUEST_OFFSET(Object_00318da0_0, byte_2a, 0x2a);
GUEST_OFFSET(Object_00318da0_0, half_2c, 0x2c);

struct __attribute__((packed)) Object_00318da0_1 {
    u16 half_0;
    u8 unknown_2[0x12];  // (not used here)
    u8 byte_14;
    u8 unknown_15[0x1];  // (not used here)
    u16 half_16;
    u8 unknown_18[0x12];  // (not used here)
    u8 byte_2a;
    u8 unknown_2b[0x1];  // (not used here)
    u16 half_2c;
};
GUEST_OFFSET(Object_00318da0_1, half_0, 0x0);
GUEST_OFFSET(Object_00318da0_1, byte_14, 0x14);
GUEST_OFFSET(Object_00318da0_1, half_16, 0x16);
GUEST_OFFSET(Object_00318da0_1, byte_2a, 0x2a);
GUEST_OFFSET(Object_00318da0_1, half_2c, 0x2c);

inline constexpr guest::Function<0x00100d2d, u32(u32, u32, u32)> call_00100d2c;

u32 f_00318da0(gptr<Object_00318da0_0> arg0, gptr<Object_00318da0_1> arg1) {
    u32 r1_1 = arg1->half_2c;
    if (arg0->half_2c == r1_1) {
        r1_1 = arg1->half_0;
        if (arg0->half_0 == r1_1) {
            r1_1 = arg0->byte_14;
            if (r1_1 == arg1->byte_14) {
                u32 r0_2 = call_00100d2c(arg0.addr() + 2u, arg1.addr() + 2u, 0x12u);  // (from the original)
                r1_1 = guest::cpu()->r[1];
                if (r0_2 == 0) {
                    r1_1 = arg1->half_16;
                    if (arg0->half_16 == r1_1) {
                        r1_1 = arg1->byte_2a;
                        if (arg0->byte_2a == r1_1) {
                            u32 r0_4 = call_00100d2c(arg0.addr() + 0x18u, arg1.addr() + 0x18u, 0x12u);  // (from the original)
                            r1_1 = guest::cpu()->r[1];
                            if (r0_4 == 0) {
                                return 1u;
                            }
                        }
                    }
                }
            }
        }
    }
    guest::cpu()->r[1] = r1_1;
    return 0u;
}

}  // namespace d_00318da0
GUEST_EXPORT_FRAMED(0x00318da0, d_00318da0::f_00318da0, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_00318e38: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00318e38 {

struct __attribute__((packed)) Local_00318e38_ea_1 {
    u16 half_0;
    u8 unknown_2[0x12];  // (not used here)
    u8 byte_14;
};
GUEST_OFFSET(Local_00318e38_ea_1, half_0, 0x0);
GUEST_OFFSET(Local_00318e38_ea_1, byte_14, 0x14);

struct __attribute__((packed)) Local_00318e38_r5_1 {
    u16 half_0;
    u8 unknown_2[0x12];  // (not used here)
    u8 byte_14;
};
GUEST_OFFSET(Local_00318e38_r5_1, half_0, 0x0);
GUEST_OFFSET(Local_00318e38_r5_1, byte_14, 0x14);

inline constexpr guest::Function<0x00100d2d, u32(u32, u32, u32)> call_00100d2c;
inline constexpr guest::Function<0x002fb328, u32(u32, u32, u32, u32)> call_002fb328;
inline constexpr guest::Function<0x00309fbc, u32(u32, u32)> call_00309fbc;

u32 f_00318e38(u32 r0, u32 r1, u32 r2) {
    u32 r6 = r1;
    u32 r0_1 = call_002fb328(r0, r1, r2, guest::cpu()->r[3]);
    u32 r0_3 = call_00309fbc(r0_1 + 0xa0u, r2);  // (from the original)
    u32 r1_1 = guest::cpu()->r[1];
    if (!(r0_3 >= 4u)) {
        u32 r4 = 0u;
        u32 r7 = r0 + (r0_3 << 7);
        do {
            u32 r1_2 = r7 + (r4 << 6);
            gptr<Local_00318e38_r5_1> r5_1 = gptr<Local_00318e38_r5_1>(r1_2 + 0xcu);  // (from the original)
            r1_1 = *gptr<u16>(r1_2 + 0x38u);  // (from the original)
            if (r1_1 == *gptr<u16>(r6 + 0x2cu)) {  // (from the original)
                r1_1 = *gptr<u16>(r6);
                if (r5_1->half_0 == r1_1) {
                    r1_1 = r5_1->byte_14;
                    if (r1_1 == *gptr<u8>(r6 + 0x14u)) {  // (from the original)
                        u32 r0_5 = call_00100d2c(r5_1.addr() + 2u, r6 + 2u, 0x12u);  // (from the original)
                        r1_1 = guest::cpu()->r[1];
                        if (r0_5 == 0) {
                            gptr<Local_00318e38_ea_1> ea_1 = gptr<Local_00318e38_ea_1>(r5_1.addr() + 0x16u);  // (from the original)
                            r1_1 = ea_1->half_0;
                            u32 r0_6 = r6 + 0x16u;  // (from the original)
                            if (r1_1 == *gptr<u16>(r6 + 0x16u)) {  // (from the original)
                                r1_1 = ea_1->byte_14;
                                if (r1_1 == *gptr<u8>(r0_6 + 0x14u)) {  // (from the original)
                                    u32 r0_8 = call_00100d2c(ea_1.addr() + 2u, r0_6 + 2u, 0x12u);  // (from the original)
                                    r1_1 = guest::cpu()->r[1];
                                    if (r0_8 == 0) {
                                        return r7 + (r4 << 6);
                                    }
                                }
                            }
                        }
                    }
                }
            }
            r4 += 1u;
            guest::preempt();
        } while (s32(r4) < 2);
    }
    guest::cpu()->r[1] = r1_1;
    return 0u;
}

}  // namespace d_00318e38
GUEST_EXPORT_FRAMED(0x00318e38, d_00318e38::f_00318e38, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original

// f_00318f18: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00318f18 {

struct __attribute__((packed)) Object_00318f18_0 {
    u8 unknown_0[0x9];  // (not used here)
    u8 byte_9;
};
GUEST_OFFSET(Object_00318f18_0, byte_9, 0x9);

inline constexpr guest::Function<0x007596ac, u32(u32, u32, u32, u32)> call_007596ac;

u32 f_00318f18(gptr<Object_00318f18_0> arg0) {
    u32 r1_1 = arg0->byte_9;
    if (r1_1 <= 1u) {
        guest::cpu()->r[1] = r1_1;
        return 1u;
    }
    if (r1_1 != 3u) {
        guest::cpu()->r[1] = r1_1;
        return 0u;
    }
    return call_007596ac(arg0.addr(), 1u, guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_00318f18
GUEST_EXPORT(0x00318f18, d_00318f18::f_00318f18);

// f_00318fbc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00318fbc {

inline constexpr guest::Function<0x00200ab4, u32(u32, u32, u32, u32)> call_00200ab4;

u32 f_00318fbc(u32 r0, u32 r1, u32 r2) {
    call_00200ab4(0x9b3ce0u, r0, r1, r2);  // (from the original)
    return 1u;
}

}  // namespace d_00318fbc
GUEST_EXPORT_FRAMED(0x00318fbc, d_00318fbc::f_00318fbc, 0x4010);  // pushes {r4, lr} first, as the original

// f_00319568: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00319568 {

struct __attribute__((packed)) Local_00319568_ea_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
    u32 word_18;
};
GUEST_OFFSET(Local_00319568_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_00319568_ea_1, word_4, 0x4);
GUEST_OFFSET(Local_00319568_ea_1, word_8, 0x8);
GUEST_OFFSET(Local_00319568_ea_1, word_c, 0xc);
GUEST_OFFSET(Local_00319568_ea_1, word_10, 0x10);
GUEST_OFFSET(Local_00319568_ea_1, word_14, 0x14);
GUEST_OFFSET(Local_00319568_ea_1, word_18, 0x18);

inline guest::global<u32, 0x0095c220> global_0095c220;
inline constexpr guest::Function<0x002f74c8, u32(u32, u32, u32, u32)> call_002f74c8;
inline constexpr guest::Function<0x002fb328, u32(u32, u32, u32, u32)> call_002fb328;
inline constexpr guest::Function<0x00308971, u32(u32, u32, u32)> call_00308970;
inline constexpr guest::Function<0x00319aa4, u32(u32, u32, u32, u32)> call_00319aa4;

void f_00319568(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r13 = guest::cpu()->r[13];
    u32 r14 = guest::cpu()->r[14];
    gptr<Local_00319568_ea_1> ea_1 = gptr<Local_00319568_ea_1>(r13 - 0x1c);  // (from the original)
    ea_1->word_0 = r0;
    ea_1->word_4 = r1;
    ea_1->word_8 = r4;
    ea_1->word_c = r5;
    ea_1->word_10 = r6;
    ea_1->word_14 = r7;
    ea_1->word_18 = r14;
    r13 = ea_1.addr() - 0xcu;  // (from the original)
    guest::cpu()->r[13] = r13;
    u32 r0_1 = call_002fb328(r0, r1, r2, r3);
    guest::cpu()->r[13] = r13;
    u32 r0_2 = call_00308970(r0, r0_1 + 0x292a4u, 0xau);  // (from the original)
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r7 = r0_2;
    if (r0_2 < 0xau) {  // (from the original)
        u32 r0_3 = lsl_r(1u, r7 & 0xff);  // (from the original)
        u32 r1_2 = *global_0095c220;
        *gptr<u32>(r13 + 4u) = r0_3;
        r0 = r0_3 & r1_2;
        if (r0 != 0) {
            r0 = 1u;
        }
        r1 = *gptr<u32>(r13 + 0x10u);  // (from the original)
        if (r1 != r0) {
            r6 = 0u;
            do {
                r5 = 0u;
                do {
                    r4 = 0u;
                    do {
                        guest::cpu()->r[13] = r13;
                        u32 r0_4 = call_002f74c8(r0, r1, r2, r3);
                        *gptr<u32>(r13) = r0_4;
                        guest::cpu()->r[13] = r13;
                        r0 = call_00319aa4(r5, r6, uxtb(r4), 1u);
                        r1 = guest::cpu()->r[1];
                        r2 = guest::cpu()->r[2];
                        r3 = guest::cpu()->r[3];
                        r4 += 1u;
                        guest::preempt();
                    } while (s32(r4) < 2);
                    r5 += 1u;
                    guest::preempt();
                } while (s32(r5) < 0x10);  // (from the original)
                r6 += 1u;
                guest::preempt();
            } while (s32(r6) < 0x10);  // (from the original)
            u32 r1_3 = *gptr<u32>(r13 + 4u);
            u32 r2_2 = *global_0095c220;
            if (*gptr<u32>(r13 + 0x10u) != 0) {  // (from the original)
                *global_0095c220 = r1_3 | r2_2;
            } else {
                *global_0095c220 = r2_2 & ~r1_3;
            }
            r1 = r7 << 1;
            *gptr<u16>(r1 + 0xad555cu) = 0;  // (from the original)
        }
    }
    r13 += 0x14u;  // (from the original)
    u32 r4_1 = *gptr<u32>(r13);
    u32 r5_1 = *gptr<u32>(r13 + 4);
    u32 r6_1 = *gptr<u32>(r13 + 8);
    u32 r7_1 = *gptr<u32>(r13 + 0xc);  // (from the original)
    u32 tpc_1 = *gptr<u32>(r13 + 0x10);  // (from the original)
    r13 += 0x14;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[4] = r4_1;
    guest::cpu()->r[5] = r5_1;
    guest::cpu()->r[6] = r6_1;
    guest::cpu()->r[7] = r7_1;
    guest::cpu()->r[13] = r13;
}

}  // namespace d_00319568
GUEST_EXPORT(0x00319569, d_00319568::f_00319568);

// f_00319aa4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00319aa4 {

struct __attribute__((packed)) Local_00319aa4_r0_2 {
    u16 half_0;
};
GUEST_OFFSET(Local_00319aa4_r0_2, half_0, 0x0);

inline constexpr guest::Function<0x005826e8, u32(u32, u32, u32, u32)> call_005826e8;

u32 f_00319aa4(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r0_1 = *gptr<u32>(guest::cpu()->r[13] + 0x18u);  // (from the original)
    gptr<Local_00319aa4_r0_2> r0_2 = gptr<Local_00319aa4_r0_2>(call_005826e8(r0_1, r1, r2, r3));
    u32 r1_1 = guest::cpu()->r[1];
    if (r0_2.addr() != 0) {
        u32 r1_2 = 1u << (r0 & 0xfu);  // (from the original)
        r0_2 = gptr<Local_00319aa4_r0_2>(r0_2.addr() + ((r2 & 1u) << 5) + ((r1 & 0xfu) << 1));  // (from the original)
        u32 r2_1 = r0_2->half_0;
        r1_1 = r3 == 0 ? r2_1 & ~r1_2 : r1_2 | r2_1;
        r0_2->half_0 = u16(r1_1);
    }
    guest::cpu()->r[1] = r1_1;
    return r0_2.addr();
}

}  // namespace d_00319aa4
GUEST_EXPORT_FRAMED(0x00319aa4, d_00319aa4::f_00319aa4, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original

// f_0031a334: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0031a334 {

struct __attribute__((packed)) Local_0031a334_r0_6 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_0031a334_r0_6, word_0, 0x0);
GUEST_OFFSET(Local_0031a334_r0_6, word_4, 0x4);

inline constexpr guest::Function<0x001b1b40, u32(u32, u32)> call_001b1b40;
inline constexpr guest::Function<0x002fae84, u32(u32, u32, u32, u32)> call_002fae84;
inline constexpr guest::Function<0x002fcbb0, u32(u32, u32)> call_002fcbb0;
inline constexpr guest::Function<0x002ff6f8, u32(u32, u32, u32, u32)> call_002ff6f8;
inline constexpr guest::Function<0x0031a334, u32(u32, u32, u32, u32)> call_0031a334;
inline constexpr guest::Function<0x005359fc, u32(u32)> call_005359fc;
inline constexpr guest::Function<0x005361a8, u32(u32, u32, u32, u32)> call_005361a8;
inline constexpr guest::Function<0x0070b49c, u32(u32, u32, u32, u32)> call_0070b49c;
inline constexpr guest::Function<0x0070b510, u32(u32, u32, u32, u32)> call_0070b510;
inline constexpr guest::Function<0x0070b574, u32(u32, u32, u32, u32)> call_0070b574;
inline constexpr guest::Function<0x0070b5e8, u32(u32, u32, u32, u32)> call_0070b5e8;
inline constexpr guest::Function<0x0070b65c, u32(u32, u32, u32, u32)> call_0070b65c;
inline constexpr guest::Function<0x0070b694, u32(u32, u32)> call_0070b694;
inline constexpr guest::Function<0x0070b6d0, u32(u32, u32)> call_0070b6d0;
inline constexpr guest::Function<0x0070b70c, u32(u32, u32)> call_0070b70c;

struct __attribute__((packed)) Frame_0031a334 {
    u8 unknown_0[0x8];  // (not read or written by name)
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
    u8 unknown_18[0x4];  // (not read or written by name)
};
GUEST_OFFSET(Frame_0031a334, word_8, 0x8);
GUEST_OFFSET(Frame_0031a334, word_c, 0xc);
GUEST_OFFSET(Frame_0031a334, word_10, 0x10);
GUEST_OFFSET(Frame_0031a334, word_14, 0x14);
GUEST_SIZE(Frame_0031a334, 0x1c);

u32 f_0031a334(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_0031a334> frame;  // the original's stack frame
    u32 r4 = 0;
    u32 r6 = 0;
    u32 r8 = 0;
    u32 r10 = 0;
    u32 r11 = guest::cpu()->r[11];
    u32 r12 = 0;
    u32 r0_1 = 0;
    u32 r0_28 = 0;
    u32 cf_5 = 0;
    u32 cf_8 = 0;
    u32 cf_11 = 0;
    u32 zf_15 = 0;
    u32 r0_31 = 0;
    u32 r1_13 = 0;
    u32 cf_12 = 0;
    u32 cf_13 = 0;
    u32 zf_16 = 0;
    u32 cf_14 = 0;
    u32 zf_18 = 0;
    u32 cf_15 = 0;
    u32 zf_21 = 0;
    u32 cf_16 = 0;
    u32 zf_28 = 0;
    u32 cf_18 = 0;
    u32 r0_47 = 0;
    u32 r0_50 = 0;
    u32 cf_29 = 0;
    u32 zf_37 = 0;
    u32 r0_51 = 0;
    u32 cf_30 = 0;
    u32 cf_31 = 0;
    u32 r1_17 = 0;
    u32 r0_52 = 0;
    u32 r1_18 = 0;
    u32 zf_38 = 0;
    u32 cf_32 = 0;
    u32 zf_40 = 0;
    u32 cf_33 = 0;
    u32 zf_43 = 0;
    u32 cf_34 = 0;
    u32 zf_50 = 0;
    u32 cf_36 = 0;
    u32 r0_58 = 0;
    u32 r0_62 = 0;
    u32 zf_55 = 0;
    u32 cf_37 = 0;
    u32 r1_19 = 0;
    u32 r0_63 = 0;
    u32 r1_20 = 0;
    u32 r3_15 = 0;
    u32 zf_56 = 0;
    u32 cf_38 = 0;
    u32 r0_64 = 0;
    u32 r0_65 = 0;
    u32 r3_16 = 0;
    u32 r0_66 = 0;
    u32 zf_63 = 0;
    u32 cf_41 = 0;
    u32 zf_65 = 0;
    u32 cf_42 = 0;
    u32 zf_72 = 0;
    u32 cf_45 = 0;
    u32 zf_1 = r2 == 4u;
    u32 r7 = r2;
    u32 r9 = r0;
    u32 r5 = r1;
    if (!zf_1) {
        u32 zf_2 = r7 == 3u;
        if (zf_2) {
            r0_1 = call_002ff6f8(3u, r1, r2, r3);
            u32 zf_3 = r0_1 == 0;
            if (zf_3) {
                u32 r0_2 = call_0031a334(r9, r5, 5u, guest::cpu()->r[3]);
                return r0_2;
            }
            u32 zf_4 = r0_1 == 1u;
            if (zf_4) {
                u32 r0_3 = call_0031a334(r9, r5, 6u, guest::cpu()->r[3]);
                return r0_3;
            }
            u32 zf_5 = r0_1 == 2u;
            if (!zf_5) {
                return r0_1;
            }
            goto L_31a428;
        }
        u32 r0_4 = call_002fae84(r0, r1, r2, r3);
        call_001b1b40(frame.at(0).addr(), (r0_4 + 0x62000u) + 0x1ccu);  // (from the original)
        gptr<Local_0031a334_r0_6> r0_6 = gptr<Local_0031a334_r0_6>(call_005359fc(5u));
        u32 r0_7 = r0_6->word_0;
        r6 = r0_6->word_4;
        r10 = uxth(r0_7);
        call_002fcbb0(frame.at(4).addr(), r10);
        u32 r0_10 = call_005361a8(frame.at(4).addr(), guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
        r4 = r0_10;
        u32 r0_11 = call_002fae84(r0_10, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r12 = guest::cpu()->r[12];
        u32 r0_12 = *gptr<u8>(r0_11 + 0x6214eu);  // (from the original)
        r8 = r0_12 >> 4 == 0;
        u32 zf_6 = r7 == 1u;
        if (zf_6) {
            u32 r0_14 = call_0070b65c(frame.at(0).addr(), 5u, r2, r3);
            frame->word_8 = r0_14;
            u32 r0_16 = call_0070b694(frame.at(0).addr(), 5u);
            frame->word_c = r0_16;
            u32 r0_18 = call_0070b6d0(frame.at(0).addr(), 5u);
            frame->word_10 = r0_18;
            u32 r0_20 = call_0070b70c(frame.at(0).addr(), 5u);
            frame->word_14 = r0_20;
            u32 r0_22 = call_0070b574(frame.at(0).addr(), 5u, guest::cpu()->r[2], guest::cpu()->r[3]);
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
            u32 zf_7 = r6 == 0;
            u32 cf_1 = r6 >= 0u;
            r11 = r0_22;
            r7 = 0u;
            if (!!cf_1 && !zf_7) {
                do {
                    u32 r0_23 = *gptr<u8>(r4 + 0x19u);  // (from the original)
                    u32 r0_24 = r0_23 & 0xfu;  // (from the original)
                    if (r0_24 >= 0xeu) {  // (from the original)
                        r0_24 = 0u;
                    }
                    u32 zf_8 = r0_24 == r5;
                    if (zf_8) {
                        u32 zf_9 = r8 == 0;
                        if (zf_9) {
                            u32 r0_25 = *gptr<u8>(r4 + 0x1bu);  // (from the original)
                            u32 zf_10 = (r0_25 & 1u) == 0;
                            if (!zf_10) {
                                goto L_31a60c;
                            }
                        }
                        u32 r0_26 = *gptr<u8>(r4 + 0xdu);  // (from the original)
                        u32 r1_9 = r0_26 >= 0xb9u ? 0u : r0_26;  // (from the original)
                        u32 zf_11 = r1_9 == r11;
                        if (!zf_11) {
                            u32 cf_2 = r0_26 >= 0xb9u;  // (from the original)
                            if (!cf_2) {
                                u32 zf_12 = r0_26 == 0x14u;  // (from the original)
                                if (zf_12) {
                                    u32 r0_27 = call_002ff6f8(0x64u, r1_9, r2, r3);  // (from the original)
                                    r2 = guest::cpu()->r[2];
                                    r3 = guest::cpu()->r[3];
                                    u32 cf_3 = r0_27 >= frame->word_8;
                                    if (cf_3) {
                                        goto L_31a60c;
                                    }
                                    r0_28 = r10 + r7;
                                    u32 cf_4 = 0x372au >= r0_28;  // (from the original)
                                    if (cf_4) {
                                        goto L_31a5f0;
                                    }
                                    goto L_31a60c;
                                }
                            }
                            cf_5 = r0_26 >= 0xb9u;  // (from the original)
                            if (!cf_5) {
                                u32 zf_13 = r0_26 == 0x15u;  // (from the original)
                                if (zf_13) {
                                    u32 r0_29 = call_002ff6f8(0x64u, r1_9, r2, r3);  // (from the original)
                                    r2 = guest::cpu()->r[2];
                                    r3 = guest::cpu()->r[3];
                                    u32 cf_6 = r0_29 >= frame->word_c;
                                    if (cf_6) {
                                        goto L_31a60c;
                                    }
                                    r0_28 = r10 + r7;
                                    u32 cf_7 = 0x372au >= r0_28;  // (from the original)
                                    if (cf_7) {
                                        goto L_31a5f0;
                                    }
                                    goto L_31a60c;
                                }
                            }
                            cf_8 = r0_26 >= 0xb9u;  // (from the original)
                            if (!cf_8) {
                                u32 zf_14 = r0_26 == 0x16u;  // (from the original)
                                if (zf_14) {
                                    u32 r0_30 = call_002ff6f8(0x64u, r1_9, r2, r3);  // (from the original)
                                    r2 = guest::cpu()->r[2];
                                    r3 = guest::cpu()->r[3];
                                    u32 cf_9 = r0_30 >= frame->word_10;
                                    if (cf_9) {
                                        goto L_31a60c;
                                    }
                                    r0_28 = r10 + r7;
                                    u32 cf_10 = 0x372au >= r0_28;  // (from the original)
                                    if (cf_10) {
                                        goto L_31a5f0;
                                    }
                                    goto L_31a60c;
                                }
                            }
                            cf_11 = r0_26 >= 0xb9u;  // (from the original)
                            if (cf_11) {
                                goto L_31a60c;
                            }
                            zf_15 = r0_26 == 0x17u;  // (from the original)
                            if (!zf_15) {
                                goto L_31a60c;
                            }
                            r0_31 = call_002ff6f8(0x64u, r1_9, r2, r3);  // (from the original)
                            r2 = guest::cpu()->r[2];
                            r3 = guest::cpu()->r[3];
                            r1_13 = frame->word_14;
                            cf_12 = r0_31 >= r1_13;
                            if (cf_12) {
                                goto L_31a60c;
                            }
                            r0_28 = r10 + r7;
                            cf_13 = 0x372au >= r0_28;  // (from the original)
                            if (!cf_13) {
                                goto L_31a60c;
                            }
L_31a5f0:;
                            u32 r1_14 = r0_28 - 0x2000u;  // (from the original)
                            r2 = 1u;
                            u32 r0_32 = r1_14 >> 5;
                            r3 = *gptr<u32>(r9 + (r0_32 << 2));
                            *gptr<u32>(r9 + (r0_32 << 2)) = r3 | (r2 << (r1_14 & 0x1fu));  // (from the original)
                        }
                    }
L_31a60c:;
                    r7 += 1u;
                    zf_16 = r6 == r7;
                    cf_14 = r6 >= r7;
                    r4 += 0x1eu;  // (from the original)
                    guest::preempt();
                } while (cf_14 && !zf_16);
            }
            r2 = 0u;
            r1 = r2;
            do {
                r0 = *gptr<u32>(r9 + (r1 << 2));
                u32 zf_17 = r0 == 0;
                if (!zf_17) {
                    do {
                        if ((r0 & 1u) != 0) {
                            r2 += 1u;
                        }
                        u32 res_1 = r0 >> 1;
                        zf_18 = res_1 == 0;
                        r0 = res_1;
                        guest::preempt();
                    } while (!zf_18);
                }
                r1 += 1u;
                cf_15 = r1 >= 0xbau;  // (from the original)
                guest::preempt();
            } while (!cf_15);
            u32 zf_19 = r2 == 0;
            if (!zf_19) {
                guest::cpu()->r[1] = r1;
                return frame.at(0).addr();
            }
            call_0031a334(r9, r5, 5u, r3);
            r3 = guest::cpu()->r[3];
            r2 = 0u;
            r1 = r2;
            do {
                r0 = *gptr<u32>(r9 + (r1 << 2));
                u32 zf_20 = r0 == 0;
                if (!zf_20) {
                    do {
                        if ((r0 & 1u) != 0) {
                            r2 += 1u;
                        }
                        u32 res_2 = r0 >> 1;
                        zf_21 = res_2 == 0;
                        r0 = res_2;
                        guest::preempt();
                    } while (!zf_21);
                }
                r1 += 1u;
                cf_16 = r1 >= 0xbau;  // (from the original)
                guest::preempt();
            } while (!cf_16);
            u32 zf_22 = r2 == 0;
            if (!zf_22) {
                guest::cpu()->r[1] = r1;
                return frame.at(0).addr();
            }
            r0 = call_005361a8(frame.at(4).addr(), r1, r2, r3);
            r1 = guest::cpu()->r[1];
            u32 zf_23 = r0 == 0;
            if (zf_23) {
                return frame.at(0).addr();
            }
            u32 zf_24 = r6 == 0;
            u32 cf_17 = r6 >= 0u;
            r1 = 0u;
            if (!cf_17 || zf_24) {
                guest::cpu()->r[1] = r1;
                return frame.at(0).addr();
            }
            do {
                u32 r2_10 = *gptr<u8>(r0 + 0x19u);  // (from the original)
                u32 r2_11 = r2_10 & 0xfu;  // (from the original)
                if (r2_11 >= 0xeu) {  // (from the original)
                    r2_11 = 0u;
                }
                u32 zf_25 = r2_11 == r5;
                if (zf_25) {
                    u32 zf_26 = r8 == 0;
                    if (!zf_26) {
                        goto L_31a6fc;
                    }
                    u32 r2_12 = *gptr<u8>(r0 + 0x1bu);  // (from the original)
                    u32 zf_27 = (r2_12 & 1u) == 0;
                    if (zf_27) {
                        goto L_31a6fc;
                    }
                }
                r1 += 1u;
                zf_28 = r6 == r1;
                cf_18 = r6 >= r1;
                r0 += 0x1eu;  // (from the original)
                guest::preempt();
            } while (cf_18 && !zf_28);
            guest::cpu()->r[1] = r1;
            return frame.at(0).addr();
        }
        u32 zf_29 = r7 == 2u;
        if (zf_29) {
            u32 r0_35 = call_0070b65c(frame.at(0).addr(), 5u, r2, r3);
            frame->word_8 = r0_35;
            u32 r0_37 = call_0070b694(frame.at(0).addr(), 5u);
            frame->word_c = r0_37;
            u32 r0_39 = call_0070b6d0(frame.at(0).addr(), 5u);
            frame->word_10 = r0_39;
            u32 r0_41 = call_0070b70c(frame.at(0).addr(), 5u);
            r1 = guest::cpu()->r[1];
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
            u32 zf_30 = r6 == 0;
            u32 cf_19 = r6 >= 0u;
            if (r6 >= 0u && r6 != 0) {
                r11 = 0x372au;  // (from the original)
            }
            r7 = 0u;
            frame->word_14 = r0_41;
            if (!!cf_19 && !zf_30) {
                do {
                    u32 r0_42 = *gptr<u8>(r4 + 0x19u);  // (from the original)
                    u32 r0_43 = r0_42 & 0xfu;  // (from the original)
                    if (r0_43 >= 0xeu) {  // (from the original)
                        r0_43 = 0u;
                    }
                    u32 zf_31 = r0_43 == r5;
                    if (zf_31) {
                        u32 zf_32 = r8 == 0;
                        if (zf_32) {
                            u32 r0_44 = *gptr<u8>(r4 + 0x1bu);  // (from the original)
                            u32 zf_33 = (r0_44 & 1u) == 0;
                            if (!zf_33) {
                                goto L_31a8b4;
                            }
                        }
                        u32 r0_45 = *gptr<u8>(r4 + 0xdu);  // (from the original)
                        u32 cf_20 = r0_45 >= 0xb9u;  // (from the original)
                        if (!cf_20) {
                            u32 zf_34 = r0_45 == 0x14u;  // (from the original)
                            if (zf_34) {
                                u32 r0_46 = call_002ff6f8(0x64u, r1, r2, r3);  // (from the original)
                                r2 = guest::cpu()->r[2];
                                r3 = guest::cpu()->r[3];
                                r1 = frame->word_8;
                                u32 cf_21 = r0_46 >= r1;
                                if (cf_21) {
                                    goto L_31a8b4;
                                }
                                r0_47 = r10 + r7;
                                u32 cf_22 = r11 >= r0_47;
                                if (cf_22) {
                                    r1_17 = r0_47 - 0x2000u;  // (from the original)
                                    r2 = 1u;
                                    r0_52 = r1_17 >> 5;
                                    r1_18 = r1_17 & 0x1fu;  // (from the original)
                                    r3 = *gptr<u32>(r9 + (r0_52 << 2));
                                    r1 = r3 | lsl_r(r2, r1_18 & 0xff);  // (from the original)
                                    *gptr<u32>(r9 + (r0_52 << 2)) = r1;
                                    goto L_31a8b4;
                                }
                                goto L_31a8b4;
                            }
                        }
                        u32 cf_23 = r0_45 >= 0xb9u;  // (from the original)
                        if (!cf_23) {
                            u32 zf_35 = r0_45 == 0x15u;  // (from the original)
                            if (zf_35) {
                                u32 r0_48 = call_002ff6f8(0x64u, r1, r2, r3);  // (from the original)
                                r2 = guest::cpu()->r[2];
                                r3 = guest::cpu()->r[3];
                                r1 = frame->word_c;
                                u32 cf_24 = r0_48 >= r1;
                                if (cf_24) {
                                    goto L_31a8b4;
                                }
                                r0_47 = r10 + r7;
                                u32 cf_25 = r11 >= r0_47;
                                if (!cf_25) {
                                    goto L_31a8b4;
                                }
                                r1_17 = r0_47 - 0x2000u;  // (from the original)
                                r2 = 1u;
                                r0_52 = r1_17 >> 5;
                                r1_18 = r1_17 & 0x1fu;  // (from the original)
                                r3 = *gptr<u32>(r9 + (r0_52 << 2));
                                r1 = r3 | lsl_r(r2, r1_18 & 0xff);  // (from the original)
                                *gptr<u32>(r9 + (r0_52 << 2)) = r1;
                                goto L_31a8b4;
                            }
                        }
                        u32 cf_26 = r0_45 >= 0xb9u;  // (from the original)
                        if (!cf_26) {
                            u32 zf_36 = r0_45 == 0x16u;  // (from the original)
                            if (zf_36) {
                                u32 r0_49 = call_002ff6f8(0x64u, r1, r2, r3);  // (from the original)
                                r2 = guest::cpu()->r[2];
                                r3 = guest::cpu()->r[3];
                                r1 = frame->word_10;
                                u32 cf_27 = r0_49 >= r1;
                                if (cf_27) {
                                    goto L_31a8b4;
                                }
                                r0_50 = r10 + r7;
                                u32 cf_28 = r11 >= r0_50;
                                if (cf_28) {
                                    goto L_31a898;
                                }
                                goto L_31a8b4;
                            }
                        }
                        cf_29 = r0_45 >= 0xb9u;  // (from the original)
                        if (cf_29) {
                            goto L_31a8b4;
                        }
                        zf_37 = r0_45 == 0x17u;  // (from the original)
                        if (!zf_37) {
                            goto L_31a8b4;
                        }
                        r0_51 = call_002ff6f8(0x64u, r1, r2, r3);  // (from the original)
                        r2 = guest::cpu()->r[2];
                        r3 = guest::cpu()->r[3];
                        r1 = frame->word_14;
                        cf_30 = r0_51 >= r1;
                        if (cf_30) {
                            goto L_31a8b4;
                        }
                        r0_50 = r10 + r7;
                        cf_31 = r11 >= r0_50;
                        if (!cf_31) {
                            goto L_31a8b4;
                        }
                        goto L_31a898;
L_31a898:;
                        u32 r0_53 = r0_50 - 0x2000u;  // (from the original)
                        r1 = 1u;
                        r3 = r0_53 >> 5;
                        r2 = *gptr<u32>(r9 + (r3 << 2));
                        *gptr<u32>(r9 + (r3 << 2)) = r2 | (r1 << (r0_53 & 0x1fu));  // (from the original)
                    }
L_31a8b4:;
                    r7 += 1u;
                    zf_38 = r6 == r7;
                    cf_32 = r6 >= r7;
                    r4 += 0x1eu;  // (from the original)
                    guest::preempt();
                } while (cf_32 && !zf_38);
            }
            r2 = 0u;
            r1 = r2;
            do {
                r0 = *gptr<u32>(r9 + (r1 << 2));
                u32 zf_39 = r0 == 0;
                if (!zf_39) {
                    do {
                        if ((r0 & 1u) != 0) {
                            r2 += 1u;
                        }
                        u32 res_3 = r0 >> 1;
                        zf_40 = res_3 == 0;
                        r0 = res_3;
                        guest::preempt();
                    } while (!zf_40);
                }
                r1 += 1u;
                cf_33 = r1 >= 0xbau;  // (from the original)
                guest::preempt();
            } while (!cf_33);
            u32 zf_41 = r2 == 0;
            if (!zf_41) {
                guest::cpu()->r[1] = r1;
                return frame.at(0).addr();
            }
            call_0031a334(r9, r5, 5u, r3);
            r3 = guest::cpu()->r[3];
            r2 = 0u;
            r1 = r2;
            do {
                r0 = *gptr<u32>(r9 + (r1 << 2));
                u32 zf_42 = r0 == 0;
                if (!zf_42) {
                    do {
                        if ((r0 & 1u) != 0) {
                            r2 += 1u;
                        }
                        u32 res_4 = r0 >> 1;
                        zf_43 = res_4 == 0;
                        r0 = res_4;
                        guest::preempt();
                    } while (!zf_43);
                }
                r1 += 1u;
                cf_34 = r1 >= 0xbau;  // (from the original)
                guest::preempt();
            } while (!cf_34);
            u32 zf_44 = r2 == 0;
            if (!zf_44) {
                guest::cpu()->r[1] = r1;
                return frame.at(0).addr();
            }
            r0 = call_005361a8(frame.at(4).addr(), r1, r2, r3);
            r1 = guest::cpu()->r[1];
            u32 zf_45 = r0 == 0;
            if (zf_45) {
                return frame.at(0).addr();
            }
            u32 zf_46 = r6 == 0;
            u32 cf_35 = r6 >= 0u;
            r1 = 0u;
            if (!cf_35 || zf_46) {
                guest::cpu()->r[1] = r1;
                return frame.at(0).addr();
            }
            do {
                u32 r2_16 = *gptr<u8>(r0 + 0x19u);  // (from the original)
                u32 r2_17 = r2_16 & 0xfu;  // (from the original)
                if (r2_17 >= 0xeu) {  // (from the original)
                    r2_17 = 0u;
                }
                u32 zf_47 = r2_17 == r5;
                if (zf_47) {
                    u32 zf_48 = r8 == 0;
                    if (!zf_48) {
                        goto L_31a9a4;
                    }
                    u32 r2_18 = *gptr<u8>(r0 + 0x1bu);  // (from the original)
                    u32 zf_49 = (r2_18 & 1u) == 0;
                    if (zf_49) {
                        goto L_31a9a4;
                    }
                }
                r1 += 1u;
                zf_50 = r6 == r1;
                cf_36 = r6 >= r1;
                r0 += 0x1eu;  // (from the original)
                guest::preempt();
            } while (cf_36 && !zf_50);
            guest::cpu()->r[1] = r1;
            return frame.at(0).addr();
        }
        u32 zf_51 = r7 == 5u;
        if (zf_51) {
            r0_58 = call_0070b510(frame.at(0).addr(), 5u, r2, r3);
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
            r12 = guest::cpu()->r[12];
            goto L_31aa28;
        }
        u32 zf_52 = r7 == 6u;
        if (zf_52) {
            r0_58 = call_0070b5e8(frame.at(0).addr(), 5u, r2, r3);
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
            r12 = guest::cpu()->r[12];
            goto L_31aa28;
        }
        u32 zf_53 = r7 == 7u;
        if (zf_53) {
            r0_58 = call_0070b49c(frame.at(0).addr(), 5u, r2, r3);
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
            r12 = guest::cpu()->r[12];
            goto L_31aa28;
        }
        u32 zf_54 = r7 == 8u;
        if (zf_54) {
            r0_58 = call_0070b574(frame.at(0).addr(), 5u, r2, r3);
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
            r12 = guest::cpu()->r[12];
            goto L_31aa28;
        }
        goto L_31aa2c;
    }
    call_0031a334(r0, r1, 5u, r3);
    call_0031a334(r9, r5, 6u, guest::cpu()->r[3]);
L_31a428:;
    r0_1 = call_0031a334(r9, r5, 7u, guest::cpu()->r[3]);
    return r0_1;
L_31a6fc:;
    r0_62 = r10 + r1;
    r1 = 0x372au;  // (from the original)
    zf_55 = r0_62 == r1;
    cf_37 = r0_62 >= r1;
    if (cf_37 && !zf_55) {
        guest::cpu()->r[1] = r1;
        return frame.at(0).addr();
    }
    r1_19 = r0_62 - 0x2000u;  // (from the original)
    r0_63 = r1_19 >> 5;
    r1_20 = r1_19 & 0x1fu;  // (from the original)
    r3_15 = *gptr<u32>(r9 + (r0_63 << 2));
    r1 = r3_15 | lsl_r(1u, r1_20 & 0xff);  // (from the original)
    *gptr<u32>(r9 + (r0_63 << 2)) = r1;
    guest::cpu()->r[1] = r1;
    return frame.at(0).addr();
L_31a9a4:;
    r0 = r10 + r1;
    r1 = 0x372au;  // (from the original)
    zf_56 = r0 == r1;
    cf_38 = r0 >= r1;
    if (cf_38 && !zf_56) {
        guest::cpu()->r[1] = r1;
        return frame.at(0).addr();
    }
    r0_64 = r0 - 0x2000u;  // (from the original)
    r1 = r0_64 >> 5;
    r0_65 = r0_64 & 0x1fu;  // (from the original)
    r3_16 = *gptr<u32>(r9 + (r1 << 2));
    r0_66 = r3_16 | lsl_r(1u, r0_65 & 0xff);  // (from the original)
    *gptr<u32>(r9 + (r1 << 2)) = r0_66;
    guest::cpu()->r[1] = r1;
    return frame.at(0).addr();
L_31aa28:;
    r7 = r0_58;
L_31aa2c:;
    u32 zf_57 = r6 == 0;
    u32 cf_39 = r6 >= 0u;
    if (r6 >= 0u && r6 != 0) {
        r12 = 0x372au;  // (from the original)
    }
    r0 = 0u;
    if (r6 >= 0u && r6 != 0) {
        r3 = 1u;
    }
    if (!!cf_39 && !zf_57) {
        do {
            u32 r1_21 = *gptr<u8>(r4 + 0x19u);  // (from the original)
            u32 r1_22 = r1_21 & 0xfu;  // (from the original)
            if (r1_22 >= 0xeu) {  // (from the original)
                r1_22 = 0u;
            }
            u32 zf_58 = r1_22 == r5;
            if (zf_58) {
                u32 r1_23 = *gptr<u8>(r4 + 0xdu);  // (from the original)
                if (r1_23 >= 0xb9u) {  // (from the original)
                    r1_23 = 0u;
                }
                u32 zf_59 = r1_23 == r7;
                if (zf_59) {
                    u32 zf_60 = r8 == 0;
                    if (zf_60) {
                        u32 r1_24 = *gptr<u8>(r4 + 0x1bu);  // (from the original)
                        u32 zf_61 = (r1_24 & 1u) == 0;
                        if (!zf_61) {
                            goto L_31aaa4;
                        }
                    }
                    u32 r1_25 = r10 + r0;
                    u32 zf_62 = r1_25 == r12;
                    u32 cf_40 = r1_25 >= r12;
                    if (r1_25 <= r12) {
                        u32 r1_26 = r1_25 - 0x2000u >> 5;  // (from the original)
                        r2 = *gptr<u32>(r9 + (r1_26 << 2)) | lsl_r(r3, (r1_25 - 0x2000u & 0x1fu) & 0xff);  // (from the original)
                        *gptr<u32>(r9 + (r1_26 << 2)) = r2;
                    }
                }
            }
L_31aaa4:;
            r0 += 1u;
            zf_63 = r6 == r0;
            cf_41 = r6 >= r0;
            r4 += 0x1eu;  // (from the original)
            guest::preempt();
        } while (cf_41 && !zf_63);
    }
    r3 = 0u;
    r1 = r3;
    do {
        r0 = *gptr<u32>(r9 + (r1 << 2));
        u32 zf_64 = r0 == 0;
        if (!zf_64) {
            do {
                if ((r0 & 1u) != 0) {
                    r3 += 1u;
                }
                u32 res_5 = r0 >> 1;
                zf_65 = res_5 == 0;
                r0 = res_5;
                guest::preempt();
            } while (!zf_65);
        }
        r1 += 1u;
        cf_42 = r1 >= 0xbau;  // (from the original)
        guest::preempt();
    } while (!cf_42);
    u32 zf_66 = r3 == 0;
    if (zf_66) {
        u32 r0_68 = call_005361a8(frame.at(4).addr(), r1, r2, r3);
        u32 zf_67 = r0_68 == 0;
        r1 = r0_68;
        if (!zf_67) {
            u32 zf_68 = r6 == 0;
            u32 cf_43 = r6 >= 0u;
            r0 = 0u;
            if (!!cf_43 && !zf_68) {
                do {
                    u32 r2_21 = *gptr<u8>(r1 + 0x19u);  // (from the original)
                    u32 r2_22 = r2_21 & 0xfu;  // (from the original)
                    if (r2_22 >= 0xeu) {  // (from the original)
                        r2_22 = 0u;
                    }
                    u32 zf_69 = r2_22 == r5;
                    if (zf_69) {
                        u32 r2_23 = *gptr<u8>(r1 + 0xdu);  // (from the original)
                        if (r2_23 >= 0xb9u) {  // (from the original)
                            r2_23 = 0u;
                        }
                        u32 zf_70 = r2_23 == r7;
                        if (zf_70) {
                            r1 = 0x372au;  // (from the original)
                            r0 += r10;
                            u32 zf_71 = r0 == r1;
                            u32 cf_44 = r0 >= r1;
                            if (cf_44 && !zf_71) {
                                break;
                            }
                            r0_64 = r0 - 0x2000u;  // (from the original)
                            r1 = r0_64 >> 5;
                            r0_65 = r0_64 & 0x1fu;  // (from the original)
                            r3_16 = *gptr<u32>(r9 + (r1 << 2));
                            r0_66 = r3_16 | lsl_r(1u, r0_65 & 0xff);  // (from the original)
                            *gptr<u32>(r9 + (r1 << 2)) = r0_66;
                            guest::cpu()->r[1] = r1;
                            return frame.at(0).addr();
                        }
                    }
                    r0 += 1u;
                    zf_72 = r6 == r0;
                    cf_45 = r6 >= r0;
                    r1 += 0x1eu;  // (from the original)
                    guest::preempt();
                } while (cf_45 && !zf_72);
            }
        }
    }
    guest::cpu()->r[1] = r1;
    return frame.at(0).addr();
}

}  // namespace d_0031a334
GUEST_EXPORT_FRAMED(0x0031a334, d_0031a334::f_0031a334, 0x4ff0);  // pushes {r4, r5, r6, r7, r8, r9, r10, r11, lr} first, as the original

// f_0031af8c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0031af8c {

struct __attribute__((packed)) Local_0031af8c_ea_1 {
    u32 word_0;
    u8 unknown_4[0x8];  // (not used here)
    u32 word_c;
};
GUEST_OFFSET(Local_0031af8c_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_0031af8c_ea_1, word_c, 0xc);

inline constexpr u32 vtable_ComButton2Lyt = 0x008ee228u;
inline constexpr u32 vtable_DragIconGroup = 0x008ee248u;
inline constexpr u32 vtable_DragIconGroup_at_c = 0x008ee258u;
inline constexpr u32 vtable_Control2Button = 0x008ef284u;
inline constexpr u32 vtable_Control2Button_at_e4 = 0x008ef2c8u;
inline constexpr u32 vtable_DragIconControl_rec = 0x008f08acu;
inline constexpr u32 vtable_ComButtonLytBase = 0x008f18f4u;
inline constexpr u32 vtable_BsMenuMyDesignSelect = 0x008f444cu;
inline constexpr u32 vtable_BsMenuMyDesignSelect_at_28 = 0x008f44b8u;
inline constexpr u32 vtable_BsMenuMyDesignSelect_at_a4 = 0x008f45bcu;
inline constexpr u32 vtable_ItemSelectNameWindow = 0x008f47a0u;
inline constexpr u32 vtable_ComTitle = 0x008f8b4cu;
inline constexpr guest::Function<0x002f76ad, u32(u32, u32, u32, u32)> call_002f76ac;
inline constexpr guest::Function<0x002f770c, u32(u32)> call_002f770c;
inline constexpr guest::Function<0x002f7710, u32(u32, u32)> call_002f7710;
inline constexpr guest::Function<0x003170d0, u32(u32)> call_003170d0;
inline constexpr guest::Function<0x00317dec, u32(u32)> call_00317dec;
inline constexpr guest::Function<0x00567ef0, u32(u32, u32)> call_00567ef0;
inline constexpr guest::Function<0x0056988c, u32(u32, u32)> call_0056988c;
inline constexpr guest::Function<0x005bf744, u32(u32)> call_005bf744;
inline constexpr guest::Function<0x005d703c, u32(u32)> call_005d703c;
inline constexpr guest::Function<0x005e3194, u32(u32, u32)> call_005e3194;
inline constexpr guest::Function<0x006aaa30, u32(u32, u32)> call_006aaa30;

u32 f_0031af8c(gptr<BsMenuMyDesignSelect> arg0) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    arg0->word_a4 = vtable_BsMenuMyDesignSelect_at_a4;
    arg0->word_0 = vtable_BsMenuMyDesignSelect;
    arg0->word_28 = vtable_BsMenuMyDesignSelect_at_28;
    arg0->word_2f20 = vtable_ComButton2Lyt;
    u32 r4_1 = arg0.addr() + 0x32b8u;  // (from the original)
    arg0->word_339c = vtable_Control2Button_at_e4;
    arg0->word_32b8 = vtable_Control2Button;
    call_002f76ac(r4_1 + 0x118u, 0x2e0b3cu, 0x518u, 2u);  // (from the original)
    call_002f770c(r4_1);
    arg0->word_2f20 = vtable_ComButtonLytBase;
    u32 r0_3 = call_00567ef0(r4_1 - 0x248u, 0x8f18f4u);  // (from the original)
    u32 r0_5 = call_005bf744(r0_3 - 0x14cu);  // (from the original)
    *gptr<u32>(r0_5 - 0x954u) = vtable_ComTitle;  // (from the original)
    u32 r0_6 = r0_5 - 0x44u;  // (from the original)
    call_0056988c(r0_6, 0x8f8b4cu);  // (from the original)
    u32 r0_7 = r0_6 - 0x28u;  // (from the original)
    call_0056988c(r0_7, guest::cpu()->r[1]);
    u32 r0_8 = r0_7 - 0x28u;  // (from the original)
    call_0056988c(r0_8, guest::cpu()->r[1]);
    u32 r0_9 = r0_8 - 0x28u;  // (from the original)
    call_0056988c(r0_9, guest::cpu()->r[1]);
    u32 r0_11 = call_00567ef0(r0_9 - 0x248u, guest::cpu()->r[1]);  // (from the original)
    u32 r0_13 = call_005bf744(r0_11 - 0x14cu);  // (from the original)
    u32 r0_14 = r0_13 - 0xd0u;  // (from the original)
    call_005e3194(r0_14, guest::cpu()->r[1]);
    u32 r0_15 = r0_14 - 0xc4u;  // (from the original)
    call_005e3194(r0_15, guest::cpu()->r[1]);
    u32 r0_16 = r0_15 - 0xc4u;  // (from the original)
    call_005e3194(r0_16, guest::cpu()->r[1]);
    u32 r0_17 = r0_16 - 0xc4u;  // (from the original)
    call_005e3194(r0_17, guest::cpu()->r[1]);
    u32 r0_18 = r0_17 - 0xc4u;  // (from the original)
    call_005e3194(r0_18, guest::cpu()->r[1]);
    u32 r0_19 = r0_18 - 0x100u;  // (from the original)
    call_005d703c(r0_19);
    *gptr<u32>(r0_19 - 0x518u) = vtable_ItemSelectNameWindow;  // (from the original)
    u32 r0_20 = r0_19 - 0xfcu;  // (from the original)
    call_005e3194(r0_20, 0x8f47a0u);  // (from the original)
    u32 r0_21 = r0_20 - 0x28u;  // (from the original)
    call_0056988c(r0_21, guest::cpu()->r[1]);
    u32 r0_22 = r0_21 - 0x28u;  // (from the original)
    call_0056988c(r0_22, guest::cpu()->r[1]);
    u32 r0_24 = call_005bf744(r0_22 - 0x15cu);  // (from the original)
    u32 r0_26 = call_00567ef0(r0_24 - 0x24cu, guest::cpu()->r[1]);  // (from the original)
    u32 r0_27 = r0_26 - 0x50u;  // (from the original)
    call_0056988c(r0_27, guest::cpu()->r[1]);
    u32 r0_28 = r0_27 - 0x28u;  // (from the original)
    call_0056988c(r0_28, guest::cpu()->r[1]);
    u32 r0_29 = r0_28 - 0x28u;  // (from the original)
    call_002f76ac(r0_29 - 0x19a4u, 0x320b0cu, 0x290u, 0xau);  // (from the original)
    gptr<Local_0031af8c_ea_1> ea_1 = gptr<Local_0031af8c_ea_1>((r0_29 - 0x2060u) + 0x57cu);  // (from the original)
    ea_1->word_0 = vtable_DragIconGroup;
    u32 r0_31 = ea_1.addr() + 0x114u;  // (from the original)
    ea_1->word_c = vtable_DragIconGroup_at_c;
    call_0056988c(r0_31, 0x8ee258u);  // (from the original)
    u32 r0_32 = r0_31 - 0x28u;  // (from the original)
    call_0056988c(r0_32, guest::cpu()->r[1]);
    u32 r0_33 = r0_32 - 0x28u;  // (from the original)
    call_0056988c(r0_33, guest::cpu()->r[1]);
    u32 r0_34 = r0_33 - 0x28u;  // (from the original)
    call_0056988c(r0_34, guest::cpu()->r[1]);
    u32 r0_35 = r0_34 - 0x28u;  // (from the original)
    call_0056988c(r0_35, guest::cpu()->r[1]);
    u32 r0_36 = r0_35 - 0x28u;  // (from the original)
    call_0056988c(r0_36, guest::cpu()->r[1]);
    u32 r0_37 = r0_36 - 0x2cu;  // (from the original)
    call_0056988c(r0_37, guest::cpu()->r[1]);
    u32 ea_2 = r0_37 - 0x138u;  // (from the original)
    *gptr<u32>(ea_2) = vtable_DragIconControl_rec;
    call_002f7710(ea_2, 0x8f08acu);  // (from the original)
    u32 r0_38 = ea_2 - 8u;
    call_00317dec(r0_38);
    u32 r0_40 = call_005bf744(r0_38 - 0x14cu);  // (from the original)
    u32 r0_42 = call_00567ef0(r0_40 - 0x248u, guest::cpu()->r[1]);  // (from the original)
    u32 r0_43 = r0_42 - 0xa0u;  // (from the original)
    call_003170d0(r0_43);
    frame.release();
    return call_006aaa30(r0_43 - 0x28u, guest::cpu()->r[1]);  // (from the original)
}

}  // namespace d_0031af8c
GUEST_EXPORT(0x0031af8c, d_0031af8c::f_0031af8c);

// f_0031b25c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0031b25c {

inline constexpr u32 vtable_script__WordCPtrSv = 0x00908b9cu;
inline constexpr guest::Function<0x005fdf68, u32(u32, u32, u32)> call_005fdf68;

void f_0031b25c(gptr<script__WordCPtrSv> arg0, u32 r1) {
    call_005fdf68(arg0.addr(), r1, 9u);
    arg0->word_0 = vtable_script__WordCPtrSv;
    guest::cpu()->r[1] = 0x908b9cu;  // (from the original)
}

}  // namespace d_0031b25c
GUEST_EXPORT_FRAMED(0x0031b25c, d_0031b25c::f_0031b25c, 0x4010);  // pushes {r4, lr} first, as the original

// f_0031b394: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0031b394 {

inline constexpr guest::Function<0x002f7a10, u32(u32)> call_002f7a10;

u32 f_0031b394(u32 r0) {
    u32 r0_1 = call_002f7a10(r0);
    u32 r0_2 = *gptr<u32>(r0_1);
    u32 r1_1 = *gptr<u8>(r0_2 + 0x101u);  // (from the original)
    if (r1_1 == 1u) {
        u32 r0_3 = *gptr<u32>(r0_2 + 0x10bu);  // (from the original)
        guest::cpu()->r[1] = r1_1;
        return r0_3;
    }
    guest::cpu()->r[1] = r1_1;
    return 1u;
}

}  // namespace d_0031b394
GUEST_EXPORT_FRAMED(0x0031b395, d_0031b394::f_0031b394, 0x4010);  // pushes {r4, lr} first, as the original

// f_0031b3b2: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0031b3b2 {

struct __attribute__((packed)) Object_0031b3b2_0 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Object_0031b3b2_0, word_0, 0x0);
GUEST_OFFSET(Object_0031b3b2_0, word_4, 0x4);

inline constexpr guest::Function<0x002fa9d0, u32(u32)> call_002fa9d0;
inline constexpr guest::Function<0x003075cc, u32(u32)> call_003075cc;
inline constexpr guest::Function<0x00307979, u32(u32, u32, u32, u32)> call_00307978;
inline constexpr guest::Function<0x00307990, u32(u32, u32)> call_00307990;

struct __attribute__((packed)) Frame_0031b3b2 {
    u32 word_0;
};
GUEST_OFFSET(Frame_0031b3b2, word_0, 0x0);
GUEST_SIZE(Frame_0031b3b2, 0x4);

u32 f_0031b3b2(gptr<Object_0031b3b2_0> arg0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_0031b3b2> frame;  // the original's stack frame
    frame->word_0 = r3;
    arg0->word_0 = r2;
    u32 r0_1 = call_00307978(r2, 0u, r2, r3);
    arg0->word_4 = r0_1;
    if (r0_1 != 0) {
        u32 r0_2 = call_002fa9d0(r0_1);
        u32 r0_4 = call_003075cc(r0_2 + 1u);
        call_00307990(r0_4, arg0->word_4);
        arg0->word_4 = r0_4;
    }
    call_00307978(r2, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    return arg0.addr();
}

}  // namespace d_0031b3b2
GUEST_EXPORT_FRAMED(0x0031b3b3, d_0031b3b2::f_0031b3b2, 0x40f0);  // pushes {r4, r5, r6, r7, lr} first, as the original

// f_0031b3ea: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0031b3ea {

struct __attribute__((packed)) Object_0031b3ea_0 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Object_0031b3ea_0, word_0, 0x0);
GUEST_OFFSET(Object_0031b3ea_0, word_4, 0x4);

inline constexpr guest::Function<0x002f88b8, u32(u32)> call_002f88b8;
inline constexpr guest::Function<0x00307979, u32(u32, u32, u32, u32)> call_00307978;

u32 f_0031b3ea(gptr<Object_0031b3ea_0> arg0) {
    u32 r1_1 = arg0->word_4;
    if (r1_1 == 0) {
        guest::cpu()->r[1] = r1_1;
        return arg0.addr();
    }
    call_00307978(arg0->word_0, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);
    call_002f88b8(arg0->word_4);
    return arg0.addr();
}

}  // namespace d_0031b3ea
GUEST_EXPORT_FRAMED(0x0031b3eb, d_0031b3ea::f_0031b3ea, 0x4010);  // pushes {r4, lr} first, as the original

// f_0031b404: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0031b404 {

inline constexpr guest::Function<0x002f91d4, u32(u32)> call_002f91d4;
inline constexpr guest::Function<0x002fa9d0, u32(u32, u32, u32, u32)> call_002fa9d0;

struct __attribute__((packed)) Frame_0031b404 {
    u32 word_0;
};
GUEST_OFFSET(Frame_0031b404, word_0, 0x0);
GUEST_SIZE(Frame_0031b404, 0x4);

u32 f_0031b404(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_0031b404> frame;  // the original's stack frame
    frame->word_0 = r3;
    u32 r5 = r0;
    u32 r4 = r2;
    u32 r6 = r1;
    u32 r0_1 = call_002fa9d0(r1, r1, r2, r3);
    u32 r7 = r0_1;
    u32 r0_2 = call_002f91d4(r0_1);
    r1 = *gptr<u32>(r0_2);
    u32 r0_3 = *gptr<u32>(r1);
    if (r0_3 == 0) {
        goto L_31b43c;
    }
    r1 += r0_3;
    if (r4 != 0) {
        do {
            u32 r0_4 = *gptr<u8>(r6);
            r6 += 1u;
            if (r0_4 == 0) {
                *gptr<u8>(r5) = 0;
                break;
            }
            *gptr<u8>(r5) = u8(u32(*gptr<u8>(r1 + r0_4)));
            r5 += 1u;
            r4 -= 1u;
            guest::preempt();
        } while (r4 != 0);
    }
    guest::cpu()->r[1] = r1;
    return r7;
L_31b43c:;
    if (r4 != 0) {
        u32 r0_5 = *gptr<u8>(r6);
        r6 += 1u;
        *gptr<u8>(r5) = u8(r0_5);
        r5 += 1u;
        if (r0_5 == 0) {
            guest::cpu()->r[1] = r1;
            return r7;
        }
        r4 -= 1u;
        guest::preempt();
        goto L_31b43c;
    }
    guest::cpu()->r[1] = r1;
    return r7;
}

}  // namespace d_0031b404
GUEST_EXPORT_FRAMED(0x0031b405, d_0031b404::f_0031b404, 0x40f0);  // pushes {r4, r5, r6, r7, lr} first, as the original

// f_0031b4c4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0031b4c4 {

struct __attribute__((packed)) Local_0031b4c4_ea_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_0031b4c4_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_0031b4c4_ea_1, word_4, 0x4);

inline constexpr guest::Function<0x00307569, u32(u32, u32, u32, u32)> call_00307568;
inline constexpr guest::Function<0x0031c311, u32(u32, u32, u32, u32)> call_0031c310;
inline constexpr guest::Function<0x0031c31d, u32(u32, u32, u32)> call_0031c31c;
inline constexpr guest::Function<0x0031c39d, u32(u32, u32, u32, u32)> call_0031c39c;

struct __attribute__((packed)) Frame_0031b4c4 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Frame_0031b4c4, word_0, 0x0);
GUEST_OFFSET(Frame_0031b4c4, word_4, 0x4);
GUEST_SIZE(Frame_0031b4c4, 0x8);

u32 f_0031b4c4(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_0031b4c4> frame;  // the original's stack frame
    u32 r0_2 = 0;
    gptr<Local_0031b4c4_ea_1> ea_1 = gptr<Local_0031b4c4_ea_1>(frame.at(0).addr());
    ea_1->word_0 = r2;
    ea_1->word_4 = r3;
    u32 r4_1 = r2;
    u32 r1_1 = r3;
    u32 r0_1 = ~0xeu;  // (from the original)
    if (r4_1 > r0_1) {
        frame->word_0 = r0_1;
        call_00307568(8u, 0x31b51cu, 0x31b51cu, r4_1);  // (from the original)
        r1_1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
    }
    if (r4_1 == 0) {
        r0_2 = 0xaf7f30u;  // (from the original)
    } else {
        frame->word_4 = 0x20;  // (from the original)
        frame->word_0 = r4_1;
        u32 r0_4 = call_0031c310(frame.at(4).addr(), frame.at(0).addr(), r2, r3);
        r0_2 = call_0031c31c(r0, *gptr<u32>(r0_4), r4_1);
        r1_1 = guest::cpu()->r[1];
        r3 = guest::cpu()->r[3];
    }
    u32 r0_5 = r0_2 + 0xcu;  // (from the original)
    *gptr<u32>(r0) = r0_5;
    if (r1 != 0) {
        call_0031c39c(r0_5, r1, r4_1, r3);
        r1_1 = guest::cpu()->r[1];
    }
    guest::cpu()->r[1] = r1_1;
    return r0;
}

}  // namespace d_0031b4c4
GUEST_EXPORT_FRAMED(0x0031b4c5, d_0031b4c4::f_0031b4c4, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_0031b578: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0031b578 {

inline guest::global<u32, 0x009825f4> global_009825f4;
inline guest::global<u32, 0x009825f8> global_009825f8;
inline guest::global<u32, 0x009825fc> global_009825fc;
inline constexpr guest::Function<0x002fe7dd, u32(u32, u32)> call_002fe7dc;
inline constexpr guest::Function<0x002fe7f0, u32(u32, u32)> call_002fe7f0;

u32 f_0031b578(u32 r0_unused, u32 r1) {
    if ((*global_009825f4 & 1u) != 0u) {
        return 0x9825f8u;  // (from the original)
    }
    u32 r0_1 = call_002fe7dc(0x9825f4u, r1);  // (from the original)
    if (r0_1 == 0) {
        return 0x9825f8u;  // (from the original)
    }
    *global_009825f8 = 0;
    *global_009825fc = 0;
    call_002fe7f0(0x9825f8u, 0x11c2a1u);  // (from the original)
    return 0x9825f8u;  // (from the original)
}

}  // namespace d_0031b578
GUEST_EXPORT_FRAMED(0x0031b579, d_0031b578::f_0031b578, 0x4010);  // pushes {r4, lr} first, as the original

// f_0031b5b8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0031b5b8 {

struct __attribute__((packed)) Object_0031b5b8_0 {
    u32 word_0;
};
GUEST_OFFSET(Object_0031b5b8_0, word_0, 0x0);

struct __attribute__((packed)) Object_0031b5b8_1 {
    u32 word_0;
};
GUEST_OFFSET(Object_0031b5b8_1, word_0, 0x0);

struct __attribute__((packed)) Local_0031b5b8_r0_1 {
    u8 unknown_0[0x1c];  // (not used here)
    u32 word_1c;
};
GUEST_OFFSET(Local_0031b5b8_r0_1, word_1c, 0x1c);

struct __attribute__((packed)) Local_0031b5b8_r0_2 {
    u8 unknown_0[0x1c];  // (not used here)
    u32 word_1c;
};
GUEST_OFFSET(Local_0031b5b8_r0_2, word_1c, 0x1c);

inline constexpr guest::Function<0x002ffb64, u32(u32)> call_002ffb64;
inline constexpr guest::Function<0x0031bea1, u32(u32, u32, u32, u32)> call_0031bea0;

u32 f_0031b5b8(gptr<Object_0031b5b8_0> arg0, gptr<Object_0031b5b8_1> arg1) {
    u32 r1_1 = arg0->word_0;
    gptr<Local_0031b5b8_r0_1> r0_1 = gptr<Local_0031b5b8_r0_1>(arg1->word_0);
    if (r1_1 != r0_1.addr()) {
        r0_1->word_1c = r0_1->word_1c + 1u;
        gptr<Local_0031b5b8_r0_2> r0_2 = gptr<Local_0031b5b8_r0_2>(arg0->word_0);
        u32 res_1 = r0_2->word_1c - 1u;
        r1_1 = res_1;
        r0_2->word_1c = r1_1;
        if (res_1 == 0) {
            u32 r0_3 = arg0->word_0;
            if (r0_3 != 0) {
                call_0031bea0(r0_3, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);
                call_002ffb64(r0_3);
                r1_1 = guest::cpu()->r[1];
            }
        }
        arg0->word_0 = arg1->word_0;
    }
    guest::cpu()->r[1] = r1_1;
    return arg0.addr();
}

}  // namespace d_0031b5b8
GUEST_EXPORT_FRAMED(0x0031b5b9, d_0031b5b8::f_0031b5b8, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_0031b5ec: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0031b5ec {

inline guest::global<u32, 0x00981fb8> global_00981fb8;
inline guest::global<u32, 0x00981fc0> global_00981fc0;
inline guest::global<u32, 0x00981fc8> global_00981fc8;
inline constexpr guest::Function<0x002fe7dd, u32(u32, u32, u32, u32)> call_002fe7dc;
inline constexpr guest::Function<0x002fe7f0, u32(u32)> call_002fe7f0;
inline constexpr guest::Function<0x0031b7b1, u32(u32, u32)> call_0031b7b0;
inline constexpr guest::Function<0x0031bebd, u32(u32, u32, u32, u32)> call_0031bebc;

u32 f_0031b5ec(u32 r0_unused, u32 r1, u32 r2) {
    u32 r0_1 = *global_00981fc8;
    if (r0_1 == 0) {
        call_0031bebc(r0_1, r1, r2, guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
    }
    if ((*global_00981fb8 & 1u) != 0u) {
        return 0x981fbcu;  // (from the original)
    }
    u32 r0_2 = call_002fe7dc(0x981fb8u, r1, r2, guest::cpu()->r[3]);  // (from the original)
    if (r0_2 == 0) {
        return 0x981fbcu;  // (from the original)
    }
    call_0031b7b0(0x981fbcu, *global_00981fc0);  // (from the original)
    call_002fe7f0(0x981fbcu);  // (from the original)
    return 0x981fbcu;  // (from the original)
}

}  // namespace d_0031b5ec
GUEST_EXPORT_FRAMED(0x0031b5ed, d_0031b5ec::f_0031b5ec, 0x4010);  // pushes {r4, lr} first, as the original

// f_0031b766: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0031b766 {

struct __attribute__((packed)) Object_0031b766_0 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
};
GUEST_OFFSET(Object_0031b766_0, word_4, 0x4);

struct __attribute__((packed)) Local_0031b766_ea_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_0031b766_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_0031b766_ea_1, word_4, 0x4);
GUEST_OFFSET(Local_0031b766_ea_1, word_8, 0x8);

inline constexpr guest::Function<0x002f88b8, u32(u32, u32, u32, u32)> call_002f88b8;
inline constexpr guest::Function<0x003075cc, u32(u32, u32, u32, u32)> call_003075cc;

struct __attribute__((packed)) Frame_0031b766 {
    u8 unknown_0[0x8];  // (not read or written by name)
    u32 word_8;
};
GUEST_OFFSET(Frame_0031b766, word_8, 0x8);
GUEST_SIZE(Frame_0031b766, 0xc);

void f_0031b766(gptr<Object_0031b766_0> arg0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_0031b766> frame;  // the original's stack frame
    u32 r0 = arg0.addr();
    gptr<Local_0031b766_ea_1> ea_1 = gptr<Local_0031b766_ea_1>(frame.at(0).addr());
    ea_1->word_0 = r0;
    ea_1->word_4 = r1;
    ea_1->word_8 = r2;
    u32 r4 = r0;
    u32 r5 = r1;
    u32 r0_2 = call_003075cc(r1 << 2, r1, r2, r3);
    r2 = arg0->word_4;
    u32 r6 = r0_2;
    if (r2 >= r5) {
        r2 = r5;
    }
    r1 = r6;
    r0 = *gptr<u32>(r4);
    r3 = r2 << 2;
    for (;;) {
        if (!((*gptr<u32>(r4) + r3) != r0)) {
            break;
        }
        u32 r7_1 = *gptr<u32>(r0);
        r0 += 4;
        *gptr<u32>(r1) = r7_1;
        r1 += 4;
        guest::preempt();
    }
    for (;;) {
        if (!(r2 < r5)) {
            break;
        }
        r1 = r2 << 2;
        r2 += 1u;
        *gptr<u32>(r6 + r1) = *gptr<u32>(frame->word_8);
        guest::preempt();
    }
    call_002f88b8(*gptr<u32>(r4), r1, r2, r3);
    *gptr<u32>(r4) = r6;
    *gptr<u32>(r4 + 4u) = r5;
}

}  // namespace d_0031b766
GUEST_EXPORT_FRAMED(0x0031b767, d_0031b766::f_0031b766, 0x40f0);  // pushes {r4, r5, r6, r7, lr} first, as the original

// f_0031b7b0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0031b7b0 {

struct __attribute__((packed)) Object_0031b7b0_0 {
    u32 word_0;
};
GUEST_OFFSET(Object_0031b7b0_0, word_0, 0x0);

struct __attribute__((packed)) Local_0031b7b0_r1_1 {
    u8 unknown_0[0x1c];  // (not used here)
    u32 word_1c;
};
GUEST_OFFSET(Local_0031b7b0_r1_1, word_1c, 0x1c);

inline guest::global<u32, 0x00981fc8> global_00981fc8;
inline constexpr guest::Function<0x0031bebd, u32(u32, u32, u32, u32)> call_0031bebc;

void f_0031b7b0(gptr<Object_0031b7b0_0> arg0, u32 r1) {
    arg0->word_0 = r1;
    u32 r0_1 = *global_00981fc8;
    if (r0_1 == 0) {
        call_0031bebc(r0_1, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    }
    gptr<Local_0031b7b0_r1_1> r1_1 = gptr<Local_0031b7b0_r1_1>(arg0->word_0);
    r1_1->word_1c = r1_1->word_1c + 1u;
}

}  // namespace d_0031b7b0
GUEST_EXPORT_FRAMED(0x0031b7b1, d_0031b7b0::f_0031b7b0, 0x4010);  // pushes {r4, lr} first, as the original

// f_0031b854: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0031b854 {

struct __attribute__((packed)) Object_0031b854_0 {
    u32 word_0;
};
GUEST_OFFSET(Object_0031b854_0, word_0, 0x0);

struct __attribute__((packed)) Local_0031b854_r0_1 {
    u8 unknown_0[0x1c];  // (not used here)
    u32 word_1c;
};
GUEST_OFFSET(Local_0031b854_r0_1, word_1c, 0x1c);

inline constexpr guest::Function<0x002ffb64, u32(u32)> call_002ffb64;
inline constexpr guest::Function<0x0031bea1, u32(u32, u32, u32, u32)> call_0031bea0;

u32 f_0031b854(gptr<Object_0031b854_0> arg0, u32 r1) {
    gptr<Local_0031b854_r0_1> r0_1 = gptr<Local_0031b854_r0_1>(arg0->word_0);
    if (r0_1.addr() == 0) {
        return arg0.addr();
    }
    u32 res_1 = r0_1->word_1c - 1u;
    r0_1->word_1c = res_1;
    if (res_1 != 0) {
        guest::cpu()->r[1] = res_1;
        return arg0.addr();
    }
    u32 r0_2 = arg0->word_0;
    if (r0_2 == 0) {
        guest::cpu()->r[1] = res_1;
        return arg0.addr();
    }
    call_0031bea0(r0_2, res_1, guest::cpu()->r[2], guest::cpu()->r[3]);
    call_002ffb64(r0_2);
    return arg0.addr();
}

}  // namespace d_0031b854
GUEST_EXPORT_FRAMED(0x0031b855, d_0031b854::f_0031b854, 0x4010);  // pushes {r4, lr} first, as the original

// f_0031b8f0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0031b8f0 {

struct __attribute__((packed)) Object_0031b8f0_0 {
    u32 word_0;
};
GUEST_OFFSET(Object_0031b8f0_0, word_0, 0x0);


u32 f_0031b8f0(gptr<Object_0031b8f0_0> arg0, u32 r1) {
    u32 r1_1 = r1 << 2;
    u32 r0_1 = arg0->word_0 + r1_1;
    guest::cpu()->r[1] = r1_1;
    return r0_1;
}

}  // namespace d_0031b8f0
GUEST_EXPORT(0x0031b8f1, d_0031b8f0::f_0031b8f0);

// f_0031ba1c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0031ba1c {

struct __attribute__((packed)) Object_0031ba1c_0 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u8 unknown_10[0x4];  // (not used here)
    u32 word_14;
    u8 byte_18;
};
GUEST_OFFSET(Object_0031ba1c_0, word_0, 0x0);
GUEST_OFFSET(Object_0031ba1c_0, word_4, 0x4);
GUEST_OFFSET(Object_0031ba1c_0, word_8, 0x8);
GUEST_OFFSET(Object_0031ba1c_0, word_c, 0xc);
GUEST_OFFSET(Object_0031ba1c_0, word_14, 0x14);
GUEST_OFFSET(Object_0031ba1c_0, byte_18, 0x18);

inline constexpr guest::Function<0x003075cc, u32(u32, u32, u32, u32)> call_003075cc;
inline constexpr guest::Function<0x0031b759, u32(u32, u32, u32, u32)> call_0031b758;

struct __attribute__((packed)) Frame_0031ba1c {
    u32 word_0;
};
GUEST_OFFSET(Frame_0031ba1c, word_0, 0x0);
GUEST_SIZE(Frame_0031ba1c, 0x4);

u32 f_0031ba1c(gptr<Object_0031ba1c_0> arg0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_0031ba1c> frame;  // the original's stack frame
    u32 r0 = arg0.addr();
    u32 r0_8 = 0;
    u32 r0_16 = 0;
    frame->word_0 = r3;
    u32 r4 = r0;
    arg0->word_4 = 0x20;  // (from the original)
    arg0->word_c = r3;
    r3 = 0x90b608u;  // (from the original)
    arg0->word_8 = 0;
    arg0->word_0 = r3;
    arg0->word_14 = r1;
    arg0->byte_18 = u8(r2);
    if (r1 == 0) {
        arg0->word_14 = 0x8c8680;  // (from the original)
        arg0->byte_18 = 0;
    }
    u32 r5 = 0u;
    u32 r6 = 0xffu;  // (from the original)
    do {
        u32 r0_1 = call_0031b758(r4, 0x10u, r5 & 0xffu, r3);  // (from the original)
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        if (r0_1 != 0) {
            do {
                if (r6 <= r5) {
                    goto L_31ba70;
                }
                u32 r0_2 = call_0031b758(r4, 0x10u, r6 & 0xffu, r3);  // (from the original)
                r1 = guest::cpu()->r[1];
                r2 = guest::cpu()->r[2];
                r3 = guest::cpu()->r[3];
                if (r0_2 != 0) {
                    goto L_31ba70;
                }
                r6 -= 1u;
                guest::preempt();
            } while (1);
        }
        r5 += 1u;
        guest::preempt();
    } while (r5 < r6);
L_31ba70:;
    *gptr<u32>(r4 + 0x20u) = r6;  // (from the original)
    *gptr<u32>(r4 + 0x1cu) = r5;  // (from the original)
    u32 r0_4 = call_003075cc(r6 - r5 + 1u, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    u32 r7 = r0_4;
    *gptr<u32>(r4 + 0x2cu) = r0_4;  // (from the original)
    for (;;) {
        if (!(r5 <= r6)) {
            break;
        }
        if (r5 - 0x61u <= 0x19u) {  // (from the original)
            u32 r0_5 = call_0031b758(r4, 0x10u, r5 & 0xffu, r3);  // (from the original)
            r3 = guest::cpu()->r[3];
            if (r0_5 != 0) {
                u32 r0_6 = r5 - 0x20u;  // (from the original)
                frame->word_0 = r0_6;
                u32 r0_7 = call_0031b758(r4, 8u, r0_6 & 0xffu, r3);  // (from the original)
                r3 = guest::cpu()->r[3];
                if (r0_7 != 0) {
                    r0_8 = frame->word_0;
                    goto L_31bab6;
                }
            }
        }
        r0_8 = r5;
L_31bab6:;
        *gptr<u8>(r7) = u8(r0_8);
        r7 += 1u;
        r5 += 1u;
        guest::preempt();
    }
    r5 = 0u;
    r6 = 0xffu;  // (from the original)
    do {
        u32 r0_9 = call_0031b758(r4, 8u, r5 & 0xffu, r3);  // (from the original)
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        if (r0_9 != 0) {
            do {
                if (r6 <= r5) {
                    goto L_31baf4;
                }
                u32 r0_10 = call_0031b758(r4, 8u, r6 & 0xffu, r3);  // (from the original)
                r1 = guest::cpu()->r[1];
                r2 = guest::cpu()->r[2];
                r3 = guest::cpu()->r[3];
                if (r0_10 != 0) {
                    goto L_31baf4;
                }
                r6 -= 1u;
                guest::preempt();
            } while (1);
        }
        r5 += 1u;
        guest::preempt();
    } while (r5 < r6);
L_31baf4:;
    *gptr<u32>(r4 + 0x28u) = r6;  // (from the original)
    *gptr<u32>(r4 + 0x24u) = r5;  // (from the original)
    u32 r0_12 = call_003075cc(r6 - r5 + 1u, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r3 = guest::cpu()->r[3];
    r7 = r0_12;
    *gptr<u32>(r4 + 0x30u) = r0_12;  // (from the original)
    for (;;) {
        if (!(r5 <= r6)) {
            break;
        }
        if (r5 - 0x41u <= 0x19u) {  // (from the original)
            u32 r0_13 = call_0031b758(r4, 8u, r5 & 0xffu, r3);  // (from the original)
            r1 = guest::cpu()->r[1];
            r3 = guest::cpu()->r[3];
            if (r0_13 != 0) {
                u32 r0_14 = r5 + 0x20u;  // (from the original)
                frame->word_0 = r0_14;
                u32 r0_15 = call_0031b758(r4, 0x10u, r0_14 & 0xffu, r3);  // (from the original)
                r1 = guest::cpu()->r[1];
                r3 = guest::cpu()->r[3];
                if (r0_15 != 0) {
                    r0_16 = frame->word_0;
                    goto L_31bb3a;
                }
            }
        }
        r0_16 = r5;
L_31bb3a:;
        *gptr<u8>(r7) = u8(r0_16);
        r7 += 1u;
        r5 += 1u;
        guest::preempt();
    }
    guest::cpu()->r[1] = r1;
    return r4;
}

}  // namespace d_0031ba1c
GUEST_EXPORT_FRAMED(0x0031ba1d, d_0031ba1c::f_0031ba1c, 0x40f0);  // pushes {r4, r5, r6, r7, lr} first, as the original

// f_0031bdb8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0031bdb8 {

struct __attribute__((packed)) Object_0031bdb8_0 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Object_0031bdb8_0, word_0, 0x0);
GUEST_OFFSET(Object_0031bdb8_0, word_4, 0x4);

struct __attribute__((packed)) Local_0031bdb8_ea_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
    u32 word_18;
    u32 word_1c;
    u32 word_20;
};
GUEST_OFFSET(Local_0031bdb8_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_0031bdb8_ea_1, word_4, 0x4);
GUEST_OFFSET(Local_0031bdb8_ea_1, word_8, 0x8);
GUEST_OFFSET(Local_0031bdb8_ea_1, word_c, 0xc);
GUEST_OFFSET(Local_0031bdb8_ea_1, word_10, 0x10);
GUEST_OFFSET(Local_0031bdb8_ea_1, word_14, 0x14);
GUEST_OFFSET(Local_0031bdb8_ea_1, word_18, 0x18);
GUEST_OFFSET(Local_0031bdb8_ea_1, word_1c, 0x1c);
GUEST_OFFSET(Local_0031bdb8_ea_1, word_20, 0x20);

inline constexpr guest::Function<0x002f8720, u32(u32, u32, u32)> call_002f8720;
inline constexpr guest::Function<0x002fa9d0, u32(u32, u32, u32, u32)> call_002fa9d0;
inline constexpr guest::Function<0x002fae75, u32(u32, u32, u32, u32)> call_002fae74;
inline constexpr guest::Function<0x003075cc, u32(u32, u32, u32, u32)> call_003075cc;
inline constexpr guest::Function<0x003076c9, u32(u32, u32, u32)> call_003076c8;
inline constexpr guest::Function<0x00307839, u32(u32, u32, u32, u32)> call_00307838;
inline constexpr guest::Function<0x0030784d, u32(u32, u32, u32, u32)> call_0030784c;
inline constexpr guest::Function<0x00307889, u32(u32, u32, u32, u32)> call_00307888;

u32 f_0031bdb8(gptr<Object_0031bdb8_0> arg0, u32 r1, u32 r2, u32 r3) {
    u32 r0 = arg0.addr();
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r13 = guest::cpu()->r[13];
    u32 r14 = guest::cpu()->r[14];
    u32 r0_2 = 0;
    gptr<Local_0031bdb8_ea_1> ea_1 = gptr<Local_0031bdb8_ea_1>(r13 - 0x24);  // (from the original)
    ea_1->word_0 = r0;
    ea_1->word_4 = r1;
    ea_1->word_8 = r2;
    ea_1->word_c = r3;
    ea_1->word_10 = r4;
    ea_1->word_14 = r5;
    ea_1->word_18 = r6;
    ea_1->word_1c = r7;
    ea_1->word_20 = r14;
    r13 = ea_1.addr() - 0x1cu;  // (from the original)
    r4 = r2;
    r5 = r0 + 8u;
    r6 = 0u;
    arg0->word_0 = 0;
    arg0->word_4 = 0;
    if (r2 != 0) {
        guest::cpu()->r[13] = r13;
        r0_2 = call_003075cc(r4 << 2, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
    } else {
        r0_2 = 0u;
    }
    *gptr<u32>(r5 + 4u) = r4;
    *gptr<u32>(r5) = r0_2;
    for (;;) {
        if (!(r4 != 0)) {
            break;
        }
        u32 r0_3 = r4;
        r1 = *gptr<u32>(r5);
        r4 -= 1u;
        *gptr<u32>(r1 + ((r0_3 << 2) - 4u)) = r6;
        guest::preempt();
    }
    *gptr<u32>(r5 + 8u) = 0;
    *gptr<u32>(r5 + 0xcu) = 0;  // (from the original)
    *gptr<u32>(r5 + 0x10u) = 0;  // (from the original)
    *gptr<u32>(r5 + 0x14u) = *gptr<u32>(r13 + 0x28u);  // (from the original)
    u32 r0_4 = *gptr<u32>(r13 + 0x20u);  // (from the original)
    r4 = r5 - 8u;
    if (r0_4 != 0) {
        guest::cpu()->r[13] = r13;
        u32 r0_5 = call_002fa9d0(r0_4, r1, r2, r3);
        u32 r5_1 = r0_5 + 1u;
        guest::cpu()->r[13] = r13;
        u32 r0_6 = call_003075cc(r5_1, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
        u32 r1_2 = *gptr<u32>(r13 + 0x20u);  // (from the original)
        guest::cpu()->r[13] = r13;
        u32 r0_7 = call_002f8720(r0_6, r1_2, r5_1);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        *gptr<u32>(r4 + 0x18u) = r0_7;  // (from the original)
    }
    *gptr<u32>(r13) = 6;
    u32 r0_8 = r13 + 8u;
    guest::cpu()->r[13] = r13;
    call_002fae74(r0_8, r13 + 0x14u, r2, r3);  // (from the original)
    *gptr<u32>(r13 + 0xcu) = r0_8;  // (from the original)
    u32 r1_4 = *gptr<u32>(r13);
    guest::cpu()->r[13] = r13;
    u32 r0_9 = call_00307838(4u, r1_4, 0x103a07u, 0x3076c9u);  // (from the original)
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r5 = *gptr<u32>(r4 + 4u);
    r7 = r0_9;
    if (r5 >= 6u) {
        r5 = *gptr<u32>(r13);
    }
    r6 = *gptr<u32>(r4);
    *gptr<u32>(r13 + 4u) = r7;
    *gptr<u32>(r13 + 0x10u) = r5 << 2;  // (from the original)
    for (;;) {
        if (!(*gptr<u32>(r4) + *gptr<u32>(r13 + 0x10u) != r6)) {  // (from the original)
            break;
        }
        u32 r0_10 = *gptr<u32>(r13 + 4u);
        guest::cpu()->r[13] = r13;
        call_0030784c(r0_10, r6, r2, r3);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r6 += 4u;
        *gptr<u32>(r13 + 4u) = *gptr<u32>(r13 + 4u) + 4u;
        guest::preempt();
    }
    for (;;) {
        if (!(r5 < *gptr<u32>(r13))) {
            break;
        }
        u32 r1_5 = *gptr<u32>(r13 + 0xcu);  // (from the original)
        u32 r0_11 = (r5 << 2) + r7;
        r5 += 1u;
        guest::cpu()->r[13] = r13;
        call_0030784c(r0_11, r1_5, r2, r3);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        guest::preempt();
    }
    u32 r0_12 = *gptr<u32>(r4);
    guest::cpu()->r[13] = r13;
    call_00307888(r0_12, 0x3076c9u, r2, r3);  // (from the original)
    u32 r0_13 = *gptr<u32>(r13);
    *gptr<u32>(r4) = r7;
    *gptr<u32>(r4 + 4u) = r0_13;
    guest::cpu()->r[13] = r13;
    call_003076c8(r13 + 8u, guest::cpu()->r[1], r2);
    r13 += 0x2cu;  // (from the original)
    u32 r4_1 = *gptr<u32>(r13);
    u32 r5_2 = *gptr<u32>(r13 + 4);
    u32 r6_1 = *gptr<u32>(r13 + 8);
    u32 r7_1 = *gptr<u32>(r13 + 0xc);  // (from the original)
    u32 tpc_1 = *gptr<u32>(r13 + 0x10);  // (from the original)
    r13 += 0x14;  // (from the original)
    guest::cpu()->r[4] = r4_1;
    guest::cpu()->r[5] = r5_2;
    guest::cpu()->r[6] = r6_1;
    guest::cpu()->r[7] = r7_1;
    guest::cpu()->r[13] = r13;
    return r4;
}

}  // namespace d_0031bdb8
GUEST_EXPORT(0x0031bdb9, d_0031bdb8::f_0031bdb8);

// f_0031bea0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0031bea0 {

struct __attribute__((packed)) Object_0031bea0_0 {
    u8 unknown_0[0x18];  // (not used here)
    u32 word_18;
};
GUEST_OFFSET(Object_0031bea0_0, word_18, 0x18);

inline constexpr guest::Function<0x0011c1fd, u32(u32)> call_0011c1fc;
inline constexpr guest::Function<0x002f88b8, u32(u32, u32, u32, u32)> call_002f88b8;
inline constexpr guest::Function<0x0030774d, u32(u32)> call_0030774c;

u32 f_0031bea0(gptr<Object_0031bea0_0> arg0) {
    call_002f88b8(arg0->word_18, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    call_0011c1fc(arg0.addr() + 8u);
    call_0030774c(arg0.addr());
    return arg0.addr();
}

}  // namespace d_0031bea0
GUEST_EXPORT_FRAMED(0x0031bea1, d_0031bea0::f_0031bea0, 0x4010);  // pushes {r4, lr} first, as the original

// f_0031c020: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0031c020 {

inline constexpr u32 vtable_ComButton2Lyt = 0x008ee228u;
inline constexpr u32 vtable_Control2Button = 0x008ef284u;
inline constexpr u32 vtable_Control2Button_at_e4 = 0x008ef2c8u;
inline constexpr u32 vtable_SantaBagWindow = 0x008ef6f4u;
inline constexpr u32 vtable_ComButtonLytBase = 0x008f18f4u;
inline constexpr u32 vtable_BsMenuSantaBagSelect = 0x008f45d0u;
inline constexpr u32 vtable_BsMenuSantaBagSelect_at_28 = 0x008f463cu;
inline constexpr u32 vtable_ItemSelectNameWindow = 0x008f47a0u;
inline constexpr u32 vtable_ComTitle = 0x008f8b4cu;
inline constexpr guest::Function<0x002f76ad, u32(u32, u32, u32, u32)> call_002f76ac;
inline constexpr guest::Function<0x002f770c, u32(u32)> call_002f770c;
inline constexpr guest::Function<0x00567ef0, u32(u32, u32)> call_00567ef0;
inline constexpr guest::Function<0x0056988c, u32(u32, u32)> call_0056988c;
inline constexpr guest::Function<0x005bf744, u32(u32)> call_005bf744;
inline constexpr guest::Function<0x005d703c, u32(u32)> call_005d703c;
inline constexpr guest::Function<0x005e3194, u32(u32, u32)> call_005e3194;
inline constexpr guest::Function<0x006aaa30, u32(u32, u32)> call_006aaa30;

u32 f_0031c020(gptr<BsMenuSantaBagSelect> arg0) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    arg0->word_28 = vtable_BsMenuSantaBagSelect_at_28;
    arg0->word_0 = vtable_BsMenuSantaBagSelect;
    u32 r4_1 = arg0.addr() + 0x39e0u;  // (from the original)
    arg0->word_3648 = vtable_ComButton2Lyt;
    arg0->word_39e0 = vtable_Control2Button;
    arg0->word_3ac4 = vtable_Control2Button_at_e4;
    call_002f76ac(arg0.addr() + 0x3af8u, 0x2e0b3cu, 0x518u, 2u);  // (from the original)
    call_002f770c(r4_1);
    arg0->word_3648 = vtable_ComButtonLytBase;
    u32 r0_3 = call_00567ef0(r4_1 - 0x248u, 0x8f18f4u);  // (from the original)
    u32 r0_5 = call_005bf744(r0_3 - 0x14cu);  // (from the original)
    u32 r0_6 = r0_5 - 0x2cacu;  // (from the original)
    *gptr<u32>(r0_6) = vtable_SantaBagWindow;
    u32 r0_7 = r0_6 + 0x2788u;  // (from the original)
    *gptr<u32>(r0_7) = vtable_ItemSelectNameWindow;
    u32 r0_8 = r0_7 + 0x41cu;  // (from the original)
    call_005e3194(r0_8, 0x8f47a0u);  // (from the original)
    u32 r0_9 = r0_8 - 0x28u;  // (from the original)
    call_0056988c(r0_9, guest::cpu()->r[1]);
    u32 r0_10 = r0_9 - 0x28u;  // (from the original)
    call_0056988c(r0_10, guest::cpu()->r[1]);
    u32 r0_12 = call_005bf744(r0_10 - 0x15cu);  // (from the original)
    u32 r0_14 = call_00567ef0(r0_12 - 0x24cu, guest::cpu()->r[1]);  // (from the original)
    call_002f76ac(r0_14 - 0x212cu, 0x20710cu, 0x348u, 0xau);  // (from the original)
    u32 r0_16 = r0_14 - 0x2154u;  // (from the original)
    call_0056988c(r0_16, guest::cpu()->r[1]);
    u32 r0_18 = call_00567ef0(r0_16 - 0x24cu, guest::cpu()->r[1]);  // (from the original)
    u32 r0_19 = r0_18 - 0x2cu;  // (from the original)
    call_0056988c(r0_19, guest::cpu()->r[1]);
    u32 r0_20 = r0_19 - 0x28u;  // (from the original)
    call_0056988c(r0_20, guest::cpu()->r[1]);
    u32 r0_22 = call_00567ef0(r0_20 - 0x248u, guest::cpu()->r[1]);  // (from the original)
    u32 r0_24 = call_005bf744(r0_22 - 0x14cu);  // (from the original)
    *gptr<u32>(r0_24 - 0x974u) = vtable_ComTitle;  // (from the original)
    u32 r0_25 = r0_24 - 0x64u;  // (from the original)
    call_0056988c(r0_25, 0x8f8b4cu);  // (from the original)
    u32 r0_26 = r0_25 - 0x28u;  // (from the original)
    call_0056988c(r0_26, guest::cpu()->r[1]);
    u32 r0_27 = r0_26 - 0x28u;  // (from the original)
    call_0056988c(r0_27, guest::cpu()->r[1]);
    u32 r0_28 = r0_27 - 0x28u;  // (from the original)
    call_0056988c(r0_28, guest::cpu()->r[1]);
    u32 r0_30 = call_00567ef0(r0_28 - 0x248u, guest::cpu()->r[1]);  // (from the original)
    u32 r0_32 = call_005bf744(r0_30 - 0x14cu);  // (from the original)
    u32 r0_33 = r0_32 - 0xd0u;  // (from the original)
    call_005e3194(r0_33, guest::cpu()->r[1]);
    u32 r0_34 = r0_33 - 0xc4u;  // (from the original)
    call_005e3194(r0_34, guest::cpu()->r[1]);
    u32 r0_35 = r0_34 - 0xc4u;  // (from the original)
    call_005e3194(r0_35, guest::cpu()->r[1]);
    u32 r0_36 = r0_35 - 0xc4u;  // (from the original)
    call_005e3194(r0_36, guest::cpu()->r[1]);
    u32 r0_37 = r0_36 - 0xc4u;  // (from the original)
    call_005e3194(r0_37, guest::cpu()->r[1]);
    u32 r0_38 = r0_37 - 0x100u;  // (from the original)
    call_005d703c(r0_38);
    frame.release();
    return call_006aaa30(r0_38 - 0x74u, guest::cpu()->r[1]);  // (from the original)
}

}  // namespace d_0031c020
GUEST_EXPORT(0x0031c020, d_0031c020::f_0031c020);

// f_0031c1c8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0031c1c8 {

struct __attribute__((packed)) Object_0031c1c8_0 {
    u32 word_0;
};
GUEST_OFFSET(Object_0031c1c8_0, word_0, 0x0);

struct __attribute__((packed)) Object_0031c1c8_1 {
    u32 word_0;
};
GUEST_OFFSET(Object_0031c1c8_1, word_0, 0x0);

inline constexpr guest::Function<0x0031b5b9, u32(u32, u32, u32, u32)> call_0031b5b8;

void f_0031c1c8(gptr<Object_0031c1c8_0> arg0, gptr<Object_0031c1c8_1> arg1) {
    arg0->word_0 = arg1->word_0;
    call_0031b5b8(arg0.addr() + 4u, arg1.addr() + 4, guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_0031c1c8
GUEST_EXPORT_FRAMED(0x0031c1c9, d_0031c1c8::f_0031c1c8, 0x4010);  // pushes {r4, lr} first, as the original

// f_0031c1da: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0031c1da {

struct __attribute__((packed)) Object_0031c1da_0 {
    u32 word_0;
};
GUEST_OFFSET(Object_0031c1da_0, word_0, 0x0);


u32 f_0031c1da(gptr<Object_0031c1da_0> arg0, u32 r1) {
    u32 r0 = arg0.addr();
    r0 = r1;
    u32 r2 = arg0->word_0 + 4u;
    for (;;) {
        if (!(r2 != 0)) {
            break;
        }
        r1 = *gptr<u8>(r2 + 0xcu);  // (from the original)
        if (r1 > r0) {
            r2 = *gptr<u32>(r2);
        } else {
            r1 = *gptr<u8>(r2 + 0xdu);  // (from the original)
            if (r1 >= r0) {
                u32 r1_1 = *gptr<u32>(r2 + 8u);
                if (r1_1 == 0) {
                    u32 r1_2 = *gptr<u8>(r2 + 0xeu);  // (from the original)
                    guest::cpu()->r[1] = r1_2;
                    return r1_2 + r0 & 0xffu;  // (from the original)
                }
                u32 r0_2 = *gptr<u8>(r1_1 + (r0 - u32(*gptr<u8>(r2 + 0xcu))));  // (from the original)
                guest::cpu()->r[1] = r1_1;
                return r0_2;
            }
            r2 = *gptr<u32>(r2 + 4u);
        }
        guest::preempt();
    }
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_0031c1da
GUEST_EXPORT(0x0031c1db, d_0031c1da::f_0031c1da);

// f_0031c214: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0031c214 {

struct __attribute__((packed)) Object_0031c214_0 {
    u8 unknown_0[0x28];  // (not used here)
    u32 word_28;
    u8 unknown_2c[0x4];  // (not used here)
    u32 word_30;
    u8 unknown_34[0xc];  // (not used here)
    u8 byte_40;
};
GUEST_OFFSET(Object_0031c214_0, word_28, 0x28);
GUEST_OFFSET(Object_0031c214_0, word_30, 0x30);
GUEST_OFFSET(Object_0031c214_0, byte_40, 0x40);

inline constexpr guest::Function<0x001277dc, u32(u32, u32)> call_001277dc;
inline constexpr guest::Function<0x001279b4, u32(u32)> call_001279b4;
inline constexpr guest::Function<0x00134544, u32(u32, u32, u32)> call_00134544;
inline constexpr guest::Function<0x0020714c, u32(u32, u32, u32, u32)> call_0020714c;
inline constexpr guest::Function<0x0054eba8, u32(u32, u32, u32, u32)> call_0054eba8;
inline constexpr guest::Function<0x0054f994, u32(u32, u32)> call_0054f994;
inline constexpr guest::Function<0x00556128, u32(u32, u32)> call_00556128;

struct __attribute__((packed)) Frame_0031c214 {
    u32 word_0;
    u32 word_4;
    u8 unknown_8[0x4];  // (not read or written by name)
};
GUEST_OFFSET(Frame_0031c214, word_0, 0x0);
GUEST_OFFSET(Frame_0031c214, word_4, 0x4);
GUEST_SIZE(Frame_0031c214, 0xc);

u32 f_0031c214(gptr<Object_0031c214_0> arg0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_0031c214> frame;  // the original's stack frame
    u32 r0_1 = arg0->word_28;
    if (s32(r0_1) <= 0) {
        return r0_1;
    }
    u32 r0_2 = call_0020714c(r0_1, r1, r2, r3);
    u32 r0_3 = *gptr<u32>(r0_2 + 4u);
    u32 r1_1 = arg0->byte_40;
    u32 r0_4 = call_0054f994(r0_3, r1_1);
    u32 r1_2 = guest::cpu()->r[1];
    if (r0_4 == 0) {
        u32 r0_5 = call_0020714c(r0_4, r1_2, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1_2 = *gptr<u32>(r0_5 + 4u);
        r0_4 = *gptr<u32>(r1_2 + (u32(arg0->byte_40) << 2) + 0x42cu);  // (from the original)
        if (r0_4 == 0) {
            guest::cpu()->r[1] = r1_2;
            return r0_4;
        }
    }
    u32 r0_6 = call_0020714c(r0_4, r1_2, guest::cpu()->r[2], guest::cpu()->r[3]);
    if (r0_6 != 0) {
        u32 r0_7 = call_0020714c(r0_6, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
        u32 r0_8 = *gptr<s8>(r0_7 + 0x21u);  // (from the original)
        if (r0_8 != 0) {
            return r0_8;
        }
    }
    u32 r0_9 = call_001277dc(0x208u, frame.at(4).addr());  // (from the original)
    u32 r5_1 = frame->word_4;
    u32 r0_10 = call_0020714c(r0_9, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r0_11 = *gptr<u32>(r0_10 + 4u);
    frame->word_0 = arg0.addr() + 0x44u;  // (from the original)
    u32 r0_12 = call_0054eba8(r0_11, frame->word_4, arg0.addr() + 0x74u, arg0.addr() + 0x44u);  // (from the original)
    frame->word_4 = r0_12;
    u32 r1_8 = arg0->word_30;
    u32 r2_6 = arg0->word_28 << 2;
    call_00134544(r0_12, r1_8, r2_6);
    u32 r0_13 = frame->word_4 + (arg0->word_28 << 2);
    frame->word_4 = r0_13;
    u32 r0_14 = call_0020714c(r0_13, r1_8, r2_6, guest::cpu()->r[3]);
    u32 r0_16 = call_00556128(*gptr<u32>(r0_14 + 4u), frame->word_4);
    frame->word_4 = r0_16;
    u32 r0_18 = call_001279b4(r0_16 - r5_1 & ~3u);
    return r0_18;
}

}  // namespace d_0031c214
GUEST_EXPORT_FRAMED(0x0031c214, d_0031c214::f_0031c214, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_0031c310: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0031c310 {

struct __attribute__((packed)) Object_0031c310_0 {
    u32 word_0;
};
GUEST_OFFSET(Object_0031c310_0, word_0, 0x0);

struct __attribute__((packed)) Object_0031c310_1 {
    u32 word_0;
};
GUEST_OFFSET(Object_0031c310_1, word_0, 0x0);


u32 f_0031c310(gptr<Object_0031c310_0> arg0, gptr<Object_0031c310_1> arg1) {
    return arg0->word_0 >= arg1->word_0 ? arg0.addr() : arg1.addr();
}

}  // namespace d_0031c310
GUEST_EXPORT(0x0031c311, d_0031c310::f_0031c310);

// f_0031c31c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0031c31c {

struct __attribute__((packed)) Local_0031c31c_r0_3 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_0031c31c_r0_3, word_0, 0x0);
GUEST_OFFSET(Local_0031c31c_r0_3, word_4, 0x4);
GUEST_OFFSET(Local_0031c31c_r0_3, word_8, 0x8);

inline constexpr guest::Function<0x0010bf99, u32(u32, u32, u32, u32)> call_0010bf98;
inline constexpr guest::Function<0x00307569, u32(u32, u32, u32, u32)> call_00307568;

u32 f_0031c31c(u32 r0_unused, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0x4);  // the original's stack frame
    *frame.at<u32>(0) = r3;
    u32 r4_1 = r1;
    u32 r7_1 = r2;
    u32 r0_1 = ~0xeu;  // (from the original)
    if (r1 > r0_1) {
        *frame.at<u32>(0) = r0_1;
        call_00307568(8u, 0x31c394u, 0x31c394u, r1);  // (from the original)
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
    }
    if (r7_1 > r4_1) {
        *frame.at<u32>(0) = r4_1;
        call_00307568(8u, 0x31c394u, 0x31c394u, r7_1);  // (from the original)
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
    }
    if (r4_1 != 0) {
        gptr<Local_0031c31c_r0_3> r0_3 = gptr<Local_0031c31c_r0_3>(call_0010bf98(r4_1 + 0xeu, 0u, r2, r3));  // (from the original)
        if (r0_3.addr() != 0) {
            r0_3->word_0 = 0;
            r0_3->word_4 = 0;
            r0_3->word_8 = 0;
        }
        r0_3->word_8 = r7_1;
        u32 r1_1 = r0_3.addr() + 0xcu + r7_1;  // (from the original)
        r0_3->word_0 = 0;
        r0_3->word_4 = r4_1;
        *frame.at<u8>(0) = 0;
        if (r1_1 != 0) {
            *gptr<u8>(r1_1) = 0;
        }
        guest::cpu()->r[1] = r1_1;
        return r0_3.addr();
    }
    guest::cpu()->r[1] = r1;
    return 0xaf7f30u;  // (from the original)
}

}  // namespace d_0031c31c
GUEST_EXPORT_FRAMED(0x0031c31d, d_0031c31c::f_0031c31c, 0x40f0);  // pushes {r4, r5, r6, r7, lr} first, as the original

// f_0031c39c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0031c39c {

inline constexpr guest::Function<0x002f8574, u32(u32, u32, u32, u32)> call_002f8574;

void f_0031c39c(u32 r0) {
    call_002f8574(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_0031c39c
GUEST_EXPORT_FRAMED(0x0031c39d, d_0031c39c::f_0031c39c, 0x4010);  // pushes {r4, lr} first, as the original

// f_0031c3a8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0031c3a8 {

struct __attribute__((packed)) Object_0031c3a8_0 {
    u32 word_0;
};
GUEST_OFFSET(Object_0031c3a8_0, word_0, 0x0);

struct __attribute__((packed)) Local_0031c3a8_r2_2 {
    u32 word_0;
};
GUEST_OFFSET(Local_0031c3a8_r2_2, word_0, 0x0);

inline constexpr guest::Function<0x0010c12d, u32(u32, u32, u32, u32)> call_0010c12c;

struct __attribute__((packed)) Frame_0031c3a8 {
    u32 word_0;
};
GUEST_OFFSET(Frame_0031c3a8, word_0, 0x0);
GUEST_SIZE(Frame_0031c3a8, 0x4);

void f_0031c3a8(gptr<Object_0031c3a8_0> arg0, u32 r1, u32 r2_unused, u32 r3) {
    guest::StackFrameOf<Frame_0031c3a8> frame;  // the original's stack frame
    frame->word_0 = r3;
    u32 r2_1 = arg0->word_0;
    if (r2_1 == 0xaf7f3cu) {  // (from the original)
        return;
    }
    gptr<Local_0031c3a8_r2_2> r2_2 = gptr<Local_0031c3a8_r2_2>(r2_1 - 0xcu);  // (from the original)
    u32 r0_1 = r2_2->word_0;
    if (r0_1 + 1u != 0) {
        if (r2_2.addr() == 0xaf7f30u) {  // (from the original)
            guest::cpu()->r[1] = 0xaf7f30u;  // (from the original)
            return;
        }
        r2_2->word_0 = r0_1 - 1u;
        if (r0_1 != 0) {
            guest::cpu()->r[1] = 0xaf7f30u;  // (from the original)
            return;
        }
    }
    call_0010c12c(arg0->word_0 - 0xcu, *gptr<u32>(arg0->word_0 - 8u) + 0xeu, 0u, r3);  // (from the original)
}

}  // namespace d_0031c3a8
GUEST_EXPORT_FRAMED(0x0031c3a9, d_0031c3a8::f_0031c3a8, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_0031c75c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0031c75c {

struct __attribute__((packed)) Object_0031c75c_0 {
    u32 word_0;
};
GUEST_OFFSET(Object_0031c75c_0, word_0, 0x0);


void f_0031c75c(gptr<Object_0031c75c_0> arg0) {
    if (arg0.addr() == 0xaf7f30u) {  // (from the original)
        guest::cpu()->r[1] = 0xaf7f30u;  // (from the original)
        return;
    }
    u32 r1_1 = arg0->word_0 + 1u;
    arg0->word_0 = r1_1;
    guest::cpu()->r[1] = r1_1;
}

}  // namespace d_0031c75c
GUEST_EXPORT(0x0031c75d, d_0031c75c::f_0031c75c);

// f_0031c770: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0031c770 {

struct __attribute__((packed)) Local_0031c770_ea_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_0031c770_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_0031c770_ea_1, word_4, 0x4);
GUEST_OFFSET(Local_0031c770_ea_1, word_8, 0x8);

inline constexpr guest::Function<0x0011c499, u32(u32, u32, u32, u32)> call_0011c498;

struct __attribute__((packed)) Frame_0031c770 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Frame_0031c770, word_0, 0x0);
GUEST_OFFSET(Frame_0031c770, word_4, 0x4);
GUEST_OFFSET(Frame_0031c770, word_8, 0x8);
GUEST_SIZE(Frame_0031c770, 0xc);

void f_0031c770(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_0031c770> frame;  // the original's stack frame
    gptr<Local_0031c770_ea_1> ea_1 = gptr<Local_0031c770_ea_1>(frame.at(0).addr());
    ea_1->word_0 = r1;
    ea_1->word_4 = r2;
    ea_1->word_8 = r3;
    u32 r4_1 = *frame.at<u32>(0x18);  // (from the original)
    frame->word_4 = 0;
    frame->word_0 = r4_1;
    frame->word_8 = r4_1;
    call_0011c498(r0, r1, r2, r3);
    guest::cpu()->r[1] = frame->word_0;
}

}  // namespace d_0031c770
GUEST_EXPORT_FRAMED(0x0031c771, d_0031c770::f_0031c770, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_0031c7dc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0031c7dc {

struct __attribute__((packed)) Object_0031c7dc_0 {
    u8 unknown_0[0xc];  // (not used here)
    float float_c;
    float float_10;
    float float_14;
    float float_18;
    u32 word_1c;
    u8 unknown_20[0xa0];  // (not used here)
    float float_c0;
    float float_c4;
    float float_c8;
};
GUEST_OFFSET(Object_0031c7dc_0, float_c, 0xc);
GUEST_OFFSET(Object_0031c7dc_0, float_10, 0x10);
GUEST_OFFSET(Object_0031c7dc_0, float_14, 0x14);
GUEST_OFFSET(Object_0031c7dc_0, float_18, 0x18);
GUEST_OFFSET(Object_0031c7dc_0, word_1c, 0x1c);
GUEST_OFFSET(Object_0031c7dc_0, float_c0, 0xc0);
GUEST_OFFSET(Object_0031c7dc_0, float_c4, 0xc4);
GUEST_OFFSET(Object_0031c7dc_0, float_c8, 0xc8);

struct __attribute__((packed)) Object_0031c7dc_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
    float float_18;
    float float_1c;
    float float_20;
    float float_24;
    float float_28;
    float float_2c;
    float float_30;
};
GUEST_OFFSET(Object_0031c7dc_1, word_0, 0x0);
GUEST_OFFSET(Object_0031c7dc_1, word_4, 0x4);
GUEST_OFFSET(Object_0031c7dc_1, word_8, 0x8);
GUEST_OFFSET(Object_0031c7dc_1, word_c, 0xc);
GUEST_OFFSET(Object_0031c7dc_1, word_10, 0x10);
GUEST_OFFSET(Object_0031c7dc_1, word_14, 0x14);
GUEST_OFFSET(Object_0031c7dc_1, float_18, 0x18);
GUEST_OFFSET(Object_0031c7dc_1, float_1c, 0x1c);
GUEST_OFFSET(Object_0031c7dc_1, float_20, 0x20);
GUEST_OFFSET(Object_0031c7dc_1, float_24, 0x24);
GUEST_OFFSET(Object_0031c7dc_1, float_28, 0x28);
GUEST_OFFSET(Object_0031c7dc_1, float_2c, 0x2c);
GUEST_OFFSET(Object_0031c7dc_1, float_30, 0x30);

inline constexpr guest::Function<0x005695e4, u32(u32, u32, u32, u32)> call_005695e4;

void f_0031c7dc(gptr<Object_0031c7dc_0> arg0, gptr<Object_0031c7dc_1> arg1) {
    guest::StackFrame frame(0x10);  // the original's stack frame
    float S0_1 = arg1->float_18;
    float S1_1 = arg1->float_1c;
    float S2_1 = arg1->float_20;
    float S3_1 = arg1->float_24;
    float S4_1 = arg1->float_28;
    float S5_1 = arg1->float_2c;
    float S6_1 = arg1->float_30;
    arg0->float_c = S0_1;
    arg0->float_10 = S1_1;
    arg0->float_14 = S2_1;
    arg0->float_18 = S3_1;
    arg0->float_c0 = S6_1;
    arg0->float_c4 = S4_1;
    arg0->float_c8 = S5_1;
    arg0->word_1c = arg1->word_4;
    u32 r1_1 = arg1->word_8;
    if (r1_1 != 0) {
        u32 r2_1 = arg1->word_0;
        guest::cpu()->s[0] = S0_1;
        guest::cpu()->s[1] = S1_1;
        guest::cpu()->s[2] = S2_1;
        guest::cpu()->s[3] = S3_1;
        guest::cpu()->s[4] = S4_1;
        guest::cpu()->s[5] = S5_1;
        guest::cpu()->s[6] = S6_1;
        call_005695e4(arg0.addr() + 0x20u, r1_1, r2_1, guest::cpu()->r[3]);  // (from the original)
        S0_1 = guest::cpu()->s[0];
        S1_1 = guest::cpu()->s[1];
        S2_1 = guest::cpu()->s[2];
        S3_1 = guest::cpu()->s[3];
        S4_1 = guest::cpu()->s[4];
        S5_1 = guest::cpu()->s[5];
        S6_1 = guest::cpu()->s[6];
    }
    u32 r1_2 = arg1->word_c;
    if (r1_2 != 0) {
        u32 r2_2 = arg1->word_0;
        guest::cpu()->s[0] = S0_1;
        guest::cpu()->s[1] = S1_1;
        guest::cpu()->s[2] = S2_1;
        guest::cpu()->s[3] = S3_1;
        guest::cpu()->s[4] = S4_1;
        guest::cpu()->s[5] = S5_1;
        guest::cpu()->s[6] = S6_1;
        call_005695e4(arg0.addr() + 0x48u, r1_2, r2_2, guest::cpu()->r[3]);  // (from the original)
        S0_1 = guest::cpu()->s[0];
        S1_1 = guest::cpu()->s[1];
        S2_1 = guest::cpu()->s[2];
        S3_1 = guest::cpu()->s[3];
        S4_1 = guest::cpu()->s[4];
        S5_1 = guest::cpu()->s[5];
        S6_1 = guest::cpu()->s[6];
    }
    u32 r1_3 = arg1->word_10;
    if (r1_3 != 0) {
        u32 r2_3 = arg1->word_0;
        guest::cpu()->s[0] = S0_1;
        guest::cpu()->s[1] = S1_1;
        guest::cpu()->s[2] = S2_1;
        guest::cpu()->s[3] = S3_1;
        guest::cpu()->s[4] = S4_1;
        guest::cpu()->s[5] = S5_1;
        guest::cpu()->s[6] = S6_1;
        call_005695e4(arg0.addr() + 0x70u, r1_3, r2_3, guest::cpu()->r[3]);  // (from the original)
        S0_1 = guest::cpu()->s[0];
        S1_1 = guest::cpu()->s[1];
        S2_1 = guest::cpu()->s[2];
        S3_1 = guest::cpu()->s[3];
        S4_1 = guest::cpu()->s[4];
        S5_1 = guest::cpu()->s[5];
        S6_1 = guest::cpu()->s[6];
    }
    u32 r1_4 = arg1->word_14;
    if (r1_4 != 0) {
        u32 r2_4 = arg1->word_0;
        guest::cpu()->s[0] = S0_1;
        guest::cpu()->s[1] = S1_1;
        guest::cpu()->s[2] = S2_1;
        guest::cpu()->s[3] = S3_1;
        guest::cpu()->s[4] = S4_1;
        guest::cpu()->s[5] = S5_1;
        guest::cpu()->s[6] = S6_1;
        frame.release();
        call_005695e4(arg0.addr() + 0x98u, r1_4, r2_4, guest::cpu()->r[3]);
        return;  // (from the original)
    }
    guest::cpu()->s[0] = S0_1;
    guest::cpu()->s[1] = S1_1;
}

}  // namespace d_0031c7dc
GUEST_EXPORT(0x0031c7dc, d_0031c7dc::f_0031c7dc);

// f_0031c878: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0031c878 {

inline constexpr u32 vtable_ButtonActionCstmNode = 0x008f46c4u;
inline constexpr guest::Function<0x002b6de0, u32(u32)> call_002b6de0;

u32 f_0031c878(gptr<ButtonActionCstmNode> arg0) {
    call_002b6de0(arg0.addr());
    arg0->word_0 = vtable_ButtonActionCstmNode;
    guest::cpu()->r[1] = 0x8f46c4u;  // (from the original)
    return arg0.addr();
}

}  // namespace d_0031c878
GUEST_EXPORT_FRAMED(0x0031c878, d_0031c878::f_0031c878, 0x4010);  // pushes {r4, lr} first, as the original

// f_0031c92c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0031c92c {

inline constexpr u32 vtable_ButtonActionNode_rec = 0x008f183cu;
inline constexpr u32 vtable_ButtonActionCstmNode = 0x008f46c4u;
inline constexpr guest::Function<0x005694c8, u32(u32, u32, u32, u32)> call_005694c8;
inline constexpr guest::Function<0x00569774, u32(u32, u32)> call_00569774;
inline constexpr guest::Function<0x0056988c, u32(u32)> call_0056988c;

u32 f_0031c92c(gptr<ButtonActionNode_rec> arg0, u32 r1) {
    arg0->word_0 = vtable_ButtonActionCstmNode;
    call_005694c8(arg0.addr() + 0x20u, r1, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    call_005694c8(arg0.addr() + 0x48u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    call_005694c8(arg0.addr() + 0x70u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    call_005694c8(arg0.addr() + 0x98u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    arg0->word_0 = vtable_ButtonActionNode_rec;
    call_00569774(arg0.addr() + 0x20u, 0u);  // (from the original)
    call_00569774(arg0.addr() + 0x48u, 0u);  // (from the original)
    call_00569774(arg0.addr() + 0x70u, 0u);  // (from the original)
    call_00569774(arg0.addr() + 0x98u, 0u);  // (from the original)
    call_0056988c(arg0.addr() + 0x98u);  // (from the original)
    call_0056988c(arg0.addr() + 0x70u);  // (from the original)
    call_0056988c(arg0.addr() + 0x48u);  // (from the original)
    call_0056988c(arg0.addr() + 0x20u);  // (from the original)
    return arg0.addr();
}

}  // namespace d_0031c92c
GUEST_EXPORT_FRAMED(0x0031c92c, d_0031c92c::f_0031c92c, 0x4010);  // pushes {r4, lr} first, as the original

// f_0031cd1c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0031cd1c {

struct __attribute__((packed)) Local_0031cd1c_r0_1 {
    u32 word_0;
    u8 unknown_4[0xa3c];  // (not used here)
    u32 word_a40;
};
GUEST_OFFSET(Local_0031cd1c_r0_1, word_0, 0x0);
GUEST_OFFSET(Local_0031cd1c_r0_1, word_a40, 0xa40);

struct __attribute__((packed)) Local_0031cd1c_r0_5 {
    u32 word_0;
    u8 unknown_4[0x20];  // (not used here)
    u32 word_24;
    u8 unknown_28[0xa18];  // (not used here)
    u32 word_a40;
    u8 unknown_a44[0x20];  // (not used here)
    u32 word_a64;
    u32 word_a68;
    u32 word_a6c;
};
GUEST_OFFSET(Local_0031cd1c_r0_5, word_0, 0x0);
GUEST_OFFSET(Local_0031cd1c_r0_5, word_24, 0x24);
GUEST_OFFSET(Local_0031cd1c_r0_5, word_a40, 0xa40);
GUEST_OFFSET(Local_0031cd1c_r0_5, word_a64, 0xa64);
GUEST_OFFSET(Local_0031cd1c_r0_5, word_a68, 0xa68);
GUEST_OFFSET(Local_0031cd1c_r0_5, word_a6c, 0xa6c);

inline constexpr u32 vtable_ChangeStockWarehouse = 0x008f470cu;
inline constexpr u32 vtable_ChangeStockWarehouse_at_a40 = 0x008f4758u;
inline constexpr u32 vtable_Cabinet = 0x008f7fd4u;
inline constexpr u32 vtable_Cabinet_at_a40 = 0x008f8020u;
inline constexpr guest::Function<0x002682ac, u32(u32, u32, u32, u32)> call_002682ac;
inline constexpr guest::Function<0x002cdcb0, u32(u32)> call_002cdcb0;
inline constexpr guest::Function<0x00301d0d, u32(u32, u32, u32, u32)> call_00301d0c;

u32 f_0031cd1c(u32 r0, u32 r1, u32 r2, u32 r3) {
    gptr<Local_0031cd1c_r0_1> r0_1 = gptr<Local_0031cd1c_r0_1>(call_002682ac(r0, r1, r2, r3));
    r0_1->word_0 = vtable_Cabinet;
    r0_1->word_a40 = vtable_Cabinet_at_a40;
    u32 r0_3 = call_00301d0c(r0_1.addr() + 0x1888u, 0x2b9440u, 0x36cu, 0xau);  // (from the original)
    u32 r0_4 = r0_3 + 0x2238u;  // (from the original)
    call_002cdcb0(r0_4);
    gptr<Local_0031cd1c_r0_5> r0_5 = gptr<Local_0031cd1c_r0_5>(r0_4 - 0x3ac0u);  // (from the original)
    *gptr<u8>(r0_5.addr() + 0x3ca0u) = 0;  // (from the original)
    *gptr<u32>(r0_5.addr() + 0x3ca4u) = 0;  // (from the original)
    r0_5->word_a64 = 0x31cdc0;  // (from the original)
    r0_5->word_a6c = 0x31cdd0;  // (from the original)
    r0_5->word_a68 = 0x9533d4;  // (from the original)
    r0_5->word_24 = 0x31cdb0;  // (from the original)
    r0_5->word_a40 = vtable_ChangeStockWarehouse_at_a40;
    r0_5->word_0 = vtable_ChangeStockWarehouse;
    guest::cpu()->r[1] = 0x31cdd0u;  // (from the original)
    return r0_5.addr();
}

}  // namespace d_0031cd1c
GUEST_EXPORT_FRAMED(0x0031cd1c, d_0031cd1c::f_0031cd1c, 0x4010);  // pushes {r4, lr} first, as the original

// f_0031d00c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0031d00c {

inline constexpr guest::Function<0x002f67ac, u32(u32)> call_002f67ac;
inline constexpr guest::Function<0x002f6e14, u32(u32, u32, u32, u32)> call_002f6e14;
inline constexpr guest::Function<0x002f71e4, u32(u32, u32, u32, u32)> call_002f71e4;
inline constexpr guest::Function<0x007237e0, u32(u32)> call_007237e0;

void f_0031d00c(u32 r0) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    u32 r0_1 = r0 + 0x608u;  // (from the original)
    call_002f71e4(r0_1, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r0_2 = call_007237e0(r0_1);
    if (r0_2 == 0) {
        return;
    }
    call_002f67ac(r0_1);
    frame.release();
    call_002f6e14(r0_1, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    return;
}

}  // namespace d_0031d00c
GUEST_EXPORT(0x0031d00c, d_0031d00c::f_0031d00c);

// f_0031d048: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0031d048 {

struct __attribute__((packed)) Object_0031d048_0 {
    u8 unknown_0[0x6fe];  // (not used here)
    u8 byte_6fe;
};
GUEST_OFFSET(Object_0031d048_0, byte_6fe, 0x6fe);

struct __attribute__((packed)) Local_0031d048_ea_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_0031d048_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_0031d048_ea_1, word_4, 0x4);

struct __attribute__((packed)) Local_0031d048_ea_14 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_0031d048_ea_14, word_0, 0x0);
GUEST_OFFSET(Local_0031d048_ea_14, word_4, 0x4);

struct __attribute__((packed)) Local_0031d048_ea_15 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_0031d048_ea_15, word_0, 0x0);
GUEST_OFFSET(Local_0031d048_ea_15, word_4, 0x4);

struct __attribute__((packed)) Local_0031d048_ea_18 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_0031d048_ea_18, word_0, 0x0);
GUEST_OFFSET(Local_0031d048_ea_18, word_4, 0x4);

struct __attribute__((packed)) Local_0031d048_ea_2 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_0031d048_ea_2, word_0, 0x0);
GUEST_OFFSET(Local_0031d048_ea_2, word_4, 0x4);

struct __attribute__((packed)) Local_0031d048_r0_1 {
    float float_0;
    float float_4;
    float float_8;
    float float_c;
    float float_10;
    float float_14;
    float float_18;
};
GUEST_OFFSET(Local_0031d048_r0_1, float_0, 0x0);
GUEST_OFFSET(Local_0031d048_r0_1, float_4, 0x4);
GUEST_OFFSET(Local_0031d048_r0_1, float_8, 0x8);
GUEST_OFFSET(Local_0031d048_r0_1, float_c, 0xc);
GUEST_OFFSET(Local_0031d048_r0_1, float_10, 0x10);
GUEST_OFFSET(Local_0031d048_r0_1, float_14, 0x14);
GUEST_OFFSET(Local_0031d048_r0_1, float_18, 0x18);

struct __attribute__((packed)) Local_0031d048_r6_1 {
    u8 unknown_0[0x522];  // (not used here)
    u8 byte_522;
    u8 byte_523;
};
GUEST_OFFSET(Local_0031d048_r6_1, byte_522, 0x522);
GUEST_OFFSET(Local_0031d048_r6_1, byte_523, 0x523);

inline guest::global<u32, 0x00857cc0> global_00857cc0;
inline guest::global<u32, 0x00857cc4> global_00857cc4;
inline guest::global<u32, 0x00857cc8> global_00857cc8;
inline guest::global<u32, 0x00857ccc> global_00857ccc;
inline guest::global<u32, 0x00857cdc> global_00857cdc;
inline guest::global<u32, 0x00857ce0> global_00857ce0;
inline guest::global<u32, 0x00857ce4> global_00857ce4;
inline guest::global<u32, 0x00857ce8> global_00857ce8;
inline guest::global<u32, 0x00857cec> global_00857cec;
inline guest::global<u32, 0x00857cf0> global_00857cf0;
inline guest::global<u32, 0x00857d08> global_00857d08;
inline guest::global<u32, 0x00857d14> global_00857d14;
inline constexpr guest::Function<0x002b6a00, u32(u32, u32)> call_002b6a00;
inline constexpr guest::Function<0x002f6a30, u32(u32, u32)> call_002f6a30;
inline constexpr guest::Function<0x002f6e98, u32(u32, u32, u32, u32)> call_002f6e98;
inline constexpr guest::Function<0x002f7508, u32(u32, u32, u32)> call_002f7508;
inline constexpr guest::Function<0x004b4fc0, u32(u32, u32, u32)> call_004b4fc0;
inline constexpr guest::Function<0x0056878c, u32(u32, u32, u32, u32)> call_0056878c;

struct __attribute__((packed)) Frame_0031d048 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
    u32 word_18;
    u32 word_1c;
    u8 unknown_20[0x10];  // (not read or written by name)
    float float_30;
    float float_34;
    float float_38;
    u32 word_3c;
    float float_40;
    float float_44;
    u32 word_48;
    u32 word_4c;
    u32 word_50;
    u32 word_54;
    u8 unknown_58[0x14];  // (not read or written by name)
};
GUEST_OFFSET(Frame_0031d048, word_0, 0x0);
GUEST_OFFSET(Frame_0031d048, word_4, 0x4);
GUEST_OFFSET(Frame_0031d048, word_8, 0x8);
GUEST_OFFSET(Frame_0031d048, word_c, 0xc);
GUEST_OFFSET(Frame_0031d048, word_10, 0x10);
GUEST_OFFSET(Frame_0031d048, word_14, 0x14);
GUEST_OFFSET(Frame_0031d048, word_18, 0x18);
GUEST_OFFSET(Frame_0031d048, word_1c, 0x1c);
GUEST_OFFSET(Frame_0031d048, float_30, 0x30);
GUEST_OFFSET(Frame_0031d048, float_34, 0x34);
GUEST_OFFSET(Frame_0031d048, float_38, 0x38);
GUEST_OFFSET(Frame_0031d048, word_3c, 0x3c);
GUEST_OFFSET(Frame_0031d048, float_40, 0x40);
GUEST_OFFSET(Frame_0031d048, float_44, 0x44);
GUEST_OFFSET(Frame_0031d048, word_48, 0x48);
GUEST_OFFSET(Frame_0031d048, word_4c, 0x4c);
GUEST_OFFSET(Frame_0031d048, word_50, 0x50);
GUEST_OFFSET(Frame_0031d048, word_54, 0x54);
GUEST_SIZE(Frame_0031d048, 0x6c);

void f_0031d048(gptr<Object_0031d048_0> arg0, float S0_unused, float S1_unused, float S2_unused, float S3_unused, float S4_unused, float S5, float S6) {
    guest::StackFrameOf<Frame_0031d048> frame;  // the original's stack frame
    u32 r0 = arg0.addr();
    float S0_1 = 0;
    float S1_1 = 0;
    float S2_1 = 0;
    float S3_1 = 0;
    float S4_1 = 0;
    u32 r5 = r0;
    u32 r2_1 = r5 + 4u;
    frame->word_4c = r0 + 0x600u;  // (from the original)
    u32 r3_1 = r5 + 0x24cu;  // (from the original)
    if (arg0->byte_6fe == 1u) {
        S0_1 = 0.0f;
        S1_1 = std::bit_cast<float>(*global_00857cdc);
        S2_1 = std::bit_cast<float>(*global_00857ce0);
        S3_1 = std::bit_cast<float>(*global_00857ce4);
        S4_1 = std::bit_cast<float>(*global_00857ce8);
        S5 = std::bit_cast<float>(*global_00857cec);
        S6 = std::bit_cast<float>(*global_00857cf0);
        gptr<Local_0031d048_r0_1> r0_1 = gptr<Local_0031d048_r0_1>(frame.at(0x30).addr());  // (from the original)
        gptr<Local_0031d048_ea_1> ea_1 = gptr<Local_0031d048_ea_1>(frame.at(0x28).addr());  // (from the original)
        ea_1->word_0 = r2_1;
        ea_1->word_4 = r3_1;
        r0_1->float_0 = S0_1;
        r0_1->float_4 = S1_1;
        r0_1->float_8 = S2_1;
        r0_1->float_c = S3_1;
        r0_1->float_10 = S4_1;
        r0_1->float_14 = S5;
        r0_1->float_18 = S6;
    } else {
        u32 r1_1 = *global_00857d08;
        u32 r0_2 = *global_00857d14;
        S2_1 = 0.0f;
        S0_1 = 1.3335018e-38f;
        S3_1 = 1.3335248e-38f;
        S4_1 = 1.3335167e-38f;
        S1_1 = 4e-45f;
        gptr<Local_0031d048_ea_2> ea_2 = gptr<Local_0031d048_ea_2>(frame.at(0x28).addr());  // (from the original)
        ea_2->word_0 = r2_1;
        ea_2->word_4 = r3_1;
        frame->float_30 = S2_1;
        frame->float_34 = S0_1;
        frame->float_38 = S3_1;
        frame->word_3c = r1_1;
        frame->float_40 = S4_1;
        frame->float_44 = S1_1;
        frame->word_48 = r0_2;
    }
    u32 r0_3 = r5 + 0x608u;  // (from the original)
    frame->word_1c = r0_3;
    guest::cpu()->s[0] = S0_1;
    guest::cpu()->s[1] = S1_1;
    guest::cpu()->s[2] = S2_1;
    guest::cpu()->s[3] = S3_1;
    guest::cpu()->s[4] = S4_1;
    guest::cpu()->s[5] = S5;
    guest::cpu()->s[6] = S6;
    call_002f6e98(r0_3, frame.at(0x28).addr(), 0u, r3_1);  // (from the original)
    u32 r2 = guest::cpu()->r[2];
    u32 r3 = guest::cpu()->r[3];
    float S1 = guest::cpu()->s[1];
    float S2 = guest::cpu()->s[2];
    float S3 = guest::cpu()->s[3];
    float S4 = guest::cpu()->s[4];
    S5 = guest::cpu()->s[5];
    S6 = guest::cpu()->s[6];
    u32 r8 = 0u;
    float S0 = 0.0f;
    *gptr<u32>(r5 + 0x6dcu) = *gptr<u32>(r5 + 0x6dcu) | 0x40u;  // (from the original)
    frame->word_0 = r8;
    frame->word_4 = r8;
    frame->word_8 = r8;
    frame->word_c = r8;
    frame->word_10 = r8;
    frame->word_14 = r8;
    frame->word_18 = r8;
    frame->word_8 = std::bit_cast<u32>(S0);
    frame->word_c = std::bit_cast<u32>(S0);
    frame->word_50 = r8;
    frame->word_54 = r8;
    u32 r0_5 = *global_00857cc0;
    u32 r1_3 = *global_00857cc4;
    u32 r9 = frame.at(0x50).addr();  // (from the original)
    u32 r10 = frame.at(0x58).addr();  // (from the original)
    gptr<Local_0031d048_ea_14> ea_14 = gptr<Local_0031d048_ea_14>(frame.at(0x58).addr());  // (from the original)
    ea_14->word_0 = r0_5;
    ea_14->word_4 = r1_3;
    u32 r0_6 = *global_00857cc8;
    u32 r1_4 = *global_00857ccc;
    u32 r4 = r8;
    u32 r11 = frame.at(0x60).addr();  // (from the original)
    gptr<Local_0031d048_ea_15> ea_15 = gptr<Local_0031d048_ea_15>(frame.at(0x60).addr());  // (from the original)
    ea_15->word_0 = r0_6;
    ea_15->word_4 = r1_4;
    do {
        u32 r1_5 = *gptr<u32>(r10 + (r4 << 2));
        guest::cpu()->s[0] = S0;
        guest::cpu()->s[1] = S1;
        guest::cpu()->s[2] = S2;
        guest::cpu()->s[3] = S3;
        guest::cpu()->s[4] = S4;
        guest::cpu()->s[5] = S5;
        guest::cpu()->s[6] = S6;
        u32 r0_8 = call_0056878c(r5 + 0x24cu, r1_5, r2, r3);  // (from the original)
        frame->word_0 = r0_8;
        u32 r0_10 = call_004b4fc0(r5 + 0x24cu, *gptr<u32>(r11 + (r4 << 2)), 1u);  // (from the original)
        frame->word_4 = r0_10;
        u32 r0_11 = *gptr<u32>(r9 + (r4 << 2));
        gptr<Local_0031d048_ea_18> ea_18 = gptr<Local_0031d048_ea_18>(frame.at(0x10).addr());  // (from the original)
        ea_18->word_0 = r0_11;
        ea_18->word_4 = r4;
        gptr<Local_0031d048_r6_1> r6_1 = gptr<Local_0031d048_r6_1>(r5 + r4 * 0xe0u);  // (from the original)
        u32 r7_1 = r6_1.addr() + 0x448u;  // (from the original)
        call_002b6a00(r7_1, frame.at(0).addr());
        r6_1->byte_522 = u8(r8);
        r6_1->byte_523 = u8(r8);
        call_002f7508(frame->word_1c, r7_1, 1u);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        S0 = guest::cpu()->s[0];
        S1 = guest::cpu()->s[1];
        S2 = guest::cpu()->s[2];
        S3 = guest::cpu()->s[3];
        S4 = guest::cpu()->s[4];
        S5 = guest::cpu()->s[5];
        S6 = guest::cpu()->s[6];
        r4 += 1u;
        guest::preempt();
    } while (s32(r4) < 2);
    u32 r0_13 = frame->word_1c;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    call_002f6a30(r0_13, 0u);
    *gptr<u32>(r5 + 0x6dcu) = *gptr<u32>(r5 + 0x6dcu) & ~8u;  // (from the original)
    *gptr<u16>(frame->word_4c + 0xd8u) = 0x23;  // (from the original)
}

}  // namespace d_0031d048
GUEST_EXPORT_FRAMED(0x0031d048, d_0031d048::f_0031d048, 0x4ff0);  // pushes {r4, r5, r6, r7, r8, r9, r10, r11, lr} first, as the original

// f_0031d5d4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0031d5d4 {

inline constexpr u32 vtable_CommonScrollBarWidth = 0x008f476cu;
inline constexpr guest::Function<0x00299b30, u32(u32, u32, u32, u32)> call_00299b30;

u32 f_0031d5d4(u32 r0, u32 r1) {
    u32 r0_1 = call_00299b30(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    *gptr<u32>(r0_1) = vtable_CommonScrollBarWidth;
    return r0_1;
}

}  // namespace d_0031d5d4
GUEST_EXPORT_FRAMED(0x0031d5d4, d_0031d5d4::f_0031d5d4, 0x4010);  // pushes {r4, lr} first, as the original

// f_0031d6e8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0031d6e8 {

struct __attribute__((packed)) Object_0031d6e8_0 {
    u8 byte_0;
};
GUEST_OFFSET(Object_0031d6e8_0, byte_0, 0x0);

struct __attribute__((packed)) Local_0031d6e8_r0_3 {
    u32 word_0;
};
GUEST_OFFSET(Local_0031d6e8_r0_3, word_0, 0x0);

inline guest::global<u8, 0x009506b0> global_009506b0;
inline guest::global<u32, 0x009506b4> global_009506b4;
inline constexpr guest::Function<0x002fe8a8, u32(u32, u32, u32, u32)> call_002fe8a8;
inline constexpr guest::Function<0x006dcdac, u32(u32, u32, u32)> call_006dcdac;

u32 f_0031d6e8(gptr<Object_0031d6e8_0> arg0, u32 r1, u32 r2) {
    guest::StackFrame frame(0x10);  // the original's stack frame
    u32 r0_1 = call_002fe8a8(0u, r1, r2, guest::cpu()->r[3]);
    u32 r1_1 = guest::cpu()->r[1];
    u32 r2_1 = guest::cpu()->r[2];
    if (r0_1 != 0) {
        u32 r1_2 = arg0->byte_0;
        r2_1 = r0_1 + 0x8a3cu;  // (from the original)
        u32 r0_2 = r1_2 & 7u;
        if (r0_2 >= 4u) {
            r0_2 = 0u;
        }
        r1_1 = (r1_2 & 0x38u) >> 3;  // (from the original)
        *gptr<u8>(r0_2 + r2_1 + 0xdu) = u8(r1_1);  // (from the original)
    }
    gptr<Local_0031d6e8_r0_3> r0_3 = gptr<Local_0031d6e8_r0_3>(u32(*global_009506b0));
    if (r0_3.addr() == 0xffu) {  // (from the original)
        r0_3 = gptr<Local_0031d6e8_r0_3>(*global_009506b4);
        if (r0_3.addr() != 0) {
            r0_3 = gptr<Local_0031d6e8_r0_3>(call_006dcdac(r0_3.addr(), r1_1, r2_1));
            r1_1 = guest::cpu()->r[1];
            if (r0_3.addr() != 0) {
                r1_1 = u32(arg0->byte_0) & 7u;
                if (r1_1 != 0) {
                    if (r1_1 == 1u) {
                        u32 r1_3 = *gptr<u8>(u32(*gptr<u8>(r0_1 + 0x8a4au)) + 0x88f033u);  // (from the original)
                        u32 r2_3 = *gptr<u32>(r0_3->word_0 + 0xa8u);  // (from the original)
                        // virtual function 42 of r0_3.addr()
                        frame.release();
                        return guest::call_address<u32>(r2_3, r0_3.addr(), r1_3, r2_3, guest::cpu()->r[3]);
                    }
                    if (r1_1 == 2u) {
                        u32 r1_4 = *gptr<u8>(u32(*gptr<u8>(r0_1 + 0x8a4bu)) + 0x88f038u);  // (from the original)
                        u32 r2_4 = *gptr<u32>(r0_3->word_0 + 0xacu);  // (from the original)
                        // virtual function 43 of r0_3.addr()
                        frame.release();
                        return guest::call_address<u32>(r2_4, r0_3.addr(), r1_4, r2_4, guest::cpu()->r[3]);
                    }
                    if (r1_1 != 3u) {
                        guest::cpu()->r[1] = r1_1;
                        return r0_3.addr();
                    }
                    u32 r1_5 = *gptr<u32>(r0_3->word_0 + 0xb0u);  // (from the original)
                    // virtual function 44 of r0_3.addr()
                    frame.release();
                    return guest::call_address<u32>(r1_5, r0_3.addr(), r1_5, 0x88f033u, guest::cpu()->r[3]);  // (from the original)
                }
                u32 r1_6 = *gptr<u32>(r0_3->word_0 + 0xa4u);  // (from the original)
                // virtual function 41 of r0_3.addr()
                frame.release();
                return guest::call_address<u32>(r1_6, r0_3.addr(), r1_6, guest::cpu()->r[2], guest::cpu()->r[3]);
            }
        }
    }
    guest::cpu()->r[1] = r1_1;
    return r0_3.addr();
}

}  // namespace d_0031d6e8
GUEST_EXPORT(0x0031d6e8, d_0031d6e8::f_0031d6e8);

// f_0031d8f8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0031d8f8 {

struct __attribute__((packed)) Object_0031d8f8_0 {
    u8 unknown_0[0x1c];  // (not used here)
    u32 word_1c;
    u8 unknown_20[0xa];  // (not used here)
    u8 byte_2a;
};
GUEST_OFFSET(Object_0031d8f8_0, word_1c, 0x1c);
GUEST_OFFSET(Object_0031d8f8_0, byte_2a, 0x2a);

inline constexpr guest::Function<0x0031df9c, u32(u32, u32, u32, u32)> call_0031df9c;
inline constexpr guest::Function<0x004f0de0, u32(u32, u32, u32, u32)> call_004f0de0;

u32 f_0031d8f8(gptr<Object_0031d8f8_0> arg0, u32 r1, u32 r2) {
    u32 r0_1 = arg0->word_1c;
    if (r0_1 == 0) {
        return r0_1;
    }
    if (r1 != 0) {
        u32 zf_1 = r2 == 0;
        if (zf_1) {
            r1 = arg0->byte_2a;
            zf_1 = r1 == 0;
        }
        if (zf_1) {
            guest::cpu()->r[1] = r1;
            return r0_1;
        }
        call_004f0de0(r0_1, r1, r2, guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
    }
    u32 r0_2 = arg0->byte_2a;
    if (r0_2 == 0) {
        guest::cpu()->r[1] = r1;
        return r0_2;
    }
    call_0031df9c(arg0.addr(), arg0.addr() + 0x60u, 1u, guest::cpu()->r[3]);  // (from the original)
    arg0->byte_2a = 0;
    return 0u;
}

}  // namespace d_0031d8f8
GUEST_EXPORT_FRAMED(0x0031d8f8, d_0031d8f8::f_0031d8f8, 0x4010);  // pushes {r4, lr} first, as the original

// f_0031df9c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0031df9c {

struct __attribute__((packed)) Object_0031df9c_0 {
    u8 unknown_0[0x1c];  // (not used here)
    u32 word_1c;
};
GUEST_OFFSET(Object_0031df9c_0, word_1c, 0x1c);

struct __attribute__((packed)) Object_0031df9c_1 {
    u32 word_0;
    u16 half_4;
    u8 unknown_6[0x2];  // (not used here)
    u32 word_8;
    u8 unknown_c[0x20];  // (not used here)
    u32 word_2c;
    u8 byte_30;
    u8 byte_31;
};
GUEST_OFFSET(Object_0031df9c_1, word_0, 0x0);
GUEST_OFFSET(Object_0031df9c_1, half_4, 0x4);
GUEST_OFFSET(Object_0031df9c_1, word_8, 0x8);
GUEST_OFFSET(Object_0031df9c_1, word_2c, 0x2c);
GUEST_OFFSET(Object_0031df9c_1, byte_30, 0x30);
GUEST_OFFSET(Object_0031df9c_1, byte_31, 0x31);

inline constexpr guest::Function<0x004d57d4, u32(u32, u32, u32, u32)> call_004d57d4;
inline constexpr guest::Function<0x004f1104, u32(u32, u32, u32, u32)> call_004f1104;

void f_0031df9c(gptr<Object_0031df9c_0> arg0, gptr<Object_0031df9c_1> arg1, u32 r2) {
    u32 r0_1 = arg0->word_1c;
    if (r0_1 != 0) {
        call_004f1104(r0_1, r2, r2, guest::cpu()->r[3]);
    }
    u32 r1_1 = 0x276u;  // (from the original)
    u32 r0_2 = arg1->word_8;
    arg1->half_4 = u16(r1_1);
    arg1->word_2c = 0;
    arg1->byte_31 = 0;
    if (!(r0_2 == 0)) {
        call_004d57d4(arg1->word_0 + 4u, arg1.addr() + 8u, r2, guest::cpu()->r[3]);
        r1_1 = guest::cpu()->r[1];
        arg1->word_8 = 0;
    }
    arg1->byte_30 = 0;
    guest::cpu()->r[1] = r1_1;
}

}  // namespace d_0031df9c
GUEST_EXPORT_FRAMED(0x0031df9c, d_0031df9c::f_0031df9c, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_0031e0d8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0031e0d8 {

struct __attribute__((packed)) Object_0031e0d8_0 {
    u8 unknown_0[0x1c];  // (not used here)
    u32 word_1c;
    u32 word_20;
    u8 unknown_24[0x8];  // (not used here)
    u32 word_2c;
    u8 unknown_30[0x30];  // (not used here)
    u32 word_60;
};
GUEST_OFFSET(Object_0031e0d8_0, word_1c, 0x1c);
GUEST_OFFSET(Object_0031e0d8_0, word_20, 0x20);
GUEST_OFFSET(Object_0031e0d8_0, word_2c, 0x2c);
GUEST_OFFSET(Object_0031e0d8_0, word_60, 0x60);

inline constexpr guest::Function<0x0031df9c, u32(u32, u32, u32, u32)> call_0031df9c;
inline constexpr guest::Function<0x004ecb2c, u32(u32)> call_004ecb2c;

void f_0031e0d8(gptr<Object_0031e0d8_0> arg0) {
    call_0031df9c(arg0.addr(), arg0.addr() + 0x2cu, 0u, guest::cpu()->r[3]);  // (from the original)
    call_004ecb2c(arg0.addr() + 0x38u);  // (from the original)
    call_0031df9c(arg0.addr(), arg0.addr() + 0x60u, 1u, guest::cpu()->r[3]);  // (from the original)
    call_004ecb2c(arg0.addr() + 0x6cu);  // (from the original)
    arg0->word_1c = 0;
    arg0->word_20 = 0;
    arg0->word_2c = 0;
    arg0->word_60 = 0;
}

}  // namespace d_0031e0d8
GUEST_EXPORT_FRAMED(0x0031e0d8, d_0031e0d8::f_0031e0d8, 0x4010);  // pushes {r4, lr} first, as the original

// f_0031e124: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0031e124 {

inline constexpr u32 vtable_HumanFaceAnimControl = 0x008f4790u;
inline constexpr guest::Function<0x004ecb80, u32(u32)> call_004ecb80;

u32 f_0031e124(gptr<HumanFaceAnimControl> arg0) {
    arg0->word_4 = 0;
    arg0->word_8 = 0;
    arg0->word_c = 0;
    arg0->half_10 = 0xfa;  // (from the original)
    arg0->half_12 = 0xfb;  // (from the original)
    arg0->half_14 = 0;
    arg0->byte_16 = 0;
    arg0->byte_17 = 0;
    arg0->byte_18 = 0;
    arg0->word_1c = 0;
    arg0->word_0 = vtable_HumanFaceAnimControl;
    arg0->word_20 = 0;
    arg0->byte_24 = 1;
    arg0->half_26 = 0xf7;  // (from the original)
    arg0->half_28 = 0xfa;  // (from the original)
    arg0->byte_2a = 0;
    u32 ea_1 = arg0.addr() + 0x34u;  // (from the original)
    arg0->word_34 = 0;
    call_004ecb80(ea_1 + 4u);
    arg0->word_68 = 0;
    call_004ecb80(ea_1 + 0x38u);  // (from the original)
    arg0->word_2c = 0;
    arg0->half_30 = 0x276;  // (from the original)
    arg0->word_34 = 0;
    arg0->word_58 = 0;
    arg0->byte_5c = 0;
    arg0->byte_5d = 0;
    arg0->word_60 = 0;
    arg0->half_64 = 0x276;  // (from the original)
    arg0->word_68 = 0;
    arg0->word_8c = 0;
    arg0->byte_90 = 0;
    arg0->byte_91 = 0;
    guest::cpu()->r[1] = 0x276u;  // (from the original)
    return ea_1 - 0x34u;  // (from the original)
}

}  // namespace d_0031e124
GUEST_EXPORT_FRAMED(0x0031e124, d_0031e124::f_0031e124, 0x4010);  // pushes {r4, lr} first, as the original

// f_0031e204: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0031e204 {

inline constexpr u32 vtable_HumanFaceAnimControl = 0x008f4790u;
inline constexpr guest::Function<0x004ecbe0, u32(u32, u32, u32, u32)> call_004ecbe0;

u32 f_0031e204(gptr<HumanFaceAnimControl> arg0) {
    arg0->word_0 = vtable_HumanFaceAnimControl;
    u32 r0_1 = arg0.addr() + 0x6cu;  // (from the original)
    call_004ecbe0(r0_1, 0x8f4790u, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    call_004ecbe0(r0_1 - 0x34u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    return r0_1 - 0x6cu;  // (from the original)
}

}  // namespace d_0031e204
GUEST_EXPORT_FRAMED(0x0031e204, d_0031e204::f_0031e204, 0x4010);  // pushes {r4, lr} first, as the original

// f_0031e42c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0031e42c {

struct __attribute__((packed)) Object_0031e42c_0 {
    u8 unknown_0[0x3c4];  // (not used here)
    u32 word_3c4;
    u8 unknown_3c8[0x124];  // (not used here)
    u8 byte_4ec;
};
GUEST_OFFSET(Object_0031e42c_0, word_3c4, 0x3c4);
GUEST_OFFSET(Object_0031e42c_0, byte_4ec, 0x4ec);

struct __attribute__((packed)) Local_0031e42c_r4_1 {
    u8 unknown_0[0xe0];  // (not used here)
    float float_e0;
    float float_e4;
    float float_e8;
};
GUEST_OFFSET(Local_0031e42c_r4_1, float_e0, 0xe0);
GUEST_OFFSET(Local_0031e42c_r4_1, float_e4, 0xe4);
GUEST_OFFSET(Local_0031e42c_r4_1, float_e8, 0xe8);

inline constexpr u32 vtable_script__WordFix_33u_ = 0x00909f18u;
inline guest::global<u32, 0x00879424> global_00879424;
inline guest::global<u32, 0x00879428> global_00879428;
inline constexpr guest::Function<0x002fe7f4, u32(u32, u32, u32)> call_002fe7f4;
inline constexpr guest::Function<0x005e2e50, u32(u32, u32)> call_005e2e50;
inline constexpr guest::Function<0x005e2f94, u32(u32)> call_005e2f94;
inline constexpr guest::Function<0x005fdf68, u32(u32, u32, u32)> call_005fdf68;
inline constexpr guest::Function<0x00768174, u32(u32, u32, u32, u32)> call_00768174;
inline constexpr guest::Function<0x00819f50, u32(u32, u32, u32)> call_00819f50;

struct __attribute__((packed)) Frame_0031e42c {
    u32 word_0;
    u8 unknown_4[0x58];  // (not read or written by name)
};
GUEST_OFFSET(Frame_0031e42c, word_0, 0x0);
GUEST_SIZE(Frame_0031e42c, 0x5c);

u32 f_0031e42c(gptr<Object_0031e42c_0> arg0, u32 r1, u32 r2, float S0) {
    guest::StackFrameOf<Frame_0031e42c> frame;  // the original's stack frame
    gptr<Local_0031e42c_r4_1> r4_1 = gptr<Local_0031e42c_r4_1>(arg0.addr() + 0x400u);  // (from the original)
    u32 r0_1 = arg0->byte_4ec;
    if (r0_1 == 0) {
        arg0->word_3c4 = r2;
        u32 r0_2 = call_00768174(r1, r1, r2, guest::cpu()->r[3]);
        if (r0_2 != 0) {
            call_005fdf68(frame.at(0).addr(), 0x31e4f8u, 6u);  // (from the original)
            call_005e2e50(arg0.addr() + 0x41cu, frame.at(0).addr());  // (from the original)
        } else {
            call_002fe7f4(frame.at(0).addr(), r1, 0u);
            call_005e2e50(arg0.addr() + 0x41cu, frame.at(0).addr());  // (from the original)
            frame->word_0 = vtable_script__WordFix_33u_;
        }
        call_005e2f94(arg0.addr() + 0x41cu);  // (from the original)
        float S0_5 = 0.0f;
        r4_1->float_e0 = S0_5;
        r4_1->float_e4 = S0_5;
        r4_1->float_e8 = S0_5;
        u32 r1_3 = *global_00879424;
        u32 r2_3 = *global_00879428;
        guest::cpu()->s[0] = S0_5;
        r0_1 = call_00819f50(arg0.addr(), r1_3, r2_3);
        r1 = guest::cpu()->r[1];
        S0 = guest::cpu()->s[0];
    }
    guest::cpu()->r[1] = r1;
    guest::cpu()->s[0] = S0;
    return r0_1;
}

}  // namespace d_0031e42c
GUEST_EXPORT_FRAMED(0x0031e42c, d_0031e42c::f_0031e42c, 0x40f0);  // pushes {r4, r5, r6, r7, lr} first, as the original

// f_0031e510: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0031e510 {

struct __attribute__((packed)) Object_0031e510_0 {
    u8 unknown_0[0x3c4];  // (not used here)
    u32 word_3c4;
    u8 unknown_3c8[0x118];  // (not used here)
    u32 word_4e0;
    u32 word_4e4;
    u32 word_4e8;
    u8 byte_4ec;
};
GUEST_OFFSET(Object_0031e510_0, word_3c4, 0x3c4);
GUEST_OFFSET(Object_0031e510_0, word_4e0, 0x4e0);
GUEST_OFFSET(Object_0031e510_0, word_4e4, 0x4e4);
GUEST_OFFSET(Object_0031e510_0, word_4e8, 0x4e8);
GUEST_OFFSET(Object_0031e510_0, byte_4ec, 0x4ec);

struct __attribute__((packed)) Object_0031e510_3 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Object_0031e510_3, word_0, 0x0);
GUEST_OFFSET(Object_0031e510_3, word_4, 0x4);
GUEST_OFFSET(Object_0031e510_3, word_8, 0x8);

inline guest::global<u32, 0x00879424> global_00879424;
inline guest::global<u32, 0x00879428> global_00879428;
inline constexpr guest::Function<0x005e2e50, u32(u32, u32, u32, u32)> call_005e2e50;
inline constexpr guest::Function<0x005e2f94, u32(u32)> call_005e2f94;
inline constexpr guest::Function<0x00819f50, u32(u32, u32, u32)> call_00819f50;

u32 f_0031e510(gptr<Object_0031e510_0> arg0, u32 r1, u32 r2, gptr<Object_0031e510_3> arg3) {
    u32 r0_1 = arg0->byte_4ec;
    if (r0_1 == 0) {
        arg0->word_3c4 = r2;
        arg0->word_4e0 = arg3->word_0;
        arg0->word_4e4 = arg3->word_4;
        u32 r2_1 = arg3->word_8;
        arg0->word_4e8 = r2_1;
        call_005e2e50(arg0.addr() + 0x41cu, r1, r2_1, arg3.addr());  // (from the original)
        call_005e2f94(arg0.addr() + 0x41cu);  // (from the original)
        r0_1 = call_00819f50(arg0.addr(), *global_00879424, *global_00879428);
        r1 = guest::cpu()->r[1];
    }
    guest::cpu()->r[1] = r1;
    return r0_1;
}

}  // namespace d_0031e510
GUEST_EXPORT_FRAMED(0x0031e510, d_0031e510::f_0031e510, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_0031e594: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0031e594 {

struct __attribute__((packed)) Object_0031e594_0 {
    u8 unknown_0[0x3c4];  // (not used here)
    u32 word_3c4;
    u8 unknown_3c8[0x118];  // (not used here)
    u32 word_4e0;
    u32 word_4e4;
    u32 word_4e8;
    u8 byte_4ec;
};
GUEST_OFFSET(Object_0031e594_0, word_3c4, 0x3c4);
GUEST_OFFSET(Object_0031e594_0, word_4e0, 0x4e0);
GUEST_OFFSET(Object_0031e594_0, word_4e4, 0x4e4);
GUEST_OFFSET(Object_0031e594_0, word_4e8, 0x4e8);
GUEST_OFFSET(Object_0031e594_0, byte_4ec, 0x4ec);

struct __attribute__((packed)) Object_0031e594_3 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Object_0031e594_3, word_0, 0x0);
GUEST_OFFSET(Object_0031e594_3, word_4, 0x4);
GUEST_OFFSET(Object_0031e594_3, word_8, 0x8);

inline guest::global<u32, 0x00879424> global_00879424;
inline guest::global<u32, 0x00879428> global_00879428;
inline constexpr guest::Function<0x0031e228, u32(u32)> call_0031e228;
inline constexpr guest::Function<0x0031e314, u32(u32)> call_0031e314;
inline constexpr guest::Function<0x00568c10, u32(u32, u32, u32, u32)> call_00568c10;
inline constexpr guest::Function<0x005e2e50, u32(u32, u32, u32, u32)> call_005e2e50;
inline constexpr guest::Function<0x005e2f94, u32(u32)> call_005e2f94;
inline constexpr guest::Function<0x00819f50, u32(u32, u32, u32)> call_00819f50;

u32 f_0031e594(gptr<Object_0031e594_0> arg0, u32 r1, u32 r2, gptr<Object_0031e594_3> arg3) {
    guest::StackFrame frame(0x10);  // the original's stack frame
    arg0->word_3c4 = r2;
    arg0->word_4e0 = arg3->word_0;
    arg0->word_4e4 = arg3->word_4;
    u32 r2_1 = arg3->word_8;
    arg0->word_4e8 = r2_1;
    call_005e2e50(arg0.addr() + 0x41cu, r1, r2_1, arg3.addr());  // (from the original)
    call_005e2f94(arg0.addr() + 0x41cu);  // (from the original)
    if (arg0->byte_4ec != 0) {
        call_0031e228(arg0.addr());
        call_0031e314(arg0.addr());
        frame.release();
        return call_00568c10(arg0.addr() + 0x270u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    }
    u32 r0_3 = call_00819f50(arg0.addr(), *global_00879424, *global_00879428);
    return r0_3;
}

}  // namespace d_0031e594
GUEST_EXPORT(0x0031e594, d_0031e594::f_0031e594);

// f_0031e810: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0031e810 {

struct __attribute__((packed)) Object_0031e810_0 {
    u8 unknown_0[0x4ec];  // (not used here)
    u8 byte_4ec;
};
GUEST_OFFSET(Object_0031e810_0, byte_4ec, 0x4ec);

struct __attribute__((packed)) Local_0031e810_r0_3 {
    u8 unknown_0[0xb7];  // (not used here)
    u8 byte_b7;
};
GUEST_OFFSET(Local_0031e810_r0_3, byte_b7, 0xb7);

inline constexpr guest::Function<0x0056878c, u32(u32, u32, u32, u32)> call_0056878c;
inline constexpr guest::Function<0x00568c10, u32(u32, u32)> call_00568c10;

u32 f_0031e810(gptr<Object_0031e810_0> arg0, u32 r1) {
    u32 r0_1 = arg0->byte_4ec;
    if (r0_1 == 1u) {
        u32 r0_2 = arg0.addr() + 0x270u;  // (from the original)
        gptr<Local_0031e810_r0_3> r0_3 = gptr<Local_0031e810_r0_3>(call_0056878c(r0_2, 0x31e850u, guest::cpu()->r[2], guest::cpu()->r[3]));  // (from the original)
        u32 r1_1 = u32(r0_3->byte_b7) & 0xfeu;  // (from the original)
        r0_3->byte_b7 = u8(r1_1);
        r0_1 = call_00568c10(arg0.addr() + 0x270u, r1_1);  // (from the original)
        r1 = guest::cpu()->r[1];
        arg0->byte_4ec = 0;
    }
    guest::cpu()->r[1] = r1;
    return r0_1;
}

}  // namespace d_0031e810
GUEST_EXPORT_FRAMED(0x0031e810, d_0031e810::f_0031e810, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_0031e8bc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0031e8bc {

inline constexpr guest::Function<0x001323bc, u32(u32)> call_001323bc;
inline constexpr guest::Function<0x00569e6c, u32(u32, u32, u32)> call_00569e6c;

u32 f_0031e8bc(u32 r0) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    u32 r0_1 = call_001323bc(r0);
    frame.release();
    return call_00569e6c(r0_1, r0 + 0x270u, 1u);  // (from the original)
}

}  // namespace d_0031e8bc
GUEST_EXPORT(0x0031e8bc, d_0031e8bc::f_0031e8bc);

// f_0031eb20: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0031eb20 {

struct __attribute__((packed)) Object_0031eb20_0 {
    u8 unknown_0[0x4ed];  // (not used here)
    u8 byte_4ed;
};
GUEST_OFFSET(Object_0031eb20_0, byte_4ed, 0x4ed);

inline constexpr guest::Function<0x00132364, u32(u32, u32, u32, u32)> call_00132364;
inline constexpr guest::Function<0x001323b4, u32(u32, u32, u32, u32)> call_001323b4;
inline constexpr guest::Function<0x005e2e04, u32(u32)> call_005e2e04;

u32 f_0031eb20(gptr<Object_0031eb20_0> arg0) {
    if (arg0->byte_4ed == 1u) {
        call_00132364(arg0.addr() + 0x24u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    }
    call_001323b4(arg0.addr() + 0x270u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    call_005e2e04(arg0.addr() + 0x41cu);  // (from the original)
    return 1u;
}

}  // namespace d_0031eb20
GUEST_EXPORT_FRAMED(0x0031eb20, d_0031eb20::f_0031eb20, 0x4010);  // pushes {r4, lr} first, as the original

// f_0031ec78: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0031ec78 {

struct __attribute__((packed)) Object_0031ec78_0 {
    u8 unknown_0[0x4ed];  // (not used here)
    u8 byte_4ed;
};
GUEST_OFFSET(Object_0031ec78_0, byte_4ed, 0x4ed);

inline constexpr guest::Function<0x00567e24, u32(u32, u32)> call_00567e24;

u32 f_0031ec78(gptr<Object_0031ec78_0> arg0) {
    u32 r0_2 = call_00567e24(arg0.addr() + 0x24u, 0x31ec9cu);  // (from the original)
    u32 r1_1 = guest::cpu()->r[1];
    if (r0_2 != 0) {
        r1_1 = 1u;
        arg0->byte_4ed = u8(r1_1);
    }
    guest::cpu()->r[1] = r1_1;
    return r0_2;
}

}  // namespace d_0031ec78
GUEST_EXPORT_FRAMED(0x0031ec78, d_0031ec78::f_0031ec78, 0x4010);  // pushes {r4, lr} first, as the original

// f_0031ecbc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0031ecbc {

struct __attribute__((packed)) Local_0031ecbc_r0_10 {
    u8 unknown_0[0x4ec];  // (not used here)
    u8 byte_4ec;
    u8 byte_4ed;
};
GUEST_OFFSET(Local_0031ecbc_r0_10, byte_4ec, 0x4ec);
GUEST_OFFSET(Local_0031ecbc_r0_10, byte_4ed, 0x4ed);

inline constexpr u32 vtable_ItemSelectNameWindow = 0x008f47a0u;
inline guest::global<u32, 0x0087943c> global_0087943c;
inline guest::global<u32, 0x00879440> global_00879440;
inline constexpr guest::Function<0x001207d8, u32(u32, u32, u32, u32)> call_001207d8;
inline constexpr guest::Function<0x00125aec, u32(u32)> call_00125aec;
inline constexpr guest::Function<0x00125e3c, u32(u32)> call_00125e3c;
inline constexpr guest::Function<0x005e3128, u32(u32, u32)> call_005e3128;

u32 f_0031ecbc(gptr<ItemSelectNameWindow> arg0) {
    arg0->word_4 = 0;
    arg0->byte_8 = 0;
    u32 r2_1 = *global_00879440;
    arg0->word_c = *global_0087943c;
    arg0->word_10 = r2_1;
    arg0->word_14 = 0;
    arg0->byte_18 = 0;
    arg0->word_1c = 0;
    arg0->word_0 = vtable_ItemSelectNameWindow;
    arg0->word_20 = 0;
    u32 r0_2 = call_001207d8(arg0.addr() + 0x24u, 0x8f47a0u, r2_1, arg0.addr() + 0xcu);  // (from the original)
    u32 ea_1 = r0_2 + 0x248u;  // (from the original)
    *gptr<u32>(ea_1) = 0;
    u32 r0_4 = call_00125e3c(ea_1 + 4u);
    u32 r0_5 = r0_4 - 0x270u;  // (from the original)
    *gptr<u32>(r0_5 + 0x3bcu) = 0;  // (from the original)
    *gptr<u32>(r0_5 + 0x3c0u) = 0;  // (from the original)
    *gptr<u32>(r0_5 + 0x3c4u) = 0;  // (from the original)
    u32 ea_5 = r0_5 + 0x3c8u;  // (from the original)
    *gptr<u32>(ea_5) = 0;
    u32 r0_6 = ea_5 + 4u;
    call_00125aec(r0_6);
    u32 r0_7 = r0_6 + 0x28u;  // (from the original)
    call_00125aec(r0_7);
    u32 r0_9 = call_005e3128(r0_7 + 0x28u, 0x15u);  // (from the original)
    gptr<Local_0031ecbc_r0_10> r0_10 = gptr<Local_0031ecbc_r0_10>(r0_9 - 0x41cu);  // (from the original)
    r0_10->byte_4ec = 0;
    r0_10->byte_4ed = 0;
    return r0_10.addr();
}

}  // namespace d_0031ecbc
GUEST_EXPORT_FRAMED(0x0031ecbc, d_0031ecbc::f_0031ecbc, 0x4010);  // pushes {r4, lr} first, as the original

// f_0031f1a4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0031f1a4 {

inline guest::global<u32, 0x00879538> global_00879538;
inline guest::global<u32, 0x0087953c> global_0087953c;
inline constexpr guest::Function<0x0081a058, u32(u32, u32, u32)> call_0081a058;

void f_0031f1a4(u32 r0) {
    call_0081a058(r0 + 0x213cu, *global_00879538, *global_0087953c);  // (from the original)
}

}  // namespace d_0031f1a4
GUEST_EXPORT_FRAMED(0x0031f1a4, d_0031f1a4::f_0031f1a4, 0x4010);  // pushes {r4, lr} first, as the original

// f_0031f2bc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0031f2bc {

inline guest::global<u32, 0x00879540> global_00879540;
inline guest::global<u32, 0x00879544> global_00879544;
inline constexpr guest::Function<0x0081a058, u32(u32, u32, u32)> call_0081a058;

void f_0031f2bc(u32 r0) {
    call_0081a058(r0 + 0x213cu, *global_00879540, *global_00879544);  // (from the original)
}

}  // namespace d_0031f2bc
GUEST_EXPORT_FRAMED(0x0031f2bc, d_0031f2bc::f_0031f2bc, 0x4010);  // pushes {r4, lr} first, as the original

// f_0031f2dc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0031f2dc {

struct __attribute__((packed)) Local_0031f2dc_ea_2 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_0031f2dc_ea_2, word_0, 0x0);
GUEST_OFFSET(Local_0031f2dc_ea_2, word_4, 0x4);
GUEST_OFFSET(Local_0031f2dc_ea_2, word_8, 0x8);

struct __attribute__((packed)) Local_0031f2dc_r0_2 {
    float float_0;
    float float_4;
};
GUEST_OFFSET(Local_0031f2dc_r0_2, float_0, 0x0);
GUEST_OFFSET(Local_0031f2dc_r0_2, float_4, 0x4);

struct __attribute__((packed)) Local_0031f2dc_r7_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_0031f2dc_r7_1, word_0, 0x0);
GUEST_OFFSET(Local_0031f2dc_r7_1, word_4, 0x4);
GUEST_OFFSET(Local_0031f2dc_r7_1, word_8, 0x8);

inline guest::global<u32, 0x008795b4> global_008795b4;
inline guest::global<u32, 0x008795bc> global_008795bc;
inline guest::global<u32, 0x008795c0> global_008795c0;
inline guest::global<u32, 0x008795c4> global_008795c4;
inline guest::global<u32, 0x008795d0> global_008795d0;
inline guest::global<u32, 0x008795d4> global_008795d4;
inline guest::global<u32, 0x008795d8> global_008795d8;
inline guest::global<u32, 0x008795dc> global_008795dc;
inline guest::global<u32, 0x008795e4> global_008795e4;
inline guest::global<u32, 0x008795e8> global_008795e8;
inline guest::global<u32, 0x008795ec> global_008795ec;
inline guest::global<u32, 0x008795f0> global_008795f0;
inline guest::global<u32, 0x008795f4> global_008795f4;
inline guest::global<u32, 0x008795f8> global_008795f8;
inline constexpr guest::Function<0x0022c390, u32(u32, u32, u32, u32)> call_0022c390;
inline constexpr guest::Function<0x0022c48c, u32(u32, u32, u32)> call_0022c48c;
inline constexpr guest::Function<0x002b6a00, u32(u32, u32)> call_002b6a00;
inline constexpr guest::Function<0x0056878c, u32(u32, u32)> call_0056878c;

struct __attribute__((packed)) Frame_0031f2dc {
    u32 word_0;
    u32 word_4;
    float float_8;
    float float_c;
    float float_10;
    u32 word_14;
    float float_18;
    u8 unknown_1c[0x10];  // (not read or written by name)
};
GUEST_OFFSET(Frame_0031f2dc, word_0, 0x0);
GUEST_OFFSET(Frame_0031f2dc, word_4, 0x4);
GUEST_OFFSET(Frame_0031f2dc, float_8, 0x8);
GUEST_OFFSET(Frame_0031f2dc, float_c, 0xc);
GUEST_OFFSET(Frame_0031f2dc, float_10, 0x10);
GUEST_OFFSET(Frame_0031f2dc, word_14, 0x14);
GUEST_OFFSET(Frame_0031f2dc, float_18, 0x18);
GUEST_SIZE(Frame_0031f2dc, 0x2c);

void f_0031f2dc(gptr<LetterDragItemWindow> arg0, u32 r1, float S0_unused, float S1_unused, float S2, float S3, float S4, float S5, float S6) {
    guest::StackFrameOf<Frame_0031f2dc> frame;  // the original's stack frame
    u32 r0_1 = *global_008795b4;
    u32 r2_1 = *global_008795bc;
    u32 r3_1 = *global_008795c0;
    u32 r12_1 = *global_008795c4;
    float S0_1 = 1.3478015e-38f;
    float S1_1 = std::bit_cast<float>(*global_008795d0);
    gptr<Local_0031f2dc_r7_1> r7_1 = gptr<Local_0031f2dc_r7_1>(frame.at(0x20).addr());  // (from the original)
    frame->word_0 = r0_1;
    gptr<Local_0031f2dc_ea_2> ea_2 = gptr<Local_0031f2dc_ea_2>(frame.at(8).addr());
    ea_2->word_0 = r2_1;
    ea_2->word_4 = r3_1;
    ea_2->word_8 = r12_1;
    gptr<Local_0031f2dc_r0_2> r0_2 = gptr<Local_0031f2dc_r0_2>(frame.at(0x18).addr());  // (from the original)
    r0_2->float_0 = S0_1;
    r0_2->float_4 = S1_1;
    u32 r0_3 = *global_008795d4;
    u32 r2_2 = *global_008795d8;
    u32 r3_2 = *global_008795dc;
    frame->word_14 = r1;
    frame->word_4 = arg0.addr() + 0x258u;  // (from the original)
    r7_1->word_0 = r0_3;
    r7_1->word_4 = r2_2;
    r7_1->word_8 = r3_2;
    u32 r0_4 = arg0.addr() + 0x2308u;  // (from the original)
    guest::cpu()->s[0] = S0_1;
    guest::cpu()->s[1] = S1_1;
    call_0022c390(r0_4, frame.at(0).addr(), r2_2, r3_2);
    arg0->byte_2445 = 0;
    float S0_2 = 0.0f;
    float S1_2 = std::bit_cast<float>(*global_008795e4);
    float S2_1 = std::bit_cast<float>(*global_008795e8);
    float S3_1 = std::bit_cast<float>(*global_008795ec);
    float S4_1 = std::bit_cast<float>(*global_008795f0);
    float S5_1 = std::bit_cast<float>(*global_008795f4);
    float S6_1 = std::bit_cast<float>(*global_008795f8);
    frame->word_0 = std::bit_cast<u32>(S0_2);
    frame->word_4 = std::bit_cast<u32>(S1_2);
    frame->float_8 = S2_1;
    frame->float_c = S3_1;
    frame->float_10 = S4_1;
    frame->word_14 = std::bit_cast<u32>(S5_1);
    frame->float_18 = S6_1;
    guest::cpu()->s[0] = S0_2;
    guest::cpu()->s[1] = S1_2;
    guest::cpu()->s[2] = S2_1;
    guest::cpu()->s[3] = S3_1;
    guest::cpu()->s[4] = S4_1;
    guest::cpu()->s[5] = S5_1;
    guest::cpu()->s[6] = S6_1;
    u32 r0_6 = call_0056878c(arg0.addr() + 0x258u, 0x879638u);  // (from the original)
    frame->word_0 = r0_6;
    float S0_3 = 0.0f;
    frame->float_8 = S0_3;
    u32 r0_7 = arg0.addr() + 0x21d8u;  // (from the original)
    frame->float_c = S0_3;
    guest::cpu()->s[0] = S0_3;
    call_002b6a00(r0_7, frame.at(0).addr());
    call_0022c48c(r0_4, r0_7, 0u);
    arg0->word_22a4 = 0x10003fb;  // (from the original)
    arg0->byte_22b2 = 1;
    arg0->word_22a8 = 0x10003fbu & ~1u;  // (from the original)
    arg0->byte_22b3 = 1;
    arg0->byte_22b4 = 1;
    arg0->byte_2447 = 0;
}

}  // namespace d_0031f2dc
GUEST_EXPORT_FRAMED(0x0031f2dc, d_0031f2dc::f_0031f2dc, 0x40f0);  // pushes {r4, r5, r6, r7, lr} first, as the original

// f_0031f480: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0031f480 {

struct __attribute__((packed)) Local_0031f480_ea_3 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_0031f480_ea_3, word_0, 0x0);
GUEST_OFFSET(Local_0031f480_ea_3, word_4, 0x4);
GUEST_OFFSET(Local_0031f480_ea_3, word_8, 0x8);

struct __attribute__((packed)) Local_0031f480_ea_4 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_0031f480_ea_4, word_0, 0x0);
GUEST_OFFSET(Local_0031f480_ea_4, word_4, 0x4);
GUEST_OFFSET(Local_0031f480_ea_4, word_8, 0x8);

struct __attribute__((packed)) Local_0031f480_r1_1 {
    u8 unknown_0[0x18];  // (not used here)
    u8 byte_18;
    u8 unknown_19[0x3];  // (not used here)
    u32 word_1c;
    u32 word_20;
};
GUEST_OFFSET(Local_0031f480_r1_1, byte_18, 0x18);
GUEST_OFFSET(Local_0031f480_r1_1, word_1c, 0x1c);
GUEST_OFFSET(Local_0031f480_r1_1, word_20, 0x20);

inline constexpr u32 vtable_LetterDragItemWindow = 0x008f47b4u;
inline constexpr u32 vtable_LetterDragItemWindow_at_213c = 0x008f47d8u;
inline guest::global<u32, 0x00879568> global_00879568;
inline guest::global<u32, 0x0087956c> global_0087956c;
inline constexpr guest::Function<0x00125aec, u32(u32)> call_00125aec;
inline constexpr guest::Function<0x0022c53c, u32(u32)> call_0022c53c;
inline constexpr guest::Function<0x002d00bc, u32(u32)> call_002d00bc;
inline constexpr guest::Function<0x00320614, u32(u32, u32, u32, u32)> call_00320614;

u32 f_0031f480(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r0_1 = call_00320614(r0, r1, r2, r3);
    gptr<Local_0031f480_r1_1> r1_1 = gptr<Local_0031f480_r1_1>(r0_1 + 0x213cu);  // (from the original)
    *gptr<u32>(r1_1.addr() + 4u) = 0;
    *gptr<u8>(r1_1.addr() + 8u) = 0;
    u32 r2_1 = *global_00879568;
    u32 r3_1 = *global_0087956c;
    gptr<Local_0031f480_ea_3> ea_3 = gptr<Local_0031f480_ea_3>(r0_1 + 0x2148u);  // (from the original)
    ea_3->word_0 = r2_1;
    ea_3->word_4 = r3_1;
    ea_3->word_8 = 0;
    r1_1->byte_18 = 0;
    r1_1->word_1c = 0;
    r1_1->word_20 = 0;
    *gptr<u32>(r0_1) = vtable_LetterDragItemWindow;
    *gptr<u32>(r0_1 + 0x213cu) = vtable_LetterDragItemWindow_at_213c;  // (from the original)
    u32 r0_2 = r0_1 + 0x2160u;  // (from the original)
    call_00125aec(r0_2);
    u32 r0_3 = r0_2 + 0x28u;  // (from the original)
    call_00125aec(r0_3);
    u32 r0_4 = r0_3 + 0x28u;  // (from the original)
    call_00125aec(r0_4);
    u32 r0_5 = r0_4 + 0x28u;  // (from the original)
    call_002d00bc(r0_5);
    u32 r0_6 = r0_5 + 0x130u;  // (from the original)
    call_0022c53c(r0_6);
    u32 r0_7 = r0_6 - 0x2308u;  // (from the original)
    *gptr<u8>(r0_7 + 0x2448u) = 0;  // (from the original)
    gptr<Local_0031f480_ea_4> ea_4 = gptr<Local_0031f480_ea_4>(r0_7 + 4u);
    ea_4->word_0 = 0x31f530;  // (from the original)
    ea_4->word_4 = 0x31f540;  // (from the original)
    ea_4->word_8 = 0x14;  // (from the original)
    return r0_7;
}

}  // namespace d_0031f480
GUEST_EXPORT_FRAMED(0x0031f480, d_0031f480::f_0031f480, 0x4010);  // pushes {r4, lr} first, as the original

// f_0031f55c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0031f55c {

inline constexpr u32 vtable_DragIconGroup = 0x008ee248u;
inline constexpr u32 vtable_DragIconGroup_at_c = 0x008ee258u;
inline constexpr u32 vtable_DragIconControl_rec = 0x008f08acu;
inline constexpr u32 vtable_LetterDragItemWindow = 0x008f47b4u;
inline constexpr u32 vtable_LetterDragItemWindow_at_213c = 0x008f47d8u;
inline constexpr u32 vtable_LetterDragWindowBase = 0x008f4828u;
inline constexpr guest::Function<0x001ff9d8, u32(u32)> call_001ff9d8;
inline constexpr guest::Function<0x002f76ad, u32(u32, u32, u32, u32)> call_002f76ac;
inline constexpr guest::Function<0x002f7710, u32(u32, u32)> call_002f7710;
inline constexpr guest::Function<0x00567ef0, u32(u32)> call_00567ef0;
inline constexpr guest::Function<0x0056988c, u32(u32, u32, u32, u32)> call_0056988c;
inline constexpr guest::Function<0x005bf744, u32(u32)> call_005bf744;

u32 f_0031f55c(gptr<LetterDragWindowBase> arg0) {
    arg0->word_0 = vtable_LetterDragItemWindow;
    *gptr<u32>(arg0.addr() + 0x213cu) = vtable_LetterDragItemWindow_at_213c;  // (from the original)
    arg0->word_2308 = vtable_DragIconGroup;
    arg0->word_2314 = vtable_DragIconGroup_at_c;
    u32 r0_1 = arg0.addr() + 0x241cu;  // (from the original)
    call_0056988c(r0_1, 0x8f47b4u, 0x8f47d8u, 0x213cu);  // (from the original)
    call_0056988c(r0_1 - 0x28u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    call_0056988c(r0_1 - 0x50u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    call_0056988c(r0_1 - 0x78u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    call_0056988c(r0_1 - 0xa0u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    call_0056988c(r0_1 - 0xc8u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    call_0056988c(r0_1 - 0xf4u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    call_001ff9d8(r0_1 - 0x244u);  // (from the original)
    call_0056988c(r0_1 - 0x26cu, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    call_0056988c(r0_1 - 0x294u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    call_0056988c(r0_1 - 0x2bcu, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    arg0->word_0 = vtable_LetterDragWindowBase;
    arg0->word_201c = vtable_DragIconControl_rec;
    call_002f7710(r0_1 - 0x400u, 0x8f08acu);  // (from the original)
    arg0->word_1ee8 = vtable_DragIconGroup_at_c;
    arg0->word_1edc = vtable_DragIconGroup;
    call_0056988c(r0_1 - 0x42cu, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    call_0056988c(r0_1 - 0x454u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    call_0056988c(r0_1 - 0x47cu, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    call_0056988c(r0_1 - 0x4a4u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    call_0056988c(r0_1 - 0x4ccu, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    call_0056988c(r0_1 - 0x4f4u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    call_0056988c(r0_1 - 0x520u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    call_002f76ac(r0_1 - 0x2048u, 0x2e3854u, 0x2b4u, 0xau);  // (from the original)
    call_0056988c(r0_1 - 0x2074u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r0_23 = call_005bf744(r0_1 - 0x21c4u);  // (from the original)
    u32 r0_25 = call_00567ef0(r0_23 - 0x248u);  // (from the original)
    return r0_25 - 0x10u;  // (from the original)
}

}  // namespace d_0031f55c
GUEST_EXPORT_FRAMED(0x0031f55c, d_0031f55c::f_0031f55c, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_0031f69c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0031f69c {

inline constexpr guest::Function<0x002e333c, u32(u32, u32)> call_002e333c;
inline constexpr guest::Function<0x00723fa0, u32(u32, u32, u32, u32)> call_00723fa0;

void f_0031f69c(u32 r0, u32 r1, u32 r2) {
    u32 r0_1 = call_00723fa0(r0, r1, r2, guest::cpu()->r[3]);
    call_002e333c(r0 + r0_1 * 0x2b4u + 0x3d4u, r2);  // (from the original)
    u32 r0_3 = call_00723fa0(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    *gptr<u8>(r0 + r0_3 * 0x2b4u + 0x4adu) = u8(r2);  // (from the original)
    guest::cpu()->r[1] = 0xadu;  // (from the original)
}

}  // namespace d_0031f69c
GUEST_EXPORT_FRAMED(0x0031f69c, d_0031f69c::f_0031f69c, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_0031f7f0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0031f7f0 {

inline constexpr guest::Function<0x001323bc, u32(u32)> call_001323bc;
inline constexpr guest::Function<0x00568c10, u32(u32, u32, u32, u32)> call_00568c10;
inline constexpr guest::Function<0x00569e6c, u32(u32, u32, u32)> call_00569e6c;

u32 f_0031f7f0(u32 r0, u32 r1, u32 r2) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    u32 r0_2 = call_00568c10(r0 + 0x258u, r1, r2, guest::cpu()->r[3]);  // (from the original)
    u32 r0_3 = call_001323bc(r0_2);
    frame.release();
    return call_00569e6c(r0_3, r0 + 0x258u, 1u);  // (from the original)
}

}  // namespace d_0031f7f0
GUEST_EXPORT(0x0031f7f0, d_0031f7f0::f_0031f7f0);

// f_0031fa14: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0031fa14 {

inline guest::global<u32, 0x00879558> global_00879558;
inline guest::global<u32, 0x0087955c> global_0087955c;
inline constexpr guest::Function<0x0081a168, u32(u32, u32, u32)> call_0081a168;

u32 f_0031fa14(u32 r0) {
    u32 r0_2 = call_0081a168(r0 + 0x213cu, *global_00879558, *global_0087955c);  // (from the original)
    return r0_2;
}

}  // namespace d_0031fa14
GUEST_EXPORT_FRAMED(0x0031fa14, d_0031fa14::f_0031fa14, 0x4010);  // pushes {r4, lr} first, as the original

// f_0031fa34: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0031fa34 {

inline constexpr guest::Function<0x00320450, u32(u32, u32, u32, u32)> call_00320450;

u32 f_0031fa34() {
    return call_00320450(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_0031fa34
GUEST_EXPORT(0x0031fa34, d_0031fa34::f_0031fa34);

// f_0031faf4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0031faf4 {

inline guest::global<u32, 0x00879560> global_00879560;
inline guest::global<u32, 0x00879564> global_00879564;
inline constexpr guest::Function<0x0081a168, u32(u32, u32, u32)> call_0081a168;

u32 f_0031faf4(u32 r0) {
    u32 r0_2 = call_0081a168(r0 + 0x213cu, *global_00879560, *global_00879564);  // (from the original)
    return r0_2;
}

}  // namespace d_0031faf4
GUEST_EXPORT_FRAMED(0x0031faf4, d_0031faf4::f_0031faf4, 0x4010);  // pushes {r4, lr} first, as the original

// f_0031fb14: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0031fb14 {

struct __attribute__((packed)) Local_0031fb14_ea_3 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_0031fb14_ea_3, word_0, 0x0);
GUEST_OFFSET(Local_0031fb14_ea_3, word_4, 0x4);
GUEST_OFFSET(Local_0031fb14_ea_3, word_8, 0x8);

struct __attribute__((packed)) Local_0031fb14_ea_5 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_0031fb14_ea_5, word_0, 0x0);
GUEST_OFFSET(Local_0031fb14_ea_5, word_4, 0x4);

struct __attribute__((packed)) Local_0031fb14_r1_1 {
    u8 unknown_0[0x18];  // (not used here)
    u8 byte_18;
    u8 unknown_19[0x3];  // (not used here)
    u32 word_1c;
    u32 word_20;
};
GUEST_OFFSET(Local_0031fb14_r1_1, byte_18, 0x18);
GUEST_OFFSET(Local_0031fb14_r1_1, word_1c, 0x1c);
GUEST_OFFSET(Local_0031fb14_r1_1, word_20, 0x20);

inline constexpr u32 vtable_LetterDragPostWindow = 0x008f47ecu;
inline constexpr u32 vtable_LetterDragPostWindow_at_213c = 0x008f4814u;
inline guest::global<u32, 0x00879570> global_00879570;
inline guest::global<u32, 0x00879574> global_00879574;
inline constexpr guest::Function<0x00125aec, u32(u32)> call_00125aec;
inline constexpr guest::Function<0x00320614, u32(u32, u32, u32, u32)> call_00320614;

u32 f_0031fb14(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r0_1 = call_00320614(r0, r1, r2, r3);
    gptr<Local_0031fb14_r1_1> r1_1 = gptr<Local_0031fb14_r1_1>(r0_1 + 0x213cu);  // (from the original)
    *gptr<u32>(r1_1.addr() + 4u) = 0;
    *gptr<u8>(r1_1.addr() + 8u) = 0;
    u32 r2_1 = *global_00879570;
    u32 r3_1 = *global_00879574;
    gptr<Local_0031fb14_ea_3> ea_3 = gptr<Local_0031fb14_ea_3>(r0_1 + 0x2148u);  // (from the original)
    ea_3->word_0 = r2_1;
    ea_3->word_4 = r3_1;
    ea_3->word_8 = 0;
    r1_1->byte_18 = 0;
    r1_1->word_1c = 0;
    r1_1->word_20 = 0;
    *gptr<u32>(r0_1) = vtable_LetterDragPostWindow;
    *gptr<u32>(r0_1 + 0x213cu) = vtable_LetterDragPostWindow_at_213c;  // (from the original)
    u32 r0_2 = r0_1 + 0x2160u;  // (from the original)
    call_00125aec(r0_2);
    u32 r0_3 = r0_2 + 0x28u;  // (from the original)
    call_00125aec(r0_3);
    u32 r0_4 = r0_3 + 0x28u;  // (from the original)
    call_00125aec(r0_4);
    u32 r0_5 = r0_4 - 0x21b0u;  // (from the original)
    *gptr<u32>(r0_5 + 4u) = 0x31fbac;  // (from the original)
    gptr<Local_0031fb14_ea_5> ea_5 = gptr<Local_0031fb14_ea_5>(r0_5 + 8u);
    ea_5->word_0 = 0x31fbb4;  // (from the original)
    ea_5->word_4 = 0;
    guest::cpu()->r[1] = 0x31fbb4u;  // (from the original)
    return r0_5;
}

}  // namespace d_0031fb14
GUEST_EXPORT_FRAMED(0x0031fb14, d_0031fb14::f_0031fb14, 0x4010);  // pushes {r4, lr} first, as the original

// f_0031fbcc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0031fbcc {

inline constexpr u32 vtable_DragIconGroup = 0x008ee248u;
inline constexpr u32 vtable_DragIconGroup_at_c = 0x008ee258u;
inline constexpr u32 vtable_DragIconControl_rec = 0x008f08acu;
inline constexpr u32 vtable_LetterDragPostWindow = 0x008f47ecu;
inline constexpr u32 vtable_LetterDragPostWindow_at_213c = 0x008f4814u;
inline constexpr u32 vtable_LetterDragWindowBase = 0x008f4828u;
inline constexpr guest::Function<0x002f76ad, u32(u32, u32, u32, u32)> call_002f76ac;
inline constexpr guest::Function<0x002f7710, u32(u32, u32)> call_002f7710;
inline constexpr guest::Function<0x00567ef0, u32(u32)> call_00567ef0;
inline constexpr guest::Function<0x0056988c, u32(u32, u32, u32, u32)> call_0056988c;
inline constexpr guest::Function<0x005bf744, u32(u32)> call_005bf744;

u32 f_0031fbcc(gptr<LetterDragWindowBase> arg0) {
    arg0->word_0 = vtable_LetterDragPostWindow;
    *gptr<u32>(arg0.addr() + 0x213cu) = vtable_LetterDragPostWindow_at_213c;  // (from the original)
    u32 r0_1 = arg0.addr() + 0x21b0u;  // (from the original)
    call_0056988c(r0_1, 0x8f47ecu, 0x8f4814u, 0x213cu);  // (from the original)
    call_0056988c(r0_1 - 0x28u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    call_0056988c(r0_1 - 0x50u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    arg0->word_0 = vtable_LetterDragWindowBase;
    arg0->word_201c = vtable_DragIconControl_rec;
    call_002f7710(r0_1 - 0x194u, 0x8f08acu);  // (from the original)
    arg0->word_1ee8 = vtable_DragIconGroup_at_c;
    arg0->word_1edc = vtable_DragIconGroup;
    call_0056988c(r0_1 - 0x1c0u, 0x8ee258u, 0x8ee248u, guest::cpu()->r[3]);  // (from the original)
    call_0056988c(r0_1 - 0x1e8u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    call_0056988c(r0_1 - 0x210u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    call_0056988c(r0_1 - 0x238u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    call_0056988c(r0_1 - 0x260u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    call_0056988c(r0_1 - 0x288u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    call_0056988c(r0_1 - 0x2b4u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    call_002f76ac(r0_1 - 0x1ddcu, 0x2e3854u, 0x2b4u, 0xau);  // (from the original)
    call_0056988c(r0_1 - 0x1e08u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r0_15 = call_005bf744(r0_1 - 0x1f58u);  // (from the original)
    u32 r0_17 = call_00567ef0(r0_15 - 0x248u);  // (from the original)
    return r0_17 - 0x10u;  // (from the original)
}

}  // namespace d_0031fbcc
GUEST_EXPORT_FRAMED(0x0031fbcc, d_0031fbcc::f_0031fbcc, 0x4010);  // pushes {r4, lr} first, as the original

// f_0031fcc4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0031fcc4 {

struct __attribute__((packed)) Object_0031fcc4_0 {
    u8 unknown_0[0x278];  // (not used here)
    u32 word_278;
    u8 unknown_27c[0x154];  // (not used here)
    u32 word_3d0;
};
GUEST_OFFSET(Object_0031fcc4_0, word_278, 0x278);
GUEST_OFFSET(Object_0031fcc4_0, word_3d0, 0x3d0);

inline constexpr guest::Function<0x004b6d74, u32(u32, u32)> call_004b6d74;
inline constexpr guest::Function<0x004b6dc8, u32(u32, u32)> call_004b6dc8;

void f_0031fcc4(gptr<Object_0031fcc4_0> arg0, u32 r1) {
    guest::StackFrame frame(0x10);  // the original's stack frame
    u32 r0_1 = arg0->word_3d0;
    if (r0_1 != 0) {
        call_004b6dc8(r0_1, arg0->word_278);
    }
    arg0->word_3d0 = r1;
    if (r1 != 0) {
        u32 r1_2 = arg0->word_278;
        frame.release();
        call_004b6d74(r1, r1_2);
        return;
    }
}

}  // namespace d_0031fcc4
GUEST_EXPORT(0x0031fcc4, d_0031fcc4::f_0031fcc4);

// f_0031fcfc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0031fcfc {

struct __attribute__((packed)) Object_0031fcfc_0 {
    u8 unknown_0[0xc];  // (not used here)
    u32 word_c;
};
GUEST_OFFSET(Object_0031fcfc_0, word_c, 0xc);


u32 f_0031fcfc(gptr<Object_0031fcfc_0> arg0, u32 r1, u32 r2) {
    u32 r3_1 = arg0->word_c;
    if (r3_1 <= r1) {
        if (r1 < r3_1 + 0xau) {  // (from the original)
            u32 r1_1 = (r1 - r3_1) * 0xadu;  // (from the original)
            u32 r0_1 = arg0.addr() + (r1_1 << 2) + 0x3d4u;  // (from the original)
            *gptr<u8>(r0_1 + 0x12du) = u8(r2);  // (from the original)
            guest::cpu()->r[1] = r1_1;
            return r0_1;
        }
    }
    u32 r0_2 = arg0.addr() + 0x3d4u;  // (from the original)
    *gptr<u8>(r0_2 + 0x12du) = u8(r2);  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0_2;
}

}  // namespace d_0031fcfc
GUEST_EXPORT_FRAMED(0x0031fcfc, d_0031fcfc::f_0031fcfc, 0x10);  // pushes {r4} first, as the original

// f_0031fd44: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0031fd44 {

struct __attribute__((packed)) Object_0031fd44_0 {
    u8 unknown_0[0xc];  // (not used here)
    u32 word_c;
};
GUEST_OFFSET(Object_0031fd44_0, word_c, 0xc);


u32 f_0031fd44(gptr<Object_0031fd44_0> arg0, u32 r1) {
    u32 ea_1 = arg0.addr() + (r1 - arg0->word_c) * 0x2b4u + 0x3d4u;  // (from the original)
    u32 r1_1 = *gptr<u32>(*gptr<u32>(ea_1) + 0x60u);  // (from the original)
    // virtual function 24 of ea_1
    return guest::call_address<u32>(r1_1, ea_1, r1_1, 0xadu, guest::cpu()->r[3]);  // (from the original)
}

}  // namespace d_0031fd44
GUEST_EXPORT(0x0031fd44, d_0031fd44::f_0031fd44);

// f_0031fd64: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0031fd64 {

struct __attribute__((packed)) Object_0031fd64_0 {
    u8 unknown_0[0x201b];  // (not used here)
    u8 byte_201b;
};
GUEST_OFFSET(Object_0031fd64_0, byte_201b, 0x201b);


void f_0031fd64(gptr<Object_0031fd64_0> arg0, u32 r1) {
    u32 r0 = arg0.addr();
    arg0->byte_201b = 1;
    u32 r2 = 0u;
    do {
        u32 r3_1 = r1 == 0 ? 1u : u32(*gptr<s8>(r0 + r2 * 0x2b4u + 0x680u));  // (from the original)
        u32 r12_1 = r2 * 0xadu;  // (from the original)
        r2 += 1u;
        *gptr<u8>(r0 + (r12_1 << 2) + 0x501u) = u8(r3_1);  // (from the original)
        guest::preempt();
    } while (r2 < 0xau);  // (from the original)
}

}  // namespace d_0031fd64
GUEST_EXPORT(0x0031fd64, d_0031fd64::f_0031fd64);

// f_0031fdb8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0031fdb8 {

struct __attribute__((packed)) Local_0031fdb8_ea_4 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_0031fdb8_ea_4, word_0, 0x0);
GUEST_OFFSET(Local_0031fdb8_ea_4, word_4, 0x4);

struct __attribute__((packed)) Local_0031fdb8_r4_2 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_0031fdb8_r4_2, word_0, 0x0);
GUEST_OFFSET(Local_0031fdb8_r4_2, word_4, 0x4);

inline constexpr u32 vtable_script__WordFix_33u_ = 0x00909f18u;
inline constexpr guest::Function<0x002f76ad, u32(u32, u32, u32, u32)> call_002f76ac;
inline constexpr guest::Function<0x002f825c, u32(u32, u32)> call_002f825c;
inline constexpr guest::Function<0x002fcaf4, u32(u32)> call_002fcaf4;
inline constexpr guest::Function<0x00301d0d, u32(u32, u32, u32, u32)> call_00301d0c;
inline constexpr guest::Function<0x003083bc, u32(u32, u32, u32)> call_003083bc;
inline constexpr guest::Function<0x005d4a78, u32(u32, u32, u32, u32)> call_005d4a78;
inline constexpr guest::Function<0x005e34c4, u32(u32, u32, u32, u32)> call_005e34c4;
inline constexpr guest::Function<0x005e4988, u32(u32, u32, u32, u32)> call_005e4988;
inline constexpr guest::Function<0x005e4994, u32(u32, u32, u32, u32)> call_005e4994;
inline constexpr guest::Function<0x005e49c0, u32(u32, u32, u32)> call_005e49c0;
inline constexpr guest::Function<0x005e8498, u32(u32, u32)> call_005e8498;
inline constexpr guest::Function<0x005f4bfc, u32(u32)> call_005f4bfc;
inline constexpr guest::Function<0x00758204, u32(u32, u32, u32, u32)> call_00758204;
inline constexpr guest::Function<0x00758dd4, u32(u32)> call_00758dd4;

struct __attribute__((packed)) Frame_0031fdb8 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u8 unknown_10[0xc4];  // (not read or written by name)
};
GUEST_OFFSET(Frame_0031fdb8, word_0, 0x0);
GUEST_OFFSET(Frame_0031fdb8, word_4, 0x4);
GUEST_OFFSET(Frame_0031fdb8, word_8, 0x8);
GUEST_OFFSET(Frame_0031fdb8, word_c, 0xc);
GUEST_SIZE(Frame_0031fdb8, 0xd4);

u32 f_0031fdb8(u32 r0, u32 r1) {
    guest::StackFrameOf<Frame_0031fdb8> frame;  // the original's stack frame
    u32 res_1 = 0;
    u32 r3_5 = 0;
    u32 r8 = r0;
    u32 r5 = r1;
    u32 r6 = 0u;
    call_00301d0c(frame.at(0x68).addr(), 0x5e35dcu, 0x20u, 3u);  // (from the original)
    u32 r0_2 = frame.at(0xc).addr();  // (from the original)
    call_003083bc(r0_2, frame.at(0x24).addr(), 0x21u);  // (from the original)
    u32 r7 = vtable_script__WordFix_33u_;
    *gptr<u32>(r0_2) = r7;
    u32 r0_3 = r0_2 + 0xcu;  // (from the original)
    call_005f4bfc(r0_3);
    u32 r4_1 = r0_3 - 0xcu;  // (from the original)
    call_002f825c(r0_3 + 0xcu, 0x42u);  // (from the original)
    r1 = 0x8906ecu;  // (from the original)
    r0 = r4_1 + 0x18u;  // (from the original)
    *gptr<u16>(r4_1 + 0x18u) = u16(u32(*gptr<u16>(r1)));  // (from the original)
    u32 r2 = 0x10u;  // (from the original)
    do {
        u32 r3_4 = *gptr<u16>(r1);
        res_1 = r2 - 1u;
        r2 = res_1;
        *gptr<u16>(r0 + 2u) = u16(r3_4);
        r3_5 = *gptr<u16>(r1);
        u32 ea_2 = r0 + 4u;
        *gptr<u16>(ea_2) = u16(r3_5);
        r0 = ea_2;
        guest::preempt();
    } while (res_1 != 0);
    call_00758204(r5, frame.at(0xc).addr(), r2, r3_5);  // (from the original)
    call_005e8498(r8, frame.at(0xc).addr());  // (from the original)
    gptr<Local_0031fdb8_r4_2> r4_2 = gptr<Local_0031fdb8_r4_2>(frame.at(4).addr());
    frame->word_0 = 0;
    r4_2->word_0 = 0;
    r4_2->word_4 = 7;
    call_005e34c4(frame.at(0x68).addr(), 0x87964cu, 0x36u, 0u);  // (from the original)
    u32 r4_3 = r6 + 1u;
    u32 r0_7 = call_002fcaf4(r5 + 0x274u);  // (from the original)
    r6 = frame.at(0x68).addr();  // (from the original)
    if (r0_7 != 0) {
        if ((u32(*gptr<u8>(r5 + 0x272u)) & 0x80u) == 0) {  // (from the original)
            u32 r0_8 = call_00758dd4(r5);
            if (r0_8 != 1u) {
                goto L_31fed8;
            }
            if ((u32(*gptr<u8>(r5 + 0x272u)) & 0x80u) == 0) {  // (from the original)
                goto L_31fef8;
            }
        }
        if ((u32(*gptr<u8>(r5 + 0x272u)) & 8u) == 0) {  // (from the original)
            goto L_31fef8;
        }
L_31fed8:;
        frame->word_8 = 7;
        frame->word_0 = 0;
        frame->word_4 = 1;
        call_005e34c4(r6 + (r4_3 << 5), 0x87964cu, 0x37u, 0u);  // (from the original)
        r4_3 += 1u;
    }
L_31fef8:;
    frame->word_0 = 0;
    gptr<Local_0031fdb8_ea_4> ea_4 = gptr<Local_0031fdb8_ea_4>(frame.at(4).addr());
    ea_4->word_0 = 2;
    ea_4->word_4 = 1;
    call_005e34c4(r6 + (r4_3 << 5), 0x87964cu, 0x22u, 0u);  // (from the original)
    r5 = r4_3 + 1u;
    call_005e49c0(r8, r5, r4_3);
    u32 r3 = guest::cpu()->r[3];
    u32 r4 = 0u;
    if (s32(r5) > 0) {
        do {
            call_005e4994(r8, r4, r6 + (r4 << 5), r3);
            r3 = guest::cpu()->r[3];
            r4 += 1u;
            guest::preempt();
        } while (s32(r5) > s32(r4));
    }
    call_005e4988(r8, guest::cpu()->r[1], guest::cpu()->r[2], r3);
    call_005d4a78(r8, 0u, 0u, 0u);
    frame->word_c = r7;
    u32 r0_12 = call_002f76ac(frame.at(0x68).addr(), 0x5e3618u, 0x20u, 3u);  // (from the original)
    return r0_12;
}

}  // namespace d_0031fdb8
GUEST_EXPORT_FRAMED(0x0031fdb8, d_0031fdb8::f_0031fdb8, 0x4ff0);  // pushes {r4, r5, r6, r7, r8, r9, r10, r11, lr} first, as the original

// f_0031ffbc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0031ffbc {

struct __attribute__((packed)) Object_0031ffbc_0 {
    u8 unknown_0[0x201b];  // (not used here)
    u8 byte_201b;
};
GUEST_OFFSET(Object_0031ffbc_0, byte_201b, 0x201b);


void f_0031ffbc(gptr<Object_0031ffbc_0> arg0, u32 r1) {
    arg0->byte_201b = u8(r1);
}

}  // namespace d_0031ffbc
GUEST_EXPORT(0x0031ffbc, d_0031ffbc::f_0031ffbc);
