// Functions decompiled by tools/decomp (docs/decomp.md), each proved equal to the recompiled original (prove-cpp). The
// names are generated (d_<address>::f_<address>, Object_<address>_<argument>, word_<offset>) and still to be chosen.
#include "guest/guest.hpp"

#include <bit>

using guest::gptr;

// f_005d055c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005d055c {

inline constexpr guest::Function<0x00113d15, u32(u32, u32, u32, u32)> call_00113d14;  // (from the original)
inline constexpr guest::Function<0x002fd108, u32(u32, u32, u32, u32)> call_002fd108;  // (from the original)
inline constexpr guest::Function<0x0050d4dc, u32(u32, u32, u32, u32)> call_0050d4dc;  // (from the original)
inline constexpr guest::Function<0x0050d91c, u32(u32, u32, u32, u32)> call_0050d91c;  // (from the original)

u32 f_005d055c(u32 r0, u32 r1, u32 r2) {
    u32 ea = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 8;
    guest::cpu()->r[13] = r13;
    r0 = call_0050d91c(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r4 = 0x9514c4u;  // (from the original)
    r0 = *gptr<u32>(r4 + 4u);
    if (r0 != 0) {
        r13 = r13 + 8;
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    guest::cpu()->r[13] = r13;
    r0 = call_0050d4dc(r0, r1, r2, guest::cpu()->r[3]);
    r1 = r0;
    r0 = 0x2520u;  // (from the original)
    r2 = 4u;
    guest::cpu()->r[13] = r13;
    r0 = call_002fd108(r0, r1, r2, guest::cpu()->r[3]);
    r2 = guest::cpu()->r[2];
    r1 = 0u;
    ea = r0;
    *gptr<u32>(ea) = u32(r1);
    ea = r0 + 4u;
    *gptr<u32>(ea) = u32(r1);
    r0 = ea + 4u;
    guest::cpu()->r[13] = r13;
    r0 = call_00113d14(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r0 = r0 - 8u;
    *gptr<u32>(r4 + 4u) = u32(r0);
    r13 = r13 + 8;
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_005d055c
GUEST_EXPORT(0x005d055c, d_005d055c::f_005d055c);

// f_005d05b0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005d05b0 {

inline constexpr guest::Function<0x0050d698, u32(u32, u32, u32, u32)> call_0050d698;  // (from the original)
inline constexpr guest::Function<0x0050d8f0, u32(u32, u32, u32, u32)> call_0050d8f0;  // (from the original)

u32 f_005d05b0() {
    u32 r0 = 0;
    u32 r4 = guest::cpu()->r[4];
    guest::cpu()->r[13] -= 8u;
    r4 = 0x9514c4u;  // (from the original)
    r0 = u32(*gptr<u8>(r4));
    if (r0 == 1u) {
        guest::cpu()->r[13] += 8u;
        return r0;
    }
    r0 = 0u;
    r0 = call_0050d698(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    if (r0 == 0) {
        r0 = 1u;
    } else {
        r0 = 0u;
    }
    *gptr<u8>(r4) = u8(r0);
    guest::cpu()->r[13] += 8u;
    return call_0050d8f0(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_005d05b0
GUEST_EXPORT(0x005d05b0, d_005d05b0::f_005d05b0);

// f_005d05ec: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005d05ec {

inline constexpr guest::Function<0x0050d698, u32(u32, u32, u32, u32)> call_0050d698;  // (from the original)
inline constexpr guest::Function<0x0050d8f0, u32(u32, u32, u32, u32)> call_0050d8f0;  // (from the original)
inline constexpr guest::Function<0x0050ded0, u32(u32, u32, u32, u32)> call_0050ded0;  // (from the original)

u32 f_005d05ec(u32 r0_unused, u32 r1) {
    u32 r0 = 0;
    r0 = 0u;
    guest::cpu()->r[13] -= 8u;
    r0 = call_0050d698(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 != 0) {
        guest::cpu()->r[13] += 8u;
        return call_0050d8f0(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    }
    r0 = *gptr<u32>(0x9535e4u);  // (from the original)
    r0 = call_0050ded0(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = 0x9514c4u;  // (from the original)
    r0 = 0u;
    *gptr<u8>(r1) = u8(r0);
    guest::cpu()->r[13] += 8u;
    return call_0050d8f0(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_005d05ec
GUEST_EXPORT(0x005d05ec, d_005d05ec::f_005d05ec);

// f_005d0e38: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005d0e38 {


u32 f_005d0e38(u32 r0) {
    u32 r1 = 0;
    r1 = 0x8578dcu;  // (from the original)
    r0 = u32(*gptr<u8>(r1 + r0));
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_005d0e38
GUEST_EXPORT(0x005d0e38, d_005d0e38::f_005d0e38);

// f_005d1d08: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005d1d08 {

inline constexpr guest::Function<0x00521a8c, u32(u32, u32, u32, u32)> call_00521a8c;  // (from the original)

u32 f_005d1d08(u32 r0, u32 r1, u32 r2, u32 r3, float S0) {
    u32 ea = 0;
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 8;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    r0 = call_00521a8c(r0, r1, r2, r3);
    ea = 0x5d1df8u;  // (from the original)
    r3 = *gptr<u32>(ea);
    r2 = 0u;
    ea = r0 + 0x13u;  // (from the original)
    *gptr<u8>(ea) = u8(r2);
    ea = r0 + 0x14u;  // (from the original)
    *gptr<u32>(ea) = u32(r2);
    ea = r0;
    *gptr<u32>(ea) = u32(r3);
    r1 = r0;
    ea = r0 + 0x18u;  // (from the original)
    *gptr<u32>(ea) = u32(r2);
    ea = r0 + 0x1cu;  // (from the original)
    *gptr<u32>(ea) = u32(r1);
    *gptr<u32>(ea + 4) = u32(r2);
    r3 = ~0u;
    ea = r0 + 0x28u;  // (from the original)
    *gptr<u8>(ea) = u8(r2);
    r0 = ea;
    S0 = std::bit_cast<float>(*gptr<u32>(0x5d1dfcu));  // (from the original)
    *gptr<u8>(r0 + 1u) = u8(r2);
    *gptr<u8>(r0 + 2u) = u8(r2);
    *gptr<u8>(r0 + 3u) = u8(r2);
    *gptr<u8>(r0 + 4u) = u8(r2);
    *gptr<u32>(r0 + 8u) = u32(std::bit_cast<u32>(S0));
    *gptr<u32>(r0 + 0xcu) = u32(std::bit_cast<u32>(S0));  // (from the original)
    *gptr<u32>(r0 + 0x10u) = u32(std::bit_cast<u32>(S0));  // (from the original)
    *gptr<u32>(r0 + 0x14u) = u32(std::bit_cast<u32>(S0));  // (from the original)
    *gptr<u32>(r0 + 0x18u) = u32(r2);  // (from the original)
    *gptr<u32>(r0 + 0x1cu) = u32(std::bit_cast<u32>(S0));  // (from the original)
    *gptr<u8>(r0 + 0x20u) = u8(r2);  // (from the original)
    *gptr<u32>(r0 + 0x24u) = u32(r2);  // (from the original)
    *gptr<u32>(r0 + 0x28u) = u32(r2);  // (from the original)
    *gptr<u32>(r0 + 0x2cu) = u32(r2);  // (from the original)
    *gptr<u32>(r0 + 0x30u) = u32(std::bit_cast<u32>(S0));  // (from the original)
    *gptr<u32>(r0 + 0x34u) = u32(r2);  // (from the original)
    *gptr<u32>(r0 + 0x38u) = u32(r2);  // (from the original)
    *gptr<u8>(r0 + 0x3cu) = u8(r2);  // (from the original)
    *gptr<u8>(r0 + 0x3du) = u8(r2);  // (from the original)
    *gptr<u8>(r0 + 0x3eu) = u8(r2);  // (from the original)
    *gptr<u8>(r0 + 0x3fu) = u8(r2);  // (from the original)
    *gptr<u8>(r0 + 0x40u) = u8(r2);  // (from the original)
    *gptr<u8>(r0 + 0x41u) = u8(r2);  // (from the original)
    *gptr<u8>(r0 + 0x42u) = u8(r2);  // (from the original)
    *gptr<u8>(r0 + 0x43u) = u8(r2);  // (from the original)
    *gptr<u32>(r0 + 0x44u) = u32(r3);  // (from the original)
    *gptr<u8>(r1 + 0x70u) = u8(r2);  // (from the original)
    *gptr<u8>(r1 + 0x71u) = u8(r2);  // (from the original)
    *gptr<u8>(r1 + 0x72u) = u8(r2);  // (from the original)
    *gptr<u8>(r1 + 0x73u) = u8(r2);  // (from the original)
    *gptr<u8>(r1 + 0x74u) = u8(r2);  // (from the original)
    *gptr<u32>(r1 + 0x78u) = u32(r2);  // (from the original)
    *gptr<u32>(r1 + 0x7cu) = u32(r2);  // (from the original)
    *gptr<u32>(r1 + 0x80u) = u32(r2);  // (from the original)
    *gptr<u32>(r1 + 0x84u) = u32(r2);  // (from the original)
    *gptr<u32>(r1 + 0x88u) = u32(r2);  // (from the original)
    *gptr<u8>(r1 + 0x8cu) = u8(r2);  // (from the original)
    *gptr<u8>(r1 + 0x90u) = u8(r2);  // (from the original)
    *gptr<u32>(r1 + 0x94u) = u32(r2);  // (from the original)
    *gptr<u32>(r1 + 0x98u) = u32(std::bit_cast<u32>(S0));  // (from the original)
    *gptr<u32>(r1 + 0x9cu) = u32(r2);  // (from the original)
    *gptr<u8>(r1 + 0xa0u) = u8(r2);  // (from the original)
    *gptr<u8>(r1 + 0xa1u) = u8(r3);  // (from the original)
    r0 = r1;
    *gptr<u32>(r1 + 0xa4u) = u32(r2);  // (from the original)
    r13 = r13 + 8;
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    return r0;
}

}  // namespace d_005d1d08
GUEST_EXPORT(0x005d1d08, d_005d1d08::f_005d1d08);

// f_005d1ee0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005d1ee0 {

inline constexpr guest::Function<0x00105f55, u32(u32, u32, u32, u32)> call_00105f54;  // (from the original)
inline constexpr guest::Function<0x0013bb30, u32(u32, u32, u32, u32)> call_0013bb30;  // (from the original)
inline constexpr guest::Function<0x002eba64, u32(u32, u32, u32, u32)> call_002eba64;  // (from the original)
inline constexpr guest::Function<0x006a6eb0, u32(u32, u32, u32, u32)> call_006a6eb0;  // (from the original)

u32 f_005d1ee0(u32 r0, u32 r1_unused, u32 r2, u32 r3, float S0, float S1) {
    u32 res = 0;
    u32 r1 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r13 = guest::cpu()->r[13];
    u32 nf = 0;
    u32 vf = 0;
    *gptr<u32>(r13 + 0xffffffe0u) = u32(r3);  // (from the original)
    r13 = r13 - 0x20;  // (from the original)
    r1 = r0;
    *gptr<u32>(r13) = u32(r1);
    r0 = r13;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    r0 = call_0013bb30(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
    S1 = std::bit_cast<float>(*gptr<u32>(0x5d1f74u));  // (from the original)
    r0 = r13;
    S0 = std::bit_cast<float>(vcvt_sz_f(S0 * S1));
    r4 = std::bit_cast<u32>(S0);
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    r0 = call_0013bb30(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    r0 = std::bit_cast<u32>(S0);
    res = r0 - 0x3f000000u;  // (from the original)
    nf = res >> 0x1f;  // (from the original)
    vf = ((r0 ^ 0x3f000000u) & (r0 ^ res)) >> 0x1f;  // (from the original)
    if (nf != vf) {
        r8 = 1u;
    }
    if (nf == vf) {
        r8 = 0u;
    }
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    r0 = call_006a6eb0(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r3 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    r7 = r0;
    if (r0 == 0) {
        goto L_5d1f70;
    }
    r6 = 0u;
    r5 = 0x952bf0u + (r4 << 1);  // (from the original)
L_5d1f38:;
    r4 = 0u;
    do {
L_5d1f3c:;
        r2 = r6;
        r1 = r4;
        r0 = r7;
        guest::cpu()->r[13] = r13;
        guest::cpu()->s[0] = S0;
        guest::cpu()->s[1] = S1;
        r0 = call_002eba64(r0, r1, r2, r3);
        r3 = guest::cpu()->r[3];
        S0 = guest::cpu()->s[0];
        S1 = guest::cpu()->s[1];
        r1 = u32(*gptr<u16>(r5));
        r2 = r8;
        guest::cpu()->r[13] = r13;
        guest::cpu()->s[0] = S0;
        guest::cpu()->s[1] = S1;
        r0 = call_00105f54(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r3 = guest::cpu()->r[3];
        S0 = guest::cpu()->s[0];
        S1 = guest::cpu()->s[1];
        r4 = r4 + 1u;
        guest::preempt();
    } while (s32(r4) < s32(2u));
    r6 = r6 + 1u;
    if (s32(r6) < s32(2u)) {
        guest::preempt();
        goto L_5d1f38;
    }
L_5d1f70:;
    r13 = r13 + 0x20;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    return r0;
}

}  // namespace d_005d1ee0
GUEST_EXPORT(0x005d1ee0, d_005d1ee0::f_005d1ee0);

// f_005d1f84: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005d1f84 {


void f_005d1f84(u32 r0) {
    float S0 = 0;
    float S1 = 0;
    S1 = std::bit_cast<float>(*gptr<u32>(0x5d1f98u));  // (from the original)
    S0 = float(std::bit_cast<u32>(std::bit_cast<float>(r0))) * S1;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    return;
}

}  // namespace d_005d1f84
GUEST_EXPORT(0x005d1f84, d_005d1f84::f_005d1f84);

// f_005d1f9c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005d1f9c {


void f_005d1f9c(u32 r0) {
    float S0 = 0;
    float S1 = 0;
    S1 = std::bit_cast<float>(*gptr<u32>(0x5d1fb0u));  // (from the original)
    S0 = float(std::bit_cast<u32>(std::bit_cast<float>(r0))) * S1;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    return;
}

}  // namespace d_005d1f9c
GUEST_EXPORT(0x005d1f9c, d_005d1f9c::f_005d1f9c);

// f_005d205c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005d205c {


void f_005d205c(u32 r0) {
    float S0 = 0;
    float S1 = 0;
    S1 = std::bit_cast<float>(*gptr<u32>(0x5d2070u));  // (from the original)
    S0 = float(std::bit_cast<u32>(std::bit_cast<float>(r0))) * S1;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    return;
}

}  // namespace d_005d205c
GUEST_EXPORT(0x005d205c, d_005d205c::f_005d205c);

// f_005d2218: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005d2218 {

struct __attribute__((packed)) Object_005d2218_0 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Object_005d2218_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_005d2218_0, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_005d2218_0, word_8, 0x8);  // (from the original)


void f_005d2218(gptr<Object_005d2218_0> arg0, u32 r1) {
    u32 r2 = 0;
    r2 = 0u;
    arg0->word_0 = u32(r1);
    arg0->word_4 = u32(r2);
    arg0->word_8 = u32(r2);
    return;
}

}  // namespace d_005d2218
GUEST_EXPORT(0x005d2218, d_005d2218::f_005d2218);

// f_005d23e4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005d23e4 {

struct __attribute__((packed)) Object_005d23e4_0 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Object_005d23e4_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_005d23e4_0, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_005d23e4_0, word_8, 0x8);  // (from the original)


void f_005d23e4(gptr<Object_005d23e4_0> arg0, u32 r1) {
    u32 r2 = 0;
    r2 = 0u;
    arg0->word_0 = u32(r1);
    arg0->word_4 = u32(r2);
    arg0->word_8 = u32(r2);
    return;
}

}  // namespace d_005d23e4
GUEST_EXPORT(0x005d23e4, d_005d23e4::f_005d23e4);

// f_005d458c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005d458c {


void f_005d458c(float S0, float S1, float S2) {
    u32 fpsr = guest::cpu()->fpscr;
    float S3 = 0;
    float S4 = 0;
    fpsr = fpsr & 0xfffffffu | vfp_cmpf(S1, S2);  // (from the original)
    S3 = std::bit_cast<float>(*gptr<u32>(0x5d4600u));  // (from the original)
    if (fpsr >> 0x1e & 1) {  // (from the original)
        S0 = S3;
        guest::cpu()->s[0] = S0;
        guest::cpu()->s[1] = S1;
        return;
    }
    fpsr = fpsr & 0xfffffffu | vfp_cmpf(S2, S1);  // (from the original)
    S4 = std::bit_cast<float>(*gptr<u32>(0x5d4604u));  // (from the original)
    if (!(fpsr >> 0x1e & 1 || fpsr >> 0x1f != (fpsr >> 0x1c & 1))) {  // (from the original)
        fpsr = fpsr & 0xfffffffu | vfp_cmpf(S0, S1);  // (from the original)
        if (!(fpsr >> 0x1d & 1) || fpsr >> 0x1e & 1) {  // (from the original)
            S0 = S4;
            guest::cpu()->s[0] = S0;
            guest::cpu()->s[1] = S1;
            return;
        }
        fpsr = fpsr & 0xfffffffu | vfp_cmpf(S0, S2);  // (from the original)
        if (fpsr >> 0x1f == (fpsr >> 0x1c & 1)) {  // (from the original)
            S0 = S3;
            guest::cpu()->s[0] = S0;
            guest::cpu()->s[1] = S1;
            return;
        }
        S3 = S0 - S1;
        S1 = S2 - S1;
        S0 = S3 / S1;
        guest::cpu()->s[0] = S0;
        guest::cpu()->s[1] = S1;
        return;
    }
    fpsr = fpsr & 0xfffffffu | vfp_cmpf(S0, S1);  // (from the original)
    if (fpsr >> 0x1f == (fpsr >> 0x1c & 1)) {  // (from the original)
        S0 = S4;
        guest::cpu()->s[0] = S0;
        guest::cpu()->s[1] = S1;
        return;
    }
    fpsr = fpsr & 0xfffffffu | vfp_cmpf(S0, S2);  // (from the original)
    if (fpsr >> 0x1d & 1 && !(fpsr >> 0x1e & 1)) {  // (from the original)
        S3 = S0 - S1;
        S1 = S2 - S1;
        S0 = S3 / S1;
        guest::cpu()->s[0] = S0;
        guest::cpu()->s[1] = S1;
        return;
    }
    S0 = S3;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    return;
}

}  // namespace d_005d458c
GUEST_EXPORT(0x005d458c, d_005d458c::f_005d458c);

// f_005d4a68: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005d4a68 {

struct __attribute__((packed)) Object_005d4a68_0 {
    u32 word_0;
};
GUEST_OFFSET(Object_005d4a68_0, word_0, 0x0);  // (from the original)


u32 f_005d4a68(gptr<Object_005d4a68_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r1 = 0;
    u32 r2 = 0;
    r2 = *gptr<u32>(arg0->word_0 + 0x2cu);  // (from the original)
    r1 = 1u;
    return guest::call_address<u32>(r2, r0, r1, r2, guest::cpu()->r[3]);
}

}  // namespace d_005d4a68
GUEST_EXPORT(0x005d4a68, d_005d4a68::f_005d4a68);

// f_005d4a78: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005d4a78 {

struct __attribute__((packed)) Object_005d4a78_0 {
    u32 word_0;
};
GUEST_OFFSET(Object_005d4a78_0, word_0, 0x0);  // (from the original)


u32 f_005d4a78(gptr<Object_005d4a78_0> arg0) {
    u32 r0 = arg0.addr();
    return guest::call_address<u32>(*gptr<u32>(arg0->word_0 + 8u), r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_005d4a78
GUEST_EXPORT(0x005d4a78, d_005d4a78::f_005d4a78);

// f_005d4edc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005d4edc {

struct __attribute__((packed)) Object_005d4edc_0 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u8 byte_14;
    u8 unknown_15[0x3];  // (not used here)
    u32 word_18;
    u32 word_1c;
};
GUEST_OFFSET(Object_005d4edc_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_005d4edc_0, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_005d4edc_0, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Object_005d4edc_0, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Object_005d4edc_0, word_10, 0x10);  // (from the original)
GUEST_OFFSET(Object_005d4edc_0, byte_14, 0x14);  // (from the original)
GUEST_OFFSET(Object_005d4edc_0, word_18, 0x18);  // (from the original)
GUEST_OFFSET(Object_005d4edc_0, word_1c, 0x1c);  // (from the original)

inline constexpr guest::Function<0x002f825c, u32(u32, u32, u32, u32)> call_002f825c;  // (from the original)

u32 f_005d4edc(gptr<Object_005d4edc_0> arg0) {
    u32 ea = 0;
    u32 res = 0;
    u32 r0 = arg0.addr();
    u32 r1 = 0;
    u32 r2 = 0;
    u32 r3 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 8;
    r1 = ~0u;
    r4 = r0 + 8u;
    arg0->word_0 = u32(r1);
    arg0->word_4 = u32(0x2fu);  // (from the original)
    r3 = r4 + 4u;
    arg0->word_c = u32(r0 + 0x20u);  // (from the original)
    arg0->word_10 = u32(0x41u);  // (from the original)
    r2 = 4u;
    arg0->word_8 = u32(0x90a260u);  // (from the original)
    arg0->byte_14 = u8(r2);
    arg0->word_18 = u32(r1);
    arg0->word_1c = u32(r1);
    r1 = 0x82u;  // (from the original)
    r0 = r4 + 0x18u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002f825c(r0, r1, r2, r3);
    r2 = 0u;
    r0 = r4 + 0x18u;  // (from the original)
    r1 = 0x20u;  // (from the original)
    *gptr<u16>(r4 + 0x18u) = u16(r2);  // (from the original)
    do {
L_5d4f34:;
        ea = r0 + 2u;
        *gptr<u16>(ea) = u16(r2);
        res = r1 - 1u;
        r1 = res;
        ea = r0 + 4u;
        *gptr<u16>(ea) = u16(r2);
        r0 = ea;
        guest::preempt();
    } while (res != 0);
    *gptr<u8>(r4 + 0x9cu) = u8(r2);  // (from the original)
    r0 = r4 - 8u;
    *gptr<u32>(r4 + 0xa0u) = u32(r2);  // (from the original)
    r13 = r13 + 8;
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_005d4edc
GUEST_EXPORT(0x005d4edc, d_005d4edc::f_005d4edc);

// f_005d5374: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005d5374 {

inline constexpr guest::Function<0x005d8a3c, u32(u32, u32, u32, u32)> call_005d8a3c;  // (from the original)

u32 f_005d5374(u32 r0_unused, u32 r1, u32 r2, u32 r3) {
    u32 ea = 0;
    u32 r12 = 0;
    u32 r13 = guest::cpu()->r[13];
    float S0 = 0;
    float S1 = 0;
    float S2 = 0;
    r12 = 0x892eecu;  // (from the original)
    r13 = r13 - 0x20u;  // (from the original)
    S2 = std::bit_cast<float>(*gptr<u32>(r12 + 0x310u));  // (from the original)
    r12 = r12 + 0x2fcu;  // (from the original)
    S0 = std::bit_cast<float>(*gptr<u32>(r12));
    S1 = std::bit_cast<float>(*gptr<u32>(r12 + 4));
    *gptr<u32>(r13 + 0x14u) = u32(std::bit_cast<u32>(S2));  // (from the original)
    ea = r13;
    *gptr<u32>(ea) = u32(std::bit_cast<u32>(S0));
    *gptr<u32>(ea + 4) = u32(std::bit_cast<u32>(S1));
    ea = r13 + 8u;
    *gptr<u32>(ea) = u32(r1);
    *gptr<u32>(ea + 4) = u32(r2);
    *gptr<u32>(ea + 8) = u32(r3);
    r1 = r13;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2;
    call_005d8a3c(guest::cpu()->r[0], r1, r2, r3);
    r1 = guest::cpu()->r[1];
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    r13 = r13 + 0x20u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    return guest::cpu()->r[0];
}

}  // namespace d_005d5374
GUEST_EXPORT(0x005d5374, d_005d5374::f_005d5374);

// f_005d53b0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005d53b0 {

struct __attribute__((packed)) Object_005d53b0_0 {
    u8 unknown_0[0x90];  // (not used here)
    u32 word_90;
    u32 word_94;
};
GUEST_OFFSET(Object_005d53b0_0, word_90, 0x90);  // (from the original)
GUEST_OFFSET(Object_005d53b0_0, word_94, 0x94);  // (from the original)

inline constexpr guest::Function<0x005d8740, u32(u32, u32, u32, u32)> call_005d8740;  // (from the original)

u32 f_005d53b0(gptr<Object_005d53b0_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r1 = 0;
    u32 r2 = 0;
    r1 = arg0->word_94;
    r2 = arg0->word_90 - 1u;
    if (s32(r1) >= s32(r2)) {
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r1 = r1 + 1u;
    arg0->word_94 = u32(r1);
    return call_005d8740(r0, r1, r2, guest::cpu()->r[3]);
}

}  // namespace d_005d53b0
GUEST_EXPORT(0x005d53b0, d_005d53b0::f_005d53b0);

// f_005d53d4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005d53d4 {

inline constexpr guest::Function<0x005d8a3c, u32(u32, u32, u32, u32)> call_005d8a3c;  // (from the original)

u32 f_005d53d4(u32 r0_unused, u32 r1, u32 r2, u32 r3) {
    u32 ea = 0;
    u32 r12 = 0;
    u32 r13 = guest::cpu()->r[13];
    float S0 = 0;
    float S1 = 0;
    float S2 = 0;
    r12 = 0x892eecu;  // (from the original)
    r13 = r13 - 0x20u;  // (from the original)
    S0 = std::bit_cast<float>(*gptr<u32>(r12 + 0x2e4u));  // (from the original)
    S1 = std::bit_cast<float>(*gptr<u32>(r12 + 0x2ecu));  // (from the original)
    S2 = std::bit_cast<float>(*gptr<u32>(r12 + 0x2f8u));  // (from the original)
    *gptr<u32>(r13) = u32(std::bit_cast<u32>(S0));
    *gptr<u32>(r13 + 8u) = u32(std::bit_cast<u32>(S1));
    *gptr<u32>(r13 + 0x14u) = u32(std::bit_cast<u32>(S2));  // (from the original)
    ea = r13 + 4u;
    *gptr<u32>(ea) = u32(r1);
    r1 = r13;
    ea = r13 + 0xcu;  // (from the original)
    *gptr<u32>(ea) = u32(r2);
    *gptr<u32>(ea + 4) = u32(r3);
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2;
    call_005d8a3c(guest::cpu()->r[0], r1, r2, r3);
    r1 = guest::cpu()->r[1];
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    r13 = r13 + 0x20u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    return guest::cpu()->r[0];
}

}  // namespace d_005d53d4
GUEST_EXPORT(0x005d53d4, d_005d53d4::f_005d53d4);

// f_005d5414: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005d5414 {

struct __attribute__((packed)) Object_005d5414_0 {
    u8 unknown_0[0xb8];  // (not used here)
    u32 word_b8;
    u8 unknown_bc[0xc14];  // (not used here)
    u32 word_cd0;
};
GUEST_OFFSET(Object_005d5414_0, word_b8, 0xb8);  // (from the original)
GUEST_OFFSET(Object_005d5414_0, word_cd0, 0xcd0);  // (from the original)


void f_005d5414(gptr<Object_005d5414_0> arg0) {
    arg0->word_cd0 = u32(0x909ff8u);  // (from the original)
    arg0->word_b8 = u32(0x909ab8u);  // (from the original)
    return;
}

}  // namespace d_005d5414
GUEST_EXPORT(0x005d5414, d_005d5414::f_005d5414);

// f_005d6000: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005d6000 {

struct __attribute__((packed)) Object_005d6000_0 {
    u32 word_0;
    u8 unknown_4[0x12230];  // (not used here)
    u32 word_12234;
};
GUEST_OFFSET(Object_005d6000_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_005d6000_0, word_12234, 0x12234);  // (from the original)

inline constexpr guest::Function<0x002f76ad, u32(u32, u32, u32, u32)> call_002f76ac;  // (from the original)
inline constexpr guest::Function<0x005f0bc4, u32(u32, u32, u32, u32)> call_005f0bc4;  // (from the original)

u32 f_005d6000(gptr<Object_005d6000_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r1 = 0;
    u32 r2 = 0;
    u32 r3 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r4 = r0;
    r5 = 0x90a3e8u;  // (from the original)
    r1 = 0x81d3fcu;  // (from the original)
    arg0->word_0 = u32(0x908524u);  // (from the original)
    r3 = 0xau;  // (from the original)
    r2 = 0x44u;  // (from the original)
    arg0->word_12234 = u32(r5);
    r0 = r4 + 0x11f8cu;  // (from the original)
    r0 = call_002f76ac(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    r0 = 0x11f58u;  // (from the original)
    r1 = 0x909a48u;  // (from the original)
    *gptr<u32>(r0 + r4) = u32(r1);
    r0 = r0 - 0x30u;  // (from the original)
    *gptr<u32>(r0 + r4) = u32(0x909a10u);  // (from the original)
    r0 = r0 - 0x34u;  // (from the original)
    r2 = 0x909f18u;  // (from the original)
    *gptr<u32>(r0 + r4) = u32(r1);
    r0 = r0 - 0x2cu;  // (from the original)
    r1 = 0x909c78u;  // (from the original)
    *gptr<u32>(r0 + r4) = u32(r5);
    r0 = r0 - 0x2cu;  // (from the original)
    *gptr<u32>(r0 + r4) = u32(r5);
    r0 = r0 - 0x44u;  // (from the original)
    *gptr<u32>(r0 + r4) = u32(r1);
    r0 = r0 - 0x44u;  // (from the original)
    *gptr<u32>(r0 + r4) = u32(r1);
    r0 = r0 - 0x44u;  // (from the original)
    *gptr<u32>(r0 + r4) = u32(r1);
    r0 = r0 - 0x5cu;  // (from the original)
    *gptr<u32>(r0 + r4) = u32(r2);
    r0 = r0 - 0x5cu;  // (from the original)
    *gptr<u32>(r0 + r4) = u32(r2);
    *gptr<u32>(r0 - 0x44u + r4) = u32(r1);  // (from the original)
    r0 = r4;
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    return call_005f0bc4(r0, r1, r2, r3);
}

}  // namespace d_005d6000
GUEST_EXPORT(0x005d6000, d_005d6000::f_005d6000);

// f_005d60d4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005d60d4 {

struct __attribute__((packed)) Object_005d60d4_0 {
    u8 unknown_0[0x14];  // (not used here)
    u32 word_14;
    u32 word_18;
};
GUEST_OFFSET(Object_005d60d4_0, word_14, 0x14);  // (from the original)
GUEST_OFFSET(Object_005d60d4_0, word_18, 0x18);  // (from the original)


u32 f_005d60d4(gptr<Object_005d60d4_0> arg0) {
    u32 ea = 0;
    u32 res = 0;
    u32 r0 = arg0.addr();
    u32 r1 = 0;
    u32 r2 = 0;
    u32 r3 = 0;
    u32 r12 = 0;
    u32 zf = 0;
    u32 cf = 0;
    r2 = arg0->word_14;
    r3 = r2 + (arg0->word_18 << 1) - r2;
    r1 = 0u;
    r12 = u32(s32(r3) >> 1);
    res = r12;
    if (u32(res == 0) || res >> 0x1f != (r12 & (r12 ^ res)) >> 0x1f) {  // (from the original)
        goto L_5d611c;
    }
    r12 = r3 << 0x1e;  // (from the original)
    r2 = r2 - 2u;
    res = r12;
    if (res >> 0x1f != (r12 & (r12 ^ res)) >> 0x1f) {  // (from the original)
        ea = r2 + 2u;
        *gptr<u16>(ea) = u16(r1);
        r2 = ea;
    }
    res = u32(s32(r3) >> 2);
    r3 = res;
    if (res == 0) {
        goto L_5d611c;
    }
    do {
L_5d610c:;
        ea = r2 + 2u;
        *gptr<u16>(ea) = u16(r1);
        res = r3 - 1u;
        r3 = res;
        ea = r2 + 4u;
        *gptr<u16>(ea) = u16(r1);
        r2 = ea;
        guest::preempt();
    } while (res != 0);
L_5d611c:;
    r2 = *gptr<u32>(r0 + 0x1cu);  // (from the original)
    zf = r2 == 0;
    cf = r2 >= 0u;
    r2 = 0u;
    if (!cf || zf) {
        goto L_5d6150;
    }
    do {
L_5d612c:;
        *gptr<u32>(*gptr<u32>(r0 + 0x20u) + (r2 << 2)) = u32(*gptr<u32>(r0 + 0x14u));  // (from the original)
        *gptr<u8>(*gptr<u32>(r0 + 0x24u) + r2) = u8(r1);  // (from the original)
        r3 = *gptr<u32>(r0 + 0x1cu);  // (from the original)
        r2 = r2 + 1u;
        guest::preempt();
    } while (u32(r3 >= r2) && !u32(r3 == r2));
L_5d6150:;
    ea = r0 + 0x1cu;  // (from the original)
    r1 = 1u;
    r0 = *gptr<u32>(ea) - 1u;
    *gptr<u8>(*gptr<u32>(ea + 8u) + r0) = u8(r1);
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_005d60d4
GUEST_EXPORT(0x005d60d4, d_005d60d4::f_005d60d4);

// f_005d6168: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005d6168 {

struct __attribute__((packed)) Object_005d6168_0 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
};
GUEST_OFFSET(Object_005d6168_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_005d6168_0, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_005d6168_0, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Object_005d6168_0, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Object_005d6168_0, word_10, 0x10);  // (from the original)

inline constexpr guest::Function<0x00301d0d, u32(u32, u32, u32, u32)> call_00301d0c;  // (from the original)
inline constexpr guest::Function<0x005d60d4, u32(u32, u32, u32, u32)> call_005d60d4;  // (from the original)
inline constexpr guest::Function<0x00779500, u32(u32, u32, u32, u32)> call_00779500;  // (from the original)

u32 f_005d6168(gptr<Object_005d6168_0> arg0, u32 r1, u32 r2, u32 r3) {
    u32 ea = 0;
    u32 r0 = arg0.addr();
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r13 = guest::cpu()->r[13];
    float S0 = 0;
    r13 = r13 - 0x10;  // (from the original)
    r4 = r0;
    r5 = r1;
    r1 = 0xff000000u;  // (from the original)
    arg0->word_0 = u32(0x90883cu);  // (from the original)
    arg0->word_4 = u32(r1);
    S0 = std::bit_cast<float>(*gptr<u32>(0x5d6218u));  // (from the original)
    arg0->word_8 = u32(r1);
    arg0->word_c = u32(std::bit_cast<u32>(S0));
    r6 = r2;
    arg0->word_10 = u32(std::bit_cast<u32>(S0));
    r0 = r5 << 1;
    r1 = r7;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    r0 = call_00779500(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
    r6 = r6 + 1u;
    ea = r4 + 0x14u;  // (from the original)
    *gptr<u32>(ea) = u32(r0);
    *gptr<u32>(ea + 4) = u32(r5);
    *gptr<u32>(ea + 8) = u32(r6);
    r0 = 8u + (r6 << 2);
    r1 = r7;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    r0 = call_00779500(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
    if (r0 != 0) {
        r0 = r0 + 8u;
        r1 = 4u;
        ea = r0 - 8u;
        *gptr<u32>(ea) = u32(r1);
        *gptr<u32>(ea + 4) = u32(r6);
        r2 = r1;
        r1 = 0x5e9d4cu;  // (from the original)
        r3 = r6;
        guest::cpu()->r[13] = r13;
        guest::cpu()->s[0] = S0;
        r0 = call_00301d0c(r0, r1, r2, r3);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        S0 = guest::cpu()->s[0];
    }
    *gptr<u32>(r4 + 0x20u) = u32(r0);  // (from the original)
    r0 = *gptr<u32>(r4 + 0x1cu);  // (from the original)
    r1 = r7;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    r0 = call_00779500(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
    *gptr<u32>(r4 + 0x24u) = u32(r0);  // (from the original)
    r0 = r4;
    r1 = *gptr<u32>(r4 + 0x14u) + (r5 << 1);  // (from the original)
    *gptr<u32>(r4 + 0x28u) = u32(r1);  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    r0 = call_005d60d4(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    S0 = guest::cpu()->s[0];
    r0 = r4;
    r13 = r13 + 0x10;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    return r0;
}

}  // namespace d_005d6168
GUEST_EXPORT(0x005d6168, d_005d6168::f_005d6168);

// f_005d6510: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005d6510 {

struct __attribute__((packed)) Object_005d6510_1 {
    u32 word_0;
};
GUEST_OFFSET(Object_005d6510_1, word_0, 0x0);  // (from the original)

struct __attribute__((packed)) Object_005d6510_2 {
    u8 unknown_0[0x10];  // (not used here)
    u32 word_10;
};
GUEST_OFFSET(Object_005d6510_2, word_10, 0x10);  // (from the original)

inline constexpr guest::Function<0x004d60b0, u32(u32, u32, u32, u32)> call_004d60b0;  // (from the original)

u32 f_005d6510(u32 r0_unused, gptr<Object_005d6510_1> arg1, gptr<Object_005d6510_2> arg2) {
    u32 r0 = 0;
    u32 r1 = arg1.addr();
    u32 r2 = arg2.addr();
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r4 = r1;
    r0 = arg2->word_10;
    r5 = r2;
    r0 = u32(*gptr<u16>(r0 + 2u)) & 0xffffu | u32(*gptr<u16>(r0)) << 0x10 & 0xffff0000u;  // (from the original)
    r2 = r0 << 0x18 | r0 << 0x10 >> 0x18 << 0x10;  // (from the original)
    r1 = r2 | r0 << 8 >> 0x18 << 8 | r0 >> 0x18;  // (from the original)
    r0 = arg1->word_0;
    *gptr<u32>(r0 + 0x18u) = u32(r1);  // (from the original)
    r0 = call_004d60b0(r0, r1, r2, guest::cpu()->r[3]);
    r1 = ~1u;
    *gptr<u32>(r4 + 4u) = u32(r1 + (*gptr<u32>(r5 + 0x14u) >> 1 << 1) + *gptr<u32>(r4 + 4u));  // (from the original)
    r0 = 0u;
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_005d6510
GUEST_EXPORT(0x005d6510, d_005d6510::f_005d6510);

// f_005d6fac: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005d6fac {

inline constexpr guest::Function<0x005d6168, u32(u32, u32, u32, u32)> call_005d6168;  // (from the original)
inline constexpr guest::Function<0x005d6868, u32(u32, u32, u32, u32)> call_005d6868;  // (from the original)
inline constexpr guest::Function<0x00601a20, u32(u32, u32, u32, u32)> call_00601a20;  // (from the original)

u32 f_005d6fac(u32 r0, u32 r1, u32 r2) {
    u32 ea = 0;
    u32 r3 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 0x10;  // (from the original)
    r4 = r1;
    r3 = 0u;
    guest::cpu()->r[13] = r13;
    r0 = call_005d6868(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    r5 = r0;
    r1 = r4;
    r2 = 0u;
    r0 = r0 + 0x44u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_005d6168(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = r0 + 0x2cu;  // (from the original)
    r6 = 0u;
    *gptr<u32>(r0) = u32(0x90886cu);  // (from the original)
    *gptr<u32>(r3) = u32(r5);
    *gptr<u32>(r3 + 4) = u32(r6);
    r5 = r0 - 0x44u;  // (from the original)
    r1 = r0 + 0x34u;  // (from the original)
    r4 = r0;
    r0 = r1;
    guest::cpu()->r[13] = r13;
    r0 = call_00601a20(r0, r1, r2, r3);
    r1 = r0;
    ea = r1;
    *gptr<u32>(ea) = u32(0x908f2cu);  // (from the original)
    ea = r1 + 0x60u;  // (from the original)
    *gptr<u32>(ea) = u32(r5);
    ea = r1 + 0x64u;  // (from the original)
    *gptr<u32>(ea) = u32(r4);
    *gptr<u32>(ea + 4) = u32(r6);
    r0 = r1 - 0x78u;  // (from the original)
    *gptr<u32>(r1 + 0x6cu) = u32(r6);  // (from the original)
    *gptr<u32>(r1 + 0x70u) = u32(r6);  // (from the original)
    *gptr<u32>(r1 + 0x74u) = u32(r6);  // (from the original)
    *gptr<u32>(r1 + 0x78u) = u32(r6);  // (from the original)
    *gptr<u32>(r1 + 0x7cu) = u32(r6);  // (from the original)
    *gptr<u32>(r1 + 0x80u) = u32(r6);  // (from the original)
    *gptr<u8>(r1 + 0x84u) = u8(r6);  // (from the original)
    r13 = r13 + 0x10;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_005d6fac
GUEST_EXPORT(0x005d6fac, d_005d6fac::f_005d6fac);

// f_005d72a4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005d72a4 {

struct __attribute__((packed)) Object_005d72a4_0 {
    u8 unknown_0[0x2c];  // (not used here)
    u32 word_2c;
    u32 word_30;
};
GUEST_OFFSET(Object_005d72a4_0, word_2c, 0x2c);  // (from the original)
GUEST_OFFSET(Object_005d72a4_0, word_30, 0x30);  // (from the original)

struct __attribute__((packed)) Object_005d72a4_2 {
    u8 unknown_0[0x10];  // (not used here)
    u32 word_10;
};
GUEST_OFFSET(Object_005d72a4_2, word_10, 0x10);  // (from the original)

inline constexpr guest::Function<0x0077a650, u32(u32, u32, u32, u32)> call_0077a650;  // (from the original)

u32 f_005d72a4(gptr<Object_005d72a4_0> arg0, u32 r1, gptr<Object_005d72a4_2> arg2) {
    u32 r0 = arg0.addr();
    u32 r2 = arg2.addr();
    u32 r3 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 nf = 0;
    u32 cf = 0;
    u32 vf = 0;
    u32 fpsr = guest::cpu()->fpscr;
    float S0 = 0;
    float S1 = 0;
    float S2 = 0;
    float S3 = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r4 = r0;
    S0 = std::bit_cast<float>(*gptr<u32>(0x5d7384u));  // (from the original)
    r5 = r1;
    r6 = r2;
    r0 = arg0->word_2c;
    r1 = arg0->word_30;
    r2 = *gptr<u32>(r0 + 0x2cu);  // (from the original)
    S2 = float(s32(std::bit_cast<u32>(std::bit_cast<float>(sxth(u32(*gptr<u16>(arg2->word_10)))))));
    S1 = std::bit_cast<float>(*gptr<u32>(0x5d7388u));  // (from the original)
    r3 = *gptr<u32>(r0 + 0x34u);  // (from the original)
    fpsr = fpsr & 0xfffffffu | vfp_cmpf(S2, S0);  // (from the original)
    nf = fpsr >> 0x1f;  // (from the original)
    vf = fpsr >> 0x1c & 1;  // (from the original)
    if (nf == vf) {
        S2 = S2 + S1;
    }
    if (nf != vf) {
        S2 = S2 - S1;
    }
    cf = r2 >= r3;
    if (!cf) {
        cf = r1 >= r3;
    }
    S3 = S2 * std::bit_cast<float>(*gptr<u32>(0x5d738cu));  // (from the original)
    if (cf) {
        goto L_5d7324;
    }
    if (r2 < r1) {
        goto L_5d7324;
    }
    r0 = *gptr<u32>(r0 + 0x30u);  // (from the original)
    if (r0 == 0) {
        goto L_5d7324;
    }
    r0 = r0 + (r1 << 3);
    S0 = std::bit_cast<float>(*gptr<u32>(r0));
    S2 = std::bit_cast<float>(*gptr<u32>(r0 + 4u));
    goto L_5d7328;
L_5d7324:;
    S2 = S0;
L_5d7328:;
    S3 = S2 - S3;
    S2 = std::bit_cast<float>(*gptr<u32>(0x5d7390u));  // (from the original)
    S0 = S0 + S3 * S1 + S2 + S1;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2;
    guest::cpu()->s[3] = S3;
    r0 = call_0077a650(r0, r1, r2, r3);
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    r1 = ~1u;
    *gptr<u32>(*gptr<u32>(r5) + 0x2cu) = u32(std::bit_cast<u32>(S0));  // (from the original)
    S0 = std::bit_cast<float>(*gptr<u32>(0x5d7394u));  // (from the original)
    *gptr<u32>(*gptr<u32>(r5) + 0x4cu) = u32(std::bit_cast<u32>(S0));  // (from the original)
    *gptr<u32>(r4 + 0x30u) = u32(*gptr<u32>(r4 + 0x30u) + 1u);  // (from the original)
    *gptr<u32>(r5 + 4u) = u32(r1 + (*gptr<u32>(r6 + 0x14u) >> 1 << 1) + *gptr<u32>(r5 + 4u));  // (from the original)
    r0 = 0u;
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    return r0;
}

}  // namespace d_005d72a4
GUEST_EXPORT(0x005d72a4, d_005d72a4::f_005d72a4);

// f_005d79bc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005d79bc {

struct __attribute__((packed)) Object_005d79bc_0 {
    u32 word_0;
};
GUEST_OFFSET(Object_005d79bc_0, word_0, 0x0);  // (from the original)


void f_005d79bc(gptr<Object_005d79bc_0> arg0, u32 r1) {
    if (r1 >= 7u) {
        r1 = 0x890eb0u;  // (from the original)
    } else {
        r1 = 0x890e5cu + (r1 + (r1 << 1) << 2);  // (from the original)
    }
    arg0->word_0 = u32(r1);
    guest::cpu()->r[1] = r1;
    return;
}

}  // namespace d_005d79bc
GUEST_EXPORT(0x005d79bc, d_005d79bc::f_005d79bc);

// f_005d79e0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005d79e0 {

inline constexpr guest::Function<0x002fe7dd, u32(u32, u32, u32, u32)> call_002fe7dc;  // (from the original)
inline constexpr guest::Function<0x005d7a8c, u32(u32, u32, u32, u32)> call_005d7a8c;  // (from the original)

u32 f_005d79e0(u32 r0_unused, u32 r1_unused, u32 r2_unused, u32 r3, float S0) {
    u32 r0 = 0;
    u32 r1 = 0;
    u32 r13 = guest::cpu()->r[13];
    float S1 = 0;
    S1 = std::bit_cast<float>(*gptr<u32>(0x5d7a3cu));  // (from the original)
    r1 = 0x95df1cu;  // (from the original)
    *gptr<u32>(r13 + 0xfffffff8u) = u32(r3);  // (from the original)
    r13 = r13 - 8;
    S0 = std::bit_cast<float>(vcvt_sz_f(S0 * S1));
    *gptr<u16>(r1 + 8u) = u16(std::bit_cast<u32>(S0));
    *gptr<u32>(r13) = u32(r1);
    if ((*gptr<u32>(r1 + 0xffffffd8u) & 1u) != 0) {  // (from the original)
        r0 = 0xad5718u;  // (from the original)
        r13 = r13 + 8;
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        guest::cpu()->s[0] = S0;
        guest::cpu()->s[1] = S1;
        return r0;
    }
    r0 = r1 - 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    r0 = call_002fe7dc(r0, r1, guest::cpu()->r[2], r3);
    r1 = guest::cpu()->r[1];
    r3 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    if (r0 == 0) {
        r0 = 0xad5718u;  // (from the original)
        r13 = r13 + 8;
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        guest::cpu()->s[0] = S0;
        guest::cpu()->s[1] = S1;
        return r0;
    }
    r0 = 0xad5718u;  // (from the original)
    r1 = r13;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    r0 = call_005d7a8c(r0, r1, guest::cpu()->r[2], r3);
    r1 = guest::cpu()->r[1];
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    r0 = 0xad5718u;  // (from the original)
    r13 = r13 + 8;
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    return r0;
}

}  // namespace d_005d79e0
GUEST_EXPORT(0x005d79e0, d_005d79e0::f_005d79e0);

// f_005d7a4c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005d7a4c {

struct __attribute__((packed)) Object_005d7a4c_0 {
    u32 word_0;
};
GUEST_OFFSET(Object_005d7a4c_0, word_0, 0x0);  // (from the original)

struct __attribute__((packed)) Object_005d7a4c_1 {
    u32 word_0;
};
GUEST_OFFSET(Object_005d7a4c_1, word_0, 0x0);  // (from the original)


void f_005d7a4c(gptr<Object_005d7a4c_0> arg0, gptr<Object_005d7a4c_1> arg1) {
    u32 r1 = arg1.addr();
    u32 r2 = 0;
    r1 = arg1->word_0;
    r1 = r1 << 0x18 | r1 << 0x10 >> 0x18 << 0x10 | r1 << 8 >> 0x18 << 8 | r1 >> 0x18;  // (from the original)
    r2 = 0x95df34u;  // (from the original)
    *gptr<u16>(r2 + 8u) = u16(r1 >> 0x10);  // (from the original)
    *gptr<u16>(r2 + 0xau) = u16(r1);  // (from the original)
    arg0->word_0 = u32(r2);
    guest::cpu()->r[1] = r1;
    return;
}

}  // namespace d_005d7a4c
GUEST_EXPORT(0x005d7a4c, d_005d7a4c::f_005d7a4c);

// f_005d7a8c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005d7a8c {

struct __attribute__((packed)) Object_005d7a8c_0 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
};
GUEST_OFFSET(Object_005d7a8c_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_005d7a8c_0, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_005d7a8c_0, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Object_005d7a8c_0, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Object_005d7a8c_0, word_10, 0x10);  // (from the original)
GUEST_OFFSET(Object_005d7a8c_0, word_14, 0x14);  // (from the original)

struct __attribute__((packed)) Object_005d7a8c_1 {
    u32 word_0;
};
GUEST_OFFSET(Object_005d7a8c_1, word_0, 0x0);  // (from the original)


void f_005d7a8c(gptr<Object_005d7a8c_0> arg0, gptr<Object_005d7a8c_1> arg1) {
    u32 r1 = arg1.addr();
    u32 r2 = 0;
    u32 r3 = 0;
    r2 = 0u;
    arg0->word_0 = u32(r2);
    r3 = r2;
    arg0->word_4 = u32(~0x80000000u);  // (from the original)
    arg0->word_8 = u32(~0u);
    arg0->word_c = u32(r3);
    arg0->word_10 = u32(r3);
    arg0->word_14 = u32(r3);
    r2 = arg1->word_0;
    if (r2 == 0) {
        guest::cpu()->r[1] = r1;
        return;
    }
    arg0->word_0 = u32(r2);
    arg0->word_4 = u32(u32(*gptr<u16>(r2 + 2u)));
    arg0->word_8 = u32(u32(*gptr<u16>(r2 + 4u)));
    arg0->word_c = u32(u32(*gptr<u16>(r2 + 6u)));
    arg0->word_10 = u32(arg1->word_0 + 8u);
    r1 = arg0->word_c + 8u;
    arg0->word_14 = u32(r1);
    guest::cpu()->r[1] = r1;
    return;
}

}  // namespace d_005d7a8c
GUEST_EXPORT(0x005d7a8c, d_005d7a8c::f_005d7a8c);

// f_005d8274: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005d8274 {

struct __attribute__((packed)) Object_005d8274_1 {
    u8 unknown_0[0x344];  // (not used here)
    u32 word_344;
};
GUEST_OFFSET(Object_005d8274_1, word_344, 0x344);  // (from the original)

inline constexpr guest::Function<0x002f825c, u32(u32, u32, u32, u32)> call_002f825c;  // (from the original)
inline constexpr guest::Function<0x00301d0d, u32(u32, u32, u32, u32)> call_00301d0c;  // (from the original)
inline constexpr guest::Function<0x00312bd0, u32(u32, u32, u32, u32)> call_00312bd0;  // (from the original)
inline constexpr guest::Function<0x005f05e4, u32(u32, u32, u32, u32)> call_005f05e4;  // (from the original)
inline constexpr guest::Function<0x0081c8b8, u32(u32, u32, u32, u32)> call_0081c8b8;  // (from the original)
inline constexpr guest::Function<0x0081c9bc, u32(u32, u32, u32, u32)> call_0081c9bc;  // (from the original)
inline constexpr guest::Function<0x0081d8c0, u32(u32, u32, u32, u32)> call_0081d8c0;  // (from the original)
inline constexpr guest::Function<0x0081e8d0, u32(u32, u32, u32, u32)> call_0081e8d0;  // (from the original)

u32 f_005d8274(u32 r0, gptr<Object_005d8274_1> arg1, u32 r2, u32 r3) {
    u32 ea = 0;
    u32 res = 0;
    u32 r1 = arg1.addr();
    u32 r4 = guest::cpu()->r[4];
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 8;
    r4 = r1;
    r1 = arg1->word_344;
    if (r1 != 0) {
        r1 = r1 + 0x8cu;  // (from the original)
    }
    guest::cpu()->r[13] = r13;
    r0 = call_005f05e4(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    r2 = 0x908884u;  // (from the original)
    r1 = 0x11cd0u;  // (from the original)
    *gptr<u32>(r0) = u32(r2);
    *gptr<u32>(r1 + r0) = u32(r4);
    r0 = r0 + 0x11cd4u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00312bd0(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 + 0x44u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0081d8c0(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 + 0x5cu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0081d8c0(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 + 0x5cu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00312bd0(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 + 0x44u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00312bd0(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 + 0x44u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00312bd0(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 + 0x44u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0081e8d0(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 + 0x2cu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0081c9bc(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 + 0x34u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0081c8b8(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 + 0x30u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0081c9bc(r0, r1, r2, r3);
    r1 = 0x81d370u;  // (from the original)
    r3 = 0xau;  // (from the original)
    r2 = 0x44u;  // (from the original)
    r0 = r0 + 0x34u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00301d0c(r0, r1, r2, r3);
    r0 = r0 + 0x2a8u;  // (from the original)
    r3 = r0 + 4u;
    *gptr<u32>(r3) = u32(r0 + 0x18u);  // (from the original)
    *gptr<u32>(r3 + 4) = u32(0x11u);  // (from the original)
    r4 = r0;
    r2 = 4u;
    *gptr<u32>(r0) = u32(0x909b60u);  // (from the original)
    r0 = r0 + 0xcu;  // (from the original)
    r1 = ~0u;
    *gptr<u8>(r0) = u8(r2);
    *gptr<u32>(r0 + 4u) = u32(r1);
    *gptr<u32>(r0 + 8u) = u32(r1);
    r1 = 0x22u;  // (from the original)
    r0 = r4 + 0x18u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002f825c(r0, r1, r2, r3);
    r1 = 0u;
    r0 = r4 + 0x18u;  // (from the original)
    r2 = 8u;
    *gptr<u16>(r4 + 0x18u) = u16(r1);  // (from the original)
    do {
L_5d8354:;
        ea = r0 + 2u;
        *gptr<u16>(ea) = u16(r1);
        res = r2 - 1u;
        r2 = res;
        ea = r0 + 4u;
        *gptr<u16>(ea) = u16(r1);
        r0 = ea;
        guest::preempt();
    } while (res != 0);
    r0 = r4 - 0x12208u;  // (from the original)
    r13 = r13 + 8;
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_005d8274
GUEST_EXPORT(0x005d8274, d_005d8274::f_005d8274);

// f_005d8ec8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005d8ec8 {

struct __attribute__((packed)) Object_005d8ec8_0 {
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
    u32 word_30;
    u32 word_34;
    u32 word_38;
    u32 word_3c;
    u32 word_40;
    u32 word_44;
    u32 word_48;
    u32 word_4c;
    u32 word_50;
    u32 word_54;
    u32 word_58;
    u32 word_5c;
    u32 word_60;
    u32 word_64;
    u32 word_68;
    u32 word_6c;
    u32 word_70;
    u32 word_74;
    u32 word_78;
    u32 word_7c;
    u32 word_80;
    u32 word_84;
    u32 word_88;
    u32 word_8c;
    u32 word_90;
    u32 word_94;
    u32 word_98;
    u32 word_9c;
    u32 word_a0;
    u32 word_a4;
    u32 word_a8;
    u8 byte_ac;
    u8 unknown_ad[0x3];  // (not used here)
    u32 word_b0;
    u8 byte_b4;
    u8 unknown_b5[0x3];  // (not used here)
    u32 word_b8;
    u32 word_bc;
    u32 word_c0;
    u8 byte_c4;
    u8 unknown_c5[0x3];  // (not used here)
    u32 word_c8;
    u32 word_cc;
};
GUEST_OFFSET(Object_005d8ec8_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_005d8ec8_0, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_005d8ec8_0, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Object_005d8ec8_0, byte_c, 0xc);  // (from the original)
GUEST_OFFSET(Object_005d8ec8_0, word_10, 0x10);  // (from the original)
GUEST_OFFSET(Object_005d8ec8_0, word_14, 0x14);  // (from the original)
GUEST_OFFSET(Object_005d8ec8_0, word_18, 0x18);  // (from the original)
GUEST_OFFSET(Object_005d8ec8_0, word_1c, 0x1c);  // (from the original)
GUEST_OFFSET(Object_005d8ec8_0, word_20, 0x20);  // (from the original)
GUEST_OFFSET(Object_005d8ec8_0, word_24, 0x24);  // (from the original)
GUEST_OFFSET(Object_005d8ec8_0, word_28, 0x28);  // (from the original)
GUEST_OFFSET(Object_005d8ec8_0, word_2c, 0x2c);  // (from the original)
GUEST_OFFSET(Object_005d8ec8_0, word_30, 0x30);  // (from the original)
GUEST_OFFSET(Object_005d8ec8_0, word_34, 0x34);  // (from the original)
GUEST_OFFSET(Object_005d8ec8_0, word_38, 0x38);  // (from the original)
GUEST_OFFSET(Object_005d8ec8_0, word_3c, 0x3c);  // (from the original)
GUEST_OFFSET(Object_005d8ec8_0, word_40, 0x40);  // (from the original)
GUEST_OFFSET(Object_005d8ec8_0, word_44, 0x44);  // (from the original)
GUEST_OFFSET(Object_005d8ec8_0, word_48, 0x48);  // (from the original)
GUEST_OFFSET(Object_005d8ec8_0, word_4c, 0x4c);  // (from the original)
GUEST_OFFSET(Object_005d8ec8_0, word_50, 0x50);  // (from the original)
GUEST_OFFSET(Object_005d8ec8_0, word_54, 0x54);  // (from the original)
GUEST_OFFSET(Object_005d8ec8_0, word_58, 0x58);  // (from the original)
GUEST_OFFSET(Object_005d8ec8_0, word_5c, 0x5c);  // (from the original)
GUEST_OFFSET(Object_005d8ec8_0, word_60, 0x60);  // (from the original)
GUEST_OFFSET(Object_005d8ec8_0, word_64, 0x64);  // (from the original)
GUEST_OFFSET(Object_005d8ec8_0, word_68, 0x68);  // (from the original)
GUEST_OFFSET(Object_005d8ec8_0, word_6c, 0x6c);  // (from the original)
GUEST_OFFSET(Object_005d8ec8_0, word_70, 0x70);  // (from the original)
GUEST_OFFSET(Object_005d8ec8_0, word_74, 0x74);  // (from the original)
GUEST_OFFSET(Object_005d8ec8_0, word_78, 0x78);  // (from the original)
GUEST_OFFSET(Object_005d8ec8_0, word_7c, 0x7c);  // (from the original)
GUEST_OFFSET(Object_005d8ec8_0, word_80, 0x80);  // (from the original)
GUEST_OFFSET(Object_005d8ec8_0, word_84, 0x84);  // (from the original)
GUEST_OFFSET(Object_005d8ec8_0, word_88, 0x88);  // (from the original)
GUEST_OFFSET(Object_005d8ec8_0, word_8c, 0x8c);  // (from the original)
GUEST_OFFSET(Object_005d8ec8_0, word_90, 0x90);  // (from the original)
GUEST_OFFSET(Object_005d8ec8_0, word_94, 0x94);  // (from the original)
GUEST_OFFSET(Object_005d8ec8_0, word_98, 0x98);  // (from the original)
GUEST_OFFSET(Object_005d8ec8_0, word_9c, 0x9c);  // (from the original)
GUEST_OFFSET(Object_005d8ec8_0, word_a0, 0xa0);  // (from the original)
GUEST_OFFSET(Object_005d8ec8_0, word_a4, 0xa4);  // (from the original)
GUEST_OFFSET(Object_005d8ec8_0, word_a8, 0xa8);  // (from the original)
GUEST_OFFSET(Object_005d8ec8_0, byte_ac, 0xac);  // (from the original)
GUEST_OFFSET(Object_005d8ec8_0, word_b0, 0xb0);  // (from the original)
GUEST_OFFSET(Object_005d8ec8_0, byte_b4, 0xb4);  // (from the original)
GUEST_OFFSET(Object_005d8ec8_0, word_b8, 0xb8);  // (from the original)
GUEST_OFFSET(Object_005d8ec8_0, word_bc, 0xbc);  // (from the original)
GUEST_OFFSET(Object_005d8ec8_0, word_c0, 0xc0);  // (from the original)
GUEST_OFFSET(Object_005d8ec8_0, byte_c4, 0xc4);  // (from the original)
GUEST_OFFSET(Object_005d8ec8_0, word_c8, 0xc8);  // (from the original)
GUEST_OFFSET(Object_005d8ec8_0, word_cc, 0xcc);  // (from the original)

inline constexpr guest::Function<0x002f825c, u32(u32, u32, u32, u32)> call_002f825c;  // (from the original)

u32 f_005d8ec8(gptr<Object_005d8ec8_0> arg0) {
    u32 ea = 0;
    u32 res = 0;
    u32 r0 = arg0.addr();
    u32 r1 = 0;
    u32 r2 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 0x18;  // (from the original)
    r6 = 0u;
    arg0->word_0 = u32(r6);
    arg0->word_4 = u32(r6);
    arg0->word_8 = u32(r6);
    arg0->byte_c = u8(1u);
    arg0->word_10 = u32(r6);
    arg0->word_14 = u32(r6);
    arg0->word_18 = u32(r6);
    arg0->word_1c = u32(r6);
    arg0->word_20 = u32(r6);
    arg0->word_24 = u32(r6);
    arg0->word_28 = u32(r6);
    arg0->word_2c = u32(r6);
    arg0->word_30 = u32(r6);
    arg0->word_34 = u32(r6);
    arg0->word_38 = u32(r6);
    arg0->word_3c = u32(r6);
    arg0->word_40 = u32(r6);
    arg0->word_44 = u32(r6);
    arg0->word_48 = u32(r6);
    arg0->word_4c = u32(r6);
    arg0->word_50 = u32(r6);
    arg0->word_54 = u32(r6);
    arg0->word_58 = u32(r6);
    arg0->word_5c = u32(r6);
    arg0->word_60 = u32(r6);
    arg0->word_64 = u32(r6);
    arg0->word_68 = u32(r6);
    arg0->word_6c = u32(r6);
    arg0->word_70 = u32(r6);
    arg0->word_74 = u32(r6);
    arg0->word_78 = u32(r6);
    arg0->word_7c = u32(r6);
    arg0->word_80 = u32(r6);
    arg0->word_84 = u32(r6);
    arg0->word_88 = u32(r6);
    arg0->word_8c = u32(r6);
    arg0->word_90 = u32(r6);
    arg0->word_94 = u32(r6);
    arg0->word_98 = u32(r6);
    r7 = ~0u;
    arg0->word_9c = u32(r6);
    arg0->word_a0 = u32(r6);
    arg0->word_a4 = u32(r7);
    arg0->word_a8 = u32(r7);
    arg0->byte_ac = u8(5u);
    r2 = 0x27u;  // (from the original)
    arg0->word_b0 = u32(r6);
    r4 = r0 + 0xb8u;  // (from the original)
    arg0->byte_b4 = u8(r2);
    arg0->word_bc = u32(r0 + 0xd0u);  // (from the original)
    arg0->word_c0 = u32(0x600u);  // (from the original)
    r8 = 4u;
    r1 = 0xc00u;  // (from the original)
    arg0->word_b8 = u32(0x909ab8u);  // (from the original)
    arg0->byte_c4 = u8(r8);
    arg0->word_c8 = u32(r7);
    r0 = r4 + 0x18u;  // (from the original)
    arg0->word_cc = u32(r7);
    guest::cpu()->r[13] = r13;
    r0 = call_002f825c(r0, r1, r2, guest::cpu()->r[3]);
    r2 = guest::cpu()->r[2];
    r5 = r4 + 0xc18u;  // (from the original)
    r0 = r4 + 0x16u;  // (from the original)
    r1 = 0x300u;  // (from the original)
    do {
L_5d8fdc:;
        ea = r0 + 2u;
        *gptr<u16>(ea) = u16(r6);
        res = r1 - 1u;
        r1 = res;
        ea = r0 + 4u;
        *gptr<u16>(ea) = u16(r6);
        r0 = ea;
        guest::preempt();
    } while (res != 0);
    ea = r5 + 4u;
    *gptr<u32>(ea) = u32(r5 + 0x18u);  // (from the original)
    *gptr<u32>(ea + 4) = u32(0x190u);  // (from the original)
    r1 = 0x320u;  // (from the original)
    *gptr<u32>(r5) = u32(0x909ff8u);  // (from the original)
    *gptr<u8>(r5 + 0xcu) = u8(r8);  // (from the original)
    *gptr<u32>(r5 + 0x10u) = u32(r7);  // (from the original)
    r0 = r5 + 0x18u;  // (from the original)
    *gptr<u32>(r5 + 0x14u) = u32(r7);  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002f825c(r0, r1, r2, guest::cpu()->r[3]);
    r0 = r5 + 0x16u;  // (from the original)
    r1 = 0xc8u;  // (from the original)
    do {
L_5d9020:;
        ea = r0 + 2u;
        *gptr<u16>(ea) = u16(r6);
        res = r1 - 1u;
        r1 = res;
        ea = r0 + 4u;
        *gptr<u16>(ea) = u16(r6);
        r0 = ea;
        guest::preempt();
    } while (res != 0);
    r0 = r5 - 0xcd0u;  // (from the original)
    r1 = 0u;
    do {
L_5d9038:;
        r2 = r0 + (r1 << 2);
        r1 = r1 + 2u;
        *gptr<u32>(r2 + 0x10u) = u32(r6);  // (from the original)
        *gptr<u32>(r2 + 0x50u) = u32(r6);  // (from the original)
        *gptr<u32>(r2 + 0x14u) = u32(r6);  // (from the original)
        *gptr<u32>(r2 + 0x54u) = u32(r6);  // (from the original)
        guest::preempt();
    } while (r1 < 0x10u);  // (from the original)
    r13 = r13 + 0x18;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_005d8ec8
GUEST_EXPORT(0x005d8ec8, d_005d8ec8::f_005d8ec8);

// f_005daf1c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005daf1c {

inline constexpr guest::Function<0x002bf9cc, u32(u32, u32, u32, u32)> call_002bf9cc;  // (from the original)
inline constexpr guest::Function<0x002fb94c, u32(u32, u32, u32, u32)> call_002fb94c;  // (from the original)

u32 f_005daf1c(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r13 = guest::cpu()->r[13];
    *gptr<u32>(r13 + 0xfffffff8u) = u32(r3);  // (from the original)
    r13 = r13 - 8;
    guest::cpu()->r[13] = r13;
    r0 = call_002fb94c(r0, r1, r2, r3);
    r1 = u32(*gptr<u8>(0x94fd25u));  // (from the original)
    if (r1 >= 0x10u) {  // (from the original)
        r13 = r13 + 8;
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    if (r0 == 0) {
        r13 = r13 + 8;
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    *gptr<u32>(r13) = u32(1u);
    r2 = 0x95bfdcu;  // (from the original)
    r0 = r0 + 0x6bd0u;  // (from the original)
    r3 = 0u;
    guest::cpu()->r[13] = r13;
    r0 = call_002bf9cc(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r13 = r13 + 8;
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_005daf1c
GUEST_EXPORT(0x005daf1c, d_005daf1c::f_005daf1c);

// f_005dc374: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005dc374 {

inline constexpr guest::Function<0x0013cd00, u32(u32, u32, u32, u32)> call_0013cd00;  // (from the original)

u32 f_005dc374(u32 r0, u32 r1, u32 r2) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 0x18u;  // (from the original)
    r4 = r0;
    r5 = 0x9047f8u;  // (from the original)
    r6 = r2;
    *gptr<u32>(r13 + 4u) = u32(r1);
    r1 = r13;
    r2 = ~0u;
    r0 = r4 + 0xcu;  // (from the original)
    *gptr<u32>(r13) = u32(r5);
    guest::cpu()->r[13] = r13;
    r0 = call_0013cd00(r0, r1, r2, guest::cpu()->r[3]);
    r1 = r13;
    r2 = ~0u;
    r0 = r4 + 0x38u;  // (from the original)
    *gptr<u32>(r13) = u32(r5);
    *gptr<u32>(r13 + 4) = u32(r6);
    guest::cpu()->r[13] = r13;
    r0 = call_0013cd00(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r13 = r13 + 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_005dc374
GUEST_EXPORT(0x005dc374, d_005dc374::f_005dc374);

// f_005dc9d4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005dc9d4 {

inline constexpr guest::Function<0x002bf814, u32(u32, u32, u32, u32)> call_002bf814;  // (from the original)
inline constexpr guest::Function<0x002fb94c, u32(u32, u32, u32, u32)> call_002fb94c;  // (from the original)
inline constexpr guest::Function<0x005c81f4, u32(u32, u32, u32, u32)> call_005c81f4;  // (from the original)

u32 f_005dc9d4(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r4 = r1;
    r5 = r2;
    r0 = call_002fb94c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    if (r0 != 0) {
        r0 = r0 + 0x6bd0u;  // (from the original)
        r3 = 1u;
        r2 = r5;
        r1 = r4;
        r0 = call_002bf814(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        return call_005c81f4(r0, r1, r2, r3);
    }
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_005dc9d4
GUEST_EXPORT(0x005dc9d4, d_005dc9d4::f_005dc9d4);

// f_005dd400: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005dd400 {

struct __attribute__((packed)) Object_005dd400_0 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u8 unknown_14[0x4];  // (not used here)
    u32 word_18;
};
GUEST_OFFSET(Object_005dd400_0, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_005dd400_0, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Object_005dd400_0, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Object_005dd400_0, word_10, 0x10);  // (from the original)
GUEST_OFFSET(Object_005dd400_0, word_18, 0x18);  // (from the original)

inline constexpr guest::Function<0x0013cd00, u32(u32, u32, u32, u32)> call_0013cd00;  // (from the original)

u32 f_005dd400(gptr<Object_005dd400_0> arg0, u32 r1, u32 r2, u32 r3) {
    u32 ea = 0;
    u32 r0 = arg0.addr();
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 0x20u;  // (from the original)
    r4 = r0;
    r6 = 0u;
    arg0->word_4 = u32(r6);
    r7 = 0x8c9f1cu;  // (from the original)
    arg0->word_8 = u32(r1);
    arg0->word_c = u32(r6);
    r5 = r3;
    arg0->word_10 = u32(r6);
    r3 = 0x9047f8u;  // (from the original)
    *gptr<u8>(arg0->word_18) = u8(u32(*gptr<u8>(r7)));
    *gptr<u32>(r13 + 4u) = u32(r2);
    r0 = r4 + 0x40u;  // (from the original)
    r1 = r13;
    r2 = ~0u;
    *gptr<u32>(r13) = u32(r3);
    guest::cpu()->r[13] = r13;
    r0 = call_0013cd00(r0, r1, r2, r3);
    ea = r4 + 0x70u;  // (from the original)
    r0 = *gptr<u32>(ea);
    ea = r7;
    *gptr<u8>(r0) = u8(u32(*gptr<u8>(ea)));
    r0 = ~0u;
    ea = r4 + 0x98u;  // (from the original)
    *gptr<u32>(ea) = u32(r0);
    *gptr<u32>(ea + 4) = u32(r5);
    r1 = 2u;
    *gptr<u32>(r4 + 0xa0u) = u32(r0);  // (from the original)
    *gptr<u32>(r4 + 0xa4u) = u32(r0);  // (from the original)
    *gptr<u32>(r4 + 0xa8u) = u32(r0);  // (from the original)
    *gptr<u8>(r4 + 0xacu) = u8(r1);  // (from the original)
    *gptr<u8>(r4 + 0xadu) = u8(r6);  // (from the original)
    r13 = r13 + 0x20u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_005dd400
GUEST_EXPORT(0x005dd400, d_005dd400::f_005dd400);

// f_005dd51c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005dd51c {

inline constexpr guest::Function<0x0013cd00, u32(u32, u32, u32, u32)> call_0013cd00;  // (from the original)

u32 f_005dd51c(u32 r0, u32 r1) {
    u32 r2 = 0;
    u32 r3 = 0;
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 0x10u;  // (from the original)
    r3 = 0x9047f8u;  // (from the original)
    *gptr<u32>(r13 + 4u) = u32(r1);
    r1 = r13;
    r2 = ~0u;
    r0 = r0 + 8u;
    *gptr<u32>(r13) = u32(r3);
    guest::cpu()->r[13] = r13;
    r0 = call_0013cd00(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r13 = r13 + 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_005dd51c
GUEST_EXPORT(0x005dd51c, d_005dd51c::f_005dd51c);

// f_005dd5b8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005dd5b8 {

inline constexpr guest::Function<0x00544a20, u32(u32, u32, u32, u32)> call_00544a20;  // (from the original)
inline constexpr guest::Function<0x00544d08, u32(u32, u32, u32, u32)> call_00544d08;  // (from the original)
inline constexpr guest::Function<0x00544f18, u32(u32, u32, u32, u32)> call_00544f18;  // (from the original)
inline constexpr guest::Function<0x00544fec, u32(u32, u32, u32, u32)> call_00544fec;  // (from the original)
inline constexpr guest::Function<0x0054a644, u32(u32, u32, u32, u32)> call_0054a644;  // (from the original)

u32 f_005dd5b8(u32 r0, u32 r1, u32 r2) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r13 = guest::cpu()->r[13];
    r5 = r1;
    r13 = r13 - 0x58u;  // (from the original)
    r1 = r0 + 0x34u;  // (from the original)
    r0 = r13 + 8u;
    guest::cpu()->r[13] = r13;
    r0 = call_0054a644(r0, r1, r2, guest::cpu()->r[3]);
    r2 = guest::cpu()->r[2];
    r1 = 0x894b7cu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00544fec(r0, r1, r2, guest::cpu()->r[3]);
    r2 = guest::cpu()->r[2];
    *gptr<u32>(r13 + 0x48u) = u32(r5);  // (from the original)
    r5 = r13 + 0x48u;  // (from the original)
    r4 = r0;
    r1 = r13 + 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00544a20(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    if (r0 != 0) {
        r2 = *gptr<u32>(r4 + 4u);
        if (u32(*gptr<u8>(r13 + 0x28u)) == 0) {  // (from the original)
            r1 = 0u;
        } else {
            r1 = r13 + 0x28u;  // (from the original)
        }
        r0 = r5;
        guest::cpu()->r[13] = r13;
        r0 = call_00544d08(r0, r1, r2, guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
    }
    r0 = r4;
    guest::cpu()->r[13] = r13;
    r0 = call_00544f18(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r0 = r13 + 0x1cu;  // (from the original)
    r13 = r13 + 0x58u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_005dd5b8
GUEST_EXPORT(0x005dd5b8, d_005dd5b8::f_005dd5b8);
