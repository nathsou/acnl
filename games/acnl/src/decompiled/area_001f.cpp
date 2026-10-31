// Functions decompiled by tools/decomp (docs/decomp.md), each proved equal to the recompiled original (prove-cpp). The
// names are generated (d_<address>::f_<address>, Object_<address>_<argument>, word_<offset>) and still to be chosen.
#include "guest/guest.hpp"

#include <bit>

using guest::gptr;

// f_001f4e30: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001f4e30 {

inline constexpr guest::Function<0x0057ba2c, u32(u32, u32, u32, u32)> call_0057ba2c;  // (from the original)

u32 f_001f4e30(u32 r0) {
    u32 r0_1 = 0;
    guest::cpu()->r[13] -= 8u;
    r0_1 = call_0057ba2c(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    if (r0_1 != 0) {
        r0_1 = 1u;
    }
    guest::cpu()->r[13] += 8u;
    return r0_1;
}

}  // namespace d_001f4e30
GUEST_EXPORT(0x001f4e30, d_001f4e30::f_001f4e30);

// f_001f4fec: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001f4fec {

inline guest::global<u32, 0x001f5090> global_001f5090;  // (from the original)
inline guest::global<u32, 0x001f5094> global_001f5094;  // (from the original)
inline constexpr guest::Function<0x0057ba68, u32(u32, u32, u32, u32)> call_0057ba68;  // (from the original)

u32 f_001f4fec(u32 r0, u32 r1, u32 r2, u32 r3, float S0, float S1) {
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    float S0_1 = 0;
    float S1_1 = 0;
    u32 r3_1 = 0;
    guest::cpu()->r[13] -= 8u;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    r0_1 = call_0057ba68(r0, r1, r2, r3);
    r1_1 = *gptr<u32>(r1);
    S0_1 = std::bit_cast<float>(*global_001f5090);
    *gptr<u32>(r0_1) = u32(r1_1);
    S1_1 = std::bit_cast<float>(*global_001f5094);
    r3_1 = r0_1 + 0x90u;  // (from the original)
    *gptr<u32>(r0_1 + *gptr<u32>(r1_1 - 0xcu)) = u32(*gptr<u32>(r1 + 4u));  // (from the original)
    *gptr<u32>(r0_1 + 0x48u) = u32(std::bit_cast<u32>(S0_1));  // (from the original)
    *gptr<u32>(r0_1 + 0x4cu) = u32(std::bit_cast<u32>(S0_1));  // (from the original)
    *gptr<u32>(r0_1 + 0x50u) = u32(std::bit_cast<u32>(S0_1));  // (from the original)
    *gptr<u32>(r0_1 + 0x60u) = u32(std::bit_cast<u32>(S0_1));  // (from the original)
    *gptr<u32>(r0_1 + 0x64u) = u32(std::bit_cast<u32>(S0_1));  // (from the original)
    *gptr<u32>(r0_1 + 0x68u) = u32(std::bit_cast<u32>(S0_1));  // (from the original)
    *gptr<u32>(r0_1 + 0x78u) = u32(std::bit_cast<u32>(S0_1));  // (from the original)
    *gptr<u32>(r0_1 + 0x7cu) = u32(std::bit_cast<u32>(S0_1));  // (from the original)
    *gptr<u32>(r0_1 + 0x80u) = u32(std::bit_cast<u32>(S0_1));  // (from the original)
    *gptr<u16>(r0_1 + 0x84u) = u16(0u);  // (from the original)
    *gptr<u16>(r0_1 + 0x86u) = u16(0u);  // (from the original)
    *gptr<u16>(r0_1 + 0x88u) = u16(0u);  // (from the original)
    *gptr<u16>(r0_1 + 0x8au) = u16(0u);  // (from the original)
    *gptr<u32>(r0_1 + 0x8cu) = u32(std::bit_cast<u32>(S0_1));  // (from the original)
    *gptr<u32>(r3_1) = u32(std::bit_cast<u32>(S0_1));
    *gptr<u32>(r3_1 + 4) = u32(std::bit_cast<u32>(S1_1));
    *gptr<u16>(r0_1 + 0x98u) = u16(0u);  // (from the original)
    *gptr<u32>(r0_1 + 0x9cu) = u32(std::bit_cast<u32>(S0_1));  // (from the original)
    *gptr<u32>(r0_1 + 0xa0u) = u32(std::bit_cast<u32>(S0_1));  // (from the original)
    *gptr<u32>(r0_1 + 0xa4u) = u32(std::bit_cast<u32>(S0_1));  // (from the original)
    *gptr<u8>(r0_1 + 0xa8u) = u8(1u);  // (from the original)
    *gptr<u32>(r0_1 + 0xbcu) = u32(std::bit_cast<u32>(S0_1));  // (from the original)
    *gptr<u32>(r0_1 + 0xc0u) = u32(std::bit_cast<u32>(S0_1));  // (from the original)
    *gptr<u16>(r0_1 + 0xc4u) = u16(0u);  // (from the original)
    *gptr<u8>(r0_1 + 0xc6u) = u8(0u);  // (from the original)
    *gptr<u8>(r0_1 + 0xc7u) = u8(1u);  // (from the original)
    *gptr<u8>(r0_1 + 0xc8u) = u8(0u);  // (from the original)
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = 0u;
    guest::cpu()->s[0] = S0_1;
    guest::cpu()->s[1] = S1_1;
    return r0_1;
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
    u32 r1_1 = 0;
    u32 r5_1 = 0;
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r2_1 = 0;
    u32 r1_2 = 0;
    u32 r0_3 = 0;
    u32 r2_2 = 0;
    u32 r1_3 = 0;
    u32 r1_4 = 0;
    u32 r0_4 = 0;
    u32 r2_3 = 0;
    u32 r0_5 = 0;
    u32 r0_6 = 0;
    u32 r1_5 = 0;
    u32 r2_4 = 0;
    u32 r0_7 = 0;
    u32 r2_5 = 0;
    u32 r1_6 = 0;
    u32 r0_8 = 0;
    u32 r2_6 = 0;
    u32 r1_7 = 0;
    u32 r0_9 = 0;
    u32 r2_7 = 0;
    u32 r1_8 = 0;
    u32 r0_10 = 0;
    u32 r0_11 = 0;
    u32 r2_8 = 0;
    u32 zf_1 = 0;
    u32 r0_12 = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r1_1 = u32(arg0->byte_200);
    r5_1 = r0 + 0x200u;  // (from the original)
    r0_1 = arg0->word_204;
    if (r1_1 != 0) {
        r0_2 = call_00701150(r0_1, r1_1, r2, guest::cpu()->r[3]);
        r2_1 = guest::cpu()->r[2];
        r1_2 = *gptr<u32>(r0 + 0x204u);  // (from the original)
        call_00700558(r0_2, r1_2, r2_1, guest::cpu()->r[3]);
    } else {
        r0_3 = call_00615e8c(r0_1, r1_1, r2, guest::cpu()->r[3]);
        r2_2 = guest::cpu()->r[2];
        r1_3 = *gptr<u32>(r0 + 0x204u);  // (from the original)
        call_00615b2c(r0_3, r1_3, r2_2, guest::cpu()->r[3]);
    }
    r1_4 = r0 + 0x14u;  // (from the original)
    if (u32(*gptr<u8>(r5_1)) == 0) {
        r0_4 = 0x53u;  // (from the original)
    } else {
        r0_4 = *gptr<u32>(r0 + 0x204u);  // (from the original)
    }
    r2_3 = uxth(r0_4);
    r0_5 = r0 + 0x260u;  // (from the original)
    r0_6 = call_002d58b0(r0_5, r1_4, r2_3, guest::cpu()->r[3]);
    r1_5 = guest::cpu()->r[1];
    r2_4 = guest::cpu()->r[2];
    r0_7 = call_00305f44(r0_6, r1_5, r2_4, guest::cpu()->r[3]);
    r2_5 = guest::cpu()->r[2];
    if (r0_7 == u32(*gptr<u8>(r0 + 0x255u))) {  // (from the original)
        r1_6 = 1u;
    } else {
        r1_6 = 0u;
    }
    r0_8 = r0 + 0x260u;  // (from the original)
    call_002d595c(r0_8, r1_6, r2_5, guest::cpu()->r[3]);
    r2_6 = guest::cpu()->r[2];
    r1_7 = r0 + 0x208u;  // (from the original)
    r0_9 = r0 + 0x20cu;  // (from the original)
    call_002fc8e8(r0_9, r1_7, r2_6, guest::cpu()->r[3]);
    r2_7 = guest::cpu()->r[2];
    r1_8 = 0x350u;  // (from the original)
    *gptr<u16>(r1_8 + r0) = u16(0u);
    r0_10 = u32(*gptr<u8>(r0 + 0x248u));  // (from the original)
    if (r0_10 != 4u) {
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        guest::cpu()->r[1] = r1_8;
        return r0_10;
    }
    r0_11 = r0 + 0x20cu;  // (from the original)
    r0_10 = call_002fcb34(r0_11, r1_8, r2_7, guest::cpu()->r[3]);
    r1_8 = guest::cpu()->r[1];
    r2_8 = guest::cpu()->r[2];
    zf_1 = r0_10 == 0x27u;  // (from the original)
    if (!zf_1) {
        zf_1 = r0_10 == 0x28u;  // (from the original)
    }
    if (!zf_1) {
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        guest::cpu()->r[1] = r1_8;
        return r0_10;
    }
    r0_12 = r0 + 0x260u;  // (from the original)
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    return call_002e8cc8(r0_12, 0x1000613u, r2_8, guest::cpu()->r[3]);  // (from the original)
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
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r1_1 = 0;
    u32 r0_3 = 0;
    u32 zf_1 = 0;
    u32 zf_2 = 0;
    u32 r1_2 = 0;
    u32 r0_4 = 0;
    u32 r3_1 = 0;
    u32 r0_5 = 0;
    u32 r3_2 = 0;
    u32 r0_6 = 0;
    u32 r0_7 = 0;
    u32 r3_3 = 0;
    u32 r0_8 = 0;
    u32 ea_1 = 0;
    u32 r3_4 = 0;
    u32 zf_3 = 0;
    u32 r0_9 = 0;
    u32 r3_5 = 0;
    u32 r0_10 = 0;
    u32 r0_11 = 0;
    u32 r3_6 = 0;
    u32 r0_12 = 0;
    *gptr<u32>(r13 + 0xffffffe8u) = u32(r3);  // (from the original)
    r13 = r13 - 0x18;  // (from the original)
    r4 = r0;
    r5 = r1;
    r0_1 = r0 + 0x20cu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_2 = call_002fcaf4(r0_1, r1, guest::cpu()->r[2], r3);
    r1_1 = guest::cpu()->r[1];
    r3 = guest::cpu()->r[3];
    if (r0_2 != 0) {
        r13 = r13 + 0x18;  // (from the original)
        guest::cpu()->r[1] = r1_1;
        guest::cpu()->r[13] = r13;
        return r0_2;
    }
    r0_3 = u32(*gptr<u8>(r4 + 0x24au));  // (from the original)
    r7 = 0x7ffeu;  // (from the original)
    r6 = 0u;
    zf_1 = r0_3 == 1u;
    if (!zf_1) {
        zf_1 = r0_3 == 2u;
    }
    r0_2 = u32(*gptr<u8>(r4 + 0x249u));  // (from the original)
    if (zf_1) {
        goto L_1f6d6c;
    }
    zf_2 = r0_2 == 1u;
    if (!zf_2) {
        zf_2 = r0_2 == 2u;
    }
    if (!zf_2) {
        r13 = r13 + 0x18;  // (from the original)
        guest::cpu()->r[1] = r1_1;
        guest::cpu()->r[13] = r13;
        return r0_2;
    }
L_1f6d0c:;
    r1_2 = r4 + 0x208u;  // (from the original)
    r0_4 = r4 + 0x20cu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_2 = call_002fe574(r0_4, r1_2, guest::cpu()->r[2], r3);
    r1_1 = guest::cpu()->r[1];
    r3_1 = guest::cpu()->r[3];
    if (r0_2 != 0) {
        r13 = r13 + 0x18;  // (from the original)
        guest::cpu()->r[1] = r1_1;
        guest::cpu()->r[13] = r13;
        return r0_2;
    }
    r0_5 = r4 + 0x260u;  // (from the original)
    *gptr<u8>(r4 + 0x254u) = u8(r6);  // (from the original)
    guest::cpu()->r[13] = r13;
    call_002d59a4(r0_5, r1_1, guest::cpu()->r[2], r3_1);
    r3_2 = guest::cpu()->r[3];
    r0_6 = r13;
    guest::cpu()->r[13] = r13;
    r0_7 = call_002fcbb0(r0_6, r7, guest::cpu()->r[2], r3_2);
    r3_3 = guest::cpu()->r[3];
    r0_8 = r4 + 0x20cu;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_002fc8e8(r0_8, r0_7, guest::cpu()->r[2], r3_3);
    r1_1 = guest::cpu()->r[1];
    r0_2 = r13;
    if (r5 == 0) {
        r13 = r13 + 0x18;  // (from the original)
        guest::cpu()->r[1] = r1_1;
        guest::cpu()->r[13] = r13;
        return r0_2;
    }
    ea_1 = r13;
    r13 = r13 + 0x18;  // (from the original)
    r3_4 = *gptr<u32>(ea_1);
    guest::cpu()->r[13] = r13;
    return call_001f581c(r4, r1_1, guest::cpu()->r[2], r3_4);
L_1f6d6c:;
    zf_3 = r0_2 == 1u;
    if (!zf_3) {
        zf_3 = r0_2 == 2u;
    }
    if (zf_3) {
        guest::preempt();
        goto L_1f6d0c;
    }
    r0_9 = r4 + 0x260u;  // (from the original)
    *gptr<u8>(r4 + 0x254u) = u8(r6);  // (from the original)
    guest::cpu()->r[13] = r13;
    call_002d59a4(r0_9, r1_1, guest::cpu()->r[2], r3);
    r3_5 = guest::cpu()->r[3];
    r0_10 = r13;
    guest::cpu()->r[13] = r13;
    r0_11 = call_002fcbb0(r0_10, r7, guest::cpu()->r[2], r3_5);
    r3_6 = guest::cpu()->r[3];
    r0_12 = r4 + 0x20cu;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_002fc8e8(r0_12, r0_11, guest::cpu()->r[2], r3_6);
    r1_1 = guest::cpu()->r[1];
    r0_2 = r13;
    r13 = r13 + 0x18;  // (from the original)
    guest::cpu()->r[1] = r1_1;
    guest::cpu()->r[13] = r13;
    return r0_2;
}

}  // namespace d_001f6cc8
GUEST_EXPORT(0x001f6cc8, d_001f6cc8::f_001f6cc8);

// f_001f815c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001f815c {

struct __attribute__((packed)) Object_001f815c_0 {
    u32 word_0;
};
GUEST_OFFSET(Object_001f815c_0, word_0, 0x0);  // (from the original)

inline guest::global<u32, 0x00986a10> global_00986a10;  // (from the original)

void f_001f815c(gptr<Object_001f815c_0> arg0) {
    u32 r12_1 = 0;
    arg0->word_0 = u32(0x8ecf74u);  // (from the original)
    r12_1 = ~0u;
    *global_00986a10 = u32(0u);
    *gptr<u32>(0x986a10u + 4u) = u32(0u);  // (from the original)
    *gptr<u8>(0x986a10u + 8u) = u8(0xfcu);  // (from the original)
    *gptr<u32>(0x986a10u + 0x10u) = u32(0u);  // (from the original)
    *gptr<u32>(0x986a10u + 0xcu) = u32(r12_1);  // (from the original)
    *gptr<u32>(0x986a10u + 0x14u) = u32(0u);  // (from the original)
    *gptr<u8>(0x986a10u + 0x18u) = u8(0xfcu);  // (from the original)
    *gptr<u32>(0x986a10u + 0x20u) = u32(0u);  // (from the original)
    *gptr<u32>(0x986a10u + 0x1cu) = u32(r12_1);  // (from the original)
    *gptr<u32>(0x986a10u + 0x24u) = u32(0u);  // (from the original)
    *gptr<u8>(0x986a10u + 0x28u) = u8(0xfcu);  // (from the original)
    *gptr<u32>(0x986a10u + 0x30u) = u32(0u);  // (from the original)
    *gptr<u32>(0x986a10u + 0x2cu) = u32(r12_1);  // (from the original)
    *gptr<u32>(0x986a10u + 0x34u) = u32(0u);  // (from the original)
    *gptr<u8>(0x986a10u + 0x38u) = u8(0xfcu);  // (from the original)
    *gptr<u32>(0x986a10u + 0x40u) = u32(0u);  // (from the original)
    *gptr<u32>(0x986a10u + 0x3cu) = u32(r12_1);  // (from the original)
    *gptr<u32>(0x986a10u + 0x44u) = u32(0u);  // (from the original)
    *gptr<u8>(0x986a10u + 0x48u) = u8(0xfcu);  // (from the original)
    *gptr<u32>(0x986a10u + 0x4cu) = u32(r12_1);  // (from the original)
    guest::cpu()->r[1] = 0x986a10u;  // (from the original)
    return;
}

}  // namespace d_001f815c
GUEST_EXPORT(0x001f815c, d_001f815c::f_001f815c);

// f_001f8798: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001f8798 {

inline guest::global<u32, 0x001f8888> global_001f8888;  // (from the original)
inline guest::global<u32, 0x001f888c> global_001f888c;  // (from the original)
inline constexpr guest::Function<0x002b6a00, u32(u32, u32, u32, u32)> call_002b6a00;  // (from the original)
inline constexpr guest::Function<0x002f6a30, u32(u32, u32, u32, u32)> call_002f6a30;  // (from the original)
inline constexpr guest::Function<0x002f6e98, u32(u32, u32, u32, u32)> call_002f6e98;  // (from the original)
inline constexpr guest::Function<0x002f7508, u32(u32, u32, u32, u32)> call_002f7508;  // (from the original)

u32 f_001f8798(u32 r0, u32 r1) {
    u32 r13 = guest::cpu()->r[13];
    u32 r3_1 = 0;
    float S0_1 = 0;
    float S1_1 = 0;
    float S2_1 = 0;
    float S3_1 = 0;
    float S4_1 = 0;
    float S5_1 = 0;
    u32 r3_2 = 0;
    u32 r2_1 = 0;
    u32 r1_1 = 0;
    u32 r0_1 = 0;
    u32 r2_2 = 0;
    u32 r3_3 = 0;
    float S2_2 = 0;
    float S3_2 = 0;
    float S4_2 = 0;
    float S5_2 = 0;
    float S0_2 = 0;
    float S1_2 = 0;
    u32 r0_2 = 0;
    u32 r1_2 = 0;
    u32 r0_3 = 0;
    u32 r3_4 = 0;
    float S0_3 = 0;
    float S1_3 = 0;
    float S2_3 = 0;
    float S3_3 = 0;
    float S4_3 = 0;
    float S5_3 = 0;
    u32 r1_3 = 0;
    u32 r0_4 = 0;
    u32 r2_3 = 0;
    u32 r3_5 = 0;
    float S0_4 = 0;
    float S1_4 = 0;
    float S2_4 = 0;
    float S3_4 = 0;
    float S4_4 = 0;
    float S5_4 = 0;
    u32 r0_5 = 0;
    float S0_5 = 0;
    float S1_5 = 0;
    r13 = r13 - 0x50u;  // (from the original)
    r3_1 = 0x84839cu + 0xf0u;  // (from the original)
    S0_1 = std::bit_cast<float>(*gptr<u32>(r3_1));
    S1_1 = std::bit_cast<float>(*gptr<u32>(r3_1 + 4));
    S2_1 = std::bit_cast<float>(*gptr<u32>(r3_1 + 8));
    S3_1 = std::bit_cast<float>(*gptr<u32>(r3_1 + 0xc));  // (from the original)
    S4_1 = std::bit_cast<float>(*gptr<u32>(r3_1 + 0x10));  // (from the original)
    S5_1 = std::bit_cast<float>(*gptr<u32>(r3_1 + 0x14));  // (from the original)
    r3_2 = r13 + 0x24u;  // (from the original)
    *gptr<u32>(r3_2) = u32(std::bit_cast<u32>(S0_1));
    *gptr<u32>(r3_2 + 4) = u32(std::bit_cast<u32>(S1_1));
    *gptr<u32>(r3_2 + 8) = u32(std::bit_cast<u32>(S2_1));
    *gptr<u32>(r3_2 + 0xc) = u32(std::bit_cast<u32>(S3_1));  // (from the original)
    *gptr<u32>(r3_2 + 0x10) = u32(std::bit_cast<u32>(S4_1));  // (from the original)
    *gptr<u32>(r3_2 + 0x14) = u32(std::bit_cast<u32>(S5_1));  // (from the original)
    r2_1 = *gptr<u32>(0x84839cu + 0x108u);  // (from the original)
    *gptr<u32>(r13 + 0x20u) = u32(r0 + 0x24u);  // (from the original)
    *gptr<u32>(r13 + 0x1cu) = u32(r1);  // (from the original)
    *gptr<u32>(r13 + 0x3cu) = u32(r2_1);  // (from the original)
    r1_1 = r13 + 0x1cu;  // (from the original)
    r0_1 = r0 + 0x2e4u;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_1;
    guest::cpu()->s[1] = S1_1;
    guest::cpu()->s[2] = S2_1;
    guest::cpu()->s[3] = S3_1;
    guest::cpu()->s[4] = S4_1;
    guest::cpu()->s[5] = S5_1;
    call_002f6e98(r0_1, r1_1, 0u, r3_2);
    r2_2 = guest::cpu()->r[2];
    r3_3 = guest::cpu()->r[3];
    S2_2 = guest::cpu()->s[2];
    S3_2 = guest::cpu()->s[3];
    S4_2 = guest::cpu()->s[4];
    S5_2 = guest::cpu()->s[5];
    S0_2 = std::bit_cast<float>(*global_001f8888);
    S1_2 = std::bit_cast<float>(*global_001f888c);
    *gptr<u32>(r0 + 0x3b8u) = u32(*gptr<u32>(r0 + 0x3b8u) | 0x40u);  // (from the original)
    *gptr<u32>(r13) = u32(0u);
    *gptr<u32>(r13 + 4u) = u32(0u);
    *gptr<u32>(r13 + 8u) = u32(0u);
    *gptr<u32>(r13 + 0xcu) = u32(0u);  // (from the original)
    *gptr<u32>(r13 + 0x10u) = u32(0u);  // (from the original)
    *gptr<u32>(r13 + 0x14u) = u32(0u);  // (from the original)
    *gptr<u32>(r13 + 0x18u) = u32(0u);  // (from the original)
    r0_2 = r13 + 8u;
    *gptr<u32>(r0_2) = u32(std::bit_cast<u32>(S0_2));
    *gptr<u32>(r0_2 + 4) = u32(std::bit_cast<u32>(S1_2));
    r1_2 = r13;
    *gptr<u32>(r13) = u32(*gptr<u32>(r0 + 0x1c4u));  // (from the original)
    *gptr<u32>(r13 + 4u) = u32(*gptr<u32>(r0 + 0x200u));  // (from the original)
    r0_3 = r0 + 0x204u;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_2;
    guest::cpu()->s[1] = S1_2;
    guest::cpu()->s[2] = S2_2;
    guest::cpu()->s[3] = S3_2;
    guest::cpu()->s[4] = S4_2;
    guest::cpu()->s[5] = S5_2;
    call_002b6a00(r0_3, r1_2, r2_2, r3_3);
    r3_4 = guest::cpu()->r[3];
    S0_3 = guest::cpu()->s[0];
    S1_3 = guest::cpu()->s[1];
    S2_3 = guest::cpu()->s[2];
    S3_3 = guest::cpu()->s[3];
    S4_3 = guest::cpu()->s[4];
    S5_3 = guest::cpu()->s[5];
    r1_3 = r0 + 0x204u;  // (from the original)
    r0_4 = r0 + 0x2e4u;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_3;
    guest::cpu()->s[1] = S1_3;
    guest::cpu()->s[2] = S2_3;
    guest::cpu()->s[3] = S3_3;
    guest::cpu()->s[4] = S4_3;
    guest::cpu()->s[5] = S5_3;
    call_002f7508(r0_4, r1_3, 1u, r3_4);
    r2_3 = guest::cpu()->r[2];
    r3_5 = guest::cpu()->r[3];
    S0_4 = guest::cpu()->s[0];
    S1_4 = guest::cpu()->s[1];
    S2_4 = guest::cpu()->s[2];
    S3_4 = guest::cpu()->s[3];
    S4_4 = guest::cpu()->s[4];
    S5_4 = guest::cpu()->s[5];
    *gptr<u32>(r0 + 0x2d0u) = u32(0x1000413u);  // (from the original)
    *gptr<u8>(r0 + 0x2deu) = u8(1u);  // (from the original)
    *gptr<u32>(r0 + 0x2d4u) = u32(0x1000413u - 0x7au);  // (from the original)
    *gptr<u8>(r0 + 0x2dfu) = u8(1u);  // (from the original)
    r0_5 = r0 + 0x2e4u;  // (from the original)
    *gptr<u8>(r0 + 0x2e0u) = u8(1u);  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_4;
    guest::cpu()->s[1] = S1_4;
    guest::cpu()->s[2] = S2_4;
    guest::cpu()->s[3] = S3_4;
    guest::cpu()->s[4] = S4_4;
    guest::cpu()->s[5] = S5_4;
    call_002f6a30(r0_5, 0u, r2_3, r3_5);
    S0_5 = guest::cpu()->s[0];
    S1_5 = guest::cpu()->s[1];
    *gptr<u16>(0x3b4u + r0) = u16(3u);  // (from the original)
    r13 = r13 + 0x50u;  // (from the original)
    guest::cpu()->r[1] = 0x3b4u;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_5;
    guest::cpu()->s[1] = S1_5;
    return 3u;
}

}  // namespace d_001f8798
GUEST_EXPORT(0x001f8798, d_001f8798::f_001f8798);

// f_001f891c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001f891c {

inline guest::global<u32, 0x001f8a78> global_001f8a78;  // (from the original)
inline guest::global<u32, 0x001f8a7c> global_001f8a7c;  // (from the original)
inline constexpr guest::Function<0x002b6a00, u32(u32, u32, u32, u32)> call_002b6a00;  // (from the original)

u32 f_001f891c(u32 r0, u32 r1) {
    u32 r13 = guest::cpu()->r[13];
    u32 r1_1 = 0;
    u32 r1_2 = 0;
    u32 r1_3 = 0;
    u32 r1_4 = 0;
    u32 r1_5 = 0;
    u32 r1_6 = 0;
    u32 r1_7 = 0;
    u32 r1_8 = 0;
    u32 r1_9 = 0;
    u32 r1_10 = 0;
    float S0_1 = 0;
    float S1_1 = 0;
    u32 r1_11 = 0;
    u32 r2_1 = 0;
    u32 r0_1 = 0;
    u32 r1_12 = 0;
    u32 r0_2 = 0;
    u32 r1_13 = 0;
    float S0_2 = 0;
    float S1_2 = 0;
    r13 = r13 - 0x20u;  // (from the original)
    if (r1 != 0) {
        if (r1 == 1u) {
            goto L_1f8990;
        }
        if (r1 != 2u) {
            goto L_1f8a2c;
        }
        goto L_1f89e0;
    }
    r1_1 = *gptr<u32>(r0 + 0x1c8u);  // (from the original)
    *gptr<u8>(r1_1 + 0xb7u) = u8(u32(*gptr<u8>(r1_1 + 0xb7u)) & 0xfeu | 1u);  // (from the original)
    r1_2 = *gptr<u32>(r0 + 0x1ccu);  // (from the original)
    *gptr<u8>(r1_2 + 0xb7u) = u8(u32(*gptr<u8>(r1_2 + 0xb7u)) & 0xfeu);  // (from the original)
    r1_3 = *gptr<u32>(r0 + 0x1d0u);  // (from the original)
    *gptr<u8>(r1_3 + 0xb7u) = u8(u32(*gptr<u8>(r1_3 + 0xb7u)) & 0xfeu);  // (from the original)
    *gptr<u32>(r0 + 0x1f8u) = u32(*gptr<u32>(r0 + 0x1e0u));  // (from the original)
    *gptr<u32>(r0 + 0x1fcu) = u32(*gptr<u32>(r0 + 0x1e4u));  // (from the original)
    r1_4 = *gptr<u32>(r0 + 0x1d4u);  // (from the original)
    goto L_1f89d8;
L_1f8990:;
    r1_5 = *gptr<u32>(r0 + 0x1c8u);  // (from the original)
    *gptr<u8>(r1_5 + 0xb7u) = u8(u32(*gptr<u8>(r1_5 + 0xb7u)) & 0xfeu);  // (from the original)
    r1_6 = *gptr<u32>(r0 + 0x1ccu);  // (from the original)
    *gptr<u8>(r1_6 + 0xb7u) = u8(u32(*gptr<u8>(r1_6 + 0xb7u)) & 0xfeu | 1u);  // (from the original)
    r1_7 = *gptr<u32>(r0 + 0x1d0u);  // (from the original)
    *gptr<u8>(r1_7 + 0xb7u) = u8(u32(*gptr<u8>(r1_7 + 0xb7u)) & 0xfeu);  // (from the original)
    *gptr<u32>(r0 + 0x1f8u) = u32(*gptr<u32>(r0 + 0x1e8u));  // (from the original)
    *gptr<u32>(r0 + 0x1fcu) = u32(*gptr<u32>(r0 + 0x1ecu));  // (from the original)
    r1_4 = *gptr<u32>(r0 + 0x1d8u);  // (from the original)
L_1f89d8:;
    *gptr<u32>(r0 + 0x200u) = u32(r1_4);  // (from the original)
    goto L_1f8a2c;
L_1f89e0:;
    r1_8 = *gptr<u32>(r0 + 0x1c8u);  // (from the original)
    *gptr<u8>(r1_8 + 0xb7u) = u8(u32(*gptr<u8>(r1_8 + 0xb7u)) & 0xfeu);  // (from the original)
    r1_9 = *gptr<u32>(r0 + 0x1ccu);  // (from the original)
    *gptr<u8>(r1_9 + 0xb7u) = u8(u32(*gptr<u8>(r1_9 + 0xb7u)) & 0xfeu);  // (from the original)
    r1_10 = *gptr<u32>(r0 + 0x1d0u);  // (from the original)
    *gptr<u8>(r1_10 + 0xb7u) = u8(u32(*gptr<u8>(r1_10 + 0xb7u)) & 0xfeu | 1u);  // (from the original)
    *gptr<u32>(r0 + 0x1f8u) = u32(*gptr<u32>(r0 + 0x1f0u));  // (from the original)
    *gptr<u32>(r0 + 0x1fcu) = u32(*gptr<u32>(r0 + 0x1f4u));  // (from the original)
    *gptr<u32>(r0 + 0x200u) = u32(*gptr<u32>(r0 + 0x1dcu));  // (from the original)
L_1f8a2c:;
    *gptr<u32>(r13 + 4u) = u32(0u);
    *gptr<u32>(r13 + 8u) = u32(0u);
    *gptr<u32>(r13 + 0xcu) = u32(0u);  // (from the original)
    *gptr<u32>(r13 + 0x10u) = u32(0u);  // (from the original)
    *gptr<u32>(r13 + 0x14u) = u32(0u);  // (from the original)
    *gptr<u32>(r13 + 0x18u) = u32(0u);  // (from the original)
    S0_1 = std::bit_cast<float>(*global_001f8a78);
    S1_1 = std::bit_cast<float>(*global_001f8a7c);
    *gptr<u32>(r13) = u32(*gptr<u32>(r0 + 0x1c4u));  // (from the original)
    r1_11 = *gptr<u32>(r0 + 0x200u);  // (from the original)
    r2_1 = r13 + 8u;
    r0_1 = r0 + 0x204u;  // (from the original)
    *gptr<u32>(r13 + 4u) = u32(r1_11);
    r1_12 = r13;
    *gptr<u32>(r2_1) = u32(std::bit_cast<u32>(S0_1));
    *gptr<u32>(r2_1 + 4) = u32(std::bit_cast<u32>(S1_1));
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_1;
    guest::cpu()->s[1] = S1_1;
    r0_2 = call_002b6a00(r0_1, r1_12, r2_1, 0u);
    r1_13 = guest::cpu()->r[1];
    S0_2 = guest::cpu()->s[0];
    S1_2 = guest::cpu()->s[1];
    r13 = r13 + 0x20u;  // (from the original)
    guest::cpu()->r[1] = r1_13;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_2;
    guest::cpu()->s[1] = S1_2;
    return r0_2;
}

}  // namespace d_001f891c
GUEST_EXPORT(0x001f891c, d_001f891c::f_001f891c);

// f_001f8bac: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001f8bac {

inline guest::global<u32, 0x0014f898> global_0014f898;  // (from the original)
inline guest::global<u32, 0x0094edc4> global_0094edc4;  // (from the original)
inline constexpr guest::Function<0x0014f89c, u32(u32, u32, u32, u32)> call_0014f89c;  // (from the original)
inline constexpr guest::Function<0x002f74c8, u32(u32, u32, u32, u32)> call_002f74c8;  // (from the original)

u32 f_001f8bac(u32 r0, u32 r1, u32 r2) {
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    goto L_1f8bac;
L_1f8bac:;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r0_1 = call_002f74c8(r0, r1, r2, guest::cpu()->r[3]);
    r1_1 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    if (r0_1 != 0) {
        r0_2 = call_002f74c8(r0_1, r1_1, r2_1, guest::cpu()->r[3]);
        r1_1 = guest::cpu()->r[1];
        if (r0_2 == 0x71u) {  // (from the original)
            goto L_1f8bf8;
        }
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        guest::cpu()->r[1] = r1_1;
        return 0u;
    }
    r0_3 = *global_0094edc4;
    if (r0_3 == 0) {
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        guest::cpu()->r[1] = r1_1;
        return 0u;
    }
    if (s32(r0) >= s32(3u)) {
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        guest::cpu()->r[1] = r1_1;
        return 0u;
    }
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    return guest::call_address<u32>(*global_0014f898, r0_3, r0, r2_1, guest::cpu()->r[3]);
L_1f8bf8:;
    r0_4 = *gptr<u32>(0x94edc4u + 4u);  // (from the original)
    if (r0_4 == 0) {
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        guest::cpu()->r[1] = r1_1;
        return 0u;
    }
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    return call_0014f89c(r0_4, r0, r1, guest::cpu()->r[3]);
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

inline guest::global<u16, 0x00887314> global_00887314;  // (from the original)
inline guest::global<u32, 0x0094f344> global_0094f344;  // (from the original)
inline constexpr guest::Function<0x002b7f74, u32(u32, u32, u32, u32)> call_002b7f74;  // (from the original)
inline constexpr guest::Function<0x00529c80, u32(u32, u32, u32, u32)> call_00529c80;  // (from the original)

u32 f_001f9290(u32 r0, gptr<Object_001f9290_1> arg1, u32 r2, u32 r3) {
    u32 r1 = arg1.addr();
    u32 r2_1 = 0;
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r1_1 = 0;
    u32 r2_2 = 0;
    u32 r3_1 = 0;
    u32 r0_3 = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    *global_0094f344 = u32(r2);
    *gptr<u32>(0x94f344u + 4) = u32(r3);  // (from the original)
    *gptr<u32>(0x94f344u + 8) = u32(r1);  // (from the original)
    r2_1 = arg1->word_8;
    r0_1 = u32(*global_00887314);
    r0_2 = call_00529c80(r0_1, r0, r2_1, 0u);
    r1_1 = guest::cpu()->r[1];
    r2_2 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    if (r0_2 != 0) {
        r0_3 = *gptr<u32>(r1 + 8u);
        call_002b7f74(r0_3, r1_1, r2_2, r3_1);
        r1_1 = guest::cpu()->r[1];
    }
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1_1;
    return r0_2;
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
    u32 r2_1 = 0;
    u32 r1_1 = 0;
    r2_1 = arg0->word_f0;
    if (s32(r2_1) >= s32(arg0->word_f4)) {
        guest::cpu()->r[1] = r1;
        return;
    }
    *gptr<u32>(arg0->word_f8 + (r2_1 << 2)) = u32(r1);
    r1_1 = arg0->word_f0 + 1u;
    arg0->word_f0 = u32(r1_1);
    guest::cpu()->r[1] = r1_1;
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

inline guest::global<u32, 0x001f99a8> global_001f99a8;  // (from the original)
inline constexpr guest::Function<0x004b9b64, u32(u32, u32, u32, u32)> call_004b9b64;  // (from the original)
inline constexpr guest::Function<0x00568c10, u32(u32, u32, u32, u32)> call_00568c10;  // (from the original)
inline constexpr guest::Function<0x00569420, u32(u32, u32, u32, u32)> call_00569420;  // (from the original)
inline constexpr guest::Function<0x00569508, u32(u32, u32, u32, u32)> call_00569508;  // (from the original)
inline constexpr guest::Function<0x005697e0, u32(u32, u32, u32, u32)> call_005697e0;  // (from the original)
inline constexpr guest::Function<0x00816c20, u32(u32, u32, u32, u32)> call_00816c20;  // (from the original)

u32 f_001f9884(gptr<Object_001f9884_0> arg0, u32 r1, float S0) {
    u32 r0 = arg0.addr();
    u32 r3_1 = 0;
    u32 r0_1 = 0;
    u32 r2_1 = 0;
    u32 r0_2 = 0;
    u32 zf_1 = 0;
    u32 r5_1 = 0;
    u32 r0_3 = 0;
    u32 r1_1 = 0;
    u32 r2_2 = 0;
    u32 r3_2 = 0;
    float S0_1 = 0;
    u32 r1_2 = 0;
    u32 r2_3 = 0;
    u32 r3_3 = 0;
    float S0_2 = 0;
    u32 r0_4 = 0;
    u32 r2_4 = 0;
    u32 r3_4 = 0;
    float S0_3 = 0;
    u32 r0_5 = 0;
    u32 r3_5 = 0;
    float S0_4 = 0;
    u32 r6_1 = 0;
    u32 r0_6 = 0;
    u32 r1_3 = 0;
    u32 r2_5 = 0;
    u32 r1_4 = 0;
    float S0_5 = 0;
    u32 r1_5 = 0;
    u32 r2_6 = 0;
    u32 r3_6 = 0;
    float S0_6 = 0;
    u32 r1_6 = 0;
    u32 r2_7 = 0;
    u32 r3_7 = 0;
    float S0_7 = 0;
    u32 r0_7 = 0;
    u32 r2_8 = 0;
    u32 r3_8 = 0;
    float S0_8 = 0;
    u32 r0_8 = 0;
    u32 r3_9 = 0;
    float S0_9 = 0;
    u32 r6_2 = 0;
    u32 r0_9 = 0;
    u32 r1_7 = 0;
    u32 r2_9 = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r3_1 = arg0->word_20;
    r0_1 = *gptr<u32>(0x846ef8u + 0xcu);  // (from the original)
    if (r3_1 == *gptr<u32>(0x846ef8u + 8u)) {  // (from the original)
        if (r3_1 == 0) {
            r2_1 = arg0->word_24 | r0_1;
            if ((r2_1 & 1u) == 0) {
                goto L_1f98fc;
            }
        }
        r2_1 = *gptr<u32>(r0 + 0x24u);  // (from the original)
        if (r2_1 == r0_1) {
            goto L_1f98fc;
        }
    }
    r0_2 = *gptr<u32>(0x846ef8u + 0x14u);  // (from the original)
    if (r3_1 != *gptr<u32>(0x846ef8u + 0x10u)) {  // (from the original)
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->s[0] = S0;
        return 0u;
    }
    if (r3_1 == 0) {
        r2_1 = *gptr<u32>(r0 + 0x24u) | r0_2;  // (from the original)
        if ((r2_1 & 1u) == 0) {
            goto L_1f98fc;
        }
    }
    r2_1 = *gptr<u32>(r0 + 0x24u);  // (from the original)
    if (r2_1 != r0_2) {
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->s[0] = S0;
        return 0u;
    }
L_1f98fc:;
    zf_1 = r1 == 0;
    r5_1 = r0 + 0x494u;  // (from the original)
    r0_3 = r0 + 0x38u;  // (from the original)
    if (zf_1) {
        guest::cpu()->s[0] = S0;
        call_004b9b64(r0_3, r5_1, r2_1, r3_1);
        r1_1 = guest::cpu()->r[1];
        r2_2 = guest::cpu()->r[2];
        r3_2 = guest::cpu()->r[3];
        S0_1 = std::bit_cast<float>(*global_001f99a8);
        guest::cpu()->s[0] = S0_1;
        call_005697e0(r5_1, r1_1, r2_2, r3_2);
        r1_2 = guest::cpu()->r[1];
        r2_3 = guest::cpu()->r[2];
        r3_3 = guest::cpu()->r[3];
        S0_2 = guest::cpu()->s[0];
        r0_4 = r0 + 0x38u;  // (from the original)
        guest::cpu()->s[0] = S0_2;
        call_00568c10(r0_4, r1_2, r2_3, r3_3);
        r2_4 = guest::cpu()->r[2];
        r3_4 = guest::cpu()->r[3];
        S0_3 = guest::cpu()->s[0];
        r0_5 = r0 + 0x38u;  // (from the original)
        guest::cpu()->s[0] = S0_3;
        call_00569420(r0_5, r5_1, r2_4, r3_4);
        r3_5 = guest::cpu()->r[3];
        S0_4 = guest::cpu()->s[0];
        r6_1 = 0x846ef8u + 8u;  // (from the original)
        r0_6 = r0 + 0x14u;  // (from the original)
        r1_3 = *gptr<u32>(r6_1);
        r2_5 = *gptr<u32>(r6_1 + 4);
        guest::cpu()->s[0] = S0_4;
        call_00816c20(r0_6, r1_3, r2_5, r3_5);
        r1_4 = guest::cpu()->r[1];
        S0_5 = guest::cpu()->s[0];
    } else {
        guest::cpu()->s[0] = S0;
        call_004b9b64(r0_3, r5_1, r2_1, r3_1);
        r1_5 = guest::cpu()->r[1];
        r2_6 = guest::cpu()->r[2];
        r3_6 = guest::cpu()->r[3];
        S0_6 = guest::cpu()->s[0];
        guest::cpu()->s[0] = S0_6;
        call_00569508(r5_1, r1_5, r2_6, r3_6);
        r1_6 = guest::cpu()->r[1];
        r2_7 = guest::cpu()->r[2];
        r3_7 = guest::cpu()->r[3];
        S0_7 = guest::cpu()->s[0];
        r0_7 = r0 + 0x38u;  // (from the original)
        guest::cpu()->s[0] = S0_7;
        call_00568c10(r0_7, r1_6, r2_7, r3_7);
        r2_8 = guest::cpu()->r[2];
        r3_8 = guest::cpu()->r[3];
        S0_8 = guest::cpu()->s[0];
        r0_8 = r0 + 0x38u;  // (from the original)
        guest::cpu()->s[0] = S0_8;
        call_00569420(r0_8, r5_1, r2_8, r3_8);
        r3_9 = guest::cpu()->r[3];
        S0_9 = guest::cpu()->s[0];
        r6_2 = 0x846ef8u + 0x10u;  // (from the original)
        r0_9 = r0 + 0x14u;  // (from the original)
        r1_7 = *gptr<u32>(r6_2);
        r2_9 = *gptr<u32>(r6_2 + 4);
        guest::cpu()->s[0] = S0_9;
        call_00816c20(r0_9, r1_7, r2_9, r3_9);
        r1_4 = guest::cpu()->r[1];
        S0_5 = guest::cpu()->s[0];
    }
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1_4;
    guest::cpu()->s[0] = S0_5;
    return 1u;
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

inline guest::global<u32, 0x001f99e0> global_001f99e0;  // (from the original)
inline constexpr guest::Function<0x00568c10, u32(u32, u32, u32, u32)> call_00568c10;  // (from the original)

u32 f_001f99b4(gptr<Object_001f99b4_0> arg0, gptr<Object_001f99b4_1> arg1) {
    u32 r0 = arg0.addr();
    u32 r2_1 = 0;
    float S2_1 = 0;
    float S0_1 = 0;
    float S1_1 = 0;
    u32 r3_1 = 0;
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    r2_1 = arg0->word_4bc;
    S2_1 = std::bit_cast<float>(*global_001f99e0);
    S0_1 = std::bit_cast<float>(arg1->word_0);
    S1_1 = std::bit_cast<float>(arg1->word_4);
    r3_1 = r2_1 + 0x28u;  // (from the original)
    r0_1 = r0 + 0x38u;  // (from the original)
    *gptr<u32>(r3_1) = u32(std::bit_cast<u32>(S0_1));
    *gptr<u32>(r3_1 + 4) = u32(std::bit_cast<u32>(S1_1));
    *gptr<u32>(r3_1 + 8) = u32(std::bit_cast<u32>(S2_1));
    r1_1 = u32(*gptr<u8>(r2_1 + 0xb7u)) & 0xcfu;  // (from the original)
    *gptr<u8>(r2_1 + 0xb7u) = u8(r1_1);  // (from the original)
    guest::cpu()->s[0] = S0_1;
    guest::cpu()->s[1] = S1_1;
    guest::cpu()->s[2] = S2_1;
    return call_00568c10(r0_1, r1_1, r2_1, r3_1);
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
    u32 r0 = arg0.addr();
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r1_1 = 0;
    u32 r0_1 = 0;
    u32 ea_1 = 0;
    u32 ea_2 = 0;
    u32 r2_2 = 0;
    r2_1 = arg1->word_0;
    r3_1 = arg1->word_4;
    r1_1 = arg0->word_4bc;
    r0_1 = r0 + 0x38u;  // (from the original)
    ea_1 = r1_1 + 0x30u;  // (from the original)
    *gptr<u32>(ea_1) = u32(arg1->word_8);
    ea_2 = r1_1 + 0x28u;  // (from the original)
    *gptr<u32>(ea_2) = u32(r2_1);
    *gptr<u32>(ea_2 + 4) = u32(r3_1);
    r2_2 = u32(*gptr<u8>(r1_1 + 0xb7u)) & 0xcfu;  // (from the original)
    *gptr<u8>(r1_1 + 0xb7u) = u8(r2_2);  // (from the original)
    return call_00568c10(r0_1, r1_1, r2_2, r3_1);
}

}  // namespace d_001f99e4
GUEST_EXPORT(0x001f99e4, d_001f99e4::f_001f99e4);

// f_001f9a08: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001f9a08 {

inline guest::global<u32, 0x00846f10> global_00846f10;  // (from the original)
inline constexpr guest::Function<0x00569420, u32(u32, u32, u32, u32)> call_00569420;  // (from the original)
inline constexpr guest::Function<0x00816c20, u32(u32, u32, u32, u32)> call_00816c20;  // (from the original)

u32 f_001f9a08(u32 r0) {
    u32 r2 = 0;
    u32 r3 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r13 = guest::cpu()->r[13];
    u32 r1_1 = 0;
    u32 r0_1 = 0;
    u32 r1_2 = 0;
    u32 r2_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r1_3 = 0;
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
        r1_1 = *gptr<u32>(r6 + (r4 << 2));
        if (u32(*gptr<u8>(r1_1 + 0x1cu)) != 0) {  // (from the original)
            r0_1 = r5 + 0x38u;  // (from the original)
            guest::cpu()->r[13] = r13;
            call_00569420(r0_1, r1_1, r2, r3);
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
        }
        r4 = r4 + 1u;
        guest::preempt();
    } while (r4 < 6u);
    r1_2 = *global_00846f10;
    r2_1 = *gptr<u32>(0x846f10u + 4);  // (from the original)
    r0_2 = r5 + 0x14u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_3 = call_00816c20(r0_2, r1_2, r2_1, r3);
    r1_3 = guest::cpu()->r[1];
    r13 = r13 + 0x28u;  // (from the original)
    guest::cpu()->r[1] = r1_3;
    guest::cpu()->r[13] = r13;
    return r0_3;
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
    u32 r0 = arg0.addr();
    u32 r3_1 = 0;
    u32 r1_1 = 0;
    u32 ea_1 = 0;
    u32 r1_2 = 0;
    r3_1 = arg0->word_20;
    r1_1 = *gptr<u32>(0x846ef8u + 0xcu);  // (from the original)
    if (r3_1 == *gptr<u32>(0x846ef8u + 8u)) {  // (from the original)
        if (r3_1 == 0) {
            if (((arg0->word_24 | r1_1) & 1u) == 0) {
                guest::cpu()->r[1] = r1_1;
                return 1u;
            }
        }
        if (*gptr<u32>(r0 + 0x24u) == r1_1) {  // (from the original)
            guest::cpu()->r[1] = r1_1;
            return 1u;
        }
    }
    ea_1 = 0x846ef8u + 0x10u;  // (from the original)
    r1_2 = *gptr<u32>(ea_1 + 4u);
    if (r3_1 != *gptr<u32>(ea_1)) {
        guest::cpu()->r[1] = r1_2;
        return 0u;
    }
    if (r3_1 == 0) {
        if (((*gptr<u32>(r0 + 0x24u) | r1_2) & 1u) == 0) {  // (from the original)
            guest::cpu()->r[1] = r1_2;
            return 1u;
        }
    }
    if (*gptr<u32>(r0 + 0x24u) != r1_2) {  // (from the original)
        guest::cpu()->r[1] = r1_2;
        return 0u;
    }
    guest::cpu()->r[1] = r1_2;
    return 1u;
}

}  // namespace d_001f9a84
GUEST_EXPORT(0x001f9a84, d_001f9a84::f_001f9a84);

// f_001f9b08: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001f9b08 {

inline guest::global<u32, 0x00846f18> global_00846f18;  // (from the original)
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
    u32 r1_1 = 0;
    u32 r0_1 = 0;
    u32 r1_2 = 0;
    u32 r2_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r1_3 = 0;
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
        r1_1 = *gptr<u32>(r7 + (r4 << 2));
        if (u32(*gptr<u8>(r1_1 + 0x1cu)) != 0) {  // (from the original)
            r0_1 = r5 + 0x38u;  // (from the original)
            guest::cpu()->r[13] = r13;
            call_00569420(r0_1, r1_1, r2, r3);
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
        }
        r4 = r4 + 1u;
        guest::preempt();
    } while (r4 < 6u);
    *gptr<u8>(r5 + 0x4d3u) = u8(r6);  // (from the original)
    r1_2 = *global_00846f18;
    r2_1 = *gptr<u32>(0x846f18u + 4);  // (from the original)
    r0_2 = r5 + 0x14u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_3 = call_00816c20(r0_2, r1_2, r2_1, r3);
    r1_3 = guest::cpu()->r[1];
    r13 = r13 + 0x30u;  // (from the original)
    guest::cpu()->r[1] = r1_3;
    guest::cpu()->r[13] = r13;
    return r0_3;
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

inline guest::global<u32, 0x00846f08> global_00846f08;  // (from the original)
inline constexpr guest::Function<0x004b9b64, u32(u32, u32, u32, u32)> call_004b9b64;  // (from the original)
inline constexpr guest::Function<0x00568c10, u32(u32, u32, u32, u32)> call_00568c10;  // (from the original)
inline constexpr guest::Function<0x00569420, u32(u32, u32, u32, u32)> call_00569420;  // (from the original)
inline constexpr guest::Function<0x00569508, u32(u32, u32, u32, u32)> call_00569508;  // (from the original)
inline constexpr guest::Function<0x006d1e64, u32(u32, u32, u32, u32)> call_006d1e64;  // (from the original)
inline constexpr guest::Function<0x00816c20, u32(u32, u32, u32, u32)> call_00816c20;  // (from the original)

u32 f_001fa354(gptr<Object_001fa354_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r2 = 0;
    u32 r3 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r13 = guest::cpu()->r[13];
    u32 ea_1 = 0;
    u32 ea_2 = 0;
    u32 r1_1 = 0;
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r0_4 = 0;
    u32 r1_2 = 0;
    u32 r2_2 = 0;
    u32 r3_2 = 0;
    u32 r1_3 = 0;
    u32 r2_3 = 0;
    u32 r3_3 = 0;
    u32 r0_5 = 0;
    u32 r2_4 = 0;
    u32 r3_4 = 0;
    u32 r0_6 = 0;
    u32 r3_5 = 0;
    u32 r1_4 = 0;
    u32 r2_5 = 0;
    u32 r0_7 = 0;
    u32 r0_8 = 0;
    u32 r1_5 = 0;
    r5 = r0;
    r13 = r13 - 0x30u;  // (from the original)
    r7 = 0u;
    arg0->byte_4d1 = u8(r7);
    arg0->byte_4d0 = u8(r7);
    r2 = r5 + 0x41cu;  // (from the original)
    r6 = r5 + 0x444u;  // (from the original)
    ea_1 = r13;
    *gptr<u32>(ea_1) = u32(r0 + 0x3ccu);  // (from the original)
    *gptr<u32>(ea_1 + 4) = u32(r5 + 0x3f4u);  // (from the original)
    *gptr<u32>(ea_1 + 8) = u32(r2);
    *gptr<u32>(ea_1 + 0xc) = u32(r6);  // (from the original)
    r3 = r5 + 0x46cu;  // (from the original)
    ea_2 = r13 + 0x10u;  // (from the original)
    *gptr<u32>(ea_2) = u32(r3);
    *gptr<u32>(ea_2 + 4) = u32(r5 + 0x494u);  // (from the original)
    r4 = r7;
    r8 = r13;
    do {
L_1fa3a8:;
        r1_1 = *gptr<u32>(r8 + (r4 << 2));
        r0_1 = u32(*gptr<u8>(r1_1 + 0x1cu));  // (from the original)
        if (r0_1 != 0) {
            r0_2 = r5 + 0x38u;  // (from the original)
            guest::cpu()->r[13] = r13;
            r0_1 = call_00569420(r0_2, r1_1, r2, r3);
            r1_1 = guest::cpu()->r[1];
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
        }
        r4 = r4 + 1u;
        guest::preempt();
    } while (r4 < 6u);
    guest::cpu()->r[13] = r13;
    r0_3 = call_006d1e64(r0_1, r1_1, r2, r3);
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    *gptr<u8>(r0_3 + 0x40u) = u8(r7);  // (from the original)
    r0_4 = r5 + 0x38u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_004b9b64(r0_4, r6, r2_1, r3_1);
    r1_2 = guest::cpu()->r[1];
    r2_2 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    call_00569508(r6, r1_2, r2_2, r3_2);
    r1_3 = guest::cpu()->r[1];
    r2_3 = guest::cpu()->r[2];
    r3_3 = guest::cpu()->r[3];
    r0_5 = r5 + 0x38u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_00568c10(r0_5, r1_3, r2_3, r3_3);
    r2_4 = guest::cpu()->r[2];
    r3_4 = guest::cpu()->r[3];
    r0_6 = r5 + 0x38u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_00569420(r0_6, r6, r2_4, r3_4);
    r3_5 = guest::cpu()->r[3];
    r1_4 = *global_00846f08;
    r2_5 = *gptr<u32>(0x846f08u + 4);  // (from the original)
    r0_7 = r5 + 0x14u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_8 = call_00816c20(r0_7, r1_4, r2_5, r3_5);
    r1_5 = guest::cpu()->r[1];
    r13 = r13 + 0x30u;  // (from the original)
    guest::cpu()->r[1] = r1_5;
    guest::cpu()->r[13] = r13;
    return r0_8;
}

}  // namespace d_001fa354
GUEST_EXPORT(0x001fa354, d_001fa354::f_001fa354);

// f_001fa744: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001fa744 {

inline guest::global<u32, 0x0095362c> global_0095362c;  // (from the original)
inline constexpr guest::Function<0x00108421, u32(u32, u32, u32, u32)> call_00108420;  // (from the original)
inline constexpr guest::Function<0x002fae84, u32(u32, u32, u32, u32)> call_002fae84;  // (from the original)
inline constexpr guest::Function<0x00300904, u32(u32, u32, u32, u32)> call_00300904;  // (from the original)
inline constexpr guest::Function<0x006249b0, u32(u32, u32, u32, u32)> call_006249b0;  // (from the original)
inline constexpr guest::Function<0x0075dfe8, u32(u32, u32, u32, u32)> call_0075dfe8;  // (from the original)

u32 f_001fa744(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r13 = guest::cpu()->r[13];
    u32 r14 = guest::cpu()->r[14];
    u32 ea_1 = 0;
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r0_2 = 0;
    u32 r2_2 = 0;
    u32 r3_2 = 0;
    u32 r1_2 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r1_3 = 0;
    u32 r2_3 = 0;
    u32 r3_3 = 0;
    u32 r0_5 = 0;
    u32 r0_6 = 0;
    u32 r3_4 = 0;
    u32 r2_4 = 0;
    u32 r1_4 = 0;
    u32 r0_7 = 0;
    u32 r0_8 = 0;
    u32 r0_9 = 0;
    u32 zf_1 = 0;
    u32 ea_2 = 0;
    u32 r4_1 = 0;
    u32 r5_1 = 0;
    ea_1 = r13 - 0x18;  // (from the original)
    *gptr<u32>(ea_1) = u32(r0);
    *gptr<u32>(ea_1 + 4) = u32(r1);
    *gptr<u32>(ea_1 + 8) = u32(r2);
    *gptr<u32>(ea_1 + 0xc) = u32(r4);  // (from the original)
    *gptr<u32>(ea_1 + 0x10) = u32(r5);  // (from the original)
    *gptr<u32>(ea_1 + 0x14) = u32(r14);  // (from the original)
    r13 = r13 - 0x18;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_1 = call_00300904(r0, r1, r2, r3);
    r1_1 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    if (r0_1 != 0) {
        if (r1 != 0) {
            guest::cpu()->r[13] = r13;
            r0_2 = call_002fae84(r0_1, r1_1, r2_1, r3_1);
            r2_2 = guest::cpu()->r[2];
            r3_2 = guest::cpu()->r[3];
            r1_2 = *gptr<u32>(r13 + 8u);
            r0_3 = r0_2 + 0x6e238u;  // (from the original)
            guest::cpu()->r[13] = r13;
            r0_4 = call_00108420(r0_3, r1_2, r2_2, r3_2);
            r1_3 = guest::cpu()->r[1];
            r2_3 = guest::cpu()->r[2];
            r3_3 = guest::cpu()->r[3];
            r0_5 = *global_0095362c;
            guest::cpu()->r[13] = r13;
            r0_6 = call_0075dfe8(r0_5, r1_3, r2_3, r3_3);
            r3_4 = 0x1acu;  // (from the original)
            r2_4 = r0_4;
            if (r0_6 == 0) {
                r1_4 = 4u;
            } else {
                r1_4 = 0u;
            }
            r0_7 = 0x81u;  // (from the original)
        } else {
            r0_8 = *global_0095362c;
            guest::cpu()->r[13] = r13;
            r0_9 = call_0075dfe8(r0_8, r1_1, r2_1, r3_1);
            zf_1 = r0_9 == 0;
            if (zf_1) {
                r3_4 = 4u;
            } else {
                r3_4 = 0x1acu;  // (from the original)
            }
            r2_4 = r13 + 8u;
            if (zf_1) {
                r1_4 = 4u;
            } else {
                r1_4 = 0u;
            }
            r0_7 = 0x82u;  // (from the original)
        }
        guest::cpu()->r[13] = r13;
        r0_1 = call_006249b0(r0_7, r1_4, r2_4, r3_4);
        r1_1 = guest::cpu()->r[1];
    }
    r13 = r13 + 0xcu;  // (from the original)
    ea_2 = r13;
    r13 = r13 + 0xc;  // (from the original)
    r4_1 = *gptr<u32>(ea_2);
    r5_1 = *gptr<u32>(ea_2 + 4);
    guest::cpu()->r[1] = r1_1;
    guest::cpu()->r[4] = r4_1;
    guest::cpu()->r[5] = r5_1;
    guest::cpu()->r[13] = r13;
    return r0_1;
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

inline guest::global<u16, 0x008c9f1e> global_008c9f1e;  // (from the original)

u32 f_001fad34(gptr<Object_001fad34_0> arg0) {
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    r0_1 = arg0->word_60;
    r1_1 = u32(*global_008c9f1e);
    *gptr<u16>(r0_1) = u16(r1_1);
    guest::cpu()->r[1] = r1_1;
    return r0_1;
}

}  // namespace d_001fad34
GUEST_EXPORT(0x001fad34, d_001fad34::f_001fad34);

// f_001fbec8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001fbec8 {

inline guest::global<u32, 0x0094fd3c> global_0094fd3c;  // (from the original)
inline guest::global<u32, 0x0094fd58> global_0094fd58;  // (from the original)
inline constexpr guest::Function<0x001fc044, u32(u32, u32, u32, u32)> call_001fc044;  // (from the original)
inline constexpr guest::Function<0x00568a80, u32(u32, u32, u32, u32)> call_00568a80;  // (from the original)
inline constexpr guest::Function<0x005e2c98, u32(u32, u32, u32, u32)> call_005e2c98;  // (from the original)

u32 f_001fbec8(u32 r0, u32 r1_unused, u32 r2) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r12 = guest::cpu()->r[12];
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r0_2 = 0;
    u32 r1_2 = 0;
    u32 res_1 = 0;
    u32 r0_3 = 0;
    u32 r1_3 = 0;
    u32 r0_4 = 0;
    u32 r1_4 = 0;
    u32 r0_5 = 0;
    u32 r1_5 = 0;
    u32 r1_6 = 0;
    u32 r0_6 = 0;
    u32 r0_7 = 0;
    u32 r1_7 = 0;
    u32 r0_8 = 0;
    u32 r1_8 = 0;
    u32 r0_9 = 0;
    u32 r1_9 = 0;
    u32 r0_10 = 0;
    u32 r1_10 = 0;
    u32 r2_1 = 0;
    u32 r1_11 = 0;
    u32 r1_12 = 0;
    *gptr<u32>(r13 + 0xfffffff8u) = u32(r12);  // (from the original)
    r13 = r13 - 0x28;  // (from the original)
    r5 = r0;
    r4 = 0u;
    r6 = 0x94fba0u;  // (from the original)
    do {
L_1fbed8:;
        r0_1 = r5 + 0x4cu;  // (from the original)
        r1_1 = *gptr<u32>(r6 + (r4 << 2));
        guest::cpu()->r[13] = r13;
        r0_2 = call_00568a80(r0_1, r1_1, r2, guest::cpu()->r[3]);
        r2 = guest::cpu()->r[2];
        r1_2 = r5 + (r4 << 2);
        r4 = r4 + 1u;
        res_1 = r4 - 8u;
        *gptr<u32>(r1_2 + 0x61cu) = u32(r0_2);  // (from the original)
        guest::preempt();
    } while (res_1 >> 0x1f != ((r4 ^ 8u) & (r4 ^ res_1)) >> 0x1f);  // (from the original)
    r0_3 = r5 + 0xbd4u;  // (from the original)
    r1_3 = *gptr<u32>(r5 + 0x61cu);  // (from the original)
    guest::cpu()->r[13] = r13;
    call_005e2c98(r0_3, r1_3, 0u, guest::cpu()->r[3]);
    r0_4 = r5 + 0xc98u;  // (from the original)
    r1_4 = *gptr<u32>(r5 + 0x620u);  // (from the original)
    guest::cpu()->r[13] = r13;
    call_005e2c98(r0_4, r1_4, 0u, guest::cpu()->r[3]);
    r0_5 = r5 + 0xd5cu;  // (from the original)
    r1_5 = *gptr<u32>(r5 + 0x624u);  // (from the original)
    guest::cpu()->r[13] = r13;
    call_005e2c98(r0_5, r1_5, 0u, guest::cpu()->r[3]);
    r1_6 = *gptr<u32>(r5 + 0x628u);  // (from the original)
    r0_6 = r5 + 0xe20u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_005e2c98(r0_6, r1_6, 0u, guest::cpu()->r[3]);
    r0_7 = r5 + 0xee4u;  // (from the original)
    r1_7 = *gptr<u32>(r5 + 0x62cu);  // (from the original)
    guest::cpu()->r[13] = r13;
    call_005e2c98(r0_7, r1_7, 0u, guest::cpu()->r[3]);
    r0_8 = r5 + 0xfa8u;  // (from the original)
    r1_8 = *gptr<u32>(r5 + 0x630u);  // (from the original)
    guest::cpu()->r[13] = r13;
    call_005e2c98(r0_8, r1_8, 0u, guest::cpu()->r[3]);
    r0_9 = r5 + 0x106cu;  // (from the original)
    r1_9 = *gptr<u32>(r5 + 0x634u);  // (from the original)
    guest::cpu()->r[13] = r13;
    call_005e2c98(r0_9, r1_9, 0u, guest::cpu()->r[3]);
    r0_10 = r5 + 0x1130u;  // (from the original)
    r1_10 = *gptr<u32>(r5 + 0x638u);  // (from the original)
    guest::cpu()->r[13] = r13;
    call_005e2c98(r0_10, r1_10, 0u, guest::cpu()->r[3]);
    r2_1 = guest::cpu()->r[2];
    *gptr<u8>(r0_3 + 0x38u) = u8(1u);  // (from the original)
    *gptr<u8>(r0_4 + 0x38u) = u8(1u);  // (from the original)
    *gptr<u8>(r0_5 + 0x38u) = u8(1u);  // (from the original)
    *gptr<u8>(r5 + 0xe58u) = u8(1u);  // (from the original)
    *gptr<u8>(r0_7 + 0x38u) = u8(1u);  // (from the original)
    *gptr<u8>(r0_8 + 0x38u) = u8(1u);  // (from the original)
    *gptr<u8>(r0_9 + 0x38u) = u8(1u);  // (from the original)
    *gptr<u8>(r0_10 + 0x38u) = u8(1u);  // (from the original)
    r1_11 = *gptr<u32>(*global_0094fd3c + 0x200u);  // (from the original)
    guest::cpu()->r[13] = r13;
    call_001fc044(r5, r1_11, r2_1, guest::cpu()->r[3]);
    r1_12 = *global_0094fd58 & ~0x10u;  // (from the original)
    *global_0094fd58 = u32(r1_12);
    r13 = r13 + 0x28;  // (from the original)
    guest::cpu()->r[1] = r1_12;
    guest::cpu()->r[13] = r13;
    return 0x94fd58u;  // (from the original)
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
    u32 r2_1 = 0;
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r4_1 = 0;
    u32 r4_2 = 0;
    u32 r0_3 = 0;
    u32 r1_1 = 0;
    u32 r2_2 = 0;
    u32 r3_1 = 0;
    u32 r0_4 = 0;
    u32 r2_3 = 0;
    u32 r3_2 = 0;
    u32 r0_5 = 0;
    u32 r0_6 = 0;
    u32 r1_2 = 0;
    u32 r2_4 = 0;
    u32 r3_3 = 0;
    u32 r0_7 = 0;
    u32 r0_8 = 0;
    u32 r1_3 = 0;
    u32 r2_5 = 0;
    u32 r3_4 = 0;
    u32 r0_9 = 0;
    u32 r0_10 = 0;
    u32 r1_4 = 0;
    u32 r2_6 = 0;
    u32 r3_5 = 0;
    u32 r0_11 = 0;
    u32 r0_12 = 0;
    u32 r1_5 = 0;
    u32 r2_7 = 0;
    u32 r3_6 = 0;
    u32 r0_13 = 0;
    u32 r0_14 = 0;
    u32 r1_6 = 0;
    u32 r2_8 = 0;
    u32 r3_7 = 0;
    u32 r0_15 = 0;
    u32 r0_16 = 0;
    u32 r1_7 = 0;
    u32 r2_9 = 0;
    u32 r3_8 = 0;
    u32 r0_17 = 0;
    u32 r0_18 = 0;
    u32 r1_8 = 0;
    u32 r2_10 = 0;
    u32 r3_9 = 0;
    u32 r0_19 = 0;
    u32 r0_20 = 0;
    u32 r1_9 = 0;
    u32 r2_11 = 0;
    u32 r3_10 = 0;
    u32 r0_21 = 0;
    u32 r0_22 = 0;
    u32 r1_10 = 0;
    u32 r2_12 = 0;
    u32 r3_11 = 0;
    u32 r0_23 = 0;
    u32 r0_24 = 0;
    u32 r1_11 = 0;
    u32 r2_13 = 0;
    u32 r3_12 = 0;
    u32 r0_25 = 0;
    u32 r0_26 = 0;
    u32 r1_12 = 0;
    u32 r2_14 = 0;
    u32 r3_13 = 0;
    u32 r0_27 = 0;
    u32 r0_28 = 0;
    u32 r1_13 = 0;
    u32 r2_15 = 0;
    u32 r3_14 = 0;
    u32 r0_29 = 0;
    u32 r0_30 = 0;
    u32 r1_14 = 0;
    u32 r2_16 = 0;
    u32 r3_15 = 0;
    u32 r0_31 = 0;
    u32 r0_32 = 0;
    u32 r1_15 = 0;
    u32 r2_17 = 0;
    u32 r3_16 = 0;
    u32 r0_33 = 0;
    u32 r0_34 = 0;
    u32 r1_16 = 0;
    u32 r2_18 = 0;
    u32 r3_17 = 0;
    u32 r0_35 = 0;
    u32 r0_36 = 0;
    u32 r1_17 = 0;
    u32 r2_19 = 0;
    u32 r3_18 = 0;
    u32 r0_37 = 0;
    u32 r0_38 = 0;
    u32 r1_18 = 0;
    u32 r2_20 = 0;
    u32 r3_19 = 0;
    u32 r0_39 = 0;
    u32 r0_40 = 0;
    u32 r1_19 = 0;
    u32 r2_21 = 0;
    u32 r3_20 = 0;
    u32 r0_41 = 0;
    u32 r0_42 = 0;
    u32 r1_20 = 0;
    u32 r2_22 = 0;
    u32 r3_21 = 0;
    u32 r0_43 = 0;
    u32 r0_44 = 0;
    u32 r1_21 = 0;
    u32 r2_23 = 0;
    u32 r3_22 = 0;
    u32 r0_45 = 0;
    u32 r0_46 = 0;
    u32 r1_22 = 0;
    u32 r2_24 = 0;
    u32 r3_23 = 0;
    u32 r0_47 = 0;
    u32 r0_48 = 0;
    u32 r1_23 = 0;
    u32 r2_25 = 0;
    u32 r3_24 = 0;
    u32 r0_49 = 0;
    guest::cpu()->r[13] -= 8u;
    r2_1 = 0x8ed158u + 0x6cu;  // (from the original)
    arg0->word_0 = u32(0x8ed158u);  // (from the original)
    arg0->word_28 = u32(r2_1);
    r0_1 = r0 + 0x1bbcu;  // (from the original)
    r0_2 = call_0053721c(r0_1, 0x8ed158u, r2_1, r3);  // (from the original)
    r4_1 = r0_2 + 0xfffff638u;  // (from the original)
    *gptr<u32>(r4_1) = u32(0x8ee218u);  // (from the original)
    r4_2 = r4_1 + 0x398u;  // (from the original)
    *gptr<u32>(r4_2 + 0xe4u) = u32(0x8ef22cu + 0x44u);  // (from the original)
    *gptr<u32>(r4_2) = u32(0x8ef22cu);  // (from the original)
    r0_3 = r4_2 + 0x118u;  // (from the original)
    call_002f76ac(r0_3, 0x2e0b3cu, 0x518u, 1u);  // (from the original)
    r1_1 = guest::cpu()->r[1];
    r2_2 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    r0_4 = call_002f770c(r4_2, r1_1, r2_2, r3_1);
    r2_3 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    *gptr<u32>(r0_4 - 0x398u) = u32(0x8f18f4u);  // (from the original)
    r0_5 = r0_4 - 0x248u;  // (from the original)
    r0_6 = call_00567ef0(r0_5, 0x8f18f4u, r2_3, r3_2);  // (from the original)
    r1_2 = guest::cpu()->r[1];
    r2_4 = guest::cpu()->r[2];
    r3_3 = guest::cpu()->r[3];
    r0_7 = r0_6 - 0x14cu;  // (from the original)
    r0_8 = call_005bf744(r0_7, r1_2, r2_4, r3_3);
    r1_3 = guest::cpu()->r[1];
    r2_5 = guest::cpu()->r[2];
    r3_4 = guest::cpu()->r[3];
    r0_9 = r0_8 - 0xc8u;  // (from the original)
    r0_10 = call_005e3194(r0_9, r1_3, r2_5, r3_4);
    r1_4 = guest::cpu()->r[1];
    r2_6 = guest::cpu()->r[2];
    r3_5 = guest::cpu()->r[3];
    r0_11 = r0_10 - 0xc4u;  // (from the original)
    r0_12 = call_005e3194(r0_11, r1_4, r2_6, r3_5);
    r1_5 = guest::cpu()->r[1];
    r2_7 = guest::cpu()->r[2];
    r3_6 = guest::cpu()->r[3];
    r0_13 = r0_12 - 0xc4u;  // (from the original)
    r0_14 = call_005e3194(r0_13, r1_5, r2_7, r3_6);
    r1_6 = guest::cpu()->r[1];
    r2_8 = guest::cpu()->r[2];
    r3_7 = guest::cpu()->r[3];
    r0_15 = r0_14 - 0xc4u;  // (from the original)
    r0_16 = call_005e3194(r0_15, r1_6, r2_8, r3_7);
    r1_7 = guest::cpu()->r[1];
    r2_9 = guest::cpu()->r[2];
    r3_8 = guest::cpu()->r[3];
    r0_17 = r0_16 - 0xc4u;  // (from the original)
    r0_18 = call_005e3194(r0_17, r1_7, r2_9, r3_8);
    r1_8 = guest::cpu()->r[1];
    r2_10 = guest::cpu()->r[2];
    r3_9 = guest::cpu()->r[3];
    r0_19 = r0_18 - 0xc4u;  // (from the original)
    r0_20 = call_005e3194(r0_19, r1_8, r2_10, r3_9);
    r1_9 = guest::cpu()->r[1];
    r2_11 = guest::cpu()->r[2];
    r3_10 = guest::cpu()->r[3];
    r0_21 = r0_20 - 0xc4u;  // (from the original)
    r0_22 = call_005e3194(r0_21, r1_9, r2_11, r3_10);
    r1_10 = guest::cpu()->r[1];
    r2_12 = guest::cpu()->r[2];
    r3_11 = guest::cpu()->r[3];
    r0_23 = r0_22 - 0xc4u;  // (from the original)
    r0_24 = call_005e3194(r0_23, r1_10, r2_12, r3_11);
    r1_11 = guest::cpu()->r[1];
    r2_13 = guest::cpu()->r[2];
    r3_12 = guest::cpu()->r[3];
    r0_25 = r0_24 - 0xe0u;  // (from the original)
    r0_26 = call_002b6ef8(r0_25, r1_11, r2_13, r3_12);
    r1_12 = guest::cpu()->r[1];
    r2_14 = guest::cpu()->r[2];
    r3_13 = guest::cpu()->r[3];
    r0_27 = r0_26 - 0xe4u;  // (from the original)
    r0_28 = call_002f7710(r0_27, r1_12, r2_14, r3_13);
    r1_13 = guest::cpu()->r[1];
    r2_15 = guest::cpu()->r[2];
    r3_14 = guest::cpu()->r[3];
    r0_29 = r0_28 - 0x3d4u;  // (from the original)
    r0_30 = call_006aa8a0(r0_29, r1_13, r2_15, r3_14);
    r1_14 = guest::cpu()->r[1];
    r2_16 = guest::cpu()->r[2];
    r3_15 = guest::cpu()->r[3];
    r0_31 = r0_30 - 0x48u;  // (from the original)
    r0_32 = call_0056988c(r0_31, r1_14, r2_16, r3_15);
    r1_15 = guest::cpu()->r[1];
    r2_17 = guest::cpu()->r[2];
    r3_16 = guest::cpu()->r[3];
    r0_33 = r0_32 - 0x28u;  // (from the original)
    r0_34 = call_0056988c(r0_33, r1_15, r2_17, r3_16);
    r1_16 = guest::cpu()->r[1];
    r2_18 = guest::cpu()->r[2];
    r3_17 = guest::cpu()->r[3];
    r0_35 = r0_34 - 0x28u;  // (from the original)
    r0_36 = call_0056988c(r0_35, r1_16, r2_18, r3_17);
    r1_17 = guest::cpu()->r[1];
    r2_19 = guest::cpu()->r[2];
    r3_18 = guest::cpu()->r[3];
    r0_37 = r0_36 - 0x28u;  // (from the original)
    r0_38 = call_0056988c(r0_37, r1_17, r2_19, r3_18);
    r1_18 = guest::cpu()->r[1];
    r2_20 = guest::cpu()->r[2];
    r3_19 = guest::cpu()->r[3];
    r0_39 = r0_38 - 0x28u;  // (from the original)
    r0_40 = call_0056988c(r0_39, r1_18, r2_20, r3_19);
    r1_19 = guest::cpu()->r[1];
    r2_21 = guest::cpu()->r[2];
    r3_20 = guest::cpu()->r[3];
    r0_41 = r0_40 - 0x28u;  // (from the original)
    r0_42 = call_0056988c(r0_41, r1_19, r2_21, r3_20);
    r1_20 = guest::cpu()->r[1];
    r2_22 = guest::cpu()->r[2];
    r3_21 = guest::cpu()->r[3];
    r0_43 = r0_42 - 0x248u;  // (from the original)
    r0_44 = call_00567ef0(r0_43, r1_20, r2_22, r3_21);
    r1_21 = guest::cpu()->r[1];
    r2_23 = guest::cpu()->r[2];
    r3_22 = guest::cpu()->r[3];
    r0_45 = r0_44 - 0x14cu;  // (from the original)
    r0_46 = call_005bf744(r0_45, r1_21, r2_23, r3_22);
    r1_22 = guest::cpu()->r[1];
    r2_24 = guest::cpu()->r[2];
    r3_23 = guest::cpu()->r[3];
    r0_47 = r0_46 - 0x14cu;  // (from the original)
    r0_48 = call_005bf744(r0_47, r1_22, r2_24, r3_23);
    r1_23 = guest::cpu()->r[1];
    r2_25 = guest::cpu()->r[2];
    r3_24 = guest::cpu()->r[3];
    guest::cpu()->r[13] += 8u;
    r0_49 = r0_48 - 0x4cu;  // (from the original)
    return call_006aaa30(r0_49, r1_23, r2_25, r3_24);
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
    u32 r0_1 = 0;
    u32 r4_1 = 0;
    u32 r0_2 = 0;
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r0_3 = 0;
    u32 r2_2 = 0;
    u32 r3_2 = 0;
    u32 r0_4 = 0;
    u32 r0_5 = 0;
    u32 r1_2 = 0;
    u32 r2_3 = 0;
    u32 r3_3 = 0;
    u32 r0_6 = 0;
    u32 r0_7 = 0;
    u32 r1_3 = 0;
    u32 r2_4 = 0;
    u32 r3_4 = 0;
    u32 r0_8 = 0;
    u32 r0_9 = 0;
    u32 r1_4 = 0;
    u32 r2_5 = 0;
    u32 r3_5 = 0;
    u32 r0_10 = 0;
    u32 r0_11 = 0;
    u32 r1_5 = 0;
    u32 r2_6 = 0;
    u32 r3_6 = 0;
    u32 r0_12 = 0;
    u32 r0_13 = 0;
    u32 r1_6 = 0;
    u32 r2_7 = 0;
    u32 r3_7 = 0;
    u32 r0_14 = 0;
    u32 r0_15 = 0;
    u32 r1_7 = 0;
    u32 r2_8 = 0;
    u32 r3_8 = 0;
    u32 r0_16 = 0;
    u32 r0_17 = 0;
    u32 r1_8 = 0;
    u32 r2_9 = 0;
    u32 r3_9 = 0;
    u32 r0_18 = 0;
    u32 r0_19 = 0;
    u32 r1_9 = 0;
    u32 r2_10 = 0;
    u32 r3_10 = 0;
    u32 r0_20 = 0;
    u32 r0_21 = 0;
    u32 r1_10 = 0;
    u32 r2_11 = 0;
    u32 r3_11 = 0;
    u32 r0_22 = 0;
    u32 r0_23 = 0;
    u32 r1_11 = 0;
    u32 r2_12 = 0;
    u32 r3_12 = 0;
    u32 r0_24 = 0;
    u32 r0_25 = 0;
    u32 r4_2 = 0;
    u32 r0_26 = 0;
    u32 r1_12 = 0;
    u32 r2_13 = 0;
    u32 r3_13 = 0;
    u32 r0_27 = 0;
    u32 r0_28 = 0;
    u32 r1_13 = 0;
    u32 r2_14 = 0;
    u32 r3_14 = 0;
    u32 r0_29 = 0;
    u32 r0_30 = 0;
    u32 r1_14 = 0;
    u32 r2_15 = 0;
    u32 r3_15 = 0;
    u32 r0_31 = 0;
    u32 r0_32 = 0;
    u32 r1_15 = 0;
    u32 r2_16 = 0;
    u32 r3_16 = 0;
    u32 r0_33 = 0;
    guest::cpu()->r[13] -= 8u;
    arg0->word_0 = u32(0x8ed1d8u);  // (from the original)
    arg0->word_28 = u32(0x8ed1d8u + 0x6cu);  // (from the original)
    r0_1 = r0 + 0x5400u;  // (from the original)
    call_002f76ac(r0_1, 0x81dfb4u, 0x20u, 0x10u);  // (from the original)
    *gptr<u32>(0x4510u + r0) = u32(0x8ee228u);  // (from the original)
    r4_1 = r0 + 0x48a8u;  // (from the original)
    *gptr<u32>(r4_1 + 0xe4u) = u32(0x8ef284u + 0x44u);  // (from the original)
    *gptr<u32>(r4_1) = u32(0x8ef284u);  // (from the original)
    r0_2 = r4_1 + 0x118u;  // (from the original)
    call_002f76ac(r0_2, 0x2e0b3cu, 0x518u, 2u);  // (from the original)
    r1_1 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    r0_3 = call_002f770c(r4_1, r1_1, r2_1, r3_1);
    r2_2 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    *gptr<u32>(r0_3 - 0x398u) = u32(0x8f18f4u);  // (from the original)
    r0_4 = r0_3 - 0x248u;  // (from the original)
    r0_5 = call_00567ef0(r0_4, 0x8f18f4u, r2_2, r3_2);  // (from the original)
    r1_2 = guest::cpu()->r[1];
    r2_3 = guest::cpu()->r[2];
    r3_3 = guest::cpu()->r[3];
    r0_6 = r0_5 - 0x14cu;  // (from the original)
    r0_7 = call_005bf744(r0_6, r1_2, r2_3, r3_3);
    r1_3 = guest::cpu()->r[1];
    r2_4 = guest::cpu()->r[2];
    r3_4 = guest::cpu()->r[3];
    r0_8 = r0_7 - 0xe4u;  // (from the original)
    r0_9 = call_0031c92c(r0_8, r1_3, r2_4, r3_4);
    r1_4 = guest::cpu()->r[1];
    r2_5 = guest::cpu()->r[2];
    r3_5 = guest::cpu()->r[3];
    r0_10 = r0_9 - 0x28u;  // (from the original)
    r0_11 = call_0056988c(r0_10, r1_4, r2_5, r3_5);
    r1_5 = guest::cpu()->r[1];
    r2_6 = guest::cpu()->r[2];
    r3_6 = guest::cpu()->r[3];
    r0_12 = r0_11 - 0x28u;  // (from the original)
    r0_13 = call_0056988c(r0_12, r1_5, r2_6, r3_6);
    r1_6 = guest::cpu()->r[1];
    r2_7 = guest::cpu()->r[2];
    r3_7 = guest::cpu()->r[3];
    r0_14 = r0_13 - 0x28u;  // (from the original)
    r0_15 = call_0056988c(r0_14, r1_6, r2_7, r3_7);
    r1_7 = guest::cpu()->r[1];
    r2_8 = guest::cpu()->r[2];
    r3_8 = guest::cpu()->r[3];
    r0_16 = r0_15 - 0x28u;  // (from the original)
    r0_17 = call_0056988c(r0_16, r1_7, r2_8, r3_8);
    r1_8 = guest::cpu()->r[1];
    r2_9 = guest::cpu()->r[2];
    r3_9 = guest::cpu()->r[3];
    r0_18 = r0_17 - 0x28u;  // (from the original)
    r0_19 = call_0056988c(r0_18, r1_8, r2_9, r3_9);
    r1_9 = guest::cpu()->r[1];
    r2_10 = guest::cpu()->r[2];
    r3_10 = guest::cpu()->r[3];
    r0_20 = r0_19 - 0x28u;  // (from the original)
    r0_21 = call_0056988c(r0_20, r1_9, r2_10, r3_10);
    r1_10 = guest::cpu()->r[1];
    r2_11 = guest::cpu()->r[2];
    r3_11 = guest::cpu()->r[3];
    r0_22 = r0_21 - 0x28u;  // (from the original)
    r0_23 = call_0056988c(r0_22, r1_10, r2_11, r3_11);
    r1_11 = guest::cpu()->r[1];
    r2_12 = guest::cpu()->r[2];
    r3_12 = guest::cpu()->r[3];
    r0_24 = r0_23 - 0x28u;  // (from the original)
    r0_25 = call_0056988c(r0_24, r1_11, r2_12, r3_12);
    r4_2 = r0_25 - 0x42f0u;  // (from the original)
    r0_26 = r0_25 - 0x3dc4u;  // (from the original)
    call_002f76ac(r0_26, 0x1ad16cu, 0x3dcu, 0x10u);  // (from the original)
    r1_12 = guest::cpu()->r[1];
    r2_13 = guest::cpu()->r[2];
    r3_13 = guest::cpu()->r[3];
    r0_27 = r4_2 + 0x3e0u;  // (from the original)
    r0_28 = call_005bf744(r0_27, r1_12, r2_13, r3_13);
    r1_13 = guest::cpu()->r[1];
    r2_14 = guest::cpu()->r[2];
    r3_14 = guest::cpu()->r[3];
    r0_29 = r0_28 - 0x14cu;  // (from the original)
    r0_30 = call_005bf744(r0_29, r1_13, r2_14, r3_14);
    r1_14 = guest::cpu()->r[1];
    r2_15 = guest::cpu()->r[2];
    r3_15 = guest::cpu()->r[3];
    r0_31 = r0_30 - 0x248u;  // (from the original)
    r0_32 = call_00567ef0(r0_31, r1_14, r2_15, r3_15);
    r1_15 = guest::cpu()->r[1];
    r2_16 = guest::cpu()->r[2];
    r3_16 = guest::cpu()->r[3];
    guest::cpu()->r[13] += 8u;
    r0_33 = r0_32 - 0x4cu;  // (from the original)
    return call_006aaa30(r0_33, r1_15, r2_16, r3_16);
}

}  // namespace d_001fdc84
GUEST_EXPORT(0x001fdc84, d_001fdc84::f_001fdc84);

// f_001fde44: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001fde44 {

inline guest::global<u16, 0x00887330> global_00887330;  // (from the original)
inline constexpr guest::Function<0x00529d08, u32(u32, u32, u32, u32)> call_00529d08;  // (from the original)

u32 f_001fde44(u32 r0) {
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    guest::cpu()->r[13] -= 8u;
    r0_1 = u32(*global_00887330);
    r0_2 = call_00529d08(r0_1, r0, 0u, guest::cpu()->r[3]);
    *gptr<u32>(0x950124u + 4u) = u32(r0_2);  // (from the original)
    if (r0_2 == 0) {
        r0_3 = 0u;
    } else {
        r0_3 = 1u;
    }
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = 0x950124u;  // (from the original)
    return r0_3;
}

}  // namespace d_001fde44
GUEST_EXPORT(0x001fde44, d_001fde44::f_001fde44);

// f_001fde7c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001fde7c {

inline guest::global<u16, 0x008c9f1e> global_008c9f1e;  // (from the original)
inline guest::global<u32, 0x00993068> global_00993068;  // (from the original)

u32 f_001fde7c() {
    u32 r1_1 = 0;
    u32 r0_1 = 0;
    r1_1 = *global_00993068;
    r0_1 = u32(*global_008c9f1e);
    *gptr<u16>(r1_1) = u16(r0_1);
    guest::cpu()->r[1] = r1_1;
    return r0_1;
}

}  // namespace d_001fde7c
GUEST_EXPORT(0x001fde7c, d_001fde7c::f_001fde7c);

// f_001fde9c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001fde9c {

inline constexpr guest::Function<0x005204b0, u32(u32, u32, u32, u32)> call_005204b0;  // (from the original)

u32 f_001fde9c() {
    u32 r0_1 = 0;
    guest::cpu()->r[13] -= 8u;
    r0_1 = *gptr<u32>(0x950124u + 4u);  // (from the original)
    call_005204b0(r0_1, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    *gptr<u32>(0x950124u + 4u) = u32(0u);  // (from the original)
    guest::cpu()->r[13] += 8u;
    return 0u;
}

}  // namespace d_001fde9c
GUEST_EXPORT(0x001fde9c, d_001fde9c::f_001fde9c);

// f_001fdf44: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001fdf44 {

inline constexpr guest::Function<0x005204b0, u32(u32, u32, u32, u32)> call_005204b0;  // (from the original)

u32 f_001fdf44(u32 r0_unused, u32 r1) {
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r0_1 = *gptr<u32>(0x950124u + 4u);  // (from the original)
    if (r0_1 == 0) {
        r0_2 = 1u;
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        guest::cpu()->r[1] = r1;
        return r0_2;
    }
    r1 = *gptr<u32>(0x950124u + 8u);  // (from the original)
    if (r1 == 0) {
        call_005204b0(r0_1, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        *gptr<u32>(0x950124u + 8u) = u32(*gptr<u32>(0x950124u + 8u) + 1u);  // (from the original)
    }
    r0_2 = 0u;
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0_2;
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
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r9 = guest::cpu()->r[9];
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r1_2 = 0;
    u32 r0_3 = 0;
    u32 r1_3 = 0;
    u32 r2_2 = 0;
    u32 r0_4 = 0;
    u32 r4_1 = 0;
    u32 r2_3 = 0;
    u32 r0_5 = 0;
    u32 r0_6 = 0;
    u32 r1_4 = 0;
    u32 r2_4 = 0;
    u32 r3_2 = 0;
    u32 r0_7 = 0;
    u32 r2_5 = 0;
    u32 r4_2 = 0;
    u32 r3_3 = 0;
    u32 r1_5 = 0;
    u32 r0_8 = 0;
    u32 nf_1 = 0;
    u32 zf_1 = 0;
    u32 ea_1 = 0;
    u32 ea_2 = 0;
    u32 r1_6 = 0;
    u32 r2_6 = 0;
    u32 r0_9 = 0;
    u32 r6_1 = 0;
    u32 r0_10 = 0;
    u32 r0_11 = 0;
    u32 r1_7 = 0;
    u32 r2_7 = 0;
    u32 r0_12 = 0;
    u32 ea_3 = 0;
    r5 = r0;
    r13 = r13 - 0x40u;  // (from the original)
    r0_1 = r0 + 0x13u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_2 = call_00301444(r0_1, 0x3cu, r2, r3);  // (from the original)
    r1_1 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0 = call_0062f03c(r0_2, r1_1, r2_1, r3_1);
    r1_2 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 != 4u) {
        goto L_1fe80c;
    }
    guest::cpu()->r[13] = r13;
    r0_3 = call_002fb378(r0, r1_2, r2, r3);
    r1_3 = *gptr<u32>(r0_3);
    r2_2 = *gptr<u32>(r0_3 + 4);
    r8 = 0u;
    r0_4 = *gptr<u32>(r0_3 + 8u);
    r4_1 = r13 + 4u;
    *gptr<u32>(r13) = u32(r8);
    *gptr<u32>(r13 + 0xcu) = u32(r0_4);  // (from the original)
    *gptr<u32>(r4_1) = u32(r1_3);
    *gptr<u32>(r4_1 + 4) = u32(r2_2);
    r2_3 = ~5u;
    r0_5 = r13 + 4u;
    guest::cpu()->r[13] = r13;
    r0_6 = call_00312ab8(r0_5, r8, r2_3, r8);
    r1_4 = guest::cpu()->r[1];
    r2_4 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0_7 = call_002fb328(r0_6, r1_4, r2_4, r3_2);
    r2_5 = u32(s32(s8(*gptr<u8>(r13 + 0xbu))));  // (from the original)
    r4_2 = *gptr<u32>(r13 + 4u) << 9;
    r3_3 = u32(s32(s8(*gptr<u8>(r13 + 0xcu))));  // (from the original)
    r1_5 = (r4_2 + (u32(s32(s8(*gptr<u8>(r13 + 8u)))) << 5) + u32(s32(s8(*gptr<u8>(r13 + 9u)))) << 8) + (r2_5 << 0x10) + (r3_3 << 8) + u32(*gptr<u16>(r0_7 + 0x621b8u));  // (from the original)
    r0_8 = r13 + 0x10u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_0055cabc(r0_8, r1_5, r2_5, r3_3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r7 = 0x9506f8u;  // (from the original)
    r0 = 0u;
    r4 = r0;
    r9 = 1u;
    do {
L_1fe7c8:;
        r1_2 = r5 + r4;
        nf_1 = r0 >> 0x1f;  // (from the original)
        zf_1 = r0 == 0;
        if (!zf_1 && nf_1 == 0u) {
            r0 = r0 - 1u;
        }
        *gptr<u8>(r1_2 + 0x13u) = u8(r8);  // (from the original)
        if (!(!zf_1 && nf_1 == 0u)) {
            ea_1 = r1_2 + 0x13u;  // (from the original)
            *gptr<u8>(ea_1) = u8(r9);
            ea_2 = r7 + 4u;
            r1_6 = *gptr<u32>(ea_2);
            r2_6 = *gptr<u32>(ea_2 + 4);
            r0_9 = r13 + 0x10u;  // (from the original)
            r6_1 = r2_6 - r1_6;
            guest::cpu()->r[13] = r13;
            r0_10 = call_0055cb58(r0_9, r1_6, r2_6, r3);
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
            r1_2 = *gptr<u32>(r7 + 4u);
            r0 = u32(u64(r0_10) * r6_1 >> 0x20) + r1_2;  // (from the original)
        }
        r4 = r4 + 1u;
        guest::preempt();
    } while (s32(r4) < s32(0x3cu));  // (from the original)
L_1fe80c:;
    guest::cpu()->r[13] = r13;
    r0_11 = call_002fb378(r0, r1_2, r2, r3);
    r1_7 = *gptr<u32>(r0_11);
    r2_7 = *gptr<u32>(r0_11 + 4);
    r0_12 = *gptr<u32>(r0_11 + 8u);
    *gptr<u32>(r5 + 0x58u) = u32(r0_12);  // (from the original)
    ea_3 = r5 + 0x50u;  // (from the original)
    *gptr<u32>(ea_3) = u32(r1_7);
    *gptr<u32>(ea_3 + 4) = u32(r2_7);
    r13 = r13 + 0x40u;  // (from the original)
    guest::cpu()->r[1] = r1_7;
    guest::cpu()->r[13] = r13;
    return r0_12;
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

inline guest::global<u32, 0x001ff0c8> global_001ff0c8;  // (from the original)
inline guest::global<u32, 0x00879db8> global_00879db8;  // (from the original)
inline constexpr guest::Function<0x001207d8, u32(u32, u32, u32, u32)> call_001207d8;  // (from the original)
inline constexpr guest::Function<0x00125aec, u32(u32, u32, u32, u32)> call_00125aec;  // (from the original)
inline constexpr guest::Function<0x001cb884, u32(u32, u32, u32, u32)> call_001cb884;  // (from the original)
inline constexpr guest::Function<0x00299b30, u32(u32, u32, u32, u32)> call_00299b30;  // (from the original)
inline constexpr guest::Function<0x002b7c68, u32(u32, u32, u32, u32)> call_002b7c68;  // (from the original)
inline constexpr guest::Function<0x002bc928, u32(u32, u32, u32, u32)> call_002bc928;  // (from the original)
inline constexpr guest::Function<0x00301d0d, u32(u32, u32, u32, u32)> call_00301d0c;  // (from the original)
inline constexpr guest::Function<0x005e3128, u32(u32, u32, u32, u32)> call_005e3128;  // (from the original)

u32 f_001fefa4(gptr<Object_001fefa4_0> arg0, float S0) {
    u32 r0 = arg0.addr();
    u32 r13 = guest::cpu()->r[13];
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 ea_1 = 0;
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r3_2 = 0;
    float S0_1 = 0;
    u32 r2_2 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r1_1 = 0;
    u32 r2_3 = 0;
    u32 r3_3 = 0;
    float S0_2 = 0;
    u32 r0_5 = 0;
    u32 r0_6 = 0;
    u32 r2_4 = 0;
    u32 r3_4 = 0;
    float S0_3 = 0;
    u32 r0_7 = 0;
    u32 r0_8 = 0;
    u32 r1_2 = 0;
    u32 r2_5 = 0;
    u32 r3_5 = 0;
    float S0_4 = 0;
    u32 r0_9 = 0;
    u32 r0_10 = 0;
    float S0_5 = 0;
    u32 r0_11 = 0;
    u32 r0_12 = 0;
    u32 r1_3 = 0;
    u32 r2_6 = 0;
    u32 r3_6 = 0;
    float S0_6 = 0;
    u32 r0_13 = 0;
    u32 r0_14 = 0;
    u32 r2_7 = 0;
    u32 r3_7 = 0;
    float S0_7 = 0;
    u32 r0_15 = 0;
    u32 ea_2 = 0;
    u32 ea_3 = 0;
    u32 r0_16 = 0;
    u32 r0_17 = 0;
    u32 r2_8 = 0;
    u32 r3_8 = 0;
    float S0_8 = 0;
    u32 r1_4 = 0;
    u32 r0_18 = 0;
    u32 r0_19 = 0;
    float S0_9 = 0;
    u32 r0_20 = 0;
    u32 r0_21 = 0;
    u32 r3_9 = 0;
    u32 r0_22 = 0;
    float S0_10 = 0;
    u32 r1_5 = 0;
    u32 r0_23 = 0;
    u32 r0_24 = 0;
    u32 r1_6 = 0;
    float S0_11 = 0;
    u32 r0_25 = 0;
    r13 = r13 - 8;
    arg0->word_4 = u32(0u);
    arg0->byte_8 = u8(0u);
    r2_1 = *gptr<u32>(0x879db8u + 4);  // (from the original)
    r3_1 = r0 + 0xcu;  // (from the original)
    arg0->word_c = u32(*global_00879db8);
    arg0->word_10 = u32(r2_1);
    arg0->word_14 = u32(0u);
    arg0->word_0 = u32(0x9081c4u);  // (from the original)
    arg0->byte_18 = u8(0u);
    arg0->word_1c = u32(0u);
    ea_1 = r0 + 0x20u;  // (from the original)
    arg0->word_20 = u32(0u);
    r0_1 = ea_1 + 4u;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    r0_2 = call_002bc928(r0_1, 0x9081c4u, r2_1, r3_1);  // (from the original)
    r3_2 = guest::cpu()->r[3];
    S0_1 = guest::cpu()->s[0];
    r2_2 = 0x8ed2e8u + 0x34u;  // (from the original)
    *gptr<u32>(r0_2 - 0x24u) = u32(0x8ed2e8u);  // (from the original)
    *gptr<u32>(r0_2) = u32(r2_2);
    r0_3 = r0_2 + 8u;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_1;
    r0_4 = call_001207d8(r0_3, 0x8ed2e8u, r2_2, r3_2);  // (from the original)
    r1_1 = guest::cpu()->r[1];
    r2_3 = guest::cpu()->r[2];
    r3_3 = guest::cpu()->r[3];
    S0_2 = guest::cpu()->s[0];
    r0_5 = r0_4 + 0x248u;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_2;
    r0_6 = call_001cb884(r0_5, r1_1, r2_3, r3_3);
    r2_4 = guest::cpu()->r[2];
    r3_4 = guest::cpu()->r[3];
    S0_3 = guest::cpu()->s[0];
    *gptr<u32>(r0_6) = u32(0x8f8b10u);  // (from the original)
    r0_7 = r0_6 + 0x1b0u;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_3;
    r0_8 = call_002b7c68(r0_7, 0x8f8b10u, r2_4, r3_4);  // (from the original)
    r1_2 = guest::cpu()->r[1];
    r2_5 = guest::cpu()->r[2];
    r3_5 = guest::cpu()->r[3];
    S0_4 = guest::cpu()->s[0];
    r0_9 = r0_8 + 0x5cu;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_4;
    r0_10 = call_001cb884(r0_9, r1_2, r2_5, r3_5);
    S0_5 = guest::cpu()->s[0];
    *gptr<u32>(r0_10) = u32(0x8f2638u);  // (from the original)
    r0_11 = r0_10 + 0x1b0u;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_5;
    r0_12 = call_00301d0c(r0_11, 0x2caec8u, 0x198u, 7u);  // (from the original)
    r1_3 = guest::cpu()->r[1];
    r2_6 = guest::cpu()->r[2];
    r3_6 = guest::cpu()->r[3];
    S0_6 = guest::cpu()->s[0];
    r0_13 = r0_12 + 0xb28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_6;
    r0_14 = call_00125aec(r0_13, r1_3, r2_6, r3_6);
    r2_7 = guest::cpu()->r[2];
    r3_7 = guest::cpu()->r[3];
    S0_7 = guest::cpu()->s[0];
    r0_15 = r0_14 - 0xcd8u;  // (from the original)
    ea_2 = r0_15 + 0xd00u;  // (from the original)
    *gptr<u32>(ea_2) = u32(0u);
    ea_3 = r0_15 + 0xd04u;  // (from the original)
    *gptr<u32>(ea_3) = u32(0u);
    r0_16 = ea_3 + 0x20u;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_7;
    r0_17 = call_005e3128(r0_16, 0x40u, r2_7, r3_7);  // (from the original)
    r2_8 = guest::cpu()->r[2];
    r3_8 = guest::cpu()->r[3];
    S0_8 = guest::cpu()->s[0];
    r1_4 = r0_17 - 0xd24u;  // (from the original)
    r0_18 = r0_17 + 0xc4u;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_8;
    r0_19 = call_00299b30(r0_18, r1_4, r2_8, r3_8);
    S0_9 = guest::cpu()->s[0];
    r0_20 = r0_19 + 0x798u;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_9;
    r0_21 = call_00301d0c(r0_20, 0x1c81a8u, 0x1cu, 7u);  // (from the original)
    r3_9 = guest::cpu()->r[3];
    r0_22 = r0_21 - 0x1580u;  // (from the original)
    S0_10 = std::bit_cast<float>(*global_001ff0c8);
    r1_5 = r0_22 + 0x1400u;  // (from the original)
    *gptr<u32>(r1_5 + 0x244u) = u32(std::bit_cast<u32>(S0_10));  // (from the original)
    *gptr<u32>(r1_5 + 0x248u) = u32(std::bit_cast<u32>(S0_10));  // (from the original)
    *gptr<u32>(0x164cu + r0_22) = u32(0u);  // (from the original)
    r0_23 = r0_22 + 0x1650u;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_10;
    r0_24 = call_002b7c68(r0_23, r1_5, 0x164cu, r3_9);  // (from the original)
    r1_6 = guest::cpu()->r[1];
    S0_11 = guest::cpu()->s[0];
    r0_25 = r0_24 - 0x1ad0u;  // (from the original)
    r13 = r13 + 8;
    guest::cpu()->r[1] = r1_6;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_11;
    return r0_25;
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
    u32 r2_1 = 0;
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r2_2 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r1_1 = 0;
    u32 r2_3 = 0;
    u32 r0_5 = 0;
    u32 r0_6 = 0;
    u32 r1_2 = 0;
    u32 r2_4 = 0;
    u32 r0_7 = 0;
    u32 r0_8 = 0;
    u32 r1_3 = 0;
    u32 r0_9 = 0;
    guest::cpu()->r[13] -= 8u;
    arg0->word_0 = u32(0x8ed2e8u);  // (from the original)
    r2_1 = 0x8ed2e8u + 0x34u;  // (from the original)
    arg0->word_24 = u32(r2_1);
    r0_1 = r0 + 0x480u;  // (from the original)
    r0_2 = call_002cbad8(r0_1, 0x8ed2e8u, r2_1, guest::cpu()->r[3]);  // (from the original)
    r2_2 = guest::cpu()->r[2];
    *gptr<u32>(r0_2 - 0x20cu) = u32(0x8f8b10u);  // (from the original)
    r0_3 = r0_2 - 0x5cu;  // (from the original)
    r0_4 = call_002b7c94(r0_3, 0x8f8b10u, r2_2, guest::cpu()->r[3]);  // (from the original)
    r1_1 = guest::cpu()->r[1];
    r2_3 = guest::cpu()->r[2];
    r0_5 = r0_4 - 0x1b0u;  // (from the original)
    r0_6 = call_001cb8fc(r0_5, r1_1, r2_3, guest::cpu()->r[3]);
    r1_2 = guest::cpu()->r[1];
    r2_4 = guest::cpu()->r[2];
    r0_7 = r0_6 - 0x248u;  // (from the original)
    r0_8 = call_00567ef0(r0_7, r1_2, r2_4, guest::cpu()->r[3]);
    r1_3 = guest::cpu()->r[1];
    r0_9 = r0_8 - 0x2cu;  // (from the original)
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1_3;
    return r0_9;
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
    u32 r1_1 = 0;
    float S1_1 = 0;
    float S0_1 = 0;
    float S2_1 = 0;
    float S3_1 = 0;
    float S4_1 = 0;
    r1_1 = arg0->word_108 + 0x80u;  // (from the original)
    S1_1 = std::bit_cast<float>(*gptr<u32>(r1_1 + 0xcu));  // (from the original)
    S0_1 = std::bit_cast<float>(*gptr<u32>(r1_1 + 0x1cu));  // (from the original)
    S2_1 = std::bit_cast<float>(*gptr<u32>(r1_1 + 0x2cu));  // (from the original)
    S3_1 = std::bit_cast<float>(arg0->word_11c) - S0_1;
    S4_1 = std::bit_cast<float>(arg0->word_120) - S2_1;
    arg0->word_10c = u32(std::bit_cast<u32>(std::bit_cast<float>(arg0->word_10c) + (std::bit_cast<float>(arg0->word_118) - S1_1)));
    arg0->word_110 = u32(std::bit_cast<u32>(std::bit_cast<float>(arg0->word_110) + S3_1));
    arg0->word_114 = u32(std::bit_cast<u32>(std::bit_cast<float>(arg0->word_114) + S4_1));
    arg0->word_118 = u32(std::bit_cast<u32>(S1_1));
    arg0->word_11c = u32(std::bit_cast<u32>(S0_1));
    arg0->word_120 = u32(std::bit_cast<u32>(S2_1));
    guest::cpu()->r[1] = r1_1;
    guest::cpu()->s[0] = S0_1;
    guest::cpu()->s[1] = S1_1;
    return;
}

}  // namespace d_001ff5c0
GUEST_EXPORT(0x001ff5c0, d_001ff5c0::f_001ff5c0);

// f_001ff92c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001ff92c {

inline guest::global<u32, 0x001ff998> global_001ff998;  // (from the original)
inline constexpr guest::Function<0x00125aec, u32(u32, u32, u32, u32)> call_00125aec;  // (from the original)
inline constexpr guest::Function<0x002b6de0, u32(u32, u32, u32, u32)> call_002b6de0;  // (from the original)

u32 f_001ff92c(u32 r0, u32 r1, u32 r2, u32 r3, float S0) {
    u32 r0_1 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    float S0_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r3_2 = 0;
    float S0_2 = 0;
    guest::cpu()->r[13] -= 8u;
    guest::cpu()->s[0] = S0;
    r0_1 = call_002b6de0(r0, r1, r2, r3);
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    S0_1 = guest::cpu()->s[0];
    *gptr<u32>(r0_1) = u32(0x8ed374u);  // (from the original)
    r0_2 = r0_1 + 0xe0u;  // (from the original)
    guest::cpu()->s[0] = S0_1;
    r0_3 = call_00125aec(r0_2, 0x8ed374u, r2_1, r3_1);  // (from the original)
    r0_4 = r0_3 - 0xe0u;  // (from the original)
    r3_2 = r0_4 + 0x100u;  // (from the original)
    *gptr<u32>(r0_4 + 0x108u) = u32(0u);  // (from the original)
    *gptr<u32>(r0_4 + 0x124u) = u32(0u);  // (from the original)
    *gptr<u16>(r3_2 + 0x28u) = u16(0u);  // (from the original)
    *gptr<u16>(r3_2 + 0x2au) = u16(0u);  // (from the original)
    *gptr<u8>(r0_4 + 0x12cu) = u8(0u);  // (from the original)
    S0_2 = std::bit_cast<float>(*global_001ff998);
    *gptr<u8>(r0_4 + 0x12du) = u8(1u);  // (from the original)
    *gptr<u32>(r0_4 + 0x10cu) = u32(std::bit_cast<u32>(S0_2));  // (from the original)
    *gptr<u32>(r0_4 + 0x110u) = u32(std::bit_cast<u32>(S0_2));  // (from the original)
    *gptr<u32>(r0_4 + 0x114u) = u32(std::bit_cast<u32>(S0_2));  // (from the original)
    *gptr<u32>(r0_4 + 0x118u) = u32(std::bit_cast<u32>(S0_2));  // (from the original)
    *gptr<u32>(r0_4 + 0x11cu) = u32(std::bit_cast<u32>(S0_2));  // (from the original)
    *gptr<u32>(r0_4 + 0x120u) = u32(std::bit_cast<u32>(S0_2));  // (from the original)
    *gptr<u32>(r0_4 + 0xccu) = u32(0x100038eu);  // (from the original)
    *gptr<u8>(r0_4 + 0xdau) = u8(1u);  // (from the original)
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = 0x100038eu;  // (from the original)
    guest::cpu()->s[0] = S0_2;
    return r0_4;
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
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r1_2 = 0;
    u32 r0_4 = 0;
    guest::cpu()->r[13] -= 8u;
    arg0->word_0 = u32(0x8ed374u);  // (from the original)
    r0_1 = r0 + 0xe0u;  // (from the original)
    call_00569774(r0_1, 0u, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_1 = guest::cpu()->r[1];
    r0_2 = r0 + 0xe0u;  // (from the original)
    r0_3 = call_0056988c(r0_2, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_2 = guest::cpu()->r[1];
    guest::cpu()->r[13] += 8u;
    r0_4 = r0_3 - 0xe0u;  // (from the original)
    return call_002b6ef8(r0_4, r1_2, guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_001ff9d8
GUEST_EXPORT(0x001ff9d8, d_001ff9d8::f_001ff9d8);
