// Functions decompiled by tools/decomp (docs/decomp.md), each proved equal to the recompiled original (prove-cpp). The
// names are generated (d_<address>::f_<address>, Object_<address>_<argument>, word_<offset>) and still to be chosen.
#include "guest/guest.hpp"

#include <bit>

using guest::gptr;

// f_00810ccc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00810ccc {

struct __attribute__((packed)) Object_00810ccc_0 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Object_00810ccc_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_00810ccc_0, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_00810ccc_0, word_8, 0x8);  // (from the original)


void f_00810ccc(gptr<Object_00810ccc_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r1 = 0;
    u32 r2 = 0;
    u32 r3 = 0;
    arg0->word_4 = u32(r0 + 0xcu);  // (from the original)
    r3 = 0x8c9f1cu;  // (from the original)
    r2 = 0x11u;  // (from the original)
    arg0->word_0 = u32(0x90558cu);  // (from the original)
    arg0->word_8 = u32(r2);
    *gptr<u8>(r2 + (arg0->word_4 - 1u)) = u8(u32(*gptr<u8>(r3)));
    arg0->word_0 = u32(0x9050d0u);  // (from the original)
    *gptr<u8>(arg0->word_4) = u8(u32(*gptr<u8>(r3)));
    r1 = 0x904888u;  // (from the original)
    arg0->word_0 = u32(r1);
    guest::cpu()->r[1] = r1;
    return;
}

}  // namespace d_00810ccc
GUEST_EXPORT(0x00810ccc, d_00810ccc::f_00810ccc);

// f_00811a38: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00811a38 {

struct __attribute__((packed)) Object_00811a38_0 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Object_00811a38_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_00811a38_0, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_00811a38_0, word_8, 0x8);  // (from the original)

inline constexpr guest::Function<0x0054af38, u32(u32, u32, u32, u32)> call_0054af38;  // (from the original)

u32 f_00811a38(gptr<Object_00811a38_0> arg0, u32 r1, u32 r2, u32 r3) {
    u32 ea = 0;
    u32 v = 0;
    u32 r0 = arg0.addr();
    u32 r4 = guest::cpu()->r[4];
    u32 r13 = guest::cpu()->r[13];
    u32 r14 = guest::cpu()->r[14];
    ea = r13 - 0x10;  // (from the original)
    *gptr<u32>(ea) = u32(r0);
    *gptr<u32>(ea + 4) = u32(r1);
    *gptr<u32>(ea + 8) = u32(r2);
    *gptr<u32>(ea + 0xc) = u32(r3);  // (from the original)
    r13 = r13 - 0x10;  // (from the original)
    r1 = 0x80u;  // (from the original)
    ea = r13 - 8;
    *gptr<u32>(ea) = u32(r4);
    *gptr<u32>(ea + 4) = u32(r14);
    r13 = r13 - 8;
    r4 = r0;
    arg0->word_4 = u32(r0 + 0xcu);  // (from the original)
    r2 = 0x8c9f1cu;  // (from the original)
    arg0->word_0 = u32(0x90558cu);  // (from the original)
    arg0->word_8 = u32(r1);
    r3 = u32(*gptr<u8>(r2));
    *gptr<u8>(r1 + (arg0->word_4 - 1u)) = u8(r3);
    arg0->word_0 = u32(0x9050bcu);  // (from the original)
    r1 = u32(*gptr<u8>(r2));
    r2 = r13 + 0x10u;  // (from the original)
    *gptr<u8>(arg0->word_4) = u8(r1);
    arg0->word_0 = u32(0x9054b0u);  // (from the original)
    r1 = *gptr<u32>(r13 + 0xcu);  // (from the original)
    r0 = r4;
    guest::cpu()->r[13] = r13;
    r0 = call_0054af38(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r0 = r4;
    v = *gptr<u32>(r13);
    r13 = r13 + 4u;
    r4 = v;
    v = *gptr<u32>(r13);
    r13 = r13 + 0x14u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[4] = r4;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_00811a38
GUEST_EXPORT(0x00811a38, d_00811a38::f_00811a38);

// f_00811ab8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00811ab8 {

struct __attribute__((packed)) Object_00811ab8_0 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Object_00811ab8_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_00811ab8_0, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_00811ab8_0, word_8, 0x8);  // (from the original)

inline constexpr guest::Function<0x0054af38, u32(u32, u32, u32, u32)> call_0054af38;  // (from the original)

u32 f_00811ab8(gptr<Object_00811ab8_0> arg0, u32 r1, u32 r2, u32 r3) {
    u32 ea = 0;
    u32 v = 0;
    u32 r0 = arg0.addr();
    u32 r4 = guest::cpu()->r[4];
    u32 r13 = guest::cpu()->r[13];
    u32 r14 = guest::cpu()->r[14];
    ea = r13 - 0x10;  // (from the original)
    *gptr<u32>(ea) = u32(r0);
    *gptr<u32>(ea + 4) = u32(r1);
    *gptr<u32>(ea + 8) = u32(r2);
    *gptr<u32>(ea + 0xc) = u32(r3);  // (from the original)
    r13 = r13 - 0x10;  // (from the original)
    r1 = 0x20u;  // (from the original)
    ea = r13 - 8;
    *gptr<u32>(ea) = u32(r4);
    *gptr<u32>(ea + 4) = u32(r14);
    r13 = r13 - 8;
    r4 = r0;
    arg0->word_4 = u32(r0 + 0xcu);  // (from the original)
    r2 = 0x8c9f1cu;  // (from the original)
    arg0->word_0 = u32(0x90558cu);  // (from the original)
    arg0->word_8 = u32(r1);
    r3 = u32(*gptr<u8>(r2));
    *gptr<u8>(r1 + (arg0->word_4 - 1u)) = u8(r3);
    arg0->word_0 = u32(0x905120u);  // (from the original)
    r1 = u32(*gptr<u8>(r2));
    r2 = r13 + 0x10u;  // (from the original)
    *gptr<u8>(arg0->word_4) = u8(r1);
    arg0->word_0 = u32(0x9054c4u);  // (from the original)
    r1 = *gptr<u32>(r13 + 0xcu);  // (from the original)
    r0 = r4;
    guest::cpu()->r[13] = r13;
    r0 = call_0054af38(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r0 = r4;
    v = *gptr<u32>(r13);
    r13 = r13 + 4u;
    r4 = v;
    v = *gptr<u32>(r13);
    r13 = r13 + 0x14u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[4] = r4;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_00811ab8
GUEST_EXPORT(0x00811ab8, d_00811ab8::f_00811ab8);

// f_00811b38: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00811b38 {

struct __attribute__((packed)) Object_00811b38_0 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Object_00811b38_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_00811b38_0, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_00811b38_0, word_8, 0x8);  // (from the original)

inline constexpr guest::Function<0x0054af38, u32(u32, u32, u32, u32)> call_0054af38;  // (from the original)

u32 f_00811b38(gptr<Object_00811b38_0> arg0, u32 r1, u32 r2, u32 r3) {
    u32 ea = 0;
    u32 v = 0;
    u32 r0 = arg0.addr();
    u32 r4 = guest::cpu()->r[4];
    u32 r13 = guest::cpu()->r[13];
    u32 r14 = guest::cpu()->r[14];
    ea = r13 - 0x10;  // (from the original)
    *gptr<u32>(ea) = u32(r0);
    *gptr<u32>(ea + 4) = u32(r1);
    *gptr<u32>(ea + 8) = u32(r2);
    *gptr<u32>(ea + 0xc) = u32(r3);  // (from the original)
    r13 = r13 - 0x10;  // (from the original)
    r1 = 0x40u;  // (from the original)
    ea = r13 - 8;
    *gptr<u32>(ea) = u32(r4);
    *gptr<u32>(ea + 4) = u32(r14);
    r13 = r13 - 8;
    r4 = r0;
    arg0->word_4 = u32(r0 + 0xcu);  // (from the original)
    r2 = 0x8c9f1cu;  // (from the original)
    arg0->word_0 = u32(0x90558cu);  // (from the original)
    arg0->word_8 = u32(r1);
    r3 = u32(*gptr<u8>(r2));
    *gptr<u8>(r1 + (arg0->word_4 - 1u)) = u8(r3);
    arg0->word_0 = u32(0x905170u);  // (from the original)
    r1 = u32(*gptr<u8>(r2));
    r2 = r13 + 0x10u;  // (from the original)
    *gptr<u8>(arg0->word_4) = u8(r1);
    arg0->word_0 = u32(0x9054d8u);  // (from the original)
    r1 = *gptr<u32>(r13 + 0xcu);  // (from the original)
    r0 = r4;
    guest::cpu()->r[13] = r13;
    r0 = call_0054af38(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r0 = r4;
    v = *gptr<u32>(r13);
    r13 = r13 + 4u;
    r4 = v;
    v = *gptr<u32>(r13);
    r13 = r13 + 0x14u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[4] = r4;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_00811b38
GUEST_EXPORT(0x00811b38, d_00811b38::f_00811b38);

// f_00811bb8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00811bb8 {

struct __attribute__((packed)) Object_00811bb8_0 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Object_00811bb8_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_00811bb8_0, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_00811bb8_0, word_8, 0x8);  // (from the original)

inline constexpr guest::Function<0x0054af38, u32(u32, u32, u32, u32)> call_0054af38;  // (from the original)

u32 f_00811bb8(gptr<Object_00811bb8_0> arg0, u32 r1, u32 r2, u32 r3) {
    u32 ea = 0;
    u32 v = 0;
    u32 r0 = arg0.addr();
    u32 r4 = guest::cpu()->r[4];
    u32 r13 = guest::cpu()->r[13];
    u32 r14 = guest::cpu()->r[14];
    ea = r13 - 0x10;  // (from the original)
    *gptr<u32>(ea) = u32(r0);
    *gptr<u32>(ea + 4) = u32(r1);
    *gptr<u32>(ea + 8) = u32(r2);
    *gptr<u32>(ea + 0xc) = u32(r3);  // (from the original)
    r13 = r13 - 0x10;  // (from the original)
    r1 = 6u;
    ea = r13 - 8;
    *gptr<u32>(ea) = u32(r4);
    *gptr<u32>(ea + 4) = u32(r14);
    r13 = r13 - 8;
    r4 = r0;
    arg0->word_4 = u32(r0 + 0xcu);  // (from the original)
    r2 = 0x8c9f1cu;  // (from the original)
    arg0->word_0 = u32(0x90558cu);  // (from the original)
    arg0->word_8 = u32(r1);
    r3 = u32(*gptr<u8>(r2));
    *gptr<u8>(r1 + (arg0->word_4 - 1u)) = u8(r3);
    arg0->word_0 = u32(0x905184u);  // (from the original)
    r1 = u32(*gptr<u8>(r2));
    r2 = r13 + 0x10u;  // (from the original)
    *gptr<u8>(arg0->word_4) = u8(r1);
    arg0->word_0 = u32(0x9054ecu);  // (from the original)
    r1 = *gptr<u32>(r13 + 0xcu);  // (from the original)
    r0 = r4;
    guest::cpu()->r[13] = r13;
    r0 = call_0054af38(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r0 = r4;
    v = *gptr<u32>(r13);
    r13 = r13 + 4u;
    r4 = v;
    v = *gptr<u32>(r13);
    r13 = r13 + 0x14u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[4] = r4;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_00811bb8
GUEST_EXPORT(0x00811bb8, d_00811bb8::f_00811bb8);

// f_00813340: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00813340 {

struct __attribute__((packed)) Object_00813340_0 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
    u32 word_18;
    u32 word_1c;
    u32 word_20;
    u32 word_24;
    u32 word_28;
    u32 word_2c;
};
GUEST_OFFSET(Object_00813340_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_00813340_0, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_00813340_0, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Object_00813340_0, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Object_00813340_0, word_10, 0x10);  // (from the original)
GUEST_OFFSET(Object_00813340_0, word_14, 0x14);  // (from the original)
GUEST_OFFSET(Object_00813340_0, word_18, 0x18);  // (from the original)
GUEST_OFFSET(Object_00813340_0, word_1c, 0x1c);  // (from the original)
GUEST_OFFSET(Object_00813340_0, word_20, 0x20);  // (from the original)
GUEST_OFFSET(Object_00813340_0, word_24, 0x24);  // (from the original)
GUEST_OFFSET(Object_00813340_0, word_28, 0x28);  // (from the original)
GUEST_OFFSET(Object_00813340_0, word_2c, 0x2c);  // (from the original)


u32 f_00813340(gptr<Object_00813340_0> arg0, float S0, float S1, float S2) {
    u32 r0 = arg0.addr();
    u32 r1 = 0;
    float S3 = 0;
    float S4 = 0;
    arg0->word_c = u32(std::bit_cast<u32>(S0));
    S4 = std::bit_cast<float>(*gptr<u32>(0x81337cu));  // (from the original)
    arg0->word_1c = u32(std::bit_cast<u32>(S1));
    S3 = std::bit_cast<float>(*gptr<u32>(0x813380u));  // (from the original)
    arg0->word_2c = u32(std::bit_cast<u32>(S2));
    arg0->word_0 = u32(std::bit_cast<u32>(S4));
    arg0->word_4 = u32(std::bit_cast<u32>(S3));
    arg0->word_8 = u32(std::bit_cast<u32>(S3));
    r1 = r0 + 0x10u;  // (from the original)
    arg0->word_10 = u32(std::bit_cast<u32>(S3));
    arg0->word_14 = u32(std::bit_cast<u32>(S4));
    arg0->word_18 = u32(std::bit_cast<u32>(S3));
    arg0->word_20 = u32(std::bit_cast<u32>(S3));
    r0 = r0 + 0x24u;  // (from the original)
    arg0->word_24 = u32(std::bit_cast<u32>(S3));
    arg0->word_28 = u32(std::bit_cast<u32>(S4));
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_00813340
GUEST_EXPORT(0x00813340, d_00813340::f_00813340);

// f_00813384: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00813384 {

struct __attribute__((packed)) Object_00813384_0 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
    u32 word_18;
    u32 word_1c;
    u32 word_20;
    u32 word_24;
    u32 word_28;
    u32 word_2c;
};
GUEST_OFFSET(Object_00813384_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_00813384_0, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_00813384_0, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Object_00813384_0, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Object_00813384_0, word_10, 0x10);  // (from the original)
GUEST_OFFSET(Object_00813384_0, word_14, 0x14);  // (from the original)
GUEST_OFFSET(Object_00813384_0, word_18, 0x18);  // (from the original)
GUEST_OFFSET(Object_00813384_0, word_1c, 0x1c);  // (from the original)
GUEST_OFFSET(Object_00813384_0, word_20, 0x20);  // (from the original)
GUEST_OFFSET(Object_00813384_0, word_24, 0x24);  // (from the original)
GUEST_OFFSET(Object_00813384_0, word_28, 0x28);  // (from the original)
GUEST_OFFSET(Object_00813384_0, word_2c, 0x2c);  // (from the original)

struct __attribute__((packed)) Object_00813384_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Object_00813384_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_00813384_1, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_00813384_1, word_8, 0x8);  // (from the original)

struct __attribute__((packed)) Object_00813384_2 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Object_00813384_2, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_00813384_2, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_00813384_2, word_8, 0x8);  // (from the original)


void f_00813384(gptr<Object_00813384_0> arg0, gptr<Object_00813384_1> arg1, gptr<Object_00813384_2> arg2) {
    u32 r1 = arg1.addr();
    float S0 = 0;
    S0 = std::bit_cast<float>(*gptr<u32>(0x8133d4u));  // (from the original)
    arg0->word_0 = u32(arg1->word_0);
    arg0->word_10 = u32(std::bit_cast<u32>(S0));
    arg0->word_20 = u32(std::bit_cast<u32>(S0));
    arg0->word_4 = u32(std::bit_cast<u32>(S0));
    arg0->word_14 = u32(arg1->word_4);
    arg0->word_24 = u32(std::bit_cast<u32>(S0));
    arg0->word_8 = u32(std::bit_cast<u32>(S0));
    arg0->word_18 = u32(std::bit_cast<u32>(S0));
    arg0->word_28 = u32(arg1->word_8);
    arg0->word_c = u32(arg2->word_0);
    arg0->word_1c = u32(arg2->word_4);
    r1 = arg2->word_8;
    arg0->word_2c = u32(r1);
    guest::cpu()->r[1] = r1;
    guest::cpu()->s[0] = S0;
    return;
}

}  // namespace d_00813384
GUEST_EXPORT(0x00813384, d_00813384::f_00813384);

// f_008133d8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_008133d8 {

struct __attribute__((packed)) Object_008133d8_0 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
};
GUEST_OFFSET(Object_008133d8_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_008133d8_0, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_008133d8_0, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Object_008133d8_0, word_c, 0xc);  // (from the original)


void f_008133d8(gptr<Object_008133d8_0> arg0, float S0, float S1, float S2, float S3) {
    u32 fpsr = guest::cpu()->fpscr;
    fpsr = fpsr & 0xfffffffu | vfp_cmpf(S0, S2);  // (from the original)
    if (fpsr >> 0x1d & 1) {  // (from the original)
        arg0->word_0 = u32(std::bit_cast<u32>(S2));
        arg0->word_8 = u32(std::bit_cast<u32>(S0));
    } else {
        arg0->word_0 = u32(std::bit_cast<u32>(S0));
        arg0->word_8 = u32(std::bit_cast<u32>(S2));
    }
    if ((fpsr & 0xfffffffu | vfp_cmpf(S1, S3)) >> 0x1d & 1) {  // (from the original)
        arg0->word_4 = u32(std::bit_cast<u32>(S3));
        arg0->word_c = u32(std::bit_cast<u32>(S1));
    } else {
        arg0->word_4 = u32(std::bit_cast<u32>(S1));
        arg0->word_c = u32(std::bit_cast<u32>(S3));
    }
    return;
}

}  // namespace d_008133d8
GUEST_EXPORT(0x008133d8, d_008133d8::f_008133d8);

// f_0081360c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0081360c {


u32 f_0081360c(u32 r0_unused, u32 r1_unused, u32 r2) {
    u32 ea = 0;
    u32 r4 = 0;
    u32 r5 = 0;
    u32 r13 = guest::cpu()->r[13];
    ea = r13;
    r13 = r13 + 8;
    r4 = *gptr<u32>(ea);
    r5 = *gptr<u32>(ea + 4);
    guest::cpu()->r[13] = r13;
    guest::cpu()->r[4] = r4;
    guest::cpu()->r[5] = r5;
    return guest::call_address<u32>(r2, guest::cpu()->r[0], guest::cpu()->r[1], r2, guest::cpu()->r[3]);
}

}  // namespace d_0081360c
GUEST_EXPORT(0x0081360c, d_0081360c::f_0081360c);

// f_00813d2c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00813d2c {


u32 f_00813d2c(u32 r0, u32 r1, u32 r2) {
    u32 zf = 0;
    guest::cpu()->r[13] -= 4u;
    zf = r2 == 0;
    r2 = lsl_r(1u, r1 & 7u);
    r0 = r0 + (r1 >> 3);
    if (!zf) {
        if (r1 < 0x60u) {  // (from the original)
            r1 = u32(*gptr<u8>(r0)) | r2;
            *gptr<u8>(r0) = u8(r1);
            guest::cpu()->r[13] += 4u;
            guest::cpu()->r[1] = r1;
            return r0;
        }
        guest::cpu()->r[13] += 4u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    if (r1 >= 0x60u) {  // (from the original)
        guest::cpu()->r[13] += 4u;
        guest::cpu()->r[1] = r1;
        return r0;
    } else {
        r1 = u32(*gptr<u8>(r0)) & ~r2;
    }
    *gptr<u8>(r0) = u8(r1);
    guest::cpu()->r[13] += 4u;
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_00813d2c
GUEST_EXPORT(0x00813d2c, d_00813d2c::f_00813d2c);

// f_008156fc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_008156fc {

struct __attribute__((packed)) Object_008156fc_0 {
    u8 unknown_0[0x244];  // (not used here)
    u32 word_244;
};
GUEST_OFFSET(Object_008156fc_0, word_244, 0x244);  // (from the original)

inline constexpr guest::Function<0x00132478, u32(u32, u32, u32, u32)> call_00132478;  // (from the original)
inline constexpr guest::Function<0x0013f134, u32(u32, u32, u32, u32)> call_0013f134;  // (from the original)
inline constexpr guest::Function<0x002f73b8, u32(u32, u32, u32, u32)> call_002f73b8;  // (from the original)
inline constexpr guest::Function<0x002f747c, u32(u32, u32, u32, u32)> call_002f747c;  // (from the original)
inline constexpr guest::Function<0x0031758c, u32(u32, u32, u32, u32)> call_0031758c;  // (from the original)
inline constexpr guest::Function<0x005b19f8, u32(u32, u32, u32, u32)> call_005b19f8;  // (from the original)

u32 f_008156fc(gptr<Object_008156fc_0> arg0, u32 r1, u32 r2, u32 r3) {
    u32 r0 = arg0.addr();
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 0x28u;  // (from the original)
    r5 = r0;
    r4 = arg0->word_244;
    r6 = r1;
    r7 = r2;
    if (r4 == 0) {
        goto L_81573c;
    }
    do {
L_81571c:;
        r0 = r4 + 0xcu;  // (from the original)
        guest::cpu()->r[13] = r13;
        r0 = call_005b19f8(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r0 = r4 + 0x14u;  // (from the original)
        guest::cpu()->r[13] = r13;
        r0 = call_002f73b8(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r4 = *gptr<u32>(r4 + 8u);
        guest::preempt();
    } while (r4 != 0);
L_81573c:;
    r4 = *gptr<u32>(r5 + 0x25cu);  // (from the original)
    if (r4 == 0) {
        goto L_815768;
    }
    do {
L_815748:;
        r0 = r4 + 0xcu;  // (from the original)
        guest::cpu()->r[13] = r13;
        r0 = call_005b19f8(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r0 = r4 + 0x14u;  // (from the original)
        guest::cpu()->r[13] = r13;
        r0 = call_002f73b8(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r4 = *gptr<u32>(r4 + 8u);
        guest::preempt();
    } while (r4 != 0);
L_815768:;
    r0 = r5 + 0x240u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00132478(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r5 + 0x24cu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00132478(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r5 + 0x258u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00132478(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r4 = 0u;
    do {
L_81578c:;
        r1 = r5 + ((r4 << 3) - r4 + (r4 << 6) << 2) + 8u;
        r0 = r5 + 0x24cu;  // (from the original)
        guest::cpu()->r[13] = r13;
        r0 = call_0013f134(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r4 = r4 + 1u;
        guest::preempt();
    } while (r4 < 2u);
    r0 = r5;
    guest::cpu()->r[13] = r13;
    r0 = call_002f747c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    if (r6 == 0) {
        r0 = 0u;
        goto L_8157f4;
    }
    *gptr<u32>(r13 + 0xcu) = u32(0x8157fcu);  // (from the original)
    *gptr<u32>(r13 + 8u) = u32(0x9047f8u);  // (from the original)
    *gptr<u32>(r13) = u32(1u);
    *gptr<u32>(r13 + 4) = u32(0u);
    r3 = r13 + 8u;
    r2 = r6;
    r1 = r7;
    r0 = r5;
    guest::cpu()->r[13] = r13;
    r0 = call_0031758c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
L_8157f4:;
    r13 = r13 + 0x28u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_008156fc
GUEST_EXPORT(0x008156fc, d_008156fc::f_008156fc);

// f_0081c694: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0081c694 {

struct __attribute__((packed)) Object_0081c694_0 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u8 byte_c;
    u8 unknown_d[0x3];  // (not used here)
    u32 word_10;
    u32 word_14;
};
GUEST_OFFSET(Object_0081c694_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_0081c694_0, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_0081c694_0, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Object_0081c694_0, byte_c, 0xc);  // (from the original)
GUEST_OFFSET(Object_0081c694_0, word_10, 0x10);  // (from the original)
GUEST_OFFSET(Object_0081c694_0, word_14, 0x14);  // (from the original)

inline constexpr guest::Function<0x002f825c, u32(u32, u32, u32, u32)> call_002f825c;  // (from the original)

u32 f_0081c694(gptr<Object_0081c694_0> arg0) {
    u32 ea = 0;
    u32 res = 0;
    u32 r0 = arg0.addr();
    u32 r1 = 0;
    u32 r2 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 0x10;  // (from the original)
    r4 = r0;
    arg0->word_4 = u32(r0 + 0x18u);  // (from the original)
    arg0->word_8 = u32(0xbu);  // (from the original)
    r2 = 4u;
    r1 = ~0u;
    arg0->word_0 = u32(0x909968u);  // (from the original)
    arg0->byte_c = u8(r2);
    arg0->word_10 = u32(r1);
    arg0->word_14 = u32(r1);
    r5 = 0u;
    r1 = 0x16u;  // (from the original)
    r0 = r4 + 0x18u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002f825c(r0, r1, r2, guest::cpu()->r[3]);
    r0 = r4 + 0x18u;  // (from the original)
    r1 = 5u;
    *gptr<u16>(r4 + 0x18u) = u16(r5);  // (from the original)
    do {
L_81c6e0:;
        ea = r0 + 2u;
        *gptr<u16>(ea) = u16(r5);
        res = r1 - 1u;
        r1 = res;
        ea = r0 + 4u;
        *gptr<u16>(ea) = u16(r5);
        r0 = ea;
        guest::preempt();
    } while (res != 0);
    r0 = r4;
    r13 = r13 + 0x10;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_0081c694
GUEST_EXPORT(0x0081c694, d_0081c694::f_0081c694);

// f_0081c9bc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0081c9bc {

struct __attribute__((packed)) Object_0081c9bc_0 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u8 byte_c;
    u8 unknown_d[0x3];  // (not used here)
    u32 word_10;
    u32 word_14;
};
GUEST_OFFSET(Object_0081c9bc_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_0081c9bc_0, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_0081c9bc_0, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Object_0081c9bc_0, byte_c, 0xc);  // (from the original)
GUEST_OFFSET(Object_0081c9bc_0, word_10, 0x10);  // (from the original)
GUEST_OFFSET(Object_0081c9bc_0, word_14, 0x14);  // (from the original)

inline constexpr guest::Function<0x002f825c, u32(u32, u32, u32, u32)> call_002f825c;  // (from the original)

u32 f_0081c9bc(gptr<Object_0081c9bc_0> arg0) {
    u32 ea = 0;
    u32 res = 0;
    u32 r0 = arg0.addr();
    u32 r1 = 0;
    u32 r2 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 0x10;  // (from the original)
    r4 = r0;
    arg0->word_4 = u32(r0 + 0x18u);  // (from the original)
    arg0->word_8 = u32(0xdu);  // (from the original)
    r2 = 4u;
    r1 = ~0u;
    arg0->word_0 = u32(0x909a48u);  // (from the original)
    arg0->byte_c = u8(r2);
    arg0->word_10 = u32(r1);
    arg0->word_14 = u32(r1);
    r5 = 0u;
    r1 = 0x1au;  // (from the original)
    r0 = r4 + 0x18u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002f825c(r0, r1, r2, guest::cpu()->r[3]);
    r0 = r4 + 0x18u;  // (from the original)
    r1 = 6u;
    *gptr<u16>(r4 + 0x18u) = u16(r5);  // (from the original)
    do {
L_81ca08:;
        ea = r0 + 2u;
        *gptr<u16>(ea) = u16(r5);
        res = r1 - 1u;
        r1 = res;
        ea = r0 + 4u;
        *gptr<u16>(ea) = u16(r5);
        r0 = ea;
        guest::preempt();
    } while (res != 0);
    r0 = r4;
    r13 = r13 + 0x10;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_0081c9bc
GUEST_EXPORT(0x0081c9bc, d_0081c9bc::f_0081c9bc);

// f_0081d12c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0081d12c {

inline constexpr guest::Function<0x003083bc, u32(u32, u32, u32, u32)> call_003083bc;  // (from the original)
inline constexpr guest::Function<0x005f4bfc, u32(u32, u32, u32, u32)> call_005f4bfc;  // (from the original)

u32 f_0081d12c(u32 r0, u32 r1_unused, u32 r2_unused, u32 r3) {
    u32 ea = 0;
    u32 res = 0;
    u32 r1 = 0;
    u32 r2 = 0;
    u32 r12 = 0;
    u32 r13 = guest::cpu()->r[13];
    r2 = 0x14u;  // (from the original)
    r1 = r0 + 0x18u;  // (from the original)
    r13 = r13 - 8;
    guest::cpu()->r[13] = r13;
    r0 = call_003083bc(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = 0x909ce8u;  // (from the original)
    *gptr<u32>(r0) = u32(r1);
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
    *gptr<u32>(r0 + 0x34u) = u32(r1);  // (from the original)
    r3 = 0x8906ecu;  // (from the original)
    *gptr<u32>(r0 + 0x38u) = u32(r1);  // (from the original)
    *gptr<u32>(r0 + 0x3cu) = u32(r1);  // (from the original)
    r1 = r0 + 0x16u;  // (from the original)
    r2 = 0xau;  // (from the original)
    do {
L_81d184:;
        ea = r3;
        r12 = u32(*gptr<u16>(ea));
        res = r2 - 1u;
        r2 = res;
        ea = r1 + 2u;
        *gptr<u16>(ea) = u16(r12);
        ea = r3;
        r12 = u32(*gptr<u16>(ea));
        ea = r1 + 4u;
        *gptr<u16>(ea) = u16(r12);
        r1 = ea;
        guest::preempt();
    } while (res != 0);
    r13 = r13 + 8;
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_0081d12c
GUEST_EXPORT(0x0081d12c, d_0081d12c::f_0081d12c);

// f_0081d248: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0081d248 {

inline constexpr guest::Function<0x002f825c, u32(u32, u32, u32, u32)> call_002f825c;  // (from the original)
inline constexpr guest::Function<0x003083bc, u32(u32, u32, u32, u32)> call_003083bc;  // (from the original)
inline constexpr guest::Function<0x005f4bfc, u32(u32, u32, u32, u32)> call_005f4bfc;  // (from the original)

u32 f_0081d248(u32 r0, u32 r1_unused, u32 r2_unused, u32 r3) {
    u32 ea = 0;
    u32 res = 0;
    u32 r1 = 0;
    u32 r2 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r13 = guest::cpu()->r[13];
    r2 = 0x15u;  // (from the original)
    r1 = r0 + 0x18u;  // (from the original)
    r13 = r13 - 8;
    guest::cpu()->r[13] = r13;
    r0 = call_003083bc(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = 0x909d20u;  // (from the original)
    *gptr<u32>(r0) = u32(r1);
    r0 = r0 + 0xcu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_005f4bfc(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r4 = r0 - 0xcu;  // (from the original)
    r1 = 0x2au;  // (from the original)
    r0 = r0 + 0xcu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002f825c(r0, r1, r2, r3);
    r1 = 0x8906ecu;  // (from the original)
    r0 = r4 + 0x18u;  // (from the original)
    *gptr<u16>(r4 + 0x18u) = u16(u32(*gptr<u16>(r1)));  // (from the original)
    r2 = 0xau;  // (from the original)
    do {
L_81d288:;
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
    r13 = r13 + 8;
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_0081d248
GUEST_EXPORT(0x0081d248, d_0081d248::f_0081d248);

// f_0081d8c0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0081d8c0 {

struct __attribute__((packed)) Object_0081d8c0_0 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u8 byte_c;
    u8 unknown_d[0x3];  // (not used here)
    u32 word_10;
    u32 word_14;
};
GUEST_OFFSET(Object_0081d8c0_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_0081d8c0_0, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_0081d8c0_0, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Object_0081d8c0_0, byte_c, 0xc);  // (from the original)
GUEST_OFFSET(Object_0081d8c0_0, word_10, 0x10);  // (from the original)
GUEST_OFFSET(Object_0081d8c0_0, word_14, 0x14);  // (from the original)

inline constexpr guest::Function<0x002f825c, u32(u32, u32, u32, u32)> call_002f825c;  // (from the original)

u32 f_0081d8c0(gptr<Object_0081d8c0_0> arg0) {
    u32 ea = 0;
    u32 res = 0;
    u32 r0 = arg0.addr();
    u32 r1 = 0;
    u32 r2 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 0x10;  // (from the original)
    r4 = r0;
    arg0->word_4 = u32(r0 + 0x18u);  // (from the original)
    arg0->word_8 = u32(0x21u);  // (from the original)
    r2 = 4u;
    r1 = ~0u;
    arg0->word_0 = u32(0x909f18u);  // (from the original)
    arg0->byte_c = u8(r2);
    arg0->word_10 = u32(r1);
    arg0->word_14 = u32(r1);
    r5 = 0u;
    r1 = 0x42u;  // (from the original)
    r0 = r4 + 0x18u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002f825c(r0, r1, r2, guest::cpu()->r[3]);
    r0 = r4 + 0x18u;  // (from the original)
    r1 = 0x10u;  // (from the original)
    *gptr<u16>(r4 + 0x18u) = u16(r5);  // (from the original)
    do {
L_81d90c:;
        ea = r0 + 2u;
        *gptr<u16>(ea) = u16(r5);
        res = r1 - 1u;
        r1 = res;
        ea = r0 + 4u;
        *gptr<u16>(ea) = u16(r5);
        r0 = ea;
        guest::preempt();
    } while (res != 0);
    r0 = r4;
    r13 = r13 + 0x10;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_0081d8c0
GUEST_EXPORT(0x0081d8c0, d_0081d8c0::f_0081d8c0);

// f_0081de64: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0081de64 {

struct __attribute__((packed)) Object_0081de64_0 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u8 byte_c;
    u8 unknown_d[0x3];  // (not used here)
    u32 word_10;
    u32 word_14;
};
GUEST_OFFSET(Object_0081de64_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_0081de64_0, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_0081de64_0, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Object_0081de64_0, byte_c, 0xc);  // (from the original)
GUEST_OFFSET(Object_0081de64_0, word_10, 0x10);  // (from the original)
GUEST_OFFSET(Object_0081de64_0, word_14, 0x14);  // (from the original)

inline constexpr guest::Function<0x002f825c, u32(u32, u32, u32, u32)> call_002f825c;  // (from the original)

u32 f_0081de64(gptr<Object_0081de64_0> arg0) {
    u32 ea = 0;
    u32 res = 0;
    u32 r0 = arg0.addr();
    u32 r1 = 0;
    u32 r2 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 0x10;  // (from the original)
    r4 = r0;
    arg0->word_4 = u32(r0 + 0x18u);  // (from the original)
    arg0->word_8 = u32(0x2du);  // (from the original)
    r2 = 4u;
    r1 = ~0u;
    arg0->word_0 = u32(0x90a0d8u);  // (from the original)
    arg0->byte_c = u8(r2);
    arg0->word_10 = u32(r1);
    arg0->word_14 = u32(r1);
    r5 = 0u;
    r1 = 0x5au;  // (from the original)
    r0 = r4 + 0x18u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002f825c(r0, r1, r2, guest::cpu()->r[3]);
    r0 = r4 + 0x18u;  // (from the original)
    r1 = 0x16u;  // (from the original)
    *gptr<u16>(r4 + 0x18u) = u16(r5);  // (from the original)
    do {
L_81deb0:;
        ea = r0 + 2u;
        *gptr<u16>(ea) = u16(r5);
        res = r1 - 1u;
        r1 = res;
        ea = r0 + 4u;
        *gptr<u16>(ea) = u16(r5);
        r0 = ea;
        guest::preempt();
    } while (res != 0);
    r0 = r4;
    r13 = r13 + 0x10;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_0081de64
GUEST_EXPORT(0x0081de64, d_0081de64::f_0081de64);

// f_0081e020: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0081e020 {

inline constexpr guest::Function<0x002f825c, u32(u32, u32, u32, u32)> call_002f825c;  // (from the original)
inline constexpr guest::Function<0x003083bc, u32(u32, u32, u32, u32)> call_003083bc;  // (from the original)
inline constexpr guest::Function<0x005f4bfc, u32(u32, u32, u32, u32)> call_005f4bfc;  // (from the original)

u32 f_0081e020(u32 r0, u32 r1_unused, u32 r2_unused, u32 r3) {
    u32 ea = 0;
    u32 res = 0;
    u32 r1 = 0;
    u32 r2 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r13 = guest::cpu()->r[13];
    r2 = 0x32u;  // (from the original)
    r1 = r0 + 0x18u;  // (from the original)
    r13 = r13 - 8;
    guest::cpu()->r[13] = r13;
    r0 = call_003083bc(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = 0x90a148u;  // (from the original)
    *gptr<u32>(r0) = u32(r1);
    r0 = r0 + 0xcu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_005f4bfc(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r4 = r0 - 0xcu;  // (from the original)
    r1 = 0x64u;  // (from the original)
    r0 = r0 + 0xcu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002f825c(r0, r1, r2, r3);
    r2 = 0x8906ecu;  // (from the original)
    r0 = r4 + 0x16u;  // (from the original)
    r1 = 0x19u;  // (from the original)
    do {
L_81e058:;
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
    r0 = r4;
    r13 = r13 + 8;
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_0081e020
GUEST_EXPORT(0x0081e020, d_0081e020::f_0081e020);

// f_0081e25c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0081e25c {

inline constexpr guest::Function<0x002f825c, u32(u32, u32, u32, u32)> call_002f825c;  // (from the original)
inline constexpr guest::Function<0x003083bc, u32(u32, u32, u32, u32)> call_003083bc;  // (from the original)
inline constexpr guest::Function<0x005f4bfc, u32(u32, u32, u32, u32)> call_005f4bfc;  // (from the original)

u32 f_0081e25c(u32 r0, u32 r1_unused, u32 r2_unused, u32 r3) {
    u32 ea = 0;
    u32 res = 0;
    u32 r1 = 0;
    u32 r2 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r13 = guest::cpu()->r[13];
    r2 = 0x3cu;  // (from the original)
    r1 = r0 + 0x18u;  // (from the original)
    r13 = r13 - 8;
    guest::cpu()->r[13] = r13;
    r0 = call_003083bc(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = 0x90a1f0u;  // (from the original)
    *gptr<u32>(r0) = u32(r1);
    r0 = r0 + 0xcu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_005f4bfc(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r4 = r0 - 0xcu;  // (from the original)
    r1 = 0x78u;  // (from the original)
    r0 = r0 + 0xcu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002f825c(r0, r1, r2, r3);
    r2 = 0x8906ecu;  // (from the original)
    r0 = r4 + 0x16u;  // (from the original)
    r1 = 0x1eu;  // (from the original)
    do {
L_81e294:;
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
    r0 = r4;
    r13 = r13 + 8;
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_0081e25c
GUEST_EXPORT(0x0081e25c, d_0081e25c::f_0081e25c);

// f_0081e35c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0081e35c {

inline constexpr guest::Function<0x002f825c, u32(u32, u32, u32, u32)> call_002f825c;  // (from the original)
inline constexpr guest::Function<0x003083bc, u32(u32, u32, u32, u32)> call_003083bc;  // (from the original)
inline constexpr guest::Function<0x005f4bfc, u32(u32, u32, u32, u32)> call_005f4bfc;  // (from the original)

u32 f_0081e35c(u32 r0, u32 r1_unused, u32 r2_unused, u32 r3) {
    u32 ea = 0;
    u32 res = 0;
    u32 r1 = 0;
    u32 r2 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r13 = guest::cpu()->r[13];
    r2 = 0x40u;  // (from the original)
    r1 = r0 + 0x18u;  // (from the original)
    r13 = r13 - 8;
    guest::cpu()->r[13] = r13;
    r0 = call_003083bc(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = 0x90a228u;  // (from the original)
    *gptr<u32>(r0) = u32(r1);
    r0 = r0 + 0xcu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_005f4bfc(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r4 = r0 - 0xcu;  // (from the original)
    r1 = 0x80u;  // (from the original)
    r0 = r0 + 0xcu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002f825c(r0, r1, r2, r3);
    r2 = 0x8906ecu;  // (from the original)
    r0 = r4 + 0x16u;  // (from the original)
    r1 = 0x20u;  // (from the original)
    do {
L_81e394:;
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
    r0 = r4;
    r13 = r13 + 8;
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_0081e35c
GUEST_EXPORT(0x0081e35c, d_0081e35c::f_0081e35c);
