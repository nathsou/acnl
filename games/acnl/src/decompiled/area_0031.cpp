// Functions decompiled by tools/decomp (docs/decomp.md), each proved equal to the recompiled original (prove-cpp). The
// names are generated (d_<address>::f_<address>, Object_<address>_<argument>, word_<offset>) and still to be chosen.
#include "guest/guest.hpp"

#include <bit>

using guest::gptr;

// f_0031032c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0031032c {

inline constexpr guest::Function<0x00299984, u32(u32, u32, u32, u32)> call_00299984;  // (from the original)
inline constexpr guest::Function<0x002f825c, u32(u32, u32, u32, u32)> call_002f825c;  // (from the original)
inline constexpr guest::Function<0x00305784, u32(u32, u32, u32, u32)> call_00305784;  // (from the original)
inline constexpr guest::Function<0x003083bc, u32(u32, u32, u32, u32)> call_003083bc;  // (from the original)
inline constexpr guest::Function<0x0030af7c, u32(u32, u32, u32, u32)> call_0030af7c;  // (from the original)
inline constexpr guest::Function<0x0030b4a8, u32(u32, u32, u32, u32)> call_0030b4a8;  // (from the original)
inline constexpr guest::Function<0x0030baa8, u32(u32, u32, u32, u32)> call_0030baa8;  // (from the original)
inline constexpr guest::Function<0x00568630, u32(u32, u32, u32, u32)> call_00568630;  // (from the original)
inline constexpr guest::Function<0x00568984, u32(u32, u32, u32, u32)> call_00568984;  // (from the original)
inline constexpr guest::Function<0x00568c10, u32(u32, u32, u32, u32)> call_00568c10;  // (from the original)
inline constexpr guest::Function<0x005697e0, u32(u32, u32, u32, u32)> call_005697e0;  // (from the original)
inline constexpr guest::Function<0x005e2e50, u32(u32, u32, u32, u32)> call_005e2e50;  // (from the original)
inline constexpr guest::Function<0x005e2f94, u32(u32, u32, u32, u32)> call_005e2f94;  // (from the original)
inline constexpr guest::Function<0x005ea8dc, u32(u32, u32, u32, u32)> call_005ea8dc;  // (from the original)
inline constexpr guest::Function<0x005ea8f8, u32(u32, u32, u32, u32)> call_005ea8f8;  // (from the original)
inline constexpr guest::Function<0x005ea964, u32(u32, u32, u32, u32)> call_005ea964;  // (from the original)
inline constexpr guest::Function<0x005f4bfc, u32(u32, u32, u32, u32)> call_005f4bfc;  // (from the original)

u32 f_0031032c(u32 r0, u32 r1_unused, u32 r2_unused, u32 r3, float S0) {
    u32 ea = 0;
    u32 res = 0;
    u32 r1 = 0;
    u32 r2 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r13 = guest::cpu()->r[13];
    r1 = 0x35b4u;  // (from the original)
    r4 = r0;
    r13 = r13 - 0xb0u;  // (from the original)
    r2 = r1 - 0xe60u;  // (from the original)
    *gptr<u8>(r1 + r4) = u8(1u);
    r0 = *gptr<u32>(r2 + r4);
    r7 = 0u;
    *gptr<u8>(r0 + 0xb7u) = u8(u32(*gptr<u8>(r0 + 0xb7u)) & 0xfeu | 1u);  // (from the original)
    r0 = *gptr<u32>(r2 - 4u + r4);
    r1 = u32(*gptr<u8>(r0 + 0xb7u)) & 0xfeu;  // (from the original)
    *gptr<u8>(r0 + 0xb7u) = u8(r1);  // (from the original)
    r0 = r4 + 0x4d0u;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    r0 = call_00568c10(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
    *gptr<u32>(r4 + 0xca0u) = u32(*gptr<u32>(r4 + 0xca0u) | 8u);  // (from the original)
    r0 = r4 + 0x12d0u;  // (from the original)
    *gptr<u32>(r0 + 0xd4u) = u32(*gptr<u32>(r0 + 0xd4u) | 8u);  // (from the original)
    r0 = r4 + 0x19d4u;  // (from the original)
    *gptr<u32>(r0 + 0xd4u) = u32(*gptr<u32>(r0 + 0xd4u) | 8u);  // (from the original)
    r1 = 1u;
    r0 = r4 + 0x1ab8u;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    r0 = call_00299984(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
    r1 = 0u;
    r0 = r4;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    r0 = call_00305784(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
    if (u32(*gptr<u8>(r4 + 0xa05u)) == 1u) {  // (from the original)
        r5 = r4 + 0x2764u;  // (from the original)
        r1 = r4 + 0x458u;  // (from the original)
        r2 = *gptr<u32>(r5);
        r3 = 0u;
        r6 = r1;
        r0 = r4 + 0x294u;  // (from the original)
        guest::cpu()->r[13] = r13;
        guest::cpu()->s[0] = S0;
        r0 = call_00568630(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        S0 = std::bit_cast<float>(*gptr<u32>(0x310514u));  // (from the original)
        r0 = r6;
        guest::cpu()->r[13] = r13;
        guest::cpu()->s[0] = S0;
        r0 = call_005697e0(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        S0 = guest::cpu()->s[0];
        r0 = r4 + 0x294u;  // (from the original)
        *gptr<u8>(r4 + 0xa05u) = u8(r7);  // (from the original)
        guest::cpu()->r[13] = r13;
        guest::cpu()->s[0] = S0;
        r0 = call_00568c10(r0, r1, r2, r3);
        S0 = guest::cpu()->s[0];
        r2 = *gptr<u32>(r5);
        r3 = 0u;
        r1 = r6;
        r0 = r4 + 0x294u;  // (from the original)
        guest::cpu()->r[13] = r13;
        guest::cpu()->s[0] = S0;
        r0 = call_00568984(r0, r1, r2, r3);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        S0 = guest::cpu()->s[0];
    }
    r1 = 1u;
    r0 = r4;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    r0 = call_0030af7c(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
    r1 = 1u;
    r0 = r4;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    r0 = call_0030b4a8(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
    r1 = 1u;
    r0 = r4;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    r0 = call_0030baa8(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
    r0 = r13 + 8u;
    r2 = 0x3cu;  // (from the original)
    r1 = r13 + 0x20u;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    r0 = call_003083bc(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
    r6 = 0x90a1f0u;  // (from the original)
    *gptr<u32>(r0) = u32(r6);
    r0 = r0 + 0xcu;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    r0 = call_005f4bfc(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
    r5 = r0 - 0xcu;  // (from the original)
    r1 = 0x78u;  // (from the original)
    r0 = r0 + 0xcu;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    r0 = call_002f825c(r0, r1, r2, r3);
    S0 = guest::cpu()->s[0];
    r2 = 0x8906ecu;  // (from the original)
    r0 = r5 + 0x16u;  // (from the original)
    r1 = 0x1eu;  // (from the original)
    do {
L_310484:;
        res = r1 - 1u;
        r1 = res;
        ea = r2;
        r3 = u32(*gptr<u16>(ea));
        ea = r0 + 2u;
        *gptr<u16>(ea) = u16(r3);
        ea = r2;
        r3 = u32(*gptr<u16>(ea));
        ea = r0 + 4u;
        *gptr<u16>(ea) = u16(r3);
        r0 = ea;
        guest::preempt();
    } while (res != 0);
    r5 = 0x95deccu;  // (from the original)
    r1 = 0u;
    r0 = *gptr<u32>(r5);
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    r0 = call_005ea8f8(r0, r1, r2, r3);
    S0 = guest::cpu()->s[0];
    *gptr<u32>(r13) = u32(r7);
    r0 = *gptr<u32>(r5);
    r3 = 0x17cu;  // (from the original)
    r2 = 0x310524u;  // (from the original)
    r1 = r13 + 8u;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    r0 = call_005ea964(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
    r0 = *gptr<u32>(r5);
    r1 = 0u;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    r0 = call_005ea8dc(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
    r0 = r4 + 0x34f0u;  // (from the original)
    r1 = r13 + 8u;
    r4 = r0;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    r0 = call_005e2e50(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
    r0 = r4;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    r0 = call_005e2f94(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    S0 = guest::cpu()->s[0];
    *gptr<u32>(r13 + 8u) = u32(r6);
    r0 = r13 + 8u;
    r13 = r13 + 0xb0u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    return r0;
}

}  // namespace d_0031032c
GUEST_EXPORT(0x0031032c, d_0031032c::f_0031032c);

// f_00310530: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00310530 {

struct __attribute__((packed)) Object_00310530_1 {
    u8 unknown_0[0x310542];  // (not used here)
    u8 byte_310542;
};
GUEST_OFFSET(Object_00310530_1, byte_310542, 0x310542);  // (from the original)


u32 f_00310530(u32 r0, gptr<Object_00310530_1> arg1) {
    u32 r1 = arg1.addr();
    u32 r2 = 0;
    u32 tpc = 0;
    if (r0 == 0) {
        r0 = 0u;
        return r0;
    }
    if (r1 >= 0xau) {  // (from the original)
        r0 = 0u;
        return r0;
    }
    r2 = arg1->byte_310542;
    r2 = r2 + r2;
    tpc = 0x310544u + r2 | 1;  // (from the original)
    switch (tpc) {
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
    return guest::call_address<u32>(tpc, r0, r1, r2, guest::cpu()->r[3]);
L_31054c:;
    r0 = u32(*gptr<u8>(r0 + 0x1fu)) << 0x1e >> 0x1f;  // (from the original)
    return r0;
L_310554:;
    r0 = *gptr<u8>(r0 + 0x1fu);  // (from the original)
    r0 = r0 << 0x1f >> 0x1f;  // (from the original)
    return r0;
L_310558:;
    r0 = u32(*gptr<u8>(r0 + 0x20u)) >> 7;  // (from the original)
    return r0;
L_310560:;
    r0 = u32(*gptr<u8>(r0 + 0x20u)) << 0x19;  // (from the original)
    r0 = r0 >> 0x1f;  // (from the original)
    return r0;
L_310568:;
    r0 = u32(*gptr<u8>(r0 + 0x20u)) << 0x1a;  // (from the original)
    r0 = r0 >> 0x1f;  // (from the original)
    return r0;
L_310572:;
    r0 = u32(*gptr<u8>(r0 + 0x20u)) << 0x1b;  // (from the original)
    r0 = r0 >> 0x1f;  // (from the original)
    return r0;
L_31057a:;
    r0 = u32(*gptr<u8>(r0 + 0x20u)) << 0x1c;  // (from the original)
    r0 = r0 >> 0x1f;  // (from the original)
    return r0;
L_310582:;
    r0 = u32(*gptr<u8>(r0 + 0x20u)) << 0x1d;  // (from the original)
    r0 = r0 >> 0x1f;  // (from the original)
    return r0;
L_31058a:;
    r0 = u32(*gptr<u8>(r0 + 0x20u)) << 0x1e;  // (from the original)
    r0 = r0 >> 0x1f;  // (from the original)
    return r0;
L_310592:;
    r0 = *gptr<u8>(r0 + 0x20u);  // (from the original)
    r0 = r0 << 0x1f >> 0x1f;  // (from the original)
    return r0;
}

}  // namespace d_00310530
GUEST_EXPORT(0x00310531, d_00310530::f_00310530);

// f_00310a30: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00310a30 {

inline constexpr guest::Function<0x002f825c, u32(u32, u32, u32, u32)> call_002f825c;  // (from the original)
inline constexpr guest::Function<0x00301444, u32(u32, u32, u32, u32)> call_00301444;  // (from the original)
inline constexpr guest::Function<0x00308355, u32(u32, u32, u32, u32)> call_00308354;  // (from the original)
inline constexpr guest::Function<0x00308d4d, u32(u32, u32, u32, u32)> call_00308d4c;  // (from the original)
inline constexpr guest::Function<0x0030b8bc, u32(u32, u32, u32, u32)> call_0030b8bc;  // (from the original)
inline constexpr guest::Function<0x0030c428, u32(u32, u32, u32, u32)> call_0030c428;  // (from the original)
inline constexpr guest::Function<0x0030c4d0, u32(u32, u32, u32, u32)> call_0030c4d0;  // (from the original)
inline constexpr guest::Function<0x0030c4f4, u32(u32, u32, u32, u32)> call_0030c4f4;  // (from the original)
inline constexpr guest::Function<0x0030c599, u32(u32, u32, u32, u32)> call_0030c598;  // (from the original)
inline constexpr guest::Function<0x005bbdf8, u32(u32, u32, u32, u32)> call_005bbdf8;  // (from the original)

u32 f_00310a30(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 ea = 0;
    u32 res = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r13 = guest::cpu()->r[13];
    ea = r13 - 0x18;  // (from the original)
    *gptr<u32>(ea) = u32(r3);
    r13 = ea;
    r5 = 0u;
    r4 = r0;
    do {
L_310a36:;
        r0 = 0x2518u * r5 + r4;  // (from the original)
        guest::cpu()->r[13] = r13;
        r0 = call_00308d4c(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r5 = r5 + 1u;
        guest::preempt();
    } while (s32(r5) < s32(0xau));  // (from the original)
    r5 = 0u;
    r1 = r4 + 0x172e0u;  // (from the original)
    r0 = r4 + 0x172f4u;  // (from the original)
    *gptr<u32>(r1 + 0x10u) = u32(r5);  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0030c428(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r4 + 0x173a0u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0030b8bc(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r4 + 0x173c6u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0030b8bc(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r4 + 0x173ecu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0030c4d0(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r4 + 0x17448u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0030c4f4(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r4 + 0x1764au;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_005bbdf8(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r5 = 0xffffu;  // (from the original)
    r0 = r4 + 0x17654u;  // (from the original)
    r1 = 8u;
    do {
L_310a88:;
        *gptr<u16>(r0 + 2u) = u16(r5);
        r0 = r0 + 4u;
        res = r1 - 1u;
        r1 = res;
        *gptr<u16>(r0) = u16(r5);
        guest::preempt();
    } while (res != 0);
    r0 = r4 + 0x17676u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00308354(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r4 + 0x185f2u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00308354(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r4 + 0x19570u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0030c598(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r4 + 0x19630u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0030c598(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r6 = r4 + 0x196e0u;  // (from the original)
    *gptr<u16>(r6 + 0x10u) = u16(r5);  // (from the original)
    r5 = r4 + 0x19760u;  // (from the original)
    *gptr<u16>(r6 + 0x1au) = u16(0x7ffeu);  // (from the original)
    r7 = ~0u;
    r1 = 0x32u;  // (from the original)
    r0 = r4 + 0x196fcu;  // (from the original)
    *gptr<u8>(r5 + 7u) = u8(r7);
    guest::cpu()->r[13] = r13;
    r0 = call_002f825c(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = 0x32u;  // (from the original)
    r0 = r4 + 0x1972eu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00301444(r0, r1, r2, r3);
    r0 = 0u;
    *gptr<u8>(r5) = u8(r0);
    *gptr<u8>(r5 + 1u) = u8(r7);
    *gptr<u8>(r5 + 2u) = u8(r7);
    *gptr<u8>(r5 + 3u) = u8(r7);
    *gptr<u8>(r5 + 5u) = u8(r7);
    r1 = 0x196e0u;  // (from the original)
    *gptr<u8>(r5 + 4u) = u8(r7);
    *gptr<u8>(r5 + 6u) = u8(r0);
    r0 = 0x7dbu;  // (from the original)
    r2 = r4 + 2u + r1;
    r3 = r4 + 4u + r1;
    *gptr<u16>(r6 + 0x12u) = u16(r0);  // (from the original)
    r1 = r4 + 6u + r1;
    *gptr<u16>(r2 + 0x12u) = u16(r0);  // (from the original)
    *gptr<u16>(r3 + 0x12u) = u16(r0);  // (from the original)
    *gptr<u16>(r1 + 0x12u) = u16(r0);  // (from the original)
    r13 = r13 + 0x18;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_00310a30
GUEST_EXPORT(0x00310a31, d_00310a30::f_00310a30);

// f_00310cf8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00310cf8 {

inline constexpr guest::Function<0x002fb328, u32(u32, u32, u32, u32)> call_002fb328;  // (from the original)
inline constexpr guest::Function<0x002fb338, u32(u32, u32, u32, u32)> call_002fb338;  // (from the original)
inline constexpr guest::Function<0x002fb378, u32(u32, u32, u32, u32)> call_002fb378;  // (from the original)
inline constexpr guest::Function<0x002fb430, u32(u32, u32, u32, u32)> call_002fb430;  // (from the original)
inline constexpr guest::Function<0x002fbb30, u32(u32, u32, u32, u32)> call_002fbb30;  // (from the original)
inline constexpr guest::Function<0x002fbd54, u32(u32, u32, u32, u32)> call_002fbd54;  // (from the original)
inline constexpr guest::Function<0x002fd4b4, u32(u32, u32, u32, u32)> call_002fd4b4;  // (from the original)
inline constexpr guest::Function<0x002ff408, u32(u32, u32, u32, u32)> call_002ff408;  // (from the original)
inline constexpr guest::Function<0x002ff6f4, u32(u32, u32, u32, u32)> call_002ff6f4;  // (from the original)
inline constexpr guest::Function<0x00301400, u32(u32, u32, u32, u32)> call_00301400;  // (from the original)
inline constexpr guest::Function<0x00301e20, u32(u32, u32, u32, u32)> call_00301e20;  // (from the original)
inline constexpr guest::Function<0x0030f52c, u32(u32, u32, u32, u32)> call_0030f52c;  // (from the original)
inline constexpr guest::Function<0x0030f56c, u32(u32, u32, u32, u32)> call_0030f56c;  // (from the original)
inline constexpr guest::Function<0x00311c70, u32(u32, u32, u32, u32)> call_00311c70;  // (from the original)
inline constexpr guest::Function<0x003122bd, u32(u32, u32, u32, u32)> call_003122bc;  // (from the original)
inline constexpr guest::Function<0x0031237d, u32(u32, u32, u32, u32)> call_0031237c;  // (from the original)
inline constexpr guest::Function<0x00312ae0, u32(u32, u32, u32, u32)> call_00312ae0;  // (from the original)
inline constexpr guest::Function<0x00313a40, u32(u32, u32, u32, u32)> call_00313a40;  // (from the original)
inline constexpr guest::Function<0x005cfef0, u32(u32, u32, u32, u32)> call_005cfef0;  // (from the original)

u32 f_00310cf8(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 ea = 0;
    u32 res = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r13 = guest::cpu()->r[13];
    u32 r14 = guest::cpu()->r[14];
    u32 nf = 0;
    u32 zf = 0;
    u32 cf = 0;
    u32 vf = 0;
    u32 tpc = 0;
    ea = r13 - 0x1c;  // (from the original)
    *gptr<u32>(ea) = u32(r0);
    *gptr<u32>(ea + 4) = u32(r1);
    *gptr<u32>(ea + 8) = u32(r4);
    *gptr<u32>(ea + 0xc) = u32(r5);  // (from the original)
    *gptr<u32>(ea + 0x10) = u32(r6);  // (from the original)
    *gptr<u32>(ea + 0x14) = u32(r7);  // (from the original)
    *gptr<u32>(ea + 0x18) = u32(r14);  // (from the original)
    r13 = ea;
    r13 = r13 - 0x4cu;  // (from the original)
    r4 = r0;
    r0 = *gptr<u32>(r13 + 0x50u);  // (from the original)
    r0 = *gptr<u16>(r0 + 0x2cu);  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00313a40(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    zf = r0 == 0;
    if (zf) {
        goto L_310e08;
    }
    guest::cpu()->r[13] = r13;
    r0 = call_005cfef0(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = 0x2518u;  // (from the original)
    r1 = r4 + r1;
    zf = r0 == 0;
    *gptr<u32>(r13 + 4u) = u32(r1);
    if (zf) {
        goto L_310d92;
    }
    r0 = r4;
    guest::cpu()->r[13] = r13;
    r0 = call_00301e20(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    zf = r0 == 0;
    r0 = *gptr<u32>(r13 + 4u);
    if (zf) {
        guest::cpu()->r[13] = r13;
        r0 = call_00301e20(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        zf = r0 == 0;
        if (!zf) {
            goto L_310d92;
        }
        r0 = 2u;
        guest::cpu()->r[13] = r13;
        r0 = call_002ff6f4(r0, r1, r2, r3);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r1 = 0x2518u;  // (from the original)
        r0 = r0 * r1;
        r5 = r0 + r4;
    } else {
        guest::cpu()->r[13] = r13;
        r0 = call_00301e20(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        zf = r0 == 0;
        if (!zf) {
            goto L_310d48;
        }
        r5 = *gptr<u32>(r13 + 4u);
    }
    zf = r5 == 0;
    if (!zf) {
        goto L_310e44;
    }
L_310d48:;
    r0 = *gptr<u32>(r13 + 4u);
    r6 = 0u;
    r7 = r6;
    *gptr<u32>(r13 + 0x28u) = u32(r0);  // (from the original)
    r0 = 0x8eeu;  // (from the original)
    r5 = r4 + r0;
    *gptr<u32>(r13 + 0xcu) = u32(r5);  // (from the original)
    do {
L_310d56:;
        r0 = r5;
        guest::cpu()->r[13] = r13;
        r0 = call_002fbd54(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        zf = r0 == 0;
        if (!zf) {
            r6 = r6 + 1u;
        }
        r7 = r7 + 1u;
        r5 = r5 + 0xf2u;  // (from the original)
        cf = r7 >= 0x10u;  // (from the original)
        guest::preempt();
    } while (!cf);
    *gptr<u32>(r13) = u32(r6);
    r1 = 0x8eeu;  // (from the original)
    r0 = *gptr<u32>(r13 + 0x28u);  // (from the original)
    r5 = 0u;
    r7 = r5;
    r6 = r0 + r1;
    *gptr<u32>(r13 + 8u) = u32(r6);
    do {
L_310d78:;
        r0 = r6;
        guest::cpu()->r[13] = r13;
        r0 = call_002fbd54(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        zf = r0 == 0;
        if (!zf) {
            r5 = r5 + 1u;
        }
        r7 = r7 + 1u;
        r6 = r6 + 0xf2u;  // (from the original)
        cf = r7 >= 0x10u;  // (from the original)
        guest::preempt();
    } while (!cf);
    r0 = *gptr<u32>(r13);
    res = r0 - r5;
    nf = res >> 0x1f;  // (from the original)
    vf = ((r0 ^ r5) & (r0 ^ res)) >> 0x1f;  // (from the original)
    if (nf == vf) {
        goto L_310d96;
    }
L_310d92:;
    r5 = r4;
    goto L_310f54;
L_310d96:;
    res = r0 - r5;
    nf = res >> 0x1f;  // (from the original)
    zf = res == 0;
    vf = ((r0 ^ r5) & (r0 ^ res)) >> 0x1f;  // (from the original)
    if (zf || nf != vf) {
        goto L_310d9e;
    }
L_310d9a:;
    r5 = *gptr<u32>(r13 + 0x28u);  // (from the original)
    goto L_310f54;
L_310d9e:;
    r5 = *gptr<u32>(r13 + 0xcu);  // (from the original)
    r6 = 0u;
    r7 = r6;
    do {
L_310da4:;
        r0 = r5;
        guest::cpu()->r[13] = r13;
        r0 = call_002fbd54(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        zf = r0 == 0;
        if (!zf) {
            r0 = 0xb6u;  // (from the original)
            r0 = *gptr<u8>(r0 + r5);
            r0 = r0 << 0x1d;  // (from the original)
            r0 = r0 >> 0x1d;  // (from the original)
            r6 = r0 + r6;
        }
        r7 = r7 + 1u;
        r5 = r5 + 0xf2u;  // (from the original)
        cf = r7 >= 0x10u;  // (from the original)
        guest::preempt();
    } while (!cf);
    r5 = *gptr<u32>(r13 + 8u);
    *gptr<u32>(r13) = u32(r6);
    r6 = 0u;
    r7 = r6;
    do {
L_310dc8:;
        r0 = r5;
        guest::cpu()->r[13] = r13;
        r0 = call_002fbd54(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        zf = r0 == 0;
        if (!zf) {
            r0 = 0xb6u;  // (from the original)
            r0 = *gptr<u8>(r0 + r5);
            r0 = r0 << 0x1d;  // (from the original)
            r0 = r0 >> 0x1d;  // (from the original)
            r6 = r0 + r6;
        }
        r7 = r7 + 1u;
        r5 = r5 + 0xf2u;  // (from the original)
        cf = r7 >= 0x10u;  // (from the original)
        guest::preempt();
    } while (!cf);
    r0 = *gptr<u32>(r13);
    res = r0 - r6;
    nf = res >> 0x1f;  // (from the original)
    vf = ((r0 ^ r6) & (r0 ^ res)) >> 0x1f;  // (from the original)
    if (nf != vf) {
        guest::preempt();
        goto L_310d92;
    }
    res = r0 - r6;
    nf = res >> 0x1f;  // (from the original)
    zf = res == 0;
    vf = ((r0 ^ r6) & (r0 ^ res)) >> 0x1f;  // (from the original)
    if (!zf && nf == vf) {
        guest::preempt();
        goto L_310d9a;
    }
    r5 = *gptr<u32>(r13 + 0xcu);  // (from the original)
    r6 = 0u;
    r7 = r6;
L_310df4:;
    r0 = r5;
    guest::cpu()->r[13] = r13;
    r0 = call_002fbd54(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    zf = r0 == 0;
    if (zf) {
        goto L_310e18;
    }
    r0 = r5;
    r0 = r0 + 0xa0u;  // (from the original)
    r1 = *gptr<u8>(r0 + 0x1au);  // (from the original)
    r0 = *gptr<u8>(r0 + 0x19u);  // (from the original)
    goto L_310e0a;
L_310e08:;
    goto L_311032;
L_310e0a:;
    r1 = r1 << 0x1f;  // (from the original)
    r0 = r0 >> 1;
    r1 = r1 >> 0x18;  // (from the original)
    r0 = r0 + r1;
    cf = r6 >= r0;
    if (cf) {
        goto L_310e18;
    }
    r6 = r0;
L_310e18:;
    r7 = r7 + 1u;
    r5 = r5 + 0xf2u;  // (from the original)
    cf = r7 >= 0x10u;  // (from the original)
    if (!cf) {
        guest::preempt();
        goto L_310df4;
    }
    *gptr<u32>(r13 + 0x10u) = u32(r6);  // (from the original)
    r6 = *gptr<u32>(r13 + 8u);
    r5 = 0u;
    r7 = r5;
L_310e28:;
    r0 = r6;
    guest::cpu()->r[13] = r13;
    r0 = call_002fbd54(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    zf = r0 == 0;
    if (zf) {
        goto L_310e4c;
    }
    r0 = r6;
    r0 = r0 + 0xa0u;  // (from the original)
    r1 = *gptr<u8>(r0 + 0x1au);  // (from the original)
    r0 = *gptr<u8>(r0 + 0x19u);  // (from the original)
    r1 = r1 << 0x1f;  // (from the original)
    r0 = r0 >> 1;
    r1 = r1 >> 0x18;  // (from the original)
    r0 = r0 + r1;
    goto L_310e46;
L_310e44:;
    goto L_310f54;
L_310e46:;
    cf = r5 >= r0;
    if (cf) {
        goto L_310e4c;
    }
    r5 = r0;
L_310e4c:;
    r7 = r7 + 1u;
    r6 = r6 + 0xf2u;  // (from the original)
    cf = r7 >= 0x10u;  // (from the original)
    if (!cf) {
        guest::preempt();
        goto L_310e28;
    }
    r0 = *gptr<u32>(r13 + 0x10u);  // (from the original)
    res = r0 - r5;
    nf = res >> 0x1f;  // (from the original)
    vf = ((r0 ^ r5) & (r0 ^ res)) >> 0x1f;  // (from the original)
    if (nf != vf) {
        guest::preempt();
        goto L_310d92;
    }
    res = r0 - r5;
    nf = res >> 0x1f;  // (from the original)
    zf = res == 0;
    vf = ((r0 ^ r5) & (r0 ^ res)) >> 0x1f;  // (from the original)
    if (!zf && nf == vf) {
        guest::preempt();
        goto L_310d9a;
    }
    guest::cpu()->r[13] = r13;
    r0 = call_002fb378(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    r2 = *gptr<u32>(r0 + 4u);
    r1 = *gptr<u32>(r0);
    r0 = *gptr<u32>(r0 + 8u);
    *gptr<u32>(r13 + 0x20u) = u32(r2);  // (from the original)
    r5 = *gptr<u32>(r13 + 0xcu);  // (from the original)
    r7 = 0u;
    *gptr<u32>(r13 + 0x24u) = u32(r0);  // (from the original)
    r7 = ~r7;
    r0 = r13 + 0x1cu;  // (from the original)
    r6 = 0u;
    *gptr<u32>(r13 + 0x1cu) = u32(r1);  // (from the original)
    *gptr<u32>(r13 + 0x10u) = u32(r0);  // (from the original)
L_310e7a:;
    r0 = r5;
    guest::cpu()->r[13] = r13;
    r0 = call_002fbd54(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    zf = r0 == 0;
    if (zf) {
        goto L_310ebc;
    }
    r0 = r5;
    r0 = r0 + 0xd6u;  // (from the original)
    *gptr<u32>(r13 + 0xcu) = u32(r0);  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002fb338(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    zf = r0 == 0;
    if (zf) {
        goto L_310ebc;
    }
    r1 = *gptr<u32>(r13 + 0xcu);  // (from the original)
    r0 = r13 + 0x38u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002fb430(r0, r1, r2, r3);
    r0 = r13 + 0x38u;  // (from the original)
    r3 = r13 + 0x2cu;  // (from the original)
    ea = r0;
    r0 = *gptr<u32>(ea);
    r1 = *gptr<u32>(ea + 4);
    r2 = *gptr<u32>(ea + 8);
    *gptr<u32>(r3) = u32(r0);
    *gptr<u32>(r3 + 4) = u32(r1);
    *gptr<u32>(r3 + 8) = u32(r2);
    r3 = r3 + 0xc;  // (from the original)
    r2 = 1u;
    r0 = *gptr<u32>(r13 + 0x10u);  // (from the original)
    r1 = r13 + 0x2cu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002fd4b4(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    nf = r0 >> 0x1f;  // (from the original)
    vf = 0u;
    if (nf != vf) {
        r0 = u32(0) - r0;
    }
    nf = r7 >> 0x1f;  // (from the original)
    vf = 0u;
    if (nf == vf) {
        res = r0 - r7;
        nf = res >> 0x1f;  // (from the original)
        vf = ((r0 ^ r7) & (r0 ^ res)) >> 0x1f;  // (from the original)
        if (nf == vf) {
            goto L_310ebc;
        }
    }
    r7 = r0;
L_310ebc:;
    r6 = r6 + 1u;
    r5 = r5 + 0xf2u;  // (from the original)
    cf = r6 >= 0x10u;  // (from the original)
    if (!cf) {
        guest::preempt();
        goto L_310e7a;
    }
    *gptr<u32>(r13) = u32(r7);
    r5 = *gptr<u32>(r13 + 8u);
    r7 = 0u;
    r7 = ~r7;
    r0 = r13 + 0x1cu;  // (from the original)
    r6 = 0u;
    *gptr<u32>(r13 + 0x10u) = u32(r0);  // (from the original)
L_310ed2:;
    r0 = r5;
    guest::cpu()->r[13] = r13;
    r0 = call_002fbd54(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    zf = r0 == 0;
    if (zf) {
        goto L_310f14;
    }
    r0 = r5;
    r0 = r0 + 0xd6u;  // (from the original)
    *gptr<u32>(r13 + 0xcu) = u32(r0);  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002fb338(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    zf = r0 == 0;
    if (zf) {
        goto L_310f14;
    }
    r1 = *gptr<u32>(r13 + 0xcu);  // (from the original)
    r0 = r13 + 0x2cu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002fb430(r0, r1, r2, r3);
    r0 = r13 + 0x2cu;  // (from the original)
    r3 = r13 + 0x38u;  // (from the original)
    ea = r0;
    r0 = *gptr<u32>(ea);
    r1 = *gptr<u32>(ea + 4);
    r2 = *gptr<u32>(ea + 8);
    *gptr<u32>(r3) = u32(r0);
    *gptr<u32>(r3 + 4) = u32(r1);
    *gptr<u32>(r3 + 8) = u32(r2);
    r3 = r3 + 0xc;  // (from the original)
    r2 = 1u;
    r0 = *gptr<u32>(r13 + 0x10u);  // (from the original)
    r1 = r13 + 0x38u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002fd4b4(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    nf = r0 >> 0x1f;  // (from the original)
    vf = 0u;
    if (nf != vf) {
        r0 = u32(0) - r0;
    }
    nf = r7 >> 0x1f;  // (from the original)
    vf = 0u;
    if (nf == vf) {
        res = r0 - r7;
        nf = res >> 0x1f;  // (from the original)
        vf = ((r0 ^ r7) & (r0 ^ res)) >> 0x1f;  // (from the original)
        if (nf == vf) {
            goto L_310f14;
        }
    }
    r7 = r0;
L_310f14:;
    r6 = r6 + 1u;
    r5 = r5 + 0xf2u;  // (from the original)
    cf = r6 >= 0x10u;  // (from the original)
    if (!cf) {
        guest::preempt();
        goto L_310ed2;
    }
    r0 = *gptr<u32>(r13);
    res = r0 - r7;
    nf = res >> 0x1f;  // (from the original)
    zf = res == 0;
    vf = ((r0 ^ r7) & (r0 ^ res)) >> 0x1f;  // (from the original)
    if (zf || nf != vf) {
        goto L_310f24;
    }
L_310f22:;
    guest::preempt();
    goto L_310d92;
L_310f24:;
    res = r0 - r7;
    nf = res >> 0x1f;  // (from the original)
    vf = ((r0 ^ r7) & (r0 ^ res)) >> 0x1f;  // (from the original)
    if (nf == vf) {
        goto L_310f2a;
    }
L_310f28:;
    guest::preempt();
    goto L_310d9a;
L_310f2a:;
    r1 = *gptr<u32>(r13 + 0x28u);  // (from the original)
    r0 = 0x25u;  // (from the original)
    r0 = r0 << 8;
    r0 = r1 + r0;
    r2 = *gptr<u8>(r0 + 0xcu);  // (from the original)
    r1 = *gptr<u16>(r0 + 0xau);  // (from the original)
    r3 = *gptr<u8>(r0 + 0xdu);  // (from the original)
    r0 = 0x250au;  // (from the original)
    r0 = r4 + r0;
    guest::cpu()->r[13] = r13;
    r0 = call_00301400(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    res = r0 + 1u;
    zf = res == 0;
    r1 = res;
    if (zf) {
        guest::preempt();
        goto L_310f22;
    }
    zf = r0 == 1u;
    if (zf) {
        guest::preempt();
        goto L_310f28;
    }
    r0 = 2u;
    guest::cpu()->r[13] = r13;
    r0 = call_002ff6f4(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    r1 = 0x2518u;  // (from the original)
    r0 = r0 * r1;
    r5 = r0 + r4;
L_310f54:;
    r2 = 0x2518u;  // (from the original)
    r1 = *gptr<u32>(r13 + 0x50u);  // (from the original)
    r0 = r5;
    guest::cpu()->r[13] = r13;
    r0 = call_002fbb30(r0, r1, r2, r3);
    r2 = 0x49u;  // (from the original)
    r1 = 0x7dbu;  // (from the original)
    r2 = r2 << 7;
    r3 = r5 + r2;
    r0 = r5 + 2u;
    r6 = r0 + r2;
    *gptr<u16>(r3 + 0x12u) = u16(r1);  // (from the original)
    r0 = r5 + 4u;
    r3 = r0 + r2;
    r0 = r5 + 6u;
    *gptr<u16>(r6 + 0x12u) = u16(r1);  // (from the original)
    r0 = r0 + r2;
    *gptr<u16>(r3 + 0x12u) = u16(r1);  // (from the original)
    r6 = 0u;
    *gptr<u16>(r0 + 0x12u) = u16(r1);  // (from the original)
L_310f7c:;
    cf = r6 >= 0x10u;  // (from the original)
    if (cf) {
        goto L_310fa2;
    }
    res = 0xf2u;  // (from the original)
    r2 = res;
    r1 = r6;
    r1 = r1 * r2;
    r2 = 0x8eeu;  // (from the original)
    r0 = r1 + r5;
    res = r0 + r2;
    zf = res == 0;
    r7 = res;
    if (zf) {
        goto L_310fa2;
    }
    r0 = r7;
    guest::cpu()->r[13] = r13;
    r0 = call_002fbd54(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    zf = r0 == 0;
    if (zf) {
        goto L_310fa2;
    }
    r7 = r7 + 0xb6u;  // (from the original)
    r0 = 0xdfu;  // (from the original)
    r1 = *gptr<u8>(r7 + 7u);
    r1 = r1 & r0;
    *gptr<u8>(r7 + 7u) = u8(r1);
L_310fa2:;
    r6 = r6 + 1u;
    cf = r6 >= 0x10u;  // (from the original)
    if (!cf) {
        guest::preempt();
        goto L_310f7c;
    }
    guest::cpu()->r[13] = r13;
    r0 = call_002fb378(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = r0;
    r0 = 0x250au;  // (from the original)
    r0 = r5 + r0;
    guest::cpu()->r[13] = r13;
    r0 = call_0030f56c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0 = call_002fb328(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = 0x62138u;  // (from the original)
    r0 = r0 + 0x80u;  // (from the original)
    r1 = r0 + r1;
    r0 = 0x45u;  // (from the original)
    r0 = r0 << 5;
    r0 = r5 + r0;
    guest::cpu()->r[13] = r13;
    r0 = call_0030f52c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0 = call_002fb328(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = 0x6e21au;  // (from the original)
    r0 = r0 + 0x80u;  // (from the original)
    r1 = r0 + r1;
    r0 = 0x8b6u;  // (from the original)
    r0 = r5 + r0;
    guest::cpu()->r[13] = r13;
    r0 = call_00311c70(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r5;
    guest::cpu()->r[13] = r13;
    r0 = call_00312ae0(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = *gptr<u32>(r13 + 4u);
    zf = r5 == r0;
    if (!zf) {
        goto L_311036;
    }
    r0 = 0x25u;  // (from the original)
    r1 = 0u;
    r0 = r0 << 8;
    r0 = r5 + r0;
    r1 = ~r1;
    *gptr<u8>(r0 + 0x14u) = u8(r1);  // (from the original)
    r0 = 0x2210u;  // (from the original)
    r0 = r5 + r0;
    guest::cpu()->r[13] = r13;
    r0 = call_002ff408(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    r6 = 0x7dbu;  // (from the original)
    r7 = 0x49u;  // (from the original)
    r4 = 0u;
    r7 = r7 << 7;
    do {
L_311004:;
        r0 = 5u;
        r1 = r4;
        r0 = r0 << 7;
        r2 = 0x1810u;  // (from the original)
        r1 = r1 * r0;
        r0 = r1 + r5;
        r0 = r0 + r2;
        guest::cpu()->r[13] = r13;
        r0 = call_002ff408(r0, r1, r2, r3);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r0 = r4 << 0x18;  // (from the original)
        r4 = r4 + 1u;
        r1 = r0 >> 0x17;  // (from the original)
        r0 = r1 + r5;
        r0 = r0 + r7;
        res = r4 - 4u;
        nf = res >> 0x1f;  // (from the original)
        vf = ((r4 ^ 4u) & (r4 ^ res)) >> 0x1f;  // (from the original)
        *gptr<u16>(r0 + 0x12u) = u16(r6);  // (from the original)
        guest::preempt();
    } while (nf != vf);
    r0 = r5;
    guest::cpu()->r[13] = r13;
    r0 = call_003122bc(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r5;
    guest::cpu()->r[13] = r13;
    r0 = call_0031237c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
L_311032:;
    r13 = r13 + 0x54u;  // (from the original)
    r4 = *gptr<u32>(r13);
    r5 = *gptr<u32>(r13 + 4);
    r6 = *gptr<u32>(r13 + 8);
    r7 = *gptr<u32>(r13 + 0xc);  // (from the original)
    tpc = *gptr<u32>(r13 + 0x10);  // (from the original)
    r13 = r13 + 0x14;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[4] = r4;
    guest::cpu()->r[5] = r5;
    guest::cpu()->r[6] = r6;
    guest::cpu()->r[7] = r7;
    guest::cpu()->r[13] = r13;
    return r0;
L_311036:;
    zf = r5 == r4;
    if (!zf) {
        guest::preempt();
        goto L_311032;
    }
    r6 = 0x7dbu;  // (from the original)
    r7 = 0x49u;  // (from the original)
    r4 = 0u;
    r7 = r7 << 7;
    do {
L_311042:;
        r0 = 5u;
        r1 = 0x1810u;  // (from the original)
        r0 = r0 << 7;
        r0 = r0 * r4;
        r0 = r0 + r5;
        r0 = r0 + r1;
        guest::cpu()->r[13] = r13;
        r0 = call_002ff408(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r0 = r4 << 0x18;  // (from the original)
        r4 = r4 + 1u;
        r0 = r0 >> 0x17;  // (from the original)
        r0 = r0 + r5;
        r0 = r0 + r7;
        res = r4 - 4u;
        nf = res >> 0x1f;  // (from the original)
        vf = ((r4 ^ 4u) & (r4 ^ res)) >> 0x1f;  // (from the original)
        *gptr<u16>(r0 + 0x12u) = u16(r6);  // (from the original)
        guest::preempt();
    } while (nf != vf);
    r13 = r13 + 0x54u;  // (from the original)
    r4 = *gptr<u32>(r13);
    r5 = *gptr<u32>(r13 + 4);
    r6 = *gptr<u32>(r13 + 8);
    r7 = *gptr<u32>(r13 + 0xc);  // (from the original)
    tpc = *gptr<u32>(r13 + 0x10);  // (from the original)
    r13 = r13 + 0x14;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[4] = r4;
    guest::cpu()->r[5] = r5;
    guest::cpu()->r[6] = r6;
    guest::cpu()->r[7] = r7;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_00310cf8
GUEST_EXPORT(0x00310cf9, d_00310cf8::f_00310cf8);

// f_0031108c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0031108c {

inline constexpr guest::Function<0x0010d691, u32(u32, u32, u32, u32)> call_0010d690;  // (from the original)
inline constexpr guest::Function<0x0010edd5, u32(u32, u32, u32, u32)> call_0010edd4;  // (from the original)
inline constexpr guest::Function<0x001b63b4, u32(u32, u32, u32, u32)> call_001b63b4;  // (from the original)
inline constexpr guest::Function<0x0024088c, u32(u32, u32, u32, u32)> call_0024088c;  // (from the original)
inline constexpr guest::Function<0x0024e8cc, u32(u32, u32, u32, u32)> call_0024e8cc;  // (from the original)
inline constexpr guest::Function<0x002fae84, u32(u32, u32, u32, u32)> call_002fae84;  // (from the original)
inline constexpr guest::Function<0x002fb7e8, u32(u32, u32, u32, u32)> call_002fb7e8;  // (from the original)
inline constexpr guest::Function<0x002fbd54, u32(u32, u32, u32, u32)> call_002fbd54;  // (from the original)
inline constexpr guest::Function<0x002fe470, u32(u32, u32, u32, u32)> call_002fe470;  // (from the original)
inline constexpr guest::Function<0x00301e20, u32(u32, u32, u32, u32)> call_00301e20;  // (from the original)
inline constexpr guest::Function<0x00308d4d, u32(u32, u32, u32, u32)> call_00308d4c;  // (from the original)
inline constexpr guest::Function<0x005be844, u32(u32, u32, u32, u32)> call_005be844;  // (from the original)

u32 f_0031108c(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 ea = 0;
    u32 res = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r13 = guest::cpu()->r[13];
    u32 r14 = guest::cpu()->r[14];
    u32 tpc = 0;
    ea = r13 - 0x24;  // (from the original)
    *gptr<u32>(ea) = u32(r0);
    *gptr<u32>(ea + 4) = u32(r1);
    *gptr<u32>(ea + 8) = u32(r2);
    *gptr<u32>(ea + 0xc) = u32(r3);  // (from the original)
    *gptr<u32>(ea + 0x10) = u32(r4);  // (from the original)
    *gptr<u32>(ea + 0x14) = u32(r5);  // (from the original)
    *gptr<u32>(ea + 0x18) = u32(r6);  // (from the original)
    *gptr<u32>(ea + 0x1c) = u32(r7);  // (from the original)
    *gptr<u32>(ea + 0x20) = u32(r14);  // (from the original)
    r13 = ea - 0x14u;  // (from the original)
    r0 = *gptr<u32>(r13 + 0x18u);  // (from the original)
    r1 = *gptr<u32>(r13 + 0x14u);  // (from the original)
    if (r0 >= 0xau) {  // (from the original)
        goto L_311150;
    }
    r2 = 0x2518u;  // (from the original)
    res = r0 * r2 + r1;
    r4 = res;
    if (res == 0) {
        goto L_3110ee;
    }
    r0 = r4;
    guest::cpu()->r[13] = r13;
    r0 = call_002fe470(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        goto L_3110ee;
    }
L_3110aa:;
    if (r4 == 0) {
        goto L_3110ee;
    }
    r0 = r4;
    guest::cpu()->r[13] = r13;
    r0 = call_00301e20(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        goto L_3110ee;
    }
    r0 = *gptr<u16>(r4 + 0x2cu);  // (from the original)
    *gptr<u32>(r13 + 0xcu) = u32(r0);  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002fae84(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r6 = 0x55a6u;  // (from the original)
    r7 = 0x8ebeu;  // (from the original)
    r4 = 0u;
    *gptr<u32>(r13) = u32(r0 + 0x20u);  // (from the original)
L_3110ca:;
    r0 = *gptr<u32>(r13);
    r1 = uxtb(r4);
    guest::cpu()->r[13] = r13;
    r0 = call_002fb7e8(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r5 = r0;
    if (r0 == 0) {
        goto L_3110e8;
    }
    r0 = r5 + r6;
    guest::cpu()->r[13] = r13;
    r0 = call_002fbd54(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        goto L_3110e8;
    }
    r1 = *gptr<u32>(r13 + 0xcu);  // (from the original)
    r0 = r5 + r7;
    guest::cpu()->r[13] = r13;
    r0 = call_005be844(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
L_3110e8:;
    r4 = r4 + 1u;
    if (s32(r4) < s32(4u)) {
        guest::preempt();
        goto L_3110ca;
    }
L_3110ee:;
    r1 = *gptr<u32>(r13 + 0x1cu);  // (from the original)
    r0 = *gptr<u32>(r13 + 0x14u);  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0010edd4(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0 = call_002fae84(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    r2 = 0x7170cu;  // (from the original)
    r1 = *gptr<u32>(r13 + 0x18u);  // (from the original)
    r0 = r0 + r2;
    guest::cpu()->r[13] = r13;
    r0 = call_001b63b4(r0, r1, r2, r3);
    r4 = 0u;
    r5 = 0xfdu;  // (from the original)
    r0 = *gptr<u32>(r13 + 0x1cu) + 0x8eeu;  // (from the original)
    r6 = 0xfbu;  // (from the original)
    r7 = 0xf7u;  // (from the original)
    do {
L_311112:;
        r1 = r0 + 0xb6u;  // (from the original)
        r0 = r0 + 0xf2u;  // (from the original)
        r4 = r4 + 1u;
        r2 = u32(*gptr<u8>(r1 + 2u)) & r5 & r6;
        r3 = u32(*gptr<u8>(r1 + 6u)) & r5 & r7;
        *gptr<u8>(r1 + 2u) = u8(r2);
        res = r4 - 0x10u;  // (from the original)
        *gptr<u8>(r1 + 6u) = u8(r3);
        guest::preempt();
    } while (res >> 0x1f != ((r4 ^ 0x10u) & (r4 ^ res)) >> 0x1f);  // (from the original)
    r1 = *gptr<u16>(*gptr<u32>(r13 + 0x1cu) + 0x2cu);  // (from the original)
    r0 = *gptr<u32>(r13 + 0x14u);  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0010d690(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = *gptr<u32>(r13 + 0x1cu);  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00308d4c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = uxtb(*gptr<u32>(r13 + 0x18u) + 8u);  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0024088c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = *gptr<u32>(r13 + 0x20u);  // (from the original)
    if (r0 == 0) {
        goto L_311154;
    }
    goto L_31115e;
L_311150:;
    r4 = 0u;
    guest::preempt();
    goto L_3110aa;
L_311154:;
    r2 = 0x19760u;  // (from the original)
    r0 = 0u;
    r1 = *gptr<u32>(r13 + 0x14u) + r2;  // (from the original)
    *gptr<u8>(r1) = u8(r0);
L_31115e:;
    guest::cpu()->r[13] = r13;
    r0 = call_002fae84(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    r2 = 0x621d0u;  // (from the original)
    r1 = *gptr<u32>(r13 + 0x18u);  // (from the original)
    r0 = r0 + r2;
    guest::cpu()->r[13] = r13;
    r0 = call_0024e8cc(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r13 = r13 + 0x24u;  // (from the original)
    r4 = *gptr<u32>(r13);
    r5 = *gptr<u32>(r13 + 4);
    r6 = *gptr<u32>(r13 + 8);
    r7 = *gptr<u32>(r13 + 0xc);  // (from the original)
    tpc = *gptr<u32>(r13 + 0x10);  // (from the original)
    r13 = r13 + 0x14;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[4] = r4;
    guest::cpu()->r[5] = r5;
    guest::cpu()->r[6] = r6;
    guest::cpu()->r[7] = r7;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_0031108c
GUEST_EXPORT(0x0031108d, d_0031108c::f_0031108c);

// f_003113b8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_003113b8 {

inline constexpr guest::Function<0x0027a48c, u32(u32, u32, u32, u32)> call_0027a48c;  // (from the original)
inline constexpr guest::Function<0x00303cdc, u32(u32, u32, u32, u32)> call_00303cdc;  // (from the original)
inline constexpr guest::Function<0x005cdf48, u32(u32, u32, u32, u32)> call_005cdf48;  // (from the original)

u32 f_003113b8(u32 r0, u32 r1) {
    u32 r2 = 0;
    u32 r3 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r9 = guest::cpu()->r[9];
    guest::cpu()->r[13] -= 0x20u;  // (from the original)
    r6 = r0;
    r4 = r0 + 0x16u;  // (from the original)
    r0 = r4;
    r2 = ~0u;
    r3 = ~0x80000000u;  // (from the original)
    r0 = call_005cdf48(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r7 = 0x21u;  // (from the original)
    r0 = r4;
    *gptr<u8>(r4 + 8u) = u8(r7);
    r0 = call_00303cdc(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r8 = 0xffu;  // (from the original)
    r9 = 9u;
    *gptr<u8>(r4 + 9u) = u8(r8);
    *gptr<u8>(r4 + 0xau) = u8(r9);  // (from the original)
    r5 = r6 + 0x16u;  // (from the original)
    r4 = r6;
    r0 = r5;
    *gptr<u8>(r6 + 0x1eu) = u8(r7);  // (from the original)
    r0 = call_00303cdc(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    *gptr<u8>(r5 + 9u) = u8(r8);
    r0 = r4;
    *gptr<u8>(r5 + 0xau) = u8(r9);  // (from the original)
    r0 = call_0027a48c(r0, r1, r2, r3);
    r1 = 0u;
    *gptr<u8>(r4 + 0x21u) = u8(0xffu);  // (from the original)
    *gptr<u8>(r4 + 0x22u) = u8(r1);  // (from the original)
    *gptr<u8>(r4 + 0x23u) = u8(r1);  // (from the original)
    r0 = r6;
    *gptr<u8>(r4 + 0x24u) = u8(r1);  // (from the original)
    guest::cpu()->r[13] += 0x20u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_003113b8
GUEST_EXPORT(0x003113b8, d_003113b8::f_003113b8);

// f_00311744: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00311744 {

struct __attribute__((packed)) Object_00311744_0 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
};
GUEST_OFFSET(Object_00311744_0, word_4, 0x4);  // (from the original)


u32 f_00311744(gptr<Object_00311744_0> arg0, u32 r1) {
    u32 r0 = arg0.addr();
    u32 r2 = 0;
    u32 zf = 0;
    u32 cf = 0;
    r0 = arg0->word_4;
    zf = r0 == 0;
    cf = r0 >= 0u;
    if (!zf) {
        r2 = 0x18fu;  // (from the original)
        zf = r2 == r1;
        cf = r2 >= r1;
    }
    if (!cf || zf) {
        r0 = 0u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r1 = r1 + (r1 << 1) + (r1 << 3);
    r0 = r0 + (r1 << 3);
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_00311744
GUEST_EXPORT(0x00311744, d_00311744::f_00311744);

// f_00311f7c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00311f7c {

inline constexpr guest::Function<0x001df598, u32(u32, u32, u32, u32)> call_001df598;  // (from the original)
inline constexpr guest::Function<0x002fc224, u32(u32, u32, u32, u32)> call_002fc224;  // (from the original)
inline constexpr guest::Function<0x00309f85, u32(u32, u32, u32, u32)> call_00309f84;  // (from the original)
inline constexpr guest::Function<0x0030e228, u32(u32, u32, u32, u32)> call_0030e228;  // (from the original)

u32 f_00311f7c(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 ea = 0;
    u32 res = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r13 = guest::cpu()->r[13];
    u32 r14 = guest::cpu()->r[14];
    u32 tpc = 0;
    ea = r13 - 0x24;  // (from the original)
    *gptr<u32>(ea) = u32(r0);
    *gptr<u32>(ea + 4) = u32(r1);
    *gptr<u32>(ea + 8) = u32(r2);
    *gptr<u32>(ea + 0xc) = u32(r3);  // (from the original)
    *gptr<u32>(ea + 0x10) = u32(r4);  // (from the original)
    *gptr<u32>(ea + 0x14) = u32(r5);  // (from the original)
    *gptr<u32>(ea + 0x18) = u32(r6);  // (from the original)
    *gptr<u32>(ea + 0x1c) = u32(r7);  // (from the original)
    *gptr<u32>(ea + 0x20) = u32(r14);  // (from the original)
    r13 = ea - 4u;
    r4 = r1;
    r5 = r2;
    r7 = r3;
    r0 = *gptr<u32>(r13 + 4u);
    r1 = r2;
    guest::cpu()->r[13] = r13;
    r0 = call_00309f84(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r6 = r0;
    if (r0 == 0) {
        goto L_311fec;
    }
    if (r7 == 0) {
        goto L_311ff0;
    }
    r0 = *gptr<u32>(r13 + 4u);
    guest::cpu()->r[13] = r13;
    r0 = call_0030e228(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = u32(*gptr<u8>(r5 + 0x14u)) << 0x1f >> 0x1f;  // (from the original)
    if (r0 == r1) {
        r5 = 1u;
    } else {
        r5 = 0u;
    }
    guest::cpu()->r[13] = r13;
    r0 = call_002fc224(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 != 2u) {
        if (r0 == 3u) {
            goto L_311fce;
        }
        if (r0 == 4u) {
            goto L_311fd8;
        }
        if (r0 != 5u) {
            goto L_311ff0;
        }
        goto L_311fe2;
    }
    if (r5 == 0) {
        goto L_311ff0;
    }
    res = r4;
    if (u32(res == 0) || res >> 0x1f != (r4 & (r4 ^ res)) >> 0x1f) {  // (from the original)
        goto L_311fea;
    }
L_311fca:;
    r4 = r4 + 1u;
    goto L_311ff0;
L_311fce:;
    if (r5 == 0) {
        goto L_311ff0;
    }
    res = r4;
    if (res >> 0x1f == (r4 & (r4 ^ res)) >> 0x1f) {  // (from the original)
        goto L_311fea;
    }
    goto L_311ff0;
L_311fd8:;
    if (r5 != 0) {
        goto L_311ff0;
    }
    res = r4;
    if (u32(res == 0) || res >> 0x1f != (r4 & (r4 ^ res)) >> 0x1f) {  // (from the original)
        goto L_311fea;
    }
    guest::preempt();
    goto L_311fca;
L_311fe2:;
    if (r5 != 0) {
        goto L_311ff0;
    }
    res = r4;
    if (res >> 0x1f != (r4 & (r4 ^ res)) >> 0x1f) {  // (from the original)
        goto L_311ff0;
    }
L_311fea:;
    r0 = 0u;
L_311fec:;
    r13 = r13 + 0x14u;  // (from the original)
    r4 = *gptr<u32>(r13);
    r5 = *gptr<u32>(r13 + 4);
    r6 = *gptr<u32>(r13 + 8);
    r7 = *gptr<u32>(r13 + 0xc);  // (from the original)
    tpc = *gptr<u32>(r13 + 0x10);  // (from the original)
    r13 = r13 + 0x14;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[4] = r4;
    guest::cpu()->r[5] = r5;
    guest::cpu()->r[6] = r6;
    guest::cpu()->r[7] = r7;
    guest::cpu()->r[13] = r13;
    return r0;
L_311ff0:;
    r0 = r6 + 0xb6u;  // (from the original)
    r1 = r4;
    guest::cpu()->r[13] = r13;
    r0 = call_001df598(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r13 = r13 + 0x14u;  // (from the original)
    r0 = r4;
    r4 = *gptr<u32>(r13);
    r5 = *gptr<u32>(r13 + 4);
    r6 = *gptr<u32>(r13 + 8);
    r7 = *gptr<u32>(r13 + 0xc);  // (from the original)
    tpc = *gptr<u32>(r13 + 0x10);  // (from the original)
    r13 = r13 + 0x14;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[4] = r4;
    guest::cpu()->r[5] = r5;
    guest::cpu()->r[6] = r6;
    guest::cpu()->r[7] = r7;
    guest::cpu()->r[13] = r13;
    return r0;
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
GUEST_OFFSET(Object_00312008_0, byte_10, 0x10);  // (from the original)
GUEST_OFFSET(Object_00312008_0, word_14, 0x14);  // (from the original)
GUEST_OFFSET(Object_00312008_0, byte_18, 0x18);  // (from the original)


void f_00312008(gptr<Object_00312008_0> arg0, u32 r1) {
    u32 r2 = 0;
    r2 = 0u;
    arg0->byte_10 = u8(r1);
    arg0->word_14 = u32(r2);
    arg0->byte_18 = u8(r2);
    return;
}

}  // namespace d_00312008
GUEST_EXPORT(0x00312008, d_00312008::f_00312008);

// f_003120a8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_003120a8 {

inline constexpr guest::Function<0x002f76ad, u32(u32, u32, u32, u32)> call_002f76ac;  // (from the original)
inline constexpr guest::Function<0x002f777c, u32(u32, u32, u32, u32)> call_002f777c;  // (from the original)
inline constexpr guest::Function<0x002fc8e8, u32(u32, u32, u32, u32)> call_002fc8e8;  // (from the original)
inline constexpr guest::Function<0x002fcaf4, u32(u32, u32, u32, u32)> call_002fcaf4;  // (from the original)
inline constexpr guest::Function<0x00301d0d, u32(u32, u32, u32, u32)> call_00301d0c;  // (from the original)
inline constexpr guest::Function<0x003107d5, u32(u32, u32, u32, u32)> call_003107d4;  // (from the original)

u32 f_003120a8(u32 r0, u32 r1, u32 r2) {
    u32 r3 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r13 = guest::cpu()->r[13];
    r3 = 0x24d6u;  // (from the original)
    r4 = r0;
    r5 = r3 + 4u;
    r13 = r13 - 0x38u;  // (from the original)
    r6 = r5 + 4u;
    *gptr<u32>(r13 + 0x14u) = u32(r4 + r3);  // (from the original)
    *gptr<u32>(r13 + 0x18u) = u32(r4 + r5);  // (from the original)
    r3 = r4 + r6;
    r0 = r4 + (r6 + 4u);
    *gptr<u32>(r13 + 0x1cu) = u32(r3);  // (from the original)
    *gptr<u32>(r13 + 0x20u) = u32(r0);  // (from the original)
    if (r1 != 0) {
        if (r1 == 1u) {
            goto L_3120de;
        }
        if (r1 == 2u) {
            goto L_3120e4;
        }
        if (r1 != 3u) {
            goto L_3120f0;
        }
        goto L_3120ea;
    }
    r0 = *gptr<u32>(r13 + 0x14u);  // (from the original)
    r1 = r2;
    goto L_3120ec;
L_3120de:;
    r0 = *gptr<u32>(r13 + 0x18u);  // (from the original)
    r1 = r2;
    goto L_3120ec;
L_3120e4:;
    r1 = r2;
    r0 = r3;
    goto L_3120ec;
L_3120ea:;
    r1 = r2;
L_3120ec:;
    guest::cpu()->r[13] = r13;
    r0 = call_002fc8e8(r0, r1, r2, r3);
L_3120f0:;
    r3 = 4u;
    r1 = 0x2fc20cu;  // (from the original)
    r2 = r3;
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_00301d0c(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r7 = 0u;
    r5 = r7;
    r6 = r13;
    do {
L_312102:;
        r1 = 0x95bfdcu;  // (from the original)
        r0 = (r5 << 2) + r6;
        guest::cpu()->r[13] = r13;
        r0 = call_002fc8e8(r0, r1, r2, r3);
        r3 = guest::cpu()->r[3];
        r2 = r5;
        r1 = r4;
        r0 = r13 + 0x10u;  // (from the original)
        guest::cpu()->r[13] = r13;
        r0 = call_003107d4(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r0 = r13 + 0x10u;  // (from the original)
        guest::cpu()->r[13] = r13;
        r0 = call_002fcaf4(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        if (!(r0 != 0)) {
            r0 = (r7 << 2) + r6;
            r1 = r13 + 0x10u;  // (from the original)
            guest::cpu()->r[13] = r13;
            r0 = call_002fc8e8(r0, r1, r2, r3);
            r1 = guest::cpu()->r[1];
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
            r7 = r7 + 1u;
        }
        r0 = r13 + 0x10u;  // (from the original)
        guest::cpu()->r[13] = r13;
        r0 = call_002f777c(r0, r1, r2, r3);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r5 = r5 + 1u;
        guest::preempt();
    } while (s32(r5) < s32(4u));
    r0 = *gptr<u32>(r13 + 0x14u);  // (from the original)
    r1 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_002fc8e8(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = *gptr<u32>(r13 + 0x18u);  // (from the original)
    r1 = r6 + 4u;
    guest::cpu()->r[13] = r13;
    r0 = call_002fc8e8(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = *gptr<u32>(r13 + 0x1cu);  // (from the original)
    r1 = r13 + 8u;
    guest::cpu()->r[13] = r13;
    r0 = call_002fc8e8(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = *gptr<u32>(r13 + 0x20u);  // (from the original)
    r1 = r13 + 0xcu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002fc8e8(r0, r1, r2, r3);
    r3 = 4u;
    r1 = 0x2f777cu;  // (from the original)
    r2 = r3;
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_002f76ac(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r13 = r13 + 0x38u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_003120a8
GUEST_EXPORT(0x003120a9, d_003120a8::f_003120a8);

// f_00312178: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00312178 {

inline constexpr guest::Function<0x002fc8e8, u32(u32, u32, u32, u32)> call_002fc8e8;  // (from the original)

u32 f_00312178(u32 r0) {
    r0 = r0 + 0x24eau;  // (from the original)
    return call_002fc8e8(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_00312178
GUEST_EXPORT(0x00312178, d_00312178::f_00312178);

// f_00312184: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00312184 {

inline constexpr guest::Function<0x002fc8e8, u32(u32, u32, u32, u32)> call_002fc8e8;  // (from the original)

u32 f_00312184(u32 r0) {
    r0 = r0 + 0x24e6u;  // (from the original)
    return call_002fc8e8(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_00312184
GUEST_EXPORT(0x00312184, d_00312184::f_00312184);

// f_00312190: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00312190 {

struct __attribute__((packed)) Object_00312190_1 {
    u8 unknown_0[0x3121a0];  // (not used here)
    u8 byte_3121a0;
};
GUEST_OFFSET(Object_00312190_1, byte_3121a0, 0x3121a0);  // (from the original)

inline constexpr guest::Function<0x002fc8e8, u32(u32, u32, u32, u32)> call_002fc8e8;  // (from the original)

u32 f_00312190(u32 r0, gptr<Object_00312190_1> arg1, u32 r2) {
    u32 r1 = arg1.addr();
    u32 r3 = 0;
    u32 tpc = 0;
    guest::cpu()->r[13] -= 8u;
    if (r1 >= 0xau) {  // (from the original)
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r3 = arg1->byte_3121a0;
    r3 = r3 + r3;
    tpc = 0x3121a2u + r3 | 1;  // (from the original)
    switch (tpc) {
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
    return guest::call_address<u32>(tpc, r0, r1, r2, r3);
L_3121aa:;
    r1 = r2;
    r2 = 0x24aeu;  // (from the original)
    r0 = r0 + r2;
    r0 = call_002fc8e8(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1;
    return r0;
L_3121b6:;
    r1 = r2;
    r2 = 0x24b2u;  // (from the original)
    r0 = r0 + r2;
    r0 = call_002fc8e8(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1;
    return r0;
L_3121c2:;
    r1 = r2;
    r2 = 0x24b6u;  // (from the original)
    r0 = r0 + r2;
    r0 = call_002fc8e8(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1;
    return r0;
L_3121ce:;
    r1 = r2;
    r2 = 0x24bau;  // (from the original)
    r0 = r0 + r2;
    r0 = call_002fc8e8(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1;
    return r0;
L_3121da:;
    r1 = r2;
    r2 = 0x24beu;  // (from the original)
    r0 = r0 + r2;
    r0 = call_002fc8e8(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1;
    return r0;
L_3121e6:;
    r1 = r2;
    r2 = 0x24c2u;  // (from the original)
    r0 = r0 + r2;
    r0 = call_002fc8e8(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1;
    return r0;
L_3121f2:;
    r1 = r2;
    r2 = 0x24c6u;  // (from the original)
    r0 = r0 + r2;
    r0 = call_002fc8e8(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1;
    return r0;
L_3121fe:;
    r1 = r2;
    r2 = 0x24cau;  // (from the original)
    r0 = r0 + r2;
    r0 = call_002fc8e8(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1;
    return r0;
L_31220a:;
    r1 = r2;
    r2 = 0x24ceu;  // (from the original)
    r0 = r0 + r2;
    r0 = call_002fc8e8(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1;
    return r0;
L_312216:;
    r1 = r2;
    r2 = 0x24d2u;  // (from the original)
    r0 = r0 + r2;
    r0 = call_002fc8e8(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_00312190
GUEST_EXPORT(0x00312191, d_00312190::f_00312190);

// f_00312274: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00312274 {

inline constexpr guest::Function<0x00300904, u32(u32, u32, u32, u32)> call_00300904;  // (from the original)
inline constexpr guest::Function<0x006249b0, u32(u32, u32, u32, u32)> call_006249b0;  // (from the original)

u32 f_00312274(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 0x18u;  // (from the original)
    r5 = r0;
    r4 = r1;
    guest::cpu()->r[13] = r13;
    r0 = call_00300904(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    if (r0 == 0) {
        r13 = r13 + 0x18u;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    *gptr<u8>(r13) = u8(0x11u);  // (from the original)
    r3 = 5u;
    r2 = r13;
    *gptr<u32>(r13 + 1u) = u32(*gptr<u32>(r4));
    r1 = r5;
    r0 = 0x41u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_006249b0(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r13 = r13 + 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_00312274
GUEST_EXPORT(0x00312274, d_00312274::f_00312274);

// f_003122bc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_003122bc {

inline constexpr guest::Function<0x00301e64, u32(u32, u32, u32, u32)> call_00301e64;  // (from the original)
inline constexpr guest::Function<0x00301e6c, u32(u32, u32, u32, u32)> call_00301e6c;  // (from the original)
inline constexpr guest::Function<0x003083bc, u32(u32, u32, u32, u32)> call_003083bc;  // (from the original)
inline constexpr guest::Function<0x003083d4, u32(u32, u32, u32, u32)> call_003083d4;  // (from the original)
inline constexpr guest::Function<0x003083e4, u32(u32, u32, u32, u32)> call_003083e4;  // (from the original)
inline constexpr guest::Function<0x00308450, u32(u32, u32, u32, u32)> call_00308450;  // (from the original)
inline constexpr guest::Function<0x0030846c, u32(u32, u32, u32, u32)> call_0030846c;  // (from the original)
inline constexpr guest::Function<0x003084c8, u32(u32, u32, u32, u32)> call_003084c8;  // (from the original)
inline constexpr guest::Function<0x003084cc, u32(u32, u32, u32, u32)> call_003084cc;  // (from the original)
inline constexpr guest::Function<0x00312a40, u32(u32, u32, u32, u32)> call_00312a40;  // (from the original)
inline constexpr guest::Function<0x00312a4c, u32(u32, u32, u32, u32)> call_00312a4c;  // (from the original)

u32 f_003122bc(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 0x40u;  // (from the original)
    r5 = r0;
    guest::cpu()->r[13] = r13;
    r0 = call_00301e64(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = r0;
    r0 = 0xa83aecu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00301e6c(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    r6 = 0x95debcu;  // (from the original)
    r4 = r0;
    if (r0 != 0) {
        r2 = 0xbu;  // (from the original)
        r1 = r13 + 0x18u;  // (from the original)
        r0 = r13;
        guest::cpu()->r[13] = r13;
        r0 = call_003083bc(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r0 = r4;
        guest::cpu()->r[13] = r13;
        r0 = call_003083d4(r0, r1, r2, r3);
        r3 = r0;
        r0 = *gptr<u32>(r6);
        r2 = 0x312368u;  // (from the original)
        r1 = r13;
        guest::cpu()->r[13] = r13;
        r0 = call_003083e4(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        if (r0 != 0) {
            r0 = r5;
            guest::cpu()->r[13] = r13;
            r0 = call_00312a40(r0, r1, r2, r3);
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
            r1 = r0;
            r0 = r13 + 0xcu;  // (from the original)
            guest::cpu()->r[13] = r13;
            r0 = call_00308450(r0, r1, r2, r3);
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
            r1 = r13;
            r0 = r13 + 0xcu;  // (from the original)
            guest::cpu()->r[13] = r13;
            r0 = call_0030846c(r0, r1, r2, r3);
            r1 = guest::cpu()->r[1];
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
            r0 = r13 + 0xcu;  // (from the original)
            guest::cpu()->r[13] = r13;
            r0 = call_003084c8(r0, r1, r2, r3);
            r1 = guest::cpu()->r[1];
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
            r0 = r13;
            guest::cpu()->r[13] = r13;
            r0 = call_003084cc(r0, r1, r2, r3);
            r1 = guest::cpu()->r[1];
            r13 = r13 + 0x40u;  // (from the original)
            guest::cpu()->r[1] = r1;
            guest::cpu()->r[13] = r13;
            return r0;
        }
        r0 = r13;
        guest::cpu()->r[13] = r13;
        r0 = call_003084cc(r0, r1, r2, r3);
        r3 = guest::cpu()->r[3];
    }
    r2 = 0xbu;  // (from the original)
    r1 = r13 + 0x18u;  // (from the original)
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_003083bc(r0, r1, r2, r3);
    r2 = 0x88eed0u;  // (from the original)
    r0 = *gptr<u32>(r6);
    r3 = 0x27u;  // (from the original)
    r1 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_00312a4c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 != 0) {
        r0 = r5;
        guest::cpu()->r[13] = r13;
        r0 = call_00312a40(r0, r1, r2, r3);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r1 = r0;
        r0 = r13 + 0xcu;  // (from the original)
        guest::cpu()->r[13] = r13;
        r0 = call_00308450(r0, r1, r2, r3);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r1 = r13;
        r0 = r13 + 0xcu;  // (from the original)
        guest::cpu()->r[13] = r13;
        r0 = call_0030846c(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r0 = r13 + 0xcu;  // (from the original)
        guest::cpu()->r[13] = r13;
        r0 = call_003084c8(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
    }
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_003084cc(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r13 = r13 + 0x40u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_003122bc
GUEST_EXPORT(0x003122bd, d_003122bc::f_003122bc);

// f_0031237c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0031237c {

inline constexpr guest::Function<0x002f777c, u32(u32, u32, u32, u32)> call_002f777c;  // (from the original)
inline constexpr guest::Function<0x002fc8e8, u32(u32, u32, u32, u32)> call_002fc8e8;  // (from the original)
inline constexpr guest::Function<0x002fcbb0, u32(u32, u32, u32, u32)> call_002fcbb0;  // (from the original)
inline constexpr guest::Function<0x003059f8, u32(u32, u32, u32, u32)> call_003059f8;  // (from the original)
inline constexpr guest::Function<0x0030e228, u32(u32, u32, u32, u32)> call_0030e228;  // (from the original)
inline constexpr guest::Function<0x0030f588, u32(u32, u32, u32, u32)> call_0030f588;  // (from the original)
inline constexpr guest::Function<0x0030f594, u32(u32, u32, u32, u32)> call_0030f594;  // (from the original)
inline constexpr guest::Function<0x00311744, u32(u32, u32, u32, u32)> call_00311744;  // (from the original)
inline constexpr guest::Function<0x00312b20, u32(u32, u32, u32, u32)> call_00312b20;  // (from the original)

u32 f_0031237c(u32 r0, u32 r1) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r13 = guest::cpu()->r[13];
    r4 = r0;
    r0 = r0 + 0x30u;  // (from the original)
    r13 = r13 - 0x20u;  // (from the original)
    r5 = r0;
    guest::cpu()->r[13] = r13;
    r0 = call_003059f8(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = r4;
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_0030f588(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_0030f594(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r6 = r0;
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_002f777c(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r6 == 0) {
        goto L_3123b8;
    }
    r1 = *gptr<u16>(r4 + 0x2cu);  // (from the original)
    r0 = 0xa8349cu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00311744(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = r0;
    if (r0 == 0) {
        goto L_3123bc;
    }
    r0 = r4 + 0x249au;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002fc8e8(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
L_3123b8:;
    r13 = r13 + 0x20u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
L_3123bc:;
    r0 = r5;
    guest::cpu()->r[13] = r13;
    r0 = call_003059f8(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = r4;
    r0 = r13 + 4u;
    guest::cpu()->r[13] = r13;
    r0 = call_0030f588(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r0 = r13 + 4u;
    guest::cpu()->r[13] = r13;
    r0 = call_0030f594(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r5 = r0;
    r0 = r13 + 4u;
    guest::cpu()->r[13] = r13;
    r0 = call_002f777c(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r5 == 0) {
        guest::preempt();
        goto L_3123b8;
    }
    r0 = r4;
    guest::cpu()->r[13] = r13;
    r0 = call_0030e228(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    if (r0 != 0) {
        r0 = r13 + 8u;
        r1 = 0x4bu << 7;  // (from the original)
        guest::cpu()->r[13] = r13;
        r0 = call_002fcbb0(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1 = r0;
        r0 = r4;
        guest::cpu()->r[13] = r13;
        r0 = call_00312b20(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        r0 = r13 + 8u;
        guest::cpu()->r[13] = r13;
        r0 = call_002f777c(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        r13 = r13 + 0x20u;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    r1 = 0x2581u;  // (from the original)
    r0 = r13 + 8u;
    guest::cpu()->r[13] = r13;
    r0 = call_002fcbb0(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = r0;
    r0 = r4;
    guest::cpu()->r[13] = r13;
    r0 = call_00312b20(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r0 = r13 + 8u;
    guest::cpu()->r[13] = r13;
    r0 = call_002f777c(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r13 = r13 + 0x20u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_0031237c
GUEST_EXPORT(0x0031237d, d_0031237c::f_0031237c);

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
GUEST_OFFSET(Object_00312434_0, byte_5700, 0x5700);  // (from the original)
GUEST_OFFSET(Object_00312434_0, byte_570e, 0x570e);  // (from the original)
GUEST_OFFSET(Object_00312434_0, byte_5719, 0x5719);  // (from the original)
GUEST_OFFSET(Object_00312434_0, byte_571a, 0x571a);  // (from the original)
GUEST_OFFSET(Object_00312434_0, byte_571b, 0x571b);  // (from the original)


u32 f_00312434(gptr<Object_00312434_0> arg0, u32 r1, u32 r2) {
    u32 res = 0;
    u32 r0 = arg0.addr();
    u32 r3 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 zf = 0;
    u32 cf = 0;
    r0 = r0 + 0x5700u;  // (from the original)
    guest::cpu()->r[13] -= 8u;
    res = u32(arg0->byte_5700) << 0x1b;  // (from the original)
    if (!(res >> 0x1f)) {  // (from the original)
        goto L_3124d4;
    }
    res = r1;
    if (u32(res == 0) || res >> 0x1f != (r1 & (r1 ^ res)) >> 0x1f) {  // (from the original)
        goto L_3124d4;
    }
    if (u32(arg0->byte_570e) & 8u) {
        goto L_3124d4;
    }
    r3 = u32(arg0->byte_571a);
    res = u32(arg0->byte_5719) >> 7;
    r1 = r1 + ((r3 >> 1) + ((u32(arg0->byte_571b) & 7u) << 7));
    if (res == 0) {
        goto L_3124bc;
    }
    if (r2 != 0) {
        r1 = r1 + 2u;
    }
L_312488:;
    if (u32(r1 >= 0x64u) && !u32(r1 == 0x64u)) {  // (from the original)
        r1 = 0x64u;  // (from the original)
    }
L_312490:;
    r4 = r1 & 0x380u;  // (from the original)
    r1 = r3 & ~0xfeu | r1 << 1;  // (from the original)
    r2 = u32(*gptr<u8>(r0 + 0x1bu)) & ~7u | r4 >> 7;  // (from the original)
    *gptr<u8>(r0 + 0x1au) = u8(r1);  // (from the original)
    *gptr<u8>(r0 + 0x1bu) = u8(r2);  // (from the original)
    guest::cpu()->r[13] += 8u;
    r0 = 1u;
    guest::cpu()->r[1] = r1;
    return r0;
L_3124bc:;
    if (r2 == 0) {
        goto L_3124d4;
    }
    zf = r1 == 0x32u;  // (from the original)
    cf = r1 >= 0x32u;  // (from the original)
    if (cf && !zf) {
        r1 = 0x32u;  // (from the original)
    }
    if (!cf || zf) {
        guest::preempt();
        goto L_312488;
    }
    guest::preempt();
    goto L_312490;
L_3124d4:;
    guest::cpu()->r[13] += 8u;
    r0 = 0u;
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_00312434
GUEST_EXPORT(0x00312434, d_00312434::f_00312434);

// f_00312ab8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00312ab8 {

inline constexpr guest::Function<0x0030a488, u32(u32, u32, u32, u32)> call_0030a488;  // (from the original)

u32 f_00312ab8(u32 r0_unused, u32 r1_unused, u32 r2_unused, u32 r3) {
    u32 r13 = guest::cpu()->r[13];
    *gptr<u32>(r13 + 0xfffffff8u) = u32(r3);  // (from the original)
    r13 = r13 - 8;
    *gptr<u32>(r13) = u32(*gptr<u32>(r13 + 8u));
    guest::cpu()->r[13] = r13;
    call_0030a488(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], r3);
    r13 = r13 + 8;
    guest::cpu()->r[13] = r13;
    return guest::cpu()->r[0];
}

}  // namespace d_00312ab8
GUEST_EXPORT(0x00312ab8, d_00312ab8::f_00312ab8);

// f_00312acc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00312acc {

inline constexpr guest::Function<0x005cddb4, u32(u32, u32, u32, u32)> call_005cddb4;  // (from the original)

u32 f_00312acc(u32 r0) {
    u32 r4 = guest::cpu()->r[4];
    guest::cpu()->r[13] -= 8u;
    r4 = r0;
    r0 = call_005cddb4(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    r0 = r4;
    guest::cpu()->r[13] += 8u;
    return r0;
}

}  // namespace d_00312acc
GUEST_EXPORT(0x00312acc, d_00312acc::f_00312acc);

// f_00312ae0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00312ae0 {

struct __attribute__((packed)) Object_00312ae0_0 {
    u8 unknown_0[0x2510];  // (not used here)
    u32 word_2510;
};
GUEST_OFFSET(Object_00312ae0_0, word_2510, 0x2510);  // (from the original)


u32 f_00312ae0(gptr<Object_00312ae0_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r1 = 0;
    r0 = r0 + 0x2510u;  // (from the original)
    r1 = arg0->word_2510 | 0x100u;  // (from the original)
    arg0->word_2510 = u32(r1);
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_00312ae0
GUEST_EXPORT(0x00312ae0, d_00312ae0::f_00312ae0);

// f_00312af8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00312af8 {

inline constexpr guest::Function<0x0030e430, u32(u32, u32, u32, u32)> call_0030e430;  // (from the original)

u32 f_00312af8(u32 r0) {
    u32 res = 0;
    u32 r1 = 0;
    u32 r2 = 0;
    res = 0x25u;  // (from the original)
    guest::cpu()->r[13] -= 8u;
    r1 = *gptr<u32>(r0 + (res << 8) + 0x10u);  // (from the original)
    res = r1 << 0x1e >> 0x1f;  // (from the original)
    r2 = res;
    if (res != 0) {
        res = r1 << 0x1f >> 0x1f;  // (from the original)
        r1 = res;
        if (res == 0) {
            r0 = 0u;
            guest::cpu()->r[13] += 8u;
            guest::cpu()->r[1] = r1;
            return r0;
        }
    }
    r0 = call_0030e430(r0, r1, r2, guest::cpu()->r[3]);
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

}  // namespace d_00312af8
GUEST_EXPORT(0x00312af9, d_00312af8::f_00312af8);

// f_00312b20: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00312b20 {

inline constexpr guest::Function<0x002fc8e8, u32(u32, u32, u32, u32)> call_002fc8e8;  // (from the original)

u32 f_00312b20(u32 r0) {
    r0 = r0 + 0x249au;  // (from the original)
    return call_002fc8e8(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_00312b20
GUEST_EXPORT(0x00312b20, d_00312b20::f_00312b20);

// f_00313414: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00313414 {

inline constexpr guest::Function<0x005cdf48, u32(u32, u32, u32, u32)> call_005cdf48;  // (from the original)

u32 f_00313414(u32 r0) {
    u32 r2 = 0;
    u32 r3 = 0;
    u32 r4 = guest::cpu()->r[4];
    guest::cpu()->r[13] -= 8u;
    r4 = r0;
    r2 = ~0u;
    r3 = ~0x80000000u;  // (from the original)
    r0 = call_005cdf48(r0, guest::cpu()->r[1], r2, r3);
    r0 = r4;
    guest::cpu()->r[13] += 8u;
    return r0;
}

}  // namespace d_00313414
GUEST_EXPORT(0x00313414, d_00313414::f_00313414);

// f_00313a40: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00313a40 {


u32 f_00313a40(u32 r0) {
    u32 res = 0;
    u32 r1 = 0;
    u32 r2 = 0;
    u32 zf = 0;
    u32 cf = 0;
    r1 = *gptr<u32>(0xa83af0u);  // (from the original)
    zf = r1 == 0;
    cf = r1 >= 0u;
    if (!zf) {
        r2 = 0x18fu;  // (from the original)
        zf = r2 == r0;
        cf = r2 >= r0;
    }
    if (!cf || zf) {
        r0 = 0u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    res = r1 + (r0 + (r0 << 4) << 1);
    r0 = res;
    if (res == 0) {
        r0 = 0u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    if ((u32(*gptr<u8>(r0 + 0x1cu)) & 0xfu) == 0) {  // (from the original)
        r0 = 1u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r0 = 0u;
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_00313a40
GUEST_EXPORT(0x00313a40, d_00313a40::f_00313a40);

// f_00313a8c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00313a8c {


u32 f_00313a8c() {
    u32 r0 = 0;
    r0 = 0xab7f30u;  // (from the original)
    return r0;
}

}  // namespace d_00313a8c
GUEST_EXPORT(0x00313a8d, d_00313a8c::f_00313a8c);

// f_00313acc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00313acc {

inline constexpr guest::Function<0x002f825c, u32(u32, u32, u32, u32)> call_002f825c;  // (from the original)
inline constexpr guest::Function<0x00300914, u32(u32, u32, u32, u32)> call_00300914;  // (from the original)
inline constexpr guest::Function<0x00300924, u32(u32, u32, u32, u32)> call_00300924;  // (from the original)
inline constexpr guest::Function<0x00300a64, u32(u32, u32, u32, u32)> call_00300a64;  // (from the original)
inline constexpr guest::Function<0x003083bc, u32(u32, u32, u32, u32)> call_003083bc;  // (from the original)
inline constexpr guest::Function<0x00312bd0, u32(u32, u32, u32, u32)> call_00312bd0;  // (from the original)
inline constexpr guest::Function<0x00312c4c, u32(u32, u32, u32, u32)> call_00312c4c;  // (from the original)
inline constexpr guest::Function<0x00312ca0, u32(u32, u32, u32, u32)> call_00312ca0;  // (from the original)
inline constexpr guest::Function<0x00312cb0, u32(u32, u32, u32, u32)> call_00312cb0;  // (from the original)
inline constexpr guest::Function<0x00568a80, u32(u32, u32, u32, u32)> call_00568a80;  // (from the original)
inline constexpr guest::Function<0x0056d374, u32(u32, u32, u32, u32)> call_0056d374;  // (from the original)
inline constexpr guest::Function<0x0056d488, u32(u32, u32, u32, u32)> call_0056d488;  // (from the original)
inline constexpr guest::Function<0x0056e04c, u32(u32, u32, u32, u32)> call_0056e04c;  // (from the original)
inline constexpr guest::Function<0x005e2c98, u32(u32, u32, u32, u32)> call_005e2c98;  // (from the original)
inline constexpr guest::Function<0x005e2eb4, u32(u32, u32, u32, u32)> call_005e2eb4;  // (from the original)
inline constexpr guest::Function<0x005ea8dc, u32(u32, u32, u32, u32)> call_005ea8dc;  // (from the original)
inline constexpr guest::Function<0x005ea8f8, u32(u32, u32, u32, u32)> call_005ea8f8;  // (from the original)
inline constexpr guest::Function<0x005ea964, u32(u32, u32, u32, u32)> call_005ea964;  // (from the original)
inline constexpr guest::Function<0x005f11f4, u32(u32, u32, u32, u32)> call_005f11f4;  // (from the original)
inline constexpr guest::Function<0x005f1224, u32(u32, u32, u32, u32)> call_005f1224;  // (from the original)
inline constexpr guest::Function<0x005f12f4, u32(u32, u32, u32, u32)> call_005f12f4;  // (from the original)
inline constexpr guest::Function<0x005f4bfc, u32(u32, u32, u32, u32)> call_005f4bfc;  // (from the original)
inline constexpr guest::Function<0x0070eebc, u32(u32, u32, u32, u32)> call_0070eebc;  // (from the original)

u32 f_00313acc(u32 r0, u32 r1_unused, u32 r2, u32 r3) {
    u32 ea = 0;
    u32 res = 0;
    u32 r1 = 0;
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
    u32 zf = 0;
    u32 vf = 0;
    r13 = r13 - 0x24;  // (from the original)
    r13 = r13 - 0x2acu;  // (from the original)
    r5 = r0;
    r4 = 0u;
    r8 = 0x94feccu;  // (from the original)
    do {
L_313ae0:;
        r0 = r4 + (r4 << 4);
        r0 = r0 + (r0 << 1);
        r1 = *gptr<u32>(r8 + (r4 << 2));
        r0 = r5 + (r0 << 2);
        r6 = r0 + 0x400u;  // (from the original)
        r6 = r6 + 0xd4u;  // (from the original)
        r0 = r5 + 0x4cu;  // (from the original)
        guest::cpu()->r[13] = r13;
        r0 = call_00568a80(r0, r1, r2, r3);
        r3 = guest::cpu()->r[3];
        r7 = r0;
        r1 = r0;
        r2 = 0u;
        r0 = r6;
        guest::cpu()->r[13] = r13;
        r0 = call_005e2c98(r0, r1, r2, r3);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        ea = r7 + 0xe4u;  // (from the original)
        r0 = *gptr<u32>(ea);
        r1 = *gptr<u32>(ea + 4);
        r4 = r4 + 1u;
        res = r4 - 5u;
        nf = res >> 0x1f;  // (from the original)
        vf = ((r4 ^ 5u) & (r4 ^ res)) >> 0x1f;  // (from the original)
        ea = r6 + 0xc4u;  // (from the original)
        *gptr<u32>(ea) = u32(r0);
        *gptr<u32>(ea + 4) = u32(r1);
        guest::preempt();
    } while (nf != vf);
    r0 = r13 + 0x168u;  // (from the original)
    r2 = 0x10u;  // (from the original)
    r1 = r13 + 0x180u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_003083bc(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = 0x909b28u;  // (from the original)
    *gptr<u32>(r13 + 0x298u) = u32(r1);  // (from the original)
    *gptr<u32>(r0) = u32(r1);
    r0 = r0 + 0xcu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_005f4bfc(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0xcu;  // (from the original)
    r4 = 0u;
    *gptr<u32>(r0 + 0x18u) = u32(r4);  // (from the original)
    *gptr<u32>(r0 + 0x1cu) = u32(r4);  // (from the original)
    *gptr<u32>(r0 + 0x20u) = u32(r4);  // (from the original)
    *gptr<u32>(r0 + 0x24u) = u32(r4);  // (from the original)
    *gptr<u32>(r0 + 0x28u) = u32(r4);  // (from the original)
    *gptr<u32>(r0 + 0x2cu) = u32(r4);  // (from the original)
    r9 = 0x8906ecu;  // (from the original)
    *gptr<u32>(r0 + 0x30u) = u32(r4);  // (from the original)
    *gptr<u32>(r0 + 0x34u) = u32(r4);  // (from the original)
    r1 = 8u;
    r0 = r0 + 0x16u;  // (from the original)
    do {
L_313b7c:;
        ea = r9;
        r2 = u32(*gptr<u16>(ea));
        res = r1 - 1u;
        zf = res == 0;
        r1 = res;
        ea = r0 + 2u;
        *gptr<u16>(ea) = u16(r2);
        ea = r9;
        r2 = u32(*gptr<u16>(ea));
        ea = r0 + 4u;
        *gptr<u16>(ea) = u16(r2);
        r0 = ea;
        guest::preempt();
    } while (!zf);
    r10 = 0x95deccu;  // (from the original)
    r1 = 0u;
    r0 = *gptr<u32>(r10);
    guest::cpu()->r[13] = r13;
    r0 = call_005ea8f8(r0, r1, r2, r3);
    *gptr<u32>(r13) = u32(r4);
    r0 = *gptr<u32>(r10);
    r11 = r4;
    r3 = 0xe9u;  // (from the original)
    r2 = 0x313f48u;  // (from the original)
    r1 = r13 + 0x168u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_005ea964(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = *gptr<u32>(r10);
    r1 = 0u;
    guest::cpu()->r[13] = r13;
    r0 = call_005ea8dc(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r5 + 0x400u;  // (from the original)
    r1 = r13 + 0x168u;  // (from the original)
    r0 = r0 + 0xd4u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_005e2eb4(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    r0 = r13 + 0x1a0u;  // (from the original)
    r2 = 9u;
    r1 = r13 + 0x1b8u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_003083bc(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r8 = 0x90a3e8u;  // (from the original)
    *gptr<u32>(r0) = u32(r8);
    r0 = r0 + 0xcu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_005f4bfc(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r4 = r0 - 0xcu;  // (from the original)
    r1 = 0x12u;  // (from the original)
    r0 = r0 + 0xcu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002f825c(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    r1 = u32(*gptr<u16>(r9));
    r0 = r4 + 0x18u;  // (from the original)
    *gptr<u16>(r4 + 0x18u) = u16(r1);  // (from the original)
    r1 = 4u;
    do {
L_313c18:;
        ea = r9;
        r2 = u32(*gptr<u16>(ea));
        res = r1 - 1u;
        zf = res == 0;
        r1 = res;
        ea = r0 + 2u;
        *gptr<u16>(ea) = u16(r2);
        ea = r9;
        r2 = u32(*gptr<u16>(ea));
        ea = r0 + 4u;
        *gptr<u16>(ea) = u16(r2);
        r0 = ea;
        guest::preempt();
    } while (!zf);
    r4 = r5 + 0x1800u;  // (from the original)
    r4 = r4 + 0x84u;  // (from the original)
    r0 = *gptr<u32>(r4);
    r1 = r0 + 0x5400u;  // (from the original)
    r1 = r1 + 0x1bcu;  // (from the original)
    r0 = r13 + 0x1a0u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0056e04c(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    r0 = r13 + 0xe8u;  // (from the original)
    r2 = 0x13u;  // (from the original)
    r1 = r13 + 0x100u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_003083bc(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r7 = 0x909c78u;  // (from the original)
    *gptr<u32>(r0) = u32(r7);
    r0 = r0 + 0xcu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_005f4bfc(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r6 = r0 - 0xcu;  // (from the original)
    r1 = 0x26u;  // (from the original)
    r0 = r0 + 0xcu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002f825c(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    r1 = u32(*gptr<u16>(r9));
    r0 = r6 + 0x18u;  // (from the original)
    *gptr<u16>(r6 + 0x18u) = u16(r1);  // (from the original)
    r1 = 9u;
    do {
L_313c88:;
        ea = r9;
        r2 = u32(*gptr<u16>(ea));
        res = r1 - 1u;
        zf = res == 0;
        r1 = res;
        ea = r0 + 2u;
        *gptr<u16>(ea) = u16(r2);
        ea = r9;
        r2 = u32(*gptr<u16>(ea));
        ea = r0 + 4u;
        *gptr<u16>(ea) = u16(r2);
        r0 = ea;
        guest::preempt();
    } while (!zf);
    r0 = *gptr<u32>(r10);
    r1 = 0u;
    guest::cpu()->r[13] = r13;
    r0 = call_005ea8f8(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    r0 = *gptr<u32>(r10);
    r0 = *gptr<u32>(r0 + 0x14u);  // (from the original)
    r2 = 0u;
    r1 = r13 + 0x1a0u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_005f12f4(r0, r1, r2, r3);
    *gptr<u32>(r13) = u32(r11);
    r0 = *gptr<u32>(r10);
    r3 = 0xeau;  // (from the original)
    r2 = 0x313f48u;  // (from the original)
    r1 = r13 + 0xe8u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_005ea964(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = *gptr<u32>(r10);
    r1 = 0u;
    guest::cpu()->r[13] = r13;
    r0 = call_005ea8dc(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = r13 + 0xe8u;  // (from the original)
    r0 = r5 + 0x5a0u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_005e2eb4(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    r1 = 4u;
    *gptr<u32>(r13 + 0x1f8u) = u32(r1);  // (from the original)
    r0 = r13 + 0x1ccu;  // (from the original)
    r2 = 9u;
    r1 = r13 + 0x1e4u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_003083bc(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    *gptr<u32>(r0) = u32(r8);
    r0 = r0 + 0xcu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_005f4bfc(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r6 = r0 - 0xcu;  // (from the original)
    r1 = 0x12u;  // (from the original)
    r0 = r0 + 0xcu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002f825c(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    r1 = u32(*gptr<u16>(r9));
    r0 = r6 + 0x18u;  // (from the original)
    *gptr<u16>(r6 + 0x18u) = u16(r1);  // (from the original)
    r1 = 4u;
    do {
L_313d38:;
        ea = r9;
        r2 = u32(*gptr<u16>(ea));
        res = r1 - 1u;
        zf = res == 0;
        r1 = res;
        ea = r0 + 2u;
        *gptr<u16>(ea) = u16(r2);
        ea = r9;
        r2 = u32(*gptr<u16>(ea));
        ea = r0 + 4u;
        *gptr<u16>(ea) = u16(r2);
        r0 = ea;
        guest::preempt();
    } while (!zf);
    r1 = *gptr<u32>(r13 + 0x1f8u);  // (from the original)
    r0 = r6;
    guest::cpu()->r[13] = r13;
    r0 = call_0056d374(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    r0 = *gptr<u32>(r4);
    r1 = r0 + 0x5500u;  // (from the original)
    r1 = r1 + 0xa6u;  // (from the original)
    r0 = r13 + 0x1ccu;  // (from the original)
    r2 = u32(*gptr<u8>(r1 + 0x14u));  // (from the original)
    r1 = r1 + 2u;
    r2 = r2 & 1u;
    guest::cpu()->r[13] = r13;
    r0 = call_0056d488(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    r0 = r13 + 0x128u;  // (from the original)
    r2 = 0x13u;  // (from the original)
    r1 = r13 + 0x140u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_003083bc(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    *gptr<u32>(r0) = u32(r7);
    r0 = r0 + 0xcu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_005f4bfc(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r6 = r0 - 0xcu;  // (from the original)
    r1 = 0x26u;  // (from the original)
    r0 = r0 + 0xcu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002f825c(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    r1 = u32(*gptr<u16>(r9));
    r0 = r6 + 0x18u;  // (from the original)
    *gptr<u16>(r6 + 0x18u) = u16(r1);  // (from the original)
    r1 = 9u;
    do {
L_313db8:;
        ea = r9;
        r2 = u32(*gptr<u16>(ea));
        res = r1 - 1u;
        zf = res == 0;
        r1 = res;
        ea = r0 + 2u;
        *gptr<u16>(ea) = u16(r2);
        ea = r9;
        r2 = u32(*gptr<u16>(ea));
        ea = r0 + 4u;
        *gptr<u16>(ea) = u16(r2);
        r0 = ea;
        guest::preempt();
    } while (!zf);
    r6 = 0x95deccu;  // (from the original)
    r1 = 0u;
    r0 = *gptr<u32>(r6);
    guest::cpu()->r[13] = r13;
    r0 = call_005ea8f8(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    r0 = *gptr<u32>(r6);
    r0 = *gptr<u32>(r0 + 0x14u);  // (from the original)
    r2 = 0u;
    r1 = r13 + 0x1ccu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00300a64(r0, r1, r2, r3);
    *gptr<u32>(r13) = u32(r11);
    r0 = *gptr<u32>(r6);
    r3 = 0xebu;  // (from the original)
    r2 = 0x313f48u;  // (from the original)
    r1 = r13 + 0x128u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_005ea964(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = *gptr<u32>(r6);
    r1 = 0u;
    guest::cpu()->r[13] = r13;
    r0 = call_005ea8dc(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r5 + 0x400u;  // (from the original)
    r1 = r13 + 0x128u;  // (from the original)
    r0 = r0 + 0x26cu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_005e2eb4(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r13 + 0x254u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00312bd0(r0, r1, r2, r3);
    r0 = *gptr<u32>(r4);
    r0 = r0 + 0x5400u;  // (from the original)
    r0 = r0 + 0x2c4u;  // (from the original)
    r0 = *gptr<u32>(r0);
    r2 = 4u;
    r3 = 0xau;  // (from the original)
    r1 = r0;
    *gptr<u32>(r13) = u32(r2);
    r2 = r3;
    r0 = r13 + 0x254u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00312c4c(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    r0 = r13 + 4u;
    r2 = 0x32u;  // (from the original)
    r1 = r13 + 0x1cu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_003083bc(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r11 = 0x90a148u;  // (from the original)
    *gptr<u32>(r0) = u32(r11);
    r0 = r0 + 0xcu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_005f4bfc(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r6 = r0 - 0xcu;  // (from the original)
    r1 = 0x64u;  // (from the original)
    r0 = r0 + 0xcu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002f825c(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    r0 = r6 + 0x16u;  // (from the original)
    r1 = 0x19u;  // (from the original)
    do {
L_313e98:;
        ea = r9;
        r2 = u32(*gptr<u16>(ea));
        res = r1 - 1u;
        zf = res == 0;
        r1 = res;
        ea = r0 + 2u;
        *gptr<u16>(ea) = u16(r2);
        ea = r9;
        r2 = u32(*gptr<u16>(ea));
        ea = r0 + 4u;
        *gptr<u16>(ea) = u16(r2);
        r0 = ea;
        guest::preempt();
    } while (!zf);
    r10 = 0x95deccu;  // (from the original)
    r1 = 0u;
    r0 = *gptr<u32>(r10);
    guest::cpu()->r[13] = r13;
    r0 = call_005ea8f8(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    r0 = *gptr<u32>(r10);
    r0 = *gptr<u32>(r0 + 0x14u);  // (from the original)
    r2 = 0u;
    r1 = r13 + 0x254u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00312ca0(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = *gptr<u32>(r4);
    r0 = r0 + 0x5400u;  // (from the original)
    r0 = r0 + 0x2c4u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0070eebc(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    zf = r0 == 0;
    if (zf) {
        goto L_3141e8;
    }
    r0 = r13 + 0x1f8u;  // (from the original)
    r2 = 0x1eu;  // (from the original)
    r1 = r13 + 0x210u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_003083bc(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r6 = 0x909ea8u;  // (from the original)
    *gptr<u32>(r0) = u32(r6);
    r0 = r0 + 0xcu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_005f4bfc(r0, r1, r2, r3);
    r0 = r0 - 0xcu;  // (from the original)
    r1 = 0u;
    *gptr<u32>(r0 + 0x18u) = u32(r1);  // (from the original)
    *gptr<u32>(r0 + 0x1cu) = u32(r1);  // (from the original)
    *gptr<u32>(r0 + 0x20u) = u32(r1);  // (from the original)
    *gptr<u32>(r0 + 0x24u) = u32(r1);  // (from the original)
    *gptr<u32>(r0 + 0x28u) = u32(r1);  // (from the original)
    *gptr<u32>(r0 + 0x2cu) = u32(r1);  // (from the original)
    *gptr<u32>(r0 + 0x30u) = u32(r1);  // (from the original)
    goto L_313f64;
L_313f64:;
    *gptr<u32>(r0 + 0x34u) = u32(r1);  // (from the original)
    *gptr<u32>(r0 + 0x38u) = u32(r1);  // (from the original)
    *gptr<u32>(r0 + 0x3cu) = u32(r1);  // (from the original)
    *gptr<u32>(r0 + 0x40u) = u32(r1);  // (from the original)
    *gptr<u32>(r0 + 0x44u) = u32(r1);  // (from the original)
    *gptr<u32>(r0 + 0x48u) = u32(r1);  // (from the original)
    *gptr<u32>(r0 + 0x4cu) = u32(r1);  // (from the original)
    *gptr<u32>(r0 + 0x50u) = u32(r1);  // (from the original)
    r0 = r0 + 0x16u;  // (from the original)
    r1 = 0xfu;  // (from the original)
    do {
L_313f8c:;
        ea = r9;
        r2 = u32(*gptr<u16>(ea));
        res = r1 - 1u;
        zf = res == 0;
        r1 = res;
        ea = r0 + 2u;
        *gptr<u16>(ea) = u16(r2);
        ea = r9;
        r2 = u32(*gptr<u16>(ea));
        ea = r0 + 4u;
        *gptr<u16>(ea) = u16(r2);
        r0 = ea;
        guest::preempt();
    } while (!zf);
    r0 = *gptr<u32>(r4);
    r0 = r0 + 0x5400u;  // (from the original)
    r0 = r0 + 0x2c4u;  // (from the original)
    r0 = u32(*gptr<u8>(r0 + 0x14u));  // (from the original)
    r4 = 0u;
    r3 = r0 + 0x21u;  // (from the original)
    *gptr<u32>(r13) = u32(r4);
    r0 = *gptr<u32>(r10);
    r2 = 0x314210u;  // (from the original)
    r1 = r13 + 0x1f8u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_005ea964(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    r0 = *gptr<u32>(r10);
    r0 = *gptr<u32>(r0 + 0x14u);  // (from the original)
    r2 = 0x11u;  // (from the original)
    r1 = r13 + 0x1f8u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_005f11f4(r0, r1, r2, r3);
    *gptr<u32>(r13) = u32(r4);
    r0 = *gptr<u32>(r10);
    r3 = 0x1b0u;  // (from the original)
    r2 = 0x313f48u;  // (from the original)
    r1 = r13 + 4u;
    guest::cpu()->r[13] = r13;
    r0 = call_005ea964(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    *gptr<u32>(r13 + 0x1f8u) = u32(r6);  // (from the original)
L_314018:;
    r0 = 0x95deccu;  // (from the original)
    r1 = 0u;
    r0 = *gptr<u32>(r0);
    guest::cpu()->r[13] = r13;
    r0 = call_005ea8dc(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r5 + 0x400u;  // (from the original)
    r1 = r13 + 4u;
    r0 = r0 + 0x338u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_005e2eb4(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    r0 = 0x1880u;  // (from the original)
    r2 = 0x28u;  // (from the original)
    r0 = *gptr<u32>(r0 + r5);
    r1 = r13 + 0x98u;  // (from the original)
    r0 = r0 + 0x7d00u;  // (from the original)
    r4 = *gptr<u32>(r0 + 0xccu);  // (from the original)
    r0 = r13 + 0x80u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_003083bc(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r10 = 0x90a030u;  // (from the original)
    *gptr<u32>(r0) = u32(r10);
    r0 = r0 + 0xcu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_005f4bfc(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r6 = r0 - 0xcu;  // (from the original)
    r1 = 0x50u;  // (from the original)
    r0 = r0 + 0xcu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002f825c(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    r1 = r6 + 0x16u;  // (from the original)
    r0 = 0x14u;  // (from the original)
    do {
L_31407c:;
        ea = r9;
        r2 = u32(*gptr<u16>(ea));
        res = r0 - 1u;
        zf = res == 0;
        r0 = res;
        ea = r1 + 2u;
        *gptr<u16>(ea) = u16(r2);
        ea = r9;
        r2 = u32(*gptr<u16>(ea));
        ea = r1 + 4u;
        *gptr<u16>(ea) = u16(r2);
        r1 = ea;
        guest::preempt();
    } while (!zf);
    r6 = 0x95deccu;  // (from the original)
    r1 = 0u;
    r0 = *gptr<u32>(r6);
    guest::cpu()->r[13] = r13;
    r0 = call_005ea8f8(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    r0 = *gptr<u32>(r6);
    r0 = *gptr<u32>(r0 + 0x14u);  // (from the original)
    r1 = uxth(r4);
    r2 = 0u;
    guest::cpu()->r[13] = r13;
    r0 = call_005f1224(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    r0 = *gptr<u32>(r6);
    r0 = *gptr<u32>(r0 + 0x14u);  // (from the original)
    r1 = r4 << 8;
    r2 = 0u;
    r1 = r1 >> 0x18;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00300914(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    r0 = *gptr<u32>(r6);
    r0 = *gptr<u32>(r0 + 0x14u);  // (from the original)
    r1 = r4 >> 0x18;  // (from the original)
    r2 = 0u;
    guest::cpu()->r[13] = r13;
    r0 = call_00300924(r0, r1, r2, r3);
    r0 = 0u;
    *gptr<u32>(r13) = u32(r0);
    r0 = *gptr<u32>(r6);
    r3 = 0xedu;  // (from the original)
    r2 = 0x313f48u;  // (from the original)
    r1 = r13 + 0x80u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_005ea964(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = *gptr<u32>(r6);
    r1 = 0u;
    guest::cpu()->r[13] = r13;
    r0 = call_005ea8dc(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r5 + 0x800u;  // (from the original)
    r1 = r13 + 0x80u;  // (from the original)
    r0 = r0 + 4u;
    guest::cpu()->r[13] = r13;
    r0 = call_005e2eb4(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    *gptr<u32>(r13 + 0x80u) = u32(r10);  // (from the original)
    *gptr<u32>(r13 + 4u) = u32(r11);
    r0 = r13 + 0x254u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00312cb0(r0, r1, r2, r3);
    *gptr<u32>(r13 + 0x128u) = u32(r7);  // (from the original)
    *gptr<u32>(r13 + 0x1ccu) = u32(r8);  // (from the original)
    *gptr<u32>(r13 + 0xe8u) = u32(r7);  // (from the original)
    *gptr<u32>(r13 + 0x1a0u) = u32(r8);  // (from the original)
    r1 = *gptr<u32>(r13 + 0x298u);  // (from the original)
    r0 = r13 + 0x174u;  // (from the original)
    *gptr<u32>(r13 + 0x168u) = u32(r1);  // (from the original)
    r0 = r0 - 0xcu;  // (from the original)
    r13 = r13 + 0x2acu;  // (from the original)
    r13 = r13 + 0x24;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
L_3141e8:;
    r0 = 0u;
    *gptr<u32>(r13) = u32(r0);
    r0 = *gptr<u32>(r10);
    r3 = 0xecu;  // (from the original)
    r2 = 0x313f48u;  // (from the original)
    r1 = r13 + 4u;
    guest::cpu()->r[13] = r13;
    r0 = call_005ea964(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    guest::preempt();
    goto L_314018;
}

}  // namespace d_00313acc
GUEST_EXPORT(0x00313acc, d_00313acc::f_00313acc);

// f_00314278: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00314278 {


u32 f_00314278(u32 r0, u32 r1, u32 r2_unused, u32 r3) {
    u32 r2 = 0;
    u32 r13 = guest::cpu()->r[13];
    r2 = *gptr<u32>(r13);
    if (r0 != r3) {
        r0 = 0u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    if (sxtb(r1) != sxtb(r2)) {
        r0 = 0u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r0 = u32(s32(r1 << 0x10) >> 0x18);  // (from the original)
    r1 = u32(s32(r2 << 0x10) >> 0x18);  // (from the original)
    if (r0 == r1) {
        r0 = 1u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r0 = 0u;
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_00314278
GUEST_EXPORT(0x00314278, d_00314278::f_00314278);

// f_00314b40: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00314b40 {


u32 f_00314b40(u32 r0, u32 r1) {
    if (r0 >= 0xfcu) {  // (from the original)
        r0 = 0u;
    } else {
        r1 = 0x88c528u;  // (from the original)
        r0 = u32(s32(s8(*gptr<u8>(r1 + r0))));
    }
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_00314b40
GUEST_EXPORT(0x00314b40, d_00314b40::f_00314b40);

// f_00314c04: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00314c04 {


u32 f_00314c04(u32 r0, u32 r1) {
    if (r0 >= 0xfcu) {  // (from the original)
        r0 = 0u;
    } else {
        r1 = 0x88c626u;  // (from the original)
        r0 = u32(s32(s8(*gptr<u8>(r1 + r0))));
    }
    guest::cpu()->r[1] = r1;
    return r0;
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
GUEST_OFFSET(Object_00314d40_0, word_34, 0x34);  // (from the original)
GUEST_OFFSET(Object_00314d40_0, word_38, 0x38);  // (from the original)

inline constexpr guest::Function<0x001fa354, u32(u32, u32, u32, u32)> call_001fa354;  // (from the original)
inline constexpr guest::Function<0x002f6adc, u32(u32, u32, u32, u32)> call_002f6adc;  // (from the original)
inline constexpr guest::Function<0x002f6b14, u32(u32, u32, u32, u32)> call_002f6b14;  // (from the original)
inline constexpr guest::Function<0x002f6e14, u32(u32, u32, u32, u32)> call_002f6e14;  // (from the original)
inline constexpr guest::Function<0x002f71e4, u32(u32, u32, u32, u32)> call_002f71e4;  // (from the original)
inline constexpr guest::Function<0x006d1e64, u32(u32, u32, u32, u32)> call_006d1e64;  // (from the original)
inline constexpr guest::Function<0x00819c2c, u32(u32, u32, u32, u32)> call_00819c2c;  // (from the original)

u32 f_00314d40(gptr<Object_00314d40_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r1 = 0;
    u32 r2 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r4 = r0;
    r5 = 0x851ae0u;  // (from the original)
    r6 = 1u;
    *gptr<u8>(0x94fe94u) = u8(r6);  // (from the original)
    r2 = arg0->word_34;
    r0 = *gptr<u32>(r5 + 0x84u);  // (from the original)
    if (r2 != *gptr<u32>(r5 + 0x80u)) {  // (from the original)
        goto L_314da4;
    }
    if (r2 == 0) {
        if (((arg0->word_38 | r0) & 1u) == 0) {
            goto L_314d90;
        }
    }
    if (*gptr<u32>(r4 + 0x38u) != r0) {  // (from the original)
        goto L_314da4;
    }
L_314d90:;
    r5 = r5 + 0x28u;  // (from the original)
    r0 = r4 + 0x28u;  // (from the original)
    r1 = *gptr<u32>(r5);
    r2 = *gptr<u32>(r5 + 4);
    r0 = call_00819c2c(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
L_314da0:;
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
L_314da4:;
    r1 = *gptr<u32>(r5 + 8u);
    r0 = *gptr<u32>(r5 + 0xcu);  // (from the original)
    if (r2 != r1) {
        guest::preempt();
        goto L_314da0;
    }
    if (r2 == 0) {
        r1 = *gptr<u32>(r4 + 0x38u) | r0;  // (from the original)
        if ((r1 & 1u) == 0) {
            goto L_314dd8;
        }
    }
    r1 = *gptr<u32>(r4 + 0x38u);  // (from the original)
    if (r1 != r0) {
        guest::preempt();
        goto L_314da0;
    }
L_314dd8:;
    r0 = call_006d1e64(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r0 = *gptr<u32>(r0 + 0x1f4u);  // (from the original)
    *gptr<u8>(r0 + 0x4d7u) = u8(r6);  // (from the original)
    r0 = call_001fa354(r0, r1, r2, guest::cpu()->r[3]);
    if (u32(*gptr<u8>(0x1890u + r4)) == 1u) {  // (from the original)
        goto L_314e4c;
    }
    r5 = r5 + 0x28u;  // (from the original)
    r0 = r4 + 0x28u;  // (from the original)
    r1 = *gptr<u32>(r5);
    r2 = *gptr<u32>(r5 + 4);
    r0 = call_00819c2c(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
L_314e0c:;
    r0 = r4 + 0xb34u;  // (from the original)
    r5 = r0;
    r0 = call_002f6adc(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r0 = r5;
    r0 = call_002f6b14(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r0 = r5;
    r0 = call_002f6e14(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    *gptr<u32>(r4 + 0xc08u) = u32(*gptr<u32>(r4 + 0xc08u) | 8u);  // (from the original)
    r0 = r5;
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    return call_002f71e4(r0, r1, r2, guest::cpu()->r[3]);
L_314e4c:;
    r5 = r5 + 0x30u;  // (from the original)
    r0 = r4 + 0x28u;  // (from the original)
    r1 = *gptr<u32>(r5);
    r2 = *gptr<u32>(r5 + 4);
    r0 = call_00819c2c(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    guest::preempt();
    goto L_314e0c;
}

}  // namespace d_00314d40
GUEST_EXPORT(0x00314d40, d_00314d40::f_00314d40);

// f_00315110: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00315110 {

inline constexpr guest::Function<0x002fc8e8, u32(u32, u32, u32, u32)> call_002fc8e8;  // (from the original)
inline constexpr guest::Function<0x002fcaf4, u32(u32, u32, u32, u32)> call_002fcaf4;  // (from the original)
inline constexpr guest::Function<0x002feb00, u32(u32, u32, u32, u32)> call_002feb00;  // (from the original)
inline constexpr guest::Function<0x002ff160, u32(u32, u32, u32, u32)> call_002ff160;  // (from the original)
inline constexpr guest::Function<0x00300a74, u32(u32, u32, u32, u32)> call_00300a74;  // (from the original)

u32 f_00315110(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 ea = 0;
    u32 res = 0;
    u32 sco = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r13 = guest::cpu()->r[13];
    u32 r14 = guest::cpu()->r[14];
    u32 tpc = 0;
    ea = r13 - 0x24;  // (from the original)
    *gptr<u32>(ea) = u32(r0);
    *gptr<u32>(ea + 4) = u32(r1);
    *gptr<u32>(ea + 8) = u32(r2);
    *gptr<u32>(ea + 0xc) = u32(r3);  // (from the original)
    *gptr<u32>(ea + 0x10) = u32(r4);  // (from the original)
    *gptr<u32>(ea + 0x14) = u32(r5);  // (from the original)
    *gptr<u32>(ea + 0x18) = u32(r6);  // (from the original)
    *gptr<u32>(ea + 0x1c) = u32(r7);  // (from the original)
    *gptr<u32>(ea + 0x20) = u32(r14);  // (from the original)
    r13 = ea - 0xcu;  // (from the original)
    r5 = r0;
    *gptr<u32>(r13 + 4u) = u32(0u);
    *gptr<u32>(r13) = u32(r5 + 0x180u);  // (from the original)
L_315122:;
    r0 = *gptr<u32>(r13 + 0x10u);  // (from the original)
    r3 = *gptr<u32>(r0 + 0xcu);  // (from the original)
    r2 = *gptr<u32>(r0 + 8u);
    r1 = *gptr<u32>(*gptr<u32>(r13 + 0x14u) + 8u);  // (from the original)
    r0 = *gptr<u32>(r13 + 4u) << 2;
    r6 = r3 + *gptr<u32>(0x8657ccu + r0);  // (from the original)
    r4 = r2 + *gptr<u32>(0x8657acu + r0);  // (from the original)
    if (r1 == r4) {
        if (*gptr<u32>(*gptr<u32>(r13 + 0x14u) + 0xcu) == r6) {  // (from the original)
            goto L_3151fe;
        }
    }
    if (*gptr<u32>(r13 + 0x30u) != 0) {  // (from the original)
        goto L_315170;
    }
    r1 = *gptr<u32>(*gptr<u32>(r13));
    res = 0u;
    r0 = res;
    res = r1;
    if (u32(res == 0) || res >> 0x1f != (r1 & (r1 ^ res)) >> 0x1f) {  // (from the original)
        goto L_315170;
    }
    do {
L_315158:;
        r2 = 0x14u * r0 + r5;  // (from the original)
        if (!(*gptr<u32>(r2 + 8u) != r4)) {
            if (*gptr<u32>(r2 + 0xcu) == r6) {  // (from the original)
                goto L_3151fe;
            }
        }
        r0 = r0 + 1u;
        res = r1 - r0;
        guest::preempt();
    } while (!u32(res == 0) && res >> 0x1f == ((r1 ^ r0) & (r1 ^ res)) >> 0x1f);  // (from the original)
L_315170:;
    r0 = *gptr<u32>(r13 + 0x18u);  // (from the original)
    r3 = 0u;
    r2 = r6;
    r1 = r4;
    guest::cpu()->r[13] = r13;
    r0 = call_002feb00(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    *gptr<u32>(r13 + 8u) = u32(r0);
    if (r0 == 0) {
        goto L_3151fe;
    }
    guest::cpu()->r[13] = r13;
    r0 = call_002fcaf4(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        goto L_3151fe;
    }
    r7 = 0x952b9cu;  // (from the original)
    r1 = r6;
    r0 = r4;
    r2 = *gptr<u8>(r7 + 1u);
    guest::cpu()->r[13] = r13;
    r0 = call_002ff160(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        goto L_3151fe;
    }
    r1 = r6;
    r2 = *gptr<u8>(r7 + 1u);
    r0 = r4;
    guest::cpu()->r[13] = r13;
    r0 = call_00300a74(r0, r1, r2, r3);
    r7 = r0;
    r0 = *gptr<u32>(r13 + 0x10u);  // (from the original)
    r3 = *gptr<u32>(r0 + 8u);
    r1 = *gptr<u32>(r0 + 0xcu);  // (from the original)
    r2 = *gptr<u8>(0x952b9du);  // (from the original)
    r0 = r3;
    guest::cpu()->r[13] = r13;
    r0 = call_00300a74(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r7 != r0) {
        goto L_3151fe;
    }
    r1 = *gptr<u32>(r13 + 8u);
    r0 = (*gptr<u32>(*gptr<u32>(r13)) << 2) + r5 + 0x140u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002fc8e8(r0, r1, r2, r3);
    res = 0x14u;  // (from the original)
    r0 = *gptr<u32>(*gptr<u32>(r13)) * res + r5;
    r2 = r0 + 4u;
    r1 = r4 << 0x1c >> 0x1c;  // (from the original)
    *gptr<u32>(r2) = u32(r1);
    *gptr<u32>(r2 + 4) = u32(r4);
    *gptr<u32>(r2 + 8) = u32(r6);
    r2 = (r4 - 0x10u >> 4) + (r6 + (r6 << 2));  // (from the original)
    *gptr<u32>(r0) = u32(r2 - 0x50u);  // (from the original)
    res = 1u;
    sco = u32(r2 >= 0x50u);  // (from the original)
    res = lsl_rc(res, r1 & 0xff, &sco);  // (from the original)
    *gptr<u16>(r0 + 0x10u) = u16(res);  // (from the original)
    r1 = *gptr<u32>(r13);
    *gptr<u32>(r1) = u32(*gptr<u32>(*gptr<u32>(r13)) + 1u);
L_3151fe:;
    r0 = *gptr<u32>(r13 + 4u) + 1u;
    *gptr<u32>(r13 + 4u) = u32(r0);
    if (r0 < 8u) {
        guest::preempt();
        goto L_315122;
    }
    r13 = r13 + 0x1cu;  // (from the original)
    r4 = *gptr<u32>(r13);
    r5 = *gptr<u32>(r13 + 4);
    r6 = *gptr<u32>(r13 + 8);
    r7 = *gptr<u32>(r13 + 0xc);  // (from the original)
    tpc = *gptr<u32>(r13 + 0x10);  // (from the original)
    r13 = r13 + 0x14;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[4] = r4;
    guest::cpu()->r[5] = r5;
    guest::cpu()->r[6] = r6;
    guest::cpu()->r[7] = r7;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_00315110
GUEST_EXPORT(0x00315111, d_00315110::f_00315110);

// f_00315924: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00315924 {

inline constexpr guest::Function<0x002fc949, u32(u32, u32, u32, u32)> call_002fc948;  // (from the original)
inline constexpr guest::Function<0x002fc994, u32(u32, u32, u32, u32)> call_002fc994;  // (from the original)
inline constexpr guest::Function<0x002fcbb0, u32(u32, u32, u32, u32)> call_002fcbb0;  // (from the original)
inline constexpr guest::Function<0x002fe7dd, u32(u32, u32, u32, u32)> call_002fe7dc;  // (from the original)
inline constexpr guest::Function<0x002fe7f0, u32(u32, u32, u32, u32)> call_002fe7f0;  // (from the original)

u32 f_00315924(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 ea = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r13 = guest::cpu()->r[13];
    ea = r13 - 0x18;  // (from the original)
    *gptr<u32>(ea) = u32(r3);
    r13 = ea;
    r4 = r1;
    r6 = r0;
    if ((*gptr<u32>(0x952bccu) & 1u) != 0u) {  // (from the original)
        goto L_315952;
    }
    r0 = 0x952bccu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002fe7dc(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        goto L_315952;
    }
    r0 = 0x952bd0u;  // (from the original)
    r1 = 2u;
    guest::cpu()->r[13] = r13;
    r0 = call_002fcbb0(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    r2 = 0x100000u;  // (from the original)
    r1 = 0x2f777cu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002fe7f0(r0, r1, r2, r3);
L_315952:;
    r2 = *gptr<u16>(r4 + 0x10u);  // (from the original)
    r5 = 0x952bd0u;  // (from the original)
    r0 = r6 + 0xf5cu;  // (from the original)
    r1 = *gptr<u32>(r4) << 1;
    r3 = u32(*gptr<u16>(r0 + r1)) & ~r2;
    *gptr<u16>(r0 + r1) = u16(r3);
    guest::cpu()->r[13] = r13;
    r0 = call_002fc948(r0, r1, r2, r3);
    *gptr<u32>(r13) = u32(0u);
    r3 = *gptr<u32>(r4 + 0xcu);  // (from the original)
    r2 = *gptr<u32>(r4 + 8u);
    r1 = r5;
    guest::cpu()->r[13] = r13;
    r0 = call_002fc994(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r13 = r13 + 0x18;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_00315924
GUEST_EXPORT(0x00315925, d_00315924::f_00315924);

// f_00315df4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00315df4 {

inline constexpr guest::Function<0x002fc949, u32(u32, u32, u32, u32)> call_002fc948;  // (from the original)
inline constexpr guest::Function<0x002fc994, u32(u32, u32, u32, u32)> call_002fc994;  // (from the original)
inline constexpr guest::Function<0x002fcbb0, u32(u32, u32, u32, u32)> call_002fcbb0;  // (from the original)
inline constexpr guest::Function<0x002fe7dd, u32(u32, u32, u32, u32)> call_002fe7dc;  // (from the original)
inline constexpr guest::Function<0x002fe7f0, u32(u32, u32, u32, u32)> call_002fe7f0;  // (from the original)

u32 f_00315df4(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 ea = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r13 = guest::cpu()->r[13];
    ea = r13 - 0x18;  // (from the original)
    *gptr<u32>(ea) = u32(r3);
    r13 = ea;
    r5 = r0;
    r4 = r1;
    if ((*gptr<u32>(0x952bb4u) & 1u) != 0u) {  // (from the original)
        goto L_315e22;
    }
    r0 = 0x952bb4u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002fe7dc(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        goto L_315e22;
    }
    r0 = 0x952bb8u;  // (from the original)
    r1 = 3u;
    guest::cpu()->r[13] = r13;
    r0 = call_002fcbb0(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    r2 = 0x100000u;  // (from the original)
    r1 = 0x2f777cu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002fe7f0(r0, r1, r2, r3);
L_315e22:;
    r3 = *gptr<u16>(r4 + 0x10u);  // (from the original)
    r6 = 0x952bb8u;  // (from the original)
    r1 = r5 + 0xa54u;  // (from the original)
    r0 = *gptr<u32>(r4) << 1;
    r2 = u32(*gptr<u16>(r1 + r0)) & ~r3;
    *gptr<u16>(r1 + r0) = u16(r2);
    guest::cpu()->r[13] = r13;
    r0 = call_002fc948(r0, r1, r2, r3);
    *gptr<u32>(r13) = u32(0u);
    r3 = *gptr<u32>(r4 + 0xcu);  // (from the original)
    r2 = *gptr<u32>(r4 + 8u);
    r1 = r6;
    guest::cpu()->r[13] = r13;
    r0 = call_002fc994(r0, r1, r2, r3);
    r0 = r5 + 0x1464u;  // (from the original)
    r1 = *gptr<u32>(r4) << 1;
    *gptr<u16>(r0 + r1) = u16(u32(*gptr<u16>(r0 + r1)) & ~u32(*gptr<u16>(r4 + 0x10u)));  // (from the original)
    r13 = r13 + 0x18;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_00315df4
GUEST_EXPORT(0x00315df5, d_00315df4::f_00315df4);

// f_0031600c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0031600c {

inline constexpr guest::Function<0x002fc949, u32(u32, u32, u32, u32)> call_002fc948;  // (from the original)
inline constexpr guest::Function<0x002fc994, u32(u32, u32, u32, u32)> call_002fc994;  // (from the original)
inline constexpr guest::Function<0x002fcbb0, u32(u32, u32, u32, u32)> call_002fcbb0;  // (from the original)
inline constexpr guest::Function<0x002fe7dd, u32(u32, u32, u32, u32)> call_002fe7dc;  // (from the original)
inline constexpr guest::Function<0x002fe7f0, u32(u32, u32, u32, u32)> call_002fe7f0;  // (from the original)

u32 f_0031600c(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 ea = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r13 = guest::cpu()->r[13];
    ea = r13 - 0x18;  // (from the original)
    *gptr<u32>(ea) = u32(r3);
    r13 = ea;
    r5 = r0;
    r4 = r1;
    if ((*gptr<u32>(0x952bbcu) & 1u) != 0u) {  // (from the original)
        goto L_31603a;
    }
    r0 = 0x952bbcu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002fe7dc(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        goto L_31603a;
    }
    r0 = 0x952bc0u;  // (from the original)
    r1 = 4u;
    guest::cpu()->r[13] = r13;
    r0 = call_002fcbb0(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    r2 = 0x100000u;  // (from the original)
    r1 = 0x2f777cu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002fe7f0(r0, r1, r2, r3);
L_31603a:;
    r3 = *gptr<u16>(r4 + 0x10u);  // (from the original)
    r6 = 0x952bc0u;  // (from the original)
    r1 = r5 + 0xcd8u;  // (from the original)
    r0 = *gptr<u32>(r4) << 1;
    r2 = u32(*gptr<u16>(r1 + r0)) & ~r3;
    *gptr<u16>(r1 + r0) = u16(r2);
    guest::cpu()->r[13] = r13;
    r0 = call_002fc948(r0, r1, r2, r3);
    *gptr<u32>(r13) = u32(0u);
    r3 = *gptr<u32>(r4 + 0xcu);  // (from the original)
    r2 = *gptr<u32>(r4 + 8u);
    r1 = r6;
    guest::cpu()->r[13] = r13;
    r0 = call_002fc994(r0, r1, r2, r3);
    r0 = r5 + 0x1464u;  // (from the original)
    r1 = *gptr<u32>(r4) << 1;
    *gptr<u16>(r0 + r1) = u16(u32(*gptr<u16>(r0 + r1)) & ~u32(*gptr<u16>(r4 + 0x10u)));  // (from the original)
    r13 = r13 + 0x18;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_0031600c
GUEST_EXPORT(0x0031600d, d_0031600c::f_0031600c);

// f_00316664: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00316664 {

inline constexpr guest::Function<0x00723998, u32(u32, u32, u32, u32)> call_00723998;  // (from the original)

u32 f_00316664(u32 r0, u32 r1) {
    u32 res = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 zf = 0;
    guest::cpu()->r[13] -= 8u;
    r4 = r0;
    r0 = call_00723998(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    res = r0 - 0xffffu;  // (from the original)
    zf = res == 0;
    r1 = res;
    if (!zf) {
        r1 = *gptr<u32>(r4 + 4u);
        zf = r1 == 0;
    }
    if (zf) {
        r0 = 0u;
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    if (r0 < 0x48u) {  // (from the original)
        r0 = r1 + (r0 + (r0 << 1) << 2);
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r0 = 0u;
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_00316664
GUEST_EXPORT(0x00316664, d_00316664::f_00316664);

// f_00316ebc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00316ebc {


u32 f_00316ebc(u32 r0, u32 r1) {
    if (r1 >= 0x60u) {  // (from the original)
        r0 = 0u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r0 = u32(*gptr<u8>(r0 + (r1 >> 3)));
    r1 = r1 & 7u;
    r0 = lsr_r(r0, r1 & 0xff) & 1u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_00316ebc
GUEST_EXPORT(0x00316ebc, d_00316ebc::f_00316ebc);

// f_00316edc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00316edc {


u32 f_00316edc(u32 r0, u32 r1) {
    if (r1 >= 7u) {
        r0 = 0u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r0 = u32(*gptr<u8>(r0 + (r1 >> 3)));
    r1 = r1 & 7u;
    r0 = lsr_r(r0, r1 & 0xff) & 1u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_00316edc
GUEST_EXPORT(0x00316edc, d_00316edc::f_00316edc);

// f_0031708c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0031708c {

inline constexpr guest::Function<0x0013cd00, u32(u32, u32, u32, u32)> call_0013cd00;  // (from the original)

u32 f_0031708c(u32 r0, u32 r1) {
    u32 r2 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 0x10u;  // (from the original)
    r4 = r0;
    *gptr<u32>(r13) = u32(0x9047f8u);  // (from the original)
    *gptr<u32>(r13 + 4u) = u32(r1);
    r1 = r13;
    r2 = ~0u;
    r0 = r4 + 0xcu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0013cd00(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r0 = 4u;
    *gptr<u32>(r4) = u32(r0);
    r13 = r13 + 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_0031708c
GUEST_EXPORT(0x0031708c, d_0031708c::f_0031708c);

// f_003171b0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_003171b0 {

inline constexpr guest::Function<0x00521ae0, u32(u32, u32, u32, u32)> call_00521ae0;  // (from the original)

u32 f_003171b0() {
    return call_00521ae0(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_003171b0
GUEST_EXPORT(0x003171b0, d_003171b0::f_003171b0);

// f_00317a50: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00317a50 {

inline constexpr guest::Function<0x0056a974, u32(u32, u32, u32, u32)> call_0056a974;  // (from the original)

u32 f_00317a50(u32 r0, u32 r1) {
    u32 r4 = guest::cpu()->r[4];
    guest::cpu()->r[13] -= 8u;
    r4 = r0;
    r0 = r0 + 0x1cu;  // (from the original)
    r0 = call_0056a974(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = r0;
    if (r0 == 0) {
        r0 = r1;
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    if (*gptr<u32>(r4 + 4u) != 0) {
        r0 = r1;
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r0 = *gptr<u32>(r4 + 0xecu);  // (from the original)
    *gptr<u32>(r4 + 4u) = u32(r0);
    *gptr<u32>(r4 + 8u) = u32(r0);
    r0 = r1;
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_00317a50
GUEST_EXPORT(0x00317a50, d_00317a50::f_00317a50);

// f_00317cc8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00317cc8 {

struct __attribute__((packed)) Object_00317cc8_0 {
    u32 word_0;
};
GUEST_OFFSET(Object_00317cc8_0, word_0, 0x0);  // (from the original)


u32 f_00317cc8(gptr<Object_00317cc8_0> arg0, u32 r1) {
    u32 ea = 0;
    u32 r0 = arg0.addr();
    u32 r2 = 0;
    u32 r3 = 0;
    r0 = 0u;
    ea = arg0->word_0 + 0x20u;  // (from the original)
    r2 = ea;
    r3 = *gptr<u32>(ea);
    if (r3 == 0) {
        r2 = r0;
    } else {
        r2 = r2 + r3;
    }
    if (r2 == 0) {
        r0 = 0u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    ea = r2 + (r1 << 4) + 0x28u;  // (from the original)
    r1 = ea;
    r2 = *gptr<u32>(ea);
    if (r2 != 0) {
        r0 = r2 + r1;
    }
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_00317cc8
GUEST_EXPORT(0x00317cc8, d_00317cc8::f_00317cc8);

// f_00317d8c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00317d8c {

struct __attribute__((packed)) Object_00317d8c_0 {
    u32 word_0;
};
GUEST_OFFSET(Object_00317d8c_0, word_0, 0x0);  // (from the original)

inline constexpr guest::Function<0x002f74b0, u32(u32, u32, u32, u32)> call_002f74b0;  // (from the original)
inline constexpr guest::Function<0x006148ac, u32(u32, u32, u32, u32)> call_006148ac;  // (from the original)

u32 f_00317d8c(gptr<Object_00317d8c_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r4 = guest::cpu()->r[4];
    guest::cpu()->r[13] -= 8u;
    r4 = r0;
    arg0->word_0 = u32(0x90ab88u);  // (from the original)
    r0 = r4;
    r0 = call_002f74b0(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    r0 = r4;
    guest::cpu()->r[13] += 8u;
    return call_006148ac(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_00317d8c
GUEST_EXPORT(0x00317d8c, d_00317d8c::f_00317d8c);

// f_00317e2c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00317e2c {

struct __attribute__((packed)) Object_00317e2c_0 {
    u32 word_0;
};
GUEST_OFFSET(Object_00317e2c_0, word_0, 0x0);  // (from the original)

inline constexpr guest::Function<0x00130804, u32(u32, u32, u32, u32)> call_00130804;  // (from the original)
inline constexpr guest::Function<0x001329c4, u32(u32, u32, u32, u32)> call_001329c4;  // (from the original)
inline constexpr guest::Function<0x00132a3c, u32(u32, u32, u32, u32)> call_00132a3c;  // (from the original)
inline constexpr guest::Function<0x0013bc00, u32(u32, u32, u32, u32)> call_0013bc00;  // (from the original)

u32 f_00317e2c(gptr<Object_00317e2c_0> arg0, u32 r1_unused, u32 r2, u32 r3) {
    u32 ea = 0;
    u32 r0 = arg0.addr();
    u32 r1 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r13 = guest::cpu()->r[13];
    r1 = 0x90298cu;  // (from the original)
    r13 = r13 - 0x20u;  // (from the original)
    arg0->word_0 = u32(r1);
    r0 = r0 + 0x1cu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0013bc00(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r4 = r0 - 0x1cu;  // (from the original)
    *gptr<u32>(r4) = u32(0x90289cu);  // (from the original)
    if (*gptr<u32>(r4 + 4u) == 0) {
        r0 = r4;
        r13 = r13 + 0x20u;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    ea = r4 + 0x18u;  // (from the original)
    r1 = *gptr<u32>(ea);
    r0 = r13 + 8u;
    ea = r4 + 0x10u;  // (from the original)
    r2 = *gptr<u32>(ea);
    r3 = *gptr<u32>(ea + 4);
    guest::cpu()->r[13] = r13;
    r0 = call_001329c4(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = *gptr<u32>(r4 + 8u);
    *gptr<u32>(r13 + 4u) = u32(r0);
    if (r0 != 0) {
        r0 = r13 + 4u;
        guest::cpu()->r[13] = r13;
        r0 = call_00130804(r0, r1, r2, r3);
        r3 = guest::cpu()->r[3];
    }
    r1 = ~0u;
    r2 = 0u;
    *gptr<u32>(r4 + 0xcu) = u32(r1);  // (from the original)
    r0 = r13 + 8u;
    *gptr<u32>(r4 + 4u) = u32(r2);
    guest::cpu()->r[13] = r13;
    r0 = call_00132a3c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r0 = r4;
    r13 = r13 + 0x20u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_00317e2c
GUEST_EXPORT(0x00317e2c, d_00317e2c::f_00317e2c);

// f_00317eac: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00317eac {

inline constexpr guest::Function<0x00757aa0, u32(u32, u32, u32, u32)> call_00757aa0;  // (from the original)

u32 f_00317eac(u32 r0, u32 r1) {
    u32 r4 = guest::cpu()->r[4];
    guest::cpu()->r[13] -= 8u;
    r4 = r0;
    r0 = call_00757aa0(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = *gptr<u32>(r4);
    r0 = u32(*gptr<u8>(r1 + r0));
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_00317eac
GUEST_EXPORT(0x00317eac, d_00317eac::f_00317eac);

// f_00317ec4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00317ec4 {


u32 f_00317ec4(u32 r0, u32 r1, u32 r2) {
    if (s32(r0) < s32(r1)) {
        r0 = r1;
        return r0;
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

inline constexpr guest::Function<0x0016dad0, u32(u32, u32, u32, u32)> call_0016dad0;  // (from the original)
inline constexpr guest::Function<0x002fe7cc, u32(u32, u32, u32, u32)> call_002fe7cc;  // (from the original)
inline constexpr guest::Function<0x002feb00, u32(u32, u32, u32, u32)> call_002feb00;  // (from the original)
inline constexpr guest::Function<0x00302fec, u32(u32, u32, u32, u32)> call_00302fec;  // (from the original)
inline constexpr guest::Function<0x0030b654, u32(u32, u32, u32, u32)> call_0030b654;  // (from the original)
inline constexpr guest::Function<0x006fb27c, u32(u32, u32, u32, u32)> call_006fb27c;  // (from the original)
inline constexpr guest::Function<0x006fb3f4, u32(u32, u32, u32, u32)> call_006fb3f4;  // (from the original)

u32 f_00317fd8(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 ea = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r9 = guest::cpu()->r[9];
    u32 r10 = guest::cpu()->r[10];
    u32 r11 = guest::cpu()->r[11];
    u32 r13 = guest::cpu()->r[13];
    u32 zf = 0;
    r5 = r1;
    r4 = r0;
    r13 = r13 - 0x60u;  // (from the original)
    r1 = 0u;
    r0 = r5;
    guest::cpu()->r[13] = r13;
    r0 = call_006fb3f4(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r6 = r0;
    r1 = r4;
    r0 = r5;
    guest::cpu()->r[13] = r13;
    r0 = call_006fb3f4(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r7 = r0;
    r0 = r6;
    guest::cpu()->r[13] = r13;
    r0 = call_002fe7cc(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    *gptr<u32>(r13 + 0x1cu) = u32(r0);  // (from the original)
    r0 = r7;
    guest::cpu()->r[13] = r13;
    r0 = call_002fe7cc(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r9 = r0;
    r0 = *gptr<u32>(r13 + 0x1cu);  // (from the original)
    zf = r0 == 0;
    if (!zf) {
        zf = r9 == 0;
    }
    if (zf) {
        goto L_31811c;
    }
    r1 = 0u;
    r0 = r5;
    guest::cpu()->r[13] = r13;
    r0 = call_006fb27c(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    *gptr<u32>(r13 + 0x24u) = u32(r0);  // (from the original)
    r1 = r4;
    r0 = r5;
    guest::cpu()->r[13] = r13;
    r0 = call_006fb27c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r6 = 0u;
    r5 = 1u;
    r8 = 8u;
    *gptr<u32>(r13 + 0x20u) = u32(r0);  // (from the original)
    if (r4 != 3u) {
        if (r4 == 4u) {
            goto L_318124;
        }
        if (r4 != 5u) {
            goto L_31811c;
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
    r0 = *gptr<u32>(r13 + 0x1cu);  // (from the original)
    r3 = 0u;
    r2 = r4;
    r1 = 0xcu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002feb00(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r7 = r0;
    if (r0 == 0) {
        goto L_3180e0;
    }
    guest::cpu()->r[13] = r13;
    r0 = call_0030b654(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        goto L_3180e0;
    }
    r0 = r7;
    guest::cpu()->r[13] = r13;
    r0 = call_00302fec(r0, r1, r2, r3);
    if (r0 == 0) {
        r4 = 0xau;  // (from the original)
        guest::preempt();
        goto L_318094;
    }
L_3180e0:;
    ea = r13;
    *gptr<u32>(ea) = u32(r11);
    ea = r13 + 4u;
    *gptr<u32>(ea) = u32(r4);
    *gptr<u32>(ea + 4) = u32(r8);
    r7 = r13 + 0x1cu;  // (from the original)
    ea = r13 + 0xcu;  // (from the original)
    *gptr<u32>(ea) = u32(r4);
    *gptr<u32>(ea + 4) = u32(r6);
    r1 = r9;
    ea = r13 + 0x14u;  // (from the original)
    *gptr<u32>(ea) = u32(r5);
    *gptr<u32>(ea + 4) = u32(r10);
    r0 = *gptr<u32>(r7);
    r3 = *gptr<u32>(r7 + 4);
    r2 = *gptr<u32>(r13 + 0x24u);  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0016dad0(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r4 = r4 + 1u;
    if (s32(r4) <= s32(0xbu)) {  // (from the original)
        guest::preempt();
        goto L_318094;
    }
L_31811c:;
    r13 = r13 + 0x60u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
L_318124:;
    r7 = ~0u;
    r4 = 0xcu;  // (from the original)
    r11 = 3u;
    r10 = 7u;
    goto L_318140;
L_318138:;
    if (r4 != 0xcu) {  // (from the original)
        goto L_318184;
    }
L_318140:;
    r0 = *gptr<u32>(r13 + 0x1cu);  // (from the original)
    r3 = 0u;
    r2 = r4;
    r1 = 3u;
    guest::cpu()->r[13] = r13;
    r0 = call_002feb00(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r8 = r0;
    if (r0 == 0) {
        goto L_318184;
    }
    guest::cpu()->r[13] = r13;
    r0 = call_0030b654(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        goto L_318184;
    }
    r0 = r8;
    guest::cpu()->r[13] = r13;
    r0 = call_00302fec(r0, r1, r2, r3);
    if (r0 == 0) {
        r4 = 0xbu;  // (from the original)
        guest::preempt();
        goto L_318138;
    }
L_318184:;
    ea = r13 + 0x18u;  // (from the original)
    *gptr<u32>(ea) = u32(r5);
    ea = r13;
    *gptr<u32>(ea) = u32(r11);
    ea = r13 + 4u;
    *gptr<u32>(ea) = u32(r4);
    *gptr<u32>(ea + 4) = u32(r10);
    r8 = r13 + 0x1cu;  // (from the original)
    ea = r13 + 0xcu;  // (from the original)
    *gptr<u32>(ea) = u32(r4);
    *gptr<u32>(ea + 4) = u32(r6);
    *gptr<u32>(ea + 8) = u32(r7);
    r1 = r9;
    r0 = *gptr<u32>(r8);
    r3 = *gptr<u32>(r8 + 4);
    r2 = *gptr<u32>(r13 + 0x24u);  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0016dad0(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r4 = r4 - 1u;
    if (s32(r4) >= s32(0xau)) {  // (from the original)
        guest::preempt();
        goto L_318138;
    }
    r13 = r13 + 0x60u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
L_3181c4:;
    if (r4 != 6u) {
        goto L_318210;
    }
L_3181cc:;
    r0 = *gptr<u32>(r13 + 0x1cu);  // (from the original)
    r3 = 0u;
    r2 = 4u;
    r1 = r4;
    guest::cpu()->r[13] = r13;
    r0 = call_002feb00(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r7 = r0;
    if (r0 == 0) {
        goto L_318210;
    }
    guest::cpu()->r[13] = r13;
    r0 = call_0030b654(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        goto L_318210;
    }
    r0 = r7;
    guest::cpu()->r[13] = r13;
    r0 = call_00302fec(r0, r1, r2, r3);
    if (r0 == 0) {
        r4 = 7u;
        guest::preempt();
        goto L_3181c4;
    }
L_318210:;
    ea = r13;
    *gptr<u32>(ea) = u32(r4);
    *gptr<u32>(ea + 4) = u32(r11);
    ea = r13 + 8u;
    *gptr<u32>(ea) = u32(r4);
    *gptr<u32>(ea + 4) = u32(r8);
    r7 = r13 + 0x1cu;  // (from the original)
    ea = r13 + 0x10u;  // (from the original)
    *gptr<u32>(ea) = u32(r5);
    *gptr<u32>(ea + 4) = u32(r6);
    *gptr<u32>(ea + 8) = u32(r10);
    r1 = r9;
    r0 = *gptr<u32>(r7);
    r3 = *gptr<u32>(r7 + 4);
    r2 = *gptr<u32>(r13 + 0x24u);  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0016dad0(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r4 = r4 + 1u;
    if (s32(r4) <= s32(8u)) {
        guest::preempt();
        goto L_3181c4;
    }
    r13 = r13 + 0x60u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_00317fd8
GUEST_EXPORT(0x00317fd8, d_00317fd8::f_00317fd8);

// f_00318540: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00318540 {

struct __attribute__((packed)) Object_00318540_0 {
    u16 half_0;
};
GUEST_OFFSET(Object_00318540_0, half_0, 0x0);  // (from the original)


void f_00318540(gptr<Object_00318540_0> arg0, u32 r1) {
    r1 = r1 | u32(arg0->half_0);
    arg0->half_0 = u16(r1);
    guest::cpu()->r[1] = r1;
    return;
}

}  // namespace d_00318540
GUEST_EXPORT(0x00318540, d_00318540::f_00318540);

// f_003187a8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_003187a8 {

struct __attribute__((packed)) Object_003187a8_0 {
    u32 word_0;
    u8 unknown_4[0x24];  // (not used here)
    u32 word_28;
    u8 unknown_2c[0xe8c];  // (not used here)
    u32 word_eb8;
    u8 unknown_ebc[0x394];  // (not used here)
    u32 word_1250;
    u8 unknown_1254[0xe0];  // (not used here)
    u32 word_1334;
};
GUEST_OFFSET(Object_003187a8_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_003187a8_0, word_28, 0x28);  // (from the original)
GUEST_OFFSET(Object_003187a8_0, word_eb8, 0xeb8);  // (from the original)
GUEST_OFFSET(Object_003187a8_0, word_1250, 0x1250);  // (from the original)
GUEST_OFFSET(Object_003187a8_0, word_1334, 0x1334);  // (from the original)

inline constexpr guest::Function<0x002f76ad, u32(u32, u32, u32, u32)> call_002f76ac;  // (from the original)
inline constexpr guest::Function<0x002f770c, u32(u32, u32, u32, u32)> call_002f770c;  // (from the original)
inline constexpr guest::Function<0x002f7710, u32(u32, u32, u32, u32)> call_002f7710;  // (from the original)
inline constexpr guest::Function<0x00567ef0, u32(u32, u32, u32, u32)> call_00567ef0;  // (from the original)
inline constexpr guest::Function<0x0056988c, u32(u32, u32, u32, u32)> call_0056988c;  // (from the original)
inline constexpr guest::Function<0x005bf744, u32(u32, u32, u32, u32)> call_005bf744;  // (from the original)
inline constexpr guest::Function<0x006aaa30, u32(u32, u32, u32, u32)> call_006aaa30;  // (from the original)

u32 f_003187a8(gptr<Object_003187a8_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r1 = 0;
    u32 r2 = 0;
    u32 r3 = 0;
    u32 r4 = guest::cpu()->r[4];
    r1 = 0x8f43ccu;  // (from the original)
    guest::cpu()->r[13] -= 8u;
    arg0->word_28 = u32(r1 + 0x6cu);  // (from the original)
    arg0->word_0 = u32(r1);
    r4 = r0 + 0x1250u;  // (from the original)
    arg0->word_eb8 = u32(0x8ee218u);  // (from the original)
    r2 = 0x8ef22cu;  // (from the original)
    r3 = 1u;
    arg0->word_1250 = u32(r2);
    arg0->word_1334 = u32(r2 + 0x44u);  // (from the original)
    r2 = 0x518u;  // (from the original)
    r1 = 0x2e0b3cu;  // (from the original)
    r0 = r0 + 0x1368u;  // (from the original)
    r0 = call_002f76ac(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r4;
    r0 = call_002f770c(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = 0x8f18f4u;  // (from the original)
    *gptr<u32>(r0 - 0x398u) = u32(r1);  // (from the original)
    r0 = r0 - 0x248u;  // (from the original)
    r0 = call_00567ef0(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0x14cu;  // (from the original)
    r0 = call_005bf744(r0, r1, r2, r3);
    r1 = 0x2b6ef8u;  // (from the original)
    r4 = r0 - 0xebcu;  // (from the original)
    r3 = 3u;
    r2 = 0xe0u;  // (from the original)
    r0 = r0 - 0x2a4u;  // (from the original)
    r0 = call_002f76ac(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r4 + 0xb34u;  // (from the original)
    r0 = call_002f7710(r0, r1, r2, r3);
    r1 = 0x68eaccu;  // (from the original)
    r4 = r0 - 0xb34u;  // (from the original)
    r3 = 3u;
    r2 = 0xccu;  // (from the original)
    r0 = r0 - 0x264u;  // (from the original)
    r0 = call_002f76ac(r0, r1, r2, r3);
    r1 = 0x68eaccu;  // (from the original)
    r3 = 5u;
    r2 = 0xccu;  // (from the original)
    r0 = r4 + 0x4d4u;  // (from the original)
    r0 = call_002f76ac(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r4 + 0x4a8u;  // (from the original)
    r0 = call_0056988c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0x28u;  // (from the original)
    r0 = call_0056988c(r0, r1, r2, r3);
    r4 = r0 - 0x480u;  // (from the original)
    r1 = 0x56988cu;  // (from the original)
    r3 = 2u;
    r2 = 0x28u;  // (from the original)
    r0 = r0 - 0x50u;  // (from the original)
    r0 = call_002f76ac(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r4 + 0x408u;  // (from the original)
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
    guest::cpu()->r[13] += 8u;
    r0 = r0 - 0x4cu;  // (from the original)
    return call_006aaa30(r0, r1, r2, r3);
}

}  // namespace d_003187a8
GUEST_EXPORT(0x003187a8, d_003187a8::f_003187a8);

// f_00318960: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00318960 {

struct __attribute__((packed)) Object_00318960_0 {
    u8 unknown_0[0x8];  // (not used here)
    u8 byte_8;
};
GUEST_OFFSET(Object_00318960_0, byte_8, 0x8);  // (from the original)


u32 f_00318960(gptr<Object_00318960_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r1 = 0;
    u32 r2 = 0;
    u32 r3 = 0;
    r2 = u32(arg0->byte_8);
    r3 = 0x88f364u;  // (from the original)
    r0 = 0xcu;  // (from the original)
    r1 = 0u;
    do {
L_318970:;
        if (!(s32(r2) >= s32(*gptr<u32>(r3 + (r1 << 2))))) {
            r0 = r1 & 0xffu;  // (from the original)
            guest::cpu()->r[1] = r1;
            return r0;
        }
        r1 = r1 + 1u;
        guest::preempt();
    } while (s32(r1) < s32(0xcu));  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_00318960
GUEST_EXPORT(0x00318960, d_00318960::f_00318960);

// f_00318d8c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00318d8c {


u32 f_00318d8c(u32 r0, u32 r1) {
    if (r1 >= 3u) {
        r0 = ~0u;
    } else {
        r0 = u32(s32(s8(*gptr<u8>(r0 + r1 + 0x56u))));  // (from the original)
    }
    return r0;
}

}  // namespace d_00318d8c
GUEST_EXPORT(0x00318d8c, d_00318d8c::f_00318d8c);

// f_00318da0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00318da0 {

struct __attribute__((packed)) Object_00318da0_0 {
    u16 half_0;
    u8 unknown_2[0x12];  // (not used here)
    u8 byte_14;
    u8 unknown_15[0x17];  // (not used here)
    u16 half_2c;
};
GUEST_OFFSET(Object_00318da0_0, half_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_00318da0_0, byte_14, 0x14);  // (from the original)
GUEST_OFFSET(Object_00318da0_0, half_2c, 0x2c);  // (from the original)

struct __attribute__((packed)) Object_00318da0_1 {
    u16 half_0;
    u8 unknown_2[0x12];  // (not used here)
    u8 byte_14;
    u8 unknown_15[0x17];  // (not used here)
    u16 half_2c;
};
GUEST_OFFSET(Object_00318da0_1, half_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_00318da0_1, byte_14, 0x14);  // (from the original)
GUEST_OFFSET(Object_00318da0_1, half_2c, 0x2c);  // (from the original)

inline constexpr guest::Function<0x00100d2d, u32(u32, u32, u32, u32)> call_00100d2c;  // (from the original)

u32 f_00318da0(gptr<Object_00318da0_0> arg0, gptr<Object_00318da0_1> arg1) {
    u32 ea = 0;
    u32 r0 = arg0.addr();
    u32 r1 = arg1.addr();
    u32 r2 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 0x10;  // (from the original)
    r4 = r0;
    r5 = r1;
    r1 = u32(arg1->half_2c);
    if (u32(arg0->half_2c) != r1) {
        goto L_318e30;
    }
    r1 = u32(arg1->half_0);
    if (u32(arg0->half_0) != r1) {
        goto L_318e30;
    }
    r1 = u32(arg0->byte_14);
    if (r1 != u32(arg1->byte_14)) {
        goto L_318e30;
    }
    r2 = 0x12u;  // (from the original)
    r1 = r5 + 2u;
    r0 = r4 + 2u;
    guest::cpu()->r[13] = r13;
    r0 = call_00100d2c(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 != 0) {
        goto L_318e30;
    }
    ea = r4 + 0x16u;  // (from the original)
    r4 = ea;
    r0 = u32(*gptr<u16>(ea));
    ea = r5 + 0x16u;  // (from the original)
    r5 = ea;
    r1 = u32(*gptr<u16>(ea));
    if (r0 != r1) {
        goto L_318e30;
    }
    r1 = u32(*gptr<u8>(r5 + 0x14u));  // (from the original)
    if (u32(*gptr<u8>(r4 + 0x14u)) != r1) {  // (from the original)
        goto L_318e30;
    }
    r2 = 0x12u;  // (from the original)
    r1 = r5 + 2u;
    r0 = r4 + 2u;
    guest::cpu()->r[13] = r13;
    r0 = call_00100d2c(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 == 0) {
        r0 = 1u;
        goto L_318e34;
    }
L_318e30:;
    r0 = 0u;
L_318e34:;
    r13 = r13 + 0x10;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_00318da0
GUEST_EXPORT(0x00318da0, d_00318da0::f_00318da0);

// f_00318e38: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00318e38 {

inline constexpr guest::Function<0x00100d2d, u32(u32, u32, u32, u32)> call_00100d2c;  // (from the original)
inline constexpr guest::Function<0x002fb328, u32(u32, u32, u32, u32)> call_002fb328;  // (from the original)
inline constexpr guest::Function<0x00309fbc, u32(u32, u32, u32, u32)> call_00309fbc;  // (from the original)

u32 f_00318e38(u32 r0, u32 r1, u32 r2) {
    u32 ea = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 0x18;  // (from the original)
    r5 = r0;
    r6 = r1;
    r4 = r2;
    guest::cpu()->r[13] = r13;
    r0 = call_002fb328(r0, r1, r2, guest::cpu()->r[3]);
    r2 = guest::cpu()->r[2];
    r1 = r4;
    r0 = r0 + 0xa0u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00309fbc(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 >= 4u) {
        goto L_318f08;
    } else {
        r4 = 0u;
        r7 = r5 + (r0 << 7);
    }
L_318e68:;
    r1 = r7 + (r4 << 6);
    r5 = r1 + 0xcu;  // (from the original)
    r1 = u32(*gptr<u16>(r1 + 0x38u));  // (from the original)
    if (r1 != u32(*gptr<u16>(r6 + 0x2cu))) {  // (from the original)
        goto L_318efc;
    }
    r1 = u32(*gptr<u16>(r6));
    if (u32(*gptr<u16>(r5)) != r1) {
        goto L_318efc;
    }
    r1 = u32(*gptr<u8>(r5 + 0x14u));  // (from the original)
    if (r1 != u32(*gptr<u8>(r6 + 0x14u))) {  // (from the original)
        goto L_318efc;
    }
    r2 = 0x12u;  // (from the original)
    r1 = r6 + 2u;
    r0 = r5 + 2u;
    guest::cpu()->r[13] = r13;
    r0 = call_00100d2c(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 != 0) {
        goto L_318efc;
    }
    ea = r5 + 0x16u;  // (from the original)
    r5 = ea;
    r1 = u32(*gptr<u16>(ea));
    r0 = r6 + 0x16u;  // (from the original)
    if (r1 != u32(*gptr<u16>(r6 + 0x16u))) {  // (from the original)
        goto L_318efc;
    }
    r1 = u32(*gptr<u8>(r5 + 0x14u));  // (from the original)
    if (r1 != u32(*gptr<u8>(r0 + 0x14u))) {  // (from the original)
        goto L_318efc;
    }
    r1 = r0 + 2u;
    r2 = 0x12u;  // (from the original)
    r0 = r5 + 2u;
    guest::cpu()->r[13] = r13;
    r0 = call_00100d2c(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 == 0) {
        goto L_318f10;
    }
L_318efc:;
    r4 = r4 + 1u;
    if (s32(r4) < s32(2u)) {
        guest::preempt();
        goto L_318e68;
    }
L_318f08:;
    r0 = 0u;
    r13 = r13 + 0x18;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
L_318f10:;
    r0 = r7 + (r4 << 6);
    r13 = r13 + 0x18;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_00318e38
GUEST_EXPORT(0x00318e38, d_00318e38::f_00318e38);

// f_00318f18: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00318f18 {

struct __attribute__((packed)) Object_00318f18_0 {
    u8 unknown_0[0x9];  // (not used here)
    u8 byte_9;
};
GUEST_OFFSET(Object_00318f18_0, byte_9, 0x9);  // (from the original)

inline constexpr guest::Function<0x007596ac, u32(u32, u32, u32, u32)> call_007596ac;  // (from the original)

u32 f_00318f18(gptr<Object_00318f18_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r1 = 0;
    r1 = u32(arg0->byte_9);
    if (!u32(r1 >= 1u) || u32(r1 == 1u)) {
        r0 = 1u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    if (r1 != 3u) {
        r0 = 0u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r1 = 1u;
    return call_007596ac(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_00318f18
GUEST_EXPORT(0x00318f18, d_00318f18::f_00318f18);

// f_00318fbc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00318fbc {

inline constexpr guest::Function<0x00200ab4, u32(u32, u32, u32, u32)> call_00200ab4;  // (from the original)

u32 f_00318fbc(u32 r0, u32 r1, u32 r2) {
    u32 r3 = 0;
    r3 = r2;
    r2 = r1;
    r1 = r0;
    r0 = 0x9b3ce0u;  // (from the original)
    guest::cpu()->r[13] -= 8u;
    r0 = call_00200ab4(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r0 = 1u;
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_00318fbc
GUEST_EXPORT(0x00318fbc, d_00318fbc::f_00318fbc);

// f_00319568: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00319568 {

inline constexpr guest::Function<0x002f74c8, u32(u32, u32, u32, u32)> call_002f74c8;  // (from the original)
inline constexpr guest::Function<0x002fb328, u32(u32, u32, u32, u32)> call_002fb328;  // (from the original)
inline constexpr guest::Function<0x00308971, u32(u32, u32, u32, u32)> call_00308970;  // (from the original)
inline constexpr guest::Function<0x00319aa4, u32(u32, u32, u32, u32)> call_00319aa4;  // (from the original)

u32 f_00319568(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 ea = 0;
    u32 res = 0;
    u32 sco = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r13 = guest::cpu()->r[13];
    u32 r14 = guest::cpu()->r[14];
    u32 cf = 0;
    u32 tpc = 0;
    ea = r13 - 0x1c;  // (from the original)
    *gptr<u32>(ea) = u32(r0);
    *gptr<u32>(ea + 4) = u32(r1);
    *gptr<u32>(ea + 8) = u32(r4);
    *gptr<u32>(ea + 0xc) = u32(r5);  // (from the original)
    *gptr<u32>(ea + 0x10) = u32(r6);  // (from the original)
    *gptr<u32>(ea + 0x14) = u32(r7);  // (from the original)
    *gptr<u32>(ea + 0x18) = u32(r14);  // (from the original)
    r13 = ea - 0xcu;  // (from the original)
    r4 = r0;
    guest::cpu()->r[13] = r13;
    r0 = call_002fb328(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    r2 = 0xau;  // (from the original)
    r1 = r0 + 0x292a4u;  // (from the original)
    r0 = r4;
    guest::cpu()->r[13] = r13;
    r0 = call_00308970(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    cf = r0 >= 0xau;  // (from the original)
    r7 = r0;
    if (cf) {
        goto L_3195e6;
    }
    res = 1u;
    sco = cf;
    res = lsl_rc(res, r7 & 0xff, &sco);  // (from the original)
    r0 = res;
    r1 = *gptr<u32>(0x95c220u);  // (from the original)
    *gptr<u32>(r13 + 4u) = u32(r0);
    res = r0 & r1;
    r0 = res;
    if (res != 0) {
        r0 = 1u;
    }
    r1 = *gptr<u32>(r13 + 0x10u);  // (from the original)
    if (r1 == r0) {
        goto L_3195e6;
    }
    r6 = 0u;
L_3195a0:;
    r5 = 0u;
L_3195a2:;
    r4 = 0u;
    do {
L_3195a4:;
        guest::cpu()->r[13] = r13;
        r0 = call_002f74c8(r0, r1, r2, r3);
        *gptr<u32>(r13) = u32(r0);
        r3 = 1u;
        r1 = r6;
        r0 = r5;
        r2 = uxtb(r4);
        guest::cpu()->r[13] = r13;
        r0 = call_00319aa4(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r4 = r4 + 1u;
        guest::preempt();
    } while (s32(r4) < s32(2u));
    r5 = r5 + 1u;
    if (s32(r5) < s32(0x10u)) {  // (from the original)
        guest::preempt();
        goto L_3195a2;
    }
    r6 = r6 + 1u;
    if (s32(r6) < s32(0x10u)) {  // (from the original)
        guest::preempt();
        goto L_3195a0;
    }
    r1 = *gptr<u32>(r13 + 4u);
    r0 = 0x95c218u;  // (from the original)
    r2 = *gptr<u32>(r0 + 8u);
    if (*gptr<u32>(r13 + 0x10u) != 0) {  // (from the original)
        *gptr<u32>(r0 + 8u) = u32(r1 | r2);
    } else {
        *gptr<u32>(r0 + 8u) = u32(r2 & ~r1);
    }
    r0 = 0u;
    r1 = r7 << 1;
    *gptr<u16>(0xad555cu + r1) = u16(r0);  // (from the original)
L_3195e6:;
    r13 = r13 + 0x14u;  // (from the original)
    r4 = *gptr<u32>(r13);
    r5 = *gptr<u32>(r13 + 4);
    r6 = *gptr<u32>(r13 + 8);
    r7 = *gptr<u32>(r13 + 0xc);  // (from the original)
    tpc = *gptr<u32>(r13 + 0x10);  // (from the original)
    r13 = r13 + 0x14;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[4] = r4;
    guest::cpu()->r[5] = r5;
    guest::cpu()->r[6] = r6;
    guest::cpu()->r[7] = r7;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_00319568
GUEST_EXPORT(0x00319569, d_00319568::f_00319568);

// f_00319aa4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00319aa4 {

inline constexpr guest::Function<0x005826e8, u32(u32, u32, u32, u32)> call_005826e8;  // (from the original)

u32 f_00319aa4(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 0x18;  // (from the original)
    r4 = r1;
    r7 = r0;
    r0 = *gptr<u32>(r13 + 0x18u);  // (from the original)
    r6 = r2;
    r5 = r3;
    guest::cpu()->r[13] = r13;
    r0 = call_005826e8(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    if (r0 != 0) {
        r1 = lsl_r(1u, r7 & 0xfu);  // (from the original)
        r0 = r0 + ((r6 & 1u) << 5) + ((r4 & 0xfu) << 1);  // (from the original)
        r2 = u32(*gptr<u16>(r0));
        if (r5 == 0) {
            r1 = r2 & ~r1;
        } else {
            r1 = r1 | r2;
        }
        *gptr<u16>(r0) = u16(r1);
    }
    r13 = r13 + 0x18;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_00319aa4
GUEST_EXPORT(0x00319aa4, d_00319aa4::f_00319aa4);

// f_0031a334: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0031a334 {

inline constexpr guest::Function<0x001b1b40, u32(u32, u32, u32, u32)> call_001b1b40;  // (from the original)
inline constexpr guest::Function<0x002fae84, u32(u32, u32, u32, u32)> call_002fae84;  // (from the original)
inline constexpr guest::Function<0x002fcbb0, u32(u32, u32, u32, u32)> call_002fcbb0;  // (from the original)
inline constexpr guest::Function<0x002ff6f8, u32(u32, u32, u32, u32)> call_002ff6f8;  // (from the original)
inline constexpr guest::Function<0x0031a334, u32(u32, u32, u32, u32)> call_0031a334;  // (from the original)
inline constexpr guest::Function<0x005359fc, u32(u32, u32, u32, u32)> call_005359fc;  // (from the original)
inline constexpr guest::Function<0x005361a8, u32(u32, u32, u32, u32)> call_005361a8;  // (from the original)
inline constexpr guest::Function<0x0070b49c, u32(u32, u32, u32, u32)> call_0070b49c;  // (from the original)
inline constexpr guest::Function<0x0070b510, u32(u32, u32, u32, u32)> call_0070b510;  // (from the original)
inline constexpr guest::Function<0x0070b574, u32(u32, u32, u32, u32)> call_0070b574;  // (from the original)
inline constexpr guest::Function<0x0070b5e8, u32(u32, u32, u32, u32)> call_0070b5e8;  // (from the original)
inline constexpr guest::Function<0x0070b65c, u32(u32, u32, u32, u32)> call_0070b65c;  // (from the original)
inline constexpr guest::Function<0x0070b694, u32(u32, u32, u32, u32)> call_0070b694;  // (from the original)
inline constexpr guest::Function<0x0070b6d0, u32(u32, u32, u32, u32)> call_0070b6d0;  // (from the original)
inline constexpr guest::Function<0x0070b70c, u32(u32, u32, u32, u32)> call_0070b70c;  // (from the original)

u32 f_0031a334(u32 r0, u32 r1, u32 r2, u32 r3) {
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
    u32 r12 = 0;
    u32 r13 = guest::cpu()->r[13];
    u32 zf = 0;
    u32 cf = 0;
    r13 = r13 - 0x24;  // (from the original)
    zf = r2 == 4u;
    r13 = r13 - 0x1cu;  // (from the original)
    r7 = r2;
    r9 = r0;
    r5 = r1;
    if (!zf) {
        zf = r7 == 3u;
        if (zf) {
            goto L_31a404;
        }
        guest::cpu()->r[13] = r13;
        r0 = call_002fae84(r0, r1, r2, r3);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r1 = r0 + 0x62000u;  // (from the original)
        r1 = r1 + 0x1ccu;  // (from the original)
        r0 = r13;
        guest::cpu()->r[13] = r13;
        r0 = call_001b1b40(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r0 = 5u;
        guest::cpu()->r[13] = r13;
        r0 = call_005359fc(r0, r1, r2, r3);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        ea = r0;
        r0 = *gptr<u32>(ea);
        r6 = *gptr<u32>(ea + 4);
        r10 = uxth(r0);
        r1 = r10;
        r0 = r13 + 4u;
        guest::cpu()->r[13] = r13;
        r0 = call_002fcbb0(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r0 = r13 + 4u;
        guest::cpu()->r[13] = r13;
        r0 = call_005361a8(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r4 = r0;
        guest::cpu()->r[13] = r13;
        r0 = call_002fae84(r0, r1, r2, r3);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r12 = guest::cpu()->r[12];
        r1 = 0x6214eu;  // (from the original)
        r0 = u32(*gptr<u8>(r0 + r1));
        zf = r0 >> 4 == 0;
        if (zf) {
            r8 = 1u;
        } else {
            r8 = 0u;
        }
        zf = r7 == 1u;
        if (zf) {
            goto L_31a470;
        }
        zf = r7 == 2u;
        if (zf) {
            goto L_31a72c;
        }
        zf = r7 == 5u;
        if (zf) {
            goto L_31a9d4;
        }
        zf = r7 == 6u;
        if (zf) {
            goto L_31a9ec;
        }
        zf = r7 == 7u;
        if (zf) {
            goto L_31aa04;
        }
        zf = r7 == 8u;
        if (zf) {
            goto L_31aa1c;
        }
        goto L_31aa2c;
    }
    r2 = 5u;
    guest::cpu()->r[13] = r13;
    r0 = call_0031a334(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    r2 = 6u;
    r1 = r5;
    r0 = r9;
    guest::cpu()->r[13] = r13;
    r0 = call_0031a334(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    goto L_31a428;
L_31a404:;
    r0 = 3u;
    guest::cpu()->r[13] = r13;
    r0 = call_002ff6f8(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r3 = guest::cpu()->r[3];
    zf = r0 == 0;
    if (zf) {
        goto L_31a440;
    }
    zf = r0 == 1u;
    if (zf) {
        goto L_31a458;
    }
    zf = r0 == 2u;
    if (!zf) {
        goto L_31a438;
    }
L_31a428:;
    r2 = 7u;
    r1 = r5;
    r0 = r9;
    guest::cpu()->r[13] = r13;
    r0 = call_0031a334(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
L_31a438:;
    r13 = r13 + 0x1cu;  // (from the original)
    r13 = r13 + 0x24;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
L_31a440:;
    r2 = 5u;
    r1 = r5;
    r0 = r9;
    guest::cpu()->r[13] = r13;
    r0 = call_0031a334(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r13 = r13 + 0x1cu;  // (from the original)
    r13 = r13 + 0x24;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
L_31a458:;
    r2 = 6u;
    r1 = r5;
    r0 = r9;
    guest::cpu()->r[13] = r13;
    r0 = call_0031a334(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r13 = r13 + 0x1cu;  // (from the original)
    r13 = r13 + 0x24;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
L_31a470:;
    r1 = 5u;
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_0070b65c(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    *gptr<u32>(r13 + 8u) = u32(r0);
    r1 = 5u;
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_0070b694(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    *gptr<u32>(r13 + 0xcu) = u32(r0);  // (from the original)
    r1 = 5u;
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_0070b6d0(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    *gptr<u32>(r13 + 0x10u) = u32(r0);  // (from the original)
    r1 = 5u;
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_0070b70c(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    *gptr<u32>(r13 + 0x14u) = u32(r0);  // (from the original)
    r1 = 5u;
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_0070b574(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    zf = r6 == 0;
    cf = r6 >= 0u;
    r11 = r0;
    r7 = 0u;
    if (!cf || zf) {
        goto L_31a61c;
    }
L_31a4cc:;
    r0 = u32(*gptr<u8>(r4 + 0x19u));  // (from the original)
    r0 = r0 & 0xfu;  // (from the original)
    cf = r0 >= 0xeu;  // (from the original)
    if (cf) {
        r0 = 0u;
    }
    zf = r0 == r5;
    if (!zf) {
        goto L_31a60c;
    }
    zf = r8 == 0;
    if (zf) {
        r0 = u32(*gptr<u8>(r4 + 0x1bu));  // (from the original)
        zf = (r0 & 1u) == 0;
        if (!zf) {
            goto L_31a60c;
        }
    }
    r0 = u32(*gptr<u8>(r4 + 0xdu));  // (from the original)
    cf = r0 >= 0xb9u;  // (from the original)
    if (cf) {
        r1 = 0u;
    } else {
        r1 = r0;
    }
    zf = r1 == r11;
    if (zf) {
        goto L_31a60c;
    }
    cf = r0 >= 0xb9u;  // (from the original)
    if (!cf) {
        zf = r0 == 0x14u;  // (from the original)
        if (zf) {
            goto L_31a554;
        }
    }
    cf = r0 >= 0xb9u;  // (from the original)
    if (!cf) {
        zf = r0 == 0x15u;  // (from the original)
        if (zf) {
            goto L_31a57c;
        }
    }
    cf = r0 >= 0xb9u;  // (from the original)
    if (!cf) {
        zf = r0 == 0x16u;  // (from the original)
        if (zf) {
            goto L_31a5a4;
        }
    }
    cf = r0 >= 0xb9u;  // (from the original)
    if (cf) {
        goto L_31a60c;
    }
    zf = r0 == 0x17u;  // (from the original)
    if (!zf) {
        goto L_31a60c;
    }
    goto L_31a5cc;
L_31a554:;
    r0 = 0x64u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002ff6f8(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = *gptr<u32>(r13 + 8u);
    cf = r0 >= r1;
    if (cf) {
        goto L_31a60c;
    }
    r1 = 0x372au;  // (from the original)
    r0 = r10 + r7;
    cf = r1 >= r0;
    if (cf) {
        goto L_31a5f0;
    }
    goto L_31a60c;
L_31a57c:;
    r0 = 0x64u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002ff6f8(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = *gptr<u32>(r13 + 0xcu);  // (from the original)
    cf = r0 >= r1;
    if (cf) {
        goto L_31a60c;
    }
    r1 = 0x372au;  // (from the original)
    r0 = r10 + r7;
    cf = r1 >= r0;
    if (cf) {
        goto L_31a5f0;
    }
    goto L_31a60c;
L_31a5a4:;
    r0 = 0x64u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002ff6f8(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = *gptr<u32>(r13 + 0x10u);  // (from the original)
    cf = r0 >= r1;
    if (cf) {
        goto L_31a60c;
    }
    r1 = 0x372au;  // (from the original)
    r0 = r10 + r7;
    cf = r1 >= r0;
    if (cf) {
        goto L_31a5f0;
    }
    goto L_31a60c;
L_31a5cc:;
    r0 = 0x64u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002ff6f8(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = *gptr<u32>(r13 + 0x14u);  // (from the original)
    cf = r0 >= r1;
    if (cf) {
        goto L_31a60c;
    }
    r1 = 0x372au;  // (from the original)
    r0 = r10 + r7;
    cf = r1 >= r0;
    if (!cf) {
        goto L_31a60c;
    }
L_31a5f0:;
    r1 = r0 - 0x2000u;  // (from the original)
    r2 = 1u;
    r0 = r1 >> 5;
    r1 = r1 & 0x1fu;  // (from the original)
    r3 = *gptr<u32>(r9 + (r0 << 2));
    r1 = r3 | lsl_r(r2, r1 & 0xff);  // (from the original)
    *gptr<u32>(r9 + (r0 << 2)) = u32(r1);
L_31a60c:;
    r7 = r7 + 1u;
    zf = r6 == r7;
    cf = r6 >= r7;
    r4 = r4 + 0x1eu;  // (from the original)
    if (cf && !zf) {
        guest::preempt();
        goto L_31a4cc;
    }
L_31a61c:;
    r2 = 0u;
    r1 = r2;
L_31a624:;
    r0 = *gptr<u32>(r9 + (r1 << 2));
    zf = r0 == 0;
    if (zf) {
        goto L_31a640;
    }
    do {
L_31a630:;
        zf = (r0 & 1u) == 0;
        if (!zf) {
            r2 = r2 + 1u;
        }
        res = r0 >> 1;
        zf = res == 0;
        r0 = res;
        guest::preempt();
    } while (!zf);
L_31a640:;
    r1 = r1 + 1u;
    cf = r1 >= 0xbau;  // (from the original)
    if (!cf) {
        guest::preempt();
        goto L_31a624;
    }
    zf = r2 == 0;
    if (!zf) {
        goto L_31ab5c;
    }
    r2 = 5u;
    r1 = r5;
    r0 = r9;
    guest::cpu()->r[13] = r13;
    r0 = call_0031a334(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    r2 = 0u;
    r1 = r2;
L_31a66c:;
    r0 = *gptr<u32>(r9 + (r1 << 2));
    zf = r0 == 0;
    if (zf) {
        goto L_31a688;
    }
    do {
L_31a678:;
        zf = (r0 & 1u) == 0;
        if (!zf) {
            r2 = r2 + 1u;
        }
        res = r0 >> 1;
        zf = res == 0;
        r0 = res;
        guest::preempt();
    } while (!zf);
L_31a688:;
    r1 = r1 + 1u;
    cf = r1 >= 0xbau;  // (from the original)
    if (!cf) {
        guest::preempt();
        goto L_31a66c;
    }
    zf = r2 == 0;
    if (!zf) {
        goto L_31ab5c;
    }
    r0 = r13 + 4u;
    guest::cpu()->r[13] = r13;
    r0 = call_005361a8(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    zf = r0 == 0;
    if (zf) {
        goto L_31ab5c;
    }
    zf = r6 == 0;
    cf = r6 >= 0u;
    r1 = 0u;
    if (!cf || zf) {
        goto L_31ab5c;
    }
    do {
L_31a6bc:;
        r2 = u32(*gptr<u8>(r0 + 0x19u));  // (from the original)
        r2 = r2 & 0xfu;  // (from the original)
        cf = r2 >= 0xeu;  // (from the original)
        if (cf) {
            r2 = 0u;
        }
        zf = r2 == r5;
        if (zf) {
            zf = r8 == 0;
            if (!zf) {
                goto L_31a6fc;
            }
            r2 = u32(*gptr<u8>(r0 + 0x1bu));  // (from the original)
            zf = (r2 & 1u) == 0;
            if (zf) {
                goto L_31a6fc;
            }
        }
        r1 = r1 + 1u;
        zf = r6 == r1;
        cf = r6 >= r1;
        r0 = r0 + 0x1eu;  // (from the original)
        guest::preempt();
    } while (cf && !zf);
    goto L_31ab5c;
L_31a6fc:;
    r0 = r10 + r1;
    r1 = 0x372au;  // (from the original)
    zf = r0 == r1;
    cf = r0 >= r1;
    if (cf && !zf) {
        goto L_31ab5c;
    }
    r1 = r0 - 0x2000u;  // (from the original)
    r2 = 1u;
    r0 = r1 >> 5;
    r1 = r1 & 0x1fu;  // (from the original)
    r3 = *gptr<u32>(r9 + (r0 << 2));
    r1 = r3 | lsl_r(r2, r1 & 0xff);  // (from the original)
    *gptr<u32>(r9 + (r0 << 2)) = u32(r1);
    goto L_31ab5c;
L_31a72c:;
    r1 = 5u;
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_0070b65c(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    *gptr<u32>(r13 + 8u) = u32(r0);
    r1 = 5u;
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_0070b694(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    *gptr<u32>(r13 + 0xcu) = u32(r0);  // (from the original)
    r1 = 5u;
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_0070b6d0(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    *gptr<u32>(r13 + 0x10u) = u32(r0);  // (from the original)
    r1 = 5u;
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_0070b70c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    zf = r6 == 0;
    cf = r6 >= 0u;
    if (cf && !zf) {
        r11 = 0x372au;  // (from the original)
    }
    r7 = 0u;
    *gptr<u32>(r13 + 0x14u) = u32(r0);  // (from the original)
    if (!cf || zf) {
        goto L_31a8c4;
    }
L_31a77c:;
    r0 = u32(*gptr<u8>(r4 + 0x19u));  // (from the original)
    r0 = r0 & 0xfu;  // (from the original)
    cf = r0 >= 0xeu;  // (from the original)
    if (cf) {
        r0 = 0u;
    }
    zf = r0 == r5;
    if (!zf) {
        goto L_31a8b4;
    }
    zf = r8 == 0;
    if (zf) {
        r0 = u32(*gptr<u8>(r4 + 0x1bu));  // (from the original)
        zf = (r0 & 1u) == 0;
        if (!zf) {
            goto L_31a8b4;
        }
    }
    r0 = u32(*gptr<u8>(r4 + 0xdu));  // (from the original)
    cf = r0 >= 0xb9u;  // (from the original)
    if (!cf) {
        zf = r0 == 0x14u;  // (from the original)
        if (zf) {
            goto L_31a7f0;
        }
    }
    cf = r0 >= 0xb9u;  // (from the original)
    if (!cf) {
        zf = r0 == 0x15u;  // (from the original)
        if (zf) {
            goto L_31a814;
        }
    }
    cf = r0 >= 0xb9u;  // (from the original)
    if (!cf) {
        zf = r0 == 0x16u;  // (from the original)
        if (zf) {
            goto L_31a854;
        }
    }
    cf = r0 >= 0xb9u;  // (from the original)
    if (cf) {
        goto L_31a8b4;
    }
    zf = r0 == 0x17u;  // (from the original)
    if (!zf) {
        goto L_31a8b4;
    }
    goto L_31a878;
L_31a7f0:;
    r0 = 0x64u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002ff6f8(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = *gptr<u32>(r13 + 8u);
    cf = r0 >= r1;
    if (cf) {
        goto L_31a8b4;
    }
    r0 = r10 + r7;
    cf = r11 >= r0;
    if (cf) {
        goto L_31a834;
    }
    goto L_31a8b4;
L_31a814:;
    r0 = 0x64u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002ff6f8(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = *gptr<u32>(r13 + 0xcu);  // (from the original)
    cf = r0 >= r1;
    if (cf) {
        goto L_31a8b4;
    }
    r0 = r10 + r7;
    cf = r11 >= r0;
    if (!cf) {
        goto L_31a8b4;
    }
L_31a834:;
    r1 = r0 - 0x2000u;  // (from the original)
    r2 = 1u;
    r0 = r1 >> 5;
    r1 = r1 & 0x1fu;  // (from the original)
    r3 = *gptr<u32>(r9 + (r0 << 2));
    r1 = r3 | lsl_r(r2, r1 & 0xff);  // (from the original)
    *gptr<u32>(r9 + (r0 << 2)) = u32(r1);
    goto L_31a8b4;
L_31a854:;
    r0 = 0x64u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002ff6f8(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = *gptr<u32>(r13 + 0x10u);  // (from the original)
    cf = r0 >= r1;
    if (cf) {
        goto L_31a8b4;
    }
    r0 = r10 + r7;
    cf = r11 >= r0;
    if (cf) {
        goto L_31a898;
    }
    goto L_31a8b4;
L_31a878:;
    r0 = 0x64u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002ff6f8(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = *gptr<u32>(r13 + 0x14u);  // (from the original)
    cf = r0 >= r1;
    if (cf) {
        goto L_31a8b4;
    }
    r0 = r10 + r7;
    cf = r11 >= r0;
    if (!cf) {
        goto L_31a8b4;
    }
L_31a898:;
    r0 = r0 - 0x2000u;  // (from the original)
    r1 = 1u;
    r3 = r0 >> 5;
    r0 = r0 & 0x1fu;  // (from the original)
    r2 = *gptr<u32>(r9 + (r3 << 2));
    r0 = r2 | lsl_r(r1, r0 & 0xff);  // (from the original)
    *gptr<u32>(r9 + (r3 << 2)) = u32(r0);
L_31a8b4:;
    r7 = r7 + 1u;
    zf = r6 == r7;
    cf = r6 >= r7;
    r4 = r4 + 0x1eu;  // (from the original)
    if (cf && !zf) {
        guest::preempt();
        goto L_31a77c;
    }
L_31a8c4:;
    r2 = 0u;
    r1 = r2;
L_31a8cc:;
    r0 = *gptr<u32>(r9 + (r1 << 2));
    zf = r0 == 0;
    if (zf) {
        goto L_31a8e8;
    }
    do {
L_31a8d8:;
        zf = (r0 & 1u) == 0;
        if (!zf) {
            r2 = r2 + 1u;
        }
        res = r0 >> 1;
        zf = res == 0;
        r0 = res;
        guest::preempt();
    } while (!zf);
L_31a8e8:;
    r1 = r1 + 1u;
    cf = r1 >= 0xbau;  // (from the original)
    if (!cf) {
        guest::preempt();
        goto L_31a8cc;
    }
    zf = r2 == 0;
    if (!zf) {
        goto L_31ab5c;
    }
    r2 = 5u;
    r1 = r5;
    r0 = r9;
    guest::cpu()->r[13] = r13;
    r0 = call_0031a334(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    r2 = 0u;
    r1 = r2;
L_31a914:;
    r0 = *gptr<u32>(r9 + (r1 << 2));
    zf = r0 == 0;
    if (zf) {
        goto L_31a930;
    }
    do {
L_31a920:;
        zf = (r0 & 1u) == 0;
        if (!zf) {
            r2 = r2 + 1u;
        }
        res = r0 >> 1;
        zf = res == 0;
        r0 = res;
        guest::preempt();
    } while (!zf);
L_31a930:;
    r1 = r1 + 1u;
    cf = r1 >= 0xbau;  // (from the original)
    if (!cf) {
        guest::preempt();
        goto L_31a914;
    }
    zf = r2 == 0;
    if (!zf) {
        goto L_31ab5c;
    }
    r0 = r13 + 4u;
    guest::cpu()->r[13] = r13;
    r0 = call_005361a8(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    zf = r0 == 0;
    if (zf) {
        goto L_31ab5c;
    }
    zf = r6 == 0;
    cf = r6 >= 0u;
    r1 = 0u;
    if (!cf || zf) {
        goto L_31ab5c;
    }
    do {
L_31a964:;
        r2 = u32(*gptr<u8>(r0 + 0x19u));  // (from the original)
        r2 = r2 & 0xfu;  // (from the original)
        cf = r2 >= 0xeu;  // (from the original)
        if (cf) {
            r2 = 0u;
        }
        zf = r2 == r5;
        if (zf) {
            zf = r8 == 0;
            if (!zf) {
                goto L_31a9a4;
            }
            r2 = u32(*gptr<u8>(r0 + 0x1bu));  // (from the original)
            zf = (r2 & 1u) == 0;
            if (zf) {
                goto L_31a9a4;
            }
        }
        r1 = r1 + 1u;
        zf = r6 == r1;
        cf = r6 >= r1;
        r0 = r0 + 0x1eu;  // (from the original)
        guest::preempt();
    } while (cf && !zf);
    goto L_31ab5c;
L_31a9a4:;
    r0 = r10 + r1;
    r1 = 0x372au;  // (from the original)
    zf = r0 == r1;
    cf = r0 >= r1;
    if (cf && !zf) {
        goto L_31ab5c;
    }
L_31a9b4:;
    r0 = r0 - 0x2000u;  // (from the original)
    r2 = 1u;
    r1 = r0 >> 5;
    r0 = r0 & 0x1fu;  // (from the original)
    r3 = *gptr<u32>(r9 + (r1 << 2));
    r0 = r3 | lsl_r(r2, r0 & 0xff);  // (from the original)
    *gptr<u32>(r9 + (r1 << 2)) = u32(r0);
    goto L_31ab5c;
L_31a9d4:;
    r1 = 5u;
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_0070b510(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r12 = guest::cpu()->r[12];
    goto L_31aa28;
L_31a9ec:;
    r1 = 5u;
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_0070b5e8(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r12 = guest::cpu()->r[12];
    goto L_31aa28;
L_31aa04:;
    r1 = 5u;
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_0070b49c(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r12 = guest::cpu()->r[12];
    goto L_31aa28;
L_31aa1c:;
    r1 = 5u;
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_0070b574(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r12 = guest::cpu()->r[12];
L_31aa28:;
    r7 = r0;
L_31aa2c:;
    zf = r6 == 0;
    cf = r6 >= 0u;
    if (cf && !zf) {
        r12 = 0x372au;  // (from the original)
    }
    r0 = 0u;
    if (cf && !zf) {
        r3 = 1u;
    }
    if (!cf || zf) {
        goto L_31aab4;
    }
L_31aa40:;
    r1 = u32(*gptr<u8>(r4 + 0x19u));  // (from the original)
    r1 = r1 & 0xfu;  // (from the original)
    cf = r1 >= 0xeu;  // (from the original)
    if (cf) {
        r1 = 0u;
    }
    zf = r1 == r5;
    if (!zf) {
        goto L_31aaa4;
    }
    r1 = u32(*gptr<u8>(r4 + 0xdu));  // (from the original)
    cf = r1 >= 0xb9u;  // (from the original)
    if (cf) {
        r1 = 0u;
    }
    zf = r1 == r7;
    if (!zf) {
        goto L_31aaa4;
    }
    zf = r8 == 0;
    if (zf) {
        r1 = u32(*gptr<u8>(r4 + 0x1bu));  // (from the original)
        zf = (r1 & 1u) == 0;
        if (!zf) {
            goto L_31aaa4;
        }
    }
    r1 = r10 + r0;
    zf = r1 == r12;
    cf = r1 >= r12;
    if (cf && !zf) {
        goto L_31aaa4;
    }
    r2 = r1 - 0x2000u;  // (from the original)
    r1 = r2 >> 5;
    r2 = r2 & 0x1fu;  // (from the original)
    r11 = *gptr<u32>(r9 + (r1 << 2));
    r2 = r11 | lsl_r(r3, r2 & 0xff);  // (from the original)
    *gptr<u32>(r9 + (r1 << 2)) = u32(r2);
L_31aaa4:;
    r0 = r0 + 1u;
    zf = r6 == r0;
    cf = r6 >= r0;
    r4 = r4 + 0x1eu;  // (from the original)
    if (cf && !zf) {
        guest::preempt();
        goto L_31aa40;
    }
L_31aab4:;
    r3 = 0u;
    r1 = r3;
L_31aabc:;
    r0 = *gptr<u32>(r9 + (r1 << 2));
    zf = r0 == 0;
    if (zf) {
        goto L_31aad8;
    }
    do {
L_31aac8:;
        zf = (r0 & 1u) == 0;
        if (!zf) {
            r3 = r3 + 1u;
        }
        res = r0 >> 1;
        zf = res == 0;
        r0 = res;
        guest::preempt();
    } while (!zf);
L_31aad8:;
    r1 = r1 + 1u;
    cf = r1 >= 0xbau;  // (from the original)
    if (!cf) {
        guest::preempt();
        goto L_31aabc;
    }
    zf = r3 == 0;
    if (!zf) {
        goto L_31ab5c;
    }
    r0 = r13 + 4u;
    guest::cpu()->r[13] = r13;
    r0 = call_005361a8(r0, r1, r2, r3);
    zf = r0 == 0;
    r1 = r0;
    if (zf) {
        goto L_31ab5c;
    }
    zf = r6 == 0;
    cf = r6 >= 0u;
    r0 = 0u;
    if (!cf || zf) {
        goto L_31ab5c;
    }
L_31ab0c:;
    r2 = u32(*gptr<u8>(r1 + 0x19u));  // (from the original)
    r2 = r2 & 0xfu;  // (from the original)
    cf = r2 >= 0xeu;  // (from the original)
    if (cf) {
        r2 = 0u;
    }
    zf = r2 == r5;
    if (!zf) {
        goto L_31ab4c;
    }
    r2 = u32(*gptr<u8>(r1 + 0xdu));  // (from the original)
    cf = r2 >= 0xb9u;  // (from the original)
    if (cf) {
        r2 = 0u;
    }
    zf = r2 == r7;
    if (!zf) {
        goto L_31ab4c;
    }
    r1 = 0x372au;  // (from the original)
    r0 = r0 + r10;
    zf = r0 == r1;
    cf = r0 >= r1;
    if (cf && !zf) {
        goto L_31ab5c;
    }
    guest::preempt();
    goto L_31a9b4;
L_31ab4c:;
    r0 = r0 + 1u;
    zf = r6 == r0;
    cf = r6 >= r0;
    r1 = r1 + 0x1eu;  // (from the original)
    if (cf && !zf) {
        guest::preempt();
        goto L_31ab0c;
    }
L_31ab5c:;
    r0 = r13;
    r13 = r13 + 0x1cu;  // (from the original)
    r13 = r13 + 0x24;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_0031a334
GUEST_EXPORT(0x0031a334, d_0031a334::f_0031a334);

// f_0031af8c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0031af8c {

struct __attribute__((packed)) Object_0031af8c_0 {
    u32 word_0;
    u8 unknown_4[0x24];  // (not used here)
    u32 word_28;
    u8 unknown_2c[0x78];  // (not used here)
    u32 word_a4;
    u8 unknown_a8[0x2e78];  // (not used here)
    u32 word_2f20;
    u8 unknown_2f24[0x394];  // (not used here)
    u32 word_32b8;
    u8 unknown_32bc[0xe0];  // (not used here)
    u32 word_339c;
};
GUEST_OFFSET(Object_0031af8c_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_0031af8c_0, word_28, 0x28);  // (from the original)
GUEST_OFFSET(Object_0031af8c_0, word_a4, 0xa4);  // (from the original)
GUEST_OFFSET(Object_0031af8c_0, word_2f20, 0x2f20);  // (from the original)
GUEST_OFFSET(Object_0031af8c_0, word_32b8, 0x32b8);  // (from the original)
GUEST_OFFSET(Object_0031af8c_0, word_339c, 0x339c);  // (from the original)

inline constexpr guest::Function<0x002f76ad, u32(u32, u32, u32, u32)> call_002f76ac;  // (from the original)
inline constexpr guest::Function<0x002f770c, u32(u32, u32, u32, u32)> call_002f770c;  // (from the original)
inline constexpr guest::Function<0x002f7710, u32(u32, u32, u32, u32)> call_002f7710;  // (from the original)
inline constexpr guest::Function<0x003170d0, u32(u32, u32, u32, u32)> call_003170d0;  // (from the original)
inline constexpr guest::Function<0x00317dec, u32(u32, u32, u32, u32)> call_00317dec;  // (from the original)
inline constexpr guest::Function<0x00567ef0, u32(u32, u32, u32, u32)> call_00567ef0;  // (from the original)
inline constexpr guest::Function<0x0056988c, u32(u32, u32, u32, u32)> call_0056988c;  // (from the original)
inline constexpr guest::Function<0x005bf744, u32(u32, u32, u32, u32)> call_005bf744;  // (from the original)
inline constexpr guest::Function<0x005d703c, u32(u32, u32, u32, u32)> call_005d703c;  // (from the original)
inline constexpr guest::Function<0x005e3194, u32(u32, u32, u32, u32)> call_005e3194;  // (from the original)
inline constexpr guest::Function<0x006aaa30, u32(u32, u32, u32, u32)> call_006aaa30;  // (from the original)

u32 f_0031af8c(gptr<Object_0031af8c_0> arg0) {
    u32 ea = 0;
    u32 r0 = arg0.addr();
    u32 r1 = 0;
    u32 r2 = 0;
    u32 r3 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r13 = guest::cpu()->r[13];
    r2 = 0x8f444cu;  // (from the original)
    r13 = r13 - 8;
    r3 = r2 + 0x6cu;  // (from the original)
    arg0->word_a4 = u32(r3 + 0x104u);  // (from the original)
    arg0->word_0 = u32(r2);
    arg0->word_28 = u32(r3);
    r1 = 0x8ef284u;  // (from the original)
    r2 = 0x518u;  // (from the original)
    arg0->word_2f20 = u32(0x8ee228u);  // (from the original)
    r4 = r0 + 0x32b8u;  // (from the original)
    arg0->word_339c = u32(r1 + 0x44u);  // (from the original)
    arg0->word_32b8 = u32(r1);
    r1 = 0x2e0b3cu;  // (from the original)
    r3 = 2u;
    r0 = r4 + 0x118u;  // (from the original)
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
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = 0x8f8b4cu;  // (from the original)
    *gptr<u32>(r0 - 0x954u) = u32(r1);  // (from the original)
    r0 = r0 - 0x44u;  // (from the original)
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
    r0 = r0 - 0x248u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00567ef0(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0x14cu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_005bf744(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0xd0u;  // (from the original)
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
    r0 = r0 - 0x100u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_005d703c(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = 0x8f47a0u;  // (from the original)
    *gptr<u32>(r0 - 0x518u) = u32(r1);  // (from the original)
    r0 = r0 - 0xfcu;  // (from the original)
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
    r0 = r0 - 0x15cu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_005bf744(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0x24cu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00567ef0(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0x50u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0056988c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0056988c(r0, r1, r2, r3);
    r0 = r0 - 0x28u;  // (from the original)
    r1 = 0x320b0cu;  // (from the original)
    r4 = r0 - 0x2060u;  // (from the original)
    r3 = 0xau;  // (from the original)
    r2 = 0x290u;  // (from the original)
    r0 = r0 - 0x19a4u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002f76ac(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = 0x8ee248u;  // (from the original)
    r1 = r0 + 0x10u;  // (from the original)
    ea = r4 + 0x57cu;  // (from the original)
    *gptr<u32>(ea) = u32(r0);
    r4 = ea;
    r0 = r4 + 0x114u;  // (from the original)
    *gptr<u32>(r4 + 0xcu) = u32(r1);  // (from the original)
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
    r0 = r0 - 0x2cu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0056988c(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = 0x8f08acu;  // (from the original)
    ea = r0 - 0x138u;  // (from the original)
    *gptr<u32>(ea) = u32(r1);
    r0 = ea;
    guest::cpu()->r[13] = r13;
    r0 = call_002f7710(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 8u;
    guest::cpu()->r[13] = r13;
    r0 = call_00317dec(r0, r1, r2, r3);
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
    r0 = r0 - 0xa0u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_003170d0(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r13 = r13 + 8;
    r0 = r0 - 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    return call_006aaa30(r0, r1, r2, r3);
}

}  // namespace d_0031af8c
GUEST_EXPORT(0x0031af8c, d_0031af8c::f_0031af8c);

// f_0031b25c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0031b25c {

inline constexpr guest::Function<0x005fdf68, u32(u32, u32, u32, u32)> call_005fdf68;  // (from the original)

u32 f_0031b25c(u32 r0, u32 r1) {
    u32 r2 = 0;
    r2 = 9u;
    guest::cpu()->r[13] -= 8u;
    r0 = call_005fdf68(r0, r1, r2, guest::cpu()->r[3]);
    r1 = 0x908b9cu;  // (from the original)
    *gptr<u32>(r0) = u32(r1);
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_0031b25c
GUEST_EXPORT(0x0031b25c, d_0031b25c::f_0031b25c);

// f_0031b394: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0031b394 {

inline constexpr guest::Function<0x002f7a10, u32(u32, u32, u32, u32)> call_002f7a10;  // (from the original)

u32 f_0031b394(u32 r0, u32 r1) {
    guest::cpu()->r[13] -= 8u;
    r0 = call_002f7a10(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r0 = *gptr<u32>(r0);
    r1 = *gptr<u8>(0x101u + r0);  // (from the original)
    if (r1 == 1u) {
        r0 = *gptr<u32>(r0 + 0x10bu);  // (from the original)
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r0 = 1u;
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_0031b394
GUEST_EXPORT(0x0031b395, d_0031b394::f_0031b394);

// f_0031b3b2: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0031b3b2 {

struct __attribute__((packed)) Object_0031b3b2_0 {
    u32 word_0;
};
GUEST_OFFSET(Object_0031b3b2_0, word_0, 0x0);  // (from the original)

inline constexpr guest::Function<0x002fa9d0, u32(u32, u32, u32, u32)> call_002fa9d0;  // (from the original)
inline constexpr guest::Function<0x003075cc, u32(u32, u32, u32, u32)> call_003075cc;  // (from the original)
inline constexpr guest::Function<0x00307979, u32(u32, u32, u32, u32)> call_00307978;  // (from the original)
inline constexpr guest::Function<0x00307990, u32(u32, u32, u32, u32)> call_00307990;  // (from the original)

u32 f_0031b3b2(gptr<Object_0031b3b2_0> arg0, u32 r1, u32 r2, u32 r3) {
    u32 ea = 0;
    u32 r0 = arg0.addr();
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r13 = guest::cpu()->r[13];
    ea = r13 - 0x18;  // (from the original)
    *gptr<u32>(ea) = u32(r3);
    r13 = ea;
    r4 = r0;
    r5 = r1;
    r6 = r2;
    r0 = r2;
    r1 = 0u;
    arg0->word_0 = u32(r2);
    guest::cpu()->r[13] = r13;
    r0 = call_00307978(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    *gptr<u32>(r4 + 4u) = u32(r0);
    if (r0 != 0) {
        guest::cpu()->r[13] = r13;
        r0 = call_002fa9d0(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r0 = r0 + 1u;
        guest::cpu()->r[13] = r13;
        r0 = call_003075cc(r0, r1, r2, r3);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r1 = *gptr<u32>(r4 + 4u);
        r7 = r0;
        guest::cpu()->r[13] = r13;
        r0 = call_00307990(r0, r1, r2, r3);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        *gptr<u32>(r4 + 4u) = u32(r7);
    }
    r1 = r5;
    r0 = r6;
    guest::cpu()->r[13] = r13;
    r0 = call_00307978(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r0 = r4;
    r13 = r13 + 0x18;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_0031b3b2
GUEST_EXPORT(0x0031b3b3, d_0031b3b2::f_0031b3b2);

// f_0031b3ea: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0031b3ea {

struct __attribute__((packed)) Object_0031b3ea_0 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Object_0031b3ea_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_0031b3ea_0, word_4, 0x4);  // (from the original)

inline constexpr guest::Function<0x002f88b8, u32(u32, u32, u32, u32)> call_002f88b8;  // (from the original)
inline constexpr guest::Function<0x00307979, u32(u32, u32, u32, u32)> call_00307978;  // (from the original)

u32 f_0031b3ea(gptr<Object_0031b3ea_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r1 = 0;
    u32 r4 = guest::cpu()->r[4];
    guest::cpu()->r[13] -= 8u;
    r1 = arg0->word_4;
    r4 = r0;
    if (r1 == 0) {
        r0 = r4;
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r0 = arg0->word_0;
    r0 = call_00307978(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r0 = *gptr<u32>(r4 + 4u);
    r0 = call_002f88b8(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r0 = r4;
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_0031b3ea
GUEST_EXPORT(0x0031b3eb, d_0031b3ea::f_0031b3ea);

// f_0031b404: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0031b404 {

inline constexpr guest::Function<0x002f91d4, u32(u32, u32, u32, u32)> call_002f91d4;  // (from the original)
inline constexpr guest::Function<0x002fa9d0, u32(u32, u32, u32, u32)> call_002fa9d0;  // (from the original)

u32 f_0031b404(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 ea = 0;
    u32 res = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r13 = guest::cpu()->r[13];
    ea = r13 - 0x18;  // (from the original)
    *gptr<u32>(ea) = u32(r3);
    r13 = ea;
    r5 = r0;
    r4 = r2;
    r6 = r1;
    r0 = r1;
    guest::cpu()->r[13] = r13;
    r0 = call_002fa9d0(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r7 = r0;
    guest::cpu()->r[13] = r13;
    r0 = call_002f91d4(r0, r1, r2, r3);
    r1 = *gptr<u32>(r0);
    r0 = *gptr<u32>(r1);
    if (r0 == 0) {
        goto L_31b43c;
    }
    r1 = r1 + r0;
    if (r4 == 0) {
        goto L_31b438;
    }
    do {
L_31b426:;
        r0 = *gptr<u8>(r6);
        r6 = r6 + 1u;
        if (r0 == 0) {
            goto L_31b450;
        }
        *gptr<u8>(r5) = u8(u32(*gptr<u8>(r1 + r0)));
        r5 = r5 + 1u;
        res = r4 - 1u;
        r4 = res;
        guest::preempt();
    } while (res != 0);
L_31b438:;
    r0 = r7;
    r13 = r13 + 0x18;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
L_31b43c:;
    if (r4 == 0) {
        guest::preempt();
        goto L_31b438;
    }
    r0 = *gptr<u8>(r6);
    r6 = r6 + 1u;
    *gptr<u8>(r5) = u8(r0);
    r5 = r5 + 1u;
    if (r0 == 0) {
        guest::preempt();
        goto L_31b438;
    }
    r4 = r4 - 1u;
    guest::preempt();
    goto L_31b43c;
L_31b450:;
    *gptr<u8>(r5) = u8(0u);
    guest::preempt();
    goto L_31b438;
}

}  // namespace d_0031b404
GUEST_EXPORT(0x0031b405, d_0031b404::f_0031b404);

// f_0031b4c4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0031b4c4 {

inline constexpr guest::Function<0x00307569, u32(u32, u32, u32, u32)> call_00307568;  // (from the original)
inline constexpr guest::Function<0x0031c311, u32(u32, u32, u32, u32)> call_0031c310;  // (from the original)
inline constexpr guest::Function<0x0031c31d, u32(u32, u32, u32, u32)> call_0031c31c;  // (from the original)
inline constexpr guest::Function<0x0031c39d, u32(u32, u32, u32, u32)> call_0031c39c;  // (from the original)

u32 f_0031b4c4(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 ea = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r13 = guest::cpu()->r[13];
    ea = r13 - 0x18;  // (from the original)
    *gptr<u32>(ea) = u32(r2);
    *gptr<u32>(ea + 4) = u32(r3);
    r13 = ea;
    r4 = r2;
    r6 = r1;
    r1 = r3;
    r5 = r0;
    r0 = ~0xeu;  // (from the original)
    if (!(!u32(r4 >= r0) || u32(r4 == r0))) {
        *gptr<u32>(r13) = u32(r0);
        r3 = r4;
        r0 = 8u;
        r2 = 0x31b51cu;  // (from the original)
        r1 = 0x31b51cu;  // (from the original)
        guest::cpu()->r[13] = r13;
        r0 = call_00307568(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
    }
    if (r4 == 0) {
        goto L_31b518;
    }
    *gptr<u32>(r13 + 4u) = u32(0x20u);  // (from the original)
    r1 = r13;
    r0 = r13 + 4u;
    *gptr<u32>(r13) = u32(r4);
    guest::cpu()->r[13] = r13;
    r0 = call_0031c310(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    r1 = *gptr<u32>(r0);
    r2 = r4;
    r0 = r5;
    guest::cpu()->r[13] = r13;
    r0 = call_0031c31c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r3 = guest::cpu()->r[3];
L_31b504:;
    r0 = r0 + 0xcu;  // (from the original)
    *gptr<u32>(r5) = u32(r0);
    if (r6 != 0) {
        r2 = r4;
        r1 = r6;
        guest::cpu()->r[13] = r13;
        r0 = call_0031c39c(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
    }
    r0 = r5;
    r13 = r13 + 0x18;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
L_31b518:;
    r0 = 0xaf7f30u;  // (from the original)
    guest::preempt();
    goto L_31b504;
}

}  // namespace d_0031b4c4
GUEST_EXPORT(0x0031b4c5, d_0031b4c4::f_0031b4c4);

// f_0031b524: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0031b524 {

struct __attribute__((packed)) Object_0031b524_0 {
    u32 word_0;
};
GUEST_OFFSET(Object_0031b524_0, word_0, 0x0);  // (from the original)

inline constexpr guest::Function<0x0031c31d, u32(u32, u32, u32, u32)> call_0031c31c;  // (from the original)
inline constexpr guest::Function<0x0031c39d, u32(u32, u32, u32, u32)> call_0031c39c;  // (from the original)
inline constexpr guest::Function<0x0031c3a9, u32(u32, u32, u32, u32)> call_0031c3a8;  // (from the original)

u32 f_0031b524(gptr<Object_0031b524_0> arg0, u32 r1_unused, u32 r2_unused, u32 r3) {
    u32 ea = 0;
    u32 r0 = arg0.addr();
    u32 r1 = 0;
    u32 r2 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r13 = guest::cpu()->r[13];
    ea = r13 - 0x18;  // (from the original)
    *gptr<u32>(ea) = u32(r3);
    r13 = ea;
    r4 = r0;
    r6 = ~0u;
    r0 = arg0->word_0 - 0xcu;  // (from the original)
    r1 = *gptr<u32>(r0) + 1u;
    if (!(!u32(r1 >= 1u) || u32(r1 == 1u))) {
        r1 = *gptr<u32>(r0 + 8u);
        r5 = r4;
        r2 = r1;
        if (!(!u32(r1 >= r6) || u32(r1 == r6))) {
            r2 = r6;
        }
        r0 = r4;
        guest::cpu()->r[13] = r13;
        r0 = call_0031c31c(r0, r1, r2, r3);
        r3 = guest::cpu()->r[3];
        r1 = *gptr<u32>(r5);
        r0 = r0 + 0xcu;  // (from the original)
        r2 = *gptr<u32>(r1 + 0xfffffffcu);  // (from the original)
        r7 = r0;
        guest::cpu()->r[13] = r13;
        r0 = call_0031c39c(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r0 = r5;
        guest::cpu()->r[13] = r13;
        r0 = call_0031c3a8(r0, r1, r2, r3);
        *gptr<u32>(r5) = u32(r7);
    }
    r1 = 0xaf7f30u;  // (from the original)
    r0 = *gptr<u32>(r4) - 0xcu;  // (from the original)
    if (r0 != r1) {
        *gptr<u32>(r0) = u32(r6);
    }
    r0 = *gptr<u32>(r4);
    r13 = r13 + 0x18;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_0031b524
GUEST_EXPORT(0x0031b525, d_0031b524::f_0031b524);

// f_0031b578: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0031b578 {

inline constexpr guest::Function<0x002fe7dd, u32(u32, u32, u32, u32)> call_002fe7dc;  // (from the original)
inline constexpr guest::Function<0x002fe7f0, u32(u32, u32, u32, u32)> call_002fe7f0;  // (from the original)

u32 f_0031b578(u32 r0_unused, u32 r1, u32 r2) {
    u32 r0 = 0;
    guest::cpu()->r[13] -= 8u;
    if ((*gptr<u32>(0x9825f4u) & 1u) != 0u) {  // (from the original)
        r0 = 0x9825f8u;  // (from the original)
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r0 = 0x9825f4u;  // (from the original)
    r0 = call_002fe7dc(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 == 0) {
        r0 = 0x9825f8u;  // (from the original)
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r0 = 0x9825f8u;  // (from the original)
    r1 = 0u;
    *gptr<u32>(r0) = u32(r1);
    *gptr<u32>(r0 + 4u) = u32(r1);
    r2 = 0x100000u;  // (from the original)
    r1 = 0x11c2a1u;  // (from the original)
    r0 = call_002fe7f0(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r0 = 0x9825f8u;  // (from the original)
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_0031b578
GUEST_EXPORT(0x0031b579, d_0031b578::f_0031b578);

// f_0031b5b8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0031b5b8 {

struct __attribute__((packed)) Object_0031b5b8_0 {
    u32 word_0;
};
GUEST_OFFSET(Object_0031b5b8_0, word_0, 0x0);  // (from the original)

struct __attribute__((packed)) Object_0031b5b8_1 {
    u32 word_0;
};
GUEST_OFFSET(Object_0031b5b8_1, word_0, 0x0);  // (from the original)

inline constexpr guest::Function<0x002ffb64, u32(u32, u32, u32, u32)> call_002ffb64;  // (from the original)
inline constexpr guest::Function<0x0031bea1, u32(u32, u32, u32, u32)> call_0031bea0;  // (from the original)

u32 f_0031b5b8(gptr<Object_0031b5b8_0> arg0, gptr<Object_0031b5b8_1> arg1) {
    u32 res = 0;
    u32 r0 = arg0.addr();
    u32 r1 = arg1.addr();
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r5 = r1;
    r1 = arg0->word_0;
    r4 = r0;
    r0 = arg1->word_0;
    if (r1 == r0) {
        goto L_31b5e8;
    }
    *gptr<u32>(r0 + 0x1cu) = u32(*gptr<u32>(r0 + 0x1cu) + 1u);  // (from the original)
    r0 = arg0->word_0;
    res = *gptr<u32>(r0 + 0x1cu) - 1u;  // (from the original)
    r1 = res;
    *gptr<u32>(r0 + 0x1cu) = u32(r1);  // (from the original)
    if (res != 0) {
        goto L_31b5e4;
    }
    r0 = arg0->word_0;
    if (r0 == 0) {
        goto L_31b5e4;
    }
    r0 = call_0031bea0(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r0 = call_002ffb64(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
L_31b5e4:;
    *gptr<u32>(r4) = u32(*gptr<u32>(r5));
L_31b5e8:;
    r0 = r4;
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_0031b5b8
GUEST_EXPORT(0x0031b5b9, d_0031b5b8::f_0031b5b8);

// f_0031b5ec: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0031b5ec {

inline constexpr guest::Function<0x002fe7dd, u32(u32, u32, u32, u32)> call_002fe7dc;  // (from the original)
inline constexpr guest::Function<0x002fe7f0, u32(u32, u32, u32, u32)> call_002fe7f0;  // (from the original)
inline constexpr guest::Function<0x0031b7b1, u32(u32, u32, u32, u32)> call_0031b7b0;  // (from the original)
inline constexpr guest::Function<0x0031bebd, u32(u32, u32, u32, u32)> call_0031bebc;  // (from the original)

u32 f_0031b5ec(u32 r0_unused, u32 r1, u32 r2) {
    u32 r0 = 0;
    u32 r4 = guest::cpu()->r[4];
    guest::cpu()->r[13] -= 8u;
    r4 = 0x981fb8u;  // (from the original)
    r0 = *gptr<u32>(r4 + 0x10u);  // (from the original)
    if (r0 == 0) {
        r0 = call_0031bebc(r0, r1, r2, guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
    }
    if ((*gptr<u32>(r4) & 1u) != 0u) {
        r0 = 0x981fbcu;  // (from the original)
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r0 = 0x981fb8u;  // (from the original)
    r0 = call_002fe7dc(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    if (r0 == 0) {
        r0 = 0x981fbcu;  // (from the original)
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r1 = *gptr<u32>(r4 + 8u);
    r0 = 0x981fbcu;  // (from the original)
    r0 = call_0031b7b0(r0, r1, r2, guest::cpu()->r[3]);
    r2 = 0x100000u;  // (from the original)
    r1 = 0x31b855u;  // (from the original)
    r0 = call_002fe7f0(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r0 = 0x981fbcu;  // (from the original)
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_0031b5ec
GUEST_EXPORT(0x0031b5ed, d_0031b5ec::f_0031b5ec);

// f_0031b766: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0031b766 {

inline constexpr guest::Function<0x002f88b8, u32(u32, u32, u32, u32)> call_002f88b8;  // (from the original)
inline constexpr guest::Function<0x003075cc, u32(u32, u32, u32, u32)> call_003075cc;  // (from the original)

u32 f_0031b766(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 ea = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r13 = guest::cpu()->r[13];
    ea = r13 - 0x20;  // (from the original)
    *gptr<u32>(ea) = u32(r0);
    *gptr<u32>(ea + 4) = u32(r1);
    *gptr<u32>(ea + 8) = u32(r2);
    r13 = ea;
    r4 = r0;
    r5 = r1;
    r0 = r1 << 2;
    guest::cpu()->r[13] = r13;
    r0 = call_003075cc(r0, r1, r2, r3);
    r2 = *gptr<u32>(r4 + 4u);
    r6 = r0;
    if (r2 >= r5) {
        r2 = r5;
    }
    r1 = r6;
    r0 = *gptr<u32>(r4);
    r3 = r2 << 2;
    for (;;) {
L_31b788:;
        r7 = *gptr<u32>(r4) + r3;
        if (!(r7 != r0)) {
            break;
        }
L_31b784:;
        r7 = *gptr<u32>(r0);
        r0 = r0 + 4;
        *gptr<u32>(r1) = u32(r7);
        r1 = r1 + 4;
        guest::preempt();
    }
    for (;;) {
L_31b79c:;
        if (!(r2 < r5)) {
            break;
        }
L_31b792:;
        r1 = r2 << 2;
        r2 = r2 + 1u;
        *gptr<u32>(r6 + r1) = u32(*gptr<u32>(*gptr<u32>(r13 + 8u)));
        guest::preempt();
    }
    r0 = *gptr<u32>(r4);
    guest::cpu()->r[13] = r13;
    r0 = call_002f88b8(r0, r1, r2, r3);
    *gptr<u32>(r4) = u32(r6);
    r0 = r6;
    *gptr<u32>(r4 + 4u) = u32(r5);
    r1 = *gptr<u32>(r13);
    r13 = r13 + 0x20;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_0031b766
GUEST_EXPORT(0x0031b767, d_0031b766::f_0031b766);

// f_0031b7b0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0031b7b0 {

struct __attribute__((packed)) Object_0031b7b0_0 {
    u32 word_0;
};
GUEST_OFFSET(Object_0031b7b0_0, word_0, 0x0);  // (from the original)

inline constexpr guest::Function<0x0031bebd, u32(u32, u32, u32, u32)> call_0031bebc;  // (from the original)

u32 f_0031b7b0(gptr<Object_0031b7b0_0> arg0, u32 r1) {
    u32 r0 = arg0.addr();
    u32 r4 = guest::cpu()->r[4];
    guest::cpu()->r[13] -= 8u;
    r4 = r0;
    arg0->word_0 = u32(r1);
    r0 = *gptr<u32>(0x981fc8u);  // (from the original)
    if (r0 == 0) {
        r0 = call_0031bebc(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    }
    r1 = *gptr<u32>(r4);
    *gptr<u32>(r1 + 0x1cu) = u32(*gptr<u32>(r1 + 0x1cu) + 1u);  // (from the original)
    r0 = r4;
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_0031b7b0
GUEST_EXPORT(0x0031b7b1, d_0031b7b0::f_0031b7b0);

// f_0031b854: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0031b854 {

struct __attribute__((packed)) Object_0031b854_0 {
    u32 word_0;
};
GUEST_OFFSET(Object_0031b854_0, word_0, 0x0);  // (from the original)

inline constexpr guest::Function<0x002ffb64, u32(u32, u32, u32, u32)> call_002ffb64;  // (from the original)
inline constexpr guest::Function<0x0031bea1, u32(u32, u32, u32, u32)> call_0031bea0;  // (from the original)

u32 f_0031b854(gptr<Object_0031b854_0> arg0, u32 r1) {
    u32 res = 0;
    u32 r0 = arg0.addr();
    u32 r4 = guest::cpu()->r[4];
    guest::cpu()->r[13] -= 8u;
    r4 = r0;
    r0 = arg0->word_0;
    if (r0 == 0) {
        r0 = r4;
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    res = *gptr<u32>(r0 + 0x1cu) - 1u;  // (from the original)
    r1 = res;
    *gptr<u32>(r0 + 0x1cu) = u32(r1);  // (from the original)
    if (res != 0) {
        r0 = r4;
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r0 = arg0->word_0;
    if (r0 == 0) {
        r0 = r4;
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r0 = call_0031bea0(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r0 = call_002ffb64(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r0 = r4;
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_0031b854
GUEST_EXPORT(0x0031b855, d_0031b854::f_0031b854);

// f_0031b8f0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0031b8f0 {

struct __attribute__((packed)) Object_0031b8f0_0 {
    u32 word_0;
};
GUEST_OFFSET(Object_0031b8f0_0, word_0, 0x0);  // (from the original)


u32 f_0031b8f0(gptr<Object_0031b8f0_0> arg0, u32 r1) {
    u32 r0 = arg0.addr();
    r1 = r1 << 2;
    r0 = arg0->word_0 + r1;
    guest::cpu()->r[1] = r1;
    return r0;
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
GUEST_OFFSET(Object_0031ba1c_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_0031ba1c_0, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_0031ba1c_0, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Object_0031ba1c_0, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Object_0031ba1c_0, word_14, 0x14);  // (from the original)
GUEST_OFFSET(Object_0031ba1c_0, byte_18, 0x18);  // (from the original)

inline constexpr guest::Function<0x003075cc, u32(u32, u32, u32, u32)> call_003075cc;  // (from the original)
inline constexpr guest::Function<0x0031b759, u32(u32, u32, u32, u32)> call_0031b758;  // (from the original)

u32 f_0031ba1c(gptr<Object_0031ba1c_0> arg0, u32 r1, u32 r2, u32 r3) {
    u32 ea = 0;
    u32 r0 = arg0.addr();
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r13 = guest::cpu()->r[13];
    ea = r13 - 0x18;  // (from the original)
    *gptr<u32>(ea) = u32(r3);
    r13 = ea;
    r4 = r0;
    arg0->word_4 = u32(0x20u);  // (from the original)
    r0 = 0u;
    arg0->word_c = u32(r3);
    r3 = 0x90b608u;  // (from the original)
    arg0->word_8 = u32(r0);
    arg0->word_0 = u32(r3);
    arg0->word_14 = u32(r1);
    arg0->byte_18 = u8(r2);
    if (r1 == 0) {
        arg0->word_14 = u32(0x8c8680u);  // (from the original)
        arg0->byte_18 = u8(r0);
    }
    r5 = 0u;
    r6 = 0xffu;  // (from the original)
L_31ba40:;
    r2 = r5 << 0x18 >> 0x18;  // (from the original)
    r1 = 0x10u;  // (from the original)
    r0 = r4;
    guest::cpu()->r[13] = r13;
    r0 = call_0031b758(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 != 0) {
        goto L_31ba64;
    }
    goto L_31ba6a;
L_31ba52:;
    r2 = r6 << 0x18 >> 0x18;  // (from the original)
    r1 = 0x10u;  // (from the original)
    r0 = r4;
    guest::cpu()->r[13] = r13;
    r0 = call_0031b758(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 != 0) {
        goto L_31ba70;
    }
    r6 = r6 - 1u;
L_31ba64:;
    if (u32(r6 >= r5) && !u32(r6 == r5)) {
        guest::preempt();
        goto L_31ba52;
    }
    goto L_31ba70;
L_31ba6a:;
    r5 = r5 + 1u;
    if (r5 < r6) {
        guest::preempt();
        goto L_31ba40;
    }
L_31ba70:;
    *gptr<u32>(r4 + 0x20u) = u32(r6);  // (from the original)
    r0 = r6 - r5 + 1u;
    *gptr<u32>(r4 + 0x1cu) = u32(r5);  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_003075cc(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    r7 = r0;
    *gptr<u32>(r4 + 0x2cu) = u32(r0);  // (from the original)
    goto L_31babc;
L_31ba82:;
    r0 = r5 - 0x61u;  // (from the original)
    if (u32(r0 >= 0x19u) && !u32(r0 == 0x19u)) {  // (from the original)
        goto L_31bab4;
    }
    r2 = r5 << 0x18 >> 0x18;  // (from the original)
    r1 = 0x10u;  // (from the original)
    r0 = r4;
    guest::cpu()->r[13] = r13;
    r0 = call_0031b758(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        goto L_31bab4;
    }
    r0 = r5 - 0x20u;  // (from the original)
    *gptr<u32>(r13) = u32(r0);
    r2 = r0 << 0x18 >> 0x18;  // (from the original)
    r1 = 8u;
    r0 = r4;
    guest::cpu()->r[13] = r13;
    r0 = call_0031b758(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        goto L_31bab4;
    }
    r0 = *gptr<u32>(r13);
    goto L_31bab6;
L_31bab4:;
    r0 = r5;
L_31bab6:;
    *gptr<u8>(r7) = u8(r0);
    r7 = r7 + 1u;
    r5 = r5 + 1u;
L_31babc:;
    if (!u32(r5 >= r6) || u32(r5 == r6)) {
        guest::preempt();
        goto L_31ba82;
    }
    r5 = 0u;
    r6 = 0xffu;  // (from the original)
L_31bac4:;
    r2 = r5 << 0x18 >> 0x18;  // (from the original)
    r1 = 8u;
    r0 = r4;
    guest::cpu()->r[13] = r13;
    r0 = call_0031b758(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 != 0) {
        goto L_31bae8;
    }
    goto L_31baee;
L_31bad6:;
    r2 = r6 << 0x18 >> 0x18;  // (from the original)
    r1 = 8u;
    r0 = r4;
    guest::cpu()->r[13] = r13;
    r0 = call_0031b758(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 != 0) {
        goto L_31baf4;
    }
    r6 = r6 - 1u;
L_31bae8:;
    if (u32(r6 >= r5) && !u32(r6 == r5)) {
        guest::preempt();
        goto L_31bad6;
    }
    goto L_31baf4;
L_31baee:;
    r5 = r5 + 1u;
    if (r5 < r6) {
        guest::preempt();
        goto L_31bac4;
    }
L_31baf4:;
    *gptr<u32>(r4 + 0x28u) = u32(r6);  // (from the original)
    r0 = r6 - r5 + 1u;
    *gptr<u32>(r4 + 0x24u) = u32(r5);  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_003075cc(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r3 = guest::cpu()->r[3];
    r7 = r0;
    *gptr<u32>(r4 + 0x30u) = u32(r0);  // (from the original)
    goto L_31bb40;
L_31bb06:;
    r0 = r5 - 0x41u;  // (from the original)
    if (u32(r0 >= 0x19u) && !u32(r0 == 0x19u)) {  // (from the original)
        goto L_31bb38;
    }
    r2 = r5 << 0x18 >> 0x18;  // (from the original)
    r1 = 8u;
    r0 = r4;
    guest::cpu()->r[13] = r13;
    r0 = call_0031b758(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        goto L_31bb38;
    }
    r0 = r5 + 0x20u;  // (from the original)
    *gptr<u32>(r13) = u32(r0);
    r2 = r0 << 0x18 >> 0x18;  // (from the original)
    r1 = 0x10u;  // (from the original)
    r0 = r4;
    guest::cpu()->r[13] = r13;
    r0 = call_0031b758(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        goto L_31bb38;
    }
    r0 = *gptr<u32>(r13);
    goto L_31bb3a;
L_31bb38:;
    r0 = r5;
L_31bb3a:;
    *gptr<u8>(r7) = u8(r0);
    r7 = r7 + 1u;
    r5 = r5 + 1u;
L_31bb40:;
    if (!u32(r5 >= r6) || u32(r5 == r6)) {
        guest::preempt();
        goto L_31bb06;
    }
    r0 = r4;
    r13 = r13 + 0x18;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_0031ba1c
GUEST_EXPORT(0x0031ba1d, d_0031ba1c::f_0031ba1c);

// f_0031bea0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0031bea0 {

struct __attribute__((packed)) Object_0031bea0_0 {
    u8 unknown_0[0x18];  // (not used here)
    u32 word_18;
};
GUEST_OFFSET(Object_0031bea0_0, word_18, 0x18);  // (from the original)

inline constexpr guest::Function<0x0011c1fd, u32(u32, u32, u32, u32)> call_0011c1fc;  // (from the original)
inline constexpr guest::Function<0x002f88b8, u32(u32, u32, u32, u32)> call_002f88b8;  // (from the original)
inline constexpr guest::Function<0x0030774d, u32(u32, u32, u32, u32)> call_0030774c;  // (from the original)

u32 f_0031bea0(gptr<Object_0031bea0_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r4 = guest::cpu()->r[4];
    guest::cpu()->r[13] -= 8u;
    r4 = r0;
    r0 = arg0->word_18;
    r0 = call_002f88b8(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    r0 = r4 + 8u;
    r0 = call_0011c1fc(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    r0 = r0 - 8u;
    r0 = call_0030774c(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    guest::cpu()->r[13] += 8u;
    return r0;
}

}  // namespace d_0031bea0
GUEST_EXPORT(0x0031bea1, d_0031bea0::f_0031bea0);

// f_0031c020: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0031c020 {

struct __attribute__((packed)) Object_0031c020_0 {
    u32 word_0;
    u8 unknown_4[0x24];  // (not used here)
    u32 word_28;
    u8 unknown_2c[0x361c];  // (not used here)
    u32 word_3648;
    u8 unknown_364c[0x394];  // (not used here)
    u32 word_39e0;
    u8 unknown_39e4[0xe0];  // (not used here)
    u32 word_3ac4;
};
GUEST_OFFSET(Object_0031c020_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_0031c020_0, word_28, 0x28);  // (from the original)
GUEST_OFFSET(Object_0031c020_0, word_3648, 0x3648);  // (from the original)
GUEST_OFFSET(Object_0031c020_0, word_39e0, 0x39e0);  // (from the original)
GUEST_OFFSET(Object_0031c020_0, word_3ac4, 0x3ac4);  // (from the original)

inline constexpr guest::Function<0x002f76ad, u32(u32, u32, u32, u32)> call_002f76ac;  // (from the original)
inline constexpr guest::Function<0x002f770c, u32(u32, u32, u32, u32)> call_002f770c;  // (from the original)
inline constexpr guest::Function<0x00567ef0, u32(u32, u32, u32, u32)> call_00567ef0;  // (from the original)
inline constexpr guest::Function<0x0056988c, u32(u32, u32, u32, u32)> call_0056988c;  // (from the original)
inline constexpr guest::Function<0x005bf744, u32(u32, u32, u32, u32)> call_005bf744;  // (from the original)
inline constexpr guest::Function<0x005d703c, u32(u32, u32, u32, u32)> call_005d703c;  // (from the original)
inline constexpr guest::Function<0x005e3194, u32(u32, u32, u32, u32)> call_005e3194;  // (from the original)
inline constexpr guest::Function<0x006aaa30, u32(u32, u32, u32, u32)> call_006aaa30;  // (from the original)

u32 f_0031c020(gptr<Object_0031c020_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r1 = 0;
    u32 r2 = 0;
    u32 r3 = 0;
    u32 r4 = guest::cpu()->r[4];
    r1 = 0x8f45d0u;  // (from the original)
    guest::cpu()->r[13] -= 8u;
    arg0->word_28 = u32(r1 + 0x6cu);  // (from the original)
    arg0->word_0 = u32(r1);
    r4 = r0 + 0x39e0u;  // (from the original)
    r3 = 2u;
    arg0->word_3648 = u32(0x8ee228u);  // (from the original)
    r2 = 0x8ef284u;  // (from the original)
    r0 = r0 + 0x3af8u;  // (from the original)
    arg0->word_39e0 = u32(r2);
    arg0->word_3ac4 = u32(r2 + 0x44u);  // (from the original)
    r2 = 0x518u;  // (from the original)
    r1 = 0x2e0b3cu;  // (from the original)
    r0 = call_002f76ac(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r4;
    r0 = call_002f770c(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = 0x8f18f4u;  // (from the original)
    *gptr<u32>(r0 - 0x398u) = u32(r1);  // (from the original)
    r0 = r0 - 0x248u;  // (from the original)
    r0 = call_00567ef0(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0x14cu;  // (from the original)
    r0 = call_005bf744(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0x2cacu;  // (from the original)
    *gptr<u32>(r0) = u32(0x8ef6f4u);  // (from the original)
    r1 = 0x8f47a0u;  // (from the original)
    r0 = r0 + 0x2788u;  // (from the original)
    *gptr<u32>(r0) = u32(r1);
    r0 = r0 + 0x41cu;  // (from the original)
    r0 = call_005e3194(r0, r1, r2, r3);
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
    r0 = r0 - 0x15cu;  // (from the original)
    r0 = call_005bf744(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0x24cu;  // (from the original)
    r0 = call_00567ef0(r0, r1, r2, r3);
    r1 = 0x20710cu;  // (from the original)
    r4 = r0 - 0x27acu;  // (from the original)
    r3 = 0xau;  // (from the original)
    r2 = 0x348u;  // (from the original)
    r0 = r0 - 0x212cu;  // (from the original)
    r0 = call_002f76ac(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r4 + 0x658u;  // (from the original)
    r0 = call_0056988c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0x24cu;  // (from the original)
    r0 = call_00567ef0(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0x2cu;  // (from the original)
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
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = 0x8f8b4cu;  // (from the original)
    *gptr<u32>(r0 - 0x974u) = u32(r1);  // (from the original)
    r0 = r0 - 0x64u;  // (from the original)
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
    r0 = r0 - 0xd0u;  // (from the original)
    r0 = call_005e3194(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0xc4u;  // (from the original)
    r0 = call_005e3194(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0xc4u;  // (from the original)
    r0 = call_005e3194(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0xc4u;  // (from the original)
    r0 = call_005e3194(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0xc4u;  // (from the original)
    r0 = call_005e3194(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0x100u;  // (from the original)
    r0 = call_005d703c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    guest::cpu()->r[13] += 8u;
    r0 = r0 - 0x74u;  // (from the original)
    return call_006aaa30(r0, r1, r2, r3);
}

}  // namespace d_0031c020
GUEST_EXPORT(0x0031c020, d_0031c020::f_0031c020);

// f_0031c1c8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0031c1c8 {

struct __attribute__((packed)) Object_0031c1c8_0 {
    u32 word_0;
};
GUEST_OFFSET(Object_0031c1c8_0, word_0, 0x0);  // (from the original)

struct __attribute__((packed)) Object_0031c1c8_1 {
    u32 word_0;
};
GUEST_OFFSET(Object_0031c1c8_1, word_0, 0x0);  // (from the original)

inline constexpr guest::Function<0x0031b5b9, u32(u32, u32, u32, u32)> call_0031b5b8;  // (from the original)

u32 f_0031c1c8(gptr<Object_0031c1c8_0> arg0, gptr<Object_0031c1c8_1> arg1) {
    u32 r0 = arg0.addr();
    u32 r1 = arg1.addr();
    u32 r4 = guest::cpu()->r[4];
    guest::cpu()->r[13] -= 8u;
    r4 = r0;
    r1 = r1 + 4;
    arg0->word_0 = u32(arg1->word_0);
    r0 = r4 + 4u;
    r0 = call_0031b5b8(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r0 = r4;
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_0031c1c8
GUEST_EXPORT(0x0031c1c9, d_0031c1c8::f_0031c1c8);

// f_0031c1da: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0031c1da {

struct __attribute__((packed)) Object_0031c1da_0 {
    u32 word_0;
};
GUEST_OFFSET(Object_0031c1da_0, word_0, 0x0);  // (from the original)


u32 f_0031c1da(gptr<Object_0031c1da_0> arg0, u32 r1) {
    u32 r0 = arg0.addr();
    u32 r2 = 0;
    r0 = r1;
    r2 = arg0->word_0 + 4u;
    goto L_31c1f6;
L_31c1e4:;
    r1 = *gptr<u8>(r2 + 0xcu);  // (from the original)
    if (!(!u32(r1 >= r0) || u32(r1 == r0))) {
        r2 = *gptr<u32>(r2);
        goto L_31c1f6;
    }
    r1 = *gptr<u8>(r2 + 0xdu);  // (from the original)
    if (r1 >= r0) {
        goto L_31c1fc;
    }
    r2 = *gptr<u32>(r2 + 4u);
L_31c1f6:;
    if (r2 != 0) {
        guest::preempt();
        goto L_31c1e4;
    }
    guest::cpu()->r[1] = r1;
    return r0;
L_31c1fc:;
    r1 = *gptr<u32>(r2 + 8u);
    if (r1 == 0) {
        r1 = *gptr<u8>(r2 + 0xeu);  // (from the original)
        r0 = r1 + r0 << 0x18 >> 0x18;  // (from the original)
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r0 = *gptr<u8>(r1 + (r0 - u32(*gptr<u8>(r2 + 0xcu))));  // (from the original)
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
};
GUEST_OFFSET(Object_0031c214_0, word_28, 0x28);  // (from the original)

inline constexpr guest::Function<0x001277dc, u32(u32, u32, u32, u32)> call_001277dc;  // (from the original)
inline constexpr guest::Function<0x001279b4, u32(u32, u32, u32, u32)> call_001279b4;  // (from the original)
inline constexpr guest::Function<0x00134544, u32(u32, u32, u32, u32)> call_00134544;  // (from the original)
inline constexpr guest::Function<0x0020714c, u32(u32, u32, u32, u32)> call_0020714c;  // (from the original)
inline constexpr guest::Function<0x0054eba8, u32(u32, u32, u32, u32)> call_0054eba8;  // (from the original)
inline constexpr guest::Function<0x0054f994, u32(u32, u32, u32, u32)> call_0054f994;  // (from the original)
inline constexpr guest::Function<0x00556128, u32(u32, u32, u32, u32)> call_00556128;  // (from the original)

u32 f_0031c214(gptr<Object_0031c214_0> arg0, u32 r1, u32 r2, u32 r3) {
    u32 res = 0;
    u32 r0 = arg0.addr();
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r13 = guest::cpu()->r[13];
    r4 = r0;
    r0 = arg0->word_28;
    r13 = r13 - 0x18u;  // (from the original)
    res = r0;
    if (u32(res == 0) || res >> 0x1f != (r0 & (r0 ^ res)) >> 0x1f) {  // (from the original)
        r13 = r13 + 0x18u;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    guest::cpu()->r[13] = r13;
    r0 = call_0020714c(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = *gptr<u32>(r0 + 4u);
    r1 = u32(*gptr<u8>(r4 + 0x40u));  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0054f994(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        guest::cpu()->r[13] = r13;
        r0 = call_0020714c(r0, r1, r2, r3);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r1 = *gptr<u32>(r0 + 4u);
        r0 = *gptr<u32>(r1 + (u32(*gptr<u8>(r4 + 0x40u)) << 2) + 0x42cu);  // (from the original)
        if (r0 == 0) {
            r13 = r13 + 0x18u;  // (from the original)
            guest::cpu()->r[1] = r1;
            guest::cpu()->r[13] = r13;
            return r0;
        }
    }
    guest::cpu()->r[13] = r13;
    r0 = call_0020714c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 != 0) {
        guest::cpu()->r[13] = r13;
        r0 = call_0020714c(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r0 = u32(s32(s8(*gptr<u8>(r0 + 0x21u))));  // (from the original)
        if (r0 != 0) {
            r13 = r13 + 0x18u;  // (from the original)
            guest::cpu()->r[1] = r1;
            guest::cpu()->r[13] = r13;
            return r0;
        }
    }
    r1 = r13 + 4u;
    r0 = 0x208u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_001277dc(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r5 = *gptr<u32>(r13 + 4u);
    guest::cpu()->r[13] = r13;
    r0 = call_0020714c(r0, r1, r2, r3);
    r0 = *gptr<u32>(r0 + 4u);
    *gptr<u32>(r13) = u32(r4 + 0x44u);  // (from the original)
    r1 = *gptr<u32>(r13 + 4u);
    r3 = r4 + 0x44u;  // (from the original)
    r2 = r4 + 0x74u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0054eba8(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    *gptr<u32>(r13 + 4u) = u32(r0);
    r1 = *gptr<u32>(r4 + 0x30u);  // (from the original)
    r2 = *gptr<u32>(r4 + 0x28u) << 2;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00134544(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = *gptr<u32>(r13 + 4u);
    r0 = r1 + (*gptr<u32>(r4 + 0x28u) << 2);  // (from the original)
    *gptr<u32>(r13 + 4u) = u32(r0);
    guest::cpu()->r[13] = r13;
    r0 = call_0020714c(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = *gptr<u32>(r0 + 4u);
    r1 = *gptr<u32>(r13 + 4u);
    guest::cpu()->r[13] = r13;
    r0 = call_00556128(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    *gptr<u32>(r13 + 4u) = u32(r0);
    r0 = r0 - r5 & ~3u;
    guest::cpu()->r[13] = r13;
    r0 = call_001279b4(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r13 = r13 + 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_0031c214
GUEST_EXPORT(0x0031c214, d_0031c214::f_0031c214);

// f_0031c310: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0031c310 {

struct __attribute__((packed)) Object_0031c310_0 {
    u32 word_0;
};
GUEST_OFFSET(Object_0031c310_0, word_0, 0x0);  // (from the original)

struct __attribute__((packed)) Object_0031c310_1 {
    u32 word_0;
};
GUEST_OFFSET(Object_0031c310_1, word_0, 0x0);  // (from the original)


u32 f_0031c310(gptr<Object_0031c310_0> arg0, gptr<Object_0031c310_1> arg1) {
    u32 r0 = arg0.addr();
    u32 r1 = arg1.addr();
    if (arg0->word_0 >= arg1->word_0) {
        return r0;
    }
    r0 = r1;
    return r0;
}

}  // namespace d_0031c310
GUEST_EXPORT(0x0031c311, d_0031c310::f_0031c310);

// f_0031c31c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0031c31c {

inline constexpr guest::Function<0x0010bf99, u32(u32, u32, u32, u32)> call_0010bf98;  // (from the original)
inline constexpr guest::Function<0x00307569, u32(u32, u32, u32, u32)> call_00307568;  // (from the original)

u32 f_0031c31c(u32 r0_unused, u32 r1, u32 r2, u32 r3) {
    u32 ea = 0;
    u32 r0 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r13 = guest::cpu()->r[13];
    ea = r13 - 0x18;  // (from the original)
    *gptr<u32>(ea) = u32(r3);
    r13 = ea;
    r4 = r1;
    r7 = r2;
    r0 = ~0xeu;  // (from the original)
    if (!(!u32(r1 >= r0) || u32(r1 == r0))) {
        r3 = r1;
        *gptr<u32>(r13) = u32(r0);
        r0 = 8u;
        r2 = 0x31c394u;  // (from the original)
        r1 = 0x31c394u;  // (from the original)
        guest::cpu()->r[13] = r13;
        r0 = call_00307568(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
    }
    if (!(!u32(r7 >= r4) || u32(r7 == r4))) {
        r3 = r7;
        r0 = 8u;
        r2 = 0x31c394u;  // (from the original)
        r1 = 0x31c394u;  // (from the original)
        *gptr<u32>(r13) = u32(r4);
        guest::cpu()->r[13] = r13;
        r0 = call_00307568(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
    }
    if (r4 != 0) {
        r0 = r4 + 0xeu;  // (from the original)
        r1 = 0u;
        guest::cpu()->r[13] = r13;
        r0 = call_0010bf98(r0, r1, r2, r3);
        r5 = r0;
        r6 = 0u;
        if (r0 != 0) {
            *gptr<u32>(r0) = u32(r6);
            *gptr<u32>(r0 + 4u) = u32(r6);
            *gptr<u32>(r0 + 8u) = u32(r6);
        }
        *gptr<u32>(r5 + 8u) = u32(r7);
        r1 = r5 + 0xcu + r7;  // (from the original)
        *gptr<u32>(r5) = u32(r6);
        *gptr<u32>(r5 + 4u) = u32(r4);
        *gptr<u8>(r13) = u8(r6);
        r0 = r1;
        if (r0 != 0) {
            *gptr<u8>(r0) = u8(r6);
        }
        r0 = r5;
        r13 = r13 + 0x18;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    r0 = 0xaf7f30u;  // (from the original)
    r13 = r13 + 0x18;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_0031c31c
GUEST_EXPORT(0x0031c31d, d_0031c31c::f_0031c31c);

// f_0031c39c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0031c39c {

inline constexpr guest::Function<0x002f8574, u32(u32, u32, u32, u32)> call_002f8574;  // (from the original)

u32 f_0031c39c(u32 r0) {
    u32 r4 = guest::cpu()->r[4];
    guest::cpu()->r[13] -= 8u;
    r4 = r0;
    r0 = call_002f8574(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    r0 = r4;
    guest::cpu()->r[13] += 8u;
    return r0;
}

}  // namespace d_0031c39c
GUEST_EXPORT(0x0031c39d, d_0031c39c::f_0031c39c);

// f_0031c3a8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0031c3a8 {

struct __attribute__((packed)) Object_0031c3a8_0 {
    u32 word_0;
};
GUEST_OFFSET(Object_0031c3a8_0, word_0, 0x0);  // (from the original)

inline constexpr guest::Function<0x0010c12d, u32(u32, u32, u32, u32)> call_0010c12c;  // (from the original)

u32 f_0031c3a8(gptr<Object_0031c3a8_0> arg0, u32 r1, u32 r2_unused, u32 r3) {
    u32 ea = 0;
    u32 res = 0;
    u32 r0 = arg0.addr();
    u32 r2 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r13 = guest::cpu()->r[13];
    ea = r13 - 0x10;  // (from the original)
    *gptr<u32>(ea) = u32(r3);
    r13 = ea;
    r4 = r0;
    r2 = arg0->word_0;
    r0 = 0xaf7f3cu;  // (from the original)
    if (r2 == r0) {
        r13 = r13 + 0x10;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    r2 = r2 - 0xcu;  // (from the original)
    r0 = *gptr<u32>(r2);
    res = r0 + 1u;
    if (res != 0) {
        r1 = 0xaf7f30u;  // (from the original)
        if (r2 == r1) {
            r13 = r13 + 0x10;  // (from the original)
            guest::cpu()->r[1] = r1;
            guest::cpu()->r[13] = r13;
            return r0;
        }
        r0 = r0 - 1u;
        *gptr<u32>(r2) = u32(r0);
        res = r0 + 1u;
        r0 = res;
        if (res != 0) {
            r13 = r13 + 0x10;  // (from the original)
            guest::cpu()->r[1] = r1;
            guest::cpu()->r[13] = r13;
            return r0;
        }
    }
    r5 = *gptr<u32>(*gptr<u32>(r4) + 0xfffffff8u) + 0xeu;  // (from the original)
    r1 = r5;
    r0 = *gptr<u32>(r4) - 0xcu;  // (from the original)
    r2 = 0u;
    guest::cpu()->r[13] = r13;
    r0 = call_0010c12c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r13 = r13 + 0x10;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_0031c3a8
GUEST_EXPORT(0x0031c3a9, d_0031c3a8::f_0031c3a8);

// f_0031c75c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0031c75c {

struct __attribute__((packed)) Object_0031c75c_0 {
    u32 word_0;
};
GUEST_OFFSET(Object_0031c75c_0, word_0, 0x0);  // (from the original)


void f_0031c75c(gptr<Object_0031c75c_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r1 = 0;
    r1 = 0xaf7f30u;  // (from the original)
    if (r0 == r1) {
        guest::cpu()->r[1] = r1;
        return;
    }
    r1 = arg0->word_0 + 1u;
    arg0->word_0 = u32(r1);
    guest::cpu()->r[1] = r1;
    return;
}

}  // namespace d_0031c75c
GUEST_EXPORT(0x0031c75d, d_0031c75c::f_0031c75c);

// f_0031c770: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0031c770 {

inline constexpr guest::Function<0x0011c499, u32(u32, u32, u32, u32)> call_0011c498;  // (from the original)

u32 f_0031c770(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 ea = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r13 = guest::cpu()->r[13];
    ea = r13 - 0x18;  // (from the original)
    *gptr<u32>(ea) = u32(r1);
    *gptr<u32>(ea + 4) = u32(r2);
    *gptr<u32>(ea + 8) = u32(r3);
    r13 = ea;
    r5 = r0;
    r4 = *gptr<u32>(r13 + 0x18u);  // (from the original)
    *gptr<u32>(r13 + 4u) = u32(0u);
    r0 = r5;
    *gptr<u32>(r13) = u32(r4);
    *gptr<u32>(r13 + 8u) = u32(r4);
    guest::cpu()->r[13] = r13;
    r0 = call_0011c498(r0, r1, r2, r3);
    r0 = r5;
    r1 = *gptr<u32>(r13);
    r13 = r13 + 0x18;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_0031c770
GUEST_EXPORT(0x0031c771, d_0031c770::f_0031c770);

// f_0031c7dc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0031c7dc {

struct __attribute__((packed)) Object_0031c7dc_0 {
    u8 unknown_0[0xc];  // (not used here)
    u32 word_c;
    u32 word_10;
    u32 word_14;
    u32 word_18;
    u32 word_1c;
    u8 unknown_20[0xa0];  // (not used here)
    u32 word_c0;
    u32 word_c4;
    u32 word_c8;
};
GUEST_OFFSET(Object_0031c7dc_0, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Object_0031c7dc_0, word_10, 0x10);  // (from the original)
GUEST_OFFSET(Object_0031c7dc_0, word_14, 0x14);  // (from the original)
GUEST_OFFSET(Object_0031c7dc_0, word_18, 0x18);  // (from the original)
GUEST_OFFSET(Object_0031c7dc_0, word_1c, 0x1c);  // (from the original)
GUEST_OFFSET(Object_0031c7dc_0, word_c0, 0xc0);  // (from the original)
GUEST_OFFSET(Object_0031c7dc_0, word_c4, 0xc4);  // (from the original)
GUEST_OFFSET(Object_0031c7dc_0, word_c8, 0xc8);  // (from the original)

struct __attribute__((packed)) Object_0031c7dc_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u8 unknown_c[0xc];  // (not used here)
    u32 word_18;
    u32 word_1c;
    u32 word_20;
    u32 word_24;
    u32 word_28;
    u32 word_2c;
    u32 word_30;
};
GUEST_OFFSET(Object_0031c7dc_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_0031c7dc_1, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_0031c7dc_1, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Object_0031c7dc_1, word_18, 0x18);  // (from the original)
GUEST_OFFSET(Object_0031c7dc_1, word_1c, 0x1c);  // (from the original)
GUEST_OFFSET(Object_0031c7dc_1, word_20, 0x20);  // (from the original)
GUEST_OFFSET(Object_0031c7dc_1, word_24, 0x24);  // (from the original)
GUEST_OFFSET(Object_0031c7dc_1, word_28, 0x28);  // (from the original)
GUEST_OFFSET(Object_0031c7dc_1, word_2c, 0x2c);  // (from the original)
GUEST_OFFSET(Object_0031c7dc_1, word_30, 0x30);  // (from the original)

inline constexpr guest::Function<0x005695e4, u32(u32, u32, u32, u32)> call_005695e4;  // (from the original)

u32 f_0031c7dc(gptr<Object_0031c7dc_0> arg0, gptr<Object_0031c7dc_1> arg1) {
    u32 r0 = arg0.addr();
    u32 r1 = arg1.addr();
    u32 r2 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    float S0 = 0;
    float S1 = 0;
    float S2 = 0;
    float S3 = 0;
    float S4 = 0;
    float S5 = 0;
    float S6 = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r5 = r0;
    r4 = r1;
    S0 = std::bit_cast<float>(arg1->word_18);
    S1 = std::bit_cast<float>(arg1->word_1c);
    S2 = std::bit_cast<float>(arg1->word_20);
    S3 = std::bit_cast<float>(arg1->word_24);
    S4 = std::bit_cast<float>(arg1->word_28);
    S5 = std::bit_cast<float>(arg1->word_2c);
    S6 = std::bit_cast<float>(arg1->word_30);
    arg0->word_c = u32(std::bit_cast<u32>(S0));
    arg0->word_10 = u32(std::bit_cast<u32>(S1));
    arg0->word_14 = u32(std::bit_cast<u32>(S2));
    arg0->word_18 = u32(std::bit_cast<u32>(S3));
    arg0->word_c0 = u32(std::bit_cast<u32>(S6));
    arg0->word_c4 = u32(std::bit_cast<u32>(S4));
    arg0->word_c8 = u32(std::bit_cast<u32>(S5));
    r0 = arg1->word_4;
    arg0->word_1c = u32(r0);
    r1 = arg1->word_8;
    if (r1 != 0) {
        r2 = arg1->word_0;
        r0 = r5 + 0x20u;  // (from the original)
        guest::cpu()->s[0] = S0;
        guest::cpu()->s[1] = S1;
        guest::cpu()->s[2] = S2;
        guest::cpu()->s[3] = S3;
        guest::cpu()->s[4] = S4;
        guest::cpu()->s[5] = S5;
        guest::cpu()->s[6] = S6;
        r0 = call_005695e4(r0, r1, r2, guest::cpu()->r[3]);
        S0 = guest::cpu()->s[0];
        S1 = guest::cpu()->s[1];
        S2 = guest::cpu()->s[2];
        S3 = guest::cpu()->s[3];
        S4 = guest::cpu()->s[4];
        S5 = guest::cpu()->s[5];
        S6 = guest::cpu()->s[6];
    }
    r1 = *gptr<u32>(r4 + 0xcu);  // (from the original)
    if (r1 != 0) {
        r2 = *gptr<u32>(r4);
        r0 = r5 + 0x48u;  // (from the original)
        guest::cpu()->s[0] = S0;
        guest::cpu()->s[1] = S1;
        guest::cpu()->s[2] = S2;
        guest::cpu()->s[3] = S3;
        guest::cpu()->s[4] = S4;
        guest::cpu()->s[5] = S5;
        guest::cpu()->s[6] = S6;
        r0 = call_005695e4(r0, r1, r2, guest::cpu()->r[3]);
        S0 = guest::cpu()->s[0];
        S1 = guest::cpu()->s[1];
        S2 = guest::cpu()->s[2];
        S3 = guest::cpu()->s[3];
        S4 = guest::cpu()->s[4];
        S5 = guest::cpu()->s[5];
        S6 = guest::cpu()->s[6];
    }
    r1 = *gptr<u32>(r4 + 0x10u);  // (from the original)
    if (r1 != 0) {
        r2 = *gptr<u32>(r4);
        r0 = r5 + 0x70u;  // (from the original)
        guest::cpu()->s[0] = S0;
        guest::cpu()->s[1] = S1;
        guest::cpu()->s[2] = S2;
        guest::cpu()->s[3] = S3;
        guest::cpu()->s[4] = S4;
        guest::cpu()->s[5] = S5;
        guest::cpu()->s[6] = S6;
        r0 = call_005695e4(r0, r1, r2, guest::cpu()->r[3]);
        S0 = guest::cpu()->s[0];
        S1 = guest::cpu()->s[1];
        S2 = guest::cpu()->s[2];
        S3 = guest::cpu()->s[3];
        S4 = guest::cpu()->s[4];
        S5 = guest::cpu()->s[5];
        S6 = guest::cpu()->s[6];
    }
    r1 = *gptr<u32>(r4 + 0x14u);  // (from the original)
    if (r1 != 0) {
        r2 = *gptr<u32>(r4);
        r0 = r5 + 0x98u;  // (from the original)
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        guest::cpu()->s[0] = S0;
        guest::cpu()->s[1] = S1;
        guest::cpu()->s[2] = S2;
        guest::cpu()->s[3] = S3;
        guest::cpu()->s[4] = S4;
        guest::cpu()->s[5] = S5;
        guest::cpu()->s[6] = S6;
        return call_005695e4(r0, r1, r2, guest::cpu()->r[3]);
    }
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    return r0;
}

}  // namespace d_0031c7dc
GUEST_EXPORT(0x0031c7dc, d_0031c7dc::f_0031c7dc);

// f_0031c878: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0031c878 {

inline constexpr guest::Function<0x002b6de0, u32(u32, u32, u32, u32)> call_002b6de0;  // (from the original)

u32 f_0031c878(u32 r0, u32 r1) {
    guest::cpu()->r[13] -= 8u;
    r0 = call_002b6de0(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = 0x8f46c4u;  // (from the original)
    *gptr<u32>(r0) = u32(r1);
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_0031c878
GUEST_EXPORT(0x0031c878, d_0031c878::f_0031c878);

// f_0031c92c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0031c92c {

struct __attribute__((packed)) Object_0031c92c_0 {
    u32 word_0;
};
GUEST_OFFSET(Object_0031c92c_0, word_0, 0x0);  // (from the original)

inline constexpr guest::Function<0x005694c8, u32(u32, u32, u32, u32)> call_005694c8;  // (from the original)
inline constexpr guest::Function<0x00569774, u32(u32, u32, u32, u32)> call_00569774;  // (from the original)
inline constexpr guest::Function<0x0056988c, u32(u32, u32, u32, u32)> call_0056988c;  // (from the original)

u32 f_0031c92c(gptr<Object_0031c92c_0> arg0, u32 r1) {
    u32 r0 = arg0.addr();
    u32 r4 = guest::cpu()->r[4];
    guest::cpu()->r[13] -= 8u;
    r4 = r0;
    arg0->word_0 = u32(0x8f46c4u);  // (from the original)
    r0 = r4 + 0x20u;  // (from the original)
    r0 = call_005694c8(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r0 = r4 + 0x48u;  // (from the original)
    r0 = call_005694c8(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r0 = r4 + 0x70u;  // (from the original)
    r0 = call_005694c8(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r0 = r4 + 0x98u;  // (from the original)
    r0 = call_005694c8(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = 0u;
    *gptr<u32>(r4) = u32(0x8f183cu);  // (from the original)
    r0 = r4 + 0x20u;  // (from the original)
    r0 = call_00569774(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = 0u;
    r0 = r4 + 0x48u;  // (from the original)
    r0 = call_00569774(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = 0u;
    r0 = r4 + 0x70u;  // (from the original)
    r0 = call_00569774(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = 0u;
    r0 = r4 + 0x98u;  // (from the original)
    r0 = call_00569774(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r0 = r4 + 0x98u;  // (from the original)
    r0 = call_0056988c(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r0 = r0 - 0x28u;  // (from the original)
    r0 = call_0056988c(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r0 = r0 - 0x28u;  // (from the original)
    r0 = call_0056988c(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r0 = r0 - 0x28u;  // (from the original)
    r0 = call_0056988c(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r0 = r0 - 0x20u;  // (from the original)
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_0031c92c
GUEST_EXPORT(0x0031c92c, d_0031c92c::f_0031c92c);

// f_0031cd1c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0031cd1c {

inline constexpr guest::Function<0x002682ac, u32(u32, u32, u32, u32)> call_002682ac;  // (from the original)
inline constexpr guest::Function<0x002cdcb0, u32(u32, u32, u32, u32)> call_002cdcb0;  // (from the original)
inline constexpr guest::Function<0x00301d0d, u32(u32, u32, u32, u32)> call_00301d0c;  // (from the original)

u32 f_0031cd1c(u32 r0, u32 r1, u32 r2, u32 r3) {
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
    *gptr<u32>(r0 + 0xa64u) = u32(0x31cdc0u);  // (from the original)
    r12 = 0x8f470cu;  // (from the original)
    r1 = 0x31cdd0u;  // (from the original)
    *gptr<u32>(r0 + 0xa6cu) = u32(r1);  // (from the original)
    *gptr<u32>(r0 + 0xa68u) = u32(0x9533d4u);  // (from the original)
    *gptr<u32>(r0 + 0x24u) = u32(0x31cdb0u);  // (from the original)
    *gptr<u32>(r0 + 0xa40u) = u32(r12 + 0x4cu);  // (from the original)
    *gptr<u32>(r0) = u32(r12);
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_0031cd1c
GUEST_EXPORT(0x0031cd1c, d_0031cd1c::f_0031cd1c);

// f_0031d00c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0031d00c {

inline constexpr guest::Function<0x002f67ac, u32(u32, u32, u32, u32)> call_002f67ac;  // (from the original)
inline constexpr guest::Function<0x002f6e14, u32(u32, u32, u32, u32)> call_002f6e14;  // (from the original)
inline constexpr guest::Function<0x002f71e4, u32(u32, u32, u32, u32)> call_002f71e4;  // (from the original)
inline constexpr guest::Function<0x007237e0, u32(u32, u32, u32, u32)> call_007237e0;  // (from the original)

u32 f_0031d00c(u32 r0) {
    u32 r4 = guest::cpu()->r[4];
    r0 = r0 + 0x608u;  // (from the original)
    guest::cpu()->r[13] -= 8u;
    r4 = r0;
    r0 = call_002f71e4(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    r0 = r4;
    r0 = call_007237e0(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    if (r0 == 0) {
        guest::cpu()->r[13] += 8u;
        return r0;
    }
    r0 = r4;
    r0 = call_002f67ac(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    r0 = r4;
    guest::cpu()->r[13] += 8u;
    return call_002f6e14(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_0031d00c
GUEST_EXPORT(0x0031d00c, d_0031d00c::f_0031d00c);

// f_0031d048: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0031d048 {

struct __attribute__((packed)) Object_0031d048_0 {
    u8 unknown_0[0x6fe];  // (not used here)
    u8 byte_6fe;
};
GUEST_OFFSET(Object_0031d048_0, byte_6fe, 0x6fe);  // (from the original)

inline constexpr guest::Function<0x002b6a00, u32(u32, u32, u32, u32)> call_002b6a00;  // (from the original)
inline constexpr guest::Function<0x002f6a30, u32(u32, u32, u32, u32)> call_002f6a30;  // (from the original)
inline constexpr guest::Function<0x002f6e98, u32(u32, u32, u32, u32)> call_002f6e98;  // (from the original)
inline constexpr guest::Function<0x002f7508, u32(u32, u32, u32, u32)> call_002f7508;  // (from the original)
inline constexpr guest::Function<0x004b4fc0, u32(u32, u32, u32, u32)> call_004b4fc0;  // (from the original)
inline constexpr guest::Function<0x0056878c, u32(u32, u32, u32, u32)> call_0056878c;  // (from the original)

u32 f_0031d048(gptr<Object_0031d048_0> arg0, float S0_unused, float S1_unused, float S2_unused, float S3_unused, float S4_unused, float S5, float S6) {
    u32 ea = 0;
    u32 r0 = arg0.addr();
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
    u32 r13 = guest::cpu()->r[13];
    float S0 = 0;
    float S1 = 0;
    float S2 = 0;
    float S3 = 0;
    float S4 = 0;
    r13 = r13 - 0x90u;  // (from the original)
    r5 = r0;
    r2 = r5 + 4u;
    *gptr<u32>(r13 + 0x4cu) = u32(r0 + 0x600u);  // (from the original)
    r4 = 0x857cc0u;  // (from the original)
    r3 = r5 + 0x24cu;  // (from the original)
    if (u32(arg0->byte_6fe) == 1u) {
        goto L_31d1c4;
    }
    ea = r4 + 0x48u;  // (from the original)
    r1 = *gptr<u32>(ea);
    ea = r4 + 0x54u;  // (from the original)
    r0 = *gptr<u32>(ea);
    S2 = std::bit_cast<float>(*gptr<u32>(r4 + 0x3cu));  // (from the original)
    S0 = std::bit_cast<float>(*gptr<u32>(r4 + 0x40u));  // (from the original)
    S3 = std::bit_cast<float>(*gptr<u32>(r4 + 0x44u));  // (from the original)
    S4 = std::bit_cast<float>(*gptr<u32>(r4 + 0x4cu));  // (from the original)
    S1 = std::bit_cast<float>(*gptr<u32>(r4 + 0x50u));  // (from the original)
    ea = r13 + 0x28u;  // (from the original)
    *gptr<u32>(ea) = u32(r2);
    *gptr<u32>(ea + 4) = u32(r3);
    *gptr<u32>(r13 + 0x30u) = u32(std::bit_cast<u32>(S2));  // (from the original)
    *gptr<u32>(r13 + 0x34u) = u32(std::bit_cast<u32>(S0));  // (from the original)
    *gptr<u32>(r13 + 0x38u) = u32(std::bit_cast<u32>(S3));  // (from the original)
    *gptr<u32>(r13 + 0x3cu) = u32(r1);  // (from the original)
    *gptr<u32>(r13 + 0x40u) = u32(std::bit_cast<u32>(S4));  // (from the original)
    *gptr<u32>(r13 + 0x44u) = u32(std::bit_cast<u32>(S1));  // (from the original)
    *gptr<u32>(r13 + 0x48u) = u32(r0);  // (from the original)
L_31d0b0:;
    r0 = r5 + 0x608u;  // (from the original)
    r2 = 0u;
    r1 = r13 + 0x28u;  // (from the original)
    *gptr<u32>(r13 + 0x1cu) = u32(r0);  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2;
    guest::cpu()->s[3] = S3;
    guest::cpu()->s[4] = S4;
    guest::cpu()->s[5] = S5;
    guest::cpu()->s[6] = S6;
    r0 = call_002f6e98(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    S1 = guest::cpu()->s[1];
    S2 = guest::cpu()->s[2];
    S3 = guest::cpu()->s[3];
    S4 = guest::cpu()->s[4];
    S5 = guest::cpu()->s[5];
    S6 = guest::cpu()->s[6];
    ea = r5 + 0x6dcu;  // (from the original)
    r8 = 0u;
    S0 = std::bit_cast<float>(*gptr<u32>(0x31d1e0u));  // (from the original)
    r0 = *gptr<u32>(ea) | 0x40u;  // (from the original)
    ea = r5 + 0x6dcu;  // (from the original)
    *gptr<u32>(ea) = u32(r0);
    ea = r13;
    *gptr<u32>(ea) = u32(r8);
    ea = r13 + 4u;
    *gptr<u32>(ea) = u32(r8);
    ea = r13 + 8u;
    *gptr<u32>(ea) = u32(r8);
    ea = r13 + 0xcu;  // (from the original)
    *gptr<u32>(ea) = u32(r8);
    ea = r13 + 0x10u;  // (from the original)
    *gptr<u32>(ea) = u32(r8);
    ea = r13 + 0x14u;  // (from the original)
    *gptr<u32>(ea) = u32(r8);
    ea = r13 + 0x18u;  // (from the original)
    *gptr<u32>(ea) = u32(r8);
    *gptr<u32>(r13 + 8u) = u32(std::bit_cast<u32>(S0));
    *gptr<u32>(r13 + 0xcu) = u32(std::bit_cast<u32>(S0));  // (from the original)
    ea = r13 + 0x50u;  // (from the original)
    *gptr<u32>(ea) = u32(r8);
    ea = r13 + 0x54u;  // (from the original)
    *gptr<u32>(ea) = u32(r8);
    ea = r4;
    r0 = *gptr<u32>(ea);
    r1 = *gptr<u32>(ea + 4);
    r9 = r13 + 0x50u;  // (from the original)
    r10 = r13 + 0x58u;  // (from the original)
    ea = r13 + 0x58u;  // (from the original)
    *gptr<u32>(ea) = u32(r0);
    *gptr<u32>(ea + 4) = u32(r1);
    ea = r4 + 8u;
    r0 = *gptr<u32>(ea);
    r1 = *gptr<u32>(ea + 4);
    r4 = r8;
    r11 = r13 + 0x60u;  // (from the original)
    ea = r13 + 0x60u;  // (from the original)
    *gptr<u32>(ea) = u32(r0);
    *gptr<u32>(ea + 4) = u32(r1);
    do {
L_31d128:;
        r1 = *gptr<u32>(r10 + (r4 << 2));
        r0 = r5 + 0x24cu;  // (from the original)
        guest::cpu()->r[13] = r13;
        guest::cpu()->s[0] = S0;
        guest::cpu()->s[1] = S1;
        guest::cpu()->s[2] = S2;
        guest::cpu()->s[3] = S3;
        guest::cpu()->s[4] = S4;
        guest::cpu()->s[5] = S5;
        guest::cpu()->s[6] = S6;
        r0 = call_0056878c(r0, r1, r2, r3);
        r3 = guest::cpu()->r[3];
        S0 = guest::cpu()->s[0];
        S1 = guest::cpu()->s[1];
        S2 = guest::cpu()->s[2];
        S3 = guest::cpu()->s[3];
        S4 = guest::cpu()->s[4];
        S5 = guest::cpu()->s[5];
        S6 = guest::cpu()->s[6];
        *gptr<u32>(r13) = u32(r0);
        r1 = *gptr<u32>(r11 + (r4 << 2));
        r2 = 1u;
        r0 = r5 + 0x24cu;  // (from the original)
        guest::cpu()->r[13] = r13;
        guest::cpu()->s[0] = S0;
        guest::cpu()->s[1] = S1;
        guest::cpu()->s[2] = S2;
        guest::cpu()->s[3] = S3;
        guest::cpu()->s[4] = S4;
        guest::cpu()->s[5] = S5;
        guest::cpu()->s[6] = S6;
        r0 = call_004b4fc0(r0, r1, r2, r3);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        S0 = guest::cpu()->s[0];
        S1 = guest::cpu()->s[1];
        S2 = guest::cpu()->s[2];
        S3 = guest::cpu()->s[3];
        S4 = guest::cpu()->s[4];
        S5 = guest::cpu()->s[5];
        S6 = guest::cpu()->s[6];
        ea = r13 + 4u;
        *gptr<u32>(ea) = u32(r0);
        ea = r9 + (r4 << 2);
        r0 = *gptr<u32>(ea);
        ea = r13 + 0x10u;  // (from the original)
        *gptr<u32>(ea) = u32(r0);
        *gptr<u32>(ea + 4) = u32(r4);
        r1 = r13;
        r6 = r5 + ((r4 << 3) - r4 << 5);
        r7 = r6 + 0x448u;  // (from the original)
        r0 = r7;
        guest::cpu()->r[13] = r13;
        guest::cpu()->s[0] = S0;
        guest::cpu()->s[1] = S1;
        guest::cpu()->s[2] = S2;
        guest::cpu()->s[3] = S3;
        guest::cpu()->s[4] = S4;
        guest::cpu()->s[5] = S5;
        guest::cpu()->s[6] = S6;
        r0 = call_002b6a00(r0, r1, r2, r3);
        r3 = guest::cpu()->r[3];
        S0 = guest::cpu()->s[0];
        S1 = guest::cpu()->s[1];
        S2 = guest::cpu()->s[2];
        S3 = guest::cpu()->s[3];
        S4 = guest::cpu()->s[4];
        S5 = guest::cpu()->s[5];
        S6 = guest::cpu()->s[6];
        *gptr<u8>(r6 + 0x522u) = u8(r8);  // (from the original)
        *gptr<u8>(r6 + 0x523u) = u8(r8);  // (from the original)
        r0 = *gptr<u32>(r13 + 0x1cu);  // (from the original)
        r2 = 1u;
        r1 = r7;
        guest::cpu()->r[13] = r13;
        guest::cpu()->s[0] = S0;
        guest::cpu()->s[1] = S1;
        guest::cpu()->s[2] = S2;
        guest::cpu()->s[3] = S3;
        guest::cpu()->s[4] = S4;
        guest::cpu()->s[5] = S5;
        guest::cpu()->s[6] = S6;
        r0 = call_002f7508(r0, r1, r2, r3);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        S0 = guest::cpu()->s[0];
        S1 = guest::cpu()->s[1];
        S2 = guest::cpu()->s[2];
        S3 = guest::cpu()->s[3];
        S4 = guest::cpu()->s[4];
        S5 = guest::cpu()->s[5];
        S6 = guest::cpu()->s[6];
        r4 = r4 + 1u;
        guest::preempt();
    } while (s32(r4) < s32(2u));
    r0 = *gptr<u32>(r13 + 0x1cu);  // (from the original)
    r1 = 0u;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2;
    guest::cpu()->s[3] = S3;
    guest::cpu()->s[4] = S4;
    guest::cpu()->s[5] = S5;
    guest::cpu()->s[6] = S6;
    r0 = call_002f6a30(r0, r1, r2, r3);
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    r1 = 0x23u;  // (from the original)
    *gptr<u32>(r5 + 0x6dcu) = u32(*gptr<u32>(r5 + 0x6dcu) & ~8u);  // (from the original)
    r0 = *gptr<u32>(r13 + 0x4cu);  // (from the original)
    *gptr<u16>(r0 + 0xd8u) = u16(r1);  // (from the original)
    r13 = r13 + 0x90u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    return r0;
L_31d1c4:;
    r0 = r4 + 0x18u;  // (from the original)
    S0 = std::bit_cast<float>(*gptr<u32>(r0));
    S1 = std::bit_cast<float>(*gptr<u32>(r0 + 4));
    S2 = std::bit_cast<float>(*gptr<u32>(r0 + 8));
    S3 = std::bit_cast<float>(*gptr<u32>(r0 + 0xc));  // (from the original)
    S4 = std::bit_cast<float>(*gptr<u32>(r0 + 0x10));  // (from the original)
    S5 = std::bit_cast<float>(*gptr<u32>(r0 + 0x14));  // (from the original)
    S6 = std::bit_cast<float>(*gptr<u32>(r0 + 0x18));  // (from the original)
    r0 = r13 + 0x30u;  // (from the original)
    ea = r13 + 0x28u;  // (from the original)
    *gptr<u32>(ea) = u32(r2);
    *gptr<u32>(ea + 4) = u32(r3);
    *gptr<u32>(r0) = u32(std::bit_cast<u32>(S0));
    *gptr<u32>(r0 + 4) = u32(std::bit_cast<u32>(S1));
    *gptr<u32>(r0 + 8) = u32(std::bit_cast<u32>(S2));
    *gptr<u32>(r0 + 0xc) = u32(std::bit_cast<u32>(S3));  // (from the original)
    *gptr<u32>(r0 + 0x10) = u32(std::bit_cast<u32>(S4));  // (from the original)
    *gptr<u32>(r0 + 0x14) = u32(std::bit_cast<u32>(S5));  // (from the original)
    *gptr<u32>(r0 + 0x18) = u32(std::bit_cast<u32>(S6));  // (from the original)
    guest::preempt();
    goto L_31d0b0;
}

}  // namespace d_0031d048
GUEST_EXPORT(0x0031d048, d_0031d048::f_0031d048);

// f_0031d5d4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0031d5d4 {

inline constexpr guest::Function<0x00299b30, u32(u32, u32, u32, u32)> call_00299b30;  // (from the original)

u32 f_0031d5d4(u32 r0, u32 r1) {
    guest::cpu()->r[13] -= 8u;
    r0 = call_00299b30(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = 0x8f476cu;  // (from the original)
    *gptr<u32>(r0) = u32(r1);
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_0031d5d4
GUEST_EXPORT(0x0031d5d4, d_0031d5d4::f_0031d5d4);

// f_0031d6e8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0031d6e8 {

inline constexpr guest::Function<0x002fe8a8, u32(u32, u32, u32, u32)> call_002fe8a8;  // (from the original)
inline constexpr guest::Function<0x006dcdac, u32(u32, u32, u32, u32)> call_006dcdac;  // (from the original)

u32 f_0031d6e8(u32 r0, u32 r1, u32 r2) {
    u32 res = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r5 = r0;
    r0 = 0u;
    r0 = call_002fe8a8(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r4 = r0;
    if (r0 != 0) {
        r1 = u32(*gptr<u8>(r5));
        r2 = r4 + 0x8a3cu;  // (from the original)
        r0 = r1 & 7u;
        if (r0 >= 4u) {
            r0 = 0u;
        }
        r1 = (r1 & 0x38u) >> 3;  // (from the original)
        *gptr<u8>(r0 + r2 + 0xdu) = u8(r1);  // (from the original)
    }
    r0 = u32(*gptr<u8>(0x9506b0u));  // (from the original)
    if (r0 != 0xffu) {  // (from the original)
        goto L_31d7dc;
    }
    r0 = *gptr<u32>(0x9506b4u);  // (from the original)
    if (r0 == 0) {
        goto L_31d7dc;
    }
    r0 = call_006dcdac(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    if (r0 == 0) {
        goto L_31d7dc;
    }
    res = u32(*gptr<u8>(r5)) & 7u;
    r1 = res;
    if (res != 0) {
        r2 = 0x88f033u;  // (from the original)
        if (r1 == 1u) {
            goto L_31d7a0;
        }
        if (r1 == 2u) {
            goto L_31d7bc;
        }
        if (r1 != 3u) {
            goto L_31d7dc;
        }
        r1 = *gptr<u32>(*gptr<u32>(r0) + 0xb0u);  // (from the original)
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        return guest::call_address<u32>(r1, r0, r1, r2, guest::cpu()->r[3]);
    }
    r1 = *gptr<u32>(*gptr<u32>(r0) + 0xa4u);  // (from the original)
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    return guest::call_address<u32>(r1, r0, r1, r2, guest::cpu()->r[3]);
L_31d7a0:;
    r1 = u32(*gptr<u8>(r2 + u32(*gptr<u8>(0x8a4au + r4))));  // (from the original)
    r2 = *gptr<u32>(*gptr<u32>(r0) + 0xa8u);  // (from the original)
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    return guest::call_address<u32>(r2, r0, r1, r2, guest::cpu()->r[3]);
L_31d7bc:;
    r1 = u32(*gptr<u8>(u32(*gptr<u8>(0x8a4bu + r4)) + r2 + 5u));  // (from the original)
    r2 = *gptr<u32>(*gptr<u32>(r0) + 0xacu);  // (from the original)
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    return guest::call_address<u32>(r2, r0, r1, r2, guest::cpu()->r[3]);
L_31d7dc:;
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
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
GUEST_OFFSET(Object_0031d8f8_0, word_1c, 0x1c);  // (from the original)
GUEST_OFFSET(Object_0031d8f8_0, byte_2a, 0x2a);  // (from the original)

inline constexpr guest::Function<0x0031df9c, u32(u32, u32, u32, u32)> call_0031df9c;  // (from the original)
inline constexpr guest::Function<0x004f0de0, u32(u32, u32, u32, u32)> call_004f0de0;  // (from the original)

u32 f_0031d8f8(gptr<Object_0031d8f8_0> arg0, u32 r1, u32 r2) {
    u32 r0 = arg0.addr();
    u32 r4 = guest::cpu()->r[4];
    u32 zf = 0;
    guest::cpu()->r[13] -= 8u;
    r4 = r0;
    r0 = arg0->word_1c;
    if (r0 == 0) {
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    if (r1 != 0) {
        zf = r2 == 0;
        if (zf) {
            r1 = u32(arg0->byte_2a);
            zf = r1 == 0;
        }
        if (zf) {
            guest::cpu()->r[13] += 8u;
            guest::cpu()->r[1] = r1;
            return r0;
        }
        r0 = call_004f0de0(r0, r1, r2, guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
    }
    r0 = u32(*gptr<u8>(r4 + 0x2au));  // (from the original)
    if (r0 == 0) {
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r2 = 1u;
    r1 = r4 + 0x60u;  // (from the original)
    r0 = r4;
    r0 = call_0031df9c(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r0 = 0u;
    *gptr<u8>(r4 + 0x2au) = u8(r0);  // (from the original)
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_0031d8f8
GUEST_EXPORT(0x0031d8f8, d_0031d8f8::f_0031d8f8);

// f_0031df9c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0031df9c {

struct __attribute__((packed)) Object_0031df9c_0 {
    u8 unknown_0[0x1c];  // (not used here)
    u32 word_1c;
};
GUEST_OFFSET(Object_0031df9c_0, word_1c, 0x1c);  // (from the original)

inline constexpr guest::Function<0x004d57d4, u32(u32, u32, u32, u32)> call_004d57d4;  // (from the original)
inline constexpr guest::Function<0x004f1104, u32(u32, u32, u32, u32)> call_004f1104;  // (from the original)

u32 f_0031df9c(gptr<Object_0031df9c_0> arg0, u32 r1, u32 r2) {
    u32 r0 = arg0.addr();
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r4 = r1;
    r0 = arg0->word_1c;
    r1 = r2;
    if (r0 != 0) {
        r0 = call_004f1104(r0, r1, r2, guest::cpu()->r[3]);
        r2 = guest::cpu()->r[2];
    }
    r1 = 0x276u;  // (from the original)
    r0 = *gptr<u32>(r4 + 8u);
    r5 = 0u;
    *gptr<u16>(r4 + 4u) = u16(r1);
    *gptr<u32>(r4 + 0x2cu) = u32(r5);  // (from the original)
    *gptr<u8>(r4 + 0x31u) = u8(r5);  // (from the original)
    if (r0 == 0) {
        goto L_31dfec;
    } else {
        r0 = *gptr<u32>(r4) + 4u;
    }
    r1 = r4 + 8u;
    r0 = call_004d57d4(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r0 = 0u;
    *gptr<u32>(r4 + 8u) = u32(r0);
L_31dfec:;
    *gptr<u8>(r4 + 0x30u) = u8(r5);  // (from the original)
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_0031df9c
GUEST_EXPORT(0x0031df9c, d_0031df9c::f_0031df9c);

// f_0031e0d8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0031e0d8 {

inline constexpr guest::Function<0x0031df9c, u32(u32, u32, u32, u32)> call_0031df9c;  // (from the original)
inline constexpr guest::Function<0x004ecb2c, u32(u32, u32, u32, u32)> call_004ecb2c;  // (from the original)

u32 f_0031e0d8(u32 r0) {
    u32 r1 = 0;
    u32 r2 = 0;
    u32 r4 = guest::cpu()->r[4];
    guest::cpu()->r[13] -= 8u;
    r4 = r0;
    r2 = 0u;
    r1 = r0 + 0x2cu;  // (from the original)
    r0 = call_0031df9c(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r0 = r4 + 0x38u;  // (from the original)
    r0 = call_004ecb2c(r0, r1, r2, guest::cpu()->r[3]);
    r2 = 1u;
    r1 = r4 + 0x60u;  // (from the original)
    r0 = r4;
    r0 = call_0031df9c(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r0 = r4 + 0x6cu;  // (from the original)
    r0 = call_004ecb2c(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r0 = 0u;
    *gptr<u32>(r4 + 0x1cu) = u32(r0);  // (from the original)
    *gptr<u32>(r4 + 0x20u) = u32(r0);  // (from the original)
    *gptr<u32>(r4 + 0x2cu) = u32(r0);  // (from the original)
    *gptr<u32>(r4 + 0x60u) = u32(r0);  // (from the original)
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_0031e0d8
GUEST_EXPORT(0x0031e0d8, d_0031e0d8::f_0031e0d8);

// f_0031e124: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0031e124 {

struct __attribute__((packed)) Object_0031e124_0 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u16 half_10;
    u16 half_12;
    u16 half_14;
    u8 byte_16;
    u8 byte_17;
    u8 byte_18;
    u8 unknown_19[0x3];  // (not used here)
    u32 word_1c;
    u32 word_20;
    u8 byte_24;
    u8 unknown_25[0x1];  // (not used here)
    u16 half_26;
    u16 half_28;
    u8 byte_2a;
    u8 unknown_2b[0x9];  // (not used here)
    u32 word_34;
};
GUEST_OFFSET(Object_0031e124_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_0031e124_0, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_0031e124_0, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Object_0031e124_0, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Object_0031e124_0, half_10, 0x10);  // (from the original)
GUEST_OFFSET(Object_0031e124_0, half_12, 0x12);  // (from the original)
GUEST_OFFSET(Object_0031e124_0, half_14, 0x14);  // (from the original)
GUEST_OFFSET(Object_0031e124_0, byte_16, 0x16);  // (from the original)
GUEST_OFFSET(Object_0031e124_0, byte_17, 0x17);  // (from the original)
GUEST_OFFSET(Object_0031e124_0, byte_18, 0x18);  // (from the original)
GUEST_OFFSET(Object_0031e124_0, word_1c, 0x1c);  // (from the original)
GUEST_OFFSET(Object_0031e124_0, word_20, 0x20);  // (from the original)
GUEST_OFFSET(Object_0031e124_0, byte_24, 0x24);  // (from the original)
GUEST_OFFSET(Object_0031e124_0, half_26, 0x26);  // (from the original)
GUEST_OFFSET(Object_0031e124_0, half_28, 0x28);  // (from the original)
GUEST_OFFSET(Object_0031e124_0, byte_2a, 0x2a);  // (from the original)
GUEST_OFFSET(Object_0031e124_0, word_34, 0x34);  // (from the original)

inline constexpr guest::Function<0x004ecb80, u32(u32, u32, u32, u32)> call_004ecb80;  // (from the original)

u32 f_0031e124(gptr<Object_0031e124_0> arg0) {
    u32 ea = 0;
    u32 r0 = arg0.addr();
    u32 r1 = 0;
    u32 r2 = 0;
    u32 r3 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 8;
    r4 = 0u;
    arg0->word_4 = u32(r4);
    arg0->word_8 = u32(r4);
    r1 = 0xfau;  // (from the original)
    arg0->word_c = u32(r4);
    arg0->half_10 = u16(r1);
    arg0->half_12 = u16(0xfbu);  // (from the original)
    arg0->half_14 = u16(r4);
    arg0->byte_16 = u8(r4);
    arg0->byte_17 = u8(r4);
    arg0->byte_18 = u8(r4);
    arg0->word_1c = u32(r4);
    arg0->word_0 = u32(0x8f4790u);  // (from the original)
    r3 = 1u;
    arg0->word_20 = u32(r4);
    r2 = 0xf7u;  // (from the original)
    arg0->byte_24 = u8(r3);
    arg0->half_26 = u16(r2);
    arg0->half_28 = u16(r1);
    arg0->byte_2a = u8(r4);
    ea = r0 + 0x34u;  // (from the original)
    arg0->word_34 = u32(r4);
    r0 = ea + 4u;
    guest::cpu()->r[13] = r13;
    r0 = call_004ecb80(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    ea = r0 + 0x30u;  // (from the original)
    *gptr<u32>(ea) = u32(r4);
    r0 = ea + 4u;
    guest::cpu()->r[13] = r13;
    r0 = call_004ecb80(r0, r1, r2, r3);
    r1 = 0x276u;  // (from the original)
    r0 = r0 - 0x6cu;  // (from the original)
    *gptr<u32>(r0 + 0x2cu) = u32(r4);  // (from the original)
    *gptr<u16>(r0 + 0x30u) = u16(r1);  // (from the original)
    *gptr<u32>(r0 + 0x34u) = u32(r4);  // (from the original)
    *gptr<u32>(r0 + 0x58u) = u32(r4);  // (from the original)
    *gptr<u8>(r0 + 0x5cu) = u8(r4);  // (from the original)
    *gptr<u8>(r0 + 0x5du) = u8(r4);  // (from the original)
    *gptr<u32>(r0 + 0x60u) = u32(r4);  // (from the original)
    *gptr<u16>(r0 + 0x64u) = u16(r1);  // (from the original)
    *gptr<u32>(r0 + 0x68u) = u32(r4);  // (from the original)
    *gptr<u32>(r0 + 0x8cu) = u32(r4);  // (from the original)
    *gptr<u8>(r0 + 0x90u) = u8(r4);  // (from the original)
    *gptr<u8>(r0 + 0x91u) = u8(r4);  // (from the original)
    r13 = r13 + 8;
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_0031e124
GUEST_EXPORT(0x0031e124, d_0031e124::f_0031e124);

// f_0031e204: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0031e204 {

struct __attribute__((packed)) Object_0031e204_0 {
    u32 word_0;
};
GUEST_OFFSET(Object_0031e204_0, word_0, 0x0);  // (from the original)

inline constexpr guest::Function<0x004ecbe0, u32(u32, u32, u32, u32)> call_004ecbe0;  // (from the original)

u32 f_0031e204(gptr<Object_0031e204_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r1 = 0;
    r1 = 0x8f4790u;  // (from the original)
    guest::cpu()->r[13] -= 8u;
    arg0->word_0 = u32(r1);
    r0 = r0 + 0x6cu;  // (from the original)
    r0 = call_004ecbe0(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r0 = r0 - 0x34u;  // (from the original)
    r0 = call_004ecbe0(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r0 = r0 - 0x38u;  // (from the original)
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_0031e204
GUEST_EXPORT(0x0031e204, d_0031e204::f_0031e204);

// f_0031e42c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0031e42c {

struct __attribute__((packed)) Object_0031e42c_0 {
    u8 unknown_0[0x3c4];  // (not used here)
    u32 word_3c4;
    u8 unknown_3c8[0x124];  // (not used here)
    u8 byte_4ec;
};
GUEST_OFFSET(Object_0031e42c_0, word_3c4, 0x3c4);  // (from the original)
GUEST_OFFSET(Object_0031e42c_0, byte_4ec, 0x4ec);  // (from the original)

inline constexpr guest::Function<0x002fe7f4, u32(u32, u32, u32, u32)> call_002fe7f4;  // (from the original)
inline constexpr guest::Function<0x005e2e50, u32(u32, u32, u32, u32)> call_005e2e50;  // (from the original)
inline constexpr guest::Function<0x005e2f94, u32(u32, u32, u32, u32)> call_005e2f94;  // (from the original)
inline constexpr guest::Function<0x005fdf68, u32(u32, u32, u32, u32)> call_005fdf68;  // (from the original)
inline constexpr guest::Function<0x00768174, u32(u32, u32, u32, u32)> call_00768174;  // (from the original)
inline constexpr guest::Function<0x00819f50, u32(u32, u32, u32, u32)> call_00819f50;  // (from the original)

u32 f_0031e42c(gptr<Object_0031e42c_0> arg0, u32 r1, u32 r2, float S0) {
    u32 r0 = arg0.addr();
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r13 = guest::cpu()->r[13];
    r5 = r0;
    r4 = r0 + 0x400u;  // (from the original)
    r0 = u32(arg0->byte_4ec);
    r13 = r13 - 0x70u;  // (from the original)
    r7 = r1;
    if (r0 == 0) {
        r0 = r1;
        arg0->word_3c4 = u32(r2);
        guest::cpu()->r[13] = r13;
        guest::cpu()->s[0] = S0;
        r0 = call_00768174(r0, r1, r2, guest::cpu()->r[3]);
        S0 = guest::cpu()->s[0];
        r6 = r5 + 0x41cu;  // (from the original)
        if (r0 != 0) {
            r2 = 6u;
            r1 = 0x31e4f8u;  // (from the original)
            r0 = r13;
            guest::cpu()->r[13] = r13;
            guest::cpu()->s[0] = S0;
            r0 = call_005fdf68(r0, r1, r2, guest::cpu()->r[3]);
            r2 = guest::cpu()->r[2];
            S0 = guest::cpu()->s[0];
            r1 = r13;
            r0 = r6;
            guest::cpu()->r[13] = r13;
            guest::cpu()->s[0] = S0;
            r0 = call_005e2e50(r0, r1, r2, guest::cpu()->r[3]);
            r1 = guest::cpu()->r[1];
            r2 = guest::cpu()->r[2];
            S0 = guest::cpu()->s[0];
        } else {
            r2 = 0u;
            r1 = r7;
            r0 = r13;
            guest::cpu()->r[13] = r13;
            guest::cpu()->s[0] = S0;
            r0 = call_002fe7f4(r0, r1, r2, guest::cpu()->r[3]);
            r2 = guest::cpu()->r[2];
            S0 = guest::cpu()->s[0];
            r1 = r13;
            r0 = r6;
            guest::cpu()->r[13] = r13;
            guest::cpu()->s[0] = S0;
            r0 = call_005e2e50(r0, r1, r2, guest::cpu()->r[3]);
            r2 = guest::cpu()->r[2];
            S0 = guest::cpu()->s[0];
            r1 = 0x909f18u;  // (from the original)
            *gptr<u32>(r13) = u32(r1);
        }
        r0 = r6;
        guest::cpu()->r[13] = r13;
        guest::cpu()->s[0] = S0;
        r0 = call_005e2f94(r0, r1, r2, guest::cpu()->r[3]);
        S0 = std::bit_cast<float>(*gptr<u32>(0x31e508u));  // (from the original)
        *gptr<u32>(r4 + 0xe0u) = u32(std::bit_cast<u32>(S0));  // (from the original)
        *gptr<u32>(r4 + 0xe4u) = u32(std::bit_cast<u32>(S0));  // (from the original)
        *gptr<u32>(r4 + 0xe8u) = u32(std::bit_cast<u32>(S0));  // (from the original)
        r1 = *gptr<u32>(0x879424u);  // (from the original)
        r2 = *gptr<u32>(0x879424u + 4);  // (from the original)
        r0 = r5;
        guest::cpu()->r[13] = r13;
        guest::cpu()->s[0] = S0;
        r0 = call_00819f50(r0, r1, r2, guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        S0 = guest::cpu()->s[0];
    }
    r13 = r13 + 0x70u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    return r0;
}

}  // namespace d_0031e42c
GUEST_EXPORT(0x0031e42c, d_0031e42c::f_0031e42c);

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
GUEST_OFFSET(Object_0031e510_0, word_3c4, 0x3c4);  // (from the original)
GUEST_OFFSET(Object_0031e510_0, word_4e0, 0x4e0);  // (from the original)
GUEST_OFFSET(Object_0031e510_0, word_4e4, 0x4e4);  // (from the original)
GUEST_OFFSET(Object_0031e510_0, word_4e8, 0x4e8);  // (from the original)
GUEST_OFFSET(Object_0031e510_0, byte_4ec, 0x4ec);  // (from the original)

struct __attribute__((packed)) Object_0031e510_3 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Object_0031e510_3, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_0031e510_3, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_0031e510_3, word_8, 0x8);  // (from the original)

inline constexpr guest::Function<0x005e2e50, u32(u32, u32, u32, u32)> call_005e2e50;  // (from the original)
inline constexpr guest::Function<0x005e2f94, u32(u32, u32, u32, u32)> call_005e2f94;  // (from the original)
inline constexpr guest::Function<0x00819f50, u32(u32, u32, u32, u32)> call_00819f50;  // (from the original)

u32 f_0031e510(gptr<Object_0031e510_0> arg0, u32 r1, u32 r2, gptr<Object_0031e510_3> arg3) {
    u32 r0 = arg0.addr();
    u32 r3 = arg3.addr();
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r4 = r0;
    r0 = u32(arg0->byte_4ec);
    if (r0 == 0) {
        arg0->word_3c4 = u32(r2);
        r0 = r4 + 0x41cu;  // (from the original)
        arg0->word_4e0 = u32(arg3->word_0);
        r5 = r0;
        arg0->word_4e4 = u32(arg3->word_4);
        r2 = arg3->word_8;
        arg0->word_4e8 = u32(r2);
        r0 = call_005e2e50(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r0 = r5;
        r0 = call_005e2f94(r0, r1, r2, r3);
        r3 = guest::cpu()->r[3];
        r1 = *gptr<u32>(0x879424u);  // (from the original)
        r2 = *gptr<u32>(0x879424u + 4);  // (from the original)
        r0 = r4;
        r0 = call_00819f50(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
    }
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_0031e510
GUEST_EXPORT(0x0031e510, d_0031e510::f_0031e510);

// f_0031e594: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0031e594 {

struct __attribute__((packed)) Object_0031e594_0 {
    u8 unknown_0[0x3c4];  // (not used here)
    u32 word_3c4;
    u8 unknown_3c8[0x118];  // (not used here)
    u32 word_4e0;
    u32 word_4e4;
    u32 word_4e8;
};
GUEST_OFFSET(Object_0031e594_0, word_3c4, 0x3c4);  // (from the original)
GUEST_OFFSET(Object_0031e594_0, word_4e0, 0x4e0);  // (from the original)
GUEST_OFFSET(Object_0031e594_0, word_4e4, 0x4e4);  // (from the original)
GUEST_OFFSET(Object_0031e594_0, word_4e8, 0x4e8);  // (from the original)

struct __attribute__((packed)) Object_0031e594_3 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Object_0031e594_3, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_0031e594_3, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_0031e594_3, word_8, 0x8);  // (from the original)

inline constexpr guest::Function<0x0031e228, u32(u32, u32, u32, u32)> call_0031e228;  // (from the original)
inline constexpr guest::Function<0x0031e314, u32(u32, u32, u32, u32)> call_0031e314;  // (from the original)
inline constexpr guest::Function<0x00568c10, u32(u32, u32, u32, u32)> call_00568c10;  // (from the original)
inline constexpr guest::Function<0x005e2e50, u32(u32, u32, u32, u32)> call_005e2e50;  // (from the original)
inline constexpr guest::Function<0x005e2f94, u32(u32, u32, u32, u32)> call_005e2f94;  // (from the original)
inline constexpr guest::Function<0x00819f50, u32(u32, u32, u32, u32)> call_00819f50;  // (from the original)

u32 f_0031e594(gptr<Object_0031e594_0> arg0, u32 r1, u32 r2, gptr<Object_0031e594_3> arg3) {
    u32 r0 = arg0.addr();
    u32 r3 = arg3.addr();
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r4 = r0;
    arg0->word_3c4 = u32(r2);
    arg0->word_4e0 = u32(arg3->word_0);
    arg0->word_4e4 = u32(arg3->word_4);
    r2 = arg3->word_8;
    arg0->word_4e8 = u32(r2);
    r0 = r4 + 0x41cu;  // (from the original)
    r5 = r0;
    r0 = call_005e2e50(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r5;
    r0 = call_005e2f94(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (u32(*gptr<u8>(r4 + 0x4ecu)) != 0) {  // (from the original)
        r0 = r4;
        r0 = call_0031e228(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r0 = r4;
        r0 = call_0031e314(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r0 = r4 + 0x270u;  // (from the original)
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        return call_00568c10(r0, r1, r2, r3);
    }
    r1 = *gptr<u32>(0x879424u);  // (from the original)
    r2 = *gptr<u32>(0x879424u + 4);  // (from the original)
    r0 = r4;
    r0 = call_00819f50(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_0031e594
GUEST_EXPORT(0x0031e594, d_0031e594::f_0031e594);

// f_0031e810: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0031e810 {

struct __attribute__((packed)) Object_0031e810_0 {
    u8 unknown_0[0x4ec];  // (not used here)
    u8 byte_4ec;
};
GUEST_OFFSET(Object_0031e810_0, byte_4ec, 0x4ec);  // (from the original)

inline constexpr guest::Function<0x0056878c, u32(u32, u32, u32, u32)> call_0056878c;  // (from the original)
inline constexpr guest::Function<0x00568c10, u32(u32, u32, u32, u32)> call_00568c10;  // (from the original)

u32 f_0031e810(gptr<Object_0031e810_0> arg0, u32 r1) {
    u32 r0 = arg0.addr();
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r4 = r0;
    r0 = u32(arg0->byte_4ec);
    if (r0 == 1u) {
        r1 = 0x31e850u;  // (from the original)
        r0 = r4 + 0x270u;  // (from the original)
        r0 = call_0056878c(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
        r5 = 0u;
        r1 = u32(*gptr<u8>(r0 + 0xb7u)) & 0xfeu;  // (from the original)
        *gptr<u8>(r0 + 0xb7u) = u8(r1);  // (from the original)
        r0 = r4 + 0x270u;  // (from the original)
        r0 = call_00568c10(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        *gptr<u8>(r4 + 0x4ecu) = u8(r5);  // (from the original)
    }
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_0031e810
GUEST_EXPORT(0x0031e810, d_0031e810::f_0031e810);

// f_0031e8bc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0031e8bc {

inline constexpr guest::Function<0x001323bc, u32(u32, u32, u32, u32)> call_001323bc;  // (from the original)
inline constexpr guest::Function<0x00569e6c, u32(u32, u32, u32, u32)> call_00569e6c;  // (from the original)

u32 f_0031e8bc(u32 r0, u32 r1, u32 r2) {
    u32 r4 = guest::cpu()->r[4];
    guest::cpu()->r[13] -= 8u;
    r4 = r0;
    r0 = call_001323bc(r0, r1, r2, guest::cpu()->r[3]);
    r1 = r4 + 0x270u;  // (from the original)
    guest::cpu()->r[13] += 8u;
    r2 = 1u;
    return call_00569e6c(r0, r1, r2, guest::cpu()->r[3]);
}

}  // namespace d_0031e8bc
GUEST_EXPORT(0x0031e8bc, d_0031e8bc::f_0031e8bc);

// f_0031eb20: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0031eb20 {

struct __attribute__((packed)) Object_0031eb20_0 {
    u8 unknown_0[0x4ed];  // (not used here)
    u8 byte_4ed;
};
GUEST_OFFSET(Object_0031eb20_0, byte_4ed, 0x4ed);  // (from the original)

inline constexpr guest::Function<0x00132364, u32(u32, u32, u32, u32)> call_00132364;  // (from the original)
inline constexpr guest::Function<0x001323b4, u32(u32, u32, u32, u32)> call_001323b4;  // (from the original)
inline constexpr guest::Function<0x005e2e04, u32(u32, u32, u32, u32)> call_005e2e04;  // (from the original)

u32 f_0031eb20(gptr<Object_0031eb20_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r4 = guest::cpu()->r[4];
    guest::cpu()->r[13] -= 8u;
    r4 = r0;
    if (u32(arg0->byte_4ed) == 1u) {
        r0 = r4 + 0x24u;  // (from the original)
        r0 = call_00132364(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    }
    r0 = r4 + 0x270u;  // (from the original)
    r0 = call_001323b4(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    r0 = r4 + 0x41cu;  // (from the original)
    r0 = call_005e2e04(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    r0 = 1u;
    guest::cpu()->r[13] += 8u;
    return r0;
}

}  // namespace d_0031eb20
GUEST_EXPORT(0x0031eb20, d_0031eb20::f_0031eb20);

// f_0031ec78: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0031ec78 {

inline constexpr guest::Function<0x00567e24, u32(u32, u32, u32, u32)> call_00567e24;  // (from the original)

u32 f_0031ec78(u32 r0) {
    u32 r1 = 0;
    u32 r4 = guest::cpu()->r[4];
    guest::cpu()->r[13] -= 8u;
    r4 = r0;
    r1 = 0x31ec9cu;  // (from the original)
    r0 = r0 + 0x24u;  // (from the original)
    r0 = call_00567e24(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 != 0) {
        r1 = 1u;
        *gptr<u8>(r4 + 0x4edu) = u8(r1);  // (from the original)
    }
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_0031ec78
GUEST_EXPORT(0x0031ec78, d_0031ec78::f_0031ec78);

// f_0031ecbc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0031ecbc {

struct __attribute__((packed)) Object_0031ecbc_0 {
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
};
GUEST_OFFSET(Object_0031ecbc_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_0031ecbc_0, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_0031ecbc_0, byte_8, 0x8);  // (from the original)
GUEST_OFFSET(Object_0031ecbc_0, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Object_0031ecbc_0, word_10, 0x10);  // (from the original)
GUEST_OFFSET(Object_0031ecbc_0, word_14, 0x14);  // (from the original)
GUEST_OFFSET(Object_0031ecbc_0, byte_18, 0x18);  // (from the original)
GUEST_OFFSET(Object_0031ecbc_0, word_1c, 0x1c);  // (from the original)
GUEST_OFFSET(Object_0031ecbc_0, word_20, 0x20);  // (from the original)

inline constexpr guest::Function<0x001207d8, u32(u32, u32, u32, u32)> call_001207d8;  // (from the original)
inline constexpr guest::Function<0x00125aec, u32(u32, u32, u32, u32)> call_00125aec;  // (from the original)
inline constexpr guest::Function<0x00125e3c, u32(u32, u32, u32, u32)> call_00125e3c;  // (from the original)
inline constexpr guest::Function<0x005e3128, u32(u32, u32, u32, u32)> call_005e3128;  // (from the original)

u32 f_0031ecbc(gptr<Object_0031ecbc_0> arg0) {
    u32 ea = 0;
    u32 r0 = arg0.addr();
    u32 r1 = 0;
    u32 r2 = 0;
    u32 r3 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 8;
    r4 = 0u;
    arg0->word_4 = u32(r4);
    arg0->byte_8 = u8(r4);
    r2 = *gptr<u32>(0x87943cu + 4);  // (from the original)
    r3 = r0 + 0xcu;  // (from the original)
    arg0->word_c = u32(*gptr<u32>(0x87943cu));  // (from the original)
    arg0->word_10 = u32(r2);
    arg0->word_14 = u32(r4);
    r1 = 0x8f47a0u;  // (from the original)
    arg0->byte_18 = u8(r4);
    arg0->word_1c = u32(r4);
    arg0->word_0 = u32(r1);
    arg0->word_20 = u32(r4);
    r0 = r0 + 0x24u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_001207d8(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    ea = r0 + 0x248u;  // (from the original)
    *gptr<u32>(ea) = u32(r4);
    r0 = ea + 4u;
    guest::cpu()->r[13] = r13;
    r0 = call_00125e3c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0x270u;  // (from the original)
    ea = r0 + 0x3bcu;  // (from the original)
    *gptr<u32>(ea) = u32(r4);
    ea = r0 + 0x3c0u;  // (from the original)
    *gptr<u32>(ea) = u32(r4);
    ea = r0 + 0x3c4u;  // (from the original)
    *gptr<u32>(ea) = u32(r4);
    ea = r0 + 0x3c8u;  // (from the original)
    *gptr<u32>(ea) = u32(r4);
    r0 = ea + 4u;
    guest::cpu()->r[13] = r13;
    r0 = call_00125aec(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 + 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00125aec(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = 0x15u;  // (from the original)
    r0 = r0 + 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_005e3128(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r0 = r0 - 0x41cu;  // (from the original)
    *gptr<u8>(r0 + 0x4ecu) = u8(r4);  // (from the original)
    *gptr<u8>(r0 + 0x4edu) = u8(r4);  // (from the original)
    r13 = r13 + 8;
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_0031ecbc
GUEST_EXPORT(0x0031ecbc, d_0031ecbc::f_0031ecbc);

// f_0031f1a4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0031f1a4 {

inline constexpr guest::Function<0x0081a058, u32(u32, u32, u32, u32)> call_0081a058;  // (from the original)

u32 f_0031f1a4(u32 r0) {
    u32 r1 = 0;
    u32 r2 = 0;
    guest::cpu()->r[13] -= 8u;
    r0 = r0 + 0x213cu;  // (from the original)
    r1 = *gptr<u32>(0x879538u);  // (from the original)
    r2 = *gptr<u32>(0x879538u + 4);  // (from the original)
    r0 = call_0081a058(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_0031f1a4
GUEST_EXPORT(0x0031f1a4, d_0031f1a4::f_0031f1a4);

// f_0031f2bc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0031f2bc {

inline constexpr guest::Function<0x0081a058, u32(u32, u32, u32, u32)> call_0081a058;  // (from the original)

u32 f_0031f2bc(u32 r0) {
    u32 r1 = 0;
    u32 r2 = 0;
    guest::cpu()->r[13] -= 8u;
    r0 = r0 + 0x213cu;  // (from the original)
    r1 = *gptr<u32>(0x879540u);  // (from the original)
    r2 = *gptr<u32>(0x879540u + 4);  // (from the original)
    r0 = call_0081a058(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_0031f2bc
GUEST_EXPORT(0x0031f2bc, d_0031f2bc::f_0031f2bc);

// f_0031f2dc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0031f2dc {

inline constexpr guest::Function<0x0022c390, u32(u32, u32, u32, u32)> call_0022c390;  // (from the original)
inline constexpr guest::Function<0x0022c48c, u32(u32, u32, u32, u32)> call_0022c48c;  // (from the original)
inline constexpr guest::Function<0x002b6a00, u32(u32, u32, u32, u32)> call_002b6a00;  // (from the original)
inline constexpr guest::Function<0x0056878c, u32(u32, u32, u32, u32)> call_0056878c;  // (from the original)

u32 f_0031f2dc(u32 r0, u32 r1, float S0_unused, float S1_unused, float S2, float S3, float S4, float S5, float S6) {
    u32 ea = 0;
    u32 r2 = 0;
    u32 r3 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r12 = 0;
    u32 r13 = guest::cpu()->r[13];
    float S0 = 0;
    float S1 = 0;
    r4 = r0;
    r6 = r0 + 0x258u;  // (from the original)
    r5 = 0x879530u;  // (from the original)
    r13 = r13 - 0x40u;  // (from the original)
    r7 = r5 + 0x9cu;  // (from the original)
    ea = r5 + 0x84u;  // (from the original)
    r0 = *gptr<u32>(ea);
    ea = r5 + 0x8cu;  // (from the original)
    r2 = *gptr<u32>(ea);
    r3 = *gptr<u32>(ea + 4);
    r12 = *gptr<u32>(ea + 8);
    S0 = std::bit_cast<float>(*gptr<u32>(r7));
    S1 = std::bit_cast<float>(*gptr<u32>(r7 + 4));
    r7 = r13 + 0x20u;  // (from the original)
    ea = r13;
    *gptr<u32>(ea) = u32(r0);
    ea = r13 + 8u;
    *gptr<u32>(ea) = u32(r2);
    *gptr<u32>(ea + 4) = u32(r3);
    *gptr<u32>(ea + 8) = u32(r12);
    r0 = r13 + 0x18u;  // (from the original)
    *gptr<u32>(r0) = u32(std::bit_cast<u32>(S0));
    *gptr<u32>(r0 + 4) = u32(std::bit_cast<u32>(S1));
    ea = r5 + 0xa4u;  // (from the original)
    r0 = *gptr<u32>(ea);
    r2 = *gptr<u32>(ea + 4);
    r3 = *gptr<u32>(ea + 8);
    *gptr<u32>(r13 + 0x14u) = u32(r1);  // (from the original)
    *gptr<u32>(r13 + 4u) = u32(r6);
    *gptr<u32>(r7) = u32(r0);
    *gptr<u32>(r7 + 4) = u32(r2);
    *gptr<u32>(r7 + 8) = u32(r3);
    r0 = r4 + 0x2308u;  // (from the original)
    r1 = r13;
    r6 = r0;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2;
    guest::cpu()->s[3] = S3;
    guest::cpu()->s[4] = S4;
    guest::cpu()->s[5] = S5;
    guest::cpu()->s[6] = S6;
    r0 = call_0022c390(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r7 = 0u;
    r5 = r5 + 0xb0u;  // (from the original)
    r1 = 0x879638u;  // (from the original)
    *gptr<u8>(0x2445u + r4) = u8(r7);  // (from the original)
    r0 = r4 + 0x258u;  // (from the original)
    S0 = std::bit_cast<float>(*gptr<u32>(r5));
    S1 = std::bit_cast<float>(*gptr<u32>(r5 + 4));
    S2 = std::bit_cast<float>(*gptr<u32>(r5 + 8));
    S3 = std::bit_cast<float>(*gptr<u32>(r5 + 0xc));  // (from the original)
    S4 = std::bit_cast<float>(*gptr<u32>(r5 + 0x10));  // (from the original)
    S5 = std::bit_cast<float>(*gptr<u32>(r5 + 0x14));  // (from the original)
    S6 = std::bit_cast<float>(*gptr<u32>(r5 + 0x18));  // (from the original)
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
    r0 = call_0056878c(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    S1 = guest::cpu()->s[1];
    S2 = guest::cpu()->s[2];
    S3 = guest::cpu()->s[3];
    S4 = guest::cpu()->s[4];
    S5 = guest::cpu()->s[5];
    S6 = guest::cpu()->s[6];
    *gptr<u32>(r13) = u32(r0);
    S0 = std::bit_cast<float>(*gptr<u32>(0x31f3e0u));  // (from the original)
    *gptr<u32>(r13 + 8u) = u32(std::bit_cast<u32>(S0));
    r0 = r4 + 0x21d8u;  // (from the original)
    *gptr<u32>(r13 + 0xcu) = u32(std::bit_cast<u32>(S0));  // (from the original)
    r1 = r13;
    r5 = r0;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2;
    guest::cpu()->s[3] = S3;
    guest::cpu()->s[4] = S4;
    guest::cpu()->s[5] = S5;
    guest::cpu()->s[6] = S6;
    r0 = call_002b6a00(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    S2 = guest::cpu()->s[2];
    S3 = guest::cpu()->s[3];
    S4 = guest::cpu()->s[4];
    S5 = guest::cpu()->s[5];
    S6 = guest::cpu()->s[6];
    r2 = 0u;
    r1 = r5;
    r0 = r6;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2;
    guest::cpu()->s[3] = S3;
    guest::cpu()->s[4] = S4;
    guest::cpu()->s[5] = S5;
    guest::cpu()->s[6] = S6;
    r0 = call_0022c48c(r0, r1, r2, r3);
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    r2 = 0x10003fbu;  // (from the original)
    r1 = r4 + 0x2000u;  // (from the original)
    r0 = 1u;
    *gptr<u32>(r1 + 0x2a4u) = u32(r2);  // (from the original)
    *gptr<u8>(r1 + 0x2b2u) = u8(r0);  // (from the original)
    r1 = r2 & ~r0;
    *gptr<u32>(r5 + 0xd0u) = u32(r1);  // (from the original)
    *gptr<u8>(r5 + 0xdbu) = u8(r0);  // (from the original)
    *gptr<u8>(r5 + 0xdcu) = u8(r0);  // (from the original)
    *gptr<u8>(r4 + 0x2447u) = u8(r7);  // (from the original)
    r13 = r13 + 0x40u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    return r0;
}

}  // namespace d_0031f2dc
GUEST_EXPORT(0x0031f2dc, d_0031f2dc::f_0031f2dc);

// f_0031f480: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0031f480 {

inline constexpr guest::Function<0x00125aec, u32(u32, u32, u32, u32)> call_00125aec;  // (from the original)
inline constexpr guest::Function<0x0022c53c, u32(u32, u32, u32, u32)> call_0022c53c;  // (from the original)
inline constexpr guest::Function<0x002d00bc, u32(u32, u32, u32, u32)> call_002d00bc;  // (from the original)
inline constexpr guest::Function<0x00320614, u32(u32, u32, u32, u32)> call_00320614;  // (from the original)

u32 f_0031f480(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 ea = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 8;
    guest::cpu()->r[13] = r13;
    r0 = call_00320614(r0, r1, r2, r3);
    r1 = r0 + 0x213cu;  // (from the original)
    r4 = 0u;
    ea = r1 + 4u;
    *gptr<u32>(ea) = u32(r4);
    ea = r1 + 8u;
    *gptr<u8>(ea) = u8(r4);
    ea = 0x879568u;  // (from the original)
    r2 = *gptr<u32>(ea);
    r3 = *gptr<u32>(ea + 4);
    ea = r0 + 0x2148u;  // (from the original)
    *gptr<u32>(ea) = u32(r2);
    *gptr<u32>(ea + 4) = u32(r3);
    *gptr<u32>(ea + 8) = u32(r4);
    *gptr<u8>(r1 + 0x18u) = u8(r4);  // (from the original)
    *gptr<u32>(r1 + 0x1cu) = u32(r4);  // (from the original)
    *gptr<u32>(r1 + 0x20u) = u32(r4);  // (from the original)
    r1 = 0x8f47b4u;  // (from the original)
    r2 = 0x213cu;  // (from the original)
    r3 = r1 + 0x24u;  // (from the original)
    *gptr<u32>(r0) = u32(r1);
    *gptr<u32>(r2 + r0) = u32(r3);
    r0 = r0 + 0x2160u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00125aec(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 + 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00125aec(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 + 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00125aec(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 + 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002d00bc(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 + 0x130u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0022c53c(r0, r1, r2, r3);
    r0 = r0 - 0x2308u;  // (from the original)
    *gptr<u8>(0x2448u + r0) = u8(r4);  // (from the original)
    r1 = r0 + 4u;
    *gptr<u32>(r1) = u32(0x31f530u);  // (from the original)
    *gptr<u32>(r1 + 4) = u32(0x31f540u);  // (from the original)
    *gptr<u32>(r1 + 8) = u32(0x14u);  // (from the original)
    r13 = r13 + 8;
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_0031f480
GUEST_EXPORT(0x0031f480, d_0031f480::f_0031f480);

// f_0031f55c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0031f55c {

struct __attribute__((packed)) Object_0031f55c_0 {
    u32 word_0;
    u8 unknown_4[0x2304];  // (not used here)
    u32 word_2308;
    u8 unknown_230c[0x8];  // (not used here)
    u32 word_2314;
};
GUEST_OFFSET(Object_0031f55c_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_0031f55c_0, word_2308, 0x2308);  // (from the original)
GUEST_OFFSET(Object_0031f55c_0, word_2314, 0x2314);  // (from the original)

inline constexpr guest::Function<0x001ff9d8, u32(u32, u32, u32, u32)> call_001ff9d8;  // (from the original)
inline constexpr guest::Function<0x002f76ad, u32(u32, u32, u32, u32)> call_002f76ac;  // (from the original)
inline constexpr guest::Function<0x002f7710, u32(u32, u32, u32, u32)> call_002f7710;  // (from the original)
inline constexpr guest::Function<0x00567ef0, u32(u32, u32, u32, u32)> call_00567ef0;  // (from the original)
inline constexpr guest::Function<0x0056988c, u32(u32, u32, u32, u32)> call_0056988c;  // (from the original)
inline constexpr guest::Function<0x005bf744, u32(u32, u32, u32, u32)> call_005bf744;  // (from the original)

u32 f_0031f55c(gptr<Object_0031f55c_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r1 = 0;
    u32 r2 = 0;
    u32 r3 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    r1 = 0x8f47b4u;  // (from the original)
    r3 = 0x213cu;  // (from the original)
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r2 = r1 + 0x24u;  // (from the original)
    arg0->word_0 = u32(r1);
    *gptr<u32>(r3 + r0) = u32(r2);
    r4 = 0x8ee248u;  // (from the original)
    r5 = r4 + 0x10u;  // (from the original)
    arg0->word_2308 = u32(r4);
    arg0->word_2314 = u32(r5);
    r0 = r0 + 0x241cu;  // (from the original)
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
    r0 = r0 - 0x2cu;  // (from the original)
    r0 = call_0056988c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0x150u;  // (from the original)
    r0 = call_001ff9d8(r0, r1, r2, r3);
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
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0x2160u;  // (from the original)
    *gptr<u32>(r0) = u32(0x8f4828u);  // (from the original)
    r1 = 0x8f08acu;  // (from the original)
    r0 = r0 + 0x201cu;  // (from the original)
    *gptr<u32>(r0) = u32(r1);
    r0 = call_002f7710(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    *gptr<u32>(r0 - 0x134u) = u32(r5);  // (from the original)
    *gptr<u32>(r0 - 0x140u) = u32(r4);  // (from the original)
    r0 = r0 - 0x2cu;  // (from the original)
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
    r0 = r0 - 0x2cu;  // (from the original)
    r0 = call_0056988c(r0, r1, r2, r3);
    r1 = 0x2e3854u;  // (from the original)
    r4 = r0 - 0x1efcu;  // (from the original)
    r3 = 0xau;  // (from the original)
    r2 = 0x2b4u;  // (from the original)
    r0 = r0 - 0x1b28u;  // (from the original)
    r0 = call_002f76ac(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r4 + 0x3a8u;  // (from the original)
    r0 = call_0056988c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0x150u;  // (from the original)
    r0 = call_005bf744(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0x248u;  // (from the original)
    r0 = call_00567ef0(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r0 = r0 - 0x10u;  // (from the original)
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_0031f55c
GUEST_EXPORT(0x0031f55c, d_0031f55c::f_0031f55c);

// f_0031f69c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0031f69c {

inline constexpr guest::Function<0x002e333c, u32(u32, u32, u32, u32)> call_002e333c;  // (from the original)
inline constexpr guest::Function<0x00723fa0, u32(u32, u32, u32, u32)> call_00723fa0;  // (from the original)

u32 f_0031f69c(u32 r0, u32 r1, u32 r2) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r5 = r2;
    r4 = r0;
    r6 = r1;
    r0 = call_00723fa0(r0, r1, r2, guest::cpu()->r[3]);
    r2 = guest::cpu()->r[2];
    r1 = r5;
    r0 = r4 + (r0 * 0xadu << 2) + 0x3d4u;  // (from the original)
    r0 = call_002e333c(r0, r1, r2, guest::cpu()->r[3]);
    r2 = guest::cpu()->r[2];
    r1 = r6;
    r0 = r4;
    r0 = call_00723fa0(r0, r1, r2, guest::cpu()->r[3]);
    r1 = 0xadu;  // (from the original)
    r0 = r4 + (r0 * r1 << 2);
    *gptr<u8>(r0 + 0x4adu) = u8(r5);  // (from the original)
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_0031f69c
GUEST_EXPORT(0x0031f69c, d_0031f69c::f_0031f69c);

// f_0031f7f0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0031f7f0 {

inline constexpr guest::Function<0x001323bc, u32(u32, u32, u32, u32)> call_001323bc;  // (from the original)
inline constexpr guest::Function<0x00568c10, u32(u32, u32, u32, u32)> call_00568c10;  // (from the original)
inline constexpr guest::Function<0x00569e6c, u32(u32, u32, u32, u32)> call_00569e6c;  // (from the original)

u32 f_0031f7f0(u32 r0, u32 r1, u32 r2) {
    u32 r4 = guest::cpu()->r[4];
    guest::cpu()->r[13] -= 8u;
    r4 = r0;
    r0 = r0 + 0x258u;  // (from the original)
    r0 = call_00568c10(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r0 = call_001323bc(r0, r1, r2, guest::cpu()->r[3]);
    r1 = r4 + 0x258u;  // (from the original)
    guest::cpu()->r[13] += 8u;
    r2 = 1u;
    return call_00569e6c(r0, r1, r2, guest::cpu()->r[3]);
}

}  // namespace d_0031f7f0
GUEST_EXPORT(0x0031f7f0, d_0031f7f0::f_0031f7f0);

// f_0031fa14: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0031fa14 {

inline constexpr guest::Function<0x0081a168, u32(u32, u32, u32, u32)> call_0081a168;  // (from the original)

u32 f_0031fa14(u32 r0) {
    u32 r1 = 0;
    u32 r2 = 0;
    guest::cpu()->r[13] -= 8u;
    r0 = r0 + 0x213cu;  // (from the original)
    r1 = *gptr<u32>(0x879558u);  // (from the original)
    r2 = *gptr<u32>(0x879558u + 4);  // (from the original)
    r0 = call_0081a168(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_0031fa14
GUEST_EXPORT(0x0031fa14, d_0031fa14::f_0031fa14);

// f_0031fa34: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0031fa34 {

inline constexpr guest::Function<0x00320450, u32(u32, u32, u32, u32)> call_00320450;  // (from the original)

u32 f_0031fa34() {
    return call_00320450(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_0031fa34
GUEST_EXPORT(0x0031fa34, d_0031fa34::f_0031fa34);

// f_0031faf4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0031faf4 {

inline constexpr guest::Function<0x0081a168, u32(u32, u32, u32, u32)> call_0081a168;  // (from the original)

u32 f_0031faf4(u32 r0) {
    u32 r1 = 0;
    u32 r2 = 0;
    guest::cpu()->r[13] -= 8u;
    r0 = r0 + 0x213cu;  // (from the original)
    r1 = *gptr<u32>(0x879560u);  // (from the original)
    r2 = *gptr<u32>(0x879560u + 4);  // (from the original)
    r0 = call_0081a168(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_0031faf4
GUEST_EXPORT(0x0031faf4, d_0031faf4::f_0031faf4);

// f_0031fb14: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0031fb14 {

inline constexpr guest::Function<0x00125aec, u32(u32, u32, u32, u32)> call_00125aec;  // (from the original)
inline constexpr guest::Function<0x00320614, u32(u32, u32, u32, u32)> call_00320614;  // (from the original)

u32 f_0031fb14(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 ea = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 8;
    guest::cpu()->r[13] = r13;
    r0 = call_00320614(r0, r1, r2, r3);
    r1 = r0 + 0x213cu;  // (from the original)
    r4 = 0u;
    ea = r1 + 4u;
    *gptr<u32>(ea) = u32(r4);
    ea = r1 + 8u;
    *gptr<u8>(ea) = u8(r4);
    ea = 0x879570u;  // (from the original)
    r2 = *gptr<u32>(ea);
    r3 = *gptr<u32>(ea + 4);
    ea = r0 + 0x2148u;  // (from the original)
    *gptr<u32>(ea) = u32(r2);
    *gptr<u32>(ea + 4) = u32(r3);
    *gptr<u32>(ea + 8) = u32(r4);
    *gptr<u8>(r1 + 0x18u) = u8(r4);  // (from the original)
    *gptr<u32>(r1 + 0x1cu) = u32(r4);  // (from the original)
    *gptr<u32>(r1 + 0x20u) = u32(r4);  // (from the original)
    r1 = 0x8f47ecu;  // (from the original)
    r2 = 0x213cu;  // (from the original)
    r3 = r1 + 0x28u;  // (from the original)
    *gptr<u32>(r0) = u32(r1);
    *gptr<u32>(r2 + r0) = u32(r3);
    r0 = r0 + 0x2160u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00125aec(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 + 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00125aec(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 + 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00125aec(r0, r1, r2, r3);
    r0 = r0 - 0x21b0u;  // (from the original)
    r1 = 0x31fbb4u;  // (from the original)
    ea = r0 + 4u;
    *gptr<u32>(ea) = u32(0x31fbacu);  // (from the original)
    ea = r0 + 8u;
    *gptr<u32>(ea) = u32(r1);
    *gptr<u32>(ea + 4) = u32(r4);
    r13 = r13 + 8;
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_0031fb14
GUEST_EXPORT(0x0031fb14, d_0031fb14::f_0031fb14);

// f_0031fbcc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0031fbcc {

struct __attribute__((packed)) Object_0031fbcc_0 {
    u32 word_0;
};
GUEST_OFFSET(Object_0031fbcc_0, word_0, 0x0);  // (from the original)

inline constexpr guest::Function<0x002f76ad, u32(u32, u32, u32, u32)> call_002f76ac;  // (from the original)
inline constexpr guest::Function<0x002f7710, u32(u32, u32, u32, u32)> call_002f7710;  // (from the original)
inline constexpr guest::Function<0x00567ef0, u32(u32, u32, u32, u32)> call_00567ef0;  // (from the original)
inline constexpr guest::Function<0x0056988c, u32(u32, u32, u32, u32)> call_0056988c;  // (from the original)
inline constexpr guest::Function<0x005bf744, u32(u32, u32, u32, u32)> call_005bf744;  // (from the original)

u32 f_0031fbcc(gptr<Object_0031fbcc_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r1 = 0;
    u32 r2 = 0;
    u32 r3 = 0;
    u32 r4 = guest::cpu()->r[4];
    r1 = 0x8f47ecu;  // (from the original)
    r3 = 0x213cu;  // (from the original)
    guest::cpu()->r[13] -= 8u;
    r2 = r1 + 0x28u;  // (from the original)
    arg0->word_0 = u32(r1);
    *gptr<u32>(r3 + r0) = u32(r2);
    r0 = r0 + 0x21b0u;  // (from the original)
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
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0x2160u;  // (from the original)
    *gptr<u32>(r0) = u32(0x8f4828u);  // (from the original)
    r1 = 0x8f08acu;  // (from the original)
    r0 = r0 + 0x201cu;  // (from the original)
    *gptr<u32>(r0) = u32(r1);
    r0 = call_002f7710(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    r2 = 0x8ee248u;  // (from the original)
    r1 = r2 + 0x10u;  // (from the original)
    *gptr<u32>(r0 - 0x134u) = u32(r1);  // (from the original)
    *gptr<u32>(r0 - 0x140u) = u32(r2);  // (from the original)
    r0 = r0 - 0x2cu;  // (from the original)
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
    r0 = r0 - 0x2cu;  // (from the original)
    r0 = call_0056988c(r0, r1, r2, r3);
    r1 = 0x2e3854u;  // (from the original)
    r4 = r0 - 0x1efcu;  // (from the original)
    r3 = 0xau;  // (from the original)
    r2 = 0x2b4u;  // (from the original)
    r0 = r0 - 0x1b28u;  // (from the original)
    r0 = call_002f76ac(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r4 + 0x3a8u;  // (from the original)
    r0 = call_0056988c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0x150u;  // (from the original)
    r0 = call_005bf744(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0x248u;  // (from the original)
    r0 = call_00567ef0(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r0 = r0 - 0x10u;  // (from the original)
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_0031fbcc
GUEST_EXPORT(0x0031fbcc, d_0031fbcc::f_0031fbcc);

// f_0031fcc4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0031fcc4 {

struct __attribute__((packed)) Object_0031fcc4_0 {
    u8 unknown_0[0x278];  // (not used here)
    u32 word_278;
    u8 unknown_27c[0x154];  // (not used here)
    u32 word_3d0;
};
GUEST_OFFSET(Object_0031fcc4_0, word_278, 0x278);  // (from the original)
GUEST_OFFSET(Object_0031fcc4_0, word_3d0, 0x3d0);  // (from the original)

inline constexpr guest::Function<0x004b6d74, u32(u32, u32, u32, u32)> call_004b6d74;  // (from the original)
inline constexpr guest::Function<0x004b6dc8, u32(u32, u32, u32, u32)> call_004b6dc8;  // (from the original)

u32 f_0031fcc4(gptr<Object_0031fcc4_0> arg0, u32 r1) {
    u32 r0 = arg0.addr();
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r4 = r0;
    r0 = arg0->word_3d0;
    r5 = r1;
    if (r0 != 0) {
        r1 = arg0->word_278;
        r0 = call_004b6dc8(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
    }
    r0 = r5;
    *gptr<u32>(r4 + 0x3d0u) = u32(r5);  // (from the original)
    if (r5 != 0) {
        r1 = *gptr<u32>(r4 + 0x278u);  // (from the original)
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        return call_004b6d74(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    }
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_0031fcc4
GUEST_EXPORT(0x0031fcc4, d_0031fcc4::f_0031fcc4);

// f_0031fcfc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0031fcfc {

struct __attribute__((packed)) Object_0031fcfc_0 {
    u8 unknown_0[0xc];  // (not used here)
    u32 word_c;
};
GUEST_OFFSET(Object_0031fcfc_0, word_c, 0xc);  // (from the original)


u32 f_0031fcfc(gptr<Object_0031fcfc_0> arg0, u32 r1, u32 r2) {
    u32 r0 = arg0.addr();
    u32 r3 = 0;
    u32 r12 = 0;
    guest::cpu()->r[13] -= 4u;
    r3 = arg0->word_c;
    if (u32(r3 >= r1) && !u32(r3 == r1)) {
        goto L_31fd34;
    }
    r12 = r1;
    if (r1 >= r3 + 0xau) {  // (from the original)
        goto L_31fd34;
    }
    r1 = (r12 - r3) * 0xadu;  // (from the original)
    r0 = r0 + (r1 << 2) + 0x3d4u;  // (from the original)
    *gptr<u8>(r0 + 0x12du) = u8(r2);  // (from the original)
    guest::cpu()->r[13] += 4u;
    guest::cpu()->r[1] = r1;
    return r0;
L_31fd34:;
    r0 = r0 + 0x3d4u;  // (from the original)
    *gptr<u8>(r0 + 0x12du) = u8(r2);  // (from the original)
    guest::cpu()->r[13] += 4u;
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_0031fcfc
GUEST_EXPORT(0x0031fcfc, d_0031fcfc::f_0031fcfc);

// f_0031fd44: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0031fd44 {

struct __attribute__((packed)) Object_0031fd44_0 {
    u8 unknown_0[0xc];  // (not used here)
    u32 word_c;
};
GUEST_OFFSET(Object_0031fd44_0, word_c, 0xc);  // (from the original)


u32 f_0031fd44(gptr<Object_0031fd44_0> arg0, u32 r1) {
    u32 ea = 0;
    u32 r0 = arg0.addr();
    u32 r2 = 0;
    r2 = 0xadu;  // (from the original)
    ea = r0 + ((r1 - arg0->word_c) * r2 << 2) + 0x3d4u;  // (from the original)
    r0 = ea;
    r1 = *gptr<u32>(*gptr<u32>(ea) + 0x60u);  // (from the original)
    return guest::call_address<u32>(r1, r0, r1, r2, guest::cpu()->r[3]);
}

}  // namespace d_0031fd44
GUEST_EXPORT(0x0031fd44, d_0031fd44::f_0031fd44);

// f_0031fdb8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0031fdb8 {

inline constexpr guest::Function<0x002f76ad, u32(u32, u32, u32, u32)> call_002f76ac;  // (from the original)
inline constexpr guest::Function<0x002f825c, u32(u32, u32, u32, u32)> call_002f825c;  // (from the original)
inline constexpr guest::Function<0x002fcaf4, u32(u32, u32, u32, u32)> call_002fcaf4;  // (from the original)
inline constexpr guest::Function<0x00301d0d, u32(u32, u32, u32, u32)> call_00301d0c;  // (from the original)
inline constexpr guest::Function<0x003083bc, u32(u32, u32, u32, u32)> call_003083bc;  // (from the original)
inline constexpr guest::Function<0x005d4a78, u32(u32, u32, u32, u32)> call_005d4a78;  // (from the original)
inline constexpr guest::Function<0x005e34c4, u32(u32, u32, u32, u32)> call_005e34c4;  // (from the original)
inline constexpr guest::Function<0x005e4988, u32(u32, u32, u32, u32)> call_005e4988;  // (from the original)
inline constexpr guest::Function<0x005e4994, u32(u32, u32, u32, u32)> call_005e4994;  // (from the original)
inline constexpr guest::Function<0x005e49c0, u32(u32, u32, u32, u32)> call_005e49c0;  // (from the original)
inline constexpr guest::Function<0x005e8498, u32(u32, u32, u32, u32)> call_005e8498;  // (from the original)
inline constexpr guest::Function<0x005f4bfc, u32(u32, u32, u32, u32)> call_005f4bfc;  // (from the original)
inline constexpr guest::Function<0x00758204, u32(u32, u32, u32, u32)> call_00758204;  // (from the original)
inline constexpr guest::Function<0x00758dd4, u32(u32, u32, u32, u32)> call_00758dd4;  // (from the original)

u32 f_0031fdb8(u32 r0, u32 r1) {
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
    u32 r11 = guest::cpu()->r[11];
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 0xf8u;  // (from the original)
    r8 = r0;
    r5 = r1;
    r6 = 0u;
    r1 = 0x5e35dcu;  // (from the original)
    r3 = 3u;
    r2 = 0x20u;  // (from the original)
    r0 = r13 + 0x68u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00301d0c(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    r0 = r13 + 0xcu;  // (from the original)
    r2 = 0x21u;  // (from the original)
    r1 = r13 + 0x24u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_003083bc(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r7 = 0x909f18u;  // (from the original)
    *gptr<u32>(r0) = u32(r7);
    r0 = r0 + 0xcu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_005f4bfc(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r4 = r0 - 0xcu;  // (from the original)
    r1 = 0x42u;  // (from the original)
    r0 = r0 + 0xcu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002f825c(r0, r1, r2, r3);
    r1 = 0x8906ecu;  // (from the original)
    r0 = r4 + 0x18u;  // (from the original)
    *gptr<u16>(r4 + 0x18u) = u16(u32(*gptr<u16>(r1)));  // (from the original)
    r2 = 0x10u;  // (from the original)
    do {
L_31fe20:;
        ea = r1;
        r3 = u32(*gptr<u16>(ea));
        res = r2 - 1u;
        r2 = res;
        ea = r0 + 2u;
        *gptr<u16>(ea) = u16(r3);
        ea = r1;
        r3 = u32(*gptr<u16>(ea));
        ea = r0 + 4u;
        *gptr<u16>(ea) = u16(r3);
        r0 = ea;
        guest::preempt();
    } while (res != 0);
    r1 = r13 + 0xcu;  // (from the original)
    r0 = r5;
    guest::cpu()->r[13] = r13;
    r0 = call_00758204(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = r13 + 0xcu;  // (from the original)
    r0 = r8;
    guest::cpu()->r[13] = r13;
    r0 = call_005e8498(r0, r1, r2, r3);
    r9 = 0u;
    r4 = r13 + 4u;
    r10 = 7u;
    *gptr<u32>(r13) = u32(r9);
    r1 = 0x87964cu;  // (from the original)
    r3 = r9;
    r2 = 0x36u;  // (from the original)
    r0 = r13 + 0x68u;  // (from the original)
    *gptr<u32>(r4) = u32(r9);
    *gptr<u32>(r4 + 4) = u32(r10);
    guest::cpu()->r[13] = r13;
    r0 = call_005e34c4(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r4 = r6 + 1u;
    r0 = r5 + 0x274u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002fcaf4(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r11 = 1u;
    r6 = r13 + 0x68u;  // (from the original)
    if (r0 == 0) {
        goto L_31fef8;
    }
    if ((u32(*gptr<u8>(r5 + 0x272u)) & 0x80u) == 0) {  // (from the original)
        r0 = r5;
        guest::cpu()->r[13] = r13;
        r0 = call_00758dd4(r0, r1, r2, r3);
        if (r0 != 1u) {
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
    *gptr<u32>(r13 + 8u) = u32(r10);
    r1 = 0x87964cu;  // (from the original)
    r0 = r6 + (r4 << 5);
    r3 = 0u;
    r2 = 0x37u;  // (from the original)
    *gptr<u32>(r13) = u32(r9);
    *gptr<u32>(r13 + 4) = u32(r11);
    guest::cpu()->r[13] = r13;
    r0 = call_005e34c4(r0, r1, r2, r3);
    r4 = r4 + 1u;
L_31fef8:;
    ea = r13;
    *gptr<u32>(ea) = u32(r9);
    ea = r13 + 4u;
    *gptr<u32>(ea) = u32(2u);
    *gptr<u32>(ea + 4) = u32(r11);
    r0 = r6 + (r4 << 5);
    r1 = 0x87964cu;  // (from the original)
    r3 = 0u;
    r2 = 0x22u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_005e34c4(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    r5 = r4 + 1u;
    r2 = r4;
    r1 = r5;
    r0 = r8;
    guest::cpu()->r[13] = r13;
    r0 = call_005e49c0(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    res = r5;
    r4 = 0u;
    if (u32(res == 0) || res >> 0x1f != (r5 & (r5 ^ res)) >> 0x1f) {  // (from the original)
        goto L_31ff58;
    }
    do {
L_31ff3c:;
        r2 = r6 + (r4 << 5);
        r1 = r4;
        r0 = r8;
        guest::cpu()->r[13] = r13;
        r0 = call_005e4994(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r4 = r4 + 1u;
        res = r5 - r4;
        guest::preempt();
    } while (!u32(res == 0) && res >> 0x1f == ((r5 ^ r4) & (r5 ^ res)) >> 0x1f);  // (from the original)
L_31ff58:;
    r0 = r8;
    guest::cpu()->r[13] = r13;
    r0 = call_005e4988(r0, r1, r2, r3);
    r3 = 0u;
    r2 = r3;
    r1 = r3;
    r0 = r8;
    guest::cpu()->r[13] = r13;
    r0 = call_005d4a78(r0, r1, r2, r3);
    *gptr<u32>(r13 + 0xcu) = u32(r7);  // (from the original)
    r1 = 0x5e3618u;  // (from the original)
    r3 = 3u;
    r2 = 0x20u;  // (from the original)
    r0 = r13 + 0x68u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002f76ac(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r13 = r13 + 0xf8u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_0031fdb8
GUEST_EXPORT(0x0031fdb8, d_0031fdb8::f_0031fdb8);

// f_0031ffbc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0031ffbc {

struct __attribute__((packed)) Object_0031ffbc_0 {
    u8 unknown_0[0x201b];  // (not used here)
    u8 byte_201b;
};
GUEST_OFFSET(Object_0031ffbc_0, byte_201b, 0x201b);  // (from the original)


u32 f_0031ffbc(gptr<Object_0031ffbc_0> arg0, u32 r1) {
    u32 r0 = arg0.addr();
    r0 = r0 + 0x2000u;  // (from the original)
    arg0->byte_201b = u8(r1);
    return r0;
}

}  // namespace d_0031ffbc
GUEST_EXPORT(0x0031ffbc, d_0031ffbc::f_0031ffbc);
