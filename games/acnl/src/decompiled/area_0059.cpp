// Functions decompiled by tools/decomp (docs/decomp.md), each proved equal to the recompiled original (prove-cpp). The
// names are generated (d_<address>::f_<address>, Object_<address>_<argument>, word_<offset>) and still to be chosen.
#include "guest/guest.hpp"

#include <bit>

using guest::gptr;

// f_005921e0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005921e0 {

inline constexpr guest::Function<0x0012ca6c, u32(u32, u32, u32, u32)> call_0012ca6c;  // (from the original)
inline constexpr guest::Function<0x002f825c, u32(u32, u32, u32, u32)> call_002f825c;  // (from the original)
inline constexpr guest::Function<0x002fd108, u32(u32, u32, u32, u32)> call_002fd108;  // (from the original)
inline constexpr guest::Function<0x00582e4c, u32(u32, u32, u32, u32)> call_00582e4c;  // (from the original)
inline constexpr guest::Function<0x0058fe4c, u32(u32, u32, u32, u32)> call_0058fe4c;  // (from the original)
inline constexpr guest::Function<0x00590720, u32(u32, u32, u32, u32)> call_00590720;  // (from the original)
inline constexpr guest::Function<0x00590f1c, u32(u32, u32, u32, u32)> call_00590f1c;  // (from the original)

u32 f_005921e0(u32 r0, u32 r1, u32 r2, u32 r3, float S0) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r9 = guest::cpu()->r[9];
    u32 r10 = guest::cpu()->r[10];
    u32 r13 = guest::cpu()->r[13];
    *gptr<u32>(r13 + 0xffffffd8u) = u32(r3);  // (from the original)
    r13 = r13 - 0x28;  // (from the original)
    r5 = r3;
    r7 = r0;
    r8 = r1;
    r9 = r2;
    r1 = 0x98a47cu;  // (from the original)
    r2 = 0x226u;  // (from the original)
    r0 = 0u;
    do {
L_592200:;
        r3 = *gptr<u32>(r1 + (r0 << 2));
        if (!(r3 == 0)) {
            r10 = 0u;
            *gptr<u32>(r1 + (r0 << 2)) = u32(r10);
            r6 = r3;
            r2 = 4u;
            r1 = r6;
            r0 = 0x128u;  // (from the original)
            guest::cpu()->r[13] = r13;
            guest::cpu()->s[0] = S0;
            r0 = call_002fd108(r0, r1, r2, r3);
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
            S0 = guest::cpu()->s[0];
            r4 = r0;
            r1 = 0x128u;  // (from the original)
            guest::cpu()->r[13] = r13;
            guest::cpu()->s[0] = S0;
            r0 = call_002f825c(r0, r1, r2, r3);
            r1 = guest::cpu()->r[1];
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
            S0 = guest::cpu()->s[0];
            r0 = r4;
            guest::cpu()->r[13] = r13;
            guest::cpu()->s[0] = S0;
            r0 = call_00590f1c(r0, r1, r2, r3);
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
            S0 = guest::cpu()->s[0];
            r4 = r0;
            *gptr<u32>(r0) = u32(0x907a40u);  // (from the original)
            r1 = r6;
            r0 = r0 + 0x20u;  // (from the original)
            guest::cpu()->r[13] = r13;
            guest::cpu()->s[0] = S0;
            r0 = call_0012ca6c(r0, r1, r2, r3);
            S0 = guest::cpu()->s[0];
            r3 = r9;
            r2 = r8;
            r1 = r7;
            r0 = r4;
            *gptr<u32>(r13) = u32(r10);
            guest::cpu()->r[13] = r13;
            guest::cpu()->s[0] = S0;
            r0 = call_00590720(r0, r1, r2, r3);
            r1 = guest::cpu()->r[1];
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
            S0 = guest::cpu()->s[0];
            *gptr<u8>(r4 + 0x124u) = u8(r10);  // (from the original)
            if (!(r5 == 0)) {
                r0 = 0x100062eu;  // (from the original)
                r2 = r4;
                r3 = 1u;
                r1 = r4 + 0x40u;  // (from the original)
                guest::cpu()->r[13] = r13;
                guest::cpu()->s[0] = S0;
                r0 = call_00582e4c(r0, r1, r2, r3);
                r1 = guest::cpu()->r[1];
                r2 = guest::cpu()->r[2];
                r3 = guest::cpu()->r[3];
                S0 = guest::cpu()->s[0];
            }
            r0 = r4;
            guest::cpu()->r[13] = r13;
            guest::cpu()->s[0] = S0;
            r0 = call_0058fe4c(r0, r1, r2, r3);
            r1 = guest::cpu()->r[1];
            S0 = std::bit_cast<float>(*gptr<u32>(0x5922ccu));  // (from the original)
            r0 = r4;
            *gptr<u32>(r4 + 0xf8u) = u32(std::bit_cast<u32>(S0));  // (from the original)
            r13 = r13 + 0x28;  // (from the original)
            guest::cpu()->r[1] = r1;
            guest::cpu()->r[13] = r13;
            guest::cpu()->s[0] = S0;
            return r0;
        }
        r0 = r0 + 1u;
        guest::preempt();
    } while (r0 < r2);
    r0 = 0u;
    r13 = r13 + 0x28;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    return r0;
}

}  // namespace d_005921e0
GUEST_EXPORT(0x005921e0, d_005921e0::f_005921e0);

// f_005923fc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005923fc {

inline constexpr guest::Function<0x0012ca6c, u32(u32, u32, u32, u32)> call_0012ca6c;  // (from the original)
inline constexpr guest::Function<0x002f825c, u32(u32, u32, u32, u32)> call_002f825c;  // (from the original)
inline constexpr guest::Function<0x002fcb84, u32(u32, u32, u32, u32)> call_002fcb84;  // (from the original)
inline constexpr guest::Function<0x002fd108, u32(u32, u32, u32, u32)> call_002fd108;  // (from the original)
inline constexpr guest::Function<0x004edd20, u32(u32, u32, u32, u32)> call_004edd20;  // (from the original)
inline constexpr guest::Function<0x004ee3e8, u32(u32, u32, u32, u32)> call_004ee3e8;  // (from the original)
inline constexpr guest::Function<0x00590720, u32(u32, u32, u32, u32)> call_00590720;  // (from the original)
inline constexpr guest::Function<0x00590f1c, u32(u32, u32, u32, u32)> call_00590f1c;  // (from the original)
inline constexpr guest::Function<0x00614568, u32(u32, u32, u32, u32)> call_00614568;  // (from the original)
inline constexpr guest::Function<0x00614730, u32(u32, u32, u32, u32)> call_00614730;  // (from the original)
inline constexpr guest::Function<0x006f7e10, u32(u32, u32, u32, u32)> call_006f7e10;  // (from the original)

u32 f_005923fc(u32 r0, u32 r1, u32 r2, u32 r3, float S0, float S1, float S2) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r9 = guest::cpu()->r[9];
    u32 r10 = guest::cpu()->r[10];
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 0x30u;  // (from the original)
    r8 = r1;
    r9 = r2;
    r1 = 0x98a47cu;  // (from the original)
    r2 = 0x226u;  // (from the original)
    r7 = r0;
    r5 = r3;
    r0 = 0u;
    do {
L_592420:;
        r3 = *gptr<u32>(r1 + (r0 << 2));
        if (!(r3 == 0)) {
            r10 = 0u;
            *gptr<u32>(r1 + (r0 << 2)) = u32(r10);
            r6 = r3;
            r2 = 4u;
            r1 = r6;
            r0 = 0x154u;  // (from the original)
            guest::cpu()->r[13] = r13;
            guest::cpu()->s[0] = S0;
            guest::cpu()->s[1] = S1;
            guest::cpu()->s[2] = S2;
            r0 = call_002fd108(r0, r1, r2, r3);
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
            S0 = guest::cpu()->s[0];
            S1 = guest::cpu()->s[1];
            S2 = guest::cpu()->s[2];
            r4 = r0;
            r1 = 0x154u;  // (from the original)
            guest::cpu()->r[13] = r13;
            guest::cpu()->s[0] = S0;
            guest::cpu()->s[1] = S1;
            guest::cpu()->s[2] = S2;
            r0 = call_002f825c(r0, r1, r2, r3);
            r1 = guest::cpu()->r[1];
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
            S0 = guest::cpu()->s[0];
            S1 = guest::cpu()->s[1];
            S2 = guest::cpu()->s[2];
            r0 = r4;
            guest::cpu()->r[13] = r13;
            guest::cpu()->s[0] = S0;
            guest::cpu()->s[1] = S1;
            guest::cpu()->s[2] = S2;
            r0 = call_00590f1c(r0, r1, r2, r3);
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
            S0 = guest::cpu()->s[0];
            S1 = guest::cpu()->s[1];
            S2 = guest::cpu()->s[2];
            r1 = 0x907a70u;  // (from the original)
            *gptr<u32>(r0) = u32(r1);
            r0 = r0 + 0x124u;  // (from the original)
            guest::cpu()->r[13] = r13;
            guest::cpu()->s[0] = S0;
            guest::cpu()->s[1] = S1;
            guest::cpu()->s[2] = S2;
            r0 = call_00614568(r0, r1, r2, r3);
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
            S0 = guest::cpu()->s[0];
            S1 = guest::cpu()->s[1];
            S2 = guest::cpu()->s[2];
            r4 = r0 - 0x124u;  // (from the original)
            r1 = r6;
            r0 = r0 - 0x104u;  // (from the original)
            guest::cpu()->r[13] = r13;
            guest::cpu()->s[0] = S0;
            guest::cpu()->s[1] = S1;
            guest::cpu()->s[2] = S2;
            r0 = call_0012ca6c(r0, r1, r2, r3);
            S0 = guest::cpu()->s[0];
            S1 = guest::cpu()->s[1];
            S2 = guest::cpu()->s[2];
            r3 = r9;
            r2 = r8;
            r1 = r7;
            r0 = r4;
            *gptr<u32>(r13) = u32(r10);
            guest::cpu()->r[13] = r13;
            guest::cpu()->s[0] = S0;
            guest::cpu()->s[1] = S1;
            guest::cpu()->s[2] = S2;
            r0 = call_00590720(r0, r1, r2, r3);
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
            S0 = std::bit_cast<float>(*gptr<u32>(0x592538u));  // (from the original)
            *gptr<u8>(r4 + 0x150u) = u8(r10);  // (from the original)
            r0 = r13 + 4u;
            S2 = S0;
            S1 = S0;
            *gptr<u8>(r4 + 0x151u) = u8(r5);  // (from the original)
            *gptr<u32>(r0) = u32(std::bit_cast<u32>(S0));
            *gptr<u32>(r0 + 4) = u32(std::bit_cast<u32>(S1));
            *gptr<u32>(r0 + 8) = u32(std::bit_cast<u32>(S2));
            r1 = r0;
            r0 = r4 + 0x58u;  // (from the original)
            guest::cpu()->r[13] = r13;
            guest::cpu()->s[0] = S0;
            guest::cpu()->s[1] = S1;
            guest::cpu()->s[2] = S2;
            r0 = call_004ee3e8(r0, r1, r2, r3);
            r1 = guest::cpu()->r[1];
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
            S0 = guest::cpu()->s[0];
            S1 = guest::cpu()->s[1];
            S2 = guest::cpu()->s[2];
            r0 = r4 + 0x58u;  // (from the original)
            guest::cpu()->r[13] = r13;
            guest::cpu()->s[0] = S0;
            guest::cpu()->s[1] = S1;
            guest::cpu()->s[2] = S2;
            r0 = call_004edd20(r0, r1, r2, r3);
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
            S0 = guest::cpu()->s[0];
            S1 = guest::cpu()->s[1];
            S2 = guest::cpu()->s[2];
            r1 = 0x9eu;  // (from the original)
            r0 = r4 + 0x64u;  // (from the original)
            guest::cpu()->r[13] = r13;
            guest::cpu()->s[0] = S0;
            guest::cpu()->s[1] = S1;
            guest::cpu()->s[2] = S2;
            r0 = call_002fcb84(r0, r1, r2, r3);
            r1 = guest::cpu()->r[1];
            S0 = guest::cpu()->s[0];
            S1 = guest::cpu()->s[1];
            S2 = guest::cpu()->s[2];
            if (!(r0 == 0)) {
                r3 = ~0x80000000u;  // (from the original)
                r2 = 4u;
                S1 = std::bit_cast<float>(*gptr<u32>(0x59253cu));  // (from the original)
                S0 = std::bit_cast<float>(*gptr<u32>(0x592540u));  // (from the original)
                r1 = r4 + 0x40u;  // (from the original)
                r0 = r4 + 0x124u;  // (from the original)
                guest::cpu()->r[13] = r13;
                guest::cpu()->s[0] = S0;
                guest::cpu()->s[1] = S1;
                guest::cpu()->s[2] = S2;
                r0 = call_006f7e10(r0, r1, r2, r3);
                r1 = guest::cpu()->r[1];
                r2 = guest::cpu()->r[2];
                r3 = guest::cpu()->r[3];
                S0 = guest::cpu()->s[0];
                S1 = guest::cpu()->s[1];
                S2 = guest::cpu()->s[2];
                r0 = r4 + 0x124u;  // (from the original)
                guest::cpu()->r[13] = r13;
                guest::cpu()->s[0] = S0;
                guest::cpu()->s[1] = S1;
                guest::cpu()->s[2] = S2;
                r0 = call_00614730(r0, r1, r2, r3);
                r1 = guest::cpu()->r[1];
                S0 = guest::cpu()->s[0];
                S1 = guest::cpu()->s[1];
            }
            r0 = r4;
            r13 = r13 + 0x30u;  // (from the original)
            guest::cpu()->r[1] = r1;
            guest::cpu()->r[13] = r13;
            guest::cpu()->s[0] = S0;
            guest::cpu()->s[1] = S1;
            return r0;
        }
        r0 = r0 + 1u;
        guest::preempt();
    } while (r0 < r2);
    r0 = 0u;
    r13 = r13 + 0x30u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    return r0;
}

}  // namespace d_005923fc
GUEST_EXPORT(0x005923fc, d_005923fc::f_005923fc);

// f_005929c0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005929c0 {

struct __attribute__((packed)) Object_005929c0_0 {
    u8 unknown_0[0x16f];  // (not used here)
    u8 byte_16f;
};
GUEST_OFFSET(Object_005929c0_0, byte_16f, 0x16f);  // (from the original)

inline constexpr guest::Function<0x002fcb84, u32(u32, u32, u32, u32)> call_002fcb84;  // (from the original)
inline constexpr guest::Function<0x002fccdc, u32(u32, u32, u32, u32)> call_002fccdc;  // (from the original)
inline constexpr guest::Function<0x002fd010, u32(u32, u32, u32, u32)> call_002fd010;  // (from the original)
inline constexpr guest::Function<0x00582e9c, u32(u32, u32, u32, u32)> call_00582e9c;  // (from the original)

u32 f_005929c0(gptr<Object_005929c0_0> arg0, u32 r1, u32 r2, u32 r3) {
    u32 r0 = arg0.addr();
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r13 = guest::cpu()->r[13];
    *gptr<u32>(r13 + 0xffffffe8u) = u32(r3);  // (from the original)
    r13 = r13 - 0x18;  // (from the original)
    r4 = r0;
    r7 = 0u;
    r0 = u32(arg0->byte_16f);
    if (r0 >= 8u) {
        goto L_592ae8;
    }
    r0 = r0 + 1u & 0xffu;  // (from the original)
    arg0->byte_16f = u8(r0);
    if (r0 != 8u) {
        goto L_592ae8;
    }
    r0 = r4 + 0x64u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002fccdc(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r6 = r0;
    r0 = r4 + 0x64u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002fd010(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        goto L_592ae8;
    }
    r5 = u32(s32(s8(*gptr<u8>(r0 + 0xdu))));  // (from the original)
    if (r6 != 4u) {
        if (r6 == 6u) {
            goto L_592aac;
        }
        if (r6 == 8u) {
            goto L_592a88;
        }
        if (r6 != 0x19u) {  // (from the original)
            goto L_592ae8;
        }
        goto L_592ad0;
    }
    r1 = 6u;
    r0 = r4 + 0x64u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002fcb84(r0, r1, r2, r3);
    r2 = r4;
    if (r0 != 0) {
        r0 = 0x1000637u;  // (from the original)
        r3 = r5;
        r1 = r2 + 0x40u;  // (from the original)
        *gptr<u32>(r13) = u32(r7);
        guest::cpu()->r[13] = r13;
        r0 = call_00582e9c(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        goto L_592ae8;
    }
    r0 = 0x100062fu;  // (from the original)
    r3 = r5;
    r1 = r2 + 0x40u;  // (from the original)
    *gptr<u32>(r13) = u32(r7);
    guest::cpu()->r[13] = r13;
    r0 = call_00582e9c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    goto L_592ae8;
L_592a88:;
    r0 = 0x1000631u;  // (from the original)
    r2 = r4;
    r3 = r5;
    r1 = r4 + 0x40u;  // (from the original)
    *gptr<u32>(r13) = u32(r7);
    guest::cpu()->r[13] = r13;
    r0 = call_00582e9c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    goto L_592ae8;
L_592aac:;
    r0 = 0x1000633u;  // (from the original)
    r2 = r4;
    r3 = r5;
    r1 = r4 + 0x40u;  // (from the original)
    *gptr<u32>(r13) = u32(r7);
    guest::cpu()->r[13] = r13;
    r0 = call_00582e9c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    goto L_592ae8;
L_592ad0:;
    r0 = 0x1000635u;  // (from the original)
    r3 = r5 + 1u;
    r2 = r4;
    r1 = r4 + 0x40u;  // (from the original)
    *gptr<u32>(r13) = u32(r7);
    guest::cpu()->r[13] = r13;
    r0 = call_00582e9c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
L_592ae8:;
    r0 = u32(*gptr<u8>(r4 + 0x121u));  // (from the original)
    if (r0 != 0xau) {  // (from the original)
        goto L_592b50;
    }
    r0 = r4 + 0x64u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002fccdc(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r6 = r0;
    r0 = r4 + 0x64u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002fd010(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        goto L_592b50;
    }
    r5 = u32(s32(s8(*gptr<u8>(r0 + 0xdu))));  // (from the original)
    if (r6 == 4u) {
        goto L_592b54;
    }
    if (r6 == 6u) {
        goto L_592bb8;
    }
    if (r6 == 8u) {
        goto L_592b9c;
    }
    if (r6 != 0x19u) {  // (from the original)
        goto L_592b50;
    }
    r0 = 0x1000636u;  // (from the original)
    r3 = r5 + 1u;
    r2 = r4;
    r1 = r4 + 0x40u;  // (from the original)
    *gptr<u32>(r13) = u32(r7);
    guest::cpu()->r[13] = r13;
    r0 = call_00582e9c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
L_592b50:;
    r13 = r13 + 0x18;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
L_592b54:;
    r1 = 6u;
    r0 = r4 + 0x64u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002fcb84(r0, r1, r2, r3);
    r2 = r4;
    if (r0 != 0) {
        r0 = 0x1000638u;  // (from the original)
        r3 = r5;
        r1 = r2 + 0x40u;  // (from the original)
        *gptr<u32>(r13) = u32(r7);
        guest::cpu()->r[13] = r13;
        r0 = call_00582e9c(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r13 = r13 + 0x18;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    r0 = 0x1000630u;  // (from the original)
    r3 = r5;
    r1 = r2 + 0x40u;  // (from the original)
    *gptr<u32>(r13) = u32(r7);
    guest::cpu()->r[13] = r13;
    r0 = call_00582e9c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r13 = r13 + 0x18;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
L_592b9c:;
    r0 = 0x1000632u;  // (from the original)
    r2 = r4;
    r3 = r5;
    r1 = r4 + 0x40u;  // (from the original)
    *gptr<u32>(r13) = u32(r7);
    guest::cpu()->r[13] = r13;
    r0 = call_00582e9c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r13 = r13 + 0x18;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
L_592bb8:;
    r0 = 0x1000634u;  // (from the original)
    r2 = r4;
    r3 = r5;
    r1 = r4 + 0x40u;  // (from the original)
    *gptr<u32>(r13) = u32(r7);
    guest::cpu()->r[13] = r13;
    r0 = call_00582e9c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r13 = r13 + 0x18;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_005929c0
GUEST_EXPORT(0x005929c0, d_005929c0::f_005929c0);

// f_005937b4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005937b4 {

inline constexpr guest::Function<0x002fcb84, u32(u32, u32, u32, u32)> call_002fcb84;  // (from the original)
inline constexpr guest::Function<0x002fccdc, u32(u32, u32, u32, u32)> call_002fccdc;  // (from the original)
inline constexpr guest::Function<0x002fd010, u32(u32, u32, u32, u32)> call_002fd010;  // (from the original)
inline constexpr guest::Function<0x00582e9c, u32(u32, u32, u32, u32)> call_00582e9c;  // (from the original)

u32 f_005937b4(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 res = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r13 = guest::cpu()->r[13];
    u32 nf = 0;
    u32 zf = 0;
    u32 vf = 0;
    *gptr<u32>(r13 + 0xffffffe0u) = u32(r3);  // (from the original)
    r13 = r13 - 0x20;  // (from the original)
    r5 = r0;
    r4 = r2;
    r7 = r1;
    r0 = r1;
    guest::cpu()->r[13] = r13;
    r0 = call_002fccdc(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r6 = r0;
    r0 = r7;
    guest::cpu()->r[13] = r13;
    r0 = call_002fd010(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        goto L_593824;
    }
    zf = r4 == 1u;
    r4 = u32(s32(s8(*gptr<u8>(r0 + 0xdu))));  // (from the original)
    r8 = 0u;
    if (zf) {
        goto L_593828;
    }
    res = r6 - 8u;
    nf = res >> 0x1f;  // (from the original)
    zf = res == 0;
    vf = ((r6 ^ 8u) & (r6 ^ res)) >> 0x1f;  // (from the original)
    if (zf) {
        goto L_593940;
    }
    if (!zf && nf == vf) {
        goto L_5938e0;
    }
    if (r6 == 4u) {
        goto L_59390c;
    }
    if (r6 != 6u) {
        goto L_593824;
    }
    r0 = 0x10005f2u;  // (from the original)
    r2 = r5;
    r3 = r4;
    r1 = r5 + 0x40u;  // (from the original)
    *gptr<u32>(r13) = u32(r8);
    guest::cpu()->r[13] = r13;
    r0 = call_00582e9c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
L_593824:;
    r13 = r13 + 0x20;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
L_593828:;
    if (r6 != 4u) {
        if (r6 == 6u) {
            goto L_5938c4;
        }
        if (r6 == 8u) {
            goto L_5938a8;
        }
        if (r6 != 0x19u) {  // (from the original)
            guest::preempt();
            goto L_593824;
        }
        r0 = 0x10005f5u;  // (from the original)
        r3 = r4 + 1u;
        r2 = r5;
        r1 = r5 + 0x40u;  // (from the original)
        *gptr<u32>(r13) = u32(r8);
        guest::cpu()->r[13] = r13;
        r0 = call_00582e9c(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r13 = r13 + 0x20;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    r1 = 6u;
    r0 = r7;
    guest::cpu()->r[13] = r13;
    r0 = call_002fcb84(r0, r1, r2, r3);
    r2 = r5;
    r3 = r4;
    if (r0 != 0) {
        r0 = 0x10005f8u;  // (from the original)
        r1 = r2 + 0x40u;  // (from the original)
        *gptr<u32>(r13) = u32(r8);
        guest::cpu()->r[13] = r13;
        r0 = call_00582e9c(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r13 = r13 + 0x20;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    r0 = 0x10005efu;  // (from the original)
    r1 = r2 + 0x40u;  // (from the original)
    *gptr<u32>(r13) = u32(r8);
    guest::cpu()->r[13] = r13;
    r0 = call_00582e9c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r13 = r13 + 0x20;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
L_5938a8:;
    r0 = 0x10005f1u;  // (from the original)
    r2 = r5;
    r3 = r4;
    r1 = r5 + 0x40u;  // (from the original)
    *gptr<u32>(r13) = u32(r8);
    guest::cpu()->r[13] = r13;
    r0 = call_00582e9c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r13 = r13 + 0x20;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
L_5938c4:;
    r0 = 0x10005f3u;  // (from the original)
    r2 = r5;
    r3 = r4;
    r1 = r5 + 0x40u;  // (from the original)
    *gptr<u32>(r13) = u32(r8);
    guest::cpu()->r[13] = r13;
    r0 = call_00582e9c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r13 = r13 + 0x20;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
L_5938e0:;
    if (r6 == 0x17u) {  // (from the original)
        goto L_59395c;
    }
    if (r6 != 0x19u) {  // (from the original)
        guest::preempt();
        goto L_593824;
    }
    r0 = 0x10005f4u;  // (from the original)
    r3 = r4 + 1u;
    r2 = r5;
    r1 = r5 + 0x40u;  // (from the original)
    *gptr<u32>(r13) = u32(r8);
    guest::cpu()->r[13] = r13;
    r0 = call_00582e9c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r13 = r13 + 0x20;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
L_59390c:;
    r1 = 6u;
    r0 = r7;
    guest::cpu()->r[13] = r13;
    r0 = call_002fcb84(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    if (r0 != 0) {
        guest::preempt();
        goto L_593824;
    }
    r0 = 0x10005eeu;  // (from the original)
    r2 = r5;
    r3 = r4;
    r1 = r5 + 0x40u;  // (from the original)
    *gptr<u32>(r13) = u32(r8);
    guest::cpu()->r[13] = r13;
    r0 = call_00582e9c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r13 = r13 + 0x20;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
L_593940:;
    r0 = 0x10005f0u;  // (from the original)
    r2 = r5;
    r3 = r4;
    r1 = r5 + 0x40u;  // (from the original)
    *gptr<u32>(r13) = u32(r8);
    guest::cpu()->r[13] = r13;
    r0 = call_00582e9c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r13 = r13 + 0x20;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
L_59395c:;
    r0 = 0x10005f6u;  // (from the original)
    r2 = r5;
    r3 = r4;
    r1 = r5 + 0x40u;  // (from the original)
    *gptr<u32>(r13) = u32(r8);
    guest::cpu()->r[13] = r13;
    r0 = call_00582e9c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r13 = r13 + 0x20;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_005937b4
GUEST_EXPORT(0x005937b4, d_005937b4::f_005937b4);

// f_00593b6c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00593b6c {

inline constexpr guest::Function<0x0012ca6c, u32(u32, u32, u32, u32)> call_0012ca6c;  // (from the original)
inline constexpr guest::Function<0x001e5e88, u32(u32, u32, u32, u32)> call_001e5e88;  // (from the original)
inline constexpr guest::Function<0x002075d4, u32(u32, u32, u32, u32)> call_002075d4;  // (from the original)
inline constexpr guest::Function<0x002f825c, u32(u32, u32, u32, u32)> call_002f825c;  // (from the original)
inline constexpr guest::Function<0x002fd108, u32(u32, u32, u32, u32)> call_002fd108;  // (from the original)
inline constexpr guest::Function<0x003166a8, u32(u32, u32, u32, u32)> call_003166a8;  // (from the original)
inline constexpr guest::Function<0x004ecf18, u32(u32, u32, u32, u32)> call_004ecf18;  // (from the original)
inline constexpr guest::Function<0x00582e9c, u32(u32, u32, u32, u32)> call_00582e9c;  // (from the original)
inline constexpr guest::Function<0x00590f1c, u32(u32, u32, u32, u32)> call_00590f1c;  // (from the original)
inline constexpr guest::Function<0x00592c14, u32(u32, u32, u32, u32)> call_00592c14;  // (from the original)
inline constexpr guest::Function<0x0059317c, u32(u32, u32, u32, u32)> call_0059317c;  // (from the original)
inline constexpr guest::Function<0x00593470, u32(u32, u32, u32, u32)> call_00593470;  // (from the original)
inline constexpr guest::Function<0x005937b4, u32(u32, u32, u32, u32)> call_005937b4;  // (from the original)

u32 f_00593b6c(u32 r0, u32 r1, u32 r2, u32 r3) {
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
    r13 = r13 - 0x38u;  // (from the original)
    r6 = r3;
    r9 = r1;
    r11 = r0;
    r1 = 0x98ad14u;  // (from the original)
    r5 = *gptr<u32>(r13 + 0x38u);  // (from the original)
    r10 = r2;
    r0 = 0u;
    do {
L_593b90:;
        r2 = *gptr<u32>(r1 + (r0 << 2));
        if (!(r2 == 0)) {
            r8 = 0u;
            r7 = r2;
            *gptr<u32>(r1 + (r0 << 2)) = u32(r8);
            r2 = 4u;
            r1 = r7;
            r0 = 0x170u;  // (from the original)
            guest::cpu()->r[13] = r13;
            r0 = call_002fd108(r0, r1, r2, r3);
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
            r4 = r0;
            r1 = 0x170u;  // (from the original)
            guest::cpu()->r[13] = r13;
            r0 = call_002f825c(r0, r1, r2, r3);
            r1 = guest::cpu()->r[1];
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
            r0 = r4;
            guest::cpu()->r[13] = r13;
            r0 = call_00590f1c(r0, r1, r2, r3);
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
            r1 = 0x907ad0u;  // (from the original)
            *gptr<u32>(r0) = u32(r1);
            r0 = r0 + 0x124u;  // (from the original)
            guest::cpu()->r[13] = r13;
            r0 = call_004ecf18(r0, r1, r2, r3);
            r1 = guest::cpu()->r[1];
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
            r0 = r0 + 0x18u;  // (from the original)
            guest::cpu()->r[13] = r13;
            r0 = call_003166a8(r0, r1, r2, r3);
            r1 = guest::cpu()->r[1];
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
            r0 = r0 + 0x18u;  // (from the original)
            guest::cpu()->r[13] = r13;
            r0 = call_003166a8(r0, r1, r2, r3);
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
            r4 = r0 - 0x154u;  // (from the original)
            r1 = r7;
            r0 = r0 - 0x134u;  // (from the original)
            guest::cpu()->r[13] = r13;
            r0 = call_0012ca6c(r0, r1, r2, r3);
            r3 = r10;
            r2 = r9;
            r1 = r11;
            r0 = r4;
            *gptr<u32>(r13) = u32(r6);
            guest::cpu()->r[13] = r13;
            r0 = call_00593470(r0, r1, r2, r3);
            r1 = guest::cpu()->r[1];
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
            if (r5 == 0) {
                goto L_593cb0;
            }
            r0 = 1u;
            guest::cpu()->r[13] = r13;
            r0 = call_001e5e88(r0, r1, r2, r3);
            r1 = guest::cpu()->r[1];
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
            res = r0 - 0x13u;  // (from the original)
            r5 = r0;
            if (res >> 0x1f == ((r0 ^ 0x13u) & (r0 ^ res)) >> 0x1f) {  // (from the original)
                goto L_593ccc;
            }
            r1 = r13 + 8u;
            r0 = r4;
            guest::cpu()->r[13] = r13;
            r0 = call_00592c14(r0, r1, r2, r3);
            if (!(r0 == 0)) {
                *gptr<u32>(r13) = u32(1u);
                *gptr<u32>(r13 + 4) = u32(r8);
                r3 = 0xae5664u;  // (from the original)
                r2 = 0x975beeu;  // (from the original)
                r1 = r13 + 8u;
                r0 = *gptr<u32>(0x94efa0u + (r5 << 2));  // (from the original)
                guest::cpu()->r[13] = r13;
                r0 = call_002075d4(r0, r1, r2, r3);
            }
            r0 = 0x10005f7u;  // (from the original)
            r3 = 4u;
            r2 = r4;
            r1 = r4 + 0x40u;  // (from the original)
            *gptr<u32>(r13) = u32(r8);
            guest::cpu()->r[13] = r13;
            r0 = call_00582e9c(r0, r1, r2, r3);
            r1 = guest::cpu()->r[1];
            goto L_593ccc;
        }
        r0 = r0 + 1u;
        guest::preempt();
    } while (r0 < 0x14u);  // (from the original)
    r0 = 0u;
    r13 = r13 + 0x38u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
L_593cb0:;
    r2 = r6;
    r1 = r11;
    r0 = r4;
    guest::cpu()->r[13] = r13;
    r0 = call_005937b4(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = r6;
    r0 = r4;
    guest::cpu()->r[13] = r13;
    r0 = call_0059317c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
L_593ccc:;
    r0 = r4;
    r13 = r13 + 0x38u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_00593b6c
GUEST_EXPORT(0x00593b6c, d_00593b6c::f_00593b6c);

// f_00593fbc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00593fbc {

struct __attribute__((packed)) Object_00593fbc_0 {
    u8 unknown_0[0x40];  // (not used here)
    u32 word_40;
    u32 word_44;
    u32 word_48;
    u8 unknown_4c[0xd8];  // (not used here)
    u32 word_124;
    u32 word_128;
    u32 word_12c;
    u8 unknown_130[0x10];  // (not used here)
    u32 word_140;
};
GUEST_OFFSET(Object_00593fbc_0, word_40, 0x40);  // (from the original)
GUEST_OFFSET(Object_00593fbc_0, word_44, 0x44);  // (from the original)
GUEST_OFFSET(Object_00593fbc_0, word_48, 0x48);  // (from the original)
GUEST_OFFSET(Object_00593fbc_0, word_124, 0x124);  // (from the original)
GUEST_OFFSET(Object_00593fbc_0, word_128, 0x128);  // (from the original)
GUEST_OFFSET(Object_00593fbc_0, word_12c, 0x12c);  // (from the original)
GUEST_OFFSET(Object_00593fbc_0, word_140, 0x140);  // (from the original)

struct __attribute__((packed)) Object_00593fbc_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Object_00593fbc_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_00593fbc_1, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_00593fbc_1, word_8, 0x8);  // (from the original)

inline constexpr guest::Function<0x004ee3e8, u32(u32, u32, u32, u32)> call_004ee3e8;  // (from the original)
inline constexpr guest::Function<0x0058fe4c, u32(u32, u32, u32, u32)> call_0058fe4c;  // (from the original)
inline constexpr guest::Function<0x00591a80, u32(u32, u32, u32, u32)> call_00591a80;  // (from the original)

u32 f_00593fbc(gptr<Object_00593fbc_0> arg0, gptr<Object_00593fbc_1> arg1, float S0) {
    u32 r0 = arg0.addr();
    u32 r1 = arg1.addr();
    u32 r2 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r13 = guest::cpu()->r[13];
    float S1 = 0;
    float S2 = 0;
    r13 = r13 - 0x18u;  // (from the original)
    r4 = r0;
    arg0->word_124 = u32(arg0->word_40);
    S2 = S0;
    S1 = S0;
    arg0->word_128 = u32(arg0->word_44);
    arg0->word_12c = u32(arg0->word_48);
    r0 = r13;
    arg0->word_40 = u32(arg1->word_0);
    r2 = arg1->word_4;
    arg0->word_44 = u32(r2);
    arg0->word_48 = u32(arg1->word_8);
    arg0->word_140 = u32(std::bit_cast<u32>(S0));
    *gptr<u32>(r0) = u32(std::bit_cast<u32>(S0));
    *gptr<u32>(r0 + 4) = u32(std::bit_cast<u32>(S1));
    *gptr<u32>(r0 + 8) = u32(std::bit_cast<u32>(S2));
    r1 = r0;
    r0 = r4 + 0x58u;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2;
    r0 = call_004ee3e8(r0, r1, r2, guest::cpu()->r[3]);
    r2 = guest::cpu()->r[2];
    S1 = guest::cpu()->s[1];
    S2 = guest::cpu()->s[2];
    r1 = 0xfu;  // (from the original)
    S0 = std::bit_cast<float>(*gptr<u32>(0x594060u));  // (from the original)
    *gptr<u16>(0x144u + r4) = u16(r1);  // (from the original)
    *gptr<u32>(r4 + 0x13cu) = u32(std::bit_cast<u32>(S0));  // (from the original)
    S0 = std::bit_cast<float>(*gptr<u32>(0x594064u));  // (from the original)
    r0 = r4;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2;
    r0 = call_00591a80(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    S2 = guest::cpu()->s[2];
    *gptr<u8>(r4 + 0x146u) = u8(0u);  // (from the original)
    r0 = r4;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2;
    r0 = call_0058fe4c(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    S1 = guest::cpu()->s[1];
    *gptr<u32>(r4 + 0x1cu) = u32(std::bit_cast<u32>(std::bit_cast<float>(*gptr<u32>(0x594068u))));  // (from the original)
    S0 = std::bit_cast<float>(*gptr<u32>(0x59406cu));  // (from the original)
    *gptr<u32>(r4 + 0xf8u) = u32(std::bit_cast<u32>(S0));  // (from the original)
    r13 = r13 + 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    return r0;
}

}  // namespace d_00593fbc
GUEST_EXPORT(0x00593fbc, d_00593fbc::f_00593fbc);

// f_00594358: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00594358 {

inline constexpr guest::Function<0x002fc20c, u32(u32, u32, u32, u32)> call_002fc20c;  // (from the original)

u32 f_00594358(u32 r0, u32 r1, u32 r2) {
    guest::cpu()->r[13] -= 8u;
    r0 = call_002fc20c(r0, r1, r2, guest::cpu()->r[3]);
    r1 = 0u;
    *gptr<u8>(r0 + 4u) = u8(0xa5u);  // (from the original)
    *gptr<u8>(r0 + 5u) = u8(r1);
    *gptr<u8>(r0 + 6u) = u8(r1);
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_00594358
GUEST_EXPORT(0x00594358, d_00594358::f_00594358);

// f_00594378: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00594378 {

inline constexpr guest::Function<0x002f777c, u32(u32, u32, u32, u32)> call_002f777c;  // (from the original)

u32 f_00594378() {
    return call_002f777c(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_00594378
GUEST_EXPORT(0x00594378, d_00594378::f_00594378);

// f_00594504: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00594504 {

inline constexpr guest::Function<0x002fc20c, u32(u32, u32, u32, u32)> call_002fc20c;  // (from the original)

u32 f_00594504(u32 r0, u32 r1, u32 r2) {
    guest::cpu()->r[13] -= 8u;
    r0 = call_002fc20c(r0, r1, r2, guest::cpu()->r[3]);
    r1 = 0u;
    *gptr<u8>(r0 + 4u) = u8(0xa5u);  // (from the original)
    *gptr<u8>(r0 + 5u) = u8(r1);
    *gptr<u8>(r0 + 6u) = u8(r1);
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_00594504
GUEST_EXPORT(0x00594504, d_00594504::f_00594504);

// f_00594524: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00594524 {

inline constexpr guest::Function<0x002f777c, u32(u32, u32, u32, u32)> call_002f777c;  // (from the original)

u32 f_00594524() {
    return call_002f777c(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_00594524
GUEST_EXPORT(0x00594524, d_00594524::f_00594524);

// f_005948ec: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005948ec {

inline constexpr guest::Function<0x0012ca6c, u32(u32, u32, u32, u32)> call_0012ca6c;  // (from the original)
inline constexpr guest::Function<0x002f825c, u32(u32, u32, u32, u32)> call_002f825c;  // (from the original)
inline constexpr guest::Function<0x002fd108, u32(u32, u32, u32, u32)> call_002fd108;  // (from the original)
inline constexpr guest::Function<0x00590720, u32(u32, u32, u32, u32)> call_00590720;  // (from the original)
inline constexpr guest::Function<0x00590c14, u32(u32, u32, u32, u32)> call_00590c14;  // (from the original)
inline constexpr guest::Function<0x00590f1c, u32(u32, u32, u32, u32)> call_00590f1c;  // (from the original)
inline constexpr guest::Function<0x006c5c60, u32(u32, u32, u32, u32)> call_006c5c60;  // (from the original)

u32 f_005948ec(u32 r0, u32 r1, u32 r2, u32 r3, float S0, float S1, float S2) {
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
    u32 nf = 0;
    u32 zf = 0;
    u32 vf = 0;
    *gptr<u32>(r13 + 0xffffffd8u) = u32(r3);  // (from the original)
    r13 = r13 - 0x28;  // (from the original)
    r5 = r3;
    r9 = r1;
    r8 = r0;
    r1 = 0x98a47cu;  // (from the original)
    r6 = *gptr<u32>(r13 + 0x28u);  // (from the original)
    r3 = 0x226u;  // (from the original)
    r11 = r2;
    r0 = 0u;
    do {
L_594910:;
        r2 = *gptr<u32>(r1 + (r0 << 2));
        if (!(r2 == 0)) {
            r10 = 0u;
            r7 = r2;
            *gptr<u32>(r1 + (r0 << 2)) = u32(r10);
            r2 = 4u;
            r1 = r7;
            r0 = 0x148u;  // (from the original)
            guest::cpu()->r[13] = r13;
            guest::cpu()->s[0] = S0;
            guest::cpu()->s[1] = S1;
            guest::cpu()->s[2] = S2;
            r0 = call_002fd108(r0, r1, r2, r3);
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
            S0 = guest::cpu()->s[0];
            S1 = guest::cpu()->s[1];
            S2 = guest::cpu()->s[2];
            r4 = r0;
            r1 = 0x148u;  // (from the original)
            guest::cpu()->r[13] = r13;
            guest::cpu()->s[0] = S0;
            guest::cpu()->s[1] = S1;
            guest::cpu()->s[2] = S2;
            r0 = call_002f825c(r0, r1, r2, r3);
            r1 = guest::cpu()->r[1];
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
            S0 = guest::cpu()->s[0];
            S1 = guest::cpu()->s[1];
            S2 = guest::cpu()->s[2];
            r0 = r4;
            guest::cpu()->r[13] = r13;
            guest::cpu()->s[0] = S0;
            guest::cpu()->s[1] = S1;
            guest::cpu()->s[2] = S2;
            r0 = call_00590f1c(r0, r1, r2, r3);
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
            S0 = guest::cpu()->s[0];
            S1 = guest::cpu()->s[1];
            S2 = guest::cpu()->s[2];
            r4 = r0;
            r1 = r7;
            *gptr<u32>(r4) = u32(0x907ba0u);  // (from the original)
            r0 = r4 + 0x20u;  // (from the original)
            guest::cpu()->r[13] = r13;
            guest::cpu()->s[0] = S0;
            guest::cpu()->s[1] = S1;
            guest::cpu()->s[2] = S2;
            r0 = call_0012ca6c(r0, r1, r2, r3);
            S0 = guest::cpu()->s[0];
            S1 = guest::cpu()->s[1];
            S2 = guest::cpu()->s[2];
            r3 = r11;
            r2 = r9;
            r1 = r8;
            r0 = r4;
            *gptr<u32>(r13) = u32(r10);
            guest::cpu()->r[13] = r13;
            guest::cpu()->s[0] = S0;
            guest::cpu()->s[1] = S1;
            guest::cpu()->s[2] = S2;
            r0 = call_00590720(r0, r1, r2, r3);
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
            S1 = std::bit_cast<float>(*gptr<u32>(0x594a3cu));  // (from the original)
            r0 = r4 + 0x130u;  // (from the original)
            *gptr<u32>(r4 + 0x124u) = u32(*gptr<u32>(r4 + 0x40u));  // (from the original)
            S0 = std::bit_cast<float>(*gptr<u32>(0x594a38u));  // (from the original)
            S2 = std::bit_cast<float>(*gptr<u32>(0x594a40u));  // (from the original)
            *gptr<u32>(r4 + 0x128u) = u32(*gptr<u32>(r4 + 0x44u));  // (from the original)
            *gptr<u32>(r4 + 0x12cu) = u32(*gptr<u32>(r4 + 0x48u));  // (from the original)
            *gptr<u32>(r4 + 0x40u) = u32(*gptr<u32>(r5));  // (from the original)
            *gptr<u32>(r4 + 0x44u) = u32(*gptr<u32>(r5 + 4u));  // (from the original)
            *gptr<u32>(r4 + 0x48u) = u32(*gptr<u32>(r5 + 8u));  // (from the original)
            r1 = 0u;
            *gptr<u32>(r0) = u32(std::bit_cast<u32>(S0));
            *gptr<u32>(r0 + 4) = u32(std::bit_cast<u32>(S1));
            r0 = r4;
            *gptr<u32>(r4 + 0x138u) = u32(std::bit_cast<u32>(S0));  // (from the original)
            *gptr<u32>(r4 + 0x13cu) = u32(std::bit_cast<u32>(S2));  // (from the original)
            *gptr<u8>(r4 + 0x146u) = u8(r6);  // (from the original)
            guest::cpu()->r[13] = r13;
            guest::cpu()->s[0] = S0;
            guest::cpu()->s[1] = S1;
            guest::cpu()->s[2] = S2;
            r0 = call_00590c14(r0, r1, r2, r3);
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
            S0 = guest::cpu()->s[0];
            S1 = guest::cpu()->s[1];
            S2 = guest::cpu()->s[2];
            r1 = 0u;
            r0 = r5;
            guest::cpu()->r[13] = r13;
            guest::cpu()->s[0] = S0;
            guest::cpu()->s[1] = S1;
            guest::cpu()->s[2] = S2;
            r0 = call_006c5c60(r0, r1, r2, r3);
            S0 = guest::cpu()->s[0];
            *gptr<u32>(r4 + 0x140u) = u32(std::bit_cast<u32>(S0));  // (from the original)
            S1 = std::bit_cast<float>(*gptr<u32>(r4 + 0x128u));  // (from the original)
            r1 = 0x41200000u;  // (from the original)
            S0 = S0 - S1;
            r0 = std::bit_cast<u32>(S0);
            res = r0 - r1;
            nf = res >> 0x1f;  // (from the original)
            zf = res == 0;
            vf = ((r0 ^ r1) & (r0 ^ res)) >> 0x1f;  // (from the original)
            r1 = r4 + 0x100u;  // (from the original)
            if (!zf && nf == vf) {
                r0 = 0x18u;  // (from the original)
            }
            if (zf || nf != vf) {
                r0 = 8u;
            }
            *gptr<u16>(r1 + 0x44u) = u16(r0);  // (from the original)
            r0 = r4;
            r13 = r13 + 0x28;  // (from the original)
            guest::cpu()->r[1] = r1;
            guest::cpu()->r[13] = r13;
            guest::cpu()->s[0] = S0;
            guest::cpu()->s[1] = S1;
            return r0;
        }
        r0 = r0 + 1u;
        guest::preempt();
    } while (r0 < r3);
    r0 = 0u;
    r13 = r13 + 0x28;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    return r0;
}

}  // namespace d_005948ec
GUEST_EXPORT(0x005948ec, d_005948ec::f_005948ec);

// f_00594c54: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00594c54 {

struct __attribute__((packed)) Object_00594c54_0 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
};
GUEST_OFFSET(Object_00594c54_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_00594c54_0, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_00594c54_0, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Object_00594c54_0, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Object_00594c54_0, word_10, 0x10);  // (from the original)


u32 f_00594c54(gptr<Object_00594c54_0> arg0, u32 r1, u32 r2, float S0, float S1) {
    u32 res = 0;
    u32 r0 = arg0.addr();
    u32 r3 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r12 = guest::cpu()->r[12];
    u32 nf = 0;
    u32 zf = 0;
    u32 vf = 0;
    guest::cpu()->r[13] -= 0xcu;  // (from the original)
    r3 = arg0->word_0;
    res = r3 - r1;
    nf = res >> 0x1f;  // (from the original)
    zf = res == 0;
    vf = ((r3 ^ r1) & (r3 ^ res)) >> 0x1f;  // (from the original)
    if (zf || nf != vf) {
        r12 = arg0->word_8;
        res = r1 - r12;
        nf = res >> 0x1f;  // (from the original)
        zf = res == 0;
        vf = ((r1 ^ r12) & (r1 ^ res)) >> 0x1f;  // (from the original)
    }
    if (!zf && nf == vf) {
        goto L_594cbc;
    }
    r4 = arg0->word_4;
    r5 = r2;
    res = r4 - r2;
    nf = res >> 0x1f;  // (from the original)
    zf = res == 0;
    vf = ((r4 ^ r2) & (r4 ^ res)) >> 0x1f;  // (from the original)
    if (zf || nf != vf) {
        r6 = arg0->word_c;
        res = r2 - r6;
        nf = res >> 0x1f;  // (from the original)
        zf = res == 0;
        vf = ((r2 ^ r6) & (r2 ^ res)) >> 0x1f;  // (from the original)
    }
    if (!zf && nf == vf) {
        goto L_594cbc;
    }
    S1 = std::bit_cast<float>(arg0->word_10);
    S0 = std::bit_cast<float>(vcvt_sz_f(S1 * float(s32(std::bit_cast<u32>(std::bit_cast<float>(r5 - r4))))));
    r0 = std::bit_cast<u32>(S0);
    if (r0 == 0) {
        goto L_594cc8;
    }
    r2 = r3 + r0;
    res = r2 - r1;
    nf = res >> 0x1f;  // (from the original)
    zf = res == 0;
    vf = ((r2 ^ r1) & (r2 ^ res)) >> 0x1f;  // (from the original)
    res = r12 - r0;
    r0 = res;
    if (zf || nf != vf) {
        res = r1 - r0;
        nf = res >> 0x1f;  // (from the original)
        zf = res == 0;
        vf = ((r1 ^ r0) & (r1 ^ res)) >> 0x1f;  // (from the original)
    }
    if (zf || nf != vf) {
        goto L_594cc8;
    }
L_594cbc:;
    guest::cpu()->r[13] += 0xcu;  // (from the original)
    r0 = 0u;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    return r0;
L_594cc8:;
    guest::cpu()->r[13] += 0xcu;  // (from the original)
    r0 = 1u;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    return r0;
}

}  // namespace d_00594c54
GUEST_EXPORT(0x00594c54, d_00594c54::f_00594c54);

// f_00594d9c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00594d9c {

struct __attribute__((packed)) Object_00594d9c_0 {
    u8 byte_0;
    u8 byte_1;
    u8 byte_2;
    u8 byte_3;
    u16 half_4;
};
GUEST_OFFSET(Object_00594d9c_0, byte_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_00594d9c_0, byte_1, 0x1);  // (from the original)
GUEST_OFFSET(Object_00594d9c_0, byte_2, 0x2);  // (from the original)
GUEST_OFFSET(Object_00594d9c_0, byte_3, 0x3);  // (from the original)
GUEST_OFFSET(Object_00594d9c_0, half_4, 0x4);  // (from the original)

inline constexpr guest::Function<0x005971e4, u32(u32, u32, u32, u32)> call_005971e4;  // (from the original)

u32 f_00594d9c(gptr<Object_00594d9c_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r1 = 0;
    u32 r2 = 0;
    u32 r3 = 0;
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 0x10u;  // (from the original)
    *gptr<u32>(r13) = u32(u32(arg0->half_4));
    *gptr<u32>(r13 + 4) = u32(0u);
    r3 = u32(arg0->byte_3);
    r2 = u32(arg0->byte_0);
    r1 = u32(arg0->byte_2);
    r0 = u32(arg0->byte_1);
    guest::cpu()->r[13] = r13;
    r0 = call_005971e4(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r13 = r13 + 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_00594d9c
GUEST_EXPORT(0x00594d9c, d_00594d9c::f_00594d9c);

// f_00594dcc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00594dcc {

struct __attribute__((packed)) Object_00594dcc_0 {
    u8 byte_0;
    u8 byte_1;
    u8 byte_2;
    u8 byte_3;
    u16 half_4;
};
GUEST_OFFSET(Object_00594dcc_0, byte_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_00594dcc_0, byte_1, 0x1);  // (from the original)
GUEST_OFFSET(Object_00594dcc_0, byte_2, 0x2);  // (from the original)
GUEST_OFFSET(Object_00594dcc_0, byte_3, 0x3);  // (from the original)
GUEST_OFFSET(Object_00594dcc_0, half_4, 0x4);  // (from the original)


void f_00594dcc(gptr<Object_00594dcc_0> arg0) {
    u32 r1 = 0;
    r1 = 0u;
    arg0->byte_0 = u8(0xa5u);  // (from the original)
    arg0->byte_1 = u8(r1);
    arg0->byte_2 = u8(r1);
    arg0->byte_3 = u8(r1);
    arg0->half_4 = u16(r1);
    guest::cpu()->r[1] = r1;
    return;
}

}  // namespace d_00594dcc
GUEST_EXPORT(0x00594dcc, d_00594dcc::f_00594dcc);

// f_00594dec: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00594dec {

inline constexpr guest::Function<0x002fae84, u32(u32, u32, u32, u32)> call_002fae84;  // (from the original)

u32 f_00594dec(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = guest::cpu()->r[4];
    goto L_594dec;
L_52aadc:;
    r3 = u32(*gptr<u8>(r0 + 0x16u));  // (from the original)
    if (r3 < 3u) {
        r3 = r3 + 1u;
        *gptr<u8>(r0 + 0x16u) = u8(r3);  // (from the original)
        *gptr<u8>(r0 + 0x17u) = u8(r3 - 1u);  // (from the original)
    } else {
        r3 = u32(*gptr<u8>(r0 + 0x17u)) + 1u & 0xffu;  // (from the original)
        *gptr<u8>(r0 + 0x17u) = u8(r3);  // (from the original)
        if (r3 >= 3u) {
            *gptr<u8>(r0 + 0x17u) = u8(0u);  // (from the original)
        }
    }
    *gptr<u8>(r0 + (u32(*gptr<u8>(r0 + 0x17u)) << 1) + 0x10u) = u8(r1);  // (from the original)
    r1 = u32(*gptr<u8>(r0 + 0x17u));  // (from the original)
    r0 = r0 + (r1 << 1);
    *gptr<u8>(r0 + 0x11u) = u8(r2);  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
L_594dec:;
    guest::cpu()->r[13] -= 8u;
    r4 = r0;
    r0 = call_002fae84(r0, r1, r2, r3);
    r2 = u32(*gptr<u8>(r4 + 1u));
    r1 = u32(*gptr<u8>(r4));
    guest::cpu()->r[13] += 8u;
    r0 = r0 + 0x621b2u;  // (from the original)
    guest::preempt();
    goto L_52aadc;
}

}  // namespace d_00594dec
GUEST_EXPORT(0x00594dec, d_00594dec::f_00594dec);

// f_00594f3c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00594f3c {

inline constexpr guest::Function<0x0012ca6c, u32(u32, u32, u32, u32)> call_0012ca6c;  // (from the original)
inline constexpr guest::Function<0x002f825c, u32(u32, u32, u32, u32)> call_002f825c;  // (from the original)
inline constexpr guest::Function<0x002fd108, u32(u32, u32, u32, u32)> call_002fd108;  // (from the original)
inline constexpr guest::Function<0x004ecb80, u32(u32, u32, u32, u32)> call_004ecb80;  // (from the original)
inline constexpr guest::Function<0x004ecd30, u32(u32, u32, u32, u32)> call_004ecd30;  // (from the original)
inline constexpr guest::Function<0x004ecf18, u32(u32, u32, u32, u32)> call_004ecf18;  // (from the original)
inline constexpr guest::Function<0x004eda50, u32(u32, u32, u32, u32)> call_004eda50;  // (from the original)
inline constexpr guest::Function<0x00590f1c, u32(u32, u32, u32, u32)> call_00590f1c;  // (from the original)
inline constexpr guest::Function<0x00591330, u32(u32, u32, u32, u32)> call_00591330;  // (from the original)
inline constexpr guest::Function<0x0059b698, u32(u32, u32, u32, u32)> call_0059b698;  // (from the original)
inline constexpr guest::Function<0x007460b8, u32(u32, u32, u32, u32)> call_007460b8;  // (from the original)

u32 f_00594f3c(u32 r0, u32 r1, u32 r2, u32 r3, float S0) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r9 = guest::cpu()->r[9];
    u32 r10 = guest::cpu()->r[10];
    u32 r13 = guest::cpu()->r[13];
    u32 cf = 0;
    *gptr<u32>(r13 + 0xffffffd8u) = u32(r3);  // (from the original)
    r13 = r13 - 0x28;  // (from the original)
    r5 = r3;
    r7 = r1;
    r6 = r0;
    r8 = r2;
    r1 = 0x98ad14u;  // (from the original)
    r0 = 0u;
    do {
L_594f58:;
        r2 = *gptr<u32>(r1 + (r0 << 2));
        if (!(r2 == 0)) {
            r9 = 0u;
            r10 = r2;
            *gptr<u32>(r1 + (r0 << 2)) = u32(r9);
            r2 = 4u;
            r1 = r10;
            r0 = 0x160u;  // (from the original)
            guest::cpu()->r[13] = r13;
            guest::cpu()->s[0] = S0;
            r0 = call_002fd108(r0, r1, r2, r3);
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
            S0 = guest::cpu()->s[0];
            r4 = r0;
            r1 = 0x160u;  // (from the original)
            guest::cpu()->r[13] = r13;
            guest::cpu()->s[0] = S0;
            r0 = call_002f825c(r0, r1, r2, r3);
            r1 = guest::cpu()->r[1];
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
            S0 = guest::cpu()->s[0];
            r0 = r4;
            guest::cpu()->r[13] = r13;
            guest::cpu()->s[0] = S0;
            r0 = call_00590f1c(r0, r1, r2, r3);
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
            S0 = guest::cpu()->s[0];
            r1 = 0x907970u;  // (from the original)
            *gptr<u32>(r0) = u32(r1);
            r0 = r0 + 0x124u;  // (from the original)
            guest::cpu()->r[13] = r13;
            guest::cpu()->s[0] = S0;
            r0 = call_004ecb80(r0, r1, r2, r3);
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
            S0 = guest::cpu()->s[0];
            r1 = 0x907c00u;  // (from the original)
            *gptr<u32>(r0 - 0x124u) = u32(r1);  // (from the original)
            r0 = r0 + 0x20u;  // (from the original)
            guest::cpu()->r[13] = r13;
            guest::cpu()->s[0] = S0;
            r0 = call_004ecf18(r0, r1, r2, r3);
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
            S0 = guest::cpu()->s[0];
            r4 = r0 - 0x144u;  // (from the original)
            r1 = r10;
            r0 = r0 - 0x124u;  // (from the original)
            guest::cpu()->r[13] = r13;
            guest::cpu()->s[0] = S0;
            r0 = call_0012ca6c(r0, r1, r2, r3);
            S0 = guest::cpu()->s[0];
            r10 = 1u;
            r1 = r6;
            r2 = r7;
            r3 = r8;
            r0 = r4;
            *gptr<u32>(r13) = u32(r10);
            guest::cpu()->r[13] = r13;
            guest::cpu()->s[0] = S0;
            r0 = call_00591330(r0, r1, r2, r3);
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
            S0 = guest::cpu()->s[0];
            cf = r5 >= 4u;
            if (cf) {
                *gptr<u8>(r4 + 0x15cu) = u8(r10);  // (from the original)
            }
            r0 = 0x846b88u;  // (from the original)
            r1 = r5;
            if (!cf) {
                *gptr<u8>(r4 + 0x15cu) = u8(r9);  // (from the original)
            }
            guest::cpu()->r[13] = r13;
            guest::cpu()->s[0] = S0;
            r0 = call_0059b698(r0, r1, r2, r3);
            S0 = guest::cpu()->s[0];
            r2 = r0;
            r3 = r4 + 0x20u;  // (from the original)
            r1 = r4 + 0x58u;  // (from the original)
            r0 = r4 + 0x144u;  // (from the original)
            *gptr<u32>(r13) = u32(r9);
            guest::cpu()->r[13] = r13;
            guest::cpu()->s[0] = S0;
            r0 = call_004ecd30(r0, r1, r2, r3);
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
            S0 = guest::cpu()->s[0];
            r1 = r4 + 0x144u;  // (from the original)
            r0 = r4 + 0x58u;  // (from the original)
            guest::cpu()->r[13] = r13;
            guest::cpu()->s[0] = S0;
            r0 = call_004eda50(r0, r1, r2, r3);
            r1 = guest::cpu()->r[1];
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
            S0 = guest::cpu()->s[0];
            r0 = r4 + 0x144u;  // (from the original)
            guest::cpu()->r[13] = r13;
            guest::cpu()->s[0] = S0;
            r0 = call_007460b8(r0, r1, r2, r3);
            r1 = guest::cpu()->r[1];
            S0 = guest::cpu()->s[0];
            S0 = std::bit_cast<float>(vcvt_uz_f(S0));
            *gptr<u8>(r4 + 0x121u) = u8(std::bit_cast<u32>(S0));  // (from the original)
            r0 = r4;
            r13 = r13 + 0x28;  // (from the original)
            guest::cpu()->r[1] = r1;
            guest::cpu()->r[13] = r13;
            guest::cpu()->s[0] = S0;
            return r0;
        }
        r0 = r0 + 1u;
        guest::preempt();
    } while (r0 < 0x14u);  // (from the original)
    r0 = 0u;
    r13 = r13 + 0x28;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    return r0;
}

}  // namespace d_00594f3c
GUEST_EXPORT(0x00594f3c, d_00594f3c::f_00594f3c);

// f_00595194: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00595194 {

inline constexpr guest::Function<0x0012ca6c, u32(u32, u32, u32, u32)> call_0012ca6c;  // (from the original)
inline constexpr guest::Function<0x002f825c, u32(u32, u32, u32, u32)> call_002f825c;  // (from the original)
inline constexpr guest::Function<0x002fd108, u32(u32, u32, u32, u32)> call_002fd108;  // (from the original)
inline constexpr guest::Function<0x00582e4c, u32(u32, u32, u32, u32)> call_00582e4c;  // (from the original)
inline constexpr guest::Function<0x00590720, u32(u32, u32, u32, u32)> call_00590720;  // (from the original)
inline constexpr guest::Function<0x00590c14, u32(u32, u32, u32, u32)> call_00590c14;  // (from the original)
inline constexpr guest::Function<0x00590f1c, u32(u32, u32, u32, u32)> call_00590f1c;  // (from the original)

u32 f_00595194(u32 r0, u32 r1, u32 r2, u32 r3, float S0, float S1, float S2, float S3) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r9 = guest::cpu()->r[9];
    u32 r10 = guest::cpu()->r[10];
    u32 r11 = guest::cpu()->r[11];
    u32 r13 = guest::cpu()->r[13];
    *gptr<u32>(r13 + 0xffffffd8u) = u32(r3);  // (from the original)
    r13 = r13 - 0x28;  // (from the original)
    r5 = r3;
    r8 = r0;
    r11 = r2;
    r3 = 0x98a47cu;  // (from the original)
    r6 = *gptr<u32>(r13 + 0x28u);  // (from the original)
    r2 = 0x226u;  // (from the original)
    r9 = r1;
    r0 = 0u;
    do {
L_5951b8:;
        r1 = *gptr<u32>(r3 + (r0 << 2));
        if (!(r1 == 0)) {
            r10 = 0u;
            *gptr<u32>(r3 + (r0 << 2)) = u32(r10);
            r7 = r1;
            r2 = 4u;
            r0 = 0x144u;  // (from the original)
            guest::cpu()->r[13] = r13;
            guest::cpu()->s[0] = S0;
            guest::cpu()->s[1] = S1;
            guest::cpu()->s[2] = S2;
            guest::cpu()->s[3] = S3;
            r0 = call_002fd108(r0, r1, r2, r3);
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
            S0 = guest::cpu()->s[0];
            S1 = guest::cpu()->s[1];
            S2 = guest::cpu()->s[2];
            S3 = guest::cpu()->s[3];
            r4 = r0;
            r1 = 0x144u;  // (from the original)
            guest::cpu()->r[13] = r13;
            guest::cpu()->s[0] = S0;
            guest::cpu()->s[1] = S1;
            guest::cpu()->s[2] = S2;
            guest::cpu()->s[3] = S3;
            r0 = call_002f825c(r0, r1, r2, r3);
            r1 = guest::cpu()->r[1];
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
            S0 = guest::cpu()->s[0];
            S1 = guest::cpu()->s[1];
            S2 = guest::cpu()->s[2];
            S3 = guest::cpu()->s[3];
            r0 = r4;
            guest::cpu()->r[13] = r13;
            guest::cpu()->s[0] = S0;
            guest::cpu()->s[1] = S1;
            guest::cpu()->s[2] = S2;
            guest::cpu()->s[3] = S3;
            r0 = call_00590f1c(r0, r1, r2, r3);
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
            S0 = guest::cpu()->s[0];
            S1 = guest::cpu()->s[1];
            S2 = guest::cpu()->s[2];
            S3 = guest::cpu()->s[3];
            r4 = r0;
            *gptr<u32>(r0) = u32(0x907c30u);  // (from the original)
            r1 = r7;
            r0 = r0 + 0x20u;  // (from the original)
            guest::cpu()->r[13] = r13;
            guest::cpu()->s[0] = S0;
            guest::cpu()->s[1] = S1;
            guest::cpu()->s[2] = S2;
            guest::cpu()->s[3] = S3;
            r0 = call_0012ca6c(r0, r1, r2, r3);
            S0 = guest::cpu()->s[0];
            S1 = guest::cpu()->s[1];
            S2 = guest::cpu()->s[2];
            S3 = guest::cpu()->s[3];
            r3 = r11;
            r2 = r9;
            r1 = r8;
            r0 = r4;
            *gptr<u32>(r13) = u32(r10);
            guest::cpu()->r[13] = r13;
            guest::cpu()->s[0] = S0;
            guest::cpu()->s[1] = S1;
            guest::cpu()->s[2] = S2;
            guest::cpu()->s[3] = S3;
            r0 = call_00590720(r0, r1, r2, r3);
            r3 = guest::cpu()->r[3];
            r2 = *gptr<u32>(r4 + 0x40u);  // (from the original)
            S2 = std::bit_cast<float>(*gptr<u32>(0x5952e8u));  // (from the original)
            r1 = r4 + 0x130u;  // (from the original)
            *gptr<u32>(r4 + 0x124u) = u32(r2);  // (from the original)
            S3 = std::bit_cast<float>(*gptr<u32>(0x5952ecu));  // (from the original)
            *gptr<u32>(r4 + 0x128u) = u32(*gptr<u32>(r4 + 0x44u));  // (from the original)
            *gptr<u32>(r4 + 0x12cu) = u32(*gptr<u32>(r4 + 0x48u));  // (from the original)
            r0 = r4;
            *gptr<u32>(r4 + 0x40u) = u32(std::bit_cast<u32>(std::bit_cast<float>(*gptr<u32>(r4 + 0x40u)) + std::bit_cast<float>(*gptr<u32>(r5))));  // (from the original)
            *gptr<u32>(r4 + 0x44u) = u32(std::bit_cast<u32>(std::bit_cast<float>(*gptr<u32>(r4 + 0x44u)) + std::bit_cast<float>(*gptr<u32>(r5 + 4u))));  // (from the original)
            S1 = std::bit_cast<float>(*gptr<u32>(0x5952e4u));  // (from the original)
            *gptr<u32>(r4 + 0x48u) = u32(std::bit_cast<u32>(std::bit_cast<float>(*gptr<u32>(r4 + 0x48u)) + std::bit_cast<float>(*gptr<u32>(r5 + 8u))));  // (from the original)
            S0 = std::bit_cast<float>(*gptr<u32>(0x5952e0u));  // (from the original)
            *gptr<u32>(r1) = u32(std::bit_cast<u32>(S0));
            *gptr<u32>(r1 + 4) = u32(std::bit_cast<u32>(S1));
            *gptr<u32>(r1 + 8) = u32(std::bit_cast<u32>(S2));
            r1 = 0u;
            *gptr<u8>(r4 + 0x140u) = u8(r10);  // (from the original)
            *gptr<u8>(r4 + 0x141u) = u8(r6);  // (from the original)
            *gptr<u32>(r4 + 0x13cu) = u32(std::bit_cast<u32>(S3));  // (from the original)
            guest::cpu()->r[13] = r13;
            guest::cpu()->s[0] = S0;
            guest::cpu()->s[1] = S1;
            guest::cpu()->s[2] = S2;
            guest::cpu()->s[3] = S3;
            r0 = call_00590c14(r0, r1, r2, r3);
            S0 = guest::cpu()->s[0];
            S1 = guest::cpu()->s[1];
            S2 = guest::cpu()->s[2];
            S3 = guest::cpu()->s[3];
            r0 = 0x1000614u;  // (from the original)
            r3 = r10;
            r2 = r4;
            r1 = r4 + 0x40u;  // (from the original)
            *gptr<u8>(r4 + 0x143u) = u8(r10);  // (from the original)
            guest::cpu()->r[13] = r13;
            guest::cpu()->s[0] = S0;
            guest::cpu()->s[1] = S1;
            guest::cpu()->s[2] = S2;
            guest::cpu()->s[3] = S3;
            r0 = call_00582e4c(r0, r1, r2, r3);
            r1 = guest::cpu()->r[1];
            S0 = guest::cpu()->s[0];
            S1 = guest::cpu()->s[1];
            r0 = r4;
            *gptr<u8>(r4 + 0x142u) = u8(r10);  // (from the original)
            r13 = r13 + 0x28;  // (from the original)
            guest::cpu()->r[1] = r1;
            guest::cpu()->r[13] = r13;
            guest::cpu()->s[0] = S0;
            guest::cpu()->s[1] = S1;
            return r0;
        }
        r0 = r0 + 1u;
        guest::preempt();
    } while (r0 < r2);
    r0 = 0u;
    r13 = r13 + 0x28;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    return r0;
}

}  // namespace d_00595194
GUEST_EXPORT(0x00595194, d_00595194::f_00595194);

// f_00595528: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00595528 {

inline constexpr guest::Function<0x002fcb84, u32(u32, u32, u32, u32)> call_002fcb84;  // (from the original)
inline constexpr guest::Function<0x002fd010, u32(u32, u32, u32, u32)> call_002fd010;  // (from the original)
inline constexpr guest::Function<0x0052e3ec, u32(u32, u32, u32, u32)> call_0052e3ec;  // (from the original)
inline constexpr guest::Function<0x00745bd8, u32(u32, u32, u32, u32)> call_00745bd8;  // (from the original)
inline constexpr guest::Function<0x00745d44, u32(u32, u32, u32, u32)> call_00745d44;  // (from the original)

u32 f_00595528(u32 r0, u32 r1, u32 r2, float S0, float S1) {
    u32 res = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r13 = guest::cpu()->r[13];
    r4 = r0;
    r5 = r1;
    r1 = 0x846b94u;  // (from the original)
    r13 = r13 - 0x18u;  // (from the original)
    r0 = r0 + 0x58u;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    r0 = call_00745d44(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    res = r0;
    r2 = res;
    if (res >> 0x1f != (r0 & (r0 ^ res)) >> 0x1f) {  // (from the original)
        r0 = 0u;
        r13 = r13 + 0x18u;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        guest::cpu()->s[0] = S0;
        guest::cpu()->s[1] = S1;
        return r0;
    }
    r1 = r13;
    r0 = r4 + 0x58u;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    r0 = call_00745bd8(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
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
    r1 = r13;
    r0 = r5;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    r0 = call_0052e3ec(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    r0 = r4 + 0x64u;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    r0 = call_002fd010(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    r0 = u32(*gptr<u8>(r0 + 0xdu));  // (from the original)
    if (r0 != 1u) {
        if (r0 == 2u) {
            goto L_5955d0;
        }
        goto L_595624;
    }
    r1 = 0x84u;  // (from the original)
    r0 = r4 + 0x64u;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    r0 = call_002fcb84(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    if (r0 != 0) {
        goto L_595624;
    }
    r1 = 0x87u;  // (from the original)
    r0 = r4 + 0x64u;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    r0 = call_002fcb84(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    if (r0 != 0) {
        goto L_595624;
    }
    S1 = std::bit_cast<float>(*gptr<u32>(0x595634u));  // (from the original)
    S0 = std::bit_cast<float>(*gptr<u32>(r5 + 4u)) + S1;
    goto L_595620;
L_5955d0:;
    r1 = 0x85u;  // (from the original)
    r0 = r4 + 0x64u;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    r0 = call_002fcb84(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    if (r0 == 0) {
        r1 = 0x88u;  // (from the original)
        r0 = r4 + 0x64u;  // (from the original)
        guest::cpu()->r[13] = r13;
        guest::cpu()->s[0] = S0;
        guest::cpu()->s[1] = S1;
        r0 = call_002fcb84(r0, r1, r2, guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        if (r0 == 0) {
            goto L_595614;
        }
    }
    S1 = std::bit_cast<float>(*gptr<u32>(0x595638u));  // (from the original)
    S0 = std::bit_cast<float>(*gptr<u32>(r5 + 8u)) + S1;
    *gptr<u32>(r5 + 8u) = u32(std::bit_cast<u32>(S0));
    goto L_595624;
L_595614:;
    S1 = std::bit_cast<float>(*gptr<u32>(0x59563cu));  // (from the original)
    S0 = std::bit_cast<float>(*gptr<u32>(r5 + 4u)) - S1;
L_595620:;
    *gptr<u32>(r5 + 4u) = u32(std::bit_cast<u32>(S0));
L_595624:;
    r0 = 1u;
    r13 = r13 + 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    return r0;
}

}  // namespace d_00595528
GUEST_EXPORT(0x00595528, d_00595528::f_00595528);

// f_005959e0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005959e0 {

inline constexpr guest::Function<0x002fc8e8, u32(u32, u32, u32, u32)> call_002fc8e8;  // (from the original)
inline constexpr guest::Function<0x002fd010, u32(u32, u32, u32, u32)> call_002fd010;  // (from the original)
inline constexpr guest::Function<0x004ecd30, u32(u32, u32, u32, u32)> call_004ecd30;  // (from the original)
inline constexpr guest::Function<0x004eda50, u32(u32, u32, u32, u32)> call_004eda50;  // (from the original)
inline constexpr guest::Function<0x0058faa0, u32(u32, u32, u32, u32)> call_0058faa0;  // (from the original)
inline constexpr guest::Function<0x0058fde0, u32(u32, u32, u32, u32)> call_0058fde0;  // (from the original)
inline constexpr guest::Function<0x0059b698, u32(u32, u32, u32, u32)> call_0059b698;  // (from the original)
inline constexpr guest::Function<0x005a2b58, u32(u32, u32, u32, u32)> call_005a2b58;  // (from the original)
inline constexpr guest::Function<0x007698a4, u32(u32, u32, u32, u32)> call_007698a4;  // (from the original)

u32 f_005959e0(u32 r0, u32 r1, u32 r2, u32 r3) {
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
    u32 nf = 0;
    u32 zf = 0;
    u32 vf = 0;
    r4 = r0;
    r13 = r13 - 0x30u;  // (from the original)
    r5 = r2;
    r6 = r3;
    r0 = r0 + 0x64u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002fc8e8(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r4;
    guest::cpu()->r[13] = r13;
    r0 = call_005a2b58(r0, r1, r2, r3);
    r10 = 0u;
    r9 = 1u;
    *gptr<u32>(r13) = u32(r10);
    *gptr<u32>(r13 + 8u) = u32(r9);
    *gptr<u32>(r13 + 4u) = u32(r10);
    r1 = r0;
    r3 = *gptr<u32>(r6);
    r2 = *gptr<u32>(r5);
    r0 = r4;
    guest::cpu()->r[13] = r13;
    r0 = call_0058faa0(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r8 = 1u;
    r0 = r4 + 0x64u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002fd010(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    r1 = 0x94ee4cu;  // (from the original)
    r7 = r0;
    r0 = u32(*gptr<u8>(r0 + 0xcu));  // (from the original)
    r2 = u32(s32(s8(*gptr<u8>(r1 + 3u))));
    r1 = *gptr<u32>(r1 + 0x14u);  // (from the original)
    r2 = 0u - r2;
    zf = (r2 & r1) == 0;
    if (!zf) {
        r1 = *gptr<u32>(r1 + 0x414u);  // (from the original)
    }
    if (r0 >= 0x87u) {  // (from the original)
        r0 = 0u;
    }
    if (!zf) {
        zf = r1 == 0;
    }
    if (zf) {
        goto L_595a80;
    }
    if (r0 >= 0x87u) {  // (from the original)
        goto L_595a80;
    }
    r2 = r0 + (r0 << 1);
    r0 = r1 + (r2 + (r0 << 3) << 1);
    goto L_595a84;
L_595a80:;
    r0 = 0u;
L_595a84:;
    r5 = r0 + 5u;
    *gptr<u8>(r0 + 0x15u) = u8(r10);  // (from the original)
    r0 = r4 + 0x64u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_007698a4(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 != 0) {
        r0 = u32(s32(s8(*gptr<u8>(r7 + 0xdu))));  // (from the original)
        res = r0 - 2u;
        nf = res >> 0x1f;  // (from the original)
        vf = ((r0 ^ 2u) & (r0 ^ res)) >> 0x1f;  // (from the original)
        if (nf == vf) {
            r5 = 0x846b70u;  // (from the original)
        }
        if (nf != vf) {
            r5 = 0x846b7cu;  // (from the original)
        }
    }
    r1 = r8;
    r0 = r5;
    guest::cpu()->r[13] = r13;
    r0 = call_0059b698(r0, r1, r2, r3);
    r2 = r0;
    r3 = r4 + 0x20u;  // (from the original)
    r1 = r4 + 0x58u;  // (from the original)
    r0 = r4 + 0x144u;  // (from the original)
    *gptr<u32>(r13) = u32(r10);
    guest::cpu()->r[13] = r13;
    r0 = call_004ecd30(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = r4 + 0x144u;  // (from the original)
    r0 = r4 + 0x58u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_004eda50(r0, r1, r2, r3);
    ea = r13 + 4u;
    *gptr<u32>(ea) = u32(r9);
    ea = r13;
    *gptr<u32>(ea) = u32(r10);
    ea = r13 + 8u;
    *gptr<u32>(ea) = u32(r9);
    *gptr<u32>(ea + 4) = u32(r10);
    r3 = ~0u;
    r1 = *gptr<u32>(r6);
    r2 = 0u;
    r0 = r4;
    guest::cpu()->r[13] = r13;
    r0 = call_0058fde0(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r13 = r13 + 0x30u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_005959e0
GUEST_EXPORT(0x005959e0, d_005959e0::f_005959e0);

// f_00596298: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00596298 {

inline constexpr guest::Function<0x002f74c8, u32(u32, u32, u32, u32)> call_002f74c8;  // (from the original)
inline constexpr guest::Function<0x002fcb9c, u32(u32, u32, u32, u32)> call_002fcb9c;  // (from the original)
inline constexpr guest::Function<0x0059ab9c, u32(u32, u32, u32, u32)> call_0059ab9c;  // (from the original)
inline constexpr guest::Function<0x0059ac18, u32(u32, u32, u32, u32)> call_0059ac18;  // (from the original)
inline constexpr guest::Function<0x005a0ef8, u32(u32, u32, u32, u32)> call_005a0ef8;  // (from the original)
inline constexpr guest::Function<0x005a1174, u32(u32, u32, u32, u32)> call_005a1174;  // (from the original)

u32 f_00596298(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r4 = r0;
    r5 = r1;
    r0 = call_002f74c8(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    r2 = r0;
    r6 = r4;
    r1 = r5;
    r0 = r4;
    r0 = call_005a0ef8(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 + 1u == 0) {
        goto L_59632c;
    }
    r1 = 0x9b4264u;  // (from the original)
    r4 = r1 + (r0 + (r0 << 1) + (r0 << 3) << 1);
    r0 = u32(*gptr<u8>(r4 + 0x10u));  // (from the original)
    if (r0 != 0xbu) {  // (from the original)
        goto L_59632c;
    }
    r0 = r4 + 4u;
    r0 = call_002fcb9c(r0, r1, r2, r3);
    if (r0 != 0) {
        r2 = r5;
        r1 = r6;
        r0 = r4 + 4u;
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        r3 = 0u;
        return call_0059ac18(r0, r1, r2, r3);
    }
    r3 = 1u;
    r2 = r5;
    r1 = r6;
    r0 = r4 + 4u;
    r0 = call_0059ab9c(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = r4 + 4u;
    r0 = r4;
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    return call_005a1174(r0, r1, r2, r3);
L_59632c:;
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_00596298
GUEST_EXPORT(0x00596298, d_00596298::f_00596298);

// f_00596334: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00596334 {

inline constexpr guest::Function<0x002fc900, u32(u32, u32, u32, u32)> call_002fc900;  // (from the original)
inline constexpr guest::Function<0x0030b6c4, u32(u32, u32, u32, u32)> call_0030b6c4;  // (from the original)
inline constexpr guest::Function<0x0059ec48, u32(u32, u32, u32, u32)> call_0059ec48;  // (from the original)
inline constexpr guest::Function<0x0059f4d8, u32(u32, u32, u32, u32)> call_0059f4d8;  // (from the original)
inline constexpr guest::Function<0x0059f7c8, u32(u32, u32, u32, u32)> call_0059f7c8;  // (from the original)
inline constexpr guest::Function<0x005a064c, u32(u32, u32, u32, u32)> call_005a064c;  // (from the original)
inline constexpr guest::Function<0x006249b0, u32(u32, u32, u32, u32)> call_006249b0;  // (from the original)

u32 f_00596334(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0059ec48(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 + 1u == 0) {
        goto L_5963c4;
    }
    r4 = r0;
    r1 = 0x9b417cu;  // (from the original)
    r5 = r1 + (r0 + (r4 << 3) << 1);
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_005a064c(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    r2 = 5u;
    r1 = r5;
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_0059f7c8(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r6 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_002fc900(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 != 0) {
        guest::cpu()->r[13] = r13;
        r0 = call_0030b6c4(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        if (r0 == 0) {
            goto L_5963cc;
        }
    }
    r0 = r6;
    guest::cpu()->r[13] = r13;
    r0 = call_0059f4d8(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
L_596394:;
    r0 = 0u;
    *gptr<u8>(r5 + 0x10u) = u8(r4);  // (from the original)
    *gptr<u8>(r5 + 0xeu) = u8(r0);  // (from the original)
    *gptr<u8>(r5 + 0xfu) = u8(r0);  // (from the original)
L_5963c4:;
    r13 = r13 + 0x28u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
L_5963cc:;
    r2 = r6;
    r1 = 0u;
    r3 = 0x16u;  // (from the original)
    r0 = 0x3au;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_006249b0(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    guest::preempt();
    goto L_596394;
}

}  // namespace d_00596334
GUEST_EXPORT(0x00596334, d_00596334::f_00596334);

// f_005969c0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005969c0 {

inline constexpr guest::Function<0x002fc934, u32(u32, u32, u32, u32)> call_002fc934;  // (from the original)
inline constexpr guest::Function<0x002fcbb0, u32(u32, u32, u32, u32)> call_002fcbb0;  // (from the original)
inline constexpr guest::Function<0x00599ca0, u32(u32, u32, u32, u32)> call_00599ca0;  // (from the original)
inline constexpr guest::Function<0x0059f194, u32(u32, u32, u32, u32)> call_0059f194;  // (from the original)

u32 f_005969c0(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 ea = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r13 = guest::cpu()->r[13];
    r4 = r1;
    r13 = r13 - 0x38u;  // (from the original)
    r6 = r0;
    r1 = r0;
    r5 = r2;
    r0 = r13 + 0x1cu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002fc934(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = r6;
    r0 = r13 + 0x20u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002fc934(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = r13 + 0x20u;  // (from the original)
    r0 = r13 + 0x1cu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00599ca0(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r6 = r0;
    r1 = 0x9eu;  // (from the original)
    r0 = r13 + 0x24u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002fcbb0(r0, r1, r2, r3);
    r1 = r0;
    r0 = 0u;
    ea = r13 + 0x10u;  // (from the original)
    *gptr<u32>(ea) = u32(r0);
    ea = r13 + 0x14u;  // (from the original)
    *gptr<u32>(ea) = u32(r0);
    ea = r13 + 0x18u;  // (from the original)
    *gptr<u32>(ea) = u32(r0);
    ea = r13 + 8u;
    *gptr<u32>(ea) = u32(r0);
    *gptr<u32>(ea + 4) = u32(r6);
    r3 = r13 + 0x20u;  // (from the original)
    r2 = r13 + 0x1cu;  // (from the original)
    r0 = 0xbu;  // (from the original)
    *gptr<u32>(r13) = u32(r4);
    *gptr<u32>(r13 + 4) = u32(r5);
    guest::cpu()->r[13] = r13;
    r0 = call_0059f194(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r13 = r13 + 0x38u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_005969c0
GUEST_EXPORT(0x005969c0, d_005969c0::f_005969c0);

// f_00596a60: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00596a60 {

inline constexpr guest::Function<0x0059ec48, u32(u32, u32, u32, u32)> call_0059ec48;  // (from the original)
inline constexpr guest::Function<0x0059ecbc, u32(u32, u32, u32, u32)> call_0059ecbc;  // (from the original)

u32 f_00596a60(u32 r0, u32 r1, u32 r2) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r5 = r0;
    r0 = call_0059ec48(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r4 = r0;
    if (r0 + 1u != 0) {
        r1 = r0;
        r2 = 0u;
        r0 = r5;
        r0 = call_0059ecbc(r0, r1, r2, guest::cpu()->r[3]);
        r0 = 0x9b417cu + (r4 + (r4 << 3) << 1);  // (from the original)
        r1 = 0u;
        *gptr<u8>(r0 + 0x10u) = u8(r4);  // (from the original)
        *gptr<u8>(r0 + 0xeu) = u8(r1);  // (from the original)
        *gptr<u8>(r0 + 0xfu) = u8(r1);  // (from the original)
        r0 = r4;
    }
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_00596a60
GUEST_EXPORT(0x00596a60, d_00596a60::f_00596a60);

// f_00596bcc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00596bcc {

inline constexpr guest::Function<0x002fc20c, u32(u32, u32, u32, u32)> call_002fc20c;  // (from the original)
inline constexpr guest::Function<0x005985c4, u32(u32, u32, u32, u32)> call_005985c4;  // (from the original)
inline constexpr guest::Function<0x0059f194, u32(u32, u32, u32, u32)> call_0059f194;  // (from the original)
inline constexpr guest::Function<0x00767a44, u32(u32, u32, u32, u32)> call_00767a44;  // (from the original)

u32 f_00596bcc(u32 r0) {
    u32 ea = 0;
    u32 r1 = 0;
    u32 r2 = 0;
    u32 r3 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 0x38u;  // (from the original)
    r4 = r0;
    r5 = 0u;
    r3 = 1u;
    r2 = r13 + 0x28u;  // (from the original)
    r1 = r13 + 0x20u;  // (from the original)
    r0 = r13 + 0x1cu;  // (from the original)
    *gptr<u32>(r13) = u32(r5);
    guest::cpu()->r[13] = r13;
    r0 = call_005985c4(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        r0 = ~0u;
        r13 = r13 + 0x38u;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    r0 = r13 + 0x24u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002fc20c(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = r13 + 0x24u;  // (from the original)
    r0 = r4;
    guest::cpu()->r[13] = r13;
    r0 = call_00767a44(r0, r1, r2, r3);
    ea = r13 + 0xcu;  // (from the original)
    *gptr<u32>(ea) = u32(r5);
    ea = r13 + 0x10u;  // (from the original)
    *gptr<u32>(ea) = u32(r5);
    ea = r13 + 0x14u;  // (from the original)
    *gptr<u32>(ea) = u32(r5);
    ea = r13 + 0x18u;  // (from the original)
    *gptr<u32>(ea) = u32(r5);
    ea = r13 + 0x1cu;  // (from the original)
    r1 = *gptr<u32>(ea + 4);
    r3 = r4;
    r2 = r13 + 0x24u;  // (from the original)
    *gptr<u32>(r13) = u32(*gptr<u32>(ea));
    *gptr<u32>(r13 + 4) = u32(r1);
    *gptr<u32>(r13 + 8) = u32(r5);
    r0 = 0xcu;  // (from the original)
    r1 = 0x95bfdcu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0059f194(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r13 = r13 + 0x38u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_00596bcc
GUEST_EXPORT(0x00596bcc, d_00596bcc::f_00596bcc);

// f_00596c64: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00596c64 {

inline constexpr guest::Function<0x002f74c8, u32(u32, u32, u32, u32)> call_002f74c8;  // (from the original)
inline constexpr guest::Function<0x002f74e0, u32(u32, u32, u32, u32)> call_002f74e0;  // (from the original)
inline constexpr guest::Function<0x002fc8e8, u32(u32, u32, u32, u32)> call_002fc8e8;  // (from the original)
inline constexpr guest::Function<0x002fc934, u32(u32, u32, u32, u32)> call_002fc934;  // (from the original)
inline constexpr guest::Function<0x002fcb84, u32(u32, u32, u32, u32)> call_002fcb84;  // (from the original)
inline constexpr guest::Function<0x002fcbb0, u32(u32, u32, u32, u32)> call_002fcbb0;  // (from the original)
inline constexpr guest::Function<0x005985c4, u32(u32, u32, u32, u32)> call_005985c4;  // (from the original)
inline constexpr guest::Function<0x0059f194, u32(u32, u32, u32, u32)> call_0059f194;  // (from the original)

u32 f_00596c64(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 ea = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 0x40u;  // (from the original)
    r5 = r0;
    r4 = 0u;
    guest::cpu()->r[13] = r13;
    r0 = call_002f74c8(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = r0;
    r0 = 4u;
    guest::cpu()->r[13] = r13;
    r0 = call_002f74e0(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r6 = 0x339fu;  // (from the original)
    if (r0 != 0) {
        r1 = r6;
        r0 = r5;
        guest::cpu()->r[13] = r13;
        r0 = call_002fcb84(r0, r1, r2, r3);
        if (r0 != 0) {
            r4 = 1u;
        }
    }
    r3 = 0u;
    r2 = r13 + 0x24u;  // (from the original)
    r1 = r13 + 0x20u;  // (from the original)
    r0 = r13 + 0x1cu;  // (from the original)
    *gptr<u32>(r13) = u32(r4);
    guest::cpu()->r[13] = r13;
    r0 = call_005985c4(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        r0 = ~0u;
        goto L_596d7c;
    }
    r1 = r5;
    r0 = r13 + 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002fc934(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0 = call_002f74c8(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = r0;
    r0 = 4u;
    guest::cpu()->r[13] = r13;
    r0 = call_002f74e0(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r4 = 0u;
    if (r0 == 0) {
        goto L_596d34;
    }
    r1 = r6;
    r0 = r5;
    guest::cpu()->r[13] = r13;
    r0 = call_002fcb84(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        goto L_596d34;
    }
    r1 = 0x33a0u;  // (from the original)
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_002fcbb0(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = r0;
    r0 = r13 + 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002fc8e8(r0, r1, r2, r3);
L_596d34:;
    ea = r13 + 0x10u;  // (from the original)
    *gptr<u32>(ea) = u32(r4);
    ea = r13 + 0x24u;  // (from the original)
    r0 = u32(*gptr<u8>(ea));
    ea = r13 + 0xcu;  // (from the original)
    *gptr<u32>(ea) = u32(r4);
    ea = r13 + 0x14u;  // (from the original)
    *gptr<u32>(ea) = u32(r4);
    ea = r13 + 0x18u;  // (from the original)
    *gptr<u32>(ea) = u32(r4);
    ea = r13 + 0x1cu;  // (from the original)
    r1 = *gptr<u32>(ea);
    r2 = *gptr<u32>(ea + 4);
    r3 = r5;
    *gptr<u32>(r13 + 8u) = u32(r0);
    r0 = 0xau;  // (from the original)
    *gptr<u32>(r13) = u32(r1);
    *gptr<u32>(r13 + 4) = u32(r2);
    r1 = 0x95bfdcu;  // (from the original)
    r2 = r13 + 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0059f194(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
L_596d7c:;
    r13 = r13 + 0x40u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_00596c64
GUEST_EXPORT(0x00596c64, d_00596c64::f_00596c64);

// f_00596e94: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00596e94 {

inline constexpr guest::Function<0x002fc8e8, u32(u32, u32, u32, u32)> call_002fc8e8;  // (from the original)
inline constexpr guest::Function<0x002fcb84, u32(u32, u32, u32, u32)> call_002fcb84;  // (from the original)
inline constexpr guest::Function<0x002fcbb0, u32(u32, u32, u32, u32)> call_002fcbb0;  // (from the original)
inline constexpr guest::Function<0x002fd010, u32(u32, u32, u32, u32)> call_002fd010;  // (from the original)
inline constexpr guest::Function<0x002ff6f8, u32(u32, u32, u32, u32)> call_002ff6f8;  // (from the original)
inline constexpr guest::Function<0x0071a844, u32(u32, u32, u32, u32)> call_0071a844;  // (from the original)

u32 f_00596e94(u32 r0, u32 r1) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 0x18u;  // (from the original)
    r5 = r0;
    guest::cpu()->r[13] = r13;
    r0 = call_002fd010(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r0 = u32(s32(s16(*gptr<u16>(r0))));
    if (r0 >= 0xfeu) {  // (from the original)
        r0 = 0u;
    }
    r1 = uxth(r0);
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_002fcbb0(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r0 = *gptr<u32>(0xaaf14cu);  // (from the original)
    if (r0 != 0) {
        r0 = r0 + 0xau;  // (from the original)
        guest::cpu()->r[13] = r13;
        r0 = call_0071a844(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1 = 0x334eu;  // (from the original)
        guest::cpu()->r[13] = r13;
        r0 = call_002fcb84(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        if (r0 != 0) {
            goto L_596ef8;
        }
    }
    r0 = 0x64u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002ff6f8(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (s32(r0) >= s32(5u)) {
        goto L_5971b8;
    }
L_596ef8:;
    r0 = 0x64u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002ff6f8(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r4 = r0;
    r1 = 0xau;  // (from the original)
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_002fcb84(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    if (r0 != 0) {
        if (s32(r4) < s32(0x14u)) {  // (from the original)
            r1 = 0xbu;  // (from the original)
            r0 = r13 + 4u;
            guest::cpu()->r[13] = r13;
            r0 = call_002fcbb0(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
            r1 = r0;
            r0 = r13;
            guest::cpu()->r[13] = r13;
            r0 = call_002fc8e8(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
            goto L_5971b8;
        }
        if (s32(r4) < s32(0x28u)) {  // (from the original)
            r1 = 0xcu;  // (from the original)
            r0 = r13 + 4u;
            guest::cpu()->r[13] = r13;
            r0 = call_002fcbb0(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
            r1 = r0;
            r0 = r13;
            guest::cpu()->r[13] = r13;
            r0 = call_002fc8e8(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
            goto L_5971b8;
        }
        if (s32(r4) < s32(0x3cu)) {  // (from the original)
            r1 = 0xdu;  // (from the original)
            r0 = r13 + 4u;
            guest::cpu()->r[13] = r13;
            r0 = call_002fcbb0(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
            r1 = r0;
            r0 = r13;
            guest::cpu()->r[13] = r13;
            r0 = call_002fc8e8(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
            goto L_5971b8;
        }
        if (s32(r4) < s32(0x50u)) {  // (from the original)
            r1 = 0xeu;  // (from the original)
            r0 = r13 + 4u;
            guest::cpu()->r[13] = r13;
            r0 = call_002fcbb0(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
            r1 = r0;
            r0 = r13;
            guest::cpu()->r[13] = r13;
            r0 = call_002fc8e8(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
            goto L_5971b8;
        }
        if (s32(r4) < s32(0x5au)) {  // (from the original)
            r1 = 0xfu;  // (from the original)
            r0 = r13 + 4u;
            guest::cpu()->r[13] = r13;
            r0 = call_002fcbb0(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
            r1 = r0;
            r0 = r13;
            guest::cpu()->r[13] = r13;
            r0 = call_002fc8e8(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
            goto L_5971b8;
        }
        r1 = 0x10u;  // (from the original)
        r0 = r13 + 4u;
        guest::cpu()->r[13] = r13;
        r0 = call_002fcbb0(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1 = r0;
        r0 = r13;
        guest::cpu()->r[13] = r13;
        r0 = call_002fc8e8(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
        goto L_5971b8;
    }
    r1 = 0x14u;  // (from the original)
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_002fcb84(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    if (r0 == 0) {
        goto L_5971b8;
    }
    if (s32(r4) < s32(0x14u)) {  // (from the original)
        r1 = 0x15u;  // (from the original)
        r0 = r13 + 4u;
        guest::cpu()->r[13] = r13;
        r0 = call_002fcbb0(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1 = r0;
        r0 = r13;
        guest::cpu()->r[13] = r13;
        r0 = call_002fc8e8(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
        goto L_5971b8;
    }
    if (s32(r4) < s32(0x28u)) {  // (from the original)
        r1 = 0x16u;  // (from the original)
        r0 = r13 + 4u;
        guest::cpu()->r[13] = r13;
        r0 = call_002fcbb0(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1 = r0;
        r0 = r13;
        guest::cpu()->r[13] = r13;
        r0 = call_002fc8e8(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
        goto L_5971b8;
    }
    if (s32(r4) < s32(0x3cu)) {  // (from the original)
        r1 = 0x17u;  // (from the original)
        r0 = r13 + 4u;
        guest::cpu()->r[13] = r13;
        r0 = call_002fcbb0(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1 = r0;
        r0 = r13;
        guest::cpu()->r[13] = r13;
        r0 = call_002fc8e8(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
        goto L_5971b8;
    }
    if (s32(r4) < s32(0x50u)) {  // (from the original)
        r1 = 0x18u;  // (from the original)
        r0 = r13 + 4u;
        guest::cpu()->r[13] = r13;
        r0 = call_002fcbb0(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1 = r0;
        r0 = r13;
        guest::cpu()->r[13] = r13;
        r0 = call_002fc8e8(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
        goto L_5971b8;
    }
    if (s32(r4) < s32(0x5au)) {  // (from the original)
        r1 = 0x19u;  // (from the original)
        r0 = r13 + 4u;
        guest::cpu()->r[13] = r13;
        r0 = call_002fcbb0(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1 = r0;
        r0 = r13;
        guest::cpu()->r[13] = r13;
        r0 = call_002fc8e8(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
        goto L_5971b8;
    }
    r1 = 0x1au;  // (from the original)
    r0 = r13 + 4u;
    guest::cpu()->r[13] = r13;
    r0 = call_002fcbb0(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = r0;
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_002fc8e8(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
L_5971b8:;
    r1 = r13;
    r0 = r5;
    guest::cpu()->r[13] = r13;
    r0 = call_002fc8e8(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r0 = 1u;
    r13 = r13 + 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_00596e94
GUEST_EXPORT(0x00596e94, d_00596e94::f_00596e94);

// f_00597678: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00597678 {

inline constexpr guest::Function<0x002f74c8, u32(u32, u32, u32, u32)> call_002f74c8;  // (from the original)
inline constexpr guest::Function<0x002f74e0, u32(u32, u32, u32, u32)> call_002f74e0;  // (from the original)
inline constexpr guest::Function<0x002fcb84, u32(u32, u32, u32, u32)> call_002fcb84;  // (from the original)
inline constexpr guest::Function<0x002fccc4, u32(u32, u32, u32, u32)> call_002fccc4;  // (from the original)
inline constexpr guest::Function<0x002fd010, u32(u32, u32, u32, u32)> call_002fd010;  // (from the original)
inline constexpr guest::Function<0x002feb00, u32(u32, u32, u32, u32)> call_002feb00;  // (from the original)
inline constexpr guest::Function<0x0059f194, u32(u32, u32, u32, u32)> call_0059f194;  // (from the original)
inline constexpr guest::Function<0x005a06d4, u32(u32, u32, u32, u32)> call_005a06d4;  // (from the original)
inline constexpr guest::Function<0x006a5e34, u32(u32, u32, u32, u32)> call_006a5e34;  // (from the original)

u32 f_00597678(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 res = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 0x30u;  // (from the original)
    r4 = r0;
    r5 = r1;
    guest::cpu()->r[13] = r13;
    r0 = call_002f74c8(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = r0;
    r0 = 4u;
    guest::cpu()->r[13] = r13;
    r0 = call_002f74e0(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        goto L_597744;
    }
    guest::cpu()->r[13] = r13;
    r0 = call_006a5e34(r0, r1, r2, r3);
    r3 = 0u;
    r2 = r5;
    r1 = r4;
    guest::cpu()->r[13] = r13;
    r0 = call_002feb00(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r3 = guest::cpu()->r[3];
    r6 = r0;
    if (r0 == 0) {
        goto L_597744;
    }
    r2 = 0xa5u;  // (from the original)
    r1 = r5;
    r0 = r4;
    guest::cpu()->r[13] = r13;
    r0 = call_005a06d4(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 + 1u != 0) {
        goto L_597744;
    }
    r1 = 0x9eu;  // (from the original)
    r0 = r6;
    guest::cpu()->r[13] = r13;
    r0 = call_002fcb84(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r7 = 0u;
    if (r0 != 0) {
        r3 = 0x95bfdcu;  // (from the original)
        *gptr<u32>(r13 + 0xcu) = u32(r7);  // (from the original)
        *gptr<u32>(r13 + 0x10u) = u32(r7);  // (from the original)
        *gptr<u32>(r13 + 0x14u) = u32(r7);  // (from the original)
        *gptr<u32>(r13 + 0x18u) = u32(r7);  // (from the original)
        r2 = r3;
        r1 = r6;
        r0 = 0x1fu;  // (from the original)
        *gptr<u32>(r13) = u32(r4);
        *gptr<u32>(r13 + 4) = u32(r5);
        *gptr<u32>(r13 + 8) = u32(r7);
        guest::cpu()->r[13] = r13;
        r0 = call_0059f194(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r13 = r13 + 0x30u;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    r0 = r6;
    guest::cpu()->r[13] = r13;
    r0 = call_002fccc4(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        goto L_597750;
    }
    r0 = r6;
    guest::cpu()->r[13] = r13;
    r0 = call_002fd010(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    res = u32(*gptr<u8>(r0 + 0xfu)) << 0x1c;  // (from the original)
    if (!(res >> 0x1f)) {  // (from the original)
        goto L_597750;
    }
L_597744:;
    r0 = ~0u;
    r13 = r13 + 0x30u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
L_597750:;
    r3 = 0x95bfdcu;  // (from the original)
    *gptr<u32>(r13 + 0xcu) = u32(r7);  // (from the original)
    *gptr<u32>(r13 + 0x10u) = u32(r7);  // (from the original)
    *gptr<u32>(r13 + 0x14u) = u32(r7);  // (from the original)
    *gptr<u32>(r13 + 0x18u) = u32(r7);  // (from the original)
    r2 = r3;
    r1 = r6;
    r0 = 0x1eu;  // (from the original)
    *gptr<u32>(r13) = u32(r4);
    *gptr<u32>(r13 + 4) = u32(r5);
    *gptr<u32>(r13 + 8) = u32(r7);
    guest::cpu()->r[13] = r13;
    r0 = call_0059f194(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r13 = r13 + 0x30u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_00597678
GUEST_EXPORT(0x00597678, d_00597678::f_00597678);

// f_00597864: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00597864 {

inline constexpr guest::Function<0x0024b448, u32(u32, u32, u32, u32)> call_0024b448;  // (from the original)
inline constexpr guest::Function<0x002f74c8, u32(u32, u32, u32, u32)> call_002f74c8;  // (from the original)
inline constexpr guest::Function<0x002f74e0, u32(u32, u32, u32, u32)> call_002f74e0;  // (from the original)
inline constexpr guest::Function<0x002fb94c, u32(u32, u32, u32, u32)> call_002fb94c;  // (from the original)
inline constexpr guest::Function<0x002fc900, u32(u32, u32, u32, u32)> call_002fc900;  // (from the original)
inline constexpr guest::Function<0x002fcb34, u32(u32, u32, u32, u32)> call_002fcb34;  // (from the original)
inline constexpr guest::Function<0x002fcb84, u32(u32, u32, u32, u32)> call_002fcb84;  // (from the original)
inline constexpr guest::Function<0x0030b6c4, u32(u32, u32, u32, u32)> call_0030b6c4;  // (from the original)
inline constexpr guest::Function<0x0059ec48, u32(u32, u32, u32, u32)> call_0059ec48;  // (from the original)
inline constexpr guest::Function<0x0059eed8, u32(u32, u32, u32, u32)> call_0059eed8;  // (from the original)
inline constexpr guest::Function<0x0059f4d8, u32(u32, u32, u32, u32)> call_0059f4d8;  // (from the original)
inline constexpr guest::Function<0x0059f7c8, u32(u32, u32, u32, u32)> call_0059f7c8;  // (from the original)
inline constexpr guest::Function<0x005a064c, u32(u32, u32, u32, u32)> call_005a064c;  // (from the original)
inline constexpr guest::Function<0x006249b0, u32(u32, u32, u32, u32)> call_006249b0;  // (from the original)

u32 f_00597864(u32 r0, u32 r1, u32 r2, u32 r3) {
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
    u32 nf = 0;
    u32 zf = 0;
    u32 vf = 0;
    r13 = r13 - 0x40u;  // (from the original)
    r9 = r0;
    r10 = 0x9b417cu;  // (from the original)
    r0 = r0 + (r9 << 3);
    r4 = r10 + (r0 << 1);
    r6 = u32(*gptr<u8>(r4 + 0xfu));  // (from the original)
    if (r6 == 1u) {
        goto L_5978a0;
    }
    r5 = u32(*gptr<u8>(r4 + 0xeu));  // (from the original)
    r8 = r9 & 0xffu;  // (from the original)
    if (r6 == 2u) {
        goto L_5978ac;
    }
    if (r6 == 3u) {
        goto L_597ab4;
    }
L_5978a0:;
    r0 = r6;
    r13 = r13 + 0x40u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
L_5978ac:;
    if (r5 != 0x22u) {  // (from the original)
        goto L_597948;
    }
    guest::cpu()->r[13] = r13;
    r0 = call_0059ec48(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 + 1u == 0) {
        goto L_597948;
    }
    r7 = r0;
    r10 = r10 + (r0 + (r7 << 3) << 1);
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_005a064c(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    r2 = 5u;
    r1 = r10;
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_0059f7c8(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r11 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_002fc900(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 != 0) {
        guest::cpu()->r[13] = r13;
        r0 = call_0030b6c4(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        if (r0 == 0) {
            goto L_597988;
        }
    }
    r0 = r11;
    guest::cpu()->r[13] = r13;
    r0 = call_0059f4d8(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
L_597918:;
    r0 = 0u;
    *gptr<u8>(r10 + 0x10u) = u8(r7);  // (from the original)
    *gptr<u8>(r10 + 0xeu) = u8(r0);  // (from the original)
    *gptr<u8>(r10 + 0xfu) = u8(r0);  // (from the original)
L_597948:;
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
        goto L_597a90;
    }
    if (r5 == 0xcu) {  // (from the original)
        goto L_5979a8;
    }
    if (r5 == 0xbu) {  // (from the original)
        r0 = r9;
        guest::cpu()->r[13] = r13;
        r0 = call_0059eed8(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
    }
    goto L_597a90;
L_597988:;
    r2 = r11;
    r1 = 0u;
    r3 = 0x16u;  // (from the original)
    r0 = 0x3au;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_006249b0(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    guest::preempt();
    goto L_597918;
L_5979a8:;
    r0 = r4 + 8u;
    guest::cpu()->r[13] = r13;
    r0 = call_002fcb34(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r7 = r0;
    if (r0 != 0x36u) {  // (from the original)
        r1 = 0x3413u;  // (from the original)
        r0 = r4 + 8u;
        guest::cpu()->r[13] = r13;
        r0 = call_002fcb84(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        if (r0 == 0) {
            goto L_597a20;
        }
    }
    guest::cpu()->r[13] = r13;
    r0 = call_002fc900(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 != 0) {
        guest::cpu()->r[13] = r13;
        r0 = call_0030b6c4(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        if (r0 == 0) {
            goto L_597a90;
        }
    }
    guest::cpu()->r[13] = r13;
    r0 = call_002fb94c(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    r2 = 1u;
    r1 = 0x5fu;  // (from the original)
    r0 = r0 + 0x8ae0u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0024b448(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    goto L_597a90;
L_597a20:;
    zf = r7 == 0x37u;  // (from the original)
    if (!zf) {
        zf = r7 == 0x38u;  // (from the original)
    }
    if (zf) {
        goto L_597a74;
    }
    r1 = 0x3414u;  // (from the original)
    r0 = r4 + 8u;
    guest::cpu()->r[13] = r13;
    r0 = call_002fcb84(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 != 0) {
        goto L_597a74;
    }
    r1 = 0x3415u;  // (from the original)
    r0 = r4 + 8u;
    guest::cpu()->r[13] = r13;
    r0 = call_002fcb84(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 != 0) {
        goto L_597a74;
    }
    r1 = 0x3416u;  // (from the original)
    r0 = r4 + 8u;
    guest::cpu()->r[13] = r13;
    r0 = call_002fcb84(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        goto L_597a90;
    }
L_597a74:;
    guest::cpu()->r[13] = r13;
    r0 = call_002fb94c(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    r2 = 1u;
    r1 = 0x17u;  // (from the original)
    r0 = r0 + 0x8ae0u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0024b448(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
L_597a90:;
    res = r5 - 0x17u;  // (from the original)
    nf = res >> 0x1f;  // (from the original)
    zf = res == 0;
    vf = ((r5 ^ 0x17u) & (r5 ^ res)) >> 0x1f;  // (from the original)
    if (zf) {
        guest::preempt();
        goto L_5978a0;
    }
    if (!zf && nf == vf) {
        goto L_597ac8;
    }
    zf = r5 == 2u;
    if (!zf) {
        zf = r5 == 4u;
    }
    if (zf) {
        guest::preempt();
        goto L_5978a0;
    }
    zf = r5 == 5u;
    if (!zf) {
        zf = r5 == 0x15u;  // (from the original)
    }
    if (zf) {
        guest::preempt();
        goto L_5978a0;
    }
L_597ab4:;
    r0 = 0u;
    *gptr<u8>(r4 + 0x10u) = u8(r8);  // (from the original)
    *gptr<u8>(r4 + 0xeu) = u8(r0);  // (from the original)
    *gptr<u8>(r4 + 0xfu) = u8(r0);  // (from the original)
    guest::preempt();
    goto L_5978a0;
L_597ac8:;
    zf = r5 == 0x18u;  // (from the original)
    if (!zf) {
        zf = r5 == 0x19u;  // (from the original)
    }
    if (!zf) {
        zf = r5 == 0x1au;  // (from the original)
    }
    if (zf) {
        guest::preempt();
        goto L_5978a0;
    }
    guest::preempt();
    goto L_597ab4;
}

}  // namespace d_00597864
GUEST_EXPORT(0x00597864, d_00597864::f_00597864);

// f_00597c30: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00597c30 {

inline constexpr guest::Function<0x002f74c8, u32(u32, u32, u32, u32)> call_002f74c8;  // (from the original)
inline constexpr guest::Function<0x002f74e0, u32(u32, u32, u32, u32)> call_002f74e0;  // (from the original)
inline constexpr guest::Function<0x002fc20c, u32(u32, u32, u32, u32)> call_002fc20c;  // (from the original)
inline constexpr guest::Function<0x002fc8e8, u32(u32, u32, u32, u32)> call_002fc8e8;  // (from the original)
inline constexpr guest::Function<0x002fcb34, u32(u32, u32, u32, u32)> call_002fcb34;  // (from the original)
inline constexpr guest::Function<0x002fcb9c, u32(u32, u32, u32, u32)> call_002fcb9c;  // (from the original)
inline constexpr guest::Function<0x002feb00, u32(u32, u32, u32, u32)> call_002feb00;  // (from the original)
inline constexpr guest::Function<0x0059f194, u32(u32, u32, u32, u32)> call_0059f194;  // (from the original)
inline constexpr guest::Function<0x005a06d4, u32(u32, u32, u32, u32)> call_005a06d4;  // (from the original)
inline constexpr guest::Function<0x006a5e34, u32(u32, u32, u32, u32)> call_006a5e34;  // (from the original)

u32 f_00597c30(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 0x38u;  // (from the original)
    r5 = r0;
    r4 = r1;
    r0 = r13 + 0x1cu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002fc20c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r7 = r13 + 0x1cu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002f74c8(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = r0;
    r0 = 4u;
    guest::cpu()->r[13] = r13;
    r0 = call_002f74e0(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r8 = 0u;
    if (r0 == 0) {
        goto L_597cbc;
    }
    guest::cpu()->r[13] = r13;
    r0 = call_006a5e34(r0, r1, r2, r3);
    r3 = 0u;
    r2 = r4;
    r1 = r5;
    guest::cpu()->r[13] = r13;
    r0 = call_002feb00(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r3 = guest::cpu()->r[3];
    r6 = r0;
    if (r0 == 0) {
        goto L_597cbc;
    }
    r2 = 0xa5u;  // (from the original)
    r1 = r4;
    r0 = r5;
    guest::cpu()->r[13] = r13;
    r0 = call_005a06d4(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 + 1u != 0) {
        goto L_597cbc;
    }
    r0 = r6;
    guest::cpu()->r[13] = r13;
    r0 = call_002fcb9c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        goto L_597cbc;
    }
    r0 = r6;
    guest::cpu()->r[13] = r13;
    r0 = call_002fcb34(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 == 0x41u) {  // (from the original)
        goto L_597cd0;
    }
L_597cbc:;
    r0 = ~0u;
    r13 = r13 + 0x38u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
L_597cd0:;
    r1 = r6;
    r0 = r7;
    guest::cpu()->r[13] = r13;
    r0 = call_002fc8e8(r0, r1, r2, r3);
    r3 = 0x95bfdcu;  // (from the original)
    r6 = r13 + 4u;
    *gptr<u32>(r13 + 0x14u) = u32(r8);  // (from the original)
    *gptr<u32>(r13 + 0xcu) = u32(r8);  // (from the original)
    *gptr<u32>(r13 + 0x10u) = u32(r8);  // (from the original)
    *gptr<u32>(r13) = u32(r5);
    *gptr<u32>(r13 + 0x18u) = u32(r8);  // (from the original)
    r2 = r3;
    r1 = r13 + 0x1cu;  // (from the original)
    r0 = 0x20u;  // (from the original)
    *gptr<u32>(r6) = u32(r4);
    *gptr<u32>(r6 + 4) = u32(r8);
    guest::cpu()->r[13] = r13;
    r0 = call_0059f194(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r13 = r13 + 0x38u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_00597c30
GUEST_EXPORT(0x00597c30, d_00597c30::f_00597c30);

// f_00597d28: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00597d28 {

inline constexpr guest::Function<0x002aab48, u32(u32, u32, u32, u32)> call_002aab48;  // (from the original)
inline constexpr guest::Function<0x002fc8e8, u32(u32, u32, u32, u32)> call_002fc8e8;  // (from the original)
inline constexpr guest::Function<0x002fcb84, u32(u32, u32, u32, u32)> call_002fcb84;  // (from the original)
inline constexpr guest::Function<0x002fcbb0, u32(u32, u32, u32, u32)> call_002fcbb0;  // (from the original)
inline constexpr guest::Function<0x002fe7dd, u32(u32, u32, u32, u32)> call_002fe7dc;  // (from the original)
inline constexpr guest::Function<0x002ff0b8, u32(u32, u32, u32, u32)> call_002ff0b8;  // (from the original)
inline constexpr guest::Function<0x002ff6f8, u32(u32, u32, u32, u32)> call_002ff6f8;  // (from the original)
inline constexpr guest::Function<0x00300904, u32(u32, u32, u32, u32)> call_00300904;  // (from the original)
inline constexpr guest::Function<0x00305f2c, u32(u32, u32, u32, u32)> call_00305f2c;  // (from the original)
inline constexpr guest::Function<0x006b9934, u32(u32, u32, u32, u32)> call_006b9934;  // (from the original)
inline constexpr guest::Function<0x0076ad24, u32(u32, u32, u32, u32)> call_0076ad24;  // (from the original)

u32 f_00597d28(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 res = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r13 = guest::cpu()->r[13];
    u32 nf = 0;
    u32 zf = 0;
    u32 vf = 0;
    *gptr<u32>(r13 + 0xffffffe0u) = u32(r3);  // (from the original)
    r13 = r13 - 0x20;  // (from the original)
    r5 = r1;
    r6 = r0;
    r4 = 0x952694u;  // (from the original)
    if ((*gptr<u32>(r4 + 4u) & 1u) != 0) {
        goto L_597d74;
    }
    r0 = r4 + 4u;
    guest::cpu()->r[13] = r13;
    r0 = call_002fe7dc(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        goto L_597d74;
    }
    r1 = 0x26u;  // (from the original)
    r0 = r4 + 8u;
    guest::cpu()->r[13] = r13;
    r0 = call_002fcbb0(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    r2 = 0x100000u;  // (from the original)
    r1 = 0x2f777cu;  // (from the original)
L_597d74:;
    if ((*gptr<u32>(r4) & 1u) != 0) {
        goto L_597db8;
    }
    r0 = 0x952694u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002fe7dc(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        goto L_597db8;
    }
    r0 = 0x9526a0u;  // (from the original)
    r1 = 0x2bu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002fcbb0(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    r2 = 0x100000u;  // (from the original)
L_597db8:;
    r1 = 0x72u;  // (from the original)
    r0 = r5;
    guest::cpu()->r[13] = r13;
    r0 = call_002fcb84(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r8 = 0x950145u;  // (from the original)
    r7 = 0x94f524u;  // (from the original)
    r4 = 0xaaef18u;  // (from the original)
    if (r0 != 0) {
        r1 = 0x95269cu;  // (from the original)
        r0 = r6;
        guest::cpu()->r[13] = r13;
        r0 = call_002fc8e8(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        guest::cpu()->r[13] = r13;
        r0 = call_00300904(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        if (r0 != 0) {
            goto L_597ed4;
        }
        r0 = *gptr<u32>(r4 + 0x234u);  // (from the original)
        if (r0 == 0) {
            goto L_597ed4;
        }
        res = u32(*gptr<u8>(r0 + 0x5701u)) << 0x1e;  // (from the original)
        if (!(res >> 0x1f)) {  // (from the original)
            goto L_597ed4;
        }
        r0 = *gptr<u32>(r7);
        if (r0 == 0) {
            goto L_597ed4;
        }
        r1 = 0xcu;  // (from the original)
        guest::cpu()->r[13] = r13;
        r0 = call_002aab48(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        if (*gptr<u32>(r0) != 0) {
            goto L_597ed4;
        }
        if (u32(*gptr<u8>(r8)) != 0) {
            goto L_597ed4;
        }
        goto L_597edc;
    }
    r1 = 0x77u;  // (from the original)
    r0 = r5;
    guest::cpu()->r[13] = r13;
    r0 = call_002fcb84(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        goto L_597ee4;
    }
    r1 = 0x9526a0u;  // (from the original)
    r0 = r6;
    guest::cpu()->r[13] = r13;
    r0 = call_002fc8e8(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0 = call_00300904(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 != 0) {
        goto L_597ed4;
    }
    r0 = *gptr<u32>(r4 + 0x234u);  // (from the original)
    if (r0 == 0) {
        goto L_597ed4;
    }
    res = u32(*gptr<u8>(r0 + 0x5701u)) << 0x1e;  // (from the original)
    if (!(res >> 0x1f)) {  // (from the original)
        goto L_597ed4;
    }
    r0 = *gptr<u32>(r7);
    if (r0 == 0) {
        goto L_597ed4;
    }
    r1 = 0xcu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002aab48(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    if (*gptr<u32>(r0) != 0) {
        goto L_597ed4;
    }
    if (u32(*gptr<u8>(r8)) == 0) {
        goto L_597edc;
    }
L_597ed4:;
    r0 = 0u;
L_597ed8:;
    r13 = r13 + 0x20;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
L_597edc:;
    r0 = 3u;
    r13 = r13 + 0x20;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
L_597ee4:;
    r0 = r5;
    guest::cpu()->r[13] = r13;
    r0 = call_002ff0b8(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        goto L_597f74;
    }
    r1 = r5;
    r0 = r6;
    guest::cpu()->r[13] = r13;
    r0 = call_002fc8e8(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r6;
    guest::cpu()->r[13] = r13;
    r0 = call_006b9934(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r5;
    guest::cpu()->r[13] = r13;
    r0 = call_0076ad24(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    res = r0 + 1u;
    nf = res >> 0x1f;  // (from the original)
    zf = res == 0;
    vf = ((r0 ^ res) & (1u ^ res)) >> 0x1f;  // (from the original)
    res = r0;
    r4 = res;
    if (!zf) {
        res = r4 - 3u;
        nf = res >> 0x1f;  // (from the original)
        zf = res == 0;
        vf = ((r4 ^ 3u) & (r4 ^ res)) >> 0x1f;  // (from the original)
    }
    if (zf || nf != vf) {
        goto L_597f6c;
    }
    r0 = 4u;
    guest::cpu()->r[13] = r13;
    r0 = call_002ff6f8(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = r4 - 3u;
    if (s32(r1) <= s32(r0)) {
        goto L_597f6c;
    }
    r1 = 6u;
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_002fcbb0(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = r0;
    r0 = r6;
    guest::cpu()->r[13] = r13;
    r0 = call_002fc8e8(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r0 = 4u;
    r13 = r13 + 0x20;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
L_597f6c:;
    r0 = 1u;
    r13 = r13 + 0x20;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
L_597f74:;
    r1 = 0x71u;  // (from the original)
    r0 = r5;
    guest::cpu()->r[13] = r13;
    r0 = call_002fcb84(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 != 0) {
        goto L_597ff4;
    }
    r1 = 0x73u;  // (from the original)
    r0 = r5;
    guest::cpu()->r[13] = r13;
    r0 = call_002fcb84(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 != 0) {
        goto L_597ff4;
    }
    r1 = 0x75u;  // (from the original)
    r0 = r5;
    guest::cpu()->r[13] = r13;
    r0 = call_002fcb84(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 != 0) {
        goto L_597ff4;
    }
    r1 = 0x74u;  // (from the original)
    r0 = r5;
    guest::cpu()->r[13] = r13;
    r0 = call_002fcb84(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r7 = 0x953f68u;  // (from the original)
    if (r0 == 0) {
        goto L_598008;
    }
    guest::cpu()->r[13] = r13;
    r0 = call_00305f2c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    zf = r0 == 3u;
    if (!zf) {
        zf = *gptr<u32>(r4 + 0x234u) == 0;  // (from the original)
    }
    if (zf) {
        goto L_597ff4;
    }
    if (u32(*gptr<u8>(r7)) == 1u) {
        guest::preempt();
        goto L_597ed4;
    }
L_597ff4:;
    r1 = 0x95269cu;  // (from the original)
    r0 = r6;
    guest::cpu()->r[13] = r13;
    r0 = call_002fc8e8(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r0 = 2u;
    r13 = r13 + 0x20;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
L_598008:;
    r1 = 0x76u;  // (from the original)
    r0 = r5;
    guest::cpu()->r[13] = r13;
    r0 = call_002fcb84(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 != 0) {
        goto L_598088;
    }
    r1 = 0x78u;  // (from the original)
    r0 = r5;
    guest::cpu()->r[13] = r13;
    r0 = call_002fcb84(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 != 0) {
        goto L_598088;
    }
    r1 = 0x7au;  // (from the original)
    r0 = r5;
    guest::cpu()->r[13] = r13;
    r0 = call_002fcb84(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 != 0) {
        goto L_598088;
    }
    r1 = 0x79u;  // (from the original)
    r0 = r5;
    guest::cpu()->r[13] = r13;
    r0 = call_002fcb84(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        guest::preempt();
        goto L_597ed8;
    }
    guest::cpu()->r[13] = r13;
    r0 = call_00305f2c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    zf = r0 == 3u;
    if (!zf) {
        zf = *gptr<u32>(r4 + 0x234u) == 0;  // (from the original)
    }
    if (zf) {
        goto L_598088;
    }
    if (u32(*gptr<u8>(r7)) == 1u) {
        guest::preempt();
        goto L_597ed4;
    }
L_598088:;
    r1 = 0x9526a0u;  // (from the original)
    r0 = r6;
    guest::cpu()->r[13] = r13;
    r0 = call_002fc8e8(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r0 = 2u;
    r13 = r13 + 0x20;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_00597d28
GUEST_EXPORT(0x00597d28, d_00597d28::f_00597d28);

// f_00598164: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00598164 {

inline constexpr guest::Function<0x002fcb84, u32(u32, u32, u32, u32)> call_002fcb84;  // (from the original)
inline constexpr guest::Function<0x002feb00, u32(u32, u32, u32, u32)> call_002feb00;  // (from the original)
inline constexpr guest::Function<0x0059a9ac, u32(u32, u32, u32, u32)> call_0059a9ac;  // (from the original)
inline constexpr guest::Function<0x006a5e34, u32(u32, u32, u32, u32)> call_006a5e34;  // (from the original)
inline constexpr guest::Function<0x00752990, u32(u32, u32, u32, u32)> call_00752990;  // (from the original)
inline constexpr guest::Function<0x00752998, u32(u32, u32, u32, u32)> call_00752998;  // (from the original)

u32 f_00598164(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 res = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r9 = guest::cpu()->r[9];
    u32 r10 = guest::cpu()->r[10];
    u32 r13 = guest::cpu()->r[13];
    *gptr<u32>(r13 + 0xffffffd8u) = u32(r3);  // (from the original)
    r13 = r13 - 0x28;  // (from the original)
    r10 = r0;
    guest::cpu()->r[13] = r13;
    r0 = call_006a5e34(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r9 = r0;
    if (r0 == 0) {
        goto L_598210;
    }
    guest::cpu()->r[13] = r13;
    r0 = call_00752990(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r6 = r0;
    r0 = r9;
    guest::cpu()->r[13] = r13;
    r0 = call_00752998(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    res = r0;
    r8 = res;
    r7 = 0u;
    if (!u32(r0 >= 0u) || u32(res == 0)) {
        goto L_598210;
    }
L_598194:;
    r4 = 0u;
    if (!u32(r6 >= 0u) || u32(r6 == 0)) {
        goto L_598204;
    }
L_5981a0:;
    r3 = 0u;
    r2 = r7;
    r1 = r4;
    r0 = r9;
    guest::cpu()->r[13] = r13;
    r0 = call_002feb00(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r5 = r0;
    if (r0 == 0) {
        goto L_5981f8;
    }
    r1 = 0xcdu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002fcb84(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    if (r0 == 0) {
        goto L_5981f8;
    }
    *gptr<u32>(r13) = u32(0u);
    r3 = r7;
    r2 = r4;
    r1 = r5;
    r0 = r10;
    guest::cpu()->r[13] = r13;
    r0 = call_0059a9ac(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r0 = 1u;
    r13 = r13 + 0x28;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
L_5981f8:;
    r4 = r4 + 1u;
    if (r4 < r6) {
        guest::preempt();
        goto L_5981a0;
    }
L_598204:;
    r7 = r7 + 1u;
    if (r7 < r8) {
        guest::preempt();
        goto L_598194;
    }
L_598210:;
    r0 = 0u;
    r13 = r13 + 0x28;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_00598164
GUEST_EXPORT(0x00598164, d_00598164::f_00598164);

// f_00598218: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00598218 {

inline constexpr guest::Function<0x002f74c8, u32(u32, u32, u32, u32)> call_002f74c8;  // (from the original)
inline constexpr guest::Function<0x002f74e0, u32(u32, u32, u32, u32)> call_002f74e0;  // (from the original)
inline constexpr guest::Function<0x002fcaf4, u32(u32, u32, u32, u32)> call_002fcaf4;  // (from the original)
inline constexpr guest::Function<0x002fcb84, u32(u32, u32, u32, u32)> call_002fcb84;  // (from the original)
inline constexpr guest::Function<0x002feb00, u32(u32, u32, u32, u32)> call_002feb00;  // (from the original)
inline constexpr guest::Function<0x0059f194, u32(u32, u32, u32, u32)> call_0059f194;  // (from the original)
inline constexpr guest::Function<0x006a5e34, u32(u32, u32, u32, u32)> call_006a5e34;  // (from the original)

u32 f_00598218(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 0x30u;  // (from the original)
    r4 = r0;
    r5 = r1;
    guest::cpu()->r[13] = r13;
    r0 = call_002f74c8(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = r0;
    r0 = 4u;
    guest::cpu()->r[13] = r13;
    r0 = call_002f74e0(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        goto L_5982c8;
    }
    guest::cpu()->r[13] = r13;
    r0 = call_006a5e34(r0, r1, r2, r3);
    r3 = 0u;
    r2 = r5;
    r1 = r4;
    guest::cpu()->r[13] = r13;
    r0 = call_002feb00(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r6 = r0;
    if (r0 == 0) {
        goto L_5982c8;
    }
    guest::cpu()->r[13] = r13;
    r0 = call_002fcaf4(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 != 0) {
        goto L_5982c8;
    }
    r1 = 0x9eu;  // (from the original)
    r0 = r6;
    guest::cpu()->r[13] = r13;
    r0 = call_002fcb84(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        r1 = 0x9du;  // (from the original)
        r0 = r6;
        guest::cpu()->r[13] = r13;
        r0 = call_002fcb84(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        if (r0 == 0) {
            goto L_5982c8;
        }
    }
    r0 = 0u;
    r3 = 0x95bfdcu;  // (from the original)
    *gptr<u32>(r13 + 0x14u) = u32(r0);  // (from the original)
    *gptr<u32>(r13 + 0x18u) = u32(r0);  // (from the original)
    *gptr<u32>(r13 + 0xcu) = u32(r0);  // (from the original)
    *gptr<u32>(r13 + 0x10u) = u32(r0);  // (from the original)
    *gptr<u32>(r13 + 8u) = u32(r0);
    r2 = r3;
    r1 = r6;
    r0 = 7u;
    *gptr<u32>(r13) = u32(r4);
    *gptr<u32>(r13 + 4) = u32(r5);
    guest::cpu()->r[13] = r13;
    r0 = call_0059f194(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r13 = r13 + 0x30u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
L_5982c8:;
    r0 = ~0u;
    r13 = r13 + 0x30u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_00598218
GUEST_EXPORT(0x00598218, d_00598218::f_00598218);

// f_005982d8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005982d8 {

inline constexpr guest::Function<0x002fcbb0, u32(u32, u32, u32, u32)> call_002fcbb0;  // (from the original)
inline constexpr guest::Function<0x002ff8b0, u32(u32, u32, u32, u32)> call_002ff8b0;  // (from the original)
inline constexpr guest::Function<0x00304f30, u32(u32, u32, u32, u32)> call_00304f30;  // (from the original)
inline constexpr guest::Function<0x005985c4, u32(u32, u32, u32, u32)> call_005985c4;  // (from the original)
inline constexpr guest::Function<0x0059f194, u32(u32, u32, u32, u32)> call_0059f194;  // (from the original)

u32 f_005982d8(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 ea = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 0x40u;  // (from the original)
    r5 = r0;
    r4 = r1;
    if (r1 == 4u) {
        r0 = 4u;
        guest::cpu()->r[13] = r13;
        r0 = call_002ff8b0(r0, r1, r2, r3);
        r4 = r0;
    }
    r6 = 0u;
    r3 = 2u;
    r2 = r13 + 0x28u;  // (from the original)
    r1 = r13 + 0x20u;  // (from the original)
    r0 = r13 + 0x1cu;  // (from the original)
    *gptr<u32>(r13) = u32(r6);
    guest::cpu()->r[13] = r13;
    r0 = call_005985c4(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        r0 = ~0u;
        goto L_59838c;
    }
    r1 = 0x9du;  // (from the original)
    r0 = r13 + 0x24u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002fcbb0(r0, r1, r2, r3);
    r3 = r5;
    r2 = r4;
    r1 = 0u;
    r0 = r13 + 0x24u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00304f30(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    if (r0 == 0) {
        goto L_598394;
    }
    ea = r13 + 0xcu;  // (from the original)
    *gptr<u32>(ea) = u32(r6);
    ea = r13 + 0x10u;  // (from the original)
    *gptr<u32>(ea) = u32(r6);
    ea = r13 + 0x14u;  // (from the original)
    *gptr<u32>(ea) = u32(r6);
    ea = r13 + 0x18u;  // (from the original)
    *gptr<u32>(ea) = u32(r6);
    ea = r13 + 0x1cu;  // (from the original)
    r1 = *gptr<u32>(ea + 4);
    r3 = 0x95bfdcu;  // (from the original)
    r2 = r13 + 0x24u;  // (from the original)
    *gptr<u32>(r13) = u32(*gptr<u32>(ea));
    *gptr<u32>(r13 + 4) = u32(r1);
    *gptr<u32>(r13 + 8) = u32(r6);
    r1 = r3;
    r0 = 0xdu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0059f194(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
L_59838c:;
    r13 = r13 + 0x40u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
L_598394:;
    r0 = ~0u;
    r13 = r13 + 0x40u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_005982d8
GUEST_EXPORT(0x005982d8, d_005982d8::f_005982d8);

// f_005983ac: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005983ac {

inline constexpr guest::Function<0x002f74c8, u32(u32, u32, u32, u32)> call_002f74c8;  // (from the original)
inline constexpr guest::Function<0x002f74e0, u32(u32, u32, u32, u32)> call_002f74e0;  // (from the original)
inline constexpr guest::Function<0x002feb00, u32(u32, u32, u32, u32)> call_002feb00;  // (from the original)
inline constexpr guest::Function<0x0059f194, u32(u32, u32, u32, u32)> call_0059f194;  // (from the original)
inline constexpr guest::Function<0x005a06d4, u32(u32, u32, u32, u32)> call_005a06d4;  // (from the original)
inline constexpr guest::Function<0x006a5e34, u32(u32, u32, u32, u32)> call_006a5e34;  // (from the original)
inline constexpr guest::Function<0x00768dc4, u32(u32, u32, u32, u32)> call_00768dc4;  // (from the original)

u32 f_005983ac(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 0x30u;  // (from the original)
    r4 = r0;
    r5 = r1;
    guest::cpu()->r[13] = r13;
    r0 = call_002f74c8(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = r0;
    r0 = 4u;
    guest::cpu()->r[13] = r13;
    r0 = call_002f74e0(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        goto L_598454;
    }
    guest::cpu()->r[13] = r13;
    r0 = call_006a5e34(r0, r1, r2, r3);
    r3 = 0u;
    r2 = r5;
    r1 = r4;
    guest::cpu()->r[13] = r13;
    r0 = call_002feb00(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r3 = guest::cpu()->r[3];
    r6 = r0;
    if (r0 == 0) {
        goto L_598454;
    }
    r2 = 0xa5u;  // (from the original)
    r1 = r5;
    r0 = r4;
    guest::cpu()->r[13] = r13;
    r0 = call_005a06d4(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 + 1u != 0) {
        goto L_598454;
    }
    r1 = 1u;
    r0 = r6;
    guest::cpu()->r[13] = r13;
    r0 = call_00768dc4(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    if (r0 == 0) {
        goto L_598454;
    }
    r0 = 0u;
    *gptr<u32>(r13 + 0x14u) = u32(r0);  // (from the original)
    *gptr<u32>(r13 + 0x18u) = u32(r0);  // (from the original)
    r2 = r6;
    *gptr<u32>(r13 + 0xcu) = u32(r0);  // (from the original)
    *gptr<u32>(r13 + 0x10u) = u32(r0);  // (from the original)
    *gptr<u32>(r13 + 8u) = u32(r0);
    r3 = 0x95bfdcu;  // (from the original)
    r1 = r2;
    r0 = 0x1du;  // (from the original)
    *gptr<u32>(r13) = u32(r4);
    *gptr<u32>(r13 + 4) = u32(r5);
    guest::cpu()->r[13] = r13;
    r0 = call_0059f194(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r13 = r13 + 0x30u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
L_598454:;
    r0 = ~0u;
    r13 = r13 + 0x30u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_005983ac
GUEST_EXPORT(0x005983ac, d_005983ac::f_005983ac);

// f_00599294: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00599294 {

struct __attribute__((packed)) Object_00599294_1 {
    u32 word_0;
};
GUEST_OFFSET(Object_00599294_1, word_0, 0x0);  // (from the original)


u32 f_00599294(u32 r0, gptr<Object_00599294_1> arg1, u32 r2, u32 r3) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r12 = 0;
    u32 r13 = guest::cpu()->r[13];
    u32 zf = 0;
    u32 cf = 0;
    r13 = r13 - 8;
    r4 = *gptr<u32>(r13 + 8u);
    r12 = r4 & 0x70u;  // (from the original)
    zf = r4 == 0;
    r4 = r4 & 7u;
    if (!zf) {
        zf = r4 == 0;
    }
    r12 = r12 >> 4;
    if (!zf) {
        zf = r12 == 0;
    }
    if (!zf) {
        cf = r4 >= 8u;
        if (!cf) {
            cf = r12 >= 8u;
        }
        if (!cf) {
            goto L_5992d0;
        }
    }
    r13 = r13 + 8;
    r0 = 0u;
    guest::cpu()->r[13] = r13;
    return r0;
L_5992d0:;
    r5 = 0x85f1ecu;  // (from the original)
    *gptr<u32>(r0) = u32(r2 + *gptr<u32>(r5 + (r4 << 2)));
    arg1->word_0 = u32(*gptr<u32>(r5 + (r12 << 2)) + r3);
    r13 = r13 + 8;
    r0 = 1u;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_00599294
GUEST_EXPORT(0x00599294, d_00599294::f_00599294);

// f_005992fc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005992fc {

inline constexpr guest::Function<0x002f74c8, u32(u32, u32, u32, u32)> call_002f74c8;  // (from the original)
inline constexpr guest::Function<0x002f74e0, u32(u32, u32, u32, u32)> call_002f74e0;  // (from the original)
inline constexpr guest::Function<0x002fccdc, u32(u32, u32, u32, u32)> call_002fccdc;  // (from the original)
inline constexpr guest::Function<0x002feb00, u32(u32, u32, u32, u32)> call_002feb00;  // (from the original)
inline constexpr guest::Function<0x0059c934, u32(u32, u32, u32, u32)> call_0059c934;  // (from the original)
inline constexpr guest::Function<0x006a5e34, u32(u32, u32, u32, u32)> call_006a5e34;  // (from the original)

u32 f_005992fc(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r4 = r0;
    r5 = r1;
    r0 = call_002f74c8(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = r0;
    r0 = 4u;
    r0 = call_002f74e0(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        goto L_599358;
    }
    r0 = call_006a5e34(r0, r1, r2, r3);
    r3 = 0u;
    r2 = r5;
    r1 = r4;
    r0 = call_002feb00(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        goto L_599358;
    }
    r0 = call_002fccdc(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 == 0x1du) {  // (from the original)
        goto L_599358;
    }
    r1 = r5;
    r0 = r4;
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    return call_0059c934(r0, r1, r2, r3);
L_599358:;
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_005992fc
GUEST_EXPORT(0x005992fc, d_005992fc::f_005992fc);

// f_00599544: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00599544 {

inline constexpr guest::Function<0x0016fe08, u32(u32, u32, u32, u32)> call_0016fe08;  // (from the original)
inline constexpr guest::Function<0x002fccdc, u32(u32, u32, u32, u32)> call_002fccdc;  // (from the original)
inline constexpr guest::Function<0x002fcf7c, u32(u32, u32, u32, u32)> call_002fcf7c;  // (from the original)
inline constexpr guest::Function<0x002feb00, u32(u32, u32, u32, u32)> call_002feb00;  // (from the original)
inline constexpr guest::Function<0x003171b4, u32(u32, u32, u32, u32)> call_003171b4;  // (from the original)
inline constexpr guest::Function<0x0059c934, u32(u32, u32, u32, u32)> call_0059c934;  // (from the original)
inline constexpr guest::Function<0x006a5e34, u32(u32, u32, u32, u32)> call_006a5e34;  // (from the original)

u32 f_00599544(u32 r0, u32 r1_unused, u32 r2_unused, u32 r3) {
    u32 r1 = 0;
    u32 r2 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 0x10u;  // (from the original)
    r2 = r0;
    r1 = r13 + 4u;
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_003171b4(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = *gptr<u32>(r13);
    r1 = *gptr<u32>(r13 + 4);
    guest::cpu()->r[13] = r13;
    r0 = call_0059c934(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0 = call_006a5e34(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    if (r0 == 0) {
        r13 = r13 + 0x10u;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    r1 = *gptr<u32>(r13);
    r2 = *gptr<u32>(r13 + 4);
    r3 = 0u;
    guest::cpu()->r[13] = r13;
    r0 = call_002feb00(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r4 = r0;
    if (r0 == 0) {
        r13 = r13 + 0x10u;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    guest::cpu()->r[13] = r13;
    r0 = call_002fccdc(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 != 0x13u) {  // (from the original)
        guest::cpu()->r[13] = r13;
        r0 = call_002fcf7c(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        if (r0 == 0) {
            r13 = r13 + 0x10u;  // (from the original)
            guest::cpu()->r[1] = r1;
            guest::cpu()->r[13] = r13;
            return r0;
        }
    }
    r1 = *gptr<u32>(r13);
    r2 = *gptr<u32>(r13 + 4);
    r3 = 0u;
    r0 = r4;
    guest::cpu()->r[13] = r13;
    r0 = call_0016fe08(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r13 = r13 + 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_00599544
GUEST_EXPORT(0x00599544, d_00599544::f_00599544);

// f_00599784: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00599784 {


u32 f_00599784() {
    u32 r0 = 0;
    u32 r1 = 0;
    u32 r2 = 0;
    u32 r3 = 0;
    r3 = 0x9b417cu;  // (from the original)
    r0 = 0u;
    r1 = r0;
    do {
L_599790:;
        r2 = r3 + (r0 + (r0 << 3) << 1);
        *gptr<u8>(r2 + 0xeu) = u8(r1);  // (from the original)
        *gptr<u8>(r2 + 0xfu) = u8(r1);  // (from the original)
        *gptr<u8>(r2 + 0x10u) = u8(r0);  // (from the original)
        r0 = r0 + 1u;
        guest::preempt();
    } while (s32(r0) < s32(4u));
    r0 = 0x9526b0u;  // (from the original)
    *gptr<u8>(r0 + 5u) = u8(r1);
    *gptr<u16>(r0) = u16(~0u);
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_00599784
GUEST_EXPORT(0x00599784, d_00599784::f_00599784);

// f_005999b8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005999b8 {

inline constexpr guest::Function<0x002f74c8, u32(u32, u32, u32, u32)> call_002f74c8;  // (from the original)
inline constexpr guest::Function<0x002f74e0, u32(u32, u32, u32, u32)> call_002f74e0;  // (from the original)
inline constexpr guest::Function<0x002fc8e8, u32(u32, u32, u32, u32)> call_002fc8e8;  // (from the original)
inline constexpr guest::Function<0x002fc934, u32(u32, u32, u32, u32)> call_002fc934;  // (from the original)
inline constexpr guest::Function<0x002fcb84, u32(u32, u32, u32, u32)> call_002fcb84;  // (from the original)
inline constexpr guest::Function<0x002fcbb0, u32(u32, u32, u32, u32)> call_002fcbb0;  // (from the original)
inline constexpr guest::Function<0x005985c4, u32(u32, u32, u32, u32)> call_005985c4;  // (from the original)
inline constexpr guest::Function<0x0059ec48, u32(u32, u32, u32, u32)> call_0059ec48;  // (from the original)
inline constexpr guest::Function<0x0059f194, u32(u32, u32, u32, u32)> call_0059f194;  // (from the original)

u32 f_005999b8(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 ea = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 0x38u;  // (from the original)
    r4 = r0;
    guest::cpu()->r[13] = r13;
    r0 = call_0059ec48(r0, r1, r2, r3);
    r5 = 0u;
    r3 = r5;
    r2 = r13 + 0x24u;  // (from the original)
    r1 = r13 + 0x20u;  // (from the original)
    r0 = r13 + 0x1cu;  // (from the original)
    *gptr<u32>(r13) = u32(r5);
    guest::cpu()->r[13] = r13;
    r0 = call_005985c4(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        r0 = ~0u;
        r13 = r13 + 0x38u;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    r1 = r4;
    r0 = r13 + 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002fc934(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0 = call_002f74c8(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = r0;
    r0 = 4u;
    guest::cpu()->r[13] = r13;
    r0 = call_002f74e0(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        goto L_599a48;
    }
    r1 = 0x339fu;  // (from the original)
    r0 = r4;
    guest::cpu()->r[13] = r13;
    r0 = call_002fcb84(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        goto L_599a48;
    }
    r1 = 0x33a0u;  // (from the original)
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_002fcbb0(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = r0;
    r0 = r13 + 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002fc8e8(r0, r1, r2, r3);
L_599a48:;
    ea = r13 + 0x10u;  // (from the original)
    *gptr<u32>(ea) = u32(r5);
    ea = r13 + 0x24u;  // (from the original)
    r0 = u32(*gptr<u8>(ea));
    ea = r13 + 0xcu;  // (from the original)
    *gptr<u32>(ea) = u32(r5);
    ea = r13 + 0x14u;  // (from the original)
    *gptr<u32>(ea) = u32(r5);
    ea = r13 + 0x18u;  // (from the original)
    *gptr<u32>(ea) = u32(r5);
    ea = r13 + 0x1cu;  // (from the original)
    r1 = *gptr<u32>(ea);
    r2 = *gptr<u32>(ea + 4);
    r3 = r4;
    *gptr<u32>(r13 + 8u) = u32(r0);
    r0 = 0x22u;  // (from the original)
    *gptr<u32>(r13) = u32(r1);
    *gptr<u32>(r13 + 4) = u32(r2);
    r1 = 0x95bfdcu;  // (from the original)
    r2 = r13 + 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0059f194(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r13 = r13 + 0x38u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_005999b8
GUEST_EXPORT(0x005999b8, d_005999b8::f_005999b8);

// f_00599aa4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00599aa4 {

inline constexpr guest::Function<0x002f74c8, u32(u32, u32, u32, u32)> call_002f74c8;  // (from the original)
inline constexpr guest::Function<0x002f74e0, u32(u32, u32, u32, u32)> call_002f74e0;  // (from the original)
inline constexpr guest::Function<0x002fcb34, u32(u32, u32, u32, u32)> call_002fcb34;  // (from the original)
inline constexpr guest::Function<0x002fcb84, u32(u32, u32, u32, u32)> call_002fcb84;  // (from the original)
inline constexpr guest::Function<0x002feb00, u32(u32, u32, u32, u32)> call_002feb00;  // (from the original)
inline constexpr guest::Function<0x005a06d4, u32(u32, u32, u32, u32)> call_005a06d4;  // (from the original)
inline constexpr guest::Function<0x005c08dc, u32(u32, u32, u32, u32)> call_005c08dc;  // (from the original)
inline constexpr guest::Function<0x005c33cc, u32(u32, u32, u32, u32)> call_005c33cc;  // (from the original)
inline constexpr guest::Function<0x006140b8, u32(u32, u32, u32, u32)> call_006140b8;  // (from the original)
inline constexpr guest::Function<0x006a5e34, u32(u32, u32, u32, u32)> call_006a5e34;  // (from the original)
inline constexpr guest::Function<0x006a6dbc, u32(u32, u32, u32, u32)> call_006a6dbc;  // (from the original)
inline constexpr guest::Function<0x0071a844, u32(u32, u32, u32, u32)> call_0071a844;  // (from the original)

u32 f_00599aa4(u32 r0, u32 r1, u32 r2, u32 r3) {
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
    r13 = r13 - 0x58u;  // (from the original)
    r10 = r0;
    r11 = r1;
    r0 = *gptr<u32>(0xaaf14cu) + 0xau;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0071a844(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0 = call_002fcb34(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 != 0x11u) {  // (from the original)
        goto L_599c4c;
    }
    r1 = 0u;
    r0 = 4u;
    guest::cpu()->r[13] = r13;
    r0 = call_005c33cc(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r4 = r0;
    if (r0 == 0) {
        goto L_599c4c;
    }
    r3 = 1u;
    r2 = 4u;
    r1 = r13 + 0x1cu;  // (from the original)
    r0 = r13 + 0x18u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_005c08dc(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    if (r0 == 0) {
        goto L_599c38;
    }
    r3 = 0x85ef84u;  // (from the original)
    r12 = 0x105bu;  // (from the original)
    r2 = u32(s32(s16(*gptr<u16>(r4 + 0x2eu))));  // (from the original)
    r1 = 0u;
L_599b10:;
    r0 = sxth(r2 - u32(*gptr<u16>(r3 + (r1 << 1))));
    res = r0;
    if (res >> 0x1f != (r0 & (r0 ^ res)) >> 0x1f) {  // (from the original)
        r0 = 0u - r0;
    }
    if (s32(r0) < s32(r12)) {
        r0 = r1 & 0xffu;  // (from the original)
    } else {
        r1 = r1 + 1u;
        if (s32(r1) < s32(8u)) {
            guest::preempt();
            goto L_599b10;
        }
        r0 = 0u;
    }
    r1 = 0x85ee64u;  // (from the original)
    r0 = r0 + (r0 << 3);
    r7 = r1 + (r0 << 2);
    guest::cpu()->r[13] = r13;
    r0 = call_006a5e34(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    *gptr<u32>(r13 + 0x14u) = u32(r0);  // (from the original)
    if (r0 == 0) {
        goto L_599c38;
    }
    r8 = 0x85ee50u;  // (from the original)
    r4 = 1u;
    r9 = r8 + 9u;
L_599b70:;
    r0 = *gptr<u32>(r7 + (r4 << 2));
    r3 = 0u;
    r5 = u32(s32(s8(*gptr<u8>(r8 + r0)))) + *gptr<u32>(r13 + 0x18u);  // (from the original)
    r6 = u32(s32(s8(*gptr<u8>(r9 + r0)))) + *gptr<u32>(r13 + 0x1cu);  // (from the original)
    r0 = *gptr<u32>(r13 + 0x14u);  // (from the original)
    r2 = r6;
    r1 = r5;
    guest::cpu()->r[13] = r13;
    r0 = call_002feb00(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        goto L_599c40;
    }
    r1 = 0x9eu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002fcb84(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        goto L_599c40;
    }
    r2 = 0xa5u;  // (from the original)
    r1 = r6;
    r0 = r5;
    guest::cpu()->r[13] = r13;
    r0 = call_005a06d4(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r3 = guest::cpu()->r[3];
    if (r0 + 1u != 0) {
        goto L_599c40;
    }
    ea = r13 + 0x18u;  // (from the original)
    r1 = *gptr<u32>(ea);
    r2 = *gptr<u32>(ea + 4);
    r0 = r13 + 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_006a6dbc(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r13 + 0x28u;  // (from the original)
    *gptr<u32>(r13 + 0xcu) = u32(r0);  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002f74c8(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = r0;
    r0 = 4u;
    guest::cpu()->r[13] = r13;
    r0 = call_002f74e0(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r3 = guest::cpu()->r[3];
    if (r0 != 0) {
        r2 = *gptr<u32>(r13 + 0xcu);  // (from the original)
        r1 = r6;
        r0 = r5;
        guest::cpu()->r[13] = r13;
        r0 = call_006140b8(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        if (r0 == 0) {
            goto L_599c40;
        }
    }
    *gptr<u32>(r10) = u32(r5);
    r0 = 1u;
    *gptr<u32>(r11) = u32(r6);
L_599c38:;
    r13 = r13 + 0x58u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
L_599c40:;
    r4 = r4 + 1u;
    if (s32(r4) < s32(4u)) {
        guest::preempt();
        goto L_599b70;
    }
L_599c4c:;
    r0 = 0u;
    r13 = r13 + 0x58u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_00599aa4
GUEST_EXPORT(0x00599aa4, d_00599aa4::f_00599aa4);

// f_00599c6c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00599c6c {

inline constexpr guest::Function<0x005985c4, u32(u32, u32, u32, u32)> call_005985c4;  // (from the original)

u32 f_00599c6c() {
    u32 r0 = 0;
    u32 r1 = 0;
    u32 r2 = 0;
    u32 r3 = 0;
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 0x18u;  // (from the original)
    r0 = 0u;
    r3 = r0;
    *gptr<u32>(r13) = u32(r0);
    r2 = r13 + 0xcu;  // (from the original)
    r1 = r13 + 8u;
    r0 = r13 + 4u;
    guest::cpu()->r[13] = r13;
    r0 = call_005985c4(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    if (r0 != 0) {
        r0 = 1u;
    }
    r13 = r13 + 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_00599c6c
GUEST_EXPORT(0x00599c6c, d_00599c6c::f_00599c6c);

// f_00599ca0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00599ca0 {

inline constexpr guest::Function<0x002fc8e8, u32(u32, u32, u32, u32)> call_002fc8e8;  // (from the original)
inline constexpr guest::Function<0x002fc934, u32(u32, u32, u32, u32)> call_002fc934;  // (from the original)
inline constexpr guest::Function<0x002fcb34, u32(u32, u32, u32, u32)> call_002fcb34;  // (from the original)
inline constexpr guest::Function<0x002fcb84, u32(u32, u32, u32, u32)> call_002fcb84;  // (from the original)
inline constexpr guest::Function<0x002fcbb0, u32(u32, u32, u32, u32)> call_002fcbb0;  // (from the original)
inline constexpr guest::Function<0x002ff800, u32(u32, u32, u32, u32)> call_002ff800;  // (from the original)
inline constexpr guest::Function<0x00767a44, u32(u32, u32, u32, u32)> call_00767a44;  // (from the original)

u32 f_00599ca0(u32 r0, u32 r1) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r13 = guest::cpu()->r[13];
    r6 = r1;
    r13 = r13 - 0x18u;  // (from the original)
    r5 = r0;
    r1 = r0;
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_002fc934(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r0 = r5;
    guest::cpu()->r[13] = r13;
    r0 = call_002fcb34(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r4 = r0;
    r1 = r5;
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_00767a44(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 == 0) {
        r0 = r5;
        guest::cpu()->r[13] = r13;
        r0 = call_002ff800(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    }
    r1 = 0x3413u;  // (from the original)
    if (r4 == 0x36u) {  // (from the original)
        goto L_599d08;
    }
    if (r4 == 0x40u) {  // (from the original)
        goto L_599d3c;
    }
    if (r4 == 0x37u) {  // (from the original)
        goto L_599d74;
    }
    if (r4 == 0x38u) {  // (from the original)
        r1 = r1 + 3u;
    } else {
        goto L_599d28;
    }
L_599d08:;
    r0 = r13 + 4u;
    guest::cpu()->r[13] = r13;
    r0 = call_002fcbb0(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = r0;
    r0 = r6;
    guest::cpu()->r[13] = r13;
    r0 = call_002fc8e8(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
L_599d28:;
    r0 = 0u;
    r13 = r13 + 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
L_599d3c:;
    r0 = r13 + 4u;
    guest::cpu()->r[13] = r13;
    r0 = call_002fcbb0(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = r0;
    r0 = r6;
    guest::cpu()->r[13] = r13;
    r0 = call_002fc8e8(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r0 = 1u;
    r13 = r13 + 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
L_599d74:;
    r1 = 0x202cu;  // (from the original)
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_002fcb84(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    if (r0 == 0) {
        r1 = 0x3415u;  // (from the original)
    } else {
        r1 = 0x3414u;  // (from the original)
    }
    guest::preempt();
    goto L_599d08;
}

}  // namespace d_00599ca0
GUEST_EXPORT(0x00599ca0, d_00599ca0::f_00599ca0);

// f_00599da0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00599da0 {

inline constexpr guest::Function<0x002f74c8, u32(u32, u32, u32, u32)> call_002f74c8;  // (from the original)
inline constexpr guest::Function<0x0059e65c, u32(u32, u32, u32, u32)> call_0059e65c;  // (from the original)
inline constexpr guest::Function<0x005a0ef8, u32(u32, u32, u32, u32)> call_005a0ef8;  // (from the original)
inline constexpr guest::Function<0x005a0f5c, u32(u32, u32, u32, u32)> call_005a0f5c;  // (from the original)
inline constexpr guest::Function<0x005a1ba0, u32(u32, u32, u32, u32)> call_005a1ba0;  // (from the original)
inline constexpr guest::Function<0x005a2438, u32(u32, u32, u32, u32)> call_005a2438;  // (from the original)

u32 f_00599da0(u32 r0_unused, u32 r1, u32 r2) {
    u32 r0 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    r0 = r1;
    r1 = r2;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r4 = r0;
    r5 = r1;
    r0 = call_002f74c8(r0, r1, r2, guest::cpu()->r[3]);
    r2 = r0;
    r1 = r5;
    r0 = r4;
    r0 = call_005a0ef8(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 + 1u == 0) {
        goto L_599e60;
    }
    r1 = 0x9b4264u;  // (from the original)
    r4 = r1 + (r0 + (r0 << 1) + (r0 << 3) << 1);
    r0 = u32(*gptr<u8>(r4 + 0x10u));  // (from the original)
    if (r0 == 0xbu) {  // (from the original)
        goto L_599e44;
    }
    if (r0 != 0x1cu) {  // (from the original)
        goto L_599e60;
    }
    r2 = 1u;
    r1 = 0u;
    r0 = r4;
    r0 = call_005a1ba0(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
L_599e08:;
    if (r0 != 0) {
        goto L_599e60;
    }
    r0 = r4;
    r0 = call_005a0f5c(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r0 = r4;
    r0 = call_005a2438(r0, r1, r2, guest::cpu()->r[3]);
    r0 = 0u;
    *gptr<u8>(r4 + 0x10u) = u8(r0);  // (from the original)
    *gptr<u8>(r4 + 0x11u) = u8(r0);  // (from the original)
    r1 = u32(*gptr<u8>(r4 + 0xfu));  // (from the original)
    r0 = u32(*gptr<u8>(r4 + 0xeu));  // (from the original)
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    r2 = 0u;
    return call_0059e65c(r0, r1, r2, guest::cpu()->r[3]);
L_599e44:;
    r2 = 1u;
    r1 = r2;
    r0 = r4;
    r0 = call_005a1ba0(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    guest::preempt();
    goto L_599e08;
L_599e60:;
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_00599da0
GUEST_EXPORT(0x00599da0, d_00599da0::f_00599da0);

// f_00599ee8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00599ee8 {

inline constexpr guest::Function<0x00125ca8, u32(u32, u32, u32, u32)> call_00125ca8;  // (from the original)
inline constexpr guest::Function<0x0012ca6c, u32(u32, u32, u32, u32)> call_0012ca6c;  // (from the original)
inline constexpr guest::Function<0x002f825c, u32(u32, u32, u32, u32)> call_002f825c;  // (from the original)
inline constexpr guest::Function<0x002fd108, u32(u32, u32, u32, u32)> call_002fd108;  // (from the original)
inline constexpr guest::Function<0x004edd20, u32(u32, u32, u32, u32)> call_004edd20;  // (from the original)
inline constexpr guest::Function<0x004ee3e8, u32(u32, u32, u32, u32)> call_004ee3e8;  // (from the original)
inline constexpr guest::Function<0x00590720, u32(u32, u32, u32, u32)> call_00590720;  // (from the original)
inline constexpr guest::Function<0x00590f1c, u32(u32, u32, u32, u32)> call_00590f1c;  // (from the original)
inline constexpr guest::Function<0x00614568, u32(u32, u32, u32, u32)> call_00614568;  // (from the original)
inline constexpr guest::Function<0x00614730, u32(u32, u32, u32, u32)> call_00614730;  // (from the original)
inline constexpr guest::Function<0x006a5e34, u32(u32, u32, u32, u32)> call_006a5e34;  // (from the original)
inline constexpr guest::Function<0x006f7e10, u32(u32, u32, u32, u32)> call_006f7e10;  // (from the original)
inline constexpr guest::Function<0x007529d8, u32(u32, u32, u32, u32)> call_007529d8;  // (from the original)

u32 f_00599ee8(u32 r0, u32 r1, u32 r2, u32 r3, float S0, float S1, float S2) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r9 = guest::cpu()->r[9];
    u32 r10 = guest::cpu()->r[10];
    u32 r13 = guest::cpu()->r[13];
    r6 = r0;
    r13 = r13 - 0x30u;  // (from the original)
    r4 = r1;
    r7 = 0x94ee4cu;  // (from the original)
    r5 = r2;
    r8 = 0u;
    r0 = *gptr<u32>(r7 + 0x14u);  // (from the original)
    if (r0 == 0) {
        goto L_59a048;
    }
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2;
    r0 = call_006a5e34(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    S2 = guest::cpu()->s[2];
    r2 = r5;
    r1 = r4;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2;
    r0 = call_007529d8(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    S2 = guest::cpu()->s[2];
    if (r0 == 0) {
        goto L_59a048;
    }
    r1 = 0x98a47cu;  // (from the original)
    r3 = 0x226u;  // (from the original)
    r9 = r6;
    r6 = r4;
    r0 = 0u;
L_599f3c:;
    r2 = *gptr<u32>(r1 + (r0 << 2));
    if (r2 != 0) {
        r10 = r8;
        r8 = r2;
        *gptr<u32>(r1 + (r0 << 2)) = u32(r10);
        r2 = 4u;
        r1 = r8;
        r0 = 0x154u;  // (from the original)
        guest::cpu()->r[13] = r13;
        guest::cpu()->s[0] = S0;
        guest::cpu()->s[1] = S1;
        guest::cpu()->s[2] = S2;
        r0 = call_002fd108(r0, r1, r2, r3);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        S0 = guest::cpu()->s[0];
        S1 = guest::cpu()->s[1];
        S2 = guest::cpu()->s[2];
        r4 = r0;
        r1 = 0x154u;  // (from the original)
        guest::cpu()->r[13] = r13;
        guest::cpu()->s[0] = S0;
        guest::cpu()->s[1] = S1;
        guest::cpu()->s[2] = S2;
        r0 = call_002f825c(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        S0 = guest::cpu()->s[0];
        S1 = guest::cpu()->s[1];
        S2 = guest::cpu()->s[2];
        r0 = r4;
        guest::cpu()->r[13] = r13;
        guest::cpu()->s[0] = S0;
        guest::cpu()->s[1] = S1;
        guest::cpu()->s[2] = S2;
        r0 = call_00590f1c(r0, r1, r2, r3);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        S0 = guest::cpu()->s[0];
        S1 = guest::cpu()->s[1];
        S2 = guest::cpu()->s[2];
        r1 = 0x907d28u;  // (from the original)
        *gptr<u32>(r0) = u32(r1);
        r0 = r0 + 0x124u;  // (from the original)
        guest::cpu()->r[13] = r13;
        guest::cpu()->s[0] = S0;
        guest::cpu()->s[1] = S1;
        guest::cpu()->s[2] = S2;
        r0 = call_00614568(r0, r1, r2, r3);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        S0 = guest::cpu()->s[0];
        S1 = guest::cpu()->s[1];
        S2 = guest::cpu()->s[2];
        r4 = r0 - 0x124u;  // (from the original)
        r1 = r8;
        r0 = r0 - 0x104u;  // (from the original)
        guest::cpu()->r[13] = r13;
        guest::cpu()->s[0] = S0;
        guest::cpu()->s[1] = S1;
        guest::cpu()->s[2] = S2;
        r0 = call_0012ca6c(r0, r1, r2, r3);
        S0 = guest::cpu()->s[0];
        S1 = guest::cpu()->s[1];
        S2 = guest::cpu()->s[2];
        r3 = r5;
        r2 = r6;
        r1 = r9;
        r0 = r4;
        *gptr<u32>(r13) = u32(r10);
        guest::cpu()->r[13] = r13;
        guest::cpu()->s[0] = S0;
        guest::cpu()->s[1] = S1;
        guest::cpu()->s[2] = S2;
        r0 = call_00590720(r0, r1, r2, r3);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        S0 = std::bit_cast<float>(*gptr<u32>(0x59a064u));  // (from the original)
        r0 = r13 + 4u;
        *gptr<u8>(r4 + 0x150u) = u8(r10);  // (from the original)
        S2 = S0;
        S1 = S0;
        *gptr<u32>(r0) = u32(std::bit_cast<u32>(S0));
        *gptr<u32>(r0 + 4) = u32(std::bit_cast<u32>(S1));
        *gptr<u32>(r0 + 8) = u32(std::bit_cast<u32>(S2));
        r1 = r0;
        r0 = r4 + 0x58u;  // (from the original)
        guest::cpu()->r[13] = r13;
        guest::cpu()->s[0] = S0;
        guest::cpu()->s[1] = S1;
        guest::cpu()->s[2] = S2;
        r0 = call_004ee3e8(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        S0 = guest::cpu()->s[0];
        S1 = guest::cpu()->s[1];
        S2 = guest::cpu()->s[2];
        r0 = r4 + 0x58u;  // (from the original)
        guest::cpu()->r[13] = r13;
        guest::cpu()->s[0] = S0;
        guest::cpu()->s[1] = S1;
        guest::cpu()->s[2] = S2;
        r0 = call_004edd20(r0, r1, r2, r3);
        S2 = guest::cpu()->s[2];
        r3 = ~0x80000000u;  // (from the original)
        r2 = 4u;
        S1 = std::bit_cast<float>(*gptr<u32>(0x59a068u));  // (from the original)
        S0 = std::bit_cast<float>(*gptr<u32>(0x59a06cu));  // (from the original)
        r1 = r4 + 0x40u;  // (from the original)
        r0 = r4 + 0x124u;  // (from the original)
        guest::cpu()->r[13] = r13;
        guest::cpu()->s[0] = S0;
        guest::cpu()->s[1] = S1;
        guest::cpu()->s[2] = S2;
        r0 = call_006f7e10(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        S0 = guest::cpu()->s[0];
        S1 = guest::cpu()->s[1];
        S2 = guest::cpu()->s[2];
        r0 = r4 + 0x124u;  // (from the original)
        guest::cpu()->r[13] = r13;
        guest::cpu()->s[0] = S0;
        guest::cpu()->s[1] = S1;
        guest::cpu()->s[2] = S2;
        r0 = call_00614730(r0, r1, r2, r3);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        S0 = guest::cpu()->s[0];
        S1 = guest::cpu()->s[1];
        S2 = guest::cpu()->s[2];
    } else {
        r0 = r0 + 1u;
        if (r0 < r3) {
            guest::preempt();
            goto L_599f3c;
        }
        r4 = r8;
    }
    r1 = r4;
    if (r4 == 0) {
        goto L_59a048;
    }
    r0 = *gptr<u32>(r7 + 0x14u) + 0x3594u;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2;
    r0 = call_00125ca8(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    r0 = 1u;
    r13 = r13 + 0x30u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    return r0;
L_59a048:;
    r0 = 0u;
    r13 = r13 + 0x30u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    return r0;
}

}  // namespace d_00599ee8
GUEST_EXPORT(0x00599ee8, d_00599ee8::f_00599ee8);

// f_0059a070: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0059a070 {

struct __attribute__((packed)) Object_0059a070_0 {
    u8 unknown_0[0x45b8];  // (not used here)
    u8 byte_45b8;
};
GUEST_OFFSET(Object_0059a070_0, byte_45b8, 0x45b8);  // (from the original)

inline constexpr guest::Function<0x00178d78, u32(u32, u32, u32, u32)> call_00178d78;  // (from the original)
inline constexpr guest::Function<0x00317a50, u32(u32, u32, u32, u32)> call_00317a50;  // (from the original)
inline constexpr guest::Function<0x00317a88, u32(u32, u32, u32, u32)> call_00317a88;  // (from the original)
inline constexpr guest::Function<0x004eada4, u32(u32, u32, u32, u32)> call_004eada4;  // (from the original)
inline constexpr guest::Function<0x00544a20, u32(u32, u32, u32, u32)> call_00544a20;  // (from the original)
inline constexpr guest::Function<0x00544d08, u32(u32, u32, u32, u32)> call_00544d08;  // (from the original)
inline constexpr guest::Function<0x00544f18, u32(u32, u32, u32, u32)> call_00544f18;  // (from the original)
inline constexpr guest::Function<0x00544fec, u32(u32, u32, u32, u32)> call_00544fec;  // (from the original)
inline constexpr guest::Function<0x0054a644, u32(u32, u32, u32, u32)> call_0054a644;  // (from the original)
inline constexpr guest::Function<0x0056a974, u32(u32, u32, u32, u32)> call_0056a974;  // (from the original)
inline constexpr guest::Function<0x0056bc28, u32(u32, u32, u32, u32)> call_0056bc28;  // (from the original)
inline constexpr guest::Function<0x0056c45c, u32(u32, u32, u32, u32)> call_0056c45c;  // (from the original)
inline constexpr guest::Function<0x00594d8c, u32(u32, u32, u32, u32)> call_00594d8c;  // (from the original)
inline constexpr guest::Function<0x0059ceb4, u32(u32, u32, u32, u32)> call_0059ceb4;  // (from the original)

u32 f_0059a070(gptr<Object_0059a070_0> arg0, u32 r1, u32 r2, u32 r3) {
    u32 ea = 0;
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
    r5 = r0 + 0x45b8u;  // (from the original)
    r4 = r0;
    r13 = r13 - 0xc0u;  // (from the original)
    r0 = u32(arg0->byte_45b8);
    r9 = 4u;
    if (r0 != 1u) {
        if (r0 == 2u) {
            goto L_59a234;
        }
        if (r0 == 3u) {
            goto L_59a248;
        }
        goto L_59a278;
    }
    r10 = 0x94ee4cu;  // (from the original)
    r11 = *gptr<u32>(r4 + 0x20u);  // (from the original)
    if (u32(*gptr<u8>(r10 + 3u)) == 0) {
        goto L_59a22c;
    }
    *gptr<u32>(r13 + 0xcu) = u32(0x59a288u);  // (from the original)
    *gptr<u32>(r13 + 8u) = u32(0x9047f8u);  // (from the original)
    r1 = r13 + 8u;
    r3 = 4u;
    r2 = r11;
    r0 = r4 + 0x344u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0056a974(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r7 = r0;
    r0 = r13 + 0x10u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0056c45c(r0, r1, r2, r3);
    ea = r13 + 0x10u;  // (from the original)
    r1 = *gptr<u32>(ea + 4);
    r2 = *gptr<u32>(ea + 8);
    r3 = r13 + 0x38u;  // (from the original)
    *gptr<u32>(r3) = u32(*gptr<u32>(ea));
    *gptr<u32>(r3 + 4) = u32(r1);
    *gptr<u32>(r3 + 8) = u32(r2);
    r0 = r13 + 0x38u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0056bc28(r0, r1, r2, r3);
    r8 = r0;
    r1 = 0x20u;  // (from the original)
    ea = r13 + 0x48u;  // (from the original)
    *gptr<u32>(ea) = u32(r13 + 0x50u);  // (from the original)
    *gptr<u32>(ea + 4) = u32(r1);
    r0 = 0x8c9f1cu;  // (from the original)
    r2 = r1;
    r3 = u32(*gptr<u8>(r0));
    *gptr<u8>(r2 + (*gptr<u32>(r13 + 0x48u) - 1u)) = u8(r3);  // (from the original)
    r1 = r13 + 0x44u;  // (from the original)
    *gptr<u8>(r13 + 0x50u) = u8(u32(*gptr<u8>(r0)));  // (from the original)
    *gptr<u32>(r13 + 0x44u) = u32(0x9048ecu);  // (from the original)
    r0 = r13 + 0x10u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0054a644(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = 0x59a2acu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00544fec(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    *gptr<u32>(r13 + 0x34u) = u32(r8);  // (from the original)
    r8 = r13 + 0x34u;  // (from the original)
    r6 = r0;
    r1 = r13 + 0x70u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00544a20(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 != 0) {
        r2 = *gptr<u32>(r6 + 4u);
        if (u32(*gptr<u8>(r13 + 0x70u)) == 0) {  // (from the original)
            r1 = 0u;
        } else {
            r1 = r13 + 0x70u;  // (from the original)
        }
        r0 = r8;
        guest::cpu()->r[13] = r13;
        r0 = call_00544d08(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
    }
    r0 = r6;
    guest::cpu()->r[13] = r13;
    r0 = call_00544f18(r0, r1, r2, r3);
    r3 = 0x80u;  // (from the original)
    r2 = r11;
    r1 = r13 + 0x44u;  // (from the original)
    r0 = r4 + 0x2cu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00317a50(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    res = r0 & r7;
    r0 = res;
    if (res != 0) {
        if (u32(*gptr<u8>(r10 + 3u)) == 0) {
            goto L_59a22c;
        }
        r2 = 0x20000u;  // (from the original)
        r3 = 0x30000u;  // (from the original)
        r1 = r2;
        r0 = r4 + 0x2cu;  // (from the original)
        guest::cpu()->r[13] = r13;
        r0 = call_004eada4(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        guest::cpu()->r[13] = r13;
        r0 = call_00594d8c(r0, r1, r2, r3);
        r2 = r0;
        r3 = 1u;
        r1 = r4 + 0x14u;  // (from the original)
        r0 = r4 + 0x2cu;  // (from the original)
        guest::cpu()->r[13] = r13;
        r0 = call_00317a88(r0, r1, r2, r3);
        r3 = 1u;
        r2 = 0u;
        r1 = r4 + 0x14u;  // (from the original)
        r0 = r4 + 0x2cu;  // (from the original)
        guest::cpu()->r[13] = r13;
        r0 = call_00317a88(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        *gptr<u8>(r5) = u8(2u);
        r0 = 0u;
    }
    r13 = r13 + 0xc0u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
L_59a22c:;
    *gptr<u8>(r5) = u8(r9);
    goto L_59a278;
L_59a234:;
    *gptr<u8>(r5) = u8(3u);
    r0 = 0u;
    r13 = r13 + 0xc0u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
L_59a248:;
    r1 = *gptr<u32>(r4 + 0x20u);  // (from the original)
    r0 = r4 + 0x2cu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00178d78(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    r2 = 0x59a2c8u;  // (from the original)
    r1 = 0u;
    r0 = r4;
    *gptr<u8>(r5) = u8(r9);
    guest::cpu()->r[13] = r13;
    r0 = call_0059ceb4(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    r2 = 0x59a2d0u;  // (from the original)
    r1 = 1u;
    r0 = r4;
    guest::cpu()->r[13] = r13;
    r0 = call_0059ceb4(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
L_59a278:;
    r0 = 1u;
    r13 = r13 + 0xc0u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_0059a070
GUEST_EXPORT(0x0059a070, d_0059a070::f_0059a070);

// f_0059a2d8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0059a2d8 {

inline constexpr guest::Function<0x00125ca8, u32(u32, u32, u32, u32)> call_00125ca8;  // (from the original)
inline constexpr guest::Function<0x0012ca6c, u32(u32, u32, u32, u32)> call_0012ca6c;  // (from the original)
inline constexpr guest::Function<0x002f825c, u32(u32, u32, u32, u32)> call_002f825c;  // (from the original)
inline constexpr guest::Function<0x002fd108, u32(u32, u32, u32, u32)> call_002fd108;  // (from the original)
inline constexpr guest::Function<0x00590720, u32(u32, u32, u32, u32)> call_00590720;  // (from the original)
inline constexpr guest::Function<0x00590f1c, u32(u32, u32, u32, u32)> call_00590f1c;  // (from the original)
inline constexpr guest::Function<0x006a5e34, u32(u32, u32, u32, u32)> call_006a5e34;  // (from the original)
inline constexpr guest::Function<0x007529d8, u32(u32, u32, u32, u32)> call_007529d8;  // (from the original)

u32 f_0059a2d8(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r9 = guest::cpu()->r[9];
    u32 r10 = guest::cpu()->r[10];
    u32 r11 = guest::cpu()->r[11];
    u32 r13 = guest::cpu()->r[13];
    *gptr<u32>(r13 + 0xffffffd8u) = u32(r3);  // (from the original)
    r13 = r13 - 0x28;  // (from the original)
    r4 = r1;
    r5 = r2;
    r8 = r0;
    r6 = r3;
    r9 = 0x94ee4cu;  // (from the original)
    r7 = *gptr<u32>(r13 + 0x28u);  // (from the original)
    r10 = 0u;
    r0 = *gptr<u32>(r9 + 0x14u);  // (from the original)
    if (r0 == 0) {
        goto L_59a3dc;
    }
    guest::cpu()->r[13] = r13;
    r0 = call_006a5e34(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    r2 = r5;
    r1 = r4;
    guest::cpu()->r[13] = r13;
    r0 = call_007529d8(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    if (r0 == 0) {
        goto L_59a3dc;
    }
    r1 = 0x98a47cu;  // (from the original)
    r3 = 0x226u;  // (from the original)
    r11 = r8;
    r8 = r4;
    r0 = 0u;
L_59a330:;
    r2 = *gptr<u32>(r1 + (r0 << 2));
    if (r2 != 0) {
        *gptr<u32>(r1 + (r0 << 2)) = u32(r10);
        *gptr<u32>(r13) = u32(r2);
        r1 = *gptr<u32>(r13);
        r2 = 4u;
        r0 = 0x128u;  // (from the original)
        guest::cpu()->r[13] = r13;
        r0 = call_002fd108(r0, r1, r2, r3);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r4 = r0;
        r1 = 0x128u;  // (from the original)
        guest::cpu()->r[13] = r13;
        r0 = call_002f825c(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r0 = r4;
        guest::cpu()->r[13] = r13;
        r0 = call_00590f1c(r0, r1, r2, r3);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r4 = r0;
        *gptr<u32>(r4) = u32(0x907940u);  // (from the original)
        r1 = *gptr<u32>(r13);
        r0 = r4 + 0x20u;  // (from the original)
        guest::cpu()->r[13] = r13;
        r0 = call_0012ca6c(r0, r1, r2, r3);
        r3 = r5;
        r2 = r8;
        r1 = r11;
        r0 = r4;
        *gptr<u32>(r13) = u32(r10);
        guest::cpu()->r[13] = r13;
        r0 = call_00590720(r0, r1, r2, r3);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        *gptr<u8>(r4 + 0x124u) = u8(r10);  // (from the original)
        *gptr<u8>(r4 + 0x125u) = u8(r6);  // (from the original)
        *gptr<u8>(r4 + 0x126u) = u8(r7);  // (from the original)
    } else {
        r0 = r0 + 1u;
        if (r0 < r3) {
            guest::preempt();
            goto L_59a330;
        }
        r4 = r10;
    }
    r1 = r4;
    if (r4 == 0) {
        goto L_59a3dc;
    }
    r0 = *gptr<u32>(r9 + 0x14u) + 0x3594u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00125ca8(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r0 = 1u;
    r13 = r13 + 0x28;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
L_59a3dc:;
    r0 = 0u;
    r13 = r13 + 0x28;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_0059a2d8
GUEST_EXPORT(0x0059a2d8, d_0059a2d8::f_0059a2d8);

// f_0059a3f4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0059a3f4 {

inline constexpr guest::Function<0x005a2624, u32(u32, u32, u32, u32)> call_005a2624;  // (from the original)

u32 f_0059a3f4(u32 r0, u32 r1) {
    u32 r2 = 0;
    u32 r3 = 0;
    r2 = r1;
    r1 = 0x94ee4cu;  // (from the original)
    r3 = *gptr<u32>(r1 + 0x14u);  // (from the original)
    if (r3 == 0) {
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r1 = r0;
    r0 = r3 + 0x35c4u;  // (from the original)
    return call_005a2624(r0, r1, r2, r3);
}

}  // namespace d_0059a3f4
GUEST_EXPORT(0x0059a3f4, d_0059a3f4::f_0059a3f4);

// f_0059a420: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0059a420 {

inline constexpr guest::Function<0x0059dab8, u32(u32, u32, u32, u32)> call_0059dab8;  // (from the original)
inline constexpr guest::Function<0x00753c94, u32(u32, u32, u32, u32)> call_00753c94;  // (from the original)

u32 f_0059a420(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 res = 0;
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
    u32 nf = 0;
    u32 vf = 0;
    goto L_59a420;
L_59a420:;
    *gptr<u32>(r13 + 0xfffffff8u) = u32(r12);  // (from the original)
    r13 = r13 - 0x28;  // (from the original)
    r8 = r0;
    if (u32(*gptr<u8>(0x94ee4eu)) == 0) {  // (from the original)
        goto L_59a4e4;
    }
    r9 = 1u;
    r4 = r8 + 0x3204u;  // (from the original)
    r10 = r8 + 0x35c4u;  // (from the original)
    r7 = r8 + 0x320eu;  // (from the original)
L_59a454:;
    r0 = u32(*gptr<u8>(r4 + 0x14u));  // (from the original)
    if (r0 != 0) {
        r0 = r0 - 1u & 0xffu;  // (from the original)
        *gptr<u8>(r4 + 0x14u) = u8(r0);  // (from the original)
        r6 = u32(*gptr<u8>(r4 + r0));
        r5 = u32(*gptr<u8>(r0 + r7));
        r0 = r10;
        r1 = r6;
        r2 = r5;
        guest::cpu()->r[13] = r13;
        r0 = call_00753c94(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        if (r0 != 0) {
            guest::preempt();
            goto L_59a454;
        }
        if (r9 != 0) {
            r3 = 1u;
            r2 = r5;
            r1 = r6;
            r0 = r8;
            guest::cpu()->r[13] = r13;
            r0 = call_0059dab8(r0, r1, r2, r3);
            r1 = guest::cpu()->r[1];
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
            if (r0 != 0) {
                guest::preempt();
                goto L_59a454;
            }
        }
        r3 = 0u;
        r2 = r5;
        r1 = r6;
        r0 = r8;
        guest::cpu()->r[13] = r13;
        r0 = call_0059dab8(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        guest::preempt();
        goto L_59a454;
    }
    r0 = r8;
    r13 = r13 + 0x28;  // (from the original)
    guest::cpu()->r[13] = r13;
    return guest::call_address<u32>(*gptr<u32>(0x14fc68u), r0, r1, r2, r3);  // (from the original)
L_59a4e4:;
    r4 = r8 + 0x3204u;  // (from the original)
    r9 = r8 + 0x35c4u;  // (from the original)
    r7 = r8 + 0x320eu;  // (from the original)
L_59a4fc:;
    r0 = u32(*gptr<u8>(r4 + 0x14u));  // (from the original)
    if (r0 != 0) {
        r0 = r0 - 1u & 0xffu;  // (from the original)
        *gptr<u8>(r4 + 0x14u) = u8(r0);  // (from the original)
        r5 = u32(*gptr<u8>(r4 + r0));
        r6 = u32(*gptr<u8>(r0 + r7));
        r0 = r9;
        r1 = r5;
        r2 = r6;
        guest::cpu()->r[13] = r13;
        r0 = call_00753c94(r0, r1, r2, r3);
        r3 = guest::cpu()->r[3];
        if (r0 != 0) {
            guest::preempt();
            goto L_59a4fc;
        }
        r3 = 0u;
        r2 = r6;
        r1 = r5;
        r0 = r8;
        guest::cpu()->r[13] = r13;
        r0 = call_0059dab8(r0, r1, r2, r3);
        r3 = guest::cpu()->r[3];
        guest::preempt();
        goto L_59a4fc;
    }
    r1 = 0x356cu;  // (from the original)
    r5 = *gptr<u32>(r1 + r8);
    r0 = *gptr<u32>(r1 - 0x24u + r8);  // (from the original)
    res = r5 - r0;
    if (!u32(res == 0) && res >> 0x1f == ((r5 ^ r0) & (r5 ^ res)) >> 0x1f) {  // (from the original)
        r5 = r0;
    }
    r10 = *gptr<u32>(0x3564u + r8);  // (from the original)
    r0 = *gptr<u32>(0x3540u + r8);  // (from the original)
    r1 = 0x3568u;  // (from the original)
    if (s32(r10) < s32(r0)) {
        r10 = r0;
    }
    r6 = *gptr<u32>(r1 + r8);
    r0 = *gptr<u32>(r1 - 0x24u + r8);  // (from the original)
    r1 = 0x3560u;  // (from the original)
    res = r6 - r0;
    if (!u32(res == 0) && res >> 0x1f == ((r6 ^ r0) & (r6 ^ res)) >> 0x1f) {  // (from the original)
        r6 = r0;
    }
    r9 = *gptr<u32>(r1 + r8);
    r0 = *gptr<u32>(r1 - 0x24u + r8);  // (from the original)
    if (s32(r9) < s32(r0)) {
        r9 = r0;
    }
    res = r5 - r10;
    nf = res >> 0x1f;  // (from the original)
    vf = ((r5 ^ r10) & (r5 ^ res)) >> 0x1f;  // (from the original)
    if (nf == vf) {
        r11 = r8 + 0x35c4u;  // (from the original)
        r7 = r8 + 0x3500u;  // (from the original)
    }
    if (nf != vf) {
        goto L_59a62c;
    }
L_59a5cc:;
    res = r9 - r6;
    r4 = r9;
    if (!u32(res == 0) && res >> 0x1f == ((r9 ^ r6) & (r9 ^ res)) >> 0x1f) {  // (from the original)
        goto L_59a620;
    }
    do {
L_59a5d8:;
        r1 = r4;
        r2 = r5;
        r0 = r11;
        guest::cpu()->r[13] = r13;
        r0 = call_00753c94(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r3 = guest::cpu()->r[3];
        if (!(r0 != 0)) {
            r3 = 0u;
            r2 = r5;
            r1 = r4;
            r0 = r8;
            guest::cpu()->r[13] = r13;
            r0 = call_0059dab8(r0, r1, r2, r3);
            r1 = guest::cpu()->r[1];
            r3 = guest::cpu()->r[3];
            r0 = u32(s32(s16(*gptr<u16>(r7 + 0x90u))));  // (from the original)
            if (s32(r0) >= s32(0xau)) {  // (from the original)
                goto L_59a62c;
            }
        }
        r4 = r4 + 1u;
        guest::preempt();
    } while (s32(r6) >= s32(r4));
L_59a620:;
    r5 = r5 - 1u;
    if (s32(r5) >= s32(r10)) {
        guest::preempt();
        goto L_59a5cc;
    }
L_59a62c:;
    r13 = r13 + 0x28;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_0059a420
GUEST_EXPORT(0x0059a420, d_0059a420::f_0059a420);

// f_0059a644: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0059a644 {

struct __attribute__((packed)) Object_0059a644_0 {
    u8 unknown_0[0x45b8];  // (not used here)
    u8 byte_45b8;
};
GUEST_OFFSET(Object_0059a644_0, byte_45b8, 0x45b8);  // (from the original)

inline constexpr guest::Function<0x00178d78, u32(u32, u32, u32, u32)> call_00178d78;  // (from the original)
inline constexpr guest::Function<0x002f74c8, u32(u32, u32, u32, u32)> call_002f74c8;  // (from the original)
inline constexpr guest::Function<0x002f74e0, u32(u32, u32, u32, u32)> call_002f74e0;  // (from the original)
inline constexpr guest::Function<0x002fa9d0, u32(u32, u32, u32, u32)> call_002fa9d0;  // (from the original)
inline constexpr guest::Function<0x00317a50, u32(u32, u32, u32, u32)> call_00317a50;  // (from the original)
inline constexpr guest::Function<0x00317a88, u32(u32, u32, u32, u32)> call_00317a88;  // (from the original)
inline constexpr guest::Function<0x004eada4, u32(u32, u32, u32, u32)> call_004eada4;  // (from the original)
inline constexpr guest::Function<0x004f1d04, u32(u32, u32, u32, u32)> call_004f1d04;  // (from the original)
inline constexpr guest::Function<0x00594d8c, u32(u32, u32, u32, u32)> call_00594d8c;  // (from the original)
inline constexpr guest::Function<0x0059cae8, u32(u32, u32, u32, u32)> call_0059cae8;  // (from the original)
inline constexpr guest::Function<0x00736a1c, u32(u32, u32, u32, u32)> call_00736a1c;  // (from the original)

u32 f_0059a644(gptr<Object_0059a644_0> arg0, u32 r1, u32 r2, u32 r3) {
    u32 ea = 0;
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
    u32 zf = 0;
    r5 = r0;
    r8 = r0 + 0x45b8u;  // (from the original)
    r13 = r13 - 0x30u;  // (from the original)
    r7 = 0x94eeb4u;  // (from the original)
    r0 = u32(arg0->byte_45b8);
    r9 = 7u;
    r6 = r7 - 0x68u;  // (from the original)
    if (r0 != 4u) {
        if (r0 == 5u) {
            goto L_59a890;
        }
        if (r0 == 6u) {
            goto L_59a8a4;
        }
        goto L_59a91c;
    }
    r4 = *gptr<u32>(r5 + 0x20u);  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002f74c8(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = r0;
    r0 = 0x10000000u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002f74e0(r0, r1, r2, r3);
    zf = r0 == 0;
    r0 = 0x9047f8u;  // (from the original)
    r10 = 0u;
    if (!zf) {
        *gptr<u32>(r13) = u32(r0);
        *gptr<u32>(r13 + 4u) = u32(0x59a930u);  // (from the original)
        r1 = r13;
        r3 = 0x80u;  // (from the original)
        r2 = r4;
        r0 = r5 + 0x134u;  // (from the original)
        guest::cpu()->r[13] = r13;
        r0 = call_00317a50(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        goto L_59a724;
    }
    r1 = u32(*gptr<u8>(r6 + 3u));
    *gptr<u32>(r13) = u32(r0);
    zf = r1 == 0;
    r1 = r13;
    if (!zf) {
        *gptr<u32>(r13 + 4u) = u32(0x59a950u);  // (from the original)
        r3 = 0x80u;  // (from the original)
        r2 = r4;
        r0 = r5 + 0x134u;  // (from the original)
        guest::cpu()->r[13] = r13;
        r0 = call_00317a50(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        goto L_59a724;
    }
    *gptr<u32>(r13 + 4u) = u32(0x59a970u);  // (from the original)
    r3 = 0x80u;  // (from the original)
    r2 = r4;
    r0 = r5 + 0x134u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00317a50(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
L_59a724:;
    if (r0 == 0) {
        goto L_59a874;
    }
    if (u32(*gptr<u8>(r6 + 3u)) != 0) {
        r3 = 0x10000u;  // (from the original)
        r2 = r3;
        r1 = r3;
        r0 = r5 + 0x134u;  // (from the original)
        guest::cpu()->r[13] = r13;
        r0 = call_004eada4(r0, r1, r2, r3);
    } else {
        r2 = 0x30000u;  // (from the original)
        r3 = 0x20000u;  // (from the original)
        r1 = r2;
        r0 = r5 + 0x134u;  // (from the original)
        guest::cpu()->r[13] = r13;
        r0 = call_004eada4(r0, r1, r2, r3);
    }
    r3 = 1u;
    r2 = 0u;
    r1 = r5 + 0x14u;  // (from the original)
    r0 = r5 + 0x134u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00317a88(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0 = call_00594d8c(r0, r1, r2, r3);
    r2 = r0;
    r3 = 1u;
    r1 = r5 + 0x14u;  // (from the original)
    r0 = r5 + 0x134u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00317a88(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0 = call_002f74c8(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = r0;
    r0 = 0x10000000u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002f74e0(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    if (r0 == 0) {
        goto L_59a860;
    }
    r3 = 0x94eeb4u;  // (from the original)
    r1 = 0x846aa8u;  // (from the original)
    r2 = *gptr<u32>(r7);
    r0 = r5;
    guest::cpu()->r[13] = r13;
    r0 = call_0059cae8(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r11 = 0x94ef54u;  // (from the original)
    r4 = 0u;
L_59a7e0:;
    ea = r5 + 0x13cu;  // (from the original)
    r0 = *gptr<u32>(ea);
    r7 = r13;
    ea = r11 + (r4 << 2);
    r6 = *gptr<u32>(ea);
    ea = r0 + 0x20u;  // (from the original)
    r0 = ea;
    r1 = *gptr<u32>(ea);
    if (r1 == 0) {
        r0 = r10;
    } else {
        r0 = r0 + r1;
    }
    zf = r0 == 0;
    if (!zf) {
        zf = r6 == 0;
    }
    *gptr<u32>(r13) = u32(r0);
    if (zf) {
        goto L_59a844;
    }
    r0 = r6;
    guest::cpu()->r[13] = r13;
    r0 = call_002fa9d0(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    r2 = r0;
    r1 = r6;
    r0 = r7;
    guest::cpu()->r[13] = r13;
    r0 = call_00736a1c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        goto L_59a844;
    }
    ea = r0 + 0xcu;  // (from the original)
    r0 = ea;
    r1 = *gptr<u32>(ea);
    if (r1 == 0) {
        r0 = r10;
    } else {
        r0 = r0 + r1;
    }
    goto L_59a848;
L_59a844:;
    r0 = 0u;
L_59a848:;
    guest::cpu()->r[13] = r13;
    r0 = call_004f1d04(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r4 = r4 + 1u;
    if (r4 < 3u) {
        guest::preempt();
        goto L_59a7e0;
    }
    goto L_59a86c;
L_59a860:;
    if (u32(*gptr<u8>(r6 + 3u)) == 0) {
        goto L_59a87c;
    }
L_59a86c:;
    r0 = 1u;
    *gptr<u8>(r8) = u8(r9);
L_59a874:;
    r13 = r13 + 0x30u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
L_59a87c:;
    *gptr<u8>(r8) = u8(5u);
    r0 = 0u;
    r13 = r13 + 0x30u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
L_59a890:;
    *gptr<u8>(r8) = u8(6u);
    r0 = 0u;
    r13 = r13 + 0x30u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
L_59a8a4:;
    if (u32(*gptr<u8>(r6 + 3u)) == 0) {
        r1 = *gptr<u32>(r5 + 0x20u);  // (from the original)
        r0 = r5 + 0x134u;  // (from the original)
        guest::cpu()->r[13] = r13;
        r0 = call_00178d78(r0, r1, r2, r3);
        r3 = 0x94eeb4u;  // (from the original)
        r1 = 0x846aa8u;  // (from the original)
        r2 = *gptr<u32>(r7);
        r0 = r5;
        guest::cpu()->r[13] = r13;
        r0 = call_0059cae8(r0, r1, r2, r3);
        r0 = 0x94eedcu;  // (from the original)
        r1 = 0x846a94u;  // (from the original)
        r3 = r0;
        r2 = *gptr<u32>(r0);
        r0 = r5;
        guest::cpu()->r[13] = r13;
        r0 = call_0059cae8(r0, r1, r2, r3);
        r1 = 0x94ef04u;  // (from the original)
        r0 = r5;
        r3 = r1;
        r2 = *gptr<u32>(r1);
        r1 = 0x846a84u;  // (from the original)
        guest::cpu()->r[13] = r13;
        r0 = call_0059cae8(r0, r1, r2, r3);
        r1 = 0x94ef2cu;  // (from the original)
        r0 = r5;
        r3 = r1;
        r2 = *gptr<u32>(r1);
        r1 = 0x846a70u;  // (from the original)
        guest::cpu()->r[13] = r13;
        r0 = call_0059cae8(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
    }
    *gptr<u8>(r8) = u8(r9);
L_59a91c:;
    r0 = 1u;
    r13 = r13 + 0x30u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_0059a644
GUEST_EXPORT(0x0059a644, d_0059a644::f_0059a644);

// f_0059a9ac: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0059a9ac {

inline constexpr guest::Function<0x002f74c8, u32(u32, u32, u32, u32)> call_002f74c8;  // (from the original)
inline constexpr guest::Function<0x002f74e0, u32(u32, u32, u32, u32)> call_002f74e0;  // (from the original)
inline constexpr guest::Function<0x002fcb34, u32(u32, u32, u32, u32)> call_002fcb34;  // (from the original)
inline constexpr guest::Function<0x002fcb9c, u32(u32, u32, u32, u32)> call_002fcb9c;  // (from the original)
inline constexpr guest::Function<0x002fccdc, u32(u32, u32, u32, u32)> call_002fccdc;  // (from the original)
inline constexpr guest::Function<0x004e9fe8, u32(u32, u32, u32, u32)> call_004e9fe8;  // (from the original)
inline constexpr guest::Function<0x006a6dbc, u32(u32, u32, u32, u32)> call_006a6dbc;  // (from the original)

u32 f_0059a9ac(u32 r0, u32 r1, u32 r2, u32 r3, float S0, float S1) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r13 = guest::cpu()->r[13];
    u32 zf = 0;
    r13 = r13 - 0x18;  // (from the original)
    r5 = r2;
    r8 = r1;
    r7 = *gptr<u32>(r13 + 0x18u);  // (from the original)
    r4 = r0;
    r6 = r3;
    r2 = r3;
    r1 = r5;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    r0 = call_006a6dbc(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    if (r7 != 0) {
        r1 = r6;
        r0 = r5;
        guest::cpu()->r[13] = r13;
        guest::cpu()->s[0] = S0;
        guest::cpu()->s[1] = S1;
        r0 = call_004e9fe8(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        S0 = guest::cpu()->s[0];
        S1 = guest::cpu()->s[1];
        *gptr<u32>(r4 + 4u) = u32(std::bit_cast<u32>(S0));
    }
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    r0 = call_002f74c8(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    r1 = r0;
    if (r0 != 0x2bu) {  // (from the original)
        r0 = 0x10000000u;  // (from the original)
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
            goto L_59aa24;
        }
    }
    S1 = std::bit_cast<float>(*gptr<u32>(0x59aaa4u));  // (from the original)
    S0 = std::bit_cast<float>(*gptr<u32>(r4)) + S1;
    *gptr<u32>(r4) = u32(std::bit_cast<u32>(S0));
L_59aa20:;
    r13 = r13 + 0x18;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    return r0;
L_59aa24:;
    r0 = u32(*gptr<u8>(0x94ee4fu));  // (from the original)
    if (r0 == 0) {
        guest::preempt();
        goto L_59aa20;
    }
    r0 = r8;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    r0 = call_002fcb9c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    if (r0 != 0) {
        guest::preempt();
        goto L_59aa20;
    }
    r0 = r8;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    r0 = call_002fccdc(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    r7 = r0;
    r0 = r8;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    r0 = call_002fcb34(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    zf = r7 == 9u;
    if (!zf) {
        zf = r0 == 0x3cu;  // (from the original)
    }
    if (!zf) {
        guest::preempt();
        goto L_59aa20;
    }
    r1 = 0x84661cu;  // (from the original)
    r0 = r1 + ((r5 << 0x1e >> 0x1d) + ((r6 & 3u) << 3) << 2);  // (from the original)
    *gptr<u32>(r4) = u32(std::bit_cast<u32>(std::bit_cast<float>(*gptr<u32>(r4)) + std::bit_cast<float>(*gptr<u32>(r0))));
    S1 = std::bit_cast<float>(*gptr<u32>(r0 + 4u));
    S0 = std::bit_cast<float>(*gptr<u32>(r4 + 8u)) + S1;
    *gptr<u32>(r4 + 8u) = u32(std::bit_cast<u32>(S0));
    r13 = r13 + 0x18;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    return r0;
}

}  // namespace d_0059a9ac
GUEST_EXPORT(0x0059a9ac, d_0059a9ac::f_0059a9ac);

// f_0059ab9c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0059ab9c {

inline constexpr guest::Function<0x00125ca8, u32(u32, u32, u32, u32)> call_00125ca8;  // (from the original)
inline constexpr guest::Function<0x005921e0, u32(u32, u32, u32, u32)> call_005921e0;  // (from the original)
inline constexpr guest::Function<0x006a5e34, u32(u32, u32, u32, u32)> call_006a5e34;  // (from the original)
inline constexpr guest::Function<0x007529d8, u32(u32, u32, u32, u32)> call_007529d8;  // (from the original)

u32 f_0059ab9c(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    guest::cpu()->r[13] -= 0x18u;  // (from the original)
    r6 = r0;
    r4 = r1;
    r8 = 0x94ee4cu;  // (from the original)
    r5 = r2;
    r7 = r3;
    r0 = *gptr<u32>(r8 + 0x14u);  // (from the original)
    if (r0 == 0) {
        goto L_59ac0c;
    }
    r0 = call_006a5e34(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    r2 = r5;
    r1 = r4;
    r0 = call_007529d8(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    if (r0 == 0) {
        goto L_59ac0c;
    }
    r3 = r7;
    r2 = r5;
    r1 = r4;
    r0 = r6;
    r0 = call_005921e0(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = r0;
    if (r0 != 0) {
        r0 = *gptr<u32>(r8 + 0x14u) + 0x3594u;  // (from the original)
        r0 = call_00125ca8(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r0 = 1u;
    }
    guest::cpu()->r[13] += 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
L_59ac0c:;
    r0 = 0u;
    guest::cpu()->r[13] += 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_0059ab9c
GUEST_EXPORT(0x0059ab9c, d_0059ab9c::f_0059ab9c);

// f_0059ac18: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0059ac18 {

inline constexpr guest::Function<0x00125ca8, u32(u32, u32, u32, u32)> call_00125ca8;  // (from the original)
inline constexpr guest::Function<0x005923fc, u32(u32, u32, u32, u32)> call_005923fc;  // (from the original)
inline constexpr guest::Function<0x006a5e34, u32(u32, u32, u32, u32)> call_006a5e34;  // (from the original)
inline constexpr guest::Function<0x007529d8, u32(u32, u32, u32, u32)> call_007529d8;  // (from the original)

u32 f_0059ac18(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    guest::cpu()->r[13] -= 0x18u;  // (from the original)
    r6 = r0;
    r4 = r1;
    r8 = 0x94ee4cu;  // (from the original)
    r5 = r2;
    r7 = r3;
    r0 = *gptr<u32>(r8 + 0x14u);  // (from the original)
    if (r0 == 0) {
        goto L_59ac88;
    }
    r0 = call_006a5e34(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    r2 = r5;
    r1 = r4;
    r0 = call_007529d8(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    if (r0 == 0) {
        goto L_59ac88;
    }
    r3 = r7;
    r2 = r5;
    r1 = r4;
    r0 = r6;
    r0 = call_005923fc(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = r0;
    if (r0 != 0) {
        r0 = *gptr<u32>(r8 + 0x14u) + 0x3594u;  // (from the original)
        r0 = call_00125ca8(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r0 = 1u;
    }
    guest::cpu()->r[13] += 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
L_59ac88:;
    r0 = 0u;
    guest::cpu()->r[13] += 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_0059ac18
GUEST_EXPORT(0x0059ac18, d_0059ac18::f_0059ac18);

// f_0059b2c4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0059b2c4 {

inline constexpr guest::Function<0x00125ca8, u32(u32, u32, u32, u32)> call_00125ca8;  // (from the original)
inline constexpr guest::Function<0x0012ca6c, u32(u32, u32, u32, u32)> call_0012ca6c;  // (from the original)
inline constexpr guest::Function<0x002f825c, u32(u32, u32, u32, u32)> call_002f825c;  // (from the original)
inline constexpr guest::Function<0x002fcb84, u32(u32, u32, u32, u32)> call_002fcb84;  // (from the original)
inline constexpr guest::Function<0x002fd108, u32(u32, u32, u32, u32)> call_002fd108;  // (from the original)
inline constexpr guest::Function<0x004ecb80, u32(u32, u32, u32, u32)> call_004ecb80;  // (from the original)
inline constexpr guest::Function<0x00590f1c, u32(u32, u32, u32, u32)> call_00590f1c;  // (from the original)
inline constexpr guest::Function<0x00591330, u32(u32, u32, u32, u32)> call_00591330;  // (from the original)

u32 f_0059b2c4(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 ea = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r9 = guest::cpu()->r[9];
    u32 r10 = guest::cpu()->r[10];
    u32 r13 = guest::cpu()->r[13];
    u32 r14 = guest::cpu()->r[14];
    ea = r13 - 0x30;  // (from the original)
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
    *gptr<u32>(ea + 0x2c) = u32(r14);  // (from the original)
    r13 = r13 - 0x38u;  // (from the original)
    r4 = r1;
    r5 = r0;
    r1 = 0x7bu;  // (from the original)
    r0 = r4;
    guest::cpu()->r[13] = r13;
    r0 = call_002fcb84(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        goto L_59b3c0;
    }
    r1 = 0x98ad14u;  // (from the original)
    r7 = r4;
    r0 = 0u;
    r9 = r13 + 0x10u;  // (from the original)
    r8 = r13 + 0x14u;  // (from the original)
    r4 = r0;
L_59b300:;
    r2 = *gptr<u32>(r1 + (r0 << 2));
    if (r2 != 0) {
        r6 = r2;
        *gptr<u32>(r1 + (r0 << 2)) = u32(r4);
        r10 = r4;
        r2 = 4u;
        r1 = r6;
        r0 = 0x144u;  // (from the original)
        guest::cpu()->r[13] = r13;
        r0 = call_002fd108(r0, r1, r2, r3);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r4 = r0;
        r1 = 0x144u;  // (from the original)
        guest::cpu()->r[13] = r13;
        r0 = call_002f825c(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r0 = r4;
        guest::cpu()->r[13] = r13;
        r0 = call_00590f1c(r0, r1, r2, r3);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r1 = 0x907970u;  // (from the original)
        *gptr<u32>(r0) = u32(r1);
        r0 = r0 + 0x124u;  // (from the original)
        guest::cpu()->r[13] = r13;
        r0 = call_004ecb80(r0, r1, r2, r3);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r4 = r0 - 0x124u;  // (from the original)
        r1 = r6;
        r0 = r0 - 0x104u;  // (from the original)
        guest::cpu()->r[13] = r13;
        r0 = call_0012ca6c(r0, r1, r2, r3);
        r3 = r8;
        r2 = r9;
        r1 = r7;
        r0 = r4;
        *gptr<u32>(r13) = u32(r10);
        guest::cpu()->r[13] = r13;
        r0 = call_00591330(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
    } else {
        r0 = r0 + 1u;
        if (r0 < 0x14u) {  // (from the original)
            guest::preempt();
            goto L_59b300;
        }
    }
    if (r4 == 0) {
        goto L_59b3c0;
    }
    r1 = r4;
    r0 = r5 + 0x35a0u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00125ca8(r0, r1, r2, r3);
    *gptr<u32>(r4 + 0x68u) = u32(*gptr<u32>(r4 + 0x68u) | 0x2400u);  // (from the original)
    r0 = r5 + 0x3500u;  // (from the original)
    r1 = u32(*gptr<u16>(r0 + 0x90u)) + 1u;  // (from the original)
    *gptr<u16>(r0 + 0x90u) = u16(r1);  // (from the original)
L_59b3c0:;
    r13 = r13 + 0x18u;  // (from the original)
    ea = r13;
    r13 = r13 + 0x20;  // (from the original)
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

}  // namespace d_0059b2c4
GUEST_EXPORT(0x0059b2c4, d_0059b2c4::f_0059b2c4);

// f_0059b61c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0059b61c {

inline constexpr guest::Function<0x002fccc4, u32(u32, u32, u32, u32)> call_002fccc4;  // (from the original)
inline constexpr guest::Function<0x002fd010, u32(u32, u32, u32, u32)> call_002fd010;  // (from the original)

u32 f_0059b61c(u32 r0) {
    u32 r1 = 0;
    u32 r2 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    r1 = 0x94ee4cu;  // (from the original)
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r2 = u32(s32(s8(*gptr<u8>(r1 + 3u))));
    r4 = *gptr<u32>(r1 + 0x14u);  // (from the original)
    r1 = 0u - r2;
    if ((r1 & r4) == 0) {
        goto L_59b68c;
    }
    r5 = r0;
    r0 = call_002fccc4(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r6 = 0u;
    if (r0 == 0) {
        goto L_59b684;
    }
    r0 = r5;
    r0 = call_002fd010(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r0 = u32(*gptr<u8>(r0 + 0xcu));  // (from the original)
    if (r0 >= 0x87u) {  // (from the original)
        goto L_59b684;
    }
    if (r0 == 0) {
        goto L_59b684;
    }
    r1 = *gptr<u32>(r4 + 0x414u);  // (from the original)
    if (r1 == 0) {
        goto L_59b68c;
    }
    r0 = r1 + (r0 + (r0 << 1) + (r0 << 3) << 1);
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
L_59b684:;
    r0 = r6;
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
L_59b68c:;
    r0 = 0u;
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_0059b61c
GUEST_EXPORT(0x0059b61c, d_0059b61c::f_0059b61c);

// f_0059baa8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0059baa8 {


u32 f_0059baa8(u32 r0, u32 r1) {
    u32 r2 = 0;
    u32 r3 = 0;
    goto L_59baa8;
L_59baa8:;
    r3 = r0;
    r0 = *gptr<u32>(0x94ee60u);  // (from the original)
    if (r0 == 0) {
        r0 = ~0u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r2 = r1;
    r1 = r3;
    return guest::call_address<u32>(*gptr<u32>(0x14fc70u), r0, r1, r2, r3);  // (from the original)
}

}  // namespace d_0059baa8
GUEST_EXPORT(0x0059baa8, d_0059baa8::f_0059baa8);

// f_0059c090: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0059c090 {

inline constexpr guest::Function<0x002f74c8, u32(u32, u32, u32, u32)> call_002f74c8;  // (from the original)
inline constexpr guest::Function<0x002f74e0, u32(u32, u32, u32, u32)> call_002f74e0;  // (from the original)
inline constexpr guest::Function<0x002fcb34, u32(u32, u32, u32, u32)> call_002fcb34;  // (from the original)
inline constexpr guest::Function<0x002fcb9c, u32(u32, u32, u32, u32)> call_002fcb9c;  // (from the original)
inline constexpr guest::Function<0x002fccdc, u32(u32, u32, u32, u32)> call_002fccdc;  // (from the original)
inline constexpr guest::Function<0x0057ba08, u32(u32, u32, u32, u32)> call_0057ba08;  // (from the original)
inline constexpr guest::Function<0x005c33cc, u32(u32, u32, u32, u32)> call_005c33cc;  // (from the original)
inline constexpr guest::Function<0x006a6dbc, u32(u32, u32, u32, u32)> call_006a6dbc;  // (from the original)

u32 f_0059c090(u32 r0, u32 r1, u32 r2, u32 r3, float S0, float S1) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r9 = guest::cpu()->r[9];
    u32 r13 = guest::cpu()->r[13];
    u32 zf = 0;
    r13 = r13 - 0x28u;  // (from the original)
    r4 = r0;
    r7 = r1;
    r0 = *gptr<u32>(r13 + 0x28u);  // (from the original)
    r5 = r2;
    r6 = r3;
    r1 = 0u;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    r0 = call_005c33cc(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r3 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    if (r0 == 0) {
        goto L_59c18c;
    }
    r9 = r0 + 0x14u;  // (from the original)
    r0 = r13;
    r2 = r6;
    r1 = r5;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    r0 = call_006a6dbc(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    r0 = call_002f74c8(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    r1 = r0;
    if (r0 != 0x2bu) {  // (from the original)
        r0 = 0x10000000u;  // (from the original)
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
            goto L_59c104;
        }
    }
    S1 = std::bit_cast<float>(*gptr<u32>(0x59c198u));  // (from the original)
    S0 = std::bit_cast<float>(*gptr<u32>(r13)) + S1;
    *gptr<u32>(r13) = u32(std::bit_cast<u32>(S0));
    goto L_59c180;
L_59c104:;
    if (u32(*gptr<u8>(0x94ee4fu)) == 0) {  // (from the original)
        goto L_59c180;
    }
    r0 = r7;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    r0 = call_002fcb9c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    if (r0 != 0) {
        goto L_59c180;
    }
    r0 = r7;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    r0 = call_002fccdc(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    r8 = r0;
    r0 = r7;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    r0 = call_002fcb34(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    zf = r8 == 9u;
    if (!zf) {
        zf = r0 == 0x3cu;  // (from the original)
    }
    if (!zf) {
        goto L_59c180;
    }
    r2 = r6 & 3u;
    r0 = 0x84661cu + ((r5 << 0x1e >> 0x1d) + (r2 << 3) << 2);  // (from the original)
    *gptr<u32>(r13) = u32(std::bit_cast<u32>(std::bit_cast<float>(*gptr<u32>(r13)) + std::bit_cast<float>(*gptr<u32>(r0))));
    S1 = std::bit_cast<float>(*gptr<u32>(r0 + 4u));
    S0 = std::bit_cast<float>(*gptr<u32>(r13 + 8u)) + S1;
    *gptr<u32>(r13 + 8u) = u32(std::bit_cast<u32>(S0));
L_59c180:;
    r1 = r13;
    r0 = r9;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    r0 = call_0057ba08(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
L_59c18c:;
    *gptr<u16>(r4) = u16(r0);
    r13 = r13 + 0x28u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    return r0;
}

}  // namespace d_0059c090
GUEST_EXPORT(0x0059c090, d_0059c090::f_0059c090);

// f_0059c7a8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0059c7a8 {


u32 f_0059c7a8(u32 r0, u32 r1, u32 r2) {
    u32 r3 = 0;
    u32 r12 = 0;
    goto L_59c7a8;
L_59c7a8:;
    r12 = r0;
    r0 = *gptr<u32>(0x94ee60u);  // (from the original)
    if (r0 == 0) {
        guest::cpu()->r[1] = r1;
        return r0;
    }
    if (r2 + 1u == 0) {
        r0 = 0u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r3 = r2;
    r2 = r1;
    r1 = r12;
    return guest::call_address<u32>(*gptr<u32>(0x14fc78u), r0, r1, r2, r3);  // (from the original)
}

}  // namespace d_0059c7a8
GUEST_EXPORT(0x0059c7a8, d_0059c7a8::f_0059c7a8);

// f_0059c7e0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0059c7e0 {

struct __attribute__((packed)) Object_0059c7e0_0 {
    u8 unknown_0[0x20];  // (not used here)
    u32 word_20;
    u8 unknown_24[0x43c];  // (not used here)
    u32 word_460;
    u8 unknown_464[0x4154];  // (not used here)
    u8 byte_45b8;
};
GUEST_OFFSET(Object_0059c7e0_0, word_20, 0x20);  // (from the original)
GUEST_OFFSET(Object_0059c7e0_0, word_460, 0x460);  // (from the original)
GUEST_OFFSET(Object_0059c7e0_0, byte_45b8, 0x45b8);  // (from the original)

inline constexpr guest::Function<0x0031758c, u32(u32, u32, u32, u32)> call_0031758c;  // (from the original)

u32 f_0059c7e0(gptr<Object_0059c7e0_0> arg0, u32 r1) {
    u32 r0 = arg0.addr();
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
    u32 zf = 0;
    r4 = r0;
    r13 = r13 - 0x40u;  // (from the original)
    r0 = arg0->word_20;
    if (r0 != 0) {
        goto L_59c8d4;
    }
    r0 = 0x94ee94u;  // (from the original)
    r7 = r4 + 0x45b8u;  // (from the original)
    r10 = 0u;
    arg0->byte_45b8 = u8(r10);
    r1 = r0 - 0x48u;  // (from the original)
    *gptr<u32>(r0) = u32(r10);
    *gptr<u32>(r0 + 4u) = u32(r10);
    r5 = 0x9047f8u;  // (from the original)
    r11 = 1u;
    zf = u32(s32(s8(*gptr<u8>(r1 + 3u)))) == 0;
    if (zf) {
        r8 = 0x100400u;  // (from the original)
    } else {
        r9 = 0x1e000u;  // (from the original)
        r8 = r9 + 0x1f0000u;  // (from the original)
    }
    r6 = *gptr<u32>(0x952c3cu);  // (from the original)
    if (zf) {
        r9 = 0xdc00u;  // (from the original)
        goto L_59c880;
    }
    *gptr<u32>(r1 + 0xcu) = u32(r10);  // (from the original)
    r2 = r6;
    r0 = r4 + 0x45cu;  // (from the original)
    if (arg0->word_460 != 0) {
        goto L_59c880;
    }
    r3 = r13 + 0x10u;  // (from the original)
    *gptr<u32>(r13 + 0x10u) = u32(r5);  // (from the original)
    *gptr<u32>(r13 + 0x14u) = u32(0x846a1cu);  // (from the original)
    r1 = 0x19800u;  // (from the original)
    *gptr<u32>(r13 + 4u) = u32(r10);
    *gptr<u32>(r13) = u32(r11);
    guest::cpu()->r[13] = r13;
    r0 = call_0031758c(r0, r1, r2, r3);
L_59c880:;
    r3 = r13 + 8u;
    r2 = r6;
    *gptr<u32>(r13 + 0xcu) = u32(0x846ac8u);  // (from the original)
    r1 = r9;
    r0 = r4 + 0x14u;  // (from the original)
    *gptr<u32>(r13 + 8u) = u32(r5);
    *gptr<u32>(r13 + 4u) = u32(r10);
    *gptr<u32>(r13) = u32(r11);
    guest::cpu()->r[13] = r13;
    r0 = call_0031758c(r0, r1, r2, r3);
    r3 = r13 + 8u;
    r2 = r6;
    *gptr<u32>(r13 + 0xcu) = u32(0x846ab4u);  // (from the original)
    r1 = r8;
    r0 = r4 + 0x1cu;  // (from the original)
    *gptr<u32>(r13 + 8u) = u32(r5);
    *gptr<u32>(r13 + 4u) = u32(r10);
    *gptr<u32>(r13) = u32(r11);
    guest::cpu()->r[13] = r13;
    r0 = call_0031758c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    *gptr<u8>(r7) = u8(r11);
L_59c8d4:;
    r13 = r13 + 0x40u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_0059c7e0
GUEST_EXPORT(0x0059c7e0, d_0059c7e0::f_0059c7e0);

// f_0059cae8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0059cae8 {

inline constexpr guest::Function<0x002fa9d0, u32(u32, u32, u32, u32)> call_002fa9d0;  // (from the original)
inline constexpr guest::Function<0x002fb328, u32(u32, u32, u32, u32)> call_002fb328;  // (from the original)
inline constexpr guest::Function<0x004a6bb8, u32(u32, u32, u32, u32)> call_004a6bb8;  // (from the original)
inline constexpr guest::Function<0x004f2ef0, u32(u32, u32, u32, u32)> call_004f2ef0;  // (from the original)
inline constexpr guest::Function<0x00736a1c, u32(u32, u32, u32, u32)> call_00736a1c;  // (from the original)

u32 f_0059cae8(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 ea = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r13 = guest::cpu()->r[13];
    u32 zf = 0;
    *gptr<u32>(r13 + 0xffffffe0u) = u32(r3);  // (from the original)
    r13 = r13 - 0x20;  // (from the original)
    r4 = r0;
    r7 = r2;
    r5 = r3;
    r0 = r0 + 0x13cu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_004a6bb8(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    ea = r0 + 0xc0u;  // (from the original)
    r0 = ea;
    r1 = *gptr<u32>(ea);
    r8 = 0u;
    if (r1 == 0) {
        r0 = r8;
    } else {
        r0 = r0 + r1;
    }
    if (r0 == 0) {
        r6 = 0u;
        goto L_59cb30;
    }
    ea = r0 + 0x28u;  // (from the original)
    r0 = ea;
    r1 = *gptr<u32>(ea);
    if (r1 == 0) {
        r6 = r8;
    } else {
        r6 = r1 + r0;
    }
L_59cb30:;
    guest::cpu()->r[13] = r13;
    r0 = call_002fb328(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r5 = *gptr<u32>(r5 + ((u32(*gptr<u8>(r0 + 0x621ceu)) & 0xfu) << 2));  // (from the original)
    r0 = *gptr<u32>(r4 + 0x13cu);  // (from the original)
    r4 = r13;
    ea = r0 + 0x28u;  // (from the original)
    r0 = ea;
    r1 = *gptr<u32>(ea);
    if (r1 == 0) {
        r0 = r8;
    } else {
        r0 = r0 + r1;
    }
    zf = r0 == 0;
    if (!zf) {
        zf = r5 == 0;
    }
    *gptr<u32>(r13) = u32(r0);
    if (zf) {
        goto L_59cbac;
    }
    r0 = r5;
    guest::cpu()->r[13] = r13;
    r0 = call_002fa9d0(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    r2 = r0;
    r1 = r5;
    r0 = r4;
    guest::cpu()->r[13] = r13;
    r0 = call_00736a1c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    if (r0 == 0) {
        goto L_59cbac;
    }
    ea = r0 + 0xcu;  // (from the original)
    r0 = ea;
    r1 = *gptr<u32>(ea);
    if (r1 == 0) {
        r2 = r8;
    } else {
        r2 = r1 + r0;
    }
    goto L_59cbb0;
L_59cbac:;
    r2 = 0u;
L_59cbb0:;
    if (r2 != 0) {
        r1 = r7;
        r0 = r6;
        ea = r13;
        r13 = r13 + 0x20;  // (from the original)
        r3 = *gptr<u32>(ea);
        guest::cpu()->r[13] = r13;
        return call_004f2ef0(r0, r1, r2, r3);
    }
    r13 = r13 + 0x20;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_0059cae8
GUEST_EXPORT(0x0059cae8, d_0059cae8::f_0059cae8);

// f_0059cd24: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0059cd24 {

inline constexpr guest::Function<0x00125ca8, u32(u32, u32, u32, u32)> call_00125ca8;  // (from the original)
inline constexpr guest::Function<0x0012ca6c, u32(u32, u32, u32, u32)> call_0012ca6c;  // (from the original)
inline constexpr guest::Function<0x002f825c, u32(u32, u32, u32, u32)> call_002f825c;  // (from the original)
inline constexpr guest::Function<0x002fd108, u32(u32, u32, u32, u32)> call_002fd108;  // (from the original)
inline constexpr guest::Function<0x00305f44, u32(u32, u32, u32, u32)> call_00305f44;  // (from the original)
inline constexpr guest::Function<0x0058fe4c, u32(u32, u32, u32, u32)> call_0058fe4c;  // (from the original)
inline constexpr guest::Function<0x00590720, u32(u32, u32, u32, u32)> call_00590720;  // (from the original)
inline constexpr guest::Function<0x00590f1c, u32(u32, u32, u32, u32)> call_00590f1c;  // (from the original)
inline constexpr guest::Function<0x0059c090, u32(u32, u32, u32, u32)> call_0059c090;  // (from the original)
inline constexpr guest::Function<0x005a2624, u32(u32, u32, u32, u32)> call_005a2624;  // (from the original)
inline constexpr guest::Function<0x005a2670, u32(u32, u32, u32, u32)> call_005a2670;  // (from the original)
inline constexpr guest::Function<0x006a5e34, u32(u32, u32, u32, u32)> call_006a5e34;  // (from the original)
inline constexpr guest::Function<0x007529d8, u32(u32, u32, u32, u32)> call_007529d8;  // (from the original)

u32 f_0059cd24(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 ea = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r9 = guest::cpu()->r[9];
    u32 r13 = guest::cpu()->r[13];
    u32 r14 = guest::cpu()->r[14];
    ea = r13 - 0x28;  // (from the original)
    *gptr<u32>(ea) = u32(r0);
    *gptr<u32>(ea + 4) = u32(r1);
    *gptr<u32>(ea + 8) = u32(r2);
    *gptr<u32>(ea + 0xc) = u32(r4);  // (from the original)
    *gptr<u32>(ea + 0x10) = u32(r5);  // (from the original)
    *gptr<u32>(ea + 0x14) = u32(r6);  // (from the original)
    *gptr<u32>(ea + 0x18) = u32(r7);  // (from the original)
    *gptr<u32>(ea + 0x1c) = u32(r8);  // (from the original)
    *gptr<u32>(ea + 0x20) = u32(r9);  // (from the original)
    *gptr<u32>(ea + 0x24) = u32(r14);  // (from the original)
    r13 = r13 - 0x30u;  // (from the original)
    r4 = r0;
    r8 = 0u;
    r7 = 0x94ee4cu;  // (from the original)
    ea = r13 + 0xcu;  // (from the original)
    r5 = *gptr<u32>(ea);
    r6 = *gptr<u32>(ea + 4);
    r0 = *gptr<u32>(r7 + 0x14u);  // (from the original)
    if (r0 == 0) {
        goto L_59cd94;
    }
    guest::cpu()->r[13] = r13;
    r0 = call_006a5e34(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    r2 = r6;
    r1 = r5;
    guest::cpu()->r[13] = r13;
    r0 = call_007529d8(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        goto L_59cd94;
    }
    *gptr<u16>(r13 + 4u) = u16(r8);
    guest::cpu()->r[13] = r13;
    r0 = call_00305f44(r0, r1, r2, r3);
    ea = r13;
    *gptr<u32>(ea) = u32(r0);
    r1 = r4;
    ea = r13 + 0xcu;  // (from the original)
    r2 = *gptr<u32>(ea);
    r3 = *gptr<u32>(ea + 4);
    r0 = r13 + 4u;
    guest::cpu()->r[13] = r13;
    r0 = call_0059c090(r0, r1, r2, r3);
    r1 = 0x98a47cu;  // (from the original)
    r3 = 0x226u;  // (from the original)
    r6 = r4;
    r0 = 0u;
    goto L_59cda0;
L_59cd94:;
    r0 = 0u;
L_59cd98:;
    r13 = r13 + 0x14u;  // (from the original)
    ea = r13;
    r13 = r13 + 0x1c;  // (from the original)
    r4 = *gptr<u32>(ea);
    r5 = *gptr<u32>(ea + 4);
    r6 = *gptr<u32>(ea + 8);
    r7 = *gptr<u32>(ea + 0xc);  // (from the original)
    r8 = *gptr<u32>(ea + 0x10);  // (from the original)
    r9 = *gptr<u32>(ea + 0x14);  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[4] = r4;
    guest::cpu()->r[5] = r5;
    guest::cpu()->r[6] = r6;
    guest::cpu()->r[7] = r7;
    guest::cpu()->r[8] = r8;
    guest::cpu()->r[9] = r9;
    guest::cpu()->r[13] = r13;
    return r0;
L_59cda0:;
    r2 = *gptr<u32>(r1 + (r0 << 2));
    if (r2 != 0) {
        r9 = r8;
        r8 = r2;
        *gptr<u32>(r1 + (r0 << 2)) = u32(r9);
        r2 = 4u;
        r1 = r8;
        r0 = 0x128u;  // (from the original)
        guest::cpu()->r[13] = r13;
        r0 = call_002fd108(r0, r1, r2, r3);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r4 = r0;
        r1 = 0x128u;  // (from the original)
        guest::cpu()->r[13] = r13;
        r0 = call_002f825c(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r0 = r4;
        guest::cpu()->r[13] = r13;
        r0 = call_00590f1c(r0, r1, r2, r3);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r5 = r0 + 0x126u;  // (from the original)
        *gptr<u32>(r0) = u32(0x907bd0u);  // (from the original)
        r4 = r0;
        *gptr<u16>(0x124u + r0) = u16(r9);  // (from the original)
        r1 = r8;
        r0 = r0 + 0x20u;  // (from the original)
        *gptr<u16>(r5) = u16(r9);
        guest::cpu()->r[13] = r13;
        r0 = call_0012ca6c(r0, r1, r2, r3);
        ea = r13;
        *gptr<u32>(ea) = u32(r9);
        r1 = r6;
        r0 = r4;
        ea = r13 + 0xcu;  // (from the original)
        r2 = *gptr<u32>(ea);
        r3 = *gptr<u32>(ea + 4);
        guest::cpu()->r[13] = r13;
        r0 = call_00590720(r0, r1, r2, r3);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r1 = u32(*gptr<u16>(r13 + 4u));
        *gptr<u16>(r4 + 0x124u) = u16(r1);  // (from the original)
        r0 = r4;
        *gptr<u16>(r5) = u16(r9);
        guest::cpu()->r[13] = r13;
        r0 = call_0058fe4c(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r0 = r4;
    } else {
        r0 = r0 + 1u;
        if (r0 < r3) {
            guest::preempt();
            goto L_59cda0;
        }
        r0 = r8;
    }
    if (r0 == 0) {
        guest::preempt();
        goto L_59cd98;
    }
    r1 = r0;
    r0 = *gptr<u32>(r7 + 0x14u) + 0x3594u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00125ca8(r0, r1, r2, r3);
    r4 = r13 + 0xcu;  // (from the original)
    r0 = *gptr<u32>(r7 + 0x14u);  // (from the original)
    r1 = *gptr<u32>(r4);
    r2 = *gptr<u32>(r4 + 4);
    r3 = 0u;
    guest::cpu()->r[13] = r13;
    r0 = call_005a2670(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    r1 = *gptr<u32>(r4);
    r2 = *gptr<u32>(r4 + 4);
    r0 = *gptr<u32>(r7 + 0x14u) + 0x35c4u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_005a2624(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r13 = r13 + 0x14u;  // (from the original)
    r0 = 1u;
    ea = r13;
    r13 = r13 + 0x1c;  // (from the original)
    r4 = *gptr<u32>(ea);
    r5 = *gptr<u32>(ea + 4);
    r6 = *gptr<u32>(ea + 8);
    r7 = *gptr<u32>(ea + 0xc);  // (from the original)
    r8 = *gptr<u32>(ea + 0x10);  // (from the original)
    r9 = *gptr<u32>(ea + 0x14);  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[4] = r4;
    guest::cpu()->r[5] = r5;
    guest::cpu()->r[6] = r6;
    guest::cpu()->r[7] = r7;
    guest::cpu()->r[8] = r8;
    guest::cpu()->r[9] = r9;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_0059cd24
GUEST_EXPORT(0x0059cd24, d_0059cd24::f_0059cd24);

// f_0059ec48: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0059ec48 {


u32 f_0059ec48() {
    u32 res = 0;
    u32 r0 = 0;
    u32 r1 = 0;
    u32 r2 = 0;
    u32 nf = 0;
    u32 zf = 0;
    u32 vf = 0;
    r1 = 0x9b417cu;  // (from the original)
    r0 = 0u;
L_59ec50:;
    r2 = r1 + (r0 + (r0 << 3) << 1);
    if (u32(*gptr<u8>(r2 + 0xfu)) == 0) {  // (from the original)
        goto L_59eca4;
    }
    r2 = u32(*gptr<u8>(r2 + 0xeu));  // (from the original)
    res = r2 - 0x17u;  // (from the original)
    nf = res >> 0x1f;  // (from the original)
    zf = res == 0;
    vf = ((r2 ^ 0x17u) & (r2 ^ res)) >> 0x1f;  // (from the original)
    if (zf) {
        guest::cpu()->r[1] = r1;
        return r0;
    }
    if (!(!zf && nf == vf)) {
        zf = r2 == 2u;
        if (!zf) {
            zf = r2 == 4u;
        }
        if (zf) {
            guest::cpu()->r[1] = r1;
            return r0;
        }
        zf = r2 == 5u;
        if (!zf) {
            zf = r2 == 0x15u;  // (from the original)
        }
        if (zf) {
            guest::cpu()->r[1] = r1;
            return r0;
        }
        goto L_59eca4;
    }
    zf = r2 == 0x18u;  // (from the original)
    if (!zf) {
        zf = r2 == 0x19u;  // (from the original)
    }
    if (zf) {
        guest::cpu()->r[1] = r1;
        return r0;
    }
    if (r2 == 0x1au) {  // (from the original)
        guest::cpu()->r[1] = r1;
        return r0;
    }
L_59eca4:;
    r0 = r0 + 1u;
    if (s32(r0) < s32(4u)) {
        guest::preempt();
        goto L_59ec50;
    }
    r0 = ~0u;
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_0059ec48
GUEST_EXPORT(0x0059ec48, d_0059ec48::f_0059ec48);

// f_0059ecbc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0059ecbc {

inline constexpr guest::Function<0x002f74c8, u32(u32, u32, u32, u32)> call_002f74c8;  // (from the original)
inline constexpr guest::Function<0x002f74e0, u32(u32, u32, u32, u32)> call_002f74e0;  // (from the original)
inline constexpr guest::Function<0x002fc8e8, u32(u32, u32, u32, u32)> call_002fc8e8;  // (from the original)
inline constexpr guest::Function<0x002fc900, u32(u32, u32, u32, u32)> call_002fc900;  // (from the original)
inline constexpr guest::Function<0x002fcb84, u32(u32, u32, u32, u32)> call_002fcb84;  // (from the original)
inline constexpr guest::Function<0x002fcbb0, u32(u32, u32, u32, u32)> call_002fcbb0;  // (from the original)
inline constexpr guest::Function<0x0030b6c4, u32(u32, u32, u32, u32)> call_0030b6c4;  // (from the original)
inline constexpr guest::Function<0x00599ca0, u32(u32, u32, u32, u32)> call_00599ca0;  // (from the original)
inline constexpr guest::Function<0x0059f4d8, u32(u32, u32, u32, u32)> call_0059f4d8;  // (from the original)
inline constexpr guest::Function<0x0059f7c8, u32(u32, u32, u32, u32)> call_0059f7c8;  // (from the original)
inline constexpr guest::Function<0x005a064c, u32(u32, u32, u32, u32)> call_005a064c;  // (from the original)
inline constexpr guest::Function<0x006249b0, u32(u32, u32, u32, u32)> call_006249b0;  // (from the original)
inline constexpr guest::Function<0x006b9b5c, u32(u32, u32, u32, u32)> call_006b9b5c;  // (from the original)
inline constexpr guest::Function<0x00768ba8, u32(u32, u32, u32, u32)> call_00768ba8;  // (from the original)

u32 f_0059ecbc(u32 r0, u32 r1, u32 r2) {
    u32 res = 0;
    u32 r3 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r13 = guest::cpu()->r[13];
    u32 nf = 0;
    u32 zf = 0;
    u32 vf = 0;
    r5 = r0;
    r3 = 0x9b417cu;  // (from the original)
    r13 = r13 - 0x28u;  // (from the original)
    r4 = r3 + (r1 + (r1 << 3) << 1);
    r0 = r1 + (r1 << 3);
    r1 = u32(*gptr<u8>(r4 + 0xeu));  // (from the original)
    r0 = u32(*gptr<u8>(r3 + (r0 << 1) + 0x11u));  // (from the original)
    zf = r1 == 2u;
    if (!zf) {
        zf = r2 == 0;
    }
    if (zf) {
        r0 = r0 & ~2u;
    } else {
        r0 = r0 | 2u;
    }
    *gptr<u8>(r4 + 0x11u) = u8(r0);  // (from the original)
    r0 = u32(*gptr<u8>(r4 + 0xeu));  // (from the original)
    res = r0 - 0x17u;  // (from the original)
    nf = res >> 0x1f;  // (from the original)
    zf = res == 0;
    vf = ((r0 ^ 0x17u) & (r0 ^ res)) >> 0x1f;  // (from the original)
    if (zf) {
        goto L_59ed38;
    }
    if (!(!zf && nf == vf)) {
        zf = r0 == 2u;
        if (!zf) {
            zf = r0 == 4u;
        }
        if (!zf) {
            zf = r0 == 5u;
        }
        if (zf) {
            goto L_59edec;
        }
        if (r0 == 0x15u) {  // (from the original)
            goto L_59ed38;
        }
        r13 = r13 + 0x28u;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    zf = r0 == 0x18u;  // (from the original)
    if (!zf) {
        zf = r0 == 0x19u;  // (from the original)
    }
    if (!zf) {
        zf = r0 == 0x1au;  // (from the original)
    }
    if (!zf) {
        r13 = r13 + 0x28u;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return r0;
    }
L_59ed38:;
    *gptr<u8>(r4 + 0xeu) = u8(0xbu);  // (from the original)
    r1 = r5;
    r0 = r4 + 4u;
    guest::cpu()->r[13] = r13;
    r0 = call_002fc8e8(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r4 + 4u;
    guest::cpu()->r[13] = r13;
    r0 = call_006b9b5c(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = r5;
    r0 = r4 + 8u;
    guest::cpu()->r[13] = r13;
    r0 = call_002fc8e8(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r4 + 8u;
    guest::cpu()->r[13] = r13;
    r0 = call_006b9b5c(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = r4 + 8u;
    r0 = r4 + 4u;
    guest::cpu()->r[13] = r13;
    r0 = call_00599ca0(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
L_59ed7c:;
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_005a064c(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    r2 = 6u;
    r1 = r4;
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_0059f7c8(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r4 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_002fc900(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 != 0) {
        guest::cpu()->r[13] = r13;
        r0 = call_0030b6c4(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        if (r0 == 0) {
            goto L_59eeac;
        }
    }
    r0 = r4;
    guest::cpu()->r[13] = r13;
    r0 = call_0059f4d8(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
L_59edc4:;
    r0 = r13;
    r13 = r13 + 0x28u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
L_59edec:;
    *gptr<u8>(r4 + 0xeu) = u8(0xau);  // (from the original)
    r1 = r5;
    r0 = r4 + 4u;
    guest::cpu()->r[13] = r13;
    r0 = call_002fc8e8(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = r5;
    r0 = r4 + 8u;
    guest::cpu()->r[13] = r13;
    r0 = call_002fc8e8(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r4 + 4u;
    guest::cpu()->r[13] = r13;
    r0 = call_00768ba8(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        r1 = 0xc9u;  // (from the original)
        r0 = r4 + 4u;
        guest::cpu()->r[13] = r13;
        r0 = call_002fcb84(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        if (r0 == 0) {
            goto L_59ee44;
        }
    }
    r0 = 0xcu;  // (from the original)
    *gptr<u8>(r4 + 0xeu) = u8(r0);  // (from the original)
L_59ee44:;
    guest::cpu()->r[13] = r13;
    r0 = call_002f74c8(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = r0;
    r0 = 4u;
    guest::cpu()->r[13] = r13;
    r0 = call_002f74e0(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        guest::preempt();
        goto L_59ed7c;
    }
    r1 = 0x339fu;  // (from the original)
    r0 = r5;
    guest::cpu()->r[13] = r13;
    r0 = call_002fcb84(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        guest::preempt();
        goto L_59ed7c;
    }
    r1 = 0x33a0u;  // (from the original)
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_002fcbb0(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = r0;
    r0 = r4 + 4u;
    guest::cpu()->r[13] = r13;
    r0 = call_002fc8e8(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    guest::preempt();
    goto L_59ed7c;
L_59eeac:;
    r2 = r4;
    r1 = 0u;
    r3 = 0x16u;  // (from the original)
    r0 = 0x3au;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_006249b0(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    guest::preempt();
    goto L_59edc4;
}

}  // namespace d_0059ecbc
GUEST_EXPORT(0x0059ecbc, d_0059ecbc::f_0059ecbc);

// f_0059f194: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0059f194 {

inline constexpr guest::Function<0x002fc8e8, u32(u32, u32, u32, u32)> call_002fc8e8;  // (from the original)
inline constexpr guest::Function<0x002fc900, u32(u32, u32, u32, u32)> call_002fc900;  // (from the original)
inline constexpr guest::Function<0x0030b6c4, u32(u32, u32, u32, u32)> call_0030b6c4;  // (from the original)
inline constexpr guest::Function<0x0059f4d8, u32(u32, u32, u32, u32)> call_0059f4d8;  // (from the original)
inline constexpr guest::Function<0x0059f7c8, u32(u32, u32, u32, u32)> call_0059f7c8;  // (from the original)
inline constexpr guest::Function<0x005a064c, u32(u32, u32, u32, u32)> call_005a064c;  // (from the original)
inline constexpr guest::Function<0x006249b0, u32(u32, u32, u32, u32)> call_006249b0;  // (from the original)

u32 f_0059f194(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 ea = 0;
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
    r13 = r13 - 0x50u;  // (from the original)
    r5 = 0u;
    ea = r13 + 0x50u;  // (from the original)
    r6 = *gptr<u32>(ea);
    r7 = *gptr<u32>(ea + 4);
    r8 = *gptr<u32>(ea + 8);
    r9 = *gptr<u32>(ea + 0xc);  // (from the original)
    r10 = *gptr<u32>(ea + 0x10);  // (from the original)
    r11 = *gptr<u32>(ea + 0x14);  // (from the original)
    r0 = 0x9b417cu;  // (from the original)
L_59f1ac:;
    if (u32(*gptr<u8>(r0 + (r5 + (r5 << 3) << 1) + 0xfu)) != 0) {  // (from the original)
        r5 = r5 + 1u;
        if (s32(r5) < s32(4u)) {
            guest::preempt();
            goto L_59f1ac;
        }
        r5 = ~0u;
        goto L_59f2ec;
    }
    if (r5 + 1u == 0) {
        goto L_59f2ec;
    }
    r2 = r5 + (r5 << 3);
    r4 = r0 + (r2 << 1);
    r0 = r4;
    guest::cpu()->r[13] = r13;
    r0 = call_002fc8e8(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = *gptr<u32>(r13 + 0x24u);  // (from the original)
    r0 = r4 + 4u;
    guest::cpu()->r[13] = r13;
    r0 = call_002fc8e8(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = *gptr<u32>(r13 + 0x28u);  // (from the original)
    r0 = r4 + 8u;
    guest::cpu()->r[13] = r13;
    r0 = call_002fc8e8(r0, r1, r2, r3);
    r0 = 2u;
    r12 = r0 & r9 << 1;
    r3 = 0x1cu & r10 << 2;  // (from the original)
    r9 = (u32(*gptr<u8>(r4 + 0x11u)) & ~1u | r8 & 1u) & ~2u;  // (from the original)
    r10 = *gptr<u32>(r13 + 0x68u);  // (from the original)
    *gptr<u8>(r4 + 0xcu) = u8(r6);  // (from the original)
    r3 = (r3 | (r12 | r9) & ~0x1cu) & ~0x20u;  // (from the original)
    *gptr<u8>(r4 + 0xdu) = u8(r7);  // (from the original)
    *gptr<u8>(r4 + 0xfu) = u8(1u);  // (from the original)
    r2 = (0x20u & r11 << 5 | r3) & ~0xc0u;  // (from the original)
    r8 = 0xc0u & r10 << 6;  // (from the original)
    *gptr<u8>(r4 + 0xeu) = u8(*gptr<u32>(r13 + 0x1cu));  // (from the original)
    *gptr<u8>(r4 + 0x11u) = u8(r2 | r8);  // (from the original)
    r1 = u32(*gptr<u8>(r4 + 0xeu));  // (from the original)
    if (r1 == 0x10u) {  // (from the original)
        *gptr<u8>(r4 + 0xfu) = u8(r0);  // (from the original)
        goto L_59f2ec;
    }
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_005a064c(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    r2 = 0u;
    r1 = r4;
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_0059f7c8(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r4 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_002fc900(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 != 0) {
        guest::cpu()->r[13] = r13;
        r0 = call_0030b6c4(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        if (r0 == 0) {
            goto L_59f2f8;
        }
    }
    r0 = r4;
    guest::cpu()->r[13] = r13;
    r0 = call_0059f4d8(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
L_59f2cc:;
L_59f2ec:;
    r13 = r13 + 0x2cu;  // (from the original)
    r0 = r5;
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
L_59f2f8:;
    r2 = r4;
    r1 = 0u;
    r3 = 0x16u;  // (from the original)
    r0 = 0x3au;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_006249b0(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    guest::preempt();
    goto L_59f2cc;
}

}  // namespace d_0059f194
GUEST_EXPORT(0x0059f194, d_0059f194::f_0059f194);

// f_0059f71c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0059f71c {

inline constexpr guest::Function<0x002fc8e8, u32(u32, u32, u32, u32)> call_002fc8e8;  // (from the original)
inline constexpr guest::Function<0x00305f44, u32(u32, u32, u32, u32)> call_00305f44;  // (from the original)

u32 f_0059f71c(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r9 = guest::cpu()->r[9];
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 0x20;  // (from the original)
    r4 = r0;
    r8 = r1;
    r5 = r2;
    r9 = 0x95bfdcu;  // (from the original)
    r7 = *gptr<u32>(r13 + 0x20u);  // (from the original)
    r6 = r3;
    guest::cpu()->r[13] = r13;
    r0 = call_00305f44(r0, r1, r2, r3);
    *gptr<u8>(r4 + 0xcu) = u8(u32(*gptr<u8>(r4 + 0xcu)) & ~3u | r0 & 3u);  // (from the original)
    r3 = u32(*gptr<u8>(r4 + 0xcu));  // (from the original)
    r2 = u32(*gptr<u8>(r4 + 0xeu));  // (from the original)
    r1 = u32(*gptr<u8>(r4 + 0xdu));  // (from the original)
    *gptr<u8>(r4 + 0x13u) = u8(r5);  // (from the original)
    *gptr<u8>(r4 + 0x14u) = u8(r6);  // (from the original)
    *gptr<u8>(r4 + 0xeu) = u8(r2 & ~1u);  // (from the original)
    r3 = r3 & ~0xfcu | 0x84u;  // (from the original)
    r0 = u32(*gptr<u8>(r4 + 0xeu)) & ~0x1eu;  // (from the original)
    *gptr<u8>(r4 + 0xcu) = u8(r3);  // (from the original)
    r2 = r0 & ~0xe0u;  // (from the original)
    *gptr<u8>(r4 + 0xdu) = u8(r1 & ~3u & 0xc3u | 0xcu);  // (from the original)
    r0 = r4;
    r1 = r9;
    *gptr<u8>(r4 + 0xeu) = u8(r2);  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002fc8e8(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = r8;
    r0 = r4 + 4u;
    guest::cpu()->r[13] = r13;
    r0 = call_002fc8e8(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = r9;
    r0 = r4 + 8u;
    guest::cpu()->r[13] = r13;
    r0 = call_002fc8e8(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    *gptr<u8>(r4 + 0x12u) = u8(r7);  // (from the original)
    r13 = r13 + 0x20;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_0059f71c
GUEST_EXPORT(0x0059f71c, d_0059f71c::f_0059f71c);

// f_0059f7c8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0059f7c8 {

inline constexpr guest::Function<0x002f74c8, u32(u32, u32, u32, u32)> call_002f74c8;  // (from the original)
inline constexpr guest::Function<0x002fc8e8, u32(u32, u32, u32, u32)> call_002fc8e8;  // (from the original)
inline constexpr guest::Function<0x00305f44, u32(u32, u32, u32, u32)> call_00305f44;  // (from the original)

u32 f_0059f7c8(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r4 = r0;
    r5 = r1;
    r6 = r2;
    r0 = call_00305f44(r0, r1, r2, r3);
    r0 = r0 & 3u | u32(*gptr<u8>(r4 + 0xcu)) & ~3u;  // (from the original)
    *gptr<u8>(r4 + 0xcu) = u8(r0);  // (from the original)
    r2 = 0x3cu & r6 << 2;  // (from the original)
    r6 = r0 & ~0xfcu;  // (from the original)
    r0 = u32(*gptr<u8>(r4 + 0xdu)) & ~3u | u32(*gptr<u8>(r5 + 0x10u)) & 3u;  // (from the original)
    r3 = r0 & ~0x3cu;  // (from the original)
    *gptr<u8>(r4 + 0xdu) = u8(r0);  // (from the original)
    r2 = r2 | r3;
    *gptr<u8>(r4 + 0xcu) = u8(0xfcu & u32(*gptr<u8>(r5 + 0xeu)) << 2 | r6);  // (from the original)
    *gptr<u8>(r4 + 0xdu) = u8(r2);  // (from the original)
    r1 = r5;
    *gptr<u8>(r4 + 0xeu) = u8(u32(*gptr<u8>(r5 + 0x11u)));  // (from the original)
    *gptr<u8>(r4 + 0x13u) = u8(u32(*gptr<u8>(r5 + 0xcu)));  // (from the original)
    *gptr<u8>(r4 + 0x14u) = u8(u32(*gptr<u8>(r5 + 0xdu)));  // (from the original)
    r0 = r4;
    r0 = call_002fc8e8(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = r5 + 4u;
    r0 = r4 + 4u;
    r0 = call_002fc8e8(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = r5 + 8u;
    r0 = r4 + 8u;
    r0 = call_002fc8e8(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = call_002f74c8(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    *gptr<u8>(r4 + 0x12u) = u8(r0);  // (from the original)
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_0059f7c8
GUEST_EXPORT(0x0059f7c8, d_0059f7c8::f_0059f7c8);
