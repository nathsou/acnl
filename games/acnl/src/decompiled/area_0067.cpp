// Functions decompiled by tools/decomp (docs/decomp.md), each proved equal to the recompiled original (prove-cpp). The
// names are generated (d_<address>::f_<address>, Object_<address>_<argument>, word_<offset>) and still to be chosen.
#include "guest/guest.hpp"

#include <bit>

using guest::gptr;

// f_0067334c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0067334c {

struct __attribute__((packed)) Object_0067334c_0 {
    u8 unknown_0[0x171];  // (not used here)
    u8 byte_171;
    u8 unknown_172[0x75c];  // (not used here)
    u8 byte_8ce;
    u8 byte_8cf;
};
GUEST_OFFSET(Object_0067334c_0, byte_171, 0x171);  // (from the original)
GUEST_OFFSET(Object_0067334c_0, byte_8ce, 0x8ce);  // (from the original)
GUEST_OFFSET(Object_0067334c_0, byte_8cf, 0x8cf);  // (from the original)

inline constexpr guest::Function<0x00597784, u32(u32, u32, u32, u32)> call_00597784;  // (from the original)
inline constexpr guest::Function<0x0066a18c, u32(u32, u32, u32, u32)> call_0066a18c;  // (from the original)

u32 f_0067334c(gptr<Object_0067334c_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r1 = 0;
    u32 r2 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r4 = r0;
    r6 = sxtb(u32(arg0->byte_8ce));
    r1 = u32(arg0->byte_171);
    r5 = sxtb(u32(arg0->byte_8cf));
    r0 = r4 + 0x171u;  // (from the original)
    if ((r1 & 1u) == 0) {
        goto L_6733ac;
    } else {
        arg0->byte_171 = u8(r1 & ~1u);
    }
    r2 = r5;
    r1 = r6;
    r0 = r4;
    r0 = call_0066a18c(r0, r1, r2, guest::cpu()->r[3]);
    r2 = r5;
    r1 = r6;
    r0 = r4;
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    return call_00597784(r0, r1, r2, guest::cpu()->r[3]);
L_6733ac:;
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_0067334c
GUEST_EXPORT(0x0067334c, d_0067334c::f_0067334c);

// f_0067349c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0067349c {

struct __attribute__((packed)) Object_0067349c_0 {
    u8 unknown_0[0x47c];  // (not used here)
    u32 word_47c;
    u32 word_480;
    u8 unknown_484[0x3ec];  // (not used here)
    u8 byte_870;
    u8 unknown_871[0x3];  // (not used here)
    u32 word_874;
    u32 word_878;
    u32 word_87c;
    u32 word_880;
};
GUEST_OFFSET(Object_0067349c_0, word_47c, 0x47c);  // (from the original)
GUEST_OFFSET(Object_0067349c_0, word_480, 0x480);  // (from the original)
GUEST_OFFSET(Object_0067349c_0, byte_870, 0x870);  // (from the original)
GUEST_OFFSET(Object_0067349c_0, word_874, 0x874);  // (from the original)
GUEST_OFFSET(Object_0067349c_0, word_878, 0x878);  // (from the original)
GUEST_OFFSET(Object_0067349c_0, word_87c, 0x87c);  // (from the original)
GUEST_OFFSET(Object_0067349c_0, word_880, 0x880);  // (from the original)

struct __attribute__((packed)) Object_0067349c_1 {
    u32 word_0;
    u8 unknown_4[0x4];  // (not used here)
    u32 word_8;
};
GUEST_OFFSET(Object_0067349c_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_0067349c_1, word_8, 0x8);  // (from the original)

inline constexpr guest::Function<0x003171b4, u32(u32, u32, u32, u32)> call_003171b4;  // (from the original)

u32 f_0067349c(gptr<Object_0067349c_0> arg0, gptr<Object_0067349c_1> arg1) {
    u32 r0 = arg0.addr();
    u32 r1 = arg1.addr();
    u32 r2 = 0;
    u32 r3 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r6 = guest::cpu()->r[6];
    u32 r12 = 0;
    u32 r13 = guest::cpu()->r[13];
    u32 cf = 0;
    r13 = r13 - 0x18u;  // (from the original)
    arg0->byte_870 = u8(9u);
    arg0->word_874 = u32(arg0->word_47c);
    r3 = arg0->word_480;
    arg0->word_878 = u32(r3);
    arg0->word_87c = u32(arg1->word_0);
    arg0->word_880 = u32(arg1->word_8);
    r2 = r1;
    r1 = r13 + 4u;
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_003171b4(r0, r1, r2, r3);
    r1 = 0xaadaf4u;  // (from the original)
    r3 = ~0u;
    r12 = 1u;
L_6734ec:;
    r2 = ~0u;
    do {
L_6734f0:;
        r0 = *gptr<u32>(r13) + r2;
        cf = r0 >= 0x70u;  // (from the original)
        r4 = *gptr<u32>(r13 + 4u) + r3;
        if (!cf) {
            cf = r4 >= 0x70u;  // (from the original)
        }
        if (cf) {
            r0 = 0x3100u;  // (from the original)
        } else {
            r0 = r0 + ((r4 << 3) - r4 << 4);
        }
        if (!(r0 >= 0x3100u)) {  // (from the original)
            r6 = r0 & 7u;
            r0 = r1 + (r0 >> 3);
            *gptr<u8>(r0) = u8(u32(*gptr<u8>(r0)) | lsl_r(r12, r6 & 0xff));  // (from the original)
            *gptr<u8>(r1 + 0x620u) = u8(r12);  // (from the original)
        }
        r2 = r2 + 1u;
        guest::preempt();
    } while (s32(r2) <= s32(1u));
    r3 = r3 + 1u;
    if (s32(r3) <= s32(1u)) {
        guest::preempt();
        goto L_6734ec;
    }
    r13 = r13 + 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_0067349c
GUEST_EXPORT(0x0067349c, d_0067349c::f_0067349c);

// f_006739b8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006739b8 {

inline constexpr guest::Function<0x0064d0b8, u32(u32, u32, u32, u32)> call_0064d0b8;  // (from the original)
inline constexpr guest::Function<0x00656c20, u32(u32, u32, u32, u32)> call_00656c20;  // (from the original)
inline constexpr guest::Function<0x00723af8, u32(u32, u32, u32, u32)> call_00723af8;  // (from the original)

u32 f_006739b8(u32 r0, u32 r1, u32 r2, u32 r3) {
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
    r13 = r13 - 0x38u;  // (from the original)
    r4 = r1;
    r6 = r0;
    r11 = r3;
    ea = r13 + 0x40u;  // (from the original)
    r5 = *gptr<u32>(ea);
    r8 = *gptr<u32>(ea + 4);
    r10 = *gptr<u32>(ea + 8);
    ea = r13 + 0x38u;  // (from the original)
    r7 = *gptr<u32>(ea);
    r9 = *gptr<u32>(ea + 4);
    r0 = r6 + 0x68u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00723af8(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 != 0) {
        goto L_6739fc;
    }
    if (r4 == 0) {
        goto L_6739fc;
    }
    if (r4 < 0x41u) {  // (from the original)
        goto L_673a08;
    }
L_6739fc:;
    r13 = r13 + 0x14u;  // (from the original)
    r0 = 0u;
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
L_673a08:;
    r0 = r6;
    guest::cpu()->r[13] = r13;
    r0 = call_00656c20(r0, r1, r2, r3);
    r2 = r0;
    ea = r0 + 0xeu;  // (from the original)
    *gptr<u8>(ea) = u8(r4);
    r0 = ea;
    *gptr<u8>(r0 + 1u) = u8(*gptr<u32>(r13 + 0xcu));  // (from the original)
    *gptr<u8>(r0 + 2u) = u8(r11);
    *gptr<u8>(r0 + 3u) = u8(r7);
    *gptr<u8>(r2 + 0x14u) = u8(r8);  // (from the original)
    *gptr<u8>(r0 + 7u) = u8(u32(*gptr<u8>(r0 + 7u)) & ~1u | r9);
    if (r5 != 0) {
        r1 = u32(*gptr<u16>(r5));
        *gptr<u16>(r13) = u16(r1);
        *gptr<u16>(r0 + 4u) = u16(r1);
        r1 = u32(*gptr<u8>(r0 + 7u)) | 2u;
    } else {
        r1 = u32(*gptr<u16>(r6 + 0x2eu));  // (from the original)
        *gptr<u16>(r13) = u16(r1);
        *gptr<u16>(r0 + 4u) = u16(r1);
        r1 = u32(*gptr<u8>(r0 + 7u)) & ~2u;
    }
    *gptr<u8>(r0 + 7u) = u8(r1 & 0xfbu | r10 << 2);  // (from the original)
    r13 = r13 + 0x14u;  // (from the original)
    r0 = r6;
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
    r14 = *gptr<u32>(ea + 0x20);  // (from the original)
    r3 = 0u;
    r1 = 0xafu;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->r[4] = r4;
    guest::cpu()->r[5] = r5;
    guest::cpu()->r[6] = r6;
    guest::cpu()->r[7] = r7;
    guest::cpu()->r[8] = r8;
    guest::cpu()->r[9] = r9;
    guest::cpu()->r[10] = r10;
    guest::cpu()->r[11] = r11;
    return call_0064d0b8(r0, r1, r2, r3);
}

}  // namespace d_006739b8
GUEST_EXPORT(0x006739b8, d_006739b8::f_006739b8);

// f_00673a94: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00673a94 {

inline constexpr guest::Function<0x0064d0b8, u32(u32, u32, u32, u32)> call_0064d0b8;  // (from the original)
inline constexpr guest::Function<0x00656c20, u32(u32, u32, u32, u32)> call_00656c20;  // (from the original)

u32 f_00673a94(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r4 = r1;
    r5 = r0;
    r0 = call_00656c20(r0, r1, r2, r3);
    r2 = r0;
    r3 = 0u;
    *gptr<u32>(r0 + 0xeu) = u32(*gptr<u32>(r4));  // (from the original)
    r0 = r5;
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    r1 = 0x8eu;  // (from the original)
    return call_0064d0b8(r0, r1, r2, r3);
}

}  // namespace d_00673a94
GUEST_EXPORT(0x00673a94, d_00673a94::f_00673a94);

// f_00673ac4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00673ac4 {

inline constexpr guest::Function<0x0064d0b8, u32(u32, u32, u32, u32)> call_0064d0b8;  // (from the original)
inline constexpr guest::Function<0x00656c20, u32(u32, u32, u32, u32)> call_00656c20;  // (from the original)

u32 f_00673ac4(u32 r0, u32 r1, u32 r2, u32 r3, float S0, float S1) {
    u32 ea = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r13 = guest::cpu()->r[13];
    u32 r14 = guest::cpu()->r[14];
    ea = r13 - 0x18;  // (from the original)
    *gptr<u32>(ea) = u32(r3);
    *gptr<u32>(ea + 4) = u32(r4);
    *gptr<u32>(ea + 8) = u32(r5);
    *gptr<u32>(ea + 0xc) = u32(r6);  // (from the original)
    *gptr<u32>(ea + 0x10) = u32(r7);  // (from the original)
    *gptr<u32>(ea + 0x14) = u32(r14);  // (from the original)
    r13 = r13 - 0x18;  // (from the original)
    r4 = r1;
    r6 = r2;
    r5 = r3;
    r7 = r0;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    r0 = call_00656c20(r0, r1, r2, r3);
    S0 = std::bit_cast<float>(*gptr<u32>(0x673b58u));  // (from the original)
    r2 = r0;
    r1 = std::bit_cast<u32>(std::bit_cast<float>(vcvt_sz_f(std::bit_cast<float>(*gptr<u32>(r4)) * S0)));
    ea = r13;
    *gptr<u16>(ea) = u16(r1);
    ea = r0 + 0xeu;  // (from the original)
    *gptr<u16>(ea) = u16(r1);
    r0 = ea;
    r3 = std::bit_cast<u32>(std::bit_cast<float>(vcvt_sz_f(std::bit_cast<float>(*gptr<u32>(r4 + 4u)) * S0)));
    ea = r13;
    *gptr<u16>(ea) = u16(r3);
    ea = r0 + 2u;
    *gptr<u16>(ea) = u16(r3);
    S1 = std::bit_cast<float>(*gptr<u32>(r4 + 8u));
    S0 = std::bit_cast<float>(vcvt_sz_f(S1 * S0));
    r3 = std::bit_cast<u32>(S0);
    ea = r13;
    *gptr<u16>(ea) = u16(r3);
    ea = r0 + 4u;
    *gptr<u16>(ea) = u16(r3);
    ea = r6;
    r3 = 0u;
    r1 = u32(s32(u32(*gptr<u16>(ea))) >> 8);
    ea = r2 + 0x14u;  // (from the original)
    *gptr<u8>(ea) = u8(r1);
    *gptr<u8>(r0 + 7u) = u8(r5);
    r13 = r13 + 4u;
    r0 = r7;
    ea = r13;
    r13 = r13 + 0x14;  // (from the original)
    r4 = *gptr<u32>(ea);
    r5 = *gptr<u32>(ea + 4);
    r6 = *gptr<u32>(ea + 8);
    r7 = *gptr<u32>(ea + 0xc);  // (from the original)
    r14 = *gptr<u32>(ea + 0x10);  // (from the original)
    r1 = 0x33u;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->r[4] = r4;
    guest::cpu()->r[5] = r5;
    guest::cpu()->r[6] = r6;
    guest::cpu()->r[7] = r7;
    return call_0064d0b8(r0, r1, r2, r3);
}

}  // namespace d_00673ac4
GUEST_EXPORT(0x00673ac4, d_00673ac4::f_00673ac4);

// f_00673b5c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00673b5c {

inline constexpr guest::Function<0x0064d0b8, u32(u32, u32, u32, u32)> call_0064d0b8;  // (from the original)
inline constexpr guest::Function<0x00656c20, u32(u32, u32, u32, u32)> call_00656c20;  // (from the original)

u32 f_00673b5c(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 ea = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 0x18;  // (from the original)
    r4 = r1;
    r5 = r2;
    r6 = r3;
    r7 = r0;
    guest::cpu()->r[13] = r13;
    r0 = call_00656c20(r0, r1, r2, r3);
    r2 = r0;
    ea = r0 + 0xeu;  // (from the original)
    *gptr<u8>(ea) = u8(r4);
    r0 = ea;
    r3 = 0u;
    *gptr<u8>(r0 + 1u) = u8(r5);
    *gptr<u8>(r0 + 2u) = u8(r6);
    r0 = r7;
    r13 = r13 + 0x18;  // (from the original)
    r1 = 0x6au;  // (from the original)
    guest::cpu()->r[13] = r13;
    return call_0064d0b8(r0, r1, r2, r3);
}

}  // namespace d_00673b5c
GUEST_EXPORT(0x00673b5c, d_00673b5c::f_00673b5c);

// f_006742c0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006742c0 {

struct __attribute__((packed)) Object_006742c0_0 {
    u8 unknown_0[0x171];  // (not used here)
    u8 byte_171;
    u8 unknown_172[0x5];  // (not used here)
    u8 byte_177;
};
GUEST_OFFSET(Object_006742c0_0, byte_171, 0x171);  // (from the original)
GUEST_OFFSET(Object_006742c0_0, byte_177, 0x177);  // (from the original)

inline constexpr guest::Function<0x0052c9fc, u32(u32, u32, u32, u32)> call_0052c9fc;  // (from the original)
inline constexpr guest::Function<0x005c5318, u32(u32, u32, u32, u32)> call_005c5318;  // (from the original)
inline constexpr guest::Function<0x0064d0b8, u32(u32, u32, u32, u32)> call_0064d0b8;  // (from the original)
inline constexpr guest::Function<0x006651b4, u32(u32, u32, u32, u32)> call_006651b4;  // (from the original)

u32 f_006742c0(gptr<Object_006742c0_0> arg0, u32 r1, u32 r2, u32 r3) {
    u32 res = 0;
    u32 r0 = arg0.addr();
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r5 = r0;
    r4 = r0 + 0x171u;  // (from the original)
    res = u32(arg0->byte_171) << 0x1a >> 0x1f;  // (from the original)
    r0 = res;
    if (res == 0) {
        goto L_674364;
    }
    r0 = u32(arg0->byte_177);
    if ((r0 & 1u) != 0) {
        res = r0 << 0x1e >> 0x1f;  // (from the original)
        r1 = res;
        if (res == 0) {
            r0 = r0 | 2u;
            arg0->byte_177 = u8(r0);
            r0 = call_0052c9fc(r0, r1, r2, r3);
            r1 = guest::cpu()->r[1];
        }
        goto L_674360;
    }
    r1 = r0 | 1u;
    r0 = 0u;
    *gptr<u8>(r4 + 6u) = u8(r1);
    r0 = call_005c5318(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = u32(*gptr<u8>(r4 + 7u));
    if ((r0 & 1u) != 0) {
        r1 = 0u;
        r0 = r5;
        r0 = call_006651b4(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        goto L_674360;
    }
    res = r0 << 0x1e >> 0x1f;  // (from the original)
    r1 = res;
    if (res == 0) {
        goto L_674360;
    } else {
        *gptr<u8>(r4 + 7u) = u8(r0 & ~2u);
    }
    r3 = 0u;
    r2 = r3;
    r1 = 0xe0u;  // (from the original)
    r0 = r5;
    r0 = call_0064d0b8(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
L_674360:;
    r0 = 1u;
L_674364:;
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_006742c0
GUEST_EXPORT(0x006742c0, d_006742c0::f_006742c0);

// f_00677b70: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00677b70 {

inline constexpr guest::Function<0x001b7b90, u32(u32, u32, u32, u32)> call_001b7b90;  // (from the original)
inline constexpr guest::Function<0x0064f068, u32(u32, u32, u32, u32)> call_0064f068;  // (from the original)

u32 f_00677b70() {
    u32 r0 = 0;
    u32 r1 = 0;
    r1 = 0x40u;  // (from the original)
    r0 = 9u;
    guest::cpu()->r[13] -= 8u;
    r0 = call_0064f068(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 == 0) {
        r0 = 1u;
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r0 = *gptr<u32>(0x95c71cu);  // (from the original)
    if (r0 != 0) {
        r0 = call_001b7b90(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
    }
    r0 = 1u;
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_00677b70
GUEST_EXPORT(0x00677b70, d_00677b70::f_00677b70);

// f_00678300: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00678300 {

inline constexpr guest::Function<0x005d41b8, u32(u32, u32, u32, u32)> call_005d41b8;  // (from the original)
inline constexpr guest::Function<0x0064d0b8, u32(u32, u32, u32, u32)> call_0064d0b8;  // (from the original)
inline constexpr guest::Function<0x00656c20, u32(u32, u32, u32, u32)> call_00656c20;  // (from the original)

u32 f_00678300(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r9 = guest::cpu()->r[9];
    guest::cpu()->r[13] -= 0x20u;  // (from the original)
    r6 = r2;
    r8 = r1;
    r7 = r3;
    r5 = r0;
    r0 = call_00656c20(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r9 = r0;
    r4 = r0 + 0xeu;  // (from the original)
    *gptr<u8>(r0 + 0x13u) = u8(r7);  // (from the original)
    r1 = r5 + 0x14u;  // (from the original)
    r0 = r4;
    r0 = call_005d41b8(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    *gptr<u8>(r4 + 4u) = u8(u32(s32(u32(*gptr<u16>(r5 + 0x2eu))) >> 8));  // (from the original)
    if (r8 != 0) {
        r1 = r8;
        r0 = r4;
        r0 = call_005d41b8(r0, r1, r2, r3);
    }
    if (r6 != 0) {
        *gptr<u8>(r4 + 4u) = u8(u32(s32(u32(*gptr<u16>(r6))) >> 8));
    }
    r2 = r9;
    r0 = r5;
    guest::cpu()->r[13] += 0x20u;  // (from the original)
    r3 = 0u;
    r1 = 0xe2u;  // (from the original)
    return call_0064d0b8(r0, r1, r2, r3);
}

}  // namespace d_00678300
GUEST_EXPORT(0x00678300, d_00678300::f_00678300);

// f_0067837c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0067837c {

struct __attribute__((packed)) Object_0067837c_0 {
    u8 unknown_0[0x1a9];  // (not used here)
    u8 byte_1a9;
};
GUEST_OFFSET(Object_0067837c_0, byte_1a9, 0x1a9);  // (from the original)

inline constexpr guest::Function<0x0064d0b8, u32(u32, u32, u32, u32)> call_0064d0b8;  // (from the original)
inline constexpr guest::Function<0x00656c20, u32(u32, u32, u32, u32)> call_00656c20;  // (from the original)

u32 f_0067837c(gptr<Object_0067837c_0> arg0, u32 r1, u32 r2, u32 r3) {
    u32 r0 = arg0.addr();
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r5 = r0;
    r4 = r1;
    if (u32(arg0->byte_1a9) == 0x88u) {  // (from the original)
        r0 = 1u;
        goto L_6783bc;
    }
    r0 = r5;
    r0 = call_00656c20(r0, r1, r2, r3);
    r2 = r0;
    *gptr<u8>(r0 + 0xeu) = u8(r4);  // (from the original)
    r0 = r5;
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    r3 = 0u;
    r1 = 0x88u;  // (from the original)
    return call_0064d0b8(r0, r1, r2, r3);
L_6783bc:;
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_0067837c
GUEST_EXPORT(0x0067837c, d_0067837c::f_0067837c);

// f_006783c0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006783c0 {

inline constexpr guest::Function<0x005d41b8, u32(u32, u32, u32, u32)> call_005d41b8;  // (from the original)
inline constexpr guest::Function<0x0064d0b8, u32(u32, u32, u32, u32)> call_0064d0b8;  // (from the original)
inline constexpr guest::Function<0x00656c20, u32(u32, u32, u32, u32)> call_00656c20;  // (from the original)

u32 f_006783c0(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r9 = guest::cpu()->r[9];
    guest::cpu()->r[13] -= 0x20u;  // (from the original)
    r5 = r1;
    r7 = r2;
    r6 = r3;
    r9 = r0;
    r0 = call_00656c20(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r8 = r0;
    r4 = r0 + 0xeu;  // (from the original)
    *gptr<u8>(r0 + 0xeu) = u8(r5);  // (from the original)
    r5 = r6 << 0x10 >> 0x18;  // (from the original)
    if (r7 != 0) {
        r1 = r7;
        r0 = r4 + 1u;
        r0 = call_005d41b8(r0, r1, r2, r3);
        *gptr<u8>(r4 + 5u) = u8(r5);
    } else {
        r1 = 0xae5658u;  // (from the original)
        r0 = r4 + 1u;
        r0 = call_005d41b8(r0, r1, r2, r3);
        *gptr<u8>(r4 + 5u) = u8(r5);
    }
    r2 = r8;
    r0 = r9;
    guest::cpu()->r[13] += 0x20u;  // (from the original)
    r3 = 0u;
    r1 = 0x89u;  // (from the original)
    return call_0064d0b8(r0, r1, r2, r3);
}

}  // namespace d_006783c0
GUEST_EXPORT(0x006783c0, d_006783c0::f_006783c0);

// f_00678434: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00678434 {

inline constexpr guest::Function<0x005d41b8, u32(u32, u32, u32, u32)> call_005d41b8;  // (from the original)
inline constexpr guest::Function<0x0064d0b8, u32(u32, u32, u32, u32)> call_0064d0b8;  // (from the original)
inline constexpr guest::Function<0x00656c20, u32(u32, u32, u32, u32)> call_00656c20;  // (from the original)

u32 f_00678434(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 ea = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r9 = guest::cpu()->r[9];
    u32 r10 = guest::cpu()->r[10];
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 0x20;  // (from the original)
    r6 = r1;
    r7 = r2;
    r10 = r0;
    r9 = r3;
    ea = r13 + 0x20u;  // (from the original)
    r4 = *gptr<u32>(ea);
    r5 = *gptr<u32>(ea + 4);
    guest::cpu()->r[13] = r13;
    r0 = call_00656c20(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    r8 = r0;
    r0 = r0 + 0xeu;  // (from the original)
    r2 = 0u;
    *gptr<u8>(r8 + 0x14u) = u8(r2);  // (from the original)
    *gptr<u8>(r0 + 8u) = u8(r5);
    *gptr<u32>(r0 + 2u) = u32(*gptr<u32>(r4));
    *gptr<u8>(r0) = u8(r6);
    *gptr<u8>(r0 + 1u) = u8(r7);
    *gptr<u8>(r0 + 7u) = u8(r2);
    r1 = r9;
    r0 = r0 + 9u;
    guest::cpu()->r[13] = r13;
    r0 = call_005d41b8(r0, r1, r2, r3);
    r2 = r8;
    r0 = r10;
    r13 = r13 + 0x20;  // (from the original)
    r3 = 0u;
    r1 = 0x50u;  // (from the original)
    guest::cpu()->r[13] = r13;
    return call_0064d0b8(r0, r1, r2, r3);
}

}  // namespace d_00678434
GUEST_EXPORT(0x00678434, d_00678434::f_00678434);

// f_006784dc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006784dc {

struct __attribute__((packed)) Object_006784dc_0 {
    u8 unknown_0[0x2e];  // (not used here)
    u16 half_2e;
    u8 unknown_30[0xa28];  // (not used here)
    u32 word_a58;
    u32 word_a5c;
};
GUEST_OFFSET(Object_006784dc_0, half_2e, 0x2e);  // (from the original)
GUEST_OFFSET(Object_006784dc_0, word_a58, 0xa58);  // (from the original)
GUEST_OFFSET(Object_006784dc_0, word_a5c, 0xa5c);  // (from the original)

inline constexpr guest::Function<0x002073dc, u32(u32, u32, u32, u32)> call_002073dc;  // (from the original)
inline constexpr guest::Function<0x0070ac68, u32(u32, u32, u32, u32)> call_0070ac68;  // (from the original)

u32 f_006784dc(gptr<Object_006784dc_0> arg0) {
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
    r13 = r13 - 0x30u;  // (from the original)
    r4 = r0;
    r0 = u32(arg0->half_2e);
    r2 = 0u;
    *gptr<u16>(r13 + 0xcu) = u16(r2);  // (from the original)
    *gptr<u16>(r13 + 0xeu) = u16(r0);  // (from the original)
    *gptr<u16>(r13 + 0x10u) = u16(r2);  // (from the original)
    r0 = arg0->word_a58;
    r8 = 0xae5664u;  // (from the original)
    r6 = r2;
    r7 = 1u;
    if (r0 != 0) {
        if (arg0->word_a5c == *gptr<u32>(r0 + 0xcu)) {  // (from the original)
            goto L_67855c;
        }
    }
    r2 = *gptr<u32>(r4 + 0x260u);  // (from the original)
    r3 = 1u;
    r1 = r4 + 0x430u;  // (from the original)
    r0 = r4 + 0x1b4u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0070ac68(r0, r1, r2, r3);
    r2 = r4 + 0x430u;  // (from the original)
    r3 = r13 + 0xcu;  // (from the original)
    r1 = 0x148u;  // (from the original)
    r0 = r4 + 0xa4cu;  // (from the original)
    *gptr<u32>(r13 + 8u) = u32(r6);
    *gptr<u32>(r13 + 4u) = u32(r7);
    *gptr<u32>(r13) = u32(r8);
    guest::cpu()->r[13] = r13;
    r0 = call_002073dc(r0, r1, r2, r3);
L_67855c:;
    r0 = *gptr<u32>(r4 + 0xa70u);  // (from the original)
    if (r0 != 0) {
        r1 = *gptr<u32>(r4 + 0xa74u);  // (from the original)
        r0 = *gptr<u32>(r0 + 0xcu);  // (from the original)
        if (r1 == r0) {
            goto L_6785b8;
        }
    }
    r1 = r4 + 0x43cu;  // (from the original)
    r2 = *gptr<u32>(r4 + 0x264u);  // (from the original)
    r3 = 1u;
    r5 = r1;
    r0 = r4 + 0x1b4u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0070ac68(r0, r1, r2, r3);
    r3 = r13 + 0xcu;  // (from the original)
    r2 = r5;
    r1 = 0x148u;  // (from the original)
    r0 = r4 + 0xa64u;  // (from the original)
    *gptr<u32>(r13 + 8u) = u32(r6);
    *gptr<u32>(r13 + 4u) = u32(r7);
    *gptr<u32>(r13) = u32(r8);
    guest::cpu()->r[13] = r13;
    r0 = call_002073dc(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
L_6785b8:;
    r13 = r13 + 0x30u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_006784dc
GUEST_EXPORT(0x006784dc, d_006784dc::f_006784dc);

// f_0067bc50: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0067bc50 {

inline constexpr guest::Function<0x001d2e8c, u32(u32, u32, u32, u32)> call_001d2e8c;  // (from the original)
inline constexpr guest::Function<0x001d32c8, u32(u32, u32, u32, u32)> call_001d32c8;  // (from the original)

u32 f_0067bc50(u32 r0, u32 r1_unused, u32 r2) {
    u32 r1 = 0;
    u32 r4 = guest::cpu()->r[4];
    guest::cpu()->r[13] -= 8u;
    r4 = r0;
    r1 = r0 + 0x920u;  // (from the original)
    r0 = r0 + 0x1b4u;  // (from the original)
    r0 = call_001d32c8(r0, r1, r2, guest::cpu()->r[3]);
    r2 = *gptr<u32>(r4 + 0x944u);  // (from the original)
    r1 = u32(*gptr<u8>(r4 + 0x942u));  // (from the original)
    r0 = r4 + 0x1b4u;  // (from the original)
    r0 = call_001d2e8c(r0, r1, r2, guest::cpu()->r[3]);
    *gptr<u32>(r4 + 0x3e0u) = u32(*gptr<u32>(r4 + 0x948u));  // (from the original)
    r0 = u32(*gptr<u8>(r4 + 0x94cu));  // (from the original)
    *gptr<u8>(r4 + 0x3e8u) = u8(r0);  // (from the original)
    r1 = u32(*gptr<u8>(r4 + 0x173u)) | 8u | 0x20u;  // (from the original)
    *gptr<u8>(r4 + 0x173u) = u8(r1);  // (from the original)
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_0067bc50
GUEST_EXPORT(0x0067bc50, d_0067bc50::f_0067bc50);

// f_0067bc98: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0067bc98 {

struct __attribute__((packed)) Object_0067bc98_0 {
    u8 unknown_0[0x171];  // (not used here)
    u8 byte_171;
    u8 unknown_172[0x758];  // (not used here)
    u8 byte_8ca;
    u8 byte_8cb;
};
GUEST_OFFSET(Object_0067bc98_0, byte_171, 0x171);  // (from the original)
GUEST_OFFSET(Object_0067bc98_0, byte_8ca, 0x8ca);  // (from the original)
GUEST_OFFSET(Object_0067bc98_0, byte_8cb, 0x8cb);  // (from the original)

inline constexpr guest::Function<0x00597784, u32(u32, u32, u32, u32)> call_00597784;  // (from the original)
inline constexpr guest::Function<0x00659630, u32(u32, u32, u32, u32)> call_00659630;  // (from the original)

u32 f_0067bc98(gptr<Object_0067bc98_0> arg0, u32 r1) {
    u32 r0 = arg0.addr();
    u32 r2 = 0;
    u32 r3 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r4 = r0;
    r3 = r1;
    r1 = u32(arg0->byte_171);
    if ((r1 & 1u) == 0) {
        r0 = 0u;
        goto L_67bcf0;
    } else {
        arg0->byte_171 = u8(r1 & ~1u);
    }
    r5 = sxtb(u32(arg0->byte_8cb));
    r6 = sxtb(u32(arg0->byte_8ca));
    r2 = r5;
    r1 = r6;
    r0 = r4;
    r0 = call_00659630(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    r2 = r5;
    r1 = r6;
    r0 = r4;
    r0 = call_00597784(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r0 = 1u;
L_67bcf0:;
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_0067bc98
GUEST_EXPORT(0x0067bc98, d_0067bc98::f_0067bc98);

// f_0067bd70: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0067bd70 {

inline constexpr guest::Function<0x001b7b10, u32(u32, u32, u32, u32)> call_001b7b10;  // (from the original)
inline constexpr guest::Function<0x0064f068, u32(u32, u32, u32, u32)> call_0064f068;  // (from the original)

u32 f_0067bd70() {
    u32 r0 = 0;
    u32 r1 = 0;
    r1 = 0x40u;  // (from the original)
    r0 = 9u;
    guest::cpu()->r[13] -= 8u;
    r0 = call_0064f068(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 == 0) {
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r0 = *gptr<u32>(0x95c71cu);  // (from the original)
    if (r0 == 0) {
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    guest::cpu()->r[13] += 8u;
    return call_001b7b10(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_0067bd70
GUEST_EXPORT(0x0067bd70, d_0067bd70::f_0067bd70);

// f_0067bda8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0067bda8 {

struct __attribute__((packed)) Object_0067bda8_0 {
    u8 unknown_0[0x2e];  // (not used here)
    u16 half_2e;
    u8 unknown_30[0x230];  // (not used here)
    u32 word_260;
    u8 unknown_264[0x7f4];  // (not used here)
    u32 word_a58;
    u32 word_a5c;
};
GUEST_OFFSET(Object_0067bda8_0, half_2e, 0x2e);  // (from the original)
GUEST_OFFSET(Object_0067bda8_0, word_260, 0x260);  // (from the original)
GUEST_OFFSET(Object_0067bda8_0, word_a58, 0xa58);  // (from the original)
GUEST_OFFSET(Object_0067bda8_0, word_a5c, 0xa5c);  // (from the original)

inline constexpr guest::Function<0x002e6500, u32(u32, u32, u32, u32)> call_002e6500;  // (from the original)
inline constexpr guest::Function<0x0070ac68, u32(u32, u32, u32, u32)> call_0070ac68;  // (from the original)

u32 f_0067bda8(gptr<Object_0067bda8_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r1 = 0;
    u32 r2 = 0;
    u32 r3 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 0x18u;  // (from the original)
    r1 = u32(arg0->half_2e);
    r2 = 0u;
    *gptr<u16>(r13) = u16(r2);
    r4 = r0;
    *gptr<u16>(r13 + 2u) = u16(r1);
    *gptr<u16>(r13 + 4u) = u16(r2);
    r0 = arg0->word_a58;
    if (r0 == 0) {
        goto L_67be10;
    }
    r1 = arg0->word_a5c;
    if (r1 != *gptr<u32>(r0 + 0xcu)) {  // (from the original)
        goto L_67be10;
    }
    r2 = arg0->word_260;
    r3 = 1u;
    r1 = r4 + 0x430u;  // (from the original)
    r0 = r4 + 0x1b4u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0070ac68(r0, r1, r2, r3);
    r1 = r4 + 0x430u;  // (from the original)
    r3 = 1u;
    r2 = r13;
    r0 = r4 + 0xa4cu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002e6500(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
L_67be10:;
    r0 = *gptr<u32>(r4 + 0xa70u);  // (from the original)
    if (r0 == 0) {
        r13 = r13 + 0x18u;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    r1 = *gptr<u32>(r4 + 0xa74u);  // (from the original)
    r0 = *gptr<u32>(r0 + 0xcu);  // (from the original)
    if (r1 != r0) {
        r13 = r13 + 0x18u;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    r1 = r4 + 0x43cu;  // (from the original)
    r2 = *gptr<u32>(r4 + 0x264u);  // (from the original)
    r3 = 1u;
    r5 = r1;
    r0 = r4 + 0x1b4u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0070ac68(r0, r1, r2, r3);
    r3 = 1u;
    r2 = r13;
    r1 = r5;
    r0 = r4 + 0xa64u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002e6500(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r13 = r13 + 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_0067bda8
GUEST_EXPORT(0x0067bda8, d_0067bda8::f_0067bda8);

// f_0067be68: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0067be68 {


u32 f_0067be68() {
    u32 r0 = 0;
    float S0 = 0;
    r0 = 0x886c44u;  // (from the original)
    S0 = float(std::bit_cast<u32>(std::bit_cast<float>(*gptr<u32>(r0))));
    guest::cpu()->s[0] = S0;
    return r0;
}

}  // namespace d_0067be68
GUEST_EXPORT(0x0067be68, d_0067be68::f_0067be68);

// f_0067be7c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0067be7c {


u32 f_0067be7c() {
    u32 r0 = 0;
    float S0 = 0;
    r0 = 0x886c48u;  // (from the original)
    S0 = float(std::bit_cast<u32>(std::bit_cast<float>(*gptr<u32>(r0))));
    guest::cpu()->s[0] = S0;
    return r0;
}

}  // namespace d_0067be7c
GUEST_EXPORT(0x0067be7c, d_0067be7c::f_0067be7c);

// f_0067be90: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0067be90 {


u32 f_0067be90() {
    u32 r0 = 0;
    float S0 = 0;
    float S1 = 0;
    r0 = 0x886954u;  // (from the original)
    S1 = std::bit_cast<float>(*gptr<u32>(0x67bea8u));  // (from the original)
    S0 = std::bit_cast<float>(*gptr<u32>(r0)) * S1;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    return r0;
}

}  // namespace d_0067be90
GUEST_EXPORT(0x0067be90, d_0067be90::f_0067be90);

// f_0067beac: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0067beac {


u32 f_0067beac() {
    u32 r0 = 0;
    float S0 = 0;
    r0 = 0x886c48u;  // (from the original)
    S0 = float(std::bit_cast<u32>(std::bit_cast<float>(*gptr<u32>(r0))));
    guest::cpu()->s[0] = S0;
    return r0;
}

}  // namespace d_0067beac
GUEST_EXPORT(0x0067beac, d_0067beac::f_0067beac);

// f_0067e900: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0067e900 {

struct __attribute__((packed)) Object_0067e900_0 {
    u8 unknown_0[0x5de];  // (not used here)
    u16 half_5de;
    u8 unknown_5e0[0x3a4];  // (not used here)
    u8 byte_984;
    u8 unknown_985[0x3];  // (not used here)
    u32 word_988;
    u32 word_98c;
    u32 word_990;
};
GUEST_OFFSET(Object_0067e900_0, half_5de, 0x5de);  // (from the original)
GUEST_OFFSET(Object_0067e900_0, byte_984, 0x984);  // (from the original)
GUEST_OFFSET(Object_0067e900_0, word_988, 0x988);  // (from the original)
GUEST_OFFSET(Object_0067e900_0, word_98c, 0x98c);  // (from the original)
GUEST_OFFSET(Object_0067e900_0, word_990, 0x990);  // (from the original)


void f_0067e900(gptr<Object_0067e900_0> arg0) {
    u32 r1 = 0;
    arg0->half_5de = u16(0xfu);  // (from the original)
    arg0->byte_984 = u8(0u);
    r1 = 0xae5658u;  // (from the original)
    arg0->word_988 = u32(*gptr<u32>(r1));
    arg0->word_98c = u32(*gptr<u32>(r1 + 4u));
    r1 = *gptr<u32>(r1 + 8u);
    arg0->word_990 = u32(r1);
    guest::cpu()->r[1] = r1;
    return;
}

}  // namespace d_0067e900
GUEST_EXPORT(0x0067e900, d_0067e900::f_0067e900);

// f_0067e9e8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0067e9e8 {

inline constexpr guest::Function<0x0014fbac, u32(u32, u32, u32, u32)> call_0014fbac;  // (from the original)
inline constexpr guest::Function<0x006dfde8, u32(u32, u32, u32, u32)> call_006dfde8;  // (from the original)

u32 f_0067e9e8(u32 r0, u32 r1) {
    u32 r4 = guest::cpu()->r[4];
    guest::cpu()->r[13] -= 8u;
    r4 = r0;
    if (u32(*gptr<u8>(0x9506b0u)) != 0xffu) {  // (from the original)
        r0 = 0u;
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r0 = *gptr<u32>(0x9506b4u);  // (from the original)
    if (r0 == 0) {
        r0 = 0u;
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r0 = call_006dfde8(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 == 0) {
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r1 = r4;
    r0 = call_0014fbac(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r0 = 1u;
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_0067e9e8
GUEST_EXPORT(0x0067e9e8, d_0067e9e8::f_0067e9e8);

// f_0067eb40: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0067eb40 {

struct __attribute__((packed)) Object_0067eb40_0 {
    u8 unknown_0[0x171];  // (not used here)
    u8 byte_171;
    u8 unknown_172[0x7a2];  // (not used here)
    u32 word_914;
    u8 unknown_918[0x7];  // (not used here)
    u8 byte_91f;
};
GUEST_OFFSET(Object_0067eb40_0, byte_171, 0x171);  // (from the original)
GUEST_OFFSET(Object_0067eb40_0, word_914, 0x914);  // (from the original)
GUEST_OFFSET(Object_0067eb40_0, byte_91f, 0x91f);  // (from the original)

inline constexpr guest::Function<0x00659c08, u32(u32, u32, u32, u32)> call_00659c08;  // (from the original)
inline constexpr guest::Function<0x00677d1c, u32(u32, u32, u32, u32)> call_00677d1c;  // (from the original)
inline constexpr guest::Function<0x0067a478, u32(u32, u32, u32, u32)> call_0067a478;  // (from the original)

u32 f_0067eb40(gptr<Object_0067eb40_0> arg0, u32 r1, float S0, float S1) {
    u32 res = 0;
    u32 r0 = arg0.addr();
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 zf = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r4 = r0;
    r6 = r1;
    r5 = r0 + 0x171u;  // (from the original)
    res = u32(arg0->byte_171) << 0x1a >> 0x1f;  // (from the original)
    zf = res == 0;
    r0 = res;
    if (!zf) {
        r0 = u32(arg0->byte_91f);
        zf = r0 == 0;
    }
    if (zf) {
        goto L_67ec30;
    }
    r0 = r4 + 0x800u;  // (from the original)
    S1 = std::bit_cast<float>(*gptr<u32>(0x67ec3cu));  // (from the original)
    S0 = std::bit_cast<float>(arg0->word_914);
    if (!u32(S0 == S1)) {
        guest::cpu()->s[0] = S0;
        guest::cpu()->s[1] = S1;
        r0 = call_0067a478(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        S0 = guest::cpu()->s[0];
        S1 = guest::cpu()->s[1];
        r0 = r4;
        guest::cpu()->s[0] = S0;
        guest::cpu()->s[1] = S1;
        r0 = call_00659c08(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        S0 = guest::cpu()->s[0];
        S1 = guest::cpu()->s[1];
        if (r0 != 0) {
            goto L_67ec2c;
        }
    }
    if (r6 == 0) {
        goto L_67ebec;
    }
    r0 = u32(*gptr<u8>(r4 + 0x91au));  // (from the original)
    res = r0 << 0x1e >> 0x1f;  // (from the original)
    r1 = res;
    if (res == 0) {
        goto L_67ebd4;
    }
L_67ebb0:;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    r0 = call_0067a478(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    r0 = r4;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    r0 = call_00659c08(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    if (r0 == 0) {
        goto L_67ebec;
    }
    goto L_67ec2c;
L_67ebd4:;
    res = r0 << 0x1d >> 0x1f;  // (from the original)
    r1 = res;
    if (res != 0) {
        guest::preempt();
        goto L_67ebb0;
    }
    res = r0 << 0x1c >> 0x1f;  // (from the original)
    r0 = res;
    if (res != 0) {
        guest::preempt();
        goto L_67ebb0;
    }
L_67ebec:;
    r1 = 1u;
    r0 = r4;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    r0 = call_00677d1c(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    if (r0 == 0) {
        goto L_67ec34;
    }
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    r0 = call_0067a478(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    r0 = r4;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    r0 = call_00659c08(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    if (r0 == 0) {
        goto L_67ec34;
    }
    *gptr<u8>(r5 + 7u) = u8(u32(*gptr<u8>(r5 + 7u)) | 8u);
L_67ec2c:;
    r0 = 1u;
L_67ec30:;
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    return r0;
L_67ec34:;
    r0 = 0u;
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    return r0;
}

}  // namespace d_0067eb40
GUEST_EXPORT(0x0067eb40, d_0067eb40::f_0067eb40);

// f_0067ee38: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0067ee38 {

inline constexpr guest::Function<0x005d41b8, u32(u32, u32, u32, u32)> call_005d41b8;  // (from the original)
inline constexpr guest::Function<0x0064d0b8, u32(u32, u32, u32, u32)> call_0064d0b8;  // (from the original)
inline constexpr guest::Function<0x00656c20, u32(u32, u32, u32, u32)> call_00656c20;  // (from the original)

u32 f_0067ee38(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r9 = guest::cpu()->r[9];
    u32 r10 = guest::cpu()->r[10];
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 0x20;  // (from the original)
    r6 = r3;
    r7 = r2;
    r10 = r0;
    r5 = *gptr<u32>(r13 + 0x20u);  // (from the original)
    r9 = r1;
    guest::cpu()->r[13] = r13;
    r0 = call_00656c20(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r8 = r0;
    r4 = r0 + 0xeu;  // (from the original)
    r1 = r9;
    r0 = r0 + 0xfu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_005d41b8(r0, r1, r2, r3);
    *gptr<u8>(r8 + 0x13u) = u8(u32(s32(r7) >> 8));  // (from the original)
    *gptr<u8>(r4) = u8(r6);
    r2 = r8;
    r0 = r10;
    *gptr<u8>(r8 + 0x14u) = u8(r5);  // (from the original)
    r13 = r13 + 0x20;  // (from the original)
    r3 = 0u;
    r1 = 0x79u;  // (from the original)
    guest::cpu()->r[13] = r13;
    return call_0064d0b8(r0, r1, r2, r3);
}

}  // namespace d_0067ee38
GUEST_EXPORT(0x0067ee38, d_0067ee38::f_0067ee38);

// f_0067ee90: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0067ee90 {

inline constexpr guest::Function<0x005d41b8, u32(u32, u32, u32, u32)> call_005d41b8;  // (from the original)
inline constexpr guest::Function<0x0064d0b8, u32(u32, u32, u32, u32)> call_0064d0b8;  // (from the original)
inline constexpr guest::Function<0x00656c20, u32(u32, u32, u32, u32)> call_00656c20;  // (from the original)

u32 f_0067ee90(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 ea = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r9 = guest::cpu()->r[9];
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 0x20;  // (from the original)
    r5 = r1;
    r6 = r2;
    r9 = r0;
    r4 = *gptr<u32>(r13 + 0x20u);  // (from the original)
    r8 = r3;
    guest::cpu()->r[13] = r13;
    r0 = call_00656c20(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r7 = r0;
    ea = r0 + 0xeu;  // (from the original)
    *gptr<u8>(ea) = u8(r5);
    r0 = ea;
    r1 = r8;
    *gptr<u8>(r0 + 1u) = u8(r6);
    r0 = r0 + 2u;
    guest::cpu()->r[13] = r13;
    r0 = call_005d41b8(r0, r1, r2, r3);
    r2 = r7;
    r0 = r9;
    r3 = 0u;
    *gptr<u8>(r7 + 0x14u) = u8(u32(s32(u32(*gptr<u16>(r4))) >> 8));  // (from the original)
    r13 = r13 + 0x20;  // (from the original)
    r1 = 0x69u;  // (from the original)
    guest::cpu()->r[13] = r13;
    return call_0064d0b8(r0, r1, r2, r3);
}

}  // namespace d_0067ee90
GUEST_EXPORT(0x0067ee90, d_0067ee90::f_0067ee90);

// f_0067eee8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0067eee8 {

inline constexpr guest::Function<0x0067f020, u32(u32, u32, u32, u32)> call_0067f020;  // (from the original)

u32 f_0067eee8(u32 r0, u32 r1, u32 r2, u32 r3) {
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
    r13 = r13 - 0x90u;  // (from the original)
    r12 = r13 + 0x20u;  // (from the original)
    r8 = 0u;
    r6 = r13 + 0x2eu;  // (from the original)
    r9 = r8;
    ea = r13 + 0x9cu;  // (from the original)
    r0 = *gptr<u32>(ea);
    r14 = *gptr<u32>(ea + 8);
    r5 = r8;
    r7 = *gptr<u32>(r13 + 0x90u);  // (from the original)
    r11 = *gptr<u32>(r13 + 0x98u);  // (from the original)
    *gptr<u32>(r13 + 0x40u) = u32(*gptr<u32>(ea + 4));  // (from the original)
    *gptr<u32>(r13 + 0x18u) = u32(r14);  // (from the original)
    r14 = r13 + 0x22u;  // (from the original)
    *gptr<u32>(r13 + 0x38u) = u32(r8);  // (from the original)
    if (r14 >= r6) {
        goto L_67ef44;
    }
    do {
L_67ef2c:;
        r4 = r14 + 1u;
        *gptr<u8>(r14) = u8(r5);
        r14 = r14 + 6u;
        *gptr<u16>(r13 + 4u) = u16(r5);
        *gptr<u16>(r4) = u16(r5);
        guest::preempt();
    } while (r14 < r6);
L_67ef44:;
    r14 = 0u;
    *gptr<u8>(r12) = u8(r14);
    *gptr<u8>(r12 + 0xeu) = u8(r14);  // (from the original)
    r4 = *gptr<u32>(0x95bfdcu);  // (from the original)
    *gptr<u32>(r12 + 0xfu) = u32(r4);  // (from the original)
    *gptr<u8>(r12 + 0x13u) = u8(r5);  // (from the original)
    *gptr<u8>(r12 + 0x14u) = u8(r5);  // (from the original)
    *gptr<u16>(r12 + 0x16u) = u16(u32(*gptr<u16>(r12 + 0x16u)) & ~0x1fu);  // (from the original)
    *gptr<u8>(r12) = u8(r1);
    *gptr<u8>(r12 + 2u) = u8(r2);
    *gptr<u16>(r13) = u16(r3);
    *gptr<u16>(r12 + 3u) = u16(r3);
    r3 = 0xeu;  // (from the original)
    *gptr<u16>(r12 + 6u) = u16(u32(*gptr<u16>(r12 + 6u)) & ~1u | r7);
    *gptr<u8>(r12 + 8u) = u8(r8);
    *gptr<u16>(r13) = u16(r9);
    *gptr<u16>(r12 + 9u) = u16(r9);
    *gptr<u16>(r12 + 0xcu) = u16(*gptr<u32>(r13 + 0x38u) | u32(*gptr<u16>(r12 + 0xcu)) & ~1u);  // (from the original)
    *gptr<u8>(r12 + 0xeu) = u8(r5);  // (from the original)
    r1 = r3 & *gptr<u32>(r13 + 0x40u) << 1;  // (from the original)
    *gptr<u32>(r12 + 0xfu) = u32(*gptr<u32>(*gptr<u32>(r13 + 0x94u)));  // (from the original)
    *gptr<u16>(r12 + 0x16u) = u16(((r0 | u32(*gptr<u16>(r12 + 0x16u)) & ~1u) & ~0xeu | r1) & ~0x10u);  // (from the original)
    *gptr<u8>(r12 + 0x14u) = u8(r11);  // (from the original)
    r1 = r13 + 0x20u;  // (from the original)
    *gptr<u8>(r12 + 0x13u) = u8(*gptr<u32>(r13 + 0x18u));  // (from the original)
    r2 = *gptr<u32>(r13 + 0xa8u);  // (from the original)
    r0 = *gptr<u32>(r13 + 0x5cu);  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0067f020(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r13 = r13 + 0x6cu;  // (from the original)
    if (r0 != 0) {
        r0 = 1u;
    }
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
}

}  // namespace d_0067eee8
GUEST_EXPORT(0x0067eee8, d_0067eee8::f_0067eee8);

// f_0067f020: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0067f020 {

inline constexpr guest::Function<0x0064d0b8, u32(u32, u32, u32, u32)> call_0064d0b8;  // (from the original)
inline constexpr guest::Function<0x00656c20, u32(u32, u32, u32, u32)> call_00656c20;  // (from the original)

u32 f_0067f020(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    guest::cpu()->r[13] -= 0x18u;  // (from the original)
    r6 = r1;
    r7 = r2;
    r5 = r0;
    r0 = call_00656c20(r0, r1, r2, r3);
    r4 = r0 + 0xeu;  // (from the original)
    r2 = r0;
    *gptr<u32>(r4) = u32(*gptr<u32>(r6));
    r3 = 0u;
    *gptr<u32>(r4 + 4u) = u32(*gptr<u32>(r6 + 4u));
    *gptr<u32>(r4 + 8u) = u32(*gptr<u32>(r6 + 8u));
    *gptr<u32>(r4 + 0xcu) = u32(*gptr<u32>(r6 + 0xcu));  // (from the original)
    *gptr<u32>(r4 + 0x10u) = u32(*gptr<u32>(r6 + 0x10u));  // (from the original)
    *gptr<u32>(r4 + 0x14u) = u32(*gptr<u32>(r6 + 0x14u));  // (from the original)
    *gptr<u32>(0x146cu + r5) = u32(r7);  // (from the original)
    r1 = 0x2au;  // (from the original)
    r0 = r5;
    r0 = call_0064d0b8(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    if (r0 == 0) {
        goto L_67f0b0;
    }
    r0 = u32(*gptr<u8>(r4));
    if (r0 < 3u) {
        if (r0 != 0) {
            goto L_67f0ac;
        }
    }
    if (u32(*gptr<u8>(r4 + 2u)) == 7u) {
        goto L_67f0b4;
    }
L_67f0ac:;
    r0 = 1u;
L_67f0b0:;
    guest::cpu()->r[13] += 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
L_67f0b4:;
    r1 = u32(*gptr<u8>(r5 + 0x17cu)) | 0x80u;  // (from the original)
    *gptr<u8>(r5 + 0x17cu) = u8(r1);  // (from the original)
    guest::preempt();
    goto L_67f0ac;
}

}  // namespace d_0067f020
GUEST_EXPORT(0x0067f020, d_0067f020::f_0067f020);

// f_0067f0c8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0067f0c8 {

inline constexpr guest::Function<0x0064d0b8, u32(u32, u32, u32, u32)> call_0064d0b8;  // (from the original)
inline constexpr guest::Function<0x00656c20, u32(u32, u32, u32, u32)> call_00656c20;  // (from the original)

u32 f_0067f0c8(u32 r0, u32 r1, u32 r2, u32 r3, float S0, float S1) {
    u32 ea = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r12 = 0;
    u32 r13 = guest::cpu()->r[13];
    u32 r14 = guest::cpu()->r[14];
    ea = r13 - 0x18;  // (from the original)
    *gptr<u32>(ea) = u32(r3);
    *gptr<u32>(ea + 4) = u32(r4);
    *gptr<u32>(ea + 8) = u32(r5);
    *gptr<u32>(ea + 0xc) = u32(r6);  // (from the original)
    *gptr<u32>(ea + 0x10) = u32(r7);  // (from the original)
    *gptr<u32>(ea + 0x14) = u32(r14);  // (from the original)
    r13 = r13 - 0x18;  // (from the original)
    r5 = r1;
    r6 = r2;
    r4 = r3;
    r7 = r0;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    r0 = call_00656c20(r0, r1, r2, r3);
    r2 = r0;
    r0 = r0 + 0xeu;  // (from the original)
    S0 = std::bit_cast<float>(*gptr<u32>(0x67f1acu));  // (from the original)
    *gptr<u8>(r0 + 1u) = u8(r5);
    *gptr<u8>(r0) = u8(r6);
    r0 = r0 + 2u;
    if (r4 != 0) {
        r1 = std::bit_cast<u32>(std::bit_cast<float>(vcvt_sz_f(std::bit_cast<float>(*gptr<u32>(r4)) * S0)));
        *gptr<u16>(r13) = u16(r1);
        *gptr<u16>(r0) = u16(r1);
        r3 = std::bit_cast<u32>(std::bit_cast<float>(vcvt_sz_f(std::bit_cast<float>(*gptr<u32>(r4 + 4u)) * S0)));
        *gptr<u16>(r13) = u16(r3);
        *gptr<u16>(r0 + 2u) = u16(r3);
        S1 = std::bit_cast<float>(*gptr<u32>(r4 + 8u));
        S0 = std::bit_cast<float>(vcvt_sz_f(S1 * S0));
        r1 = std::bit_cast<u32>(S0);
        *gptr<u16>(r13) = u16(r1);
        *gptr<u16>(r0 + 4u) = u16(r1);
    } else {
        r3 = 0xae5658u;  // (from the original)
        r1 = std::bit_cast<u32>(std::bit_cast<float>(vcvt_sz_f(std::bit_cast<float>(*gptr<u32>(r3)) * S0)));
        *gptr<u16>(r13) = u16(r1);
        *gptr<u16>(r0) = u16(r1);
        r12 = std::bit_cast<u32>(std::bit_cast<float>(vcvt_sz_f(std::bit_cast<float>(*gptr<u32>(r3 + 4u)) * S0)));
        *gptr<u16>(r13) = u16(r12);
        *gptr<u16>(r0 + 2u) = u16(r12);
        S1 = std::bit_cast<float>(*gptr<u32>(r3 + 8u));
        S0 = std::bit_cast<float>(vcvt_sz_f(S1 * S0));
        r1 = std::bit_cast<u32>(S0);
        *gptr<u16>(r13) = u16(r1);
        *gptr<u16>(r0 + 4u) = u16(r1);
    }
    r13 = r13 + 4u;
    r0 = r7;
    ea = r13;
    r13 = r13 + 0x14;  // (from the original)
    r4 = *gptr<u32>(ea);
    r5 = *gptr<u32>(ea + 4);
    r6 = *gptr<u32>(ea + 8);
    r7 = *gptr<u32>(ea + 0xc);  // (from the original)
    r14 = *gptr<u32>(ea + 0x10);  // (from the original)
    r3 = 0u;
    r1 = 0x29u;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->r[4] = r4;
    guest::cpu()->r[5] = r5;
    guest::cpu()->r[6] = r6;
    guest::cpu()->r[7] = r7;
    return call_0064d0b8(r0, r1, r2, r3);
}

}  // namespace d_0067f0c8
GUEST_EXPORT(0x0067f0c8, d_0067f0c8::f_0067f0c8);

// f_0067f1b4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0067f1b4 {

inline constexpr guest::Function<0x005d41b8, u32(u32, u32, u32, u32)> call_005d41b8;  // (from the original)
inline constexpr guest::Function<0x0064d0b8, u32(u32, u32, u32, u32)> call_0064d0b8;  // (from the original)
inline constexpr guest::Function<0x00656c20, u32(u32, u32, u32, u32)> call_00656c20;  // (from the original)

u32 f_0067f1b4(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 ea = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r9 = guest::cpu()->r[9];
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 0x20;  // (from the original)
    r5 = r1;
    r6 = r2;
    r9 = r0;
    r4 = *gptr<u32>(r13 + 0x20u);  // (from the original)
    r8 = r3;
    guest::cpu()->r[13] = r13;
    r0 = call_00656c20(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r7 = r0;
    ea = r0 + 0xeu;  // (from the original)
    *gptr<u8>(ea) = u8(r5);
    r0 = ea;
    r1 = r8;
    *gptr<u32>(r0 + 1u) = u32(r6);
    r0 = r0 + 5u;
    guest::cpu()->r[13] = r13;
    r0 = call_005d41b8(r0, r1, r2, r3);
    r2 = r7;
    r0 = r9;
    *gptr<u8>(r7 + 0x17u) = u8(u32(s32(r4) >> 8));  // (from the original)
    r13 = r13 + 0x20;  // (from the original)
    r3 = 0u;
    r1 = 0x9cu;  // (from the original)
    guest::cpu()->r[13] = r13;
    return call_0064d0b8(r0, r1, r2, r3);
}

}  // namespace d_0067f1b4
GUEST_EXPORT(0x0067f1b4, d_0067f1b4::f_0067f1b4);

// f_0067f208: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0067f208 {

inline constexpr guest::Function<0x005d41b8, u32(u32, u32, u32, u32)> call_005d41b8;  // (from the original)
inline constexpr guest::Function<0x0064d0b8, u32(u32, u32, u32, u32)> call_0064d0b8;  // (from the original)
inline constexpr guest::Function<0x00656c20, u32(u32, u32, u32, u32)> call_00656c20;  // (from the original)

u32 f_0067f208(u32 r0, u32 r1, u32 r2, u32 r3, float S0, float S1) {
    u32 ea = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r9 = guest::cpu()->r[9];
    u32 r13 = guest::cpu()->r[13];
    u32 r14 = guest::cpu()->r[14];
    ea = r13 - 0x20;  // (from the original)
    *gptr<u32>(ea) = u32(r3);
    *gptr<u32>(ea + 4) = u32(r4);
    *gptr<u32>(ea + 8) = u32(r5);
    *gptr<u32>(ea + 0xc) = u32(r6);  // (from the original)
    *gptr<u32>(ea + 0x10) = u32(r7);  // (from the original)
    *gptr<u32>(ea + 0x14) = u32(r8);  // (from the original)
    *gptr<u32>(ea + 0x18) = u32(r9);  // (from the original)
    *gptr<u32>(ea + 0x1c) = u32(r14);  // (from the original)
    r13 = r13 - 0x20;  // (from the original)
    r4 = r2;
    r7 = r1;
    r8 = r0;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    r0 = call_00656c20(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    r6 = r0;
    r5 = r0 + 0xeu;  // (from the original)
    r1 = r7;
    r0 = r0 + 0x14u;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    r0 = call_005d41b8(r0, r1, r2, r3);
    S0 = std::bit_cast<float>(*gptr<u32>(0x67f298u));  // (from the original)
    r2 = r6;
    r3 = 0u;
    r0 = std::bit_cast<u32>(std::bit_cast<float>(vcvt_sz_f(std::bit_cast<float>(*gptr<u32>(r4)) * S0)));
    ea = r13;
    *gptr<u16>(ea) = u16(r0);
    ea = r5;
    *gptr<u16>(ea) = u16(r0);
    r1 = std::bit_cast<u32>(std::bit_cast<float>(vcvt_sz_f(std::bit_cast<float>(*gptr<u32>(r4 + 4u)) * S0)));
    ea = r13;
    *gptr<u16>(ea) = u16(r1);
    ea = r5 + 2u;
    *gptr<u16>(ea) = u16(r1);
    S1 = std::bit_cast<float>(*gptr<u32>(r4 + 8u));
    r1 = 0xb1u;  // (from the original)
    S0 = std::bit_cast<float>(vcvt_sz_f(S1 * S0));
    r0 = std::bit_cast<u32>(S0);
    ea = r13;
    *gptr<u16>(ea) = u16(r0);
    ea = r5 + 4u;
    *gptr<u16>(ea) = u16(r0);
    r13 = r13 + 4u;
    r0 = r8;
    ea = r13;
    r13 = r13 + 0x1c;  // (from the original)
    r4 = *gptr<u32>(ea);
    r5 = *gptr<u32>(ea + 4);
    r6 = *gptr<u32>(ea + 8);
    r7 = *gptr<u32>(ea + 0xc);  // (from the original)
    r8 = *gptr<u32>(ea + 0x10);  // (from the original)
    r9 = *gptr<u32>(ea + 0x14);  // (from the original)
    r14 = *gptr<u32>(ea + 0x18);  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->r[4] = r4;
    guest::cpu()->r[5] = r5;
    guest::cpu()->r[6] = r6;
    guest::cpu()->r[7] = r7;
    guest::cpu()->r[8] = r8;
    guest::cpu()->r[9] = r9;
    return call_0064d0b8(r0, r1, r2, r3);
}

}  // namespace d_0067f208
GUEST_EXPORT(0x0067f208, d_0067f208::f_0067f208);

// f_0067f29c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0067f29c {

inline constexpr guest::Function<0x003171b4, u32(u32, u32, u32, u32)> call_003171b4;  // (from the original)
inline constexpr guest::Function<0x0059b61c, u32(u32, u32, u32, u32)> call_0059b61c;  // (from the original)
inline constexpr guest::Function<0x005c132c, u32(u32, u32, u32, u32)> call_005c132c;  // (from the original)
inline constexpr guest::Function<0x005ce300, u32(u32, u32, u32, u32)> call_005ce300;  // (from the original)
inline constexpr guest::Function<0x005d41b8, u32(u32, u32, u32, u32)> call_005d41b8;  // (from the original)
inline constexpr guest::Function<0x006140b4, u32(u32, u32, u32, u32)> call_006140b4;  // (from the original)
inline constexpr guest::Function<0x0064d0b8, u32(u32, u32, u32, u32)> call_0064d0b8;  // (from the original)
inline constexpr guest::Function<0x00650140, u32(u32, u32, u32, u32)> call_00650140;  // (from the original)
inline constexpr guest::Function<0x00656c20, u32(u32, u32, u32, u32)> call_00656c20;  // (from the original)
inline constexpr guest::Function<0x0067f29c, u32(u32, u32, u32, u32)> call_0067f29c;  // (from the original)
inline constexpr guest::Function<0x006a5f0c, u32(u32, u32, u32, u32)> call_006a5f0c;  // (from the original)
inline constexpr guest::Function<0x006c6640, u32(u32, u32, u32, u32)> call_006c6640;  // (from the original)

u32 f_0067f29c(u32 r0, u32 r1, u32 r2_unused, u32 r3, float S0) {
    u32 r2 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r9 = guest::cpu()->r[9];
    u32 r10 = guest::cpu()->r[10];
    u32 r13 = guest::cpu()->r[13];
    u32 zf = 0;
    r13 = r13 - 0x38u;  // (from the original)
    r5 = r0;
    r10 = r1;
    r2 = r0 + 0x14u;  // (from the original)
    r1 = r13 + 4u;
    r0 = r13;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    r0 = call_003171b4(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
    r9 = ~0u;
L_67f2c0:;
    r6 = ~0u;
L_67f2c4:;
    r2 = 0u;
    r7 = *gptr<u32>(r13) + r6;
    r8 = *gptr<u32>(r13 + 4u) + r9;
    r1 = r8;
    r0 = r7;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    r0 = call_005ce300(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
    if (r0 == 0) {
        goto L_67f3f8;
    }
    r2 = 0u;
    r1 = r8;
    r0 = r7;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    r0 = call_00650140(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
    if (r0 != 0) {
        guest::cpu()->r[13] = r13;
        guest::cpu()->s[0] = S0;
        r0 = call_0059b61c(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        S0 = guest::cpu()->s[0];
        zf = r0 == 0;
        if (!zf) {
            zf = u32(*gptr<u8>(r0 + 2u)) == 0;
        }
        if (!zf) {
            goto L_67f3f8;
        }
    }
    if (r10 == 0) {
        goto L_67f384;
    } else {
        r4 = 0u;
    }
L_67f32c:;
    if (u32(*gptr<u8>(r5 + 0x1acu)) == r4) {  // (from the original)
        goto L_67f378;
    }
    r0 = r4 & 0xffu;  // (from the original)
    r1 = 0u;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    r0 = call_005c132c(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
    if (r0 == 0) {
        goto L_67f378;
    }
    r2 = r0 + 0x14u;  // (from the original)
    r1 = r13 + 0xcu;  // (from the original)
    r0 = r13 + 8u;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    r0 = call_003171b4(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
    if (*gptr<u32>(r13 + 8u) != r7) {
        goto L_67f378;
    }
    if (*gptr<u32>(r13 + 0xcu) == r8) {  // (from the original)
        goto L_67f3f8;
    }
L_67f378:;
    r4 = r4 + 1u;
    if (r4 < 4u) {
        guest::preempt();
        goto L_67f32c;
    }
L_67f384:;
    r2 = r5 + 0x14u;  // (from the original)
    r1 = r8;
    r0 = r7;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    r0 = call_006140b4(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
    if (r0 == 0) {
        goto L_67f3f8;
    }
    r2 = r8;
    r1 = r7;
    r0 = r13 + 8u;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    r0 = call_006a5f0c(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
    r1 = 0u;
    r0 = r13 + 8u;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    r0 = call_006c6640(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
    *gptr<u32>(r13 + 0xcu) = u32(std::bit_cast<u32>(S0));  // (from the original)
    r6 = r13 + 8u;
    r0 = r5;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    r0 = call_00656c20(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
    r4 = r0;
    r0 = r0 + 0xeu;  // (from the original)
    r1 = r6;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    r0 = call_005d41b8(r0, r1, r2, r3);
    S0 = guest::cpu()->s[0];
    r3 = 0u;
    r2 = r4;
    r1 = 0xe5u;  // (from the original)
    r0 = r5;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    r0 = call_0064d0b8(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    S0 = guest::cpu()->s[0];
L_67f3f0:;
    r13 = r13 + 0x38u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
L_67f3f8:;
    r6 = r6 + 1u;
    if (s32(r6) <= s32(1u)) {
        guest::preempt();
        goto L_67f2c4;
    }
    r9 = r9 + 1u;
    if (s32(r9) <= s32(1u)) {
        guest::preempt();
        goto L_67f2c0;
    }
    if (r10 == 0) {
        r0 = 0u;
        guest::preempt();
        goto L_67f3f0;
    }
    r1 = 0u;
    r0 = r5;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    r0 = call_0067f29c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    S0 = guest::cpu()->s[0];
    r13 = r13 + 0x38u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_0067f29c
GUEST_EXPORT(0x0067f29c, d_0067f29c::f_0067f29c);
