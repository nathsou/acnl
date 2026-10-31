// Functions decompiled by tools/decomp (docs/decomp.md), each proved equal to the recompiled original (prove-cpp). The
// names are generated (d_<address>::f_<address>, Object_<address>_<argument>, word_<offset>) and still to be chosen.
#include "guest/guest.hpp"

#include <bit>

using guest::gptr;

// f_005921e0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005921e0 {

inline guest::global<u32, 0x005922cc> global_005922cc;  // (from the original)
inline constexpr guest::Function<0x0012ca6c, u32(u32, u32, u32, u32)> call_0012ca6c;  // (from the original)
inline constexpr guest::Function<0x002f825c, u32(u32, u32, u32, u32)> call_002f825c;  // (from the original)
inline constexpr guest::Function<0x002fd108, u32(u32, u32, u32, u32)> call_002fd108;  // (from the original)
inline constexpr guest::Function<0x00582e4c, u32(u32, u32, u32, u32)> call_00582e4c;  // (from the original)
inline constexpr guest::Function<0x0058fe4c, u32(u32, u32, u32, u32)> call_0058fe4c;  // (from the original)
inline constexpr guest::Function<0x00590720, u32(u32, u32, u32, u32)> call_00590720;  // (from the original)
inline constexpr guest::Function<0x00590f1c, u32(u32, u32, u32, u32)> call_00590f1c;  // (from the original)

u32 f_005921e0(u32 r0, u32 r1, u32 r2, u32 r3, float S0) {
    u32 r5 = guest::cpu()->r[5];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r9 = guest::cpu()->r[9];
    u32 r13 = guest::cpu()->r[13];
    u32 r3_1 = 0;
    u32 r0_1 = 0;
    u32 r2_1 = 0;
    u32 r3_2 = 0;
    float S0_1 = 0;
    u32 r1_1 = 0;
    u32 r2_2 = 0;
    u32 r3_3 = 0;
    float S0_2 = 0;
    u32 r0_2 = 0;
    u32 r2_3 = 0;
    u32 r3_4 = 0;
    float S0_3 = 0;
    u32 r0_3 = 0;
    float S0_4 = 0;
    u32 r1_2 = 0;
    u32 r2_4 = 0;
    u32 r3_5 = 0;
    float S0_5 = 0;
    u32 r1_3 = 0;
    u32 r1_4 = 0;
    float S0_6 = 0;
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
        r3_1 = *gptr<u32>(r1 + (r0 << 2));
        if (!(r3_1 == 0)) {
            *gptr<u32>(r1 + (r0 << 2)) = u32(0u);
            guest::cpu()->r[13] = r13;
            guest::cpu()->s[0] = S0;
            r0_1 = call_002fd108(0x128u, r3_1, 4u, r3_1);  // (from the original)
            r2_1 = guest::cpu()->r[2];
            r3_2 = guest::cpu()->r[3];
            S0_1 = guest::cpu()->s[0];
            guest::cpu()->r[13] = r13;
            guest::cpu()->s[0] = S0_1;
            call_002f825c(r0_1, 0x128u, r2_1, r3_2);  // (from the original)
            r1_1 = guest::cpu()->r[1];
            r2_2 = guest::cpu()->r[2];
            r3_3 = guest::cpu()->r[3];
            S0_2 = guest::cpu()->s[0];
            guest::cpu()->r[13] = r13;
            guest::cpu()->s[0] = S0_2;
            r0_2 = call_00590f1c(r0_1, r1_1, r2_2, r3_3);
            r2_3 = guest::cpu()->r[2];
            r3_4 = guest::cpu()->r[3];
            S0_3 = guest::cpu()->s[0];
            *gptr<u32>(r0_2) = u32(0x907a40u);  // (from the original)
            r0_3 = r0_2 + 0x20u;  // (from the original)
            guest::cpu()->r[13] = r13;
            guest::cpu()->s[0] = S0_3;
            call_0012ca6c(r0_3, r3_1, r2_3, r3_4);
            S0_4 = guest::cpu()->s[0];
            *gptr<u32>(r13) = u32(0u);
            guest::cpu()->r[13] = r13;
            guest::cpu()->s[0] = S0_4;
            call_00590720(r0_2, r7, r8, r9);
            r1_2 = guest::cpu()->r[1];
            r2_4 = guest::cpu()->r[2];
            r3_5 = guest::cpu()->r[3];
            S0_5 = guest::cpu()->s[0];
            *gptr<u8>(r0_2 + 0x124u) = u8(0u);  // (from the original)
            if (!(r5 == 0)) {
                r1_3 = r0_2 + 0x40u;  // (from the original)
                guest::cpu()->r[13] = r13;
                guest::cpu()->s[0] = S0_5;
                call_00582e4c(0x100062eu, r1_3, r0_2, 1u);  // (from the original)
                r1_2 = guest::cpu()->r[1];
                r2_4 = guest::cpu()->r[2];
                r3_5 = guest::cpu()->r[3];
                S0_5 = guest::cpu()->s[0];
            }
            guest::cpu()->r[13] = r13;
            guest::cpu()->s[0] = S0_5;
            call_0058fe4c(r0_2, r1_2, r2_4, r3_5);
            r1_4 = guest::cpu()->r[1];
            S0_6 = std::bit_cast<float>(*global_005922cc);
            *gptr<u32>(r0_2 + 0xf8u) = u32(std::bit_cast<u32>(S0_6));  // (from the original)
            r13 = r13 + 0x28;  // (from the original)
            guest::cpu()->r[1] = r1_4;
            guest::cpu()->r[13] = r13;
            guest::cpu()->s[0] = S0_6;
            return r0_2;
        }
        r0 = r0 + 1u;
        guest::preempt();
    } while (r0 < r2);
    r13 = r13 + 0x28;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    return 0u;
}

}  // namespace d_005921e0
GUEST_EXPORT(0x005921e0, d_005921e0::f_005921e0);

// f_005923fc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005923fc {

inline guest::global<u32, 0x00592538> global_00592538;  // (from the original)
inline guest::global<u32, 0x0059253c> global_0059253c;  // (from the original)
inline guest::global<u32, 0x00592540> global_00592540;  // (from the original)
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
    u32 r5 = guest::cpu()->r[5];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r9 = guest::cpu()->r[9];
    u32 r13 = guest::cpu()->r[13];
    u32 r3_1 = 0;
    u32 r0_1 = 0;
    u32 r2_1 = 0;
    u32 r3_2 = 0;
    float S0_1 = 0;
    float S1_1 = 0;
    float S2_1 = 0;
    u32 r1_1 = 0;
    u32 r2_2 = 0;
    u32 r3_3 = 0;
    float S0_2 = 0;
    float S1_2 = 0;
    float S2_2 = 0;
    u32 r0_2 = 0;
    u32 r2_3 = 0;
    u32 r3_4 = 0;
    float S0_3 = 0;
    float S1_3 = 0;
    float S2_3 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r2_4 = 0;
    u32 r3_5 = 0;
    float S0_4 = 0;
    float S1_4 = 0;
    float S2_4 = 0;
    u32 r4_1 = 0;
    u32 r0_5 = 0;
    float S0_5 = 0;
    float S1_5 = 0;
    float S2_5 = 0;
    u32 r2_5 = 0;
    u32 r3_6 = 0;
    float S0_6 = 0;
    u32 r0_6 = 0;
    u32 r0_7 = 0;
    u32 r1_2 = 0;
    u32 r2_6 = 0;
    u32 r3_7 = 0;
    float S0_7 = 0;
    float S1_6 = 0;
    float S2_6 = 0;
    u32 r0_8 = 0;
    u32 r2_7 = 0;
    u32 r3_8 = 0;
    float S0_8 = 0;
    float S1_7 = 0;
    float S2_7 = 0;
    u32 r0_9 = 0;
    u32 r0_10 = 0;
    u32 r1_3 = 0;
    float S0_9 = 0;
    float S1_8 = 0;
    float S2_8 = 0;
    u32 r3_9 = 0;
    float S1_9 = 0;
    float S0_10 = 0;
    u32 r1_4 = 0;
    u32 r0_11 = 0;
    u32 r1_5 = 0;
    u32 r2_8 = 0;
    u32 r3_10 = 0;
    float S0_11 = 0;
    float S1_10 = 0;
    float S2_9 = 0;
    u32 r0_12 = 0;
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
        r3_1 = *gptr<u32>(r1 + (r0 << 2));
        if (!(r3_1 == 0)) {
            *gptr<u32>(r1 + (r0 << 2)) = u32(0u);
            guest::cpu()->r[13] = r13;
            guest::cpu()->s[0] = S0;
            guest::cpu()->s[1] = S1;
            guest::cpu()->s[2] = S2;
            r0_1 = call_002fd108(0x154u, r3_1, 4u, r3_1);  // (from the original)
            r2_1 = guest::cpu()->r[2];
            r3_2 = guest::cpu()->r[3];
            S0_1 = guest::cpu()->s[0];
            S1_1 = guest::cpu()->s[1];
            S2_1 = guest::cpu()->s[2];
            guest::cpu()->r[13] = r13;
            guest::cpu()->s[0] = S0_1;
            guest::cpu()->s[1] = S1_1;
            guest::cpu()->s[2] = S2_1;
            call_002f825c(r0_1, 0x154u, r2_1, r3_2);  // (from the original)
            r1_1 = guest::cpu()->r[1];
            r2_2 = guest::cpu()->r[2];
            r3_3 = guest::cpu()->r[3];
            S0_2 = guest::cpu()->s[0];
            S1_2 = guest::cpu()->s[1];
            S2_2 = guest::cpu()->s[2];
            guest::cpu()->r[13] = r13;
            guest::cpu()->s[0] = S0_2;
            guest::cpu()->s[1] = S1_2;
            guest::cpu()->s[2] = S2_2;
            r0_2 = call_00590f1c(r0_1, r1_1, r2_2, r3_3);
            r2_3 = guest::cpu()->r[2];
            r3_4 = guest::cpu()->r[3];
            S0_3 = guest::cpu()->s[0];
            S1_3 = guest::cpu()->s[1];
            S2_3 = guest::cpu()->s[2];
            *gptr<u32>(r0_2) = u32(0x907a70u);  // (from the original)
            r0_3 = r0_2 + 0x124u;  // (from the original)
            guest::cpu()->r[13] = r13;
            guest::cpu()->s[0] = S0_3;
            guest::cpu()->s[1] = S1_3;
            guest::cpu()->s[2] = S2_3;
            r0_4 = call_00614568(r0_3, 0x907a70u, r2_3, r3_4);  // (from the original)
            r2_4 = guest::cpu()->r[2];
            r3_5 = guest::cpu()->r[3];
            S0_4 = guest::cpu()->s[0];
            S1_4 = guest::cpu()->s[1];
            S2_4 = guest::cpu()->s[2];
            r4_1 = r0_4 - 0x124u;  // (from the original)
            r0_5 = r0_4 - 0x104u;  // (from the original)
            guest::cpu()->r[13] = r13;
            guest::cpu()->s[0] = S0_4;
            guest::cpu()->s[1] = S1_4;
            guest::cpu()->s[2] = S2_4;
            call_0012ca6c(r0_5, r3_1, r2_4, r3_5);
            S0_5 = guest::cpu()->s[0];
            S1_5 = guest::cpu()->s[1];
            S2_5 = guest::cpu()->s[2];
            *gptr<u32>(r13) = u32(0u);
            guest::cpu()->r[13] = r13;
            guest::cpu()->s[0] = S0_5;
            guest::cpu()->s[1] = S1_5;
            guest::cpu()->s[2] = S2_5;
            call_00590720(r4_1, r7, r8, r9);
            r2_5 = guest::cpu()->r[2];
            r3_6 = guest::cpu()->r[3];
            S0_6 = std::bit_cast<float>(*global_00592538);
            *gptr<u8>(r4_1 + 0x150u) = u8(0u);  // (from the original)
            r0_6 = r13 + 4u;
            *gptr<u8>(r4_1 + 0x151u) = u8(r5);  // (from the original)
            *gptr<u32>(r0_6) = u32(std::bit_cast<u32>(S0_6));
            *gptr<u32>(r0_6 + 4) = u32(std::bit_cast<u32>(S0_6));
            *gptr<u32>(r0_6 + 8) = u32(std::bit_cast<u32>(S0_6));
            r0_7 = r4_1 + 0x58u;  // (from the original)
            guest::cpu()->r[13] = r13;
            guest::cpu()->s[0] = S0_6;
            guest::cpu()->s[1] = S0_6;
            guest::cpu()->s[2] = S0_6;
            call_004ee3e8(r0_7, r0_6, r2_5, r3_6);
            r1_2 = guest::cpu()->r[1];
            r2_6 = guest::cpu()->r[2];
            r3_7 = guest::cpu()->r[3];
            S0_7 = guest::cpu()->s[0];
            S1_6 = guest::cpu()->s[1];
            S2_6 = guest::cpu()->s[2];
            r0_8 = r4_1 + 0x58u;  // (from the original)
            guest::cpu()->r[13] = r13;
            guest::cpu()->s[0] = S0_7;
            guest::cpu()->s[1] = S1_6;
            guest::cpu()->s[2] = S2_6;
            call_004edd20(r0_8, r1_2, r2_6, r3_7);
            r2_7 = guest::cpu()->r[2];
            r3_8 = guest::cpu()->r[3];
            S0_8 = guest::cpu()->s[0];
            S1_7 = guest::cpu()->s[1];
            S2_7 = guest::cpu()->s[2];
            r0_9 = r4_1 + 0x64u;  // (from the original)
            guest::cpu()->r[13] = r13;
            guest::cpu()->s[0] = S0_8;
            guest::cpu()->s[1] = S1_7;
            guest::cpu()->s[2] = S2_7;
            r0_10 = call_002fcb84(r0_9, 0x9eu, r2_7, r3_8);  // (from the original)
            r1_3 = guest::cpu()->r[1];
            S0_9 = guest::cpu()->s[0];
            S1_8 = guest::cpu()->s[1];
            S2_8 = guest::cpu()->s[2];
            if (!(r0_10 == 0)) {
                r3_9 = ~0x80000000u;  // (from the original)
                S1_9 = std::bit_cast<float>(*global_0059253c);
                S0_10 = std::bit_cast<float>(*global_00592540);
                r1_4 = r4_1 + 0x40u;  // (from the original)
                r0_11 = r4_1 + 0x124u;  // (from the original)
                guest::cpu()->r[13] = r13;
                guest::cpu()->s[0] = S0_10;
                guest::cpu()->s[1] = S1_9;
                guest::cpu()->s[2] = S2_8;
                call_006f7e10(r0_11, r1_4, 4u, r3_9);
                r1_5 = guest::cpu()->r[1];
                r2_8 = guest::cpu()->r[2];
                r3_10 = guest::cpu()->r[3];
                S0_11 = guest::cpu()->s[0];
                S1_10 = guest::cpu()->s[1];
                S2_9 = guest::cpu()->s[2];
                r0_12 = r4_1 + 0x124u;  // (from the original)
                guest::cpu()->r[13] = r13;
                guest::cpu()->s[0] = S0_11;
                guest::cpu()->s[1] = S1_10;
                guest::cpu()->s[2] = S2_9;
                call_00614730(r0_12, r1_5, r2_8, r3_10);
                r1_3 = guest::cpu()->r[1];
                S0_9 = guest::cpu()->s[0];
                S1_8 = guest::cpu()->s[1];
            }
            r13 = r13 + 0x30u;  // (from the original)
            guest::cpu()->r[1] = r1_3;
            guest::cpu()->r[13] = r13;
            guest::cpu()->s[0] = S0_9;
            guest::cpu()->s[1] = S1_8;
            return r4_1;
        }
        r0 = r0 + 1u;
        guest::preempt();
    } while (r0 < r2);
    r13 = r13 + 0x30u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    return 0u;
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
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r0_5 = 0;
    u32 r0_6 = 0;
    u32 r5_1 = 0;
    u32 r0_7 = 0;
    u32 r0_8 = 0;
    u32 r1_2 = 0;
    u32 r1_3 = 0;
    u32 r1_4 = 0;
    u32 r1_5 = 0;
    u32 r3_2 = 0;
    u32 r1_6 = 0;
    u32 r0_9 = 0;
    u32 r0_10 = 0;
    u32 r0_11 = 0;
    u32 r1_7 = 0;
    u32 r2_2 = 0;
    u32 r3_3 = 0;
    u32 r0_12 = 0;
    u32 r2_3 = 0;
    u32 r3_4 = 0;
    u32 r5_2 = 0;
    u32 r3_5 = 0;
    u32 r1_8 = 0;
    u32 r0_13 = 0;
    u32 r0_14 = 0;
    u32 r1_9 = 0;
    u32 r0_15 = 0;
    u32 r1_10 = 0;
    u32 r1_11 = 0;
    u32 r0_16 = 0;
    u32 r1_12 = 0;
    u32 r1_13 = 0;
    u32 r0_17 = 0;
    u32 r1_14 = 0;
    u32 r1_15 = 0;
    u32 r0_18 = 0;
    u32 r1_16 = 0;
    *gptr<u32>(r13 + 0xffffffe8u) = u32(r3);  // (from the original)
    r13 = r13 - 0x18;  // (from the original)
    r0_1 = u32(arg0->byte_16f);
    if (r0_1 >= 8u) {
        goto L_592ae8;
    }
    r0_2 = r0_1 + 1u & 0xffu;  // (from the original)
    arg0->byte_16f = u8(r0_2);
    if (r0_2 != 8u) {
        goto L_592ae8;
    }
    r0_3 = r0 + 0x64u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_4 = call_002fccdc(r0_3, r1, r2, r3);
    r1_1 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    r0_5 = r0 + 0x64u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_6 = call_002fd010(r0_5, r1_1, r2_1, r3_1);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0_6 == 0) {
        goto L_592ae8;
    }
    r5_1 = u32(s32(s8(*gptr<u8>(r0_6 + 0xdu))));  // (from the original)
    if (r0_4 != 4u) {
        if (r0_4 == 6u) {
            goto L_592aac;
        }
        if (r0_4 == 8u) {
            goto L_592a88;
        }
        if (r0_4 != 0x19u) {  // (from the original)
            goto L_592ae8;
        }
        goto L_592ad0;
    }
    r0_7 = r0 + 0x64u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_8 = call_002fcb84(r0_7, 6u, r2, r3);
    if (r0_8 != 0) {
        r1_2 = r0 + 0x40u;  // (from the original)
        *gptr<u32>(r13) = u32(0u);
        guest::cpu()->r[13] = r13;
        call_00582e9c(0x1000637u, r1_2, r0, r5_1);  // (from the original)
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        goto L_592ae8;
    }
    r1_3 = r0 + 0x40u;  // (from the original)
    *gptr<u32>(r13) = u32(0u);
    guest::cpu()->r[13] = r13;
    call_00582e9c(0x100062fu, r1_3, r0, r5_1);  // (from the original)
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    goto L_592ae8;
L_592a88:;
    r1_4 = r0 + 0x40u;  // (from the original)
    *gptr<u32>(r13) = u32(0u);
    guest::cpu()->r[13] = r13;
    call_00582e9c(0x1000631u, r1_4, r0, r5_1);  // (from the original)
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    goto L_592ae8;
L_592aac:;
    r1_5 = r0 + 0x40u;  // (from the original)
    *gptr<u32>(r13) = u32(0u);
    guest::cpu()->r[13] = r13;
    call_00582e9c(0x1000633u, r1_5, r0, r5_1);  // (from the original)
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    goto L_592ae8;
L_592ad0:;
    r3_2 = r5_1 + 1u;
    r1_6 = r0 + 0x40u;  // (from the original)
    *gptr<u32>(r13) = u32(0u);
    guest::cpu()->r[13] = r13;
    call_00582e9c(0x1000635u, r1_6, r0, r3_2);  // (from the original)
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
L_592ae8:;
    r0_9 = u32(*gptr<u8>(r0 + 0x121u));  // (from the original)
    if (r0_9 != 0xau) {  // (from the original)
        r13 = r13 + 0x18;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return r0_9;
    }
    r0_10 = r0 + 0x64u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_11 = call_002fccdc(r0_10, r1, r2, r3);
    r1_7 = guest::cpu()->r[1];
    r2_2 = guest::cpu()->r[2];
    r3_3 = guest::cpu()->r[3];
    r0_12 = r0 + 0x64u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_9 = call_002fd010(r0_12, r1_7, r2_2, r3_3);
    r1 = guest::cpu()->r[1];
    r2_3 = guest::cpu()->r[2];
    r3_4 = guest::cpu()->r[3];
    if (r0_9 == 0) {
        r13 = r13 + 0x18;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return r0_9;
    }
    r5_2 = u32(s32(s8(*gptr<u8>(r0_9 + 0xdu))));  // (from the original)
    if (r0_11 == 4u) {
        goto L_592b54;
    }
    if (r0_11 == 6u) {
        goto L_592bb8;
    }
    if (r0_11 == 8u) {
        goto L_592b9c;
    }
    if (r0_11 != 0x19u) {  // (from the original)
        r13 = r13 + 0x18;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return r0_9;
    }
    r3_5 = r5_2 + 1u;
    r1_8 = r0 + 0x40u;  // (from the original)
    *gptr<u32>(r13) = u32(0u);
    guest::cpu()->r[13] = r13;
    r0_9 = call_00582e9c(0x1000636u, r1_8, r0, r3_5);  // (from the original)
    r1 = guest::cpu()->r[1];
    r13 = r13 + 0x18;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0_9;
L_592b54:;
    r0_13 = r0 + 0x64u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_14 = call_002fcb84(r0_13, 6u, r2_3, r3_4);
    if (r0_14 != 0) {
        r1_9 = r0 + 0x40u;  // (from the original)
        *gptr<u32>(r13) = u32(0u);
        guest::cpu()->r[13] = r13;
        r0_15 = call_00582e9c(0x1000638u, r1_9, r0, r5_2);  // (from the original)
        r1_10 = guest::cpu()->r[1];
        r13 = r13 + 0x18;  // (from the original)
        guest::cpu()->r[1] = r1_10;
        guest::cpu()->r[13] = r13;
        return r0_15;
    }
    r1_11 = r0 + 0x40u;  // (from the original)
    *gptr<u32>(r13) = u32(0u);
    guest::cpu()->r[13] = r13;
    r0_16 = call_00582e9c(0x1000630u, r1_11, r0, r5_2);  // (from the original)
    r1_12 = guest::cpu()->r[1];
    r13 = r13 + 0x18;  // (from the original)
    guest::cpu()->r[1] = r1_12;
    guest::cpu()->r[13] = r13;
    return r0_16;
L_592b9c:;
    r1_13 = r0 + 0x40u;  // (from the original)
    *gptr<u32>(r13) = u32(0u);
    guest::cpu()->r[13] = r13;
    r0_17 = call_00582e9c(0x1000632u, r1_13, r0, r5_2);  // (from the original)
    r1_14 = guest::cpu()->r[1];
    r13 = r13 + 0x18;  // (from the original)
    guest::cpu()->r[1] = r1_14;
    guest::cpu()->r[13] = r13;
    return r0_17;
L_592bb8:;
    r1_15 = r0 + 0x40u;  // (from the original)
    *gptr<u32>(r13) = u32(0u);
    guest::cpu()->r[13] = r13;
    r0_18 = call_00582e9c(0x1000634u, r1_15, r0, r5_2);  // (from the original)
    r1_16 = guest::cpu()->r[1];
    r13 = r13 + 0x18;  // (from the original)
    guest::cpu()->r[1] = r1_16;
    guest::cpu()->r[13] = r13;
    return r0_18;
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
    u32 r13 = guest::cpu()->r[13];
    u32 r5_1 = 0;
    u32 r7_1 = 0;
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r2_2 = 0;
    u32 r3_2 = 0;
    u32 zf_1 = 0;
    u32 r4_1 = 0;
    u32 res_1 = 0;
    u32 nf_1 = 0;
    u32 zf_2 = 0;
    u32 vf_1 = 0;
    u32 r1_2 = 0;
    u32 r3_3 = 0;
    u32 r1_3 = 0;
    u32 r0_2 = 0;
    u32 r1_4 = 0;
    u32 r0_3 = 0;
    u32 r1_5 = 0;
    u32 r0_4 = 0;
    u32 r1_6 = 0;
    u32 r1_7 = 0;
    u32 r0_5 = 0;
    u32 r1_8 = 0;
    u32 r1_9 = 0;
    u32 r0_6 = 0;
    u32 r1_10 = 0;
    u32 r1_11 = 0;
    u32 r0_7 = 0;
    u32 r1_12 = 0;
    u32 r3_4 = 0;
    u32 r1_13 = 0;
    u32 r0_8 = 0;
    u32 r1_14 = 0;
    u32 r1_15 = 0;
    u32 r0_9 = 0;
    u32 r1_16 = 0;
    u32 r1_17 = 0;
    u32 r0_10 = 0;
    u32 r1_18 = 0;
    u32 r1_19 = 0;
    u32 r0_11 = 0;
    u32 r1_20 = 0;
    *gptr<u32>(r13 + 0xffffffe0u) = u32(r3);  // (from the original)
    r13 = r13 - 0x20;  // (from the original)
    r5_1 = r0;
    r7_1 = r1;
    guest::cpu()->r[13] = r13;
    r0_1 = call_002fccdc(r1, r1, r2, r3);
    r1_1 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0 = call_002fd010(r7_1, r1_1, r2_1, r3_1);
    r1 = guest::cpu()->r[1];
    r2_2 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    if (r0 == 0) {
        goto L_593824;
    }
    zf_1 = r2 == 1u;
    r4_1 = u32(s32(s8(*gptr<u8>(r0 + 0xdu))));  // (from the original)
    if (zf_1) {
        goto L_593828;
    }
    res_1 = r0_1 - 8u;
    nf_1 = res_1 >> 0x1f;  // (from the original)
    zf_2 = res_1 == 0;
    vf_1 = ((r0_1 ^ 8u) & (r0_1 ^ res_1)) >> 0x1f;  // (from the original)
    if (zf_2) {
        goto L_593940;
    }
    if (!zf_2 && nf_1 == vf_1) {
        goto L_5938e0;
    }
    if (r0_1 == 4u) {
        goto L_59390c;
    }
    if (r0_1 != 6u) {
        goto L_593824;
    }
    r1_2 = r5_1 + 0x40u;  // (from the original)
    *gptr<u32>(r13) = u32(0u);
    guest::cpu()->r[13] = r13;
    r0 = call_00582e9c(0x10005f2u, r1_2, r5_1, r4_1);  // (from the original)
    r1 = guest::cpu()->r[1];
L_593824:;
    r13 = r13 + 0x20;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
L_593828:;
    if (r0_1 != 4u) {
        if (r0_1 == 6u) {
            goto L_5938c4;
        }
        if (r0_1 == 8u) {
            goto L_5938a8;
        }
        if (r0_1 != 0x19u) {  // (from the original)
            guest::preempt();
            goto L_593824;
        }
        r3_3 = r4_1 + 1u;
        r1_3 = r5_1 + 0x40u;  // (from the original)
        *gptr<u32>(r13) = u32(0u);
        guest::cpu()->r[13] = r13;
        r0_2 = call_00582e9c(0x10005f5u, r1_3, r5_1, r3_3);  // (from the original)
        r1_4 = guest::cpu()->r[1];
        r13 = r13 + 0x20;  // (from the original)
        guest::cpu()->r[1] = r1_4;
        guest::cpu()->r[13] = r13;
        return r0_2;
    }
    guest::cpu()->r[13] = r13;
    r0_3 = call_002fcb84(r7_1, 6u, r2_2, r3_2);
    if (r0_3 != 0) {
        r1_5 = r5_1 + 0x40u;  // (from the original)
        *gptr<u32>(r13) = u32(0u);
        guest::cpu()->r[13] = r13;
        r0_4 = call_00582e9c(0x10005f8u, r1_5, r5_1, r4_1);  // (from the original)
        r1_6 = guest::cpu()->r[1];
        r13 = r13 + 0x20;  // (from the original)
        guest::cpu()->r[1] = r1_6;
        guest::cpu()->r[13] = r13;
        return r0_4;
    }
    r1_7 = r5_1 + 0x40u;  // (from the original)
    *gptr<u32>(r13) = u32(0u);
    guest::cpu()->r[13] = r13;
    r0_5 = call_00582e9c(0x10005efu, r1_7, r5_1, r4_1);  // (from the original)
    r1_8 = guest::cpu()->r[1];
    r13 = r13 + 0x20;  // (from the original)
    guest::cpu()->r[1] = r1_8;
    guest::cpu()->r[13] = r13;
    return r0_5;
L_5938a8:;
    r1_9 = r5_1 + 0x40u;  // (from the original)
    *gptr<u32>(r13) = u32(0u);
    guest::cpu()->r[13] = r13;
    r0_6 = call_00582e9c(0x10005f1u, r1_9, r5_1, r4_1);  // (from the original)
    r1_10 = guest::cpu()->r[1];
    r13 = r13 + 0x20;  // (from the original)
    guest::cpu()->r[1] = r1_10;
    guest::cpu()->r[13] = r13;
    return r0_6;
L_5938c4:;
    r1_11 = r5_1 + 0x40u;  // (from the original)
    *gptr<u32>(r13) = u32(0u);
    guest::cpu()->r[13] = r13;
    r0_7 = call_00582e9c(0x10005f3u, r1_11, r5_1, r4_1);  // (from the original)
    r1_12 = guest::cpu()->r[1];
    r13 = r13 + 0x20;  // (from the original)
    guest::cpu()->r[1] = r1_12;
    guest::cpu()->r[13] = r13;
    return r0_7;
L_5938e0:;
    if (r0_1 == 0x17u) {  // (from the original)
        goto L_59395c;
    }
    if (r0_1 != 0x19u) {  // (from the original)
        guest::preempt();
        goto L_593824;
    }
    r3_4 = r4_1 + 1u;
    r1_13 = r5_1 + 0x40u;  // (from the original)
    *gptr<u32>(r13) = u32(0u);
    guest::cpu()->r[13] = r13;
    r0_8 = call_00582e9c(0x10005f4u, r1_13, r5_1, r3_4);  // (from the original)
    r1_14 = guest::cpu()->r[1];
    r13 = r13 + 0x20;  // (from the original)
    guest::cpu()->r[1] = r1_14;
    guest::cpu()->r[13] = r13;
    return r0_8;
L_59390c:;
    guest::cpu()->r[13] = r13;
    r0 = call_002fcb84(r7_1, 6u, r2_2, r3_2);
    r1 = guest::cpu()->r[1];
    if (r0 != 0) {
        guest::preempt();
        goto L_593824;
    }
    r1_15 = r5_1 + 0x40u;  // (from the original)
    *gptr<u32>(r13) = u32(0u);
    guest::cpu()->r[13] = r13;
    r0_9 = call_00582e9c(0x10005eeu, r1_15, r5_1, r4_1);  // (from the original)
    r1_16 = guest::cpu()->r[1];
    r13 = r13 + 0x20;  // (from the original)
    guest::cpu()->r[1] = r1_16;
    guest::cpu()->r[13] = r13;
    return r0_9;
L_593940:;
    r1_17 = r5_1 + 0x40u;  // (from the original)
    *gptr<u32>(r13) = u32(0u);
    guest::cpu()->r[13] = r13;
    r0_10 = call_00582e9c(0x10005f0u, r1_17, r5_1, r4_1);  // (from the original)
    r1_18 = guest::cpu()->r[1];
    r13 = r13 + 0x20;  // (from the original)
    guest::cpu()->r[1] = r1_18;
    guest::cpu()->r[13] = r13;
    return r0_10;
L_59395c:;
    r1_19 = r5_1 + 0x40u;  // (from the original)
    *gptr<u32>(r13) = u32(0u);
    guest::cpu()->r[13] = r13;
    r0_11 = call_00582e9c(0x10005f6u, r1_19, r5_1, r4_1);  // (from the original)
    r1_20 = guest::cpu()->r[1];
    r13 = r13 + 0x20;  // (from the original)
    guest::cpu()->r[1] = r1_20;
    guest::cpu()->r[13] = r13;
    return r0_11;
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
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r9 = guest::cpu()->r[9];
    u32 r10 = guest::cpu()->r[10];
    u32 r11 = guest::cpu()->r[11];
    u32 r13 = guest::cpu()->r[13];
    u32 r2_1 = 0;
    u32 r0_1 = 0;
    u32 r2_2 = 0;
    u32 r3_1 = 0;
    u32 r1_1 = 0;
    u32 r2_3 = 0;
    u32 r3_2 = 0;
    u32 r0_2 = 0;
    u32 r2_4 = 0;
    u32 r3_3 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r1_2 = 0;
    u32 r2_5 = 0;
    u32 r3_4 = 0;
    u32 r0_5 = 0;
    u32 r0_6 = 0;
    u32 r1_3 = 0;
    u32 r2_6 = 0;
    u32 r3_5 = 0;
    u32 r0_7 = 0;
    u32 r0_8 = 0;
    u32 r2_7 = 0;
    u32 r3_6 = 0;
    u32 r4_1 = 0;
    u32 r0_9 = 0;
    u32 r1_4 = 0;
    u32 r2_8 = 0;
    u32 r3_7 = 0;
    u32 r0_10 = 0;
    u32 r1_5 = 0;
    u32 r2_9 = 0;
    u32 r3_8 = 0;
    u32 res_1 = 0;
    u32 r1_6 = 0;
    u32 r0_11 = 0;
    u32 r1_7 = 0;
    u32 r0_12 = 0;
    u32 r1_8 = 0;
    u32 r2_10 = 0;
    u32 r3_9 = 0;
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
        r2_1 = *gptr<u32>(r1 + (r0 << 2));
        if (!(r2_1 == 0)) {
            *gptr<u32>(r1 + (r0 << 2)) = u32(0u);
            guest::cpu()->r[13] = r13;
            r0_1 = call_002fd108(0x170u, r2_1, 4u, r3);  // (from the original)
            r2_2 = guest::cpu()->r[2];
            r3_1 = guest::cpu()->r[3];
            guest::cpu()->r[13] = r13;
            call_002f825c(r0_1, 0x170u, r2_2, r3_1);  // (from the original)
            r1_1 = guest::cpu()->r[1];
            r2_3 = guest::cpu()->r[2];
            r3_2 = guest::cpu()->r[3];
            guest::cpu()->r[13] = r13;
            r0_2 = call_00590f1c(r0_1, r1_1, r2_3, r3_2);
            r2_4 = guest::cpu()->r[2];
            r3_3 = guest::cpu()->r[3];
            *gptr<u32>(r0_2) = u32(0x907ad0u);  // (from the original)
            r0_3 = r0_2 + 0x124u;  // (from the original)
            guest::cpu()->r[13] = r13;
            r0_4 = call_004ecf18(r0_3, 0x907ad0u, r2_4, r3_3);  // (from the original)
            r1_2 = guest::cpu()->r[1];
            r2_5 = guest::cpu()->r[2];
            r3_4 = guest::cpu()->r[3];
            r0_5 = r0_4 + 0x18u;  // (from the original)
            guest::cpu()->r[13] = r13;
            r0_6 = call_003166a8(r0_5, r1_2, r2_5, r3_4);
            r1_3 = guest::cpu()->r[1];
            r2_6 = guest::cpu()->r[2];
            r3_5 = guest::cpu()->r[3];
            r0_7 = r0_6 + 0x18u;  // (from the original)
            guest::cpu()->r[13] = r13;
            r0_8 = call_003166a8(r0_7, r1_3, r2_6, r3_5);
            r2_7 = guest::cpu()->r[2];
            r3_6 = guest::cpu()->r[3];
            r4_1 = r0_8 - 0x154u;  // (from the original)
            r0_9 = r0_8 - 0x134u;  // (from the original)
            guest::cpu()->r[13] = r13;
            call_0012ca6c(r0_9, r2_1, r2_7, r3_6);
            *gptr<u32>(r13) = u32(r6);
            guest::cpu()->r[13] = r13;
            call_00593470(r4_1, r11, r9, r10);
            r1_4 = guest::cpu()->r[1];
            r2_8 = guest::cpu()->r[2];
            r3_7 = guest::cpu()->r[3];
            if (r5 == 0) {
                goto L_593cb0;
            }
            guest::cpu()->r[13] = r13;
            r0_10 = call_001e5e88(1u, r1_4, r2_8, r3_7);
            r1_5 = guest::cpu()->r[1];
            r2_9 = guest::cpu()->r[2];
            r3_8 = guest::cpu()->r[3];
            res_1 = r0_10 - 0x13u;  // (from the original)
            if (res_1 >> 0x1f == ((r0_10 ^ 0x13u) & (r0_10 ^ res_1)) >> 0x1f) {  // (from the original)
                goto L_593ccc;
            }
            r1_6 = r13 + 8u;
            guest::cpu()->r[13] = r13;
            r0_11 = call_00592c14(r4_1, r1_6, r2_9, r3_8);
            if (!(r0_11 == 0)) {
                *gptr<u32>(r13) = u32(1u);
                *gptr<u32>(r13 + 4) = u32(0u);
                r1_7 = r13 + 8u;
                r0_12 = *gptr<u32>(0x94efa0u + (r0_10 << 2));  // (from the original)
                guest::cpu()->r[13] = r13;
                call_002075d4(r0_12, r1_7, 0x975beeu, 0xae5664u);  // (from the original)
            }
            r1_8 = r4_1 + 0x40u;  // (from the original)
            *gptr<u32>(r13) = u32(0u);
            guest::cpu()->r[13] = r13;
            call_00582e9c(0x10005f7u, r1_8, r4_1, 4u);  // (from the original)
            r1_5 = guest::cpu()->r[1];
            goto L_593ccc;
        }
        r0 = r0 + 1u;
        guest::preempt();
    } while (r0 < 0x14u);  // (from the original)
    r13 = r13 + 0x38u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return 0u;
L_593cb0:;
    guest::cpu()->r[13] = r13;
    call_005937b4(r4_1, r11, r6, r3_7);
    r2_10 = guest::cpu()->r[2];
    r3_9 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    call_0059317c(r4_1, r6, r2_10, r3_9);
    r1_5 = guest::cpu()->r[1];
L_593ccc:;
    r13 = r13 + 0x38u;  // (from the original)
    guest::cpu()->r[1] = r1_5;
    guest::cpu()->r[13] = r13;
    return r4_1;
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

inline guest::global<u32, 0x00594060> global_00594060;  // (from the original)
inline guest::global<u32, 0x00594064> global_00594064;  // (from the original)
inline guest::global<u32, 0x00594068> global_00594068;  // (from the original)
inline guest::global<u32, 0x0059406c> global_0059406c;  // (from the original)
inline constexpr guest::Function<0x004ee3e8, u32(u32, u32, u32, u32)> call_004ee3e8;  // (from the original)
inline constexpr guest::Function<0x0058fe4c, u32(u32, u32, u32, u32)> call_0058fe4c;  // (from the original)
inline constexpr guest::Function<0x00591a80, u32(u32, u32, u32, u32)> call_00591a80;  // (from the original)

u32 f_00593fbc(gptr<Object_00593fbc_0> arg0, gptr<Object_00593fbc_1> arg1, float S0) {
    u32 r0 = arg0.addr();
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 r2_1 = 0;
    u32 r0_2 = 0;
    u32 r2_2 = 0;
    float S1_1 = 0;
    float S2_1 = 0;
    float S0_1 = 0;
    float S0_2 = 0;
    u32 r1_1 = 0;
    u32 r2_3 = 0;
    float S0_3 = 0;
    float S1_2 = 0;
    float S2_2 = 0;
    u32 r0_3 = 0;
    u32 r1_2 = 0;
    float S1_3 = 0;
    float S0_4 = 0;
    r13 = r13 - 0x18u;  // (from the original)
    arg0->word_124 = u32(arg0->word_40);
    arg0->word_128 = u32(arg0->word_44);
    arg0->word_12c = u32(arg0->word_48);
    r0_1 = r13;
    arg0->word_40 = u32(arg1->word_0);
    r2_1 = arg1->word_4;
    arg0->word_44 = u32(r2_1);
    arg0->word_48 = u32(arg1->word_8);
    arg0->word_140 = u32(std::bit_cast<u32>(S0));
    *gptr<u32>(r0_1) = u32(std::bit_cast<u32>(S0));
    *gptr<u32>(r0_1 + 4) = u32(std::bit_cast<u32>(S0));
    *gptr<u32>(r0_1 + 8) = u32(std::bit_cast<u32>(S0));
    r0_2 = r0 + 0x58u;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S0;
    guest::cpu()->s[2] = S0;
    call_004ee3e8(r0_2, r0_1, r2_1, guest::cpu()->r[3]);
    r2_2 = guest::cpu()->r[2];
    S1_1 = guest::cpu()->s[1];
    S2_1 = guest::cpu()->s[2];
    S0_1 = std::bit_cast<float>(*global_00594060);
    *gptr<u16>(0x144u + r0) = u16(0xfu);  // (from the original)
    *gptr<u32>(r0 + 0x13cu) = u32(std::bit_cast<u32>(S0_1));  // (from the original)
    S0_2 = std::bit_cast<float>(*global_00594064);
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_2;
    guest::cpu()->s[1] = S1_1;
    guest::cpu()->s[2] = S2_1;
    call_00591a80(r0, 0xfu, r2_2, guest::cpu()->r[3]);  // (from the original)
    r1_1 = guest::cpu()->r[1];
    r2_3 = guest::cpu()->r[2];
    S0_3 = guest::cpu()->s[0];
    S1_2 = guest::cpu()->s[1];
    S2_2 = guest::cpu()->s[2];
    *gptr<u8>(r0 + 0x146u) = u8(0u);  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_3;
    guest::cpu()->s[1] = S1_2;
    guest::cpu()->s[2] = S2_2;
    r0_3 = call_0058fe4c(r0, r1_1, r2_3, guest::cpu()->r[3]);
    r1_2 = guest::cpu()->r[1];
    S1_3 = guest::cpu()->s[1];
    *gptr<u32>(r0 + 0x1cu) = u32(std::bit_cast<u32>(std::bit_cast<float>(*global_00594068)));  // (from the original)
    S0_4 = std::bit_cast<float>(*global_0059406c);
    *gptr<u32>(r0 + 0xf8u) = u32(std::bit_cast<u32>(S0_4));  // (from the original)
    r13 = r13 + 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1_2;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_4;
    guest::cpu()->s[1] = S1_3;
    return r0_3;
}

}  // namespace d_00593fbc
GUEST_EXPORT(0x00593fbc, d_00593fbc::f_00593fbc);

// f_00594358: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00594358 {

inline constexpr guest::Function<0x002fc20c, u32(u32, u32, u32, u32)> call_002fc20c;  // (from the original)

u32 f_00594358(u32 r0, u32 r1, u32 r2) {
    u32 r0_1 = 0;
    guest::cpu()->r[13] -= 8u;
    r0_1 = call_002fc20c(r0, r1, r2, guest::cpu()->r[3]);
    *gptr<u8>(r0_1 + 4u) = u8(0xa5u);  // (from the original)
    *gptr<u8>(r0_1 + 5u) = u8(0u);
    *gptr<u8>(r0_1 + 6u) = u8(0u);
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = 0u;
    return r0_1;
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
    u32 r0_1 = 0;
    guest::cpu()->r[13] -= 8u;
    r0_1 = call_002fc20c(r0, r1, r2, guest::cpu()->r[3]);
    *gptr<u8>(r0_1 + 4u) = u8(0xa5u);  // (from the original)
    *gptr<u8>(r0_1 + 5u) = u8(0u);
    *gptr<u8>(r0_1 + 6u) = u8(0u);
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = 0u;
    return r0_1;
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

inline guest::global<u32, 0x00594a38> global_00594a38;  // (from the original)
inline guest::global<u32, 0x00594a3c> global_00594a3c;  // (from the original)
inline guest::global<u32, 0x00594a40> global_00594a40;  // (from the original)
inline constexpr guest::Function<0x0012ca6c, u32(u32, u32, u32, u32)> call_0012ca6c;  // (from the original)
inline constexpr guest::Function<0x002f825c, u32(u32, u32, u32, u32)> call_002f825c;  // (from the original)
inline constexpr guest::Function<0x002fd108, u32(u32, u32, u32, u32)> call_002fd108;  // (from the original)
inline constexpr guest::Function<0x00590720, u32(u32, u32, u32, u32)> call_00590720;  // (from the original)
inline constexpr guest::Function<0x00590c14, u32(u32, u32, u32, u32)> call_00590c14;  // (from the original)
inline constexpr guest::Function<0x00590f1c, u32(u32, u32, u32, u32)> call_00590f1c;  // (from the original)
inline constexpr guest::Function<0x006c5c60, u32(u32, u32, u32, u32)> call_006c5c60;  // (from the original)

u32 f_005948ec(u32 r0, u32 r1, u32 r2, u32 r3, float S0, float S1, float S2) {
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r8 = guest::cpu()->r[8];
    u32 r9 = guest::cpu()->r[9];
    u32 r11 = guest::cpu()->r[11];
    u32 r13 = guest::cpu()->r[13];
    u32 r2_1 = 0;
    u32 r0_1 = 0;
    u32 r2_2 = 0;
    u32 r3_1 = 0;
    float S0_1 = 0;
    float S1_1 = 0;
    float S2_1 = 0;
    u32 r1_1 = 0;
    u32 r2_3 = 0;
    u32 r3_2 = 0;
    float S0_2 = 0;
    float S1_2 = 0;
    float S2_2 = 0;
    u32 r0_2 = 0;
    u32 r2_4 = 0;
    u32 r3_3 = 0;
    float S0_3 = 0;
    float S1_3 = 0;
    float S2_3 = 0;
    u32 r0_3 = 0;
    float S0_4 = 0;
    float S1_4 = 0;
    float S2_4 = 0;
    u32 r2_5 = 0;
    u32 r3_4 = 0;
    float S1_5 = 0;
    u32 r0_4 = 0;
    float S0_5 = 0;
    float S2_5 = 0;
    u32 r2_6 = 0;
    u32 r3_5 = 0;
    float S0_6 = 0;
    float S1_6 = 0;
    float S2_6 = 0;
    float S0_7 = 0;
    float S1_7 = 0;
    float S0_8 = 0;
    u32 r0_5 = 0;
    u32 res_1 = 0;
    u32 nf_1 = 0;
    u32 zf_1 = 0;
    u32 vf_1 = 0;
    u32 r1_2 = 0;
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
        r2_1 = *gptr<u32>(r1 + (r0 << 2));
        if (!(r2_1 == 0)) {
            *gptr<u32>(r1 + (r0 << 2)) = u32(0u);
            guest::cpu()->r[13] = r13;
            guest::cpu()->s[0] = S0;
            guest::cpu()->s[1] = S1;
            guest::cpu()->s[2] = S2;
            r0_1 = call_002fd108(0x148u, r2_1, 4u, r3);  // (from the original)
            r2_2 = guest::cpu()->r[2];
            r3_1 = guest::cpu()->r[3];
            S0_1 = guest::cpu()->s[0];
            S1_1 = guest::cpu()->s[1];
            S2_1 = guest::cpu()->s[2];
            guest::cpu()->r[13] = r13;
            guest::cpu()->s[0] = S0_1;
            guest::cpu()->s[1] = S1_1;
            guest::cpu()->s[2] = S2_1;
            call_002f825c(r0_1, 0x148u, r2_2, r3_1);  // (from the original)
            r1_1 = guest::cpu()->r[1];
            r2_3 = guest::cpu()->r[2];
            r3_2 = guest::cpu()->r[3];
            S0_2 = guest::cpu()->s[0];
            S1_2 = guest::cpu()->s[1];
            S2_2 = guest::cpu()->s[2];
            guest::cpu()->r[13] = r13;
            guest::cpu()->s[0] = S0_2;
            guest::cpu()->s[1] = S1_2;
            guest::cpu()->s[2] = S2_2;
            r0_2 = call_00590f1c(r0_1, r1_1, r2_3, r3_2);
            r2_4 = guest::cpu()->r[2];
            r3_3 = guest::cpu()->r[3];
            S0_3 = guest::cpu()->s[0];
            S1_3 = guest::cpu()->s[1];
            S2_3 = guest::cpu()->s[2];
            *gptr<u32>(r0_2) = u32(0x907ba0u);  // (from the original)
            r0_3 = r0_2 + 0x20u;  // (from the original)
            guest::cpu()->r[13] = r13;
            guest::cpu()->s[0] = S0_3;
            guest::cpu()->s[1] = S1_3;
            guest::cpu()->s[2] = S2_3;
            call_0012ca6c(r0_3, r2_1, r2_4, r3_3);
            S0_4 = guest::cpu()->s[0];
            S1_4 = guest::cpu()->s[1];
            S2_4 = guest::cpu()->s[2];
            *gptr<u32>(r13) = u32(0u);
            guest::cpu()->r[13] = r13;
            guest::cpu()->s[0] = S0_4;
            guest::cpu()->s[1] = S1_4;
            guest::cpu()->s[2] = S2_4;
            call_00590720(r0_2, r8, r9, r11);
            r2_5 = guest::cpu()->r[2];
            r3_4 = guest::cpu()->r[3];
            S1_5 = std::bit_cast<float>(*global_00594a3c);
            r0_4 = r0_2 + 0x130u;  // (from the original)
            *gptr<u32>(r0_2 + 0x124u) = u32(*gptr<u32>(r0_2 + 0x40u));  // (from the original)
            S0_5 = std::bit_cast<float>(*global_00594a38);
            S2_5 = std::bit_cast<float>(*global_00594a40);
            *gptr<u32>(r0_2 + 0x128u) = u32(*gptr<u32>(r0_2 + 0x44u));  // (from the original)
            *gptr<u32>(r0_2 + 0x12cu) = u32(*gptr<u32>(r0_2 + 0x48u));  // (from the original)
            *gptr<u32>(r0_2 + 0x40u) = u32(*gptr<u32>(r5));  // (from the original)
            *gptr<u32>(r0_2 + 0x44u) = u32(*gptr<u32>(r5 + 4u));  // (from the original)
            *gptr<u32>(r0_2 + 0x48u) = u32(*gptr<u32>(r5 + 8u));  // (from the original)
            *gptr<u32>(r0_4) = u32(std::bit_cast<u32>(S0_5));
            *gptr<u32>(r0_4 + 4) = u32(std::bit_cast<u32>(S1_5));
            *gptr<u32>(r0_2 + 0x138u) = u32(std::bit_cast<u32>(S0_5));  // (from the original)
            *gptr<u32>(r0_2 + 0x13cu) = u32(std::bit_cast<u32>(S2_5));  // (from the original)
            *gptr<u8>(r0_2 + 0x146u) = u8(r6);  // (from the original)
            guest::cpu()->r[13] = r13;
            guest::cpu()->s[0] = S0_5;
            guest::cpu()->s[1] = S1_5;
            guest::cpu()->s[2] = S2_5;
            call_00590c14(r0_2, 0u, r2_5, r3_4);
            r2_6 = guest::cpu()->r[2];
            r3_5 = guest::cpu()->r[3];
            S0_6 = guest::cpu()->s[0];
            S1_6 = guest::cpu()->s[1];
            S2_6 = guest::cpu()->s[2];
            guest::cpu()->r[13] = r13;
            guest::cpu()->s[0] = S0_6;
            guest::cpu()->s[1] = S1_6;
            guest::cpu()->s[2] = S2_6;
            call_006c5c60(r5, 0u, r2_6, r3_5);
            S0_7 = guest::cpu()->s[0];
            *gptr<u32>(r0_2 + 0x140u) = u32(std::bit_cast<u32>(S0_7));  // (from the original)
            S1_7 = std::bit_cast<float>(*gptr<u32>(r0_2 + 0x128u));  // (from the original)
            S0_8 = S0_7 - S1_7;
            r0_5 = std::bit_cast<u32>(S0_8);
            res_1 = r0_5 - 0x41200000u;  // (from the original)
            nf_1 = res_1 >> 0x1f;  // (from the original)
            zf_1 = res_1 == 0;
            vf_1 = ((r0_5 ^ 0x41200000u) & (r0_5 ^ res_1)) >> 0x1f;  // (from the original)
            r1_2 = r0_2 + 0x100u;  // (from the original)
            if (!zf_1 && nf_1 == vf_1) {
                r0_5 = 0x18u;  // (from the original)
            }
            if (zf_1 || nf_1 != vf_1) {
                r0_5 = 8u;
            }
            *gptr<u16>(r1_2 + 0x44u) = u16(r0_5);  // (from the original)
            r13 = r13 + 0x28;  // (from the original)
            guest::cpu()->r[1] = r1_2;
            guest::cpu()->r[13] = r13;
            guest::cpu()->s[0] = S0_8;
            guest::cpu()->s[1] = S1_7;
            return r0_2;
        }
        r0 = r0 + 1u;
        guest::preempt();
    } while (r0 < r3);
    r13 = r13 + 0x28;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    return 0u;
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
    u32 r12 = guest::cpu()->r[12];
    u32 r3_1 = 0;
    u32 res_1 = 0;
    u32 nf_1 = 0;
    u32 zf_1 = 0;
    u32 vf_1 = 0;
    u32 res_2 = 0;
    u32 r4_1 = 0;
    u32 res_3 = 0;
    u32 nf_2 = 0;
    u32 zf_2 = 0;
    u32 vf_2 = 0;
    u32 r6_1 = 0;
    u32 res_4 = 0;
    u32 r0_1 = 0;
    u32 r2_1 = 0;
    u32 res_5 = 0;
    u32 nf_3 = 0;
    u32 zf_3 = 0;
    u32 vf_3 = 0;
    u32 res_6 = 0;
    u32 res_7 = 0;
    guest::cpu()->r[13] -= 0xcu;  // (from the original)
    r3_1 = arg0->word_0;
    res_1 = r3_1 - r1;
    nf_1 = res_1 >> 0x1f;  // (from the original)
    zf_1 = res_1 == 0;
    vf_1 = ((r3_1 ^ r1) & (r3_1 ^ res_1)) >> 0x1f;  // (from the original)
    if (zf_1 || nf_1 != vf_1) {
        r12 = arg0->word_8;
        res_2 = r1 - r12;
        nf_1 = res_2 >> 0x1f;  // (from the original)
        zf_1 = res_2 == 0;
        vf_1 = ((r1 ^ r12) & (r1 ^ res_2)) >> 0x1f;  // (from the original)
    }
    if (!zf_1 && nf_1 == vf_1) {
        guest::cpu()->r[13] += 0xcu;  // (from the original)
        guest::cpu()->s[0] = S0;
        guest::cpu()->s[1] = S1;
        return 0u;
    }
    r4_1 = arg0->word_4;
    res_3 = r4_1 - r2;
    nf_2 = res_3 >> 0x1f;  // (from the original)
    zf_2 = res_3 == 0;
    vf_2 = ((r4_1 ^ r2) & (r4_1 ^ res_3)) >> 0x1f;  // (from the original)
    if (zf_2 || nf_2 != vf_2) {
        r6_1 = arg0->word_c;
        res_4 = r2 - r6_1;
        nf_2 = res_4 >> 0x1f;  // (from the original)
        zf_2 = res_4 == 0;
        vf_2 = ((r2 ^ r6_1) & (r2 ^ res_4)) >> 0x1f;  // (from the original)
    }
    if (!zf_2 && nf_2 == vf_2) {
        guest::cpu()->r[13] += 0xcu;  // (from the original)
        guest::cpu()->s[0] = S0;
        guest::cpu()->s[1] = S1;
        return 0u;
    }
    S1 = std::bit_cast<float>(arg0->word_10);
    S0 = std::bit_cast<float>(vcvt_sz_f(S1 * float(s32(std::bit_cast<u32>(std::bit_cast<float>(r2 - r4_1))))));
    r0_1 = std::bit_cast<u32>(S0);
    if (r0_1 == 0) {
        guest::cpu()->r[13] += 0xcu;  // (from the original)
        guest::cpu()->s[0] = S0;
        guest::cpu()->s[1] = S1;
        return 1u;
    }
    r2_1 = r3_1 + r0_1;
    res_5 = r2_1 - r1;
    nf_3 = res_5 >> 0x1f;  // (from the original)
    zf_3 = res_5 == 0;
    vf_3 = ((r2_1 ^ r1) & (r2_1 ^ res_5)) >> 0x1f;  // (from the original)
    res_6 = r12 - r0_1;
    if (zf_3 || nf_3 != vf_3) {
        res_7 = r1 - res_6;
        nf_3 = res_7 >> 0x1f;  // (from the original)
        zf_3 = res_7 == 0;
        vf_3 = ((r1 ^ res_6) & (r1 ^ res_7)) >> 0x1f;  // (from the original)
    }
    if (zf_3 || nf_3 != vf_3) {
        guest::cpu()->r[13] += 0xcu;  // (from the original)
        guest::cpu()->s[0] = S0;
        guest::cpu()->s[1] = S1;
        return 1u;
    }
    guest::cpu()->r[13] += 0xcu;  // (from the original)
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    return 0u;
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
    u32 r13 = guest::cpu()->r[13];
    u32 r3_1 = 0;
    u32 r2_1 = 0;
    u32 r1_1 = 0;
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r1_2 = 0;
    r13 = r13 - 0x10u;  // (from the original)
    *gptr<u32>(r13) = u32(u32(arg0->half_4));
    *gptr<u32>(r13 + 4) = u32(0u);
    r3_1 = u32(arg0->byte_3);
    r2_1 = u32(arg0->byte_0);
    r1_1 = u32(arg0->byte_2);
    r0_1 = u32(arg0->byte_1);
    guest::cpu()->r[13] = r13;
    r0_2 = call_005971e4(r0_1, r1_1, r2_1, r3_1);
    r1_2 = guest::cpu()->r[1];
    r13 = r13 + 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1_2;
    guest::cpu()->r[13] = r13;
    return r0_2;
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
    arg0->byte_0 = u8(0xa5u);  // (from the original)
    arg0->byte_1 = u8(0u);
    arg0->byte_2 = u8(0u);
    arg0->byte_3 = u8(0u);
    arg0->half_4 = u16(0u);
    guest::cpu()->r[1] = 0u;
    return;
}

}  // namespace d_00594dcc
GUEST_EXPORT(0x00594dcc, d_00594dcc::f_00594dcc);

// f_00594dec: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00594dec {

inline constexpr guest::Function<0x002fae84, u32(u32, u32, u32, u32)> call_002fae84;  // (from the original)

u32 f_00594dec(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r3_1 = 0;
    u32 r3_2 = 0;
    u32 r3_3 = 0;
    u32 r1_1 = 0;
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    goto L_594dec;
L_52aadc:;
    r3_1 = u32(*gptr<u8>(r0 + 0x16u));  // (from the original)
    if (r3_1 < 3u) {
        r3_2 = r3_1 + 1u;
        *gptr<u8>(r0 + 0x16u) = u8(r3_2);  // (from the original)
        *gptr<u8>(r0 + 0x17u) = u8(r3_2 - 1u);  // (from the original)
    } else {
        r3_3 = u32(*gptr<u8>(r0 + 0x17u)) + 1u & 0xffu;  // (from the original)
        *gptr<u8>(r0 + 0x17u) = u8(r3_3);  // (from the original)
        if (r3_3 >= 3u) {
            *gptr<u8>(r0 + 0x17u) = u8(0u);  // (from the original)
        }
    }
    *gptr<u8>(r0 + (u32(*gptr<u8>(r0 + 0x17u)) << 1) + 0x10u) = u8(r1);  // (from the original)
    r1_1 = u32(*gptr<u8>(r0 + 0x17u));  // (from the original)
    r0_1 = r0 + (r1_1 << 1);
    *gptr<u8>(r0_1 + 0x11u) = u8(r2);  // (from the original)
    guest::cpu()->r[1] = r1_1;
    return r0_1;
L_594dec:;
    guest::cpu()->r[13] -= 8u;
    r0_2 = call_002fae84(r0, r1, r2, r3);
    r2 = u32(*gptr<u8>(r0 + 1u));
    r1 = u32(*gptr<u8>(r0));
    guest::cpu()->r[13] += 8u;
    r0 = r0_2 + 0x621b2u;  // (from the original)
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
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r13 = guest::cpu()->r[13];
    u32 r2_1 = 0;
    u32 r0_1 = 0;
    u32 r2_2 = 0;
    u32 r3_1 = 0;
    float S0_1 = 0;
    u32 r1_1 = 0;
    u32 r2_3 = 0;
    u32 r3_2 = 0;
    float S0_2 = 0;
    u32 r0_2 = 0;
    u32 r2_4 = 0;
    u32 r3_3 = 0;
    float S0_3 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r2_5 = 0;
    u32 r3_4 = 0;
    float S0_4 = 0;
    u32 r0_5 = 0;
    u32 r0_6 = 0;
    u32 r2_6 = 0;
    u32 r3_5 = 0;
    float S0_5 = 0;
    u32 r4_1 = 0;
    u32 r0_7 = 0;
    float S0_6 = 0;
    u32 r2_7 = 0;
    u32 r3_6 = 0;
    float S0_7 = 0;
    u32 cf_1 = 0;
    u32 r0_8 = 0;
    float S0_8 = 0;
    u32 r3_7 = 0;
    u32 r1_2 = 0;
    u32 r0_9 = 0;
    u32 r2_8 = 0;
    u32 r3_8 = 0;
    float S0_9 = 0;
    u32 r1_3 = 0;
    u32 r0_10 = 0;
    u32 r1_4 = 0;
    u32 r2_9 = 0;
    u32 r3_9 = 0;
    float S0_10 = 0;
    u32 r0_11 = 0;
    u32 r1_5 = 0;
    float S0_11 = 0;
    float S0_12 = 0;
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
        r2_1 = *gptr<u32>(r1 + (r0 << 2));
        if (!(r2_1 == 0)) {
            *gptr<u32>(r1 + (r0 << 2)) = u32(0u);
            guest::cpu()->r[13] = r13;
            guest::cpu()->s[0] = S0;
            r0_1 = call_002fd108(0x160u, r2_1, 4u, r3);  // (from the original)
            r2_2 = guest::cpu()->r[2];
            r3_1 = guest::cpu()->r[3];
            S0_1 = guest::cpu()->s[0];
            guest::cpu()->r[13] = r13;
            guest::cpu()->s[0] = S0_1;
            call_002f825c(r0_1, 0x160u, r2_2, r3_1);  // (from the original)
            r1_1 = guest::cpu()->r[1];
            r2_3 = guest::cpu()->r[2];
            r3_2 = guest::cpu()->r[3];
            S0_2 = guest::cpu()->s[0];
            guest::cpu()->r[13] = r13;
            guest::cpu()->s[0] = S0_2;
            r0_2 = call_00590f1c(r0_1, r1_1, r2_3, r3_2);
            r2_4 = guest::cpu()->r[2];
            r3_3 = guest::cpu()->r[3];
            S0_3 = guest::cpu()->s[0];
            *gptr<u32>(r0_2) = u32(0x907970u);  // (from the original)
            r0_3 = r0_2 + 0x124u;  // (from the original)
            guest::cpu()->r[13] = r13;
            guest::cpu()->s[0] = S0_3;
            r0_4 = call_004ecb80(r0_3, 0x907970u, r2_4, r3_3);  // (from the original)
            r2_5 = guest::cpu()->r[2];
            r3_4 = guest::cpu()->r[3];
            S0_4 = guest::cpu()->s[0];
            *gptr<u32>(r0_4 - 0x124u) = u32(0x907c00u);  // (from the original)
            r0_5 = r0_4 + 0x20u;  // (from the original)
            guest::cpu()->r[13] = r13;
            guest::cpu()->s[0] = S0_4;
            r0_6 = call_004ecf18(r0_5, 0x907c00u, r2_5, r3_4);  // (from the original)
            r2_6 = guest::cpu()->r[2];
            r3_5 = guest::cpu()->r[3];
            S0_5 = guest::cpu()->s[0];
            r4_1 = r0_6 - 0x144u;  // (from the original)
            r0_7 = r0_6 - 0x124u;  // (from the original)
            guest::cpu()->r[13] = r13;
            guest::cpu()->s[0] = S0_5;
            call_0012ca6c(r0_7, r2_1, r2_6, r3_5);
            S0_6 = guest::cpu()->s[0];
            *gptr<u32>(r13) = u32(1u);
            guest::cpu()->r[13] = r13;
            guest::cpu()->s[0] = S0_6;
            call_00591330(r4_1, r6, r7, r8);
            r2_7 = guest::cpu()->r[2];
            r3_6 = guest::cpu()->r[3];
            S0_7 = guest::cpu()->s[0];
            cf_1 = r5 >= 4u;
            if (cf_1) {
                *gptr<u8>(r4_1 + 0x15cu) = u8(1u);  // (from the original)
            }
            if (!cf_1) {
                *gptr<u8>(r4_1 + 0x15cu) = u8(0u);  // (from the original)
            }
            guest::cpu()->r[13] = r13;
            guest::cpu()->s[0] = S0_7;
            r0_8 = call_0059b698(0x846b88u, r5, r2_7, r3_6);  // (from the original)
            S0_8 = guest::cpu()->s[0];
            r3_7 = r4_1 + 0x20u;  // (from the original)
            r1_2 = r4_1 + 0x58u;  // (from the original)
            r0_9 = r4_1 + 0x144u;  // (from the original)
            *gptr<u32>(r13) = u32(0u);
            guest::cpu()->r[13] = r13;
            guest::cpu()->s[0] = S0_8;
            call_004ecd30(r0_9, r1_2, r0_8, r3_7);
            r2_8 = guest::cpu()->r[2];
            r3_8 = guest::cpu()->r[3];
            S0_9 = guest::cpu()->s[0];
            r1_3 = r4_1 + 0x144u;  // (from the original)
            r0_10 = r4_1 + 0x58u;  // (from the original)
            guest::cpu()->r[13] = r13;
            guest::cpu()->s[0] = S0_9;
            call_004eda50(r0_10, r1_3, r2_8, r3_8);
            r1_4 = guest::cpu()->r[1];
            r2_9 = guest::cpu()->r[2];
            r3_9 = guest::cpu()->r[3];
            S0_10 = guest::cpu()->s[0];
            r0_11 = r4_1 + 0x144u;  // (from the original)
            guest::cpu()->r[13] = r13;
            guest::cpu()->s[0] = S0_10;
            call_007460b8(r0_11, r1_4, r2_9, r3_9);
            r1_5 = guest::cpu()->r[1];
            S0_11 = guest::cpu()->s[0];
            S0_12 = std::bit_cast<float>(vcvt_uz_f(S0_11));
            *gptr<u8>(r4_1 + 0x121u) = u8(std::bit_cast<u32>(S0_12));  // (from the original)
            r13 = r13 + 0x28;  // (from the original)
            guest::cpu()->r[1] = r1_5;
            guest::cpu()->r[13] = r13;
            guest::cpu()->s[0] = S0_12;
            return r4_1;
        }
        r0 = r0 + 1u;
        guest::preempt();
    } while (r0 < 0x14u);  // (from the original)
    r13 = r13 + 0x28;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    return 0u;
}

}  // namespace d_00594f3c
GUEST_EXPORT(0x00594f3c, d_00594f3c::f_00594f3c);

// f_00595194: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00595194 {

inline guest::global<u32, 0x005952e0> global_005952e0;  // (from the original)
inline guest::global<u32, 0x005952e4> global_005952e4;  // (from the original)
inline guest::global<u32, 0x005952e8> global_005952e8;  // (from the original)
inline guest::global<u32, 0x005952ec> global_005952ec;  // (from the original)
inline constexpr guest::Function<0x0012ca6c, u32(u32, u32, u32, u32)> call_0012ca6c;  // (from the original)
inline constexpr guest::Function<0x002f825c, u32(u32, u32, u32, u32)> call_002f825c;  // (from the original)
inline constexpr guest::Function<0x002fd108, u32(u32, u32, u32, u32)> call_002fd108;  // (from the original)
inline constexpr guest::Function<0x00582e4c, u32(u32, u32, u32, u32)> call_00582e4c;  // (from the original)
inline constexpr guest::Function<0x00590720, u32(u32, u32, u32, u32)> call_00590720;  // (from the original)
inline constexpr guest::Function<0x00590c14, u32(u32, u32, u32, u32)> call_00590c14;  // (from the original)
inline constexpr guest::Function<0x00590f1c, u32(u32, u32, u32, u32)> call_00590f1c;  // (from the original)

u32 f_00595194(u32 r0, u32 r1, u32 r2, u32 r3, float S0, float S1, float S2, float S3) {
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r8 = guest::cpu()->r[8];
    u32 r9 = guest::cpu()->r[9];
    u32 r11 = guest::cpu()->r[11];
    u32 r13 = guest::cpu()->r[13];
    u32 r1_1 = 0;
    u32 r0_1 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    float S0_1 = 0;
    float S1_1 = 0;
    float S2_1 = 0;
    float S3_1 = 0;
    u32 r1_2 = 0;
    u32 r2_2 = 0;
    u32 r3_2 = 0;
    float S0_2 = 0;
    float S1_2 = 0;
    float S2_2 = 0;
    float S3_2 = 0;
    u32 r0_2 = 0;
    u32 r2_3 = 0;
    u32 r3_3 = 0;
    float S0_3 = 0;
    float S1_3 = 0;
    float S2_3 = 0;
    float S3_3 = 0;
    u32 r0_3 = 0;
    float S0_4 = 0;
    float S1_4 = 0;
    float S2_4 = 0;
    float S3_4 = 0;
    u32 r3_4 = 0;
    u32 r2_4 = 0;
    float S2_5 = 0;
    u32 r1_3 = 0;
    float S3_5 = 0;
    float S1_5 = 0;
    float S0_5 = 0;
    float S0_6 = 0;
    float S1_6 = 0;
    float S2_6 = 0;
    float S3_6 = 0;
    u32 r1_4 = 0;
    u32 r1_5 = 0;
    float S0_7 = 0;
    float S1_7 = 0;
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
        r1_1 = *gptr<u32>(r3 + (r0 << 2));
        if (!(r1_1 == 0)) {
            *gptr<u32>(r3 + (r0 << 2)) = u32(0u);
            guest::cpu()->r[13] = r13;
            guest::cpu()->s[0] = S0;
            guest::cpu()->s[1] = S1;
            guest::cpu()->s[2] = S2;
            guest::cpu()->s[3] = S3;
            r0_1 = call_002fd108(0x144u, r1_1, 4u, r3);  // (from the original)
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
            call_002f825c(r0_1, 0x144u, r2_1, r3_1);  // (from the original)
            r1_2 = guest::cpu()->r[1];
            r2_2 = guest::cpu()->r[2];
            r3_2 = guest::cpu()->r[3];
            S0_2 = guest::cpu()->s[0];
            S1_2 = guest::cpu()->s[1];
            S2_2 = guest::cpu()->s[2];
            S3_2 = guest::cpu()->s[3];
            guest::cpu()->r[13] = r13;
            guest::cpu()->s[0] = S0_2;
            guest::cpu()->s[1] = S1_2;
            guest::cpu()->s[2] = S2_2;
            guest::cpu()->s[3] = S3_2;
            r0_2 = call_00590f1c(r0_1, r1_2, r2_2, r3_2);
            r2_3 = guest::cpu()->r[2];
            r3_3 = guest::cpu()->r[3];
            S0_3 = guest::cpu()->s[0];
            S1_3 = guest::cpu()->s[1];
            S2_3 = guest::cpu()->s[2];
            S3_3 = guest::cpu()->s[3];
            *gptr<u32>(r0_2) = u32(0x907c30u);  // (from the original)
            r0_3 = r0_2 + 0x20u;  // (from the original)
            guest::cpu()->r[13] = r13;
            guest::cpu()->s[0] = S0_3;
            guest::cpu()->s[1] = S1_3;
            guest::cpu()->s[2] = S2_3;
            guest::cpu()->s[3] = S3_3;
            call_0012ca6c(r0_3, r1_1, r2_3, r3_3);
            S0_4 = guest::cpu()->s[0];
            S1_4 = guest::cpu()->s[1];
            S2_4 = guest::cpu()->s[2];
            S3_4 = guest::cpu()->s[3];
            *gptr<u32>(r13) = u32(0u);
            guest::cpu()->r[13] = r13;
            guest::cpu()->s[0] = S0_4;
            guest::cpu()->s[1] = S1_4;
            guest::cpu()->s[2] = S2_4;
            guest::cpu()->s[3] = S3_4;
            call_00590720(r0_2, r8, r9, r11);
            r3_4 = guest::cpu()->r[3];
            r2_4 = *gptr<u32>(r0_2 + 0x40u);  // (from the original)
            S2_5 = std::bit_cast<float>(*global_005952e8);
            r1_3 = r0_2 + 0x130u;  // (from the original)
            *gptr<u32>(r0_2 + 0x124u) = u32(r2_4);  // (from the original)
            S3_5 = std::bit_cast<float>(*global_005952ec);
            *gptr<u32>(r0_2 + 0x128u) = u32(*gptr<u32>(r0_2 + 0x44u));  // (from the original)
            *gptr<u32>(r0_2 + 0x12cu) = u32(*gptr<u32>(r0_2 + 0x48u));  // (from the original)
            *gptr<u32>(r0_2 + 0x40u) = u32(std::bit_cast<u32>(std::bit_cast<float>(*gptr<u32>(r0_2 + 0x40u)) + std::bit_cast<float>(*gptr<u32>(r5))));  // (from the original)
            *gptr<u32>(r0_2 + 0x44u) = u32(std::bit_cast<u32>(std::bit_cast<float>(*gptr<u32>(r0_2 + 0x44u)) + std::bit_cast<float>(*gptr<u32>(r5 + 4u))));  // (from the original)
            S1_5 = std::bit_cast<float>(*global_005952e4);
            *gptr<u32>(r0_2 + 0x48u) = u32(std::bit_cast<u32>(std::bit_cast<float>(*gptr<u32>(r0_2 + 0x48u)) + std::bit_cast<float>(*gptr<u32>(r5 + 8u))));  // (from the original)
            S0_5 = std::bit_cast<float>(*global_005952e0);
            *gptr<u32>(r1_3) = u32(std::bit_cast<u32>(S0_5));
            *gptr<u32>(r1_3 + 4) = u32(std::bit_cast<u32>(S1_5));
            *gptr<u32>(r1_3 + 8) = u32(std::bit_cast<u32>(S2_5));
            *gptr<u8>(r0_2 + 0x140u) = u8(0u);  // (from the original)
            *gptr<u8>(r0_2 + 0x141u) = u8(r6);  // (from the original)
            *gptr<u32>(r0_2 + 0x13cu) = u32(std::bit_cast<u32>(S3_5));  // (from the original)
            guest::cpu()->r[13] = r13;
            guest::cpu()->s[0] = S0_5;
            guest::cpu()->s[1] = S1_5;
            guest::cpu()->s[2] = S2_5;
            guest::cpu()->s[3] = S3_5;
            call_00590c14(r0_2, 0u, r2_4, r3_4);
            S0_6 = guest::cpu()->s[0];
            S1_6 = guest::cpu()->s[1];
            S2_6 = guest::cpu()->s[2];
            S3_6 = guest::cpu()->s[3];
            r1_4 = r0_2 + 0x40u;  // (from the original)
            *gptr<u8>(r0_2 + 0x143u) = u8(0u);  // (from the original)
            guest::cpu()->r[13] = r13;
            guest::cpu()->s[0] = S0_6;
            guest::cpu()->s[1] = S1_6;
            guest::cpu()->s[2] = S2_6;
            guest::cpu()->s[3] = S3_6;
            call_00582e4c(0x1000614u, r1_4, r0_2, 0u);  // (from the original)
            r1_5 = guest::cpu()->r[1];
            S0_7 = guest::cpu()->s[0];
            S1_7 = guest::cpu()->s[1];
            *gptr<u8>(r0_2 + 0x142u) = u8(0u);  // (from the original)
            r13 = r13 + 0x28;  // (from the original)
            guest::cpu()->r[1] = r1_5;
            guest::cpu()->r[13] = r13;
            guest::cpu()->s[0] = S0_7;
            guest::cpu()->s[1] = S1_7;
            return r0_2;
        }
        r0 = r0 + 1u;
        guest::preempt();
    } while (r0 < r2);
    r13 = r13 + 0x28;  // (from the original)
    guest::cpu()->r[1] = r1_1;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    return 0u;
}

}  // namespace d_00595194
GUEST_EXPORT(0x00595194, d_00595194::f_00595194);

// f_00595528: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00595528 {

inline guest::global<u32, 0x00595634> global_00595634;  // (from the original)
inline guest::global<u32, 0x00595638> global_00595638;  // (from the original)
inline guest::global<u32, 0x0059563c> global_0059563c;  // (from the original)
inline constexpr guest::Function<0x002fcb84, u32(u32, u32, u32, u32)> call_002fcb84;  // (from the original)
inline constexpr guest::Function<0x002fd010, u32(u32, u32, u32, u32)> call_002fd010;  // (from the original)
inline constexpr guest::Function<0x0052e3ec, u32(u32, u32, u32, u32)> call_0052e3ec;  // (from the original)
inline constexpr guest::Function<0x00745bd8, u32(u32, u32, u32, u32)> call_00745bd8;  // (from the original)
inline constexpr guest::Function<0x00745d44, u32(u32, u32, u32, u32)> call_00745d44;  // (from the original)

u32 f_00595528(u32 r0, u32 r1, u32 r2, float S0, float S1) {
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r1_1 = 0;
    float S0_1 = 0;
    float S1_1 = 0;
    u32 r1_2 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r1_3 = 0;
    u32 r2_1 = 0;
    float S0_2 = 0;
    float S1_2 = 0;
    u32 r1_4 = 0;
    u32 r1_5 = 0;
    u32 r2_2 = 0;
    float S0_3 = 0;
    float S1_3 = 0;
    u32 r0_5 = 0;
    u32 r0_6 = 0;
    u32 r1_6 = 0;
    u32 r2_3 = 0;
    float S0_4 = 0;
    float S1_4 = 0;
    u32 r0_7 = 0;
    u32 r0_8 = 0;
    u32 r0_9 = 0;
    u32 r2_4 = 0;
    u32 r0_10 = 0;
    u32 r0_11 = 0;
    u32 r0_12 = 0;
    u32 r0_13 = 0;
    u32 r2_5 = 0;
    float S0_5 = 0;
    float S1_5 = 0;
    u32 r0_14 = 0;
    u32 r0_15 = 0;
    r13 = r13 - 0x18u;  // (from the original)
    r0_1 = r0 + 0x58u;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    r0_2 = call_00745d44(r0_1, 0x846b94u, r2, guest::cpu()->r[3]);  // (from the original)
    r1_1 = guest::cpu()->r[1];
    S0_1 = guest::cpu()->s[0];
    S1_1 = guest::cpu()->s[1];
    if (r0_2 >> 0x1f != (r0_2 & (r0_2 ^ r0_2)) >> 0x1f) {  // (from the original)
        r13 = r13 + 0x18u;  // (from the original)
        guest::cpu()->r[1] = r1_1;
        guest::cpu()->r[13] = r13;
        guest::cpu()->s[0] = S0_1;
        guest::cpu()->s[1] = S1_1;
        return 0u;
    }
    r1_2 = r13;
    r0_3 = r0 + 0x58u;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_1;
    guest::cpu()->s[1] = S1_1;
    r0_4 = call_00745bd8(r0_3, r1_2, r0_2, guest::cpu()->r[3]);
    r1_3 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    S0_2 = guest::cpu()->s[0];
    S1_2 = guest::cpu()->s[1];
    if (r0_4 == 0) {
        r13 = r13 + 0x18u;  // (from the original)
        guest::cpu()->r[1] = r1_3;
        guest::cpu()->r[13] = r13;
        guest::cpu()->s[0] = S0_2;
        guest::cpu()->s[1] = S1_2;
        return r0_4;
    }
    r1_4 = r13;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_2;
    guest::cpu()->s[1] = S1_2;
    call_0052e3ec(r1, r1_4, r2_1, guest::cpu()->r[3]);
    r1_5 = guest::cpu()->r[1];
    r2_2 = guest::cpu()->r[2];
    S0_3 = guest::cpu()->s[0];
    S1_3 = guest::cpu()->s[1];
    r0_5 = r0 + 0x64u;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_3;
    guest::cpu()->s[1] = S1_3;
    r0_6 = call_002fd010(r0_5, r1_5, r2_2, guest::cpu()->r[3]);
    r1_6 = guest::cpu()->r[1];
    r2_3 = guest::cpu()->r[2];
    S0_4 = guest::cpu()->s[0];
    S1_4 = guest::cpu()->s[1];
    r0_7 = u32(*gptr<u8>(r0_6 + 0xdu));  // (from the original)
    if (r0_7 != 1u) {
        if (r0_7 == 2u) {
            goto L_5955d0;
        }
        r13 = r13 + 0x18u;  // (from the original)
        guest::cpu()->r[1] = r1_6;
        guest::cpu()->r[13] = r13;
        guest::cpu()->s[0] = S0_4;
        guest::cpu()->s[1] = S1_4;
        return 1u;
    }
    r0_8 = r0 + 0x64u;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_4;
    guest::cpu()->s[1] = S1_4;
    r0_9 = call_002fcb84(r0_8, 0x84u, r2_3, guest::cpu()->r[3]);  // (from the original)
    r1_6 = guest::cpu()->r[1];
    r2_4 = guest::cpu()->r[2];
    S0_4 = guest::cpu()->s[0];
    S1_4 = guest::cpu()->s[1];
    if (r0_9 != 0) {
        r13 = r13 + 0x18u;  // (from the original)
        guest::cpu()->r[1] = r1_6;
        guest::cpu()->r[13] = r13;
        guest::cpu()->s[0] = S0_4;
        guest::cpu()->s[1] = S1_4;
        return 1u;
    }
    r0_10 = r0 + 0x64u;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_4;
    guest::cpu()->s[1] = S1_4;
    r0_11 = call_002fcb84(r0_10, 0x87u, r2_4, guest::cpu()->r[3]);  // (from the original)
    r1_6 = guest::cpu()->r[1];
    S0_4 = guest::cpu()->s[0];
    S1_4 = guest::cpu()->s[1];
    if (r0_11 != 0) {
        r13 = r13 + 0x18u;  // (from the original)
        guest::cpu()->r[1] = r1_6;
        guest::cpu()->r[13] = r13;
        guest::cpu()->s[0] = S0_4;
        guest::cpu()->s[1] = S1_4;
        return 1u;
    }
    S1_4 = std::bit_cast<float>(*global_00595634);
    S0_4 = std::bit_cast<float>(*gptr<u32>(r1 + 4u)) + S1_4;
    goto L_595620;
L_5955d0:;
    r0_12 = r0 + 0x64u;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_4;
    guest::cpu()->s[1] = S1_4;
    r0_13 = call_002fcb84(r0_12, 0x85u, r2_3, guest::cpu()->r[3]);  // (from the original)
    r1_6 = guest::cpu()->r[1];
    r2_5 = guest::cpu()->r[2];
    S0_5 = guest::cpu()->s[0];
    S1_5 = guest::cpu()->s[1];
    if (r0_13 == 0) {
        r0_14 = r0 + 0x64u;  // (from the original)
        guest::cpu()->r[13] = r13;
        guest::cpu()->s[0] = S0_5;
        guest::cpu()->s[1] = S1_5;
        r0_15 = call_002fcb84(r0_14, 0x88u, r2_5, guest::cpu()->r[3]);  // (from the original)
        r1_6 = guest::cpu()->r[1];
        if (r0_15 == 0) {
            goto L_595614;
        }
    }
    S1_4 = std::bit_cast<float>(*global_00595638);
    S0_4 = std::bit_cast<float>(*gptr<u32>(r1 + 8u)) + S1_4;
    *gptr<u32>(r1 + 8u) = u32(std::bit_cast<u32>(S0_4));
    r13 = r13 + 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1_6;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_4;
    guest::cpu()->s[1] = S1_4;
    return 1u;
L_595614:;
    S1_4 = std::bit_cast<float>(*global_0059563c);
    S0_4 = std::bit_cast<float>(*gptr<u32>(r1 + 4u)) - S1_4;
L_595620:;
    *gptr<u32>(r1 + 4u) = u32(std::bit_cast<u32>(S0_4));
    r13 = r13 + 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1_6;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_4;
    guest::cpu()->s[1] = S1_4;
    return 1u;
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
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r0_2 = 0;
    u32 r3_2 = 0;
    u32 r2_2 = 0;
    u32 r1_2 = 0;
    u32 r2_3 = 0;
    u32 r3_3 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r3_4 = 0;
    u32 r0_5 = 0;
    u32 r2_4 = 0;
    u32 r1_3 = 0;
    u32 r2_5 = 0;
    u32 zf_1 = 0;
    u32 r0_6 = 0;
    u32 r5_1 = 0;
    u32 r0_7 = 0;
    u32 r0_8 = 0;
    u32 r2_6 = 0;
    u32 r3_5 = 0;
    u32 r0_9 = 0;
    u32 res_1 = 0;
    u32 nf_1 = 0;
    u32 vf_1 = 0;
    u32 r0_10 = 0;
    u32 r3_6 = 0;
    u32 r1_4 = 0;
    u32 r0_11 = 0;
    u32 r2_7 = 0;
    u32 r3_7 = 0;
    u32 r1_5 = 0;
    u32 r0_12 = 0;
    u32 ea_1 = 0;
    u32 ea_2 = 0;
    u32 ea_3 = 0;
    u32 r3_8 = 0;
    u32 r1_6 = 0;
    u32 r0_13 = 0;
    u32 r1_7 = 0;
    r13 = r13 - 0x30u;  // (from the original)
    r0_1 = r0 + 0x64u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_002fc8e8(r0_1, r1, r2, r3);
    r1_1 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0_2 = call_005a2b58(r0, r1_1, r2_1, r3_1);
    *gptr<u32>(r13) = u32(0u);
    *gptr<u32>(r13 + 8u) = u32(1u);
    *gptr<u32>(r13 + 4u) = u32(0u);
    r3_2 = *gptr<u32>(r3);
    r2_2 = *gptr<u32>(r2);
    guest::cpu()->r[13] = r13;
    call_0058faa0(r0, r0_2, r2_2, r3_2);
    r1_2 = guest::cpu()->r[1];
    r2_3 = guest::cpu()->r[2];
    r3_3 = guest::cpu()->r[3];
    r0_3 = r0 + 0x64u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_4 = call_002fd010(r0_3, r1_2, r2_3, r3_3);
    r3_4 = guest::cpu()->r[3];
    r0_5 = u32(*gptr<u8>(r0_4 + 0xcu));  // (from the original)
    r2_4 = u32(s32(s8(*gptr<u8>(0x94ee4cu + 3u))));  // (from the original)
    r1_3 = *gptr<u32>(0x94ee4cu + 0x14u);  // (from the original)
    r2_5 = 0u - r2_4;
    zf_1 = (r2_5 & r1_3) == 0;
    if (!zf_1) {
        r1_3 = *gptr<u32>(r1_3 + 0x414u);  // (from the original)
    }
    if (r0_5 >= 0x87u) {  // (from the original)
        r0_5 = 0u;
    }
    if (!zf_1) {
        zf_1 = r1_3 == 0;
    }
    if (zf_1) {
        goto L_595a80;
    }
    if (r0_5 >= 0x87u) {  // (from the original)
        goto L_595a80;
    }
    r2_5 = r0_5 + (r0_5 << 1);
    r0_6 = r1_3 + (r2_5 + (r0_5 << 3) << 1);
    goto L_595a84;
L_595a80:;
    r0_6 = 0u;
L_595a84:;
    r5_1 = r0_6 + 5u;
    *gptr<u8>(r0_6 + 0x15u) = u8(0u);  // (from the original)
    r0_7 = r0 + 0x64u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_8 = call_007698a4(r0_7, r1_3, r2_5, r3_4);
    r2_6 = guest::cpu()->r[2];
    r3_5 = guest::cpu()->r[3];
    if (r0_8 != 0) {
        r0_9 = u32(s32(s8(*gptr<u8>(r0_4 + 0xdu))));  // (from the original)
        res_1 = r0_9 - 2u;
        nf_1 = res_1 >> 0x1f;  // (from the original)
        vf_1 = ((r0_9 ^ 2u) & (r0_9 ^ res_1)) >> 0x1f;  // (from the original)
        if (nf_1 == vf_1) {
            r5_1 = 0x846b70u;  // (from the original)
        }
        if (nf_1 != vf_1) {
            r5_1 = 0x846b7cu;  // (from the original)
        }
    }
    guest::cpu()->r[13] = r13;
    r0_10 = call_0059b698(r5_1, 1u, r2_6, r3_5);
    r3_6 = r0 + 0x20u;  // (from the original)
    r1_4 = r0 + 0x58u;  // (from the original)
    r0_11 = r0 + 0x144u;  // (from the original)
    *gptr<u32>(r13) = u32(0u);
    guest::cpu()->r[13] = r13;
    call_004ecd30(r0_11, r1_4, r0_10, r3_6);
    r2_7 = guest::cpu()->r[2];
    r3_7 = guest::cpu()->r[3];
    r1_5 = r0 + 0x144u;  // (from the original)
    r0_12 = r0 + 0x58u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_004eda50(r0_12, r1_5, r2_7, r3_7);
    ea_1 = r13 + 4u;
    *gptr<u32>(ea_1) = u32(1u);
    ea_2 = r13;
    *gptr<u32>(ea_2) = u32(0u);
    ea_3 = r13 + 8u;
    *gptr<u32>(ea_3) = u32(1u);
    *gptr<u32>(ea_3 + 4) = u32(0u);
    r3_8 = ~0u;
    r1_6 = *gptr<u32>(r3);
    guest::cpu()->r[13] = r13;
    r0_13 = call_0058fde0(r0, r1_6, 0u, r3_8);
    r1_7 = guest::cpu()->r[1];
    r13 = r13 + 0x30u;  // (from the original)
    guest::cpu()->r[1] = r1_7;
    guest::cpu()->r[13] = r13;
    return r0_13;
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
    u32 r0_1 = 0;
    u32 r3_1 = 0;
    u32 r0_2 = 0;
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r3_2 = 0;
    u32 r4_1 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r0_5 = 0;
    u32 r0_6 = 0;
    u32 r2_2 = 0;
    u32 r3_3 = 0;
    u32 r1_2 = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r0_1 = call_002f74c8(r0, r1, r2, r3);
    r3_1 = guest::cpu()->r[3];
    r0_2 = call_005a0ef8(r0, r1, r0_1, r3_1);
    r1_1 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    if (r0_2 + 1u == 0) {
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        guest::cpu()->r[1] = r1_1;
        return r0_2;
    }
    r1_1 = 0x9b4264u;  // (from the original)
    r4_1 = r1_1 + (r0_2 + (r0_2 << 1) + (r0_2 << 3) << 1);
    r0_2 = u32(*gptr<u8>(r4_1 + 0x10u));  // (from the original)
    if (r0_2 != 0xbu) {  // (from the original)
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        guest::cpu()->r[1] = r1_1;
        return r0_2;
    }
    r0_3 = r4_1 + 4u;
    r0_4 = call_002fcb9c(r0_3, r1_1, r2_1, r3_2);
    if (r0_4 != 0) {
        r0_5 = r4_1 + 4u;
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        return call_0059ac18(r0_5, r0, r1, 0u);
    }
    r0_6 = r4_1 + 4u;
    call_0059ab9c(r0_6, r0, r1, 1u);
    r2_2 = guest::cpu()->r[2];
    r3_3 = guest::cpu()->r[3];
    r1_2 = r4_1 + 4u;
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    return call_005a1174(r4_1, r1_2, r2_2, r3_3);
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
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r0_2 = 0;
    u32 r3_2 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r1_1 = 0;
    u32 r2_2 = 0;
    u32 r3_3 = 0;
    u32 r6_1 = 0;
    u32 r0_5 = 0;
    u32 r1_2 = 0;
    u32 r2_3 = 0;
    u32 r3_4 = 0;
    u32 r0_6 = 0;
    r13 = r13 - 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_1 = call_0059ec48(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    if (r0_1 + 1u == 0) {
        r13 = r13 + 0x28u;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return r0_1;
    }
    r4 = r0_1;
    r5 = 0x9b417cu + (r0_1 + (r4 << 3) << 1);  // (from the original)
    r0_2 = r13;
    guest::cpu()->r[13] = r13;
    call_005a064c(r0_2, 0x9b417cu, r2_1, r3_1);  // (from the original)
    r3_2 = guest::cpu()->r[3];
    r0_3 = r13;
    guest::cpu()->r[13] = r13;
    r0_4 = call_0059f7c8(r0_3, r5, 5u, r3_2);
    r1_1 = guest::cpu()->r[1];
    r2_2 = guest::cpu()->r[2];
    r3_3 = guest::cpu()->r[3];
    r6_1 = r13;
    guest::cpu()->r[13] = r13;
    r0_5 = call_002fc900(r0_4, r1_1, r2_2, r3_3);
    r1_2 = guest::cpu()->r[1];
    r2_3 = guest::cpu()->r[2];
    r3_4 = guest::cpu()->r[3];
    if (r0_5 != 0) {
        guest::cpu()->r[13] = r13;
        r0_6 = call_0030b6c4(r0_5, r1_2, r2_3, r3_4);
        r1_2 = guest::cpu()->r[1];
        r2_3 = guest::cpu()->r[2];
        r3_4 = guest::cpu()->r[3];
        if (r0_6 == 0) {
            goto L_5963cc;
        }
    }
    guest::cpu()->r[13] = r13;
    call_0059f4d8(r6_1, r1_2, r2_3, r3_4);
    r1 = guest::cpu()->r[1];
L_596394:;
    r0_1 = 0u;
    *gptr<u8>(r5 + 0x10u) = u8(r4);  // (from the original)
    *gptr<u8>(r5 + 0xeu) = u8(r0_1);  // (from the original)
    *gptr<u8>(r5 + 0xfu) = u8(r0_1);  // (from the original)
    r13 = r13 + 0x28u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0_1;
L_5963cc:;
    guest::cpu()->r[13] = r13;
    call_006249b0(0x3au, 0u, r6_1, 0x16u);  // (from the original)
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
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r0_2 = 0;
    u32 r2_2 = 0;
    u32 r3_2 = 0;
    u32 r1_1 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r2_3 = 0;
    u32 r3_3 = 0;
    u32 r0_5 = 0;
    u32 r0_6 = 0;
    u32 ea_1 = 0;
    u32 ea_2 = 0;
    u32 ea_3 = 0;
    u32 ea_4 = 0;
    u32 r3_4 = 0;
    u32 r2_4 = 0;
    u32 r0_7 = 0;
    u32 r1_2 = 0;
    r13 = r13 - 0x38u;  // (from the original)
    r0_1 = r13 + 0x1cu;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_002fc934(r0_1, r0, r2, r3);
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    r0_2 = r13 + 0x20u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_002fc934(r0_2, r0, r2_1, r3_1);
    r2_2 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    r1_1 = r13 + 0x20u;  // (from the original)
    r0_3 = r13 + 0x1cu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_4 = call_00599ca0(r0_3, r1_1, r2_2, r3_2);
    r2_3 = guest::cpu()->r[2];
    r3_3 = guest::cpu()->r[3];
    r0_5 = r13 + 0x24u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_6 = call_002fcbb0(r0_5, 0x9eu, r2_3, r3_3);  // (from the original)
    ea_1 = r13 + 0x10u;  // (from the original)
    *gptr<u32>(ea_1) = u32(0u);
    ea_2 = r13 + 0x14u;  // (from the original)
    *gptr<u32>(ea_2) = u32(0u);
    ea_3 = r13 + 0x18u;  // (from the original)
    *gptr<u32>(ea_3) = u32(0u);
    ea_4 = r13 + 8u;
    *gptr<u32>(ea_4) = u32(0u);
    *gptr<u32>(ea_4 + 4) = u32(r0_4);
    r3_4 = r13 + 0x20u;  // (from the original)
    r2_4 = r13 + 0x1cu;  // (from the original)
    *gptr<u32>(r13) = u32(r1);
    *gptr<u32>(r13 + 4) = u32(r2);
    guest::cpu()->r[13] = r13;
    r0_7 = call_0059f194(0xbu, r0_6, r2_4, r3_4);  // (from the original)
    r1_2 = guest::cpu()->r[1];
    r13 = r13 + 0x38u;  // (from the original)
    guest::cpu()->r[1] = r1_2;
    guest::cpu()->r[13] = r13;
    return r0_7;
}

}  // namespace d_005969c0
GUEST_EXPORT(0x005969c0, d_005969c0::f_005969c0);

// f_00596a60: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00596a60 {

inline constexpr guest::Function<0x0059ec48, u32(u32, u32, u32, u32)> call_0059ec48;  // (from the original)
inline constexpr guest::Function<0x0059ecbc, u32(u32, u32, u32, u32)> call_0059ecbc;  // (from the original)

u32 f_00596a60(u32 r0, u32 r1, u32 r2) {
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r0_2 = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r0_1 = call_0059ec48(r0, r1, r2, guest::cpu()->r[3]);
    r1_1 = guest::cpu()->r[1];
    if (r0_1 + 1u != 0) {
        call_0059ecbc(r0, r0_1, 0u, guest::cpu()->r[3]);
        r0_2 = 0x9b417cu + (r0_1 + (r0_1 << 3) << 1);  // (from the original)
        r1_1 = 0u;
        *gptr<u8>(r0_2 + 0x10u) = u8(r0_1);  // (from the original)
        *gptr<u8>(r0_2 + 0xeu) = u8(r1_1);  // (from the original)
        *gptr<u8>(r0_2 + 0xfu) = u8(r1_1);  // (from the original)
        r0_1 = r0_1;
    }
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1_1;
    return r0_1;
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
    u32 r13 = guest::cpu()->r[13];
    u32 r2_1 = 0;
    u32 r1_1 = 0;
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r1_2 = 0;
    u32 r2_2 = 0;
    u32 r3_1 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r2_3 = 0;
    u32 r3_2 = 0;
    u32 r1_3 = 0;
    u32 ea_1 = 0;
    u32 ea_2 = 0;
    u32 ea_3 = 0;
    u32 ea_4 = 0;
    u32 ea_5 = 0;
    u32 r1_4 = 0;
    u32 r2_4 = 0;
    u32 r0_5 = 0;
    u32 r1_5 = 0;
    r13 = r13 - 0x38u;  // (from the original)
    r2_1 = r13 + 0x28u;  // (from the original)
    r1_1 = r13 + 0x20u;  // (from the original)
    r0_1 = r13 + 0x1cu;  // (from the original)
    *gptr<u32>(r13) = u32(0u);
    guest::cpu()->r[13] = r13;
    r0_2 = call_005985c4(r0_1, r1_1, r2_1, 1u);
    r1_2 = guest::cpu()->r[1];
    r2_2 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    if (r0_2 == 0) {
        r0_3 = ~0u;
        r13 = r13 + 0x38u;  // (from the original)
        guest::cpu()->r[1] = r1_2;
        guest::cpu()->r[13] = r13;
        return r0_3;
    }
    r0_4 = r13 + 0x24u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_002fc20c(r0_4, r1_2, r2_2, r3_1);
    r2_3 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    r1_3 = r13 + 0x24u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_00767a44(r0, r1_3, r2_3, r3_2);
    ea_1 = r13 + 0xcu;  // (from the original)
    *gptr<u32>(ea_1) = u32(0u);
    ea_2 = r13 + 0x10u;  // (from the original)
    *gptr<u32>(ea_2) = u32(0u);
    ea_3 = r13 + 0x14u;  // (from the original)
    *gptr<u32>(ea_3) = u32(0u);
    ea_4 = r13 + 0x18u;  // (from the original)
    *gptr<u32>(ea_4) = u32(0u);
    ea_5 = r13 + 0x1cu;  // (from the original)
    r1_4 = *gptr<u32>(ea_5 + 4);
    r2_4 = r13 + 0x24u;  // (from the original)
    *gptr<u32>(r13) = u32(*gptr<u32>(ea_5));
    *gptr<u32>(r13 + 4) = u32(r1_4);
    *gptr<u32>(r13 + 8) = u32(0u);
    guest::cpu()->r[13] = r13;
    r0_5 = call_0059f194(0xcu, 0x95bfdcu, r2_4, r0);  // (from the original)
    r1_5 = guest::cpu()->r[1];
    r13 = r13 + 0x38u;  // (from the original)
    guest::cpu()->r[1] = r1_5;
    guest::cpu()->r[13] = r13;
    return r0_5;
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
    u32 r13 = guest::cpu()->r[13];
    u32 r4_1 = 0;
    u32 r0_1 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r0_2 = 0;
    u32 r2_2 = 0;
    u32 r3_2 = 0;
    u32 r0_3 = 0;
    u32 r2_3 = 0;
    u32 r1_1 = 0;
    u32 r0_4 = 0;
    u32 r0_5 = 0;
    u32 r1_2 = 0;
    u32 r2_4 = 0;
    u32 r3_3 = 0;
    u32 r0_6 = 0;
    u32 r0_7 = 0;
    u32 r0_8 = 0;
    u32 r1_3 = 0;
    u32 r2_5 = 0;
    u32 r3_4 = 0;
    u32 r0_9 = 0;
    u32 r2_6 = 0;
    u32 r3_5 = 0;
    u32 r0_10 = 0;
    u32 r2_7 = 0;
    u32 r3_6 = 0;
    u32 r0_11 = 0;
    u32 r2_8 = 0;
    u32 r3_7 = 0;
    u32 r0_12 = 0;
    u32 r0_13 = 0;
    u32 r2_9 = 0;
    u32 r3_8 = 0;
    u32 r0_14 = 0;
    u32 ea_1 = 0;
    u32 ea_2 = 0;
    u32 r0_15 = 0;
    u32 ea_3 = 0;
    u32 ea_4 = 0;
    u32 ea_5 = 0;
    u32 ea_6 = 0;
    u32 r1_4 = 0;
    u32 r2_10 = 0;
    u32 r2_11 = 0;
    r13 = r13 - 0x40u;  // (from the original)
    r4_1 = 0u;
    guest::cpu()->r[13] = r13;
    r0_1 = call_002f74c8(r0, r1, r2, r3);
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0_2 = call_002f74e0(4u, r0_1, r2_1, r3_1);
    r2_2 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    if (r0_2 != 0) {
        guest::cpu()->r[13] = r13;
        r0_3 = call_002fcb84(r0, 0x339fu, r2_2, r3_2);  // (from the original)
        if (r0_3 != 0) {
            r4_1 = 1u;
        }
    }
    r2_3 = r13 + 0x24u;  // (from the original)
    r1_1 = r13 + 0x20u;  // (from the original)
    r0_4 = r13 + 0x1cu;  // (from the original)
    *gptr<u32>(r13) = u32(r4_1);
    guest::cpu()->r[13] = r13;
    r0_5 = call_005985c4(r0_4, r1_1, r2_3, 0u);
    r1_2 = guest::cpu()->r[1];
    r2_4 = guest::cpu()->r[2];
    r3_3 = guest::cpu()->r[3];
    if (r0_5 == 0) {
        r0_6 = ~0u;
        r13 = r13 + 0x40u;  // (from the original)
        guest::cpu()->r[1] = r1_2;
        guest::cpu()->r[13] = r13;
        return r0_6;
    }
    r0_7 = r13 + 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_8 = call_002fc934(r0_7, r0, r2_4, r3_3);
    r1_3 = guest::cpu()->r[1];
    r2_5 = guest::cpu()->r[2];
    r3_4 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0_9 = call_002f74c8(r0_8, r1_3, r2_5, r3_4);
    r2_6 = guest::cpu()->r[2];
    r3_5 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0_10 = call_002f74e0(4u, r0_9, r2_6, r3_5);
    r2_7 = guest::cpu()->r[2];
    r3_6 = guest::cpu()->r[3];
    if (r0_10 == 0) {
        goto L_596d34;
    }
    guest::cpu()->r[13] = r13;
    r0_11 = call_002fcb84(r0, 0x339fu, r2_7, r3_6);  // (from the original)
    r2_8 = guest::cpu()->r[2];
    r3_7 = guest::cpu()->r[3];
    if (r0_11 == 0) {
        goto L_596d34;
    }
    r0_12 = r13;
    guest::cpu()->r[13] = r13;
    r0_13 = call_002fcbb0(r0_12, 0x33a0u, r2_8, r3_7);  // (from the original)
    r2_9 = guest::cpu()->r[2];
    r3_8 = guest::cpu()->r[3];
    r0_14 = r13 + 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_002fc8e8(r0_14, r0_13, r2_9, r3_8);
L_596d34:;
    ea_1 = r13 + 0x10u;  // (from the original)
    *gptr<u32>(ea_1) = u32(0u);
    ea_2 = r13 + 0x24u;  // (from the original)
    r0_15 = u32(*gptr<u8>(ea_2));
    ea_3 = r13 + 0xcu;  // (from the original)
    *gptr<u32>(ea_3) = u32(0u);
    ea_4 = r13 + 0x14u;  // (from the original)
    *gptr<u32>(ea_4) = u32(0u);
    ea_5 = r13 + 0x18u;  // (from the original)
    *gptr<u32>(ea_5) = u32(0u);
    ea_6 = r13 + 0x1cu;  // (from the original)
    r1_4 = *gptr<u32>(ea_6);
    r2_10 = *gptr<u32>(ea_6 + 4);
    *gptr<u32>(r13 + 8u) = u32(r0_15);
    *gptr<u32>(r13) = u32(r1_4);
    *gptr<u32>(r13 + 4) = u32(r2_10);
    r2_11 = r13 + 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_6 = call_0059f194(0xau, 0x95bfdcu, r2_11, r0);  // (from the original)
    r1_2 = guest::cpu()->r[1];
    r13 = r13 + 0x40u;  // (from the original)
    guest::cpu()->r[1] = r1_2;
    guest::cpu()->r[13] = r13;
    return r0_6;
}

}  // namespace d_00596c64
GUEST_EXPORT(0x00596c64, d_00596c64::f_00596c64);

// f_00596e94: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00596e94 {

inline guest::global<u32, 0x00aaf14c> global_00aaf14c;  // (from the original)
inline constexpr guest::Function<0x002fc8e8, u32(u32, u32, u32, u32)> call_002fc8e8;  // (from the original)
inline constexpr guest::Function<0x002fcb84, u32(u32, u32, u32, u32)> call_002fcb84;  // (from the original)
inline constexpr guest::Function<0x002fcbb0, u32(u32, u32, u32, u32)> call_002fcbb0;  // (from the original)
inline constexpr guest::Function<0x002fd010, u32(u32, u32, u32, u32)> call_002fd010;  // (from the original)
inline constexpr guest::Function<0x002ff6f8, u32(u32, u32, u32, u32)> call_002ff6f8;  // (from the original)
inline constexpr guest::Function<0x0071a844, u32(u32, u32, u32, u32)> call_0071a844;  // (from the original)

u32 f_00596e94(u32 r0, u32 r1) {
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r1_1 = 0;
    u32 r0_3 = 0;
    u32 r1_2 = 0;
    u32 r0_4 = 0;
    u32 r0_5 = 0;
    u32 r0_6 = 0;
    u32 r0_7 = 0;
    u32 r0_8 = 0;
    u32 r0_9 = 0;
    u32 r0_10 = 0;
    u32 r0_11 = 0;
    u32 r0_12 = 0;
    u32 r0_13 = 0;
    u32 r0_14 = 0;
    u32 r0_15 = 0;
    u32 r0_16 = 0;
    u32 r0_17 = 0;
    u32 r0_18 = 0;
    u32 r0_19 = 0;
    u32 r0_20 = 0;
    u32 r0_21 = 0;
    u32 r0_22 = 0;
    u32 r0_23 = 0;
    u32 r0_24 = 0;
    u32 r0_25 = 0;
    u32 r0_26 = 0;
    u32 r0_27 = 0;
    u32 r0_28 = 0;
    u32 r0_29 = 0;
    u32 r0_30 = 0;
    u32 r0_31 = 0;
    u32 r0_32 = 0;
    u32 r0_33 = 0;
    u32 r0_34 = 0;
    u32 r0_35 = 0;
    u32 r0_36 = 0;
    u32 r0_37 = 0;
    u32 r0_38 = 0;
    u32 r0_39 = 0;
    u32 r0_40 = 0;
    u32 r0_41 = 0;
    u32 r0_42 = 0;
    u32 r0_43 = 0;
    u32 r0_44 = 0;
    u32 r0_45 = 0;
    u32 r0_46 = 0;
    u32 r0_47 = 0;
    u32 r0_48 = 0;
    u32 r0_49 = 0;
    u32 r1_3 = 0;
    u32 r1_4 = 0;
    r13 = r13 - 0x18u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_1 = call_002fd010(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r0_2 = u32(s32(s16(*gptr<u16>(r0_1))));
    if (r0_2 >= 0xfeu) {  // (from the original)
        r0_2 = 0u;
    }
    r1_1 = uxth(r0_2);
    r0_3 = r13;
    guest::cpu()->r[13] = r13;
    call_002fcbb0(r0_3, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_2 = guest::cpu()->r[1];
    r0_4 = *global_00aaf14c;
    if (r0_4 != 0) {
        r0_5 = r0_4 + 0xau;  // (from the original)
        guest::cpu()->r[13] = r13;
        r0_6 = call_0071a844(r0_5, r1_2, guest::cpu()->r[2], guest::cpu()->r[3]);
        guest::cpu()->r[13] = r13;
        r0_7 = call_002fcb84(r0_6, 0x334eu, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
        r1_2 = guest::cpu()->r[1];
        if (r0_7 != 0) {
            goto L_596ef8;
        }
    }
    guest::cpu()->r[13] = r13;
    r0_8 = call_002ff6f8(0x64u, r1_2, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    r1_2 = guest::cpu()->r[1];
    if (s32(r0_8) >= s32(5u)) {
        goto L_5971b8;
    }
L_596ef8:;
    guest::cpu()->r[13] = r13;
    r0_9 = call_002ff6f8(0x64u, r1_2, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    r0_10 = r13;
    guest::cpu()->r[13] = r13;
    r0_11 = call_002fcb84(r0_10, 0xau, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    if (r0_11 != 0) {
        if (s32(r0_9) < s32(0x14u)) {  // (from the original)
            r0_12 = r13 + 4u;
            guest::cpu()->r[13] = r13;
            r0_13 = call_002fcbb0(r0_12, 0xbu, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
            r0_14 = r13;
            guest::cpu()->r[13] = r13;
            call_002fc8e8(r0_14, r0_13, guest::cpu()->r[2], guest::cpu()->r[3]);
            goto L_5971b8;
        }
        if (s32(r0_9) < s32(0x28u)) {  // (from the original)
            r0_15 = r13 + 4u;
            guest::cpu()->r[13] = r13;
            r0_16 = call_002fcbb0(r0_15, 0xcu, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
            r0_17 = r13;
            guest::cpu()->r[13] = r13;
            call_002fc8e8(r0_17, r0_16, guest::cpu()->r[2], guest::cpu()->r[3]);
            goto L_5971b8;
        }
        if (s32(r0_9) < s32(0x3cu)) {  // (from the original)
            r0_18 = r13 + 4u;
            guest::cpu()->r[13] = r13;
            r0_19 = call_002fcbb0(r0_18, 0xdu, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
            r0_20 = r13;
            guest::cpu()->r[13] = r13;
            call_002fc8e8(r0_20, r0_19, guest::cpu()->r[2], guest::cpu()->r[3]);
            goto L_5971b8;
        }
        if (s32(r0_9) < s32(0x50u)) {  // (from the original)
            r0_21 = r13 + 4u;
            guest::cpu()->r[13] = r13;
            r0_22 = call_002fcbb0(r0_21, 0xeu, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
            r0_23 = r13;
            guest::cpu()->r[13] = r13;
            call_002fc8e8(r0_23, r0_22, guest::cpu()->r[2], guest::cpu()->r[3]);
            goto L_5971b8;
        }
        if (s32(r0_9) < s32(0x5au)) {  // (from the original)
            r0_24 = r13 + 4u;
            guest::cpu()->r[13] = r13;
            r0_25 = call_002fcbb0(r0_24, 0xfu, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
            r0_26 = r13;
            guest::cpu()->r[13] = r13;
            call_002fc8e8(r0_26, r0_25, guest::cpu()->r[2], guest::cpu()->r[3]);
            goto L_5971b8;
        }
        r0_27 = r13 + 4u;
        guest::cpu()->r[13] = r13;
        r0_28 = call_002fcbb0(r0_27, 0x10u, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
        r0_29 = r13;
        guest::cpu()->r[13] = r13;
        call_002fc8e8(r0_29, r0_28, guest::cpu()->r[2], guest::cpu()->r[3]);
        goto L_5971b8;
    }
    r0_30 = r13;
    guest::cpu()->r[13] = r13;
    r0_31 = call_002fcb84(r0_30, 0x14u, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    if (r0_31 == 0) {
        goto L_5971b8;
    }
    if (s32(r0_9) < s32(0x14u)) {  // (from the original)
        r0_32 = r13 + 4u;
        guest::cpu()->r[13] = r13;
        r0_33 = call_002fcbb0(r0_32, 0x15u, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
        r0_34 = r13;
        guest::cpu()->r[13] = r13;
        call_002fc8e8(r0_34, r0_33, guest::cpu()->r[2], guest::cpu()->r[3]);
        goto L_5971b8;
    }
    if (s32(r0_9) < s32(0x28u)) {  // (from the original)
        r0_35 = r13 + 4u;
        guest::cpu()->r[13] = r13;
        r0_36 = call_002fcbb0(r0_35, 0x16u, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
        r0_37 = r13;
        guest::cpu()->r[13] = r13;
        call_002fc8e8(r0_37, r0_36, guest::cpu()->r[2], guest::cpu()->r[3]);
        goto L_5971b8;
    }
    if (s32(r0_9) < s32(0x3cu)) {  // (from the original)
        r0_38 = r13 + 4u;
        guest::cpu()->r[13] = r13;
        r0_39 = call_002fcbb0(r0_38, 0x17u, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
        r0_40 = r13;
        guest::cpu()->r[13] = r13;
        call_002fc8e8(r0_40, r0_39, guest::cpu()->r[2], guest::cpu()->r[3]);
        goto L_5971b8;
    }
    if (s32(r0_9) < s32(0x50u)) {  // (from the original)
        r0_41 = r13 + 4u;
        guest::cpu()->r[13] = r13;
        r0_42 = call_002fcbb0(r0_41, 0x18u, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
        r0_43 = r13;
        guest::cpu()->r[13] = r13;
        call_002fc8e8(r0_43, r0_42, guest::cpu()->r[2], guest::cpu()->r[3]);
        goto L_5971b8;
    }
    if (s32(r0_9) < s32(0x5au)) {  // (from the original)
        r0_44 = r13 + 4u;
        guest::cpu()->r[13] = r13;
        r0_45 = call_002fcbb0(r0_44, 0x19u, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
        r0_46 = r13;
        guest::cpu()->r[13] = r13;
        call_002fc8e8(r0_46, r0_45, guest::cpu()->r[2], guest::cpu()->r[3]);
        goto L_5971b8;
    }
    r0_47 = r13 + 4u;
    guest::cpu()->r[13] = r13;
    r0_48 = call_002fcbb0(r0_47, 0x1au, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    r0_49 = r13;
    guest::cpu()->r[13] = r13;
    call_002fc8e8(r0_49, r0_48, guest::cpu()->r[2], guest::cpu()->r[3]);
L_5971b8:;
    r1_3 = r13;
    guest::cpu()->r[13] = r13;
    call_002fc8e8(r0, r1_3, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_4 = guest::cpu()->r[1];
    r13 = r13 + 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1_4;
    guest::cpu()->r[13] = r13;
    return 1u;
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
    u32 r3_3 = 0;
    u32 r0_5 = 0;
    u32 r2_3 = 0;
    u32 r3_4 = 0;
    u32 r0_6 = 0;
    u32 r1_2 = 0;
    u32 r2_4 = 0;
    u32 r3_5 = 0;
    u32 r0_7 = 0;
    u32 r1_3 = 0;
    u32 r0_8 = 0;
    u32 r1_4 = 0;
    u32 r2_5 = 0;
    u32 r3_6 = 0;
    u32 r0_9 = 0;
    u32 res_1 = 0;
    u32 r0_10 = 0;
    u32 r0_11 = 0;
    u32 r1_5 = 0;
    r13 = r13 - 0x30u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_1 = call_002f74c8(r0, r1, r2, r3);
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0_2 = call_002f74e0(4u, r0_1, r2_1, r3_1);
    r1_1 = guest::cpu()->r[1];
    r2_2 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    if (r0_2 == 0) {
        goto L_597744;
    }
    guest::cpu()->r[13] = r13;
    r0_3 = call_006a5e34(r0_2, r1_1, r2_2, r3_2);
    guest::cpu()->r[13] = r13;
    r0_4 = call_002feb00(r0_3, r0, r1, 0u);
    r1_1 = guest::cpu()->r[1];
    r3_3 = guest::cpu()->r[3];
    if (r0_4 == 0) {
        goto L_597744;
    }
    guest::cpu()->r[13] = r13;
    r0_5 = call_005a06d4(r0, r1, 0xa5u, r3_3);  // (from the original)
    r1_1 = guest::cpu()->r[1];
    r2_3 = guest::cpu()->r[2];
    r3_4 = guest::cpu()->r[3];
    if (r0_5 + 1u != 0) {
        goto L_597744;
    }
    guest::cpu()->r[13] = r13;
    r0_6 = call_002fcb84(r0_4, 0x9eu, r2_3, r3_4);  // (from the original)
    r1_2 = guest::cpu()->r[1];
    r2_4 = guest::cpu()->r[2];
    r3_5 = guest::cpu()->r[3];
    if (r0_6 != 0) {
        *gptr<u32>(r13 + 0xcu) = u32(0u);  // (from the original)
        *gptr<u32>(r13 + 0x10u) = u32(0u);  // (from the original)
        *gptr<u32>(r13 + 0x14u) = u32(0u);  // (from the original)
        *gptr<u32>(r13 + 0x18u) = u32(0u);  // (from the original)
        *gptr<u32>(r13) = u32(r0);
        *gptr<u32>(r13 + 4) = u32(r1);
        *gptr<u32>(r13 + 8) = u32(0u);
        guest::cpu()->r[13] = r13;
        r0_7 = call_0059f194(0x1fu, r0_4, 0x95bfdcu, 0x95bfdcu);  // (from the original)
        r1_3 = guest::cpu()->r[1];
        r13 = r13 + 0x30u;  // (from the original)
        guest::cpu()->r[1] = r1_3;
        guest::cpu()->r[13] = r13;
        return r0_7;
    }
    guest::cpu()->r[13] = r13;
    r0_8 = call_002fccc4(r0_4, r1_2, r2_4, r3_5);
    r1_4 = guest::cpu()->r[1];
    r2_5 = guest::cpu()->r[2];
    r3_6 = guest::cpu()->r[3];
    if (r0_8 == 0) {
        goto L_597750;
    }
    guest::cpu()->r[13] = r13;
    r0_9 = call_002fd010(r0_4, r1_4, r2_5, r3_6);
    r1_1 = guest::cpu()->r[1];
    res_1 = u32(*gptr<u8>(r0_9 + 0xfu)) << 0x1c;  // (from the original)
    if (!(res_1 >> 0x1f)) {  // (from the original)
        goto L_597750;
    }
L_597744:;
    r0_10 = ~0u;
    r13 = r13 + 0x30u;  // (from the original)
    guest::cpu()->r[1] = r1_1;
    guest::cpu()->r[13] = r13;
    return r0_10;
L_597750:;
    *gptr<u32>(r13 + 0xcu) = u32(0u);  // (from the original)
    *gptr<u32>(r13 + 0x10u) = u32(0u);  // (from the original)
    *gptr<u32>(r13 + 0x14u) = u32(0u);  // (from the original)
    *gptr<u32>(r13 + 0x18u) = u32(0u);  // (from the original)
    *gptr<u32>(r13) = u32(r0);
    *gptr<u32>(r13 + 4) = u32(r1);
    *gptr<u32>(r13 + 8) = u32(0u);
    guest::cpu()->r[13] = r13;
    r0_11 = call_0059f194(0x1eu, r0_4, 0x95bfdcu, 0x95bfdcu);  // (from the original)
    r1_5 = guest::cpu()->r[1];
    r13 = r13 + 0x30u;  // (from the original)
    guest::cpu()->r[1] = r1_5;
    guest::cpu()->r[13] = r13;
    return r0_11;
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
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r9 = guest::cpu()->r[9];
    u32 r10 = guest::cpu()->r[10];
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r3_1 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r3_2 = 0;
    u32 r11_1 = 0;
    u32 r0_5 = 0;
    u32 r1_2 = 0;
    u32 r2_2 = 0;
    u32 r3_3 = 0;
    u32 r0_6 = 0;
    u32 r0_7 = 0;
    u32 r2_3 = 0;
    u32 r3_4 = 0;
    u32 r0_8 = 0;
    u32 r2_4 = 0;
    u32 r3_5 = 0;
    u32 r0_9 = 0;
    u32 r0_10 = 0;
    u32 r2_5 = 0;
    u32 r3_6 = 0;
    u32 r7_1 = 0;
    u32 r0_11 = 0;
    u32 r0_12 = 0;
    u32 r2_6 = 0;
    u32 r3_7 = 0;
    u32 r0_13 = 0;
    u32 r3_8 = 0;
    u32 r0_14 = 0;
    u32 zf_1 = 0;
    u32 r0_15 = 0;
    u32 r0_16 = 0;
    u32 r0_17 = 0;
    u32 r0_18 = 0;
    u32 r3_9 = 0;
    u32 r0_19 = 0;
    u32 res_1 = 0;
    u32 nf_1 = 0;
    u32 zf_2 = 0;
    u32 vf_1 = 0;
    u32 zf_3 = 0;
    u32 zf_4 = 0;
    u32 zf_5 = 0;
    r13 = r13 - 0x40u;  // (from the original)
    r9 = r0;
    r0_1 = r0 + (r9 << 3);
    r4 = 0x9b417cu + (r0_1 << 1);  // (from the original)
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
    r13 = r13 + 0x40u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r6;
L_5978ac:;
    if (r5 != 0x22u) {  // (from the original)
        goto L_597948;
    }
    guest::cpu()->r[13] = r13;
    r0_1 = call_0059ec48(r0_1, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0_1 + 1u == 0) {
        goto L_597948;
    }
    r7 = r0_1;
    r10 = 0x9b417cu + (r0_1 + (r7 << 3) << 1);  // (from the original)
    r0_2 = r13;
    guest::cpu()->r[13] = r13;
    call_005a064c(r0_2, r1, r2, r3);
    r3_1 = guest::cpu()->r[3];
    r0_3 = r13;
    guest::cpu()->r[13] = r13;
    r0_4 = call_0059f7c8(r0_3, r10, 5u, r3_1);
    r1_1 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    r11_1 = r13;
    guest::cpu()->r[13] = r13;
    r0_5 = call_002fc900(r0_4, r1_1, r2_1, r3_2);
    r1_2 = guest::cpu()->r[1];
    r2_2 = guest::cpu()->r[2];
    r3_3 = guest::cpu()->r[3];
    if (r0_5 != 0) {
        guest::cpu()->r[13] = r13;
        r0_6 = call_0030b6c4(r0_5, r1_2, r2_2, r3_3);
        r1_2 = guest::cpu()->r[1];
        r2_2 = guest::cpu()->r[2];
        r3_3 = guest::cpu()->r[3];
        if (r0_6 == 0) {
            goto L_597988;
        }
    }
    guest::cpu()->r[13] = r13;
    call_0059f4d8(r11_1, r1_2, r2_2, r3_3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
L_597918:;
    r0_1 = 0u;
    *gptr<u8>(r10 + 0x10u) = u8(r7);  // (from the original)
    *gptr<u8>(r10 + 0xeu) = u8(r0_1);  // (from the original)
    *gptr<u8>(r10 + 0xfu) = u8(r0_1);  // (from the original)
L_597948:;
    guest::cpu()->r[13] = r13;
    r0_7 = call_002f74c8(r0_1, r1, r2, r3);
    r2_3 = guest::cpu()->r[2];
    r3_4 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0_8 = call_002f74e0(0x20u, r0_7, r2_3, r3_4);  // (from the original)
    r1 = guest::cpu()->r[1];
    r2_4 = guest::cpu()->r[2];
    r3_5 = guest::cpu()->r[3];
    if (r0_8 == 0) {
        goto L_597a90;
    }
    if (r5 == 0xcu) {  // (from the original)
        goto L_5979a8;
    }
    if (r5 == 0xbu) {  // (from the original)
        guest::cpu()->r[13] = r13;
        call_0059eed8(r9, r1, r2_4, r3_5);
        r1 = guest::cpu()->r[1];
    }
    goto L_597a90;
L_597988:;
    guest::cpu()->r[13] = r13;
    call_006249b0(0x3au, 0u, r11_1, 0x16u);  // (from the original)
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    guest::preempt();
    goto L_597918;
L_5979a8:;
    r0_9 = r4 + 8u;
    guest::cpu()->r[13] = r13;
    r0_10 = call_002fcb34(r0_9, r1, r2_4, r3_5);
    r1 = guest::cpu()->r[1];
    r2_5 = guest::cpu()->r[2];
    r3_6 = guest::cpu()->r[3];
    r7_1 = r0_10;
    if (r0_10 != 0x36u) {  // (from the original)
        r0_11 = r4 + 8u;
        guest::cpu()->r[13] = r13;
        r0_10 = call_002fcb84(r0_11, 0x3413u, r2_5, r3_6);  // (from the original)
        r1 = guest::cpu()->r[1];
        r2_5 = guest::cpu()->r[2];
        r3_6 = guest::cpu()->r[3];
        if (r0_10 == 0) {
            goto L_597a20;
        }
    }
    guest::cpu()->r[13] = r13;
    r0_12 = call_002fc900(r0_10, r1, r2_5, r3_6);
    r1 = guest::cpu()->r[1];
    r2_6 = guest::cpu()->r[2];
    r3_7 = guest::cpu()->r[3];
    if (r0_12 != 0) {
        guest::cpu()->r[13] = r13;
        r0_12 = call_0030b6c4(r0_12, r1, r2_6, r3_7);
        r1 = guest::cpu()->r[1];
        r2_6 = guest::cpu()->r[2];
        r3_7 = guest::cpu()->r[3];
        if (r0_12 == 0) {
            goto L_597a90;
        }
    }
    guest::cpu()->r[13] = r13;
    r0_13 = call_002fb94c(r0_12, r1, r2_6, r3_7);
    r3_8 = guest::cpu()->r[3];
    r0_14 = r0_13 + 0x8ae0u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_0024b448(r0_14, 0x5fu, 1u, r3_8);  // (from the original)
    r1 = guest::cpu()->r[1];
    goto L_597a90;
L_597a20:;
    zf_1 = r7_1 == 0x37u;  // (from the original)
    if (!zf_1) {
        zf_1 = r7_1 == 0x38u;  // (from the original)
    }
    if (zf_1) {
        goto L_597a74;
    }
    r0_15 = r4 + 8u;
    guest::cpu()->r[13] = r13;
    r0_10 = call_002fcb84(r0_15, 0x3414u, r2_5, r3_6);  // (from the original)
    r1 = guest::cpu()->r[1];
    r2_5 = guest::cpu()->r[2];
    r3_6 = guest::cpu()->r[3];
    if (r0_10 != 0) {
        goto L_597a74;
    }
    r0_16 = r4 + 8u;
    guest::cpu()->r[13] = r13;
    r0_10 = call_002fcb84(r0_16, 0x3415u, r2_5, r3_6);  // (from the original)
    r1 = guest::cpu()->r[1];
    r2_5 = guest::cpu()->r[2];
    r3_6 = guest::cpu()->r[3];
    if (r0_10 != 0) {
        goto L_597a74;
    }
    r0_17 = r4 + 8u;
    guest::cpu()->r[13] = r13;
    r0_10 = call_002fcb84(r0_17, 0x3416u, r2_5, r3_6);  // (from the original)
    r1 = guest::cpu()->r[1];
    r2_5 = guest::cpu()->r[2];
    r3_6 = guest::cpu()->r[3];
    if (r0_10 == 0) {
        goto L_597a90;
    }
L_597a74:;
    guest::cpu()->r[13] = r13;
    r0_18 = call_002fb94c(r0_10, r1, r2_5, r3_6);
    r3_9 = guest::cpu()->r[3];
    r0_19 = r0_18 + 0x8ae0u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_0024b448(r0_19, 0x17u, 1u, r3_9);  // (from the original)
    r1 = guest::cpu()->r[1];
L_597a90:;
    res_1 = r5 - 0x17u;  // (from the original)
    nf_1 = res_1 >> 0x1f;  // (from the original)
    zf_2 = res_1 == 0;
    vf_1 = ((r5 ^ 0x17u) & (r5 ^ res_1)) >> 0x1f;  // (from the original)
    if (zf_2) {
        guest::preempt();
        goto L_5978a0;
    }
    if (!zf_2 && nf_1 == vf_1) {
        goto L_597ac8;
    }
    zf_3 = r5 == 2u;
    if (!zf_3) {
        zf_3 = r5 == 4u;
    }
    if (zf_3) {
        guest::preempt();
        goto L_5978a0;
    }
    zf_4 = r5 == 5u;
    if (!zf_4) {
        zf_4 = r5 == 0x15u;  // (from the original)
    }
    if (zf_4) {
        guest::preempt();
        goto L_5978a0;
    }
L_597ab4:;
    *gptr<u8>(r4 + 0x10u) = u8(r8);  // (from the original)
    *gptr<u8>(r4 + 0xeu) = u8(0u);  // (from the original)
    *gptr<u8>(r4 + 0xfu) = u8(0u);  // (from the original)
    guest::preempt();
    goto L_5978a0;
L_597ac8:;
    zf_5 = r5 == 0x18u;  // (from the original)
    if (!zf_5) {
        zf_5 = r5 == 0x19u;  // (from the original)
    }
    if (!zf_5) {
        zf_5 = r5 == 0x1au;  // (from the original)
    }
    if (zf_5) {
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
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r7_1 = 0;
    u32 r0_3 = 0;
    u32 r2_2 = 0;
    u32 r3_2 = 0;
    u32 r0_4 = 0;
    u32 r1_2 = 0;
    u32 r2_3 = 0;
    u32 r3_3 = 0;
    u32 r0_5 = 0;
    u32 r0_6 = 0;
    u32 r3_4 = 0;
    u32 r0_7 = 0;
    u32 r2_4 = 0;
    u32 r3_5 = 0;
    u32 r0_8 = 0;
    u32 r2_5 = 0;
    u32 r3_6 = 0;
    u32 r0_9 = 0;
    u32 r2_6 = 0;
    u32 r3_7 = 0;
    u32 r0_10 = 0;
    u32 r6_1 = 0;
    u32 r1_3 = 0;
    u32 r0_11 = 0;
    u32 r1_4 = 0;
    r13 = r13 - 0x38u;  // (from the original)
    r0_1 = r13 + 0x1cu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_2 = call_002fc20c(r0_1, r1, r2, r3);
    r1_1 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    r7_1 = r13 + 0x1cu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_3 = call_002f74c8(r0_2, r1_1, r2_1, r3_1);
    r2_2 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0_4 = call_002f74e0(4u, r0_3, r2_2, r3_2);
    r1_2 = guest::cpu()->r[1];
    r2_3 = guest::cpu()->r[2];
    r3_3 = guest::cpu()->r[3];
    if (r0_4 == 0) {
        goto L_597cbc;
    }
    guest::cpu()->r[13] = r13;
    r0_5 = call_006a5e34(r0_4, r1_2, r2_3, r3_3);
    guest::cpu()->r[13] = r13;
    r0_6 = call_002feb00(r0_5, r0, r1, 0u);
    r1_2 = guest::cpu()->r[1];
    r3_4 = guest::cpu()->r[3];
    if (r0_6 == 0) {
        goto L_597cbc;
    }
    guest::cpu()->r[13] = r13;
    r0_7 = call_005a06d4(r0, r1, 0xa5u, r3_4);  // (from the original)
    r1_2 = guest::cpu()->r[1];
    r2_4 = guest::cpu()->r[2];
    r3_5 = guest::cpu()->r[3];
    if (r0_7 + 1u != 0) {
        goto L_597cbc;
    }
    guest::cpu()->r[13] = r13;
    r0_8 = call_002fcb9c(r0_6, r1_2, r2_4, r3_5);
    r1_2 = guest::cpu()->r[1];
    r2_5 = guest::cpu()->r[2];
    r3_6 = guest::cpu()->r[3];
    if (r0_8 == 0) {
        goto L_597cbc;
    }
    guest::cpu()->r[13] = r13;
    r0_9 = call_002fcb34(r0_6, r1_2, r2_5, r3_6);
    r1_2 = guest::cpu()->r[1];
    r2_6 = guest::cpu()->r[2];
    r3_7 = guest::cpu()->r[3];
    if (r0_9 == 0x41u) {  // (from the original)
        goto L_597cd0;
    }
L_597cbc:;
    r0_10 = ~0u;
    r13 = r13 + 0x38u;  // (from the original)
    guest::cpu()->r[1] = r1_2;
    guest::cpu()->r[13] = r13;
    return r0_10;
L_597cd0:;
    guest::cpu()->r[13] = r13;
    call_002fc8e8(r7_1, r0_6, r2_6, r3_7);
    r6_1 = r13 + 4u;
    *gptr<u32>(r13 + 0x14u) = u32(0u);  // (from the original)
    *gptr<u32>(r13 + 0xcu) = u32(0u);  // (from the original)
    *gptr<u32>(r13 + 0x10u) = u32(0u);  // (from the original)
    *gptr<u32>(r13) = u32(r0);
    *gptr<u32>(r13 + 0x18u) = u32(0u);  // (from the original)
    r1_3 = r13 + 0x1cu;  // (from the original)
    *gptr<u32>(r6_1) = u32(r1);
    *gptr<u32>(r6_1 + 4) = u32(0u);
    guest::cpu()->r[13] = r13;
    r0_11 = call_0059f194(0x20u, r1_3, 0x95bfdcu, 0x95bfdcu);  // (from the original)
    r1_4 = guest::cpu()->r[1];
    r13 = r13 + 0x38u;  // (from the original)
    guest::cpu()->r[1] = r1_4;
    guest::cpu()->r[13] = r13;
    return r0_11;
}

}  // namespace d_00597c30
GUEST_EXPORT(0x00597c30, d_00597c30::f_00597c30);

// f_00597d28: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00597d28 {

inline guest::global<u32, 0x0094f524> global_0094f524;  // (from the original)
inline guest::global<u8, 0x00950145> global_00950145;  // (from the original)
inline guest::global<u32, 0x00952694> global_00952694;  // (from the original)
inline guest::global<u8, 0x00953f68> global_00953f68;  // (from the original)
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
    u32 r13 = guest::cpu()->r[13];
    u32 r5_1 = 0;
    u32 r6_1 = 0;
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r0_5 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r0_6 = 0;
    u32 r1_1 = 0;
    u32 r2_2 = 0;
    u32 r3_2 = 0;
    u32 r0_7 = 0;
    u32 r2_3 = 0;
    u32 r3_3 = 0;
    u32 r0_8 = 0;
    u32 res_1 = 0;
    u32 r0_9 = 0;
    u32 r0_10 = 0;
    u32 r0_11 = 0;
    u32 r1_2 = 0;
    u32 r2_4 = 0;
    u32 r3_4 = 0;
    u32 r0_12 = 0;
    u32 r1_3 = 0;
    u32 r2_5 = 0;
    u32 r3_5 = 0;
    u32 r0_13 = 0;
    u32 r2_6 = 0;
    u32 r3_6 = 0;
    u32 r0_14 = 0;
    u32 res_2 = 0;
    u32 r0_15 = 0;
    u32 r0_16 = 0;
    u32 r0_17 = 0;
    u32 r2_7 = 0;
    u32 r3_7 = 0;
    u32 r1_4 = 0;
    u32 r2_8 = 0;
    u32 r3_8 = 0;
    u32 r1_5 = 0;
    u32 r2_9 = 0;
    u32 r3_9 = 0;
    u32 r0_18 = 0;
    u32 r1_6 = 0;
    u32 r2_10 = 0;
    u32 r3_10 = 0;
    u32 res_3 = 0;
    u32 nf_1 = 0;
    u32 zf_1 = 0;
    u32 vf_1 = 0;
    u32 res_4 = 0;
    u32 r0_19 = 0;
    u32 r2_11 = 0;
    u32 r3_11 = 0;
    u32 r0_20 = 0;
    u32 r0_21 = 0;
    u32 r2_12 = 0;
    u32 r3_12 = 0;
    u32 r1_7 = 0;
    u32 r0_22 = 0;
    u32 r2_13 = 0;
    u32 r3_13 = 0;
    u32 r0_23 = 0;
    u32 r0_24 = 0;
    u32 r0_25 = 0;
    u32 r1_8 = 0;
    u32 r2_14 = 0;
    u32 r3_14 = 0;
    u32 r0_26 = 0;
    u32 zf_2 = 0;
    u32 r1_9 = 0;
    u32 r0_27 = 0;
    u32 r2_15 = 0;
    u32 r3_15 = 0;
    u32 r0_28 = 0;
    u32 r0_29 = 0;
    u32 r2_16 = 0;
    u32 r3_16 = 0;
    u32 r0_30 = 0;
    u32 zf_3 = 0;
    u32 r1_10 = 0;
    *gptr<u32>(r13 + 0xffffffe0u) = u32(r3);  // (from the original)
    r13 = r13 - 0x20;  // (from the original)
    r5_1 = r1;
    r6_1 = r0;
    if ((*gptr<u32>(0x952694u + 4u) & 1u) != 0) {  // (from the original)
        goto L_597d74;
    }
    r0_1 = 0x952694u + 4u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_2 = call_002fe7dc(r0_1, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0_2 == 0) {
        goto L_597d74;
    }
    r0_3 = 0x952694u + 8u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_002fcbb0(r0_3, 0x26u, r2, r3);  // (from the original)
    r3 = guest::cpu()->r[3];
    r2 = 0x100000u;  // (from the original)
    r1 = 0x2f777cu;  // (from the original)
L_597d74:;
    if ((*global_00952694 & 1u) != 0) {
        goto L_597db8;
    }
    guest::cpu()->r[13] = r13;
    r0_4 = call_002fe7dc(0x952694u, r1, r2, r3);  // (from the original)
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0_4 == 0) {
        goto L_597db8;
    }
    guest::cpu()->r[13] = r13;
    call_002fcbb0(0x9526a0u, 0x2bu, r2, r3);  // (from the original)
    r3 = guest::cpu()->r[3];
    r2 = 0x100000u;  // (from the original)
L_597db8:;
    guest::cpu()->r[13] = r13;
    r0_5 = call_002fcb84(r5_1, 0x72u, r2, r3);  // (from the original)
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    if (r0_5 != 0) {
        guest::cpu()->r[13] = r13;
        r0_6 = call_002fc8e8(r6_1, 0x95269cu, r2_1, r3_1);  // (from the original)
        r1_1 = guest::cpu()->r[1];
        r2_2 = guest::cpu()->r[2];
        r3_2 = guest::cpu()->r[3];
        guest::cpu()->r[13] = r13;
        r0_7 = call_00300904(r0_6, r1_1, r2_2, r3_2);
        r1 = guest::cpu()->r[1];
        r2_3 = guest::cpu()->r[2];
        r3_3 = guest::cpu()->r[3];
        if (r0_7 != 0) {
            goto L_597ed4;
        }
        r0_8 = *gptr<u32>(0xaaef18u + 0x234u);  // (from the original)
        if (r0_8 == 0) {
            goto L_597ed4;
        }
        res_1 = u32(*gptr<u8>(r0_8 + 0x5701u)) << 0x1e;  // (from the original)
        if (!(res_1 >> 0x1f)) {  // (from the original)
            goto L_597ed4;
        }
        r0_9 = *global_0094f524;
        if (r0_9 == 0) {
            goto L_597ed4;
        }
        guest::cpu()->r[13] = r13;
        r0_10 = call_002aab48(r0_9, 0xcu, r2_3, r3_3);  // (from the original)
        r1 = guest::cpu()->r[1];
        if (*gptr<u32>(r0_10) != 0) {
            goto L_597ed4;
        }
        if (u32(*global_00950145) != 0) {
            goto L_597ed4;
        }
        goto L_597edc;
    }
    guest::cpu()->r[13] = r13;
    r0_11 = call_002fcb84(r5_1, 0x77u, r2_1, r3_1);  // (from the original)
    r1_2 = guest::cpu()->r[1];
    r2_4 = guest::cpu()->r[2];
    r3_4 = guest::cpu()->r[3];
    if (r0_11 == 0) {
        goto L_597ee4;
    }
    guest::cpu()->r[13] = r13;
    r0_12 = call_002fc8e8(r6_1, 0x9526a0u, r2_4, r3_4);  // (from the original)
    r1_3 = guest::cpu()->r[1];
    r2_5 = guest::cpu()->r[2];
    r3_5 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0_13 = call_00300904(r0_12, r1_3, r2_5, r3_5);
    r1 = guest::cpu()->r[1];
    r2_6 = guest::cpu()->r[2];
    r3_6 = guest::cpu()->r[3];
    if (r0_13 != 0) {
        goto L_597ed4;
    }
    r0_14 = *gptr<u32>(0xaaef18u + 0x234u);  // (from the original)
    if (r0_14 == 0) {
        goto L_597ed4;
    }
    res_2 = u32(*gptr<u8>(r0_14 + 0x5701u)) << 0x1e;  // (from the original)
    if (!(res_2 >> 0x1f)) {  // (from the original)
        goto L_597ed4;
    }
    r0_15 = *global_0094f524;
    if (r0_15 == 0) {
        goto L_597ed4;
    }
    guest::cpu()->r[13] = r13;
    r0_16 = call_002aab48(r0_15, 0xcu, r2_6, r3_6);  // (from the original)
    r1 = guest::cpu()->r[1];
    if (*gptr<u32>(r0_16) != 0) {
        goto L_597ed4;
    }
    if (u32(*global_00950145) == 0) {
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
    r13 = r13 + 0x20;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return 3u;
L_597ee4:;
    guest::cpu()->r[13] = r13;
    r0_17 = call_002ff0b8(r5_1, r1_2, r2_4, r3_4);
    r2_7 = guest::cpu()->r[2];
    r3_7 = guest::cpu()->r[3];
    if (r0_17 == 0) {
        goto L_597f74;
    }
    guest::cpu()->r[13] = r13;
    call_002fc8e8(r6_1, r5_1, r2_7, r3_7);
    r1_4 = guest::cpu()->r[1];
    r2_8 = guest::cpu()->r[2];
    r3_8 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    call_006b9934(r6_1, r1_4, r2_8, r3_8);
    r1_5 = guest::cpu()->r[1];
    r2_9 = guest::cpu()->r[2];
    r3_9 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0_18 = call_0076ad24(r5_1, r1_5, r2_9, r3_9);
    r1_6 = guest::cpu()->r[1];
    r2_10 = guest::cpu()->r[2];
    r3_10 = guest::cpu()->r[3];
    res_3 = r0_18 + 1u;
    nf_1 = res_3 >> 0x1f;  // (from the original)
    zf_1 = res_3 == 0;
    vf_1 = ((r0_18 ^ res_3) & (1u ^ res_3)) >> 0x1f;  // (from the original)
    if (!zf_1) {
        res_4 = r0_18 - 3u;
        nf_1 = res_4 >> 0x1f;  // (from the original)
        zf_1 = res_4 == 0;
        vf_1 = ((r0_18 ^ 3u) & (r0_18 ^ res_4)) >> 0x1f;  // (from the original)
    }
    if (zf_1 || nf_1 != vf_1) {
        goto L_597f6c;
    }
    guest::cpu()->r[13] = r13;
    r0_19 = call_002ff6f8(4u, r1_6, r2_10, r3_10);
    r2_11 = guest::cpu()->r[2];
    r3_11 = guest::cpu()->r[3];
    r1_6 = r0_18 - 3u;
    if (s32(r1_6) <= s32(r0_19)) {
        goto L_597f6c;
    }
    r0_20 = r13;
    guest::cpu()->r[13] = r13;
    r0_21 = call_002fcbb0(r0_20, 6u, r2_11, r3_11);
    r2_12 = guest::cpu()->r[2];
    r3_12 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    call_002fc8e8(r6_1, r0_21, r2_12, r3_12);
    r1_7 = guest::cpu()->r[1];
    r13 = r13 + 0x20;  // (from the original)
    guest::cpu()->r[1] = r1_7;
    guest::cpu()->r[13] = r13;
    return 4u;
L_597f6c:;
    r13 = r13 + 0x20;  // (from the original)
    guest::cpu()->r[1] = r1_6;
    guest::cpu()->r[13] = r13;
    return 1u;
L_597f74:;
    guest::cpu()->r[13] = r13;
    r0_22 = call_002fcb84(r5_1, 0x71u, r2_7, r3_7);  // (from the original)
    r2_13 = guest::cpu()->r[2];
    r3_13 = guest::cpu()->r[3];
    if (r0_22 != 0) {
        goto L_597ff4;
    }
    guest::cpu()->r[13] = r13;
    r0_23 = call_002fcb84(r5_1, 0x73u, r2_13, r3_13);  // (from the original)
    r2_13 = guest::cpu()->r[2];
    r3_13 = guest::cpu()->r[3];
    if (r0_23 != 0) {
        goto L_597ff4;
    }
    guest::cpu()->r[13] = r13;
    r0_24 = call_002fcb84(r5_1, 0x75u, r2_13, r3_13);  // (from the original)
    r2_13 = guest::cpu()->r[2];
    r3_13 = guest::cpu()->r[3];
    if (r0_24 != 0) {
        goto L_597ff4;
    }
    guest::cpu()->r[13] = r13;
    r0_25 = call_002fcb84(r5_1, 0x74u, r2_13, r3_13);  // (from the original)
    r1_8 = guest::cpu()->r[1];
    r2_14 = guest::cpu()->r[2];
    r3_14 = guest::cpu()->r[3];
    if (r0_25 == 0) {
        goto L_598008;
    }
    guest::cpu()->r[13] = r13;
    r0_26 = call_00305f2c(r0_25, r1_8, r2_14, r3_14);
    r1 = guest::cpu()->r[1];
    r2_13 = guest::cpu()->r[2];
    r3_13 = guest::cpu()->r[3];
    zf_2 = r0_26 == 3u;
    if (!zf_2) {
        zf_2 = *gptr<u32>(0xaaef18u + 0x234u) == 0;  // (from the original)
    }
    if (zf_2) {
        goto L_597ff4;
    }
    if (u32(*global_00953f68) == 1u) {
        guest::preempt();
        goto L_597ed4;
    }
L_597ff4:;
    guest::cpu()->r[13] = r13;
    call_002fc8e8(r6_1, 0x95269cu, r2_13, r3_13);  // (from the original)
    r1_9 = guest::cpu()->r[1];
    r13 = r13 + 0x20;  // (from the original)
    guest::cpu()->r[1] = r1_9;
    guest::cpu()->r[13] = r13;
    return 2u;
L_598008:;
    guest::cpu()->r[13] = r13;
    r0_27 = call_002fcb84(r5_1, 0x76u, r2_14, r3_14);  // (from the original)
    r2_15 = guest::cpu()->r[2];
    r3_15 = guest::cpu()->r[3];
    if (r0_27 != 0) {
        goto L_598088;
    }
    guest::cpu()->r[13] = r13;
    r0_28 = call_002fcb84(r5_1, 0x78u, r2_15, r3_15);  // (from the original)
    r2_15 = guest::cpu()->r[2];
    r3_15 = guest::cpu()->r[3];
    if (r0_28 != 0) {
        goto L_598088;
    }
    guest::cpu()->r[13] = r13;
    r0_29 = call_002fcb84(r5_1, 0x7au, r2_15, r3_15);  // (from the original)
    r2_15 = guest::cpu()->r[2];
    r3_15 = guest::cpu()->r[3];
    if (r0_29 != 0) {
        goto L_598088;
    }
    guest::cpu()->r[13] = r13;
    r0 = call_002fcb84(r5_1, 0x79u, r2_15, r3_15);  // (from the original)
    r1 = guest::cpu()->r[1];
    r2_16 = guest::cpu()->r[2];
    r3_16 = guest::cpu()->r[3];
    if (r0 == 0) {
        guest::preempt();
        goto L_597ed8;
    }
    guest::cpu()->r[13] = r13;
    r0_30 = call_00305f2c(r0, r1, r2_16, r3_16);
    r1 = guest::cpu()->r[1];
    r2_15 = guest::cpu()->r[2];
    r3_15 = guest::cpu()->r[3];
    zf_3 = r0_30 == 3u;
    if (!zf_3) {
        zf_3 = *gptr<u32>(0xaaef18u + 0x234u) == 0;  // (from the original)
    }
    if (zf_3) {
        goto L_598088;
    }
    if (u32(*global_00953f68) == 1u) {
        guest::preempt();
        goto L_597ed4;
    }
L_598088:;
    guest::cpu()->r[13] = r13;
    call_002fc8e8(r6_1, 0x9526a0u, r2_15, r3_15);  // (from the original)
    r1_10 = guest::cpu()->r[1];
    r13 = r13 + 0x20;  // (from the original)
    guest::cpu()->r[1] = r1_10;
    guest::cpu()->r[13] = r13;
    return 2u;
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
    u32 r4 = guest::cpu()->r[4];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r9 = guest::cpu()->r[9];
    u32 r10 = guest::cpu()->r[10];
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
    u32 r2_3 = 0;
    u32 r3_3 = 0;
    u32 r0_5 = 0;
    u32 r1_2 = 0;
    *gptr<u32>(r13 + 0xffffffd8u) = u32(r3);  // (from the original)
    r13 = r13 - 0x28;  // (from the original)
    r10 = r0;
    guest::cpu()->r[13] = r13;
    r0_1 = call_006a5e34(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    r9 = r0_1;
    if (r0_1 == 0) {
        goto L_598210;
    }
    guest::cpu()->r[13] = r13;
    r0_2 = call_00752990(r0_1, r1, r2_1, r3_1);
    r1_1 = guest::cpu()->r[1];
    r2_2 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    r6 = r0_2;
    guest::cpu()->r[13] = r13;
    r0_3 = call_00752998(r9, r1_1, r2_2, r3_2);
    r1 = guest::cpu()->r[1];
    r8 = r0_3;
    r7 = 0u;
    if (r0_3 < 0u || r0_3 == 0) {
        goto L_598210;
    }
L_598194:;
    r4 = 0u;
    if (r6 < 0u || r6 == 0) {
        goto L_598204;
    }
L_5981a0:;
    guest::cpu()->r[13] = r13;
    r0_4 = call_002feb00(r9, r4, r7, 0u);
    r1 = guest::cpu()->r[1];
    r2_3 = guest::cpu()->r[2];
    r3_3 = guest::cpu()->r[3];
    if (r0_4 == 0) {
        goto L_5981f8;
    }
    guest::cpu()->r[13] = r13;
    r0_5 = call_002fcb84(r0_4, 0xcdu, r2_3, r3_3);  // (from the original)
    r1 = guest::cpu()->r[1];
    if (r0_5 == 0) {
        goto L_5981f8;
    }
    *gptr<u32>(r13) = u32(0u);
    guest::cpu()->r[13] = r13;
    call_0059a9ac(r10, r0_4, r4, r7);
    r1_2 = guest::cpu()->r[1];
    r13 = r13 + 0x28;  // (from the original)
    guest::cpu()->r[1] = r1_2;
    guest::cpu()->r[13] = r13;
    return 1u;
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
    r13 = r13 + 0x28;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return 0u;
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
    u32 r2_3 = 0;
    u32 r3_3 = 0;
    u32 r0_5 = 0;
    u32 r2_4 = 0;
    u32 r3_4 = 0;
    u32 r0_6 = 0;
    u32 r2_5 = 0;
    u32 r3_5 = 0;
    u32 r0_7 = 0;
    u32 r0_8 = 0;
    u32 r1_2 = 0;
    u32 r0_9 = 0;
    r13 = r13 - 0x30u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_1 = call_002f74c8(r0, r1, r2, r3);
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0_2 = call_002f74e0(4u, r0_1, r2_1, r3_1);
    r1_1 = guest::cpu()->r[1];
    r2_2 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    if (r0_2 == 0) {
        r0_9 = ~0u;
        r13 = r13 + 0x30u;  // (from the original)
        guest::cpu()->r[1] = r1_1;
        guest::cpu()->r[13] = r13;
        return r0_9;
    }
    guest::cpu()->r[13] = r13;
    r0_3 = call_006a5e34(r0_2, r1_1, r2_2, r3_2);
    guest::cpu()->r[13] = r13;
    r0_4 = call_002feb00(r0_3, r0, r1, 0u);
    r1_1 = guest::cpu()->r[1];
    r2_3 = guest::cpu()->r[2];
    r3_3 = guest::cpu()->r[3];
    if (r0_4 == 0) {
        r0_9 = ~0u;
        r13 = r13 + 0x30u;  // (from the original)
        guest::cpu()->r[1] = r1_1;
        guest::cpu()->r[13] = r13;
        return r0_9;
    }
    guest::cpu()->r[13] = r13;
    r0_5 = call_002fcaf4(r0_4, r1_1, r2_3, r3_3);
    r1_1 = guest::cpu()->r[1];
    r2_4 = guest::cpu()->r[2];
    r3_4 = guest::cpu()->r[3];
    if (r0_5 != 0) {
        r0_9 = ~0u;
        r13 = r13 + 0x30u;  // (from the original)
        guest::cpu()->r[1] = r1_1;
        guest::cpu()->r[13] = r13;
        return r0_9;
    }
    guest::cpu()->r[13] = r13;
    r0_6 = call_002fcb84(r0_4, 0x9eu, r2_4, r3_4);  // (from the original)
    r2_5 = guest::cpu()->r[2];
    r3_5 = guest::cpu()->r[3];
    if (r0_6 == 0) {
        guest::cpu()->r[13] = r13;
        r0_7 = call_002fcb84(r0_4, 0x9du, r2_5, r3_5);  // (from the original)
        r1_1 = guest::cpu()->r[1];
        if (r0_7 == 0) {
            r0_9 = ~0u;
            r13 = r13 + 0x30u;  // (from the original)
            guest::cpu()->r[1] = r1_1;
            guest::cpu()->r[13] = r13;
            return r0_9;
        }
    }
    *gptr<u32>(r13 + 0x14u) = u32(0u);  // (from the original)
    *gptr<u32>(r13 + 0x18u) = u32(0u);  // (from the original)
    *gptr<u32>(r13 + 0xcu) = u32(0u);  // (from the original)
    *gptr<u32>(r13 + 0x10u) = u32(0u);  // (from the original)
    *gptr<u32>(r13 + 8u) = u32(0u);
    *gptr<u32>(r13) = u32(r0);
    *gptr<u32>(r13 + 4) = u32(r1);
    guest::cpu()->r[13] = r13;
    r0_8 = call_0059f194(7u, r0_4, 0x95bfdcu, 0x95bfdcu);  // (from the original)
    r1_2 = guest::cpu()->r[1];
    r13 = r13 + 0x30u;  // (from the original)
    guest::cpu()->r[1] = r1_2;
    guest::cpu()->r[13] = r13;
    return r0_8;
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
    u32 r13 = guest::cpu()->r[13];
    u32 r4_1 = 0;
    u32 r0_1 = 0;
    u32 r2_1 = 0;
    u32 r1_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r1_2 = 0;
    u32 r2_2 = 0;
    u32 r3_1 = 0;
    u32 r0_4 = 0;
    u32 r0_5 = 0;
    u32 r0_6 = 0;
    u32 r0_7 = 0;
    u32 r1_3 = 0;
    u32 ea_1 = 0;
    u32 ea_2 = 0;
    u32 ea_3 = 0;
    u32 ea_4 = 0;
    u32 ea_5 = 0;
    u32 r1_4 = 0;
    u32 r2_3 = 0;
    u32 r0_8 = 0;
    r13 = r13 - 0x40u;  // (from the original)
    r4_1 = r1;
    if (r1 == 4u) {
        guest::cpu()->r[13] = r13;
        r0_1 = call_002ff8b0(4u, r1, r2, r3);
        r4_1 = r0_1;
    }
    r2_1 = r13 + 0x28u;  // (from the original)
    r1_1 = r13 + 0x20u;  // (from the original)
    r0_2 = r13 + 0x1cu;  // (from the original)
    *gptr<u32>(r13) = u32(0u);
    guest::cpu()->r[13] = r13;
    r0_3 = call_005985c4(r0_2, r1_1, r2_1, 2u);
    r1_2 = guest::cpu()->r[1];
    r2_2 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    if (r0_3 == 0) {
        r0_4 = ~0u;
        r13 = r13 + 0x40u;  // (from the original)
        guest::cpu()->r[1] = r1_2;
        guest::cpu()->r[13] = r13;
        return r0_4;
    }
    r0_5 = r13 + 0x24u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_002fcbb0(r0_5, 0x9du, r2_2, r3_1);  // (from the original)
    r0_6 = r13 + 0x24u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_7 = call_00304f30(r0_6, 0u, r4_1, r0);
    r1_3 = guest::cpu()->r[1];
    if (r0_7 == 0) {
        r0_8 = ~0u;
        r13 = r13 + 0x40u;  // (from the original)
        guest::cpu()->r[1] = r1_3;
        guest::cpu()->r[13] = r13;
        return r0_8;
    }
    ea_1 = r13 + 0xcu;  // (from the original)
    *gptr<u32>(ea_1) = u32(0u);
    ea_2 = r13 + 0x10u;  // (from the original)
    *gptr<u32>(ea_2) = u32(0u);
    ea_3 = r13 + 0x14u;  // (from the original)
    *gptr<u32>(ea_3) = u32(0u);
    ea_4 = r13 + 0x18u;  // (from the original)
    *gptr<u32>(ea_4) = u32(0u);
    ea_5 = r13 + 0x1cu;  // (from the original)
    r1_4 = *gptr<u32>(ea_5 + 4);
    r2_3 = r13 + 0x24u;  // (from the original)
    *gptr<u32>(r13) = u32(*gptr<u32>(ea_5));
    *gptr<u32>(r13 + 4) = u32(r1_4);
    *gptr<u32>(r13 + 8) = u32(0u);
    guest::cpu()->r[13] = r13;
    r0_4 = call_0059f194(0xdu, 0x95bfdcu, r2_3, 0x95bfdcu);  // (from the original)
    r1_2 = guest::cpu()->r[1];
    r13 = r13 + 0x40u;  // (from the original)
    guest::cpu()->r[1] = r1_2;
    guest::cpu()->r[13] = r13;
    return r0_4;
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
    u32 r3_3 = 0;
    u32 r0_5 = 0;
    u32 r2_3 = 0;
    u32 r3_4 = 0;
    u32 r0_6 = 0;
    u32 r0_7 = 0;
    u32 r1_2 = 0;
    u32 r0_8 = 0;
    r13 = r13 - 0x30u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_1 = call_002f74c8(r0, r1, r2, r3);
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0_2 = call_002f74e0(4u, r0_1, r2_1, r3_1);
    r1_1 = guest::cpu()->r[1];
    r2_2 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    if (r0_2 == 0) {
        r0_8 = ~0u;
        r13 = r13 + 0x30u;  // (from the original)
        guest::cpu()->r[1] = r1_1;
        guest::cpu()->r[13] = r13;
        return r0_8;
    }
    guest::cpu()->r[13] = r13;
    r0_3 = call_006a5e34(r0_2, r1_1, r2_2, r3_2);
    guest::cpu()->r[13] = r13;
    r0_4 = call_002feb00(r0_3, r0, r1, 0u);
    r1_1 = guest::cpu()->r[1];
    r3_3 = guest::cpu()->r[3];
    if (r0_4 == 0) {
        r0_8 = ~0u;
        r13 = r13 + 0x30u;  // (from the original)
        guest::cpu()->r[1] = r1_1;
        guest::cpu()->r[13] = r13;
        return r0_8;
    }
    guest::cpu()->r[13] = r13;
    r0_5 = call_005a06d4(r0, r1, 0xa5u, r3_3);  // (from the original)
    r1_1 = guest::cpu()->r[1];
    r2_3 = guest::cpu()->r[2];
    r3_4 = guest::cpu()->r[3];
    if (r0_5 + 1u != 0) {
        r0_8 = ~0u;
        r13 = r13 + 0x30u;  // (from the original)
        guest::cpu()->r[1] = r1_1;
        guest::cpu()->r[13] = r13;
        return r0_8;
    }
    guest::cpu()->r[13] = r13;
    r0_6 = call_00768dc4(r0_4, 1u, r2_3, r3_4);
    r1_1 = guest::cpu()->r[1];
    if (r0_6 == 0) {
        r0_8 = ~0u;
        r13 = r13 + 0x30u;  // (from the original)
        guest::cpu()->r[1] = r1_1;
        guest::cpu()->r[13] = r13;
        return r0_8;
    }
    *gptr<u32>(r13 + 0x14u) = u32(0u);  // (from the original)
    *gptr<u32>(r13 + 0x18u) = u32(0u);  // (from the original)
    *gptr<u32>(r13 + 0xcu) = u32(0u);  // (from the original)
    *gptr<u32>(r13 + 0x10u) = u32(0u);  // (from the original)
    *gptr<u32>(r13 + 8u) = u32(0u);
    *gptr<u32>(r13) = u32(r0);
    *gptr<u32>(r13 + 4) = u32(r1);
    guest::cpu()->r[13] = r13;
    r0_7 = call_0059f194(0x1du, r0_4, r0_4, 0x95bfdcu);  // (from the original)
    r1_2 = guest::cpu()->r[1];
    r13 = r13 + 0x30u;  // (from the original)
    guest::cpu()->r[1] = r1_2;
    guest::cpu()->r[13] = r13;
    return r0_7;
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
    u32 r13 = guest::cpu()->r[13];
    u32 r4_1 = 0;
    u32 r12_1 = 0;
    u32 zf_1 = 0;
    u32 r4_2 = 0;
    u32 r12_2 = 0;
    u32 cf_1 = 0;
    r13 = r13 - 8;
    r4_1 = *gptr<u32>(r13 + 8u);
    r12_1 = r4_1 & 0x70u;  // (from the original)
    zf_1 = r4_1 == 0;
    r4_2 = r4_1 & 7u;
    if (!zf_1) {
        zf_1 = r4_2 == 0;
    }
    r12_2 = r12_1 >> 4;
    if (!zf_1) {
        zf_1 = r12_2 == 0;
    }
    if (!zf_1) {
        cf_1 = r4_2 >= 8u;
        if (!cf_1) {
            cf_1 = r12_2 >= 8u;
        }
        if (!cf_1) {
            goto L_5992d0;
        }
    }
    r13 = r13 + 8;
    guest::cpu()->r[13] = r13;
    return 0u;
L_5992d0:;
    *gptr<u32>(r0) = u32(r2 + *gptr<u32>(0x85f1ecu + (r4_2 << 2)));  // (from the original)
    arg1->word_0 = u32(*gptr<u32>(0x85f1ecu + (r12_2 << 2)) + r3);  // (from the original)
    r13 = r13 + 8;
    guest::cpu()->r[13] = r13;
    return 1u;
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
    u32 r0_1 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r0_2 = 0;
    u32 r1_1 = 0;
    u32 r2_2 = 0;
    u32 r3_2 = 0;
    u32 r0_3 = 0;
    u32 r2_3 = 0;
    u32 r3_3 = 0;
    u32 r2_4 = 0;
    u32 r3_4 = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r0_1 = call_002f74c8(r0, r1, r2, r3);
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    r0_2 = call_002f74e0(4u, r0_1, r2_1, r3_1);
    r1_1 = guest::cpu()->r[1];
    r2_2 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    if (r0_2 == 0) {
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        guest::cpu()->r[1] = r1_1;
        return r0_2;
    }
    r0_3 = call_006a5e34(r0_2, r1_1, r2_2, r3_2);
    r0_2 = call_002feb00(r0_3, r0, r1, 0u);
    r1_1 = guest::cpu()->r[1];
    r2_3 = guest::cpu()->r[2];
    r3_3 = guest::cpu()->r[3];
    if (r0_2 == 0) {
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        guest::cpu()->r[1] = r1_1;
        return r0_2;
    }
    r0_2 = call_002fccdc(r0_2, r1_1, r2_3, r3_3);
    r1_1 = guest::cpu()->r[1];
    r2_4 = guest::cpu()->r[2];
    r3_4 = guest::cpu()->r[3];
    if (r0_2 == 0x1du) {  // (from the original)
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        guest::cpu()->r[1] = r1_1;
        return r0_2;
    }
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    return call_0059c934(r0, r1, r2_4, r3_4);
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
    u32 r13 = guest::cpu()->r[13];
    u32 r1_1 = 0;
    u32 r0_1 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r0_2 = 0;
    u32 r1_2 = 0;
    u32 r0_3 = 0;
    u32 r1_3 = 0;
    u32 r2_2 = 0;
    u32 r3_2 = 0;
    u32 r0_4 = 0;
    u32 r1_4 = 0;
    u32 r1_5 = 0;
    u32 r2_3 = 0;
    u32 r0_5 = 0;
    u32 r1_6 = 0;
    u32 r2_4 = 0;
    u32 r3_3 = 0;
    u32 r0_6 = 0;
    u32 r1_7 = 0;
    u32 r2_5 = 0;
    u32 r3_4 = 0;
    u32 r0_7 = 0;
    u32 r1_8 = 0;
    u32 r1_9 = 0;
    u32 r2_6 = 0;
    u32 r0_8 = 0;
    u32 r1_10 = 0;
    r13 = r13 - 0x10u;  // (from the original)
    r1_1 = r13 + 4u;
    r0_1 = r13;
    guest::cpu()->r[13] = r13;
    call_003171b4(r0_1, r1_1, r0, r3);
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    r0_2 = *gptr<u32>(r13);
    r1_2 = *gptr<u32>(r13 + 4);
    guest::cpu()->r[13] = r13;
    r0_3 = call_0059c934(r0_2, r1_2, r2_1, r3_1);
    r1_3 = guest::cpu()->r[1];
    r2_2 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0_4 = call_006a5e34(r0_3, r1_3, r2_2, r3_2);
    r1_4 = guest::cpu()->r[1];
    if (r0_4 == 0) {
        r13 = r13 + 0x10u;  // (from the original)
        guest::cpu()->r[1] = r1_4;
        guest::cpu()->r[13] = r13;
        return r0_4;
    }
    r1_5 = *gptr<u32>(r13);
    r2_3 = *gptr<u32>(r13 + 4);
    guest::cpu()->r[13] = r13;
    r0_5 = call_002feb00(r0_4, r1_5, r2_3, 0u);
    r1_6 = guest::cpu()->r[1];
    r2_4 = guest::cpu()->r[2];
    r3_3 = guest::cpu()->r[3];
    if (r0_5 == 0) {
        r13 = r13 + 0x10u;  // (from the original)
        guest::cpu()->r[1] = r1_6;
        guest::cpu()->r[13] = r13;
        return r0_5;
    }
    guest::cpu()->r[13] = r13;
    r0_6 = call_002fccdc(r0_5, r1_6, r2_4, r3_3);
    r1_7 = guest::cpu()->r[1];
    r2_5 = guest::cpu()->r[2];
    r3_4 = guest::cpu()->r[3];
    if (r0_6 != 0x13u) {  // (from the original)
        guest::cpu()->r[13] = r13;
        r0_7 = call_002fcf7c(r0_6, r1_7, r2_5, r3_4);
        r1_8 = guest::cpu()->r[1];
        if (r0_7 == 0) {
            r13 = r13 + 0x10u;  // (from the original)
            guest::cpu()->r[1] = r1_8;
            guest::cpu()->r[13] = r13;
            return r0_7;
        }
    }
    r1_9 = *gptr<u32>(r13);
    r2_6 = *gptr<u32>(r13 + 4);
    guest::cpu()->r[13] = r13;
    r0_8 = call_0016fe08(r0_5, r1_9, r2_6, 0u);
    r1_10 = guest::cpu()->r[1];
    r13 = r13 + 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1_10;
    guest::cpu()->r[13] = r13;
    return r0_8;
}

}  // namespace d_00599544
GUEST_EXPORT(0x00599544, d_00599544::f_00599544);

// f_00599784: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00599784 {

inline guest::global<u16, 0x009526b0> global_009526b0;  // (from the original)

u32 f_00599784() {
    u32 r0 = 0;
    u32 r1 = 0;
    u32 r3 = 0;
    u32 r2_1 = 0;
    r3 = 0x9b417cu;  // (from the original)
    r0 = 0u;
    r1 = r0;
    do {
L_599790:;
        r2_1 = r3 + (r0 + (r0 << 3) << 1);
        *gptr<u8>(r2_1 + 0xeu) = u8(r1);  // (from the original)
        *gptr<u8>(r2_1 + 0xfu) = u8(r1);  // (from the original)
        *gptr<u8>(r2_1 + 0x10u) = u8(r0);  // (from the original)
        r0 = r0 + 1u;
        guest::preempt();
    } while (s32(r0) < s32(4u));
    *gptr<u8>(0x9526b0u + 5u) = u8(r1);  // (from the original)
    *global_009526b0 = u16(~0u);
    guest::cpu()->r[1] = r1;
    return 0x9526b0u;  // (from the original)
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
    u32 r13 = guest::cpu()->r[13];
    u32 r2_1 = 0;
    u32 r1_1 = 0;
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r1_2 = 0;
    u32 r2_2 = 0;
    u32 r3_1 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r0_5 = 0;
    u32 r1_3 = 0;
    u32 r2_3 = 0;
    u32 r3_2 = 0;
    u32 r0_6 = 0;
    u32 r2_4 = 0;
    u32 r3_3 = 0;
    u32 r0_7 = 0;
    u32 r2_5 = 0;
    u32 r3_4 = 0;
    u32 r0_8 = 0;
    u32 r2_6 = 0;
    u32 r3_5 = 0;
    u32 r0_9 = 0;
    u32 r0_10 = 0;
    u32 r2_7 = 0;
    u32 r3_6 = 0;
    u32 r0_11 = 0;
    u32 ea_1 = 0;
    u32 ea_2 = 0;
    u32 r0_12 = 0;
    u32 ea_3 = 0;
    u32 ea_4 = 0;
    u32 ea_5 = 0;
    u32 ea_6 = 0;
    u32 r1_4 = 0;
    u32 r2_8 = 0;
    u32 r2_9 = 0;
    u32 r0_13 = 0;
    u32 r1_5 = 0;
    r13 = r13 - 0x38u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_0059ec48(r0, r1, r2, r3);
    r2_1 = r13 + 0x24u;  // (from the original)
    r1_1 = r13 + 0x20u;  // (from the original)
    r0_1 = r13 + 0x1cu;  // (from the original)
    *gptr<u32>(r13) = u32(0u);
    guest::cpu()->r[13] = r13;
    r0_2 = call_005985c4(r0_1, r1_1, r2_1, 0u);
    r1_2 = guest::cpu()->r[1];
    r2_2 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    if (r0_2 == 0) {
        r0_3 = ~0u;
        r13 = r13 + 0x38u;  // (from the original)
        guest::cpu()->r[1] = r1_2;
        guest::cpu()->r[13] = r13;
        return r0_3;
    }
    r0_4 = r13 + 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_5 = call_002fc934(r0_4, r0, r2_2, r3_1);
    r1_3 = guest::cpu()->r[1];
    r2_3 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0_6 = call_002f74c8(r0_5, r1_3, r2_3, r3_2);
    r2_4 = guest::cpu()->r[2];
    r3_3 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0_7 = call_002f74e0(4u, r0_6, r2_4, r3_3);
    r2_5 = guest::cpu()->r[2];
    r3_4 = guest::cpu()->r[3];
    if (r0_7 == 0) {
        goto L_599a48;
    }
    guest::cpu()->r[13] = r13;
    r0_8 = call_002fcb84(r0, 0x339fu, r2_5, r3_4);  // (from the original)
    r2_6 = guest::cpu()->r[2];
    r3_5 = guest::cpu()->r[3];
    if (r0_8 == 0) {
        goto L_599a48;
    }
    r0_9 = r13;
    guest::cpu()->r[13] = r13;
    r0_10 = call_002fcbb0(r0_9, 0x33a0u, r2_6, r3_5);  // (from the original)
    r2_7 = guest::cpu()->r[2];
    r3_6 = guest::cpu()->r[3];
    r0_11 = r13 + 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_002fc8e8(r0_11, r0_10, r2_7, r3_6);
L_599a48:;
    ea_1 = r13 + 0x10u;  // (from the original)
    *gptr<u32>(ea_1) = u32(0u);
    ea_2 = r13 + 0x24u;  // (from the original)
    r0_12 = u32(*gptr<u8>(ea_2));
    ea_3 = r13 + 0xcu;  // (from the original)
    *gptr<u32>(ea_3) = u32(0u);
    ea_4 = r13 + 0x14u;  // (from the original)
    *gptr<u32>(ea_4) = u32(0u);
    ea_5 = r13 + 0x18u;  // (from the original)
    *gptr<u32>(ea_5) = u32(0u);
    ea_6 = r13 + 0x1cu;  // (from the original)
    r1_4 = *gptr<u32>(ea_6);
    r2_8 = *gptr<u32>(ea_6 + 4);
    *gptr<u32>(r13 + 8u) = u32(r0_12);
    *gptr<u32>(r13) = u32(r1_4);
    *gptr<u32>(r13 + 4) = u32(r2_8);
    r2_9 = r13 + 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_13 = call_0059f194(0x22u, 0x95bfdcu, r2_9, r0);  // (from the original)
    r1_5 = guest::cpu()->r[1];
    r13 = r13 + 0x38u;  // (from the original)
    guest::cpu()->r[1] = r1_5;
    guest::cpu()->r[13] = r13;
    return r0_13;
}

}  // namespace d_005999b8
GUEST_EXPORT(0x005999b8, d_005999b8::f_005999b8);

// f_00599aa4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00599aa4 {

inline guest::global<u32, 0x00aaf14c> global_00aaf14c;  // (from the original)
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
    u32 r4 = guest::cpu()->r[4];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r9 = guest::cpu()->r[9];
    u32 r10 = guest::cpu()->r[10];
    u32 r11 = guest::cpu()->r[11];
    u32 r12 = 0;
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
    u32 r0_5 = 0;
    u32 r0_6 = 0;
    u32 r0_7 = 0;
    u32 r0_8 = 0;
    u32 r0_9 = 0;
    u32 r0_10 = 0;
    u32 r5_1 = 0;
    u32 r6_1 = 0;
    u32 r0_11 = 0;
    u32 r0_12 = 0;
    u32 r2_3 = 0;
    u32 r3_3 = 0;
    u32 r0_13 = 0;
    u32 r3_4 = 0;
    u32 r0_14 = 0;
    u32 r3_5 = 0;
    u32 ea_1 = 0;
    u32 r1_4 = 0;
    u32 r2_4 = 0;
    u32 r0_15 = 0;
    u32 r1_5 = 0;
    u32 r2_5 = 0;
    u32 r3_6 = 0;
    u32 r0_16 = 0;
    u32 r0_17 = 0;
    u32 r2_6 = 0;
    u32 r3_7 = 0;
    u32 r0_18 = 0;
    u32 r3_8 = 0;
    u32 r2_7 = 0;
    u32 r0_19 = 0;
    r13 = r13 - 0x58u;  // (from the original)
    r10 = r0;
    r11 = r1;
    r0_1 = *global_00aaf14c + 0xau;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_2 = call_0071a844(r0_1, r1, r2, r3);
    r1_1 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0_3 = call_002fcb34(r0_2, r1_1, r2_1, r3_1);
    r1_2 = guest::cpu()->r[1];
    r2_2 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    if (r0_3 != 0x11u) {  // (from the original)
        goto L_599c4c;
    }
    guest::cpu()->r[13] = r13;
    r0_4 = call_005c33cc(4u, 0u, r2_2, r3_2);
    r1_2 = guest::cpu()->r[1];
    if (r0_4 == 0) {
        goto L_599c4c;
    }
    r1_3 = r13 + 0x1cu;  // (from the original)
    r0_5 = r13 + 0x18u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_6 = call_005c08dc(r0_5, r1_3, 4u, 1u);
    r1_2 = guest::cpu()->r[1];
    if (r0_6 == 0) {
        goto L_599c38;
    }
    r3 = 0x85ef84u;  // (from the original)
    r12 = 0x105bu;  // (from the original)
    r2 = u32(s32(s16(*gptr<u16>(r0_4 + 0x2eu))));  // (from the original)
    r1 = 0u;
L_599b10:;
    r0_7 = sxth(r2 - u32(*gptr<u16>(r3 + (r1 << 1))));
    if (r0_7 >> 0x1f != (r0_7 & (r0_7 ^ r0_7)) >> 0x1f) {  // (from the original)
        r0_7 = 0u - r0_7;
    }
    if (s32(r0_7) < s32(r12)) {
        r0_8 = r1 & 0xffu;  // (from the original)
    } else {
        r1 = r1 + 1u;
        if (s32(r1) < s32(8u)) {
            guest::preempt();
            goto L_599b10;
        }
        r0_8 = 0u;
    }
    r0_9 = r0_8 + (r0_8 << 3);
    r7 = 0x85ee64u + (r0_9 << 2);  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_6 = call_006a5e34(r0_9, 0x85ee64u, r2, r3);  // (from the original)
    r1_2 = guest::cpu()->r[1];
    *gptr<u32>(r13 + 0x14u) = u32(r0_6);  // (from the original)
    if (r0_6 == 0) {
        goto L_599c38;
    }
    r8 = 0x85ee50u;  // (from the original)
    r4 = 1u;
    r9 = r8 + 9u;
L_599b70:;
    r0_10 = *gptr<u32>(r7 + (r4 << 2));
    r5_1 = u32(s32(s8(*gptr<u8>(r8 + r0_10)))) + *gptr<u32>(r13 + 0x18u);  // (from the original)
    r6_1 = u32(s32(s8(*gptr<u8>(r9 + r0_10)))) + *gptr<u32>(r13 + 0x1cu);  // (from the original)
    r0_11 = *gptr<u32>(r13 + 0x14u);  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_12 = call_002feb00(r0_11, r5_1, r6_1, 0u);
    r1_2 = guest::cpu()->r[1];
    r2_3 = guest::cpu()->r[2];
    r3_3 = guest::cpu()->r[3];
    if (r0_12 == 0) {
        goto L_599c40;
    }
    guest::cpu()->r[13] = r13;
    r0_13 = call_002fcb84(r0_12, 0x9eu, r2_3, r3_3);  // (from the original)
    r1_2 = guest::cpu()->r[1];
    r3_4 = guest::cpu()->r[3];
    if (r0_13 == 0) {
        goto L_599c40;
    }
    guest::cpu()->r[13] = r13;
    r0_14 = call_005a06d4(r5_1, r6_1, 0xa5u, r3_4);  // (from the original)
    r1_2 = guest::cpu()->r[1];
    r3_5 = guest::cpu()->r[3];
    if (r0_14 + 1u != 0) {
        goto L_599c40;
    }
    ea_1 = r13 + 0x18u;  // (from the original)
    r1_4 = *gptr<u32>(ea_1);
    r2_4 = *gptr<u32>(ea_1 + 4);
    r0_15 = r13 + 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_006a6dbc(r0_15, r1_4, r2_4, r3_5);
    r1_5 = guest::cpu()->r[1];
    r2_5 = guest::cpu()->r[2];
    r3_6 = guest::cpu()->r[3];
    r0_16 = r13 + 0x28u;  // (from the original)
    *gptr<u32>(r13 + 0xcu) = u32(r0_16);  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_17 = call_002f74c8(r0_16, r1_5, r2_5, r3_6);
    r2_6 = guest::cpu()->r[2];
    r3_7 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0_18 = call_002f74e0(4u, r0_17, r2_6, r3_7);
    r1_2 = guest::cpu()->r[1];
    r3_8 = guest::cpu()->r[3];
    if (r0_18 != 0) {
        r2_7 = *gptr<u32>(r13 + 0xcu);  // (from the original)
        guest::cpu()->r[13] = r13;
        r0_19 = call_006140b8(r5_1, r6_1, r2_7, r3_8);
        r1_2 = guest::cpu()->r[1];
        if (r0_19 == 0) {
            goto L_599c40;
        }
    }
    *gptr<u32>(r10) = u32(r5_1);
    r0_6 = 1u;
    *gptr<u32>(r11) = u32(r6_1);
L_599c38:;
    r13 = r13 + 0x58u;  // (from the original)
    guest::cpu()->r[1] = r1_2;
    guest::cpu()->r[13] = r13;
    return r0_6;
L_599c40:;
    r4 = r4 + 1u;
    if (s32(r4) < s32(4u)) {
        guest::preempt();
        goto L_599b70;
    }
L_599c4c:;
    r13 = r13 + 0x58u;  // (from the original)
    guest::cpu()->r[1] = r1_2;
    guest::cpu()->r[13] = r13;
    return 0u;
}

}  // namespace d_00599aa4
GUEST_EXPORT(0x00599aa4, d_00599aa4::f_00599aa4);

// f_00599c6c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00599c6c {

inline constexpr guest::Function<0x005985c4, u32(u32, u32, u32, u32)> call_005985c4;  // (from the original)

u32 f_00599c6c() {
    u32 r13 = guest::cpu()->r[13];
    u32 r2_1 = 0;
    u32 r1_1 = 0;
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r1_2 = 0;
    r13 = r13 - 0x18u;  // (from the original)
    *gptr<u32>(r13) = u32(0u);
    r2_1 = r13 + 0xcu;  // (from the original)
    r1_1 = r13 + 8u;
    r0_1 = r13 + 4u;
    guest::cpu()->r[13] = r13;
    r0_2 = call_005985c4(r0_1, r1_1, r2_1, 0u);
    r1_2 = guest::cpu()->r[1];
    if (r0_2 != 0) {
        r0_2 = 1u;
    }
    r13 = r13 + 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1_2;
    guest::cpu()->r[13] = r13;
    return r0_2;
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
    u32 r6 = guest::cpu()->r[6];
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r1_2 = 0;
    u32 r0_5 = 0;
    u32 r0_6 = 0;
    u32 r0_7 = 0;
    u32 r0_8 = 0;
    u32 r1_3 = 0;
    u32 r0_9 = 0;
    u32 r0_10 = 0;
    r6 = r1;
    r13 = r13 - 0x18u;  // (from the original)
    r0_1 = r13;
    guest::cpu()->r[13] = r13;
    call_002fc934(r0_1, r0, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_1 = guest::cpu()->r[1];
    guest::cpu()->r[13] = r13;
    r0_2 = call_002fcb34(r0, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r0_3 = r13;
    guest::cpu()->r[13] = r13;
    r0_4 = call_00767a44(r0_3, r0, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_2 = guest::cpu()->r[1];
    if (r0_4 == 0) {
        guest::cpu()->r[13] = r13;
        call_002ff800(r0, r1_2, guest::cpu()->r[2], guest::cpu()->r[3]);
    }
    r1 = 0x3413u;  // (from the original)
    if (r0_2 == 0x36u) {  // (from the original)
        goto L_599d08;
    }
    if (r0_2 == 0x40u) {  // (from the original)
        goto L_599d3c;
    }
    if (r0_2 == 0x37u) {  // (from the original)
        goto L_599d74;
    }
    if (r0_2 == 0x38u) {  // (from the original)
        r1 = r1 + 3u;
    } else {
        r13 = r13 + 0x18u;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return 0u;
    }
L_599d08:;
    r0_5 = r13 + 4u;
    guest::cpu()->r[13] = r13;
    r0_6 = call_002fcbb0(r0_5, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    guest::cpu()->r[13] = r13;
    call_002fc8e8(r6, r0_6, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r13 = r13 + 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return 0u;
L_599d3c:;
    r0_7 = r13 + 4u;
    guest::cpu()->r[13] = r13;
    r0_8 = call_002fcbb0(r0_7, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    guest::cpu()->r[13] = r13;
    call_002fc8e8(r6, r0_8, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_3 = guest::cpu()->r[1];
    r13 = r13 + 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1_3;
    guest::cpu()->r[13] = r13;
    return 1u;
L_599d74:;
    r0_9 = r13;
    guest::cpu()->r[13] = r13;
    r0_10 = call_002fcb84(r0_9, 0x202cu, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    if (r0_10 == 0) {
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
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r1_2 = 0;
    u32 r0_2 = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r0_1 = call_002f74c8(r1, r2, r2, guest::cpu()->r[3]);
    r0 = call_005a0ef8(r1, r2, r0_1, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 + 1u == 0) {
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r1 = 0x9b4264u;  // (from the original)
    r4 = r1 + (r0 + (r0 << 1) + (r0 << 3) << 1);
    r0 = u32(*gptr<u8>(r4 + 0x10u));  // (from the original)
    if (r0 == 0xbu) {  // (from the original)
        goto L_599e44;
    }
    if (r0 != 0x1cu) {  // (from the original)
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r0 = call_005a1ba0(r4, 0u, 1u, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
L_599e08:;
    if (r0 != 0) {
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        guest::cpu()->r[1] = r1;
        return r0;
    }
    call_005a0f5c(r4, r1, r2, guest::cpu()->r[3]);
    r1_1 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    call_005a2438(r4, r1_1, r2_1, guest::cpu()->r[3]);
    *gptr<u8>(r4 + 0x10u) = u8(0u);  // (from the original)
    *gptr<u8>(r4 + 0x11u) = u8(0u);  // (from the original)
    r1_2 = u32(*gptr<u8>(r4 + 0xfu));  // (from the original)
    r0_2 = u32(*gptr<u8>(r4 + 0xeu));  // (from the original)
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    return call_0059e65c(r0_2, r1_2, 0u, guest::cpu()->r[3]);
L_599e44:;
    r0 = call_005a1ba0(r4, 1u, 1u, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    guest::preempt();
    goto L_599e08;
}

}  // namespace d_00599da0
GUEST_EXPORT(0x00599da0, d_00599da0::f_00599da0);

// f_00599ee8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00599ee8 {

inline guest::global<u32, 0x0059a064> global_0059a064;  // (from the original)
inline guest::global<u32, 0x0059a068> global_0059a068;  // (from the original)
inline guest::global<u32, 0x0059a06c> global_0059a06c;  // (from the original)
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
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r9 = guest::cpu()->r[9];
    u32 r13 = guest::cpu()->r[13];
    u32 r4_1 = 0;
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r3_1 = 0;
    float S0_1 = 0;
    float S1_1 = 0;
    float S2_1 = 0;
    u32 r0_3 = 0;
    u32 r2_1 = 0;
    u32 r0_4 = 0;
    u32 r2_2 = 0;
    u32 r3_2 = 0;
    float S0_2 = 0;
    float S1_2 = 0;
    float S2_2 = 0;
    u32 r1_1 = 0;
    u32 r2_3 = 0;
    u32 r3_3 = 0;
    float S0_3 = 0;
    float S1_3 = 0;
    float S2_3 = 0;
    u32 r0_5 = 0;
    u32 r2_4 = 0;
    u32 r3_4 = 0;
    float S0_4 = 0;
    float S1_4 = 0;
    float S2_4 = 0;
    u32 r0_6 = 0;
    u32 r0_7 = 0;
    u32 r2_5 = 0;
    u32 r3_5 = 0;
    float S0_5 = 0;
    float S1_5 = 0;
    float S2_5 = 0;
    u32 r4_2 = 0;
    u32 r0_8 = 0;
    float S0_6 = 0;
    float S1_6 = 0;
    float S2_6 = 0;
    u32 r2_6 = 0;
    u32 r3_6 = 0;
    float S0_7 = 0;
    u32 r0_9 = 0;
    u32 r0_10 = 0;
    u32 r1_2 = 0;
    u32 r2_7 = 0;
    u32 r3_7 = 0;
    float S0_8 = 0;
    float S1_7 = 0;
    float S2_7 = 0;
    u32 r0_11 = 0;
    float S2_8 = 0;
    u32 r3_8 = 0;
    float S1_8 = 0;
    float S0_9 = 0;
    u32 r1_3 = 0;
    u32 r0_12 = 0;
    u32 r1_4 = 0;
    u32 r2_8 = 0;
    u32 r3_9 = 0;
    float S0_10 = 0;
    float S1_9 = 0;
    float S2_9 = 0;
    u32 r0_13 = 0;
    u32 r0_14 = 0;
    u32 r1_5 = 0;
    float S0_11 = 0;
    float S1_10 = 0;
    r13 = r13 - 0x30u;  // (from the original)
    r4_1 = r1;
    r7 = 0x94ee4cu;  // (from the original)
    r5 = r2;
    r8 = 0u;
    r0_1 = *gptr<u32>(r7 + 0x14u);  // (from the original)
    if (r0_1 == 0) {
        goto L_59a048;
    }
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2;
    r0_2 = call_006a5e34(r0_1, r1, r2, r3);
    r3_1 = guest::cpu()->r[3];
    S0_1 = guest::cpu()->s[0];
    S1_1 = guest::cpu()->s[1];
    S2_1 = guest::cpu()->s[2];
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_1;
    guest::cpu()->s[1] = S1_1;
    guest::cpu()->s[2] = S2_1;
    r0_3 = call_007529d8(r0_2, r4_1, r5, r3_1);
    r1 = guest::cpu()->r[1];
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    S2 = guest::cpu()->s[2];
    if (r0_3 == 0) {
        goto L_59a048;
    }
    r1 = 0x98a47cu;  // (from the original)
    r3 = 0x226u;  // (from the original)
    r9 = r0;
    r6 = r4_1;
    r0 = 0u;
L_599f3c:;
    r2_1 = *gptr<u32>(r1 + (r0 << 2));
    if (r2_1 != 0) {
        *gptr<u32>(r1 + (r0 << 2)) = u32(r8);
        guest::cpu()->r[13] = r13;
        guest::cpu()->s[0] = S0;
        guest::cpu()->s[1] = S1;
        guest::cpu()->s[2] = S2;
        r0_4 = call_002fd108(0x154u, r2_1, 4u, r3);  // (from the original)
        r2_2 = guest::cpu()->r[2];
        r3_2 = guest::cpu()->r[3];
        S0_2 = guest::cpu()->s[0];
        S1_2 = guest::cpu()->s[1];
        S2_2 = guest::cpu()->s[2];
        guest::cpu()->r[13] = r13;
        guest::cpu()->s[0] = S0_2;
        guest::cpu()->s[1] = S1_2;
        guest::cpu()->s[2] = S2_2;
        call_002f825c(r0_4, 0x154u, r2_2, r3_2);  // (from the original)
        r1_1 = guest::cpu()->r[1];
        r2_3 = guest::cpu()->r[2];
        r3_3 = guest::cpu()->r[3];
        S0_3 = guest::cpu()->s[0];
        S1_3 = guest::cpu()->s[1];
        S2_3 = guest::cpu()->s[2];
        guest::cpu()->r[13] = r13;
        guest::cpu()->s[0] = S0_3;
        guest::cpu()->s[1] = S1_3;
        guest::cpu()->s[2] = S2_3;
        r0_5 = call_00590f1c(r0_4, r1_1, r2_3, r3_3);
        r2_4 = guest::cpu()->r[2];
        r3_4 = guest::cpu()->r[3];
        S0_4 = guest::cpu()->s[0];
        S1_4 = guest::cpu()->s[1];
        S2_4 = guest::cpu()->s[2];
        *gptr<u32>(r0_5) = u32(0x907d28u);  // (from the original)
        r0_6 = r0_5 + 0x124u;  // (from the original)
        guest::cpu()->r[13] = r13;
        guest::cpu()->s[0] = S0_4;
        guest::cpu()->s[1] = S1_4;
        guest::cpu()->s[2] = S2_4;
        r0_7 = call_00614568(r0_6, 0x907d28u, r2_4, r3_4);  // (from the original)
        r2_5 = guest::cpu()->r[2];
        r3_5 = guest::cpu()->r[3];
        S0_5 = guest::cpu()->s[0];
        S1_5 = guest::cpu()->s[1];
        S2_5 = guest::cpu()->s[2];
        r4_2 = r0_7 - 0x124u;  // (from the original)
        r0_8 = r0_7 - 0x104u;  // (from the original)
        guest::cpu()->r[13] = r13;
        guest::cpu()->s[0] = S0_5;
        guest::cpu()->s[1] = S1_5;
        guest::cpu()->s[2] = S2_5;
        call_0012ca6c(r0_8, r2_1, r2_5, r3_5);
        S0_6 = guest::cpu()->s[0];
        S1_6 = guest::cpu()->s[1];
        S2_6 = guest::cpu()->s[2];
        *gptr<u32>(r13) = u32(r8);
        guest::cpu()->r[13] = r13;
        guest::cpu()->s[0] = S0_6;
        guest::cpu()->s[1] = S1_6;
        guest::cpu()->s[2] = S2_6;
        call_00590720(r4_2, r9, r6, r5);
        r2_6 = guest::cpu()->r[2];
        r3_6 = guest::cpu()->r[3];
        S0_7 = std::bit_cast<float>(*global_0059a064);
        r0_9 = r13 + 4u;
        *gptr<u8>(r4_2 + 0x150u) = u8(r8);  // (from the original)
        *gptr<u32>(r0_9) = u32(std::bit_cast<u32>(S0_7));
        *gptr<u32>(r0_9 + 4) = u32(std::bit_cast<u32>(S0_7));
        *gptr<u32>(r0_9 + 8) = u32(std::bit_cast<u32>(S0_7));
        r0_10 = r4_2 + 0x58u;  // (from the original)
        guest::cpu()->r[13] = r13;
        guest::cpu()->s[0] = S0_7;
        guest::cpu()->s[1] = S0_7;
        guest::cpu()->s[2] = S0_7;
        call_004ee3e8(r0_10, r0_9, r2_6, r3_6);
        r1_2 = guest::cpu()->r[1];
        r2_7 = guest::cpu()->r[2];
        r3_7 = guest::cpu()->r[3];
        S0_8 = guest::cpu()->s[0];
        S1_7 = guest::cpu()->s[1];
        S2_7 = guest::cpu()->s[2];
        r0_11 = r4_2 + 0x58u;  // (from the original)
        guest::cpu()->r[13] = r13;
        guest::cpu()->s[0] = S0_8;
        guest::cpu()->s[1] = S1_7;
        guest::cpu()->s[2] = S2_7;
        call_004edd20(r0_11, r1_2, r2_7, r3_7);
        S2_8 = guest::cpu()->s[2];
        r3_8 = ~0x80000000u;  // (from the original)
        S1_8 = std::bit_cast<float>(*global_0059a068);
        S0_9 = std::bit_cast<float>(*global_0059a06c);
        r1_3 = r4_2 + 0x40u;  // (from the original)
        r0_12 = r4_2 + 0x124u;  // (from the original)
        guest::cpu()->r[13] = r13;
        guest::cpu()->s[0] = S0_9;
        guest::cpu()->s[1] = S1_8;
        guest::cpu()->s[2] = S2_8;
        call_006f7e10(r0_12, r1_3, 4u, r3_8);
        r1_4 = guest::cpu()->r[1];
        r2_8 = guest::cpu()->r[2];
        r3_9 = guest::cpu()->r[3];
        S0_10 = guest::cpu()->s[0];
        S1_9 = guest::cpu()->s[1];
        S2_9 = guest::cpu()->s[2];
        r0_13 = r4_2 + 0x124u;  // (from the original)
        guest::cpu()->r[13] = r13;
        guest::cpu()->s[0] = S0_10;
        guest::cpu()->s[1] = S1_9;
        guest::cpu()->s[2] = S2_9;
        call_00614730(r0_13, r1_4, r2_8, r3_9);
        r2_1 = guest::cpu()->r[2];
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
        r4_2 = r8;
    }
    r1 = r4_2;
    if (r4_2 == 0) {
        goto L_59a048;
    }
    r0_14 = *gptr<u32>(r7 + 0x14u) + 0x3594u;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2;
    call_00125ca8(r0_14, r1, r2_1, r3);
    r1_5 = guest::cpu()->r[1];
    S0_11 = guest::cpu()->s[0];
    S1_10 = guest::cpu()->s[1];
    r13 = r13 + 0x30u;  // (from the original)
    guest::cpu()->r[1] = r1_5;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_11;
    guest::cpu()->s[1] = S1_10;
    return 1u;
L_59a048:;
    r13 = r13 + 0x30u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    return 0u;
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

inline guest::global<u8, 0x008c9f1c> global_008c9f1c;  // (from the original)
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
    u32 r0 = arg0.addr();
    u32 r13 = guest::cpu()->r[13];
    u32 r5_1 = 0;
    u32 r0_1 = 0;
    u32 r11_1 = 0;
    u32 r1_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r1_2 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r0_4 = 0;
    u32 ea_1 = 0;
    u32 r1_3 = 0;
    u32 r2_2 = 0;
    u32 r3_2 = 0;
    u32 r0_5 = 0;
    u32 r0_6 = 0;
    u32 ea_2 = 0;
    u32 r3_3 = 0;
    u32 r1_4 = 0;
    u32 r0_7 = 0;
    u32 r0_8 = 0;
    u32 r2_3 = 0;
    u32 r3_4 = 0;
    u32 r0_9 = 0;
    u32 r2_4 = 0;
    u32 r3_5 = 0;
    u32 r8_1 = 0;
    u32 r1_5 = 0;
    u32 r0_10 = 0;
    u32 r1_6 = 0;
    u32 r2_5 = 0;
    u32 r3_6 = 0;
    u32 r2_6 = 0;
    u32 r1_7 = 0;
    u32 r1_8 = 0;
    u32 r0_11 = 0;
    u32 r0_12 = 0;
    u32 res_1 = 0;
    u32 r0_13 = 0;
    u32 r0_14 = 0;
    u32 r0_15 = 0;
    u32 r1_9 = 0;
    u32 r2_7 = 0;
    u32 r3_7 = 0;
    u32 r0_16 = 0;
    u32 r1_10 = 0;
    u32 r0_17 = 0;
    u32 r1_11 = 0;
    u32 r0_18 = 0;
    u32 r1_12 = 0;
    u32 r0_19 = 0;
    u32 r3_8 = 0;
    u32 r3_9 = 0;
    r5_1 = r0 + 0x45b8u;  // (from the original)
    r13 = r13 - 0xc0u;  // (from the original)
    r0_1 = u32(arg0->byte_45b8);
    if (r0_1 != 1u) {
        if (r0_1 == 2u) {
            goto L_59a234;
        }
        if (r0_1 == 3u) {
            goto L_59a248;
        }
        goto L_59a278;
    }
    r11_1 = *gptr<u32>(r0 + 0x20u);  // (from the original)
    if (u32(*gptr<u8>(0x94ee4cu + 3u)) == 0) {  // (from the original)
        goto L_59a22c;
    }
    *gptr<u32>(r13 + 0xcu) = u32(0x59a288u);  // (from the original)
    *gptr<u32>(r13 + 8u) = u32(0x9047f8u);  // (from the original)
    r1_1 = r13 + 8u;
    r0_2 = r0 + 0x344u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_3 = call_0056a974(r0_2, r1_1, r11_1, 4u);
    r1_2 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    r0_4 = r13 + 0x10u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_0056c45c(r0_4, r1_2, r2_1, r3_1);
    ea_1 = r13 + 0x10u;  // (from the original)
    r1_3 = *gptr<u32>(ea_1 + 4);
    r2_2 = *gptr<u32>(ea_1 + 8);
    r3_2 = r13 + 0x38u;  // (from the original)
    *gptr<u32>(r3_2) = u32(*gptr<u32>(ea_1));
    *gptr<u32>(r3_2 + 4) = u32(r1_3);
    *gptr<u32>(r3_2 + 8) = u32(r2_2);
    r0_5 = r13 + 0x38u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_6 = call_0056bc28(r0_5, r1_3, r2_2, r3_2);
    ea_2 = r13 + 0x48u;  // (from the original)
    *gptr<u32>(ea_2) = u32(r13 + 0x50u);  // (from the original)
    *gptr<u32>(ea_2 + 4) = u32(0x20u);  // (from the original)
    r3_3 = u32(*global_008c9f1c);
    *gptr<u8>(0x20u + (*gptr<u32>(r13 + 0x48u) - 1u)) = u8(r3_3);  // (from the original)
    r1_4 = r13 + 0x44u;  // (from the original)
    *gptr<u8>(r13 + 0x50u) = u8(u32(*global_008c9f1c));  // (from the original)
    *gptr<u32>(r13 + 0x44u) = u32(0x9048ecu);  // (from the original)
    r0_7 = r13 + 0x10u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_8 = call_0054a644(r0_7, r1_4, 0x20u, r3_3);  // (from the original)
    r2_3 = guest::cpu()->r[2];
    r3_4 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0_9 = call_00544fec(r0_8, 0x59a2acu, r2_3, r3_4);  // (from the original)
    r2_4 = guest::cpu()->r[2];
    r3_5 = guest::cpu()->r[3];
    *gptr<u32>(r13 + 0x34u) = u32(r0_6);  // (from the original)
    r8_1 = r13 + 0x34u;  // (from the original)
    r1_5 = r13 + 0x70u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_10 = call_00544a20(r0_9, r1_5, r2_4, r3_5);
    r1_6 = guest::cpu()->r[1];
    r2_5 = guest::cpu()->r[2];
    r3_6 = guest::cpu()->r[3];
    if (r0_10 != 0) {
        r2_6 = *gptr<u32>(r0_9 + 4u);
        if (u32(*gptr<u8>(r13 + 0x70u)) == 0) {  // (from the original)
            r1_7 = 0u;
        } else {
            r1_7 = r13 + 0x70u;  // (from the original)
        }
        guest::cpu()->r[13] = r13;
        call_00544d08(r8_1, r1_7, r2_6, r3_6);
        r1_6 = guest::cpu()->r[1];
        r2_5 = guest::cpu()->r[2];
        r3_6 = guest::cpu()->r[3];
    }
    guest::cpu()->r[13] = r13;
    call_00544f18(r0_9, r1_6, r2_5, r3_6);
    r1_8 = r13 + 0x44u;  // (from the original)
    r0_11 = r0 + 0x2cu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_12 = call_00317a50(r0_11, r1_8, r11_1, 0x80u);  // (from the original)
    r1 = guest::cpu()->r[1];
    res_1 = r0_12 & r0_3;
    r0_13 = res_1;
    if (res_1 != 0) {
        if (u32(*gptr<u8>(0x94ee4cu + 3u)) == 0) {  // (from the original)
            goto L_59a22c;
        }
        r0_14 = r0 + 0x2cu;  // (from the original)
        guest::cpu()->r[13] = r13;
        r0_15 = call_004eada4(r0_14, 0x20000u, 0x20000u, 0x30000u);  // (from the original)
        r1_9 = guest::cpu()->r[1];
        r2_7 = guest::cpu()->r[2];
        r3_7 = guest::cpu()->r[3];
        guest::cpu()->r[13] = r13;
        r0_16 = call_00594d8c(r0_15, r1_9, r2_7, r3_7);
        r1_10 = r0 + 0x14u;  // (from the original)
        r0_17 = r0 + 0x2cu;  // (from the original)
        guest::cpu()->r[13] = r13;
        call_00317a88(r0_17, r1_10, r0_16, 1u);
        r1_11 = r0 + 0x14u;  // (from the original)
        r0_18 = r0 + 0x2cu;  // (from the original)
        guest::cpu()->r[13] = r13;
        call_00317a88(r0_18, r1_11, 0u, 1u);
        r1 = guest::cpu()->r[1];
        *gptr<u8>(r5_1) = u8(2u);
        r0_13 = 0u;
    }
    r13 = r13 + 0xc0u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0_13;
L_59a22c:;
    *gptr<u8>(r5_1) = u8(4u);
    goto L_59a278;
L_59a234:;
    *gptr<u8>(r5_1) = u8(3u);
    r13 = r13 + 0xc0u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return 0u;
L_59a248:;
    r1_12 = *gptr<u32>(r0 + 0x20u);  // (from the original)
    r0_19 = r0 + 0x2cu;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_00178d78(r0_19, r1_12, r2, r3);
    r3_8 = guest::cpu()->r[3];
    *gptr<u8>(r5_1) = u8(4u);
    guest::cpu()->r[13] = r13;
    call_0059ceb4(r0, 0u, 0x59a2c8u, r3_8);  // (from the original)
    r3_9 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    call_0059ceb4(r0, 1u, 0x59a2d0u, r3_9);  // (from the original)
    r1 = guest::cpu()->r[1];
L_59a278:;
    r13 = r13 + 0xc0u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return 1u;
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
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r9 = guest::cpu()->r[9];
    u32 r10 = guest::cpu()->r[10];
    u32 r11 = guest::cpu()->r[11];
    u32 r13 = guest::cpu()->r[13];
    u32 r4_1 = 0;
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r3_1 = 0;
    u32 r0_3 = 0;
    u32 r2_1 = 0;
    u32 r1_1 = 0;
    u32 r0_4 = 0;
    u32 r2_2 = 0;
    u32 r3_2 = 0;
    u32 r1_2 = 0;
    u32 r2_3 = 0;
    u32 r3_3 = 0;
    u32 r0_5 = 0;
    u32 r2_4 = 0;
    u32 r3_4 = 0;
    u32 r4_2 = 0;
    u32 r1_3 = 0;
    u32 r0_6 = 0;
    u32 r0_7 = 0;
    u32 r1_4 = 0;
    *gptr<u32>(r13 + 0xffffffd8u) = u32(r3);  // (from the original)
    r13 = r13 - 0x28;  // (from the original)
    r4_1 = r1;
    r5 = r2;
    r6 = r3;
    r9 = 0x94ee4cu;  // (from the original)
    r7 = *gptr<u32>(r13 + 0x28u);  // (from the original)
    r10 = 0u;
    r0_1 = *gptr<u32>(r9 + 0x14u);  // (from the original)
    if (r0_1 == 0) {
        goto L_59a3dc;
    }
    guest::cpu()->r[13] = r13;
    r0_2 = call_006a5e34(r0_1, r1, r2, r3);
    r3_1 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0_3 = call_007529d8(r0_2, r4_1, r5, r3_1);
    r1 = guest::cpu()->r[1];
    if (r0_3 == 0) {
        goto L_59a3dc;
    }
    r1 = 0x98a47cu;  // (from the original)
    r3 = 0x226u;  // (from the original)
    r11 = r0;
    r8 = r4_1;
    r0 = 0u;
L_59a330:;
    r2_1 = *gptr<u32>(r1 + (r0 << 2));
    if (r2_1 != 0) {
        *gptr<u32>(r1 + (r0 << 2)) = u32(r10);
        *gptr<u32>(r13) = u32(r2_1);
        r1_1 = *gptr<u32>(r13);
        guest::cpu()->r[13] = r13;
        r0_4 = call_002fd108(0x128u, r1_1, 4u, r3);  // (from the original)
        r2_2 = guest::cpu()->r[2];
        r3_2 = guest::cpu()->r[3];
        guest::cpu()->r[13] = r13;
        call_002f825c(r0_4, 0x128u, r2_2, r3_2);  // (from the original)
        r1_2 = guest::cpu()->r[1];
        r2_3 = guest::cpu()->r[2];
        r3_3 = guest::cpu()->r[3];
        guest::cpu()->r[13] = r13;
        r0_5 = call_00590f1c(r0_4, r1_2, r2_3, r3_3);
        r2_4 = guest::cpu()->r[2];
        r3_4 = guest::cpu()->r[3];
        r4_2 = r0_5;
        *gptr<u32>(r4_2) = u32(0x907940u);  // (from the original)
        r1_3 = *gptr<u32>(r13);
        r0_6 = r4_2 + 0x20u;  // (from the original)
        guest::cpu()->r[13] = r13;
        call_0012ca6c(r0_6, r1_3, r2_4, r3_4);
        *gptr<u32>(r13) = u32(r10);
        guest::cpu()->r[13] = r13;
        call_00590720(r4_2, r11, r8, r5);
        r2_1 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        *gptr<u8>(r4_2 + 0x124u) = u8(r10);  // (from the original)
        *gptr<u8>(r4_2 + 0x125u) = u8(r6);  // (from the original)
        *gptr<u8>(r4_2 + 0x126u) = u8(r7);  // (from the original)
    } else {
        r0 = r0 + 1u;
        if (r0 < r3) {
            guest::preempt();
            goto L_59a330;
        }
        r4_2 = r10;
    }
    r1 = r4_2;
    if (r4_2 == 0) {
        goto L_59a3dc;
    }
    r0_7 = *gptr<u32>(r9 + 0x14u) + 0x3594u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_00125ca8(r0_7, r1, r2_1, r3);
    r1_4 = guest::cpu()->r[1];
    r13 = r13 + 0x28;  // (from the original)
    guest::cpu()->r[1] = r1_4;
    guest::cpu()->r[13] = r13;
    return 1u;
L_59a3dc:;
    r13 = r13 + 0x28;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return 0u;
}

}  // namespace d_0059a2d8
GUEST_EXPORT(0x0059a2d8, d_0059a2d8::f_0059a2d8);

// f_0059a3f4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0059a3f4 {

inline constexpr guest::Function<0x005a2624, u32(u32, u32, u32, u32)> call_005a2624;  // (from the original)

u32 f_0059a3f4(u32 r0, u32 r1) {
    u32 r3_1 = 0;
    u32 r0_1 = 0;
    r3_1 = *gptr<u32>(0x94ee4cu + 0x14u);  // (from the original)
    if (r3_1 == 0) {
        guest::cpu()->r[1] = 0x94ee4cu;  // (from the original)
        return r0;
    }
    r0_1 = r3_1 + 0x35c4u;  // (from the original)
    return call_005a2624(r0_1, r0, r1, r3_1);
}

}  // namespace d_0059a3f4
GUEST_EXPORT(0x0059a3f4, d_0059a3f4::f_0059a3f4);

// f_0059a420: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0059a420 {

inline guest::global<u32, 0x0014fc68> global_0014fc68;  // (from the original)
inline guest::global<u8, 0x0094ee4e> global_0094ee4e;  // (from the original)
inline constexpr guest::Function<0x0059dab8, u32(u32, u32, u32, u32)> call_0059dab8;  // (from the original)
inline constexpr guest::Function<0x00753c94, u32(u32, u32, u32, u32)> call_00753c94;  // (from the original)

u32 f_0059a420(u32 r0, u32 r1, u32 r2, u32 r3) {
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
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r6_1 = 0;
    u32 r5_1 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r0_5 = 0;
    u32 r0_6 = 0;
    u32 r5_2 = 0;
    u32 r6_2 = 0;
    u32 r0_7 = 0;
    u32 r0_8 = 0;
    u32 r0_9 = 0;
    u32 r0_10 = 0;
    u32 res_1 = 0;
    u32 nf_1 = 0;
    u32 vf_1 = 0;
    u32 res_2 = 0;
    goto L_59a420;
L_59a420:;
    *gptr<u32>(r13 + 0xfffffff8u) = u32(r12);  // (from the original)
    r13 = r13 - 0x28;  // (from the original)
    r8 = r0;
    if (u32(*global_0094ee4e) == 0) {
        goto L_59a4e4;
    }
    r9 = 1u;
    r4 = r8 + 0x3204u;  // (from the original)
    r10 = r8 + 0x35c4u;  // (from the original)
    r7 = r8 + 0x320eu;  // (from the original)
L_59a454:;
    r0_1 = u32(*gptr<u8>(r4 + 0x14u));  // (from the original)
    if (r0_1 != 0) {
        r0_2 = r0_1 - 1u & 0xffu;  // (from the original)
        *gptr<u8>(r4 + 0x14u) = u8(r0_2);  // (from the original)
        r6_1 = u32(*gptr<u8>(r4 + r0_2));
        r5_1 = u32(*gptr<u8>(r0_2 + r7));
        guest::cpu()->r[13] = r13;
        r0_3 = call_00753c94(r10, r6_1, r5_1, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        if (r0_3 != 0) {
            guest::preempt();
            goto L_59a454;
        }
        if (r9 != 0) {
            guest::cpu()->r[13] = r13;
            r0_4 = call_0059dab8(r8, r6_1, r5_1, 1u);
            r1 = guest::cpu()->r[1];
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
            if (r0_4 != 0) {
                guest::preempt();
                goto L_59a454;
            }
        }
        guest::cpu()->r[13] = r13;
        call_0059dab8(r8, r6_1, r5_1, 0u);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        guest::preempt();
        goto L_59a454;
    }
    r13 = r13 + 0x28;  // (from the original)
    guest::cpu()->r[13] = r13;
    return guest::call_address<u32>(*global_0014fc68, r8, r1, r2, r3);
L_59a4e4:;
    r4 = r8 + 0x3204u;  // (from the original)
    r9 = r8 + 0x35c4u;  // (from the original)
    r7 = r8 + 0x320eu;  // (from the original)
L_59a4fc:;
    r0_5 = u32(*gptr<u8>(r4 + 0x14u));  // (from the original)
    if (r0_5 != 0) {
        r0_6 = r0_5 - 1u & 0xffu;  // (from the original)
        *gptr<u8>(r4 + 0x14u) = u8(r0_6);  // (from the original)
        r5_2 = u32(*gptr<u8>(r4 + r0_6));
        r6_2 = u32(*gptr<u8>(r0_6 + r7));
        guest::cpu()->r[13] = r13;
        r0_7 = call_00753c94(r9, r5_2, r6_2, r3);
        r3 = guest::cpu()->r[3];
        if (r0_7 != 0) {
            guest::preempt();
            goto L_59a4fc;
        }
        guest::cpu()->r[13] = r13;
        call_0059dab8(r8, r5_2, r6_2, 0u);
        r3 = guest::cpu()->r[3];
        guest::preempt();
        goto L_59a4fc;
    }
    r5 = *gptr<u32>(0x356cu + r8);  // (from the original)
    r0_8 = *gptr<u32>(0x356cu - 0x24u + r8);  // (from the original)
    if (s32(r5) > s32(r0_8)) {
        r5 = r0_8;
    }
    r10 = *gptr<u32>(0x3564u + r8);  // (from the original)
    r0_9 = *gptr<u32>(0x3540u + r8);  // (from the original)
    if (s32(r10) < s32(r0_9)) {
        r10 = r0_9;
    }
    r6 = *gptr<u32>(0x3568u + r8);  // (from the original)
    r0_10 = *gptr<u32>(0x3568u - 0x24u + r8);  // (from the original)
    r1 = 0x3560u;  // (from the original)
    if (s32(r6) > s32(r0_10)) {
        r6 = r0_10;
    }
    r9 = *gptr<u32>(r1 + r8);
    r0 = *gptr<u32>(r1 - 0x24u + r8);  // (from the original)
    if (s32(r9) < s32(r0)) {
        r9 = r0;
    }
    res_1 = r5 - r10;
    nf_1 = res_1 >> 0x1f;  // (from the original)
    vf_1 = ((r5 ^ r10) & (r5 ^ res_1)) >> 0x1f;  // (from the original)
    if (nf_1 == vf_1) {
        r11 = r8 + 0x35c4u;  // (from the original)
        r7 = r8 + 0x3500u;  // (from the original)
    }
    if (nf_1 != vf_1) {
        goto L_59a62c;
    }
L_59a5cc:;
    res_2 = r9 - r6;
    r4 = r9;
    if (res_2 != 0 && res_2 >> 0x1f == ((r9 ^ r6) & (r9 ^ res_2)) >> 0x1f) {  // (from the original)
        goto L_59a620;
    }
    do {
L_59a5d8:;
        guest::cpu()->r[13] = r13;
        r0 = call_00753c94(r11, r4, r5, r3);
        r1 = guest::cpu()->r[1];
        r3 = guest::cpu()->r[3];
        if (!(r0 != 0)) {
            guest::cpu()->r[13] = r13;
            call_0059dab8(r8, r4, r5, 0u);
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

inline guest::global<u32, 0x0094eeb4> global_0094eeb4;  // (from the original)
inline guest::global<u32, 0x0094eedc> global_0094eedc;  // (from the original)
inline guest::global<u32, 0x0094ef04> global_0094ef04;  // (from the original)
inline guest::global<u32, 0x0094ef2c> global_0094ef2c;  // (from the original)
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
    u32 r0 = arg0.addr();
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r8 = guest::cpu()->r[8];
    u32 r9 = guest::cpu()->r[9];
    u32 r10 = guest::cpu()->r[10];
    u32 r11 = guest::cpu()->r[11];
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 r6_1 = 0;
    u32 r4_1 = 0;
    u32 r0_2 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r0_3 = 0;
    u32 zf_1 = 0;
    u32 r1_1 = 0;
    u32 r0_4 = 0;
    u32 r0_5 = 0;
    u32 r1_2 = 0;
    u32 r1_3 = 0;
    u32 zf_2 = 0;
    u32 r1_4 = 0;
    u32 r0_6 = 0;
    u32 r0_7 = 0;
    u32 r0_8 = 0;
    u32 r0_9 = 0;
    u32 r1_5 = 0;
    u32 r0_10 = 0;
    u32 r0_11 = 0;
    u32 r1_6 = 0;
    u32 r2_2 = 0;
    u32 r3_2 = 0;
    u32 r0_12 = 0;
    u32 r1_7 = 0;
    u32 r0_13 = 0;
    u32 r0_14 = 0;
    u32 r1_8 = 0;
    u32 r2_3 = 0;
    u32 r3_3 = 0;
    u32 r0_15 = 0;
    u32 r2_4 = 0;
    u32 r3_4 = 0;
    u32 r0_16 = 0;
    u32 r2_5 = 0;
    u32 ea_1 = 0;
    u32 r0_17 = 0;
    u32 r7_1 = 0;
    u32 ea_2 = 0;
    u32 r6_2 = 0;
    u32 ea_3 = 0;
    u32 r1_9 = 0;
    u32 r0_18 = 0;
    u32 zf_3 = 0;
    u32 r0_19 = 0;
    u32 r3_5 = 0;
    u32 r0_20 = 0;
    u32 ea_4 = 0;
    u32 r0_21 = 0;
    u32 r1_10 = 0;
    u32 r0_22 = 0;
    u32 r2_6 = 0;
    u32 r2_7 = 0;
    u32 r2_8 = 0;
    u32 r2_9 = 0;
    r5 = r0;
    r8 = r0 + 0x45b8u;  // (from the original)
    r13 = r13 - 0x30u;  // (from the original)
    r0_1 = u32(arg0->byte_45b8);
    r9 = 7u;
    r6_1 = 0x94eeb4u - 0x68u;  // (from the original)
    if (r0_1 != 4u) {
        if (r0_1 == 5u) {
            goto L_59a890;
        }
        if (r0_1 == 6u) {
            goto L_59a8a4;
        }
        goto L_59a91c;
    }
    r4_1 = *gptr<u32>(r5 + 0x20u);  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_2 = call_002f74c8(r0_1, r1, r2, r3);
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0_3 = call_002f74e0(0x10000000u, r0_2, r2_1, r3_1);  // (from the original)
    zf_1 = r0_3 == 0;
    r10 = 0u;
    if (!zf_1) {
        *gptr<u32>(r13) = u32(0x9047f8u);  // (from the original)
        *gptr<u32>(r13 + 4u) = u32(0x59a930u);  // (from the original)
        r1_1 = r13;
        r0_4 = r5 + 0x134u;  // (from the original)
        guest::cpu()->r[13] = r13;
        r0_5 = call_00317a50(r0_4, r1_1, r4_1, 0x80u);  // (from the original)
        r1_2 = guest::cpu()->r[1];
        goto L_59a724;
    }
    r1_3 = u32(*gptr<u8>(r6_1 + 3u));
    *gptr<u32>(r13) = u32(0x9047f8u);  // (from the original)
    zf_2 = r1_3 == 0;
    r1_4 = r13;
    if (!zf_2) {
        *gptr<u32>(r13 + 4u) = u32(0x59a950u);  // (from the original)
        r0_6 = r5 + 0x134u;  // (from the original)
        guest::cpu()->r[13] = r13;
        r0_5 = call_00317a50(r0_6, r1_4, r4_1, 0x80u);  // (from the original)
        r1_2 = guest::cpu()->r[1];
        goto L_59a724;
    }
    *gptr<u32>(r13 + 4u) = u32(0x59a970u);  // (from the original)
    r0_7 = r5 + 0x134u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_5 = call_00317a50(r0_7, r1_4, r4_1, 0x80u);  // (from the original)
    r1_2 = guest::cpu()->r[1];
L_59a724:;
    if (r0_5 == 0) {
        goto L_59a874;
    }
    if (u32(*gptr<u8>(r6_1 + 3u)) != 0) {
        r0_8 = r5 + 0x134u;  // (from the original)
        guest::cpu()->r[13] = r13;
        call_004eada4(r0_8, 0x10000u, 0x10000u, 0x10000u);  // (from the original)
    } else {
        r0_9 = r5 + 0x134u;  // (from the original)
        guest::cpu()->r[13] = r13;
        call_004eada4(r0_9, 0x30000u, 0x30000u, 0x20000u);  // (from the original)
    }
    r1_5 = r5 + 0x14u;  // (from the original)
    r0_10 = r5 + 0x134u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_11 = call_00317a88(r0_10, r1_5, 0u, 1u);
    r1_6 = guest::cpu()->r[1];
    r2_2 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0_12 = call_00594d8c(r0_11, r1_6, r2_2, r3_2);
    r1_7 = r5 + 0x14u;  // (from the original)
    r0_13 = r5 + 0x134u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_14 = call_00317a88(r0_13, r1_7, r0_12, 1u);
    r1_8 = guest::cpu()->r[1];
    r2_3 = guest::cpu()->r[2];
    r3_3 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0_15 = call_002f74c8(r0_14, r1_8, r2_3, r3_3);
    r2_4 = guest::cpu()->r[2];
    r3_4 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0_16 = call_002f74e0(0x10000000u, r0_15, r2_4, r3_4);  // (from the original)
    r1_2 = guest::cpu()->r[1];
    if (r0_16 == 0) {
        goto L_59a860;
    }
    r2_5 = *global_0094eeb4;
    guest::cpu()->r[13] = r13;
    call_0059cae8(r5, 0x846aa8u, r2_5, 0x94eeb4u);  // (from the original)
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r11 = 0x94ef54u;  // (from the original)
    r4 = 0u;
L_59a7e0:;
    ea_1 = r5 + 0x13cu;  // (from the original)
    r0_17 = *gptr<u32>(ea_1);
    r7_1 = r13;
    ea_2 = r11 + (r4 << 2);
    r6_2 = *gptr<u32>(ea_2);
    ea_3 = r0_17 + 0x20u;  // (from the original)
    r1_9 = *gptr<u32>(ea_3);
    if (r1_9 == 0) {
        r0_18 = r10;
    } else {
        r0_18 = ea_3 + r1_9;
    }
    zf_3 = r0_18 == 0;
    if (!zf_3) {
        zf_3 = r6_2 == 0;
    }
    *gptr<u32>(r13) = u32(r0_18);
    if (zf_3) {
        goto L_59a844;
    }
    guest::cpu()->r[13] = r13;
    r0_19 = call_002fa9d0(r6_2, r1_9, r2, r3);
    r3_5 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0_20 = call_00736a1c(r7_1, r6_2, r0_19, r3_5);
    r1_9 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0_20 == 0) {
        goto L_59a844;
    }
    ea_4 = r0_20 + 0xcu;  // (from the original)
    r1_9 = *gptr<u32>(ea_4);
    if (r1_9 == 0) {
        r0_21 = r10;
    } else {
        r0_21 = ea_4 + r1_9;
    }
    goto L_59a848;
L_59a844:;
    r0_21 = 0u;
L_59a848:;
    guest::cpu()->r[13] = r13;
    call_004f1d04(r0_21, r1_9, r2, r3);
    r1_2 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r4 = r4 + 1u;
    if (r4 < 3u) {
        guest::preempt();
        goto L_59a7e0;
    }
    goto L_59a86c;
L_59a860:;
    if (u32(*gptr<u8>(r6_1 + 3u)) == 0) {
        goto L_59a87c;
    }
L_59a86c:;
    r0_5 = 1u;
    *gptr<u8>(r8) = u8(r9);
L_59a874:;
    r13 = r13 + 0x30u;  // (from the original)
    guest::cpu()->r[1] = r1_2;
    guest::cpu()->r[13] = r13;
    return r0_5;
L_59a87c:;
    *gptr<u8>(r8) = u8(5u);
    r13 = r13 + 0x30u;  // (from the original)
    guest::cpu()->r[1] = r1_2;
    guest::cpu()->r[13] = r13;
    return 0u;
L_59a890:;
    *gptr<u8>(r8) = u8(6u);
    r13 = r13 + 0x30u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return 0u;
L_59a8a4:;
    if (u32(*gptr<u8>(r6_1 + 3u)) == 0) {
        r1_10 = *gptr<u32>(r5 + 0x20u);  // (from the original)
        r0_22 = r5 + 0x134u;  // (from the original)
        guest::cpu()->r[13] = r13;
        call_00178d78(r0_22, r1_10, r2, r3);
        r2_6 = *global_0094eeb4;
        guest::cpu()->r[13] = r13;
        call_0059cae8(r5, 0x846aa8u, r2_6, 0x94eeb4u);  // (from the original)
        r2_7 = *global_0094eedc;
        guest::cpu()->r[13] = r13;
        call_0059cae8(r5, 0x846a94u, r2_7, 0x94eedcu);  // (from the original)
        r2_8 = *global_0094ef04;
        guest::cpu()->r[13] = r13;
        call_0059cae8(r5, 0x846a84u, r2_8, 0x94ef04u);  // (from the original)
        r2_9 = *global_0094ef2c;
        guest::cpu()->r[13] = r13;
        call_0059cae8(r5, 0x846a70u, r2_9, 0x94ef2cu);  // (from the original)
        r1 = guest::cpu()->r[1];
    }
    *gptr<u8>(r8) = u8(r9);
L_59a91c:;
    r13 = r13 + 0x30u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return 1u;
}

}  // namespace d_0059a644
GUEST_EXPORT(0x0059a644, d_0059a644::f_0059a644);

// f_0059a9ac: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0059a9ac {

inline guest::global<u32, 0x0059aaa4> global_0059aaa4;  // (from the original)
inline guest::global<u8, 0x0094ee4f> global_0094ee4f;  // (from the original)
inline constexpr guest::Function<0x002f74c8, u32(u32, u32, u32, u32)> call_002f74c8;  // (from the original)
inline constexpr guest::Function<0x002f74e0, u32(u32, u32, u32, u32)> call_002f74e0;  // (from the original)
inline constexpr guest::Function<0x002fcb34, u32(u32, u32, u32, u32)> call_002fcb34;  // (from the original)
inline constexpr guest::Function<0x002fcb9c, u32(u32, u32, u32, u32)> call_002fcb9c;  // (from the original)
inline constexpr guest::Function<0x002fccdc, u32(u32, u32, u32, u32)> call_002fccdc;  // (from the original)
inline constexpr guest::Function<0x004e9fe8, u32(u32, u32, u32, u32)> call_004e9fe8;  // (from the original)
inline constexpr guest::Function<0x006a6dbc, u32(u32, u32, u32, u32)> call_006a6dbc;  // (from the original)

u32 f_0059a9ac(u32 r0, u32 r1, u32 r2, u32 r3, float S0, float S1) {
    u32 r13 = guest::cpu()->r[13];
    u32 r8_1 = 0;
    u32 r7_1 = 0;
    u32 r4_1 = 0;
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    float S0_1 = 0;
    float S1_1 = 0;
    u32 r2_2 = 0;
    u32 r3_2 = 0;
    float S0_2 = 0;
    float S1_2 = 0;
    u32 r2_3 = 0;
    u32 r3_3 = 0;
    u32 r2_4 = 0;
    u32 r3_4 = 0;
    u32 r0_2 = 0;
    u32 r1_2 = 0;
    u32 r2_5 = 0;
    u32 r3_5 = 0;
    float S0_3 = 0;
    float S1_3 = 0;
    u32 zf_1 = 0;
    u32 r0_3 = 0;
    float S1_4 = 0;
    float S0_4 = 0;
    r13 = r13 - 0x18;  // (from the original)
    r8_1 = r1;
    r7_1 = *gptr<u32>(r13 + 0x18u);  // (from the original)
    r4_1 = r0;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    r0_1 = call_006a6dbc(r0, r2, r3, r3);
    r1_1 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    S0_1 = guest::cpu()->s[0];
    S1_1 = guest::cpu()->s[1];
    if (r7_1 != 0) {
        guest::cpu()->r[13] = r13;
        guest::cpu()->s[0] = S0_1;
        guest::cpu()->s[1] = S1_1;
        r0_1 = call_004e9fe8(r2, r3, r2_1, r3_1);
        r1_1 = guest::cpu()->r[1];
        r2_1 = guest::cpu()->r[2];
        r3_1 = guest::cpu()->r[3];
        S0_1 = guest::cpu()->s[0];
        S1_1 = guest::cpu()->s[1];
        *gptr<u32>(r4_1 + 4u) = u32(std::bit_cast<u32>(S0_1));
    }
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_1;
    guest::cpu()->s[1] = S1_1;
    r0 = call_002f74c8(r0_1, r1_1, r2_1, r3_1);
    r2_2 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    S0_2 = guest::cpu()->s[0];
    S1_2 = guest::cpu()->s[1];
    r1 = r0;
    if (r0 != 0x2bu) {  // (from the original)
        guest::cpu()->r[13] = r13;
        guest::cpu()->s[0] = S0_2;
        guest::cpu()->s[1] = S1_2;
        r0 = call_002f74e0(0x10000000u, r1, r2_2, r3_2);  // (from the original)
        r1 = guest::cpu()->r[1];
        r2_3 = guest::cpu()->r[2];
        r3_3 = guest::cpu()->r[3];
        S0 = guest::cpu()->s[0];
        S1 = guest::cpu()->s[1];
        if (r0 == 0) {
            goto L_59aa24;
        }
    }
    S1 = std::bit_cast<float>(*global_0059aaa4);
    S0 = std::bit_cast<float>(*gptr<u32>(r4_1)) + S1;
    *gptr<u32>(r4_1) = u32(std::bit_cast<u32>(S0));
L_59aa20:;
    r13 = r13 + 0x18;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    return r0;
L_59aa24:;
    r0 = u32(*global_0094ee4f);
    if (r0 == 0) {
        guest::preempt();
        goto L_59aa20;
    }
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    r0 = call_002fcb9c(r8_1, r1, r2_3, r3_3);
    r1 = guest::cpu()->r[1];
    r2_4 = guest::cpu()->r[2];
    r3_4 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    if (r0 != 0) {
        guest::preempt();
        goto L_59aa20;
    }
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    r0_2 = call_002fccdc(r8_1, r1, r2_4, r3_4);
    r1_2 = guest::cpu()->r[1];
    r2_5 = guest::cpu()->r[2];
    r3_5 = guest::cpu()->r[3];
    S0_3 = guest::cpu()->s[0];
    S1_3 = guest::cpu()->s[1];
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_3;
    guest::cpu()->s[1] = S1_3;
    r0 = call_002fcb34(r8_1, r1_2, r2_5, r3_5);
    r1 = guest::cpu()->r[1];
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    zf_1 = r0_2 == 9u;
    if (!zf_1) {
        zf_1 = r0 == 0x3cu;  // (from the original)
    }
    if (!zf_1) {
        guest::preempt();
        goto L_59aa20;
    }
    r0_3 = 0x84661cu + ((r2 << 0x1e >> 0x1d) + ((r3 & 3u) << 3) << 2);  // (from the original)
    *gptr<u32>(r4_1) = u32(std::bit_cast<u32>(std::bit_cast<float>(*gptr<u32>(r4_1)) + std::bit_cast<float>(*gptr<u32>(r0_3))));
    S1_4 = std::bit_cast<float>(*gptr<u32>(r0_3 + 4u));
    S0_4 = std::bit_cast<float>(*gptr<u32>(r4_1 + 8u)) + S1_4;
    *gptr<u32>(r4_1 + 8u) = u32(std::bit_cast<u32>(S0_4));
    r13 = r13 + 0x18;  // (from the original)
    guest::cpu()->r[1] = 0x84661cu;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_4;
    guest::cpu()->s[1] = S1_4;
    return r0_3;
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
    u32 r4_1 = 0;
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r3_1 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r2_1 = 0;
    u32 r3_2 = 0;
    u32 r1_1 = 0;
    u32 r0_5 = 0;
    guest::cpu()->r[13] -= 0x18u;  // (from the original)
    r4_1 = r1;
    r0_1 = *gptr<u32>(0x94ee4cu + 0x14u);  // (from the original)
    if (r0_1 == 0) {
        goto L_59ac0c;
    }
    r0_2 = call_006a5e34(r0_1, r1, r2, r3);
    r3_1 = guest::cpu()->r[3];
    r0_3 = call_007529d8(r0_2, r4_1, r2, r3_1);
    r1 = guest::cpu()->r[1];
    if (r0_3 == 0) {
        goto L_59ac0c;
    }
    r0_4 = call_005921e0(r0, r4_1, r2, r3);
    r2_1 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    r1_1 = r0_4;
    if (r0_4 != 0) {
        r0_5 = *gptr<u32>(0x94ee4cu + 0x14u) + 0x3594u;  // (from the original)
        call_00125ca8(r0_5, r1_1, r2_1, r3_2);
        r1_1 = guest::cpu()->r[1];
        r0_4 = 1u;
    }
    guest::cpu()->r[13] += 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1_1;
    return r0_4;
L_59ac0c:;
    guest::cpu()->r[13] += 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return 0u;
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
    u32 r4_1 = 0;
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r3_1 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r2_1 = 0;
    u32 r3_2 = 0;
    u32 r1_1 = 0;
    u32 r0_5 = 0;
    guest::cpu()->r[13] -= 0x18u;  // (from the original)
    r4_1 = r1;
    r0_1 = *gptr<u32>(0x94ee4cu + 0x14u);  // (from the original)
    if (r0_1 == 0) {
        goto L_59ac88;
    }
    r0_2 = call_006a5e34(r0_1, r1, r2, r3);
    r3_1 = guest::cpu()->r[3];
    r0_3 = call_007529d8(r0_2, r4_1, r2, r3_1);
    r1 = guest::cpu()->r[1];
    if (r0_3 == 0) {
        goto L_59ac88;
    }
    r0_4 = call_005923fc(r0, r4_1, r2, r3);
    r2_1 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    r1_1 = r0_4;
    if (r0_4 != 0) {
        r0_5 = *gptr<u32>(0x94ee4cu + 0x14u) + 0x3594u;  // (from the original)
        call_00125ca8(r0_5, r1_1, r2_1, r3_2);
        r1_1 = guest::cpu()->r[1];
        r0_4 = 1u;
    }
    guest::cpu()->r[13] += 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1_1;
    return r0_4;
L_59ac88:;
    guest::cpu()->r[13] += 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return 0u;
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
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r9 = guest::cpu()->r[9];
    u32 r10 = guest::cpu()->r[10];
    u32 r13 = guest::cpu()->r[13];
    u32 r14 = guest::cpu()->r[14];
    u32 ea_1 = 0;
    u32 r4_1 = 0;
    u32 r2_1 = 0;
    u32 r10_1 = 0;
    u32 r0_1 = 0;
    u32 r2_2 = 0;
    u32 r3_1 = 0;
    u32 r1_1 = 0;
    u32 r2_3 = 0;
    u32 r3_2 = 0;
    u32 r0_2 = 0;
    u32 r2_4 = 0;
    u32 r3_3 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r2_5 = 0;
    u32 r3_4 = 0;
    u32 r0_5 = 0;
    u32 r0_6 = 0;
    u32 ea_2 = 0;
    u32 r4_2 = 0;
    u32 r5_1 = 0;
    u32 r6_1 = 0;
    u32 r7_1 = 0;
    u32 r8_1 = 0;
    u32 r9_1 = 0;
    u32 r10_2 = 0;
    ea_1 = r13 - 0x30;  // (from the original)
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
    *gptr<u32>(ea_1 + 0x2c) = u32(r14);  // (from the original)
    r13 = r13 - 0x38u;  // (from the original)
    r4_1 = r1;
    r5 = r0;
    guest::cpu()->r[13] = r13;
    r0 = call_002fcb84(r4_1, 0x7bu, r2, r3);  // (from the original)
    r1 = guest::cpu()->r[1];
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        goto L_59b3c0;
    }
    r1 = 0x98ad14u;  // (from the original)
    r7 = r4_1;
    r0 = 0u;
    r9 = r13 + 0x10u;  // (from the original)
    r8 = r13 + 0x14u;  // (from the original)
    r4 = r0;
L_59b300:;
    r2_1 = *gptr<u32>(r1 + (r0 << 2));
    if (r2_1 != 0) {
        *gptr<u32>(r1 + (r0 << 2)) = u32(r4);
        r10_1 = r4;
        guest::cpu()->r[13] = r13;
        r0_1 = call_002fd108(0x144u, r2_1, 4u, r3);  // (from the original)
        r2_2 = guest::cpu()->r[2];
        r3_1 = guest::cpu()->r[3];
        guest::cpu()->r[13] = r13;
        call_002f825c(r0_1, 0x144u, r2_2, r3_1);  // (from the original)
        r1_1 = guest::cpu()->r[1];
        r2_3 = guest::cpu()->r[2];
        r3_2 = guest::cpu()->r[3];
        guest::cpu()->r[13] = r13;
        r0_2 = call_00590f1c(r0_1, r1_1, r2_3, r3_2);
        r2_4 = guest::cpu()->r[2];
        r3_3 = guest::cpu()->r[3];
        *gptr<u32>(r0_2) = u32(0x907970u);  // (from the original)
        r0_3 = r0_2 + 0x124u;  // (from the original)
        guest::cpu()->r[13] = r13;
        r0_4 = call_004ecb80(r0_3, 0x907970u, r2_4, r3_3);  // (from the original)
        r2_5 = guest::cpu()->r[2];
        r3_4 = guest::cpu()->r[3];
        r4 = r0_4 - 0x124u;  // (from the original)
        r0_5 = r0_4 - 0x104u;  // (from the original)
        guest::cpu()->r[13] = r13;
        call_0012ca6c(r0_5, r2_1, r2_5, r3_4);
        *gptr<u32>(r13) = u32(r10_1);
        guest::cpu()->r[13] = r13;
        r0 = call_00591330(r4, r7, r9, r8);
        r1 = guest::cpu()->r[1];
        r2_1 = guest::cpu()->r[2];
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
    r0_6 = r5 + 0x35a0u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_00125ca8(r0_6, r4, r2_1, r3);
    *gptr<u32>(r4 + 0x68u) = u32(*gptr<u32>(r4 + 0x68u) | 0x2400u);  // (from the original)
    r0 = r5 + 0x3500u;  // (from the original)
    r1 = u32(*gptr<u16>(r0 + 0x90u)) + 1u;  // (from the original)
    *gptr<u16>(r0 + 0x90u) = u16(r1);  // (from the original)
L_59b3c0:;
    r13 = r13 + 0x18u;  // (from the original)
    ea_2 = r13;
    r13 = r13 + 0x20;  // (from the original)
    r4_2 = *gptr<u32>(ea_2);
    r5_1 = *gptr<u32>(ea_2 + 4);
    r6_1 = *gptr<u32>(ea_2 + 8);
    r7_1 = *gptr<u32>(ea_2 + 0xc);  // (from the original)
    r8_1 = *gptr<u32>(ea_2 + 0x10);  // (from the original)
    r9_1 = *gptr<u32>(ea_2 + 0x14);  // (from the original)
    r10_2 = *gptr<u32>(ea_2 + 0x18);  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[4] = r4_2;
    guest::cpu()->r[5] = r5_1;
    guest::cpu()->r[6] = r6_1;
    guest::cpu()->r[7] = r7_1;
    guest::cpu()->r[8] = r8_1;
    guest::cpu()->r[9] = r9_1;
    guest::cpu()->r[10] = r10_2;
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
    u32 r2_1 = 0;
    u32 r4_1 = 0;
    u32 r1_1 = 0;
    u32 r0_1 = 0;
    u32 r1_2 = 0;
    u32 r2_2 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r2_1 = u32(s32(s8(*gptr<u8>(0x94ee4cu + 3u))));  // (from the original)
    r4_1 = *gptr<u32>(0x94ee4cu + 0x14u);  // (from the original)
    r1_1 = 0u - r2_1;
    if ((r1_1 & r4_1) == 0) {
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        guest::cpu()->r[1] = r1_1;
        return 0u;
    }
    r0_1 = call_002fccc4(r0, r1_1, r2_1, guest::cpu()->r[3]);
    r1_2 = guest::cpu()->r[1];
    r2_2 = guest::cpu()->r[2];
    if (r0_1 == 0) {
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        guest::cpu()->r[1] = r1_2;
        return 0u;
    }
    r0_2 = call_002fd010(r0, r1_2, r2_2, guest::cpu()->r[3]);
    r1_2 = guest::cpu()->r[1];
    r0_3 = u32(*gptr<u8>(r0_2 + 0xcu));  // (from the original)
    if (r0_3 >= 0x87u) {  // (from the original)
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        guest::cpu()->r[1] = r1_2;
        return 0u;
    }
    if (r0_3 == 0) {
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        guest::cpu()->r[1] = r1_2;
        return 0u;
    }
    r1_1 = *gptr<u32>(r4_1 + 0x414u);  // (from the original)
    if (r1_1 == 0) {
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        guest::cpu()->r[1] = r1_1;
        return 0u;
    }
    r0_4 = r1_1 + (r0_3 + (r0_3 << 1) + (r0_3 << 3) << 1);
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1_1;
    return r0_4;
}

}  // namespace d_0059b61c
GUEST_EXPORT(0x0059b61c, d_0059b61c::f_0059b61c);

// f_0059baa8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0059baa8 {

inline guest::global<u32, 0x0014fc70> global_0014fc70;  // (from the original)
inline guest::global<u32, 0x0094ee60> global_0094ee60;  // (from the original)

u32 f_0059baa8(u32 r0, u32 r1) {
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    goto L_59baa8;
L_59baa8:;
    r0_1 = *global_0094ee60;
    if (r0_1 == 0) {
        r0_2 = ~0u;
        guest::cpu()->r[1] = r1;
        return r0_2;
    }
    return guest::call_address<u32>(*global_0014fc70, r0_1, r0, r1, r0);
}

}  // namespace d_0059baa8
GUEST_EXPORT(0x0059baa8, d_0059baa8::f_0059baa8);

// f_0059c090: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0059c090 {

inline guest::global<u32, 0x0059c198> global_0059c198;  // (from the original)
inline guest::global<u8, 0x0094ee4f> global_0094ee4f;  // (from the original)
inline constexpr guest::Function<0x002f74c8, u32(u32, u32, u32, u32)> call_002f74c8;  // (from the original)
inline constexpr guest::Function<0x002f74e0, u32(u32, u32, u32, u32)> call_002f74e0;  // (from the original)
inline constexpr guest::Function<0x002fcb34, u32(u32, u32, u32, u32)> call_002fcb34;  // (from the original)
inline constexpr guest::Function<0x002fcb9c, u32(u32, u32, u32, u32)> call_002fcb9c;  // (from the original)
inline constexpr guest::Function<0x002fccdc, u32(u32, u32, u32, u32)> call_002fccdc;  // (from the original)
inline constexpr guest::Function<0x0057ba08, u32(u32, u32, u32, u32)> call_0057ba08;  // (from the original)
inline constexpr guest::Function<0x005c33cc, u32(u32, u32, u32, u32)> call_005c33cc;  // (from the original)
inline constexpr guest::Function<0x006a6dbc, u32(u32, u32, u32, u32)> call_006a6dbc;  // (from the original)

u32 f_0059c090(u32 r0, u32 r1, u32 r2, u32 r3, float S0, float S1) {
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r1_1 = 0;
    u32 r3_1 = 0;
    float S0_1 = 0;
    float S1_1 = 0;
    u32 r9_1 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r1_2 = 0;
    u32 r2_1 = 0;
    u32 r3_2 = 0;
    float S0_2 = 0;
    float S1_2 = 0;
    u32 r0_5 = 0;
    u32 r2_2 = 0;
    u32 r3_3 = 0;
    float S0_3 = 0;
    float S1_3 = 0;
    u32 r0_6 = 0;
    u32 r1_3 = 0;
    float S0_4 = 0;
    float S1_4 = 0;
    u32 r0_7 = 0;
    u32 r1_4 = 0;
    u32 r0_8 = 0;
    u32 r1_5 = 0;
    u32 r2_3 = 0;
    u32 r3_4 = 0;
    float S0_5 = 0;
    float S1_5 = 0;
    u32 r0_9 = 0;
    u32 zf_1 = 0;
    u32 r0_10 = 0;
    u32 r1_6 = 0;
    r13 = r13 - 0x28u;  // (from the original)
    r0_1 = *gptr<u32>(r13 + 0x28u);  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    r0_2 = call_005c33cc(r0_1, 0u, r2, r3);
    r1_1 = guest::cpu()->r[1];
    r3_1 = guest::cpu()->r[3];
    S0_1 = guest::cpu()->s[0];
    S1_1 = guest::cpu()->s[1];
    if (r0_2 == 0) {
        goto L_59c18c;
    }
    r9_1 = r0_2 + 0x14u;  // (from the original)
    r0_3 = r13;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_1;
    guest::cpu()->s[1] = S1_1;
    r0_4 = call_006a6dbc(r0_3, r2, r3, r3_1);
    r1_2 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    S0_2 = guest::cpu()->s[0];
    S1_2 = guest::cpu()->s[1];
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_2;
    guest::cpu()->s[1] = S1_2;
    r0_5 = call_002f74c8(r0_4, r1_2, r2_1, r3_2);
    r2_2 = guest::cpu()->r[2];
    r3_3 = guest::cpu()->r[3];
    S0_3 = guest::cpu()->s[0];
    S1_3 = guest::cpu()->s[1];
    if (r0_5 != 0x2bu) {  // (from the original)
        guest::cpu()->r[13] = r13;
        guest::cpu()->s[0] = S0_3;
        guest::cpu()->s[1] = S1_3;
        r0_6 = call_002f74e0(0x10000000u, r0_5, r2_2, r3_3);  // (from the original)
        r1_3 = guest::cpu()->r[1];
        r2_2 = guest::cpu()->r[2];
        r3_3 = guest::cpu()->r[3];
        S0_4 = guest::cpu()->s[0];
        S1_4 = guest::cpu()->s[1];
        if (r0_6 == 0) {
            goto L_59c104;
        }
    }
    S1_4 = std::bit_cast<float>(*global_0059c198);
    S0_4 = std::bit_cast<float>(*gptr<u32>(r13)) + S1_4;
    *gptr<u32>(r13) = u32(std::bit_cast<u32>(S0_4));
    goto L_59c180;
L_59c104:;
    if (u32(*global_0094ee4f) == 0) {
        goto L_59c180;
    }
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_4;
    guest::cpu()->s[1] = S1_4;
    r0_7 = call_002fcb9c(r1, r1_3, r2_2, r3_3);
    r1_4 = guest::cpu()->r[1];
    r2_2 = guest::cpu()->r[2];
    r3_3 = guest::cpu()->r[3];
    S0_4 = guest::cpu()->s[0];
    S1_4 = guest::cpu()->s[1];
    if (r0_7 != 0) {
        goto L_59c180;
    }
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_4;
    guest::cpu()->s[1] = S1_4;
    r0_8 = call_002fccdc(r1, r1_4, r2_2, r3_3);
    r1_5 = guest::cpu()->r[1];
    r2_3 = guest::cpu()->r[2];
    r3_4 = guest::cpu()->r[3];
    S0_5 = guest::cpu()->s[0];
    S1_5 = guest::cpu()->s[1];
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_5;
    guest::cpu()->s[1] = S1_5;
    r0_9 = call_002fcb34(r1, r1_5, r2_3, r3_4);
    r2_2 = guest::cpu()->r[2];
    r3_3 = guest::cpu()->r[3];
    S0_4 = guest::cpu()->s[0];
    S1_4 = guest::cpu()->s[1];
    zf_1 = r0_8 == 9u;
    if (!zf_1) {
        zf_1 = r0_9 == 0x3cu;  // (from the original)
    }
    if (!zf_1) {
        goto L_59c180;
    }
    r2_2 = r3 & 3u;
    r0_10 = 0x84661cu + ((r2 << 0x1e >> 0x1d) + (r2_2 << 3) << 2);  // (from the original)
    *gptr<u32>(r13) = u32(std::bit_cast<u32>(std::bit_cast<float>(*gptr<u32>(r13)) + std::bit_cast<float>(*gptr<u32>(r0_10))));
    S1_4 = std::bit_cast<float>(*gptr<u32>(r0_10 + 4u));
    S0_4 = std::bit_cast<float>(*gptr<u32>(r13 + 8u)) + S1_4;
    *gptr<u32>(r13 + 8u) = u32(std::bit_cast<u32>(S0_4));
L_59c180:;
    r1_6 = r13;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_4;
    guest::cpu()->s[1] = S1_4;
    r0_2 = call_0057ba08(r9_1, r1_6, r2_2, r3_3);
    r1_1 = guest::cpu()->r[1];
    S0_1 = guest::cpu()->s[0];
    S1_1 = guest::cpu()->s[1];
L_59c18c:;
    *gptr<u16>(r0) = u16(r0_2);
    r13 = r13 + 0x28u;  // (from the original)
    guest::cpu()->r[1] = r1_1;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_1;
    guest::cpu()->s[1] = S1_1;
    return r0_2;
}

}  // namespace d_0059c090
GUEST_EXPORT(0x0059c090, d_0059c090::f_0059c090);

// f_0059c7a8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0059c7a8 {

inline guest::global<u32, 0x0014fc78> global_0014fc78;  // (from the original)
inline guest::global<u32, 0x0094ee60> global_0094ee60;  // (from the original)

u32 f_0059c7a8(u32 r0, u32 r1, u32 r2) {
    u32 r0_1 = 0;
    goto L_59c7a8;
L_59c7a8:;
    r0_1 = *global_0094ee60;
    if (r0_1 == 0) {
        guest::cpu()->r[1] = r1;
        return r0_1;
    }
    if (r2 + 1u == 0) {
        guest::cpu()->r[1] = r1;
        return 0u;
    }
    return guest::call_address<u32>(*global_0014fc78, r0_1, r0, r1, r2);
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

inline guest::global<u32, 0x0094ee94> global_0094ee94;  // (from the original)
inline guest::global<u32, 0x00952c3c> global_00952c3c;  // (from the original)
inline constexpr guest::Function<0x0031758c, u32(u32, u32, u32, u32)> call_0031758c;  // (from the original)

u32 f_0059c7e0(gptr<Object_0059c7e0_0> arg0, u32 r1) {
    u32 r0 = arg0.addr();
    u32 r9 = guest::cpu()->r[9];
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 r7_1 = 0;
    u32 r1_1 = 0;
    u32 zf_1 = 0;
    u32 r8_1 = 0;
    u32 r6_1 = 0;
    u32 r0_2 = 0;
    u32 r3_1 = 0;
    u32 r3_2 = 0;
    u32 r0_3 = 0;
    u32 r3_3 = 0;
    u32 r0_4 = 0;
    r13 = r13 - 0x40u;  // (from the original)
    r0_1 = arg0->word_20;
    if (r0_1 != 0) {
        goto L_59c8d4;
    }
    r7_1 = r0 + 0x45b8u;  // (from the original)
    arg0->byte_45b8 = u8(0u);
    r1_1 = 0x94ee94u - 0x48u;  // (from the original)
    *global_0094ee94 = u32(0u);
    *gptr<u32>(0x94ee94u + 4u) = u32(0u);  // (from the original)
    zf_1 = u32(s32(s8(*gptr<u8>(r1_1 + 3u)))) == 0;
    if (zf_1) {
        r8_1 = 0x100400u;  // (from the original)
    } else {
        r9 = 0x1e000u;  // (from the original)
        r8_1 = r9 + 0x1f0000u;  // (from the original)
    }
    r6_1 = *global_00952c3c;
    if (zf_1) {
        r9 = 0xdc00u;  // (from the original)
        goto L_59c880;
    }
    *gptr<u32>(r1_1 + 0xcu) = u32(0u);  // (from the original)
    r0_2 = r0 + 0x45cu;  // (from the original)
    if (arg0->word_460 != 0) {
        goto L_59c880;
    }
    r3_1 = r13 + 0x10u;  // (from the original)
    *gptr<u32>(r13 + 0x10u) = u32(0x9047f8u);  // (from the original)
    *gptr<u32>(r13 + 0x14u) = u32(0x846a1cu);  // (from the original)
    *gptr<u32>(r13 + 4u) = u32(0u);
    *gptr<u32>(r13) = u32(1u);
    guest::cpu()->r[13] = r13;
    call_0031758c(r0_2, 0x19800u, r6_1, r3_1);  // (from the original)
L_59c880:;
    r3_2 = r13 + 8u;
    *gptr<u32>(r13 + 0xcu) = u32(0x846ac8u);  // (from the original)
    r0_3 = r0 + 0x14u;  // (from the original)
    *gptr<u32>(r13 + 8u) = u32(0x9047f8u);  // (from the original)
    *gptr<u32>(r13 + 4u) = u32(0u);
    *gptr<u32>(r13) = u32(1u);
    guest::cpu()->r[13] = r13;
    call_0031758c(r0_3, r9, r6_1, r3_2);
    r3_3 = r13 + 8u;
    *gptr<u32>(r13 + 0xcu) = u32(0x846ab4u);  // (from the original)
    r0_4 = r0 + 0x1cu;  // (from the original)
    *gptr<u32>(r13 + 8u) = u32(0x9047f8u);  // (from the original)
    *gptr<u32>(r13 + 4u) = u32(0u);
    *gptr<u32>(r13) = u32(1u);
    guest::cpu()->r[13] = r13;
    r0_1 = call_0031758c(r0_4, r8_1, r6_1, r3_3);
    r1 = guest::cpu()->r[1];
    *gptr<u8>(r7_1) = u8(1u);
L_59c8d4:;
    r13 = r13 + 0x40u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0_1;
}

}  // namespace d_0059c7e0
GUEST_EXPORT(0x0059c7e0, d_0059c7e0::f_0059c7e0);

// f_0059c934: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0059c934 {

inline constexpr guest::Function<0x006a5e34, u32(u32, u32, u32, u32)> call_006a5e34;  // (from the original)
inline constexpr guest::Function<0x007529d8, u32(u32, u32, u32, u32)> call_007529d8;  // (from the original)

u32 f_0059c934(u32 r0, u32 r1, u32 r2) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r0_1 = 0;
    u32 zf_1 = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r4 = r0;
    r5 = r1;
    r0 = *gptr<u32>(0x94ee4cu + 0x14u);  // (from the original)
    if (r0 == 0) {
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r0_1 = call_006a5e34(r0, r1, r2, guest::cpu()->r[3]);
    r0 = call_007529d8(r0_1, r4, r5, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 == 0) {
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r0 = *gptr<u32>(*gptr<u32>(0x94ee4cu + 0x14u) + 0x35a4u);  // (from the original)
    if (r0 == 0) {
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        guest::cpu()->r[1] = r1;
        return r0;
    }
L_59c980:;
    r1 = *gptr<u32>(r0 + 0x28u);  // (from the original)
    zf_1 = r1 == r4;
    if (zf_1) {
        r1 = *gptr<u32>(r0 + 0x2cu);  // (from the original)
        zf_1 = r1 == r5;
    }
    if (!zf_1) {
        goto L_59c9b0;
    }
    if (r0 == 0) {
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r1 = *gptr<u32>(r0 + 0x68u);  // (from the original)
    if ((r1 & 8u) != 0) {
        r1 = 0xau;  // (from the original)
        *gptr<u8>(r0 + 0x11cu) = u8(r1);  // (from the original)
    }
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
L_59c9b0:;
    r0 = *gptr<u32>(r0 + 8u);
    if (r0 != 0) {
        guest::preempt();
        goto L_59c980;
    }
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_0059c934
GUEST_EXPORT(0x0059c934, d_0059c934::f_0059c934);

// f_0059cae8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0059cae8 {

inline constexpr guest::Function<0x002fa9d0, u32(u32, u32, u32, u32)> call_002fa9d0;  // (from the original)
inline constexpr guest::Function<0x002fb328, u32(u32, u32, u32, u32)> call_002fb328;  // (from the original)
inline constexpr guest::Function<0x004a6bb8, u32(u32, u32, u32, u32)> call_004a6bb8;  // (from the original)
inline constexpr guest::Function<0x004f2ef0, u32(u32, u32, u32, u32)> call_004f2ef0;  // (from the original)
inline constexpr guest::Function<0x00736a1c, u32(u32, u32, u32, u32)> call_00736a1c;  // (from the original)

u32 f_0059cae8(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 ea_1 = 0;
    u32 r1_1 = 0;
    u32 r0_3 = 0;
    u32 r6_1 = 0;
    u32 ea_2 = 0;
    u32 r0_4 = 0;
    u32 r2_2 = 0;
    u32 r3_2 = 0;
    u32 r5_1 = 0;
    u32 r0_5 = 0;
    u32 r4_1 = 0;
    u32 ea_3 = 0;
    u32 r1_2 = 0;
    u32 r0_6 = 0;
    u32 zf_1 = 0;
    u32 r0_7 = 0;
    u32 r3_3 = 0;
    u32 ea_4 = 0;
    u32 r2_3 = 0;
    u32 ea_5 = 0;
    u32 r3_4 = 0;
    *gptr<u32>(r13 + 0xffffffe0u) = u32(r3);  // (from the original)
    r13 = r13 - 0x20;  // (from the original)
    r0_1 = r0 + 0x13cu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_2 = call_004a6bb8(r0_1, r1, r2, r3);
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    ea_1 = r0_2 + 0xc0u;  // (from the original)
    r1_1 = *gptr<u32>(ea_1);
    if (r1_1 == 0) {
        r0_3 = 0u;
    } else {
        r0_3 = ea_1 + r1_1;
    }
    if (r0_3 == 0) {
        r6_1 = 0u;
        goto L_59cb30;
    }
    ea_2 = r0_3 + 0x28u;  // (from the original)
    r0_3 = ea_2;
    r1_1 = *gptr<u32>(ea_2);
    if (r1_1 == 0) {
        r6_1 = 0u;
    } else {
        r6_1 = r1_1 + r0_3;
    }
L_59cb30:;
    guest::cpu()->r[13] = r13;
    r0_4 = call_002fb328(r0_3, r1_1, r2_1, r3_1);
    r2_2 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    r5_1 = *gptr<u32>(r3 + ((u32(*gptr<u8>(r0_4 + 0x621ceu)) & 0xfu) << 2));  // (from the original)
    r0_5 = *gptr<u32>(r0 + 0x13cu);  // (from the original)
    r4_1 = r13;
    ea_3 = r0_5 + 0x28u;  // (from the original)
    r1_2 = *gptr<u32>(ea_3);
    if (r1_2 == 0) {
        r0_6 = 0u;
    } else {
        r0_6 = ea_3 + r1_2;
    }
    zf_1 = r0_6 == 0;
    if (!zf_1) {
        zf_1 = r5_1 == 0;
    }
    *gptr<u32>(r13) = u32(r0_6);
    if (zf_1) {
        goto L_59cbac;
    }
    guest::cpu()->r[13] = r13;
    r0_7 = call_002fa9d0(r5_1, r1_2, r2_2, r3_2);
    r3_3 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0_6 = call_00736a1c(r4_1, r5_1, r0_7, r3_3);
    r1_2 = guest::cpu()->r[1];
    if (r0_6 == 0) {
        goto L_59cbac;
    }
    ea_4 = r0_6 + 0xcu;  // (from the original)
    r0_6 = ea_4;
    r1_2 = *gptr<u32>(ea_4);
    if (r1_2 == 0) {
        r2_3 = 0u;
    } else {
        r2_3 = r1_2 + r0_6;
    }
    goto L_59cbb0;
L_59cbac:;
    r2_3 = 0u;
L_59cbb0:;
    if (r2_3 != 0) {
        ea_5 = r13;
        r13 = r13 + 0x20;  // (from the original)
        r3_4 = *gptr<u32>(ea_5);
        guest::cpu()->r[13] = r13;
        return call_004f2ef0(r6_1, r2, r2_3, r3_4);
    }
    r13 = r13 + 0x20;  // (from the original)
    guest::cpu()->r[1] = r1_2;
    guest::cpu()->r[13] = r13;
    return r0_6;
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
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r9 = guest::cpu()->r[9];
    u32 r13 = guest::cpu()->r[13];
    u32 r14 = guest::cpu()->r[14];
    u32 ea_1 = 0;
    u32 ea_2 = 0;
    u32 r5_1 = 0;
    u32 r6_1 = 0;
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r3_1 = 0;
    u32 r0_3 = 0;
    u32 r2_1 = 0;
    u32 r3_2 = 0;
    u32 r0_4 = 0;
    u32 ea_3 = 0;
    u32 ea_4 = 0;
    u32 r2_2 = 0;
    u32 r3_3 = 0;
    u32 r0_5 = 0;
    u32 ea_5 = 0;
    u32 r4_1 = 0;
    u32 r5_2 = 0;
    u32 r6_2 = 0;
    u32 r7_1 = 0;
    u32 r8_1 = 0;
    u32 r9_1 = 0;
    u32 r2_3 = 0;
    u32 r0_6 = 0;
    u32 r2_4 = 0;
    u32 r3_4 = 0;
    u32 r1_1 = 0;
    u32 r2_5 = 0;
    u32 r3_5 = 0;
    u32 r0_7 = 0;
    u32 r2_6 = 0;
    u32 r3_6 = 0;
    u32 r5_3 = 0;
    u32 r0_8 = 0;
    u32 ea_6 = 0;
    u32 ea_7 = 0;
    u32 r2_7 = 0;
    u32 r3_7 = 0;
    u32 r2_8 = 0;
    u32 r3_8 = 0;
    u32 r1_2 = 0;
    u32 r0_9 = 0;
    u32 r4_2 = 0;
    u32 r0_10 = 0;
    u32 r1_3 = 0;
    u32 r2_9 = 0;
    u32 r3_9 = 0;
    u32 r1_4 = 0;
    u32 r2_10 = 0;
    u32 r0_11 = 0;
    u32 r1_5 = 0;
    u32 ea_8 = 0;
    u32 r4_3 = 0;
    u32 r5_4 = 0;
    u32 r6_3 = 0;
    u32 r7_2 = 0;
    u32 r8_2 = 0;
    u32 r9_2 = 0;
    ea_1 = r13 - 0x28;  // (from the original)
    *gptr<u32>(ea_1) = u32(r0);
    *gptr<u32>(ea_1 + 4) = u32(r1);
    *gptr<u32>(ea_1 + 8) = u32(r2);
    *gptr<u32>(ea_1 + 0xc) = u32(r4);  // (from the original)
    *gptr<u32>(ea_1 + 0x10) = u32(r5);  // (from the original)
    *gptr<u32>(ea_1 + 0x14) = u32(r6);  // (from the original)
    *gptr<u32>(ea_1 + 0x18) = u32(r7);  // (from the original)
    *gptr<u32>(ea_1 + 0x1c) = u32(r8);  // (from the original)
    *gptr<u32>(ea_1 + 0x20) = u32(r9);  // (from the original)
    *gptr<u32>(ea_1 + 0x24) = u32(r14);  // (from the original)
    r13 = r13 - 0x30u;  // (from the original)
    r8 = 0u;
    r7 = 0x94ee4cu;  // (from the original)
    ea_2 = r13 + 0xcu;  // (from the original)
    r5_1 = *gptr<u32>(ea_2);
    r6_1 = *gptr<u32>(ea_2 + 4);
    r0_1 = *gptr<u32>(r7 + 0x14u);  // (from the original)
    if (r0_1 == 0) {
        goto L_59cd94;
    }
    guest::cpu()->r[13] = r13;
    r0_2 = call_006a5e34(r0_1, r1, r2, r3);
    r3_1 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0_3 = call_007529d8(r0_2, r5_1, r6_1, r3_1);
    r1 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    if (r0_3 == 0) {
        goto L_59cd94;
    }
    *gptr<u16>(r13 + 4u) = u16(r8);
    guest::cpu()->r[13] = r13;
    r0_4 = call_00305f44(r0_3, r1, r2_1, r3_2);
    ea_3 = r13;
    *gptr<u32>(ea_3) = u32(r0_4);
    ea_4 = r13 + 0xcu;  // (from the original)
    r2_2 = *gptr<u32>(ea_4);
    r3_3 = *gptr<u32>(ea_4 + 4);
    r0_5 = r13 + 4u;
    guest::cpu()->r[13] = r13;
    call_0059c090(r0_5, r0, r2_2, r3_3);
    r1 = 0x98a47cu;  // (from the original)
    r3 = 0x226u;  // (from the original)
    r6 = r0;
    r0 = 0u;
    goto L_59cda0;
L_59cd94:;
    r0 = 0u;
L_59cd98:;
    r13 = r13 + 0x14u;  // (from the original)
    ea_5 = r13;
    r13 = r13 + 0x1c;  // (from the original)
    r4_1 = *gptr<u32>(ea_5);
    r5_2 = *gptr<u32>(ea_5 + 4);
    r6_2 = *gptr<u32>(ea_5 + 8);
    r7_1 = *gptr<u32>(ea_5 + 0xc);  // (from the original)
    r8_1 = *gptr<u32>(ea_5 + 0x10);  // (from the original)
    r9_1 = *gptr<u32>(ea_5 + 0x14);  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[4] = r4_1;
    guest::cpu()->r[5] = r5_2;
    guest::cpu()->r[6] = r6_2;
    guest::cpu()->r[7] = r7_1;
    guest::cpu()->r[8] = r8_1;
    guest::cpu()->r[9] = r9_1;
    guest::cpu()->r[13] = r13;
    return r0;
L_59cda0:;
    r2_3 = *gptr<u32>(r1 + (r0 << 2));
    if (r2_3 != 0) {
        *gptr<u32>(r1 + (r0 << 2)) = u32(r8);
        guest::cpu()->r[13] = r13;
        r0_6 = call_002fd108(0x128u, r2_3, 4u, r3);  // (from the original)
        r2_4 = guest::cpu()->r[2];
        r3_4 = guest::cpu()->r[3];
        guest::cpu()->r[13] = r13;
        call_002f825c(r0_6, 0x128u, r2_4, r3_4);  // (from the original)
        r1_1 = guest::cpu()->r[1];
        r2_5 = guest::cpu()->r[2];
        r3_5 = guest::cpu()->r[3];
        guest::cpu()->r[13] = r13;
        r0_7 = call_00590f1c(r0_6, r1_1, r2_5, r3_5);
        r2_6 = guest::cpu()->r[2];
        r3_6 = guest::cpu()->r[3];
        r5_3 = r0_7 + 0x126u;  // (from the original)
        *gptr<u32>(r0_7) = u32(0x907bd0u);  // (from the original)
        *gptr<u16>(0x124u + r0_7) = u16(r8);  // (from the original)
        r0_8 = r0_7 + 0x20u;  // (from the original)
        *gptr<u16>(r5_3) = u16(r8);
        guest::cpu()->r[13] = r13;
        call_0012ca6c(r0_8, r2_3, r2_6, r3_6);
        ea_6 = r13;
        *gptr<u32>(ea_6) = u32(r8);
        ea_7 = r13 + 0xcu;  // (from the original)
        r2_7 = *gptr<u32>(ea_7);
        r3_7 = *gptr<u32>(ea_7 + 4);
        guest::cpu()->r[13] = r13;
        call_00590720(r0_7, r6, r2_7, r3_7);
        r2_8 = guest::cpu()->r[2];
        r3_8 = guest::cpu()->r[3];
        r1_2 = u32(*gptr<u16>(r13 + 4u));
        *gptr<u16>(r0_7 + 0x124u) = u16(r1_2);  // (from the original)
        *gptr<u16>(r5_3) = u16(r8);
        guest::cpu()->r[13] = r13;
        call_0058fe4c(r0_7, r1_2, r2_8, r3_8);
        r1 = guest::cpu()->r[1];
        r2_3 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r0 = r0_7;
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
    r0_9 = *gptr<u32>(r7 + 0x14u) + 0x3594u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_00125ca8(r0_9, r0, r2_3, r3);
    r4_2 = r13 + 0xcu;  // (from the original)
    r0_10 = *gptr<u32>(r7 + 0x14u);  // (from the original)
    r1_3 = *gptr<u32>(r4_2);
    r2_9 = *gptr<u32>(r4_2 + 4);
    guest::cpu()->r[13] = r13;
    call_005a2670(r0_10, r1_3, r2_9, 0u);
    r3_9 = guest::cpu()->r[3];
    r1_4 = *gptr<u32>(r4_2);
    r2_10 = *gptr<u32>(r4_2 + 4);
    r0_11 = *gptr<u32>(r7 + 0x14u) + 0x35c4u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_005a2624(r0_11, r1_4, r2_10, r3_9);
    r1_5 = guest::cpu()->r[1];
    r13 = r13 + 0x14u;  // (from the original)
    ea_8 = r13;
    r13 = r13 + 0x1c;  // (from the original)
    r4_3 = *gptr<u32>(ea_8);
    r5_4 = *gptr<u32>(ea_8 + 4);
    r6_3 = *gptr<u32>(ea_8 + 8);
    r7_2 = *gptr<u32>(ea_8 + 0xc);  // (from the original)
    r8_2 = *gptr<u32>(ea_8 + 0x10);  // (from the original)
    r9_2 = *gptr<u32>(ea_8 + 0x14);  // (from the original)
    guest::cpu()->r[1] = r1_5;
    guest::cpu()->r[4] = r4_3;
    guest::cpu()->r[5] = r5_4;
    guest::cpu()->r[6] = r6_3;
    guest::cpu()->r[7] = r7_2;
    guest::cpu()->r[8] = r8_2;
    guest::cpu()->r[9] = r9_2;
    guest::cpu()->r[13] = r13;
    return 1u;
}

}  // namespace d_0059cd24
GUEST_EXPORT(0x0059cd24, d_0059cd24::f_0059cd24);

// f_0059e65c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0059e65c {

inline constexpr guest::Function<0x0059e758, u32(u32, u32, u32, u32)> call_0059e758;  // (from the original)
inline constexpr guest::Function<0x005a2624, u32(u32, u32, u32, u32)> call_005a2624;  // (from the original)
inline constexpr guest::Function<0x005a2670, u32(u32, u32, u32, u32)> call_005a2670;  // (from the original)
inline constexpr guest::Function<0x005a2708, u32(u32, u32, u32, u32)> call_005a2708;  // (from the original)
inline constexpr guest::Function<0x00753c94, u32(u32, u32, u32, u32)> call_00753c94;  // (from the original)

u32 f_0059e65c(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r3_1 = 0;
    u32 r0_4 = 0;
    u32 r3_2 = 0;
    u32 r0_5 = 0;
    u32 r0_6 = 0;
    u32 r0_7 = 0;
    u32 r4_1 = 0;
    u32 zf_1 = 0;
    u32 r0_8 = 0;
    u32 r0_9 = 0;
    guest::cpu()->r[13] -= 0x18u;  // (from the original)
    r5 = r0;
    r8 = 0x94ee4cu;  // (from the original)
    r6 = r1;
    r0_1 = *gptr<u32>(r8 + 0x14u);  // (from the original)
    if (r0_1 == 0) {
        goto L_59e74c;
    }
    r0_2 = r0_1 + 0x404cu;  // (from the original)
    r0_3 = call_00753c94(r0_2, r5, r1, r3);
    r3_1 = guest::cpu()->r[3];
    if (r0_3 != 0) {
        r0_4 = *gptr<u32>(r8 + 0x14u) + 0x404cu;  // (from the original)
        call_005a2708(r0_4, r5, r6, r3_1);
        r3_2 = guest::cpu()->r[3];
        r0_5 = *gptr<u32>(r8 + 0x14u);  // (from the original)
        guest::cpu()->r[13] += 0x18u;  // (from the original)
        r0_6 = r0_5 + 0x35c4u;  // (from the original)
        return call_005a2624(r0_6, r5, r6, r3_2);
    }
    r0_7 = *gptr<u32>(r8 + 0x14u);  // (from the original)
    call_005a2670(r0_7, r5, r6, 0u);
    r3 = guest::cpu()->r[3];
    if (r2 == 0) {
        goto L_59e730;
    }
    r7 = *gptr<u32>(r8 + 0x14u);  // (from the original)
    r1 = *gptr<u32>(0x3598u + r7);  // (from the original)
    if (r1 == 0) {
        goto L_59e730;
    }
    do {
L_59e700:;
        r4_1 = *gptr<u32>(r1 + 8u);
        zf_1 = *gptr<u32>(r1 + 0x28u) == r5;  // (from the original)
        if (zf_1) {
            zf_1 = *gptr<u32>(r1 + 0x2cu) == r6;  // (from the original)
        }
        if (zf_1) {
            call_0059e758(r7, r1, 0u, 1u);
            r3 = guest::cpu()->r[3];
        }
        r1 = r4_1;
        guest::preempt();
    } while (r4_1 != 0);
L_59e730:;
    r0_8 = *gptr<u32>(r8 + 0x14u);  // (from the original)
    guest::cpu()->r[13] += 0x18u;  // (from the original)
    r0_9 = r0_8 + 0x35c4u;  // (from the original)
    return call_005a2708(r0_9, r5, r6, r3);
L_59e74c:;
    guest::cpu()->r[13] += 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0_1;
}

}  // namespace d_0059e65c
GUEST_EXPORT(0x0059e65c, d_0059e65c::f_0059e65c);

// f_0059ec48: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0059ec48 {


u32 f_0059ec48() {
    u32 r0 = 0;
    u32 r1 = 0;
    u32 r2_1 = 0;
    u32 r2_2 = 0;
    u32 res_1 = 0;
    u32 nf_1 = 0;
    u32 zf_1 = 0;
    u32 vf_1 = 0;
    u32 zf_2 = 0;
    u32 zf_3 = 0;
    u32 zf_4 = 0;
    u32 r0_1 = 0;
    r1 = 0x9b417cu;  // (from the original)
    r0 = 0u;
L_59ec50:;
    r2_1 = r1 + (r0 + (r0 << 3) << 1);
    if (u32(*gptr<u8>(r2_1 + 0xfu)) == 0) {  // (from the original)
        goto L_59eca4;
    }
    r2_2 = u32(*gptr<u8>(r2_1 + 0xeu));  // (from the original)
    res_1 = r2_2 - 0x17u;  // (from the original)
    nf_1 = res_1 >> 0x1f;  // (from the original)
    zf_1 = res_1 == 0;
    vf_1 = ((r2_2 ^ 0x17u) & (r2_2 ^ res_1)) >> 0x1f;  // (from the original)
    if (zf_1) {
        guest::cpu()->r[1] = r1;
        return r0;
    }
    if (!!zf_1 || nf_1 != vf_1) {
        zf_2 = r2_2 == 2u;
        if (!zf_2) {
            zf_2 = r2_2 == 4u;
        }
        if (zf_2) {
            guest::cpu()->r[1] = r1;
            return r0;
        }
        zf_3 = r2_2 == 5u;
        if (!zf_3) {
            zf_3 = r2_2 == 0x15u;  // (from the original)
        }
        if (zf_3) {
            guest::cpu()->r[1] = r1;
            return r0;
        }
        goto L_59eca4;
    }
    zf_4 = r2_2 == 0x18u;  // (from the original)
    if (!zf_4) {
        zf_4 = r2_2 == 0x19u;  // (from the original)
    }
    if (zf_4) {
        guest::cpu()->r[1] = r1;
        return r0;
    }
    if (r2_2 == 0x1au) {  // (from the original)
        guest::cpu()->r[1] = r1;
        return r0;
    }
L_59eca4:;
    r0 = r0 + 1u;
    if (s32(r0) < s32(4u)) {
        guest::preempt();
        goto L_59ec50;
    }
    r0_1 = ~0u;
    guest::cpu()->r[1] = r1;
    return r0_1;
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
    u32 r3 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r0_2 = 0;
    u32 zf_1 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 res_1 = 0;
    u32 nf_1 = 0;
    u32 zf_2 = 0;
    u32 vf_1 = 0;
    u32 zf_3 = 0;
    u32 zf_4 = 0;
    u32 r0_5 = 0;
    u32 r1_2 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r0_6 = 0;
    u32 r2_2 = 0;
    u32 r3_2 = 0;
    u32 r0_7 = 0;
    u32 r1_3 = 0;
    u32 r2_3 = 0;
    u32 r3_3 = 0;
    u32 r0_8 = 0;
    u32 r2_4 = 0;
    u32 r3_4 = 0;
    u32 r1_4 = 0;
    u32 r0_9 = 0;
    u32 r0_10 = 0;
    u32 r3_5 = 0;
    u32 r0_11 = 0;
    u32 r0_12 = 0;
    u32 r1_5 = 0;
    u32 r2_5 = 0;
    u32 r3_6 = 0;
    u32 r4_1 = 0;
    u32 r0_13 = 0;
    u32 r1_6 = 0;
    u32 r2_6 = 0;
    u32 r3_7 = 0;
    u32 r0_14 = 0;
    u32 r0_15 = 0;
    u32 r0_16 = 0;
    u32 r2_7 = 0;
    u32 r3_8 = 0;
    u32 r0_17 = 0;
    u32 r1_7 = 0;
    u32 r2_8 = 0;
    u32 r3_9 = 0;
    u32 r0_18 = 0;
    u32 r0_19 = 0;
    u32 r1_8 = 0;
    u32 r2_9 = 0;
    u32 r3_10 = 0;
    u32 r0_20 = 0;
    u32 r0_21 = 0;
    u32 r0_22 = 0;
    u32 r2_10 = 0;
    u32 r3_11 = 0;
    u32 r0_23 = 0;
    u32 r0_24 = 0;
    u32 r0_25 = 0;
    u32 r0_26 = 0;
    u32 r2_11 = 0;
    u32 r3_12 = 0;
    u32 r0_27 = 0;
    r13 = r13 - 0x28u;  // (from the original)
    r4 = 0x9b417cu + (r1 + (r1 << 3) << 1);  // (from the original)
    r0_1 = r1 + (r1 << 3);
    r1_1 = u32(*gptr<u8>(r4 + 0xeu));  // (from the original)
    r0_2 = u32(*gptr<u8>(0x9b417cu + (r0_1 << 1) + 0x11u));  // (from the original)
    zf_1 = r1_1 == 2u;
    if (!zf_1) {
        zf_1 = r2 == 0;
    }
    if (zf_1) {
        r0_3 = r0_2 & ~2u;
    } else {
        r0_3 = r0_2 | 2u;
    }
    *gptr<u8>(r4 + 0x11u) = u8(r0_3);  // (from the original)
    r0_4 = u32(*gptr<u8>(r4 + 0xeu));  // (from the original)
    res_1 = r0_4 - 0x17u;  // (from the original)
    nf_1 = res_1 >> 0x1f;  // (from the original)
    zf_2 = res_1 == 0;
    vf_1 = ((r0_4 ^ 0x17u) & (r0_4 ^ res_1)) >> 0x1f;  // (from the original)
    if (zf_2) {
        goto L_59ed38;
    }
    if (!!zf_2 || nf_1 != vf_1) {
        zf_3 = r0_4 == 2u;
        if (!zf_3) {
            zf_3 = r0_4 == 4u;
        }
        if (!zf_3) {
            zf_3 = r0_4 == 5u;
        }
        if (zf_3) {
            goto L_59edec;
        }
        if (r0_4 == 0x15u) {  // (from the original)
            goto L_59ed38;
        }
        r13 = r13 + 0x28u;  // (from the original)
        guest::cpu()->r[1] = r1_1;
        guest::cpu()->r[13] = r13;
        return r0_4;
    }
    zf_4 = r0_4 == 0x18u;  // (from the original)
    if (!zf_4) {
        zf_4 = r0_4 == 0x19u;  // (from the original)
    }
    if (!zf_4) {
        zf_4 = r0_4 == 0x1au;  // (from the original)
    }
    if (!zf_4) {
        r13 = r13 + 0x28u;  // (from the original)
        guest::cpu()->r[1] = r1_1;
        guest::cpu()->r[13] = r13;
        return r0_4;
    }
L_59ed38:;
    *gptr<u8>(r4 + 0xeu) = u8(0xbu);  // (from the original)
    r0_5 = r4 + 4u;
    guest::cpu()->r[13] = r13;
    call_002fc8e8(r0_5, r0, r2, 0x9b417cu);  // (from the original)
    r1_2 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    r0_6 = r4 + 4u;
    guest::cpu()->r[13] = r13;
    call_006b9b5c(r0_6, r1_2, r2_1, r3_1);
    r2_2 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    r0_7 = r4 + 8u;
    guest::cpu()->r[13] = r13;
    call_002fc8e8(r0_7, r0, r2_2, r3_2);
    r1_3 = guest::cpu()->r[1];
    r2_3 = guest::cpu()->r[2];
    r3_3 = guest::cpu()->r[3];
    r0_8 = r4 + 8u;
    guest::cpu()->r[13] = r13;
    call_006b9b5c(r0_8, r1_3, r2_3, r3_3);
    r2_4 = guest::cpu()->r[2];
    r3_4 = guest::cpu()->r[3];
    r1_4 = r4 + 8u;
    r0_9 = r4 + 4u;
    guest::cpu()->r[13] = r13;
    call_00599ca0(r0_9, r1_4, r2_4, r3_4);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
L_59ed7c:;
    r0_10 = r13;
    guest::cpu()->r[13] = r13;
    call_005a064c(r0_10, r1, r2, r3);
    r3_5 = guest::cpu()->r[3];
    r0_11 = r13;
    guest::cpu()->r[13] = r13;
    r0_12 = call_0059f7c8(r0_11, r4, 6u, r3_5);
    r1_5 = guest::cpu()->r[1];
    r2_5 = guest::cpu()->r[2];
    r3_6 = guest::cpu()->r[3];
    r4_1 = r13;
    guest::cpu()->r[13] = r13;
    r0_13 = call_002fc900(r0_12, r1_5, r2_5, r3_6);
    r1_6 = guest::cpu()->r[1];
    r2_6 = guest::cpu()->r[2];
    r3_7 = guest::cpu()->r[3];
    if (r0_13 != 0) {
        guest::cpu()->r[13] = r13;
        r0_14 = call_0030b6c4(r0_13, r1_6, r2_6, r3_7);
        r1_6 = guest::cpu()->r[1];
        r2_6 = guest::cpu()->r[2];
        r3_7 = guest::cpu()->r[3];
        if (r0_14 == 0) {
            goto L_59eeac;
        }
    }
    guest::cpu()->r[13] = r13;
    call_0059f4d8(r4_1, r1_6, r2_6, r3_7);
    r1 = guest::cpu()->r[1];
    r0_15 = r13;
    r13 = r13 + 0x28u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0_15;
L_59edec:;
    *gptr<u8>(r4 + 0xeu) = u8(0xau);  // (from the original)
    r0_16 = r4 + 4u;
    guest::cpu()->r[13] = r13;
    call_002fc8e8(r0_16, r0, r2, 0x9b417cu);  // (from the original)
    r2_7 = guest::cpu()->r[2];
    r3_8 = guest::cpu()->r[3];
    r0_17 = r4 + 8u;
    guest::cpu()->r[13] = r13;
    call_002fc8e8(r0_17, r0, r2_7, r3_8);
    r1_7 = guest::cpu()->r[1];
    r2_8 = guest::cpu()->r[2];
    r3_9 = guest::cpu()->r[3];
    r0_18 = r4 + 4u;
    guest::cpu()->r[13] = r13;
    r0_19 = call_00768ba8(r0_18, r1_7, r2_8, r3_9);
    r1_8 = guest::cpu()->r[1];
    r2_9 = guest::cpu()->r[2];
    r3_10 = guest::cpu()->r[3];
    if (r0_19 == 0) {
        r0_20 = r4 + 4u;
        guest::cpu()->r[13] = r13;
        r0_21 = call_002fcb84(r0_20, 0xc9u, r2_9, r3_10);  // (from the original)
        r1_8 = guest::cpu()->r[1];
        r2_9 = guest::cpu()->r[2];
        r3_10 = guest::cpu()->r[3];
        if (r0_21 == 0) {
            goto L_59ee44;
        }
    }
    r0_21 = 0xcu;  // (from the original)
    *gptr<u8>(r4 + 0xeu) = u8(r0_21);  // (from the original)
L_59ee44:;
    guest::cpu()->r[13] = r13;
    r0_22 = call_002f74c8(r0_21, r1_8, r2_9, r3_10);
    r2_10 = guest::cpu()->r[2];
    r3_11 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0_23 = call_002f74e0(4u, r0_22, r2_10, r3_11);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0_23 == 0) {
        guest::preempt();
        goto L_59ed7c;
    }
    guest::cpu()->r[13] = r13;
    r0_24 = call_002fcb84(r0, 0x339fu, r2, r3);  // (from the original)
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0_24 == 0) {
        guest::preempt();
        goto L_59ed7c;
    }
    r0_25 = r13;
    guest::cpu()->r[13] = r13;
    r0_26 = call_002fcbb0(r0_25, 0x33a0u, r2, r3);  // (from the original)
    r2_11 = guest::cpu()->r[2];
    r3_12 = guest::cpu()->r[3];
    r0_27 = r4 + 4u;
    guest::cpu()->r[13] = r13;
    call_002fc8e8(r0_27, r0_26, r2_11, r3_12);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    guest::preempt();
    goto L_59ed7c;
L_59eeac:;
    guest::cpu()->r[13] = r13;
    call_006249b0(0x3au, 0u, r4_1, 0x16u);  // (from the original)
    r1 = guest::cpu()->r[1];
    r0_15 = r13;
    r13 = r13 + 0x28u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0_15;
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
    u32 ea_2 = 0;
    u32 r2_1 = 0;
    u32 r4_1 = 0;
    u32 r2_2 = 0;
    u32 r3_1 = 0;
    u32 r1_1 = 0;
    u32 r0_1 = 0;
    u32 r2_3 = 0;
    u32 r3_2 = 0;
    u32 r1_2 = 0;
    u32 r0_2 = 0;
    u32 r12_1 = 0;
    u32 r3_3 = 0;
    u32 r9_1 = 0;
    u32 r10_1 = 0;
    u32 r3_4 = 0;
    u32 r2_4 = 0;
    u32 r8_1 = 0;
    u32 r0_3 = 0;
    u32 r3_5 = 0;
    u32 r0_4 = 0;
    u32 r0_5 = 0;
    u32 r1_3 = 0;
    u32 r2_5 = 0;
    u32 r3_6 = 0;
    u32 r4_2 = 0;
    u32 r0_6 = 0;
    u32 r1_4 = 0;
    u32 r2_6 = 0;
    u32 r3_7 = 0;
    u32 r0_7 = 0;
    u32 ea_3 = 0;
    u32 r4_3 = 0;
    u32 r5_1 = 0;
    u32 r6_1 = 0;
    u32 r7_1 = 0;
    u32 r8_2 = 0;
    u32 r9_2 = 0;
    u32 r10_2 = 0;
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
    r13 = r13 - 0x50u;  // (from the original)
    r5 = 0u;
    ea_2 = r13 + 0x50u;  // (from the original)
    r6 = *gptr<u32>(ea_2);
    r7 = *gptr<u32>(ea_2 + 4);
    r8 = *gptr<u32>(ea_2 + 8);
    r9 = *gptr<u32>(ea_2 + 0xc);  // (from the original)
    r10 = *gptr<u32>(ea_2 + 0x10);  // (from the original)
    r11 = *gptr<u32>(ea_2 + 0x14);  // (from the original)
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
    r2_1 = r5 + (r5 << 3);
    r4_1 = r0 + (r2_1 << 1);
    guest::cpu()->r[13] = r13;
    call_002fc8e8(r4_1, r1, r2_1, r3);
    r2_2 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    r1_1 = *gptr<u32>(r13 + 0x24u);  // (from the original)
    r0_1 = r4_1 + 4u;
    guest::cpu()->r[13] = r13;
    call_002fc8e8(r0_1, r1_1, r2_2, r3_1);
    r2_3 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    r1_2 = *gptr<u32>(r13 + 0x28u);  // (from the original)
    r0_2 = r4_1 + 8u;
    guest::cpu()->r[13] = r13;
    call_002fc8e8(r0_2, r1_2, r2_3, r3_2);
    r12_1 = 2u & r9 << 1;
    r3_3 = 0x1cu & r10 << 2;  // (from the original)
    r9_1 = (u32(*gptr<u8>(r4_1 + 0x11u)) & ~1u | r8 & 1u) & ~2u;  // (from the original)
    r10_1 = *gptr<u32>(r13 + 0x68u);  // (from the original)
    *gptr<u8>(r4_1 + 0xcu) = u8(r6);  // (from the original)
    r3_4 = (r3_3 | (r12_1 | r9_1) & ~0x1cu) & ~0x20u;  // (from the original)
    *gptr<u8>(r4_1 + 0xdu) = u8(r7);  // (from the original)
    *gptr<u8>(r4_1 + 0xfu) = u8(1u);  // (from the original)
    r2_4 = (0x20u & r11 << 5 | r3_4) & ~0xc0u;  // (from the original)
    r8_1 = 0xc0u & r10_1 << 6;  // (from the original)
    *gptr<u8>(r4_1 + 0xeu) = u8(*gptr<u32>(r13 + 0x1cu));  // (from the original)
    *gptr<u8>(r4_1 + 0x11u) = u8(r2_4 | r8_1);  // (from the original)
    r1 = u32(*gptr<u8>(r4_1 + 0xeu));  // (from the original)
    if (r1 == 0x10u) {  // (from the original)
        *gptr<u8>(r4_1 + 0xfu) = u8(2u);  // (from the original)
        goto L_59f2ec;
    }
    r0_3 = r13;
    guest::cpu()->r[13] = r13;
    call_005a064c(r0_3, r1, r2_4, r3_4);
    r3_5 = guest::cpu()->r[3];
    r0_4 = r13;
    guest::cpu()->r[13] = r13;
    r0_5 = call_0059f7c8(r0_4, r4_1, 0u, r3_5);
    r1_3 = guest::cpu()->r[1];
    r2_5 = guest::cpu()->r[2];
    r3_6 = guest::cpu()->r[3];
    r4_2 = r13;
    guest::cpu()->r[13] = r13;
    r0_6 = call_002fc900(r0_5, r1_3, r2_5, r3_6);
    r1_4 = guest::cpu()->r[1];
    r2_6 = guest::cpu()->r[2];
    r3_7 = guest::cpu()->r[3];
    if (r0_6 != 0) {
        guest::cpu()->r[13] = r13;
        r0_7 = call_0030b6c4(r0_6, r1_4, r2_6, r3_7);
        r1_4 = guest::cpu()->r[1];
        r2_6 = guest::cpu()->r[2];
        r3_7 = guest::cpu()->r[3];
        if (r0_7 == 0) {
            goto L_59f2f8;
        }
    }
    guest::cpu()->r[13] = r13;
    call_0059f4d8(r4_2, r1_4, r2_6, r3_7);
    r1 = guest::cpu()->r[1];
L_59f2cc:;
L_59f2ec:;
    r13 = r13 + 0x2cu;  // (from the original)
    ea_3 = r13;
    r13 = r13 + 0x24;  // (from the original)
    r4_3 = *gptr<u32>(ea_3);
    r5_1 = *gptr<u32>(ea_3 + 4);
    r6_1 = *gptr<u32>(ea_3 + 8);
    r7_1 = *gptr<u32>(ea_3 + 0xc);  // (from the original)
    r8_2 = *gptr<u32>(ea_3 + 0x10);  // (from the original)
    r9_2 = *gptr<u32>(ea_3 + 0x14);  // (from the original)
    r10_2 = *gptr<u32>(ea_3 + 0x18);  // (from the original)
    r11_1 = *gptr<u32>(ea_3 + 0x1c);  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[4] = r4_3;
    guest::cpu()->r[5] = r5_1;
    guest::cpu()->r[6] = r6_1;
    guest::cpu()->r[7] = r7_1;
    guest::cpu()->r[8] = r8_2;
    guest::cpu()->r[9] = r9_2;
    guest::cpu()->r[10] = r10_2;
    guest::cpu()->r[11] = r11_1;
    guest::cpu()->r[13] = r13;
    return r5;
L_59f2f8:;
    guest::cpu()->r[13] = r13;
    call_006249b0(0x3au, 0u, r4_2, 0x16u);  // (from the original)
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
    u32 r13 = guest::cpu()->r[13];
    u32 r7_1 = 0;
    u32 r0_1 = 0;
    u32 r3_1 = 0;
    u32 r2_1 = 0;
    u32 r1_1 = 0;
    u32 r3_2 = 0;
    u32 r0_2 = 0;
    u32 r2_2 = 0;
    u32 r2_3 = 0;
    u32 r3_3 = 0;
    u32 r0_3 = 0;
    u32 r2_4 = 0;
    u32 r3_4 = 0;
    u32 r0_4 = 0;
    u32 r0_5 = 0;
    u32 r1_2 = 0;
    r13 = r13 - 0x20;  // (from the original)
    r7_1 = *gptr<u32>(r13 + 0x20u);  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_1 = call_00305f44(r0, r1, r2, r3);
    *gptr<u8>(r0 + 0xcu) = u8(u32(*gptr<u8>(r0 + 0xcu)) & ~3u | r0_1 & 3u);  // (from the original)
    r3_1 = u32(*gptr<u8>(r0 + 0xcu));  // (from the original)
    r2_1 = u32(*gptr<u8>(r0 + 0xeu));  // (from the original)
    r1_1 = u32(*gptr<u8>(r0 + 0xdu));  // (from the original)
    *gptr<u8>(r0 + 0x13u) = u8(r2);  // (from the original)
    *gptr<u8>(r0 + 0x14u) = u8(r3);  // (from the original)
    *gptr<u8>(r0 + 0xeu) = u8(r2_1 & ~1u);  // (from the original)
    r3_2 = r3_1 & ~0xfcu | 0x84u;  // (from the original)
    r0_2 = u32(*gptr<u8>(r0 + 0xeu)) & ~0x1eu;  // (from the original)
    *gptr<u8>(r0 + 0xcu) = u8(r3_2);  // (from the original)
    r2_2 = r0_2 & ~0xe0u;  // (from the original)
    *gptr<u8>(r0 + 0xdu) = u8(r1_1 & ~3u & 0xc3u | 0xcu);  // (from the original)
    *gptr<u8>(r0 + 0xeu) = u8(r2_2);  // (from the original)
    guest::cpu()->r[13] = r13;
    call_002fc8e8(r0, 0x95bfdcu, r2_2, r3_2);  // (from the original)
    r2_3 = guest::cpu()->r[2];
    r3_3 = guest::cpu()->r[3];
    r0_3 = r0 + 4u;
    guest::cpu()->r[13] = r13;
    call_002fc8e8(r0_3, r1, r2_3, r3_3);
    r2_4 = guest::cpu()->r[2];
    r3_4 = guest::cpu()->r[3];
    r0_4 = r0 + 8u;
    guest::cpu()->r[13] = r13;
    r0_5 = call_002fc8e8(r0_4, 0x95bfdcu, r2_4, r3_4);  // (from the original)
    r1_2 = guest::cpu()->r[1];
    *gptr<u8>(r0 + 0x12u) = u8(r7_1);  // (from the original)
    r13 = r13 + 0x20;  // (from the original)
    guest::cpu()->r[1] = r1_2;
    guest::cpu()->r[13] = r13;
    return r0_5;
}

}  // namespace d_0059f71c
GUEST_EXPORT(0x0059f71c, d_0059f71c::f_0059f71c);

// f_0059f7c8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0059f7c8 {

inline constexpr guest::Function<0x002f74c8, u32(u32, u32, u32, u32)> call_002f74c8;  // (from the original)
inline constexpr guest::Function<0x002fc8e8, u32(u32, u32, u32, u32)> call_002fc8e8;  // (from the original)
inline constexpr guest::Function<0x00305f44, u32(u32, u32, u32, u32)> call_00305f44;  // (from the original)

u32 f_0059f7c8(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r2_1 = 0;
    u32 r6_1 = 0;
    u32 r0_3 = 0;
    u32 r3_1 = 0;
    u32 r2_2 = 0;
    u32 r2_3 = 0;
    u32 r3_2 = 0;
    u32 r1_1 = 0;
    u32 r0_4 = 0;
    u32 r2_4 = 0;
    u32 r3_3 = 0;
    u32 r1_2 = 0;
    u32 r0_5 = 0;
    u32 r0_6 = 0;
    u32 r1_3 = 0;
    u32 r2_5 = 0;
    u32 r3_4 = 0;
    u32 r0_7 = 0;
    u32 r1_4 = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r0_1 = call_00305f44(r0, r1, r2, r3);
    r0_2 = r0_1 & 3u | u32(*gptr<u8>(r0 + 0xcu)) & ~3u;  // (from the original)
    *gptr<u8>(r0 + 0xcu) = u8(r0_2);  // (from the original)
    r2_1 = 0x3cu & r2 << 2;  // (from the original)
    r6_1 = r0_2 & ~0xfcu;  // (from the original)
    r0_3 = u32(*gptr<u8>(r0 + 0xdu)) & ~3u | u32(*gptr<u8>(r1 + 0x10u)) & 3u;  // (from the original)
    r3_1 = r0_3 & ~0x3cu;  // (from the original)
    *gptr<u8>(r0 + 0xdu) = u8(r0_3);  // (from the original)
    r2_2 = r2_1 | r3_1;
    *gptr<u8>(r0 + 0xcu) = u8(0xfcu & u32(*gptr<u8>(r1 + 0xeu)) << 2 | r6_1);  // (from the original)
    *gptr<u8>(r0 + 0xdu) = u8(r2_2);  // (from the original)
    *gptr<u8>(r0 + 0xeu) = u8(u32(*gptr<u8>(r1 + 0x11u)));  // (from the original)
    *gptr<u8>(r0 + 0x13u) = u8(u32(*gptr<u8>(r1 + 0xcu)));  // (from the original)
    *gptr<u8>(r0 + 0x14u) = u8(u32(*gptr<u8>(r1 + 0xdu)));  // (from the original)
    call_002fc8e8(r0, r1, r2_2, r3_1);
    r2_3 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    r1_1 = r1 + 4u;
    r0_4 = r0 + 4u;
    call_002fc8e8(r0_4, r1_1, r2_3, r3_2);
    r2_4 = guest::cpu()->r[2];
    r3_3 = guest::cpu()->r[3];
    r1_2 = r1 + 8u;
    r0_5 = r0 + 8u;
    r0_6 = call_002fc8e8(r0_5, r1_2, r2_4, r3_3);
    r1_3 = guest::cpu()->r[1];
    r2_5 = guest::cpu()->r[2];
    r3_4 = guest::cpu()->r[3];
    r0_7 = call_002f74c8(r0_6, r1_3, r2_5, r3_4);
    r1_4 = guest::cpu()->r[1];
    *gptr<u8>(r0 + 0x12u) = u8(r0_7);  // (from the original)
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1_4;
    return r0_7;
}

}  // namespace d_0059f7c8
GUEST_EXPORT(0x0059f7c8, d_0059f7c8::f_0059f7c8);
