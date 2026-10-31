// Functions decompiled by tools/decomp (docs/decomp.md), each proved equal to the recompiled original (prove-cpp). The
// names are generated (d_<address>::f_<address>, Object_<address>_<argument>, word_<offset>) and still to be chosen.
#include "guest/guest.hpp"

#include <bit>

using guest::gptr;

// f_001f4e30: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001f4e30 {

inline constexpr guest::Function<0x0057ba2c, u32(u32, u32, u32, u32)> call_0057ba2c;  // (from the original)

u32 f_001f4e30(u32 r0) {
    guest::cpu()->r[13] -= 8u;
    r0 = call_0057ba2c(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    if (r0 != 0) {
        r0 = 1u;
    }
    guest::cpu()->r[13] += 8u;
    return r0;
}

}  // namespace d_001f4e30
GUEST_EXPORT(0x001f4e30, d_001f4e30::f_001f4e30);

// f_001f4fec: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001f4fec {

inline constexpr guest::Function<0x0057ba68, u32(u32, u32, u32, u32)> call_0057ba68;  // (from the original)

u32 f_001f4fec(u32 r0, u32 r1, u32 r2, u32 r3, float S0, float S1) {
    u32 r4 = guest::cpu()->r[4];
    u32 r12 = 0;
    guest::cpu()->r[13] -= 8u;
    r4 = r1;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    r0 = call_0057ba68(r0, r1, r2, r3);
    r1 = *gptr<u32>(r4);
    S0 = std::bit_cast<float>(*gptr<u32>(0x1f5090u));  // (from the original)
    r12 = 0u;
    *gptr<u32>(r0) = u32(r1);
    S1 = std::bit_cast<float>(*gptr<u32>(0x1f5094u));  // (from the original)
    r3 = r0 + 0x90u;  // (from the original)
    *gptr<u32>(r0 + *gptr<u32>(r1 - 0xcu)) = u32(*gptr<u32>(r4 + 4u));  // (from the original)
    *gptr<u32>(r0 + 0x48u) = u32(std::bit_cast<u32>(S0));  // (from the original)
    *gptr<u32>(r0 + 0x4cu) = u32(std::bit_cast<u32>(S0));  // (from the original)
    *gptr<u32>(r0 + 0x50u) = u32(std::bit_cast<u32>(S0));  // (from the original)
    *gptr<u32>(r0 + 0x60u) = u32(std::bit_cast<u32>(S0));  // (from the original)
    *gptr<u32>(r0 + 0x64u) = u32(std::bit_cast<u32>(S0));  // (from the original)
    *gptr<u32>(r0 + 0x68u) = u32(std::bit_cast<u32>(S0));  // (from the original)
    *gptr<u32>(r0 + 0x78u) = u32(std::bit_cast<u32>(S0));  // (from the original)
    *gptr<u32>(r0 + 0x7cu) = u32(std::bit_cast<u32>(S0));  // (from the original)
    *gptr<u32>(r0 + 0x80u) = u32(std::bit_cast<u32>(S0));  // (from the original)
    *gptr<u16>(r0 + 0x84u) = u16(r12);  // (from the original)
    *gptr<u16>(r0 + 0x86u) = u16(r12);  // (from the original)
    *gptr<u16>(r0 + 0x88u) = u16(r12);  // (from the original)
    *gptr<u16>(r0 + 0x8au) = u16(r12);  // (from the original)
    *gptr<u32>(r0 + 0x8cu) = u32(std::bit_cast<u32>(S0));  // (from the original)
    r2 = 1u;
    *gptr<u32>(r3) = u32(std::bit_cast<u32>(S0));
    *gptr<u32>(r3 + 4) = u32(std::bit_cast<u32>(S1));
    r1 = r12;
    *gptr<u16>(r0 + 0x98u) = u16(r12);  // (from the original)
    *gptr<u32>(r0 + 0x9cu) = u32(std::bit_cast<u32>(S0));  // (from the original)
    *gptr<u32>(r0 + 0xa0u) = u32(std::bit_cast<u32>(S0));  // (from the original)
    *gptr<u32>(r0 + 0xa4u) = u32(std::bit_cast<u32>(S0));  // (from the original)
    *gptr<u8>(r0 + 0xa8u) = u8(r2);  // (from the original)
    *gptr<u32>(r0 + 0xbcu) = u32(std::bit_cast<u32>(S0));  // (from the original)
    *gptr<u32>(r0 + 0xc0u) = u32(std::bit_cast<u32>(S0));  // (from the original)
    *gptr<u16>(r0 + 0xc4u) = u16(r12);  // (from the original)
    *gptr<u8>(r0 + 0xc6u) = u8(r12);  // (from the original)
    *gptr<u8>(r0 + 0xc7u) = u8(r2);  // (from the original)
    *gptr<u8>(r0 + 0xc8u) = u8(r1);  // (from the original)
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    return r0;
}

}  // namespace d_001f4fec
GUEST_EXPORT(0x001f4fec, d_001f4fec::f_001f4fec);

// f_001f581c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001f581c {

struct __attribute__((packed)) Object_001f581c_0 {
    u8 unknown_0[0x200];  // (not used here)
    u8 byte_200;
    u8 unknown_201[0x3];  // (not used here)
    u32 word_204;
};
GUEST_OFFSET(Object_001f581c_0, byte_200, 0x200);  // (from the original)
GUEST_OFFSET(Object_001f581c_0, word_204, 0x204);  // (from the original)

inline constexpr guest::Function<0x002d58b0, u32(u32, u32, u32, u32)> call_002d58b0;  // (from the original)
inline constexpr guest::Function<0x002d595c, u32(u32, u32, u32, u32)> call_002d595c;  // (from the original)
inline constexpr guest::Function<0x002e8cc8, u32(u32, u32, u32, u32)> call_002e8cc8;  // (from the original)
inline constexpr guest::Function<0x002fc8e8, u32(u32, u32, u32, u32)> call_002fc8e8;  // (from the original)
inline constexpr guest::Function<0x002fcb34, u32(u32, u32, u32, u32)> call_002fcb34;  // (from the original)
inline constexpr guest::Function<0x00305f44, u32(u32, u32, u32, u32)> call_00305f44;  // (from the original)
inline constexpr guest::Function<0x00615b2c, u32(u32, u32, u32, u32)> call_00615b2c;  // (from the original)
inline constexpr guest::Function<0x00615e8c, u32(u32, u32, u32, u32)> call_00615e8c;  // (from the original)
inline constexpr guest::Function<0x00700558, u32(u32, u32, u32, u32)> call_00700558;  // (from the original)
inline constexpr guest::Function<0x00701150, u32(u32, u32, u32, u32)> call_00701150;  // (from the original)

u32 f_001f581c(gptr<Object_001f581c_0> arg0, u32 r1_unused, u32 r2) {
    u32 r0 = arg0.addr();
    u32 r1 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 zf = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r4 = r0;
    r1 = u32(arg0->byte_200);
    r5 = r0 + 0x200u;  // (from the original)
    r0 = arg0->word_204;
    if (r1 != 0) {
        r0 = call_00701150(r0, r1, r2, guest::cpu()->r[3]);
        r2 = guest::cpu()->r[2];
        r1 = *gptr<u32>(r4 + 0x204u);  // (from the original)
        r0 = call_00700558(r0, r1, r2, guest::cpu()->r[3]);
    } else {
        r0 = call_00615e8c(r0, r1, r2, guest::cpu()->r[3]);
        r2 = guest::cpu()->r[2];
        r1 = *gptr<u32>(r4 + 0x204u);  // (from the original)
        r0 = call_00615b2c(r0, r1, r2, guest::cpu()->r[3]);
    }
    r1 = r4 + 0x14u;  // (from the original)
    if (u32(*gptr<u8>(r5)) == 0) {
        r0 = 0x53u;  // (from the original)
    } else {
        r0 = *gptr<u32>(r4 + 0x204u);  // (from the original)
    }
    r2 = uxth(r0);
    r0 = r4 + 0x260u;  // (from the original)
    r0 = call_002d58b0(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r0 = call_00305f44(r0, r1, r2, guest::cpu()->r[3]);
    r2 = guest::cpu()->r[2];
    if (r0 == u32(*gptr<u8>(r4 + 0x255u))) {  // (from the original)
        r1 = 1u;
    } else {
        r1 = 0u;
    }
    r0 = r4 + 0x260u;  // (from the original)
    r0 = call_002d595c(r0, r1, r2, guest::cpu()->r[3]);
    r2 = guest::cpu()->r[2];
    r1 = r4 + 0x208u;  // (from the original)
    r0 = r4 + 0x20cu;  // (from the original)
    r0 = call_002fc8e8(r0, r1, r2, guest::cpu()->r[3]);
    r2 = guest::cpu()->r[2];
    r1 = 0x350u;  // (from the original)
    *gptr<u16>(r1 + r4) = u16(0u);
    r0 = u32(*gptr<u8>(r4 + 0x248u));  // (from the original)
    if (r0 != 4u) {
        goto L_1f58e8;
    }
    r0 = r4 + 0x20cu;  // (from the original)
    r0 = call_002fcb34(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    zf = r0 == 0x27u;  // (from the original)
    if (!zf) {
        zf = r0 == 0x28u;  // (from the original)
    }
    if (!zf) {
        goto L_1f58e8;
    }
    r0 = r4 + 0x260u;  // (from the original)
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    r1 = 0x1000613u;  // (from the original)
    return call_002e8cc8(r0, r1, r2, guest::cpu()->r[3]);
L_1f58e8:;
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_001f581c
GUEST_EXPORT(0x001f581c, d_001f581c::f_001f581c);

// f_001f6cc8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001f6cc8 {

inline constexpr guest::Function<0x001f581c, u32(u32, u32, u32, u32)> call_001f581c;  // (from the original)
inline constexpr guest::Function<0x002d59a4, u32(u32, u32, u32, u32)> call_002d59a4;  // (from the original)
inline constexpr guest::Function<0x002fc8e8, u32(u32, u32, u32, u32)> call_002fc8e8;  // (from the original)
inline constexpr guest::Function<0x002fcaf4, u32(u32, u32, u32, u32)> call_002fcaf4;  // (from the original)
inline constexpr guest::Function<0x002fcbb0, u32(u32, u32, u32, u32)> call_002fcbb0;  // (from the original)
inline constexpr guest::Function<0x002fe574, u32(u32, u32, u32, u32)> call_002fe574;  // (from the original)

u32 f_001f6cc8(u32 r0, u32 r1, u32 r2_unused, u32 r3) {
    u32 ea = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r13 = guest::cpu()->r[13];
    u32 zf = 0;
    *gptr<u32>(r13 + 0xffffffe8u) = u32(r3);  // (from the original)
    r13 = r13 - 0x18;  // (from the original)
    r4 = r0;
    r5 = r1;
    r0 = r0 + 0x20cu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002fcaf4(r0, r1, guest::cpu()->r[2], r3);
    r1 = guest::cpu()->r[1];
    r3 = guest::cpu()->r[3];
    if (r0 != 0) {
        goto L_1f6da8;
    }
    r0 = u32(*gptr<u8>(r4 + 0x24au));  // (from the original)
    r7 = 0x7ffeu;  // (from the original)
    r6 = 0u;
    zf = r0 == 1u;
    if (!zf) {
        zf = r0 == 2u;
    }
    r0 = u32(*gptr<u8>(r4 + 0x249u));  // (from the original)
    if (zf) {
        goto L_1f6d6c;
    }
    zf = r0 == 1u;
    if (!zf) {
        zf = r0 == 2u;
    }
    if (!zf) {
        goto L_1f6da8;
    }
L_1f6d0c:;
    r1 = r4 + 0x208u;  // (from the original)
    r0 = r4 + 0x20cu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002fe574(r0, r1, guest::cpu()->r[2], r3);
    r1 = guest::cpu()->r[1];
    r3 = guest::cpu()->r[3];
    if (r0 != 0) {
        goto L_1f6da8;
    }
    r0 = r4 + 0x260u;  // (from the original)
    *gptr<u8>(r4 + 0x254u) = u8(r6);  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002d59a4(r0, r1, guest::cpu()->r[2], r3);
    r3 = guest::cpu()->r[3];
    r1 = r7;
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_002fcbb0(r0, r1, guest::cpu()->r[2], r3);
    r3 = guest::cpu()->r[3];
    r1 = r0;
    r0 = r4 + 0x20cu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002fc8e8(r0, r1, guest::cpu()->r[2], r3);
    r1 = guest::cpu()->r[1];
    r0 = r13;
    if (r5 == 0) {
        goto L_1f6da8;
    }
    r0 = r4;
    ea = r13;
    r13 = r13 + 0x18;  // (from the original)
    r3 = *gptr<u32>(ea);
    guest::cpu()->r[13] = r13;
    return call_001f581c(r0, r1, guest::cpu()->r[2], r3);
L_1f6d6c:;
    zf = r0 == 1u;
    if (!zf) {
        zf = r0 == 2u;
    }
    if (zf) {
        guest::preempt();
        goto L_1f6d0c;
    }
    r0 = r4 + 0x260u;  // (from the original)
    *gptr<u8>(r4 + 0x254u) = u8(r6);  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002d59a4(r0, r1, guest::cpu()->r[2], r3);
    r3 = guest::cpu()->r[3];
    r1 = r7;
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_002fcbb0(r0, r1, guest::cpu()->r[2], r3);
    r3 = guest::cpu()->r[3];
    r1 = r0;
    r0 = r4 + 0x20cu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002fc8e8(r0, r1, guest::cpu()->r[2], r3);
    r1 = guest::cpu()->r[1];
    r0 = r13;
L_1f6da8:;
    r13 = r13 + 0x18;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_001f6cc8
GUEST_EXPORT(0x001f6cc8, d_001f6cc8::f_001f6cc8);

// f_001f815c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001f815c {

struct __attribute__((packed)) Object_001f815c_0 {
    u32 word_0;
};
GUEST_OFFSET(Object_001f815c_0, word_0, 0x0);  // (from the original)


void f_001f815c(gptr<Object_001f815c_0> arg0) {
    u32 r1 = 0;
    u32 r2 = 0;
    u32 r3 = 0;
    u32 r12 = 0;
    r2 = 0u;
    r3 = 0xfcu;  // (from the original)
    arg0->word_0 = u32(0x8ecf74u);  // (from the original)
    r1 = 0x986a10u;  // (from the original)
    r12 = ~0u;
    *gptr<u32>(r1) = u32(r2);
    *gptr<u32>(r1 + 4u) = u32(r2);
    *gptr<u8>(r1 + 8u) = u8(r3);
    *gptr<u32>(r1 + 0x10u) = u32(r2);  // (from the original)
    *gptr<u32>(r1 + 0xcu) = u32(r12);  // (from the original)
    *gptr<u32>(r1 + 0x14u) = u32(r2);  // (from the original)
    *gptr<u8>(r1 + 0x18u) = u8(r3);  // (from the original)
    *gptr<u32>(r1 + 0x20u) = u32(r2);  // (from the original)
    *gptr<u32>(r1 + 0x1cu) = u32(r12);  // (from the original)
    *gptr<u32>(r1 + 0x24u) = u32(r2);  // (from the original)
    *gptr<u8>(r1 + 0x28u) = u8(r3);  // (from the original)
    *gptr<u32>(r1 + 0x30u) = u32(r2);  // (from the original)
    *gptr<u32>(r1 + 0x2cu) = u32(r12);  // (from the original)
    *gptr<u32>(r1 + 0x34u) = u32(r2);  // (from the original)
    *gptr<u8>(r1 + 0x38u) = u8(r3);  // (from the original)
    *gptr<u32>(r1 + 0x40u) = u32(r2);  // (from the original)
    *gptr<u32>(r1 + 0x3cu) = u32(r12);  // (from the original)
    *gptr<u32>(r1 + 0x44u) = u32(r2);  // (from the original)
    *gptr<u8>(r1 + 0x48u) = u8(r3);  // (from the original)
    *gptr<u32>(r1 + 0x4cu) = u32(r12);  // (from the original)
    guest::cpu()->r[1] = r1;
    return;
}

}  // namespace d_001f815c
GUEST_EXPORT(0x001f815c, d_001f815c::f_001f815c);

// f_001f8798: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001f8798 {

inline constexpr guest::Function<0x002b6a00, u32(u32, u32, u32, u32)> call_002b6a00;  // (from the original)
inline constexpr guest::Function<0x002f6a30, u32(u32, u32, u32, u32)> call_002f6a30;  // (from the original)
inline constexpr guest::Function<0x002f6e98, u32(u32, u32, u32, u32)> call_002f6e98;  // (from the original)
inline constexpr guest::Function<0x002f7508, u32(u32, u32, u32, u32)> call_002f7508;  // (from the original)

u32 f_001f8798(u32 r0, u32 r1) {
    u32 r2 = 0;
    u32 r3 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r13 = guest::cpu()->r[13];
    float S0 = 0;
    float S1 = 0;
    float S2 = 0;
    float S3 = 0;
    float S4 = 0;
    float S5 = 0;
    r2 = 0x84839cu;  // (from the original)
    r13 = r13 - 0x50u;  // (from the original)
    r3 = r2 + 0xf0u;  // (from the original)
    r4 = r0;
    S0 = std::bit_cast<float>(*gptr<u32>(r3));
    S1 = std::bit_cast<float>(*gptr<u32>(r3 + 4));
    S2 = std::bit_cast<float>(*gptr<u32>(r3 + 8));
    S3 = std::bit_cast<float>(*gptr<u32>(r3 + 0xc));  // (from the original)
    S4 = std::bit_cast<float>(*gptr<u32>(r3 + 0x10));  // (from the original)
    S5 = std::bit_cast<float>(*gptr<u32>(r3 + 0x14));  // (from the original)
    r3 = r13 + 0x24u;  // (from the original)
    *gptr<u32>(r3) = u32(std::bit_cast<u32>(S0));
    *gptr<u32>(r3 + 4) = u32(std::bit_cast<u32>(S1));
    *gptr<u32>(r3 + 8) = u32(std::bit_cast<u32>(S2));
    *gptr<u32>(r3 + 0xc) = u32(std::bit_cast<u32>(S3));  // (from the original)
    *gptr<u32>(r3 + 0x10) = u32(std::bit_cast<u32>(S4));  // (from the original)
    *gptr<u32>(r3 + 0x14) = u32(std::bit_cast<u32>(S5));  // (from the original)
    r2 = *gptr<u32>(r2 + 0x108u);  // (from the original)
    *gptr<u32>(r13 + 0x20u) = u32(r0 + 0x24u);  // (from the original)
    *gptr<u32>(r13 + 0x1cu) = u32(r1);  // (from the original)
    *gptr<u32>(r13 + 0x3cu) = u32(r2);  // (from the original)
    r2 = 0u;
    r1 = r13 + 0x1cu;  // (from the original)
    r0 = r4 + 0x2e4u;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2;
    guest::cpu()->s[3] = S3;
    guest::cpu()->s[4] = S4;
    guest::cpu()->s[5] = S5;
    r0 = call_002f6e98(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    S2 = guest::cpu()->s[2];
    S3 = guest::cpu()->s[3];
    S4 = guest::cpu()->s[4];
    S5 = guest::cpu()->s[5];
    S0 = std::bit_cast<float>(*gptr<u32>(0x1f8888u));  // (from the original)
    S1 = std::bit_cast<float>(*gptr<u32>(0x1f888cu));  // (from the original)
    *gptr<u32>(r4 + 0x3b8u) = u32(*gptr<u32>(r4 + 0x3b8u) | 0x40u);  // (from the original)
    r0 = 0u;
    *gptr<u32>(r13) = u32(r0);
    *gptr<u32>(r13 + 4u) = u32(r0);
    *gptr<u32>(r13 + 8u) = u32(r0);
    *gptr<u32>(r13 + 0xcu) = u32(r0);  // (from the original)
    *gptr<u32>(r13 + 0x10u) = u32(r0);  // (from the original)
    *gptr<u32>(r13 + 0x14u) = u32(r0);  // (from the original)
    *gptr<u32>(r13 + 0x18u) = u32(r0);  // (from the original)
    r0 = r13 + 8u;
    r5 = 1u;
    *gptr<u32>(r0) = u32(std::bit_cast<u32>(S0));
    *gptr<u32>(r0 + 4) = u32(std::bit_cast<u32>(S1));
    r1 = r13;
    *gptr<u32>(r13) = u32(*gptr<u32>(r4 + 0x1c4u));  // (from the original)
    *gptr<u32>(r13 + 4u) = u32(*gptr<u32>(r4 + 0x200u));  // (from the original)
    r0 = r4 + 0x204u;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2;
    guest::cpu()->s[3] = S3;
    guest::cpu()->s[4] = S4;
    guest::cpu()->s[5] = S5;
    r0 = call_002b6a00(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    S2 = guest::cpu()->s[2];
    S3 = guest::cpu()->s[3];
    S4 = guest::cpu()->s[4];
    S5 = guest::cpu()->s[5];
    r2 = 1u;
    r1 = r4 + 0x204u;  // (from the original)
    r0 = r4 + 0x2e4u;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2;
    guest::cpu()->s[3] = S3;
    guest::cpu()->s[4] = S4;
    guest::cpu()->s[5] = S5;
    r0 = call_002f7508(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    S2 = guest::cpu()->s[2];
    S3 = guest::cpu()->s[3];
    S4 = guest::cpu()->s[4];
    S5 = guest::cpu()->s[5];
    r0 = 0x1000413u;  // (from the original)
    *gptr<u32>(r4 + 0x2d0u) = u32(r0);  // (from the original)
    *gptr<u8>(r4 + 0x2deu) = u8(r5);  // (from the original)
    *gptr<u32>(r4 + 0x2d4u) = u32(r0 - 0x7au);  // (from the original)
    *gptr<u8>(r4 + 0x2dfu) = u8(r5);  // (from the original)
    r1 = 0u;
    r0 = r4 + 0x2e4u;  // (from the original)
    *gptr<u8>(r4 + 0x2e0u) = u8(r5);  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2;
    guest::cpu()->s[3] = S3;
    guest::cpu()->s[4] = S4;
    guest::cpu()->s[5] = S5;
    r0 = call_002f6a30(r0, r1, r2, r3);
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    r1 = 0x3b4u;  // (from the original)
    r0 = 3u;
    *gptr<u16>(r1 + r4) = u16(r0);
    r13 = r13 + 0x50u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    return r0;
}

}  // namespace d_001f8798
GUEST_EXPORT(0x001f8798, d_001f8798::f_001f8798);

// f_001f891c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001f891c {

inline constexpr guest::Function<0x002b6a00, u32(u32, u32, u32, u32)> call_002b6a00;  // (from the original)

u32 f_001f891c(u32 r0, u32 r1) {
    u32 r2 = 0;
    u32 r3 = 0;
    u32 r13 = guest::cpu()->r[13];
    float S0 = 0;
    float S1 = 0;
    r13 = r13 - 0x20u;  // (from the original)
    r3 = 0u;
    if (r1 != 0) {
        if (r1 == 1u) {
            goto L_1f8990;
        }
        if (r1 != 2u) {
            goto L_1f8a2c;
        }
        goto L_1f89e0;
    }
    r1 = *gptr<u32>(r0 + 0x1c8u);  // (from the original)
    *gptr<u8>(r1 + 0xb7u) = u8(u32(*gptr<u8>(r1 + 0xb7u)) & 0xfeu | 1u);  // (from the original)
    r1 = *gptr<u32>(r0 + 0x1ccu);  // (from the original)
    *gptr<u8>(r1 + 0xb7u) = u8(u32(*gptr<u8>(r1 + 0xb7u)) & 0xfeu);  // (from the original)
    r1 = *gptr<u32>(r0 + 0x1d0u);  // (from the original)
    *gptr<u8>(r1 + 0xb7u) = u8(u32(*gptr<u8>(r1 + 0xb7u)) & 0xfeu);  // (from the original)
    *gptr<u32>(r0 + 0x1f8u) = u32(*gptr<u32>(r0 + 0x1e0u));  // (from the original)
    *gptr<u32>(r0 + 0x1fcu) = u32(*gptr<u32>(r0 + 0x1e4u));  // (from the original)
    r1 = *gptr<u32>(r0 + 0x1d4u);  // (from the original)
    goto L_1f89d8;
L_1f8990:;
    r1 = *gptr<u32>(r0 + 0x1c8u);  // (from the original)
    *gptr<u8>(r1 + 0xb7u) = u8(u32(*gptr<u8>(r1 + 0xb7u)) & 0xfeu);  // (from the original)
    r1 = *gptr<u32>(r0 + 0x1ccu);  // (from the original)
    *gptr<u8>(r1 + 0xb7u) = u8(u32(*gptr<u8>(r1 + 0xb7u)) & 0xfeu | 1u);  // (from the original)
    r1 = *gptr<u32>(r0 + 0x1d0u);  // (from the original)
    *gptr<u8>(r1 + 0xb7u) = u8(u32(*gptr<u8>(r1 + 0xb7u)) & 0xfeu);  // (from the original)
    *gptr<u32>(r0 + 0x1f8u) = u32(*gptr<u32>(r0 + 0x1e8u));  // (from the original)
    *gptr<u32>(r0 + 0x1fcu) = u32(*gptr<u32>(r0 + 0x1ecu));  // (from the original)
    r1 = *gptr<u32>(r0 + 0x1d8u);  // (from the original)
L_1f89d8:;
    *gptr<u32>(r0 + 0x200u) = u32(r1);  // (from the original)
    goto L_1f8a2c;
L_1f89e0:;
    r1 = *gptr<u32>(r0 + 0x1c8u);  // (from the original)
    *gptr<u8>(r1 + 0xb7u) = u8(u32(*gptr<u8>(r1 + 0xb7u)) & 0xfeu);  // (from the original)
    r1 = *gptr<u32>(r0 + 0x1ccu);  // (from the original)
    *gptr<u8>(r1 + 0xb7u) = u8(u32(*gptr<u8>(r1 + 0xb7u)) & 0xfeu);  // (from the original)
    r1 = *gptr<u32>(r0 + 0x1d0u);  // (from the original)
    *gptr<u8>(r1 + 0xb7u) = u8(u32(*gptr<u8>(r1 + 0xb7u)) & 0xfeu | 1u);  // (from the original)
    *gptr<u32>(r0 + 0x1f8u) = u32(*gptr<u32>(r0 + 0x1f0u));  // (from the original)
    *gptr<u32>(r0 + 0x1fcu) = u32(*gptr<u32>(r0 + 0x1f4u));  // (from the original)
    *gptr<u32>(r0 + 0x200u) = u32(*gptr<u32>(r0 + 0x1dcu));  // (from the original)
L_1f8a2c:;
    *gptr<u32>(r13 + 4u) = u32(r3);
    *gptr<u32>(r13 + 8u) = u32(r3);
    *gptr<u32>(r13 + 0xcu) = u32(r3);  // (from the original)
    *gptr<u32>(r13 + 0x10u) = u32(r3);  // (from the original)
    *gptr<u32>(r13 + 0x14u) = u32(r3);  // (from the original)
    *gptr<u32>(r13 + 0x18u) = u32(r3);  // (from the original)
    S0 = std::bit_cast<float>(*gptr<u32>(0x1f8a78u));  // (from the original)
    S1 = std::bit_cast<float>(*gptr<u32>(0x1f8a7cu));  // (from the original)
    *gptr<u32>(r13) = u32(*gptr<u32>(r0 + 0x1c4u));  // (from the original)
    r1 = *gptr<u32>(r0 + 0x200u);  // (from the original)
    r2 = r13 + 8u;
    r0 = r0 + 0x204u;  // (from the original)
    *gptr<u32>(r13 + 4u) = u32(r1);
    r1 = r13;
    *gptr<u32>(r2) = u32(std::bit_cast<u32>(S0));
    *gptr<u32>(r2 + 4) = u32(std::bit_cast<u32>(S1));
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    r0 = call_002b6a00(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    r13 = r13 + 0x20u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    return r0;
}

}  // namespace d_001f891c
GUEST_EXPORT(0x001f891c, d_001f891c::f_001f891c);

// f_001f8bac: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001f8bac {

inline constexpr guest::Function<0x0014f89c, u32(u32, u32, u32, u32)> call_0014f89c;  // (from the original)
inline constexpr guest::Function<0x002f74c8, u32(u32, u32, u32, u32)> call_002f74c8;  // (from the original)

u32 f_001f8bac(u32 r0, u32 r1, u32 r2) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    goto L_1f8bac;
L_1f8bac:;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r4 = r0;
    r5 = r1;
    r0 = call_002f74c8(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r6 = 0x94edc4u;  // (from the original)
    if (r0 != 0) {
        r0 = call_002f74c8(r0, r1, r2, guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        if (r0 == 0x71u) {  // (from the original)
            goto L_1f8bf8;
        }
        goto L_1f8c14;
    }
    r0 = *gptr<u32>(r6);
    if (r0 == 0) {
        goto L_1f8c14;
    }
    if (s32(r4) >= s32(3u)) {
        goto L_1f8c14;
    }
    r1 = r4;
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    return guest::call_address<u32>(*gptr<u32>(0x14f898u), r0, r1, r2, guest::cpu()->r[3]);  // (from the original)
L_1f8bf8:;
    r0 = *gptr<u32>(r6 + 4u);
    if (r0 == 0) {
        goto L_1f8c14;
    }
    r2 = r5;
    r1 = r4;
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    return call_0014f89c(r0, r1, r2, guest::cpu()->r[3]);
L_1f8c14:;
    r0 = 0u;
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_001f8bac
GUEST_EXPORT(0x001f8bac, d_001f8bac::f_001f8bac);

// f_001f9290: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001f9290 {

struct __attribute__((packed)) Object_001f9290_1 {
    u8 unknown_0[0x8];  // (not used here)
    u32 word_8;
};
GUEST_OFFSET(Object_001f9290_1, word_8, 0x8);  // (from the original)

inline constexpr guest::Function<0x002b7f74, u32(u32, u32, u32, u32)> call_002b7f74;  // (from the original)
inline constexpr guest::Function<0x00529c80, u32(u32, u32, u32, u32)> call_00529c80;  // (from the original)

u32 f_001f9290(u32 r0, gptr<Object_001f9290_1> arg1, u32 r2, u32 r3) {
    u32 r1 = arg1.addr();
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r4 = r1;
    *gptr<u32>(0x94f344u) = u32(r2);  // (from the original)
    *gptr<u32>(0x94f344u + 4) = u32(r3);  // (from the original)
    *gptr<u32>(0x94f344u + 8) = u32(r4);  // (from the original)
    r1 = r0;
    r2 = arg1->word_8;
    r3 = 0u;
    r0 = u32(*gptr<u16>(0x887314u));  // (from the original)
    r0 = call_00529c80(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r5 = r0;
    if (r0 != 0) {
        r0 = *gptr<u32>(r4 + 8u);
        r0 = call_002b7f74(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
    }
    r0 = r5;
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_001f9290
GUEST_EXPORT(0x001f9290, d_001f9290::f_001f9290);

// f_001f9660: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001f9660 {

struct __attribute__((packed)) Object_001f9660_0 {
    u8 unknown_0[0xf0];  // (not used here)
    u32 word_f0;
    u32 word_f4;
    u32 word_f8;
};
GUEST_OFFSET(Object_001f9660_0, word_f0, 0xf0);  // (from the original)
GUEST_OFFSET(Object_001f9660_0, word_f4, 0xf4);  // (from the original)
GUEST_OFFSET(Object_001f9660_0, word_f8, 0xf8);  // (from the original)


void f_001f9660(gptr<Object_001f9660_0> arg0, u32 r1) {
    u32 r2 = 0;
    r2 = arg0->word_f0;
    if (s32(r2) >= s32(arg0->word_f4)) {
        guest::cpu()->r[1] = r1;
        return;
    }
    *gptr<u32>(arg0->word_f8 + (r2 << 2)) = u32(r1);
    r1 = arg0->word_f0 + 1u;
    arg0->word_f0 = u32(r1);
    guest::cpu()->r[1] = r1;
    return;
}

}  // namespace d_001f9660
GUEST_EXPORT(0x001f9660, d_001f9660::f_001f9660);

// f_001f9884: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001f9884 {

struct __attribute__((packed)) Object_001f9884_0 {
    u8 unknown_0[0x20];  // (not used here)
    u32 word_20;
    u32 word_24;
};
GUEST_OFFSET(Object_001f9884_0, word_20, 0x20);  // (from the original)
GUEST_OFFSET(Object_001f9884_0, word_24, 0x24);  // (from the original)

inline constexpr guest::Function<0x004b9b64, u32(u32, u32, u32, u32)> call_004b9b64;  // (from the original)
inline constexpr guest::Function<0x00568c10, u32(u32, u32, u32, u32)> call_00568c10;  // (from the original)
inline constexpr guest::Function<0x00569420, u32(u32, u32, u32, u32)> call_00569420;  // (from the original)
inline constexpr guest::Function<0x00569508, u32(u32, u32, u32, u32)> call_00569508;  // (from the original)
inline constexpr guest::Function<0x005697e0, u32(u32, u32, u32, u32)> call_005697e0;  // (from the original)
inline constexpr guest::Function<0x00816c20, u32(u32, u32, u32, u32)> call_00816c20;  // (from the original)

u32 f_001f9884(gptr<Object_001f9884_0> arg0, u32 r1, float S0) {
    u32 r0 = arg0.addr();
    u32 r2 = 0;
    u32 r3 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 zf = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r4 = r0;
    r6 = 0x846ef8u;  // (from the original)
    r3 = arg0->word_20;
    r0 = *gptr<u32>(r6 + 0xcu);  // (from the original)
    if (r3 == *gptr<u32>(r6 + 8u)) {
        if (r3 == 0) {
            r2 = arg0->word_24 | r0;
            if ((r2 & 1u) == 0) {
                goto L_1f98fc;
            }
        }
        r2 = *gptr<u32>(r4 + 0x24u);  // (from the original)
        if (r2 == r0) {
            goto L_1f98fc;
        }
    }
    r0 = *gptr<u32>(r6 + 0x14u);  // (from the original)
    if (r3 != *gptr<u32>(r6 + 0x10u)) {  // (from the original)
        goto L_1f999c;
    }
    if (r3 == 0) {
        r2 = *gptr<u32>(r4 + 0x24u) | r0;  // (from the original)
        if ((r2 & 1u) == 0) {
            goto L_1f98fc;
        }
    }
    r2 = *gptr<u32>(r4 + 0x24u);  // (from the original)
    if (r2 != r0) {
        goto L_1f999c;
    }
L_1f98fc:;
    zf = r1 == 0;
    r5 = r4 + 0x494u;  // (from the original)
    r1 = r5;
    r0 = r4 + 0x38u;  // (from the original)
    if (zf) {
        guest::cpu()->s[0] = S0;
        r0 = call_004b9b64(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        S0 = std::bit_cast<float>(*gptr<u32>(0x1f99a8u));  // (from the original)
        r0 = r5;
        guest::cpu()->s[0] = S0;
        r0 = call_005697e0(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        S0 = guest::cpu()->s[0];
        r0 = r4 + 0x38u;  // (from the original)
        guest::cpu()->s[0] = S0;
        r0 = call_00568c10(r0, r1, r2, r3);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        S0 = guest::cpu()->s[0];
        r1 = r5;
        r0 = r4 + 0x38u;  // (from the original)
        guest::cpu()->s[0] = S0;
        r0 = call_00569420(r0, r1, r2, r3);
        r3 = guest::cpu()->r[3];
        S0 = guest::cpu()->s[0];
        r6 = r6 + 8u;
        r0 = r4 + 0x14u;  // (from the original)
        r1 = *gptr<u32>(r6);
        r2 = *gptr<u32>(r6 + 4);
        guest::cpu()->s[0] = S0;
        r0 = call_00816c20(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        S0 = guest::cpu()->s[0];
    } else {
        guest::cpu()->s[0] = S0;
        r0 = call_004b9b64(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        S0 = guest::cpu()->s[0];
        r0 = r5;
        guest::cpu()->s[0] = S0;
        r0 = call_00569508(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        S0 = guest::cpu()->s[0];
        r0 = r4 + 0x38u;  // (from the original)
        guest::cpu()->s[0] = S0;
        r0 = call_00568c10(r0, r1, r2, r3);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        S0 = guest::cpu()->s[0];
        r1 = r5;
        r0 = r4 + 0x38u;  // (from the original)
        guest::cpu()->s[0] = S0;
        r0 = call_00569420(r0, r1, r2, r3);
        r3 = guest::cpu()->r[3];
        S0 = guest::cpu()->s[0];
        r6 = r6 + 0x10u;  // (from the original)
        r0 = r4 + 0x14u;  // (from the original)
        r1 = *gptr<u32>(r6);
        r2 = *gptr<u32>(r6 + 4);
        guest::cpu()->s[0] = S0;
        r0 = call_00816c20(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        S0 = guest::cpu()->s[0];
    }
    r0 = 1u;
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->s[0] = S0;
    return r0;
L_1f999c:;
    r0 = 0u;
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->s[0] = S0;
    return r0;
}

}  // namespace d_001f9884
GUEST_EXPORT(0x001f9884, d_001f9884::f_001f9884);

// f_001f99b4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001f99b4 {

struct __attribute__((packed)) Object_001f99b4_0 {
    u8 unknown_0[0x4bc];  // (not used here)
    u32 word_4bc;
};
GUEST_OFFSET(Object_001f99b4_0, word_4bc, 0x4bc);  // (from the original)

struct __attribute__((packed)) Object_001f99b4_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Object_001f99b4_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_001f99b4_1, word_4, 0x4);  // (from the original)

inline constexpr guest::Function<0x00568c10, u32(u32, u32, u32, u32)> call_00568c10;  // (from the original)

u32 f_001f99b4(gptr<Object_001f99b4_0> arg0, gptr<Object_001f99b4_1> arg1) {
    u32 r0 = arg0.addr();
    u32 r1 = arg1.addr();
    u32 r2 = 0;
    u32 r3 = 0;
    float S0 = 0;
    float S1 = 0;
    float S2 = 0;
    r2 = arg0->word_4bc;
    S2 = std::bit_cast<float>(*gptr<u32>(0x1f99e0u));  // (from the original)
    S0 = std::bit_cast<float>(arg1->word_0);
    S1 = std::bit_cast<float>(arg1->word_4);
    r3 = r2 + 0x28u;  // (from the original)
    r0 = r0 + 0x38u;  // (from the original)
    *gptr<u32>(r3) = u32(std::bit_cast<u32>(S0));
    *gptr<u32>(r3 + 4) = u32(std::bit_cast<u32>(S1));
    *gptr<u32>(r3 + 8) = u32(std::bit_cast<u32>(S2));
    r1 = u32(*gptr<u8>(r2 + 0xb7u)) & 0xcfu;  // (from the original)
    *gptr<u8>(r2 + 0xb7u) = u8(r1);  // (from the original)
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2;
    return call_00568c10(r0, r1, r2, r3);
}

}  // namespace d_001f99b4
GUEST_EXPORT(0x001f99b4, d_001f99b4::f_001f99b4);

// f_001f99e4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001f99e4 {

struct __attribute__((packed)) Object_001f99e4_0 {
    u8 unknown_0[0x4bc];  // (not used here)
    u32 word_4bc;
};
GUEST_OFFSET(Object_001f99e4_0, word_4bc, 0x4bc);  // (from the original)

struct __attribute__((packed)) Object_001f99e4_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Object_001f99e4_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_001f99e4_1, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_001f99e4_1, word_8, 0x8);  // (from the original)

inline constexpr guest::Function<0x00568c10, u32(u32, u32, u32, u32)> call_00568c10;  // (from the original)

u32 f_001f99e4(gptr<Object_001f99e4_0> arg0, gptr<Object_001f99e4_1> arg1) {
    u32 ea = 0;
    u32 r0 = arg0.addr();
    u32 r1 = arg1.addr();
    u32 r2 = 0;
    u32 r3 = 0;
    r2 = arg1->word_0;
    r3 = arg1->word_4;
    r1 = arg0->word_4bc;
    r0 = r0 + 0x38u;  // (from the original)
    ea = r1 + 0x30u;  // (from the original)
    *gptr<u32>(ea) = u32(arg1->word_8);
    ea = r1 + 0x28u;  // (from the original)
    *gptr<u32>(ea) = u32(r2);
    *gptr<u32>(ea + 4) = u32(r3);
    r2 = u32(*gptr<u8>(r1 + 0xb7u)) & 0xcfu;  // (from the original)
    *gptr<u8>(r1 + 0xb7u) = u8(r2);  // (from the original)
    return call_00568c10(r0, r1, r2, r3);
}

}  // namespace d_001f99e4
GUEST_EXPORT(0x001f99e4, d_001f99e4::f_001f99e4);

// f_001f9a08: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001f9a08 {

inline constexpr guest::Function<0x00569420, u32(u32, u32, u32, u32)> call_00569420;  // (from the original)
inline constexpr guest::Function<0x00816c20, u32(u32, u32, u32, u32)> call_00816c20;  // (from the original)

u32 f_001f9a08(u32 r0) {
    u32 r1 = 0;
    u32 r2 = 0;
    u32 r3 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r13 = guest::cpu()->r[13];
    r5 = r0;
    r13 = r13 - 0x28u;  // (from the original)
    r2 = r5 + 0x41cu;  // (from the original)
    r3 = r5 + 0x444u;  // (from the original)
    *gptr<u32>(r13) = u32(r0 + 0x3ccu);  // (from the original)
    *gptr<u32>(r13 + 4) = u32(r5 + 0x3f4u);  // (from the original)
    *gptr<u32>(r13 + 8) = u32(r2);
    *gptr<u32>(r13 + 0xc) = u32(r3);  // (from the original)
    *gptr<u32>(r13 + 0x10) = u32(r5 + 0x46cu);  // (from the original)
    *gptr<u32>(r13 + 0x14) = u32(r5 + 0x494u);  // (from the original)
    r6 = r13;
    r4 = 0u;
    do {
L_1f9a48:;
        r1 = *gptr<u32>(r6 + (r4 << 2));
        if (u32(*gptr<u8>(r1 + 0x1cu)) != 0) {  // (from the original)
            r0 = r5 + 0x38u;  // (from the original)
            guest::cpu()->r[13] = r13;
            r0 = call_00569420(r0, r1, r2, r3);
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
        }
        r4 = r4 + 1u;
        guest::preempt();
    } while (r4 < 6u);
    r1 = *gptr<u32>(0x846f10u);  // (from the original)
    r2 = *gptr<u32>(0x846f10u + 4);  // (from the original)
    r0 = r5 + 0x14u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00816c20(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r13 = r13 + 0x28u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_001f9a08
GUEST_EXPORT(0x001f9a08, d_001f9a08::f_001f9a08);

// f_001f9a84: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001f9a84 {

struct __attribute__((packed)) Object_001f9a84_0 {
    u8 unknown_0[0x20];  // (not used here)
    u32 word_20;
    u32 word_24;
};
GUEST_OFFSET(Object_001f9a84_0, word_20, 0x20);  // (from the original)
GUEST_OFFSET(Object_001f9a84_0, word_24, 0x24);  // (from the original)


u32 f_001f9a84(gptr<Object_001f9a84_0> arg0) {
    u32 ea = 0;
    u32 r0 = arg0.addr();
    u32 r1 = 0;
    u32 r3 = 0;
    u32 r12 = 0;
    r12 = 0x846ef8u;  // (from the original)
    r3 = arg0->word_20;
    r1 = *gptr<u32>(r12 + 0xcu);  // (from the original)
    if (r3 == *gptr<u32>(r12 + 8u)) {
        if (r3 == 0) {
            if (((arg0->word_24 | r1) & 1u) == 0) {
                r0 = 1u;
                guest::cpu()->r[1] = r1;
                return r0;
            }
        }
        if (*gptr<u32>(r0 + 0x24u) == r1) {  // (from the original)
            r0 = 1u;
            guest::cpu()->r[1] = r1;
            return r0;
        }
    }
    ea = r12 + 0x10u;  // (from the original)
    r1 = *gptr<u32>(ea + 4u);
    if (r3 != *gptr<u32>(ea)) {
        r0 = 0u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    if (r3 == 0) {
        if (((*gptr<u32>(r0 + 0x24u) | r1) & 1u) == 0) {  // (from the original)
            r0 = 1u;
            guest::cpu()->r[1] = r1;
            return r0;
        }
    }
    if (*gptr<u32>(r0 + 0x24u) != r1) {  // (from the original)
        r0 = 0u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r0 = 1u;
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_001f9a84
GUEST_EXPORT(0x001f9a84, d_001f9a84::f_001f9a84);

// f_001f9b08: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001f9b08 {

inline constexpr guest::Function<0x00569420, u32(u32, u32, u32, u32)> call_00569420;  // (from the original)
inline constexpr guest::Function<0x00816c20, u32(u32, u32, u32, u32)> call_00816c20;  // (from the original)

u32 f_001f9b08(u32 r0, u32 r1) {
    u32 r2 = 0;
    u32 r3 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r13 = guest::cpu()->r[13];
    r5 = r0;
    r13 = r13 - 0x30u;  // (from the original)
    r6 = r1;
    r2 = r5 + 0x41cu;  // (from the original)
    r3 = r5 + 0x444u;  // (from the original)
    *gptr<u32>(r13) = u32(r0 + 0x3ccu);  // (from the original)
    *gptr<u32>(r13 + 4) = u32(r5 + 0x3f4u);  // (from the original)
    *gptr<u32>(r13 + 8) = u32(r2);
    *gptr<u32>(r13 + 0xc) = u32(r3);  // (from the original)
    *gptr<u32>(r13 + 0x10) = u32(r5 + 0x46cu);  // (from the original)
    *gptr<u32>(r13 + 0x14) = u32(r5 + 0x494u);  // (from the original)
    r7 = r13;
    r4 = 0u;
    do {
L_1f9b4c:;
        r1 = *gptr<u32>(r7 + (r4 << 2));
        if (u32(*gptr<u8>(r1 + 0x1cu)) != 0) {  // (from the original)
            r0 = r5 + 0x38u;  // (from the original)
            guest::cpu()->r[13] = r13;
            r0 = call_00569420(r0, r1, r2, r3);
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
        }
        r4 = r4 + 1u;
        guest::preempt();
    } while (r4 < 6u);
    *gptr<u8>(r5 + 0x4d3u) = u8(r6);  // (from the original)
    r1 = *gptr<u32>(0x846f18u);  // (from the original)
    r2 = *gptr<u32>(0x846f18u + 4);  // (from the original)
    r0 = r5 + 0x14u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00816c20(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r13 = r13 + 0x30u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_001f9b08
GUEST_EXPORT(0x001f9b08, d_001f9b08::f_001f9b08);

// f_001fa354: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001fa354 {

struct __attribute__((packed)) Object_001fa354_0 {
    u8 unknown_0[0x4d0];  // (not used here)
    u8 byte_4d0;
    u8 byte_4d1;
};
GUEST_OFFSET(Object_001fa354_0, byte_4d0, 0x4d0);  // (from the original)
GUEST_OFFSET(Object_001fa354_0, byte_4d1, 0x4d1);  // (from the original)

inline constexpr guest::Function<0x004b9b64, u32(u32, u32, u32, u32)> call_004b9b64;  // (from the original)
inline constexpr guest::Function<0x00568c10, u32(u32, u32, u32, u32)> call_00568c10;  // (from the original)
inline constexpr guest::Function<0x00569420, u32(u32, u32, u32, u32)> call_00569420;  // (from the original)
inline constexpr guest::Function<0x00569508, u32(u32, u32, u32, u32)> call_00569508;  // (from the original)
inline constexpr guest::Function<0x006d1e64, u32(u32, u32, u32, u32)> call_006d1e64;  // (from the original)
inline constexpr guest::Function<0x00816c20, u32(u32, u32, u32, u32)> call_00816c20;  // (from the original)

u32 f_001fa354(gptr<Object_001fa354_0> arg0) {
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
    u32 r13 = guest::cpu()->r[13];
    r5 = r0;
    r13 = r13 - 0x30u;  // (from the original)
    r7 = 0u;
    arg0->byte_4d1 = u8(r7);
    arg0->byte_4d0 = u8(r7);
    r2 = r5 + 0x41cu;  // (from the original)
    r6 = r5 + 0x444u;  // (from the original)
    ea = r13;
    *gptr<u32>(ea) = u32(r0 + 0x3ccu);  // (from the original)
    *gptr<u32>(ea + 4) = u32(r5 + 0x3f4u);  // (from the original)
    *gptr<u32>(ea + 8) = u32(r2);
    *gptr<u32>(ea + 0xc) = u32(r6);  // (from the original)
    r3 = r5 + 0x46cu;  // (from the original)
    ea = r13 + 0x10u;  // (from the original)
    *gptr<u32>(ea) = u32(r3);
    *gptr<u32>(ea + 4) = u32(r5 + 0x494u);  // (from the original)
    r4 = r7;
    r8 = r13;
    do {
L_1fa3a8:;
        r1 = *gptr<u32>(r8 + (r4 << 2));
        r0 = u32(*gptr<u8>(r1 + 0x1cu));  // (from the original)
        if (r0 != 0) {
            r0 = r5 + 0x38u;  // (from the original)
            guest::cpu()->r[13] = r13;
            r0 = call_00569420(r0, r1, r2, r3);
            r1 = guest::cpu()->r[1];
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
        }
        r4 = r4 + 1u;
        guest::preempt();
    } while (r4 < 6u);
    guest::cpu()->r[13] = r13;
    r0 = call_006d1e64(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    *gptr<u8>(r0 + 0x40u) = u8(r7);  // (from the original)
    r1 = r6;
    r0 = r5 + 0x38u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_004b9b64(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r6;
    guest::cpu()->r[13] = r13;
    r0 = call_00569508(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r5 + 0x38u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00568c10(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = r6;
    r0 = r5 + 0x38u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00569420(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    r1 = *gptr<u32>(0x846f08u);  // (from the original)
    r2 = *gptr<u32>(0x846f08u + 4);  // (from the original)
    r0 = r5 + 0x14u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00816c20(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r13 = r13 + 0x30u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_001fa354
GUEST_EXPORT(0x001fa354, d_001fa354::f_001fa354);

// f_001fa744: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001fa744 {

inline constexpr guest::Function<0x00108421, u32(u32, u32, u32, u32)> call_00108420;  // (from the original)
inline constexpr guest::Function<0x002fae84, u32(u32, u32, u32, u32)> call_002fae84;  // (from the original)
inline constexpr guest::Function<0x00300904, u32(u32, u32, u32, u32)> call_00300904;  // (from the original)
inline constexpr guest::Function<0x006249b0, u32(u32, u32, u32, u32)> call_006249b0;  // (from the original)
inline constexpr guest::Function<0x0075dfe8, u32(u32, u32, u32, u32)> call_0075dfe8;  // (from the original)

u32 f_001fa744(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 ea = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r13 = guest::cpu()->r[13];
    u32 r14 = guest::cpu()->r[14];
    u32 zf = 0;
    ea = r13 - 0x18;  // (from the original)
    *gptr<u32>(ea) = u32(r0);
    *gptr<u32>(ea + 4) = u32(r1);
    *gptr<u32>(ea + 8) = u32(r2);
    *gptr<u32>(ea + 0xc) = u32(r4);  // (from the original)
    *gptr<u32>(ea + 0x10) = u32(r5);  // (from the original)
    *gptr<u32>(ea + 0x14) = u32(r14);  // (from the original)
    r13 = r13 - 0x18;  // (from the original)
    r4 = r1;
    guest::cpu()->r[13] = r13;
    r0 = call_00300904(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 != 0) {
        r5 = 0x95362cu;  // (from the original)
        if (r4 != 0) {
            guest::cpu()->r[13] = r13;
            r0 = call_002fae84(r0, r1, r2, r3);
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
            r1 = *gptr<u32>(r13 + 8u);
            r0 = r0 + 0x6e238u;  // (from the original)
            guest::cpu()->r[13] = r13;
            r0 = call_00108420(r0, r1, r2, r3);
            r1 = guest::cpu()->r[1];
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
            r4 = r0;
            r0 = *gptr<u32>(r5);
            guest::cpu()->r[13] = r13;
            r0 = call_0075dfe8(r0, r1, r2, r3);
            r3 = 0x1acu;  // (from the original)
            r2 = r4;
            if (r0 == 0) {
                r1 = 4u;
            } else {
                r1 = 0u;
            }
            r0 = 0x81u;  // (from the original)
        } else {
            r0 = *gptr<u32>(r5);
            guest::cpu()->r[13] = r13;
            r0 = call_0075dfe8(r0, r1, r2, r3);
            zf = r0 == 0;
            if (zf) {
                r3 = 4u;
            } else {
                r3 = 0x1acu;  // (from the original)
            }
            r2 = r13 + 8u;
            if (zf) {
                r1 = 4u;
            } else {
                r1 = 0u;
            }
            r0 = 0x82u;  // (from the original)
        }
        guest::cpu()->r[13] = r13;
        r0 = call_006249b0(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
    }
    r13 = r13 + 0xcu;  // (from the original)
    ea = r13;
    r13 = r13 + 0xc;  // (from the original)
    r4 = *gptr<u32>(ea);
    r5 = *gptr<u32>(ea + 4);
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[4] = r4;
    guest::cpu()->r[5] = r5;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_001fa744
GUEST_EXPORT(0x001fa744, d_001fa744::f_001fa744);

// f_001fad34: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001fad34 {

struct __attribute__((packed)) Object_001fad34_0 {
    u8 unknown_0[0x60];  // (not used here)
    u32 word_60;
};
GUEST_OFFSET(Object_001fad34_0, word_60, 0x60);  // (from the original)


u32 f_001fad34(gptr<Object_001fad34_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r1 = 0;
    r0 = arg0->word_60;
    r1 = u32(*gptr<u16>(0x8c9f1eu));  // (from the original)
    *gptr<u16>(r0) = u16(r1);
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_001fad34
GUEST_EXPORT(0x001fad34, d_001fad34::f_001fad34);

// f_001fbec8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001fbec8 {

inline constexpr guest::Function<0x001fc044, u32(u32, u32, u32, u32)> call_001fc044;  // (from the original)
inline constexpr guest::Function<0x00568a80, u32(u32, u32, u32, u32)> call_00568a80;  // (from the original)
inline constexpr guest::Function<0x005e2c98, u32(u32, u32, u32, u32)> call_005e2c98;  // (from the original)

u32 f_001fbec8(u32 r0, u32 r1_unused, u32 r2) {
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
    u32 r12 = guest::cpu()->r[12];
    u32 r13 = guest::cpu()->r[13];
    *gptr<u32>(r13 + 0xfffffff8u) = u32(r12);  // (from the original)
    r13 = r13 - 0x28;  // (from the original)
    r5 = r0;
    r4 = 0u;
    r6 = 0x94fba0u;  // (from the original)
    do {
L_1fbed8:;
        r0 = r5 + 0x4cu;  // (from the original)
        r1 = *gptr<u32>(r6 + (r4 << 2));
        guest::cpu()->r[13] = r13;
        r0 = call_00568a80(r0, r1, r2, guest::cpu()->r[3]);
        r2 = guest::cpu()->r[2];
        r1 = r5 + (r4 << 2);
        r4 = r4 + 1u;
        res = r4 - 8u;
        *gptr<u32>(r1 + 0x61cu) = u32(r0);  // (from the original)
        guest::preempt();
    } while (res >> 0x1f != ((r4 ^ 8u) & (r4 ^ res)) >> 0x1f);  // (from the original)
    r0 = r5 + 0xbd4u;  // (from the original)
    r1 = *gptr<u32>(r5 + 0x61cu);  // (from the original)
    r2 = 0u;
    r11 = r0;
    guest::cpu()->r[13] = r13;
    r0 = call_005e2c98(r0, r1, r2, guest::cpu()->r[3]);
    r0 = r5 + 0xc98u;  // (from the original)
    r1 = *gptr<u32>(r5 + 0x620u);  // (from the original)
    r2 = 0u;
    r7 = r0;
    guest::cpu()->r[13] = r13;
    r0 = call_005e2c98(r0, r1, r2, guest::cpu()->r[3]);
    r0 = r5 + 0xd5cu;  // (from the original)
    r1 = *gptr<u32>(r5 + 0x624u);  // (from the original)
    r2 = 0u;
    r9 = r0;
    guest::cpu()->r[13] = r13;
    r0 = call_005e2c98(r0, r1, r2, guest::cpu()->r[3]);
    r1 = *gptr<u32>(r5 + 0x628u);  // (from the original)
    r2 = 0u;
    r0 = r5 + 0xe20u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_005e2c98(r0, r1, r2, guest::cpu()->r[3]);
    r0 = r5 + 0xee4u;  // (from the original)
    r1 = *gptr<u32>(r5 + 0x62cu);  // (from the original)
    r2 = 0u;
    r8 = r0;
    guest::cpu()->r[13] = r13;
    r0 = call_005e2c98(r0, r1, r2, guest::cpu()->r[3]);
    r0 = r5 + 0xfa8u;  // (from the original)
    r1 = *gptr<u32>(r5 + 0x630u);  // (from the original)
    r2 = 0u;
    r4 = r0;
    guest::cpu()->r[13] = r13;
    r0 = call_005e2c98(r0, r1, r2, guest::cpu()->r[3]);
    r0 = r5 + 0x106cu;  // (from the original)
    r1 = *gptr<u32>(r5 + 0x634u);  // (from the original)
    r2 = 0u;
    r10 = r0;
    guest::cpu()->r[13] = r13;
    r0 = call_005e2c98(r0, r1, r2, guest::cpu()->r[3]);
    r0 = r5 + 0x1130u;  // (from the original)
    r1 = *gptr<u32>(r5 + 0x638u);  // (from the original)
    r2 = 0u;
    r6 = r0;
    guest::cpu()->r[13] = r13;
    r0 = call_005e2c98(r0, r1, r2, guest::cpu()->r[3]);
    r2 = guest::cpu()->r[2];
    *gptr<u8>(r11 + 0x38u) = u8(1u);  // (from the original)
    *gptr<u8>(r7 + 0x38u) = u8(1u);  // (from the original)
    *gptr<u8>(r9 + 0x38u) = u8(1u);  // (from the original)
    *gptr<u8>(r5 + 0xe58u) = u8(1u);  // (from the original)
    *gptr<u8>(r8 + 0x38u) = u8(1u);  // (from the original)
    *gptr<u8>(r4 + 0x38u) = u8(1u);  // (from the original)
    *gptr<u8>(r10 + 0x38u) = u8(1u);  // (from the original)
    *gptr<u8>(r6 + 0x38u) = u8(1u);  // (from the original)
    r1 = *gptr<u32>(*gptr<u32>(0x94fd3cu) + 0x200u);  // (from the original)
    r0 = r5;
    guest::cpu()->r[13] = r13;
    r0 = call_001fc044(r0, r1, r2, guest::cpu()->r[3]);
    r0 = 0x94fd58u;  // (from the original)
    r1 = *gptr<u32>(r0) & ~0x10u;  // (from the original)
    *gptr<u32>(r0) = u32(r1);
    r13 = r13 + 0x28;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_001fbec8
GUEST_EXPORT(0x001fbec8, d_001fbec8::f_001fbec8);

// f_001fc5a8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001fc5a8 {

struct __attribute__((packed)) Object_001fc5a8_0 {
    u32 word_0;
    u8 unknown_4[0x24];  // (not used here)
    u32 word_28;
};
GUEST_OFFSET(Object_001fc5a8_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_001fc5a8_0, word_28, 0x28);  // (from the original)

inline constexpr guest::Function<0x002b6ef8, u32(u32, u32, u32, u32)> call_002b6ef8;  // (from the original)
inline constexpr guest::Function<0x002f76ad, u32(u32, u32, u32, u32)> call_002f76ac;  // (from the original)
inline constexpr guest::Function<0x002f770c, u32(u32, u32, u32, u32)> call_002f770c;  // (from the original)
inline constexpr guest::Function<0x002f7710, u32(u32, u32, u32, u32)> call_002f7710;  // (from the original)
inline constexpr guest::Function<0x0053721c, u32(u32, u32, u32, u32)> call_0053721c;  // (from the original)
inline constexpr guest::Function<0x00567ef0, u32(u32, u32, u32, u32)> call_00567ef0;  // (from the original)
inline constexpr guest::Function<0x0056988c, u32(u32, u32, u32, u32)> call_0056988c;  // (from the original)
inline constexpr guest::Function<0x005bf744, u32(u32, u32, u32, u32)> call_005bf744;  // (from the original)
inline constexpr guest::Function<0x005e3194, u32(u32, u32, u32, u32)> call_005e3194;  // (from the original)
inline constexpr guest::Function<0x006aa8a0, u32(u32, u32, u32, u32)> call_006aa8a0;  // (from the original)
inline constexpr guest::Function<0x006aaa30, u32(u32, u32, u32, u32)> call_006aaa30;  // (from the original)

u32 f_001fc5a8(gptr<Object_001fc5a8_0> arg0, u32 r1_unused, u32 r2_unused, u32 r3) {
    u32 r0 = arg0.addr();
    u32 r1 = 0;
    u32 r2 = 0;
    u32 r4 = guest::cpu()->r[4];
    r1 = 0x8ed158u;  // (from the original)
    guest::cpu()->r[13] -= 8u;
    r2 = r1 + 0x6cu;  // (from the original)
    arg0->word_0 = u32(r1);
    arg0->word_28 = u32(r2);
    r0 = r0 + 0x1bbcu;  // (from the original)
    r0 = call_0053721c(r0, r1, r2, r3);
    r1 = 0x8ef22cu;  // (from the original)
    r4 = r0 + 0xfffff638u;  // (from the original)
    r2 = 0x518u;  // (from the original)
    *gptr<u32>(r4) = u32(0x8ee218u);  // (from the original)
    r4 = r4 + 0x398u;  // (from the original)
    *gptr<u32>(r4 + 0xe4u) = u32(r1 + 0x44u);  // (from the original)
    *gptr<u32>(r4) = u32(r1);
    r1 = 0x2e0b3cu;  // (from the original)
    r3 = 1u;
    r0 = r4 + 0x118u;  // (from the original)
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
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0xc8u;  // (from the original)
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
    r0 = r0 - 0xe0u;  // (from the original)
    r0 = call_002b6ef8(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0xe4u;  // (from the original)
    r0 = call_002f7710(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0x3d4u;  // (from the original)
    r0 = call_006aa8a0(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0x48u;  // (from the original)
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
    r0 = r0 - 0x14cu;  // (from the original)
    r0 = call_005bf744(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    guest::cpu()->r[13] += 8u;
    r0 = r0 - 0x4cu;  // (from the original)
    return call_006aaa30(r0, r1, r2, r3);
}

}  // namespace d_001fc5a8
GUEST_EXPORT(0x001fc5a8, d_001fc5a8::f_001fc5a8);

// f_001fdc84: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001fdc84 {

struct __attribute__((packed)) Object_001fdc84_0 {
    u32 word_0;
    u8 unknown_4[0x24];  // (not used here)
    u32 word_28;
};
GUEST_OFFSET(Object_001fdc84_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_001fdc84_0, word_28, 0x28);  // (from the original)

inline constexpr guest::Function<0x002f76ad, u32(u32, u32, u32, u32)> call_002f76ac;  // (from the original)
inline constexpr guest::Function<0x002f770c, u32(u32, u32, u32, u32)> call_002f770c;  // (from the original)
inline constexpr guest::Function<0x0031c92c, u32(u32, u32, u32, u32)> call_0031c92c;  // (from the original)
inline constexpr guest::Function<0x00567ef0, u32(u32, u32, u32, u32)> call_00567ef0;  // (from the original)
inline constexpr guest::Function<0x0056988c, u32(u32, u32, u32, u32)> call_0056988c;  // (from the original)
inline constexpr guest::Function<0x005bf744, u32(u32, u32, u32, u32)> call_005bf744;  // (from the original)
inline constexpr guest::Function<0x006aaa30, u32(u32, u32, u32, u32)> call_006aaa30;  // (from the original)

u32 f_001fdc84(gptr<Object_001fdc84_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r1 = 0;
    u32 r2 = 0;
    u32 r3 = 0;
    u32 r4 = guest::cpu()->r[4];
    r1 = 0x8ed1d8u;  // (from the original)
    guest::cpu()->r[13] -= 8u;
    r4 = r0;
    arg0->word_0 = u32(r1);
    arg0->word_28 = u32(r1 + 0x6cu);  // (from the original)
    r1 = 0x81dfb4u;  // (from the original)
    r3 = 0x10u;  // (from the original)
    r2 = 0x20u;  // (from the original)
    r0 = r4 + 0x5400u;  // (from the original)
    r0 = call_002f76ac(r0, r1, r2, r3);
    r2 = 0x518u;  // (from the original)
    r3 = 2u;
    *gptr<u32>(0x4510u + r4) = u32(0x8ee228u);  // (from the original)
    r1 = 0x8ef284u;  // (from the original)
    r4 = r4 + 0x48a8u;  // (from the original)
    *gptr<u32>(r4 + 0xe4u) = u32(r1 + 0x44u);  // (from the original)
    *gptr<u32>(r4) = u32(r1);
    r1 = 0x2e0b3cu;  // (from the original)
    r0 = r4 + 0x118u;  // (from the original)
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
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0xe4u;  // (from the original)
    r0 = call_0031c92c(r0, r1, r2, r3);
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
    r1 = 0x1ad16cu;  // (from the original)
    r4 = r0 - 0x42f0u;  // (from the original)
    r3 = 0x10u;  // (from the original)
    r2 = 0x3dcu;  // (from the original)
    r0 = r0 - 0x3dc4u;  // (from the original)
    r0 = call_002f76ac(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r4 + 0x3e0u;  // (from the original)
    r0 = call_005bf744(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0x14cu;  // (from the original)
    r0 = call_005bf744(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0x248u;  // (from the original)
    r0 = call_00567ef0(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    guest::cpu()->r[13] += 8u;
    r0 = r0 - 0x4cu;  // (from the original)
    return call_006aaa30(r0, r1, r2, r3);
}

}  // namespace d_001fdc84
GUEST_EXPORT(0x001fdc84, d_001fdc84::f_001fdc84);

// f_001fde44: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001fde44 {

inline constexpr guest::Function<0x00529d08, u32(u32, u32, u32, u32)> call_00529d08;  // (from the original)

u32 f_001fde44(u32 r0) {
    u32 r1 = 0;
    u32 r2 = 0;
    r1 = r0;
    guest::cpu()->r[13] -= 8u;
    r2 = 0u;
    r0 = u32(*gptr<u16>(0x887330u));  // (from the original)
    r0 = call_00529d08(r0, r1, r2, guest::cpu()->r[3]);
    r1 = 0x950124u;  // (from the original)
    *gptr<u32>(r1 + 4u) = u32(r0);
    if (r0 == 0) {
        r0 = 0u;
    } else {
        r0 = 1u;
    }
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_001fde44
GUEST_EXPORT(0x001fde44, d_001fde44::f_001fde44);

// f_001fde7c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001fde7c {


u32 f_001fde7c() {
    u32 r0 = 0;
    u32 r1 = 0;
    r1 = *gptr<u32>(0x993068u);  // (from the original)
    r0 = u32(*gptr<u16>(0x8c9f1eu));  // (from the original)
    *gptr<u16>(r1) = u16(r0);
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_001fde7c
GUEST_EXPORT(0x001fde7c, d_001fde7c::f_001fde7c);

// f_001fde9c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001fde9c {

inline constexpr guest::Function<0x005204b0, u32(u32, u32, u32, u32)> call_005204b0;  // (from the original)

u32 f_001fde9c() {
    u32 r0 = 0;
    u32 r4 = guest::cpu()->r[4];
    guest::cpu()->r[13] -= 8u;
    r4 = 0x950124u;  // (from the original)
    r0 = *gptr<u32>(r4 + 4u);
    r0 = call_005204b0(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    r0 = 0u;
    *gptr<u32>(r4 + 4u) = u32(r0);
    guest::cpu()->r[13] += 8u;
    return r0;
}

}  // namespace d_001fde9c
GUEST_EXPORT(0x001fde9c, d_001fde9c::f_001fde9c);

// f_001fdf44: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001fdf44 {

inline constexpr guest::Function<0x005204b0, u32(u32, u32, u32, u32)> call_005204b0;  // (from the original)

u32 f_001fdf44(u32 r0_unused, u32 r1) {
    u32 r0 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r4 = 0u;
    r5 = 0x950124u;  // (from the original)
    r0 = *gptr<u32>(r5 + 4u);
    if (r0 == 0) {
        r0 = 1u;
        goto L_1fdf80;
    }
    r1 = *gptr<u32>(r5 + 8u);
    if (r1 == 0) {
        r0 = call_005204b0(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        *gptr<u32>(r5 + 8u) = u32(*gptr<u32>(r5 + 8u) + 1u);
    }
    r0 = r4;
L_1fdf80:;
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_001fdf44
GUEST_EXPORT(0x001fdf44, d_001fdf44::f_001fdf44);

// f_001fe718: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001fe718 {

inline constexpr guest::Function<0x002fb328, u32(u32, u32, u32, u32)> call_002fb328;  // (from the original)
inline constexpr guest::Function<0x002fb378, u32(u32, u32, u32, u32)> call_002fb378;  // (from the original)
inline constexpr guest::Function<0x00301444, u32(u32, u32, u32, u32)> call_00301444;  // (from the original)
inline constexpr guest::Function<0x00312ab8, u32(u32, u32, u32, u32)> call_00312ab8;  // (from the original)
inline constexpr guest::Function<0x0055cabc, u32(u32, u32, u32, u32)> call_0055cabc;  // (from the original)
inline constexpr guest::Function<0x0055cb58, u32(u32, u32, u32, u32)> call_0055cb58;  // (from the original)
inline constexpr guest::Function<0x0062f03c, u32(u32, u32, u32, u32)> call_0062f03c;  // (from the original)

u32 f_001fe718(u32 r0, u32 r1_unused, u32 r2, u32 r3) {
    u32 ea = 0;
    u32 r1 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r9 = guest::cpu()->r[9];
    u32 r13 = guest::cpu()->r[13];
    u32 nf = 0;
    u32 zf = 0;
    u32 vf = 0;
    r5 = r0;
    r13 = r13 - 0x40u;  // (from the original)
    r1 = 0x3cu;  // (from the original)
    r0 = r0 + 0x13u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00301444(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0 = call_0062f03c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 != 4u) {
        goto L_1fe80c;
    }
    guest::cpu()->r[13] = r13;
    r0 = call_002fb378(r0, r1, r2, r3);
    r1 = *gptr<u32>(r0);
    r2 = *gptr<u32>(r0 + 4);
    r8 = 0u;
    r0 = *gptr<u32>(r0 + 8u);
    r4 = r13 + 4u;
    *gptr<u32>(r13) = u32(r8);
    *gptr<u32>(r13 + 0xcu) = u32(r0);  // (from the original)
    *gptr<u32>(r4) = u32(r1);
    *gptr<u32>(r4 + 4) = u32(r2);
    r3 = r8;
    r2 = ~5u;
    r1 = r8;
    r0 = r13 + 4u;
    guest::cpu()->r[13] = r13;
    r0 = call_00312ab8(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0 = call_002fb328(r0, r1, r2, r3);
    r2 = u32(s32(s8(*gptr<u8>(r13 + 0xbu))));  // (from the original)
    r4 = *gptr<u32>(r13 + 4u) << 9;
    r3 = u32(s32(s8(*gptr<u8>(r13 + 0xcu))));  // (from the original)
    r1 = (r4 + (u32(s32(s8(*gptr<u8>(r13 + 8u)))) << 5) + u32(s32(s8(*gptr<u8>(r13 + 9u)))) << 8) + (r2 << 0x10) + (r3 << 8) + u32(*gptr<u16>(r0 + 0x621b8u));  // (from the original)
    r0 = r13 + 0x10u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0055cabc(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r7 = 0x9506f8u;  // (from the original)
    r0 = 0u;
    r4 = r0;
    r9 = 1u;
    do {
L_1fe7c8:;
        r1 = r5 + r4;
        nf = r0 >> 0x1f;  // (from the original)
        zf = r0 == 0;
        vf = 0u;
        if (!zf && nf == vf) {
            r0 = r0 - 1u;
        }
        *gptr<u8>(r1 + 0x13u) = u8(r8);  // (from the original)
        if (!(!zf && nf == vf)) {
            ea = r1 + 0x13u;  // (from the original)
            *gptr<u8>(ea) = u8(r9);
            ea = r7 + 4u;
            r1 = *gptr<u32>(ea);
            r2 = *gptr<u32>(ea + 4);
            r0 = r13 + 0x10u;  // (from the original)
            r6 = r2 - r1;
            guest::cpu()->r[13] = r13;
            r0 = call_0055cb58(r0, r1, r2, r3);
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
            r1 = *gptr<u32>(r7 + 4u);
            r0 = u32(u64(r0) * r6 >> 0x20) + r1;  // (from the original)
        }
        r4 = r4 + 1u;
        guest::preempt();
    } while (s32(r4) < s32(0x3cu));  // (from the original)
L_1fe80c:;
    guest::cpu()->r[13] = r13;
    r0 = call_002fb378(r0, r1, r2, r3);
    r1 = *gptr<u32>(r0);
    r2 = *gptr<u32>(r0 + 4);
    r0 = *gptr<u32>(r0 + 8u);
    *gptr<u32>(r5 + 0x58u) = u32(r0);  // (from the original)
    ea = r5 + 0x50u;  // (from the original)
    *gptr<u32>(ea) = u32(r1);
    *gptr<u32>(ea + 4) = u32(r2);
    r13 = r13 + 0x40u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_001fe718
GUEST_EXPORT(0x001fe718, d_001fe718::f_001fe718);

// f_001fefa4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001fefa4 {

struct __attribute__((packed)) Object_001fefa4_0 {
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
GUEST_OFFSET(Object_001fefa4_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_001fefa4_0, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_001fefa4_0, byte_8, 0x8);  // (from the original)
GUEST_OFFSET(Object_001fefa4_0, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Object_001fefa4_0, word_10, 0x10);  // (from the original)
GUEST_OFFSET(Object_001fefa4_0, word_14, 0x14);  // (from the original)
GUEST_OFFSET(Object_001fefa4_0, byte_18, 0x18);  // (from the original)
GUEST_OFFSET(Object_001fefa4_0, word_1c, 0x1c);  // (from the original)
GUEST_OFFSET(Object_001fefa4_0, word_20, 0x20);  // (from the original)

inline constexpr guest::Function<0x001207d8, u32(u32, u32, u32, u32)> call_001207d8;  // (from the original)
inline constexpr guest::Function<0x00125aec, u32(u32, u32, u32, u32)> call_00125aec;  // (from the original)
inline constexpr guest::Function<0x001cb884, u32(u32, u32, u32, u32)> call_001cb884;  // (from the original)
inline constexpr guest::Function<0x00299b30, u32(u32, u32, u32, u32)> call_00299b30;  // (from the original)
inline constexpr guest::Function<0x002b7c68, u32(u32, u32, u32, u32)> call_002b7c68;  // (from the original)
inline constexpr guest::Function<0x002bc928, u32(u32, u32, u32, u32)> call_002bc928;  // (from the original)
inline constexpr guest::Function<0x00301d0d, u32(u32, u32, u32, u32)> call_00301d0c;  // (from the original)
inline constexpr guest::Function<0x005e3128, u32(u32, u32, u32, u32)> call_005e3128;  // (from the original)

u32 f_001fefa4(gptr<Object_001fefa4_0> arg0, float S0) {
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
    ea = 0x879db8u;  // (from the original)
    r2 = *gptr<u32>(ea + 4);
    r3 = r0 + 0xcu;  // (from the original)
    arg0->word_c = u32(*gptr<u32>(ea));
    arg0->word_10 = u32(r2);
    arg0->word_14 = u32(r4);
    r1 = 0x9081c4u;  // (from the original)
    arg0->word_0 = u32(r1);
    arg0->byte_18 = u8(r4);
    arg0->word_1c = u32(r4);
    ea = r0 + 0x20u;  // (from the original)
    arg0->word_20 = u32(r4);
    r0 = ea + 4u;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    r0 = call_002bc928(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
    r1 = 0x8ed2e8u;  // (from the original)
    r2 = r1 + 0x34u;  // (from the original)
    *gptr<u32>(r0 - 0x24u) = u32(r1);  // (from the original)
    *gptr<u32>(r0) = u32(r2);
    r0 = r0 + 8u;
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
    r0 = call_001cb884(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
    r1 = 0x8f8b10u;  // (from the original)
    *gptr<u32>(r0) = u32(r1);
    r0 = r0 + 0x1b0u;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    r0 = call_002b7c68(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
    r0 = r0 + 0x5cu;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    r0 = call_001cb884(r0, r1, r2, r3);
    S0 = guest::cpu()->s[0];
    r3 = 7u;
    r2 = 0x198u;  // (from the original)
    *gptr<u32>(r0) = u32(0x8f2638u);  // (from the original)
    r0 = r0 + 0x1b0u;  // (from the original)
    r1 = 0x2caec8u;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    r0 = call_00301d0c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
    r0 = r0 + 0xb28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    r0 = call_00125aec(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
    r0 = r0 - 0xcd8u;  // (from the original)
    r1 = 0x40u;  // (from the original)
    ea = r0 + 0xd00u;  // (from the original)
    *gptr<u32>(ea) = u32(r4);
    ea = r0 + 0xd04u;  // (from the original)
    *gptr<u32>(ea) = u32(r4);
    r0 = ea + 0x20u;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    r0 = call_005e3128(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
    r1 = r0 - 0xd24u;  // (from the original)
    r0 = r0 + 0xc4u;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    r0 = call_00299b30(r0, r1, r2, r3);
    S0 = guest::cpu()->s[0];
    r1 = 0x1c81a8u;  // (from the original)
    r3 = 7u;
    r2 = 0x1cu;  // (from the original)
    r0 = r0 + 0x798u;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    r0 = call_00301d0c(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0x1580u;  // (from the original)
    r2 = 0x164cu;  // (from the original)
    S0 = std::bit_cast<float>(*gptr<u32>(0x1ff0c8u));  // (from the original)
    r1 = r0 + 0x1400u;  // (from the original)
    *gptr<u32>(r1 + 0x244u) = u32(std::bit_cast<u32>(S0));  // (from the original)
    *gptr<u32>(r1 + 0x248u) = u32(std::bit_cast<u32>(S0));  // (from the original)
    *gptr<u32>(r2 + r0) = u32(r4);
    r0 = r0 + 0x1650u;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    r0 = call_002b7c68(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    S0 = guest::cpu()->s[0];
    r0 = r0 - 0x1ad0u;  // (from the original)
    r13 = r13 + 8;
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    return r0;
}

}  // namespace d_001fefa4
GUEST_EXPORT(0x001fefa4, d_001fefa4::f_001fefa4);

// f_001ff124: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001ff124 {

struct __attribute__((packed)) Object_001ff124_0 {
    u32 word_0;
    u8 unknown_4[0x20];  // (not used here)
    u32 word_24;
};
GUEST_OFFSET(Object_001ff124_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_001ff124_0, word_24, 0x24);  // (from the original)

inline constexpr guest::Function<0x001cb8fc, u32(u32, u32, u32, u32)> call_001cb8fc;  // (from the original)
inline constexpr guest::Function<0x002b7c94, u32(u32, u32, u32, u32)> call_002b7c94;  // (from the original)
inline constexpr guest::Function<0x002cbad8, u32(u32, u32, u32, u32)> call_002cbad8;  // (from the original)
inline constexpr guest::Function<0x00567ef0, u32(u32, u32, u32, u32)> call_00567ef0;  // (from the original)

u32 f_001ff124(gptr<Object_001ff124_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r1 = 0;
    u32 r2 = 0;
    r1 = 0x8ed2e8u;  // (from the original)
    guest::cpu()->r[13] -= 8u;
    arg0->word_0 = u32(r1);
    r2 = r1 + 0x34u;  // (from the original)
    arg0->word_24 = u32(r2);
    r0 = r0 + 0x480u;  // (from the original)
    r0 = call_002cbad8(r0, r1, r2, guest::cpu()->r[3]);
    r2 = guest::cpu()->r[2];
    r1 = 0x8f8b10u;  // (from the original)
    *gptr<u32>(r0 - 0x20cu) = u32(r1);  // (from the original)
    r0 = r0 - 0x5cu;  // (from the original)
    r0 = call_002b7c94(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r0 = r0 - 0x1b0u;  // (from the original)
    r0 = call_001cb8fc(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r0 = r0 - 0x248u;  // (from the original)
    r0 = call_00567ef0(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r0 = r0 - 0x2cu;  // (from the original)
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_001ff124
GUEST_EXPORT(0x001ff124, d_001ff124::f_001ff124);

// f_001ff5c0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001ff5c0 {

struct __attribute__((packed)) Object_001ff5c0_0 {
    u8 unknown_0[0x108];  // (not used here)
    u32 word_108;
    u32 word_10c;
    u32 word_110;
    u32 word_114;
    u32 word_118;
    u32 word_11c;
    u32 word_120;
};
GUEST_OFFSET(Object_001ff5c0_0, word_108, 0x108);  // (from the original)
GUEST_OFFSET(Object_001ff5c0_0, word_10c, 0x10c);  // (from the original)
GUEST_OFFSET(Object_001ff5c0_0, word_110, 0x110);  // (from the original)
GUEST_OFFSET(Object_001ff5c0_0, word_114, 0x114);  // (from the original)
GUEST_OFFSET(Object_001ff5c0_0, word_118, 0x118);  // (from the original)
GUEST_OFFSET(Object_001ff5c0_0, word_11c, 0x11c);  // (from the original)
GUEST_OFFSET(Object_001ff5c0_0, word_120, 0x120);  // (from the original)


void f_001ff5c0(gptr<Object_001ff5c0_0> arg0) {
    u32 r1 = 0;
    float S0 = 0;
    float S1 = 0;
    float S2 = 0;
    float S3 = 0;
    float S4 = 0;
    r1 = arg0->word_108 + 0x80u;  // (from the original)
    S1 = std::bit_cast<float>(*gptr<u32>(r1 + 0xcu));  // (from the original)
    S0 = std::bit_cast<float>(*gptr<u32>(r1 + 0x1cu));  // (from the original)
    S2 = std::bit_cast<float>(*gptr<u32>(r1 + 0x2cu));  // (from the original)
    S3 = std::bit_cast<float>(arg0->word_11c) - S0;
    S4 = std::bit_cast<float>(arg0->word_120) - S2;
    arg0->word_10c = u32(std::bit_cast<u32>(std::bit_cast<float>(arg0->word_10c) + (std::bit_cast<float>(arg0->word_118) - S1)));
    arg0->word_110 = u32(std::bit_cast<u32>(std::bit_cast<float>(arg0->word_110) + S3));
    arg0->word_114 = u32(std::bit_cast<u32>(std::bit_cast<float>(arg0->word_114) + S4));
    arg0->word_118 = u32(std::bit_cast<u32>(S1));
    arg0->word_11c = u32(std::bit_cast<u32>(S0));
    arg0->word_120 = u32(std::bit_cast<u32>(S2));
    guest::cpu()->r[1] = r1;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    return;
}

}  // namespace d_001ff5c0
GUEST_EXPORT(0x001ff5c0, d_001ff5c0::f_001ff5c0);

// f_001ff92c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001ff92c {

inline constexpr guest::Function<0x00125aec, u32(u32, u32, u32, u32)> call_00125aec;  // (from the original)
inline constexpr guest::Function<0x002b6de0, u32(u32, u32, u32, u32)> call_002b6de0;  // (from the original)

u32 f_001ff92c(u32 r0, u32 r1, u32 r2, u32 r3, float S0) {
    guest::cpu()->r[13] -= 8u;
    guest::cpu()->s[0] = S0;
    r0 = call_002b6de0(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
    r1 = 0x8ed374u;  // (from the original)
    *gptr<u32>(r0) = u32(r1);
    r0 = r0 + 0xe0u;  // (from the original)
    guest::cpu()->s[0] = S0;
    r0 = call_00125aec(r0, r1, r2, r3);
    r0 = r0 - 0xe0u;  // (from the original)
    r1 = 0u;
    r3 = r0 + 0x100u;  // (from the original)
    *gptr<u32>(r0 + 0x108u) = u32(r1);  // (from the original)
    *gptr<u32>(r0 + 0x124u) = u32(r1);  // (from the original)
    *gptr<u16>(r3 + 0x28u) = u16(r1);  // (from the original)
    *gptr<u16>(r3 + 0x2au) = u16(r1);  // (from the original)
    *gptr<u8>(r0 + 0x12cu) = u8(r1);  // (from the original)
    r2 = 1u;
    S0 = std::bit_cast<float>(*gptr<u32>(0x1ff998u));  // (from the original)
    *gptr<u8>(r0 + 0x12du) = u8(r2);  // (from the original)
    *gptr<u32>(r0 + 0x10cu) = u32(std::bit_cast<u32>(S0));  // (from the original)
    *gptr<u32>(r0 + 0x110u) = u32(std::bit_cast<u32>(S0));  // (from the original)
    *gptr<u32>(r0 + 0x114u) = u32(std::bit_cast<u32>(S0));  // (from the original)
    r1 = 0x100038eu;  // (from the original)
    *gptr<u32>(r0 + 0x118u) = u32(std::bit_cast<u32>(S0));  // (from the original)
    *gptr<u32>(r0 + 0x11cu) = u32(std::bit_cast<u32>(S0));  // (from the original)
    *gptr<u32>(r0 + 0x120u) = u32(std::bit_cast<u32>(S0));  // (from the original)
    *gptr<u32>(r0 + 0xccu) = u32(r1);  // (from the original)
    *gptr<u8>(r0 + 0xdau) = u8(r2);  // (from the original)
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1;
    guest::cpu()->s[0] = S0;
    return r0;
}

}  // namespace d_001ff92c
GUEST_EXPORT(0x001ff92c, d_001ff92c::f_001ff92c);

// f_001ff9d8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001ff9d8 {

struct __attribute__((packed)) Object_001ff9d8_0 {
    u32 word_0;
};
GUEST_OFFSET(Object_001ff9d8_0, word_0, 0x0);  // (from the original)

inline constexpr guest::Function<0x002b6ef8, u32(u32, u32, u32, u32)> call_002b6ef8;  // (from the original)
inline constexpr guest::Function<0x00569774, u32(u32, u32, u32, u32)> call_00569774;  // (from the original)
inline constexpr guest::Function<0x0056988c, u32(u32, u32, u32, u32)> call_0056988c;  // (from the original)

u32 f_001ff9d8(gptr<Object_001ff9d8_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r1 = 0;
    u32 r4 = guest::cpu()->r[4];
    guest::cpu()->r[13] -= 8u;
    r4 = r0;
    r1 = 0u;
    arg0->word_0 = u32(0x8ed374u);  // (from the original)
    r0 = r4 + 0xe0u;  // (from the original)
    r0 = call_00569774(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r0 = r4 + 0xe0u;  // (from the original)
    r0 = call_0056988c(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    guest::cpu()->r[13] += 8u;
    r0 = r0 - 0xe0u;  // (from the original)
    return call_002b6ef8(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_001ff9d8
GUEST_EXPORT(0x001ff9d8, d_001ff9d8::f_001ff9d8);
