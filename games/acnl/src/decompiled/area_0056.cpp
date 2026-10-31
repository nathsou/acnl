// Functions decompiled by tools/decomp (docs/decomp.md), each proved equal to the recompiled original (prove-cpp). The
// names are generated (d_<address>::f_<address>, Object_<address>_<argument>, word_<offset>) and still to be chosen.
#include "guest/guest.hpp"
#include "graphics/hemisphere_light.hpp"

#include <bit>

using guest::gptr;

// f_005601b8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005601b8 {

struct __attribute__((packed)) Object_005601b8_0 {
    u8 byte_0;
    u8 byte_1;
    u8 byte_2;
    u8 byte_3;
};
GUEST_OFFSET(Object_005601b8_0, byte_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_005601b8_0, byte_1, 0x1);  // (from the original)
GUEST_OFFSET(Object_005601b8_0, byte_2, 0x2);  // (from the original)
GUEST_OFFSET(Object_005601b8_0, byte_3, 0x3);  // (from the original)


void f_005601b8(gptr<Object_005601b8_0> arg0, float S0, float S1, float S2, float S3) {
    u32 r1 = 0;
    u32 fpsr = guest::cpu()->fpscr;
    float S4 = 0;
    float S5 = 0;
    float S6 = 0;
    S5 = std::bit_cast<float>(*gptr<u32>(0x560290u));  // (from the original)
    S4 = std::bit_cast<float>(*gptr<u32>(0x560294u));  // (from the original)
    fpsr = fpsr & 0xfffffffu | vfp_cmpf(S0, S5);  // (from the original)
    if (!(fpsr >> 0x1d & 1)) {  // (from the original)
        S0 = S5;
        goto L_5601e0;
    }
    fpsr = fpsr & 0xfffffffu | vfp_cmpf(S0, S4);  // (from the original)
    if (!(fpsr >> 0x1e & 1) && fpsr >> 0x1f == (fpsr >> 0x1c & 1)) {  // (from the original)
        S0 = S4;
    }
L_5601e0:;
    S6 = std::bit_cast<float>(*gptr<u32>(0x560298u));  // (from the original)
    r1 = std::bit_cast<u32>(std::bit_cast<float>(vcvt_uz_f(S0 * S6)));
    S0 = S1;
    arg0->byte_3 = u8(r1);
    fpsr = fpsr & 0xfffffffu | vfp_cmpf(S0, S5);  // (from the original)
    if (!(fpsr >> 0x1d & 1)) {  // (from the original)
        S0 = S5;
        goto L_560218;
    }
    S1 = S4;
    fpsr = fpsr & 0xfffffffu | vfp_cmpf(S0, S1);  // (from the original)
    if (!(fpsr >> 0x1e & 1) && fpsr >> 0x1f == (fpsr >> 0x1c & 1)) {  // (from the original)
        S0 = S4;
    }
L_560218:;
    r1 = std::bit_cast<u32>(std::bit_cast<float>(vcvt_uz_f(S0 * S6)));
    S0 = S2;
    arg0->byte_2 = u8(r1);
    fpsr = fpsr & 0xfffffffu | vfp_cmpf(S0, S5);  // (from the original)
    if (!(fpsr >> 0x1d & 1)) {  // (from the original)
        S0 = S5;
        goto L_56024c;
    }
    S1 = S4;
    fpsr = fpsr & 0xfffffffu | vfp_cmpf(S0, S1);  // (from the original)
    if (!(fpsr >> 0x1e & 1) && fpsr >> 0x1f == (fpsr >> 0x1c & 1)) {  // (from the original)
        S0 = S4;
    }
L_56024c:;
    r1 = std::bit_cast<u32>(std::bit_cast<float>(vcvt_uz_f(S0 * S6)));
    S0 = S3;
    arg0->byte_1 = u8(r1);
    fpsr = fpsr & 0xfffffffu | vfp_cmpf(S0, S5);  // (from the original)
    if (!(fpsr >> 0x1d & 1)) {  // (from the original)
        S0 = S5;
        S0 = std::bit_cast<float>(vcvt_uz_f(S0 * S6));
        r1 = std::bit_cast<u32>(S0);
        arg0->byte_0 = u8(r1);
        guest::cpu()->r[1] = r1;
        guest::cpu()->s[0] = S0;
        guest::cpu()->s[1] = S1;
        return;
    }
    fpsr = fpsr & 0xfffffffu | vfp_cmpf(S0, S4);  // (from the original)
    if (!(fpsr >> 0x1e & 1) && fpsr >> 0x1f == (fpsr >> 0x1c & 1)) {  // (from the original)
        S0 = S4;
    }
    S0 = std::bit_cast<float>(vcvt_uz_f(S0 * S6));
    r1 = std::bit_cast<u32>(S0);
    arg0->byte_0 = u8(r1);
    guest::cpu()->r[1] = r1;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    return;
}

}  // namespace d_005601b8
GUEST_EXPORT(0x005601b8, d_005601b8::f_005601b8);

// f_005603f0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005603f0 {

inline constexpr guest::Function<0x0012bfec, u32(u32, u32, u32, u32)> call_0012bfec;  // (from the original)
inline constexpr guest::Function<0x002fe7dd, u32(u32, u32, u32, u32)> call_002fe7dc;  // (from the original)

u32 f_005603f0(u32 r0_unused, u32 r1, u32 r2) {
    u32 r0 = 0;
    guest::cpu()->r[13] -= 8u;
    if ((*gptr<u32>(0x9753a8u) & 1u) != 0) {  // (from the original)
        r0 = 0xae544cu;  // (from the original)
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r0 = 0x9753a8u;  // (from the original)
    r0 = call_002fe7dc(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    if (r0 == 0) {
        r0 = 0xae544cu;  // (from the original)
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r0 = 0xae544cu;  // (from the original)
    r0 = call_0012bfec(r0, r1, r2, guest::cpu()->r[3]);
    r1 = 0x137e8cu;  // (from the original)
    r0 = 0xae544cu;  // (from the original)
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_005603f0
GUEST_EXPORT(0x005603f0, d_005603f0::f_005603f0);

// f_00560688: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00560688 {

struct __attribute__((packed)) Object_00560688_0 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
};
GUEST_OFFSET(Object_00560688_0, word_4, 0x4);  // (from the original)

struct __attribute__((packed)) Object_00560688_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Object_00560688_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_00560688_1, word_4, 0x4);  // (from the original)


void f_00560688(gptr<Object_00560688_0> arg0, gptr<Object_00560688_1> arg1) {
    u32 r0 = arg0.addr();
    u32 r1 = arg1.addr();
    u32 r2 = 0;
    r2 = arg0->word_4;
    arg0->word_4 = u32(r1);
    arg1->word_0 = u32(r0);
    arg1->word_4 = u32(r2);
    if (r2 != 0) {
        *gptr<u32>(r2) = u32(r1);
    }
    return;
}

}  // namespace d_00560688
GUEST_EXPORT(0x00560688, d_00560688::f_00560688);

// f_00560868: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00560868 {

struct __attribute__((packed)) Object_00560868_0 {
    u8 unknown_0[0x5c];  // (not used here)
    u32 word_5c;
};
GUEST_OFFSET(Object_00560868_0, word_5c, 0x5c);  // (from the original)


u32 f_00560868(gptr<Object_00560868_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r3 = 0;
    r0 = *gptr<u32>(*gptr<u32>(arg0->word_5c + 0x20u) + 0x20u);  // (from the original)
    r3 = *gptr<u32>(*gptr<u32>(r0) + 0x10u);  // (from the original)
    return guest::call_address<u32>(r3, r0, guest::cpu()->r[1], guest::cpu()->r[2], r3);
}

}  // namespace d_00560868
GUEST_EXPORT(0x00560868, d_00560868::f_00560868);

// f_00560930: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00560930 {

struct __attribute__((packed)) Object_00560930_0 {
    u8 byte_0;
    u8 unknown_1[0x3];  // (not used here)
    u32 word_4;
};
GUEST_OFFSET(Object_00560930_0, byte_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_00560930_0, word_4, 0x4);  // (from the original)

inline constexpr guest::Function<0x00301d0d, u32(u32, u32, u32, u32)> call_00301d0c;  // (from the original)

u32 f_00560930(gptr<Object_00560930_0> arg0) {
    u32 ea = 0;
    u32 r0 = arg0.addr();
    u32 r1 = 0;
    u32 r2 = 0;
    u32 r3 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 8;
    r4 = 0u;
    arg0->byte_0 = u8(r4);
    ea = r0 + 4u;
    arg0->word_4 = u32(r4);
    r1 = 0x11e460u;  // (from the original)
    r3 = 4u;
    r2 = 0x14u;  // (from the original)
    r0 = ea + 4u;
    guest::cpu()->r[13] = r13;
    r0 = call_00301d0c(r0, r1, r2, r3);
    ea = r0 + 0x50u;  // (from the original)
    *gptr<u32>(ea) = u32(r4);
    ea = r0 + 0x54u;  // (from the original)
    *gptr<u32>(ea) = u32(r4);
    ea = r0 + 0x58u;  // (from the original)
    *gptr<u32>(ea) = u32(r4);
    ea = r0 + 0x5cu;  // (from the original)
    *gptr<u32>(ea) = u32(r4);
    ea = r0 + 0x60u;  // (from the original)
    *gptr<u32>(ea) = u32(r4);
    ea = r0 + 0x64u;  // (from the original)
    *gptr<u32>(ea) = u32(r4);
    ea = r0 + 0x68u;  // (from the original)
    *gptr<u32>(ea) = u32(r4);
    ea = ea + 4u;
    *gptr<u32>(ea) = u32(~0u);
    r0 = ea - 0x74u;  // (from the original)
    r1 = 1u;
    *gptr<u8>(r0 + 0x78u) = u8(r1);  // (from the original)
    *gptr<u32>(r0 + 0x7cu) = u32(r4);  // (from the original)
    r13 = r13 + 8;
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_00560930
GUEST_EXPORT(0x00560930, d_00560930::f_00560930);

// f_00560aa8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00560aa8 {

struct __attribute__((packed)) Object_00560aa8_0 {
    u32 word_0;
    u8 unknown_4[0x4];  // (not used here)
    u32 word_8;
    u32 word_c;
};
GUEST_OFFSET(Object_00560aa8_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_00560aa8_0, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Object_00560aa8_0, word_c, 0xc);  // (from the original)


void f_00560aa8(gptr<Object_00560aa8_0> arg0) {
    u32 r1 = 0;
    u32 r2 = 0;
    u32 r3 = 0;
    r2 = arg0->word_8;
    r3 = arg0->word_c;
    r1 = 0u;
    if (r3 != 0) {
        *gptr<u32>(r3 + 8u) = u32(r2);
        r2 = arg0->word_8;
        if (r2 == 0) {
            arg0->word_c = u32(r1);
            arg0->word_0 = u32(r1);
            guest::cpu()->r[1] = r1;
            return;
        }
        *gptr<u32>(r2 + 0xcu) = u32(arg0->word_c);  // (from the original)
        arg0->word_8 = u32(r1);
        arg0->word_c = u32(r1);
        arg0->word_0 = u32(r1);
        guest::cpu()->r[1] = r1;
        return;
    }
    r3 = arg0->word_0;
    if (r3 != 0) {
        *gptr<u32>(r3 + 4u) = u32(r2);
        arg0->word_0 = u32(r1);
    }
    r2 = arg0->word_8;
    if (r2 == 0) {
        guest::cpu()->r[1] = r1;
        return;
    }
    *gptr<u32>(r2 + 0xcu) = u32(arg0->word_c);  // (from the original)
    arg0->word_8 = u32(r1);
    guest::cpu()->r[1] = r1;
    return;
}

}  // namespace d_00560aa8
GUEST_EXPORT(0x00560aa8, d_00560aa8::f_00560aa8);

// f_00560b6c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00560b6c {

inline constexpr guest::Function<0x00560aa8, u32(u32, u32, u32, u32)> call_00560aa8;  // (from the original)

u32 f_00560b6c(u32 r0, u32 r1) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    guest::cpu()->r[13] -= 0xcu;  // (from the original)
    r5 = r0;
    r4 = r1;
    r0 = r1;
    r0 = call_00560aa8(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r0 = *gptr<u32>(r5 + 4u);
    if (r0 == 0) {
        *gptr<u32>(r5 + 4u) = u32(r4);
        *gptr<u32>(r4) = u32(r5);
        guest::cpu()->r[13] += 0xcu;  // (from the original)
        return r0;
    }
    *gptr<u32>(r4 + 8u) = u32(r0);
    r0 = *gptr<u32>(r5 + 4u);
    *gptr<u32>(r0 + 0xcu) = u32(r4);  // (from the original)
    *gptr<u32>(r5 + 4u) = u32(r4);
    *gptr<u32>(r4) = u32(r5);
    guest::cpu()->r[13] += 0xcu;  // (from the original)
    return r0;
}

}  // namespace d_00560b6c
GUEST_EXPORT(0x00560b6c, d_00560b6c::f_00560b6c);

// f_00560e80: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00560e80 {

struct __attribute__((packed)) Object_00560e80_0 {
    u32 word_0;
    u8 unknown_4[0x158];  // (not used here)
    u32 word_15c;
};
GUEST_OFFSET(Object_00560e80_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_00560e80_0, word_15c, 0x15c);  // (from the original)

inline constexpr guest::Function<0x0013efb4, u32(u32, u32, u32, u32)> call_0013efb4;  // (from the original)
inline constexpr guest::Function<0x0054488c, u32(u32, u32, u32, u32)> call_0054488c;  // (from the original)
inline constexpr guest::Function<0x00560a20, u32(u32, u32, u32, u32)> call_00560a20;  // (from the original)

u32 f_00560e80(gptr<Object_00560e80_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r1 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r5 = r0 + 0x15cu;  // (from the original)
    r1 = 0x905ce8u;  // (from the original)
    r4 = 0x9047b0u;  // (from the original)
    arg0->word_0 = u32(r1);
    arg0->word_15c = u32(r4);
    r0 = r5;
    r0 = call_0054488c(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r0 = r5;
    r0 = call_0013efb4(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = 0x9046a0u;  // (from the original)
    *gptr<u32>(r0 - 0x15cu) = u32(r1);  // (from the original)
    r0 = r0 - 0x50u;  // (from the original)
    r5 = r0;
    *gptr<u32>(r0) = u32(r4);
    r0 = call_0054488c(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r0 = r5;
    r0 = call_0013efb4(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r5 = r0 - 0x50u;  // (from the original)
    *gptr<u32>(r0 - 0x50u) = u32(r4);  // (from the original)
    r0 = r5;
    r0 = call_0054488c(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r0 = r5;
    r0 = call_0013efb4(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r5 = r0 - 0x50u;  // (from the original)
    *gptr<u32>(r0 - 0x50u) = u32(r4);  // (from the original)
    r0 = r5;
    r0 = call_0054488c(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r0 = r5;
    r0 = call_0013efb4(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    r0 = r0 - 0x6cu;  // (from the original)
    return call_00560a20(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_00560e80
GUEST_EXPORT(0x00560e80, d_00560e80::f_00560e80);

// f_00561310: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00561310 {

struct __attribute__((packed)) Object_00561310_0 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u8 byte_14;
};
GUEST_OFFSET(Object_00561310_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_00561310_0, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_00561310_0, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Object_00561310_0, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Object_00561310_0, word_10, 0x10);  // (from the original)
GUEST_OFFSET(Object_00561310_0, byte_14, 0x14);  // (from the original)

inline constexpr guest::Function<0x00561264, u32(u32, u32, u32, u32)> call_00561264;  // (from the original)

u32 f_00561310(gptr<Object_00561310_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r4 = guest::cpu()->r[4];
    float S0 = 0;
    S0 = std::bit_cast<float>(*gptr<u32>(0x561354u));  // (from the original)
    guest::cpu()->r[13] -= 8u;
    arg0->word_4 = u32(std::bit_cast<u32>(S0));
    arg0->word_8 = u32(std::bit_cast<u32>(S0));
    S0 = std::bit_cast<float>(*gptr<u32>(0x561358u));  // (from the original)
    r4 = r0;
    arg0->word_c = u32(std::bit_cast<u32>(S0));
    arg0->word_10 = u32(std::bit_cast<u32>(S0));
    arg0->word_0 = u32(0x905dd4u);  // (from the original)
    arg0->byte_14 = u8(u32(*gptr<u8>(0x975328u)));  // (from the original)
    r0 = r4;
    guest::cpu()->s[0] = S0;
    r0 = call_00561264(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    S0 = guest::cpu()->s[0];
    r0 = r4;
    guest::cpu()->r[13] += 8u;
    guest::cpu()->s[0] = S0;
    return r0;
}

}  // namespace d_00561310
GUEST_EXPORT(0x00561310, d_00561310::f_00561310);

// f_005615e4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005615e4 {

inline constexpr guest::Function<0x00561900, u32(u32, u32, u32, u32)> call_00561900;  // (from the original)

u32 f_005615e4(u32 r0_unused, u32 r1_unused, u32 r2_unused, u32 r3) {
    u32 r13 = guest::cpu()->r[13];
    *gptr<u32>(r13 + 0xfffffff8u) = u32(r3);  // (from the original)
    r13 = r13 - 8;
    *gptr<u32>(r13) = u32(*gptr<u32>(r13 + 8u));
    guest::cpu()->r[13] = r13;
    call_00561900(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], r3);
    r13 = r13 + 8;
    guest::cpu()->r[13] = r13;
    return guest::cpu()->r[0];
}

}  // namespace d_005615e4
GUEST_EXPORT(0x005615e4, d_005615e4::f_005615e4);

// f_00561ba4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00561ba4 {

struct __attribute__((packed)) Object_00561ba4_0 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
};
GUEST_OFFSET(Object_00561ba4_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_00561ba4_0, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_00561ba4_0, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Object_00561ba4_0, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Object_00561ba4_0, word_10, 0x10);  // (from the original)


void f_00561ba4(gptr<Object_00561ba4_0> arg0) {
    u32 r1 = 0;
    r1 = 0u;
    arg0->word_0 = u32(r1);
    arg0->word_4 = u32(r1);
    arg0->word_8 = u32(r1);
    arg0->word_c = u32(r1);
    r1 = 0x1000u;  // (from the original)
    arg0->word_10 = u32(r1);
    guest::cpu()->r[1] = r1;
    return;
}

}  // namespace d_00561ba4
GUEST_EXPORT(0x00561ba4, d_00561ba4::f_00561ba4);

// f_00564cac: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00564cac {

inline constexpr guest::Function<0x002f74c8, u32(u32, u32, u32, u32)> call_002f74c8;  // (from the original)
inline constexpr guest::Function<0x002fcaf4, u32(u32, u32, u32, u32)> call_002fcaf4;  // (from the original)
inline constexpr guest::Function<0x0056549c, u32(u32, u32, u32, u32)> call_0056549c;  // (from the original)
inline constexpr guest::Function<0x006a5e34, u32(u32, u32, u32, u32)> call_006a5e34;  // (from the original)
inline constexpr guest::Function<0x00752b44, u32(u32, u32, u32, u32)> call_00752b44;  // (from the original)

u32 f_00564cac(u32 r0, u32 r1, u32 r2, u32 r3) {
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
    u32 zf = 0;
    ea = r13 - 0x30;  // (from the original)
    *gptr<u32>(ea) = u32(r0);
    *gptr<u32>(ea + 4) = u32(r1);
    *gptr<u32>(ea + 8) = u32(r2);
    *gptr<u32>(ea + 0xc) = u32(r4);  // (from the original)
    *gptr<u32>(ea + 0x10) = u32(r5);  // (from the original)
    *gptr<u32>(ea + 0x14) = u32(r6);  // (from the original)
    *gptr<u32>(ea + 0x18) = u32(r7);  // (from the original)
    *gptr<u32>(ea + 0x1c) = u32(r8);  // (from the original)
    *gptr<u32>(ea + 0x20) = u32(r9);  // (from the original)
    *gptr<u32>(ea + 0x24) = u32(r10);  // (from the original)
    *gptr<u32>(ea + 0x28) = u32(r11);  // (from the original)
    *gptr<u32>(ea + 0x2c) = u32(r14);  // (from the original)
    r13 = r13 - 0x40u;  // (from the original)
    r5 = r0;
    r10 = r1;
    guest::cpu()->r[13] = r13;
    r0 = call_006a5e34(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    *gptr<u32>(r13 + 8u) = u32(r0);
    if (r0 == 0) {
        goto L_564d48;
    }
    guest::cpu()->r[13] = r13;
    r0 = call_002f74c8(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0 = call_0056549c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r7 = 0u;
    r9 = r0;
    r11 = r7;
L_564ce0:;
    r4 = 0u;
    r8 = r7 - 1u;
    r6 = r9 + (r7 << 4);
L_564cec:;
    if (u32(*gptr<u8>(r6 + r4)) != r5) {
        goto L_564da0;
    }
    *gptr<u32>(r13) = u32(r7);
    *gptr<u32>(r13 + 4) = u32(r11);
    r0 = *gptr<u32>(r13 + 8u);
    zf = r5 == 0x28u;  // (from the original)
    if (!zf) {
        zf = r5 == 0x29u;  // (from the original)
    }
    r2 = 0u;
    if (!zf) {
        zf = r5 == 0x2eu;  // (from the original)
    }
    r3 = r4;
    r1 = r2;
    if (zf) {
        goto L_564d50;
    }
    guest::cpu()->r[13] = r13;
    r0 = call_00752b44(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0 = call_002fcaf4(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    if (r0 == 0) {
        goto L_564da0;
    }
L_564d38:;
    *gptr<u32>(r10) = u32(r4);
    *gptr<u32>(*gptr<u32>(r13 + 0x18u)) = u32(r7);  // (from the original)
    r0 = 1u;
L_564d48:;
    r13 = r13 + 0x1cu;  // (from the original)
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
L_564d50:;
    guest::cpu()->r[13] = r13;
    r0 = call_00752b44(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0 = call_002fcaf4(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    if (r0 == 0) {
        goto L_564da0;
    }
    r2 = 0u;
    *gptr<u32>(r13) = u32(r8);
    *gptr<u32>(r13 + 4) = u32(r11);
    r0 = *gptr<u32>(r13 + 8u);
    r3 = r4;
    r1 = r2;
    guest::cpu()->r[13] = r13;
    r0 = call_00752b44(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0 = call_002fcaf4(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    if (r0 != 0) {
        guest::preempt();
        goto L_564d38;
    }
L_564da0:;
    r4 = r4 + 1u;
    if (s32(r4) < s32(0x10u)) {  // (from the original)
        guest::preempt();
        goto L_564cec;
    }
    r7 = r7 + 1u;
    if (s32(r7) < s32(0x10u)) {  // (from the original)
        guest::preempt();
        goto L_564ce0;
    }
    r13 = r13 + 0x1cu;  // (from the original)
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
}

}  // namespace d_00564cac
GUEST_EXPORT(0x00564cac, d_00564cac::f_00564cac);

// f_00565668: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00565668 {

struct __attribute__((packed)) Object_00565668_0 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Object_00565668_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_00565668_0, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_00565668_0, word_8, 0x8);  // (from the original)

struct __attribute__((packed)) Object_00565668_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Object_00565668_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_00565668_1, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_00565668_1, word_8, 0x8);  // (from the original)


void f_00565668(gptr<Object_00565668_0> arg0, gptr<Object_00565668_1> arg1, float S0, float S1, float S2) {
    u32 res = 0;
    u32 r2 = 0;
    u32 fpsr = guest::cpu()->fpscr;
    float S3 = 0;
    float S4 = 0;
    float S5 = 0;
    float S6 = 0;
    float S7 = 0;
    S6 = std::bit_cast<float>(arg0->word_0);
    S5 = std::bit_cast<float>(arg1->word_0);
    fpsr = fpsr & 0xfffffffu | vfp_cmpf(S6, S5);  // (from the original)
    if (!(fpsr >> 0x1e & 1)) {  // (from the original)
        goto L_5656a4;
    }
    fpsr = fpsr & 0xfffffffu | vfp_cmpf(std::bit_cast<float>(arg0->word_4), std::bit_cast<float>(arg1->word_4));  // (from the original)
    if (!(fpsr >> 0x1e & 1)) {  // (from the original)
        goto L_5656a4;
    }
    fpsr = fpsr & 0xfffffffu | vfp_cmpf(std::bit_cast<float>(arg0->word_8), std::bit_cast<float>(arg1->word_8));  // (from the original)
    if (fpsr >> 0x1e & 1) {  // (from the original)
        goto L_565774;
    }
L_5656a4:;
    S5 = S6 - S5;
    S3 = std::bit_cast<float>(arg0->word_4) - std::bit_cast<float>(arg1->word_4);
    S4 = std::bit_cast<float>(arg0->word_8) - std::bit_cast<float>(arg1->word_8);
    S7 = sqrtf(S5 * S5 + S3 * S3 + S4 * S4);
    fpsr = fpsr & 0xfffffffu | vfp_cmpf(S7, S2);  // (from the original)
    if (fpsr >> 0x1d & 1) {  // (from the original)
        S6 = S7 * S0;
        S5 = S5 * S0;
        S3 = S3 * S0;
        S0 = S4 * S0;
        r2 = std::bit_cast<u32>(fabsf(S6));
        res = r2 - 0x34000000u;  // (from the original)
        if (!u32(res == 0) && res >> 0x1f == ((r2 ^ 0x34000000u) & (r2 ^ res)) >> 0x1f) {  // (from the original)
            goto L_565718;
        }
    }
    arg0->word_0 = u32(arg1->word_0);
    arg0->word_4 = u32(arg1->word_4);
    arg0->word_8 = u32(arg1->word_8);
    goto L_565774;
L_565718:;
    fpsr = fpsr & 0xfffffffu | vfp_cmpf(S6, S1);  // (from the original)
    if (!(fpsr >> 0x1e & 1 || fpsr >> 0x1f != (fpsr >> 0x1c & 1))) {  // (from the original)
        S2 = S1 / S6;
        S5 = S5 * S2;
        S3 = S3 * S2;
        S0 = S0 * S2;
        goto L_565754;
    }
    if ((fpsr & 0xfffffffu | vfp_cmpf(S6, S2)) >> 0x1d & 1) {  // (from the original)
        goto L_565754;
    }
    S1 = S2 / S6;
    S5 = S5 * S1;
    S3 = S3 * S1;
    S0 = S0 * S1;
L_565754:;
    S2 = std::bit_cast<float>(arg0->word_0) - S5;
    S3 = std::bit_cast<float>(arg0->word_4) - S3;
    arg0->word_8 = u32(std::bit_cast<u32>(std::bit_cast<float>(arg0->word_8) - S0));
    arg0->word_0 = u32(std::bit_cast<u32>(S2));
    arg0->word_4 = u32(std::bit_cast<u32>(S3));
L_565774:;
    S1 = std::bit_cast<float>(arg0->word_0) - std::bit_cast<float>(arg1->word_0);
    S2 = std::bit_cast<float>(arg0->word_4) - std::bit_cast<float>(arg1->word_4);
    S0 = std::bit_cast<float>(arg0->word_8) - std::bit_cast<float>(arg1->word_8);
    S1 = S1 * S1 + S2 * S2 + S0 * S0;
    S0 = sqrtf(S1);
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    return;
}

}  // namespace d_00565668
GUEST_EXPORT(0x00565668, d_00565668::f_00565668);

// f_005657ac: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005657ac {

struct __attribute__((packed)) Object_005657ac_0 {
    u32 word_0;
    u8 unknown_4[0x4];  // (not used here)
    u32 word_8;
};
GUEST_OFFSET(Object_005657ac_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_005657ac_0, word_8, 0x8);  // (from the original)

struct __attribute__((packed)) Object_005657ac_1 {
    u32 word_0;
    u8 unknown_4[0x4];  // (not used here)
    u32 word_8;
};
GUEST_OFFSET(Object_005657ac_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_005657ac_1, word_8, 0x8);  // (from the original)


u32 f_005657ac(gptr<Object_005657ac_0> arg0, gptr<Object_005657ac_1> arg1, float S0) {
    u32 r0 = arg0.addr();
    u32 r1 = arg1.addr();
    u32 fpsr = guest::cpu()->fpscr;
    float S1 = 0;
    float S2 = 0;
    float S3 = 0;
    float S4 = 0;
    S1 = std::bit_cast<float>(arg0->word_0) - std::bit_cast<float>(arg1->word_0);
    S2 = std::bit_cast<float>(arg0->word_8) - std::bit_cast<float>(arg1->word_8);
    fpsr = fpsr & 0xfffffffu | vfp_cmpf(S0, std::bit_cast<float>(*gptr<u32>(0x565850u)));  // (from the original)
    S3 = sqrtf(S1 * S1 + S2 * S2);
    if (fpsr >> 0x1e & 1) {  // (from the original)
        goto L_565834;
    }
    if (s32(std::bit_cast<u32>(fabsf(S3))) > s32(0x34000000u)) {  // (from the original)
        fpsr = fpsr & 0xfffffffu | vfp_cmpf(S3, S0);  // (from the original)
        if (fpsr >> 0x1d & 1 && !(fpsr >> 0x1e & 1)) {  // (from the original)
            goto L_565814;
        }
    }
    *gptr<u32>(r0) = u32(*gptr<u32>(r1));
    r1 = *gptr<u32>(r1 + 8u);
    *gptr<u32>(r0 + 8u) = u32(r1);
    r0 = 1u;
    guest::cpu()->r[1] = r1;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    return r0;
L_565814:;
    S4 = S0 / S3;
    S0 = std::bit_cast<float>(*gptr<u32>(r0 + 8u)) - S2 * S4;
    *gptr<u32>(r0) = u32(std::bit_cast<u32>(std::bit_cast<float>(*gptr<u32>(r0)) - S1 * S4));
    *gptr<u32>(r0 + 8u) = u32(std::bit_cast<u32>(S0));
    r0 = 0u;
    guest::cpu()->r[1] = r1;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    return r0;
L_565834:;
    S0 = fabsf(S3);
    if (s32(std::bit_cast<u32>(S0)) <= s32(0x34000000u)) {  // (from the original)
        r0 = 1u;
        guest::cpu()->r[1] = r1;
        guest::cpu()->s[0] = S0;
        guest::cpu()->s[1] = S1;
        return r0;
    }
    r0 = 0u;
    guest::cpu()->r[1] = r1;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    return r0;
}

}  // namespace d_005657ac
GUEST_EXPORT(0x005657ac, d_005657ac::f_005657ac);

// f_00565958: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00565958 {

struct __attribute__((packed)) Object_00565958_0 {
    u32 word_0;
    u8 unknown_4[0x4];  // (not used here)
    u32 word_8;
};
GUEST_OFFSET(Object_00565958_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_00565958_0, word_8, 0x8);  // (from the original)

struct __attribute__((packed)) Object_00565958_1 {
    u32 word_0;
    u8 unknown_4[0x4];  // (not used here)
    u32 word_8;
};
GUEST_OFFSET(Object_00565958_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_00565958_1, word_8, 0x8);  // (from the original)


void f_00565958(gptr<Object_00565958_0> arg0, gptr<Object_00565958_1> arg1, float S0, float S1, float S2) {
    u32 res = 0;
    u32 r2 = 0;
    u32 fpsr = guest::cpu()->fpscr;
    float S3 = 0;
    float S4 = 0;
    float S5 = 0;
    float S6 = 0;
    S3 = std::bit_cast<float>(arg0->word_0);
    S4 = std::bit_cast<float>(arg1->word_0);
    fpsr = fpsr & 0xfffffffu | vfp_cmpf(S3, S4);  // (from the original)
    if (fpsr >> 0x1e & 1) {  // (from the original)
        fpsr = fpsr & 0xfffffffu | vfp_cmpf(std::bit_cast<float>(arg0->word_8), std::bit_cast<float>(arg1->word_8));  // (from the original)
        if (fpsr >> 0x1e & 1) {  // (from the original)
            goto L_565a24;
        }
    }
    S3 = S3 - S4;
    S5 = std::bit_cast<float>(arg0->word_8) - std::bit_cast<float>(arg1->word_8);
    S6 = sqrtf(S3 * S3 + S5 * S5);
    fpsr = fpsr & 0xfffffffu | vfp_cmpf(S6, S2);  // (from the original)
    if (fpsr >> 0x1d & 1) {  // (from the original)
        S4 = S6 * S0;
        S3 = S3 * S0;
        S0 = S5 * S0;
        r2 = std::bit_cast<u32>(fabsf(S4));
        res = r2 - 0x34000000u;  // (from the original)
        if (!u32(res == 0) && res >> 0x1f == ((r2 ^ 0x34000000u) & (r2 ^ res)) >> 0x1f) {  // (from the original)
            goto L_5659d8;
        }
    }
    arg0->word_0 = u32(arg1->word_0);
    arg0->word_8 = u32(arg1->word_8);
    goto L_565a24;
L_5659d8:;
    fpsr = fpsr & 0xfffffffu | vfp_cmpf(S4, S1);  // (from the original)
    if (!(fpsr >> 0x1e & 1 || fpsr >> 0x1f != (fpsr >> 0x1c & 1))) {  // (from the original)
        S2 = S1 / S4;
        S3 = S3 * S2;
        S0 = S0 * S2;
        goto L_565a0c;
    }
    if ((fpsr & 0xfffffffu | vfp_cmpf(S4, S2)) >> 0x1d & 1) {  // (from the original)
        goto L_565a0c;
    }
    S1 = S2 / S4;
    S3 = S3 * S1;
    S0 = S0 * S1;
L_565a0c:;
    S0 = std::bit_cast<float>(arg0->word_8) - S0;
    arg0->word_0 = u32(std::bit_cast<u32>(std::bit_cast<float>(arg0->word_0) - S3));
    arg0->word_8 = u32(std::bit_cast<u32>(S0));
L_565a24:;
    S1 = std::bit_cast<float>(arg0->word_0) - std::bit_cast<float>(arg1->word_0);
    S0 = std::bit_cast<float>(arg0->word_8) - std::bit_cast<float>(arg1->word_8);
    S1 = S1 * S1 + S0 * S0;
    S0 = sqrtf(S1);
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    return;
}

}  // namespace d_00565958
GUEST_EXPORT(0x00565958, d_00565958::f_00565958);

// f_00565a68: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00565a68 {

struct __attribute__((packed)) Object_00565a68_0 {
    u32 word_0;
    u8 unknown_4[0x4];  // (not used here)
    u32 word_8;
};
GUEST_OFFSET(Object_00565a68_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_00565a68_0, word_8, 0x8);  // (from the original)

struct __attribute__((packed)) Object_00565a68_1 {
    u32 word_0;
    u8 unknown_4[0x4];  // (not used here)
    u32 word_8;
};
GUEST_OFFSET(Object_00565a68_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_00565a68_1, word_8, 0x8);  // (from the original)


void f_00565a68(gptr<Object_00565a68_0> arg0, gptr<Object_00565a68_1> arg1, float S0, float S1) {
    u32 r1 = arg1.addr();
    u32 fpsr = guest::cpu()->fpscr;
    float S2 = 0;
    float S3 = 0;
    float S4 = 0;
    S3 = std::bit_cast<float>(arg0->word_0);
    S2 = std::bit_cast<float>(arg1->word_0);
    fpsr = fpsr & 0xfffffffu | vfp_cmpf(S3, S2);  // (from the original)
    if (fpsr >> 0x1e & 1) {  // (from the original)
        fpsr = fpsr & 0xfffffffu | vfp_cmpf(std::bit_cast<float>(arg0->word_8), std::bit_cast<float>(arg1->word_8));  // (from the original)
        if (fpsr >> 0x1e & 1) {  // (from the original)
            guest::cpu()->r[1] = r1;
            guest::cpu()->s[0] = S0;
            guest::cpu()->s[1] = S1;
            return;
        }
    }
    S2 = (S3 - S2) * S0;
    S0 = (std::bit_cast<float>(arg0->word_8) - std::bit_cast<float>(*gptr<u32>(r1 + 8u))) * S0;
    S3 = sqrtf(S2 * S2 + S0 * S0);
    r1 = std::bit_cast<u32>(fabsf(S3));
    if (s32(r1) <= s32(0x34000000u)) {  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->s[0] = S0;
        guest::cpu()->s[1] = S1;
        return;
    }
    fpsr = fpsr & 0xfffffffu | vfp_cmpf(S3, S1);  // (from the original)
    if (!(fpsr >> 0x1e & 1 || fpsr >> 0x1f != (fpsr >> 0x1c & 1))) {  // (from the original)
        S4 = S1 / S3;
        S2 = S2 * S4;
        S0 = S0 * S4;
    }
    S1 = std::bit_cast<float>(arg0->word_8);
    S0 = S1 - S0;
    arg0->word_0 = u32(std::bit_cast<u32>(std::bit_cast<float>(arg0->word_0) - S2));
    arg0->word_8 = u32(std::bit_cast<u32>(S0));
    guest::cpu()->r[1] = r1;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    return;
}

}  // namespace d_00565a68
GUEST_EXPORT(0x00565a68, d_00565a68::f_00565a68);

// f_00565c00: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00565c00 {

inline constexpr guest::Function<0x0013bb30, u32(u32, u32, u32, u32)> call_0013bb30;  // (from the original)

u32 f_00565c00() {
    u32 r0 = 0;
    r0 = 0x9753e8u;  // (from the original)
    return call_0013bb30(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_00565c00
GUEST_EXPORT(0x00565c00, d_00565c00::f_00565c00);

// f_0056677c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0056677c {

inline constexpr guest::Function<0x00135740, u32(u32, u32, u32, u32)> call_00135740;  // (from the original)
inline constexpr guest::Function<0x00137e84, u32(u32, u32, u32, u32)> call_00137e84;  // (from the original)
inline constexpr guest::Function<0x002f825c, u32(u32, u32, u32, u32)> call_002f825c;  // (from the original)
inline constexpr guest::Function<0x007b1034, u32(u32, u32, u32, u32)> call_007b1034;  // (from the original)

u32 f_0056677c(u32 r0, u32 r1, u32 r2) {
    u32 ea = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 0x18;  // (from the original)
    r4 = r0;
    r5 = r0 + 0x30u;  // (from the original)
    r0 = r5;
    guest::cpu()->r[13] = r13;
    r0 = call_00135740(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r6 = 0u;
    if (u32(*gptr<u8>(r4 + 0x2cu)) != 0) {  // (from the original)
        r7 = 0xae5484u;  // (from the original)
        r1 = *gptr<u32>(r7);
        if (r1 == 0) {
            goto L_56681c;
        }
        r2 = r7;
        r0 = *gptr<u32>(r7 + 8u);
        r1 = *gptr<u32>(r2 + (r1 - 1u << 3) + 0xcu) - r0;  // (from the original)
        guest::cpu()->r[13] = r13;
        r0 = call_007b1034(r0, r1, r2, guest::cpu()->r[3]);
        r2 = guest::cpu()->r[2];
        r1 = 0x100u;  // (from the original)
        *gptr<u32>(r4 + 0x18u) = u32(*gptr<u32>(r4 + 0x18u) + 1u);  // (from the original)
        r0 = r7 + 8u;
        *gptr<u32>(r7) = u32(r6);
        guest::cpu()->r[13] = r13;
        r0 = call_002f825c(r0, r1, r2, guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        goto L_56681c;
    }
    r0 = *gptr<u32>(r4 + 0x10u);  // (from the original)
    if (r0 == 0) {
        goto L_56681c;
    }
    r1 = *gptr<u32>(r4 + 0x14u) - r0;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_007b1034(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    ea = r4 + 0x18u;  // (from the original)
    r0 = *gptr<u32>(ea);
    ea = r4 + 0x10u;  // (from the original)
    *gptr<u32>(ea) = u32(r6);
    ea = r4 + 0x14u;  // (from the original)
    *gptr<u32>(ea) = u32(r6);
    *gptr<u32>(ea + 4u) = u32(r0 + 1u);
L_56681c:;
    r0 = r5;
    r13 = r13 + 0x18;  // (from the original)
    guest::cpu()->r[13] = r13;
    return call_00137e84(r0, r1, r2, guest::cpu()->r[3]);
}

}  // namespace d_0056677c
GUEST_EXPORT(0x0056677c, d_0056677c::f_0056677c);

// f_00567224: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00567224 {


u32 f_00567224() {
    u32 res = 0;
    u32 r0 = 0;
    u32 r1 = 0;
    u32 r2 = 0;
    u32 r3 = 0;
    r1 = 0x975c30u;  // (from the original)
    r0 = u32(s32(s8(*gptr<u8>(r1 + 1u))));
    res = r0;
    if (!u32(res == 0) && res >> 0x1f == (r0 & (r0 ^ res)) >> 0x1f) {  // (from the original)
        guest::cpu()->r[1] = r1;
        return r0;
    }
    *gptr<u32>(r1 + 0x14u) = u32(0u);  // (from the original)
    r0 = *gptr<u32>(r1 + 0xcu);  // (from the original)
    if (r0 == 0) {
        guest::cpu()->r[1] = r1;
        return r0;
    }
    if (*gptr<u32>(0xae55ccu) == 0) {  // (from the original)
        guest::cpu()->r[1] = r1;
        return r0;
    }
    if (u32(*gptr<u8>(r1)) != 0) {
        guest::cpu()->r[1] = r1;
        return r0;
    }
    *gptr<u8>(r1) = u8(1u);
    r2 = 0u;
    r3 = *gptr<u32>(*gptr<u32>(r0) + 0xcu);  // (from the original)
    r1 = 0x6c6f6164u;  // (from the original)
    return guest::call_address<u32>(r3, r0, r1, r2, r3);
}

}  // namespace d_00567224
GUEST_EXPORT(0x00567224, d_00567224::f_00567224);

// f_00567cc8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00567cc8 {

inline constexpr guest::Function<0x00567ce4, u32(u32, u32, u32, u32)> call_00567ce4;  // (from the original)

u32 f_00567cc8(u32 r0_unused, u32 r1_unused, u32 r2_unused, u32 r3) {
    u32 r13 = guest::cpu()->r[13];
    *gptr<u32>(r13 + 0xfffffff8u) = u32(r3);  // (from the original)
    r13 = r13 - 8;
    r3 = *gptr<u32>(0x975c14u);  // (from the original)
    *gptr<u32>(r13) = u32(*gptr<u32>(0x975c14u + 4));  // (from the original)
    guest::cpu()->r[13] = r13;
    call_00567ce4(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], r3);
    r13 = r13 + 8;
    guest::cpu()->r[13] = r13;
    return guest::cpu()->r[0];
}

}  // namespace d_00567cc8
GUEST_EXPORT(0x00567cc8, d_00567cc8::f_00567cc8);

// f_00567ce4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00567ce4 {

inline constexpr guest::Function<0x004b6598, u32(u32, u32, u32, u32)> call_004b6598;  // (from the original)
inline constexpr guest::Function<0x0056a99c, u32(u32, u32, u32, u32)> call_0056a99c;  // (from the original)

u32 f_00567ce4(u32 r0, u32 r1, u32 r2) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r12 = 0;
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 0x20u;  // (from the original)
    r4 = r0;
    r12 = *gptr<u32>(r13 + 0x20u);  // (from the original)
    r5 = 0x9047f8u;  // (from the original)
    *gptr<u32>(r13 + 0xcu) = u32(r1);  // (from the original)
    r1 = r13 + 8u;
    r0 = r4 + 0x15cu;  // (from the original)
    *gptr<u32>(r13 + 8u) = u32(r5);
    *gptr<u32>(r13) = u32(r12);
    guest::cpu()->r[13] = r13;
    r0 = call_0056a99c(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r5 = r0;
    if (r0 == 0) {
        goto L_567d4c;
    }
    if (*gptr<u32>(r4 + 0x158u) != 0) {  // (from the original)
        goto L_567d4c;
    }
    r1 = *gptr<u32>(r4 + 0x22cu);  // (from the original)
    r2 = 0x567d5cu;  // (from the original)
    *gptr<u32>(r4 + 0x158u) = u32(r1);  // (from the original)
    if (*gptr<u32>(r4 + 8u) != 0) {
        goto L_567d4c;
    }
    r0 = r4 + 0xcu;  // (from the original)
    *gptr<u32>(r4 + 8u) = u32(r1);
    guest::cpu()->r[13] = r13;
    r0 = call_004b6598(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
L_567d4c:;
    r0 = r5;
    r13 = r13 + 0x20u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_00567ce4
GUEST_EXPORT(0x00567ce4, d_00567ce4::f_00567ce4);

// f_00567d60: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00567d60 {

struct __attribute__((packed)) Object_00567d60_0 {
    u8 unknown_0[0x8];  // (not used here)
    u32 word_8;
};
GUEST_OFFSET(Object_00567d60_0, word_8, 0x8);  // (from the original)

struct __attribute__((packed)) Object_00567d60_1 {
    u8 unknown_0[0x22c];  // (not used here)
    u32 word_22c;
};
GUEST_OFFSET(Object_00567d60_1, word_22c, 0x22c);  // (from the original)

inline constexpr guest::Function<0x004b6598, u32(u32, u32, u32, u32)> call_004b6598;  // (from the original)

u32 f_00567d60(gptr<Object_00567d60_0> arg0, gptr<Object_00567d60_1> arg1) {
    u32 ea = 0;
    u32 r0 = arg0.addr();
    u32 r1 = arg1.addr();
    u32 r2 = 0;
    u32 r3 = 0;
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 8;
    r1 = arg1->word_22c;
    r3 = arg0->word_8;
    r2 = 0x567d98u;  // (from the original)
    if (r3 != 0) {
        r0 = 0u;
        r13 = r13 + 8;
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    ea = r0 + 8u;
    arg0->word_8 = u32(r1);
    r0 = ea + 4u;
    guest::cpu()->r[13] = r13;
    r0 = call_004b6598(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    if (r0 != 0) {
        r0 = 1u;
        r13 = r13 + 8;
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    r0 = 0u;
    r13 = r13 + 8;
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_00567d60
GUEST_EXPORT(0x00567d60, d_00567d60::f_00567d60);

// f_00567d9c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00567d9c {

inline constexpr guest::Function<0x00567dac, u32(u32, u32, u32, u32)> call_00567dac;  // (from the original)

u32 f_00567d9c() {
    u32 r2 = 0;
    r2 = *gptr<u32>(0x975c14u);  // (from the original)
    return call_00567dac(guest::cpu()->r[0], guest::cpu()->r[1], r2, guest::cpu()->r[3]);
}

}  // namespace d_00567d9c
GUEST_EXPORT(0x00567d9c, d_00567d9c::f_00567d9c);

// f_00567dac: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00567dac {

inline constexpr guest::Function<0x004b6598, u32(u32, u32, u32, u32)> call_004b6598;  // (from the original)
inline constexpr guest::Function<0x00569dc4, u32(u32, u32, u32, u32)> call_00569dc4;  // (from the original)
inline constexpr guest::Function<0x0056aa98, u32(u32, u32, u32, u32)> call_0056aa98;  // (from the original)

u32 f_00567dac(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 0x18u;  // (from the original)
    r4 = r0;
    r5 = r1;
    r6 = r2;
    guest::cpu()->r[13] = r13;
    r0 = call_00569dc4(r0, r1, r2, r3);
    r1 = r13;
    r3 = r6;
    *gptr<u32>(r13) = u32(0x9047f8u);  // (from the original)
    *gptr<u32>(r13 + 4) = u32(r5);
    r2 = *gptr<u32>(r0 + 4u);
    r0 = r4 + 0x15cu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0056aa98(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    r1 = *gptr<u32>(r4 + 0x22cu);  // (from the original)
    r2 = 0x567e20u;  // (from the original)
    *gptr<u32>(r4 + 0x158u) = u32(r1);  // (from the original)
    if (*gptr<u32>(r4 + 8u) == 0) {
        r0 = r4 + 0xcu;  // (from the original)
        *gptr<u32>(r4 + 8u) = u32(r1);
        guest::cpu()->r[13] = r13;
        r0 = call_004b6598(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        if (r0 != 0) {
            r0 = 1u;
            goto L_567e14;
        }
    }
    r0 = 0u;
L_567e14:;
    r13 = r13 + 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_00567dac
GUEST_EXPORT(0x00567dac, d_00567dac::f_00567dac);

// f_00567e24: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00567e24 {

inline constexpr guest::Function<0x00567e34, u32(u32, u32, u32, u32)> call_00567e34;  // (from the original)

u32 f_00567e24() {
    u32 r2 = 0;
    u32 r3 = 0;
    r2 = *gptr<u32>(0x975c14u);  // (from the original)
    r3 = *gptr<u32>(0x975c14u + 4);  // (from the original)
    return call_00567e34(guest::cpu()->r[0], guest::cpu()->r[1], r2, r3);
}

}  // namespace d_00567e24
GUEST_EXPORT(0x00567e24, d_00567e24::f_00567e24);

// f_00567ef0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00567ef0 {

struct __attribute__((packed)) Object_00567ef0_0 {
    u32 word_0;
};
GUEST_OFFSET(Object_00567ef0_0, word_0, 0x0);  // (from the original)

inline constexpr guest::Function<0x0013bc00, u32(u32, u32, u32, u32)> call_0013bc00;  // (from the original)
inline constexpr guest::Function<0x0056853c, u32(u32, u32, u32, u32)> call_0056853c;  // (from the original)

u32 f_00567ef0(gptr<Object_00567ef0_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r1 = 0;
    r1 = 0x9061b8u;  // (from the original)
    guest::cpu()->r[13] -= 8u;
    arg0->word_0 = u32(r1);
    r0 = r0 + 0x15cu;  // (from the original)
    r0 = call_0013bc00(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = 0x906224u;  // (from the original)
    *gptr<u32>(r0 - 0x15cu) = u32(r1);  // (from the original)
    r0 = r0 - 0x150u;  // (from the original)
    r0 = call_0056853c(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r0 = r0 - 0xcu;  // (from the original)
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_00567ef0
GUEST_EXPORT(0x00567ef0, d_00567ef0::f_00567ef0);

// f_00567f20: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00567f20 {

struct __attribute__((packed)) Object_00567f20_0 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
};
GUEST_OFFSET(Object_00567f20_0, word_4, 0x4);  // (from the original)


u32 f_00567f20(gptr<Object_00567f20_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r3 = 0;
    r0 = arg0->word_4;
    r3 = 0u;
    return guest::call_address<u32>(*gptr<u32>(*gptr<u32>(r0) + 8u), r0, guest::cpu()->r[1], guest::cpu()->r[2], r3);
}

}  // namespace d_00567f20
GUEST_EXPORT(0x00567f20, d_00567f20::f_00567f20);

// f_00567f34: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00567f34 {

struct __attribute__((packed)) Object_00567f34_0 {
    u8 unknown_0[0x1c];  // (not used here)
    u32 word_1c;
};
GUEST_OFFSET(Object_00567f34_0, word_1c, 0x1c);  // (from the original)


void f_00567f34(gptr<Object_00567f34_0> arg0) {
    u32 r1 = 0;
    r1 = ~0u;
    arg0->word_1c = u32(r1);
    guest::cpu()->r[1] = r1;
    return;
}

}  // namespace d_00567f34
GUEST_EXPORT(0x00567f34, d_00567f34::f_00567f34);

// f_00567f40: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00567f40 {

struct __attribute__((packed)) Object_00567f40_0 {
    u8 unknown_0[0x1c];  // (not used here)
    u32 word_1c;
};
GUEST_OFFSET(Object_00567f40_0, word_1c, 0x1c);  // (from the original)


u32 f_00567f40(gptr<Object_00567f40_0> arg0, float S0, float S1) {
    u32 res = 0;
    u32 r0 = arg0.addr();
    u32 r1 = 0;
    u32 r2 = 0;
    float S2 = 0;
    float S3 = 0;
    r1 = arg0->word_1c;
    res = r1;
    if (!(!u32(res == 0) && res >> 0x1f == (r1 & (r1 ^ res)) >> 0x1f)) {  // (from the original)
        r1 = ~0u;
        arg0->word_1c = u32(r1);
        r0 = 1u;
        guest::cpu()->r[1] = r1;
        guest::cpu()->s[0] = S0;
        guest::cpu()->s[1] = S1;
        return r0;
    }
    r2 = *gptr<u32>(r0 + 0x18u);  // (from the original)
    res = r1 - r2;
    if (!(!u32(res == 0) && res >> 0x1f == ((r1 ^ r2) & (r1 ^ res)) >> 0x1f)) {  // (from the original)
        S0 = std::bit_cast<float>(r1);
        S1 = std::bit_cast<float>(r1 + 1u);
        r1 = r0 + 0xcu;  // (from the original)
        S0 = float(s32(std::bit_cast<u32>(S0))) / float(s32(std::bit_cast<u32>(S1)));
        S2 = std::bit_cast<float>(*gptr<u32>(r1)) * S0;
        S3 = std::bit_cast<float>(*gptr<u32>(r1 + 4)) * S0;
        *gptr<u32>(r0 + 0x14u) = u32(std::bit_cast<u32>(std::bit_cast<float>(*gptr<u32>(r0 + 0x14u)) * S0));  // (from the original)
        *gptr<u32>(r1) = u32(std::bit_cast<u32>(S2));
        *gptr<u32>(r1 + 4) = u32(std::bit_cast<u32>(S3));
    }
    *gptr<u32>(r0) = u32(std::bit_cast<u32>(std::bit_cast<float>(*gptr<u32>(r0)) + std::bit_cast<float>(*gptr<u32>(r0 + 0xcu))));  // (from the original)
    *gptr<u32>(r0 + 4u) = u32(std::bit_cast<u32>(std::bit_cast<float>(*gptr<u32>(r0 + 4u)) + std::bit_cast<float>(*gptr<u32>(r0 + 0x10u))));  // (from the original)
    S1 = std::bit_cast<float>(*gptr<u32>(r0 + 0x14u));  // (from the original)
    S0 = std::bit_cast<float>(*gptr<u32>(r0 + 8u)) + S1;
    *gptr<u32>(r0 + 8u) = u32(std::bit_cast<u32>(S0));
    r1 = *gptr<u32>(r0 + 0x1cu) - 1u;  // (from the original)
    *gptr<u32>(r0 + 0x1cu) = u32(r1);  // (from the original)
    r0 = 0u;
    guest::cpu()->r[1] = r1;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    return r0;
}

}  // namespace d_00567f40
GUEST_EXPORT(0x00567f40, d_00567f40::f_00567f40);

// f_00567fe4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00567fe4 {

struct __attribute__((packed)) Object_00567fe4_0 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u8 unknown_c[0xc];  // (not used here)
    u32 word_18;
    u32 word_1c;
};
GUEST_OFFSET(Object_00567fe4_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_00567fe4_0, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_00567fe4_0, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Object_00567fe4_0, word_18, 0x18);  // (from the original)
GUEST_OFFSET(Object_00567fe4_0, word_1c, 0x1c);  // (from the original)

struct __attribute__((packed)) Object_00567fe4_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Object_00567fe4_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_00567fe4_1, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_00567fe4_1, word_8, 0x8);  // (from the original)

struct __attribute__((packed)) Object_00567fe4_2 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Object_00567fe4_2, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_00567fe4_2, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_00567fe4_2, word_8, 0x8);  // (from the original)


u32 f_00567fe4(gptr<Object_00567fe4_0> arg0, gptr<Object_00567fe4_1> arg1, gptr<Object_00567fe4_2> arg2, u32 r3, float S0) {
    u32 res = 0;
    u32 r0 = arg0.addr();
    u32 r1 = arg1.addr();
    u32 r2 = arg2.addr();
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r12 = 0;
    u32 r13 = guest::cpu()->r[13];
    float S1 = 0;
    float S2 = 0;
    float S5 = 0;
    float S6 = 0;
    float S7 = 0;
    r13 = r13 - 8;
    r4 = *gptr<u32>(r13 + 0xcu);  // (from the original)
    r5 = *gptr<u32>(r13 + 8u);
    arg0->word_0 = u32(arg1->word_0);
    arg0->word_4 = u32(arg1->word_4);
    r12 = arg1->word_8;
    arg0->word_18 = u32(r4);
    arg0->word_8 = u32(r12);
    S7 = std::bit_cast<float>(arg2->word_0) - std::bit_cast<float>(arg1->word_0);
    S5 = std::bit_cast<float>(arg2->word_4) - std::bit_cast<float>(arg1->word_4);
    S6 = std::bit_cast<float>(arg2->word_8) - std::bit_cast<float>(arg1->word_8);
    S1 = std::bit_cast<float>(*gptr<u32>(0x568108u));  // (from the original)
    r12 = std::bit_cast<u32>(std::bit_cast<float>(vcvt_sz_f(sqrtf(S7 * S7 + S5 * S5 + S6 * S6) / S0)));
    S0 = S1;
    res = r12 - r3;
    if (!u32(res == 0) && res >> 0x1f == ((r12 ^ r3) & (r12 ^ res)) >> 0x1f) {  // (from the original)
        r12 = r3;
    }
    if (s32(r12) < s32(r5)) {
        r12 = r5;
    }
    res = r4;
    arg0->word_1c = u32(r12);
    if (u32(res == 0) || res >> 0x1f != (r4 & (r4 ^ res)) >> 0x1f) {  // (from the original)
        goto L_5680bc;
    }
    r1 = 0u;
    if ((r4 & 1u) != 0) {
        r1 = 1u;
        S0 = float(s32(std::bit_cast<u32>(std::bit_cast<float>(r4)))) + S0;
    }
    res = u32(s32(r4) >> 1);
    r2 = res;
    if (res == 0) {
        goto L_5680b8;
    }
    do {
L_56808c:;
        r3 = r4 - r1;
        res = r2 - 1u;
        r2 = res;
        r1 = r1 + 2u;
        S0 = float(s32(std::bit_cast<u32>(std::bit_cast<float>(r3)))) + S0;
        S1 = float(s32(std::bit_cast<u32>(std::bit_cast<float>(r3 - 1u)))) + S1;
        guest::preempt();
    } while (res != 0);
L_5680b8:;
    S0 = S0 + S1;
L_5680bc:;
    r1 = r4 + 1u;
    r0 = r0 + 0xcu;  // (from the original)
    S1 = std::bit_cast<float>(*gptr<u32>(0x56810cu)) / (float(s32(std::bit_cast<u32>(std::bit_cast<float>(r12 - r4)))) + S0 / float(s32(std::bit_cast<u32>(std::bit_cast<float>(r1)))));  // (from the original)
    S0 = S7 * S1;
    S2 = S5 * S1;
    S1 = S6 * S1;
    *gptr<u32>(r0) = u32(std::bit_cast<u32>(S0));
    *gptr<u32>(r0 + 4u) = u32(std::bit_cast<u32>(S2));
    *gptr<u32>(r0 + 8u) = u32(std::bit_cast<u32>(S1));
    r13 = r13 + 8;
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    return r0;
}

}  // namespace d_00567fe4
GUEST_EXPORT(0x00567fe4, d_00567fe4::f_00567fe4);

// f_00568b38: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00568b38 {

inline constexpr guest::Function<0x001408d4, u32(u32, u32, u32, u32)> call_001408d4;  // (from the original)
inline constexpr guest::Function<0x004b9f68, u32(u32, u32, u32, u32)> call_004b9f68;  // (from the original)

u32 f_00568b38(u32 r0, u32 r1) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r5 = r0 + 0x10u;  // (from the original)
    r0 = r5;
    r0 = call_004b9f68(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r4 = r0;
    if (r0 != 0) {
        r0 = r5 + 4u;
        r1 = r4 + 4u;
        r0 = call_001408d4(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
    }
    r0 = r4;
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_00568b38
GUEST_EXPORT(0x00568b38, d_00568b38::f_00568b38);

// f_00569544: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00569544 {

struct __attribute__((packed)) Object_00569544_0 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u8 byte_14;
};
GUEST_OFFSET(Object_00569544_0, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_00569544_0, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Object_00569544_0, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Object_00569544_0, word_10, 0x10);  // (from the original)
GUEST_OFFSET(Object_00569544_0, byte_14, 0x14);  // (from the original)


u32 f_00569544(gptr<Object_00569544_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r1 = 0;
    u32 fpsr = guest::cpu()->fpscr;
    float S0 = 0;
    float S1 = 0;
    r1 = u32(arg0->byte_14);
    S0 = std::bit_cast<float>(arg0->word_8);
    S1 = std::bit_cast<float>(arg0->word_10);
    arg0->word_c = u32(std::bit_cast<u32>(S0));
    if ((r1 & 2u) != 0) {
        fpsr = fpsr & 0xfffffffu | vfp_cmpf(S1, S0);  // (from the original)
        if (!(fpsr >> 0x1d & 1) || fpsr >> 0x1e & 1) {  // (from the original)
            goto L_5695bc;
        }
        if ((r1 & 1u) != 0) {
            S0 = std::bit_cast<float>(*gptr<u32>(0x5695d4u));  // (from the original)
            goto L_5695c0;
        }
        S1 = std::bit_cast<float>(arg0->word_4) - S1;
        S0 = S1 + S0;
        goto L_5695c0;
    }
    S0 = S1 + S0;
    if ((r1 & 1u) != 0) {
        S1 = std::bit_cast<float>(*gptr<u32>(r0 + 4u)) - std::bit_cast<float>(*gptr<u32>(0x5695d8u));  // (from the original)
        if (!((fpsr & 0xfffffffu | vfp_cmpf(S1, S0)) >> 0x1d & 1)) {  // (from the original)
            S0 = S1;
        }
        goto L_5695c0;
    }
    S1 = std::bit_cast<float>(*gptr<u32>(r0 + 4u));
    fpsr = fpsr & 0xfffffffu | vfp_cmpf(S1, S0);  // (from the original)
    if (fpsr >> 0x1d & 1 && !(fpsr >> 0x1e & 1)) {  // (from the original)
        goto L_5695c0;
    }
L_5695bc:;
    S0 = S0 - S1;
L_5695c0:;
    *gptr<u32>(r0 + 8u) = u32(std::bit_cast<u32>(S0));
    r0 = *gptr<u32>(r0 + 0x18u);  // (from the original)
    if (r0 != 0) {
        *gptr<u32>(r0 + 0x10u) = u32(std::bit_cast<u32>(S0));  // (from the original)
    }
    guest::cpu()->r[1] = r1;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    return r0;
}

}  // namespace d_00569544
GUEST_EXPORT(0x00569544, d_00569544::f_00569544);

// f_00569774: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00569774 {

struct __attribute__((packed)) Object_00569774_0 {
    u8 unknown_0[0x18];  // (not used here)
    u32 word_18;
};
GUEST_OFFSET(Object_00569774_0, word_18, 0x18);  // (from the original)

inline constexpr guest::Function<0x0073bf80, u32(u32, u32, u32, u32)> call_0073bf80;  // (from the original)
inline constexpr guest::Function<0x0073bf94, u32(u32, u32, u32, u32)> call_0073bf94;  // (from the original)

u32 f_00569774(gptr<Object_00569774_0> arg0, u32 r1, float S0, float S1, float S2) {
    u32 r0 = arg0.addr();
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 zf = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r4 = r0;
    r0 = r1;
    arg0->word_18 = u32(r1);
    if (r1 != 0) {
        r5 = 1u;
        guest::cpu()->s[0] = S0;
        guest::cpu()->s[1] = S1;
        guest::cpu()->s[2] = S2;
        r0 = call_0073bf80(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        S0 = guest::cpu()->s[0];
        S1 = guest::cpu()->s[1];
        S2 = guest::cpu()->s[2];
        zf = r0 == 0;
        r0 = *gptr<u32>(r4 + 0x18u);  // (from the original)
        if (!zf) {
            r5 = 0u;
        }
        guest::cpu()->s[0] = S0;
        guest::cpu()->s[1] = S1;
        guest::cpu()->s[2] = S2;
        r0 = call_0073bf94(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        S1 = std::bit_cast<float>(r0);
        S0 = std::bit_cast<float>(*gptr<u32>(0x5697d8u));  // (from the original)
        S2 = std::bit_cast<float>(*gptr<u32>(0x5697dcu));  // (from the original)
        *gptr<u32>(r4 + 0x10u) = u32(std::bit_cast<u32>(S0));  // (from the original)
        r0 = r4 + 4u;
        S1 = float(std::bit_cast<u32>(S1));
        *gptr<u32>(r0) = u32(std::bit_cast<u32>(S1));
        *gptr<u32>(r0 + 4) = u32(std::bit_cast<u32>(S2));
        *gptr<u8>(r4 + 0x14u) = u8(r5);  // (from the original)
        *gptr<u32>(r4 + 0xcu) = u32(std::bit_cast<u32>(S2));  // (from the original)
        r0 = *gptr<u32>(r4 + 0x18u);  // (from the original)
        if (r0 != 0) {
            r1 = *gptr<u32>(r4 + 8u);
            *gptr<u32>(r0 + 0x10u) = u32(r1);  // (from the original)
        }
    }
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    return r0;
}

}  // namespace d_00569774
GUEST_EXPORT(0x00569774, d_00569774::f_00569774);

// f_00569ab8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00569ab8 {

struct __attribute__((packed)) Object_00569ab8_0 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Object_00569ab8_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_00569ab8_0, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_00569ab8_0, word_8, 0x8);  // (from the original)

inline constexpr guest::Function<0x00125e08, u32(u32, u32, u32, u32)> call_00125e08;  // (from the original)
inline constexpr guest::Function<0x0012b394, u32(u32, u32, u32, u32)> call_0012b394;  // (from the original)

u32 f_00569ab8(gptr<Object_00569ab8_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r1 = 0;
    u32 r2 = 0;
    u32 r3 = 0;
    r3 = r0 + 4u;
    r2 = 0u;
    guest::cpu()->r[13] -= 8u;
    arg0->word_4 = u32(r0 + 0xcu);  // (from the original)
    arg0->word_8 = u32(r2);
    r1 = 0x906224u;  // (from the original)
    arg0->word_0 = u32(r1);
    r0 = r0 + 0xcu;  // (from the original)
    r0 = call_0012b394(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    r2 = 0x9061c8u;  // (from the original)
    r1 = 0x2010000u;  // (from the original)
    *gptr<u32>(r0) = u32(r2);
    r0 = r0 + 0x13cu;  // (from the original)
    *gptr<u32>(r0) = u32(r1);
    r0 = r0 + 4u;
    r0 = call_00125e08(r0, r1, r2, r3);
    r1 = 0x90614cu;  // (from the original)
    *gptr<u32>(r0) = u32(r1);
    r0 = r0 - 0x14cu;  // (from the original)
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_00569ab8
GUEST_EXPORT(0x00569ab8, d_00569ab8::f_00569ab8);

// f_00569b28: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00569b28 {

struct __attribute__((packed)) Object_00569b28_0 {
    u32 word_0;
};
GUEST_OFFSET(Object_00569b28_0, word_0, 0x0);  // (from the original)

inline constexpr guest::Function<0x0056853c, u32(u32, u32, u32, u32)> call_0056853c;  // (from the original)

u32 f_00569b28(gptr<Object_00569b28_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r1 = 0;
    r1 = 0x906224u;  // (from the original)
    guest::cpu()->r[13] -= 8u;
    arg0->word_0 = u32(r1);
    r0 = r0 + 0xcu;  // (from the original)
    r0 = call_0056853c(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r0 = r0 - 0xcu;  // (from the original)
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_00569b28
GUEST_EXPORT(0x00569b28, d_00569b28::f_00569b28);

// f_00569b44: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00569b44 {

struct __attribute__((packed)) Object_00569b44_0 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u8 byte_14;
};
GUEST_OFFSET(Object_00569b44_0, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_00569b44_0, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Object_00569b44_0, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Object_00569b44_0, word_10, 0x10);  // (from the original)
GUEST_OFFSET(Object_00569b44_0, byte_14, 0x14);  // (from the original)


void f_00569b44(gptr<Object_00569b44_0> arg0, u32 r1, float S0, float S1, float S2) {
    u32 fpsr = guest::cpu()->fpscr;
    float S3 = 0;
    S3 = std::bit_cast<float>(*gptr<u32>(0x569b6cu));  // (from the original)
    arg0->word_4 = u32(std::bit_cast<u32>(S0));
    if (!((fpsr & 0xfffffffu | vfp_cmpf(S2, S3)) >> 0x1d & 1)) {  // (from the original)
        S2 = S3;
    }
    arg0->word_8 = u32(std::bit_cast<u32>(S2));
    arg0->word_10 = u32(std::bit_cast<u32>(S1));
    arg0->byte_14 = u8(r1);
    arg0->word_c = u32(std::bit_cast<u32>(S2));
    return;
}

}  // namespace d_00569b44
GUEST_EXPORT(0x00569b44, d_00569b44::f_00569b44);

// f_00569e90: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00569e90 {

inline constexpr guest::Function<0x00132478, u32(u32, u32, u32, u32)> call_00132478;  // (from the original)
inline constexpr guest::Function<0x00567a10, u32(u32, u32, u32, u32)> call_00567a10;  // (from the original)
inline constexpr guest::Function<0x00569ebc, u32(u32, u32, u32, u32)> call_00569ebc;  // (from the original)

u32 f_00569e90(u32 r0) {
    u32 r1 = 0;
    u32 r2 = 0;
    u32 r4 = guest::cpu()->r[4];
    guest::cpu()->r[13] -= 8u;
    r4 = r0;
    r2 = 0xf0u;  // (from the original)
    r1 = 0x190u;  // (from the original)
    r0 = call_00569ebc(r0, r1, r2, guest::cpu()->r[3]);
    r2 = guest::cpu()->r[2];
    r1 = 0x410u;  // (from the original)
    r0 = r4 + 4u;
    r0 = call_00567a10(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r0 = r4 + 4u;
    guest::cpu()->r[13] += 8u;
    return call_00132478(r0, r1, r2, guest::cpu()->r[3]);
}

}  // namespace d_00569e90
GUEST_EXPORT(0x00569e90, d_00569e90::f_00569e90);

// f_00569ebc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00569ebc {

inline constexpr guest::Function<0x007b0530, u32(u32, u32, u32, u32)> call_007b0530;  // (from the original)

u32 f_00569ebc(u32 r0_unused, u32 r1, u32 r2) {
    u32 res = 0;
    u32 r0 = 0;
    u32 r3 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r12 = 0;
    u32 r13 = guest::cpu()->r[13];
    u32 r14 = guest::cpu()->r[14];
    float S0 = 0;
    float S1 = 0;
    float S2 = 0;
    float S3 = 0;
    float S4 = 0;
    float S5 = 0;
    float S6 = 0;
    float S7 = 0;
    r0 = 0x8ae290u;  // (from the original)
    r3 = uxth(r2);
    r4 = r0 + 0x148u;  // (from the original)
    r2 = uxth(r1);
    S1 = std::bit_cast<float>(*gptr<u32>(r4 + 4));
    S2 = std::bit_cast<float>(*gptr<u32>(r4 + 8));
    S3 = std::bit_cast<float>(*gptr<u32>(r4 + 0xc));  // (from the original)
    S4 = std::bit_cast<float>(*gptr<u32>(r4 + 0x10));  // (from the original)
    S5 = std::bit_cast<float>(*gptr<u32>(r4 + 0x14));  // (from the original)
    S6 = std::bit_cast<float>(*gptr<u32>(r4 + 0x18));  // (from the original)
    S7 = std::bit_cast<float>(*gptr<u32>(r4 + 0x1c));  // (from the original)
    r13 = r13 - 0x40u;  // (from the original)
    r1 = *gptr<u32>(r0 + 4u);
    r0 = r0 + 0x168u;  // (from the original)
    *gptr<u32>(r13) = u32(std::bit_cast<u32>(std::bit_cast<float>(*gptr<u32>(r4))));
    *gptr<u32>(r13 + 4) = u32(std::bit_cast<u32>(S1));
    *gptr<u32>(r13 + 8) = u32(std::bit_cast<u32>(S2));
    *gptr<u32>(r13 + 0xc) = u32(std::bit_cast<u32>(S3));  // (from the original)
    *gptr<u32>(r13 + 0x10) = u32(std::bit_cast<u32>(S4));  // (from the original)
    *gptr<u32>(r13 + 0x14) = u32(std::bit_cast<u32>(S5));  // (from the original)
    *gptr<u32>(r13 + 0x18) = u32(std::bit_cast<u32>(S6));  // (from the original)
    *gptr<u32>(r13 + 0x1c) = u32(std::bit_cast<u32>(S7));  // (from the original)
    S0 = std::bit_cast<float>(*gptr<u32>(r0));
    S1 = std::bit_cast<float>(*gptr<u32>(r0 + 4));
    S2 = std::bit_cast<float>(*gptr<u32>(r0 + 8));
    S3 = std::bit_cast<float>(*gptr<u32>(r0 + 0xc));  // (from the original)
    S4 = std::bit_cast<float>(*gptr<u32>(r0 + 0x10));  // (from the original)
    S5 = std::bit_cast<float>(*gptr<u32>(r0 + 0x14));  // (from the original)
    r0 = r13 + 0x20u;  // (from the original)
    *gptr<u32>(r0) = u32(std::bit_cast<u32>(S0));
    *gptr<u32>(r0 + 4) = u32(std::bit_cast<u32>(S1));
    *gptr<u32>(r0 + 8) = u32(std::bit_cast<u32>(S2));
    *gptr<u32>(r0 + 0xc) = u32(std::bit_cast<u32>(S3));  // (from the original)
    *gptr<u32>(r0 + 0x10) = u32(std::bit_cast<u32>(S4));  // (from the original)
    *gptr<u32>(r0 + 0x14) = u32(std::bit_cast<u32>(S5));  // (from the original)
    S1 = std::bit_cast<float>(*gptr<u32>(0x56a10cu));  // (from the original)
    r0 = std::bit_cast<u32>(float(std::bit_cast<u32>(std::bit_cast<float>(r3))) * S1);
    res = r0 & 0x80000000u;  // (from the original)
    r12 = res;
    if (res != 0) {
        r12 = 0x800000u;  // (from the original)
    }
    r4 = r0 << 1 >> 0x18;  // (from the original)
    r14 = r0 << 9;
    res = r0 & ~0x80000000u;  // (from the original)
    r0 = res;
    r14 = r14 >> 9;
    if (res == 0) {
        r14 = r14 >> 7;
        goto L_569f40;
    }
    res = r4 - 0x40u;  // (from the original)
    r0 = res;
    r14 = r14 >> 7;
    if (res >> 0x1f) {  // (from the original)
        goto L_569f4c;
    }
    res = r0 - 0x7fu;  // (from the original)
    if (!u32(res == 0) && res >> 0x1f == ((r0 ^ 0x7fu) & (r0 ^ res)) >> 0x1f) {  // (from the original)
        r12 = 0x7f0000u;  // (from the original)
        goto L_569f4c;
    }
L_569f40:;
    r4 = r0 & 0x7fu;  // (from the original)
    r12 = r14 | r12 | r4 << 0x10;  // (from the original)
L_569f4c:;
    S2 = std::bit_cast<float>(*gptr<u32>(0x56a110u));  // (from the original)
    *gptr<u32>(r13) = u32(r12);
    S3 = float(std::bit_cast<u32>(std::bit_cast<float>(r3)));
    r0 = std::bit_cast<u32>(S2 / S3);
    res = r0 & 0x80000000u;  // (from the original)
    r3 = res;
    r14 = r0 << 1;
    r12 = r0 << 9;
    if (res != 0) {
        r3 = 0x40000000u;  // (from the original)
    }
    res = r0 & ~0x80000000u;  // (from the original)
    r0 = res;
    r12 = r12 >> 9;
    r14 = r14 >> 0x18;  // (from the original)
    if (res != 0) {
        res = r14 - 0x40u;  // (from the original)
        r0 = res;
        if (res >> 0x1f) {  // (from the original)
            goto L_569fa4;
        }
        res = r0 - 0x7fu;  // (from the original)
        if (!u32(res == 0) && res >> 0x1f == ((r0 ^ 0x7fu) & (r0 ^ res)) >> 0x1f) {  // (from the original)
            r3 = 0x3f800000u;  // (from the original)
            goto L_569fa4;
        }
    }
    r3 = r12 | r3 | (r0 & 0x7fu) << 0x17;  // (from the original)
L_569fa4:;
    *gptr<u32>(r13 + 8u) = u32(r3 << 1);
    r0 = std::bit_cast<u32>(float(std::bit_cast<u32>(std::bit_cast<float>(r2))) * S1);
    res = r0 & 0x80000000u;  // (from the original)
    r3 = res;
    if (res != 0) {
        r3 = 0x800000u;  // (from the original)
    }
    r14 = r0 << 1 >> 0x18;  // (from the original)
    r12 = r0 << 9;
    res = r0 & ~0x80000000u;  // (from the original)
    r0 = res;
    r12 = r12 >> 9;
    if (res == 0) {
        r12 = r12 >> 7;
        goto L_569ff8;
    }
    res = r14 - 0x40u;  // (from the original)
    r0 = res;
    r12 = r12 >> 7;
    if (res >> 0x1f) {  // (from the original)
        goto L_56a004;
    }
    res = r0 - 0x7fu;  // (from the original)
    if (!u32(res == 0) && res >> 0x1f == ((r0 ^ 0x7fu) & (r0 ^ res)) >> 0x1f) {  // (from the original)
        r3 = 0x7f0000u;  // (from the original)
        goto L_56a004;
    }
L_569ff8:;
    r3 = r12 | r3 | (r0 & 0x7fu) << 0x10;  // (from the original)
L_56a004:;
    *gptr<u32>(r13 + 0xcu) = u32(r3);  // (from the original)
    r0 = std::bit_cast<u32>(S2 / float(std::bit_cast<u32>(std::bit_cast<float>(r2))));
    res = r0 & 0x80000000u;  // (from the original)
    r2 = res;
    r12 = r0 << 1;
    r3 = r0 << 9;
    if (res != 0) {
        r2 = 0x40000000u;  // (from the original)
    }
    res = r0 & ~0x80000000u;  // (from the original)
    r0 = res;
    r3 = r3 >> 9;
    r12 = r12 >> 0x18;  // (from the original)
    if (res != 0) {
        res = r12 - 0x40u;  // (from the original)
        r0 = res;
        if (res >> 0x1f) {  // (from the original)
            goto L_56a058;
        }
        res = r0 - 0x7fu;  // (from the original)
        if (!u32(res == 0) && res >> 0x1f == ((r0 ^ 0x7fu) & (r0 ^ res)) >> 0x1f) {  // (from the original)
            r2 = 0x3f800000u;  // (from the original)
            goto L_56a058;
        }
    }
    r2 = r3 | r2 | (r0 & 0x7fu) << 0x17;  // (from the original)
L_56a058:;
    *gptr<u32>(r13 + 0x10u) = u32(r2 << 1);  // (from the original)
    *gptr<u32>(r13 + 0x28u) = u32(0xbf0000u);  // (from the original)
    if ((r1 & 0xffu) == 0) {  // (from the original)
        r0 = 0x10u;  // (from the original)
    } else {
        r0 = 0x18u;  // (from the original)
    }
    S1 = std::bit_cast<float>(*gptr<u32>(0x56a114u));  // (from the original)
    S2 = float(s32(std::bit_cast<u32>(std::bit_cast<float>(lsl_r(1u, r0 & 0xff) - 1u))));  // (from the original)
    S0 = S1 / S2;
    r0 = std::bit_cast<u32>(S0);
    res = r0 & 0x80000000u;  // (from the original)
    r1 = res;
    r3 = r0 << 1;
    r2 = r0 << 9 >> 9;
    if (res != 0) {
        r1 = 0x800000u;  // (from the original)
    }
    res = r0 & ~0x80000000u;  // (from the original)
    r0 = res;
    r3 = r3 >> 0x18;  // (from the original)
    if (res == 0) {
        r2 = r2 >> 7;
        goto L_56a0d0;
    }
    res = r3 - 0x40u;  // (from the original)
    r0 = res;
    r2 = r2 >> 7;
    if (res >> 0x1f) {  // (from the original)
        goto L_56a0dc;
    }
    res = r0 - 0x7fu;  // (from the original)
    if (!u32(res == 0) && res >> 0x1f == ((r0 ^ 0x7fu) & (r0 ^ res)) >> 0x1f) {  // (from the original)
        r1 = 0x7f0000u;  // (from the original)
        goto L_56a0dc;
    }
L_56a0d0:;
    r3 = r0 & 0x7fu;  // (from the original)
    r1 = r2 | r1 | r3 << 0x10;  // (from the original)
L_56a0dc:;
    *gptr<u32>(r13 + 0x30u) = u32(r1);  // (from the original)
    r2 = 1u;
    r1 = 0x38u;  // (from the original)
    r0 = r13;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2;
    guest::cpu()->s[3] = S3;
    guest::cpu()->s[4] = S4;
    guest::cpu()->s[5] = S5;
    guest::cpu()->s[6] = S6;
    guest::cpu()->s[7] = S7;
    r0 = call_007b0530(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    S2 = guest::cpu()->s[2];
    S3 = guest::cpu()->s[3];
    S4 = guest::cpu()->s[4];
    S5 = guest::cpu()->s[5];
    S6 = guest::cpu()->s[6];
    S7 = guest::cpu()->s[7];
    r0 = 0x8ae398u;  // (from the original)
    r2 = 1u;
    r1 = 0x40u;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2;
    guest::cpu()->s[3] = S3;
    guest::cpu()->s[4] = S4;
    guest::cpu()->s[5] = S5;
    guest::cpu()->s[6] = S6;
    guest::cpu()->s[7] = S7;
    r0 = call_007b0530(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    r13 = r13 + 0x40u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    return r0;
}

}  // namespace d_00569ebc
GUEST_EXPORT(0x00569ebc, d_00569ebc::f_00569ebc);

// f_0056a178: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0056a178 {


u32 f_0056a178(gptr<Float3> arg0) {
    u32 r0 = arg0.addr();
    u32 r1 = 0;
    float S0 = 0;
    float S1 = 0;
    float S2 = 0;
    float S3 = 0;
    float S4 = 0;
    S4 = arg0->v[0];
    S1 = arg0->v[1];
    S2 = arg0->v[2];
    S3 = sqrtf(S4 * S4 + S1 * S1 + S2 * S2);
    S0 = fabsf(S3);
    r1 = std::bit_cast<u32>(S0);
    if (s32(r1) <= s32(0x34000000u)) {  // (from the original)
        r0 = 0u;
        guest::cpu()->r[1] = r1;
        guest::cpu()->s[0] = S0;
        guest::cpu()->s[1] = S1;
        return r0;
    }
    S0 = std::bit_cast<float>(*gptr<u32>(0x56a1d0u)) / S3;  // (from the original)
    S3 = S4 * S0;
    S1 = S1 * S0;
    S0 = S2 * S0;
    *gptr<u32>(r0) = u32(std::bit_cast<u32>(S3));
    *gptr<u32>(r0 + 4u) = u32(std::bit_cast<u32>(S1));
    *gptr<u32>(r0 + 8u) = u32(std::bit_cast<u32>(S0));
    r0 = 1u;
    guest::cpu()->r[1] = r1;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    return r0;
}

}  // namespace d_0056a178
GUEST_EXPORT(0x0056a178, d_0056a178::f_0056a178);

// f_0056a3fc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0056a3fc {

inline constexpr guest::Function<0x00133580, u32(u32, u32, u32, u32)> call_00133580;  // (from the original)
inline constexpr guest::Function<0x0053dffc, u32(u32, u32, u32, u32)> call_0053dffc;  // (from the original)

u32 f_0056a3fc(u32 r0) {
    u32 ea = 0;
    u32 r1 = 0;
    u32 r2 = 0;
    u32 r3 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 0x118u;  // (from the original)
    r1 = r0;
    r2 = 0x100u;  // (from the original)
    ea = r13 + 8u;
    *gptr<u32>(ea) = u32(r13 + 0x10u);  // (from the original)
    *gptr<u32>(ea + 4) = u32(r2);
    r3 = r2;
    r0 = 0x8c9f1cu;  // (from the original)
    r4 = 0u;
    *gptr<u8>(r3 + (*gptr<u32>(r13 + 8u) - 1u)) = u8(u32(*gptr<u8>(r0)));
    r2 = r13 + 4u;
    *gptr<u8>(r13 + 0x10u) = u8(u32(*gptr<u8>(r0)));  // (from the original)
    *gptr<u32>(r13 + 4u) = u32(0x9048b0u);  // (from the original)
    r0 = *gptr<u32>(0x9752e0u);  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00133580(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        r0 = r4;
        r13 = r13 + 0x118u;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    *gptr<u8>(r13) = u8(0u);
    r2 = r13 + 4u;
    r1 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_0053dffc(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r4 = u32(s32(s8(*gptr<u8>(r13))));
    r0 = r4;
    r13 = r13 + 0x118u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_0056a3fc
GUEST_EXPORT(0x0056a3fc, d_0056a3fc::f_0056a3fc);

// f_0056a4a4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0056a4a4 {

inline constexpr guest::Function<0x00133580, u32(u32, u32, u32, u32)> call_00133580;  // (from the original)
inline constexpr guest::Function<0x0053dffc, u32(u32, u32, u32, u32)> call_0053dffc;  // (from the original)

u32 f_0056a4a4(u32 r0) {
    u32 ea = 0;
    u32 r1 = 0;
    u32 r2 = 0;
    u32 r3 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 0x118u;  // (from the original)
    r1 = r0;
    r2 = 0x100u;  // (from the original)
    ea = r13 + 8u;
    *gptr<u32>(ea) = u32(r13 + 0x10u);  // (from the original)
    *gptr<u32>(ea + 4) = u32(r2);
    r3 = r2;
    r0 = 0x8c9f1cu;  // (from the original)
    r4 = 0u;
    *gptr<u8>(r3 + (*gptr<u32>(r13 + 8u) - 1u)) = u8(u32(*gptr<u8>(r0)));
    r2 = r13 + 4u;
    *gptr<u8>(r13 + 0x10u) = u8(u32(*gptr<u8>(r0)));  // (from the original)
    *gptr<u32>(r13 + 4u) = u32(0x9048b0u);  // (from the original)
    r0 = *gptr<u32>(0x9752e0u);  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00133580(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        r0 = r4;
        r13 = r13 + 0x118u;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    *gptr<u8>(r13) = u8(0u);
    r2 = r13 + 4u;
    r1 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_0053dffc(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r4 = u32(s32(s8(*gptr<u8>(r13))));
    r0 = r4;
    r13 = r13 + 0x118u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_0056a4a4
GUEST_EXPORT(0x0056a4a4, d_0056a4a4::f_0056a4a4);

// f_0056a534: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0056a534 {

struct __attribute__((packed)) Object_0056a534_2 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
};
GUEST_OFFSET(Object_0056a534_2, word_4, 0x4);  // (from the original)

inline constexpr guest::Function<0x00125b3c, u32(u32, u32, u32, u32)> call_00125b3c;  // (from the original)

u32 f_0056a534(u32 r0_unused, u32 r1_unused, gptr<Object_0056a534_2> arg2) {
    u32 r2 = arg2.addr();
    r2 = arg2->word_4;
    return call_00125b3c(guest::cpu()->r[0], guest::cpu()->r[1], r2, guest::cpu()->r[3]);
}

}  // namespace d_0056a534
GUEST_EXPORT(0x0056a534, d_0056a534::f_0056a534);

// f_0056a53c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0056a53c {

struct __attribute__((packed)) Object_0056a53c_0 {
    u8 unknown_0[0x30];  // (not used here)
    u32 word_30;
};
GUEST_OFFSET(Object_0056a53c_0, word_30, 0x30);  // (from the original)

inline constexpr guest::Function<0x00135740, u32(u32, u32, u32, u32)> call_00135740;  // (from the original)
inline constexpr guest::Function<0x00137e84, u32(u32, u32, u32, u32)> call_00137e84;  // (from the original)
inline constexpr guest::Function<0x0053dfa0, u32(u32, u32, u32, u32)> call_0053dfa0;  // (from the original)

u32 f_0056a53c(gptr<Object_0056a53c_0> arg0, u32 r1, u32 r2, u32 r3) {
    u32 ea = 0;
    u32 r0 = arg0.addr();
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r13 = guest::cpu()->r[13];
    u32 r14 = guest::cpu()->r[14];
    ea = r13 - 0x10;  // (from the original)
    *gptr<u32>(ea) = u32(r3);
    *gptr<u32>(ea + 4) = u32(r4);
    *gptr<u32>(ea + 8) = u32(r5);
    *gptr<u32>(ea + 0xc) = u32(r14);  // (from the original)
    r13 = r13 - 0x10;  // (from the original)
    r5 = r0;
    r0 = arg0->word_30;
    if (r0 != 0) {
        r0 = 0xae563cu;  // (from the original)
        r4 = r0;
        guest::cpu()->r[13] = r13;
        r0 = call_00135740(r0, r1, r2, r3);
        r3 = guest::cpu()->r[3];
        r0 = *gptr<u32>(r5 + 0x30u);  // (from the original)
        *gptr<u32>(r13) = u32(0u);
        r2 = r5;
        r1 = r13;
        guest::cpu()->r[13] = r13;
        r0 = call_0053dfa0(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r5 = *gptr<u32>(r13);
        r0 = r4;
        guest::cpu()->r[13] = r13;
        r0 = call_00137e84(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r0 = r5;
    }
    ea = r13;
    r13 = r13 + 0x10;  // (from the original)
    r4 = *gptr<u32>(ea + 4);
    r5 = *gptr<u32>(ea + 8);
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[4] = r4;
    guest::cpu()->r[5] = r5;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_0056a53c
GUEST_EXPORT(0x0056a53c, d_0056a53c::f_0056a53c);

// f_0056a58c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0056a58c {

struct __attribute__((packed)) Object_0056a58c_0 {
    u8 unknown_0[0x30];  // (not used here)
    u32 word_30;
};
GUEST_OFFSET(Object_0056a58c_0, word_30, 0x30);  // (from the original)

inline constexpr guest::Function<0x00135740, u32(u32, u32, u32, u32)> call_00135740;  // (from the original)
inline constexpr guest::Function<0x00137e84, u32(u32, u32, u32, u32)> call_00137e84;  // (from the original)
inline constexpr guest::Function<0x00542358, u32(u32, u32, u32, u32)> call_00542358;  // (from the original)

u32 f_0056a58c(gptr<Object_0056a58c_0> arg0, u32 r1, u32 r2, u32 r3) {
    u32 r0 = arg0.addr();
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r13 = guest::cpu()->r[13];
    *gptr<u32>(r13 + 0xffffffe8u) = u32(r3);  // (from the original)
    r13 = r13 - 0x18;  // (from the original)
    r5 = r0;
    r6 = r1;
    if (arg0->word_30 != 0) {
        r0 = 0u;
        goto L_56a5f0;
    }
    r0 = 0xae563cu;  // (from the original)
    r4 = r0;
    guest::cpu()->r[13] = r13;
    r0 = call_00135740(r0, r1, r2, r3);
    r1 = 0u;
    r3 = r1;
    r2 = r6;
    r0 = *gptr<u32>(0x9752e0u);  // (from the original)
    *gptr<u32>(r13) = u32(r1);
    r1 = r5;
    guest::cpu()->r[13] = r13;
    r0 = call_00542358(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    *gptr<u32>(r5 + 0x30u) = u32(r0);  // (from the original)
    if (r0 == 0) {
        r5 = 0u;
    } else {
        r5 = 1u;
    }
    r0 = r4;
    guest::cpu()->r[13] = r13;
    r0 = call_00137e84(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r0 = r5;
L_56a5f0:;
    r13 = r13 + 0x18;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_0056a58c
GUEST_EXPORT(0x0056a58c, d_0056a58c::f_0056a58c);

// f_0056a5fc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0056a5fc {

struct __attribute__((packed)) Object_0056a5fc_0 {
    u8 unknown_0[0x30];  // (not used here)
    u32 word_30;
};
GUEST_OFFSET(Object_0056a5fc_0, word_30, 0x30);  // (from the original)

inline constexpr guest::Function<0x00135740, u32(u32, u32, u32, u32)> call_00135740;  // (from the original)
inline constexpr guest::Function<0x00137e84, u32(u32, u32, u32, u32)> call_00137e84;  // (from the original)
inline constexpr guest::Function<0x0053e71c, u32(u32, u32, u32, u32)> call_0053e71c;  // (from the original)

u32 f_0056a5fc(gptr<Object_0056a5fc_0> arg0, u32 r1, u32 r2, u32 r3) {
    u32 r0 = arg0.addr();
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r13 = guest::cpu()->r[13];
    r5 = r0;
    r13 = r13 - 0x20u;  // (from the original)
    r0 = arg0->word_30;
    r7 = r1;
    r6 = r2;
    if (r0 != 0) {
        r0 = 0xae563cu;  // (from the original)
        r4 = r0;
        guest::cpu()->r[13] = r13;
        r0 = call_00135740(r0, r1, r2, r3);
        r0 = *gptr<u32>(r5 + 0x30u);  // (from the original)
        *gptr<u32>(r13 + 4u) = u32(0u);
        r3 = r7;
        r2 = r5;
        r1 = r13 + 4u;
        *gptr<u32>(r13) = u32(r6);
        guest::cpu()->r[13] = r13;
        r0 = call_0053e71c(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r5 = *gptr<u32>(r13 + 4u);
        r0 = r4;
        guest::cpu()->r[13] = r13;
        r0 = call_00137e84(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r0 = r5;
    }
    r13 = r13 + 0x20u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_0056a5fc
GUEST_EXPORT(0x0056a5fc, d_0056a5fc::f_0056a5fc);

// f_0056a664: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0056a664 {

struct __attribute__((packed)) Object_0056a664_0 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Object_0056a664_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_0056a664_0, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_0056a664_0, word_8, 0x8);  // (from the original)


void f_0056a664(gptr<Object_0056a664_0> arg0) {
    u32 r1 = 0;
    u32 fpsr = guest::cpu()->fpscr;
    float S0 = 0;
    float S1 = 0;
    float S2 = 0;
    float S3 = 0;
    S0 = std::bit_cast<float>(arg0->word_0);
    S1 = std::bit_cast<float>(arg0->word_4);
    S2 = S0;
    fpsr = fpsr & 0xfffffffu | vfp_cmpf(S1, S0);  // (from the original)
    S3 = std::bit_cast<float>(arg0->word_8);
    if (!(fpsr >> 0x1e & 1) && fpsr >> 0x1f == (fpsr >> 0x1c & 1)) {  // (from the original)
        S0 = S1;
    }
    fpsr = fpsr & 0xfffffffu | vfp_cmpf(S3, S0);  // (from the original)
    if (!(fpsr >> 0x1e & 1) && fpsr >> 0x1f == (fpsr >> 0x1c & 1)) {  // (from the original)
        S0 = S3;
    }
    r1 = std::bit_cast<u32>(S0);
    if (s32(r1) <= s32(0x3f800000u)) {  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->s[0] = S0;
        guest::cpu()->s[1] = S1;
        return;
    }
    arg0->word_0 = u32(std::bit_cast<u32>(S2 / S0));
    arg0->word_4 = u32(std::bit_cast<u32>(S1 / S0));
    S1 = S3 / S0;
    arg0->word_8 = u32(std::bit_cast<u32>(S1));
    guest::cpu()->r[1] = r1;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    return;
}

}  // namespace d_0056a664
GUEST_EXPORT(0x0056a664, d_0056a664::f_0056a664);

// f_0056a724: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0056a724 {

struct __attribute__((packed)) Object_0056a724_0 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
};
GUEST_OFFSET(Object_0056a724_0, word_4, 0x4);  // (from the original)


u32 f_0056a724(gptr<Object_0056a724_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r2 = 0;
    r0 = arg0->word_4;
    r2 = *gptr<u32>(*gptr<u32>(r0) + 0x1cu);  // (from the original)
    return guest::call_address<u32>(r2, r0, guest::cpu()->r[1], r2, guest::cpu()->r[3]);
}

}  // namespace d_0056a724
GUEST_EXPORT(0x0056a724, d_0056a724::f_0056a724);

// f_0056a734: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0056a734 {

struct __attribute__((packed)) Object_0056a734_0 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
};
GUEST_OFFSET(Object_0056a734_0, word_4, 0x4);  // (from the original)


u32 f_0056a734(gptr<Object_0056a734_0> arg0, u32 r1, u32 r2) {
    u32 r0 = arg0.addr();
    u32 r3 = 0;
    r0 = arg0->word_4;
    if (r2 == 0) {
        r2 = 1u;
    }
    r1 = r1 + r2;
    r3 = *gptr<u32>(*gptr<u32>(r0) + 0x18u);  // (from the original)
    return guest::call_address<u32>(r3, r0, r1, r2, r3);
}

}  // namespace d_0056a734
GUEST_EXPORT(0x0056a734, d_0056a734::f_0056a734);

// f_0056a758: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0056a758 {

inline constexpr guest::Function<0x0056a780, u32(u32, u32, u32, u32)> call_0056a780;  // (from the original)

u32 f_0056a758() {
    u32 r4 = guest::cpu()->r[4];
    u32 r12 = 0;
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 0x10u;  // (from the original)
    r4 = 0u;
    r12 = *gptr<u32>(0x975c38u);  // (from the original)
    *gptr<u32>(r13) = u32(r4);
    *gptr<u32>(r13 + 4) = u32(r12);
    guest::cpu()->r[13] = r13;
    call_0056a780(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    r13 = r13 + 0x10u;  // (from the original)
    guest::cpu()->r[13] = r13;
    return guest::cpu()->r[0];
}

}  // namespace d_0056a758
GUEST_EXPORT(0x0056a758, d_0056a758::f_0056a758);

// f_0056a94c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0056a94c {

inline constexpr guest::Function<0x0056a780, u32(u32, u32, u32, u32)> call_0056a780;  // (from the original)

u32 f_0056a94c() {
    u32 r3 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r12 = 0;
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 0x10u;  // (from the original)
    r4 = 1u;
    r3 = *gptr<u32>(0x975c34u);  // (from the original)
    r12 = *gptr<u32>(0x975c34u + 4);  // (from the original)
    *gptr<u32>(r13) = u32(r4);
    *gptr<u32>(r13 + 4) = u32(r12);
    guest::cpu()->r[13] = r13;
    call_0056a780(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], r3);
    r13 = r13 + 0x10u;  // (from the original)
    guest::cpu()->r[13] = r13;
    return guest::cpu()->r[0];
}

}  // namespace d_0056a94c
GUEST_EXPORT(0x0056a94c, d_0056a94c::f_0056a94c);

// f_0056a974: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0056a974 {

inline constexpr guest::Function<0x0056a780, u32(u32, u32, u32, u32)> call_0056a780;  // (from the original)

u32 f_0056a974() {
    u32 r4 = guest::cpu()->r[4];
    u32 r12 = 0;
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 0x10u;  // (from the original)
    r4 = 1u;
    r12 = *gptr<u32>(0x975c38u);  // (from the original)
    *gptr<u32>(r13) = u32(r4);
    *gptr<u32>(r13 + 4) = u32(r12);
    guest::cpu()->r[13] = r13;
    call_0056a780(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    r13 = r13 + 0x10u;  // (from the original)
    guest::cpu()->r[13] = r13;
    return guest::cpu()->r[0];
}

}  // namespace d_0056a974
GUEST_EXPORT(0x0056a974, d_0056a974::f_0056a974);

// f_0056a99c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0056a99c {

inline constexpr guest::Function<0x0056a780, u32(u32, u32, u32, u32)> call_0056a780;  // (from the original)

u32 f_0056a99c() {
    u32 r4 = guest::cpu()->r[4];
    u32 r12 = 0;
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 0x10u;  // (from the original)
    r4 = 1u;
    r12 = *gptr<u32>(r13 + 0x10u);  // (from the original)
    *gptr<u32>(r13) = u32(r4);
    *gptr<u32>(r13 + 4) = u32(r12);
    guest::cpu()->r[13] = r13;
    call_0056a780(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    r13 = r13 + 0x10u;  // (from the original)
    guest::cpu()->r[13] = r13;
    return guest::cpu()->r[0];
}

}  // namespace d_0056a99c
GUEST_EXPORT(0x0056a99c, d_0056a99c::f_0056a99c);

// f_0056a9bc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0056a9bc {

struct __attribute__((packed)) Object_0056a9bc_0 {
    u8 unknown_0[0xe8];  // (not used here)
    u8 byte_e8;
};
GUEST_OFFSET(Object_0056a9bc_0, byte_e8, 0xe8);  // (from the original)

inline constexpr guest::Function<0x00135740, u32(u32, u32, u32, u32)> call_00135740;  // (from the original)
inline constexpr guest::Function<0x00137e84, u32(u32, u32, u32, u32)> call_00137e84;  // (from the original)
inline constexpr guest::Function<0x00138920, u32(u32, u32, u32, u32)> call_00138920;  // (from the original)
inline constexpr guest::Function<0x0013f134, u32(u32, u32, u32, u32)> call_0013f134;  // (from the original)

u32 f_0056a9bc(gptr<Object_0056a9bc_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r1 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 zf = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r4 = r0;
    r0 = u32(arg0->byte_e8);
    r1 = u32(arg0->byte_e8);
    if (r1 == 0) {
        goto L_56aa78;
    }
    if (r0 == 6u) {
        goto L_56aa5c;
    }
    zf = u32(arg0->byte_e8) == 1u;
    if (!zf) {
        zf = u32(arg0->byte_e8) == 3u;
    }
    if (zf) {
        goto L_56aa14;
    }
    zf = u32(arg0->byte_e8) == 4u;
    if (!zf) {
        zf = u32(arg0->byte_e8) == 5u;
    }
    if (zf) {
        goto L_56aa14;
    }
    if (u32(arg0->byte_e8) == 2u) {
        goto L_56aa64;
    }
    goto L_56aa78;
L_56aa14:;
    *gptr<u8>(r4 + 0xe8u) = u8(6u);  // (from the original)
    r0 = 0xae55c8u;  // (from the original)
    r1 = r4;
    r0 = call_00138920(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 != 0) {
        goto L_56aa5c;
    }
    r0 = 0xae55d4u;  // (from the original)
    r5 = r4;
    r4 = r0;
    r0 = call_00135740(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r0 = 0xae55c8u;  // (from the original)
    r1 = r5;
    r0 = call_0013f134(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r0 = r4;
    r0 = call_00137e84(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
L_56aa5c:;
    r0 = 0u;
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
L_56aa64:;
    if (u32(*gptr<u8>(r4 + 0xe9u)) != 0) {  // (from the original)
        *gptr<u8>(r4 + 0xeau) = u8(1u);  // (from the original)
        guest::preempt();
        goto L_56aa5c;
    }
L_56aa78:;
    r0 = 1u;
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_0056a9bc
GUEST_EXPORT(0x0056a9bc, d_0056a9bc::f_0056a9bc);

// f_0056aa98: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0056aa98 {

inline constexpr guest::Function<0x0056a780, u32(u32, u32, u32, u32)> call_0056a780;  // (from the original)

u32 f_0056aa98() {
    u32 r4 = guest::cpu()->r[4];
    u32 r12 = 0;
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 0x10u;  // (from the original)
    r12 = 0u;
    r4 = r12;
    *gptr<u32>(r13) = u32(r4);
    *gptr<u32>(r13 + 4) = u32(r12);
    guest::cpu()->r[13] = r13;
    call_0056a780(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    r13 = r13 + 0x10u;  // (from the original)
    guest::cpu()->r[13] = r13;
    return guest::cpu()->r[0];
}

}  // namespace d_0056aa98
GUEST_EXPORT(0x0056aa98, d_0056aa98::f_0056aa98);

// f_0056aab8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0056aab8 {

struct __attribute__((packed)) Object_0056aab8_0 {
    u8 unknown_0[0xe8];  // (not used here)
    u8 byte_e8;
};
GUEST_OFFSET(Object_0056aab8_0, byte_e8, 0xe8);  // (from the original)


u32 f_0056aab8(gptr<Object_0056aab8_0> arg0) {
    u32 r0 = arg0.addr();
    u32 zf = 0;
    r0 = u32(arg0->byte_e8);
    zf = r0 == 3u;
    if (!zf) {
        zf = r0 == 4u;
    }
    if (zf) {
        r0 = 1u;
        return r0;
    }
    if (r0 != 5u) {
        r0 = 0u;
        return r0;
    }
    r0 = 1u;
    return r0;
}

}  // namespace d_0056aab8
GUEST_EXPORT(0x0056aab8, d_0056aab8::f_0056aab8);

// f_0056ae38: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0056ae38 {

struct __attribute__((packed)) Object_0056ae38_0 {
    u32 word_0;
};
GUEST_OFFSET(Object_0056ae38_0, word_0, 0x0);  // (from the original)

inline constexpr guest::Function<0x002f9e1c, u32(u32, u32, u32, u32)> call_002f9e1c;  // (from the original)

u32 f_0056ae38(gptr<Object_0056ae38_0> arg0, u32 r1, u32 r2, u32 r3) {
    u32 res = 0;
    u32 r0 = arg0.addr();
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
    r13 = r13 - 0x20;  // (from the original)
    r4 = r1;
    r5 = r0;
    r8 = r3;
    r7 = arg0->word_0;
    r6 = *gptr<u32>(r13 + 0x20u);  // (from the original)
    r9 = r1 - r7;
    if (r7 == r4) {
        goto L_56aed0;
    }
    r1 = r2;
    r0 = r9;
    guest::cpu()->r[13] = r13;
    r0 = call_002f9e1c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    res = r0 - r6;
    nf = res >> 0x1f;  // (from the original)
    zf = res == 0;
    vf = ((r0 ^ r6) & (r0 ^ res)) >> 0x1f;  // (from the original)
    if (zf || nf != vf) {
        r1 = 0u - r6;
        res = r1 - r0;
        nf = res >> 0x1f;  // (from the original)
        zf = res == 0;
        vf = ((r1 ^ r0) & (r1 ^ res)) >> 0x1f;  // (from the original)
    }
    if (zf || nf != vf) {
        goto L_56ae9c;
    }
    res = r0 - r8;
    if (!u32(res == 0) && res >> 0x1f == ((r0 ^ r8) & (r0 ^ res)) >> 0x1f) {  // (from the original)
        r0 = r8;
        goto L_56ae90;
    }
    r1 = 0u - r8;
    res = r1 - r0;
    if (!u32(res == 0) && res >> 0x1f == ((r1 ^ r0) & (r1 ^ res)) >> 0x1f) {  // (from the original)
        r0 = r1;
    }
L_56ae90:;
    *gptr<u32>(r5) = u32(r0 + r7);
    goto L_56aed0;
L_56ae9c:;
    res = r9;
    if (res >> 0x1f == (r9 & (r9 ^ res)) >> 0x1f) {  // (from the original)
        r0 = r7 + r6;
        r1 = r4 - r0;
        res = r1;
        *gptr<u32>(r5) = u32(r0);
        if (!u32(res == 0) && res >> 0x1f == (r1 & (r1 ^ res)) >> 0x1f) {  // (from the original)
            goto L_56aed0;
        }
    } else {
        r0 = r7 - r6;
        res = r4 - r0;
        r1 = res;
        *gptr<u32>(r5) = u32(r0);
        if (res >> 0x1f) {  // (from the original)
            goto L_56aed0;
        }
    }
    *gptr<u32>(r5) = u32(r4);
L_56aed0:;
    r0 = r4 - *gptr<u32>(r5);
    r13 = r13 + 0x20;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_0056ae38
GUEST_EXPORT(0x0056ae38, d_0056ae38::f_0056ae38);

// f_0056aedc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0056aedc {

struct __attribute__((packed)) Object_0056aedc_0 {
    u16 half_0;
};
GUEST_OFFSET(Object_0056aedc_0, half_0, 0x0);  // (from the original)

inline constexpr guest::Function<0x002f9e1c, u32(u32, u32, u32, u32)> call_002f9e1c;  // (from the original)

u32 f_0056aedc(gptr<Object_0056aedc_0> arg0, u32 r1, u32 r2, u32 r3) {
    u32 res = 0;
    u32 r0 = arg0.addr();
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 nf = 0;
    u32 vf = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r4 = r0;
    r6 = u32(s32(s16(arg0->half_0)));
    r5 = r3;
    r0 = r1 - r6;
    r1 = r2;
    r0 = sxth(r0);
    r0 = call_002f9e1c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r0 = sxth(r0);
    res = r0 - r5;
    if (!u32(res == 0) && res >> 0x1f == ((r0 ^ r5) & (r0 ^ res)) >> 0x1f) {  // (from the original)
        r0 = r6 + r5;
        goto L_56af24;
    }
    r1 = 0u - r5;
    res = r0 - r1;
    nf = res >> 0x1f;  // (from the original)
    vf = ((r0 ^ r1) & (r0 ^ res)) >> 0x1f;  // (from the original)
    if (nf == vf) {
        r0 = r0 + r6;
    }
    if (nf != vf) {
        r0 = r6 - r5;
    }
    if (nf == vf) {
        *gptr<u16>(r4) = u16(r0);
        goto L_56af28;
    }
L_56af24:;
    *gptr<u16>(r4) = u16(r0);
L_56af28:;
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_0056aedc
GUEST_EXPORT(0x0056aedc, d_0056aedc::f_0056aedc);

// f_0056af2c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0056af2c {

struct __attribute__((packed)) Object_0056af2c_0 {
    u16 half_0;
};
GUEST_OFFSET(Object_0056af2c_0, half_0, 0x0);  // (from the original)

inline constexpr guest::Function<0x002f9e1c, u32(u32, u32, u32, u32)> call_002f9e1c;  // (from the original)

u32 f_0056af2c(gptr<Object_0056af2c_0> arg0, u32 r1, u32 r2, u32 r3) {
    u32 res = 0;
    u32 r0 = arg0.addr();
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
    r13 = r13 - 0x20;  // (from the original)
    r4 = r0;
    r5 = r1;
    r8 = r3;
    r7 = u32(s32(s16(arg0->half_0)));
    r6 = *gptr<u32>(r13 + 0x20u);  // (from the original)
    r9 = sxth(r1 - r7);
    if (r7 == r5) {
        goto L_56afd8;
    }
    r1 = r2;
    r0 = r9;
    guest::cpu()->r[13] = r13;
    r0 = call_002f9e1c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r0 = sxth(r0);
    res = r0 - r6;
    nf = res >> 0x1f;  // (from the original)
    zf = res == 0;
    vf = ((r0 ^ r6) & (r0 ^ res)) >> 0x1f;  // (from the original)
    if (zf || nf != vf) {
        r1 = 0u - r6;
        res = r1 - r0;
        nf = res >> 0x1f;  // (from the original)
        zf = res == 0;
        vf = ((r1 ^ r0) & (r1 ^ res)) >> 0x1f;  // (from the original)
    }
    if (zf || nf != vf) {
        goto L_56af98;
    }
    res = r0 - r8;
    if (!u32(res == 0) && res >> 0x1f == ((r0 ^ r8) & (r0 ^ res)) >> 0x1f) {  // (from the original)
        r0 = r8;
        goto L_56af8c;
    }
    r1 = 0u - r8;
    res = r1 - r0;
    if (!u32(res == 0) && res >> 0x1f == ((r1 ^ r0) & (r1 ^ res)) >> 0x1f) {  // (from the original)
        r0 = sxth(r1);
    }
L_56af8c:;
    *gptr<u16>(r4) = u16(r0 + r7);
    goto L_56afd8;
L_56af98:;
    res = r9;
    if (res >> 0x1f == (r9 & (r9 ^ res)) >> 0x1f) {  // (from the original)
        r0 = r7 + r6;
        r1 = r5 - r0;
        *gptr<u16>(r4) = u16(r0);
        r0 = sxth(r1);
        res = r0;
        if (!u32(res == 0) && res >> 0x1f == (r0 & (r0 ^ res)) >> 0x1f) {  // (from the original)
            goto L_56afd8;
        }
    } else {
        r0 = r7 - r6;
        r1 = r5 - r0;
        *gptr<u16>(r4) = u16(r0);
        r0 = sxth(r1);
        res = r0;
        if (res >> 0x1f != (r0 & (r0 ^ res)) >> 0x1f) {  // (from the original)
            goto L_56afd8;
        }
    }
    *gptr<u16>(r4) = u16(r5);
L_56afd8:;
    r0 = sxth(r5 - u32(*gptr<u16>(r4)));
    r13 = r13 + 0x20;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_0056af2c
GUEST_EXPORT(0x0056af2c, d_0056af2c::f_0056af2c);

// f_0056b288: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0056b288 {

struct __attribute__((packed)) Object_0056b288_0 {
    u32 word_0;
};
GUEST_OFFSET(Object_0056b288_0, word_0, 0x0);  // (from the original)


void f_0056b288(gptr<Object_0056b288_0> arg0, float S0, float S1, float S2, float S3) {
    u32 fpsr = guest::cpu()->fpscr;
    float S4 = 0;
    float S5 = 0;
    float S6 = 0;
    S5 = std::bit_cast<float>(arg0->word_0);
    S6 = std::bit_cast<float>(*gptr<u32>(0x56b35cu));  // (from the original)
    fpsr = fpsr & 0xfffffffu | vfp_cmpf(S5, S0);  // (from the original)
    if (fpsr >> 0x1e & 1) {  // (from the original)
        goto L_56b344;
    }
    S4 = (S0 - S5) * S1;
    fpsr = fpsr & 0xfffffffu | vfp_cmpf(S4, S3);  // (from the original)
    if (fpsr >> 0x1f != (fpsr >> 0x1c & 1)) {  // (from the original)
        S1 = -S3;
        fpsr = fpsr & 0xfffffffu | vfp_cmpf(S4, S1);  // (from the original)
        if (fpsr >> 0x1d & 1 && !(fpsr >> 0x1e & 1)) {  // (from the original)
            goto L_56b2e8;
        }
    }
    fpsr = fpsr & 0xfffffffu | vfp_cmpf(S4, S2);  // (from the original)
    S1 = -S2;
    if (!(fpsr >> 0x1e & 1) && fpsr >> 0x1f == (fpsr >> 0x1c & 1)) {  // (from the original)
        S4 = S2;
    }
    fpsr = fpsr & 0xfffffffu | vfp_cmpf(S4, S1);  // (from the original)
    if (!(fpsr >> 0x1d & 1)) {  // (from the original)
        S4 = S1;
    }
    arg0->word_0 = u32(std::bit_cast<u32>(S5 + S4));
    goto L_56b344;
L_56b2e8:;
    fpsr = fpsr & 0xfffffffu | vfp_cmpf(S4, S6);  // (from the original)
    if (fpsr >> 0x1e & 1 || fpsr >> 0x1f != (fpsr >> 0x1c & 1)) {  // (from the original)
        goto L_56b31c;
    }
    fpsr = fpsr & 0xfffffffu | vfp_cmpf(S4, S3);  // (from the original)
    if (fpsr >> 0x1d & 1) {  // (from the original)
        goto L_56b344;
    }
    S1 = S5 + S3;
    arg0->word_0 = u32(std::bit_cast<u32>(S1));
    fpsr = fpsr & 0xfffffffu | vfp_cmpf(S1, S0);  // (from the original)
    if (!(fpsr >> 0x1e & 1) && fpsr >> 0x1f == (fpsr >> 0x1c & 1)) {  // (from the original)
        goto L_56b33c;
    }
L_56b314:;
    arg0->word_0 = u32(std::bit_cast<u32>(S1));
    goto L_56b344;
L_56b31c:;
    fpsr = fpsr & 0xfffffffu | vfp_cmpf(S4, S1);  // (from the original)
    if (fpsr >> 0x1e & 1 || fpsr >> 0x1f != (fpsr >> 0x1c & 1)) {  // (from the original)
        goto L_56b344;
    }
    S1 = S5 - S3;
    arg0->word_0 = u32(std::bit_cast<u32>(S1));
    fpsr = fpsr & 0xfffffffu | vfp_cmpf(S1, S0);  // (from the original)
    if (!(fpsr >> 0x1e & 1) && fpsr >> 0x1f == (fpsr >> 0x1c & 1)) {  // (from the original)
        guest::preempt();
        goto L_56b314;
    }
L_56b33c:;
    S1 = S0;
    guest::preempt();
    goto L_56b314;
L_56b344:;
    S1 = std::bit_cast<float>(arg0->word_0);
    S0 = S0 - S1;
    fpsr = fpsr & 0xfffffffu | vfp_cmpf(S0, S6);  // (from the original)
    if (fpsr >> 0x1e & 1 || fpsr >> 0x1f != (fpsr >> 0x1c & 1)) {  // (from the original)
        S0 = -S0;
    }
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    return;
}

}  // namespace d_0056b288
GUEST_EXPORT(0x0056b288, d_0056b288::f_0056b288);

// f_0056b5a4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0056b5a4 {

inline constexpr guest::Function<0x0020d914, u32(u32, u32, u32, u32)> call_0020d914;  // (from the original)
inline constexpr guest::Function<0x002fae84, u32(u32, u32, u32, u32)> call_002fae84;  // (from the original)

u32 f_0056b5a4(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 ea = 0;
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 8;
    guest::cpu()->r[13] = r13;
    r0 = call_002fae84(r0, r1, r2, r3);
    r3 = 0x95c4d0u;  // (from the original)
    ea = r3 + 0x18u;  // (from the original)
    r1 = *gptr<u32>(ea);
    r2 = *gptr<u32>(ea + 4);
    ea = r0 + 0x62120u;  // (from the original)
    *gptr<u32>(ea) = u32(r1);
    *gptr<u32>(ea + 4) = u32(r2);
    r0 = u32(*gptr<u8>(r3 + 2u));
    if ((r0 & 1u) != 0) {
        guest::cpu()->r[13] = r13;
        r0 = call_002fae84(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r0 = r0 + 0x62120u;  // (from the original)
        guest::cpu()->r[13] = r13;
        r0 = call_0020d914(r0, r1, r2, r3);
    }
    r0 = 0x95c4d2u;  // (from the original)
    r1 = u32(*gptr<u8>(r0)) & ~0x10u;  // (from the original)
    *gptr<u8>(r0) = u8(r1);
    r13 = r13 + 8;
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_0056b5a4
GUEST_EXPORT(0x0056b5a4, d_0056b5a4::f_0056b5a4);

// f_0056bd04: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0056bd04 {

inline constexpr guest::Function<0x0056c7c8, u32(u32, u32, u32, u32)> call_0056c7c8;  // (from the original)

u32 f_0056bd04() {
    u32 ea = 0;
    u32 r0 = 0;
    u32 r1 = 0;
    u32 r2 = 0;
    r0 = 0x95c4d0u;  // (from the original)
    r1 = r0 + 0x20u;  // (from the original)
    r0 = r0 + 0x18u;  // (from the original)
    ea = r1;
    r1 = *gptr<u32>(ea);
    r2 = *gptr<u32>(ea + 4);
    *gptr<u32>(r0) = u32(r1);
    *gptr<u32>(r0 + 4) = u32(r2);
    return call_0056c7c8(r0, r1, r2, guest::cpu()->r[3]);
}

}  // namespace d_0056bd04
GUEST_EXPORT(0x0056bd04, d_0056bd04::f_0056bd04);

// f_0056bdec: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0056bdec {

inline constexpr guest::Function<0x00124130, u32(u32, u32, u32, u32)> call_00124130;  // (from the original)

u32 f_0056bdec(u32 r0_unused, u32 r1, u32 r2) {
    u32 r0 = 0;
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 0x10u;  // (from the original)
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_00124130(r0, r1, r2, guest::cpu()->r[3]);
    r0 = 0x95c518u;  // (from the original)
    r1 = *gptr<u32>(r13);
    r2 = *gptr<u32>(r13 + 4);
    *gptr<u32>(r0) = u32(r1);
    *gptr<u32>(r0 + 4) = u32(r2);
    r13 = r13 + 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_0056bdec
GUEST_EXPORT(0x0056bdec, d_0056bdec::f_0056bdec);

// f_0056c3d4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0056c3d4 {


u32 f_0056c3d4() {
    u32 r0 = 0;
    r0 = (u32(*gptr<u8>(0x95c4d2u)) & 0x10u) >> 4;  // (from the original)
    return r0;
}

}  // namespace d_0056c3d4
GUEST_EXPORT(0x0056c3d4, d_0056c3d4::f_0056c3d4);

// f_0056c6d8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0056c6d8 {


u32 f_0056c6d8() {
    u32 r0 = 0;
    u32 r1 = 0;
    r0 = 0x95c4d2u;  // (from the original)
    r1 = u32(*gptr<u8>(r0)) | 2u;
    *gptr<u8>(r0) = u8(r1);
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_0056c6d8
GUEST_EXPORT(0x0056c6d8, d_0056c6d8::f_0056c6d8);

// f_0056c6f0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0056c6f0 {


u32 f_0056c6f0() {
    u32 r0 = 0;
    r0 = (u32(*gptr<u8>(0x95c4d2u)) & 4u) >> 2;  // (from the original)
    return r0;
}

}  // namespace d_0056c6f0
GUEST_EXPORT(0x0056c6f0, d_0056c6f0::f_0056c6f0);

// f_0056c76c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0056c76c {


u32 f_0056c76c(u32 r0) {
    u32 r1 = 0;
    r0 = r0 - 0x7d8u;  // (from the original)
    r1 = u32(u64(s64(s32(0x2aaaaaabu)) * s32(r0)) >> 0x20);  // (from the original)
    r1 = u32(s32(r1) >> 1) - u32(s32(r1) >> 0x1f);  // (from the original)
    r1 = r1 - (r1 << 2);
    r0 = r0 + (r1 << 2) & 0xffu;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_0056c76c
GUEST_EXPORT(0x0056c76c, d_0056c76c::f_0056c76c);

// f_0056c7b0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0056c7b0 {


u32 f_0056c7b0() {
    u32 r0 = 0;
    u32 r1 = 0;
    r0 = 0x95c4d2u;  // (from the original)
    r1 = u32(*gptr<u8>(r0)) | 4u;
    *gptr<u8>(r0) = u8(r1);
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_0056c7b0
GUEST_EXPORT(0x0056c7b0, d_0056c7b0::f_0056c7b0);

// f_0056cf34: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0056cf34 {


u32 f_0056cf34() {
    u32 r0 = 0;
    r0 = (u32(*gptr<u8>(0x95c4d2u)) & 8u) >> 3;  // (from the original)
    return r0;
}

}  // namespace d_0056cf34
GUEST_EXPORT(0x0056cf34, d_0056cf34::f_0056cf34);

// f_0056cf7c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0056cf7c {

inline constexpr guest::Function<0x0020d914, u32(u32, u32, u32, u32)> call_0020d914;  // (from the original)
inline constexpr guest::Function<0x002fae84, u32(u32, u32, u32, u32)> call_002fae84;  // (from the original)

u32 f_0056cf7c() {
    u32 res = 0;
    u32 r0 = 0;
    u32 r1 = 0;
    u32 r2 = 0;
    u32 r3 = 0;
    u32 nf = 0;
    u32 zf = 0;
    u32 vf = 0;
    goto L_56cf7c;
L_56cf7c:;
    r0 = 0xad56b0u;  // (from the original)
    guest::cpu()->r[13] -= 8u;
    r3 = 0x7dcu;  // (from the original)
    r2 = *gptr<u32>(r0);
    r0 = *gptr<u32>(r0 + 4u);
    r1 = u32(*gptr<u8>(0x95c4d2u));  // (from the original)
    res = r2 - r3;
    nf = res >> 0x1f;  // (from the original)
    zf = res == 0;
    vf = ((r2 ^ r3) & (r2 ^ res)) >> 0x1f;  // (from the original)
    if (zf || nf != vf) {
        r2 = sxtb(r0);
        res = r2 - 1u;
        nf = res >> 0x1f;  // (from the original)
        zf = res == 0;
        vf = ((r2 ^ 1u) & (r2 ^ res)) >> 0x1f;  // (from the original)
    }
    if (!zf && nf == vf) {
        goto L_56cfe0;
    }
    r2 = u32(s32(r0 << 0x10) >> 0x18);  // (from the original)
    res = r2 - 1u;
    nf = res >> 0x1f;  // (from the original)
    vf = ((r2 ^ 1u) & (r2 ^ res)) >> 0x1f;  // (from the original)
    if (u32(res == 0) || nf != vf) {
        r0 = u32(s32(r0) >> 0x18);  // (from the original)
        res = r0 - 6u;
        nf = res >> 0x1f;  // (from the original)
        vf = ((r0 ^ 6u) & (r0 ^ res)) >> 0x1f;  // (from the original)
    }
    if (nf == vf) {
        goto L_56cfe0;
    }
    r0 = 0x95c4d2u;  // (from the original)
    r1 = r1 | 1u;
    *gptr<u8>(r0) = u8(r1);
    r0 = call_002fae84(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    guest::cpu()->r[13] += 8u;
    r0 = r0 + 0x62120u;  // (from the original)
    return call_0020d914(r0, r1, r2, r3);
L_56cfe0:;
    r0 = 0x95c4d2u;  // (from the original)
    r1 = r1 & ~1u;
    *gptr<u8>(r0) = u8(r1);
    r0 = call_002fae84(r0, r1, r2, r3);
    guest::cpu()->r[13] += 8u;
    r0 = r0 + 0x62120u;  // (from the original)
    r1 = u32(*gptr<u8>(r0 + 8u)) & ~1u;
    *gptr<u8>(r0 + 8u) = u8(r1);
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_0056cf7c
GUEST_EXPORT(0x0056cf7c, d_0056cf7c::f_0056cf7c);

// f_0056d828: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0056d828 {

inline constexpr guest::Function<0x00301e20, u32(u32, u32, u32, u32)> call_00301e20;  // (from the original)
inline constexpr guest::Function<0x0056d874, u32(u32, u32, u32, u32)> call_0056d874;  // (from the original)

u32 f_0056d828(u32 r0, u32 r1, u32 r2_unused, u32 r3) {
    u32 ea = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r13 = guest::cpu()->r[13];
    u32 r14 = guest::cpu()->r[14];
    ea = r13 - 0x10;  // (from the original)
    *gptr<u32>(ea) = u32(r3);
    *gptr<u32>(ea + 4) = u32(r4);
    *gptr<u32>(ea + 8) = u32(r5);
    *gptr<u32>(ea + 0xc) = u32(r14);  // (from the original)
    r13 = r13 - 0x10;  // (from the original)
    r5 = r0;
    r4 = r1;
    r0 = r1;
    guest::cpu()->r[13] = r13;
    r0 = call_00301e20(r0, r1, guest::cpu()->r[2], r3);
    r3 = guest::cpu()->r[3];
    if (r0 != 0) {
        r1 = r13;
        *gptr<u16>(r13) = u16(u32(*gptr<u16>(r4 + 0x2cu)));  // (from the original)
        r0 = r5;
        guest::cpu()->r[13] = r13;
        r0 = call_0056d874(r0, r1, guest::cpu()->r[2], r3);
        r1 = guest::cpu()->r[1];
        ea = r13;
        r13 = r13 + 0x10;  // (from the original)
        r4 = *gptr<u32>(ea + 4);
        r5 = *gptr<u32>(ea + 8);
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[4] = r4;
        guest::cpu()->r[5] = r5;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    ea = r5;
    r1 = *gptr<u32>(*gptr<u32>(ea) + 0x1cu);  // (from the original)
    r13 = r13 + 4u;
    r0 = r5;
    ea = r13;
    r13 = r13 + 0xc;  // (from the original)
    r4 = *gptr<u32>(ea);
    r5 = *gptr<u32>(ea + 4);
    r14 = *gptr<u32>(ea + 8);
    guest::cpu()->r[13] = r13;
    guest::cpu()->r[4] = r4;
    guest::cpu()->r[5] = r5;
    return guest::call_address<u32>(r1, r0, r1, guest::cpu()->r[2], r3);
}

}  // namespace d_0056d828
GUEST_EXPORT(0x0056d828, d_0056d828::f_0056d828);

// f_0056d9cc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0056d9cc {

inline constexpr guest::Function<0x005ca3b0, u32(u32, u32, u32, u32)> call_005ca3b0;  // (from the original)
inline constexpr guest::Function<0x0075c0ec, u32(u32, u32, u32, u32)> call_0075c0ec;  // (from the original)

u32 f_0056d9cc(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = guest::cpu()->r[4];
    guest::cpu()->r[13] -= 8u;
    r4 = r0;
    r0 = r1;
    r0 = call_005ca3b0(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = r0;
    if (r0 + 1u != 0) {
        r1 = r4;
        r2 = 0x56da14u;  // (from the original)
        r0 = *gptr<u32>(0x95debcu);  // (from the original)
        guest::cpu()->r[13] += 8u;
        return call_0075c0ec(r0, r1, r2, r3);
    }
    r1 = *gptr<u32>(*gptr<u32>(r4) + 0x1cu);  // (from the original)
    r0 = r4;
    guest::cpu()->r[13] += 8u;
    return guest::call_address<u32>(r1, r0, r1, r2, r3);
}

}  // namespace d_0056d9cc
GUEST_EXPORT(0x0056d9cc, d_0056d9cc::f_0056d9cc);

// f_0056daa8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0056daa8 {

inline constexpr guest::Function<0x0075c0ec, u32(u32, u32, u32, u32)> call_0075c0ec;  // (from the original)

u32 f_0056daa8(u32 r0, u32 r1) {
    u32 r2 = 0;
    u32 r3 = 0;
    r3 = r1;
    r1 = r0;
    r2 = 0x56dac0u;  // (from the original)
    r0 = *gptr<u32>(0x95debcu);  // (from the original)
    return call_0075c0ec(r0, r1, r2, r3);
}

}  // namespace d_0056daa8
GUEST_EXPORT(0x0056daa8, d_0056daa8::f_0056daa8);

// f_0056e5c4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0056e5c4 {

struct __attribute__((packed)) Object_0056e5c4_0 {
    u8 unknown_0[0x5ec];  // (not used here)
    u8 byte_5ec;
    u8 unknown_5ed[0x3];  // (not used here)
    u32 word_5f0;
};
GUEST_OFFSET(Object_0056e5c4_0, byte_5ec, 0x5ec);  // (from the original)
GUEST_OFFSET(Object_0056e5c4_0, word_5f0, 0x5f0);  // (from the original)

inline constexpr guest::Function<0x0068eaf0, u32(u32, u32, u32, u32)> call_0068eaf0;  // (from the original)
inline constexpr guest::Function<0x0068ec3c, u32(u32, u32, u32, u32)> call_0068ec3c;  // (from the original)
inline constexpr guest::Function<0x00748534, u32(u32, u32, u32, u32)> call_00748534;  // (from the original)

u32 f_0056e5c4(gptr<Object_0056e5c4_0> arg0, u32 r1, float S0) {
    u32 res = 0;
    u32 r0 = arg0.addr();
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r4 = r0;
    r5 = r1;
    if (u32(arg0->byte_5ec) == 2u) {
        goto L_56e664;
    }
    if (*gptr<u32>(0x94edd8u) == 0) {  // (from the original)
        goto L_56e664;
    }
    r0 = arg0->word_5f0;
    r6 = 0x952a18u;  // (from the original)
    if (r0 == 0) {
        goto L_56e638;
    }
    guest::cpu()->s[0] = S0;
    r0 = call_00748534(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    S0 = guest::cpu()->s[0];
    if (r0 == 0) {
        goto L_56e638;
    }
    if (u32(*gptr<u8>(r4 + 0x7fdu)) == 1u) {  // (from the original)
        goto L_56e664;
    }
    r1 = u32(s32(s16(*gptr<u16>(r4 + 0x2eu))));  // (from the original)
    r0 = r5;
    guest::cpu()->s[0] = S0;
    r0 = call_0068ec3c(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r4 = r0;
    S0 = std::bit_cast<float>(*gptr<u32>(r6));
    r0 = r5;
    guest::cpu()->s[0] = S0;
    r0 = call_0068eaf0(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    S0 = guest::cpu()->s[0];
    r0 = r0 | r4;
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->s[0] = S0;
    return r0;
L_56e638:;
    r0 = *gptr<u32>(r4 + 0x5f0u);  // (from the original)
    if (r0 != 0) {
        res = u32(*gptr<u8>(r0 + 0x1cu)) << 0x1d >> 0x1f;  // (from the original)
        if (res == 0) {
            goto L_56e664;
        }
    }
    S0 = std::bit_cast<float>(*gptr<u32>(r6));
    r0 = r5;
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->s[0] = S0;
    return call_0068eaf0(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
L_56e664:;
    r0 = 0u;
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->s[0] = S0;
    return r0;
}

}  // namespace d_0056e5c4
GUEST_EXPORT(0x0056e5c4, d_0056e5c4::f_0056e5c4);

// f_0056e6a8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0056e6a8 {

struct __attribute__((packed)) Object_0056e6a8_0 {
    u8 unknown_0[0x300];  // (not used here)
    u32 word_300;
};
GUEST_OFFSET(Object_0056e6a8_0, word_300, 0x300);  // (from the original)


u32 f_0056e6a8(gptr<Object_0056e6a8_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r2 = 0;
    r0 = arg0->word_300;
    if (r0 == 0) {
        return r0;
    }
    r2 = *gptr<u32>(*gptr<u32>(r0) + 0x3cu);  // (from the original)
    return guest::call_address<u32>(r2, r0, guest::cpu()->r[1], r2, guest::cpu()->r[3]);
}

}  // namespace d_0056e6a8
GUEST_EXPORT(0x0056e6a8, d_0056e6a8::f_0056e6a8);

// f_0056f1b8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0056f1b8 {

struct __attribute__((packed)) Object_0056f1b8_0 {
    u8 unknown_0[0x5f8];  // (not used here)
    u8 byte_5f8;
    u8 unknown_5f9[0x16b];  // (not used here)
    u16 half_764;
    u8 unknown_766[0x97];  // (not used here)
    u8 byte_7fd;
};
GUEST_OFFSET(Object_0056f1b8_0, byte_5f8, 0x5f8);  // (from the original)
GUEST_OFFSET(Object_0056f1b8_0, half_764, 0x764);  // (from the original)
GUEST_OFFSET(Object_0056f1b8_0, byte_7fd, 0x7fd);  // (from the original)

inline constexpr guest::Function<0x006ef0a0, u32(u32, u32, u32, u32)> call_006ef0a0;  // (from the original)
inline constexpr guest::Function<0x006ef108, u32(u32, u32, u32, u32)> call_006ef108;  // (from the original)

u32 f_0056f1b8(gptr<Object_0056f1b8_0> arg0, u32 r1, u32 r2_unused, u32 r3, float S0, float S1, float S2) {
    u32 ea = 0;
    u32 res = 0;
    u32 r0 = arg0.addr();
    u32 r2 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r12 = 0;
    u32 r13 = guest::cpu()->r[13];
    u32 zf = 0;
    r2 = r0 + 0x700u;  // (from the original)
    *gptr<u32>(r13 + 0xfffffff0u) = u32(r3);  // (from the original)
    r13 = r13 - 0x10;  // (from the original)
    r4 = r0;
    r0 = u32(arg0->half_764);
    res = r0 << 0x1b >> 0x1f;  // (from the original)
    if (res == 0) {
        r13 = r13 + 0x10;  // (from the original)
        guest::cpu()->r[13] = r13;
        guest::cpu()->s[0] = S0;
        guest::cpu()->s[1] = S1;
        return r0;
    }
    zf = r0 << 0x1c >> 0x1f == 0;  // (from the original)
    if (!zf) {
        zf = u32(arg0->byte_7fd) == 1u;
    }
    if (zf) {
        r13 = r13 + 0x10;  // (from the original)
        guest::cpu()->r[13] = r13;
        guest::cpu()->s[0] = S0;
        guest::cpu()->s[1] = S1;
        return r0;
    }
    r3 = u32(arg0->byte_5f8);
    zf = r3 == 3u;
    if (!zf) {
        zf = r3 == 4u;
    }
    if (!zf) {
        zf = r3 == 5u;
    }
    if (zf) {
        goto L_56f214;
    }
    res = r0 << 0x12 >> 0x1f;  // (from the original)
    if (res != 0) {
        goto L_56f214;
    }
    res = r0 << 0x11 >> 0x1f;  // (from the original)
    if (res == 0) {
        goto L_56f28c;
    }
L_56f214:;
    r0 = r0 & ~0x4000u;  // (from the original)
    *gptr<u16>(r2 + 0x64u) = u16(r0);  // (from the original)
    r12 = *gptr<u32>(r4 + 0x5c4u);  // (from the original)
    r3 = 1u;
    if (r12 == 0) {
        r13 = r13 + 0x10;  // (from the original)
        guest::cpu()->r[13] = r13;
        guest::cpu()->s[0] = S0;
        guest::cpu()->s[1] = S1;
        return r0;
    }
    r0 = *gptr<u32>(r4 + 0x5f0u);  // (from the original)
    if (r0 == 0) {
        goto L_56f264;
    }
    r0 = u32(*gptr<u8>(r0 + 0x1bu)) << 0x1c >> 0x1e;  // (from the original)
    if (r0 >= 4u) {
        goto L_56f2a0;
    }
    if (r0 == 0) {
        goto L_56f2a0;
    }
    if (r0 == 1u) {
        goto L_56f264;
    }
    if (r0 == 2u) {
        goto L_56f268;
    }
L_56f264:;
    r3 = 0u;
L_56f268:;
    *gptr<u32>(r13) = u32(r3);
    r0 = r4 + 0x400u;  // (from the original)
    r2 = u32(s32(s16(*gptr<u16>(r4 + 0x2eu))));  // (from the original)
    S1 = std::bit_cast<float>(*gptr<u32>(r0 + 0x1c0u));  // (from the original)
    S0 = std::bit_cast<float>(*gptr<u32>(r0 + 0x1b8u));  // (from the original)
    S2 = std::bit_cast<float>(*gptr<u32>(r1 + 4u));
    r3 = 0u;
    r0 = r12;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2;
    r0 = call_006ef108(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    S2 = guest::cpu()->s[2];
L_56f28c:;
    r0 = *gptr<u32>(r4 + 0x5c4u);  // (from the original)
    if (r0 == 0) {
        r13 = r13 + 0x10;  // (from the original)
        guest::cpu()->r[13] = r13;
        guest::cpu()->s[0] = S0;
        guest::cpu()->s[1] = S1;
        return r0;
    }
    ea = r13;
    r13 = r13 + 0x10;  // (from the original)
    r3 = *gptr<u32>(ea);
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2;
    return call_006ef0a0(r0, r1, r2, r3);
L_56f2a0:;
    r3 = 0x1bu;  // (from the original)
    guest::preempt();
    goto L_56f268;
}

}  // namespace d_0056f1b8
GUEST_EXPORT(0x0056f1b8, d_0056f1b8::f_0056f1b8);

// f_0056f34c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0056f34c {

inline constexpr guest::Function<0x002f74c8, u32(u32, u32, u32, u32)> call_002f74c8;  // (from the original)
inline constexpr guest::Function<0x002f74e0, u32(u32, u32, u32, u32)> call_002f74e0;  // (from the original)
inline constexpr guest::Function<0x004ea048, u32(u32, u32, u32, u32)> call_004ea048;  // (from the original)
inline constexpr guest::Function<0x007455cc, u32(u32, u32, u32, u32)> call_007455cc;  // (from the original)
inline constexpr guest::Function<0x0075127c, u32(u32, u32, u32, u32)> call_0075127c;  // (from the original)

u32 f_0056f34c(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 ea = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r9 = guest::cpu()->r[9];
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 0x28u;  // (from the original)
    r5 = r0;
    r7 = r1;
    r6 = r2;
    guest::cpu()->r[13] = r13;
    r0 = call_002f74c8(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r4 = r0;
    r1 = r0;
    r0 = 0x20u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002f74e0(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r9 = 0u;
    if (r0 != 0) {
        goto L_56f3d0;
    }
    r1 = r4;
    r0 = 0x200u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002f74e0(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 != 0) {
        goto L_56f3d0;
    }
    r1 = r4;
    r0 = 0x40000000u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002f74e0(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 != 0) {
        goto L_56f3d0;
    }
    r1 = r4;
    r0 = 0x800000u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002f74e0(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 != 0) {
        goto L_56f3d0;
    }
    r1 = r4;
    r0 = 0x10000000u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002f74e0(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        goto L_56f3f0;
    }
L_56f3d0:;
    guest::cpu()->r[13] = r13;
    r0 = call_004ea048(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = r5;
    guest::cpu()->r[13] = r13;
    r0 = call_007455cc(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r0 = r0 << 0x17 >> 0x17;  // (from the original)
    goto L_56f474;
L_56f3f0:;
    r0 = u32(*gptr<u8>(r5 + 0x5ecu));  // (from the original)
    if (r0 == 2u) {
        goto L_56f480;
    }
    guest::cpu()->r[13] = r13;
    r0 = call_002f74c8(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = r0;
    r0 = 8u;
    guest::cpu()->r[13] = r13;
    r0 = call_002f74e0(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    if (r0 == 0) {
        goto L_56f478;
    }
    r3 = r7;
    r2 = r13 + 8u;
    r1 = r13 + 4u;
    r0 = r5;
    *gptr<u32>(r13) = u32(r6);
    guest::cpu()->r[13] = r13;
    r0 = call_0075127c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    if (r0 == 0) {
        r0 = r4;
        goto L_56f478;
    }
    ea = r13 + 4u;
    r8 = u32(*gptr<u8>(r5 + 0x7b4u));  // (from the original)
    if (r8 >= 2u) {
        r8 = r9;
    }
    r1 = (*gptr<u32>(ea) & 0xfu | 0xf0u & *gptr<u32>(ea + 4) << 4) & ~0x100u;  // (from the original)
    r0 = (0x100u & r8 << 8 | r1) & ~0x10000u & ~0xfe00u;  // (from the original)
L_56f474:;
    r0 = r0 | r4 << 9;
L_56f478:;
    r13 = r13 + 0x28u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
L_56f480:;
    r0 = 0x31u | r4 << 9 | 0x20000u;  // (from the original)
    r13 = r13 + 0x28u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_0056f34c
GUEST_EXPORT(0x0056f34c, d_0056f34c::f_0056f34c);

// f_0056f8b4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0056f8b4 {

inline constexpr guest::Function<0x0023b900, u32(u32, u32, u32, u32)> call_0023b900;  // (from the original)
inline constexpr guest::Function<0x002fc8e8, u32(u32, u32, u32, u32)> call_002fc8e8;  // (from the original)
inline constexpr guest::Function<0x002fc934, u32(u32, u32, u32, u32)> call_002fc934;  // (from the original)
inline constexpr guest::Function<0x002fcaf4, u32(u32, u32, u32, u32)> call_002fcaf4;  // (from the original)
inline constexpr guest::Function<0x005d97a0, u32(u32, u32, u32, u32)> call_005d97a0;  // (from the original)
inline constexpr guest::Function<0x00692ad4, u32(u32, u32, u32, u32)> call_00692ad4;  // (from the original)
inline constexpr guest::Function<0x007559ac, u32(u32, u32, u32, u32)> call_007559ac;  // (from the original)
inline constexpr guest::Function<0x00755a98, u32(u32, u32, u32, u32)> call_00755a98;  // (from the original)

u32 f_0056f8b4(u32 r0, u32 r1, u32 r2) {
    u32 res = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r13 = guest::cpu()->r[13];
    r4 = r0;
    r13 = r13 - 0x20u;  // (from the original)
    r5 = r1;
    r7 = r2;
    r0 = r0 + 0xb0u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_005d97a0(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r6 = r0;
    if (r0 != 0) {
        goto L_56f910;
    }
    r0 = r7;
    guest::cpu()->r[13] = r13;
    r0 = call_007559ac(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    if (r0 != 0x60u) {  // (from the original)
        goto L_56f90c;
    }
    r0 = r7;
    guest::cpu()->r[13] = r13;
    r0 = call_00755a98(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    if (r0 == 0) {
        goto L_56f918;
    }
    if (r0 == 1u) {
        goto L_56f9d8;
    }
    r6 = 1u;
    *gptr<u32>(r5) = u32(0u);
L_56f90c:;
    r0 = r6;
L_56f910:;
    r13 = r13 + 0x20u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
L_56f918:;
    r1 = 0x95bfdcu;  // (from the original)
    r0 = r13 + 4u;
    guest::cpu()->r[13] = r13;
    r0 = call_002fc934(r0, r1, r2, guest::cpu()->r[3]);
    r2 = guest::cpu()->r[2];
    r1 = 0x95bfdcu;  // (from the original)
    r0 = r13 + 8u;
    guest::cpu()->r[13] = r13;
    r0 = call_002fc934(r0, r1, r2, guest::cpu()->r[3]);
    r2 = guest::cpu()->r[2];
    r1 = r13 + 8u;
    r0 = r13 + 4u;
    guest::cpu()->r[13] = r13;
    r0 = call_00692ad4(r0, r1, r2, guest::cpu()->r[3]);
    r2 = guest::cpu()->r[2];
    r1 = r13 + 8u;
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_002fc934(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_002fcaf4(r0, r1, r2, guest::cpu()->r[3]);
    r2 = guest::cpu()->r[2];
    if (r0 != 0) {
        r1 = r13 + 4u;
        r0 = r13;
        guest::cpu()->r[13] = r13;
        r0 = call_002fc8e8(r0, r1, r2, guest::cpu()->r[3]);
    }
    r1 = u32(*gptr<u16>(0x8870a0u));  // (from the original)
    if (u32(*gptr<u16>(r4 + 0xcu)) == r1) {  // (from the original)
        r0 = u32(s32(s8(*gptr<u8>(0x7a3u + r4))));  // (from the original)
    } else {
        r0 = 0u;
    }
    res = r0 ^ 1u;
    *gptr<u32>(r5) = u32(res);
    if (res == 0) {
        r2 = 0u;
        r1 = r13;
        r0 = r4 + 0xb0u;  // (from the original)
        guest::cpu()->r[13] = r13;
        r0 = call_0023b900(r0, r1, r2, guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
    }
    r6 = 1u;
    guest::preempt();
    goto L_56f90c;
L_56f9d8:;
    r1 = 0x95bfdcu;  // (from the original)
    r0 = r13 + 4u;
    guest::cpu()->r[13] = r13;
    r0 = call_002fc934(r0, r1, r2, guest::cpu()->r[3]);
    r2 = guest::cpu()->r[2];
    r1 = 0x95bfdcu;  // (from the original)
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_002fc934(r0, r1, r2, guest::cpu()->r[3]);
    r2 = guest::cpu()->r[2];
    r1 = r13;
    r0 = r13 + 4u;
    guest::cpu()->r[13] = r13;
    r0 = call_00692ad4(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_002fcaf4(r0, r1, r2, guest::cpu()->r[3]);
    *gptr<u32>(r5) = u32(r0);
    r2 = 0u;
    r1 = r13 + 4u;
    r0 = r4 + 0xb0u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0023b900(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (*gptr<u32>(r5) == 0) {
        r2 = 1u;
        r1 = r13;
        r0 = r4 + 0xb0u;  // (from the original)
        guest::cpu()->r[13] = r13;
        r0 = call_0023b900(r0, r1, r2, guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
    }
    r6 = 1u;
    guest::preempt();
    goto L_56f90c;
}

}  // namespace d_0056f8b4
GUEST_EXPORT(0x0056f8b4, d_0056f8b4::f_0056f8b4);

// f_0056fd94: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0056fd94 {

struct __attribute__((packed)) Object_0056fd94_0 {
    u8 unknown_0[0x7b4];  // (not used here)
    u8 byte_7b4;
};
GUEST_OFFSET(Object_0056fd94_0, byte_7b4, 0x7b4);  // (from the original)

inline constexpr guest::Function<0x002fc934, u32(u32, u32, u32, u32)> call_002fc934;  // (from the original)
inline constexpr guest::Function<0x004e0cb0, u32(u32, u32, u32, u32)> call_004e0cb0;  // (from the original)
inline constexpr guest::Function<0x004e9a28, u32(u32, u32, u32, u32)> call_004e9a28;  // (from the original)
inline constexpr guest::Function<0x004ea048, u32(u32, u32, u32, u32)> call_004ea048;  // (from the original)
inline constexpr guest::Function<0x007455cc, u32(u32, u32, u32, u32)> call_007455cc;  // (from the original)

u32 f_0056fd94(gptr<Object_0056fd94_0> arg0, u32 r1, u32 r2, u32 r3) {
    u32 res = 0;
    u32 r0 = arg0.addr();
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r13 = guest::cpu()->r[13];
    u32 cf = 0;
    r6 = r0;
    r0 = u32(arg0->byte_7b4);
    r13 = r13 - 0x20u;  // (from the original)
    if (r0 >= 2u) {
        goto L_56fedc;
    }
    if (r0 != 1u) {
        goto L_56fedc;
    }
    r4 = r6 + 0x5e4u;  // (from the original)
    r0 = r13;
    r1 = r4;
    guest::cpu()->r[13] = r13;
    r0 = call_002fc934(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    *gptr<u8>(r0 + 4u) = u8(u32(*gptr<u8>(r4 + 4u)));
    *gptr<u8>(r0 + 5u) = u8(u32(*gptr<u8>(r4 + 5u)));
    *gptr<u8>(r0 + 6u) = u8(u32(*gptr<u8>(r4 + 6u)));
    *gptr<u8>(r0 + 7u) = u8(u32(*gptr<u8>(r4 + 7u)));
    r1 = u32(*gptr<u8>(r4 + 8u));
    *gptr<u8>(r0 + 8u) = u8(r1);
    guest::cpu()->r[13] = r13;
    r0 = call_004e0cb0(r0, r1, r2, r3);
    r2 = u32(*gptr<u8>(r13 + 5u));
    r1 = u32(*gptr<u8>(r13 + 4u));
    r3 = 0u;
    guest::cpu()->r[13] = r13;
    r0 = call_004e9a28(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r4 = r0;
    if (r0 == 0) {
        goto L_56fed4;
    }
    r0 = u32(*gptr<u8>(r4 + 0x7b4u));  // (from the original)
    if (r0 < 2u) {
        if (r0 != 0) {
            goto L_56fed4;
        }
    }
    guest::cpu()->r[13] = r13;
    r0 = call_004ea048(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = r4;
    guest::cpu()->r[13] = r13;
    r0 = call_007455cc(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = u32(s32(s16(*gptr<u16>(0x60cu + r6))));  // (from the original)
    if (r0 == r1) {
        r5 = r4 + 0x61cu;  // (from the original)
    } else {
        goto L_56fed4;
    }
    guest::cpu()->r[13] = r13;
    r0 = call_004ea048(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = r6;
    guest::cpu()->r[13] = r13;
    r0 = call_007455cc(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    r2 = r5 + 0x10u;  // (from the original)
    r1 = r5;
    if (r5 >= r2) {
        goto L_56fe84;
    }
    do {
L_56fe6c:;
        r3 = *gptr<u32>(r1);
        if (r3 == r0) {
            goto L_56fed4;
        }
        r1 = r1 + 4u;
        guest::preempt();
    } while (u32(r2 >= r1) && !u32(r2 == r1));
L_56fe84:;
    cf = *gptr<u32>(r5 + 0x10u) >= 4u;  // (from the original)
    if (!cf) {
        r4 = r5;
        cf = r5 >= r2;
    }
    if (cf) {
        goto L_56fed4;
    }
    do {
L_56fe98:;
        r0 = *gptr<u32>(r4);
        res = r0;
        if (!(res >> 0x1f == (r0 & (r0 ^ res)) >> 0x1f)) {  // (from the original)
            guest::cpu()->r[13] = r13;
            r0 = call_004ea048(r0, r1, r2, r3);
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
            r1 = r6;
            guest::cpu()->r[13] = r13;
            r0 = call_007455cc(r0, r1, r2, r3);
            r1 = guest::cpu()->r[1];
            *gptr<u32>(r4) = u32(r0);
            *gptr<u32>(r5 + 0x10u) = u32(*gptr<u32>(r5 + 0x10u) + 1u);  // (from the original)
            goto L_56fed4;
        }
        r4 = r4 + 4u;
        guest::preempt();
    } while (r4 < r2);
L_56fed4:;
    r0 = r13;
L_56fedc:;
    r13 = r13 + 0x20u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_0056fd94
GUEST_EXPORT(0x0056fd94, d_0056fd94::f_0056fd94);
