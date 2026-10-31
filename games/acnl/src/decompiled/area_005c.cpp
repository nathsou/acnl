// Functions decompiled by tools/decomp (docs/decomp.md), each proved equal to the recompiled original (prove-cpp). The
// names are generated (d_<address>::f_<address>, Object_<address>_<argument>, word_<offset>) and still to be chosen.
#include "guest/guest.hpp"

#include <bit>

using guest::gptr;

// f_005c00f0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005c00f0 {


void f_005c00f0(u32 r0, u32 r1, u32 r2) {
    if (r1 < 4u) {
        *gptr<u8>(r0 + r1) = u8(r2 & 3u);
    }
    return;
}

}  // namespace d_005c00f0
GUEST_EXPORT(0x005c00f0, d_005c00f0::f_005c00f0);

// f_005c021c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005c021c {

inline constexpr guest::Function<0x001b4a8c, u32(u32, u32, u32, u32)> call_001b4a8c;  // (from the original)
inline constexpr guest::Function<0x002bf9cc, u32(u32, u32, u32, u32)> call_002bf9cc;  // (from the original)
inline constexpr guest::Function<0x002fc934, u32(u32, u32, u32, u32)> call_002fc934;  // (from the original)
inline constexpr guest::Function<0x0030bb10, u32(u32, u32, u32, u32)> call_0030bb10;  // (from the original)
inline constexpr guest::Function<0x00607bdc, u32(u32, u32, u32, u32)> call_00607bdc;  // (from the original)
inline constexpr guest::Function<0x00657748, u32(u32, u32, u32, u32)> call_00657748;  // (from the original)
inline constexpr guest::Function<0x0071a844, u32(u32, u32, u32, u32)> call_0071a844;  // (from the original)
inline constexpr guest::Function<0x007241b0, u32(u32, u32, u32, u32)> call_007241b0;  // (from the original)

u32 f_005c021c(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 0x18u;  // (from the original)
    r6 = r0;
    guest::cpu()->r[13] = r13;
    r0 = call_00607bdc(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        goto L_5c0240;
    }
L_5c0234:;
    r0 = 0u;
    r13 = r13 + 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
L_5c0240:;
    r4 = *gptr<u32>(0xaaf14cu);  // (from the original)
    if (r4 == 0) {
        guest::preempt();
        goto L_5c0234;
    }
    r0 = r4 + 0xau;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0071a844(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = r0;
    r0 = r13 + 4u;
    guest::cpu()->r[13] = r13;
    r0 = call_002fc934(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r4 = r4 + 0x6bd0u;  // (from the original)
    r0 = r13 + 4u;
    guest::cpu()->r[13] = r13;
    r0 = call_0030bb10(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        goto L_5c0310;
    }
    r0 = r4;
    guest::cpu()->r[13] = r13;
    r0 = call_007241b0(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r5 = r0;
    if (r0 + 1u == 0) {
        goto L_5c0310;
    }
    r0 = r13 + 4u;
    guest::cpu()->r[13] = r13;
    r0 = call_00657748(r0, r1, r2, r3);
    *gptr<u32>(r13) = u32(r0 ^ 1u);
    r3 = 0u;
    r2 = r13 + 4u;
    r1 = r5;
    r0 = r4;
    guest::cpu()->r[13] = r13;
    r0 = call_002bf9cc(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r4 = r6;
    if (r5 >= 0x10u) {  // (from the original)
        goto L_5c02f4;
    }
    r0 = *gptr<u32>(0xaaf14cu);  // (from the original)
    if (r0 == 0) {
        goto L_5c02f4;
    }
    r1 = r0 + 0x55a6u;  // (from the original)
    r0 = r6;
    guest::cpu()->r[13] = r13;
    r0 = call_001b4a8c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r0 = 0u;
    *gptr<u32>(r4 + 0x30u) = u32(r5);  // (from the original)
    *gptr<u8>(r4 + 0x34u) = u8(r0);  // (from the original)
    *gptr<u8>(r4 + 0x35u) = u8(r0);  // (from the original)
L_5c02f4:;
    *gptr<u8>(r6 + 0x35u) = u8(1u);  // (from the original)
    r0 = 1u;
    r13 = r13 + 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
L_5c0310:;
    r0 = 0u;
    r13 = r13 + 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_005c021c
GUEST_EXPORT(0x005c021c, d_005c021c::f_005c021c);

// f_005c032c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005c032c {

inline constexpr guest::Function<0x005c0334, u32(u32, u32, u32, u32)> call_005c0334;  // (from the original)

u32 f_005c032c(u32 r0) {
    u32 r2 = 0;
    r2 = 0u;
    return call_005c0334(r0, guest::cpu()->r[1], r2, guest::cpu()->r[3]);
}

}  // namespace d_005c032c
GUEST_EXPORT(0x005c032c, d_005c032c::f_005c032c);

// f_005c0648: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005c0648 {

inline constexpr guest::Function<0x001b4a8c, u32(u32, u32, u32, u32)> call_001b4a8c;  // (from the original)

u32 f_005c0648(u32 r0, u32 r1) {
    u32 ea = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r13 = guest::cpu()->r[13];
    u32 r14 = guest::cpu()->r[14];
    if (r1 >= 0x10u) {  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[4] = r4;
        guest::cpu()->r[5] = r5;
        guest::cpu()->r[6] = r6;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    ea = r13 - 0x10;  // (from the original)
    *gptr<u32>(ea) = u32(r4);
    *gptr<u32>(ea + 4) = u32(r5);
    *gptr<u32>(ea + 8) = u32(r6);
    *gptr<u32>(ea + 0xc) = u32(r14);  // (from the original)
    r13 = r13 - 0x10;  // (from the original)
    r4 = r0;
    r5 = r1;
    r0 = *gptr<u32>(0xaaf14cu);  // (from the original)
    if (r0 != 0) {
        r1 = r0 + 0x55a6u;  // (from the original)
        r0 = r4;
        guest::cpu()->r[13] = r13;
        r0 = call_001b4a8c(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        r0 = 0u;
        *gptr<u32>(r4 + 0x30u) = u32(r5);  // (from the original)
        *gptr<u8>(r4 + 0x34u) = u8(r0);  // (from the original)
        *gptr<u8>(r4 + 0x35u) = u8(r0);  // (from the original)
    }
    ea = r13;
    r13 = r13 + 0x10;  // (from the original)
    r4 = *gptr<u32>(ea);
    r5 = *gptr<u32>(ea + 4);
    r6 = *gptr<u32>(ea + 8);
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[4] = r4;
    guest::cpu()->r[5] = r5;
    guest::cpu()->r[6] = r6;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_005c0648
GUEST_EXPORT(0x005c0648, d_005c0648::f_005c0648);

// f_005c0694: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005c0694 {

inline constexpr guest::Function<0x005c0334, u32(u32, u32, u32, u32)> call_005c0334;  // (from the original)

u32 f_005c0694() {
    u32 r2 = 0;
    r2 = 1u;
    return call_005c0334(guest::cpu()->r[0], guest::cpu()->r[1], r2, guest::cpu()->r[3]);
}

}  // namespace d_005c0694
GUEST_EXPORT(0x005c0694, d_005c0694::f_005c0694);

// f_005c069c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005c069c {


u32 f_005c069c(u32 r0_unused, u32 r1) {
    u32 r0 = 0;
    r0 = *gptr<u32>(0xaaf14cu);  // (from the original)
    if (r0 == 0) {
        r0 = 1u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r1 = 1u;
    r0 = r1 & ~u32(*gptr<u8>(r0 + 0x55bau));  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_005c069c
GUEST_EXPORT(0x005c069c, d_005c069c::f_005c069c);

// f_005c0874: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005c0874 {


u32 f_005c0874() {
    u32 r0 = 0;
    u32 r1 = 0;
    r0 = 0xaadad4u;  // (from the original)
    *gptr<u8>(r0) = u8(u32(*gptr<u8>(r0)) & ~0x40u);  // (from the original)
    r0 = r0 + 1u;
    r1 = u32(*gptr<u8>(r0)) & ~0x20u;  // (from the original)
    *gptr<u8>(r0) = u8(r1);
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_005c0874
GUEST_EXPORT(0x005c0874, d_005c0874::f_005c0874);

// f_005c0898: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005c0898 {

inline constexpr guest::Function<0x002fc934, u32(u32, u32, u32, u32)> call_002fc934;  // (from the original)
inline constexpr guest::Function<0x005c33d0, u32(u32, u32, u32, u32)> call_005c33d0;  // (from the original)
inline constexpr guest::Function<0x00765e04, u32(u32, u32, u32, u32)> call_00765e04;  // (from the original)

u32 f_005c0898(u32 r0) {
    u32 r1 = 0;
    u32 r4 = guest::cpu()->r[4];
    guest::cpu()->r[13] -= 8u;
    r4 = r0;
    r1 = 0u;
    r0 = 4u;
    r0 = call_005c33d0(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 != 0) {
        r0 = call_00765e04(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1 = r0;
        r0 = r4;
        guest::cpu()->r[13] += 8u;
        return call_002fc934(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    }
    r0 = r4;
    r1 = 0x95bfdcu;  // (from the original)
    guest::cpu()->r[13] += 8u;
    return call_002fc934(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_005c0898
GUEST_EXPORT(0x005c0898, d_005c0898::f_005c0898);

// f_005c0a68: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005c0a68 {

inline constexpr guest::Function<0x005c0874, u32(u32, u32, u32, u32)> call_005c0874;  // (from the original)
inline constexpr guest::Function<0x005c33d0, u32(u32, u32, u32, u32)> call_005c33d0;  // (from the original)
inline constexpr guest::Function<0x00665130, u32(u32, u32, u32, u32)> call_00665130;  // (from the original)
inline constexpr guest::Function<0x006736dc, u32(u32, u32, u32, u32)> call_006736dc;  // (from the original)
inline constexpr guest::Function<0x00763818, u32(u32, u32, u32, u32)> call_00763818;  // (from the original)

u32 f_005c0a68() {
    u32 res = 0;
    u32 r0 = 0;
    u32 r1 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 zf = 0;
    r0 = 4u;
    r1 = 1u;
    guest::cpu()->r[13] -= 8u;
    r0 = call_005c33d0(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r4 = r0;
    if (r0 == 0) {
        goto L_5c0ad4;
    }
    res = u32(*gptr<u8>(r4 + 0x171u)) << 0x1a >> 0x1f;  // (from the original)
    r0 = res;
    if (res == 0) {
        goto L_5c0ad4;
    }
    r0 = u32(*gptr<u8>(r4 + 0x1a9u));  // (from the original)
    zf = r0 == 0x17u;  // (from the original)
    if (!zf) {
        zf = r0 == 0x18u;  // (from the original)
    }
    r0 = r4;
    if (zf) {
        goto L_5c0ae4;
    }
    r0 = call_00763818(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 != 0) {
        res = u32(*gptr<u8>(r0 + 8u)) << 0x19;  // (from the original)
        r0 = res;
        if (res >> 0x1f) {  // (from the original)
            goto L_5c0ad4;
        }
    }
    r1 = 0u;
    r0 = r4;
    r0 = call_006736dc(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 == 0) {
        goto L_5c0b00;
    }
L_5c0ad4:;
    r0 = call_005c0874(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r0 = 1u;
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1;
    return r0;
L_5c0ae4:;
    r0 = call_00665130(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r0 = call_005c0874(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r0 = 1u;
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1;
    return r0;
L_5c0b00:;
    r0 = call_005c0874(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r0 = 0u;
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_005c0a68
GUEST_EXPORT(0x005c0a68, d_005c0a68::f_005c0a68);

// f_005c0b10: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005c0b10 {

inline constexpr guest::Function<0x005c33d0, u32(u32, u32, u32, u32)> call_005c33d0;  // (from the original)
inline constexpr guest::Function<0x00659c08, u32(u32, u32, u32, u32)> call_00659c08;  // (from the original)
inline constexpr guest::Function<0x00763580, u32(u32, u32, u32, u32)> call_00763580;  // (from the original)

u32 f_005c0b10(float S0) {
    u32 r0 = 0;
    u32 r1 = 0;
    u32 r4 = guest::cpu()->r[4];
    r0 = 4u;
    r1 = 0u;
    guest::cpu()->r[13] -= 8u;
    guest::cpu()->s[0] = S0;
    r0 = call_005c33d0(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    S0 = guest::cpu()->s[0];
    r4 = r0;
    if (r0 == 0) {
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        guest::cpu()->s[0] = S0;
        return r0;
    }
    guest::cpu()->s[0] = S0;
    r0 = call_00763580(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    S0 = guest::cpu()->s[0];
    if (r0 == 0) {
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        guest::cpu()->s[0] = S0;
        return r0;
    }
    r0 = r4;
    guest::cpu()->r[13] += 8u;
    S0 = std::bit_cast<float>(*gptr<u32>(0x5c0b48u));  // (from the original)
    guest::cpu()->s[0] = S0;
    return call_00659c08(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_005c0b10
GUEST_EXPORT(0x005c0b10, d_005c0b10::f_005c0b10);

// f_005c0da0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005c0da0 {

inline constexpr guest::Function<0x005c33d0, u32(u32, u32, u32, u32)> call_005c33d0;  // (from the original)
inline constexpr guest::Function<0x00678278, u32(u32, u32, u32, u32)> call_00678278;  // (from the original)

u32 f_005c0da0(u32 r0, u32 r1_unused, u32 r2, u32 r3, float S0) {
    u32 ea = 0;
    u32 res = 0;
    u32 r1 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r13 = guest::cpu()->r[13];
    r4 = r0;
    r13 = r13 - 0x18u;  // (from the original)
    r0 = 4u;
    r1 = 0u;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    r0 = call_005c33d0(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    S0 = guest::cpu()->s[0];
    if (r0 == 0) {
        r13 = r13 + 0x18u;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        guest::cpu()->s[0] = S0;
        return r0;
    }
    res = u32(*gptr<u8>(r0 + 0x8c5u)) << 0x1a >> 0x1f;  // (from the original)
    r1 = res;
    if (res != 0) {
        r0 = 0u;
        r13 = r13 + 0x18u;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        guest::cpu()->s[0] = S0;
        return r0;
    }
    r1 = 0u;
    ea = r13;
    *gptr<u32>(ea) = u32(r1);
    ea = r13 + 4u;
    *gptr<u32>(ea) = u32(r1);
    *gptr<u32>(ea + 4) = u32(~0u);
    r3 = r1;
    r1 = 0x119u;  // (from the original)
    S0 = std::bit_cast<float>(*gptr<u32>(0x5c0e04u));  // (from the original)
    r2 = r4;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    r0 = call_00678278(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    S0 = guest::cpu()->s[0];
    r13 = r13 + 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    return r0;
}

}  // namespace d_005c0da0
GUEST_EXPORT(0x005c0da0, d_005c0da0::f_005c0da0);

// f_005c0e0c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005c0e0c {

struct __attribute__((packed)) Object_005c0e0c_0 {
    u8 unknown_0[0x572b];  // (not used here)
    u8 byte_572b;
};
GUEST_OFFSET(Object_005c0e0c_0, byte_572b, 0x572b);  // (from the original)

inline constexpr guest::Function<0x002f77e8, u32(u32, u32, u32, u32)> call_002f77e8;  // (from the original)
inline constexpr guest::Function<0x002fcbb0, u32(u32, u32, u32, u32)> call_002fcbb0;  // (from the original)
inline constexpr guest::Function<0x002ff368, u32(u32, u32, u32, u32)> call_002ff368;  // (from the original)
inline constexpr guest::Function<0x002ff4d4, u32(u32, u32, u32, u32)> call_002ff4d4;  // (from the original)
inline constexpr guest::Function<0x005cc160, u32(u32, u32, u32, u32)> call_005cc160;  // (from the original)
inline constexpr guest::Function<0x00768138, u32(u32, u32, u32, u32)> call_00768138;  // (from the original)

u32 f_005c0e0c(gptr<Object_005c0e0c_0> arg0, u32 r1, u32 r2, u32 r3) {
    u32 r0 = arg0.addr();
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r13 = guest::cpu()->r[13];
    u32 zf = 0;
    r4 = r0;
    r13 = r13 - 0x2a8u;  // (from the original)
    r5 = u32(arg0->byte_572b) << 0x1b >> 0x1f;  // (from the original)
    r0 = r13 + 0x18u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002ff368(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = 0x2281u;  // (from the original)
    r0 = r13 + 0x14u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002fcbb0(r0, r1, r2, r3);
    zf = r5 == 0;
    *gptr<u32>(r13 + 4u) = u32(r4 + 0x55a6u);  // (from the original)
    r5 = r13 + 8u;
    *gptr<u32>(r13 + 0x10u) = u32(0u);  // (from the original)
    *gptr<u32>(r13) = u32(1u);
    *gptr<u32>(r5) = u32(r0);
    *gptr<u32>(r5 + 4) = u32(0x1eu);  // (from the original)
    if (zf) {
        r3 = 2u;
    } else {
        r3 = 1u;
    }
    r2 = 1u;
    r1 = 0x5c0f04u;  // (from the original)
    r0 = r13 + 0x18u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_005cc160(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r4 = r0 ^ 1u;
    if (r4 != 0) {
        goto L_5c0eec;
    }
    r1 = 0x30cbu;  // (from the original)
    r0 = r13 + 0x14u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002fcbb0(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    r1 = r0;
    r2 = 0u;
    r0 = r13 + 0x18u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00768138(r0, r1, r2, r3);
    r3 = 0u;
    r2 = 2u;
    r1 = 3u;
    r0 = r13 + 0x18u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002ff4d4(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        goto L_5c0eec;
    }
    r0 = r13 + 0x18u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002f77e8(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r0 = 1u;
    r13 = r13 + 0x2a8u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
L_5c0eec:;
    r0 = r13 + 0x18u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002f77e8(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r0 = 0u;
    r13 = r13 + 0x2a8u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_005c0e0c
GUEST_EXPORT(0x005c0e0c, d_005c0e0c::f_005c0e0c);

// f_005c111c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005c111c {

inline constexpr guest::Function<0x003170f8, u32(u32, u32, u32, u32)> call_003170f8;  // (from the original)
inline constexpr guest::Function<0x005c33d0, u32(u32, u32, u32, u32)> call_005c33d0;  // (from the original)
inline constexpr guest::Function<0x00659d9c, u32(u32, u32, u32, u32)> call_00659d9c;  // (from the original)

u32 f_005c111c(u32 r0, u32 r1, u32 r2, u32 r3, float S0) {
    u32 res = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r9 = guest::cpu()->r[9];
    u32 r13 = guest::cpu()->r[13];
    *gptr<u32>(r13 + 0xffffffe0u) = u32(r3);  // (from the original)
    r13 = r13 - 0x20;  // (from the original)
    r5 = r3;
    r6 = r1;
    r8 = r0;
    r4 = *gptr<u32>(r13 + 0x20u);  // (from the original)
    r7 = r2 ^ 1u;
    r1 = 0u;
    r0 = 0xeu;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    r0 = call_003170f8(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
    r9 = 0u;
    if (r0 == 0) {
        goto L_5c1170;
    }
    r1 = 0u;
    r0 = r4;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    r0 = call_005c33d0(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    S0 = guest::cpu()->s[0];
    if (r0 == 0) {
        goto L_5c1170;
    }
    res = u32(*gptr<u8>(r0 + 0x8c5u)) << 0x1a >> 0x1f;  // (from the original)
    r1 = res;
    if (res == 0) {
        goto L_5c1178;
    }
L_5c1170:;
    r0 = r9;
    r13 = r13 + 0x20;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    return r0;
L_5c1178:;
    S0 = std::bit_cast<float>(*gptr<u32>(0x5c1194u));  // (from the original)
    r3 = r7;
    r2 = r6;
    r1 = r8;
    *gptr<u32>(r13) = u32(r5);
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    r0 = call_00659d9c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    S0 = guest::cpu()->s[0];
    r13 = r13 + 0x20;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    return r0;
}

}  // namespace d_005c111c
GUEST_EXPORT(0x005c111c, d_005c111c::f_005c111c);

// f_005c1198: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005c1198 {

inline constexpr guest::Function<0x003170f8, u32(u32, u32, u32, u32)> call_003170f8;  // (from the original)
inline constexpr guest::Function<0x005c33d0, u32(u32, u32, u32, u32)> call_005c33d0;  // (from the original)
inline constexpr guest::Function<0x00659e34, u32(u32, u32, u32, u32)> call_00659e34;  // (from the original)

u32 f_005c1198(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 res = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 0x20u;  // (from the original)
    r7 = r0;
    r4 = *gptr<u32>(r13 + 0x20u);  // (from the original)
    r5 = r1;
    r8 = r2;
    r6 = r3;
    if (r4 == 0) {
        r1 = 0u;
        r0 = 0xeu;  // (from the original)
        guest::cpu()->r[13] = r13;
        r0 = call_003170f8(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        if (r0 == 0) {
            goto L_5c1214;
        }
    }
    r0 = 4u;
    r1 = 0u;
    guest::cpu()->r[13] = r13;
    r0 = call_005c33d0(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    if (r0 == 0) {
        goto L_5c1214;
    }
    res = u32(*gptr<u8>(r0 + 0x8c5u)) << 0x1a >> 0x1f;  // (from the original)
    r1 = res;
    if (res != 0) {
        r0 = 0u;
        goto L_5c1214;
    }
    r2 = r5 ^ 1u;
    r3 = r8;
    r1 = r7;
    *gptr<u32>(r13 + 4u) = u32(r4);
    *gptr<u32>(r13) = u32(r6);
    guest::cpu()->r[13] = r13;
    r0 = call_00659e34(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
L_5c1214:;
    r13 = r13 + 0x20u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_005c1198
GUEST_EXPORT(0x005c1198, d_005c1198::f_005c1198);

// f_005c121c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005c121c {

inline constexpr guest::Function<0x005c33d0, u32(u32, u32, u32, u32)> call_005c33d0;  // (from the original)
inline constexpr guest::Function<0x0064d0b8, u32(u32, u32, u32, u32)> call_0064d0b8;  // (from the original)

u32 f_005c121c(u32 r0_unused, u32 r1_unused, u32 r2, u32 r3) {
    u32 res = 0;
    u32 r0 = 0;
    u32 r1 = 0;
    r0 = 4u;
    r1 = 0u;
    guest::cpu()->r[13] -= 8u;
    r0 = call_005c33d0(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    if (r0 == 0) {
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    res = u32(*gptr<u8>(r0 + 0x8c5u)) << 0x1a >> 0x1f;  // (from the original)
    r1 = res;
    if (res != 0) {
        r0 = 0u;
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r3 = 0u;
    guest::cpu()->r[13] += 8u;
    r2 = r3;
    r1 = 0xcdu;  // (from the original)
    return call_0064d0b8(r0, r1, r2, r3);
}

}  // namespace d_005c121c
GUEST_EXPORT(0x005c121c, d_005c121c::f_005c121c);

// f_005c12a8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005c12a8 {

struct __attribute__((packed)) Object_005c12a8_0 {
    u8 byte_0;
    u8 unknown_1[0x3];  // (not used here)
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
};
GUEST_OFFSET(Object_005c12a8_0, byte_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_005c12a8_0, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_005c12a8_0, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Object_005c12a8_0, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Object_005c12a8_0, word_10, 0x10);  // (from the original)


void f_005c12a8(gptr<Object_005c12a8_0> arg0) {
    u32 r1 = 0;
    float S0 = 0;
    r1 = 0u;
    arg0->byte_0 = u8(0xbu);  // (from the original)
    S0 = std::bit_cast<float>(*gptr<u32>(0x5c12ccu));  // (from the original)
    arg0->word_8 = u32(r1);
    arg0->word_4 = u32(r1);
    arg0->word_10 = u32(std::bit_cast<u32>(S0));
    arg0->word_c = u32(std::bit_cast<u32>(S0));
    guest::cpu()->r[1] = r1;
    guest::cpu()->s[0] = S0;
    return;
}

}  // namespace d_005c12a8
GUEST_EXPORT(0x005c12a8, d_005c12a8::f_005c12a8);

// f_005c12d0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005c12d0 {


u32 f_005c12d0(u32 r0, u32 r1) {
    u32 res = 0;
    u32 r3 = 0;
    u32 r12 = 0;
    u32 nf = 0;
    u32 vf = 0;
    if (r0 >= 4u) {
        r0 = r0 & 3u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r12 = 0xa82000u;  // (from the original)
    r3 = r0;
    r1 = 0u;
L_5c12e8:;
    if (u32(s32(s8(*gptr<u8>(r12 + r1)))) >= 4u) {
        goto L_5c1318;
    }
    r1 = u32(s32(s8(*gptr<u8>(r12 + r3))));
    r0 = ~0u;
    res = r1 - 4u;
    nf = res >> 0x1f;  // (from the original)
    vf = ((r1 ^ 4u) & (r1 ^ res)) >> 0x1f;  // (from the original)
    if (nf != vf) {
        nf = r1 >> 0x1f;  // (from the original)
        vf = 0u;
        r0 = r1;
    }
    if (nf != vf) {
        r0 = r3;
        guest::cpu()->r[1] = r1;
        return r0;
    }
L_5c1308:;
    if (r0 < 4u) {
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r0 = r3;
    guest::cpu()->r[1] = r1;
    return r0;
L_5c1318:;
    r1 = r1 + 1u;
    if (r1 < 4u) {
        guest::preempt();
        goto L_5c12e8;
    }
    guest::preempt();
    goto L_5c1308;
}

}  // namespace d_005c12d0
GUEST_EXPORT(0x005c12d0, d_005c12d0::f_005c12d0);

// f_005c132c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005c132c {

inline constexpr guest::Function<0x005c33d0, u32(u32, u32, u32, u32)> call_005c33d0;  // (from the original)

u32 f_005c132c() {
    return call_005c33d0(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_005c132c
GUEST_EXPORT(0x005c132c, d_005c132c::f_005c132c);

// f_005c13e0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005c13e0 {


u32 f_005c13e0() {
    u32 r0 = 0;
    u32 r1 = 0;
    r0 = 0xaadad4u;  // (from the original)
    r1 = u32(*gptr<u8>(r0)) | 0x10u;  // (from the original)
    *gptr<u8>(r0) = u8(r1);
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_005c13e0
GUEST_EXPORT(0x005c13e0, d_005c13e0::f_005c13e0);

// f_005c1428: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005c1428 {

inline constexpr guest::Function<0x005c33d0, u32(u32, u32, u32, u32)> call_005c33d0;  // (from the original)
inline constexpr guest::Function<0x0066ac8c, u32(u32, u32, u32, u32)> call_0066ac8c;  // (from the original)

u32 f_005c1428(u32 r0, u32 r1_unused, u32 r2, u32 r3) {
    u32 res = 0;
    u32 r1 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r13 = guest::cpu()->r[13];
    r4 = r0;
    r13 = r13 - 0x18u;  // (from the original)
    r0 = 4u;
    r1 = 0u;
    guest::cpu()->r[13] = r13;
    r0 = call_005c33d0(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    if (r0 == 0) {
        r13 = r13 + 0x18u;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    res = u32(*gptr<u8>(r0 + 0x8c5u)) << 0x1a >> 0x1f;  // (from the original)
    r1 = res;
    if (res != 0) {
        r0 = 0u;
        r13 = r13 + 0x18u;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    r3 = 0u;
    r1 = 1u;
    *gptr<u32>(r13 + 8u) = u32(*gptr<u32>(r4));
    *gptr<u8>(r13 + 0xcu) = u8(r3);  // (from the original)
    r2 = r1;
    *gptr<u32>(r13) = u32(r1);
    *gptr<u32>(r13 + 4) = u32(r3);
    r1 = r13 + 8u;
    guest::cpu()->r[13] = r13;
    r0 = call_0066ac8c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r13 = r13 + 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_005c1428
GUEST_EXPORT(0x005c1428, d_005c1428::f_005c1428);

// f_005c1488: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005c1488 {

inline constexpr guest::Function<0x002fc20c, u32(u32, u32, u32, u32)> call_002fc20c;  // (from the original)
inline constexpr guest::Function<0x005c33d0, u32(u32, u32, u32, u32)> call_005c33d0;  // (from the original)
inline constexpr guest::Function<0x0066ac8c, u32(u32, u32, u32, u32)> call_0066ac8c;  // (from the original)
inline constexpr guest::Function<0x006bbbd8, u32(u32, u32, u32, u32)> call_006bbbd8;  // (from the original)

u32 f_005c1488(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 res = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 0x28u;  // (from the original)
    r4 = r0;
    r0 = r13 + 0x18u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002fc20c(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = r4;
    r0 = r13 + 0x18u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_006bbbd8(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = 4u;
    r1 = 0u;
    guest::cpu()->r[13] = r13;
    r0 = call_005c33d0(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r4 = 0u;
    if (r0 == 0) {
        r0 = r4;
        r13 = r13 + 0x28u;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    res = u32(*gptr<u8>(r0 + 0x8c5u)) << 0x1a >> 0x1f;  // (from the original)
    r1 = res;
    if (res != 0) {
        r0 = r4;
        r13 = r13 + 0x28u;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    r1 = *gptr<u32>(r13 + 0x18u);  // (from the original)
    *gptr<u8>(r13 + 0xcu) = u8(r4);  // (from the original)
    r2 = 2u;
    *gptr<u32>(r13 + 8u) = u32(r1);
    r1 = 1u;
    *gptr<u32>(r13 + 0xdu) = u32(*gptr<u32>(0x95bfdcu));  // (from the original)
    *gptr<u8>(r13 + 0x11u) = u8(r1);  // (from the original)
    *gptr<u32>(r13) = u32(r1);
    *gptr<u32>(r13 + 4) = u32(r4);
    r3 = 0u;
    r1 = r13 + 8u;
    guest::cpu()->r[13] = r13;
    r0 = call_0066ac8c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r4 = r0;
    r0 = r4;
    r13 = r13 + 0x28u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_005c1488
GUEST_EXPORT(0x005c1488, d_005c1488::f_005c1488);

// f_005c159c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005c159c {

inline constexpr guest::Function<0x005c33d0, u32(u32, u32, u32, u32)> call_005c33d0;  // (from the original)
inline constexpr guest::Function<0x0064d0b8, u32(u32, u32, u32, u32)> call_0064d0b8;  // (from the original)

u32 f_005c159c(u32 r0_unused, u32 r1_unused, u32 r2, u32 r3) {
    u32 res = 0;
    u32 r0 = 0;
    u32 r1 = 0;
    r0 = 4u;
    r1 = 0u;
    guest::cpu()->r[13] -= 8u;
    r0 = call_005c33d0(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    if (r0 == 0) {
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    res = u32(*gptr<u8>(r0 + 0x8c5u)) << 0x1a >> 0x1f;  // (from the original)
    r1 = res;
    if (res != 0) {
        r0 = 0u;
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r3 = 0u;
    guest::cpu()->r[13] += 8u;
    r2 = r3;
    r1 = 0xccu;  // (from the original)
    return call_0064d0b8(r0, r1, r2, r3);
}

}  // namespace d_005c159c
GUEST_EXPORT(0x005c159c, d_005c159c::f_005c159c);

// f_005c167c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005c167c {


u32 f_005c167c(u32 r0, u32 r1) {
    if (r0 >= 4u) {
        return r0;
    }
    r0 = 0xa84790u + (r0 << 2) + 0x29000u;  // (from the original)
    *gptr<u32>(r0 + 0x204u) = u32(r1);  // (from the original)
    return r0;
}

}  // namespace d_005c167c
GUEST_EXPORT(0x005c167c, d_005c167c::f_005c167c);

// f_005c17e4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005c17e4 {

inline constexpr guest::Function<0x0052bf54, u32(u32, u32, u32, u32)> call_0052bf54;  // (from the original)
inline constexpr guest::Function<0x0052cb48, u32(u32, u32, u32, u32)> call_0052cb48;  // (from the original)

u32 f_005c17e4(u32 r0) {
    u32 r4 = guest::cpu()->r[4];
    guest::cpu()->r[13] -= 8u;
    r4 = r0;
    r0 = call_0052bf54(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    if (r0 != 0) {
        guest::cpu()->r[13] += 8u;
        return r0;
    }
    r0 = r4;
    guest::cpu()->r[13] += 8u;
    return call_0052cb48(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_005c17e4
GUEST_EXPORT(0x005c17e4, d_005c17e4::f_005c17e4);

// f_005c1814: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005c1814 {

inline constexpr guest::Function<0x005c33d0, u32(u32, u32, u32, u32)> call_005c33d0;  // (from the original)

u32 f_005c1814(u32 r0, u32 r1) {
    guest::cpu()->r[13] -= 8u;
    r0 = call_005c33d0(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 == 0) {
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r1 = *gptr<u32>(*gptr<u32>(r0) + 0x5cu);  // (from the original)
    guest::cpu()->r[13] += 8u;
    return guest::call_address<u32>(r1, r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_005c1814
GUEST_EXPORT(0x005c1814, d_005c1814::f_005c1814);

// f_005c1b0c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005c1b0c {

inline constexpr guest::Function<0x005c33d0, u32(u32, u32, u32, u32)> call_005c33d0;  // (from the original)
inline constexpr guest::Function<0x0066ac8c, u32(u32, u32, u32, u32)> call_0066ac8c;  // (from the original)

u32 f_005c1b0c(u32 r0, u32 r1_unused, u32 r2, u32 r3) {
    u32 res = 0;
    u32 r1 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r13 = guest::cpu()->r[13];
    r4 = r0;
    r13 = r13 - 0x18u;  // (from the original)
    r0 = 4u;
    r1 = 0u;
    guest::cpu()->r[13] = r13;
    r0 = call_005c33d0(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    if (r0 == 0) {
        r13 = r13 + 0x18u;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    res = u32(*gptr<u8>(r0 + 0x8c5u)) << 0x1a >> 0x1f;  // (from the original)
    r1 = res;
    if (res != 0) {
        r0 = 0u;
        r13 = r13 + 0x18u;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    r1 = 1u;
    r3 = 0u;
    *gptr<u32>(r13 + 8u) = u32(*gptr<u32>(r4));
    *gptr<u8>(r13 + 0xcu) = u8(r1);  // (from the original)
    r2 = r1;
    *gptr<u32>(r13) = u32(r1);
    *gptr<u32>(r13 + 4) = u32(r3);
    r1 = r13 + 8u;
    guest::cpu()->r[13] = r13;
    r0 = call_0066ac8c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r13 = r13 + 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_005c1b0c
GUEST_EXPORT(0x005c1b0c, d_005c1b0c::f_005c1b0c);

// f_005c1b6c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005c1b6c {

inline constexpr guest::Function<0x005c33d0, u32(u32, u32, u32, u32)> call_005c33d0;  // (from the original)
inline constexpr guest::Function<0x00660d14, u32(u32, u32, u32, u32)> call_00660d14;  // (from the original)

u32 f_005c1b6c(u32 r0, u32 r1, u32 r2) {
    u32 res = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r4 = r0;
    r5 = r1;
    r0 = 4u;
    r1 = 0u;
    r0 = call_005c33d0(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 == 0) {
        goto L_5c1bb0;
    }
    res = u32(*gptr<u8>(r0 + 0x8c5u)) << 0x1a >> 0x1f;  // (from the original)
    r1 = res;
    if (res != 0) {
        r0 = 0u;
        goto L_5c1bb0;
    }
    r2 = r5;
    r1 = r4;
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    return call_00660d14(r0, r1, r2, guest::cpu()->r[3]);
L_5c1bb0:;
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_005c1b6c
GUEST_EXPORT(0x005c1b6c, d_005c1b6c::f_005c1b6c);

// f_005c1bb4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005c1bb4 {

inline constexpr guest::Function<0x002fc934, u32(u32, u32, u32, u32)> call_002fc934;  // (from the original)
inline constexpr guest::Function<0x005c33d0, u32(u32, u32, u32, u32)> call_005c33d0;  // (from the original)
inline constexpr guest::Function<0x0066ac8c, u32(u32, u32, u32, u32)> call_0066ac8c;  // (from the original)

u32 f_005c1bb4(u32 r0, u32 r1_unused, u32 r2, u32 r3) {
    u32 res = 0;
    u32 r1 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r13 = guest::cpu()->r[13];
    r5 = r0;
    r13 = r13 - 0x20u;  // (from the original)
    r0 = 4u;
    r1 = 0u;
    guest::cpu()->r[13] = r13;
    r0 = call_005c33d0(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r4 = r0;
    if (r0 != 0) {
        res = u32(*gptr<u8>(r4 + 0x8c5u)) << 0x1a >> 0x1f;  // (from the original)
        if (res == 0) {
            goto L_5c1bf0;
        }
    }
    r0 = 0u;
    r13 = r13 + 0x20u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
L_5c1bf0:;
    r1 = r5;
    r0 = r13 + 0x10u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002fc934(r0, r1, r2, r3);
    r3 = 0u;
    r2 = 1u;
    *gptr<u32>(r13 + 8u) = u32(*gptr<u32>(r13 + 0x10u));  // (from the original)
    *gptr<u8>(r13 + 0xcu) = u8(2u);  // (from the original)
    *gptr<u32>(r13) = u32(r2);
    *gptr<u32>(r13 + 4) = u32(r3);
    r1 = r13 + 8u;
    r0 = r4;
    guest::cpu()->r[13] = r13;
    r0 = call_0066ac8c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r13 = r13 + 0x20u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_005c1bb4
GUEST_EXPORT(0x005c1bb4, d_005c1bb4::f_005c1bb4);

// f_005c1c7c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005c1c7c {

inline constexpr guest::Function<0x005c33d0, u32(u32, u32, u32, u32)> call_005c33d0;  // (from the original)
inline constexpr guest::Function<0x0064d0b8, u32(u32, u32, u32, u32)> call_0064d0b8;  // (from the original)

u32 f_005c1c7c(u32 r0, u32 r1_unused, u32 r2, u32 r3) {
    u32 res = 0;
    u32 r1 = 0;
    u32 r4 = guest::cpu()->r[4];
    guest::cpu()->r[13] -= 8u;
    r4 = r0;
    r0 = 4u;
    r1 = 0u;
    r0 = call_005c33d0(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    if (r0 == 0) {
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    res = u32(*gptr<u8>(r0 + 0x8c5u)) << 0x1a >> 0x1f;  // (from the original)
    r1 = res;
    if (res != 0) {
        r0 = 0u;
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r3 = 0u;
    r2 = r3;
    if (r4 == 0) {
        guest::cpu()->r[13] += 8u;
        r1 = 6u;
        return call_0064d0b8(r0, r1, r2, r3);
    }
    guest::cpu()->r[13] += 8u;
    r1 = 0xfu;  // (from the original)
    return call_0064d0b8(r0, r1, r2, r3);
}

}  // namespace d_005c1c7c
GUEST_EXPORT(0x005c1c7c, d_005c1c7c::f_005c1c7c);

// f_005c2120: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005c2120 {

inline constexpr guest::Function<0x005c33d0, u32(u32, u32, u32, u32)> call_005c33d0;  // (from the original)
inline constexpr guest::Function<0x0066ac8c, u32(u32, u32, u32, u32)> call_0066ac8c;  // (from the original)

u32 f_005c2120(u32 r0, u32 r1_unused, u32 r2, u32 r3) {
    u32 res = 0;
    u32 r1 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r12 = 0;
    u32 r13 = guest::cpu()->r[13];
    r4 = r0;
    r13 = r13 - 0x18u;  // (from the original)
    r0 = 4u;
    r1 = 0u;
    guest::cpu()->r[13] = r13;
    r0 = call_005c33d0(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    if (r0 == 0) {
        r13 = r13 + 0x18u;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    res = u32(*gptr<u8>(r0 + 0x8c5u)) << 0x1a >> 0x1f;  // (from the original)
    r1 = res;
    if (res != 0) {
        r0 = 0u;
        r13 = r13 + 0x18u;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    r1 = *gptr<u32>(r4);
    *gptr<u8>(r13 + 0xcu) = u8(6u);  // (from the original)
    *gptr<u32>(r13 + 8u) = u32(r1);
    r12 = 0u;
    *gptr<u32>(r13) = u32(1u);
    *gptr<u32>(r13 + 4) = u32(r12);
    r3 = r12;
    r2 = 1u;
    r1 = r13 + 8u;
    guest::cpu()->r[13] = r13;
    r0 = call_0066ac8c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r13 = r13 + 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_005c2120
GUEST_EXPORT(0x005c2120, d_005c2120::f_005c2120);

// f_005c2188: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005c2188 {

inline constexpr guest::Function<0x005c33d0, u32(u32, u32, u32, u32)> call_005c33d0;  // (from the original)
inline constexpr guest::Function<0x0066ac8c, u32(u32, u32, u32, u32)> call_0066ac8c;  // (from the original)

u32 f_005c2188(u32 r0, u32 r1_unused, u32 r2, u32 r3) {
    u32 res = 0;
    u32 r1 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r12 = 0;
    u32 r13 = guest::cpu()->r[13];
    r4 = r0;
    r13 = r13 - 0x18u;  // (from the original)
    r0 = 4u;
    r1 = 0u;
    guest::cpu()->r[13] = r13;
    r0 = call_005c33d0(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    if (r0 == 0) {
        r13 = r13 + 0x18u;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    r1 = 5u;
    res = u32(*gptr<u8>(r0 + 0x8c5u)) << 0x1a >> 0x1f;  // (from the original)
    if (res != 0) {
        r0 = 0u;
        r13 = r13 + 0x18u;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    r2 = *gptr<u32>(r4);
    *gptr<u8>(r13 + 0xcu) = u8(r1);  // (from the original)
    r12 = 0u;
    *gptr<u32>(r13 + 8u) = u32(r2);
    *gptr<u32>(r13) = u32(1u);
    *gptr<u32>(r13 + 4) = u32(r12);
    r3 = r12;
    r2 = 1u;
    r1 = r13 + 8u;
    guest::cpu()->r[13] = r13;
    r0 = call_0066ac8c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r13 = r13 + 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_005c2188
GUEST_EXPORT(0x005c2188, d_005c2188::f_005c2188);

// f_005c21f0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005c21f0 {

inline constexpr guest::Function<0x005c2808, u32(u32, u32, u32, u32)> call_005c2808;  // (from the original)
inline constexpr guest::Function<0x005c33d0, u32(u32, u32, u32, u32)> call_005c33d0;  // (from the original)
inline constexpr guest::Function<0x0065e0b8, u32(u32, u32, u32, u32)> call_0065e0b8;  // (from the original)

u32 f_005c21f0(u32 r0, u32 r1) {
    guest::cpu()->r[13] -= 8u;
    r0 = call_005c2808(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 == 0) {
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r0 = 4u;
    r1 = 0u;
    r0 = call_005c33d0(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 == 0) {
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r0 = call_0065e0b8(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 != 0) {
        r0 = 1u;
    }
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_005c21f0
GUEST_EXPORT(0x005c21f0, d_005c21f0::f_005c21f0);

// f_005c2224: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005c2224 {

inline constexpr guest::Function<0x005c33d0, u32(u32, u32, u32, u32)> call_005c33d0;  // (from the original)
inline constexpr guest::Function<0x0064d0b8, u32(u32, u32, u32, u32)> call_0064d0b8;  // (from the original)

u32 f_005c2224(u32 r0_unused, u32 r1_unused, u32 r2, u32 r3) {
    u32 res = 0;
    u32 r0 = 0;
    u32 r1 = 0;
    r0 = 4u;
    r1 = 0u;
    guest::cpu()->r[13] -= 8u;
    r0 = call_005c33d0(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    if (r0 == 0) {
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    res = u32(*gptr<u8>(r0 + 0x8c5u)) << 0x1a >> 0x1f;  // (from the original)
    r1 = res;
    if (res != 0) {
        r0 = 0u;
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r3 = 0u;
    guest::cpu()->r[13] += 8u;
    r2 = r3;
    r1 = 0xcbu;  // (from the original)
    return call_0064d0b8(r0, r1, r2, r3);
}

}  // namespace d_005c2224
GUEST_EXPORT(0x005c2224, d_005c2224::f_005c2224);

// f_005c2298: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005c2298 {

inline constexpr guest::Function<0x005c33d0, u32(u32, u32, u32, u32)> call_005c33d0;  // (from the original)
inline constexpr guest::Function<0x0064d0b8, u32(u32, u32, u32, u32)> call_0064d0b8;  // (from the original)

u32 f_005c2298(u32 r0_unused, u32 r1_unused, u32 r2, u32 r3) {
    u32 res = 0;
    u32 r0 = 0;
    u32 r1 = 0;
    r0 = 4u;
    r1 = 0u;
    guest::cpu()->r[13] -= 8u;
    r0 = call_005c33d0(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    if (r0 == 0) {
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    res = u32(*gptr<u8>(r0 + 0x8c5u)) << 0x1a >> 0x1f;  // (from the original)
    r1 = res;
    if (res != 0) {
        r0 = 0u;
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r3 = 0u;
    guest::cpu()->r[13] += 8u;
    r2 = r3;
    r1 = 0x78u;  // (from the original)
    return call_0064d0b8(r0, r1, r2, r3);
}

}  // namespace d_005c2298
GUEST_EXPORT(0x005c2298, d_005c2298::f_005c2298);

// f_005c22dc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005c22dc {

inline constexpr guest::Function<0x005c33d0, u32(u32, u32, u32, u32)> call_005c33d0;  // (from the original)
inline constexpr guest::Function<0x006579a8, u32(u32, u32, u32, u32)> call_006579a8;  // (from the original)
inline constexpr guest::Function<0x006d96fc, u32(u32, u32, u32, u32)> call_006d96fc;  // (from the original)

u32 f_005c22dc(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r13 = guest::cpu()->r[13];
    *gptr<u32>(r13 + 0xffffffe8u) = u32(r3);  // (from the original)
    r13 = r13 - 0x18;  // (from the original)
    r5 = r0;
    r6 = r1;
    r7 = r2;
    r0 = 4u;
    r1 = 0u;
    guest::cpu()->r[13] = r13;
    r0 = call_005c33d0(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r4 = r0;
    if (r0 != 0) {
        guest::cpu()->r[13] = r13;
        r0 = call_006d96fc(r0, r1, r2, r3);
        *gptr<u32>(r13) = u32(r0);
        r3 = r7;
        r2 = r6;
        r1 = r5;
        r0 = r4;
        guest::cpu()->r[13] = r13;
        r0 = call_006579a8(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
    }
    r13 = r13 + 0x18;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_005c22dc
GUEST_EXPORT(0x005c22dc, d_005c22dc::f_005c22dc);

// f_005c23c4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005c23c4 {

inline constexpr guest::Function<0x002fc20c, u32(u32, u32, u32, u32)> call_002fc20c;  // (from the original)
inline constexpr guest::Function<0x00305f44, u32(u32, u32, u32, u32)> call_00305f44;  // (from the original)
inline constexpr guest::Function<0x005c33d0, u32(u32, u32, u32, u32)> call_005c33d0;  // (from the original)
inline constexpr guest::Function<0x006609bc, u32(u32, u32, u32, u32)> call_006609bc;  // (from the original)
inline constexpr guest::Function<0x0068aa1c, u32(u32, u32, u32, u32)> call_0068aa1c;  // (from the original)

u32 f_005c23c4(u32 r0, u32 r1_unused, u32 r2, u32 r3) {
    u32 res = 0;
    u32 r1 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r13 = guest::cpu()->r[13];
    r6 = r0;
    r13 = r13 - 0x20u;  // (from the original)
    r0 = 4u;
    r1 = 0u;
    guest::cpu()->r[13] = r13;
    r0 = call_005c33d0(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r4 = r0;
    if (r0 == 0) {
        goto L_5c2400;
    }
    res = u32(*gptr<u8>(r4 + 0x8c5u)) << 0x1a >> 0x1f;  // (from the original)
    if (res != 0) {
        goto L_5c2400;
    }
    if (u32(*gptr<u8>(r4 + 0x1a9u)) == 0x92u) {  // (from the original)
        goto L_5c240c;
    }
L_5c2400:;
    r0 = 0u;
    r13 = r13 + 0x20u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
L_5c240c:;
    r5 = r4 + 0x8cau;  // (from the original)
    r0 = r13 + 0xcu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002fc20c(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = *gptr<u32>(r5);
    *gptr<u32>(r0) = u32(r1);
    r0 = r4;
    guest::cpu()->r[13] = r13;
    r0 = call_006609bc(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0 = call_00305f44(r0, r1, r2, r3);
    *gptr<u32>(r13) = u32(0x2bu);  // (from the original)
    *gptr<u32>(r13 + 4) = u32(2u);
    *gptr<u32>(r13 + 8) = u32(0xae5658u);  // (from the original)
    r3 = r6;
    r2 = 0u;
    r1 = r13 + 0xcu;  // (from the original)
    r0 = r4;
    guest::cpu()->r[13] = r13;
    r0 = call_0068aa1c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r0 = 1u;
    r13 = r13 + 0x20u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_005c23c4
GUEST_EXPORT(0x005c23c4, d_005c23c4::f_005c23c4);

// f_005c257c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005c257c {

inline constexpr guest::Function<0x0024a5ec, u32(u32, u32, u32, u32)> call_0024a5ec;  // (from the original)
inline constexpr guest::Function<0x002f77e8, u32(u32, u32, u32, u32)> call_002f77e8;  // (from the original)
inline constexpr guest::Function<0x002fc288, u32(u32, u32, u32, u32)> call_002fc288;  // (from the original)
inline constexpr guest::Function<0x002fc2a4, u32(u32, u32, u32, u32)> call_002fc2a4;  // (from the original)
inline constexpr guest::Function<0x002fcbb0, u32(u32, u32, u32, u32)> call_002fcbb0;  // (from the original)
inline constexpr guest::Function<0x002fe7dd, u32(u32, u32, u32, u32)> call_002fe7dc;  // (from the original)
inline constexpr guest::Function<0x002fea2c, u32(u32, u32, u32, u32)> call_002fea2c;  // (from the original)
inline constexpr guest::Function<0x002ff368, u32(u32, u32, u32, u32)> call_002ff368;  // (from the original)
inline constexpr guest::Function<0x002ff4d4, u32(u32, u32, u32, u32)> call_002ff4d4;  // (from the original)
inline constexpr guest::Function<0x002ff6f8, u32(u32, u32, u32, u32)> call_002ff6f8;  // (from the original)
inline constexpr guest::Function<0x00306354, u32(u32, u32, u32, u32)> call_00306354;  // (from the original)
inline constexpr guest::Function<0x006f073c, u32(u32, u32, u32, u32)> call_006f073c;  // (from the original)
inline constexpr guest::Function<0x00768138, u32(u32, u32, u32, u32)> call_00768138;  // (from the original)

u32 f_005c257c(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 0x2a0u;  // (from the original)
    r5 = r0;
    r0 = r13 + 0x10u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002ff368(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = 0x2278u;  // (from the original)
    r0 = r13 + 0x290u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002fcbb0(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r4 = r0;
    r0 = 3u;
    guest::cpu()->r[13] = r13;
    r0 = call_002ff6f8(r0, r1, r2, r3);
    *gptr<u32>(r13 + 4u) = u32(0x14u);  // (from the original)
    r2 = r0 + 1u;
    *gptr<u32>(r13 + 8u) = u32(0u);
    r3 = r5 + 0x55a6u;  // (from the original)
    r1 = 0x5c26f4u;  // (from the original)
    r0 = r13 + 0x10u;  // (from the original)
    *gptr<u32>(r13) = u32(r4);
    guest::cpu()->r[13] = r13;
    r0 = call_00306354(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r4 = r0 ^ 1u;
    if (r4 == 0) {
        goto L_5c2600;
    }
L_5c25ec:;
    r0 = r13 + 0x10u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002f77e8(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r0 = 0u;
    r13 = r13 + 0x2a0u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
L_5c2600:;
    if ((*gptr<u32>(0x953f58u) & 1u) != 0) {  // (from the original)
        goto L_5c2644;
    }
    r0 = 0x953f58u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002fe7dc(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        goto L_5c2644;
    }
    r0 = 0xa84480u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002fc288(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    r2 = 0x100000u;  // (from the original)
    r1 = 0x2fc8fcu;  // (from the original)
L_5c2644:;
    r0 = 0xa84480u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0024a5ec(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = 0xa84480u;  // (from the original)
    r1 = 9u;
    guest::cpu()->r[13] = r13;
    r0 = call_002fc2a4(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = 0xa84480u;  // (from the original)
    r1 = r5;
    guest::cpu()->r[13] = r13;
    r0 = call_006f073c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        r0 = 0xa84480u;  // (from the original)
        guest::cpu()->r[13] = r13;
        r0 = call_0024a5ec(r0, r1, r2, r3);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r0 = 0xa84480u;  // (from the original)
        r1 = 9u;
        guest::cpu()->r[13] = r13;
        r0 = call_002fc2a4(r0, r1, r2, r3);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
    }
    r1 = 0xa84480u;  // (from the original)
    r0 = r13 + 0xcu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002fea2c(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    r2 = 0u;
    r1 = r13 + 0xcu;  // (from the original)
    r0 = r13 + 0x10u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00768138(r0, r1, r2, r3);
    r3 = 0u;
    r2 = 1u;
    r1 = 3u;
    r0 = r13 + 0x10u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002ff4d4(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 != 0) {
        r0 = r13 + 0x10u;  // (from the original)
        guest::cpu()->r[13] = r13;
        r0 = call_002f77e8(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r0 = 1u;
        r13 = r13 + 0x2a0u;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    guest::preempt();
    goto L_5c25ec;
}

}  // namespace d_005c257c
GUEST_EXPORT(0x005c257c, d_005c257c::f_005c257c);

// f_005c2718: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005c2718 {


u32 f_005c2718() {
    u32 r0 = 0;
    u32 r1 = 0;
    r0 = 0xaadad4u;  // (from the original)
    r1 = u32(*gptr<u8>(r0)) & ~0x10u;  // (from the original)
    *gptr<u8>(r0) = u8(r1);
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_005c2718
GUEST_EXPORT(0x005c2718, d_005c2718::f_005c2718);

// f_005c2730: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005c2730 {

inline constexpr guest::Function<0x003171b4, u32(u32, u32, u32, u32)> call_003171b4;  // (from the original)
inline constexpr guest::Function<0x0065472c, u32(u32, u32, u32, u32)> call_0065472c;  // (from the original)

u32 f_005c2730(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r13 = guest::cpu()->r[13];
    r5 = r1;
    r13 = r13 - 0x18u;  // (from the original)
    r4 = r0;
    r1 = r2;
    r2 = r3;
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_0065472c(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    r2 = r13;
    r1 = r5;
    r0 = r4;
    guest::cpu()->r[13] = r13;
    r0 = call_003171b4(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r13 = r13 + 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_005c2730
GUEST_EXPORT(0x005c2730, d_005c2730::f_005c2730);

// f_005c2768: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005c2768 {

inline constexpr guest::Function<0x002fe7dd, u32(u32, u32, u32, u32)> call_002fe7dc;  // (from the original)
inline constexpr guest::Function<0x005c33d0, u32(u32, u32, u32, u32)> call_005c33d0;  // (from the original)
inline constexpr guest::Function<0x007634d0, u32(u32, u32, u32, u32)> call_007634d0;  // (from the original)

u32 f_005c2768() {
    u32 r0 = 0;
    u32 r1 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 0x18u;  // (from the original)
    r1 = 1u;
    r0 = 4u;
    guest::cpu()->r[13] = r13;
    r0 = call_005c33d0(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r5 = r0;
    if (r0 == 0) {
        r13 = r13 + 0x18u;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    if ((*gptr<u32>(0x953f50u) & 1u) == 0) {  // (from the original)
        r0 = 0x953f50u;  // (from the original)
        guest::cpu()->r[13] = r13;
        r0 = call_002fe7dc(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    }
    r4 = 0xa843c8u;  // (from the original)
    r1 = r5;
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_007634d0(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    *gptr<u32>(r4) = u32(*gptr<u32>(r13));
    *gptr<u32>(r4 + 4u) = u32(*gptr<u32>(r13 + 4u));
    *gptr<u32>(r4 + 8u) = u32(*gptr<u32>(r13 + 8u));
    r0 = r4;
    r13 = r13 + 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_005c2768
GUEST_EXPORT(0x005c2768, d_005c2768::f_005c2768);

// f_005c29f8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005c29f8 {

inline constexpr guest::Function<0x005c33d0, u32(u32, u32, u32, u32)> call_005c33d0;  // (from the original)
inline constexpr guest::Function<0x0067bcf4, u32(u32, u32, u32, u32)> call_0067bcf4;  // (from the original)

u32 f_005c29f8(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r13 = guest::cpu()->r[13];
    *gptr<u32>(r13 + 0xffffffe8u) = u32(r3);  // (from the original)
    r13 = r13 - 0x18;  // (from the original)
    r5 = r0;
    r6 = r1;
    r0 = *gptr<u32>(r13 + 0x18u);  // (from the original)
    r7 = r2;
    r4 = r3;
    r1 = 0u;
    guest::cpu()->r[13] = r13;
    r0 = call_005c33d0(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    if (r0 != 0) {
        r3 = r7;
        r2 = r6;
        r1 = r5;
        *gptr<u32>(r13) = u32(r4);
        guest::cpu()->r[13] = r13;
        r0 = call_0067bcf4(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
    }
    r13 = r13 + 0x18;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_005c29f8
GUEST_EXPORT(0x005c29f8, d_005c29f8::f_005c29f8);

// f_005c2a54: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005c2a54 {

inline constexpr guest::Function<0x005c33d0, u32(u32, u32, u32, u32)> call_005c33d0;  // (from the original)
inline constexpr guest::Function<0x005c507c, u32(u32, u32, u32, u32)> call_005c507c;  // (from the original)
inline constexpr guest::Function<0x0066fdc0, u32(u32, u32, u32, u32)> call_0066fdc0;  // (from the original)

u32 f_005c2a54() {
    u32 r0 = 0;
    u32 r1 = 0;
    u32 zf = 0;
    r1 = 0u;
    r0 = 7u;
    guest::cpu()->r[13] -= 8u;
    r0 = call_005c507c(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 == 0) {
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r0 = 4u;
    r1 = 0u;
    r0 = call_005c33d0(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 == 0) {
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r1 = u32(*gptr<u8>(r0 + 0x1a9u));  // (from the original)
    zf = r1 == 0x17u;  // (from the original)
    if (!zf) {
        zf = r1 == 0x18u;  // (from the original)
    }
    if (zf) {
        r0 = 1u;
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    if (r1 == 0x19u) {  // (from the original)
        r0 = 0u;
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r0 = call_0066fdc0(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
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

}  // namespace d_005c2a54
GUEST_EXPORT(0x005c2a54, d_005c2a54::f_005c2a54);

// f_005c2b00: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005c2b00 {

inline constexpr guest::Function<0x005c33d0, u32(u32, u32, u32, u32)> call_005c33d0;  // (from the original)
inline constexpr guest::Function<0x005c507c, u32(u32, u32, u32, u32)> call_005c507c;  // (from the original)
inline constexpr guest::Function<0x00659e8c, u32(u32, u32, u32, u32)> call_00659e8c;  // (from the original)
inline constexpr guest::Function<0x0067a478, u32(u32, u32, u32, u32)> call_0067a478;  // (from the original)

u32 f_005c2b00(u32 r0_unused, u32 r1) {
    u32 res = 0;
    u32 r0 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 zf = 0;
    guest::cpu()->r[13] -= 8u;
    res = u32(*gptr<u8>(0xaadad4u)) << 0x1b >> 0x1f;  // (from the original)
    if (res != 0) {
        r0 = 0u;
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    res = u32(*gptr<u8>(0xaaef14u)) << 0x1a >> 0x1f;  // (from the original)
    if (res != 0) {
        r0 = 0u;
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r1 = 1u;
    r0 = 0x11u;  // (from the original)
    r0 = call_005c507c(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 == 0) {
        r0 = 0u;
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r0 = 4u;
    r1 = 0u;
    r0 = call_005c33d0(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    zf = r0 == 0;
    r4 = r0;
    if (!zf) {
        r0 = u32(*gptr<u8>(r4 + 0x1a9u));  // (from the original)
        zf = r0 == 0x16u;  // (from the original)
    }
    if (zf) {
        r0 = 0u;
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r0 = call_0067a478(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r0 = r4;
    r0 = call_00659e8c(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 != 0) {
        r0 = 1u;
    }
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_005c2b00
GUEST_EXPORT(0x005c2b00, d_005c2b00::f_005c2b00);

// f_005c2e40: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005c2e40 {

inline constexpr guest::Function<0x002fc934, u32(u32, u32, u32, u32)> call_002fc934;  // (from the original)
inline constexpr guest::Function<0x005c33d0, u32(u32, u32, u32, u32)> call_005c33d0;  // (from the original)
inline constexpr guest::Function<0x0066ac8c, u32(u32, u32, u32, u32)> call_0066ac8c;  // (from the original)

u32 f_005c2e40(u32 r0, u32 r1_unused, u32 r2, u32 r3) {
    u32 res = 0;
    u32 r1 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r13 = guest::cpu()->r[13];
    r5 = r0;
    r13 = r13 - 0x20u;  // (from the original)
    r0 = 4u;
    r1 = 0u;
    guest::cpu()->r[13] = r13;
    r0 = call_005c33d0(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r4 = r0;
    if (r0 != 0) {
        res = u32(*gptr<u8>(r4 + 0x8c5u)) << 0x1a >> 0x1f;  // (from the original)
        if (res == 0) {
            goto L_5c2e7c;
        }
    }
    r0 = 0u;
    r13 = r13 + 0x20u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
L_5c2e7c:;
    r1 = r5;
    r0 = r13 + 0x10u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002fc934(r0, r1, r2, r3);
    r3 = 0u;
    r2 = 1u;
    *gptr<u32>(r13 + 8u) = u32(*gptr<u32>(r13 + 0x10u));  // (from the original)
    *gptr<u8>(r13 + 0xcu) = u8(4u);  // (from the original)
    *gptr<u32>(r13) = u32(r2);
    *gptr<u32>(r13 + 4) = u32(r3);
    r1 = r13 + 8u;
    r0 = r4;
    guest::cpu()->r[13] = r13;
    r0 = call_0066ac8c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r13 = r13 + 0x20u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_005c2e40
GUEST_EXPORT(0x005c2e40, d_005c2e40::f_005c2e40);

// f_005c2f70: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005c2f70 {

inline constexpr guest::Function<0x005c33d0, u32(u32, u32, u32, u32)> call_005c33d0;  // (from the original)
inline constexpr guest::Function<0x0064d0b8, u32(u32, u32, u32, u32)> call_0064d0b8;  // (from the original)

u32 f_005c2f70(u32 r0, u32 r1_unused, u32 r2, u32 r3) {
    u32 res = 0;
    u32 r1 = 0;
    u32 r4 = guest::cpu()->r[4];
    guest::cpu()->r[13] -= 8u;
    r4 = r0;
    r0 = 4u;
    r1 = 0u;
    r0 = call_005c33d0(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    if (r0 == 0) {
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    res = u32(*gptr<u8>(r0 + 0x8c5u)) << 0x1a >> 0x1f;  // (from the original)
    r1 = res;
    if (res != 0) {
        r0 = 0u;
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r3 = 0u;
    r2 = r3;
    if (r4 == 0) {
        guest::cpu()->r[13] += 8u;
        r1 = 6u;
        return call_0064d0b8(r0, r1, r2, r3);
    }
    guest::cpu()->r[13] += 8u;
    r1 = 0xfu;  // (from the original)
    return call_0064d0b8(r0, r1, r2, r3);
}

}  // namespace d_005c2f70
GUEST_EXPORT(0x005c2f70, d_005c2f70::f_005c2f70);

// f_005c305c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005c305c {

inline constexpr guest::Function<0x005c33d0, u32(u32, u32, u32, u32)> call_005c33d0;  // (from the original)
inline constexpr guest::Function<0x006579a8, u32(u32, u32, u32, u32)> call_006579a8;  // (from the original)
inline constexpr guest::Function<0x006d96fc, u32(u32, u32, u32, u32)> call_006d96fc;  // (from the original)

u32 f_005c305c(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r13 = guest::cpu()->r[13];
    *gptr<u32>(r13 + 0xffffffe8u) = u32(r3);  // (from the original)
    r13 = r13 - 0x18;  // (from the original)
    r5 = r0;
    r6 = r1;
    r0 = 4u;
    r1 = 0u;
    guest::cpu()->r[13] = r13;
    r0 = call_005c33d0(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r4 = r0;
    if (r0 != 0) {
        guest::cpu()->r[13] = r13;
        r0 = call_006d96fc(r0, r1, r2, r3);
        *gptr<u32>(r13) = u32(r0);
        r2 = 0xae5658u;  // (from the original)
        r3 = r6;
        r1 = r5;
        r0 = r4;
        guest::cpu()->r[13] = r13;
        r0 = call_006579a8(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
    }
    r13 = r13 + 0x18;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_005c305c
GUEST_EXPORT(0x005c305c, d_005c305c::f_005c305c);

// f_005c30a0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005c30a0 {

inline constexpr guest::Function<0x002fcb34, u32(u32, u32, u32, u32)> call_002fcb34;  // (from the original)
inline constexpr guest::Function<0x005c33d0, u32(u32, u32, u32, u32)> call_005c33d0;  // (from the original)
inline constexpr guest::Function<0x0065e2e0, u32(u32, u32, u32, u32)> call_0065e2e0;  // (from the original)

u32 f_005c30a0(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 res = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r13 = guest::cpu()->r[13];
    u32 zf = 0;
    r13 = r13 - 0x20u;  // (from the original)
    r8 = r0;
    r7 = r1;
    r5 = r2;
    r6 = r3;
    r0 = 4u;
    r1 = 0u;
    guest::cpu()->r[13] = r13;
    r0 = call_005c33d0(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    zf = r0 == 0;
    r4 = r0;
    r0 = 0u;
    if (zf) {
        goto L_5c3114;
    }
    res = u32(*gptr<u8>(r4 + 0x8c5u)) << 0x1a >> 0x1f;  // (from the original)
    r1 = res;
    if (res != 0) {
        goto L_5c3114;
    }
    r0 = r6;
    guest::cpu()->r[13] = r13;
    r0 = call_002fcb34(r0, r1, r2, r3);
    if (r0 == 0x41u) {  // (from the original)
        r0 = 1u;
    } else {
        r0 = 0u;
    }
    *gptr<u32>(r13) = u32(1u);
    *gptr<u32>(r13 + 4u) = u32(r0);
    r3 = r5;
    r2 = r7;
    r1 = r8;
    r0 = r4;
    guest::cpu()->r[13] = r13;
    r0 = call_0065e2e0(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
L_5c3114:;
    r13 = r13 + 0x20u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_005c30a0
GUEST_EXPORT(0x005c30a0, d_005c30a0::f_005c30a0);

// f_005c311c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005c311c {

inline constexpr guest::Function<0x002f74c8, u32(u32, u32, u32, u32)> call_002f74c8;  // (from the original)
inline constexpr guest::Function<0x002f74e0, u32(u32, u32, u32, u32)> call_002f74e0;  // (from the original)
inline constexpr guest::Function<0x005c33d0, u32(u32, u32, u32, u32)> call_005c33d0;  // (from the original)
inline constexpr guest::Function<0x006f8a58, u32(u32, u32, u32, u32)> call_006f8a58;  // (from the original)

u32 f_005c311c(u32 r0, u32 r1, u32 r2, u32 r3, float S0, float S1) {
    u32 r4 = guest::cpu()->r[4];
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 0x18u;  // (from the original)
    r4 = r0;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    r0 = call_002f74c8(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    r1 = r0;
    r0 = 4u;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    r0 = call_002f74e0(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    if (r0 == 0) {
        r13 = r13 + 0x18u;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        guest::cpu()->s[0] = S0;
        guest::cpu()->s[1] = S1;
        return r0;
    }
    r0 = 4u;
    r1 = 1u;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    r0 = call_005c33d0(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    if (r0 == 0) {
        r0 = 0u;
        r13 = r13 + 0x18u;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        guest::cpu()->s[0] = S0;
        guest::cpu()->s[1] = S1;
        return r0;
    }
    r3 = 0x10u;  // (from the original)
    S0 = std::bit_cast<float>(*gptr<u32>(0x5c31a8u));  // (from the original)
    *gptr<u32>(r13) = u32(*gptr<u32>(r0 + 0x14u));  // (from the original)
    *gptr<u32>(r13 + 4u) = u32(*gptr<u32>(r0 + 0x18u));  // (from the original)
    *gptr<u32>(r13 + 8u) = u32(*gptr<u32>(r0 + 0x1cu));  // (from the original)
    r2 = u32(*gptr<u16>(r0 + 0x2eu));  // (from the original)
    r1 = r13;
    S1 = std::bit_cast<float>(*gptr<u32>(0x85f2d4u));  // (from the original)
    r0 = r4;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    r0 = call_006f8a58(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    if (r0 != 0) {
        r0 = 1u;
        r13 = r13 + 0x18u;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        guest::cpu()->s[0] = S0;
        guest::cpu()->s[1] = S1;
        return r0;
    }
    r0 = 0u;
    r13 = r13 + 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    return r0;
}

}  // namespace d_005c311c
GUEST_EXPORT(0x005c311c, d_005c311c::f_005c311c);

// f_005c31ac: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005c31ac {

inline constexpr guest::Function<0x002fc900, u32(u32, u32, u32, u32)> call_002fc900;  // (from the original)
inline constexpr guest::Function<0x006249b0, u32(u32, u32, u32, u32)> call_006249b0;  // (from the original)

u32 f_005c31ac(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r4 = r0;
    r5 = r1;
    r0 = call_002fc900(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    if (r0 != 0) {
        r2 = r5;
        r3 = 0x26u;  // (from the original)
        r0 = u32(*gptr<u8>(0x881b94u + (r4 & 3u)));  // (from the original)
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        r1 = 4u;
        return call_006249b0(r0, r1, r2, r3);
    }
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_005c31ac
GUEST_EXPORT(0x005c31ac, d_005c31ac::f_005c31ac);

// f_005c324c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005c324c {

inline constexpr guest::Function<0x005c33d0, u32(u32, u32, u32, u32)> call_005c33d0;  // (from the original)
inline constexpr guest::Function<0x0070ac68, u32(u32, u32, u32, u32)> call_0070ac68;  // (from the original)

u32 f_005c324c(u32 r0, u32 r1, u32 r2, u32 r3, float S0, float S1, float S2) {
    u32 res = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r13 = guest::cpu()->r[13];
    u32 zf = 0;
    r4 = r0;
    r13 = r13 - 0x18u;  // (from the original)
    if (r0 == 0) {
        r0 = 0u;
        r13 = r13 + 0x18u;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        guest::cpu()->s[0] = S0;
        guest::cpu()->s[1] = S1;
        return r0;
    }
    r0 = r1;
    r1 = 1u;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2;
    r0 = call_005c33d0(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    S2 = guest::cpu()->s[2];
    res = r0;
    zf = res == 0;
    if (!zf) {
        res = r0 + 0x1b4u;  // (from the original)
        zf = res == 0;
        r0 = res;
    }
    if (zf) {
        r0 = 0u;
        r13 = r13 + 0x18u;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        guest::cpu()->s[0] = S0;
        guest::cpu()->s[1] = S1;
        return r0;
    }
    r2 = *gptr<u32>(r0 + 0xa4u);  // (from the original)
    r3 = 1u;
    r1 = r13;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2;
    r0 = call_0070ac68(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    S0 = std::bit_cast<float>(*gptr<u32>(r13)) + std::bit_cast<float>(*gptr<u32>(0x886a28u));  // (from the original)
    *gptr<u32>(r13) = u32(std::bit_cast<u32>(S0));
    *gptr<u32>(r13 + 4u) = u32(std::bit_cast<u32>(std::bit_cast<float>(*gptr<u32>(r13 + 4u)) + std::bit_cast<float>(*gptr<u32>(0x886a2cu))));  // (from the original)
    S1 = std::bit_cast<float>(*gptr<u32>(r13 + 8u)) + std::bit_cast<float>(*gptr<u32>(0x886a30u));  // (from the original)
    *gptr<u32>(r13 + 8u) = u32(std::bit_cast<u32>(S1));
    *gptr<u32>(r4) = u32(std::bit_cast<u32>(S0));
    *gptr<u32>(r4 + 4u) = u32(*gptr<u32>(r13 + 4u));
    *gptr<u32>(r4 + 8u) = u32(*gptr<u32>(r13 + 8u));
    r0 = 1u;
    r13 = r13 + 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    return r0;
}

}  // namespace d_005c324c
GUEST_EXPORT(0x005c324c, d_005c324c::f_005c324c);

// f_005c354c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005c354c {

inline constexpr guest::Function<0x005c40dc, u32(u32, u32, u32, u32)> call_005c40dc;  // (from the original)

u32 f_005c354c() {
    u32 r0 = 0;
    r0 = 0u;
    return call_005c40dc(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_005c354c
GUEST_EXPORT(0x005c354c, d_005c354c::f_005c354c);

// f_005c3554: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005c3554 {

inline constexpr guest::Function<0x005c48c8, u32(u32, u32, u32, u32)> call_005c48c8;  // (from the original)

u32 f_005c3554() {
    u32 r0 = 0;
    u32 r1 = 0;
    r1 = 1u;
    r0 = 9u;
    return call_005c48c8(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_005c3554
GUEST_EXPORT(0x005c3554, d_005c3554::f_005c3554);

// f_005c3560: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005c3560 {

inline constexpr guest::Function<0x002f74c8, u32(u32, u32, u32, u32)> call_002f74c8;  // (from the original)
inline constexpr guest::Function<0x005c33d0, u32(u32, u32, u32, u32)> call_005c33d0;  // (from the original)
inline constexpr guest::Function<0x005c3e84, u32(u32, u32, u32, u32)> call_005c3e84;  // (from the original)
inline constexpr guest::Function<0x006739b8, u32(u32, u32, u32, u32)> call_006739b8;  // (from the original)

u32 f_005c3560(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 ea = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r9 = guest::cpu()->r[9];
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 0x30u;  // (from the original)
    r8 = r1;
    r9 = r0;
    r4 = *gptr<u32>(r13 + 0x30u);  // (from the original)
    r5 = r2;
    r6 = r3;
    if (r4 == 0) {
        guest::cpu()->r[13] = r13;
        r0 = call_005c3e84(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        if (r0 == 0) {
            goto L_5c35e8;
        }
    }
    r0 = 4u;
    r1 = 0u;
    guest::cpu()->r[13] = r13;
    r0 = call_005c33d0(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r7 = r0;
    if (r0 == 0) {
        goto L_5c35e8;
    }
    guest::cpu()->r[13] = r13;
    r0 = call_002f74c8(r0, r1, r2, r3);
    if (r0 == 0x5cu) {  // (from the original)
        r2 = 0u;
    } else {
        r2 = r8;
    }
    r0 = 0u;
    if (r4 == 0) {
        goto L_5c35f0;
    }
    r3 = 0u;
    ea = r13 + 4u;
    *gptr<u32>(ea) = u32(r0);
    *gptr<u32>(ea + 4) = u32(r6);
    ea = r13 + 0xcu;  // (from the original)
    *gptr<u32>(ea) = u32(r0);
    *gptr<u32>(ea + 4) = u32(r5);
    r1 = r9;
    *gptr<u32>(r13) = u32(r0);
    r0 = r7;
    guest::cpu()->r[13] = r13;
    r0 = call_006739b8(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
L_5c35e8:;
    r13 = r13 + 0x30u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
L_5c35f0:;
    r4 = r13 + 0xcu;  // (from the original)
    ea = r13 + 4u;
    *gptr<u32>(ea) = u32(r0);
    *gptr<u32>(ea + 4) = u32(r6);
    *gptr<u32>(r13) = u32(r0);
    *gptr<u32>(r4) = u32(1u);
    *gptr<u32>(r4 + 4) = u32(r5);
    r3 = 0u;
    r1 = r9;
    r0 = r7;
    guest::cpu()->r[13] = r13;
    r0 = call_006739b8(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r13 = r13 + 0x30u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_005c3560
GUEST_EXPORT(0x005c3560, d_005c3560::f_005c3560);

// f_005c38c8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005c38c8 {

inline constexpr guest::Function<0x005c3620, u32(u32, u32, u32, u32)> call_005c3620;  // (from the original)

u32 f_005c38c8(u32 r0, u32 r1_unused, u32 r2_unused, u32 r3) {
    u32 r1 = 0;
    u32 r12 = 0;
    u32 r13 = guest::cpu()->r[13];
    *gptr<u32>(r13 + 0xfffffff8u) = u32(r3);  // (from the original)
    r13 = r13 - 8;
    *gptr<u16>(r13) = u16(0u);
    r1 = r13;
    if (r0 < 0xau) {  // (from the original)
        r12 = r0 & 7u;
        r0 = r1 + (r0 >> 3);
        r3 = 1u;
        r1 = u32(*gptr<u8>(r0)) | lsl_r(r3, r12 & 0xff);  // (from the original)
        *gptr<u8>(r0) = u8(r1);
    }
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_005c3620(r0, r1, guest::cpu()->r[2], r3);
    r1 = guest::cpu()->r[1];
    r13 = r13 + 8;
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_005c38c8
GUEST_EXPORT(0x005c38c8, d_005c38c8::f_005c38c8);

// f_005c423c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005c423c {

inline constexpr guest::Function<0x005c33d0, u32(u32, u32, u32, u32)> call_005c33d0;  // (from the original)
inline constexpr guest::Function<0x00678300, u32(u32, u32, u32, u32)> call_00678300;  // (from the original)

u32 f_005c423c(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 res = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r13 = guest::cpu()->r[13];
    r4 = r0;
    r5 = r1;
    r13 = r13 - 0x18u;  // (from the original)
    r6 = r2;
    r0 = 4u;
    r1 = 0u;
    guest::cpu()->r[13] = r13;
    r0 = call_005c33d0(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    if (r0 == 0) {
        goto L_5c42c0;
    }
    res = u32(*gptr<u8>(r0 + 0x8c5u)) << 0x1a >> 0x1f;  // (from the original)
    r1 = res;
    if (res != 0) {
        r0 = 0u;
        goto L_5c42c0;
    }
    if (u32(*gptr<u8>(r0 + 0x1a9u)) != 0xe1u) {  // (from the original)
        r3 = r6;
        r2 = r5;
        r1 = r4;
        r13 = r13 + 0x18u;  // (from the original)
        guest::cpu()->r[13] = r13;
        return call_00678300(r0, r1, r2, r3);
    }
    r3 = r6;
    r2 = r13;
    r1 = u32(*gptr<u8>(r0 + 0x8ceu)) << 8;  // (from the original)
    *gptr<u16>(r13 + 4u) = u16(r1);
    *gptr<u32>(r13) = u32(uxth(r1));
    r1 = r4;
    guest::cpu()->r[13] = r13;
    r0 = call_00678300(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
L_5c42c0:;
    r13 = r13 + 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_005c423c
GUEST_EXPORT(0x005c423c, d_005c423c::f_005c423c);

// f_005c4400: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005c4400 {

inline constexpr guest::Function<0x0027a5dc, u32(u32, u32, u32, u32)> call_0027a5dc;  // (from the original)
inline constexpr guest::Function<0x0027ab24, u32(u32, u32, u32, u32)> call_0027ab24;  // (from the original)
inline constexpr guest::Function<0x002fdf00, u32(u32, u32, u32, u32)> call_002fdf00;  // (from the original)
inline constexpr guest::Function<0x00305f44, u32(u32, u32, u32, u32)> call_00305f44;  // (from the original)
inline constexpr guest::Function<0x006bd910, u32(u32, u32, u32, u32)> call_006bd910;  // (from the original)

u32 f_005c4400(u32 r0, u32 r1) {
    u32 ea = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r13 = guest::cpu()->r[13];
    u32 r14 = guest::cpu()->r[14];
    if (r0 >= 4u) {
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[4] = r4;
        guest::cpu()->r[5] = r5;
        guest::cpu()->r[6] = r6;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    ea = r13 - 0x10;  // (from the original)
    *gptr<u32>(ea) = u32(r4);
    *gptr<u32>(ea + 4) = u32(r5);
    *gptr<u32>(ea + 8) = u32(r6);
    *gptr<u32>(ea + 0xc) = u32(r14);  // (from the original)
    r13 = r13 - 0x10;  // (from the original)
    r4 = r0;
    r6 = 0xa84790u;  // (from the original)
    r1 = 8u;
    r0 = r6 + r4 + 0x29000u;  // (from the original)
    r5 = u32(*gptr<u8>(r0 + 0x200u));  // (from the original)
    *gptr<u8>(r0 + 0x200u) = u8(r1);  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00305f44(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 != r4) {
        goto L_5c4450;
    }
    r0 = r5;
    guest::cpu()->r[13] = r13;
    r0 = call_002fdf00(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 == 0) {
        goto L_5c4450;
    }
    r1 = 0u;
    *gptr<u32>(0xaaf14cu) = u32(r1);  // (from the original)
L_5c4450:;
    r0 = r5;
    guest::cpu()->r[13] = r13;
    r0 = call_0027ab24(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 == 0) {
        goto L_5c4490;
    }
    r0 = r5;
    guest::cpu()->r[13] = r13;
    r0 = call_0027a5dc(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 >= 4u) {
        goto L_5c4490;
    }
    r1 = 0u;
    r0 = r6 + (r0 * 0x149u << 7);  // (from the original)
    ea = r13;
    r13 = r13 + 0x10;  // (from the original)
    r4 = *gptr<u32>(ea);
    r5 = *gptr<u32>(ea + 4);
    r6 = *gptr<u32>(ea + 8);
    r14 = *gptr<u32>(ea + 0xc);  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->r[4] = r4;
    guest::cpu()->r[5] = r5;
    guest::cpu()->r[6] = r6;
    return call_006bd910(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
L_5c4490:;
    ea = r13;
    r13 = r13 + 0x10;  // (from the original)
    r4 = *gptr<u32>(ea);
    r5 = *gptr<u32>(ea + 4);
    r6 = *gptr<u32>(ea + 8);
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[4] = r4;
    guest::cpu()->r[5] = r5;
    guest::cpu()->r[6] = r6;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_005c4400
GUEST_EXPORT(0x005c4400, d_005c4400::f_005c4400);

// f_005c44a0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005c44a0 {

inline constexpr guest::Function<0x0020bf50, u32(u32, u32, u32, u32)> call_0020bf50;  // (from the original)
inline constexpr guest::Function<0x002fb96c, u32(u32, u32, u32, u32)> call_002fb96c;  // (from the original)
inline constexpr guest::Function<0x002fc934, u32(u32, u32, u32, u32)> call_002fc934;  // (from the original)
inline constexpr guest::Function<0x0071a7ec, u32(u32, u32, u32, u32)> call_0071a7ec;  // (from the original)
inline constexpr guest::Function<0x0076aa40, u32(u32, u32, u32, u32)> call_0076aa40;  // (from the original)
inline constexpr guest::Function<0x0076abd4, u32(u32, u32, u32, u32)> call_0076abd4;  // (from the original)
inline constexpr guest::Function<0x0076bac4, u32(u32, u32, u32, u32)> call_0076bac4;  // (from the original)

u32 f_005c44a0(u32 r0, u32 r1, u32 r2, u32 r3) {
    u64 res = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r13 = guest::cpu()->r[13];
    *gptr<u32>(r13 + 0xfffffff0u) = u32(r3);  // (from the original)
    r13 = r13 - 0x10;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002fb96c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r4 = r0;
    if (r0 == 0) {
        r13 = r13 + 0x10;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    r0 = r4 + 0xau;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0071a7ec(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = r0;
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_002fc934(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_0076abd4(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        r0 = r13;
        guest::cpu()->r[13] = r13;
        r0 = call_0076aa40(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        if (r0 == 0) {
            goto L_5c4520;
        }
    }
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_0076bac4(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    res = u64(0xcccccccdu) * r0;  // (from the original)
    r2 = u32(res);
    r1 = 0u - (u32(res >> 0x20) >> 3);  // (from the original)
    r1 = r0 + (r1 + (r1 << 2) << 1);
    r0 = r4 + 0x2cu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0020bf50(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r13 = r13 + 0x10;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
L_5c4520:;
    r0 = 0u;
    r13 = r13 + 0x10;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_005c44a0
GUEST_EXPORT(0x005c44a0, d_005c44a0::f_005c44a0);

// f_005c4534: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005c4534 {

inline constexpr guest::Function<0x002fcb10, u32(u32, u32, u32, u32)> call_002fcb10;  // (from the original)
inline constexpr guest::Function<0x00536094, u32(u32, u32, u32, u32)> call_00536094;  // (from the original)

u32 f_005c4534(u32 r0) {
    u32 r4 = guest::cpu()->r[4];
    guest::cpu()->r[13] -= 8u;
    r4 = r0;
    r0 = call_002fcb10(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    if (r0 == 0) {
        r0 = ~0u;
        guest::cpu()->r[13] += 8u;
        return r0;
    }
    r0 = r4;
    guest::cpu()->r[13] += 8u;
    return call_00536094(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_005c4534
GUEST_EXPORT(0x005c4534, d_005c4534::f_005c4534);

// f_005c4840: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005c4840 {

inline constexpr guest::Function<0x005c33d0, u32(u32, u32, u32, u32)> call_005c33d0;  // (from the original)
inline constexpr guest::Function<0x0066ac8c, u32(u32, u32, u32, u32)> call_0066ac8c;  // (from the original)

u32 f_005c4840(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 res = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r13 = guest::cpu()->r[13];
    r4 = r0;
    r5 = r1;
    r13 = r13 - 0x28u;  // (from the original)
    r0 = 4u;
    r1 = 0u;
    guest::cpu()->r[13] = r13;
    r0 = call_005c33d0(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    if (r0 == 0) {
        r13 = r13 + 0x28u;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    res = u32(*gptr<u8>(r0 + 0x8c5u)) << 0x1a >> 0x1f;  // (from the original)
    r1 = res;
    if (res != 0) {
        r0 = 0u;
        r13 = r13 + 0x28u;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    r2 = *gptr<u32>(r4);
    r3 = 0u;
    *gptr<u8>(r13 + 0xcu) = u8(r3);  // (from the original)
    *gptr<u32>(r13 + 8u) = u32(r2);
    r1 = 1u;
    r2 = 2u;
    *gptr<u32>(r13 + 0xdu) = u32(*gptr<u32>(r5));  // (from the original)
    *gptr<u8>(r13 + 0x11u) = u8(r1);  // (from the original)
    *gptr<u32>(r13) = u32(r1);
    *gptr<u32>(r13 + 4) = u32(r3);
    r1 = r13 + 8u;
    guest::cpu()->r[13] = r13;
    r0 = call_0066ac8c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r13 = r13 + 0x28u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_005c4840
GUEST_EXPORT(0x005c4840, d_005c4840::f_005c4840);

// f_005c48c8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005c48c8 {

inline constexpr guest::Function<0x005c33d0, u32(u32, u32, u32, u32)> call_005c33d0;  // (from the original)
inline constexpr guest::Function<0x005c507c, u32(u32, u32, u32, u32)> call_005c507c;  // (from the original)
inline constexpr guest::Function<0x006548ac, u32(u32, u32, u32, u32)> call_006548ac;  // (from the original)
inline constexpr guest::Function<0x00763818, u32(u32, u32, u32, u32)> call_00763818;  // (from the original)

u32 f_005c48c8(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 b = 0;
    u32 res = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r9 = guest::cpu()->r[9];
    u32 zf = 0;
    u32 cf = 0;
    guest::cpu()->r[13] -= 0x20u;  // (from the original)
    r4 = r0;
    r0 = call_005c507c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        goto L_5c4b74;
    }
    r0 = 4u;
    r1 = 0u;
    r0 = call_005c33d0(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r5 = r0;
    if (r0 == 0) {
        goto L_5c4b78;
    }
    r0 = call_00763818(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r6 = r0;
    if (r0 == 0) {
        goto L_5c4b74;
    }
    r8 = 2u;
    r9 = 5u;
    res = u32(*gptr<u8>(r5 + 0x17bu)) << 0x1d >> 0x1f;  // (from the original)
    r0 = r4 & 2u;
    if (res == 0) {
        goto L_5c4a38;
    }
    if (r0 == 0) {
        goto L_5c4948;
    }
    if ((u32(*gptr<u8>(r5 + 0x8c7u)) & 1u) == 0) {  // (from the original)
        goto L_5c4948;
    }
    r3 = 0u;
    r2 = r3;
    r1 = 0x10u;  // (from the original)
    r0 = r5;
    r0 = call_006548ac(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 != 0) {
        goto L_5c4b70;
    }
L_5c4948:;
    if ((r4 & 4u) == 0) {
        goto L_5c4994;
    }
    r0 = 4u;
    r1 = 0u;
    r0 = call_005c33d0(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        goto L_5c4994;
    }
    if (u32(*gptr<u8>(r0 + 0x1a9u)) != 0x82u) {  // (from the original)
        goto L_5c4994;
    }
    r3 = 0u;
    r2 = r3;
    r1 = 0x11u;  // (from the original)
    r0 = r5;
    r0 = call_006548ac(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 != 0) {
        goto L_5c4b70;
    }
L_5c4994:;
    if ((r4 & 8u) == 0) {
        goto L_5c49cc;
    }
    res = u32(*gptr<u8>(r5 + 0x8c5u)) << 0x1a >> 0x1f;  // (from the original)
    if (res == 0) {
        goto L_5c49cc;
    }
    r3 = 0u;
    r2 = r3;
    r1 = 0x12u;  // (from the original)
    r0 = r5;
    r0 = call_006548ac(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 != 0) {
        goto L_5c4b70;
    }
L_5c49cc:;
    if ((r4 & 1u) == 0) {
        goto L_5c4b78;
    }
    if ((u32(*gptr<u8>(r5 + 0x8c7u)) & 1u) != 0) {  // (from the original)
        goto L_5c4b78;
    }
    res = u32(*gptr<u8>(r5 + 0x8c5u)) << 0x1a >> 0x1f;  // (from the original)
    if (res != 0) {
        goto L_5c4b78;
    }
    r0 = 4u;
    r1 = 0u;
    r0 = call_005c33d0(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    if (r0 != 0) {
        if (u32(*gptr<u8>(r0 + 0x1a9u)) == 0x82u) {  // (from the original)
            goto L_5c4b78;
        }
    }
    r3 = 1u;
    r2 = 0u;
    r1 = 0xfu;  // (from the original)
    r0 = r5;
    r0 = call_006548ac(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    if (r0 == 0) {
        goto L_5c4b78;
    }
    goto L_5c4b70;
L_5c4a38:;
    b = 0u;
    zf = r0 == b;
    cf = r0 >= b;
    if (!zf) {
        r0 = u32(*gptr<u8>(r6 + 5u));
    }
    b = 7u;
    r7 = b;
    if (!zf) {
        b = r0 >> 4;
        zf = r7 == b;
        cf = r7 >= b;
    }
    if (!cf || zf) {
        goto L_5c4a78;
    }
    r1 = 3u;
    if (r1 != r0 >> 4) {
        goto L_5c4a78;
    }
    r3 = 0u;
    r2 = r3;
    r1 = 0x10u;  // (from the original)
    r0 = r5;
    r0 = call_006548ac(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    if (r0 != 0) {
        goto L_5c4b70;
    }
L_5c4a78:;
    b = 4u;
    r0 = r4 & b;
    b = 0u;
    zf = r0 == b;
    cf = r0 >= b;
    if (!zf) {
        r0 = u32(*gptr<u8>(r6 + 5u));
        b = r0 >> 4;
        zf = r7 == b;
        cf = r7 >= b;
    }
    if (!cf || zf) {
        goto L_5c4ab8;
    }
    r1 = 4u;
    if (r1 != r0 >> 4) {
        goto L_5c4ab8;
    }
    r3 = 0u;
    r2 = r3;
    r1 = 0x11u;  // (from the original)
    r0 = r5;
    r0 = call_006548ac(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    if (r0 != 0) {
        goto L_5c4b70;
    }
L_5c4ab8:;
    b = 8u;
    r0 = r4 & b;
    b = 0u;
    zf = r0 == b;
    cf = r0 >= b;
    if (!zf) {
        r0 = u32(*gptr<u8>(r6 + 5u));
        b = r0 >> 4;
        zf = r7 == b;
        cf = r7 >= b;
    }
    if (!cf || zf) {
        goto L_5c4af4;
    }
    if (r9 != r0 >> 4) {
        goto L_5c4af4;
    }
    r3 = 0u;
    r2 = r3;
    r1 = 0x12u;  // (from the original)
    r0 = r5;
    r0 = call_006548ac(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    if (r0 != 0) {
        goto L_5c4b70;
    }
L_5c4af4:;
    b = 1u;
    r0 = r4 & b;
    b = 0u;
    zf = r0 == b;
    cf = r0 >= b;
    if (!zf) {
        r0 = u32(*gptr<u8>(r6 + 5u));
        b = r0 >> 4;
        zf = r7 == b;
        cf = r7 >= b;
    }
    if (!cf || zf) {
        goto L_5c4b30;
    }
    if (r8 != r0 >> 4) {
        goto L_5c4b30;
    }
    r3 = 1u;
    r2 = 0u;
    r1 = 0xfu;  // (from the original)
    r0 = r5;
    r0 = call_006548ac(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    if (r0 != 0) {
        goto L_5c4b70;
    }
L_5c4b30:;
    if ((r4 & 0x20u) == 0) {  // (from the original)
        goto L_5c4b78;
    }
    if (u32(*gptr<u8>(r5 + 0x1a9u)) != 0x70u) {  // (from the original)
        goto L_5c4b78;
    }
    if (*gptr<u32>(r5 + 0x884u) != 0) {  // (from the original)
        goto L_5c4b78;
    }
    r3 = 1u;
    r2 = 0u;
    r1 = 0xfu;  // (from the original)
    r0 = r5;
    r0 = call_006548ac(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    if (r0 == 0) {
        goto L_5c4b78;
    }
L_5c4b70:;
    r0 = 1u;
L_5c4b74:;
    guest::cpu()->r[13] += 0x20u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
L_5c4b78:;
    r0 = 0u;
    guest::cpu()->r[13] += 0x20u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_005c48c8
GUEST_EXPORT(0x005c48c8, d_005c48c8::f_005c48c8);

// f_005c4cdc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005c4cdc {

inline constexpr guest::Function<0x0023d5ec, u32(u32, u32, u32, u32)> call_0023d5ec;  // (from the original)
inline constexpr guest::Function<0x0027a5dc, u32(u32, u32, u32, u32)> call_0027a5dc;  // (from the original)
inline constexpr guest::Function<0x0027ab24, u32(u32, u32, u32, u32)> call_0027ab24;  // (from the original)
inline constexpr guest::Function<0x002fb378, u32(u32, u32, u32, u32)> call_002fb378;  // (from the original)
inline constexpr guest::Function<0x002fb96c, u32(u32, u32, u32, u32)> call_002fb96c;  // (from the original)
inline constexpr guest::Function<0x00305f44, u32(u32, u32, u32, u32)> call_00305f44;  // (from the original)
inline constexpr guest::Function<0x006bcdfc, u32(u32, u32, u32, u32)> call_006bcdfc;  // (from the original)

u32 f_005c4cdc(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 zf = 0;
    u32 cf = 0;
    guest::cpu()->r[13] -= 0x18u;  // (from the original)
    cf = r0 >= 4u;
    r5 = r1;
    if (!cf) {
        cf = r5 >= 8u;
    }
    r4 = r0;
    r6 = r2;
    if (cf) {
        goto L_5c4d90;
    }
    r7 = 0xa84790u;  // (from the original)
    *gptr<u8>(r7 + r4 + 0x29200u) = u8(r5);  // (from the original)
    r0 = r5;
    r0 = call_0027ab24(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    zf = r0 == 0;
    if (!zf) {
        zf = r6 == 0;
    }
    if (zf) {
        goto L_5c4d40;
    }
    r0 = r5;
    r0 = call_0027a5dc(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 >= 4u) {
        goto L_5c4d40;
    }
    r1 = r6;
    r0 = r7 + (r0 * 0x149u << 7);  // (from the original)
    r0 = call_006bcdfc(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
L_5c4d40:;
    r0 = call_00305f44(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 != r4) {
        goto L_5c4d90;
    }
    r0 = r5;
    r0 = call_002fb96c(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = 0xaaf14cu;  // (from the original)
    *gptr<u32>(r1) = u32(r0);
    r0 = *gptr<u32>(r1);
    if (r0 == 0) {
        goto L_5c4d90;
    }
    r0 = call_0023d5ec(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = call_002fb378(r0, r1, r2, r3);
    r1 = *gptr<u32>(r0);
    r2 = *gptr<u32>(r0 + 4);
    r3 = *gptr<u32>(r0 + 8);
    r0 = 0xaaf140u;  // (from the original)
    *gptr<u32>(r0) = u32(r1);
    *gptr<u32>(r0 + 4) = u32(r2);
    *gptr<u32>(r0 + 8) = u32(r3);
L_5c4d90:;
    guest::cpu()->r[13] += 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_005c4cdc
GUEST_EXPORT(0x005c4cdc, d_005c4cdc::f_005c4cdc);

// f_005c4e00: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005c4e00 {

inline constexpr guest::Function<0x0027ab40, u32(u32, u32, u32, u32)> call_0027ab40;  // (from the original)
inline constexpr guest::Function<0x002fae84, u32(u32, u32, u32, u32)> call_002fae84;  // (from the original)
inline constexpr guest::Function<0x002fdf00, u32(u32, u32, u32, u32)> call_002fdf00;  // (from the original)
inline constexpr guest::Function<0x00305f44, u32(u32, u32, u32, u32)> call_00305f44;  // (from the original)
inline constexpr guest::Function<0x00317ee0, u32(u32, u32, u32, u32)> call_00317ee0;  // (from the original)

u32 f_005c4e00(u32 r0, u32 r1) {
    u32 r4 = guest::cpu()->r[4];
    guest::cpu()->r[13] -= 8u;
    r0 = call_00305f44(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = 0xa84790u;  // (from the original)
    r4 = u32(*gptr<u8>((r0 & 3u) + r1 + 0x29200u));  // (from the original)
    r0 = r4;
    r0 = call_002fdf00(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 == 0) {
        r4 = 8u;
    }
    r0 = r4;
    r0 = call_0027ab40(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 == 0) {
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r0 = call_002fae84(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = r4;
    guest::cpu()->r[13] += 8u;
    r0 = r0 + 0x5d880u;  // (from the original)
    return call_00317ee0(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_005c4e00
GUEST_EXPORT(0x005c4e00, d_005c4e00::f_005c4e00);

// f_005c4f3c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005c4f3c {

inline constexpr guest::Function<0x0020bf50, u32(u32, u32, u32, u32)> call_0020bf50;  // (from the original)
inline constexpr guest::Function<0x002fb96c, u32(u32, u32, u32, u32)> call_002fb96c;  // (from the original)
inline constexpr guest::Function<0x002fc934, u32(u32, u32, u32, u32)> call_002fc934;  // (from the original)
inline constexpr guest::Function<0x0071a844, u32(u32, u32, u32, u32)> call_0071a844;  // (from the original)
inline constexpr guest::Function<0x0076aa40, u32(u32, u32, u32, u32)> call_0076aa40;  // (from the original)
inline constexpr guest::Function<0x0076abd4, u32(u32, u32, u32, u32)> call_0076abd4;  // (from the original)
inline constexpr guest::Function<0x0076bac4, u32(u32, u32, u32, u32)> call_0076bac4;  // (from the original)

u32 f_005c4f3c(u32 r0, u32 r1, u32 r2, u32 r3) {
    u64 res = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r13 = guest::cpu()->r[13];
    *gptr<u32>(r13 + 0xfffffff0u) = u32(r3);  // (from the original)
    r13 = r13 - 0x10;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002fb96c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r4 = r0;
    if (r0 == 0) {
        r13 = r13 + 0x10;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    r0 = r4 + 0xau;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0071a844(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = r0;
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_002fc934(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_0076abd4(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        r0 = r13;
        guest::cpu()->r[13] = r13;
        r0 = call_0076aa40(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        if (r0 == 0) {
            goto L_5c4fbc;
        }
    }
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_0076bac4(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    res = u64(0xcccccccdu) * r0;  // (from the original)
    r2 = u32(res);
    r1 = 0u - (u32(res >> 0x20) >> 3);  // (from the original)
    r1 = r0 + (r1 + (r1 << 2) << 1);
    r0 = r4 + 0x2cu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0020bf50(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r13 = r13 + 0x10;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
L_5c4fbc:;
    r0 = 0u;
    r13 = r13 + 0x10;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_005c4f3c
GUEST_EXPORT(0x005c4f3c, d_005c4f3c::f_005c4f3c);

// f_005c4fd0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005c4fd0 {

inline constexpr guest::Function<0x0020bf50, u32(u32, u32, u32, u32)> call_0020bf50;  // (from the original)
inline constexpr guest::Function<0x002fb96c, u32(u32, u32, u32, u32)> call_002fb96c;  // (from the original)
inline constexpr guest::Function<0x002fc934, u32(u32, u32, u32, u32)> call_002fc934;  // (from the original)
inline constexpr guest::Function<0x0071a868, u32(u32, u32, u32, u32)> call_0071a868;  // (from the original)
inline constexpr guest::Function<0x0076aa40, u32(u32, u32, u32, u32)> call_0076aa40;  // (from the original)
inline constexpr guest::Function<0x0076abd4, u32(u32, u32, u32, u32)> call_0076abd4;  // (from the original)
inline constexpr guest::Function<0x0076bac4, u32(u32, u32, u32, u32)> call_0076bac4;  // (from the original)

u32 f_005c4fd0(u32 r0, u32 r1, u32 r2, u32 r3) {
    u64 res = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r13 = guest::cpu()->r[13];
    *gptr<u32>(r13 + 0xfffffff0u) = u32(r3);  // (from the original)
    r13 = r13 - 0x10;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002fb96c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r4 = r0;
    if (r0 == 0) {
        r13 = r13 + 0x10;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    r0 = r4 + 0xau;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0071a868(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = r0;
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_002fc934(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_0076abd4(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        r0 = r13;
        guest::cpu()->r[13] = r13;
        r0 = call_0076aa40(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        if (r0 == 0) {
            goto L_5c5050;
        }
    }
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_0076bac4(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    res = u64(0xcccccccdu) * r0;  // (from the original)
    r2 = u32(res);
    r1 = 0u - (u32(res >> 0x20) >> 3);  // (from the original)
    r1 = r0 + (r1 + (r1 << 2) << 1);
    r0 = r4 + 0x2cu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0020bf50(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r13 = r13 + 0x10;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
L_5c5050:;
    r0 = 0u;
    r13 = r13 + 0x10;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_005c4fd0
GUEST_EXPORT(0x005c4fd0, d_005c4fd0::f_005c4fd0);

// f_005c5328: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005c5328 {

inline constexpr guest::Function<0x005c33d0, u32(u32, u32, u32, u32)> call_005c33d0;  // (from the original)
inline constexpr guest::Function<0x005c507c, u32(u32, u32, u32, u32)> call_005c507c;  // (from the original)
inline constexpr guest::Function<0x0067ee38, u32(u32, u32, u32, u32)> call_0067ee38;  // (from the original)

u32 f_005c5328(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 res = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r13 = guest::cpu()->r[13];
    *gptr<u32>(r13 + 0xffffffe8u) = u32(r3);  // (from the original)
    r13 = r13 - 0x18;  // (from the original)
    r5 = r0;
    r7 = r1;
    r6 = r2;
    r4 = r3;
    r1 = 0u;
    r0 = 0x21u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_005c507c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        goto L_5c538c;
    }
    r0 = 4u;
    r1 = 0u;
    guest::cpu()->r[13] = r13;
    r0 = call_005c33d0(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    if (r0 == 0) {
        goto L_5c538c;
    }
    res = u32(*gptr<u8>(r0 + 0x8c5u)) << 0x1a >> 0x1f;  // (from the original)
    r1 = res;
    if (res != 0) {
        r0 = 0u;
        goto L_5c538c;
    }
    r3 = r6;
    r2 = r7;
    r1 = r5;
    *gptr<u32>(r13) = u32(r4);
    guest::cpu()->r[13] = r13;
    r0 = call_0067ee38(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
L_5c538c:;
    r13 = r13 + 0x18;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_005c5328
GUEST_EXPORT(0x005c5328, d_005c5328::f_005c5328);

// f_005c5390: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005c5390 {

inline constexpr guest::Function<0x002fc934, u32(u32, u32, u32, u32)> call_002fc934;  // (from the original)
inline constexpr guest::Function<0x002fcaf4, u32(u32, u32, u32, u32)> call_002fcaf4;  // (from the original)
inline constexpr guest::Function<0x002fcbb0, u32(u32, u32, u32, u32)> call_002fcbb0;  // (from the original)
inline constexpr guest::Function<0x005c33d0, u32(u32, u32, u32, u32)> call_005c33d0;  // (from the original)
inline constexpr guest::Function<0x0066ac8c, u32(u32, u32, u32, u32)> call_0066ac8c;  // (from the original)
inline constexpr guest::Function<0x006bb91c, u32(u32, u32, u32, u32)> call_006bb91c;  // (from the original)
inline constexpr guest::Function<0x0070bd0c, u32(u32, u32, u32, u32)> call_0070bd0c;  // (from the original)
inline constexpr guest::Function<0x00712838, u32(u32, u32, u32, u32)> call_00712838;  // (from the original)

u32 f_005c5390(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 res = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r13 = guest::cpu()->r[13];
    u32 zf = 0;
    r13 = r13 - 0x28u;  // (from the original)
    r6 = r13 + 8u;
    r5 = r0;
    r4 = r1;
    if (r0 >= 0xau) {  // (from the original)
        goto L_5c5430;
    }
    r0 = *gptr<u32>(0xaaf14cu);  // (from the original)
    if (r0 == 0) {
        goto L_5c5430;
    }
    r1 = r5;
    r0 = r0 + 0x2cu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00712838(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = r4 - 6u;
    if (!(!u32(r1 >= 1u) || u32(r1 == 1u))) {
        guest::cpu()->r[13] = r13;
        r0 = call_0070bd0c(r0, r1, r2, r3);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r4 = r0;
    }
    zf = r4 == 6u;
    if (zf) {
        r1 = 0x33abu;  // (from the original)
    } else {
        r1 = 0x33adu;  // (from the original)
        zf = r4 == 7u;
    }
    if (!zf) {
        if (r4 == 0xbu) {  // (from the original)
            r1 = 0x33acu;  // (from the original)
        }
    }
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_002fcbb0(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = r5;
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_006bb91c(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = r13;
    r0 = r6;
    guest::cpu()->r[13] = r13;
    r0 = call_002fc934(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    goto L_5c543c;
L_5c5430:;
    r1 = 0x95bfdcu;  // (from the original)
    r0 = r6;
    guest::cpu()->r[13] = r13;
    r0 = call_002fc934(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
L_5c543c:;
    r0 = r13 + 8u;
    guest::cpu()->r[13] = r13;
    r0 = call_002fcaf4(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 != 0) {
        r0 = 0u;
        r13 = r13 + 0x28u;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    r0 = 4u;
    r1 = 0u;
    guest::cpu()->r[13] = r13;
    r0 = call_005c33d0(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r4 = 0u;
    if (r0 == 0) {
        goto L_5c54b0;
    }
    res = u32(*gptr<u8>(r0 + 0x8c5u)) << 0x1a >> 0x1f;  // (from the original)
    r1 = res;
    if (res != 0) {
        goto L_5c54b0;
    }
    r1 = *gptr<u32>(r13 + 8u);
    r2 = 1u;
    *gptr<u8>(r13 + 0x10u) = u8(r4);  // (from the original)
    *gptr<u32>(r13 + 0xcu) = u32(r1);  // (from the original)
    r3 = 0u;
    r1 = r13 + 0xcu;  // (from the original)
    *gptr<u32>(r13) = u32(r2);
    *gptr<u32>(r13 + 4) = u32(r4);
    guest::cpu()->r[13] = r13;
    r0 = call_0066ac8c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r4 = r0;
L_5c54b0:;
    r0 = r4;
    r13 = r13 + 0x28u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_005c5390
GUEST_EXPORT(0x005c5390, d_005c5390::f_005c5390);

// f_005c5714: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005c5714 {

inline constexpr guest::Function<0x0057ba08, u32(u32, u32, u32, u32)> call_0057ba08;  // (from the original)
inline constexpr guest::Function<0x005c33d0, u32(u32, u32, u32, u32)> call_005c33d0;  // (from the original)
inline constexpr guest::Function<0x006739b8, u32(u32, u32, u32, u32)> call_006739b8;  // (from the original)

u32 f_005c5714(u32 r0, u32 r1_unused, u32 r2, u32 r3) {
    u32 ea = 0;
    u32 r1 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r13 = guest::cpu()->r[13];
    r5 = r0;
    r13 = r13 - 0x28u;  // (from the original)
    r0 = 4u;
    r1 = 0u;
    guest::cpu()->r[13] = r13;
    r0 = call_005c33d0(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r4 = r0;
    if (r0 == 0) {
        r13 = r13 + 0x28u;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    r1 = r5;
    r0 = r4 + 0x14u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0057ba08(r0, r1, r2, r3);
    ea = r13 + 0x14u;  // (from the original)
    *gptr<u16>(ea) = u16(r0);
    r0 = 0u;
    ea = r13 + 0xcu;  // (from the original)
    *gptr<u32>(ea) = u32(2u);
    ea = r13 + 4u;
    *gptr<u32>(ea) = u32(r0);
    *gptr<u32>(ea + 4) = u32(r13 + 0x14u);  // (from the original)
    r2 = 1u;
    *gptr<u32>(r13 + 0x10u) = u32(r0);  // (from the original)
    r1 = 0x12u;  // (from the original)
    *gptr<u32>(r13) = u32(*gptr<u32>(0x886ac0u));  // (from the original)
    r3 = *gptr<u32>(0x886abcu);  // (from the original)
    r0 = r4;
    guest::cpu()->r[13] = r13;
    r0 = call_006739b8(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r13 = r13 + 0x28u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_005c5714
GUEST_EXPORT(0x005c5714, d_005c5714::f_005c5714);

// f_005c591c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005c591c {

inline constexpr guest::Function<0x002fc8e8, u32(u32, u32, u32, u32)> call_002fc8e8;  // (from the original)
inline constexpr guest::Function<0x002fc934, u32(u32, u32, u32, u32)> call_002fc934;  // (from the original)
inline constexpr guest::Function<0x00607bdc, u32(u32, u32, u32, u32)> call_00607bdc;  // (from the original)

u32 f_005c591c(u32 r0, u32 r1) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 0x38u;  // (from the original)
    r4 = r0;
    guest::cpu()->r[13] = r13;
    r0 = call_00607bdc(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 == 0) {
        goto L_5c5940;
    }
L_5c5934:;
    r0 = 0u;
    r13 = r13 + 0x38u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
L_5c5940:;
    r6 = *gptr<u32>(0xaaf14cu);  // (from the original)
    if (r6 == 0) {
        guest::preempt();
        goto L_5c5934;
    }
    r0 = r13;
    r1 = r4;
    guest::cpu()->r[13] = r13;
    r0 = call_002fc934(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = r4 + 4u;
    r0 = r0 + 4u;
    guest::cpu()->r[13] = r13;
    r0 = call_002fc934(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = r4 + 8u;
    r0 = r0 + 4u;
    guest::cpu()->r[13] = r13;
    r0 = call_002fc934(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = r4 + 0xcu;  // (from the original)
    r0 = r0 + 4u;
    guest::cpu()->r[13] = r13;
    r0 = call_002fc934(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = r4 + 0x10u;  // (from the original)
    r0 = r0 + 4u;
    guest::cpu()->r[13] = r13;
    r0 = call_002fc934(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = r4 + 0x14u;  // (from the original)
    r0 = r0 + 4u;
    guest::cpu()->r[13] = r13;
    r0 = call_002fc934(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = r4 + 0x18u;  // (from the original)
    r0 = r0 + 4u;
    guest::cpu()->r[13] = r13;
    r0 = call_002fc934(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = r4 + 0x1cu;  // (from the original)
    r0 = r0 + 4u;
    guest::cpu()->r[13] = r13;
    r0 = call_002fc934(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = u32(*gptr<u8>(r4 + 0x20u));  // (from the original)
    r5 = r13;
    r4 = r6 + 0xau;  // (from the original)
    *gptr<u8>(r0 + 4u) = u8(r1);
    r0 = u32(*gptr<u8>(r6 + 0x2au));  // (from the original)
    r1 = r5;
    if (r0 != 0) {
        r0 = 1u;
    }
    *gptr<u8>(r13 + 0x20u) = u8(r0);  // (from the original)
    r0 = r4;
    guest::cpu()->r[13] = r13;
    r0 = call_002fc8e8(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = r5 + 4u;
    r0 = r4 + 4u;
    guest::cpu()->r[13] = r13;
    r0 = call_002fc8e8(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = r5 + 8u;
    r0 = r4 + 8u;
    guest::cpu()->r[13] = r13;
    r0 = call_002fc8e8(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = r5 + 0xcu;  // (from the original)
    r0 = r4 + 0xcu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002fc8e8(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = r5 + 0x10u;  // (from the original)
    r0 = r4 + 0x10u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002fc8e8(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = r5 + 0x14u;  // (from the original)
    r0 = r4 + 0x14u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002fc8e8(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = r5 + 0x18u;  // (from the original)
    r0 = r4 + 0x18u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002fc8e8(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = r5 + 0x1cu;  // (from the original)
    r0 = r4 + 0x1cu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002fc8e8(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    *gptr<u8>(r4 + 0x20u) = u8(u32(*gptr<u8>(r13 + 0x20u)));  // (from the original)
    r0 = 1u;
    r13 = r13 + 0x38u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_005c591c
GUEST_EXPORT(0x005c591c, d_005c591c::f_005c591c);

// f_005c5aa8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005c5aa8 {

inline constexpr guest::Function<0x0027b3a8, u32(u32, u32, u32, u32)> call_0027b3a8;  // (from the original)
inline constexpr guest::Function<0x005c591c, u32(u32, u32, u32, u32)> call_005c591c;  // (from the original)

u32 f_005c5aa8(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 ea = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r12 = 0;
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 0x40u;  // (from the original)
    r4 = r1;
    r5 = r2;
    ea = r13 + 0x40u;  // (from the original)
    r1 = *gptr<u32>(ea);
    r2 = *gptr<u32>(ea + 4);
    r12 = *gptr<u32>(ea + 8);
    ea = r13;
    *gptr<u32>(ea) = u32(r3);
    r3 = r5;
    ea = r13 + 4u;
    *gptr<u32>(ea) = u32(r1);
    *gptr<u32>(ea + 4) = u32(r2);
    *gptr<u32>(ea + 8) = u32(r12);
    r1 = r0;
    r2 = r4;
    r0 = r13 + 0x10u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0027b3a8(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r13 + 0x10u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_005c591c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r13 = r13 + 0x40u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_005c5aa8
GUEST_EXPORT(0x005c5aa8, d_005c5aa8::f_005c5aa8);

// f_005c5df8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005c5df8 {

inline constexpr guest::Function<0x005c33d0, u32(u32, u32, u32, u32)> call_005c33d0;  // (from the original)

u32 f_005c5df8(u32 r0_unused, u32 r1_unused, u32 r2, u32 r3) {
    u32 res = 0;
    u32 r0 = 0;
    u32 r1 = 0;
    u32 zf = 0;
    r1 = 1u;
    r0 = 4u;
    guest::cpu()->r[13] -= 8u;
    r0 = call_005c33d0(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    if (r0 == 0) {
        r0 = 1u;
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    res = u32(*gptr<u8>(r0 + 0x66u)) << 0x1e >> 0x1f;  // (from the original)
    r1 = res;
    if (res == 0) {
        r0 = 0u;
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r1 = u32(*gptr<u8>(0xaadad5u));  // (from the original)
    res = r1 << 0x1c >> 0x1f;  // (from the original)
    if (res != 0) {
        r0 = 1u;
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    res = r1 << 0x1e >> 0x1f;  // (from the original)
    if (res != 0) {
        r0 = 0u;
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r2 = r0 + 0x500u;  // (from the original)
    if (u32(*gptr<u16>(r2 + 0xbcu)) != 0) {  // (from the original)
        r0 = 0u;
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    res = r1 << 0x1d >> 0x1f;  // (from the original)
    zf = res == 0;
    r1 = res;
    if (zf) {
        r1 = u32(*gptr<u16>(r2 + 0xbeu));  // (from the original)
        zf = r1 == 0;
    }
    if (!zf) {
        r0 = 0u;
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r1 = u32(*gptr<u8>(r0 + 0x177u));  // (from the original)
    if ((r1 & 1u) != 0) {
        r0 = 1u;
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    if (u32(*gptr<u8>(r0 + 0x1a9u)) == 0) {  // (from the original)
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

}  // namespace d_005c5df8
GUEST_EXPORT(0x005c5df8, d_005c5df8::f_005c5df8);

// f_005c5efc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005c5efc {

inline constexpr guest::Function<0x002fc934, u32(u32, u32, u32, u32)> call_002fc934;  // (from the original)
inline constexpr guest::Function<0x002fcaf4, u32(u32, u32, u32, u32)> call_002fcaf4;  // (from the original)
inline constexpr guest::Function<0x005c33d0, u32(u32, u32, u32, u32)> call_005c33d0;  // (from the original)
inline constexpr guest::Function<0x005c7e48, u32(u32, u32, u32, u32)> call_005c7e48;  // (from the original)
inline constexpr guest::Function<0x0066ac8c, u32(u32, u32, u32, u32)> call_0066ac8c;  // (from the original)

u32 f_005c5efc(u32 r0, u32 r1, u32 r2_unused, u32 r3) {
    u32 res = 0;
    u32 r2 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r13 = guest::cpu()->r[13];
    r2 = r1;
    r13 = r13 - 0x28u;  // (from the original)
    r1 = r0;
    r0 = r13 + 8u;
    guest::cpu()->r[13] = r13;
    r0 = call_005c7e48(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r13 + 8u;
    guest::cpu()->r[13] = r13;
    r0 = call_002fcaf4(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 != 0) {
        r0 = 0u;
        r13 = r13 + 0x28u;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    r5 = r13 + 8u;
    r0 = 4u;
    r1 = 0u;
    guest::cpu()->r[13] = r13;
    r0 = call_005c33d0(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r4 = r0;
    r6 = 0u;
    if (r0 == 0) {
        goto L_5c5fa8;
    }
    res = u32(*gptr<u8>(r4 + 0x8c5u)) << 0x1a >> 0x1f;  // (from the original)
    if (res != 0) {
        goto L_5c5fa8;
    }
    r1 = r5;
    r0 = r13 + 0x14u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002fc934(r0, r1, r2, r3);
    r0 = *gptr<u32>(r13 + 0x14u);  // (from the original)
    *gptr<u8>(r13 + 0x10u) = u8(2u);  // (from the original)
    *gptr<u32>(r13 + 0xcu) = u32(r0);  // (from the original)
    r2 = 1u;
    r3 = 0u;
    r1 = r13 + 0xcu;  // (from the original)
    r0 = r4;
    *gptr<u32>(r13) = u32(r2);
    *gptr<u32>(r13 + 4) = u32(r6);
    guest::cpu()->r[13] = r13;
    r0 = call_0066ac8c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r6 = r0;
L_5c5fa8:;
    r0 = r6;
    r13 = r13 + 0x28u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_005c5efc
GUEST_EXPORT(0x005c5efc, d_005c5efc::f_005c5efc);

// f_005c6024: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005c6024 {

inline constexpr guest::Function<0x002f77e8, u32(u32, u32, u32, u32)> call_002f77e8;  // (from the original)
inline constexpr guest::Function<0x002fcbb0, u32(u32, u32, u32, u32)> call_002fcbb0;  // (from the original)
inline constexpr guest::Function<0x002ff368, u32(u32, u32, u32, u32)> call_002ff368;  // (from the original)
inline constexpr guest::Function<0x002ff4d4, u32(u32, u32, u32, u32)> call_002ff4d4;  // (from the original)
inline constexpr guest::Function<0x005cc3a4, u32(u32, u32, u32, u32)> call_005cc3a4;  // (from the original)
inline constexpr guest::Function<0x00768138, u32(u32, u32, u32, u32)> call_00768138;  // (from the original)

u32 f_005c6024(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 ea = 0;
    u32 res = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 0x2a8u;  // (from the original)
    r4 = r0;
    r5 = r0 + 0x5700u;  // (from the original)
    r0 = r13 + 0x18u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002ff368(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = u32(*gptr<u8>(r5));
    r1 = 0x2258u;  // (from the original)
    r5 = 0x1du;  // (from the original)
    res = r0 << 0x1b;  // (from the original)
    r4 = r4 + 0x55a6u;  // (from the original)
    r0 = r13 + 0x298u;  // (from the original)
    if (res >> 0x1f) {  // (from the original)
        guest::cpu()->r[13] = r13;
        r0 = call_002fcbb0(r0, r1, r2, r3);
        r2 = 1u;
        ea = r13 + 0x10u;  // (from the original)
        *gptr<u32>(ea) = u32(0x184b78u);  // (from the original)
        ea = r13;
        *gptr<u32>(ea) = u32(r2);
        *gptr<u32>(ea + 4) = u32(r4);
        ea = r13 + 8u;
        *gptr<u32>(ea) = u32(r0);
        *gptr<u32>(ea + 4) = u32(r5);
        r3 = 3u;
        r1 = 0x5c6160u;  // (from the original)
        r0 = r13 + 0x18u;  // (from the original)
        guest::cpu()->r[13] = r13;
        r0 = call_005cc3a4(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r4 = r0 ^ 1u;
        if (r4 != 0) {
            goto L_5c6144;
        }
    } else {
        guest::cpu()->r[13] = r13;
        r0 = call_002fcbb0(r0, r1, r2, r3);
        r2 = 2u;
        ea = r13 + 0x10u;  // (from the original)
        *gptr<u32>(ea) = u32(0x182b80u);  // (from the original)
        ea = r13;
        *gptr<u32>(ea) = u32(r2);
        *gptr<u32>(ea + 4) = u32(r4);
        ea = r13 + 8u;
        *gptr<u32>(ea) = u32(r0);
        *gptr<u32>(ea + 4) = u32(r5);
        r3 = 4u;
        r1 = 0x5c6160u;  // (from the original)
        r0 = r13 + 0x18u;  // (from the original)
        guest::cpu()->r[13] = r13;
        r0 = call_005cc3a4(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r4 = r0 ^ 1u;
        if (r4 != 0) {
            goto L_5c6144;
        }
    }
    r1 = 0x3042u;  // (from the original)
    r0 = r13 + 0x14u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002fcbb0(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    r1 = r0;
    r2 = 0u;
    r0 = r13 + 0x18u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00768138(r0, r1, r2, r3);
    r3 = 0u;
    r2 = 2u;
    r1 = 7u;
    r0 = r13 + 0x18u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002ff4d4(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        goto L_5c6144;
    }
    r0 = r13 + 0x18u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002f77e8(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r0 = 1u;
    r13 = r13 + 0x2a8u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
L_5c6144:;
    r0 = r13 + 0x18u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002f77e8(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r0 = 0u;
    r13 = r13 + 0x2a8u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_005c6024
GUEST_EXPORT(0x005c6024, d_005c6024::f_005c6024);

// f_005c649c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005c649c {

inline constexpr guest::Function<0x005c64a4, u32(u32, u32, u32, u32)> call_005c64a4;  // (from the original)

u32 f_005c649c() {
    u32 r0 = 0;
    r0 = 1u;
    return call_005c64a4(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_005c649c
GUEST_EXPORT(0x005c649c, d_005c649c::f_005c649c);

// f_005c6654: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005c6654 {

inline constexpr guest::Function<0x005c33d0, u32(u32, u32, u32, u32)> call_005c33d0;  // (from the original)
inline constexpr guest::Function<0x0064d0b8, u32(u32, u32, u32, u32)> call_0064d0b8;  // (from the original)
inline constexpr guest::Function<0x00659c08, u32(u32, u32, u32, u32)> call_00659c08;  // (from the original)
inline constexpr guest::Function<0x0067a478, u32(u32, u32, u32, u32)> call_0067a478;  // (from the original)

u32 f_005c6654(u32 r0, u32 r1_unused, u32 r2, u32 r3) {
    u32 r1 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r5 = r0;
    r0 = 4u;
    r1 = 0u;
    r0 = call_005c33d0(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r4 = r0;
    if (r0 != 0) {
        if (r5 != 0) {
            guest::cpu()->r[13] += 0x10u;  // (from the original)
            r3 = 0u;
            r2 = r3;
            r1 = 0xfu;  // (from the original)
            return call_0064d0b8(r0, r1, r2, r3);
        }
        r0 = call_0067a478(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r0 = r4;
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        return call_00659c08(r0, r1, r2, r3);
    }
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_005c6654
GUEST_EXPORT(0x005c6654, d_005c6654::f_005c6654);

// f_005c6760: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005c6760 {

inline constexpr guest::Function<0x0023d5ec, u32(u32, u32, u32, u32)> call_0023d5ec;  // (from the original)
inline constexpr guest::Function<0x002fb378, u32(u32, u32, u32, u32)> call_002fb378;  // (from the original)

u32 f_005c6760(u32 r0_unused, u32 r1, u32 r2, u32 r3) {
    u32 ea = 0;
    u32 r0 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r13 = guest::cpu()->r[13];
    u32 r14 = guest::cpu()->r[14];
    r0 = *gptr<u32>(0xaaf14cu);  // (from the original)
    if (r0 == 0) {
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[4] = r4;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    ea = r13 - 8;
    *gptr<u32>(ea) = u32(r4);
    *gptr<u32>(ea + 4) = u32(r14);
    r13 = r13 - 8;
    guest::cpu()->r[13] = r13;
    r0 = call_0023d5ec(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0 = call_002fb378(r0, r1, r2, r3);
    r1 = *gptr<u32>(r0);
    r2 = *gptr<u32>(r0 + 4);
    r3 = *gptr<u32>(r0 + 8);
    r0 = 0xaaf140u;  // (from the original)
    ea = r0;
    *gptr<u32>(ea) = u32(r1);
    *gptr<u32>(ea + 4) = u32(r2);
    *gptr<u32>(ea + 8) = u32(r3);
    ea = r13;
    r13 = r13 + 8;
    r4 = *gptr<u32>(ea);
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[4] = r4;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_005c6760
GUEST_EXPORT(0x005c6760, d_005c6760::f_005c6760);

// f_005c67d8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005c67d8 {


u32 f_005c67d8() {
    u32 r0 = 0;
    float S0 = 0;
    r0 = 0xaaef90u;  // (from the original)
    S0 = std::bit_cast<float>(*gptr<u32>(0x5c67ecu));  // (from the original)
    *gptr<u32>(r0 + 0x204u) = u32(std::bit_cast<u32>(S0));  // (from the original)
    *gptr<u32>(r0 + 0x208u) = u32(std::bit_cast<u32>(S0));  // (from the original)
    guest::cpu()->s[0] = S0;
    return r0;
}

}  // namespace d_005c67d8
GUEST_EXPORT(0x005c67d8, d_005c67d8::f_005c67d8);

// f_005c6878: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005c6878 {

inline constexpr guest::Function<0x002f8574, u32(u32, u32, u32, u32)> call_002f8574;  // (from the original)
inline constexpr guest::Function<0x005c330c, u32(u32, u32, u32, u32)> call_005c330c;  // (from the original)

u32 f_005c6878(u32 r0, u32 r1, u32 r2, u32 r3, float S0, float S1) {
    u32 ea = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r13 = guest::cpu()->r[13];
    *gptr<u32>(r13 + 0xffffffe0u) = u32(r3);  // (from the original)
    r13 = r13 - 0x20;  // (from the original)
    r4 = r0;
    r0 = r1;
    r8 = r2;
    r5 = r3;
    ea = r13 + 0x20u;  // (from the original)
    r6 = *gptr<u32>(ea);
    r7 = *gptr<u32>(ea + 4);
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    r0 = call_005c330c(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    r1 = r0;
    r2 = 0x26u;  // (from the original)
    r0 = r4;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    r0 = call_002f8574(r0, r1, r2, r3);
    *gptr<u8>(r4) = u8(r8);
    S1 = std::bit_cast<float>(*gptr<u32>(0x5c68fcu));  // (from the original)
    r0 = 0u;
    r1 = std::bit_cast<u32>(std::bit_cast<float>(vcvt_sz_f(std::bit_cast<float>(*gptr<u32>(r5)) * S1)));
    *gptr<u16>(r13) = u16(r1);
    *gptr<u16>(r4 + 2u) = u16(r1);
    S0 = std::bit_cast<float>(vcvt_sz_f(std::bit_cast<float>(*gptr<u32>(r5 + 8u)) * S1));
    r1 = std::bit_cast<u32>(S0);
    *gptr<u16>(r4 + 4u) = u16(r1);
    *gptr<u16>(r13) = u16(r6);
    *gptr<u16>(r4 + 6u) = u16(r6);
    *gptr<u8>(r4 + 1u) = u8(r7);
    *gptr<u16>(r4 + 9u) = u16(r0);
    *gptr<u8>(r4 + 0xbu) = u8(r0);  // (from the original)
    *gptr<u8>(r4 + 0xcu) = u8(r0);  // (from the original)
    *gptr<u8>(r4 + 8u) = u8(r0);
    r13 = r13 + 0x20;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    return r0;
}

}  // namespace d_005c6878
GUEST_EXPORT(0x005c6878, d_005c6878::f_005c6878);

// f_005c6900: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005c6900 {

inline constexpr guest::Function<0x005c6908, u32(u32, u32, u32, u32)> call_005c6908;  // (from the original)

u32 f_005c6900() {
    u32 r0 = 0;
    r0 = 1u;
    return call_005c6908(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_005c6900
GUEST_EXPORT(0x005c6900, d_005c6900::f_005c6900);

// f_005c6a20: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005c6a20 {

inline constexpr guest::Function<0x005c33d0, u32(u32, u32, u32, u32)> call_005c33d0;  // (from the original)
inline constexpr guest::Function<0x0066ac8c, u32(u32, u32, u32, u32)> call_0066ac8c;  // (from the original)

u32 f_005c6a20(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 res = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r12 = 0;
    u32 r13 = guest::cpu()->r[13];
    r4 = r0;
    r5 = r1;
    r13 = r13 - 0x20u;  // (from the original)
    r0 = 4u;
    r1 = 0u;
    guest::cpu()->r[13] = r13;
    r0 = call_005c33d0(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    if (r0 == 0) {
        r13 = r13 + 0x20u;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    res = u32(*gptr<u8>(r0 + 0x8c5u)) << 0x1a >> 0x1f;  // (from the original)
    r1 = res;
    if (res != 0) {
        r0 = 0u;
        r13 = r13 + 0x20u;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    r12 = *gptr<u32>(r4);
    r4 = 2u;
    *gptr<u8>(r13 + 0xcu) = u8(r4);  // (from the original)
    *gptr<u32>(r13 + 8u) = u32(r12);
    r3 = 0u;
    *gptr<u32>(r13 + 0xdu) = u32(*gptr<u32>(r5));  // (from the original)
    *gptr<u32>(r13) = u32(1u);
    *gptr<u32>(r13 + 4) = u32(r3);
    *gptr<u8>(r13 + 0x11u) = u8(4u);  // (from the original)
    r2 = r4;
    r1 = r13 + 8u;
    guest::cpu()->r[13] = r13;
    r0 = call_0066ac8c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r13 = r13 + 0x20u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_005c6a20
GUEST_EXPORT(0x005c6a20, d_005c6a20::f_005c6a20);

// f_005c6a98: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005c6a98 {


u32 f_005c6a98() {
    u32 r0 = 0;
    u32 r1 = 0;
    r0 = 0xaadad4u;  // (from the original)
    r1 = u32(*gptr<u8>(r0 + 1u)) | 2u;
    *gptr<u8>(r0 + 1u) = u8(r1);
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_005c6a98
GUEST_EXPORT(0x005c6a98, d_005c6a98::f_005c6a98);

// f_005c6b24: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005c6b24 {

inline constexpr guest::Function<0x002fc934, u32(u32, u32, u32, u32)> call_002fc934;  // (from the original)
inline constexpr guest::Function<0x002fcaf4, u32(u32, u32, u32, u32)> call_002fcaf4;  // (from the original)
inline constexpr guest::Function<0x005c33d0, u32(u32, u32, u32, u32)> call_005c33d0;  // (from the original)
inline constexpr guest::Function<0x0071a844, u32(u32, u32, u32, u32)> call_0071a844;  // (from the original)
inline constexpr guest::Function<0x007241b0, u32(u32, u32, u32, u32)> call_007241b0;  // (from the original)
inline constexpr guest::Function<0x00765e04, u32(u32, u32, u32, u32)> call_00765e04;  // (from the original)
inline constexpr guest::Function<0x0076aa70, u32(u32, u32, u32, u32)> call_0076aa70;  // (from the original)

u32 f_005c6b24(u32 r0_unused, u32 r1) {
    u32 res = 0;
    u32 r0 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 0x10u;  // (from the original)
    r4 = *gptr<u32>(0xaaf14cu);  // (from the original)
    if (r4 == 0) {
        r0 = 0u;
        r13 = r13 + 0x10u;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    r0 = r4 + 0xau;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0071a844(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = r0;
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_002fc934(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_002fcaf4(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 != 0) {
        r0 = 1u;
        r13 = r13 + 0x10u;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    r0 = r4 + 0x6bd0u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_007241b0(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    res = r0;
    if (res >> 0x1f != (r0 & (r0 ^ res)) >> 0x1f) {  // (from the original)
        r0 = 0u;
        r13 = r13 + 0x10u;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    r4 = r13 + 4u;
    r1 = 0u;
    r0 = 4u;
    guest::cpu()->r[13] = r13;
    r0 = call_005c33d0(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 == 0) {
        goto L_5c6c00;
    }
    guest::cpu()->r[13] = r13;
    r0 = call_00765e04(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = r0;
    r0 = r4;
    guest::cpu()->r[13] = r13;
    r0 = call_002fc934(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
L_5c6bd0:;
    r0 = r13 + 4u;
    guest::cpu()->r[13] = r13;
    r0 = call_0076aa70(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 == 0) {
        r0 = 2u;
        r13 = r13 + 0x10u;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    r0 = 3u;
    r13 = r13 + 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
L_5c6c00:;
    r1 = 0x95bfdcu;  // (from the original)
    r0 = r4;
    guest::cpu()->r[13] = r13;
    r0 = call_002fc934(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    guest::preempt();
    goto L_5c6bd0;
}

}  // namespace d_005c6b24
GUEST_EXPORT(0x005c6b24, d_005c6b24::f_005c6b24);

// f_005c6e18: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005c6e18 {

inline constexpr guest::Function<0x0023d5ec, u32(u32, u32, u32, u32)> call_0023d5ec;  // (from the original)
inline constexpr guest::Function<0x002fb378, u32(u32, u32, u32, u32)> call_002fb378;  // (from the original)
inline constexpr guest::Function<0x00314278, u32(u32, u32, u32, u32)> call_00314278;  // (from the original)

u32 f_005c6e18(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 ea = 0;
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 0x10u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002fb378(r0, r1, r2, r3);
    r1 = 0xaaf140u;  // (from the original)
    ea = r1 + 4u;
    r2 = *gptr<u32>(ea);
    r3 = *gptr<u32>(ea + 4);
    ea = r13;
    *gptr<u32>(ea) = u32(r2);
    *gptr<u32>(ea + 4) = u32(r3);
    ea = r1;
    r3 = *gptr<u32>(ea);
    ea = r0;
    r0 = *gptr<u32>(ea);
    r1 = *gptr<u32>(ea + 4);
    r2 = *gptr<u32>(ea + 8);
    guest::cpu()->r[13] = r13;
    r0 = call_00314278(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 != 0) {
        r13 = r13 + 0x10u;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    r0 = *gptr<u32>(0xaaf14cu);  // (from the original)
    if (r0 == 0) {
        r13 = r13 + 0x10u;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    guest::cpu()->r[13] = r13;
    r0 = call_0023d5ec(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0 = call_002fb378(r0, r1, r2, r3);
    r1 = *gptr<u32>(r0);
    r2 = *gptr<u32>(r0 + 4);
    r3 = *gptr<u32>(r0 + 8);
    r0 = 0xaaf140u;  // (from the original)
    *gptr<u32>(r0) = u32(r1);
    *gptr<u32>(r0 + 4) = u32(r2);
    *gptr<u32>(r0 + 8) = u32(r3);
    r13 = r13 + 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_005c6e18
GUEST_EXPORT(0x005c6e18, d_005c6e18::f_005c6e18);

// f_005c6f7c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005c6f7c {


u32 f_005c6f7c() {
    u32 res = 0;
    u32 r0 = 0;
    u32 r1 = 0;
    r0 = 0xaadad4u;  // (from the original)
    r1 = u32(*gptr<u8>(r0));
    res = r1 << 0x1c >> 0x1f;  // (from the original)
    if (res != 0) {
        r1 = r1 & ~8u;
        *gptr<u8>(r0) = u8(r1);
    }
    r0 = 1u;
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_005c6f7c
GUEST_EXPORT(0x005c6f7c, d_005c6f7c::f_005c6f7c);

// f_005c6fa0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005c6fa0 {

inline constexpr guest::Function<0x005c33d0, u32(u32, u32, u32, u32)> call_005c33d0;  // (from the original)
inline constexpr guest::Function<0x005c5eb8, u32(u32, u32, u32, u32)> call_005c5eb8;  // (from the original)
inline constexpr guest::Function<0x0064d0b8, u32(u32, u32, u32, u32)> call_0064d0b8;  // (from the original)
inline constexpr guest::Function<0x0067c674, u32(u32, u32, u32, u32)> call_0067c674;  // (from the original)

u32 f_005c6fa0(u32 r0_unused, u32 r1, u32 r2, u32 r3, float S0) {
    u32 res = 0;
    u32 r0 = 0;
    u32 r4 = guest::cpu()->r[4];
    r0 = 4u;
    guest::cpu()->r[13] -= 8u;
    guest::cpu()->s[0] = S0;
    r0 = call_005c5eb8(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
    if (r0 == 0) {
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        guest::cpu()->s[0] = S0;
        return r0;
    }
    r0 = 4u;
    r1 = 1u;
    guest::cpu()->s[0] = S0;
    r0 = call_005c33d0(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    S0 = guest::cpu()->s[0];
    r4 = r0;
    if (r0 == 0) {
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        guest::cpu()->s[0] = S0;
        return r0;
    }
    res = u32(*gptr<u8>(r4 + 0x171u)) << 0x1a >> 0x1f;  // (from the original)
    r0 = res;
    if (res == 0) {
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        guest::cpu()->s[0] = S0;
        return r0;
    }
    r3 = 0u;
    r2 = r3;
    r1 = 0xeau;  // (from the original)
    r0 = r4;
    guest::cpu()->s[0] = S0;
    r0 = call_0064d0b8(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
    if (r0 == 0) {
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        guest::cpu()->s[0] = S0;
        return r0;
    }
    r0 = r4;
    guest::cpu()->r[13] += 8u;
    r1 = 0u;
    S0 = std::bit_cast<float>(*gptr<u32>(0x5c700cu));  // (from the original)
    guest::cpu()->s[0] = S0;
    return call_0067c674(r0, r1, r2, r3);
}

}  // namespace d_005c6fa0
GUEST_EXPORT(0x005c6fa0, d_005c6fa0::f_005c6fa0);

// f_005c7010: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005c7010 {

inline constexpr guest::Function<0x0062512c, u32(u32, u32, u32, u32)> call_0062512c;  // (from the original)

u32 f_005c7010(u32 r0, u32 r1) {
    u32 r2 = 0;
    r0 = r0 & 3u;
    r2 = r1 & 3u;
    r1 = r0 + (r0 << 1) + (r0 << 4);
    r0 = u32(*gptr<u8>(0x881b8cu + r2));  // (from the original)
    r1 = 0xa84790u + (r1 << 1) + 0x292acu;  // (from the original)
    r2 = 0u;
    return call_0062512c(r0, r1, r2, guest::cpu()->r[3]);
}

}  // namespace d_005c7010
GUEST_EXPORT(0x005c7010, d_005c7010::f_005c7010);

// f_005c7258: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005c7258 {

inline constexpr guest::Function<0x002fcbb0, u32(u32, u32, u32, u32)> call_002fcbb0;  // (from the original)
inline constexpr guest::Function<0x005c33d0, u32(u32, u32, u32, u32)> call_005c33d0;  // (from the original)
inline constexpr guest::Function<0x00660d14, u32(u32, u32, u32, u32)> call_00660d14;  // (from the original)
inline constexpr guest::Function<0x006bb91c, u32(u32, u32, u32, u32)> call_006bb91c;  // (from the original)

u32 f_005c7258(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 res = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r13 = guest::cpu()->r[13];
    *gptr<u32>(r13 + 0xffffffe8u) = u32(r3);  // (from the original)
    r13 = r13 - 0x18;  // (from the original)
    r4 = r0;
    r0 = *gptr<u32>(0xaaf14cu);  // (from the original)
    if (r0 == 0) {
        goto L_5c72d4;
    }
    r1 = 0x33aau;  // (from the original)
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_002fcbb0(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = r4;
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_006bb91c(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r6 = 0u;
    r5 = r13;
    r0 = 4u;
    r1 = r6;
    guest::cpu()->r[13] = r13;
    r0 = call_005c33d0(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r3 = guest::cpu()->r[3];
    r4 = 0u;
    if (r0 == 0) {
        goto L_5c72c8;
    }
    res = u32(*gptr<u8>(r0 + 0x8c5u)) << 0x1a >> 0x1f;  // (from the original)
    r1 = res;
    if (res != 0) {
        goto L_5c72c8;
    }
    r2 = r6;
    r1 = r5;
    guest::cpu()->r[13] = r13;
    r0 = call_00660d14(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r4 = r0;
L_5c72c8:;
    r0 = r4;
L_5c72d4:;
    r13 = r13 + 0x18;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_005c7258
GUEST_EXPORT(0x005c7258, d_005c7258::f_005c7258);

// f_005c7564: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005c7564 {

inline constexpr guest::Function<0x002fc934, u32(u32, u32, u32, u32)> call_002fc934;  // (from the original)
inline constexpr guest::Function<0x002fcaf4, u32(u32, u32, u32, u32)> call_002fcaf4;  // (from the original)
inline constexpr guest::Function<0x002fcbb0, u32(u32, u32, u32, u32)> call_002fcbb0;  // (from the original)
inline constexpr guest::Function<0x005c33d0, u32(u32, u32, u32, u32)> call_005c33d0;  // (from the original)
inline constexpr guest::Function<0x005c7e48, u32(u32, u32, u32, u32)> call_005c7e48;  // (from the original)
inline constexpr guest::Function<0x0066ac8c, u32(u32, u32, u32, u32)> call_0066ac8c;  // (from the original)
inline constexpr guest::Function<0x006bb91c, u32(u32, u32, u32, u32)> call_006bb91c;  // (from the original)
inline constexpr guest::Function<0x0070bd0c, u32(u32, u32, u32, u32)> call_0070bd0c;  // (from the original)
inline constexpr guest::Function<0x00712838, u32(u32, u32, u32, u32)> call_00712838;  // (from the original)
inline constexpr guest::Function<0x0076ab28, u32(u32, u32, u32, u32)> call_0076ab28;  // (from the original)

u32 f_005c7564(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 res = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r9 = guest::cpu()->r[9];
    u32 r13 = guest::cpu()->r[13];
    u32 zf = 0;
    r13 = r13 - 0x38u;  // (from the original)
    r7 = r1;
    r6 = r13 + 8u;
    r4 = r0;
    if (r0 >= 0xau) {  // (from the original)
        goto L_5c761c;
    }
    r5 = 0xaaef18u;  // (from the original)
    r0 = *gptr<u32>(r5 + 0x234u);  // (from the original)
    if (r0 == 0) {
        goto L_5c761c;
    }
    r1 = r4;
    r0 = r0 + 0x2cu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00712838(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = u32(*gptr<u8>(r0 + 0x69u));  // (from the original)
    r1 = r0 - 6u;
    if (u32(r1 >= 1u) && !u32(r1 == 1u)) {
        goto L_5c7634;
    }
    r0 = *gptr<u32>(r5 + 0x234u);  // (from the original)
    if (r0 == 0) {
        goto L_5c761c;
    }
    r1 = r4;
    r0 = r0 + 0x2cu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00712838(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0 = call_0070bd0c(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    zf = r0 == 6u;
    if (zf) {
        r1 = 0x33abu;  // (from the original)
    } else {
        r1 = 0x33adu;  // (from the original)
        zf = r0 == 7u;
    }
    if (!zf) {
        if (r0 == 0xbu) {  // (from the original)
            r1 = 0x33acu;  // (from the original)
        }
    }
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_002fcbb0(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = r4;
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_006bb91c(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = r13;
    r0 = r6;
    guest::cpu()->r[13] = r13;
    r0 = call_002fc934(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    goto L_5c764c;
L_5c761c:;
    r1 = 0x95bfdcu;  // (from the original)
    r0 = r6;
    guest::cpu()->r[13] = r13;
    r0 = call_002fc934(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    goto L_5c764c;
L_5c7634:;
    if (u32(r0 >= 5u) && !u32(r0 == 5u)) {
        guest::preempt();
        goto L_5c761c;
    }
    r2 = 0xcu;  // (from the original)
    r1 = r4;
    r0 = r6;
    guest::cpu()->r[13] = r13;
    r0 = call_005c7e48(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
L_5c764c:;
    r0 = r13 + 8u;
    guest::cpu()->r[13] = r13;
    r0 = call_002fcaf4(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        r0 = r13 + 8u;
        guest::cpu()->r[13] = r13;
        r0 = call_0076ab28(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r6 = 0u;
        r8 = 1u;
        if (r0 == 1u) {
            goto L_5c7694;
        }
        if (r0 == 3u) {
            goto L_5c76f4;
        }
    }
    r0 = 0u;
    r13 = r13 + 0x38u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
L_5c7694:;
    r0 = 4u;
    r1 = 0u;
    guest::cpu()->r[13] = r13;
    r0 = call_005c33d0(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    if (r0 == 0) {
        goto L_5c76bc;
    }
    res = u32(*gptr<u8>(r0 + 0x8c5u)) << 0x1a >> 0x1f;  // (from the original)
    r1 = res;
    if (res == 0) {
        goto L_5c76c4;
    }
L_5c76bc:;
    r4 = r6;
    goto L_5c77d8;
L_5c76c4:;
    r3 = 0u;
    r2 = 1u;
    *gptr<u32>(r13 + 0xcu) = u32(*gptr<u32>(r13 + 8u));  // (from the original)
    r1 = r13 + 0xcu;  // (from the original)
    *gptr<u8>(r13 + 0x10u) = u8(r6);  // (from the original)
    *gptr<u32>(r13 + 4u) = u32(r6);
    *gptr<u32>(r13) = u32(r8);
    guest::cpu()->r[13] = r13;
    r0 = call_0066ac8c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r4 = r0;
    goto L_5c77d8;
L_5c76f4:;
    r9 = 2u;
    if (r7 != 0) {
        r0 = 4u;
        r1 = 0u;
        guest::cpu()->r[13] = r13;
        r0 = call_005c33d0(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        if (r0 == 0) {
            guest::preempt();
            goto L_5c76bc;
        }
        res = u32(*gptr<u8>(r0 + 0x8c5u)) << 0x1a >> 0x1f;  // (from the original)
        r1 = res;
        if (res != 0) {
            guest::preempt();
            goto L_5c76bc;
        }
        r1 = *gptr<u32>(r13 + 8u);
        *gptr<u8>(r13 + 0x10u) = u8(r9);  // (from the original)
        *gptr<u32>(r13 + 0xcu) = u32(r1);  // (from the original)
        r3 = 0u;
        *gptr<u32>(r13 + 0x11u) = u32(*gptr<u32>(0x95bfdcu));  // (from the original)
        *gptr<u8>(r13 + 0x15u) = u8(4u);  // (from the original)
        r2 = 2u;
        r1 = r13 + 0xcu;  // (from the original)
        *gptr<u32>(r13 + 4u) = u32(r6);
        *gptr<u32>(r13) = u32(r8);
        guest::cpu()->r[13] = r13;
        r0 = call_0066ac8c(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r4 = r0;
        goto L_5c77d8;
    }
    r5 = r13 + 8u;
    r0 = 4u;
    r1 = 0u;
    guest::cpu()->r[13] = r13;
    r0 = call_005c33d0(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r4 = r0;
    if (r0 == 0) {
        guest::preempt();
        goto L_5c76bc;
    }
    res = u32(*gptr<u8>(r4 + 0x8c5u)) << 0x1a >> 0x1f;  // (from the original)
    if (res != 0) {
        guest::preempt();
        goto L_5c76bc;
    }
    r1 = r5;
    r0 = r13 + 0x14u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002fc934(r0, r1, r2, r3);
    r3 = 0u;
    r2 = 1u;
    *gptr<u32>(r13 + 0xcu) = u32(*gptr<u32>(r13 + 0x14u));  // (from the original)
    r1 = r13 + 0xcu;  // (from the original)
    r0 = r4;
    *gptr<u8>(r13 + 0x10u) = u8(r9);  // (from the original)
    *gptr<u32>(r13 + 4u) = u32(r6);
    *gptr<u32>(r13) = u32(r8);
    guest::cpu()->r[13] = r13;
    r0 = call_0066ac8c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r4 = r0;
L_5c77d8:;
    r0 = r4;
    r13 = r13 + 0x38u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_005c7564
GUEST_EXPORT(0x005c7564, d_005c7564::f_005c7564);

// f_005c7a8c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005c7a8c {

inline constexpr guest::Function<0x002fc934, u32(u32, u32, u32, u32)> call_002fc934;  // (from the original)
inline constexpr guest::Function<0x002fcbb0, u32(u32, u32, u32, u32)> call_002fcbb0;  // (from the original)
inline constexpr guest::Function<0x005c7e48, u32(u32, u32, u32, u32)> call_005c7e48;  // (from the original)
inline constexpr guest::Function<0x006bb91c, u32(u32, u32, u32, u32)> call_006bb91c;  // (from the original)
inline constexpr guest::Function<0x0070bd0c, u32(u32, u32, u32, u32)> call_0070bd0c;  // (from the original)
inline constexpr guest::Function<0x00712838, u32(u32, u32, u32, u32)> call_00712838;  // (from the original)

u32 f_005c7a8c(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 ea = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r13 = guest::cpu()->r[13];
    u32 zf = 0;
    *gptr<u32>(r13 + 0xffffffe8u) = u32(r3);  // (from the original)
    r13 = r13 - 0x18;  // (from the original)
    r6 = r0;
    r4 = r1;
    if (r1 >= 0xau) {  // (from the original)
        goto L_5c7b4c;
    }
    r5 = 0xaaef18u;  // (from the original)
    r0 = *gptr<u32>(r5 + 0x234u);  // (from the original)
    if (r0 == 0) {
        goto L_5c7b4c;
    }
    r0 = r0 + 0x2cu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00712838(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = u32(*gptr<u8>(r0 + 0x69u));  // (from the original)
    r1 = r0 - 6u;
    if (!(u32(r1 >= 1u) && !u32(r1 == 1u))) {
        r0 = *gptr<u32>(r5 + 0x234u);  // (from the original)
        if (r0 == 0) {
            goto L_5c7b4c;
        }
        r1 = r4;
        r0 = r0 + 0x2cu;  // (from the original)
        guest::cpu()->r[13] = r13;
        r0 = call_00712838(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        guest::cpu()->r[13] = r13;
        r0 = call_0070bd0c(r0, r1, r2, r3);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        zf = r0 == 6u;
        if (zf) {
            r1 = 0x33abu;  // (from the original)
        } else {
            r1 = 0x33adu;  // (from the original)
            zf = r0 == 7u;
        }
        if (!zf) {
            if (r0 == 0xbu) {  // (from the original)
                r1 = 0x33acu;  // (from the original)
            }
        }
        r0 = r13;
        guest::cpu()->r[13] = r13;
        r0 = call_002fcbb0(r0, r1, r2, r3);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r1 = r4;
        r0 = r13;
        guest::cpu()->r[13] = r13;
        r0 = call_006bb91c(r0, r1, r2, r3);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r1 = r13;
        r0 = r6;
        guest::cpu()->r[13] = r13;
        r0 = call_002fc934(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r0 = r13;
        r13 = r13 + 0x18;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    if (u32(r0 >= 5u) && !u32(r0 == 5u)) {
        goto L_5c7b4c;
    }
    r1 = r4;
    r0 = r6;
    ea = r13;
    r13 = r13 + 0x18;  // (from the original)
    r3 = *gptr<u32>(ea);
    r2 = 0xcu;  // (from the original)
    guest::cpu()->r[13] = r13;
    return call_005c7e48(r0, r1, r2, r3);
L_5c7b4c:;
    r0 = r6;
    ea = r13;
    r13 = r13 + 0x18;  // (from the original)
    r3 = *gptr<u32>(ea);
    r1 = 0x95bfdcu;  // (from the original)
    guest::cpu()->r[13] = r13;
    return call_002fc934(r0, r1, r2, r3);
}

}  // namespace d_005c7a8c
GUEST_EXPORT(0x005c7a8c, d_005c7a8c::f_005c7a8c);

// f_005c7d24: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005c7d24 {

inline constexpr guest::Function<0x005c33d0, u32(u32, u32, u32, u32)> call_005c33d0;  // (from the original)
inline constexpr guest::Function<0x0070ab24, u32(u32, u32, u32, u32)> call_0070ab24;  // (from the original)

u32 f_005c7d24() {
    u32 r0 = 0;
    u32 r1 = 0;
    r1 = 1u;
    r0 = 4u;
    guest::cpu()->r[13] -= 8u;
    r0 = call_005c33d0(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 == 0) {
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r1 = u32(*gptr<u8>(r0 + 0x1a9u));  // (from the original)
    if (r1 != 0x75u) {  // (from the original)
        r0 = 0u;
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r1 = 0u;
    r0 = r0 + 0x1b4u;  // (from the original)
    r0 = call_0070ab24(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 != 0) {
        r0 = 1u;
    }
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_005c7d24
GUEST_EXPORT(0x005c7d24, d_005c7d24::f_005c7d24);

// f_005c7d64: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005c7d64 {

inline constexpr guest::Function<0x005c33d0, u32(u32, u32, u32, u32)> call_005c33d0;  // (from the original)
inline constexpr guest::Function<0x006739b8, u32(u32, u32, u32, u32)> call_006739b8;  // (from the original)

u32 f_005c7d64(u32 r0_unused, u32 r1_unused, u32 r2, u32 r3) {
    u32 ea = 0;
    u32 res = 0;
    u32 r0 = 0;
    u32 r1 = 0;
    u32 r12 = 0;
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 0x18u;  // (from the original)
    r0 = 4u;
    r1 = 0u;
    guest::cpu()->r[13] = r13;
    r0 = call_005c33d0(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    if (r0 == 0) {
        r13 = r13 + 0x18u;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    r2 = 5u;
    res = u32(*gptr<u8>(r0 + 0x8c5u)) << 0x1a >> 0x1f;  // (from the original)
    r1 = res;
    if (res != 0) {
        r0 = 0u;
        r13 = r13 + 0x18u;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    r1 = u32(*gptr<u8>(r0 + 0x1a9u));  // (from the original)
    if (r1 != 0xa4u) {  // (from the original)
        r0 = 0u;
        r13 = r13 + 0x18u;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    r1 = 0u;
    ea = r13 + 8u;
    *gptr<u32>(ea) = u32(r1);
    *gptr<u32>(ea + 4) = u32(2u);
    r12 = 1u;
    *gptr<u32>(r13 + 0x10u) = u32(r1);  // (from the original)
    *gptr<u32>(r13) = u32(r2);
    *gptr<u32>(r13 + 4) = u32(r12);
    r2 = r12;
    r3 = *gptr<u32>(0x886cacu);  // (from the original)
    r1 = 0x12u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_006739b8(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r13 = r13 + 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_005c7d64
GUEST_EXPORT(0x005c7d64, d_005c7d64::f_005c7d64);

// f_005c80b4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005c80b4 {

inline constexpr guest::Function<0x005c33d0, u32(u32, u32, u32, u32)> call_005c33d0;  // (from the original)

u32 f_005c80b4(u32 r0, u32 r1, u32 r2) {
    u32 res = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 zf = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r4 = r0;
    r5 = r1;
    r0 = r1;
    r1 = 1u;
    r0 = call_005c33d0(r0, r1, r2, guest::cpu()->r[3]);
    r2 = guest::cpu()->r[2];
    if (r0 != 0) {
        r1 = u32(*gptr<u8>(r0 + 0x1a9u));  // (from the original)
        zf = r1 == 0x7cu;  // (from the original)
        if (!zf) {
            zf = r1 == 0x7fu;  // (from the original)
        }
        if (!zf) {
            zf = r1 == 0xaeu;  // (from the original)
        }
        if (zf) {
            goto L_5c8114;
        }
    }
    r1 = 1u;
    r0 = r5;
    r0 = call_005c33d0(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 == 0) {
        goto L_5c8110;
    }
    r1 = u32(*gptr<u8>(r0 + 0x1a9u));  // (from the original)
    if (r1 == 0xafu) {  // (from the original)
        goto L_5c8138;
    }
L_5c810c:;
    r0 = 0u;
L_5c8110:;
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
L_5c8114:;
    if (r4 == 0) {
        goto L_5c8168;
    }
L_5c811c:;
    *gptr<u32>(r4) = u32(*gptr<u32>(r0 + 0x14u));  // (from the original)
    r1 = *gptr<u32>(r0 + 0x18u);  // (from the original)
    *gptr<u32>(r4 + 4u) = u32(r1);
    *gptr<u32>(r4 + 8u) = u32(*gptr<u32>(r0 + 0x1cu));  // (from the original)
    goto L_5c8168;
L_5c8138:;
    r1 = u32(*gptr<u8>(r0 + 0x8c7u));  // (from the original)
    if ((r1 & 1u) == 0) {
        guest::preempt();
        goto L_5c810c;
    }
    res = u32(*gptr<u8>(r0 + 0x8c5u)) << 0x19 >> 0x1f;  // (from the original)
    if (res != 0) {
        guest::preempt();
        goto L_5c810c;
    }
    res = r1 << 0x1d >> 0x1f;  // (from the original)
    r1 = res;
    if (res != 0) {
        guest::preempt();
        goto L_5c810c;
    }
    if (r4 != 0) {
        guest::preempt();
        goto L_5c811c;
    }
L_5c8168:;
    r0 = 1u;
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_005c80b4
GUEST_EXPORT(0x005c80b4, d_005c80b4::f_005c80b4);

// f_005c8170: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005c8170 {

inline constexpr guest::Function<0x005c33d0, u32(u32, u32, u32, u32)> call_005c33d0;  // (from the original)
inline constexpr guest::Function<0x00687fb4, u32(u32, u32, u32, u32)> call_00687fb4;  // (from the original)

u32 f_005c8170(u32 r0) {
    u32 res = 0;
    u32 r1 = 0;
    u32 r4 = guest::cpu()->r[4];
    guest::cpu()->r[13] -= 8u;
    r4 = r0;
    r0 = 4u;
    r1 = 0u;
    r0 = call_005c33d0(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 == 0) {
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    res = u32(*gptr<u8>(r0 + 0x8c5u)) << 0x1a >> 0x1f;  // (from the original)
    r1 = res;
    if (res != 0) {
        r0 = 0u;
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r1 = r4;
    r0 = call_00687fb4(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 != 0) {
        r0 = 1u;
    }
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_005c8170
GUEST_EXPORT(0x005c8170, d_005c8170::f_005c8170);

// f_005c8244: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005c8244 {

inline constexpr guest::Function<0x005c33d0, u32(u32, u32, u32, u32)> call_005c33d0;  // (from the original)

u32 f_005c8244() {
    u32 res = 0;
    u32 r0 = 0;
    u32 r1 = 0;
    r1 = 0u;
    r0 = 4u;
    guest::cpu()->r[13] -= 8u;
    r0 = call_005c33d0(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 == 0) {
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r1 = u32(*gptr<u8>(r0 + 0x1a9u));  // (from the original)
    if (r1 != 0xafu) {  // (from the original)
        r0 = 0u;
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    if (u32(*gptr<u8>(r0 + 0x8d0u)) != 1u) {  // (from the original)
        r0 = 0u;
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r0 = 4u;
    r1 = 1u;
    r0 = call_005c33d0(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 != 0) {
        if ((u32(*gptr<u8>(r0 + 0x8c7u)) & 1u) != 0) {  // (from the original)
            r0 = 0u;
            guest::cpu()->r[13] += 8u;
            guest::cpu()->r[1] = r1;
            return r0;
        }
    }
    r0 = 4u;
    r1 = 1u;
    r0 = call_005c33d0(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 != 0) {
        res = u32(*gptr<u8>(r0 + 0x8c5u)) << 0x1a >> 0x1f;  // (from the original)
        if (res != 0) {
            r0 = 0u;
            guest::cpu()->r[13] += 8u;
            guest::cpu()->r[1] = r1;
            return r0;
        }
    }
    r0 = 4u;
    r1 = 1u;
    r0 = call_005c33d0(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 == 0) {
        r0 = 1u;
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    res = u32(*gptr<u8>(r0 + 0x8c7u)) << 0x1a >> 0x1f;  // (from the original)
    if (res != 0) {
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

}  // namespace d_005c8244
GUEST_EXPORT(0x005c8244, d_005c8244::f_005c8244);

// f_005c8460: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005c8460 {

inline constexpr guest::Function<0x005c33d0, u32(u32, u32, u32, u32)> call_005c33d0;  // (from the original)
inline constexpr guest::Function<0x006739b8, u32(u32, u32, u32, u32)> call_006739b8;  // (from the original)

u32 f_005c8460(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 res = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r13 = guest::cpu()->r[13];
    r4 = r0;
    r5 = r1;
    r13 = r13 - 0x20u;  // (from the original)
    r0 = 4u;
    r1 = 0u;
    guest::cpu()->r[13] = r13;
    r0 = call_005c33d0(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    if (r0 == 0) {
        r13 = r13 + 0x20u;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    res = u32(*gptr<u8>(r0 + 0x8c5u)) << 0x19 >> 0x1f;  // (from the original)
    r1 = res;
    if (res == 0) {
        goto L_5c84a0;
    }
L_5c8494:;
    r0 = 0u;
    r13 = r13 + 0x20u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
L_5c84a0:;
    res = u32(*gptr<u8>(r0 + 0x8c7u)) << 0x1a >> 0x1f;  // (from the original)
    r1 = res;
    if (res != 0) {
        guest::preempt();
        goto L_5c8494;
    }
    r1 = 0u;
    r3 = r1;
    *gptr<u32>(r13 + 4u) = u32(r1);
    *gptr<u32>(r13 + 8u) = u32(r1);
    *gptr<u32>(r13 + 0xcu) = u32(r1);  // (from the original)
    *gptr<u32>(r13 + 0x10u) = u32(r1);  // (from the original)
    *gptr<u32>(r13) = u32(r1);
    r2 = r5;
    r1 = r4;
    guest::cpu()->r[13] = r13;
    r0 = call_006739b8(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r13 = r13 + 0x20u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_005c8460
GUEST_EXPORT(0x005c8460, d_005c8460::f_005c8460);

// f_005c8694: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005c8694 {

inline constexpr guest::Function<0x005c33d0, u32(u32, u32, u32, u32)> call_005c33d0;  // (from the original)

u32 f_005c8694() {
    u32 r0 = 0;
    u32 r1 = 0;
    u32 zf = 0;
    r1 = 0u;
    r0 = 4u;
    guest::cpu()->r[13] -= 8u;
    r0 = call_005c33d0(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 == 0) {
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r1 = u32(*gptr<u8>(r0 + 0x1a9u));  // (from the original)
    if (r1 != 0xafu) {  // (from the original)
        if (r1 == 0xe3u) {  // (from the original)
            goto L_5c86e0;
        }
        r0 = 0u;
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r1 = u32(*gptr<u16>(0x5c4u + r0));  // (from the original)
    zf = r1 == 0;
    if (zf) {
        zf = u32(*gptr<u8>(r0 + 0x8cau)) == 0x2eu;  // (from the original)
    }
    if (!zf) {
        r0 = 0u;
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r0 = 1u;
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1;
    return r0;
L_5c86e0:;
    if (u32(*gptr<u16>(r0 + 0x5c0u)) == 0) {  // (from the original)
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

}  // namespace d_005c8694
GUEST_EXPORT(0x005c8694, d_005c8694::f_005c8694);

// f_005c8710: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005c8710 {

inline constexpr guest::Function<0x0027ab40, u32(u32, u32, u32, u32)> call_0027ab40;  // (from the original)
inline constexpr guest::Function<0x002fdf00, u32(u32, u32, u32, u32)> call_002fdf00;  // (from the original)
inline constexpr guest::Function<0x00305f44, u32(u32, u32, u32, u32)> call_00305f44;  // (from the original)
inline constexpr guest::Function<0x005c7c24, u32(u32, u32, u32, u32)> call_005c7c24;  // (from the original)

u32 f_005c8710(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = guest::cpu()->r[4];
    guest::cpu()->r[13] -= 8u;
    r0 = call_00305f44(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = 0xa84790u;  // (from the original)
    r4 = u32(*gptr<u8>((r0 & 3u) + r1 + 0x29200u));  // (from the original)
    r0 = r4;
    r0 = call_002fdf00(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        r4 = 8u;
    }
    r0 = r4;
    r0 = call_0027ab40(r0, r1, r2, r3);
    r3 = 0x95bfdcu;  // (from the original)
    guest::cpu()->r[13] += 8u;
    if (r0 == 0) {
        r1 = 9u;
    } else {
        r1 = 8u;
    }
    r2 = 0x1cu;  // (from the original)
    r0 = 0u;
    return call_005c7c24(r0, r1, r2, r3);
}

}  // namespace d_005c8710
GUEST_EXPORT(0x005c8710, d_005c8710::f_005c8710);

// f_005c87e4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005c87e4 {

inline constexpr guest::Function<0x002f74c8, u32(u32, u32, u32, u32)> call_002f74c8;  // (from the original)
inline constexpr guest::Function<0x005b6a10, u32(u32, u32, u32, u32)> call_005b6a10;  // (from the original)
inline constexpr guest::Function<0x00607bdc, u32(u32, u32, u32, u32)> call_00607bdc;  // (from the original)

u32 f_005c87e4(u32 r0, u32 r1) {
    u32 res = 0;
    u32 r4 = guest::cpu()->r[4];
    guest::cpu()->r[13] -= 8u;
    r0 = call_00607bdc(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 != 0) {
        r0 = 0u;
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r0 = 0xaaf14cu;  // (from the original)
    r4 = *gptr<u32>(r0);
    if (r4 == 0) {
        r0 = 0u;
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r0 = call_002f74c8(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r0 = call_005b6a10(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 == 0) {
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r0 = u32(*gptr<u8>(0x8f7fu + r4));  // (from the original)
    res = r0 >> 7;
    r1 = res;
    if (res != 0) {
        r0 = 1u;
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    *gptr<u8>(0x8f7fu + r4) = u8(r0 | 0x80u);  // (from the original)
    r0 = 0xaadad4u;  // (from the original)
    r1 = u32(*gptr<u8>(r0)) | 4u;
    *gptr<u8>(r0) = u8(r1);
    r0 = 1u;
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_005c87e4
GUEST_EXPORT(0x005c87e4, d_005c87e4::f_005c87e4);

// f_005c886c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005c886c {


u32 f_005c886c() {
    u32 res = 0;
    u32 r0 = 0;
    u32 r1 = 0;
    r0 = 0xaadad4u;  // (from the original)
    r1 = u32(*gptr<u8>(r0));
    res = r1 << 0x19 >> 0x1f;  // (from the original)
    if (res == 0) {
        r1 = r1 | 0x40u;  // (from the original)
        *gptr<u8>(r0) = u8(r1);
        r0 = 1u;
    } else {
        r0 = 0u;
    }
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_005c886c
GUEST_EXPORT(0x005c886c, d_005c886c::f_005c886c);

// f_005c8c20: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005c8c20 {

inline constexpr guest::Function<0x002f74c8, u32(u32, u32, u32, u32)> call_002f74c8;  // (from the original)
inline constexpr guest::Function<0x002f74e0, u32(u32, u32, u32, u32)> call_002f74e0;  // (from the original)
inline constexpr guest::Function<0x003170f8, u32(u32, u32, u32, u32)> call_003170f8;  // (from the original)
inline constexpr guest::Function<0x0052c268, u32(u32, u32, u32, u32)> call_0052c268;  // (from the original)
inline constexpr guest::Function<0x0052c878, u32(u32, u32, u32, u32)> call_0052c878;  // (from the original)
inline constexpr guest::Function<0x005c33d0, u32(u32, u32, u32, u32)> call_005c33d0;  // (from the original)
inline constexpr guest::Function<0x006d1f38, u32(u32, u32, u32, u32)> call_006d1f38;  // (from the original)
inline constexpr guest::Function<0x00723af8, u32(u32, u32, u32, u32)> call_00723af8;  // (from the original)
inline constexpr guest::Function<0x00763818, u32(u32, u32, u32, u32)> call_00763818;  // (from the original)

u32 f_005c8c20(u32 r0) {
    u32 b = 0;
    u32 res = 0;
    u32 r1 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 zf = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r6 = r0;
    r1 = 0u;
    r0 = 4u;
    r0 = call_005c33d0(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r4 = r0;
    if (r0 == 0) {
        goto L_5c8cbc;
    }
    r0 = call_00763818(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r5 = r0;
    if (r0 == 0) {
        goto L_5c8cbc;
    }
    r0 = call_002f74c8(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = r0;
    r0 = 0x10u;  // (from the original)
    r0 = call_002f74e0(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 != 0) {
        goto L_5c8cb8;
    }
    res = u32(*gptr<u8>(0xaadad5u)) << 0x1b >> 0x1f;  // (from the original)
    if (res != 0) {
        goto L_5c8cb8;
    }
    r0 = u32(*gptr<u8>(r5 + 6u));
    b = 5u;
    r1 = b;
    b = r0 >> 4;
    if (!u32(r1 >= b) || u32(r1 == b)) {
        goto L_5c8cb8;
    }
    r0 = r0 >> 4;
    if (r0 == 3u) {
        goto L_5c8cc0;
    }
    if (r0 != 4u) {
        goto L_5c8cbc;
    }
    if (r6 != 0) {
        goto L_5c8cbc;
    }
    r1 = 0u;
    r0 = 1u;
    r0 = call_003170f8(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 != 0) {
        goto L_5c8f04;
    }
    goto L_5c8eec;
L_5c8cb8:;
    r0 = 0u;
L_5c8cbc:;
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
L_5c8cc0:;
    r1 = 0u;
    r0 = 1u;
    r0 = call_003170f8(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 != 0) {
        goto L_5c8d08;
    }
    r1 = 0u;
    r0 = 2u;
    r0 = call_003170f8(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 != 0) {
        goto L_5c8d08;
    }
    r1 = 0u;
    r0 = 0xau;  // (from the original)
    r0 = call_003170f8(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 == 0) {
        goto L_5c8ea0;
    }
L_5c8d08:;
    r0 = call_0052c268(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r4 = r0;
    r0 = call_002f74c8(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    zf = r0 == 0;
    if (!zf) {
        zf = r4 == 0;
    }
    if (!zf) {
        r1 = u32(*gptr<u16>(0x886f72u));  // (from the original)
        if (u32(*gptr<u16>(r4 + 0xcu)) == r1) {  // (from the original)
            goto L_5c8ee4;
        }
    }
    r0 = 0x3bu;  // (from the original)
    r0 = call_006d1f38(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 != 0) {
        goto L_5c8ee4;
    }
    r0 = 0x37u;  // (from the original)
    r0 = call_006d1f38(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 != 0) {
        goto L_5c8ee4;
    }
    r0 = 0x38u;  // (from the original)
    r0 = call_006d1f38(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 != 0) {
        goto L_5c8ee4;
    }
    r0 = 0x39u;  // (from the original)
    r0 = call_006d1f38(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 != 0) {
        goto L_5c8ee4;
    }
    r0 = 0x3au;  // (from the original)
    r0 = call_006d1f38(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 != 0) {
        goto L_5c8ee4;
    }
    r0 = 0x87u;  // (from the original)
    r0 = call_006d1f38(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 != 0) {
        goto L_5c8ee4;
    }
    r0 = 0x7cu;  // (from the original)
    r0 = call_006d1f38(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 != 0) {
        goto L_5c8ee4;
    }
    r0 = 0x79u;  // (from the original)
    r0 = call_006d1f38(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 != 0) {
        goto L_5c8ee4;
    }
    r0 = 0x47u;  // (from the original)
    r0 = call_006d1f38(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 != 0) {
        goto L_5c8ee4;
    }
    r0 = 0x48u;  // (from the original)
    r0 = call_006d1f38(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 != 0) {
        goto L_5c8ee4;
    }
    r0 = 0x2au;  // (from the original)
    r0 = call_006d1f38(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 != 0) {
        goto L_5c8ee4;
    }
    r0 = 0x62u;  // (from the original)
    r0 = call_006d1f38(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 != 0) {
        goto L_5c8ee4;
    }
    r0 = 0x63u;  // (from the original)
    r0 = call_006d1f38(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 != 0) {
        goto L_5c8ee4;
    }
    r0 = 0x1fu;  // (from the original)
    r0 = call_006d1f38(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 != 0) {
        goto L_5c8ee4;
    }
    r0 = 0x6au;  // (from the original)
    r0 = call_006d1f38(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 != 0) {
        goto L_5c8ee4;
    }
    r0 = 0x6bu;  // (from the original)
    r0 = call_006d1f38(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 != 0) {
        goto L_5c8ee4;
    }
    r0 = call_0052c878(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 == 0) {
        goto L_5c8f04;
    }
    r1 = *gptr<u32>(*gptr<u32>(r0) + 0x44u);  // (from the original)
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    return guest::call_address<u32>(r1, r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
L_5c8ea0:;
    r1 = 0u;
    r0 = 7u;
    r0 = call_003170f8(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 != 0) {
        goto L_5c8ee4;
    }
    r1 = 0u;
    r0 = 8u;
    r0 = call_003170f8(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 != 0) {
        goto L_5c8ee4;
    }
    r0 = r4 + 0x68u;  // (from the original)
    r0 = call_00723af8(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 == 0) {
        guest::preempt();
        goto L_5c8cbc;
    }
L_5c8ee4:;
    r0 = 1u;
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
L_5c8eec:;
    r1 = 0u;
    r0 = 2u;
    r0 = call_003170f8(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 == 0) {
        guest::preempt();
        goto L_5c8cbc;
    }
L_5c8f04:;
    r0 = 2u;
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_005c8c20
GUEST_EXPORT(0x005c8c20, d_005c8c20::f_005c8c20);

// f_005c8fb8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005c8fb8 {


u32 f_005c8fb8(u32 r0, u32 r1, u32 r2) {
    u32 ea = 0;
    u32 v = 0;
    u32 r3 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r12 = 0;
    u32 r13 = guest::cpu()->r[13];
    if (r2 == 0) {
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[4] = r4;
        guest::cpu()->r[13] = r13;
        return r0;
    } else {
        r3 = r0 + 0x180u;  // (from the original)
        r12 = 0u;
    }
    ea = r13 - 4u;
    *gptr<u32>(ea) = u32(r4);
    r13 = ea;
L_5c8fcc:;
    if (u32(*gptr<u8>(r3)) != 0) {
        r12 = r12 + 1u;
        r3 = r3 + 1u;
        r0 = r0 + 0xcu;  // (from the original)
        if (r12 < 0x20u) {  // (from the original)
            guest::preempt();
            goto L_5c8fcc;
        }
        v = *gptr<u32>(r13);
        r13 = r13 + 4u;
        r4 = v;
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[4] = r4;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    *gptr<u32>(r0) = u32(*gptr<u32>(r1));
    *gptr<u32>(r0 + 4u) = u32(*gptr<u32>(r1 + 4u));
    r1 = *gptr<u32>(r1 + 8u);
    *gptr<u32>(r0 + 8u) = u32(r1);
    *gptr<u8>(r3) = u8(r2);
    v = *gptr<u32>(r13);
    r13 = r13 + 4u;
    r4 = v;
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[4] = r4;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_005c8fb8
GUEST_EXPORT(0x005c8fb8, d_005c8fb8::f_005c8fb8);

// f_005c9090: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005c9090 {

inline constexpr guest::Function<0x00301444, u32(u32, u32, u32, u32)> call_00301444;  // (from the original)

u32 f_005c9090(u32 r0, u32 r1_unused, u32 r2_unused, u32 r3, float S0) {
    u32 r1 = 0;
    u32 r2 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r13 = guest::cpu()->r[13];
    *gptr<u32>(r13 + 0xffffffe8u) = u32(r3);  // (from the original)
    r13 = r13 - 0x18;  // (from the original)
    r4 = r0;
    r2 = r0 + 0xeu;  // (from the original)
    r0 = r0 + 2u;
    r6 = 0u;
    if (r0 >= r2) {
        goto L_5c90c4;
    }
    do {
L_5c90ac:;
        r1 = r0 + 1u;
        *gptr<u8>(r0) = u8(r6);
        r0 = r0 + 6u;
        *gptr<u16>(r13) = u16(r6);
        *gptr<u16>(r1) = u16(r6);
        guest::preempt();
    } while (r0 < r2);
L_5c90c4:;
    r0 = 0u;
    *gptr<u8>(r4) = u8(r0);
    *gptr<u8>(r4 + 0xeu) = u8(r0);  // (from the original)
    r5 = r4 + 0x1cu;  // (from the original)
    *gptr<u32>(r4 + 0xfu) = u32(*gptr<u32>(0x95bfdcu));  // (from the original)
    *gptr<u8>(r4 + 0x13u) = u8(r6);  // (from the original)
    *gptr<u8>(r4 + 0x14u) = u8(r6);  // (from the original)
    *gptr<u16>(r4 + 0x16u) = u16(u32(*gptr<u16>(r4 + 0x16u)) & ~0x1fu);  // (from the original)
    r0 = r5;
    r1 = 0x620u;  // (from the original)
    *gptr<u32>(r4 + 0x18u) = u32(r6);  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    r0 = call_00301444(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
    *gptr<u8>(r5 + 0x620u) = u8(r6);  // (from the original)
    r5 = r4 + 0x63du;  // (from the original)
    r0 = r5;
    r1 = 0x620u;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    r0 = call_00301444(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
    *gptr<u8>(r5 + 0x620u) = u8(r6);  // (from the original)
    r5 = r4 + 0xc5eu;  // (from the original)
    r0 = r5;
    r1 = 0x620u;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    r0 = call_00301444(r0, r1, r2, r3);
    S0 = std::bit_cast<float>(*gptr<u32>(0x5c9198u));  // (from the original)
    r2 = r4 + 0x1280u;  // (from the original)
    r1 = 0u;
    *gptr<u8>(r5 + 0x620u) = u8(r6);  // (from the original)
    do {
L_5c9144:;
        r3 = r2 + r1;
        r0 = r2 + (r1 + (r1 << 1) << 2);
        r1 = r1 + 1u;
        *gptr<u32>(r0) = u32(std::bit_cast<u32>(S0));
        *gptr<u32>(r0 + 4u) = u32(std::bit_cast<u32>(S0));
        *gptr<u32>(r0 + 8u) = u32(std::bit_cast<u32>(S0));
        *gptr<u8>(r3 + 0x180u) = u8(r6);  // (from the original)
        guest::preempt();
    } while (r1 < 0x20u);  // (from the original)
    r0 = 0xae5658u;  // (from the original)
    r4 = r4 + 0x1430u;  // (from the original)
    *gptr<u32>(r4) = u32(*gptr<u32>(r0));
    r1 = *gptr<u32>(r0 + 4u);
    *gptr<u32>(r4 + 4u) = u32(r1);
    r0 = *gptr<u32>(r0 + 8u);
    *gptr<u32>(r4 + 8u) = u32(r0);
    r13 = r13 + 0x18;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    return r0;
}

}  // namespace d_005c9090
GUEST_EXPORT(0x005c9090, d_005c9090::f_005c9090);

// f_005c91a0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005c91a0 {


u32 f_005c91a0(u32 r0, u32 r1) {
    if (r0 >= 4u) {
        r0 = 1u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r1 = 0xa82000u;  // (from the original)
    r0 = u32(s32(s8(*gptr<u8>(r1 + r0))));
    if (s32(r0) >= s32(4u)) {
        r0 = ~0u;
    }
    r0 = u32(s32(r0) >> 0x1f) + 1u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_005c91a0
GUEST_EXPORT(0x005c91a0, d_005c91a0::f_005c91a0);

// f_005c9754: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005c9754 {


u32 f_005c9754(u32 r0) {
    u32 r1 = 0;
    u32 r13 = guest::cpu()->r[13];
    if (r0 >= 0xfcu) {  // (from the original)
        r0 = 0x12u;  // (from the original)
    }
    r13 = r13 - 4u;
    r0 = 0x88b948u + (r0 << 2);  // (from the original)
    *gptr<u8>(r13) = u8(u32(*gptr<u8>(r0 + 2u)) - u32(*gptr<u8>(r0)) + 1u);
    r1 = u32(*gptr<u8>(r0 + 3u));
    *gptr<u8>(r13 + 1u) = u8(r1 - u32(*gptr<u8>(r0 + 1u)) + 1u);
    r0 = u32(*gptr<u16>(r13));
    r13 = r13 + 4u;
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_005c9754
GUEST_EXPORT(0x005c9754, d_005c9754::f_005c9754);

// f_005c98a8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005c98a8 {

inline constexpr guest::Function<0x002fe7dd, u32(u32, u32, u32, u32)> call_002fe7dc;  // (from the original)

u32 f_005c98a8(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r12 = 0;
    u32 r14 = guest::cpu()->r[14];
    guest::cpu()->r[13] -= 0x18u;  // (from the original)
    r4 = r0;
    if (r0 >= 0xfcu) {  // (from the original)
        r0 = 0x887402u;  // (from the original)
        goto L_5ca148;
    }
    r5 = 0xac3558u;  // (from the original)
    if ((*gptr<u32>(0x95b6e4u) & 1u) != 0) {  // (from the original)
        goto L_5ca144;
    }
    r0 = 0x95b6e4u;  // (from the original)
    r0 = call_002fe7dc(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    if (r0 == 0) {
        goto L_5ca144;
    }
    r12 = 0x886f02u;  // (from the original)
    r6 = 0x886f04u;  // (from the original)
    r1 = 0x886f06u;  // (from the original)
    r0 = 0x886f3au;  // (from the original)
    r3 = 0x886f56u;  // (from the original)
    r2 = 0x886f0cu;  // (from the original)
    *gptr<u16>(r5) = u16(u32(*gptr<u16>(r12)));
    r7 = 0x886f0eu;  // (from the original)
    r14 = 0x886f20u;  // (from the original)
    *gptr<u16>(r5 + 2u) = u16(u32(*gptr<u16>(r12)));
    *gptr<u16>(r5 + 4u) = u16(u32(*gptr<u16>(r12)));
    *gptr<u16>(r5 + 6u) = u16(u32(*gptr<u16>(r12)));
    *gptr<u16>(r5 + 8u) = u16(u32(*gptr<u16>(r6)));
    *gptr<u16>(r5 + 0xau) = u16(u32(*gptr<u16>(r6)));  // (from the original)
    *gptr<u16>(r5 + 0xcu) = u16(u32(*gptr<u16>(r6)));  // (from the original)
    *gptr<u16>(r5 + 0xeu) = u16(u32(*gptr<u16>(r6)));  // (from the original)
    *gptr<u16>(r5 + 0x10u) = u16(u32(*gptr<u16>(r1)));  // (from the original)
    *gptr<u16>(r5 + 0x12u) = u16(u32(*gptr<u16>(r1)));  // (from the original)
    *gptr<u16>(r5 + 0x14u) = u16(u32(*gptr<u16>(r1)));  // (from the original)
    *gptr<u16>(r5 + 0x16u) = u16(u32(*gptr<u16>(r1)));  // (from the original)
    *gptr<u16>(r5 + 0x18u) = u16(u32(*gptr<u16>(r1)));  // (from the original)
    *gptr<u16>(r5 + 0x1au) = u16(u32(*gptr<u16>(r1)));  // (from the original)
    *gptr<u16>(r5 + 0x1cu) = u16(u32(*gptr<u16>(r1)));  // (from the original)
    *gptr<u16>(r5 + 0x1eu) = u16(u32(*gptr<u16>(r1)));  // (from the original)
    *gptr<u16>(r5 + 0x20u) = u16(u32(*gptr<u16>(r1)));  // (from the original)
    *gptr<u16>(r5 + 0x22u) = u16(u32(*gptr<u16>(r1)));  // (from the original)
    *gptr<u16>(r5 + 0x24u) = u16(u32(*gptr<u16>(r0)));  // (from the original)
    *gptr<u16>(r5 + 0x26u) = u16(u32(*gptr<u16>(r0)));  // (from the original)
    *gptr<u16>(r5 + 0x28u) = u16(u32(*gptr<u16>(r0)));  // (from the original)
    *gptr<u16>(r5 + 0x2au) = u16(u32(*gptr<u16>(r0)));  // (from the original)
    *gptr<u16>(r5 + 0x2cu) = u16(u32(*gptr<u16>(r0)));  // (from the original)
    *gptr<u16>(r5 + 0x2eu) = u16(u32(*gptr<u16>(r0)));  // (from the original)
    *gptr<u16>(r5 + 0x30u) = u16(u32(*gptr<u16>(r0)));  // (from the original)
    *gptr<u16>(r5 + 0x32u) = u16(u32(*gptr<u16>(r0)));  // (from the original)
    *gptr<u16>(r5 + 0x34u) = u16(u32(*gptr<u16>(r0)));  // (from the original)
    *gptr<u16>(r5 + 0x36u) = u16(u32(*gptr<u16>(r0)));  // (from the original)
    *gptr<u16>(r5 + 0x38u) = u16(u32(*gptr<u16>(r0)));  // (from the original)
    *gptr<u16>(r5 + 0x3au) = u16(u32(*gptr<u16>(r0)));  // (from the original)
    *gptr<u16>(r5 + 0x3cu) = u16(u32(*gptr<u16>(r0)));  // (from the original)
    *gptr<u16>(r5 + 0x3eu) = u16(u32(*gptr<u16>(r0)));  // (from the original)
    *gptr<u16>(r5 + 0x40u) = u16(u32(*gptr<u16>(r0)));  // (from the original)
    *gptr<u16>(r5 + 0x42u) = u16(u32(*gptr<u16>(r0)));  // (from the original)
    *gptr<u16>(r5 + 0x44u) = u16(u32(*gptr<u16>(r0)));  // (from the original)
    *gptr<u16>(r5 + 0x46u) = u16(u32(*gptr<u16>(r0)));  // (from the original)
    *gptr<u16>(r5 + 0x48u) = u16(u32(*gptr<u16>(r0)));  // (from the original)
    *gptr<u16>(r5 + 0x4au) = u16(u32(*gptr<u16>(r0)));  // (from the original)
    *gptr<u16>(r5 + 0x4cu) = u16(u32(*gptr<u16>(r0)));  // (from the original)
    *gptr<u16>(r5 + 0x4eu) = u16(u32(*gptr<u16>(r0)));  // (from the original)
    *gptr<u16>(r5 + 0x50u) = u16(u32(*gptr<u16>(r0)));  // (from the original)
    *gptr<u16>(r5 + 0x52u) = u16(u32(*gptr<u16>(r0)));  // (from the original)
    *gptr<u16>(r5 + 0x54u) = u16(u32(*gptr<u16>(r0)));  // (from the original)
    *gptr<u16>(r5 + 0x56u) = u16(u32(*gptr<u16>(r0)));  // (from the original)
    *gptr<u16>(r5 + 0x58u) = u16(u32(*gptr<u16>(r0)));  // (from the original)
    *gptr<u16>(r5 + 0x5au) = u16(u32(*gptr<u16>(r0)));  // (from the original)
    *gptr<u16>(r5 + 0x5cu) = u16(u32(*gptr<u16>(r0)));  // (from the original)
    *gptr<u16>(r5 + 0x5eu) = u16(u32(*gptr<u16>(r0)));  // (from the original)
    *gptr<u16>(r5 + 0x60u) = u16(u32(*gptr<u16>(r0)));  // (from the original)
    *gptr<u16>(r5 + 0x62u) = u16(u32(*gptr<u16>(r0)));  // (from the original)
    *gptr<u16>(r5 + 0x64u) = u16(u32(*gptr<u16>(r0)));  // (from the original)
    *gptr<u16>(r5 + 0x66u) = u16(u32(*gptr<u16>(r0)));  // (from the original)
    *gptr<u16>(r5 + 0x68u) = u16(u32(*gptr<u16>(r0)));  // (from the original)
    *gptr<u16>(r5 + 0x6au) = u16(u32(*gptr<u16>(r0)));  // (from the original)
    *gptr<u16>(r5 + 0x6cu) = u16(u32(*gptr<u16>(r0)));  // (from the original)
    *gptr<u16>(r5 + 0x6eu) = u16(u32(*gptr<u16>(r0)));  // (from the original)
    *gptr<u16>(r5 + 0x70u) = u16(u32(*gptr<u16>(r0)));  // (from the original)
    *gptr<u16>(r5 + 0x72u) = u16(u32(*gptr<u16>(r0)));  // (from the original)
    *gptr<u16>(r5 + 0x74u) = u16(u32(*gptr<u16>(r0)));  // (from the original)
    *gptr<u16>(r5 + 0x76u) = u16(u32(*gptr<u16>(r0)));  // (from the original)
    *gptr<u16>(r5 + 0x78u) = u16(u32(*gptr<u16>(r0)));  // (from the original)
    *gptr<u16>(r5 + 0x7au) = u16(u32(*gptr<u16>(r0)));  // (from the original)
    *gptr<u16>(r5 + 0x7cu) = u16(u32(*gptr<u16>(r0)));  // (from the original)
    *gptr<u16>(r5 + 0x7eu) = u16(u32(*gptr<u16>(r0)));  // (from the original)
    *gptr<u16>(r5 + 0x80u) = u16(u32(*gptr<u16>(r0)));  // (from the original)
    *gptr<u16>(r5 + 0x82u) = u16(u32(*gptr<u16>(r0)));  // (from the original)
    *gptr<u16>(r5 + 0x84u) = u16(u32(*gptr<u16>(r3)));  // (from the original)
    *gptr<u16>(r5 + 0x86u) = u16(u32(*gptr<u16>(r3)));  // (from the original)
    *gptr<u16>(r5 + 0x88u) = u16(u32(*gptr<u16>(r3)));  // (from the original)
    *gptr<u16>(r5 + 0x8au) = u16(u32(*gptr<u16>(r3)));  // (from the original)
    *gptr<u16>(r5 + 0x8cu) = u16(u32(*gptr<u16>(r3)));  // (from the original)
    r6 = 0x886f62u;  // (from the original)
    *gptr<u16>(r5 + 0x8eu) = u16(u32(*gptr<u16>(r3)));  // (from the original)
    *gptr<u16>(r5 + 0x90u) = u16(u32(*gptr<u16>(r3)));  // (from the original)
    *gptr<u16>(r5 + 0x92u) = u16(u32(*gptr<u16>(r3)));  // (from the original)
    *gptr<u16>(r5 + 0x94u) = u16(u32(*gptr<u16>(r3)));  // (from the original)
    *gptr<u16>(r5 + 0x96u) = u16(u32(*gptr<u16>(r3)));  // (from the original)
    *gptr<u16>(r5 + 0x98u) = u16(u32(*gptr<u16>(r2)));  // (from the original)
    *gptr<u16>(r5 + 0x9au) = u16(u32(*gptr<u16>(r2)));  // (from the original)
    *gptr<u16>(r5 + 0x9cu) = u16(u32(*gptr<u16>(r2)));  // (from the original)
    *gptr<u16>(r5 + 0x9eu) = u16(u32(*gptr<u16>(0x886f16u)));  // (from the original)
    *gptr<u16>(r5 + 0xa0u) = u16(u32(*gptr<u16>(r7)));  // (from the original)
    *gptr<u16>(r5 + 0xa2u) = u16(u32(*gptr<u16>(r7)));  // (from the original)
    *gptr<u16>(r5 + 0xa4u) = u16(u32(*gptr<u16>(r7)));  // (from the original)
    *gptr<u16>(r5 + 0xa6u) = u16(u32(*gptr<u16>(r7)));  // (from the original)
    *gptr<u16>(r5 + 0xa8u) = u16(u32(*gptr<u16>(r2)));  // (from the original)
    *gptr<u16>(r5 + 0xaau) = u16(u32(*gptr<u16>(r2)));  // (from the original)
    *gptr<u16>(r5 + 0xacu) = u16(u32(*gptr<u16>(r2)));  // (from the original)
    *gptr<u16>(r5 + 0xaeu) = u16(u32(*gptr<u16>(r2)));  // (from the original)
    *gptr<u16>(r5 + 0xb0u) = u16(u32(*gptr<u16>(0x886f3eu)));  // (from the original)
    *gptr<u16>(r5 + 0xb2u) = u16(u32(*gptr<u16>(0x886f18u)));  // (from the original)
    *gptr<u16>(r5 + 0xb4u) = u16(u32(*gptr<u16>(0x886f60u)));  // (from the original)
    *gptr<u16>(r5 + 0xb6u) = u16(u32(*gptr<u16>(0x886f12u)));  // (from the original)
    *gptr<u16>(r5 + 0xb8u) = u16(u32(*gptr<u16>(r14)));  // (from the original)
    *gptr<u16>(r5 + 0xbau) = u16(u32(*gptr<u16>(0x886f26u)));  // (from the original)
    *gptr<u16>(r5 + 0xbcu) = u16(u32(*gptr<u16>(r2)));  // (from the original)
    *gptr<u16>(r5 + 0xbeu) = u16(u32(*gptr<u16>(r2)));  // (from the original)
    *gptr<u16>(r5 + 0xc0u) = u16(u32(*gptr<u16>(r2)));  // (from the original)
    *gptr<u16>(r5 + 0xc2u) = u16(u32(*gptr<u16>(r2)));  // (from the original)
    *gptr<u16>(r5 + 0xc4u) = u16(u32(*gptr<u16>(r2)));  // (from the original)
    *gptr<u16>(r5 + 0xc6u) = u16(u32(*gptr<u16>(0x886f1au)));  // (from the original)
    *gptr<u16>(r5 + 0xc8u) = u16(u32(*gptr<u16>(0x886f1cu)));  // (from the original)
    *gptr<u16>(r5 + 0xcau) = u16(u32(*gptr<u16>(0x886f22u)));  // (from the original)
    *gptr<u16>(r5 + 0xccu) = u16(u32(*gptr<u16>(r2)));  // (from the original)
    r0 = r5 + 0x100u;  // (from the original)
    r12 = 0x886f2cu;  // (from the original)
    r3 = 0x886f42u;  // (from the original)
    *gptr<u16>(r5 + 0xceu) = u16(u32(*gptr<u16>(r2)));  // (from the original)
    r1 = 0x886f28u;  // (from the original)
    *gptr<u16>(r5 + 0xd0u) = u16(u32(*gptr<u16>(r14)));  // (from the original)
    *gptr<u16>(r5 + 0xd2u) = u16(u32(*gptr<u16>(r2)));  // (from the original)
    *gptr<u16>(r5 + 0xd4u) = u16(u32(*gptr<u16>(0x886f5au)));  // (from the original)
    *gptr<u16>(r5 + 0xd6u) = u16(u32(*gptr<u16>(r2)));  // (from the original)
    *gptr<u16>(r5 + 0xd8u) = u16(u32(*gptr<u16>(r2)));  // (from the original)
    *gptr<u16>(r5 + 0xdau) = u16(u32(*gptr<u16>(r2)));  // (from the original)
    *gptr<u16>(r5 + 0xdcu) = u16(u32(*gptr<u16>(r2)));  // (from the original)
    *gptr<u16>(r5 + 0xdeu) = u16(u32(*gptr<u16>(r2)));  // (from the original)
    *gptr<u16>(r5 + 0xe0u) = u16(u32(*gptr<u16>(r2)));  // (from the original)
    *gptr<u16>(r5 + 0xe2u) = u16(u32(*gptr<u16>(r2)));  // (from the original)
    *gptr<u16>(r5 + 0xe4u) = u16(u32(*gptr<u16>(r2)));  // (from the original)
    *gptr<u16>(r5 + 0xe6u) = u16(u32(*gptr<u16>(r2)));  // (from the original)
    *gptr<u16>(r5 + 0xe8u) = u16(u32(*gptr<u16>(r2)));  // (from the original)
    *gptr<u16>(r5 + 0xeau) = u16(u32(*gptr<u16>(r2)));  // (from the original)
    *gptr<u16>(r5 + 0xecu) = u16(u32(*gptr<u16>(r2)));  // (from the original)
    *gptr<u16>(r5 + 0xeeu) = u16(u32(*gptr<u16>(r2)));  // (from the original)
    *gptr<u16>(r5 + 0xf0u) = u16(u32(*gptr<u16>(r2)));  // (from the original)
    *gptr<u16>(r5 + 0xf2u) = u16(u32(*gptr<u16>(r2)));  // (from the original)
    *gptr<u16>(r5 + 0xf4u) = u16(u32(*gptr<u16>(r2)));  // (from the original)
    *gptr<u16>(r5 + 0xf6u) = u16(u32(*gptr<u16>(r2)));  // (from the original)
    *gptr<u16>(r5 + 0xf8u) = u16(u32(*gptr<u16>(r2)));  // (from the original)
    *gptr<u16>(r5 + 0xfau) = u16(u32(*gptr<u16>(r2)));  // (from the original)
    *gptr<u16>(r5 + 0xfcu) = u16(u32(*gptr<u16>(r2)));  // (from the original)
    *gptr<u16>(r5 + 0xfeu) = u16(u32(*gptr<u16>(r6)));  // (from the original)
    *gptr<u16>(r0) = u16(u32(*gptr<u16>(r6)));
    *gptr<u16>(r0 + 2u) = u16(u32(*gptr<u16>(r12)));
    *gptr<u16>(r0 + 4u) = u16(u32(*gptr<u16>(r12)));
    *gptr<u16>(r0 + 6u) = u16(u32(*gptr<u16>(r12)));
    *gptr<u16>(r0 + 8u) = u16(u32(*gptr<u16>(r12)));
    *gptr<u16>(r0 + 0xau) = u16(u32(*gptr<u16>(r12)));  // (from the original)
    *gptr<u16>(r0 + 0xcu) = u16(u32(*gptr<u16>(r12)));  // (from the original)
    *gptr<u16>(r0 + 0xeu) = u16(u32(*gptr<u16>(r12)));  // (from the original)
    *gptr<u16>(r0 + 0x10u) = u16(u32(*gptr<u16>(r12)));  // (from the original)
    *gptr<u16>(r0 + 0x12u) = u16(u32(*gptr<u16>(r12)));  // (from the original)
    *gptr<u16>(r0 + 0x14u) = u16(u32(*gptr<u16>(r12)));  // (from the original)
    *gptr<u16>(r0 + 0x16u) = u16(u32(*gptr<u16>(r12)));  // (from the original)
    *gptr<u16>(r0 + 0x18u) = u16(u32(*gptr<u16>(r12)));  // (from the original)
    *gptr<u16>(r0 + 0x1au) = u16(u32(*gptr<u16>(0x886f2eu)));  // (from the original)
    *gptr<u16>(r0 + 0x1cu) = u16(u32(*gptr<u16>(0x886f32u)));  // (from the original)
    *gptr<u16>(r0 + 0x1eu) = u16(u32(*gptr<u16>(0x886f34u)));  // (from the original)
    *gptr<u16>(r0 + 0x20u) = u16(u32(*gptr<u16>(r3)));  // (from the original)
    *gptr<u16>(r0 + 0x22u) = u16(u32(*gptr<u16>(r3)));  // (from the original)
    *gptr<u16>(r0 + 0x24u) = u16(u32(*gptr<u16>(r3)));  // (from the original)
    *gptr<u16>(r0 + 0x26u) = u16(u32(*gptr<u16>(r3)));  // (from the original)
    *gptr<u16>(r0 + 0x28u) = u16(u32(*gptr<u16>(r3)));  // (from the original)
    *gptr<u16>(r0 + 0x2au) = u16(u32(*gptr<u16>(r3)));  // (from the original)
    *gptr<u16>(r0 + 0x2cu) = u16(u32(*gptr<u16>(r3)));  // (from the original)
    *gptr<u16>(r0 + 0x2eu) = u16(u32(*gptr<u16>(r3)));  // (from the original)
    *gptr<u16>(r0 + 0x30u) = u16(u32(*gptr<u16>(r3)));  // (from the original)
    *gptr<u16>(r0 + 0x32u) = u16(u32(*gptr<u16>(r3)));  // (from the original)
    *gptr<u16>(r0 + 0x34u) = u16(u32(*gptr<u16>(r3)));  // (from the original)
    *gptr<u16>(r0 + 0x36u) = u16(u32(*gptr<u16>(r3)));  // (from the original)
    *gptr<u16>(r0 + 0x38u) = u16(u32(*gptr<u16>(r3)));  // (from the original)
    *gptr<u16>(r0 + 0x3au) = u16(u32(*gptr<u16>(r3)));  // (from the original)
    *gptr<u16>(r0 + 0x3cu) = u16(u32(*gptr<u16>(r3)));  // (from the original)
    *gptr<u16>(r0 + 0x3eu) = u16(u32(*gptr<u16>(r3)));  // (from the original)
    *gptr<u16>(r0 + 0x40u) = u16(u32(*gptr<u16>(r3)));  // (from the original)
    *gptr<u16>(r0 + 0x42u) = u16(u32(*gptr<u16>(r3)));  // (from the original)
    *gptr<u16>(r0 + 0x44u) = u16(u32(*gptr<u16>(r3)));  // (from the original)
    *gptr<u16>(r0 + 0x46u) = u16(u32(*gptr<u16>(r3)));  // (from the original)
    *gptr<u16>(r0 + 0x48u) = u16(u32(*gptr<u16>(r3)));  // (from the original)
    *gptr<u16>(r0 + 0x4au) = u16(u32(*gptr<u16>(r3)));  // (from the original)
    *gptr<u16>(r0 + 0x4cu) = u16(u32(*gptr<u16>(r3)));  // (from the original)
    *gptr<u16>(r0 + 0x4eu) = u16(u32(*gptr<u16>(r3)));  // (from the original)
    *gptr<u16>(r0 + 0x50u) = u16(u32(*gptr<u16>(r1)));  // (from the original)
    *gptr<u16>(r0 + 0x52u) = u16(u32(*gptr<u16>(r1)));  // (from the original)
    *gptr<u16>(r0 + 0x54u) = u16(u32(*gptr<u16>(r1)));  // (from the original)
    *gptr<u16>(r0 + 0x56u) = u16(u32(*gptr<u16>(r1)));  // (from the original)
    *gptr<u16>(r0 + 0x58u) = u16(u32(*gptr<u16>(r1)));  // (from the original)
    *gptr<u16>(r0 + 0x5au) = u16(u32(*gptr<u16>(r1)));  // (from the original)
    *gptr<u16>(r0 + 0x5cu) = u16(u32(*gptr<u16>(r1)));  // (from the original)
    *gptr<u16>(r0 + 0x5eu) = u16(u32(*gptr<u16>(r1)));  // (from the original)
    *gptr<u16>(r0 + 0x60u) = u16(u32(*gptr<u16>(r1)));  // (from the original)
    *gptr<u16>(r0 + 0x62u) = u16(u32(*gptr<u16>(r1)));  // (from the original)
    *gptr<u16>(r0 + 0x64u) = u16(u32(*gptr<u16>(0x886f4eu)));  // (from the original)
    *gptr<u16>(r0 + 0x66u) = u16(u32(*gptr<u16>(r1)));  // (from the original)
    *gptr<u16>(r0 + 0x68u) = u16(u32(*gptr<u16>(0x886f46u)));  // (from the original)
    *gptr<u16>(r0 + 0x6au) = u16(u32(*gptr<u16>(r1)));  // (from the original)
    *gptr<u16>(r0 + 0x6cu) = u16(u32(*gptr<u16>(r1)));  // (from the original)
    *gptr<u16>(r0 + 0x6eu) = u16(u32(*gptr<u16>(r1)));  // (from the original)
    *gptr<u16>(r0 + 0x70u) = u16(u32(*gptr<u16>(r1)));  // (from the original)
    *gptr<u16>(r0 + 0x72u) = u16(u32(*gptr<u16>(r1)));  // (from the original)
    *gptr<u16>(r0 + 0x74u) = u16(u32(*gptr<u16>(r1)));  // (from the original)
    *gptr<u16>(r0 + 0x76u) = u16(u32(*gptr<u16>(r1)));  // (from the original)
    *gptr<u16>(r0 + 0x78u) = u16(u32(*gptr<u16>(r1)));  // (from the original)
    *gptr<u16>(r0 + 0x7au) = u16(u32(*gptr<u16>(r1)));  // (from the original)
    *gptr<u16>(r0 + 0x7cu) = u16(u32(*gptr<u16>(r1)));  // (from the original)
    *gptr<u16>(r0 + 0x7eu) = u16(u32(*gptr<u16>(r1)));  // (from the original)
    *gptr<u16>(r0 + 0x80u) = u16(u32(*gptr<u16>(r1)));  // (from the original)
    r2 = 0x886f48u;  // (from the original)
    *gptr<u16>(r0 + 0x82u) = u16(u32(*gptr<u16>(r1)));  // (from the original)
    *gptr<u16>(r0 + 0x84u) = u16(u32(*gptr<u16>(r1)));  // (from the original)
    *gptr<u16>(r0 + 0x86u) = u16(u32(*gptr<u16>(r1)));  // (from the original)
    *gptr<u16>(r0 + 0x88u) = u16(u32(*gptr<u16>(r1)));  // (from the original)
    *gptr<u16>(r0 + 0x8au) = u16(u32(*gptr<u16>(r1)));  // (from the original)
    *gptr<u16>(r0 + 0x8cu) = u16(u32(*gptr<u16>(r1)));  // (from the original)
    *gptr<u16>(r0 + 0x8eu) = u16(u32(*gptr<u16>(r1)));  // (from the original)
    *gptr<u16>(r0 + 0x90u) = u16(u32(*gptr<u16>(r1)));  // (from the original)
    *gptr<u16>(r0 + 0x92u) = u16(u32(*gptr<u16>(r1)));  // (from the original)
    *gptr<u16>(r0 + 0x94u) = u16(u32(*gptr<u16>(r1)));  // (from the original)
    *gptr<u16>(r0 + 0x96u) = u16(u32(*gptr<u16>(r1)));  // (from the original)
    *gptr<u16>(r0 + 0x98u) = u16(u32(*gptr<u16>(r1)));  // (from the original)
    *gptr<u16>(r0 + 0x9au) = u16(u32(*gptr<u16>(r1)));  // (from the original)
    *gptr<u16>(r0 + 0x9cu) = u16(u32(*gptr<u16>(r1)));  // (from the original)
    *gptr<u16>(r0 + 0x9eu) = u16(u32(*gptr<u16>(0x886f4cu)));  // (from the original)
    *gptr<u16>(r0 + 0xa0u) = u16(u32(*gptr<u16>(r1)));  // (from the original)
    *gptr<u16>(r0 + 0xa2u) = u16(u32(*gptr<u16>(r1)));  // (from the original)
    *gptr<u16>(r0 + 0xa4u) = u16(u32(*gptr<u16>(r1)));  // (from the original)
    *gptr<u16>(r0 + 0xa6u) = u16(u32(*gptr<u16>(r1)));  // (from the original)
    *gptr<u16>(r0 + 0xa8u) = u16(u32(*gptr<u16>(r1)));  // (from the original)
    *gptr<u16>(r0 + 0xaau) = u16(u32(*gptr<u16>(r1)));  // (from the original)
    *gptr<u16>(r0 + 0xacu) = u16(u32(*gptr<u16>(r1)));  // (from the original)
    *gptr<u16>(r0 + 0xaeu) = u16(u32(*gptr<u16>(r1)));  // (from the original)
    *gptr<u16>(r0 + 0xb0u) = u16(u32(*gptr<u16>(r1)));  // (from the original)
    *gptr<u16>(r0 + 0xb2u) = u16(u32(*gptr<u16>(r1)));  // (from the original)
    *gptr<u16>(r0 + 0xb4u) = u16(u32(*gptr<u16>(r1)));  // (from the original)
    *gptr<u16>(r0 + 0xb6u) = u16(u32(*gptr<u16>(r1)));  // (from the original)
    *gptr<u16>(r0 + 0xb8u) = u16(u32(*gptr<u16>(r2)));  // (from the original)
    *gptr<u16>(r0 + 0xbau) = u16(u32(*gptr<u16>(r2)));  // (from the original)
    *gptr<u16>(r0 + 0xbcu) = u16(u32(*gptr<u16>(r1)));  // (from the original)
    *gptr<u16>(r0 + 0xbeu) = u16(u32(*gptr<u16>(r1)));  // (from the original)
    *gptr<u16>(r0 + 0xc0u) = u16(u32(*gptr<u16>(r1)));  // (from the original)
    *gptr<u16>(r0 + 0xc2u) = u16(u32(*gptr<u16>(r1)));  // (from the original)
    *gptr<u16>(r0 + 0xc4u) = u16(u32(*gptr<u16>(r1)));  // (from the original)
    *gptr<u16>(r0 + 0xc6u) = u16(u32(*gptr<u16>(r1)));  // (from the original)
    *gptr<u16>(r0 + 0xc8u) = u16(u32(*gptr<u16>(r1)));  // (from the original)
    *gptr<u16>(r0 + 0xcau) = u16(u32(*gptr<u16>(r1)));  // (from the original)
    *gptr<u16>(r0 + 0xccu) = u16(u32(*gptr<u16>(r1)));  // (from the original)
    *gptr<u16>(r0 + 0xceu) = u16(u32(*gptr<u16>(r1)));  // (from the original)
    *gptr<u16>(r0 + 0xd0u) = u16(u32(*gptr<u16>(r1)));  // (from the original)
    *gptr<u16>(r0 + 0xd2u) = u16(u32(*gptr<u16>(r1)));  // (from the original)
    *gptr<u16>(r0 + 0xd4u) = u16(u32(*gptr<u16>(r1)));  // (from the original)
    *gptr<u16>(r0 + 0xd6u) = u16(u32(*gptr<u16>(r1)));  // (from the original)
    *gptr<u16>(r0 + 0xd8u) = u16(u32(*gptr<u16>(r1)));  // (from the original)
    *gptr<u16>(r0 + 0xdau) = u16(u32(*gptr<u16>(r1)));  // (from the original)
    *gptr<u16>(r0 + 0xdcu) = u16(u32(*gptr<u16>(r1)));  // (from the original)
    *gptr<u16>(r0 + 0xdeu) = u16(u32(*gptr<u16>(0x886f44u)));  // (from the original)
    *gptr<u16>(r0 + 0xe0u) = u16(u32(*gptr<u16>(r1)));  // (from the original)
    *gptr<u16>(r0 + 0xe2u) = u16(u32(*gptr<u16>(r1)));  // (from the original)
    *gptr<u16>(r0 + 0xe4u) = u16(u32(*gptr<u16>(r1)));  // (from the original)
    *gptr<u16>(r0 + 0xe6u) = u16(u32(*gptr<u16>(r1)));  // (from the original)
    *gptr<u16>(r0 + 0xe8u) = u16(u32(*gptr<u16>(r1)));  // (from the original)
    *gptr<u16>(r0 + 0xeau) = u16(u32(*gptr<u16>(r1)));  // (from the original)
    *gptr<u16>(r0 + 0xecu) = u16(u32(*gptr<u16>(r1)));  // (from the original)
    *gptr<u16>(r0 + 0xeeu) = u16(u32(*gptr<u16>(r1)));  // (from the original)
    *gptr<u16>(r0 + 0xf0u) = u16(u32(*gptr<u16>(r1)));  // (from the original)
    *gptr<u16>(r0 + 0xf2u) = u16(u32(*gptr<u16>(r1)));  // (from the original)
    *gptr<u16>(r0 + 0xf4u) = u16(u32(*gptr<u16>(r1)));  // (from the original)
    r1 = u32(*gptr<u16>(r1));
    *gptr<u16>(r0 + 0xf6u) = u16(r1);  // (from the original)
L_5ca144:;
    r0 = r5 + (r4 << 1);
L_5ca148:;
    r0 = u32(*gptr<u16>(r0));
    guest::cpu()->r[13] += 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_005c98a8
GUEST_EXPORT(0x005c98a8, d_005c98a8::f_005c98a8);

// f_005ca1d4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005ca1d4 {


u32 f_005ca1d4(u32 r0, u32 r1) {
    if (r0 >= 0xfcu) {  // (from the original)
        r0 = 0u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r1 = u32(*gptr<u16>(0x88bf34u + (r0 << 1)));  // (from the original)
    r0 = r1 * 0x64u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_005ca1d4
GUEST_EXPORT(0x005ca1d4, d_005ca1d4::f_005ca1d4);

// f_005ca294: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005ca294 {


u32 f_005ca294(u32 r0, u32 r1) {
    if (r0 >= 0xfcu) {  // (from the original)
        r0 = 0u;
    } else {
        r1 = 0x88be36u;  // (from the original)
        r0 = u32(*gptr<u8>(r1 + r0));
    }
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_005ca294
GUEST_EXPORT(0x005ca294, d_005ca294::f_005ca294);

// f_005ca2ac: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005ca2ac {

struct __attribute__((packed)) Object_005ca2ac_0 {
    u32 word_0;
};
GUEST_OFFSET(Object_005ca2ac_0, word_0, 0x0);  // (from the original)

inline constexpr guest::Function<0x006cc934, u32(u32, u32, u32, u32)> call_006cc934;  // (from the original)

u32 f_005ca2ac(gptr<Object_005ca2ac_0> arg0, u32 r1, u32 r2, u32 r3, float S0, float S1) {
    u32 ea = 0;
    u32 r0 = arg0.addr();
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r13 = guest::cpu()->r[13];
    u32 r14 = guest::cpu()->r[14];
    if (r3 >= 0xfcu) {  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[4] = r4;
        guest::cpu()->r[5] = r5;
        guest::cpu()->r[6] = r6;
        guest::cpu()->r[7] = r7;
        guest::cpu()->r[8] = r8;
        guest::cpu()->r[13] = r13;
        guest::cpu()->s[0] = S0;
        guest::cpu()->s[1] = S1;
        return r0;
    }
    ea = r13 - 0x18;  // (from the original)
    *gptr<u32>(ea) = u32(r4);
    *gptr<u32>(ea + 4) = u32(r5);
    *gptr<u32>(ea + 8) = u32(r6);
    *gptr<u32>(ea + 0xc) = u32(r7);  // (from the original)
    *gptr<u32>(ea + 0x10) = u32(r8);  // (from the original)
    *gptr<u32>(ea + 0x14) = u32(r14);  // (from the original)
    r13 = r13 - 0x18;  // (from the original)
    r6 = r1;
    r5 = r0;
    r0 = r3;
    r7 = r2;
    r4 = 0x88c724u + (r0 << 4);  // (from the original)
    r1 = *gptr<u32>(r4);
    arg0->word_0 = u32(r1);
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    r0 = call_006cc934(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    if (r0 == 0) {
        S0 = std::bit_cast<float>(*gptr<u32>(0x5ca320u));  // (from the original)
    } else {
        S0 = std::bit_cast<float>(*gptr<u32>(0x5ca31cu));  // (from the original)
    }
    S1 = std::bit_cast<float>(*gptr<u32>(0x5ca324u));  // (from the original)
    *gptr<u32>(r5 + 4u) = u32(std::bit_cast<u32>(S0));
    ea = r4 + 4u;
    r0 = *gptr<u32>(ea);
    ea = r5 + 8u;
    *gptr<u32>(ea) = u32(r0);
    S0 = std::bit_cast<float>(vcvt_sz_f(std::bit_cast<float>(*gptr<u32>(r4 + 8u)) * S1));
    ea = r6;
    *gptr<u16>(ea) = u16(std::bit_cast<u32>(S0));
    ea = r4 + 0xcu;  // (from the original)
    r0 = *gptr<u32>(ea);
    ea = r7;
    *gptr<u32>(ea) = u32(r0);
    ea = r13;
    r13 = r13 + 0x18;  // (from the original)
    r4 = *gptr<u32>(ea);
    r5 = *gptr<u32>(ea + 4);
    r6 = *gptr<u32>(ea + 8);
    r7 = *gptr<u32>(ea + 0xc);  // (from the original)
    r8 = *gptr<u32>(ea + 0x10);  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[4] = r4;
    guest::cpu()->r[5] = r5;
    guest::cpu()->r[6] = r6;
    guest::cpu()->r[7] = r7;
    guest::cpu()->r[8] = r8;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    return r0;
}

}  // namespace d_005ca2ac
GUEST_EXPORT(0x005ca2ac, d_005ca2ac::f_005ca2ac);

// f_005ca328: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005ca328 {


u32 f_005ca328(u32 r0, u32 r1) {
    if (r0 >= 0xfcu) {  // (from the original)
        r0 = 0xa5u;  // (from the original)
    } else {
        r1 = 0x88b74cu;  // (from the original)
        r0 = u32(*gptr<u8>(r1 + r0));
    }
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_005ca328
GUEST_EXPORT(0x005ca328, d_005ca328::f_005ca328);

// f_005ca3c8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005ca3c8 {


u32 f_005ca3c8(u32 r0, u32 r1) {
    if (r0 >= 0x67u) {  // (from the original)
        r0 = ~0u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r1 = 0x88d9deu;  // (from the original)
    r0 = u32(*gptr<u8>(r1 + r0));
    r1 = r1 - 0xfeu;  // (from the original)
    r0 = u32(s32(s8(*gptr<u8>(r1 + r0))));
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_005ca3c8
GUEST_EXPORT(0x005ca3c8, d_005ca3c8::f_005ca3c8);

// f_005ca3ec: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005ca3ec {


u32 f_005ca3ec(u32 r0, u32 r1) {
    u32 cf = 0;
    cf = r1 >= 0xfcu;  // (from the original)
    if (!cf) {
        cf = r0 >= 8u;
    }
    if (cf) {
        r0 = ~0u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r1 = 0x88dbaau + (r1 << 3);  // (from the original)
    r0 = u32(s32(s8(*gptr<u8>(r1 + r0))));
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_005ca3ec
GUEST_EXPORT(0x005ca3ec, d_005ca3ec::f_005ca3ec);

// f_005ca478: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005ca478 {

inline constexpr guest::Function<0x002fa90c, u32(u32, u32, u32, u32)> call_002fa90c;  // (from the original)

u32 f_005ca478(u32 r0, u32 r1) {
    guest::cpu()->r[13] -= 8u;
    if (r0 >= 0xfcu) {  // (from the original)
        r0 = 0u;
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r1 = *gptr<u32>(0x95bae0u + (r0 << 2));  // (from the original)
    r0 = 0x5ca4acu;  // (from the original)
    r0 = call_002fa90c(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
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

}  // namespace d_005ca478
GUEST_EXPORT(0x005ca478, d_005ca478::f_005ca478);

// f_005ca4b4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005ca4b4 {

inline constexpr guest::Function<0x002fa90c, u32(u32, u32, u32, u32)> call_002fa90c;  // (from the original)

u32 f_005ca4b4(u32 r0, u32 r1) {
    guest::cpu()->r[13] -= 8u;
    if (r0 >= 0xfcu) {  // (from the original)
        r0 = 0u;
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r1 = *gptr<u32>(0x95bae0u + (r0 << 2));  // (from the original)
    r0 = 0x5ca4e8u;  // (from the original)
    r0 = call_002fa90c(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
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

}  // namespace d_005ca4b4
GUEST_EXPORT(0x005ca4b4, d_005ca4b4::f_005ca4b4);

// f_005ca4f0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005ca4f0 {

inline constexpr guest::Function<0x002fa90c, u32(u32, u32, u32, u32)> call_002fa90c;  // (from the original)

u32 f_005ca4f0(u32 r0, u32 r1) {
    guest::cpu()->r[13] -= 8u;
    if (r0 >= 0xfcu) {  // (from the original)
        r0 = 0u;
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r1 = *gptr<u32>(0x95bae0u + (r0 << 2));  // (from the original)
    r0 = 0x5ca524u;  // (from the original)
    r0 = call_002fa90c(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
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

}  // namespace d_005ca4f0
GUEST_EXPORT(0x005ca4f0, d_005ca4f0::f_005ca4f0);

// f_005ca530: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005ca530 {

inline constexpr guest::Function<0x002fa90c, u32(u32, u32, u32, u32)> call_002fa90c;  // (from the original)

u32 f_005ca530(u32 r0, u32 r1) {
    guest::cpu()->r[13] -= 8u;
    if (r0 >= 0xfcu) {  // (from the original)
        r0 = 0u;
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r1 = *gptr<u32>(0x95bae0u + (r0 << 2));  // (from the original)
    r0 = 0x5ca564u;  // (from the original)
    r0 = call_002fa90c(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
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

}  // namespace d_005ca530
GUEST_EXPORT(0x005ca530, d_005ca530::f_005ca530);

// f_005ca56c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005ca56c {


u32 f_005ca56c(u32 r0, u32 r1) {
    if (r0 >= 0xfcu) {  // (from the original)
        r0 = 0u;
    } else {
        r1 = 0x88c42au;  // (from the original)
        r0 = u32(s32(s8(*gptr<u8>(r1 + r0))));
    }
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_005ca56c
GUEST_EXPORT(0x005ca56c, d_005ca56c::f_005ca56c);

// f_005ca584: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005ca584 {

inline constexpr guest::Function<0x002fa90c, u32(u32, u32, u32, u32)> call_002fa90c;  // (from the original)

u32 f_005ca584(u32 r0, u32 r1) {
    guest::cpu()->r[13] -= 8u;
    if (r0 >= 0xfcu) {  // (from the original)
        r0 = 0u;
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r1 = *gptr<u32>(0x95bae0u + (r0 << 2));  // (from the original)
    r0 = 0x5ca5b8u;  // (from the original)
    r0 = call_002fa90c(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
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

}  // namespace d_005ca584
GUEST_EXPORT(0x005ca584, d_005ca584::f_005ca584);

// f_005ca5d8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005ca5d8 {

struct __attribute__((packed)) Object_005ca5d8_2 {
    u32 word_0;
};
GUEST_OFFSET(Object_005ca5d8_2, word_0, 0x0);  // (from the original)

inline constexpr guest::Function<0x003193e8, u32(u32, u32, u32, u32)> call_003193e8;  // (from the original)

u32 f_005ca5d8(u32 r0, u32 r1, gptr<Object_005ca5d8_2> arg2, u32 r3) {
    u32 r2 = arg2.addr();
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r12 = 0;
    r12 = r0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r0 = r1;
    r5 = arg2->word_0;
    r6 = 0u;
    r1 = r3 - (r1 - r12);
    r4 = r2;
    r3 = ~0u;
    arg2->word_0 = u32(r6);
    r2 = r3;
    r0 = call_003193e8(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    if (r0 == r5) {
        r0 = 1u;
    } else {
        r0 = 0u;
    }
    *gptr<u32>(r4) = u32(r5);
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_005ca5d8
GUEST_EXPORT(0x005ca5d8, d_005ca5d8::f_005ca5d8);

// f_005ca62c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005ca62c {

inline constexpr guest::Function<0x003463bc, u32(u32, u32, u32, u32)> call_003463bc;  // (from the original)

u32 f_005ca62c() {
    u32 ea = 0;
    u32 r0 = 0;
    u32 r1 = 0;
    ea = 0x95bf74u;  // (from the original)
    ea = *gptr<u32>(ea);
    r0 = *gptr<u32>(ea);
    r1 = *gptr<u32>(ea + 4);
    return call_003463bc(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_005ca62c
GUEST_EXPORT(0x005ca62c, d_005ca62c::f_005ca62c);

// f_005ca648: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005ca648 {


u32 f_005ca648() {
    u32 res = 0;
    u32 r0 = 0;
    u32 r1 = 0;
    u32 r2 = 0;
    u32 cf = 0;
    r2 = *gptr<u32>(0x95bf74u);  // (from the original)
    r1 = *gptr<u32>(r2);
    res = r1 + 1u;
    cf = res < r1;
    r1 = res;
    r0 = u32(u64(*gptr<u32>(r2 + 4u)) + cf);
    *gptr<u32>(r2 + 4u) = u32(r0);
    res = r1 | r0;
    *gptr<u32>(r2) = u32(r1);
    if (res != 0) {
        guest::cpu()->r[1] = r1;
        return r0;
    }
    res = r1 + 1u;
    cf = res < r1;
    r1 = res;
    r0 = u32(u64(r0) + cf);
    *gptr<u32>(r2 + 4u) = u32(r0);
    *gptr<u32>(r2) = u32(r1);
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_005ca648
GUEST_EXPORT(0x005ca648, d_005ca648::f_005ca648);

// f_005ca688: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005ca688 {

inline constexpr guest::Function<0x00134544, u32(u32, u32, u32, u32)> call_00134544;  // (from the original)
inline constexpr guest::Function<0x0070ef54, u32(u32, u32, u32, u32)> call_0070ef54;  // (from the original)
inline constexpr guest::Function<0x00757f08, u32(u32, u32, u32, u32)> call_00757f08;  // (from the original)

u32 f_005ca688(u32 r0, u32 r1, u32 r2) {
    u32 res = 0;
    u64 t = 0;
    u32 r3 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    res = r1 + r2;
    r6 = res;
    t = u64(0u) + ~u32(u64(0u) + u32(res < r1)) + u32(0x89b00u >= r6);  // (from the original)
    if (!u32(t >> 0x20)) {  // (from the original)
        goto L_5ca6ec;
    }
    r4 = 0x95bf74u;  // (from the original)
    r3 = *gptr<u32>(r4 + 4u);
    if (r3 == 0) {
        goto L_5ca6ec;
    }
    r5 = r3 + r2;
    r2 = r1;
    r1 = r0;
    r0 = r5;
    r0 = call_00134544(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r4 = *gptr<u32>(r4 + 4u);
    r0 = r4 + 0x80u;  // (from the original)
    r0 = call_00757f08(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r4 + 0x71900u;  // (from the original)
    r0 = call_0070ef54(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r0 = r5;
L_5ca6ec:;
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_005ca688
GUEST_EXPORT(0x005ca688, d_005ca688::f_005ca688);

// f_005ca6fc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005ca6fc {


u32 f_005ca6fc() {
    u32 r0 = 0;
    u32 r1 = 0;
    goto L_5ca6fc;
L_2cd4ec:;
    r0 = 0x952628u;  // (from the original)
    r1 = u32(*gptr<u8>(r0));
    if (r1 == 0) {
        r0 = *gptr<u32>(r0 + 4u);
    } else {
        r0 = 0u;
    }
    guest::cpu()->r[1] = r1;
    return r0;
L_5ca6fc:;
    guest::preempt();
    goto L_2cd4ec;
}

}  // namespace d_005ca6fc
GUEST_EXPORT(0x005ca6fc, d_005ca6fc::f_005ca6fc);

// f_005ca7a4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005ca7a4 {

inline constexpr guest::Function<0x00116cdd, u32(u32, u32, u32, u32)> call_00116cdc;  // (from the original)
inline constexpr guest::Function<0x002fb94c, u32(u32, u32, u32, u32)> call_002fb94c;  // (from the original)
inline constexpr guest::Function<0x00607474, u32(u32, u32, u32, u32)> call_00607474;  // (from the original)
inline constexpr guest::Function<0x00607bdc, u32(u32, u32, u32, u32)> call_00607bdc;  // (from the original)

u32 f_005ca7a4(u32 r0, u32 r1) {
    u32 res = 0;
    u32 r4 = guest::cpu()->r[4];
    guest::cpu()->r[13] -= 8u;
    r0 = call_002fb94c(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r4 = r0;
    r0 = r0 + 0x5700u;  // (from the original)
    *gptr<u8>(r0 + 0xau) = u8(u32(*gptr<u8>(r0 + 0xau)) & ~2u);  // (from the original)
    r0 = 0x8f38u;  // (from the original)
    r1 = 0u;
    *gptr<u32>(r0 + r4) = u32(r1);
    r0 = call_00116cdc(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r4 = r4 + 0x8f7bu;  // (from the original)
    res = u32(*gptr<u8>(r4)) << 0x19;  // (from the original)
    r0 = res;
    if (!(res >> 0x1f)) {  // (from the original)
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r0 = call_00607bdc(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r0 = call_00607474(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r0 = *gptr<u32>(0x95bf74u) + 0x621cfu;  // (from the original)
    r1 = u32(*gptr<u8>(r0 + 1u)) | 0x20u;  // (from the original)
    *gptr<u8>(r0 + 1u) = u8(r1);
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_005ca7a4
GUEST_EXPORT(0x005ca7a4, d_005ca7a4::f_005ca7a4);

// f_005ca9cc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005ca9cc {


u32 f_005ca9cc() {
    u32 r0 = 0;
    r0 = *gptr<u32>(0x95bf74u) + 0x292a4u;  // (from the original)
    return guest::call_address<u32>(0x119289u, r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
}

}  // namespace d_005ca9cc
GUEST_EXPORT(0x005ca9cc, d_005ca9cc::f_005ca9cc);

// f_005ca9e4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005ca9e4 {

inline constexpr guest::Function<0x0013873c, u32(u32, u32, u32, u32)> call_0013873c;  // (from the original)
inline constexpr guest::Function<0x001bac9c, u32(u32, u32, u32, u32)> call_001bac9c;  // (from the original)
inline constexpr guest::Function<0x001c1e54, u32(u32, u32, u32, u32)> call_001c1e54;  // (from the original)
inline constexpr guest::Function<0x00241d34, u32(u32, u32, u32, u32)> call_00241d34;  // (from the original)
inline constexpr guest::Function<0x00292d08, u32(u32, u32, u32, u32)> call_00292d08;  // (from the original)
inline constexpr guest::Function<0x002c2538, u32(u32, u32, u32, u32)> call_002c2538;  // (from the original)
inline constexpr guest::Function<0x002c2710, u32(u32, u32, u32, u32)> call_002c2710;  // (from the original)
inline constexpr guest::Function<0x002fb430, u32(u32, u32, u32, u32)> call_002fb430;  // (from the original)
inline constexpr guest::Function<0x002fb94c, u32(u32, u32, u32, u32)> call_002fb94c;  // (from the original)
inline constexpr guest::Function<0x002fc814, u32(u32, u32, u32, u32)> call_002fc814;  // (from the original)
inline constexpr guest::Function<0x002fc8e8, u32(u32, u32, u32, u32)> call_002fc8e8;  // (from the original)
inline constexpr guest::Function<0x00300634, u32(u32, u32, u32, u32)> call_00300634;  // (from the original)
inline constexpr guest::Function<0x00304530, u32(u32, u32, u32, u32)> call_00304530;  // (from the original)
inline constexpr guest::Function<0x0056b550, u32(u32, u32, u32, u32)> call_0056b550;  // (from the original)
inline constexpr guest::Function<0x00582464, u32(u32, u32, u32, u32)> call_00582464;  // (from the original)
inline constexpr guest::Function<0x0058d52c, u32(u32, u32, u32, u32)> call_0058d52c;  // (from the original)
inline constexpr guest::Function<0x0058f100, u32(u32, u32, u32, u32)> call_0058f100;  // (from the original)
inline constexpr guest::Function<0x00607474, u32(u32, u32, u32, u32)> call_00607474;  // (from the original)
inline constexpr guest::Function<0x00607bdc, u32(u32, u32, u32, u32)> call_00607bdc;  // (from the original)
inline constexpr guest::Function<0x006a6408, u32(u32, u32, u32, u32)> call_006a6408;  // (from the original)

u32 f_005ca9e4(u32 r0_unused, u32 r1, u32 r2, u32 r3) {
    u32 b = 0;
    u32 r0 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 0x28u;  // (from the original)
    r4 = 0x95df64u;  // (from the original)
    r0 = *gptr<u32>(r4);
    guest::cpu()->r[13] = r13;
    r0 = call_002c2538(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = *gptr<u32>(r4);
    guest::cpu()->r[13] = r13;
    r0 = call_002c2710(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0 = call_00292d08(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = 0x952c3cu;  // (from the original)
    r4 = *gptr<u32>(r0);
    if (r4 != 0) {
        guest::cpu()->r[13] = r13;
        r0 = call_00304530(r0, r1, r2, r3);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r1 = r4;
        guest::cpu()->r[13] = r13;
        r0 = call_001c1e54(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
    }
    guest::cpu()->r[13] = r13;
    r0 = call_006a6408(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0 = call_00241d34(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0 = call_00304530(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0 = call_0013873c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0 = call_0056b550(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r5 = 0x95bf74u;  // (from the original)
    r1 = 0x621b2u + (*gptr<u32>(r5) + 0x80u);  // (from the original)
    r0 = r13 + 0xcu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002fb430(r0, r1, r2, r3);
    r3 = r13 + 0xcu;  // (from the original)
    r1 = *gptr<u32>(r3 + 4);
    r2 = *gptr<u32>(r3 + 8);
    *gptr<u32>(r13) = u32(*gptr<u32>(r3));
    *gptr<u32>(r13 + 4) = u32(r1);
    *gptr<u32>(r13 + 8) = u32(r2);
    r2 = 0u;
    r1 = r2;
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_0058f100(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0 = call_00582464(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = 1u;
    r0 = r1;
    guest::cpu()->r[13] = r13;
    r0 = call_00300634(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = 0xaaef18u;  // (from the original)
    r4 = *gptr<u32>(r0 + 0x234u);  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00607bdc(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0 = call_00607474(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = r4 + 0x8f0au;  // (from the original)
    r0 = *gptr<u32>(r5) + 0x6acceu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002fc814(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0 = call_002fb94c(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = 0x95bfdcu;  // (from the original)
    r0 = r0 + 0x8f0au;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002fc8e8(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0 = call_0058d52c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0 = call_00607bdc(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0 = call_00607474(r0, r1, r2, r3);
    r1 = *gptr<u32>(r5);
    b = 0xau;  // (from the original)
    r3 = b;
    b = 0x80u;  // (from the original)
    r0 = r1 + b + 0x70e62u;  // (from the original)
    r4 = 0xfff901ccu;  // (from the original)
    r2 = u32(*gptr<u8>(r0 + 8u));
    b = 0xf0u;  // (from the original)
    b = (r2 & b) >> 4;
    if (u32(r3 >= b) && !u32(r3 == b)) {
        r2 = r2 + 0x10u;  // (from the original)
        *gptr<u8>(r0 + 8u) = u8(r2);
    }
    r0 = u32(*gptr<u8>(r1 + 0x80u - r4));  // (from the original)
    if ((r0 & 8u) == 0) {
        goto L_5cab90;
    }
    if ((r0 & 0x40u) != 0) {  // (from the original)
        goto L_5cab90;
    }
    guest::cpu()->r[13] = r13;
    r0 = call_00607bdc(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0 = call_00607474(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = *gptr<u32>(r5) + 0x80u - r4;  // (from the original)
    r1 = u32(*gptr<u8>(r0)) | 0x40u;  // (from the original)
    *gptr<u8>(r0) = u8(r1);
L_5cab90:;
    guest::cpu()->r[13] = r13;
    r0 = call_001bac9c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r13 = r13 + 0x28u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_005ca9e4
GUEST_EXPORT(0x005ca9e4, d_005ca9e4::f_005ca9e4);

// f_005cabc0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005cabc0 {

inline constexpr guest::Function<0x0013873c, u32(u32, u32, u32, u32)> call_0013873c;  // (from the original)
inline constexpr guest::Function<0x001bac9c, u32(u32, u32, u32, u32)> call_001bac9c;  // (from the original)
inline constexpr guest::Function<0x001c1e54, u32(u32, u32, u32, u32)> call_001c1e54;  // (from the original)
inline constexpr guest::Function<0x00241d34, u32(u32, u32, u32, u32)> call_00241d34;  // (from the original)
inline constexpr guest::Function<0x00292d08, u32(u32, u32, u32, u32)> call_00292d08;  // (from the original)
inline constexpr guest::Function<0x002c2510, u32(u32, u32, u32, u32)> call_002c2510;  // (from the original)
inline constexpr guest::Function<0x002c2544, u32(u32, u32, u32, u32)> call_002c2544;  // (from the original)
inline constexpr guest::Function<0x002fb430, u32(u32, u32, u32, u32)> call_002fb430;  // (from the original)
inline constexpr guest::Function<0x002fc188, u32(u32, u32, u32, u32)> call_002fc188;  // (from the original)
inline constexpr guest::Function<0x002fc194, u32(u32, u32, u32, u32)> call_002fc194;  // (from the original)
inline constexpr guest::Function<0x00304530, u32(u32, u32, u32, u32)> call_00304530;  // (from the original)
inline constexpr guest::Function<0x0058d52c, u32(u32, u32, u32, u32)> call_0058d52c;  // (from the original)
inline constexpr guest::Function<0x0058f100, u32(u32, u32, u32, u32)> call_0058f100;  // (from the original)
inline constexpr guest::Function<0x006a6408, u32(u32, u32, u32, u32)> call_006a6408;  // (from the original)

u32 f_005cabc0(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = guest::cpu()->r[4];
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 0x20u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00292d08(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = 0x952c3cu;  // (from the original)
    r4 = *gptr<u32>(r0);
    if (r4 != 0) {
        guest::cpu()->r[13] = r13;
        r0 = call_00304530(r0, r1, r2, r3);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r1 = r4;
        guest::cpu()->r[13] = r13;
        r0 = call_001c1e54(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
    }
    guest::cpu()->r[13] = r13;
    r0 = call_006a6408(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0 = call_00241d34(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0 = call_00304530(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0 = call_0013873c(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = 0x621b2u + (*gptr<u32>(0x95bf74u) + 0x80u);  // (from the original)
    r0 = r13 + 0xcu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002fb430(r0, r1, r2, r3);
    r3 = r13 + 0xcu;  // (from the original)
    r1 = *gptr<u32>(r3 + 4);
    r2 = *gptr<u32>(r3 + 8);
    *gptr<u32>(r13) = u32(*gptr<u32>(r3));
    *gptr<u32>(r13 + 4) = u32(r1);
    *gptr<u32>(r13 + 8) = u32(r2);
    r2 = 0u;
    r1 = r2;
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_0058f100(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0 = call_00241d34(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0 = call_0058d52c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0 = call_002fc188(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0 = call_002fc194(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r4 = 0x95df64u;  // (from the original)
    r0 = *gptr<u32>(r4);
    guest::cpu()->r[13] = r13;
    r0 = call_002c2544(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = *gptr<u32>(r4);
    guest::cpu()->r[13] = r13;
    r0 = call_002c2510(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0 = call_001bac9c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r13 = r13 + 0x20u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_005cabc0
GUEST_EXPORT(0x005cabc0, d_005cabc0::f_005cabc0);

// f_005cacfc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005cacfc {

inline constexpr guest::Function<0x002c24dc, u32(u32, u32, u32, u32)> call_002c24dc;  // (from the original)

u32 f_005cacfc() {
    u32 r0 = 0;
    r0 = *gptr<u32>(0x95df64u);  // (from the original)
    return call_002c24dc(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_005cacfc
GUEST_EXPORT(0x005cacfc, d_005cacfc::f_005cacfc);

// f_005cad1c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005cad1c {

inline constexpr guest::Function<0x002f825c, u32(u32, u32, u32, u32)> call_002f825c;  // (from the original)

u32 f_005cad1c() {
    u32 r1 = 0;
    r1 = 0x89b00u;  // (from the original)
    return call_002f825c(guest::cpu()->r[0], r1, guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_005cad1c
GUEST_EXPORT(0x005cad1c, d_005cad1c::f_005cad1c);

// f_005cad28: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005cad28 {

inline constexpr guest::Function<0x001df42c, u32(u32, u32, u32, u32)> call_001df42c;  // (from the original)
inline constexpr guest::Function<0x0055cb58, u32(u32, u32, u32, u32)> call_0055cb58;  // (from the original)
inline constexpr guest::Function<0x005cb26c, u32(u32, u32, u32, u32)> call_005cb26c;  // (from the original)

u32 f_005cad28(u32 r0, u32 r1) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r4 = r0;
    r5 = 0x9753c0u;  // (from the original)
    r0 = *gptr<u32>(r5);
    r0 = call_0055cb58(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r6 = r0;
    r0 = *gptr<u32>(r5);
    r5 = ~0u;
    r0 = call_0055cb58(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = 0u;
    *gptr<u32>(r4 + 8u) = u32(r1);
    *gptr<u32>(r4) = u32(u32(u64(r0) * r5 >> 0x20) + 1u);  // (from the original)
    *gptr<u32>(r4 + 4) = u32(r6);
    r0 = r4 + 0x80u;  // (from the original)
    r0 = call_005cb26c(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r0 = r4 + 0x70000u;  // (from the original)
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    r0 = r0 + 0x1900u;  // (from the original)
    return call_001df42c(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_005cad28
GUEST_EXPORT(0x005cad28, d_005cad28::f_005cad28);

// f_005caf64: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005caf64 {

struct __attribute__((packed)) Object_005caf64_0 {
    u8 unknown_0[0x4];  // (not used here)
    u16 half_4;
    u8 byte_6;
};
GUEST_OFFSET(Object_005caf64_0, half_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_005caf64_0, byte_6, 0x6);  // (from the original)


u32 f_005caf64(gptr<Object_005caf64_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r1 = 0;
    r0 = 0x9eu;  // (from the original)
    r1 = 0u;
    arg0->half_4 = u16(r0);
    arg0->byte_6 = u8(r1);
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_005caf64
GUEST_EXPORT(0x005caf64, d_005caf64::f_005caf64);

// f_005caf80: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005caf80 {

struct __attribute__((packed)) Object_005caf80_0 {
    u8 unknown_0[0x62130];  // (not used here)
    u32 word_62130;
    u32 word_62134;
};
GUEST_OFFSET(Object_005caf80_0, word_62130, 0x62130);  // (from the original)
GUEST_OFFSET(Object_005caf80_0, word_62134, 0x62134);  // (from the original)


u32 f_005caf80(gptr<Object_005caf80_0> arg0, u32 r1_unused, u32 r2, u32 r3) {
    u32 res = 0;
    u64 t = 0;
    u32 r0 = arg0.addr();
    u32 r1 = 0;
    u32 cf = 0;
    guest::cpu()->r[13] -= 8u;
    r0 = arg0->word_62130;
    res = r0 + r2;
    cf = res < r0;
    r0 = res;
    r1 = u32(u64(arg0->word_62134) + r3 + cf);
    t = u64(~0x80000000u) + ~r1 + u32(~0u >= r0);  // (from the original)
    if (u32(t >> 0x20)) {  // (from the original)
        arg0->word_62130 = u32(r0);
        arg0->word_62134 = u32(r1);
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r0 = ~0u;
    r1 = ~0x80000000u;  // (from the original)
    arg0->word_62130 = u32(r0);
    arg0->word_62134 = u32(r1);
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_005caf80
GUEST_EXPORT(0x005caf80, d_005caf80::f_005caf80);

// f_005cb1dc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005cb1dc {

inline constexpr guest::Function<0x0010a2cc, u32(u32, u32, u32, u32)> call_0010a2cc;  // (from the original)
inline constexpr guest::Function<0x00118a65, u32(u32, u32, u32, u32)> call_00118a64;  // (from the original)
inline constexpr guest::Function<0x001b1af8, u32(u32, u32, u32, u32)> call_001b1af8;  // (from the original)
inline constexpr guest::Function<0x001b3f24, u32(u32, u32, u32, u32)> call_001b3f24;  // (from the original)
inline constexpr guest::Function<0x002ebd68, u32(u32, u32, u32, u32)> call_002ebd68;  // (from the original)
inline constexpr guest::Function<0x0052ab60, u32(u32, u32, u32, u32)> call_0052ab60;  // (from the original)
inline constexpr guest::Function<0x005caf64, u32(u32, u32, u32, u32)> call_005caf64;  // (from the original)
inline constexpr guest::Function<0x005cdbb8, u32(u32, u32, u32, u32)> call_005cdbb8;  // (from the original)
inline constexpr guest::Function<0x006bc5a0, u32(u32, u32, u32, u32)> call_006bc5a0;  // (from the original)

u32 f_005cb1dc(u32 r0, u32 r1) {
    u32 r4 = guest::cpu()->r[4];
    guest::cpu()->r[13] -= 8u;
    r4 = r0;
    r0 = call_005caf64(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r0 = r4 + 0x4be00u;  // (from the original)
    r0 = call_005cdbb8(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r0 = r4 + 0x5d880u;  // (from the original)
    r0 = call_002ebd68(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r0 = 0x621b2u + r4;  // (from the original)
    r0 = call_0052ab60(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r0 = r4 + 0x621ccu;  // (from the original)
    r0 = call_001b1af8(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r0 = r4 + 0x621d0u;  // (from the original)
    r0 = call_0010a2cc(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r0 = r4 - 0xfff951c8u;  // (from the original)
    r0 = call_006bc5a0(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r0 = r4 - 0xfff901d8u;  // (from the original)
    r0 = call_00118a64(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = 0x16u;  // (from the original)
    r0 = 0x70e9cu + r4;  // (from the original)
    guest::cpu()->r[13] += 8u;
    return call_001b3f24(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_005cb1dc
GUEST_EXPORT(0x005cb1dc, d_005cb1dc::f_005cb1dc);

// f_005cb26c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005cb26c {

inline constexpr guest::Function<0x001082c9, u32(u32, u32, u32, u32)> call_001082c8;  // (from the original)
inline constexpr guest::Function<0x0011253d, u32(u32, u32, u32, u32)> call_0011253c;  // (from the original)
inline constexpr guest::Function<0x00118a75, u32(u32, u32, u32, u32)> call_00118a74;  // (from the original)
inline constexpr guest::Function<0x001b1b2c, u32(u32, u32, u32, u32)> call_001b1b2c;  // (from the original)
inline constexpr guest::Function<0x001b2184, u32(u32, u32, u32, u32)> call_001b2184;  // (from the original)
inline constexpr guest::Function<0x0020bb20, u32(u32, u32, u32, u32)> call_0020bb20;  // (from the original)
inline constexpr guest::Function<0x0020d858, u32(u32, u32, u32, u32)> call_0020d858;  // (from the original)
inline constexpr guest::Function<0x0024a528, u32(u32, u32, u32, u32)> call_0024a528;  // (from the original)
inline constexpr guest::Function<0x0024e9fc, u32(u32, u32, u32, u32)> call_0024e9fc;  // (from the original)
inline constexpr guest::Function<0x0027aa88, u32(u32, u32, u32, u32)> call_0027aa88;  // (from the original)
inline constexpr guest::Function<0x002bf468, u32(u32, u32, u32, u32)> call_002bf468;  // (from the original)
inline constexpr guest::Function<0x002d453c, u32(u32, u32, u32, u32)> call_002d453c;  // (from the original)
inline constexpr guest::Function<0x002eaf8c, u32(u32, u32, u32, u32)> call_002eaf8c;  // (from the original)
inline constexpr guest::Function<0x002eba90, u32(u32, u32, u32, u32)> call_002eba90;  // (from the original)
inline constexpr guest::Function<0x002ebd9c, u32(u32, u32, u32, u32)> call_002ebd9c;  // (from the original)
inline constexpr guest::Function<0x00302084, u32(u32, u32, u32, u32)> call_00302084;  // (from the original)
inline constexpr guest::Function<0x00303cdc, u32(u32, u32, u32, u32)> call_00303cdc;  // (from the original)
inline constexpr guest::Function<0x003052f0, u32(u32, u32, u32, u32)> call_003052f0;  // (from the original)
inline constexpr guest::Function<0x003059f8, u32(u32, u32, u32, u32)> call_003059f8;  // (from the original)
inline constexpr guest::Function<0x0052abb4, u32(u32, u32, u32, u32)> call_0052abb4;  // (from the original)
inline constexpr guest::Function<0x005cd754, u32(u32, u32, u32, u32)> call_005cd754;  // (from the original)
inline constexpr guest::Function<0x005cdbf8, u32(u32, u32, u32, u32)> call_005cdbf8;  // (from the original)
inline constexpr guest::Function<0x00613620, u32(u32, u32, u32, u32)> call_00613620;  // (from the original)
inline constexpr guest::Function<0x006137d8, u32(u32, u32, u32, u32)> call_006137d8;  // (from the original)
inline constexpr guest::Function<0x006bc04c, u32(u32, u32, u32, u32)> call_006bc04c;  // (from the original)
inline constexpr guest::Function<0x006bc5d8, u32(u32, u32, u32, u32)> call_006bc5d8;  // (from the original)
inline constexpr guest::Function<0x006f3d0c, u32(u32, u32, u32, u32)> call_006f3d0c;  // (from the original)
inline constexpr guest::Function<0x00779520, u32(u32, u32, u32, u32)> call_00779520;  // (from the original)

u32 f_005cb26c(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 ea = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 0x10;  // (from the original)
    r4 = r0;
    r0 = r0 + 0x53400u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_006137d8(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r4 + 0x4be00u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_005cdbf8(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r4 + 0x20u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0027aa88(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r4 + 0x5d880u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002ebd9c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r4 + 0x621ccu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_001b1b2c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r4 + 0x621d0u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_005cd754(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r4 - 0xfff951c8u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_006bc5d8(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r4 - 0xfff901d8u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00118a74(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r4 + 0x29220u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0011253c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r4 + 0x502bcu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002bf468(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r4 + 0x52bb0u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002d453c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = 0x621b2u + r4;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0052abb4(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r4 + 0x6e1f4u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00613620(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = 0x62162u + r4;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_001b2184(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = 0x6e212u + r4;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00303cdc(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = 0x6e21au + r4;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_006bc04c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r4 + 0x6e224u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0024e9fc(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r4 + 0x6e234u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0020bb20(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r4 + 0x6e238u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_001082c8(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = 0x6fb4cu + r4;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00779520(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = 1u;
    r0 = 0x6fb68u + r4;  // (from the original)
    r5 = r0;
    guest::cpu()->r[13] = r13;
    r0 = call_00302084(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r6 = 0u;
    *gptr<u8>(r5) = u8(r6);
    r0 = 0x6fcb2u + r4;  // (from the original)
    r1 = 1u;
    r5 = r0;
    guest::cpu()->r[13] = r13;
    r0 = call_002eaf8c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    *gptr<u8>(r5) = u8(r6);
    r0 = 0x6fe36u + r4;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002eba90(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r4 - 0xfff90208u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0020d858(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    *gptr<u8>(r4 - 0xfff901ccu) = u8(r6);  // (from the original)
    *gptr<u16>(r4 + 0x70e60u) = u16(r6);  // (from the original)
    r5 = r4 + 0x70e62u;  // (from the original)
    r0 = r5;
    guest::cpu()->r[13] = r13;
    r0 = call_00303cdc(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r5 + 0xcu;  // (from the original)
    *gptr<u8>(r5 + 8u) = u8(r6);
    guest::cpu()->r[13] = r13;
    r0 = call_003052f0(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    *gptr<u8>(r5 + 9u) = u8(r6);
    *gptr<u8>(r5 + 0xau) = u8(r6);  // (from the original)
    r0 = 0x6214fu + r4;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_006f3d0c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = 0x70e9cu + r4;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_003059f8(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = 0x717e8u + r4;  // (from the original)
    *gptr<u16>(r0) = u16(r6);
    *gptr<u8>(r0 + 2u) = u8(r6);
    *gptr<u8>(r0 + 3u) = u8(r6);
    r0 = 0x717ecu + r4;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0024a528(r0, r1, r2, r3);
    r1 = 0u;
    r0 = r4 + 0x71800u;  // (from the original)
    ea = r0;
    *gptr<u32>(ea) = u32(r1);
    *gptr<u32>(ea + 4) = u32(r1);
    *gptr<u32>(ea + 8) = u32(r6);
    ea = r0 + 0xcu;  // (from the original)
    *gptr<u32>(ea) = u32(r6);
    ea = r0 + 0x10u;  // (from the original)
    *gptr<u32>(ea) = u32(r6);
    ea = r0 + 0x14u;  // (from the original)
    *gptr<u32>(ea) = u32(r6);
    ea = r4 + 0x62130u;  // (from the original)
    *gptr<u32>(ea) = u32(r1);
    *gptr<u32>(ea + 4) = u32(r1);
    r13 = r13 + 0x10;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_005cb26c
GUEST_EXPORT(0x005cb26c, d_005cb26c::f_005cb26c);

// f_005cb49c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005cb49c {

inline constexpr guest::Function<0x00108435, u32(u32, u32, u32, u32)> call_00108434;  // (from the original)
inline constexpr guest::Function<0x00112585, u32(u32, u32, u32, u32)> call_00112584;  // (from the original)
inline constexpr guest::Function<0x001b1a44, u32(u32, u32, u32, u32)> call_001b1a44;  // (from the original)
inline constexpr guest::Function<0x001b1b2c, u32(u32, u32, u32, u32)> call_001b1b2c;  // (from the original)
inline constexpr guest::Function<0x001b23ac, u32(u32, u32, u32, u32)> call_001b23ac;  // (from the original)
inline constexpr guest::Function<0x001b4980, u32(u32, u32, u32, u32)> call_001b4980;  // (from the original)
inline constexpr guest::Function<0x001b6618, u32(u32, u32, u32, u32)> call_001b6618;  // (from the original)
inline constexpr guest::Function<0x001e017c, u32(u32, u32, u32, u32)> call_001e017c;  // (from the original)
inline constexpr guest::Function<0x0020bb24, u32(u32, u32, u32, u32)> call_0020bb24;  // (from the original)
inline constexpr guest::Function<0x0024a548, u32(u32, u32, u32, u32)> call_0024a548;  // (from the original)
inline constexpr guest::Function<0x002bf574, u32(u32, u32, u32, u32)> call_002bf574;  // (from the original)
inline constexpr guest::Function<0x002d4594, u32(u32, u32, u32, u32)> call_002d4594;  // (from the original)
inline constexpr guest::Function<0x002eaf8c, u32(u32, u32, u32, u32)> call_002eaf8c;  // (from the original)
inline constexpr guest::Function<0x002ebce4, u32(u32, u32, u32, u32)> call_002ebce4;  // (from the original)
inline constexpr guest::Function<0x002ebe0c, u32(u32, u32, u32, u32)> call_002ebe0c;  // (from the original)
inline constexpr guest::Function<0x002fc20c, u32(u32, u32, u32, u32)> call_002fc20c;  // (from the original)
inline constexpr guest::Function<0x00301d0d, u32(u32, u32, u32, u32)> call_00301d0c;  // (from the original)
inline constexpr guest::Function<0x00302084, u32(u32, u32, u32, u32)> call_00302084;  // (from the original)
inline constexpr guest::Function<0x00303534, u32(u32, u32, u32, u32)> call_00303534;  // (from the original)
inline constexpr guest::Function<0x003052f0, u32(u32, u32, u32, u32)> call_003052f0;  // (from the original)
inline constexpr guest::Function<0x005cdd70, u32(u32, u32, u32, u32)> call_005cdd70;  // (from the original)
inline constexpr guest::Function<0x005cdf48, u32(u32, u32, u32, u32)> call_005cdf48;  // (from the original)
inline constexpr guest::Function<0x00613658, u32(u32, u32, u32, u32)> call_00613658;  // (from the original)
inline constexpr guest::Function<0x00613764, u32(u32, u32, u32, u32)> call_00613764;  // (from the original)
inline constexpr guest::Function<0x006bc5d8, u32(u32, u32, u32, u32)> call_006bc5d8;  // (from the original)
inline constexpr guest::Function<0x006f3d0c, u32(u32, u32, u32, u32)> call_006f3d0c;  // (from the original)

u32 f_005cb49c(u32 r0) {
    u32 ea = 0;
    u32 r1 = 0;
    u32 r2 = 0;
    u32 r3 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 0x10;  // (from the original)
    r0 = r0 + 0x20u;  // (from the original)
    r2 = 0xa480u;  // (from the original)
    r1 = 0x6be060u;  // (from the original)
    r3 = 4u;
    guest::cpu()->r[13] = r13;
    r0 = call_00301d0c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 + 0x20000u;  // (from the original)
    r0 = r0 + 0x9200u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00112584(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 + 0x22000u;  // (from the original)
    r0 = r0 + 0xbe0u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_005cdd70(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 + 0x4400u;  // (from the original)
    r0 = r0 + 0xbcu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002bf574(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 + 0x2800u;  // (from the original)
    r0 = r0 + 0xf4u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002d4594(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 + 0x850u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00613764(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 + 0x8000u;  // (from the original)
    r0 = r0 + 0x2480u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002ebe0c(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = 0x6214fu;  // (from the original)
    r0 = r0 - 0x5c000u;  // (from the original)
    r0 = r0 - 0x1880u;  // (from the original)
    r4 = r0 + r1;
    r5 = 0u;
    *gptr<u32>(r4) = u32(r5);
    *gptr<u32>(r4 + 4u) = u32(r5);
    *gptr<u32>(r4 + 8u) = u32(r5);
    *gptr<u32>(r4 + 0xcu) = u32(r5);  // (from the original)
    r0 = r4;
    *gptr<u16>(r4 + 0x10u) = u16(r5);  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_006f3d0c(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = 0xfff9deb1u;  // (from the original)
    r1 = 0x62162u;  // (from the original)
    r0 = r0 + r4;
    r0 = r0 + r1;
    guest::cpu()->r[13] = r13;
    r0 = call_001b23ac(r0, r1, r2, r3);
    r1 = 0xfff9de9eu;  // (from the original)
    r2 = ~0u;
    r3 = ~0x80000000u;  // (from the original)
    r0 = r0 + r1;
    r1 = 0x621b2u;  // (from the original)
    r4 = r0 + r1;
    r0 = r4;
    guest::cpu()->r[13] = r13;
    r0 = call_005cdf48(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r4 + 8u;
    guest::cpu()->r[13] = r13;
    r0 = call_002fc20c(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = 0xfff9de4eu;  // (from the original)
    r0 = r0 - 8u;
    r0 = r0 + r1;
    r0 = r0 + 0x62000u;  // (from the original)
    r0 = r0 + 0x1ccu;  // (from the original)
    r4 = r0;
    guest::cpu()->r[13] = r13;
    r0 = call_001b1b2c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r0 = r4 + 4u;
    r4 = r0;
    r2 = ~0u;
    r3 = ~0x80000000u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_005cdf48(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r0 = r4 + 8u;
    r2 = ~0u;
    r3 = ~0x80000000u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_005cdf48(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r4 + 0x18u;  // (from the original)
    r1 = 0u;
    guest::cpu()->r[13] = r13;
    r0 = call_00303534(r0, r1, r2, r3);
    r1 = 0x2fc20cu;  // (from the original)
    r3 = 0x18u;  // (from the original)
    r2 = 4u;
    r0 = r4 + 0x20u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00301d0c(r0, r1, r2, r3);
    r1 = 0x2fc20cu;  // (from the original)
    r0 = r0 + 0x7cu;  // (from the original)
    r3 = 0xdu;  // (from the original)
    r2 = 4u;
    guest::cpu()->r[13] = r13;
    r0 = call_00301d0c(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r4 = r0;
    r0 = r0 + 0x34u;  // (from the original)
    r1 = 0u;
    guest::cpu()->r[13] = r13;
    r0 = call_00303534(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r4 + 0x4cu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_001e017c(r0, r1, r2, r3);
    r0 = r0 + 0x4000u;  // (from the original)
    r1 = 0x2fc20cu;  // (from the original)
    r0 = r0 + 0x380u;  // (from the original)
    r3 = 7u;
    r2 = 4u;
    guest::cpu()->r[13] = r13;
    r0 = call_00301d0c(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r4 = r0;
    r0 = r0 + 0x24u;  // (from the original)
    r1 = 0u;
    guest::cpu()->r[13] = r13;
    r0 = call_00303534(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r4 = r4 + 0x2cu;  // (from the original)
    r0 = r4 + 8u;
    r1 = 0u;
    guest::cpu()->r[13] = r13;
    r0 = call_00303534(r0, r1, r2, r3);
    r1 = 0x2fc20cu;  // (from the original)
    r3 = 0xbu;  // (from the original)
    r2 = 4u;
    r0 = r4 + 0x12u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00301d0c(r0, r1, r2, r3);
    r3 = 4u;
    r1 = 0x2fc20cu;  // (from the original)
    r0 = r0 + 0x3au;  // (from the original)
    r2 = r3;
    guest::cpu()->r[13] = r13;
    r0 = call_00301d0c(r0, r1, r2, r3);
    r1 = 0x1b4b7cu;  // (from the original)
    r3 = 4u;
    r2 = 0x2eu;  // (from the original)
    r0 = r0 + 0x14u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00301d0c(r0, r1, r2, r3);
    r1 = 0x613dc0u;  // (from the original)
    r3 = 4u;
    r2 = 8u;
    r0 = r0 + 0xb8u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00301d0c(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r4 = r0 + 0x20u;  // (from the original)
    r0 = r0 + 0x28u;  // (from the original)
    r1 = 0u;
    guest::cpu()->r[13] = r13;
    r0 = call_00303534(r0, r1, r2, r3);
    r1 = 0x2fc20cu;  // (from the original)
    r3 = 6u;
    r2 = 4u;
    r0 = r4 + 0x12u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00301d0c(r0, r1, r2, r3);
    r3 = 4u;
    r1 = 0x2fc20cu;  // (from the original)
    r0 = r0 + 0x1eu;  // (from the original)
    r2 = r3;
    guest::cpu()->r[13] = r13;
    r0 = call_00301d0c(r0, r1, r2, r3);
    r3 = 4u;
    r1 = 0x2fc20cu;  // (from the original)
    r2 = r3;
    r0 = r0 + 0x10u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00301d0c(r0, r1, r2, r3);
    r1 = 0x313414u;  // (from the original)
    r3 = 4u;
    r2 = 8u;
    r0 = r0 + 0x14u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00301d0c(r0, r1, r2, r3);
    r1 = 0x2fc20cu;  // (from the original)
    r0 = r0 + 0x30u;  // (from the original)
    r3 = 5u;
    r2 = 4u;
    guest::cpu()->r[13] = r13;
    r0 = call_00301d0c(r0, r1, r2, r3);
    r1 = 0x2fc20cu;  // (from the original)
    r3 = 8u;
    r2 = 4u;
    r0 = r0 + 0x14u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00301d0c(r0, r1, r2, r3);
    r3 = 8u;
    r1 = 0x613dc0u;  // (from the original)
    r2 = r3;
    r0 = r0 + 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00301d0c(r0, r1, r2, r3);
    r1 = 0x1b4980u;  // (from the original)
    r3 = 8u;
    r2 = 0x870u;  // (from the original)
    r0 = r0 + 0x40u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00301d0c(r0, r1, r2, r3);
    r0 = r0 + 0x4000u;  // (from the original)
    r1 = 0x613dc0u;  // (from the original)
    r3 = 4u;
    r2 = 8u;
    r0 = r0 + 0x380u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00301d0c(r0, r1, r2, r3);
    r1 = 0x2fc20cu;  // (from the original)
    r3 = 3u;
    r2 = 4u;
    r0 = r0 + 0x22u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00301d0c(r0, r1, r2, r3);
    r1 = 0x2fc20cu;  // (from the original)
    r0 = r0 + 0x10u;  // (from the original)
    r3 = 8u;
    r2 = 4u;
    guest::cpu()->r[13] = r13;
    r0 = call_00301d0c(r0, r1, r2, r3);
    r1 = 0x2fc20cu;  // (from the original)
    r3 = 0x12u;  // (from the original)
    r2 = 4u;
    r0 = r0 + 0x2au;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00301d0c(r0, r1, r2, r3);
    r1 = 0x1df4c4u;  // (from the original)
    r3 = 2u;
    r2 = 0x18u;  // (from the original)
    r0 = r0 + 0x5au;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00301d0c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 + 0x40u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002fc20c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 + 4u;
    guest::cpu()->r[13] = r13;
    r0 = call_002fc20c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 + 4u;
    guest::cpu()->r[13] = r13;
    r0 = call_002fc20c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 + 4u;
    guest::cpu()->r[13] = r13;
    r0 = call_002fc20c(r0, r1, r2, r3);
    r3 = 4u;
    r1 = 0x2fc20cu;  // (from the original)
    r0 = r0 + 0x1au;  // (from the original)
    r2 = r3;
    guest::cpu()->r[13] = r13;
    r0 = call_00301d0c(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r4 = r0 + 0x10u;  // (from the original)
    r0 = r4;
    r1 = 0u;
    guest::cpu()->r[13] = r13;
    r0 = call_00303534(r0, r1, r2, r3);
    r1 = 0x613dc0u;  // (from the original)
    r3 = 0xeu;  // (from the original)
    r2 = 8u;
    r0 = r4 + 8u;
    guest::cpu()->r[13] = r13;
    r0 = call_00301d0c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 + 0x78u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002fc20c(r0, r1, r2, r3);
    r1 = 0x2fc20cu;  // (from the original)
    r3 = 2u;
    r2 = 4u;
    r0 = r0 + 4u;
    guest::cpu()->r[13] = r13;
    r0 = call_00301d0c(r0, r1, r2, r3);
    r1 = 0x2fc20cu;  // (from the original)
    r0 = r0 + 8u;
    r3 = 2u;
    r2 = 4u;
    guest::cpu()->r[13] = r13;
    r0 = call_00301d0c(r0, r1, r2, r3);
    r1 = r0;
    ea = r0 + 0x18u;  // (from the original)
    *gptr<u16>(ea) = u16(r5);
    r0 = ea;
    r1 = r1 - 0x8c00u;  // (from the original)
    *gptr<u8>(r0 + 2u) = u8(r5);
    r1 = r1 - 4u;
    *gptr<u8>(r0 + 3u) = u8(r5);
    r0 = r1 + 0x8000u;  // (from the original)
    r0 = r0 + 0xc20u;  // (from the original)
    r6 = 0xfff951c8u;  // (from the original)
    *gptr<u16>(r0) = u16(r5);
    *gptr<u8>(r0 + 2u) = u8(r5);
    *gptr<u8>(r0 + 3u) = u8(r5);
    r0 = r1 - 0x62000u;  // (from the original)
    r0 = r0 - 0x1d0u;  // (from the original)
    r1 = 0x301e94u;  // (from the original)
    r0 = r0 - r6;
    r3 = 0x43u;  // (from the original)
    r2 = 4u;
    guest::cpu()->r[13] = r13;
    r0 = call_00301d0c(r0, r1, r2, r3);
    r1 = 0x301e94u;  // (from the original)
    r3 = 0x48u;  // (from the original)
    r2 = 4u;
    r0 = r0 + 0x10cu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00301d0c(r0, r1, r2, r3);
    r1 = 0x301e94u;  // (from the original)
    r3 = 0x1eu;  // (from the original)
    r2 = 4u;
    r0 = r0 + 0x120u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00301d0c(r0, r1, r2, r3);
    r1 = 0x301e94u;  // (from the original)
    r3 = 0x48u;  // (from the original)
    r2 = 4u;
    r0 = r0 + 0x78u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00301d0c(r0, r1, r2, r3);
    r1 = 0x301e94u;  // (from the original)
    r3 = 0x19u;  // (from the original)
    r2 = 4u;
    r0 = r0 + 0x120u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00301d0c(r0, r1, r2, r3);
    r1 = 0x301e94u;  // (from the original)
    r3 = 8u;
    r2 = 4u;
    r0 = r0 + 0x64u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00301d0c(r0, r1, r2, r3);
    r2 = 0xb98u;  // (from the original)
    r1 = 0x1b6028u;  // (from the original)
    r3 = 4u;
    r0 = r0 + 0x134u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00301d0c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r4 = r0 - 0x400u;  // (from the original)
    r4 = r4 - 0x15cu;  // (from the original)
    r0 = r4;
    guest::cpu()->r[13] = r13;
    r0 = call_006bc5d8(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r4 + r6;
    r0 = r0 + 0x6e000u;  // (from the original)
    r0 = r0 + 0x1f4u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00613658(r0, r1, r2, r3);
    r1 = 0x6e212u;  // (from the original)
    r0 = r0 - 0x6e000u;  // (from the original)
    r0 = r0 - 0x1f4u;  // (from the original)
    r4 = r0 + r1;
    r2 = ~0u;
    r3 = ~0x80000000u;  // (from the original)
    r0 = r4;
    guest::cpu()->r[13] = r13;
    r0 = call_005cdf48(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = 0xfff91deeu;  // (from the original)
    r1 = 0x6e21au;  // (from the original)
    r0 = r0 + r4;
    r0 = r0 + r1;
    r1 = 0xfff91de6u;  // (from the original)
    r0 = r0 + r1;
    r0 = r0 + 0x6e000u;  // (from the original)
    r0 = r0 + 0x224u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_001b1a44(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 + 0x10u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0020bb24(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 + 4u;
    guest::cpu()->r[13] = r13;
    r0 = call_00108434(r0, r1, r2, r3);
    r1 = 0x6fb4cu;  // (from the original)
    r0 = r0 - 0x6e000u;  // (from the original)
    r0 = r0 - 0x238u;  // (from the original)
    r0 = r0 + r1;
    r4 = r0;
    r2 = ~0u;
    r3 = ~0x80000000u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_005cdf48(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = 0xfff904b4u;  // (from the original)
    r1 = 0x6fb68u;  // (from the original)
    r0 = r0 + r4;
    r0 = r0 + r1;
    r0 = r0 + 2u;
    guest::cpu()->r[13] = r13;
    r0 = call_002fc20c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r4 = r0 - 2u;
    r0 = r0 + 4u;
    r2 = ~0u;
    r3 = ~0x80000000u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_005cdf48(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r0 = r4 + 0xeu;  // (from the original)
    r2 = ~0u;
    r3 = ~0x80000000u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_005cdf48(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r0 = r4 + 0x16u;  // (from the original)
    r2 = ~0u;
    r3 = ~0x80000000u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_005cdf48(r0, r1, r2, r3);
    r1 = 0x1b4b7cu;  // (from the original)
    r3 = 3u;
    r2 = 0x2eu;  // (from the original)
    r0 = r4 + 0x1eu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00301d0c(r0, r1, r2, r3);
    r1 = 0x2fc20cu;  // (from the original)
    r3 = 3u;
    r2 = 4u;
    r0 = r0 + 0x120u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00301d0c(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r4 = r0 - 0x100u;  // (from the original)
    r4 = r4 - 0x3eu;  // (from the original)
    r1 = 1u;
    r0 = r4;
    guest::cpu()->r[13] = r13;
    r0 = call_00302084(r0, r1, r2, r3);
    r0 = 0xfff90498u;  // (from the original)
    r1 = 0x6fcb2u;  // (from the original)
    *gptr<u8>(r4) = u8(r5);
    r0 = r0 + r4;
    r0 = r0 + r1;
    r4 = r0 + 1u;
    r0 = r4;
    r2 = ~0u;
    r3 = ~0x80000000u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_005cdf48(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r4 = r4 + 8u;
    r2 = ~0u;
    r3 = ~0x80000000u;  // (from the original)
    r0 = r4;
    guest::cpu()->r[13] = r13;
    r0 = call_005cdf48(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r4 = r4 - 9u;
    r0 = r4 + 0x11u;  // (from the original)
    r2 = ~0u;
    r3 = ~0x80000000u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_005cdf48(r0, r1, r2, r3);
    r1 = 0x1b4b7cu;  // (from the original)
    r3 = 3u;
    r2 = 0x2eu;  // (from the original)
    r0 = r4 + 0x1au;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00301d0c(r0, r1, r2, r3);
    r1 = 0x2fc20cu;  // (from the original)
    r3 = 3u;
    r2 = 4u;
    r0 = r0 + 0x120u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00301d0c(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r4 = r0 - 0x100u;  // (from the original)
    r4 = r4 - 0x3au;  // (from the original)
    r1 = 1u;
    r0 = r4;
    guest::cpu()->r[13] = r13;
    r0 = call_002eaf8c(r0, r1, r2, r3);
    r0 = 0xfff9034eu;  // (from the original)
    *gptr<u8>(r4) = u8(r5);
    r1 = 0x6f533cu;  // (from the original)
    r0 = r0 + r4;
    r4 = 0xfff90208u;  // (from the original)
    r3 = 4u;
    r2 = 0xcu;  // (from the original)
    r0 = r0 - r4;
    guest::cpu()->r[13] = r13;
    r0 = call_00301d0c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r0 = r0 + r4;
    r6 = r4 - 0x30u;  // (from the original)
    r4 = r0 - r6;
    r0 = r4;
    r2 = ~0u;
    r3 = ~0x80000000u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_005cdf48(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = 0x6fe36u;  // (from the original)
    r0 = r4 + r6;
    r0 = r0 + r1;
    guest::cpu()->r[13] = r13;
    r0 = call_002ebce4(r0, r1, r2, r3);
    r1 = r6 - 0xeu;  // (from the original)
    r1 = r1 + r0;
    r0 = r1 + 0x70000u;  // (from the original)
    r0 = r0 + 0xe60u;  // (from the original)
    r2 = ~0u;
    *gptr<u16>(r0) = u16(r5);
    r0 = 0x70e62u;  // (from the original)
    r3 = ~0x80000000u;  // (from the original)
    r4 = r1 + r0;
    r0 = r4;
    guest::cpu()->r[13] = r13;
    r0 = call_005cdf48(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r4 + 0xcu;  // (from the original)
    r4 = r0 - 0xcu;  // (from the original)
    *gptr<u8>(r0 - 4u) = u8(r5);
    guest::cpu()->r[13] = r13;
    r0 = call_003052f0(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = 0xfff8f19eu;  // (from the original)
    r1 = 0x70e9cu;  // (from the original)
    *gptr<u8>(r4 + 9u) = u8(r5);
    r0 = r0 + r4;
    r0 = r0 + r1;
    *gptr<u8>(r4 + 0xau) = u8(r5);  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_001b4980(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    r2 = 0xfff8f164u;  // (from the original)
    r1 = 0x7170cu;  // (from the original)
    r0 = r0 + r2;
    r0 = r0 + r1;
    guest::cpu()->r[13] = r13;
    r0 = call_001b6618(r0, r1, r2, r3);
    r1 = 0xfff8e8f4u;  // (from the original)
    r2 = ~0u;
    r3 = ~0x80000000u;  // (from the original)
    r4 = r0 + r1;
    r0 = r4 + 0x71000u;  // (from the original)
    r0 = r0 + 0x7e0u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_005cdf48(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    r0 = 0x717e8u;  // (from the original)
    r1 = 0x717ecu;  // (from the original)
    r2 = r6 - 0x19c0u;  // (from the original)
    r0 = r0 + r4;
    *gptr<u16>(r0) = u16(r5);
    *gptr<u8>(r0 + 2u) = u8(r5);
    *gptr<u8>(r0 + 3u) = u8(r5);
    r0 = r0 + r2;
    r0 = r0 + r1;
    guest::cpu()->r[13] = r13;
    r0 = call_0024a548(r0, r1, r2, r3);
    r1 = 0xfff8e814u;  // (from the original)
    r0 = r0 + r1;
    r13 = r13 + 0x10;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_005cb49c
GUEST_EXPORT(0x005cb49c, d_005cb49c::f_005cb49c);

// f_005cbc3c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005cbc3c {

struct __attribute__((packed)) Object_005cbc3c_0 {
    u8 unknown_0[0x270];  // (not used here)
    u8 byte_270;
};
GUEST_OFFSET(Object_005cbc3c_0, byte_270, 0x270);  // (from the original)


void f_005cbc3c(gptr<Object_005cbc3c_0> arg0, u32 r1) {
    r1 = u32(arg0->byte_270) & ~7u | r1 & 7u;
    arg0->byte_270 = u8(r1);
    guest::cpu()->r[1] = r1;
    return;
}

}  // namespace d_005cbc3c
GUEST_EXPORT(0x005cbc3c, d_005cbc3c::f_005cbc3c);

// f_005cbc54: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005cbc54 {

inline constexpr guest::Function<0x001b23f0, u32(u32, u32, u32, u32)> call_001b23f0;  // (from the original)
inline constexpr guest::Function<0x001b4a8c, u32(u32, u32, u32, u32)> call_001b4a8c;  // (from the original)
inline constexpr guest::Function<0x002f8574, u32(u32, u32, u32, u32)> call_002f8574;  // (from the original)
inline constexpr guest::Function<0x002fb94c, u32(u32, u32, u32, u32)> call_002fb94c;  // (from the original)
inline constexpr guest::Function<0x002fcb34, u32(u32, u32, u32, u32)> call_002fcb34;  // (from the original)
inline constexpr guest::Function<0x002ff408, u32(u32, u32, u32, u32)> call_002ff408;  // (from the original)
inline constexpr guest::Function<0x002ffad8, u32(u32, u32, u32, u32)> call_002ffad8;  // (from the original)

u32 f_005cbc54(u32 r0, u32 r1, u32 r2) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 zf = 0;
    u32 cf = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r5 = r1;
    r4 = r0;
    r0 = call_002ff408(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r0 = r5;
    r0 = call_002fcb34(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    if (r0 == 0x2au) {  // (from the original)
        r1 = u32(*gptr<u8>(r4 + 0x270u)) | 0x20u;  // (from the original)
        *gptr<u8>(r4 + 0x270u) = u8(r1);  // (from the original)
    }
    r0 = r5;
    r0 = call_002ffad8(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    zf = r0 == 0xffu;  // (from the original)
    cf = r0 >= 0xffu;  // (from the original)
    if (!cf || zf) {
        *gptr<u8>(r4 + 0x26fu) = u8(r0);  // (from the original)
    }
    if (cf && !zf) {
        r1 = 0u;
    }
    r0 = 0u;
    if (cf && !zf) {
        *gptr<u8>(r4 + 0x26fu) = u8(r1);  // (from the original)
    }
    *gptr<u8>(r4 + 0x271u) = u8(r0);  // (from the original)
    r0 = call_002fb94c(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r6 = r0;
    if (r0 != 0) {
        r2 = 1u;
        r1 = r6 + 0x55a6u;  // (from the original)
        r0 = r4 + 0x34u;  // (from the original)
        *gptr<u8>(r4 + 0x64u) = u8(r2);  // (from the original)
        r0 = call_001b4a8c(r0, r1, r2, guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r5 = r4;
        *gptr<u8>(r4 + 0x270u) = u8(u32(*gptr<u8>(r4 + 0x270u)) & ~7u | 3u);  // (from the original)
        r4 = r6 + 0x8908u;  // (from the original)
        if (u32(*gptr<u8>(r4 + 0xc7u)) >= 0x20u) {  // (from the original)
            r0 = r4;
            r0 = call_001b23f0(r0, r1, r2, guest::cpu()->r[3]);
        }
        r2 = 0x42u;  // (from the original)
        r1 = r4 + 0x84u;  // (from the original)
        r0 = r5 + 0x22cu;  // (from the original)
        r0 = call_002f8574(r0, r1, r2, guest::cpu()->r[3]);
        r1 = r4;
        r2 = 0x42u;  // (from the original)
        if (u32(*gptr<u8>(r5 + 0x30u)) == 6u) {  // (from the original)
            r0 = u32(*gptr<u8>(r1 + 0xc7u));  // (from the original)
            r1 = r4 + 0x42u;  // (from the original)
        } else {
            r0 = u32(*gptr<u8>(r1 + 0xc6u));  // (from the original)
        }
        *gptr<u8>(r5 + 0x26eu) = u8(r0);  // (from the original)
        r0 = r5 + 0x68u;  // (from the original)
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        return call_002f8574(r0, r1, r2, guest::cpu()->r[3]);
    }
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_005cbc54
GUEST_EXPORT(0x005cbc54, d_005cbc54::f_005cbc54);

// f_005cbd34: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005cbd34 {

inline constexpr guest::Function<0x002f8574, u32(u32, u32, u32, u32)> call_002f8574;  // (from the original)
inline constexpr guest::Function<0x002fb328, u32(u32, u32, u32, u32)> call_002fb328;  // (from the original)
inline constexpr guest::Function<0x002fb94c, u32(u32, u32, u32, u32)> call_002fb94c;  // (from the original)
inline constexpr guest::Function<0x003009a9, u32(u32, u32, u32, u32)> call_003009a8;  // (from the original)
inline constexpr guest::Function<0x00301e20, u32(u32, u32, u32, u32)> call_00301e20;  // (from the original)
inline constexpr guest::Function<0x00613de4, u32(u32, u32, u32, u32)> call_00613de4;  // (from the original)

u32 f_005cbd34(u32 r0, u32 r1, u32 r2) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r4 = r0;
    r5 = r1;
    r0 = call_002fb328(r0, r1, r2, guest::cpu()->r[3]);
    r2 = guest::cpu()->r[2];
    r1 = r5;
    r0 = r0 + 0x292a4u;  // (from the original)
    r0 = call_003009a8(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r5 = r0;
    if (r0 == 0) {
        goto L_5cbd7c;
    }
    r0 = call_00301e20(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    if (r0 == 0) {
        goto L_5cbd7c;
    }
    r2 = 2u;
    r0 = r4;
    r1 = r5;
    *gptr<u8>(r4 + 0x30u) = u8(r2);  // (from the original)
    r0 = call_00613de4(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
L_5cbd7c:;
    r0 = call_002fb94c(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 != 0) {
        r1 = r0 + 0x8908u;  // (from the original)
        r2 = 0x42u;  // (from the original)
        if (u32(*gptr<u8>(r4 + 0x30u)) == 6u) {  // (from the original)
            r0 = u32(*gptr<u8>(r1 + 0xc7u));  // (from the original)
            r1 = r1 + 0x42u;  // (from the original)
        } else {
            r0 = u32(*gptr<u8>(r1 + 0xc6u));  // (from the original)
        }
        *gptr<u8>(r4 + 0x26eu) = u8(r0);  // (from the original)
        r0 = r4 + 0x68u;  // (from the original)
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        return call_002f8574(r0, r1, r2, guest::cpu()->r[3]);
    }
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_005cbd34
GUEST_EXPORT(0x005cbd34, d_005cbd34::f_005cbd34);

// f_005cbdc4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005cbdc4 {

inline constexpr guest::Function<0x001b4a8c, u32(u32, u32, u32, u32)> call_001b4a8c;  // (from the original)
inline constexpr guest::Function<0x002f8574, u32(u32, u32, u32, u32)> call_002f8574;  // (from the original)
inline constexpr guest::Function<0x002fb94c, u32(u32, u32, u32, u32)> call_002fb94c;  // (from the original)

u32 f_005cbdc4(u32 r0, u32 r1, u32 r2) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r4 = r0;
    r0 = call_002fb94c(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r5 = r0;
    if (r0 != 0) {
        r2 = 1u;
        r0 = r4;
        r1 = r5 + 0x55a6u;  // (from the original)
        *gptr<u8>(r4 + 0x30u) = u8(r2);  // (from the original)
        r0 = call_001b4a8c(r0, r1, r2, guest::cpu()->r[3]);
        *gptr<u8>(r4 + 0x30u) = u8(6u);  // (from the original)
        r0 = r4 + 0x68u;  // (from the original)
        r1 = r5 + 0x894au;  // (from the original)
        *gptr<u8>(r4 + 0x26eu) = u8(u32(*gptr<u8>(r5 + 0x89cfu)));  // (from the original)
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        r2 = 0x42u;  // (from the original)
        return call_002f8574(r0, r1, r2, guest::cpu()->r[3]);
    }
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_005cbdc4
GUEST_EXPORT(0x005cbdc4, d_005cbdc4::f_005cbdc4);

// f_005cbe34: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005cbe34 {

struct __attribute__((packed)) Object_005cbe34_0 {
    u8 unknown_0[0x64];  // (not used here)
    u8 byte_64;
};
GUEST_OFFSET(Object_005cbe34_0, byte_64, 0x64);  // (from the original)

inline constexpr guest::Function<0x00613de4, u32(u32, u32, u32, u32)> call_00613de4;  // (from the original)

u32 f_005cbe34(gptr<Object_005cbe34_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r2 = 0;
    r0 = r0 + 0x34u;  // (from the original)
    r2 = 2u;
    arg0->byte_64 = u8(r2);
    return call_00613de4(r0, guest::cpu()->r[1], r2, guest::cpu()->r[3]);
}

}  // namespace d_005cbe34
GUEST_EXPORT(0x005cbe34, d_005cbe34::f_005cbe34);

// f_005cbe84: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005cbe84 {

struct __attribute__((packed)) Object_005cbe84_0 {
    u8 unknown_0[0x270];  // (not used here)
    u8 byte_270;
};
GUEST_OFFSET(Object_005cbe84_0, byte_270, 0x270);  // (from the original)


void f_005cbe84(gptr<Object_005cbe84_0> arg0) {
    u32 r1 = 0;
    r1 = u32(arg0->byte_270);
    if ((r1 & 7u) != 1u) {
        guest::cpu()->r[1] = r1;
        return;
    }
    r1 = r1 & ~7u | 2u;
    arg0->byte_270 = u8(r1);
    guest::cpu()->r[1] = r1;
    return;
}

}  // namespace d_005cbe84
GUEST_EXPORT(0x005cbe84, d_005cbe84::f_005cbe84);

// f_005cbee4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005cbee4 {

inline constexpr guest::Function<0x001b4a8c, u32(u32, u32, u32, u32)> call_001b4a8c;  // (from the original)
inline constexpr guest::Function<0x002f8574, u32(u32, u32, u32, u32)> call_002f8574;  // (from the original)
inline constexpr guest::Function<0x002fb94c, u32(u32, u32, u32, u32)> call_002fb94c;  // (from the original)
inline constexpr guest::Function<0x002fbd54, u32(u32, u32, u32, u32)> call_002fbd54;  // (from the original)
inline constexpr guest::Function<0x00303770, u32(u32, u32, u32, u32)> call_00303770;  // (from the original)

u32 f_005cbee4(u32 r0, u32 r1, u32 r2) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r4 = r0;
    r5 = r2;
    r0 = r1 & 0xffu;  // (from the original)
    r0 = call_00303770(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    if (r0 == 0) {
        goto L_5cbf2c;
    }
    r0 = r0 + 0x55a6u;  // (from the original)
    r6 = r0;
    r0 = call_002fbd54(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    if (r0 == 0) {
        goto L_5cbf2c;
    }
    r2 = 1u;
    r0 = r4;
    r1 = r6;
    *gptr<u8>(r4 + 0x30u) = u8(r2);  // (from the original)
    r0 = call_001b4a8c(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
L_5cbf2c:;
    if (r5 != 0) {
        goto L_5cbf74;
    }
    r0 = call_002fb94c(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 == 0) {
        goto L_5cbf74;
    }
    r1 = r0 + 0x8908u;  // (from the original)
    r2 = 0x42u;  // (from the original)
    if (u32(*gptr<u8>(r4 + 0x30u)) == 6u) {  // (from the original)
        r0 = u32(*gptr<u8>(r1 + 0xc7u));  // (from the original)
        r1 = r1 + 0x42u;  // (from the original)
    } else {
        r0 = u32(*gptr<u8>(r1 + 0xc6u));  // (from the original)
    }
    *gptr<u8>(r4 + 0x26eu) = u8(r0);  // (from the original)
    r0 = r4 + 0x68u;  // (from the original)
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    return call_002f8574(r0, r1, r2, guest::cpu()->r[3]);
L_5cbf74:;
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_005cbee4
GUEST_EXPORT(0x005cbee4, d_005cbee4::f_005cbee4);

// f_005cbf78: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005cbf78 {

inline constexpr guest::Function<0x002f825c, u32(u32, u32, u32, u32)> call_002f825c;  // (from the original)
inline constexpr guest::Function<0x003083bc, u32(u32, u32, u32, u32)> call_003083bc;  // (from the original)
inline constexpr guest::Function<0x0056d828, u32(u32, u32, u32, u32)> call_0056d828;  // (from the original)
inline constexpr guest::Function<0x005f1294, u32(u32, u32, u32, u32)> call_005f1294;  // (from the original)
inline constexpr guest::Function<0x005f4bfc, u32(u32, u32, u32, u32)> call_005f4bfc;  // (from the original)

u32 f_005cbf78(u32 r0_unused, u32 r1, u32 r2, u32 r3) {
    u32 ea = 0;
    u32 res = 0;
    u32 r0 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 0x40u;  // (from the original)
    r7 = r1;
    r6 = r2;
    r0 = r13;
    r2 = 9u;
    r1 = r13 + 0x18u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_003083bc(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r5 = 0x90a3e8u;  // (from the original)
    *gptr<u32>(r0) = u32(r5);
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
    r1 = 0x8906ecu;  // (from the original)
    r0 = r4 + 0x18u;  // (from the original)
    *gptr<u16>(r4 + 0x18u) = u16(u32(*gptr<u16>(r1)));  // (from the original)
    r2 = 4u;
    do {
L_5cbfc8:;
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
    r0 = r4;
    r1 = r6;
    guest::cpu()->r[13] = r13;
    r0 = call_0056d828(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    r2 = 0u;
    r1 = r13;
    r0 = r7;
    guest::cpu()->r[13] = r13;
    r0 = call_005f1294(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    *gptr<u32>(r13) = u32(r5);
    r0 = r13;
    r13 = r13 + 0x40u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_005cbf78
GUEST_EXPORT(0x005cbf78, d_005cbf78::f_005cbf78);

// f_005cc454: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005cc454 {

struct __attribute__((packed)) Object_005cc454_0 {
    u8 unknown_0[0x30];  // (not used here)
    u8 byte_30;
};
GUEST_OFFSET(Object_005cc454_0, byte_30, 0x30);  // (from the original)


void f_005cc454(gptr<Object_005cc454_0> arg0) {
    u32 r1 = 0;
    r1 = u32(arg0->byte_30);
    if (r1 == 1u) {
        r1 = 3u;
        arg0->byte_30 = u8(r1);
        guest::cpu()->r[1] = r1;
        return;
    }
    if (r1 == 2u) {
        r1 = 4u;
        arg0->byte_30 = u8(r1);
        guest::cpu()->r[1] = r1;
        return;
    }
    if (r1 == 3u) {
        r1 = 3u;
        arg0->byte_30 = u8(r1);
        guest::cpu()->r[1] = r1;
        return;
    }
    if (r1 != 4u) {
        r1 = 5u;
        arg0->byte_30 = u8(r1);
        guest::cpu()->r[1] = r1;
        return;
    }
    r1 = 4u;
    arg0->byte_30 = u8(r1);
    guest::cpu()->r[1] = r1;
    return;
}

}  // namespace d_005cc454
GUEST_EXPORT(0x005cc454, d_005cc454::f_005cc454);

// f_005cc524: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005cc524 {

inline constexpr guest::Function<0x002f8574, u32(u32, u32, u32, u32)> call_002f8574;  // (from the original)
inline constexpr guest::Function<0x002fbb30, u32(u32, u32, u32, u32)> call_002fbb30;  // (from the original)
inline constexpr guest::Function<0x002fc8e8, u32(u32, u32, u32, u32)> call_002fc8e8;  // (from the original)
inline constexpr guest::Function<0x00311c70, u32(u32, u32, u32, u32)> call_00311c70;  // (from the original)

u32 f_005cc524(u32 r0, u32 r1) {
    u32 r2 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r5 = r0;
    r4 = r1;
    r2 = 0x31u;  // (from the original)
    r0 = call_002fbb30(r0, r1, r2, guest::cpu()->r[3]);
    r2 = 0x31u;  // (from the original)
    r1 = r4 + 0x34u;  // (from the original)
    r0 = r5 + 0x34u;  // (from the original)
    r0 = call_002fbb30(r0, r1, r2, guest::cpu()->r[3]);
    r2 = 0x42u;  // (from the original)
    r1 = r4 + 0x68u;  // (from the original)
    r0 = r5 + 0x68u;  // (from the original)
    r0 = call_002fbb30(r0, r1, r2, guest::cpu()->r[3]);
    r2 = 0x182u;  // (from the original)
    r1 = r4 + 0xaau;  // (from the original)
    r0 = r5 + 0xaau;  // (from the original)
    r0 = call_002f8574(r0, r1, r2, guest::cpu()->r[3]);
    r2 = 0x42u;  // (from the original)
    r1 = r4 + 0x22cu;  // (from the original)
    r0 = r5 + 0x22cu;  // (from the original)
    r0 = call_002fbb30(r0, r1, r2, guest::cpu()->r[3]);
    r2 = guest::cpu()->r[2];
    r1 = r4 + 0x274u;  // (from the original)
    *gptr<u8>(r5 + 0x26eu) = u8(u32(*gptr<u8>(r4 + 0x26eu)));  // (from the original)
    *gptr<u8>(r5 + 0x26fu) = u8(u32(*gptr<u8>(r4 + 0x26fu)));  // (from the original)
    *gptr<u8>(r5 + 0x270u) = u8(u32(*gptr<u8>(r4 + 0x270u)));  // (from the original)
    *gptr<u8>(r5 + 0x271u) = u8(u32(*gptr<u8>(r4 + 0x271u)));  // (from the original)
    *gptr<u8>(r5 + 0x272u) = u8(u32(*gptr<u8>(r4 + 0x272u)));  // (from the original)
    r0 = r5 + 0x274u;  // (from the original)
    r0 = call_002fc8e8(r0, r1, r2, guest::cpu()->r[3]);
    r2 = guest::cpu()->r[2];
    r1 = r4 + 0x278u;  // (from the original)
    r0 = r5 + 0x278u;  // (from the original)
    r0 = call_00311c70(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r0 = r5;
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_005cc524
GUEST_EXPORT(0x005cc524, d_005cc524::f_005cc524);

// f_005cc82c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005cc82c {

inline constexpr guest::Function<0x0027d310, u32(u32, u32, u32, u32)> call_0027d310;  // (from the original)

u32 f_005cc82c(u32 r0) {
    u32 r4 = guest::cpu()->r[4];
    guest::cpu()->r[13] -= 8u;
    r4 = r0;
    r0 = call_0027d310(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    r0 = ~0u;
    *gptr<u32>(r4 + 4u) = u32(r0);
    guest::cpu()->r[13] += 8u;
    return r0;
}

}  // namespace d_005cc82c
GUEST_EXPORT(0x005cc82c, d_005cc82c::f_005cc82c);

// f_005cc844: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005cc844 {

inline constexpr guest::Function<0x0010f16d, u32(u32, u32, u32, u32)> call_0010f16c;  // (from the original)
inline constexpr guest::Function<0x00116cf5, u32(u32, u32, u32, u32)> call_00116cf4;  // (from the original)
inline constexpr guest::Function<0x001e02f0, u32(u32, u32, u32, u32)> call_001e02f0;  // (from the original)
inline constexpr guest::Function<0x0020d8a4, u32(u32, u32, u32, u32)> call_0020d8a4;  // (from the original)
inline constexpr guest::Function<0x002267e4, u32(u32, u32, u32, u32)> call_002267e4;  // (from the original)
inline constexpr guest::Function<0x00241d34, u32(u32, u32, u32, u32)> call_00241d34;  // (from the original)
inline constexpr guest::Function<0x0027c2c8, u32(u32, u32, u32, u32)> call_0027c2c8;  // (from the original)
inline constexpr guest::Function<0x0027d310, u32(u32, u32, u32, u32)> call_0027d310;  // (from the original)
inline constexpr guest::Function<0x00284f90, u32(u32, u32, u32, u32)> call_00284f90;  // (from the original)
inline constexpr guest::Function<0x002fae84, u32(u32, u32, u32, u32)> call_002fae84;  // (from the original)
inline constexpr guest::Function<0x002fb310, u32(u32, u32, u32, u32)> call_002fb310;  // (from the original)
inline constexpr guest::Function<0x002fb918, u32(u32, u32, u32, u32)> call_002fb918;  // (from the original)
inline constexpr guest::Function<0x00300634, u32(u32, u32, u32, u32)> call_00300634;  // (from the original)
inline constexpr guest::Function<0x0030444c, u32(u32, u32, u32, u32)> call_0030444c;  // (from the original)
inline constexpr guest::Function<0x0051cd48, u32(u32, u32, u32, u32)> call_0051cd48;  // (from the original)
inline constexpr guest::Function<0x00582464, u32(u32, u32, u32, u32)> call_00582464;  // (from the original)
inline constexpr guest::Function<0x0058d52c, u32(u32, u32, u32, u32)> call_0058d52c;  // (from the original)
inline constexpr guest::Function<0x0058ecec, u32(u32, u32, u32, u32)> call_0058ecec;  // (from the original)
inline constexpr guest::Function<0x005bfbd4, u32(u32, u32, u32, u32)> call_005bfbd4;  // (from the original)
inline constexpr guest::Function<0x005cb1dc, u32(u32, u32, u32, u32)> call_005cb1dc;  // (from the original)
inline constexpr guest::Function<0x005cd05c, u32(u32, u32, u32, u32)> call_005cd05c;  // (from the original)
inline constexpr guest::Function<0x005d05b0, u32(u32, u32, u32, u32)> call_005d05b0;  // (from the original)
inline constexpr guest::Function<0x005d46dc, u32(u32, u32, u32, u32)> call_005d46dc;  // (from the original)
inline constexpr guest::Function<0x005d4788, u32(u32, u32, u32, u32)> call_005d4788;  // (from the original)
inline constexpr guest::Function<0x006a6408, u32(u32, u32, u32, u32)> call_006a6408;  // (from the original)
inline constexpr guest::Function<0x006bbeb8, u32(u32, u32, u32, u32)> call_006bbeb8;  // (from the original)

u32 f_005cc844(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 ea = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r12 = 0;
    u32 r13 = guest::cpu()->r[13];
    goto L_5cc844;
L_5cc844:;
    r13 = r13 - 0x20u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0027d310(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0 = call_002fae84(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 + 0x53400u;  // (from the original)
    r1 = 0u;
    guest::cpu()->r[13] = r13;
    r0 = call_0027c2c8(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0 = call_006a6408(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0 = call_00241d34(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0 = call_005bfbd4(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = 0xa82000u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0030444c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0 = call_002fae84(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = 0x6214eu;  // (from the original)
    r4 = r0 + r1;
    guest::cpu()->r[13] = r13;
    r0 = call_005d46dc(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    r2 = r0 & 0xfu;  // (from the original)
    r1 = u32(*gptr<u8>(r4)) & ~0xfu | r2;  // (from the original)
    *gptr<u8>(r4) = u8(r1);
    guest::cpu()->r[13] = r13;
    r0 = call_005d4788(r0, r1, r2, r3);
    ea = r4;
    r0 = 0xf0u & r0 << 4 | u32(*gptr<u8>(ea)) & ~0xf0u;  // (from the original)
    ea = r4;
    *gptr<u8>(ea) = u8(r0);
    r0 = 0x88f2c4u;  // (from the original)
    r1 = r0 + 0x2cu;  // (from the original)
    r0 = *gptr<u32>(r0 + 0x3cu);  // (from the original)
    ea = r1;
    r1 = *gptr<u32>(ea);
    r2 = *gptr<u32>(ea + 4);
    r3 = *gptr<u32>(ea + 8);
    r12 = *gptr<u32>(ea + 0xc);  // (from the original)
    *gptr<u32>(r13 + 0x10u) = u32(r0);  // (from the original)
    *gptr<u32>(r13) = u32(r1);
    *gptr<u32>(r13 + 4) = u32(r2);
    *gptr<u32>(r13 + 8) = u32(r3);
    *gptr<u32>(r13 + 0xc) = u32(r12);  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002fae84(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r5 = 0u;
    *gptr<u8>(r0 + 6u) = u8(r5);
    guest::cpu()->r[13] = r13;
    r0 = call_005d46dc(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r4 = r0;
    guest::cpu()->r[13] = r13;
    r0 = call_002fae84(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    r2 = r4;
    r1 = r13;
    r0 = r0 + 0x62138u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_006bbeb8(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0 = call_002fae84(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 + 0x62120u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0020d8a4(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0 = call_002fae84(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0 = call_005cb1dc(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0 = call_002fb918(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0 = call_001e02f0(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0 = call_0051cd48(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0 = call_005d05b0(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0 = call_00284f90(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0 = call_0058d52c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0 = call_002267e4(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0 = call_00582464(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = 1u;
    r0 = r1;
    guest::cpu()->r[13] = r13;
    r0 = call_00300634(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = 0x94ddc4u;  // (from the original)
    r1 = 4u;
    *gptr<u8>(r0) = u8(r1);
    *gptr<u8>(r0 + 1u) = u8(r5);
    *gptr<u8>(r0 + 2u) = u8(r5);
    guest::cpu()->r[13] = r13;
    r0 = call_002fae84(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0 = call_002fb310(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 + 4u;
    guest::cpu()->r[13] = r13;
    r0 = call_0010f16c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0 = call_0058ecec(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0 = call_00116cf4(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = 0x95c350u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_005cd05c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0 = call_002fae84(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0 = call_002fb310(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    r2 = 0u;
    r13 = r13 + 0x20u;  // (from the original)
    r1 = r2;
    r0 = r0 + 4u;
    guest::cpu()->r[13] = r13;
    return guest::call_address<u32>(0x30ca59u, r0, r1, r2, r3);  // (from the original)
}

}  // namespace d_005cc844
GUEST_EXPORT(0x005cc844, d_005cc844::f_005cc844);

// f_005ccfc4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005ccfc4 {

inline constexpr guest::Function<0x001d3720, u32(u32, u32, u32, u32)> call_001d3720;  // (from the original)

u32 f_005ccfc4(u32 r0, u32 r1) {
    u32 r4 = guest::cpu()->r[4];
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 0x10u;  // (from the original)
    r4 = 0x8ebc9cu;  // (from the original)
    *gptr<u32>(r13 + 4u) = u32(r0);
    r0 = r13;
    *gptr<u32>(r13) = u32(r4);
    guest::cpu()->r[13] = r13;
    r0 = call_001d3720(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r0 = *gptr<u32>(r13 + 4u);
    *gptr<u32>(r13) = u32(r4);
    if (r0 == 0) {
        r0 = 1u;
        r13 = r13 + 0x10u;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    r1 = r0;
    *gptr<u32>(r1) = u32(0u);
    r0 = 1u;
    r13 = r13 + 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_005ccfc4
GUEST_EXPORT(0x005ccfc4, d_005ccfc4::f_005ccfc4);

// f_005cd05c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005cd05c {

inline constexpr guest::Function<0x0010e9a9, u32(u32, u32, u32, u32)> call_0010e9a8;  // (from the original)
inline constexpr guest::Function<0x00114489, u32(u32, u32, u32, u32)> call_00114488;  // (from the original)
inline constexpr guest::Function<0x002fae84, u32(u32, u32, u32, u32)> call_002fae84;  // (from the original)
inline constexpr guest::Function<0x002fb310, u32(u32, u32, u32, u32)> call_002fb310;  // (from the original)
inline constexpr guest::Function<0x002fb94c, u32(u32, u32, u32, u32)> call_002fb94c;  // (from the original)

u32 f_005cd05c(u32 r0, u32 r1) {
    guest::cpu()->r[13] -= 8u;
    r0 = call_002fae84(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = 0u;
    r0 = r0 + 0x621d0u;  // (from the original)
    r0 = call_00114488(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r0 = call_002fae84(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r0 = call_002fb310(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r0 = r0 + 4u;
    r0 = call_0010e9a8(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r0 = call_002fb94c(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 == 0) {
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r0 = r0 + 0x5700u;  // (from the original)
    r1 = u32(*gptr<u8>(r0 + 0xau)) | 2u;  // (from the original)
    *gptr<u8>(r0 + 0xau) = u8(r1);  // (from the original)
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_005cd05c
GUEST_EXPORT(0x005cd05c, d_005cd05c::f_005cd05c);

// f_005cd0a4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005cd0a4 {

inline constexpr guest::Function<0x0028ff00, u32(u32, u32, u32, u32)> call_0028ff00;  // (from the original)
inline constexpr guest::Function<0x00304c68, u32(u32, u32, u32, u32)> call_00304c68;  // (from the original)

u32 f_005cd0a4(u32 r0_unused, u32 r1, u32 r2, u32 r3) {
    u32 r0 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r13 = guest::cpu()->r[13];
    r0 = 0x95c33cu;  // (from the original)
    *gptr<u32>(r13 + 0xfffffff0u) = u32(r3);  // (from the original)
    r13 = r13 - 0x10;  // (from the original)
    r4 = 1u;
    *gptr<u8>(r0 + 1u) = u8(r4);
    guest::cpu()->r[13] = r13;
    r0 = call_0028ff00(r0, r1, r2, r3);
    r2 = 0u;
    r3 = 1u;
    r1 = r2;
    r0 = 0x61u;  // (from the original)
    *gptr<u32>(r13) = u32(r4);
    guest::cpu()->r[13] = r13;
    r0 = call_00304c68(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r13 = r13 + 0x10;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_005cd0a4
GUEST_EXPORT(0x005cd0a4, d_005cd0a4::f_005cd0a4);

// f_005cd270: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005cd270 {

struct __attribute__((packed)) Object_005cd270_0 {
    u32 word_0;
};
GUEST_OFFSET(Object_005cd270_0, word_0, 0x0);  // (from the original)

inline constexpr guest::Function<0x004dbc3c, u32(u32, u32, u32, u32)> call_004dbc3c;  // (from the original)

u32 f_005cd270(gptr<Object_005cd270_0> arg0, u32 r1, u32 r2, u32 r3) {
    u32 ea = 0;
    u32 r0 = arg0.addr();
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 0x10;  // (from the original)
    r4 = r0;
    r0 = arg0->word_0;
    r5 = 0u;
    if (r0 == 0) {
        goto L_5cd2b4;
    }
    guest::cpu()->r[13] = r13;
    r0 = call_004dbc3c(r0, r1, r2, r3);
    if (r0 != 0) {
        goto L_5cd2b4;
    }
    r0 = *gptr<u32>(r4);
    r1 = *gptr<u32>(r0 + 4u);
    if (r1 != 0) {
        *gptr<u32>(r1) = u32(r5);
    }
    r1 = 0xad5638u;  // (from the original)
    *gptr<u32>(r1) = u32(r0);
    *gptr<u32>(r0 + 4u) = u32(r1);
    *gptr<u32>(r4) = u32(r5);
L_5cd2b4:;
    r0 = 0x800000u;  // (from the original)
    r1 = 0u;
    ea = r4 + 8u;
    *gptr<u32>(ea) = u32(r0);
    *gptr<u32>(ea + 4) = u32(r1);
    *gptr<u32>(ea + 8) = u32(r5);
    *gptr<u32>(r4 + 0x14u) = u32(r5);  // (from the original)
    *gptr<u32>(r4 + 0x18u) = u32(r5);  // (from the original)
    *gptr<u32>(r4 + 0x1cu) = u32(r5);  // (from the original)
    *gptr<u32>(r4 + 0x20u) = u32(r5);  // (from the original)
    *gptr<u32>(r4 + 0x24u) = u32(r5);  // (from the original)
    *gptr<u32>(r4 + 0x28u) = u32(r5);  // (from the original)
    *gptr<u32>(r4 + 0x2cu) = u32(r5);  // (from the original)
    *gptr<u8>(r4 + 0x30u) = u8(r5);  // (from the original)
    *gptr<u32>(r4 + 0x34u) = u32(~0u);  // (from the original)
    r13 = r13 + 0x10;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_005cd270
GUEST_EXPORT(0x005cd270, d_005cd270::f_005cd270);

// f_005cd2f4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005cd2f4 {

inline constexpr guest::Function<0x001b979c, u32(u32, u32, u32, u32)> call_001b979c;  // (from the original)

u32 f_005cd2f4() {
    u32 r0 = 0;
    u32 r4 = guest::cpu()->r[4];
    guest::cpu()->r[13] -= 8u;
    r4 = 0x95c33cu;  // (from the original)
    r0 = *gptr<u32>(r4 + 0xcu);  // (from the original)
    if (r0 != 0) {
        guest::cpu()->r[13] += 8u;
        return r0;
    }
    r0 = call_001b979c(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    r0 = 0u;
    *gptr<u8>(r4 + 2u) = u8(r0);
    guest::cpu()->r[13] += 8u;
    return r0;
}

}  // namespace d_005cd2f4
GUEST_EXPORT(0x005cd2f4, d_005cd2f4::f_005cd2f4);

// f_005cd754: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005cd754 {

inline constexpr guest::Function<0x00106bb1, u32(u32, u32, u32, u32)> call_00106bb0;  // (from the original)
inline constexpr guest::Function<0x00108449, u32(u32, u32, u32, u32)> call_00108448;  // (from the original)
inline constexpr guest::Function<0x00108a9d, u32(u32, u32, u32, u32)> call_00108a9c;  // (from the original)
inline constexpr guest::Function<0x00108b59, u32(u32, u32, u32, u32)> call_00108b58;  // (from the original)
inline constexpr guest::Function<0x00109615, u32(u32, u32, u32, u32)> call_00109614;  // (from the original)
inline constexpr guest::Function<0x00109ff9, u32(u32, u32, u32, u32)> call_00109ff8;  // (from the original)
inline constexpr guest::Function<0x0010a401, u32(u32, u32, u32, u32)> call_0010a400;  // (from the original)
inline constexpr guest::Function<0x0010a4a9, u32(u32, u32, u32, u32)> call_0010a4a8;  // (from the original)
inline constexpr guest::Function<0x0010a801, u32(u32, u32, u32, u32)> call_0010a800;  // (from the original)
inline constexpr guest::Function<0x0010ab2d, u32(u32, u32, u32, u32)> call_0010ab2c;  // (from the original)
inline constexpr guest::Function<0x0010af61, u32(u32, u32, u32, u32)> call_0010af60;  // (from the original)
inline constexpr guest::Function<0x0010b1e5, u32(u32, u32, u32, u32)> call_0010b1e4;  // (from the original)
inline constexpr guest::Function<0x0010b391, u32(u32, u32, u32, u32)> call_0010b390;  // (from the original)
inline constexpr guest::Function<0x0010b43d, u32(u32, u32, u32, u32)> call_0010b43c;  // (from the original)
inline constexpr guest::Function<0x0010b6d1, u32(u32, u32, u32, u32)> call_0010b6d0;  // (from the original)
inline constexpr guest::Function<0x0020d06c, u32(u32, u32, u32, u32)> call_0020d06c;  // (from the original)
inline constexpr guest::Function<0x0020d328, u32(u32, u32, u32, u32)> call_0020d328;  // (from the original)
inline constexpr guest::Function<0x002a7ad0, u32(u32, u32, u32, u32)> call_002a7ad0;  // (from the original)
inline constexpr guest::Function<0x003142b8, u32(u32, u32, u32, u32)> call_003142b8;  // (from the original)

u32 f_005cd754(u32 r0, u32 r1) {
    u32 r4 = guest::cpu()->r[4];
    guest::cpu()->r[13] -= 8u;
    r4 = r0;
    r0 = call_00109614(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r0 = r4 + 0x8b78u;  // (from the original)
    r0 = call_003142b8(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r0 = r4 + 0x9cu;  // (from the original)
    r0 = call_00109ff8(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r0 = r4 + 0x4468u;  // (from the original)
    r0 = call_002a7ad0(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r0 = r4 + 0x4494u;  // (from the original)
    r0 = call_0010b390(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r0 = r4 + 0x44e0u;  // (from the original)
    r0 = call_0010a800(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r0 = r4 + 0x45ccu;  // (from the original)
    r0 = call_00108b58(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r0 = r4 + 0x45fcu;  // (from the original)
    r0 = call_0020d328(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r0 = r4 + 0x4650u;  // (from the original)
    r0 = call_0010ab2c(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r0 = r4 + 0x8a6cu;  // (from the original)
    r0 = call_0010af60(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r0 = r4 + 0x8a7eu;  // (from the original)
    r0 = call_0010b6d0(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r0 = r4 + 0x8aa6u;  // (from the original)
    r0 = call_00108a9c(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r0 = r4 + 0x8b32u;  // (from the original)
    r0 = call_0010a400(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r0 = r4 + 0x8b52u;  // (from the original)
    r0 = call_00108448(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r0 = r4 + 0x8b54u;  // (from the original)
    r0 = call_0010a4a8(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r0 = r4 + 0x8b60u;  // (from the original)
    r0 = call_0010b43c(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r0 = r4 + 0x8b68u;  // (from the original)
    r0 = call_0020d06c(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r0 = r4 + 0x8bf8u;  // (from the original)
    r0 = call_0010b1e4(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r0 = r4 + 0x8c04u;  // (from the original)
    r0 = call_00106bb0(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = r4 + 0x8c20u;  // (from the original)
    r0 = 0u;
    *gptr<u16>(r1) = u16(r0);
    *gptr<u8>(r1 + 2u) = u8(r0);
    *gptr<u8>(r1 + 3u) = u8(r0);
    *gptr<u32>(0x8c24u + r4) = u32(r0);  // (from the original)
    r1 = r4 + 0x8c00u;  // (from the original)
    *gptr<u32>(r1 + 0x28u) = u32(r0);  // (from the original)
    *gptr<u32>(r1 + 0x2cu) = u32(r0);  // (from the original)
    *gptr<u32>(r1 + 0x30u) = u32(r0);  // (from the original)
    *gptr<u32>(r1 + 0x34u) = u32(r0);  // (from the original)
    *gptr<u32>(r1 + 0x38u) = u32(r0);  // (from the original)
    *gptr<u32>(r1 + 0x3cu) = u32(r0);  // (from the original)
    *gptr<u32>(r1 + 0x40u) = u32(r0);  // (from the original)
    *gptr<u32>(r1 + 0x44u) = u32(r0);  // (from the original)
    *gptr<u32>(r1 + 0x48u) = u32(r0);  // (from the original)
    *gptr<u32>(r1 + 0x4cu) = u32(r0);  // (from the original)
    *gptr<u32>(r1 + 0x50u) = u32(r0);  // (from the original)
    *gptr<u32>(r1 + 0x54u) = u32(r0);  // (from the original)
    *gptr<u32>(r1 + 0x58u) = u32(r0);  // (from the original)
    *gptr<u32>(r1 + 0x5cu) = u32(r0);  // (from the original)
    *gptr<u32>(r1 + 0x60u) = u32(r0);  // (from the original)
    *gptr<u32>(r1 + 0x64u) = u32(r0);  // (from the original)
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_005cd754
GUEST_EXPORT(0x005cd754, d_005cd754::f_005cd754);

// f_005cd8a0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005cd8a0 {

inline constexpr guest::Function<0x0024ea1c, u32(u32, u32, u32, u32)> call_0024ea1c;  // (from the original)
inline constexpr guest::Function<0x003026e8, u32(u32, u32, u32, u32)> call_003026e8;  // (from the original)
inline constexpr guest::Function<0x00718378, u32(u32, u32, u32, u32)> call_00718378;  // (from the original)

u32 f_005cd8a0(u32 r0, u32 r1) {
    u32 ea = 0;
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
    u32 r14 = guest::cpu()->r[14];
    u32 zf = 0;
    if (r1 >= 4u) {
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
    ea = r13 - 0x28;  // (from the original)
    *gptr<u32>(ea) = u32(r4);
    *gptr<u32>(ea + 4) = u32(r5);
    *gptr<u32>(ea + 8) = u32(r6);
    *gptr<u32>(ea + 0xc) = u32(r7);  // (from the original)
    *gptr<u32>(ea + 0x10) = u32(r8);  // (from the original)
    *gptr<u32>(ea + 0x14) = u32(r9);  // (from the original)
    *gptr<u32>(ea + 0x18) = u32(r10);  // (from the original)
    *gptr<u32>(ea + 0x1c) = u32(r11);  // (from the original)
    *gptr<u32>(ea + 0x20) = u32(r12);  // (from the original)
    *gptr<u32>(ea + 0x24) = u32(r14);  // (from the original)
    r13 = r13 - 0x28;  // (from the original)
    r6 = r0;
    r5 = 0u;
    if (r1 == 0) {
        goto L_5cd8dc;
    }
    if (r1 == 1u) {
        r5 = 1u;
        goto L_5cd8dc;
    }
    if (r1 == 2u) {
        r5 = 2u;
        goto L_5cd8dc;
    }
    if (r1 == 3u) {
        r5 = 3u;
    }
L_5cd8dc:;
    r4 = 0u;
L_5cd8e0:;
    if (r4 >= 0x38u) {  // (from the original)
        r7 = r6 + 8u;
    } else {
        r7 = r6 + (r4 << 2) + 8u;
    }
    r0 = r7;
    guest::cpu()->r[13] = r13;
    r0 = call_00718378(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 != 0) {
        goto L_5cd9b4;
    }
    r0 = r7;
    guest::cpu()->r[13] = r13;
    r0 = call_003026e8(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 != r5) {
        goto L_5cd9b4;
    }
    r0 = r7;
    guest::cpu()->r[13] = r13;
    r0 = call_003026e8(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r8 = r0;
    r10 = u32(*gptr<u8>(r7 + 2u));
    r11 = u32(*gptr<u8>(r7 + 3u));
    r4 = 0u;
L_5cd940:;
    r5 = r6 + (r4 << 2);
    r0 = r5 + 8u;
    guest::cpu()->r[13] = r13;
    r0 = call_00718378(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 != 0) {
        goto L_5cd9a4;
    }
    r0 = r5 + 8u;
    guest::cpu()->r[13] = r13;
    r0 = call_003026e8(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r7 = r0;
    r9 = u32(*gptr<u8>(r5 + 0xau));  // (from the original)
    r0 = u32(*gptr<u8>(r5 + 0xbu));  // (from the original)
    zf = r7 == r8;
    if (zf) {
        zf = r9 == r10;
    }
    if (zf) {
        zf = r0 == r11;
    }
    if (!zf) {
        goto L_5cd9a4;
    }
    r0 = r6 + (r4 << 2) + 8u;
    guest::cpu()->r[13] = r13;
    r0 = call_0024ea1c(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    ea = r6 + 4u;
    r0 = u32(*gptr<u8>(ea)) - 1u;
    ea = r6 + 4u;
    *gptr<u8>(ea) = u8(r0);
    ea = r13;
    r13 = r13 + 0x28;  // (from the original)
    r4 = *gptr<u32>(ea);
    r5 = *gptr<u32>(ea + 4);
    r6 = *gptr<u32>(ea + 8);
    r7 = *gptr<u32>(ea + 0xc);  // (from the original)
    r8 = *gptr<u32>(ea + 0x10);  // (from the original)
    r9 = *gptr<u32>(ea + 0x14);  // (from the original)
    r10 = *gptr<u32>(ea + 0x18);  // (from the original)
    r11 = *gptr<u32>(ea + 0x1c);  // (from the original)
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
L_5cd9a4:;
    r4 = r4 + 1u;
    if (r4 < 0x38u) {  // (from the original)
        guest::preempt();
        goto L_5cd940;
    }
    ea = r13;
    r13 = r13 + 0x28;  // (from the original)
    r4 = *gptr<u32>(ea);
    r5 = *gptr<u32>(ea + 4);
    r6 = *gptr<u32>(ea + 8);
    r7 = *gptr<u32>(ea + 0xc);  // (from the original)
    r8 = *gptr<u32>(ea + 0x10);  // (from the original)
    r9 = *gptr<u32>(ea + 0x14);  // (from the original)
    r10 = *gptr<u32>(ea + 0x18);  // (from the original)
    r11 = *gptr<u32>(ea + 0x1c);  // (from the original)
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
L_5cd9b4:;
    r4 = r4 + 1u;
    if (r4 < 0x38u) {  // (from the original)
        guest::preempt();
        goto L_5cd8e0;
    }
    ea = r13;
    r13 = r13 + 0x28;  // (from the original)
    r4 = *gptr<u32>(ea);
    r5 = *gptr<u32>(ea + 4);
    r6 = *gptr<u32>(ea + 8);
    r7 = *gptr<u32>(ea + 0xc);  // (from the original)
    r8 = *gptr<u32>(ea + 0x10);  // (from the original)
    r9 = *gptr<u32>(ea + 0x14);  // (from the original)
    r10 = *gptr<u32>(ea + 0x18);  // (from the original)
    r11 = *gptr<u32>(ea + 0x1c);  // (from the original)
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

}  // namespace d_005cd8a0
GUEST_EXPORT(0x005cd8a0, d_005cd8a0::f_005cd8a0);

// f_005cdb24: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005cdb24 {

inline constexpr guest::Function<0x0024ea1c, u32(u32, u32, u32, u32)> call_0024ea1c;  // (from the original)
inline constexpr guest::Function<0x003026e8, u32(u32, u32, u32, u32)> call_003026e8;  // (from the original)
inline constexpr guest::Function<0x00718378, u32(u32, u32, u32, u32)> call_00718378;  // (from the original)

u32 f_005cdb24(u32 r0, u32 r1, u32 r2, u32 r3) {
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
    r6 = r0;
    r7 = r1;
    r9 = r2;
    r11 = r3;
    r4 = 0u;
L_5cdb3c:;
    r5 = r6 + (r4 << 2);
    r0 = r5 + 8u;
    guest::cpu()->r[13] = r13;
    r0 = call_00718378(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 != 0) {
        goto L_5cdba4;
    }
    r0 = r5 + 8u;
    guest::cpu()->r[13] = r13;
    r0 = call_003026e8(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r8 = r0;
    r10 = u32(*gptr<u8>(r5 + 0xau));  // (from the original)
    r0 = u32(*gptr<u8>(r5 + 0xbu));  // (from the original)
    zf = r8 == r7;
    if (zf) {
        zf = r10 == r9;
    }
    if (zf) {
        zf = r0 == r11;
    }
    if (!zf) {
        goto L_5cdba4;
    }
    r0 = r6 + (r4 << 2) + 8u;
    guest::cpu()->r[13] = r13;
    r0 = call_0024ea1c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    *gptr<u8>(r6 + 4u) = u8(u32(*gptr<u8>(r6 + 4u)) - 1u);
    r0 = 1u;
    r13 = r13 + 0x28;  // (from the original)
    guest::cpu()->r[13] = r13;
    return r0;
L_5cdba4:;
    r4 = r4 + 1u;
    if (r4 < 0x38u) {  // (from the original)
        guest::preempt();
        goto L_5cdb3c;
    }
    r0 = 0u;
    r13 = r13 + 0x28;  // (from the original)
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_005cdb24
GUEST_EXPORT(0x005cdb24, d_005cdb24::f_005cdb24);

// f_005cdbb8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005cdbb8 {

struct __attribute__((packed)) Object_005cdbb8_0 {
    u8 unknown_0[0x6];  // (not used here)
    u8 byte_6;
};
GUEST_OFFSET(Object_005cdbb8_0, byte_6, 0x6);  // (from the original)

inline constexpr guest::Function<0x0027a060, u32(u32, u32, u32, u32)> call_0027a060;  // (from the original)

u32 f_005cdbb8(gptr<Object_005cdbb8_0> arg0, u32 r1) {
    u32 r0 = arg0.addr();
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r5 = 0u;
    r4 = r0;
    arg0->byte_6 = u8(r5);
    r0 = r0 + 0xf0u;  // (from the original)
    r0 = call_0027a060(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r0 = r4 + 0x44b0u;  // (from the original)
    r1 = r4 + 0x44b4u;  // (from the original)
    *gptr<u32>(r0) = u32(r5);
    *gptr<u32>(r1) = u32(r5);
    *gptr<u32>(r4 + 0x44b8u) = u32(r5);  // (from the original)
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_005cdbb8
GUEST_EXPORT(0x005cdbb8, d_005cdbb8::f_005cdbb8);

// f_005cdd70: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005cdd70 {

inline constexpr guest::Function<0x0027a31c, u32(u32, u32, u32, u32)> call_0027a31c;  // (from the original)
inline constexpr guest::Function<0x00301d0d, u32(u32, u32, u32, u32)> call_00301d0c;  // (from the original)

u32 f_005cdd70(u32 r0) {
    u32 r1 = 0;
    u32 r2 = 0;
    u32 r3 = 0;
    r1 = 0x24ea34u;  // (from the original)
    r3 = 0x38u;  // (from the original)
    r2 = 4u;
    r0 = r0 + 8u;
    guest::cpu()->r[13] -= 8u;
    r0 = call_00301d0c(r0, r1, r2, r3);
    r1 = 0x24ea34u;  // (from the original)
    r3 = 2u;
    r2 = 4u;
    r0 = r0 + 0xe0u;  // (from the original)
    r0 = call_00301d0c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 + 8u;
    r0 = call_0027a31c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r0 = r0 - 0xf0u;  // (from the original)
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_005cdd70
GUEST_EXPORT(0x005cdd70, d_005cdd70::f_005cdd70);

// f_005cdde8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005cdde8 {

inline constexpr guest::Function<0x003081b4, u32(u32, u32, u32, u32)> call_003081b4;  // (from the original)
inline constexpr guest::Function<0x0056ca10, u32(u32, u32, u32, u32)> call_0056ca10;  // (from the original)
inline constexpr guest::Function<0x00759664, u32(u32, u32, u32, u32)> call_00759664;  // (from the original)
inline constexpr guest::Function<0x007795ac, u32(u32, u32, u32, u32)> call_007795ac;  // (from the original)

u32 f_005cdde8(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 ea = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 0x20u;  // (from the original)
    r5 = r1;
    r4 = r0;
    guest::cpu()->r[13] = r13;
    r0 = call_00759664(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = 0u;
    r3 = r2;
    *gptr<u32>(r13) = u32(r2);
    *gptr<u32>(r13 + 4u) = u32(r2);
    r2 = r5;
    guest::cpu()->r[13] = r13;
    r0 = call_0056ca10(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    ea = r13 + 8u;
    *gptr<u32>(ea) = u32(r0);
    *gptr<u32>(ea + 4) = u32(r1);
    r0 = r4;
    guest::cpu()->r[13] = r13;
    r0 = call_007795ac(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = r13 + 8u;
    r0 = r4;
    guest::cpu()->r[13] = r13;
    r0 = call_003081b4(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r13 = r13 + 0x20u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_005cdde8
GUEST_EXPORT(0x005cdde8, d_005cdde8::f_005cdde8);

// f_005cdfd0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005cdfd0 {


u32 f_005cdfd0(u32 r0) {
    u32 r1 = 0;
    r1 = 0x890554u;  // (from the original)
    if (r0 >= 0xffu) {  // (from the original)
        r0 = 0u;
    }
    r0 = u32(*gptr<u8>(r1 + r0));
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_005cdfd0
GUEST_EXPORT(0x005cdfd0, d_005cdfd0::f_005cdfd0);

// f_005ce114: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005ce114 {


u32 f_005ce114(u32 r0) {
    u32 r1 = 0;
    r1 = 0x95dc1bu;  // (from the original)
    if (r0 >= 0xffu) {  // (from the original)
        r0 = 0u;
    }
    r0 = u32(*gptr<u8>(r1 + r0));
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_005ce114
GUEST_EXPORT(0x005ce114, d_005ce114::f_005ce114);

// f_005ce2b8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005ce2b8 {


u32 f_005ce2b8(u32 r0) {
    u32 r1 = 0;
    r1 = 0x95d81fu;  // (from the original)
    if (r0 >= 0xffu) {  // (from the original)
        r0 = 0u;
    }
    r0 = u32(*gptr<u8>(r1 + r0));
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_005ce2b8
GUEST_EXPORT(0x005ce2b8, d_005ce2b8::f_005ce2b8);

// f_005ce32c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005ce32c {

inline constexpr guest::Function<0x006c5a88, u32(u32, u32, u32, u32)> call_006c5a88;  // (from the original)

u32 f_005ce32c(u32 r0, u32 r1) {
    guest::cpu()->r[13] -= 8u;
    r0 = call_006c5a88(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    guest::cpu()->r[13] += 8u;
    r1 = 0x95d720u;  // (from the original)
    if (r0 >= 0xffu) {  // (from the original)
        r0 = 0u;
    }
    r0 = u32(s32(s8(*gptr<u8>(r1 + r0))));
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_005ce32c
GUEST_EXPORT(0x005ce32c, d_005ce32c::f_005ce32c);

// f_005ce368: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005ce368 {


u32 f_005ce368() {
    u32 r0 = 0;
    r0 = u32(s32(s8(*gptr<u8>(*gptr<u32>(0x94e3c8u) + 0xfadu))));  // (from the original)
    return r0;
}

}  // namespace d_005ce368
GUEST_EXPORT(0x005ce368, d_005ce368::f_005ce368);

// f_005ce568: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005ce568 {


u32 f_005ce568() {
    u32 r0 = 0;
    u32 r1 = 0;
    u32 r2 = 0;
    u32 zf = 0;
    r0 = 0x94e3c8u;  // (from the original)
    r2 = *gptr<u32>(r0);
    r1 = *gptr<u32>(r2 + 0x1cu);  // (from the original)
    r0 = *gptr<u32>(*gptr<u32>(r0) + 0x20u);  // (from the original)
    if (r1 == 0) {
        if ((r0 & 1u) == 0) {
            guest::cpu()->r[1] = r1;
            return r0;
        }
        if (r0 == 0) {
            guest::cpu()->r[1] = r1;
            return r0;
        }
    }
    zf = (r0 & 1u) == 0;
    r0 = r2 + u32(s32(r0) >> 1);
    if (zf) {
        return guest::call_address<u32>(r1, r0, r1, r2, guest::cpu()->r[3]);
    }
    r2 = *gptr<u32>(r0);
    r1 = *gptr<u32>(r2 + r1);
    return guest::call_address<u32>(r1, r0, r1, r2, guest::cpu()->r[3]);
}

}  // namespace d_005ce568
GUEST_EXPORT(0x005ce568, d_005ce568::f_005ce568);

// f_005cebe4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005cebe4 {

inline constexpr guest::Function<0x0011edd8, u32(u32, u32, u32, u32)> call_0011edd8;  // (from the original)

u32 f_005cebe4() {
    u32 r0 = 0;
    u32 r1 = 0;
    r0 = 0xac1930u;  // (from the original)
    r1 = 0u;
    return call_0011edd8(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_005cebe4
GUEST_EXPORT(0x005cebe4, d_005cebe4::f_005cebe4);

// f_005cecfc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005cecfc {

inline constexpr guest::Function<0x007b1038, u32(u32, u32, u32, u32)> call_007b1038;  // (from the original)
inline constexpr guest::Function<0x007b16b4, u32(u32, u32, u32, u32)> call_007b16b4;  // (from the original)

u32 f_005cecfc() {
    u32 res = 0;
    u32 r0 = 0;
    u32 r1 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r4 = 0x94e3acu;  // (from the original)
    r1 = u32(s32(s8(*gptr<u8>(r4 + 3u))));
    res = u32(s32(s8(*gptr<u8>(r4 + 1u)))) | r1;
    r0 = res;
    if (res == 0) {
        r5 = 0x3fffu;  // (from the original)
        r0 = r5;
        r0 = call_007b1038(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1 = 1u;
        r0 = r5;
        r0 = call_007b16b4(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        r0 = 1u;
        *gptr<u8>(r4) = u8(r0);
    }
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_005cecfc
GUEST_EXPORT(0x005cecfc, d_005cecfc::f_005cecfc);

// f_005ced7c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005ced7c {


u32 f_005ced7c() {
    u32 r0 = 0;
    u32 r1 = 0;
    r0 = 0x94e3acu;  // (from the original)
    r1 = *gptr<u32>(r0 + 8u) + 1u;
    *gptr<u32>(r0 + 8u) = u32(r1);
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_005ced7c
GUEST_EXPORT(0x005ced7c, d_005ced7c::f_005ced7c);

// f_005cedec: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005cedec {

inline constexpr guest::Function<0x0012a5a0, u32(u32, u32, u32, u32)> call_0012a5a0;  // (from the original)
inline constexpr guest::Function<0x00137e84, u32(u32, u32, u32, u32)> call_00137e84;  // (from the original)
inline constexpr guest::Function<0x0034ba38, u32(u32, u32, u32, u32)> call_0034ba38;  // (from the original)
inline constexpr guest::Function<0x0047f274, u32(u32, u32, u32, u32)> call_0047f274;  // (from the original)
inline constexpr guest::Function<0x005cec38, u32(u32, u32, u32, u32)> call_005cec38;  // (from the original)
inline constexpr guest::Function<0x005cecfc, u32(u32, u32, u32, u32)> call_005cecfc;  // (from the original)

u32 f_005cedec(u32 r0_unused, u32 r1, u32 r2, u32 r3) {
    u32 ea = 0;
    u32 r0 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 0x20u;  // (from the original)
    r4 = 0x94e3f0u;  // (from the original)
    r0 = u32(*gptr<u8>(r4));
    if (r0 == 0) {
        r13 = r13 + 0x20u;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    r0 = u32(*gptr<u8>(0x975c30u));  // (from the original)
    if (r0 != 0) {
        r13 = r13 + 0x20u;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    r0 = 0xae563cu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0034ba38(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        r13 = r13 + 0x20u;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    guest::cpu()->r[13] = r13;
    r0 = call_0047f274(r0, r1, r2, r3);
    r5 = 0u;
    r3 = r5;
    r2 = r5;
    ea = 0x974ac8u;  // (from the original)
    r0 = *gptr<u32>(ea);
    r1 = *gptr<u32>(ea + 4);
    ea = r13;
    *gptr<u32>(ea) = u32(r5);
    ea = r13 + 8u;
    *gptr<u32>(ea) = u32(r0);
    *gptr<u32>(ea + 4) = u32(r1);
    r1 = r5;
    r0 = r5;
    guest::cpu()->r[13] = r13;
    r0 = call_0012a5a0(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = 0xae563cu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00137e84(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0 = call_005cec38(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    *gptr<u8>(r4) = u8(r5);
    r13 = r13 + 0x20u;  // (from the original)
    guest::cpu()->r[13] = r13;
    return call_005cecfc(r0, r1, r2, r3);
}

}  // namespace d_005cedec
GUEST_EXPORT(0x005cedec, d_005cedec::f_005cedec);

// f_005cfa38: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005cfa38 {

inline constexpr guest::Function<0x0050d698, u32(u32, u32, u32, u32)> call_0050d698;  // (from the original)
inline constexpr guest::Function<0x0050d8f0, u32(u32, u32, u32, u32)> call_0050d8f0;  // (from the original)
inline constexpr guest::Function<0x0050ddc0, u32(u32, u32, u32, u32)> call_0050ddc0;  // (from the original)
inline constexpr guest::Function<0x0071a084, u32(u32, u32, u32, u32)> call_0071a084;  // (from the original)

u32 f_005cfa38(u32 r0, u32 r1) {
    guest::cpu()->r[13] -= 8u;
    r0 = call_0071a084(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 == 0) {
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r0 = 0u;
    r0 = call_0050d698(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 != 0) {
        guest::cpu()->r[13] += 8u;
        return call_0050d8f0(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    }
    r1 = 0u;
    r0 = *gptr<u32>(0x9535e4u);  // (from the original)
    r0 = call_0050ddc0(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    guest::cpu()->r[13] += 8u;
    return call_0050d8f0(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_005cfa38
GUEST_EXPORT(0x005cfa38, d_005cfa38::f_005cfa38);

// f_005cfa78: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005cfa78 {

inline constexpr guest::Function<0x0050d698, u32(u32, u32, u32, u32)> call_0050d698;  // (from the original)
inline constexpr guest::Function<0x0050d8f0, u32(u32, u32, u32, u32)> call_0050d8f0;  // (from the original)

u32 f_005cfa78() {
    u32 r0 = 0;
    u32 r4 = guest::cpu()->r[4];
    guest::cpu()->r[13] -= 8u;
    r4 = 0x9514c4u;  // (from the original)
    if (u32(s32(s8(*gptr<u8>(r4)))) + 1u == 0) {
        r0 = 0u;
        r0 = call_0050d698(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
        if (r0 == 0) {
            r0 = 1u;
        } else {
            r0 = 0u;
        }
        *gptr<u8>(r4) = u8(r0);
        r0 = call_0050d8f0(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    }
    r0 = u32(*gptr<u8>(r4));
    if (r0 != 1u) {
        r0 = 0u;
    }
    guest::cpu()->r[13] += 8u;
    return r0;
}

}  // namespace d_005cfa78
GUEST_EXPORT(0x005cfa78, d_005cfa78::f_005cfa78);

// f_005cfcf0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005cfcf0 {

inline constexpr guest::Function<0x002fae84, u32(u32, u32, u32, u32)> call_002fae84;  // (from the original)

u32 f_005cfcf0(u32 r0_unused, u32 r1, u32 r2, u32 r3) {
    u32 r0 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 nf = 0;
    u32 zf = 0;
    u32 cf = 0;
    u32 vf = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r5 = 0x9514c4u;  // (from the original)
    r0 = u32(*gptr<u8>(r5 + 2u));
    if (r0 != 0) {
        r0 = call_002fae84(r0, r1, r2, r3);
        r3 = guest::cpu()->r[3];
        r6 = 0x6214fu;  // (from the original)
        r1 = u32(*gptr<u8>(r5 + 1u));
        r0 = r0 + r6;
        r2 = u32(*gptr<u8>(r0 + 5u)) >> 3;
        r0 = r2 + ((u32(*gptr<u8>(r0 + 6u)) & 1u) << 5);
        zf = r1 == r0;
        cf = r1 >= r0;
        if (cf && !zf) {
            r4 = r1 - r0;
        }
        if (!cf || zf) {
            r4 = 0u;
        }
        r0 = call_002fae84(r0, r1, r2, r3);
        r1 = r0 + r6;
        r2 = u32(*gptr<u8>(r1 + 1u));
        r0 = (r2 >> 7) + ((u32(*gptr<u8>(r1 + 2u)) & 0xfu) << 1) + r4;  // (from the original)
        if (!(!u32(r0 >= 0x14u) || u32(r0 == 0x14u))) {  // (from the original)
            nf = r4 >> 0x1f;  // (from the original)
            zf = r4 == 0;
            vf = 0u;
            if (!zf && nf == vf) {
                r0 = 0x14u;  // (from the original)
            }
            if (zf || nf != vf) {
                r0 = 0u;
            }
        }
        *gptr<u8>(r1 + 1u) = u8(r2 & ~0x80u | r0 << 7);  // (from the original)
        r3 = u32(*gptr<u8>(r1 + 2u));
        r2 = r0 & 0x1eu;  // (from the original)
        r0 = r3 & ~0xfu | r2 >> 1;  // (from the original)
        *gptr<u8>(r1 + 2u) = u8(r0);
        r0 = call_002fae84(r0, r1, r2, r3);
        r0 = r0 + r6;
        *gptr<u8>(r0 + 5u) = u8(u32(*gptr<u8>(r0 + 5u)) & ~0xf8u);  // (from the original)
        r1 = 0u;
        *gptr<u8>(r0 + 6u) = u8(u32(*gptr<u8>(r0 + 6u)) & ~1u);
        *gptr<u8>(r5 + 2u) = u8(r1);
    }
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_005cfcf0
GUEST_EXPORT(0x005cfcf0, d_005cfcf0::f_005cfcf0);

// f_005cfef0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005cfef0 {

inline constexpr guest::Function<0x0071a084, u32(u32, u32, u32, u32)> call_0071a084;  // (from the original)

u32 f_005cfef0() {
    return call_0071a084(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_005cfef0
GUEST_EXPORT(0x005cfef0, d_005cfef0::f_005cfef0);

// f_005cfef4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005cfef4 {

inline constexpr guest::Function<0x0020d848, u32(u32, u32, u32, u32)> call_0020d848;  // (from the original)
inline constexpr guest::Function<0x0024b8a8, u32(u32, u32, u32, u32)> call_0024b8a8;  // (from the original)
inline constexpr guest::Function<0x002fae84, u32(u32, u32, u32, u32)> call_002fae84;  // (from the original)
inline constexpr guest::Function<0x002fd068, u32(u32, u32, u32, u32)> call_002fd068;  // (from the original)
inline constexpr guest::Function<0x0030dc84, u32(u32, u32, u32, u32)> call_0030dc84;  // (from the original)
inline constexpr guest::Function<0x005373a4, u32(u32, u32, u32, u32)> call_005373a4;  // (from the original)
inline constexpr guest::Function<0x005374f0, u32(u32, u32, u32, u32)> call_005374f0;  // (from the original)
inline constexpr guest::Function<0x006b5240, u32(u32, u32, u32, u32)> call_006b5240;  // (from the original)
inline constexpr guest::Function<0x00728af8, u32(u32, u32, u32, u32)> call_00728af8;  // (from the original)
inline constexpr guest::Function<0x00728c48, u32(u32, u32, u32, u32)> call_00728c48;  // (from the original)
inline constexpr guest::Function<0x00728ca0, u32(u32, u32, u32, u32)> call_00728ca0;  // (from the original)

u32 f_005cfef4(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r13 = guest::cpu()->r[13];
    *gptr<u32>(r13 + 0xffffffe0u) = u32(r3);  // (from the original)
    r13 = r13 - 0x20;  // (from the original)
    r4 = r0;
    r5 = r13;
    r8 = r1;
    r0 = r1;
    guest::cpu()->r[13] = r13;
    r0 = call_00728c48(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r6 = uxth(r0);
    r0 = r8;
    guest::cpu()->r[13] = r13;
    r0 = call_00728ca0(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r7 = r0 & 0xffu;  // (from the original)
    r0 = r8;
    guest::cpu()->r[13] = r13;
    r0 = call_00728af8(r0, r1, r2, r3);
    r3 = r0 & 0xffu;  // (from the original)
    r2 = r7;
    r1 = r6;
    r0 = r5;
    guest::cpu()->r[13] = r13;
    r0 = call_0020d848(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    r1 = r13;
    r0 = r4;
    r2 = 1u;
    guest::cpu()->r[13] = r13;
    r0 = call_005374f0(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 != 0) {
        r0 = 0x9514c4u;  // (from the original)
        r1 = u32(*gptr<u8>(r0 + 1u)) + 1u;
        *gptr<u8>(r0 + 1u) = u8(r1);
        guest::cpu()->r[13] = r13;
        r0 = call_005373a4(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r4 = r0;
        guest::cpu()->r[13] = r13;
        r0 = call_002fae84(r0, r1, r2, r3);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r1 = r4;
        r0 = r0 + 0x20u;  // (from the original)
        guest::cpu()->r[13] = r13;
        r0 = call_0030dc84(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        if (r0 != 0) {
            r2 = 1u;
            r1 = 0xdu;  // (from the original)
            r0 = r0 + 0x55dcu;  // (from the original)
            guest::cpu()->r[13] = r13;
            r0 = call_0024b8a8(r0, r1, r2, r3);
            r1 = guest::cpu()->r[1];
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
        }
        guest::cpu()->r[13] = r13;
        r0 = call_002fd068(r0, r1, r2, r3);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r1 = 1u;
        guest::cpu()->r[13] = r13;
        r0 = call_006b5240(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
    }
    r13 = r13 + 0x20;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_005cfef4
GUEST_EXPORT(0x005cfef4, d_005cfef4::f_005cfef4);
