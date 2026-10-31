// Functions decompiled by tools/decomp (docs/decomp.md), each proved equal to the recompiled original (prove-cpp). The
// names are generated (d_<address>::f_<address>, Object_<address>_<argument>, word_<offset>) and still to be chosen.
#include "guest/guest.hpp"

#include <bit>

using guest::gptr;

// f_006002e4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006002e4 {

struct __attribute__((packed)) Object_006002e4_0 {
    u32 word_0;
    u8 unknown_4[0x10];  // (not used here)
    u32 word_14;
    u32 word_18;
    u32 word_1c;
    u8 byte_20;
    u8 unknown_21[0x3];  // (not used here)
    u32 word_24;
    u32 word_28;
    u8 byte_2c;
    u8 unknown_2d[0x3];  // (not used here)
    u32 word_30;
    u32 word_34;
};
GUEST_OFFSET(Object_006002e4_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_006002e4_0, word_14, 0x14);  // (from the original)
GUEST_OFFSET(Object_006002e4_0, word_18, 0x18);  // (from the original)
GUEST_OFFSET(Object_006002e4_0, word_1c, 0x1c);  // (from the original)
GUEST_OFFSET(Object_006002e4_0, byte_20, 0x20);  // (from the original)
GUEST_OFFSET(Object_006002e4_0, word_24, 0x24);  // (from the original)
GUEST_OFFSET(Object_006002e4_0, word_28, 0x28);  // (from the original)
GUEST_OFFSET(Object_006002e4_0, byte_2c, 0x2c);  // (from the original)
GUEST_OFFSET(Object_006002e4_0, word_30, 0x30);  // (from the original)
GUEST_OFFSET(Object_006002e4_0, word_34, 0x34);  // (from the original)

inline constexpr guest::Function<0x001391d8, u32(u32, u32, u32, u32)> call_001391d8;  // (from the original)
inline constexpr guest::Function<0x005b1840, u32(u32, u32, u32, u32)> call_005b1840;  // (from the original)
inline constexpr guest::Function<0x005f1138, u32(u32, u32, u32, u32)> call_005f1138;  // (from the original)
inline constexpr guest::Function<0x00810f00, u32(u32, u32, u32, u32)> call_00810f00;  // (from the original)
inline constexpr guest::Function<0x00811048, u32(u32, u32, u32, u32)> call_00811048;  // (from the original)
inline constexpr guest::Function<0x00811190, u32(u32, u32, u32, u32)> call_00811190;  // (from the original)

u32 f_006002e4(gptr<Object_006002e4_0> arg0, u32 r1, u32 r2) {
    u32 r0 = arg0.addr();
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r9 = guest::cpu()->r[9];
    u32 r10 = guest::cpu()->r[10];
    u32 r11 = guest::cpu()->r[11];
    u32 r12 = guest::cpu()->r[12];
    u32 r13 = guest::cpu()->r[13];
    u32 ea_1 = 0;
    u32 ea_2 = 0;
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r0_5 = 0;
    u32 r0_6 = 0;
    u32 r0_7 = 0;
    u32 r1_2 = 0;
    u32 r6_1 = 0;
    u32 r0_8 = 0;
    u32 r0_9 = 0;
    u32 r2_2 = 0;
    u32 r0_10 = 0;
    u32 ea_3 = 0;
    u32 ea_4 = 0;
    u32 ea_5 = 0;
    u32 ea_6 = 0;
    u32 ea_7 = 0;
    u32 ea_8 = 0;
    u32 r0_11 = 0;
    u32 r0_12 = 0;
    u32 r1_3 = 0;
    u32 r2_3 = 0;
    u32 ea_9 = 0;
    u32 r0_13 = 0;
    u32 r0_14 = 0;
    u32 r1_4 = 0;
    u32 r2_4 = 0;
    u32 ea_10 = 0;
    u32 ea_11 = 0;
    u32 r0_15 = 0;
    u32 r0_16 = 0;
    u32 r1_5 = 0;
    u32 r2_5 = 0;
    u32 r0_17 = 0;
    u32 r0_18 = 0;
    u32 r0_19 = 0;
    *gptr<u32>(r13 + 0xfffffff8u) = u32(r12);  // (from the original)
    r13 = r13 - 0x28;  // (from the original)
    r9 = 0u;
    r10 = ~0u;
    arg0->word_0 = u32(r1);
    arg0->word_14 = u32(r9);
    arg0->word_18 = u32(r9);
    arg0->word_1c = u32(r9);
    arg0->byte_20 = u8(r9);
    ea_1 = r0 + 0x24u;  // (from the original)
    arg0->word_24 = u32(r9);
    arg0->word_28 = u32(r9);
    arg0->byte_2c = u8(r9);
    arg0->word_30 = u32(r10);
    ea_2 = ea_1 + 0x10u;  // (from the original)
    arg0->word_34 = u32(r10);
    r0_1 = ea_2 + 4u;
    guest::cpu()->r[13] = r13;
    r0_2 = call_00811190(r0_1, r1, r2, guest::cpu()->r[3]);
    r1_1 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    r0_3 = r0_2 - 0x14u;  // (from the original)
    *gptr<u8>(r0_3 + 0x28u) = u8(r9);  // (from the original)
    r0_4 = r0_3 + 0x2cu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_5 = call_00810f00(r0_4, r1_1, r2_1, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r0_6 = r0_5 - 0x2cu;  // (from the original)
    r2 = r0_6 + 0x60u;  // (from the original)
    *gptr<u8>(r0_6 + 0x58u) = u8(r9);  // (from the original)
    r7 = 0x9084d0u;  // (from the original)
    r8 = 0x9097c8u;  // (from the original)
    *gptr<u32>(r0_6 + 0x5cu) = u32(r9);  // (from the original)
    *gptr<u32>(r2) = u32(r9);
    *gptr<u32>(r2 + 4) = u32(r10);
    r5 = r0_6 - 0x24u;  // (from the original)
    r4 = 0u;
    r11 = 4u;
    do {
L_600358:;
        guest::cpu()->r[13] = r13;
        r0_7 = call_001391d8(0x1e8u, r1, r2, guest::cpu()->r[3]);  // (from the original)
        r1_2 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        if (!(r0_7 == 0)) {
            r6_1 = r5 + 0x24u;  // (from the original)
            *gptr<u32>(r0_7) = u32(r7);
            r0_8 = r0_7 + 4u;
            guest::cpu()->r[13] = r13;
            r0_9 = call_005b1840(r0_8, r1_2, r2, guest::cpu()->r[3]);
            r2_2 = guest::cpu()->r[2];
            r0_10 = r0_9 - 4u;
            ea_3 = r0_10 + 0xcu;  // (from the original)
            *gptr<u32>(ea_3) = u32(r10);
            ea_4 = r0_10 + 0x14u;  // (from the original)
            *gptr<u32>(ea_4) = u32(r9);
            ea_5 = r0_10 + 0x10u;  // (from the original)
            *gptr<u32>(ea_5) = u32(r10);
            ea_6 = r0_10 + 0x18u;  // (from the original)
            *gptr<u32>(ea_6) = u32(r9);
            ea_7 = r0_10 + 0x1cu;  // (from the original)
            *gptr<u8>(ea_7) = u8(r9);
            *gptr<u32>(r0_10) = u32(r8);
            ea_8 = r0_10 + 0x20u;  // (from the original)
            *gptr<u32>(ea_8) = u32(r5);
            *gptr<u32>(ea_8 + 4) = u32(r6_1);
            *gptr<u8>(r0_10 + 0x28u) = u8(r9);  // (from the original)
            *gptr<u8>(r0_10 + 0x29u) = u8(r11);  // (from the original)
            r0_11 = r0_10 + 0x2cu;  // (from the original)
            guest::cpu()->r[13] = r13;
            r0_12 = call_005f1138(r0_11, 0u, r2_2, guest::cpu()->r[3]);
            r1_3 = guest::cpu()->r[1];
            r2_3 = guest::cpu()->r[2];
            ea_9 = r0_12 + 0x100u;  // (from the original)
            *gptr<u32>(ea_9) = u32(r9);
            r0_13 = ea_9 + 4u;
            guest::cpu()->r[13] = r13;
            r0_14 = call_00811048(r0_13, r1_3, r2_3, guest::cpu()->r[3]);
            r1_4 = guest::cpu()->r[1];
            r2_4 = guest::cpu()->r[2];
            ea_10 = r0_14 + 0x4cu;  // (from the original)
            *gptr<u32>(ea_10) = u32(r9);
            ea_11 = ea_10 + 4u;
            *gptr<u32>(ea_11) = u32(r10);
            r0_15 = ea_11 + 4u;
            guest::cpu()->r[13] = r13;
            r0_16 = call_00810f00(r0_15, r1_4, r2_4, guest::cpu()->r[3]);
            r1_5 = guest::cpu()->r[1];
            r2_5 = guest::cpu()->r[2];
            r0_17 = r0_16 + 0x2cu;  // (from the original)
            guest::cpu()->r[13] = r13;
            r0_18 = call_00810f00(r0_17, r1_5, r2_5, guest::cpu()->r[3]);
            r2 = guest::cpu()->r[2];
            r0_19 = r0_18 - 0x30u;  // (from the original)
            *gptr<u32>(r0_19 + 0x5cu) = u32(r9);  // (from the original)
            *gptr<u32>(r0_19 + 0x60u) = u32(r10);  // (from the original)
            r0_7 = r0_19 - 0x180u;  // (from the original)
            *gptr<u8>(r0_7 + 0x1e4u) = u8(r9);  // (from the original)
            *gptr<u8>(r0_7 + 0x1e5u) = u8(r9);  // (from the original)
            *gptr<u8>(r0_7 + 0x1e6u) = u8(r9);  // (from the original)
            *gptr<u8>(r0_7 + 0x1e7u) = u8(r9);  // (from the original)
        }
        r1 = r5 + (r4 << 2);
        r4 = r4 + 1u;
        *gptr<u32>(r1 + 4u) = u32(r0_7);
        guest::preempt();
    } while (r4 < 4u);
    r13 = r13 + 0x28;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r5;
}

}  // namespace d_006002e4
GUEST_EXPORT(0x006002e4, d_006002e4::f_006002e4);

// f_0060143c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0060143c {

struct __attribute__((packed)) Object_0060143c_0 {
    u8 unknown_0[0x18];  // (not used here)
    u8 byte_18;
    u8 unknown_19[0x7];  // (not used here)
    u32 word_20;
    u8 unknown_24[0xd8];  // (not used here)
    u32 word_fc;
};
GUEST_OFFSET(Object_0060143c_0, byte_18, 0x18);  // (from the original)
GUEST_OFFSET(Object_0060143c_0, word_20, 0x20);  // (from the original)
GUEST_OFFSET(Object_0060143c_0, word_fc, 0xfc);  // (from the original)

inline constexpr guest::Function<0x005b1760, u32(u32, u32, u32, u32)> call_005b1760;  // (from the original)
inline constexpr guest::Function<0x005d46dc, u32(u32, u32, u32, u32)> call_005d46dc;  // (from the original)

u32 f_0060143c(gptr<Object_0060143c_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r0_1 = 0;
    u32 r5_1 = 0;
    u32 r1_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r0_1 = u32(arg0->byte_18);
    if (r0_1 == 0) {
        r5_1 = arg0->word_20;
    } else {
        r5_1 = arg0->word_fc;
    }
    r1_1 = 0u;
    if (r5_1 != 0) {
        r0_2 = call_005d46dc(r0_1, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);
        if (r0_2 >= 0xau) {  // (from the original)
            r0_3 = 0u;
        } else {
            r0_3 = u32(*gptr<u8>(0x890f08u + r0_2));  // (from the original)
        }
        r1_1 = r5_1 + *gptr<u32>(r5_1 + (r0_3 << 3));
    }
    r0_4 = r0 + 0x168u;  // (from the original)
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    return call_005b1760(r0_4, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_0060143c
GUEST_EXPORT(0x0060143c, d_0060143c::f_0060143c);

// f_00601f20: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00601f20 {

struct __attribute__((packed)) Object_00601f20_0 {
    u8 unknown_0[0x14];  // (not used here)
    u8 byte_14;
    u8 unknown_15[0x3];  // (not used here)
    u32 word_18;
    u8 unknown_1c[0x324];  // (not used here)
    u32 word_340;
};
GUEST_OFFSET(Object_00601f20_0, byte_14, 0x14);  // (from the original)
GUEST_OFFSET(Object_00601f20_0, word_18, 0x18);  // (from the original)
GUEST_OFFSET(Object_00601f20_0, word_340, 0x340);  // (from the original)

inline constexpr guest::Function<0x006e5f58, u32(u32, u32, u32, u32)> call_006e5f58;  // (from the original)

u32 f_00601f20(gptr<Object_00601f20_0> arg0, u32 r1) {
    u32 r0 = arg0.addr();
    u32 zf_1 = 0;
    u32 r0_1 = 0;
    zf_1 = r1 == 0;
    arg0->word_18 = u32(0u);
    if (!zf_1) {
        guest::cpu()->r[1] = 0u;
        return r0;
    }
    arg0->byte_14 = u8(0u);
    r0_1 = arg0->word_340 + 0x14u;  // (from the original)
    return call_006e5f58(r0_1, 0u, r1, guest::cpu()->r[3]);
}

}  // namespace d_00601f20
GUEST_EXPORT(0x00601f20, d_00601f20::f_00601f20);

// f_00602144: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00602144 {

struct __attribute__((packed)) Object_00602144_0 {
    u8 unknown_0[0x364];  // (not used here)
    u32 word_364;
};
GUEST_OFFSET(Object_00602144_0, word_364, 0x364);  // (from the original)

struct __attribute__((packed)) Object_00602144_1 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
};
GUEST_OFFSET(Object_00602144_1, word_4, 0x4);  // (from the original)

inline guest::global<u16, 0x00887254> global_00887254;  // (from the original)
inline guest::global<u16, 0x008872d0> global_008872d0;  // (from the original)
inline guest::global<u32, 0x0094ee44> global_0094ee44;  // (from the original)
inline constexpr guest::Function<0x003170f8, u32(u32, u32, u32, u32)> call_003170f8;  // (from the original)
inline constexpr guest::Function<0x0052c878, u32(u32, u32, u32, u32)> call_0052c878;  // (from the original)

u32 f_00602144(gptr<Object_00602144_0> arg0, gptr<Object_00602144_1> arg1) {
    u32 r0 = arg0.addr();
    u32 r1 = arg1.addr();
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    arg0->word_364 = u32(r1);
    arg1->word_4 = u32(r0);
    r0_1 = *global_0094ee44;
    if (r0_1 == 0) {
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        guest::cpu()->r[1] = r1;
        return r0_1;
    }
    r0_1 = call_003170f8(0xeu, 0u, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    r1 = guest::cpu()->r[1];
    if (r0_1 == 0) {
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        guest::cpu()->r[1] = r1;
        return r0_1;
    }
    r0_2 = call_0052c878(r0_1, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    if (r0_2 != 0) {
        r0_1 = u32(*gptr<u16>(r0_2 + 0xcu));  // (from the original)
        r1 = u32(*global_008872d0);
        if (r0_1 == r1) {
            guest::cpu()->r[13] += 0x10u;  // (from the original)
            guest::cpu()->r[1] = r1;
            return r0_1;
        }
        r0_1 = u32(*gptr<u16>(r0_2 + 0xcu));  // (from the original)
        r1 = u32(*global_00887254);
        if (r0_1 == r1) {
            guest::cpu()->r[13] += 0x10u;  // (from the original)
            guest::cpu()->r[1] = r1;
            return r0_1;
        }
    }
    r0_1 = *global_0094ee44;
    r1 = u32(*gptr<u8>(r0_1 + 0x14u));  // (from the original)
    if (r1 == 0) {
        r1 = 1u;
        *gptr<u8>(r0_1 + 0x14u) = u8(r1);  // (from the original)
    }
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0_1;
}

}  // namespace d_00602144
GUEST_EXPORT(0x00602144, d_00602144::f_00602144);

// f_00602350: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00602350 {

struct __attribute__((packed)) Object_00602350_0 {
    u8 unknown_0[0x14];  // (not used here)
    u8 byte_14;
    u8 unknown_15[0x3];  // (not used here)
    u32 word_18;
};
GUEST_OFFSET(Object_00602350_0, byte_14, 0x14);  // (from the original)
GUEST_OFFSET(Object_00602350_0, word_18, 0x18);  // (from the original)


void f_00602350(gptr<Object_00602350_0> arg0, u32 r1, u32 r2) {
    if (r2 != 0 && r2 >> 0x1f == 0u) {  // (from the original)
        arg0->word_18 = u32(r2);
        arg0->byte_14 = u8(r1);
    }
    return;
}

}  // namespace d_00602350
GUEST_EXPORT(0x00602350, d_00602350::f_00602350);

// f_00602604: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00602604 {

struct __attribute__((packed)) Object_00602604_0 {
    u8 unknown_0[0x370];  // (not used here)
    u32 word_370;
    u32 word_374;
    u8 byte_378;
};
GUEST_OFFSET(Object_00602604_0, word_370, 0x370);  // (from the original)
GUEST_OFFSET(Object_00602604_0, word_374, 0x374);  // (from the original)
GUEST_OFFSET(Object_00602604_0, byte_378, 0x378);  // (from the original)


void f_00602604(gptr<Object_00602604_0> arg0, u32 r1, u32 r2) {
    arg0->word_374 = u32(r1);
    arg0->word_370 = u32(~0u);
    arg0->byte_378 = u8(r2);
    return;
}

}  // namespace d_00602604
GUEST_EXPORT(0x00602604, d_00602604::f_00602604);

// f_00602938: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00602938 {

struct __attribute__((packed)) Object_00602938_0 {
    u8 unknown_0[0x4];  // (not used here)
    u8 byte_4;
    u8 byte_5;
    u8 unknown_6[0x1a];  // (not used here)
    u8 byte_20;
    u8 unknown_21[0x327];  // (not used here)
    u32 word_348;
};
GUEST_OFFSET(Object_00602938_0, byte_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_00602938_0, byte_5, 0x5);  // (from the original)
GUEST_OFFSET(Object_00602938_0, byte_20, 0x20);  // (from the original)
GUEST_OFFSET(Object_00602938_0, word_348, 0x348);  // (from the original)

inline constexpr guest::Function<0x005fbc20, u32(u32, u32, u32, u32)> call_005fbc20;  // (from the original)

u32 f_00602938(gptr<Object_00602938_0> arg0, u32 r1) {
    u32 r0 = arg0.addr();
    u32 r1_1 = 0;
    u32 r0_1 = 0;
    arg0->byte_20 = u8(r1);
    arg0->byte_5 = u8(1u);
    r1_1 = u32(arg0->byte_4);
    if (r1_1 != 8u) {
        guest::cpu()->r[1] = r1_1;
        return r0;
    }
    r0_1 = arg0->word_348;
    return call_005fbc20(r0_1, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_00602938
GUEST_EXPORT(0x00602938, d_00602938::f_00602938);

// f_00602a90: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00602a90 {

struct __attribute__((packed)) Object_00602a90_0 {
    u8 unknown_0[0x1c];  // (not used here)
    u8 byte_1c;
    u8 unknown_1d[0x323];  // (not used here)
    u32 word_340;
    u8 unknown_344[0x4];  // (not used here)
    u32 word_348;
    u8 unknown_34c[0x1c];  // (not used here)
    u8 byte_368;
    u8 unknown_369[0x3];  // (not used here)
    u32 word_36c;
};
GUEST_OFFSET(Object_00602a90_0, byte_1c, 0x1c);  // (from the original)
GUEST_OFFSET(Object_00602a90_0, word_340, 0x340);  // (from the original)
GUEST_OFFSET(Object_00602a90_0, word_348, 0x348);  // (from the original)
GUEST_OFFSET(Object_00602a90_0, byte_368, 0x368);  // (from the original)
GUEST_OFFSET(Object_00602a90_0, word_36c, 0x36c);  // (from the original)

inline guest::global<u32, 0x00602b30> global_00602b30;  // (from the original)
inline constexpr guest::Function<0x002fb378, u32(u32, u32, u32, u32)> call_002fb378;  // (from the original)
inline constexpr guest::Function<0x005d60d4, u32(u32, u32, u32, u32)> call_005d60d4;  // (from the original)
inline constexpr guest::Function<0x006e5e94, u32(u32, u32, u32, u32)> call_006e5e94;  // (from the original)

u32 f_00602a90(gptr<Object_00602a90_0> arg0, u32 r1, u32 r2, float S0) {
    u32 r0 = arg0.addr();
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    float S0_1 = 0;
    u32 r5_1 = 0;
    float S0_2 = 0;
    u32 r0_3 = 0;
    u32 r1_2 = 0;
    u32 r2_2 = 0;
    float S0_3 = 0;
    u32 r0_4 = 0;
    u32 r5_2 = 0;
    u32 r0_5 = 0;
    float S0_4 = 0;
    u32 r1_3 = 0;
    u32 r2_3 = 0;
    u32 r0_6 = 0;
    guest::cpu()->r[13] -= 0x18u;  // (from the original)
    *gptr<u8>(arg0->word_348 + 0xc8u) = u8(0u);  // (from the original)
    arg0->word_36c = u32(~0u);
    arg0->byte_368 = u8(0u);
    arg0->byte_1c = u8(0u);
    r0_1 = arg0->word_340 + 0x14u;  // (from the original)
    guest::cpu()->s[0] = S0;
    r0_2 = call_006e5e94(r0_1, 0u, r2, guest::cpu()->r[3]);
    r1_1 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    S0_1 = guest::cpu()->s[0];
    if (r1 != 0) {
        r5_1 = *gptr<u32>(r0 + 0x348u);  // (from the original)
        S0_2 = std::bit_cast<float>(*global_00602b30);
        *gptr<u32>(r5_1 + 0xa4u) = u32(0u);  // (from the original)
        *gptr<u32>(r5_1 + 0xa8u) = u32(0u);  // (from the original)
        *gptr<u32>(r5_1 + 0xacu) = u32(std::bit_cast<u32>(S0_2));  // (from the original)
        *gptr<u8>(r5_1 + 0xcbu) = u8(1u);  // (from the original)
        *gptr<u8>(r5_1 + 0xccu) = u8(1u);  // (from the original)
        *gptr<u8>(r5_1 + 0xcdu) = u8(0u);  // (from the original)
        r0_3 = *gptr<u32>(r5_1 + 0x90u);  // (from the original)
        guest::cpu()->s[0] = S0_2;
        call_005d60d4(r0_3, r1_1, r2_1, guest::cpu()->r[3]);
        r1_2 = guest::cpu()->r[1];
        r2_2 = guest::cpu()->r[2];
        S0_3 = guest::cpu()->s[0];
        r0_4 = *gptr<u32>(r5_1 + 0x94u);  // (from the original)
        guest::cpu()->s[0] = S0_3;
        r0_2 = call_005d60d4(r0_4, r1_2, r2_2, guest::cpu()->r[3]);
        r1_1 = guest::cpu()->r[1];
        r2_1 = guest::cpu()->r[2];
        S0_1 = guest::cpu()->s[0];
        *gptr<u8>(r5_1 + 0x1f5u) = u8(0u);  // (from the original)
        *gptr<u8>(r5_1 + 0x1f6u) = u8(0u);  // (from the original)
    }
    r5_2 = *gptr<u32>(r0);
    guest::cpu()->s[0] = S0_1;
    r0_5 = call_002fb378(r0_2, r1_1, r2_1, guest::cpu()->r[3]);
    S0_4 = guest::cpu()->s[0];
    r1_3 = *gptr<u32>(r0_5);
    r2_3 = *gptr<u32>(r0_5 + 4);
    *gptr<u32>(r5_2 + 8u) = u32(*gptr<u32>(r0_5 + 8u));
    *gptr<u32>(r5_2) = u32(r1_3);
    *gptr<u32>(r5_2 + 4) = u32(r2_3);
    r0_6 = *gptr<u32>(r0 + 0x358u);  // (from the original)
    *gptr<u8>(r0_6 + 5u) = u8(1u);
    guest::cpu()->r[13] += 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1_3;
    guest::cpu()->s[0] = S0_4;
    return r0_6;
}

}  // namespace d_00602a90
GUEST_EXPORT(0x00602a90, d_00602a90::f_00602a90);

// f_00603598: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00603598 {

inline guest::global<u32, 0x0094ee44> global_0094ee44;  // (from the original)
inline constexpr guest::Function<0x0028499c, u32(u32, u32, u32, u32)> call_0028499c;  // (from the original)
inline constexpr guest::Function<0x00300768, u32(u32, u32, u32, u32)> call_00300768;  // (from the original)
inline constexpr guest::Function<0x0071ad3c, u32(u32, u32, u32, u32)> call_0071ad3c;  // (from the original)
inline constexpr guest::Function<0x0075cf88, u32(u32, u32, u32, u32)> call_0075cf88;  // (from the original)

u32 f_00603598(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r13 = guest::cpu()->r[13];
    u32 r4_1 = 0;
    u32 r5_1 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r6_1 = 0;
    u32 r1_1 = 0;
    u32 r0_1 = 0;
    u32 zf_1 = 0;
    u32 r1_2 = 0;
    u32 r0_2 = 0;
    u32 r5_2 = 0;
    u32 r1_3 = 0;
    u32 r0_3 = 0;
    u32 r2_2 = 0;
    u32 r0_4 = 0;
    u32 zf_2 = 0;
    u32 r3_2 = 0;
    r4_1 = r0;
    r13 = r13 - 0x18u;  // (from the original)
    r5_1 = r1;
    r0 = *global_0094ee44;
    if (r0 == 0) {
        r13 = r13 + 0x18u;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    guest::cpu()->r[13] = r13;
    r0 = call_0028499c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    if (r0 == 0) {
        r13 = r13 + 0x18u;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    r0 = *global_0094ee44;
    r1 = u32(*gptr<u8>(r0 + 0x13u));  // (from the original)
    if (r1 == 0) {
        r13 = r13 + 0x18u;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    r6_1 = ~0u;
    if (r5_1 != 3u) {
        if (r5_1 != 5u) {
            r13 = r13 + 0x18u;  // (from the original)
            guest::cpu()->r[1] = r1;
            guest::cpu()->r[13] = r13;
            return r0;
        }
        r1_1 = u32(*gptr<u8>(r0 + 0x14u));  // (from the original)
        if (r1_1 != 2u) {
            goto L_6036c0;
        }
        goto L_6036ac;
    }
    r0_1 = u32(*gptr<u8>(r0 + 0x14u));  // (from the original)
    zf_1 = r0_1 == 1u;
    if (!zf_1) {
        zf_1 = r0_1 == 2u;
    }
    if (zf_1) {
        goto L_603658;
    }
    r1_2 = *gptr<u32>(r4_1 + 0x35cu);  // (from the original)
    r0_2 = r1_2 + 0x20u;  // (from the original)
    r5_2 = *gptr<u32>(r1_2 + 4u);
    r1_3 = r13;
    *gptr<u32>(r13 + 4u) = u32(0x894ba4u);  // (from the original)
    *gptr<u32>(r13) = u32(0x9047f8u);  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_3 = call_00300768(r0_2, r1_3, 0x894ba4u, 0x9047f8u);  // (from the original)
    r2_2 = guest::cpu()->r[2];
    if (r0_3 != 0) {
        if (r5_2 == 0x16u) {  // (from the original)
            r0_4 = 1u;
            goto L_603648;
        }
    }
    r0_4 = 0u;
L_603648:;
    zf_2 = r0_4 == 0;
    if (zf_2) {
        zf_2 = *gptr<u32>(r4_1 + 0xcu) == 0;  // (from the original)
    }
    if (zf_2) {
        goto L_603674;
    }
L_603658:;
    r1 = 1u;
    *gptr<u32>(r4_1 + 0x374u) = u32(r1);  // (from the original)
    r0 = 0u;
    *gptr<u32>(r4_1 + 0x370u) = u32(r6_1);  // (from the original)
    *gptr<u8>(r4_1 + 0x378u) = u8(r0);  // (from the original)
    r13 = r13 + 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
L_603674:;
    guest::cpu()->r[13] = r13;
    r0 = call_0075cf88(r4_1, 1u, r2_2, 1u);
    r1 = guest::cpu()->r[1];
    r3_2 = guest::cpu()->r[3];
    if (r0 == 0) {
        r13 = r13 + 0x18u;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    *gptr<u8>(r4_1 + 6u) = u8(0u);
    *gptr<u8>(r4_1 + 7u) = u8(r3_2);
    *gptr<u8>(r4_1 + 8u) = u8(0u);
    r13 = r13 + 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
L_6036ac:;
    guest::cpu()->r[13] = r13;
    r0 = call_0071ad3c(r0, r1_1, r2_1, r3_1);
    r1 = guest::cpu()->r[1];
    if (r0 == 0) {
        r13 = r13 + 0x18u;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return r0;
    }
L_6036c0:;
    *gptr<u32>(r4_1 + 0x374u) = u32(1u);  // (from the original)
    *gptr<u32>(r4_1 + 0x370u) = u32(r6_1);  // (from the original)
    *gptr<u8>(r4_1 + 0x378u) = u8(1u);  // (from the original)
    r13 = r13 + 0x18u;  // (from the original)
    guest::cpu()->r[1] = 1u;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_00603598
GUEST_EXPORT(0x00603598, d_00603598::f_00603598);

// f_00603a58: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00603a58 {

struct __attribute__((packed)) Object_00603a58_0 {
    u8 unknown_0[0xc];  // (not used here)
    u32 word_c;
    u8 unknown_10[0x11];  // (not used here)
    u8 byte_21;
    u8 unknown_22[0x32a];  // (not used here)
    u32 word_34c;
};
GUEST_OFFSET(Object_00603a58_0, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Object_00603a58_0, byte_21, 0x21);  // (from the original)
GUEST_OFFSET(Object_00603a58_0, word_34c, 0x34c);  // (from the original)

inline constexpr guest::Function<0x005e4a28, u32(u32, u32, u32, u32)> call_005e4a28;  // (from the original)

u32 f_00603a58(gptr<Object_00603a58_0> arg0, u32 r1, u32 r2) {
    u32 r3_1 = 0;
    u32 r4_1 = 0;
    u32 r1_1 = 0;
    u32 r0_1 = 0;
    u32 nf_1 = 0;
    u32 vf_1 = 0;
    u32 res_1 = 0;
    guest::cpu()->r[13] -= 0x18u;  // (from the original)
    arg0->byte_21 = u8(1u);
    r3_1 = arg0->word_c | 1u;
    arg0->word_c = u32(r3_1);
    r4_1 = arg0->word_34c;
    call_005e4a28(r4_1, r1, r2, r3_1);
    r1_1 = guest::cpu()->r[1];
    r0_1 = 4u;
    nf_1 = r2 >> 0x1f;  // (from the original)
    vf_1 = (r2 & (r2 ^ r2)) >> 0x1f;  // (from the original)
    *gptr<u8>(r4_1 + 4u) = u8(r0_1);
    if (nf_1 == vf_1) {
        res_1 = r1 - r2;
        nf_1 = res_1 >> 0x1f;  // (from the original)
        vf_1 = ((r1 ^ r2) & (r1 ^ res_1)) >> 0x1f;  // (from the original)
    }
    *gptr<u32>(r4_1 + 8u) = u32(r1);
    if (nf_1 != vf_1) {
        r0_1 = 0u;
    }
    if (nf_1 == vf_1) {
        r0_1 = 2u;
        *gptr<u32>(r4_1 + 0xc0u) = u32(r2);  // (from the original)
    }
    *gptr<u8>(r4_1 + 0xc4u) = u8(r0_1);  // (from the original)
    *gptr<u8>(r4_1 + 0xc9u) = u8(1u);  // (from the original)
    guest::cpu()->r[13] += 0x18u;  // (from the original)
    return r0_1;
}

}  // namespace d_00603a58
GUEST_EXPORT(0x00603a58, d_00603a58::f_00603a58);

// f_00603ab0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00603ab0 {

struct __attribute__((packed)) Object_00603ab0_0 {
    u8 unknown_0[0xc];  // (not used here)
    u32 word_c;
    u8 unknown_10[0x11];  // (not used here)
    u8 byte_21;
    u8 unknown_22[0x32a];  // (not used here)
    u32 word_34c;
};
GUEST_OFFSET(Object_00603ab0_0, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Object_00603ab0_0, byte_21, 0x21);  // (from the original)
GUEST_OFFSET(Object_00603ab0_0, word_34c, 0x34c);  // (from the original)

inline constexpr guest::Function<0x005e4a28, u32(u32, u32, u32, u32)> call_005e4a28;  // (from the original)

u32 f_00603ab0(gptr<Object_00603ab0_0> arg0) {
    u32 r1_1 = 0;
    u32 r4_1 = 0;
    u32 r1_2 = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    arg0->byte_21 = u8(1u);
    r1_1 = arg0->word_c | 1u;
    arg0->word_c = u32(r1_1);
    r4_1 = arg0->word_34c;
    call_005e4a28(r4_1, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_2 = guest::cpu()->r[1];
    *gptr<u8>(r4_1 + 4u) = u8(4u);
    *gptr<u8>(r4_1 + 0xc9u) = u8(1u);  // (from the original)
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1_2;
    return 4u;
}

}  // namespace d_00603ab0
GUEST_EXPORT(0x00603ab0, d_00603ab0::f_00603ab0);

// f_006045f8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006045f8 {

inline constexpr guest::Function<0x0056b038, u32(u32, u32, u32, u32)> call_0056b038;  // (from the original)

u32 f_006045f8(u32 r0, u32 r1, u32 r2_unused, u32 r3) {
    u32 r2 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r0_1 = 0;
    u32 zf_1 = 0;
    u32 cf_1 = 0;
    u32 r0_2 = 0;
    u32 r3_1 = 0;
    u32 r0_3 = 0;
    u32 r3_2 = 0;
    u32 r1_1 = 0;
    u32 r0_4 = 0;
    u32 r0_5 = 0;
    u32 r0_6 = 0;
    u32 res_1 = 0;
    guest::cpu()->r[13] -= 8u;
    r4 = r0;
    if (r0 - 0x30u <= 9u) {  // (from the original)
        r4 = r4 + 0x27u;  // (from the original)
        goto L_604764;
    }
    if (r4 - 0x3041u <= 0x55u) {  // (from the original)
        r4 = r4 - 0x3040u;  // (from the original)
        goto L_604764;
    }
    r0_1 = r4 - 0x30a1u;  // (from the original)
    zf_1 = r0_1 == 0x55u;  // (from the original)
    cf_1 = r0_1 >= 0x55u;  // (from the original)
    if (cf_1 && !zf_1) {
        r0_1 = r4 - 0x61u;  // (from the original)
    }
    if (!cf_1 || zf_1) {
        r4 = r4 - 0x30a0u;  // (from the original)
    }
    if (cf_1 && !zf_1) {
        zf_1 = r0_1 == 0x19u;  // (from the original)
        cf_1 = r0_1 >= 0x19u;  // (from the original)
    }
    if (!cf_1 || zf_1) {
        goto L_604764;
    }
    if (r4 - 0x41u <= 0x19u) {  // (from the original)
        r4 = r4 + 0x20u;  // (from the original)
        goto L_604764;
    }
    if (r4 - 0xff41u <= 0x19u) {  // (from the original)
        r4 = r4 - 0xfee0u;  // (from the original)
        goto L_604764;
    }
    if (r4 - 0xff21u <= 0x19u) {  // (from the original)
        r4 = r4 - 0xfec0u;  // (from the original)
        goto L_604764;
    }
    if (r4 != 0xf7u) {  // (from the original)
        if (r4 - 0xe0u <= 0x1eu) {  // (from the original)
            r4 = r4 - 0x65u;  // (from the original)
            goto L_604764;
        }
    }
    if (r4 != 0xd7u) {  // (from the original)
        if (r4 - 0xc0u <= 0x1eu) {  // (from the original)
            r4 = r4 - 0x45u;  // (from the original)
            goto L_604764;
        }
    }
    if (r4 - 0x3b1u <= 0x18u) {  // (from the original)
        r4 = r4 - 0x305u;  // (from the original)
        goto L_604764;
    }
    if (r4 - 0x391u <= 0x18u) {  // (from the original)
        r4 = r4 - 0x2e5u;  // (from the original)
        goto L_604764;
    }
    r0_2 = call_0056b038(r4, 0xac00u, 0xd7a3u, r3);  // (from the original)
    r1 = guest::cpu()->r[1];
    r3_1 = guest::cpu()->r[3];
    if (r0_2 != 0) {
        goto L_604764;
    }
    r0_3 = call_0056b038(r4, 0x1100u, 0x11f9u, r3_1);  // (from the original)
    r1 = guest::cpu()->r[1];
    r3_2 = guest::cpu()->r[3];
    if (r0_3 != 0) {
        goto L_604764;
    }
    r1_1 = 0x318eu - 0x5du;  // (from the original)
    r0_4 = call_0056b038(r4, r1_1, 0x318eu, r3_2);  // (from the original)
    r1 = guest::cpu()->r[1];
    if (r0_4 != 0) {
        goto L_604764;
    }
    r1 = 1u;
    r0 = 0x892218u;  // (from the original)
    r2 = 1u + u32(s32(0x892218u + 0xb0u - 0x892218u) >> 2);  // (from the original)
L_604754:;
    if (u32(*gptr<u16>(r0)) != r4) {
        goto L_604778;
    }
    r4 = u32(*gptr<u16>(r0 + 2u));
L_604764:;
    if (r4 < 0x10000u) {  // (from the original)
        r0_5 = uxth(r4);
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        return r0_5;
    }
    r0_6 = uxth(0xdau);  // (from the original)
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1;
    return r0_6;
L_604778:;
    r1 = r1 + 1u;
    res_1 = r2 - r1;
    r0 = r0 + 4u;
    if (res_1 != 0 && res_1 >> 0x1f == ((r2 ^ r1) & (r2 ^ res_1)) >> 0x1f) {  // (from the original)
        guest::preempt();
        goto L_604754;
    }
    r0_6 = uxth(0xdau);  // (from the original)
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1;
    return r0_6;
}

}  // namespace d_006045f8
GUEST_EXPORT(0x006045f8, d_006045f8::f_006045f8);

// f_00605068: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00605068 {

inline guest::global<u32, 0x0088069c> global_0088069c;  // (from the original)
inline constexpr guest::Function<0x005c33cc, u32(u32, u32, u32, u32)> call_005c33cc;  // (from the original)
inline constexpr guest::Function<0x006e9be8, u32(u32, u32, u32, u32)> call_006e9be8;  // (from the original)
inline constexpr guest::Function<0x007521a4, u32(u32, u32, u32, u32)> call_007521a4;  // (from the original)

u32 f_00605068(u32 r0, u32 r1_unused, u32 r2, u32 r3, float S0) {
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    float S0_1 = 0;
    u32 r0_2 = 0;
    u32 r2_2 = 0;
    float S0_2 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r1_1 = 0;
    float S0_3 = 0;
    r13 = r13 - 0x10u;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    r0_1 = call_005c33cc(4u, 0u, r2, r3);
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    S0_1 = guest::cpu()->s[0];
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_1;
    r0_2 = call_007521a4(r0, r0_1, r2_1, r3_1);
    *gptr<u32>(r13 + 4u) = u32(r0_2);
    *gptr<u32>(r13) = u32(0u);
    r2_2 = r13 + 4u;
    S0_2 = std::bit_cast<float>(*global_0088069c);
    r0_3 = r0 + 0x78u;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_2;
    r0_4 = call_006e9be8(r0_3, 0u, r2_2, 0x9537c2u);  // (from the original)
    r1_1 = guest::cpu()->r[1];
    S0_3 = guest::cpu()->s[0];
    r13 = r13 + 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1_1;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_3;
    return r0_4;
}

}  // namespace d_00605068
GUEST_EXPORT(0x00605068, d_00605068::f_00605068);

// f_006050c4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006050c4 {

inline constexpr guest::Function<0x005c1198, u32(u32, u32, u32, u32)> call_005c1198;  // (from the original)
inline constexpr guest::Function<0x005c33cc, u32(u32, u32, u32, u32)> call_005c33cc;  // (from the original)
inline constexpr guest::Function<0x007521a4, u32(u32, u32, u32, u32)> call_007521a4;  // (from the original)

u32 f_006050c4(u32 r0, u32 r1_unused, u32 r2, u32 r3) {
    u32 r13 = guest::cpu()->r[13];
    u32 r4_1 = 0;
    u32 r0_1 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r1_1 = 0;
    r13 = r13 - 0x18u;  // (from the original)
    r4_1 = r13 + 4u;
    guest::cpu()->r[13] = r13;
    r0_1 = call_005c33cc(4u, 0u, r2, r3);
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0_2 = call_007521a4(r0, r0_1, r2_1, r3_1);
    *gptr<u16>(r13 + 4u) = u16(r0_2 - 0x8000u);  // (from the original)
    *gptr<u32>(r13) = u32(0u);
    guest::cpu()->r[13] = r13;
    r0_3 = call_005c1198(r4_1, 1u, 9u, 0u);
    r1_1 = guest::cpu()->r[1];
    r13 = r13 + 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1_1;
    guest::cpu()->r[13] = r13;
    return r0_3;
}

}  // namespace d_006050c4
GUEST_EXPORT(0x006050c4, d_006050c4::f_006050c4);

// f_0060511c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0060511c {

inline guest::global<u8, 0x00950130> global_00950130;  // (from the original)
inline guest::global<u32, 0x0095014c> global_0095014c;  // (from the original)

u32 f_0060511c(u32 r0_unused, u32 r1, u32 r2) {
    if (*global_0095014c != 0) {
        return 0u;
    }
    if (u32(*global_00950130) == 0xa5u) {  // (from the original)
        *global_0095014c = u32(r2);
        *global_00950130 = u8(r1);
        return 1u;
    }
    return 0u;
}

}  // namespace d_0060511c
GUEST_EXPORT(0x0060511c, d_0060511c::f_0060511c);

// f_00605514: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00605514 {

struct __attribute__((packed)) Object_00605514_0 {
    u32 word_0;
};
GUEST_OFFSET(Object_00605514_0, word_0, 0x0);  // (from the original)

inline constexpr guest::Function<0x001db118, u32(u32, u32, u32, u32)> call_001db118;  // (from the original)

u32 f_00605514(gptr<Object_00605514_0> arg0, u32 r1) {
    u32 r0 = arg0.addr();
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r1_1 = 0;
    guest::cpu()->r[13] -= 8u;
    r0_1 = arg0->word_0;
    r0_2 = call_001db118(r0_1, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_1 = guest::cpu()->r[1];
    if (r0_2 != 0) {
        r1_1 = 1u;
        *gptr<u8>(r0 + 5u) = u8(r1_1);
    }
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1_1;
    return r0_2;
}

}  // namespace d_00605514
GUEST_EXPORT(0x00605514, d_00605514::f_00605514);

// f_00605534: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00605534 {


u32 f_00605534(u32 r0, u32 r1) {
    u32 r2_1 = 0;
    r2_1 = *gptr<u32>(0x84531cu + (r0 << 2));  // (from the original)
    return guest::call_address<u32>(r2_1, r1, r1, r2_1, guest::cpu()->r[3]);
}

}  // namespace d_00605534
GUEST_EXPORT(0x00605534, d_00605534::f_00605534);

// f_00605584: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00605584 {

inline constexpr guest::Function<0x001db214, u32(u32, u32, u32, u32)> call_001db214;  // (from the original)
inline constexpr guest::Function<0x001e5894, u32(u32, u32, u32, u32)> call_001e5894;  // (from the original)

u32 f_00605584(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r3_1 = 0;
    u32 r0_3 = 0;
    u32 r1_1 = 0;
    r13 = r13 - 0x20u;  // (from the original)
    r0_1 = r13;
    guest::cpu()->r[13] = r13;
    call_001e5894(r0_1, r3, r2, r3);
    r0_2 = *gptr<u32>(r0);
    r3_1 = r13;
    guest::cpu()->r[13] = r13;
    r0_3 = call_001db214(r0_2, r1, r2, r3_1);
    r1_1 = guest::cpu()->r[1];
    r13 = r13 + 0x20u;  // (from the original)
    guest::cpu()->r[1] = r1_1;
    guest::cpu()->r[13] = r13;
    return r0_3;
}

}  // namespace d_00605584
GUEST_EXPORT(0x00605584, d_00605584::f_00605584);

// f_006055c0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006055c0 {

struct __attribute__((packed)) Object_006055c0_0 {
    u32 word_0;
};
GUEST_OFFSET(Object_006055c0_0, word_0, 0x0);  // (from the original)

inline constexpr guest::Function<0x001db3d4, u32(u32, u32, u32, u32)> call_001db3d4;  // (from the original)

u32 f_006055c0(gptr<Object_006055c0_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r0_1 = 0;
    guest::cpu()->r[13] -= 8u;
    r0_1 = arg0->word_0;
    call_001db3d4(r0_1, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    *gptr<u8>(r0 + 4u) = u8(0u);
    *gptr<u8>(r0 + 5u) = u8(0u);
    guest::cpu()->r[13] += 8u;
    return 0u;
}

}  // namespace d_006055c0
GUEST_EXPORT(0x006055c0, d_006055c0::f_006055c0);

// f_006055e0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006055e0 {


u32 f_006055e0(u32 r0) {
    u32 r0_1 = 0;
    r0_1 = *gptr<u32>(0x94e4c4u + (r0 << 2));  // (from the original)
    guest::cpu()->r[1] = 0x94e4c4u;  // (from the original)
    return r0_1;
}

}  // namespace d_006055e0
GUEST_EXPORT(0x006055e0, d_006055e0::f_006055e0);

// f_006055f0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006055f0 {


u32 f_006055f0(u32 r0) {
    u32 zf_1 = 0;
    u32 cf_1 = 0;
    zf_1 = r0 == 0x108u;  // (from the original)
    cf_1 = r0 >= 0x108u;  // (from the original)
    if (!cf_1 || zf_1) {
        r0 = 1u;
    }
    if (cf_1 && !zf_1) {
        r0 = 0u;
    }
    return r0;
}

}  // namespace d_006055f0
GUEST_EXPORT(0x006055f0, d_006055f0::f_006055f0);

// f_00605600: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00605600 {


u32 f_00605600(u32 r0) {
    u32 r0_1 = 0;
    if (r0 - 0x109u >= 0x60u) {  // (from the original)
        r0_1 = 0u;
    } else {
        r0_1 = 1u;
    }
    return r0_1;
}

}  // namespace d_00605600
GUEST_EXPORT(0x00605600, d_00605600::f_00605600);

// f_00605618: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00605618 {


u32 f_00605618(u32 r0) {
    u32 r0_1 = 0;
    r0_1 = u32(*gptr<u8>(0x94ea68u + r0));  // (from the original)
    guest::cpu()->r[1] = 0x94ea68u;  // (from the original)
    return r0_1;
}

}  // namespace d_00605618
GUEST_EXPORT(0x00605618, d_00605618::f_00605618);

// f_00605628: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00605628 {


u32 f_00605628(u32 r0) {
    u32 r0_1 = 0;
    r0_1 = u32(*gptr<u8>(0x94ebd1u + r0));  // (from the original)
    guest::cpu()->r[1] = 0x94ebd1u;  // (from the original)
    return r0_1;
}

}  // namespace d_00605628
GUEST_EXPORT(0x00605628, d_00605628::f_00605628);

// f_00605ca0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00605ca0 {

inline guest::global<u32, 0x0084607c> global_0084607c;  // (from the original)
inline constexpr guest::Function<0x00131280, u32(u32, u32, u32, u32)> call_00131280;  // (from the original)
inline constexpr guest::Function<0x001320cc, u32(u32, u32, u32, u32)> call_001320cc;  // (from the original)
inline constexpr guest::Function<0x002fc20c, u32(u32, u32, u32, u32)> call_002fc20c;  // (from the original)

u32 f_00605ca0(u32 r0, u32 r1, u32 r2_unused, u32 r3) {
    u32 r6 = guest::cpu()->r[6];
    u32 r13 = guest::cpu()->r[13];
    u32 r5_1 = 0;
    u32 r0_1 = 0;
    u32 r3_1 = 0;
    u32 r0_2 = 0;
    u32 r3_2 = 0;
    u32 ea_1 = 0;
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 ea_2 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    r13 = r13 - 0x10;  // (from the original)
    r5_1 = r0;
    r6 = 0x94ed4cu;  // (from the original)
    r0 = *gptr<u32>(r6);
    if (r0 != 0) {
        r13 = r13 + 0x10;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    guest::cpu()->r[13] = r13;
    r0_1 = call_00131280(0x34u, r5_1, 4u, r3);  // (from the original)
    r1 = guest::cpu()->r[1];
    r3_1 = guest::cpu()->r[3];
    if (r0_1 == 0) {
        goto L_605d28;
    }
    guest::cpu()->r[13] = r13;
    r0_2 = call_001320cc(r0_1, r5_1, 3u, r3_1);
    r3_2 = r0_1 + 0x18u;  // (from the original)
    *gptr<u32>(r0_2) = u32(0x90ab24u);  // (from the original)
    ea_1 = r6 + 4u;
    *gptr<u32>(ea_1) = u32(r0_2);
    r1_1 = *global_0084607c;
    r2_1 = *gptr<u32>(0x84607cu + 4);  // (from the original)
    *gptr<u32>(r3_2) = u32(r1_1);
    *gptr<u32>(r3_2 + 4) = u32(r2_1);
    ea_2 = r0_1 + 0x10u;  // (from the original)
    *gptr<u32>(ea_2) = u32(0x905e94u);  // (from the original)
    *gptr<u32>(ea_2 + 4) = u32(r0_1);
    *gptr<u32>(r0_1 + 0x20u) = u32(0u);  // (from the original)
    *gptr<u32>(r0_1 + 0x24u) = u32(0u);  // (from the original)
    r0_3 = r0_1 + 0x2cu;  // (from the original)
    *gptr<u8>(r0_1 + 0x28u) = u8(0u);  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_4 = call_002fc20c(r0_3, 0u, r2_1, r3_2);
    r1 = guest::cpu()->r[1];
    r0 = r0_4 - 0x2cu;  // (from the original)
L_605d20:;
    *gptr<u32>(r6) = u32(r0);
    r13 = r13 + 0x10;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
L_605d28:;
    r0 = 0u;
    *gptr<u32>(r6 + 4u) = u32(r0);
    guest::preempt();
    goto L_605d20;
}

}  // namespace d_00605ca0
GUEST_EXPORT(0x00605ca0, d_00605ca0::f_00605ca0);

// f_00605d44: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00605d44 {

inline guest::global<u32, 0x00952c3c> global_00952c3c;  // (from the original)
inline guest::global<u32, 0x009c9fa8> global_009c9fa8;  // (from the original)
inline constexpr guest::Function<0x001e885c, u32(u32, u32, u32, u32)> call_001e885c;  // (from the original)
inline constexpr guest::Function<0x002f74c8, u32(u32, u32, u32, u32)> call_002f74c8;  // (from the original)
inline constexpr guest::Function<0x003505c0, u32(u32, u32, u32, u32)> call_003505c0;  // (from the original)
inline constexpr guest::Function<0x005198b0, u32(u32, u32, u32, u32)> call_005198b0;  // (from the original)
inline constexpr guest::Function<0x005cec18, u32(u32, u32, u32, u32)> call_005cec18;  // (from the original)
inline constexpr guest::Function<0x005ced94, u32(u32, u32, u32, u32)> call_005ced94;  // (from the original)
inline constexpr guest::Function<0x006a8a0c, u32(u32, u32, u32, u32)> call_006a8a0c;  // (from the original)
inline constexpr guest::Function<0x006a8b34, u32(u32, u32, u32, u32)> call_006a8b34;  // (from the original)

u32 f_00605d44(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r0_2 = 0;
    u32 r1_2 = 0;
    u32 r2_2 = 0;
    u32 r3_2 = 0;
    u32 r0_3 = 0;
    u32 r2_3 = 0;
    u32 r3_3 = 0;
    u32 r1_3 = 0;
    u32 r0_4 = 0;
    u32 r1_4 = 0;
    u32 r0_5 = 0;
    u32 r1_5 = 0;
    u32 r2_4 = 0;
    u32 r3_4 = 0;
    u32 r0_6 = 0;
    u32 r1_6 = 0;
    u32 r2_5 = 0;
    u32 r3_5 = 0;
    u32 r0_7 = 0;
    u32 r1_7 = 0;
    *gptr<u32>(r13 + 0xffffffe8u) = u32(r3);  // (from the original)
    r13 = r13 - 0x18;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_1 = call_005ced94(r0, r1, r2, r3);
    r1_1 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    if (r0_1 != 0) {
        guest::cpu()->r[13] = r13;
        r0_2 = call_005cec18(r0_1, r1_1, r2_1, r3_1);
        r1_2 = guest::cpu()->r[1];
        r2_2 = guest::cpu()->r[2];
        r3_2 = guest::cpu()->r[3];
    } else {
        guest::cpu()->r[13] = r13;
        r0_2 = call_003505c0(r0_1, r1_1, r2_1, r3_1);
        r1_2 = guest::cpu()->r[1];
        r2_2 = guest::cpu()->r[2];
        r3_2 = guest::cpu()->r[3];
    }
    if (r0_2 != 0) {
        guest::cpu()->r[13] = r13;
        r0_3 = call_002f74c8(r0_2, r1_2, r2_2, r3_2);
        r2_3 = guest::cpu()->r[2];
        r3_3 = guest::cpu()->r[3];
        if (r0_3 != 0x99u) {  // (from the original)
            r1_3 = *global_00952c3c;
            guest::cpu()->r[13] = r13;
            call_006a8a0c(0x9c9f80u, r1_3, r2_3, r3_3);  // (from the original)
        }
        *gptr<u32>(r13) = u32(0x198eu);  // (from the original)
        r0_4 = *global_009c9fa8;
        r1_4 = *gptr<u32>(0x9c9fa8u + 4);  // (from the original)
        guest::cpu()->r[13] = r13;
        r0_5 = call_001e885c(r0_4, r1_4, 2u, 0x22u);  // (from the original)
        r1_5 = guest::cpu()->r[1];
        r2_4 = guest::cpu()->r[2];
        r3_4 = guest::cpu()->r[3];
        guest::cpu()->r[13] = r13;
        r0_6 = call_002f74c8(r0_5, r1_5, r2_4, r3_4);
        r1_6 = guest::cpu()->r[1];
        r2_5 = guest::cpu()->r[2];
        r3_5 = guest::cpu()->r[3];
        if (r0_6 != 0x99u) {  // (from the original)
            guest::cpu()->r[13] = r13;
            r0_6 = call_006a8b34(0x9c9f80u, r1_6, r2_5, r3_5);  // (from the original)
            r2_5 = guest::cpu()->r[2];
            r3_5 = guest::cpu()->r[3];
        }
        if (r0_5 == 0) {
            goto L_605e10;
        }
        if (r0_5 == 1u) {
            goto L_605e4c;
        }
        if (r0_5 == 2u) {
            goto L_605e60;
        }
        if (r0_5 == 3u) {
            goto L_605e74;
        }
        *gptr<u8>(r0 + 0x28u) = u8(0x84u);  // (from the original)
        *gptr<u32>(r0 + 0x24u) = u32(0u);  // (from the original)
        r13 = r13 + 0x18;  // (from the original)
        guest::cpu()->r[1] = 0u;
        guest::cpu()->r[13] = r13;
        return r0_6;
    }
    *gptr<u8>(r0 + 0x28u) = u8(0x80u);  // (from the original)
    *gptr<u32>(r0 + 0x24u) = u32(0x76bfu);  // (from the original)
    r13 = r13 + 0x18;  // (from the original)
    guest::cpu()->r[1] = 0x76bfu;  // (from the original)
    guest::cpu()->r[13] = r13;
    return r0_2;
L_605e10:;
    guest::cpu()->r[13] = r13;
    r0_7 = call_005198b0(0x198eu, 0x100000u, r2_5, r3_5);  // (from the original)
    r1_7 = guest::cpu()->r[1];
    if (r0_7 != 0) {
        *gptr<u8>(r0 + 0x28u) = u8(0u);  // (from the original)
        *gptr<u32>(r0 + 0x24u) = u32(0u);  // (from the original)
        r13 = r13 + 0x18;  // (from the original)
        guest::cpu()->r[1] = r1_7;
        guest::cpu()->r[13] = r13;
        return 0u;
    }
    *gptr<u8>(r0 + 0x28u) = u8(0x85u);  // (from the original)
    *gptr<u32>(r0 + 0x24u) = u32(0u);  // (from the original)
    r13 = r13 + 0x18;  // (from the original)
    guest::cpu()->r[1] = 0u;
    guest::cpu()->r[13] = r13;
    return r0_7;
L_605e4c:;
    *gptr<u8>(r0 + 0x28u) = u8(0x81u);  // (from the original)
    *gptr<u32>(r0 + 0x24u) = u32(0u);  // (from the original)
    r13 = r13 + 0x18;  // (from the original)
    guest::cpu()->r[1] = 0u;
    guest::cpu()->r[13] = r13;
    return r0_6;
L_605e60:;
    *gptr<u8>(r0 + 0x28u) = u8(0x82u);  // (from the original)
    *gptr<u32>(r0 + 0x24u) = u32(0u);  // (from the original)
    r13 = r13 + 0x18;  // (from the original)
    guest::cpu()->r[1] = 0u;
    guest::cpu()->r[13] = r13;
    return r0_6;
L_605e74:;
    *gptr<u8>(r0 + 0x28u) = u8(0x83u);  // (from the original)
    *gptr<u32>(r0 + 0x24u) = u32(0u);  // (from the original)
    r13 = r13 + 0x18;  // (from the original)
    guest::cpu()->r[1] = 0u;
    guest::cpu()->r[13] = r13;
    return r0_6;
}

}  // namespace d_00605d44
GUEST_EXPORT(0x00605d44, d_00605d44::f_00605d44);

// f_00606704: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00606704 {

inline guest::global<u32, 0x0094e3c8> global_0094e3c8;  // (from the original)
inline guest::global<u32, 0x0094e4b8> global_0094e4b8;  // (from the original)
inline guest::global<u32, 0x0095362c> global_0095362c;  // (from the original)
inline constexpr guest::Function<0x0024ebc0, u32(u32, u32, u32, u32)> call_0024ebc0;  // (from the original)
inline constexpr guest::Function<0x002f74c8, u32(u32, u32, u32, u32)> call_002f74c8;  // (from the original)
inline constexpr guest::Function<0x0051fe30, u32(u32, u32, u32, u32)> call_0051fe30;  // (from the original)
inline constexpr guest::Function<0x00520584, u32(u32, u32, u32, u32)> call_00520584;  // (from the original)
inline constexpr guest::Function<0x00520a18, u32(u32, u32, u32, u32)> call_00520a18;  // (from the original)
inline constexpr guest::Function<0x005210a8, u32(u32, u32, u32, u32)> call_005210a8;  // (from the original)
inline constexpr guest::Function<0x00529cf4, u32(u32, u32, u32, u32)> call_00529cf4;  // (from the original)
inline constexpr guest::Function<0x00565fe8, u32(u32, u32, u32, u32)> call_00565fe8;  // (from the original)
inline constexpr guest::Function<0x00566044, u32(u32, u32, u32, u32)> call_00566044;  // (from the original)
inline constexpr guest::Function<0x00584074, u32(u32, u32, u32, u32)> call_00584074;  // (from the original)
inline constexpr guest::Function<0x0058afb4, u32(u32, u32, u32, u32)> call_0058afb4;  // (from the original)
inline constexpr guest::Function<0x0058d7fc, u32(u32, u32, u32, u32)> call_0058d7fc;  // (from the original)
inline constexpr guest::Function<0x00625cbc, u32(u32, u32, u32, u32)> call_00625cbc;  // (from the original)
inline constexpr guest::Function<0x00625fa8, u32(u32, u32, u32, u32)> call_00625fa8;  // (from the original)
inline constexpr guest::Function<0x006264fc, u32(u32, u32, u32, u32)> call_006264fc;  // (from the original)
inline constexpr guest::Function<0x006a5b88, u32(u32, u32, u32, u32)> call_006a5b88;  // (from the original)
inline constexpr guest::Function<0x006a5c00, u32(u32, u32, u32, u32)> call_006a5c00;  // (from the original)
inline constexpr guest::Function<0x006a5d0c, u32(u32, u32, u32, u32)> call_006a5d0c;  // (from the original)
inline constexpr guest::Function<0x006ce770, u32(u32, u32, u32, u32)> call_006ce770;  // (from the original)
inline constexpr guest::Function<0x006ceedc, u32(u32, u32, u32, u32)> call_006ceedc;  // (from the original)
inline constexpr guest::Function<0x006cef28, u32(u32, u32, u32, u32)> call_006cef28;  // (from the original)
inline constexpr guest::Function<0x007479b4, u32(u32, u32, u32, u32)> call_007479b4;  // (from the original)
inline constexpr guest::Function<0x00747a90, u32(u32, u32, u32, u32)> call_00747a90;  // (from the original)
inline constexpr guest::Function<0x0075dfe8, u32(u32, u32, u32, u32)> call_0075dfe8;  // (from the original)
inline constexpr guest::Function<0x0075e410, u32(u32, u32, u32, u32)> call_0075e410;  // (from the original)

u32 f_00606704(u32 r0, u32 r1, u32 r2) {
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r1_2 = 0;
    u32 res_1 = 0;
    u32 r0_2 = 0;
    u32 r1_3 = 0;
    u32 r2_2 = 0;
    u32 r1_4 = 0;
    u32 r0_3 = 0;
    u32 r1_5 = 0;
    u32 r2_3 = 0;
    u32 r0_4 = 0;
    u32 r0_5 = 0;
    u32 r2_4 = 0;
    u32 r0_6 = 0;
    u32 r0_7 = 0;
    u32 r2_5 = 0;
    u32 r0_8 = 0;
    u32 r0_9 = 0;
    u32 r2_6 = 0;
    u32 r0_10 = 0;
    u32 r0_11 = 0;
    u32 r2_7 = 0;
    u32 r0_12 = 0;
    u32 r0_13 = 0;
    u32 r2_8 = 0;
    u32 r0_14 = 0;
    u32 r0_15 = 0;
    u32 r5_1 = 0;
    u32 r0_16 = 0;
    u32 r0_17 = 0;
    u32 r2_9 = 0;
    u32 r0_18 = 0;
    u32 r0_19 = 0;
    u32 r2_10 = 0;
    u32 r0_20 = 0;
    u32 r2_11 = 0;
    u32 r0_21 = 0;
    u32 r0_22 = 0;
    u32 r2_12 = 0;
    u32 r0_23 = 0;
    u32 r2_13 = 0;
    u32 r0_24 = 0;
    u32 r1_6 = 0;
    u32 r2_14 = 0;
    u32 r0_25 = 0;
    u32 r2_15 = 0;
    u32 r0_26 = 0;
    u32 r0_27 = 0;
    u32 r2_16 = 0;
    u32 r0_28 = 0;
    u32 r2_17 = 0;
    u32 r0_29 = 0;
    u32 r0_30 = 0;
    u32 r0_31 = 0;
    u32 r1_7 = 0;
    u32 r0_32 = 0;
    u32 r1_8 = 0;
    u32 r2_18 = 0;
    u32 r0_33 = 0;
    u32 r1_9 = 0;
    u32 r0_34 = 0;
    guest::cpu()->r[13] -= 0x20u;  // (from the original)
    r0_1 = call_00529cf4(r0, r1, r2, guest::cpu()->r[3]);
    r1_1 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    if (r0_1 == 0) {
        goto L_6069a0;
    }
    r1_2 = u32(*gptr<u16>(0x9503bcu + 8u));  // (from the original)
    res_1 = r1_2 - 0xffffu;  // (from the original)
    if (res_1 == 0) {
        goto L_606878;
    }
    r0_2 = call_00565fe8(res_1, r1_2, r2_1, guest::cpu()->r[3]);
    r1_3 = guest::cpu()->r[1];
    r2_2 = guest::cpu()->r[2];
    if (r0_2 != 0) {
        call_0058d7fc(r0_2, r1_3, r2_2, guest::cpu()->r[3]);
        r1_4 = u32(*gptr<u8>(0x9503bcu + 5u));  // (from the original)
        r0_3 = u32(*gptr<u8>(0x9503bcu + 3u));  // (from the original)
        call_006a5d0c(r0_3, r1_4, 0u, guest::cpu()->r[3]);
        r1_5 = guest::cpu()->r[1];
        r2_3 = guest::cpu()->r[2];
        r0_4 = *gptr<u32>(0x9503bcu + 0x18u);  // (from the original)
        call_006a5c00(r0_4, r1_5, r2_3, guest::cpu()->r[3]);
        r1_1 = guest::cpu()->r[1];
        *gptr<u8>(0x9503bcu + 7u) = u8(1u);  // (from the original)
        goto L_60699c;
    }
    r0_5 = call_00566044(r0_2, r1_3, r2_2, guest::cpu()->r[3]);
    r1_1 = guest::cpu()->r[1];
    r2_4 = guest::cpu()->r[2];
    if (r0_5 == 0) {
        goto L_60699c;
    }
    *gptr<u8>(0x9503bcu + 7u) = u8(1u);  // (from the original)
    r1_1 = *global_0095362c;
    r0_6 = u32(*gptr<u8>(r1_1 + 0x1c0u));  // (from the original)
    if (r0_6 == 0) {
        goto L_606834;
    }
    r2_4 = u32(*gptr<u8>(*global_0094e3c8 + 0xfb0u));  // (from the original)
    if (r2_4 != 0) {
        goto L_606834;
    }
    if (r0_6 != 3u) {
        if (r0_6 == 5u) {
            goto L_6067e0;
        }
        if (r0_6 == 8u) {
            goto L_60680c;
        }
        goto L_60699c;
    }
    r0_7 = call_0075dfe8(r1_1, r1_1, r2_4, guest::cpu()->r[3]);
    r2_5 = guest::cpu()->r[2];
    r0_8 = *global_0095362c;
    call_00625fa8(r0_8, r0_7, r2_5, guest::cpu()->r[3]);
    r2_4 = guest::cpu()->r[2];
    r0_6 = *global_0095362c;
    r1_1 = 4u;
    *gptr<u8>(r0_6 + 0x1c0u) = u8(r1_1);  // (from the original)
    goto L_606834;
L_6067e0:;
    r0_1 = u32(*gptr<u8>(r1_1 + 0x1e3u));  // (from the original)
    if (r0_1 == 0) {
        goto L_6069a0;
    }
    r0_9 = call_0075dfe8(r1_1, r1_1, r2_4, guest::cpu()->r[3]);
    r2_6 = guest::cpu()->r[2];
    r0_10 = *global_0095362c;
    call_006264fc(r0_10, r0_9, r2_6, guest::cpu()->r[3]);
    r2_4 = guest::cpu()->r[2];
    r0_6 = *global_0095362c;
    r1_1 = 6u;
    goto L_606830;
L_60680c:;
    r0_11 = r1_1 + 0x1c0u;  // (from the original)
    r0_1 = call_0075e410(r0_11, r1_1, r2_4, guest::cpu()->r[3]);
    r1_1 = guest::cpu()->r[1];
    r2_7 = guest::cpu()->r[2];
    if (r0_1 == 0) {
        goto L_6069a0;
    }
    r0_12 = *global_0095362c;
    call_00625cbc(r0_12, r1_1, r2_7, guest::cpu()->r[3]);
    r2_4 = guest::cpu()->r[2];
    r0_6 = *global_0095362c;
    r1_1 = 9u;
L_606830:;
    *gptr<u8>(r0_6 + 0x1c0u) = u8(r1_1);  // (from the original)
L_606834:;
    r0_13 = call_002f74c8(r0_6, r1_1, r2_4, guest::cpu()->r[3]);
    r1_1 = guest::cpu()->r[1];
    r2_8 = guest::cpu()->r[2];
    if (r0_13 == 0x5bu) {  // (from the original)
        r0_14 = call_00584074(r0_13, r1_1, r2_8, guest::cpu()->r[3]);
        r0_15 = call_0058afb4(r0_14, 0xfu, 0x10000b7u, guest::cpu()->r[3]);  // (from the original)
        r1_1 = guest::cpu()->r[1];
        r2_8 = guest::cpu()->r[2];
        if (r0_15 != 0) {
            goto L_60699c;
        }
    }
    call_005210a8(r0, r1_1, r2_8, guest::cpu()->r[3]);
    r1_1 = guest::cpu()->r[1];
    goto L_60699c;
L_606878:;
    r5_1 = *gptr<u32>(r0 + 4u);
    r0_16 = u32(*gptr<u8>(r0 + 0x14u));  // (from the original)
    if (r0_16 != 0) {
        goto L_6069a4;
    }
    r0_17 = call_0051fe30(r0_16, r1_2, r2_1, guest::cpu()->r[3]);
    r2_9 = guest::cpu()->r[2];
    r0_18 = call_00747a90(r0_17, r5_1, r2_9, guest::cpu()->r[3]);
    r1_2 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    if (r0_18 == 0) {
        goto L_6069a4;
    }
    r0_19 = call_0051fe30(r0_18, r1_2, r2_1, guest::cpu()->r[3]);
    r2_10 = guest::cpu()->r[2];
    r0_20 = call_007479b4(r0_19, r0, r2_10, guest::cpu()->r[3]);
    r1_1 = guest::cpu()->r[1];
    r2_11 = guest::cpu()->r[2];
    if ((r0_20 ^ 1u) == 0) {
        goto L_60699c;
    }
    if (u32(*gptr<u8>(r0 + 0x13u)) != 0) {  // (from the original)
        goto L_60699c;
    }
    r0_21 = u32(*gptr<u8>(0x9503bcu + 2u));  // (from the original)
    if (r0_21 != 0) {
        r0_22 = call_006ce770(r0_21, r1_1, r2_11, guest::cpu()->r[3]);
        r1_1 = guest::cpu()->r[1];
        r2_12 = guest::cpu()->r[2];
        if (r0_22 == 0) {
            r0_22 = call_006cef28(r0_22, r1_1, r2_12, guest::cpu()->r[3]);
            r1_1 = guest::cpu()->r[1];
            r2_12 = guest::cpu()->r[2];
            if (r0_22 != 0) {
                goto L_60699c;
            }
        }
        r0_23 = call_0051fe30(r0_22, r1_1, r2_12, guest::cpu()->r[3]);
        r2_13 = guest::cpu()->r[2];
        r0_24 = call_00520a18(r0_23, r5_1, r2_13, guest::cpu()->r[3]);
        r1_6 = guest::cpu()->r[1];
        r2_14 = guest::cpu()->r[2];
        r0_25 = call_0051fe30(r0_24, r1_6, r2_14, guest::cpu()->r[3]);
        r2_15 = guest::cpu()->r[2];
        call_00520584(r0_25, r5_1, r2_15, guest::cpu()->r[3]);
        r1_1 = guest::cpu()->r[1];
        *gptr<u8>(r0 + 0x14u) = u8(1u);  // (from the original)
        goto L_60699c;
    }
    r0_26 = u32(*gptr<u8>(*global_0095362c + 0x1c0u));  // (from the original)
    if (r0_26 != 0) {
        goto L_60699c;
    }
    r0_27 = call_006ceedc(r0_26, r1_1, r2_11, guest::cpu()->r[3]);
    r1_1 = guest::cpu()->r[1];
    r2_16 = guest::cpu()->r[2];
    if (r0_27 == 0) {
        goto L_60699c;
    }
    *gptr<u8>(0x9503bcu + 2u) = u8(1u);  // (from the original)
    r0_28 = call_002f74c8(r0_27, r1_1, r2_16, guest::cpu()->r[3]);
    r1_1 = guest::cpu()->r[1];
    r2_17 = guest::cpu()->r[2];
    if (r0_28 != 0x5eu) {  // (from the original)
        if (r0_28 == 0x62u) {  // (from the original)
            goto L_60698c;
        }
        goto L_60699c;
    }
    r0_29 = call_0024ebc0(r0_28, r1_1, r2_17, guest::cpu()->r[3]);
    r1_1 = guest::cpu()->r[1];
    if (r0_29 != 0) {
        *gptr<u8>(r0_29 + 0x168u) = u8(0u);  // (from the original)
    }
L_60698c:;
    r0_30 = *global_0094e4b8;
    if (r0_30 != 0) {
        *gptr<u8>(r0_30 + 0xa10u) = u8(0u);  // (from the original)
    }
L_60699c:;
    r0_1 = 0u;
L_6069a0:;
    guest::cpu()->r[13] += 0x20u;  // (from the original)
    guest::cpu()->r[1] = r1_1;
    return r0_1;
L_6069a4:;
    r0_31 = u32(*gptr<u8>(0x9503bcu + 7u));  // (from the original)
    if (r0_31 == 0) {
        goto L_6069e8;
    }
    r0_31 = call_00566044(r0_31, r1_2, r2_1, guest::cpu()->r[3]);
    r1_2 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    if (r0_31 == 0) {
        goto L_6069e8;
    }
    r1_7 = u32(*gptr<u8>(0x9503bcu + 6u));  // (from the original)
    r0_32 = u32(*gptr<u8>(0x9503bcu + 4u));  // (from the original)
    call_006a5d0c(r0_32, r1_7, 0u, guest::cpu()->r[3]);
    r1_8 = guest::cpu()->r[1];
    r2_18 = guest::cpu()->r[2];
    r0_33 = *gptr<u32>(0x9503bcu + 0x1cu);  // (from the original)
    call_006a5b88(r0_33, r1_8, r2_18, guest::cpu()->r[3]);
    r1_9 = guest::cpu()->r[1];
    *gptr<u8>(0x9503bcu + 7u) = u8(0u);  // (from the original)
    goto L_6069f8;
L_6069e8:;
    r0_34 = call_00565fe8(r0_31, r1_2, r2_1, guest::cpu()->r[3]);
    r1_9 = guest::cpu()->r[1];
    if (r0_34 != 0) {
        *gptr<u8>(0x9503bcu + 7u) = u8(0u);  // (from the original)
    }
L_6069f8:;
    *gptr<u8>(0x9503bcu + 1u) = u8(0u);  // (from the original)
    guest::cpu()->r[13] += 0x20u;  // (from the original)
    guest::cpu()->r[1] = r1_9;
    return 1u;
}

}  // namespace d_00606704
GUEST_EXPORT(0x00606704, d_00606704::f_00606704);

// f_00606a24: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00606a24 {

inline guest::global<u16, 0x0094e474> global_0094e474;  // (from the original)

void f_00606a24(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r13 = guest::cpu()->r[13];
    u32 r4_1 = 0;
    float S0_1 = 0;
    r13 = r13 - 4u;
    r4_1 = *gptr<u32>(r13 + 4u);
    S0_1 = std::bit_cast<float>(*gptr<u32>(r13 + 8u));
    *gptr<u16>(0x9503bcu + 8u) = u16(r0);  // (from the original)
    *gptr<u8>(0x9503bcu + 3u) = u8(r1);  // (from the original)
    *gptr<u8>(0x9503bcu + 4u) = u8(r2);  // (from the original)
    *gptr<u8>(0x9503bcu + 5u) = u8(r3);  // (from the original)
    *gptr<u8>(0x9503bcu + 6u) = u8(r4_1);  // (from the original)
    *gptr<u32>(0x9503bcu + 0x14u) = u32(std::bit_cast<u32>(S0_1));  // (from the original)
    *global_0094e474 = u16(r0);
    r13 = r13 + 4u;
    guest::cpu()->r[1] = 0x94e474u;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_1;
    return;
}

}  // namespace d_00606a24
GUEST_EXPORT(0x00606a24, d_00606a24::f_00606a24);

// f_00606a64: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00606a64 {

inline guest::global<u16, 0x0088731e> global_0088731e;  // (from the original)
inline guest::global<u16, 0x0094e474> global_0094e474;  // (from the original)
inline guest::global<u8, 0x009503bc> global_009503bc;  // (from the original)

u32 f_00606a64() {
    u32 r1_1 = 0;
    r1_1 = u32(*global_0088731e);
    *gptr<u16>(0x9503bcu + 8u) = u16(r1_1);  // (from the original)
    *gptr<u8>(0x9503bcu + 3u) = u8(0u);  // (from the original)
    *gptr<u8>(0x9503bcu + 4u) = u8(0u);  // (from the original)
    *gptr<u8>(0x9503bcu + 5u) = u8(1u);  // (from the original)
    *gptr<u8>(0x9503bcu + 6u) = u8(1u);  // (from the original)
    *gptr<u32>(0x9503bcu + 0x14u) = u32(0u);  // (from the original)
    *global_0094e474 = u16(r1_1);
    *global_009503bc = u8(0u);
    guest::cpu()->r[1] = r1_1;
    return 0x9503bcu;  // (from the original)
}

}  // namespace d_00606a64
GUEST_EXPORT(0x00606a64, d_00606a64::f_00606a64);

// f_00606ab4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00606ab4 {

inline guest::global<u16, 0x00886e28> global_00886e28;  // (from the original)
inline guest::global<u32, 0x0094e3c8> global_0094e3c8;  // (from the original)
inline guest::global<u32, 0x009503ac> global_009503ac;  // (from the original)
inline guest::global<u8, 0x009503bc> global_009503bc;  // (from the original)
inline guest::global<u32, 0x0095362c> global_0095362c;  // (from the original)
inline constexpr guest::Function<0x00529d08, u32(u32, u32, u32, u32)> call_00529d08;  // (from the original)
inline constexpr guest::Function<0x00606bd0, u32(u32, u32, u32, u32)> call_00606bd0;  // (from the original)
inline constexpr guest::Function<0x006213c8, u32(u32, u32, u32, u32)> call_006213c8;  // (from the original)

u32 f_00606ab4(u32 r0_unused, u32 r1, u32 r2) {
    u32 r0 = 0;
    u32 r0_1 = 0;
    u32 r4_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r1_1 = 0;
    u32 r0_5 = 0;
    u32 r1_2 = 0;
    guest::cpu()->r[13] -= 0x18u;  // (from the original)
    if (u32(*global_009503bc) != 0) {
        goto L_606b10;
    }
    if (u32(*gptr<u16>(0x9503bcu + 8u)) == 0xffffu) {  // (from the original)
        goto L_606b10;
    }
    if (u32(*gptr<u8>(*global_0094e3c8 + 0xfb0u)) != 0) {  // (from the original)
        goto L_606b10;
    }
    r0_1 = *global_0095362c;
    r4_1 = u32(*gptr<u8>(r0_1 + 0x1c0u));  // (from the original)
    if (r4_1 == 0) {
        goto L_606b2c;
    }
    if (r4_1 == 0xeu) {  // (from the original)
        goto L_606b18;
    }
    if (r4_1 == 0xfu) {  // (from the original)
        goto L_606b2c;
    }
L_606b10:;
    r0 = 0u;
L_606b14:;
    guest::cpu()->r[13] += 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
L_606b18:;
    r0_2 = r0_1 + 0x1c0u;  // (from the original)
    call_006213c8(r0_2, r1, r2, guest::cpu()->r[3]);
    r2 = guest::cpu()->r[2];
    r1 = 0xfu;  // (from the original)
    *gptr<u8>(*global_0095362c + 0x1c0u) = u8(r1);  // (from the original)
L_606b2c:;
    if (*global_009503ac != 0) {
        r0_3 = u32(*gptr<u16>(0x9503bcu + 8u));  // (from the original)
        r0 = call_00606bd0(r0_3, r1, r2, guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        if (r0 == 0) {
            guest::preempt();
            goto L_606b14;
        }
        *gptr<u16>(0x9503bcu + 0xcu) = u16(u32(*gptr<u16>(0x9503bcu + 0xau)));  // (from the original)
        r0_4 = u32(*gptr<u16>(0x9503bcu + 8u));  // (from the original)
        *gptr<u16>(0x9503bcu + 0xau) = u16(r0_4);  // (from the original)
        r1_1 = *gptr<u32>(0x9503bcu + 0x14u);  // (from the original)
        r0 = call_00529d08(r0_4, r1_1, 1u, guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        if (r0 == 0) {
            guest::preempt();
            goto L_606b14;
        }
        if (r4_1 != 0) {
            *gptr<u8>(*global_0095362c + 0x1c0u) = u8(0x10u);  // (from the original)
        }
        *gptr<u16>(0x9503bcu + 8u) = u16(0xffffu);  // (from the original)
        *global_009503bc = u8(1u);
        guest::cpu()->r[13] += 0x18u;  // (from the original)
        guest::cpu()->r[1] = 1u;
        return r0;
    }
    r0_5 = u32(*global_00886e28);
    call_00529d08(r0_5, 0u, 0u, guest::cpu()->r[3]);
    r1_2 = guest::cpu()->r[1];
    guest::cpu()->r[13] += 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1_2;
    return 0u;
}

}  // namespace d_00606ab4
GUEST_EXPORT(0x00606ab4, d_00606ab4::f_00606ab4);

// f_00606d20: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00606d20 {

struct __attribute__((packed)) Object_00606d20_0 {
    u8 unknown_0[0x13];  // (not used here)
    u8 byte_13;
};
GUEST_OFFSET(Object_00606d20_0, byte_13, 0x13);  // (from the original)

inline constexpr guest::Function<0x0051fe30, u32(u32, u32, u32, u32)> call_0051fe30;  // (from the original)
inline constexpr guest::Function<0x00520a18, u32(u32, u32, u32, u32)> call_00520a18;  // (from the original)
inline constexpr guest::Function<0x00747a90, u32(u32, u32, u32, u32)> call_00747a90;  // (from the original)

u32 f_00606d20(gptr<Object_00606d20_0> arg0, u32 r1) {
    u32 r0 = arg0.addr();
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r0_2 = 0;
    u32 r1_2 = 0;
    u32 r1_3 = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    arg0->byte_13 = u8(0u);
    r0_1 = call_0051fe30(0u, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_1 = *gptr<u32>(r0 + 4u);
    r0_2 = call_00747a90(r0_1, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_2 = guest::cpu()->r[1];
    if (r0_2 != 0) {
        r1_3 = *gptr<u32>(r0 + 4u);
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        return call_00520a18(r0_1, r1_3, guest::cpu()->r[2], guest::cpu()->r[3]);
    }
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1_2;
    return r0_2;
}

}  // namespace d_00606d20
GUEST_EXPORT(0x00606d20, d_00606d20::f_00606d20);

// f_00606d70: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00606d70 {

struct __attribute__((packed)) Object_00606d70_0 {
    u8 unknown_0[0x13];  // (not used here)
    u8 byte_13;
};
GUEST_OFFSET(Object_00606d70_0, byte_13, 0x13);  // (from the original)

inline constexpr guest::Function<0x0051fe30, u32(u32, u32, u32, u32)> call_0051fe30;  // (from the original)
inline constexpr guest::Function<0x00520a4c, u32(u32, u32, u32, u32)> call_00520a4c;  // (from the original)
inline constexpr guest::Function<0x00747a90, u32(u32, u32, u32, u32)> call_00747a90;  // (from the original)

u32 f_00606d70(gptr<Object_00606d70_0> arg0, u32 r1) {
    u32 r0 = arg0.addr();
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r0_2 = 0;
    u32 r1_2 = 0;
    u32 r1_3 = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    arg0->byte_13 = u8(1u);
    r0_1 = call_0051fe30(1u, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_1 = *gptr<u32>(r0 + 4u);
    r0_2 = call_00747a90(r0_1, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_2 = guest::cpu()->r[1];
    if (r0_2 == 0) {
        r1_3 = *gptr<u32>(r0 + 4u);
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        return call_00520a4c(r0_1, r1_3, guest::cpu()->r[2], guest::cpu()->r[3]);
    }
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1_2;
    return r0_2;
}

}  // namespace d_00606d70
GUEST_EXPORT(0x00606d70, d_00606d70::f_00606d70);

// f_00606e60: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00606e60 {

inline constexpr guest::Function<0x00521a8c, u32(u32, u32, u32, u32)> call_00521a8c;  // (from the original)

u32 f_00606e60(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r0_1 = 0;
    guest::cpu()->r[13] -= 8u;
    r0_1 = call_00521a8c(r0, r1, r2, r3);
    *gptr<u32>(r0_1) = u32(0x8f7dc4u);  // (from the original)
    *gptr<u8>(r0_1 + 0x13u) = u8(0u);  // (from the original)
    *gptr<u8>(r0_1 + 0x14u) = u8(0u);  // (from the original)
    *gptr<u32>(0x9503bcu + 0x10u) = u32(r0_1);  // (from the original)
    *gptr<u8>(0x9503bcu + 1u) = u8(1u);  // (from the original)
    *gptr<u8>(0x9503bcu + 2u) = u8(0u);  // (from the original)
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = 0x9503bcu;  // (from the original)
    return r0_1;
}

}  // namespace d_00606e60
GUEST_EXPORT(0x00606e60, d_00606e60::f_00606e60);

// f_00606ec8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00606ec8 {

inline guest::global<u32, 0x009506c8> global_009506c8;  // (from the original)
inline guest::global<u32, 0x0095deac> global_0095deac;  // (from the original)
inline constexpr guest::Function<0x005dd51c, u32(u32, u32, u32, u32)> call_005dd51c;  // (from the original)
inline constexpr guest::Function<0x005dd5b8, u32(u32, u32, u32, u32)> call_005dd5b8;  // (from the original)
inline constexpr guest::Function<0x00602144, u32(u32, u32, u32, u32)> call_00602144;  // (from the original)
inline constexpr guest::Function<0x00602938, u32(u32, u32, u32, u32)> call_00602938;  // (from the original)

u32 f_00606ec8(u32 r0, u32 r1) {
    u32 r1_1 = 0;
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r1_2 = 0;
    u32 r0_4 = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r1_1 = *global_009506c8;
    r0_1 = r0 + 0x14u;  // (from the original)
    call_005dd51c(r0_1, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r0_2 = r0 + 0x14u;  // (from the original)
    call_005dd5b8(r0_2, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r0_3 = *gptr<u32>(*global_0095deac + 0x14u);  // (from the original)
    r1_2 = r0 + 0x14u;  // (from the original)
    call_00602144(r0_3, r1_2, guest::cpu()->r[2], guest::cpu()->r[3]);
    r0_4 = *gptr<u32>(r0 + 0x18u);  // (from the original)
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    return call_00602938(r0_4, 1u, guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_00606ec8
GUEST_EXPORT(0x00606ec8, d_00606ec8::f_00606ec8);

// f_00606f20: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00606f20 {

inline constexpr guest::Function<0x0024b7b8, u32(u32, u32, u32, u32)> call_0024b7b8;  // (from the original)
inline constexpr guest::Function<0x002fae84, u32(u32, u32, u32, u32)> call_002fae84;  // (from the original)
inline constexpr guest::Function<0x002fb94c, u32(u32, u32, u32, u32)> call_002fb94c;  // (from the original)

u32 f_00606f20(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r2_1 = 0;
    u32 r1_1 = 0;
    u32 r3_1 = 0;
    u32 zf_1 = 0;
    u32 cf_1 = 0;
    u32 r12_1 = 0;
    u32 r1_2 = 0;
    u32 r3_2 = 0;
    u32 r2_2 = 0;
    u32 r0_3 = 0;
    u32 r1_3 = 0;
    u32 r2_3 = 0;
    u32 r3_3 = 0;
    u32 r0_4 = 0;
    guest::cpu()->r[13] -= 8u;
    r0_1 = call_002fae84(r0, r1, r2, r3);
    r0_2 = r0_1 + 0x6214fu;  // (from the original)
    r2_1 = u32(*gptr<u8>(r0_2 + 7u));
    r1_1 = (r2_1 >> 3) + ((u32(*gptr<u8>(r0_2 + 8u)) & 0x1fu) << 5);  // (from the original)
    r3_1 = r1_1 + 1u;
    zf_1 = r3_1 == 0x3e8u;  // (from the original)
    cf_1 = r3_1 >= 0x3e8u;  // (from the original)
    if (cf_1 && !zf_1) {
        r1_1 = 0x3e8u;  // (from the original)
    }
    if (!cf_1 || zf_1) {
        r1_1 = r1_1 + 1u;
    }
    r12_1 = r1_1 & 0x3e0u;  // (from the original)
    r1_2 = r2_1 & ~0xf8u | r1_1 << 3;  // (from the original)
    r3_2 = u32(*gptr<u8>(r0_2 + 8u)) & ~0x1fu;  // (from the original)
    r2_2 = r3_2 | r12_1 >> 5;
    *gptr<u8>(r0_2 + 7u) = u8(r1_2);
    *gptr<u8>(r0_2 + 8u) = u8(r2_2);
    r0_3 = call_002fb94c(r0_2, r1_2, r2_2, r3_2);
    r1_3 = guest::cpu()->r[1];
    r2_3 = guest::cpu()->r[2];
    r3_3 = guest::cpu()->r[3];
    if (r0_3 == 0) {
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1_3;
        return r0_3;
    }
    r0_4 = r0_3 + 0x5700u;  // (from the original)
    *gptr<u8>(r0_4 + 0xcu) = u8(u32(*gptr<u8>(r0_4 + 0xcu)) | 0x80u);  // (from the original)
    guest::cpu()->r[13] += 8u;
    return call_0024b7b8(8u, 1u, r2_3, r3_3);
}

}  // namespace d_00606f20
GUEST_EXPORT(0x00606f20, d_00606f20::f_00606f20);

// f_00607218: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00607218 {

inline constexpr guest::Function<0x005e34c4, u32(u32, u32, u32, u32)> call_005e34c4;  // (from the original)
inline constexpr guest::Function<0x005e35dc, u32(u32, u32, u32, u32)> call_005e35dc;  // (from the original)
inline constexpr guest::Function<0x006039ec, u32(u32, u32, u32, u32)> call_006039ec;  // (from the original)
inline constexpr guest::Function<0x00603a28, u32(u32, u32, u32, u32)> call_00603a28;  // (from the original)
inline constexpr guest::Function<0x00603ab0, u32(u32, u32, u32, u32)> call_00603ab0;  // (from the original)

u32 f_00607218(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r0_2 = 0;
    u32 r1_2 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r3_2 = 0;
    u32 r2_2 = 0;
    u32 r0_5 = 0;
    u32 r3_3 = 0;
    u32 r2_3 = 0;
    u32 r3_4 = 0;
    u32 r0_6 = 0;
    u32 r3_5 = 0;
    u32 r2_4 = 0;
    u32 r0_7 = 0;
    u32 r3_6 = 0;
    u32 r2_5 = 0;
    u32 r3_7 = 0;
    u32 r2_6 = 0;
    u32 r0_8 = 0;
    r13 = r13 - 0x40u;  // (from the original)
    r0_1 = r13 + 0x10u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_005e35dc(r0_1, r1, r2, r3);
    r1_1 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    r0_2 = *gptr<u32>(r0 + 0x18u);  // (from the original)
    guest::cpu()->r[13] = r13;
    call_00603ab0(r0_2, r1_1, r2_1, r3_1);
    r1_2 = guest::cpu()->r[1];
    r0_3 = *gptr<u32>(r0 + 0x128u);  // (from the original)
    if (r0_3 != 0) {
        if (r0_3 == 1u) {
            goto L_6072d4;
        }
        goto L_607344;
    }
    r0_4 = r13 + 0x10u;  // (from the original)
    *gptr<u32>(r13) = u32(0u);
    *gptr<u32>(r13 + 4u) = u32(0u);
    *gptr<u32>(r13 + 8u) = u32(0u);
    guest::cpu()->r[13] = r13;
    call_005e34c4(r0_4, 0x85687cu, 0x50u, 0u);  // (from the original)
    r3_2 = guest::cpu()->r[3];
    r2_2 = r13 + 0x10u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_00603a28(r0_2, 0u, r2_2, r3_2);
    r0_5 = r13 + 0x10u;  // (from the original)
    *gptr<u32>(r13) = u32(0u);
    *gptr<u32>(r13 + 4u) = u32(0u);
    *gptr<u32>(r13 + 8u) = u32(0u);
    guest::cpu()->r[13] = r13;
    call_005e34c4(r0_5, 0x85687cu, 0x51u, 0u);  // (from the original)
    r3_3 = guest::cpu()->r[3];
    r2_3 = r13 + 0x10u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_00603a28(r0_2, 1u, r2_3, r3_3);
    r3_4 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    call_006039ec(r0_2, 2u, 1u, r3_4);
    r1_2 = guest::cpu()->r[1];
    goto L_607344;
L_6072d4:;
    r0_6 = r13 + 0x10u;  // (from the original)
    *gptr<u32>(r13) = u32(0u);
    *gptr<u32>(r13 + 4u) = u32(0u);
    *gptr<u32>(r13 + 8u) = u32(0u);
    guest::cpu()->r[13] = r13;
    call_005e34c4(r0_6, 0x85687cu, 0x51u, 0u);  // (from the original)
    r3_5 = guest::cpu()->r[3];
    r2_4 = r13 + 0x10u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_00603a28(r0_2, 0u, r2_4, r3_5);
    r0_7 = r13 + 0x10u;  // (from the original)
    *gptr<u32>(r13) = u32(0u);
    *gptr<u32>(r13 + 4u) = u32(0u);
    *gptr<u32>(r13 + 8u) = u32(0u);
    guest::cpu()->r[13] = r13;
    call_005e34c4(r0_7, 0x85687cu, 0x50u, 0u);  // (from the original)
    r3_6 = guest::cpu()->r[3];
    r2_5 = r13 + 0x10u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_00603a28(r0_2, 1u, r2_5, r3_6);
    r3_7 = guest::cpu()->r[3];
    r2_6 = ~0u;
    guest::cpu()->r[13] = r13;
    call_006039ec(r0_2, 2u, r2_6, r3_7);
    r1_2 = guest::cpu()->r[1];
L_607344:;
    *gptr<u32>(r0 + 0x124u) = u32(~0u);  // (from the original)
    r0_8 = r13 + 0x10u;  // (from the original)
    r13 = r13 + 0x40u;  // (from the original)
    guest::cpu()->r[1] = r1_2;
    guest::cpu()->r[13] = r13;
    return r0_8;
}

}  // namespace d_00607218
GUEST_EXPORT(0x00607218, d_00607218::f_00607218);

// f_0060b230: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0060b230 {

inline constexpr guest::Function<0x00281cc8, u32(u32, u32, u32, u32)> call_00281cc8;  // (from the original)
inline constexpr guest::Function<0x002f74c8, u32(u32, u32, u32, u32)> call_002f74c8;  // (from the original)
inline constexpr guest::Function<0x002f74e0, u32(u32, u32, u32, u32)> call_002f74e0;  // (from the original)
inline constexpr guest::Function<0x005896c4, u32(u32, u32, u32, u32)> call_005896c4;  // (from the original)
inline constexpr guest::Function<0x0060b2ec, u32(u32, u32, u32, u32)> call_0060b2ec;  // (from the original)
inline constexpr guest::Function<0x006d1f38, u32(u32, u32, u32, u32)> call_006d1f38;  // (from the original)
inline constexpr guest::Function<0x0071e9e8, u32(u32, u32, u32, u32)> call_0071e9e8;  // (from the original)

u32 f_0060b230(u32 r0, u32 r1) {
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r1_2 = 0;
    u32 r0_4 = 0;
    u32 r1_3 = 0;
    u32 r0_5 = 0;
    u32 r1_4 = 0;
    u32 r0_6 = 0;
    u32 r1_5 = 0;
    u32 r0_7 = 0;
    u32 r1_6 = 0;
    u32 r0_8 = 0;
    u32 r1_7 = 0;
    u32 r0_9 = 0;
    u32 r0_10 = 0;
    u32 r0_11 = 0;
    u32 r0_12 = 0;
    u32 r0_13 = 0;
    u32 r1_8 = 0;
    guest::cpu()->r[13] -= 8u;
    r0_1 = call_002f74c8(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_1 = guest::cpu()->r[1];
    if (r0_1 == 0x5eu) {  // (from the original)
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1_1;
        return 1u;
    }
    r0_2 = call_002f74c8(r0_1, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r0_3 = call_002f74e0(0x800u, r0_2, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    r1_2 = guest::cpu()->r[1];
    if (r0_3 != 0) {
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1_2;
        return 1u;
    }
    r0_4 = call_002f74c8(r0_3, r1_2, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_3 = guest::cpu()->r[1];
    if (r0_4 == 0x5cu) {  // (from the original)
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1_3;
        return 1u;
    }
    r0_5 = call_006d1f38(0x80u, r1_3, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    r1_4 = guest::cpu()->r[1];
    if (r0_5 != 0) {
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1_4;
        return 1u;
    }
    r0_6 = call_006d1f38(0x81u, r1_4, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    r1_5 = guest::cpu()->r[1];
    if (r0_6 != 0) {
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1_5;
        return 1u;
    }
    r0_7 = call_005896c4(r0_6, r1_5, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_6 = guest::cpu()->r[1];
    if (r0_7 != 0) {
        goto L_60b2c8;
    }
    r0_8 = call_00281cc8(r0_7, r1_6, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_7 = guest::cpu()->r[1];
    r0_9 = call_0071e9e8(r0_8, r1_7, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_6 = guest::cpu()->r[1];
    if (r0_9 != 0) {
        goto L_60b2c8;
    }
    r0_10 = call_002f74c8(r0_9, r1_6, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_6 = guest::cpu()->r[1];
    if (r0_10 == 0x27u) {  // (from the original)
        goto L_60b2c8;
    }
    r0_11 = call_002f74c8(r0_10, r1_6, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_6 = guest::cpu()->r[1];
    if (r0_11 == 0x29u) {  // (from the original)
        goto L_60b2c8;
    }
    r0_12 = call_002f74c8(r0_11, r1_6, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_6 = guest::cpu()->r[1];
    if (r0_12 != 0x28u) {  // (from the original)
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1_6;
        return 0u;
    }
L_60b2c8:;
    r0_13 = call_0060b2ec(r0, r1_6, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_8 = guest::cpu()->r[1];
    if (r0_13 == 0) {
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1_8;
        return 0u;
    }
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1_8;
    return 1u;
}

}  // namespace d_0060b230
GUEST_EXPORT(0x0060b230, d_0060b230::f_0060b230);

// f_0060b2ec: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0060b2ec {


u32 f_0060b2ec(u32 r0, u32 r1) {
    u32 r1_1 = 0;
    u32 r1_2 = 0;
    u32 r1_3 = 0;
    u32 r1_4 = 0;
    u32 r1_5 = 0;
    u32 r1_6 = 0;
    u32 r0_1 = 0;
    if (r0 < 0xfu) {  // (from the original)
        guest::cpu()->r[1] = r1;
        return 3u;
    }
    r1_1 = r0 - 0xfu;  // (from the original)
    if (r1_1 < 6u) {
        guest::cpu()->r[1] = r1_1;
        return 0u;
    }
    r1_2 = r0 - 0x15u;  // (from the original)
    if (r1_2 < 4u) {
        guest::cpu()->r[1] = r1_2;
        return 1u;
    }
    r1_3 = r0 - 0x19u;  // (from the original)
    if (r1_3 < 2u) {
        guest::cpu()->r[1] = r1_3;
        return 2u;
    }
    if (r0 == 0x1bu) {  // (from the original)
        guest::cpu()->r[1] = r1_3;
        return 4u;
    }
    r1_4 = r0 - 0x1cu;  // (from the original)
    if (r1_4 < 3u) {
        guest::cpu()->r[1] = r1_4;
        return 5u;
    }
    r1_5 = r0 - 0x1fu;  // (from the original)
    if (r1_5 < 2u) {
        guest::cpu()->r[1] = r1_5;
        return 6u;
    }
    r1_6 = r0 - 0x21u;  // (from the original)
    if (r1_6 < 3u) {
        guest::cpu()->r[1] = r1_6;
        return 7u;
    }
    if (r0 - 0x24u >= 3u) {  // (from the original)
        r0_1 = 9u;
    } else {
        r0_1 = 8u;
    }
    guest::cpu()->r[1] = r1_6;
    return r0_1;
}

}  // namespace d_0060b2ec
GUEST_EXPORT(0x0060b2ec, d_0060b2ec::f_0060b2ec);

// f_0060bdd0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0060bdd0 {

inline constexpr guest::Function<0x00569dc4, u32(u32, u32, u32, u32)> call_00569dc4;  // (from the original)
inline constexpr guest::Function<0x0056a974, u32(u32, u32, u32, u32)> call_0056a974;  // (from the original)

u32 f_0060bdd0(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 r2_1 = 0;
    u32 r1_1 = 0;
    u32 r0_2 = 0;
    u32 r1_2 = 0;
    r13 = r13 - 0x10u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_1 = call_00569dc4(r0, r1, r2, r3);
    *gptr<u32>(r13 + 4u) = u32(0x60be08u);  // (from the original)
    *gptr<u32>(r13) = u32(0x9047f8u);  // (from the original)
    r2_1 = *gptr<u32>(r0_1 + 4u);
    r1_1 = r13;
    guest::cpu()->r[13] = r13;
    r0_2 = call_0056a974(0x997e8cu, r1_1, r2_1, 0x80u);  // (from the original)
    r1_2 = guest::cpu()->r[1];
    r13 = r13 + 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1_2;
    guest::cpu()->r[13] = r13;
    return r0_2;
}

}  // namespace d_0060bdd0
GUEST_EXPORT(0x0060bdd0, d_0060bdd0::f_0060bdd0);

// f_0060c284: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0060c284 {

struct __attribute__((packed)) Object_0060c284_0 {
    u8 unknown_0[0x418];  // (not used here)
    u8 byte_418;
};
GUEST_OFFSET(Object_0060c284_0, byte_418, 0x418);  // (from the original)

inline constexpr guest::Function<0x001fa354, u32(u32, u32, u32, u32)> call_001fa354;  // (from the original)
inline constexpr guest::Function<0x006d1e64, u32(u32, u32, u32, u32)> call_006d1e64;  // (from the original)

u32 f_0060c284(gptr<Object_0060c284_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r1_2 = 0;
    u32 r0_4 = 0;
    guest::cpu()->r[13] -= 8u;
    arg0->byte_418 = u8(0u);
    r0_1 = call_006d1e64(r0, 0u, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_1 = guest::cpu()->r[1];
    r0_2 = u32(*gptr<u8>(*gptr<u32>(r0_1 + 0x1f4u) + 0x4d1u));  // (from the original)
    if (r0_2 != 1u) {
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1_1;
        return r0_2;
    }
    r0_3 = call_006d1e64(r0_2, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_2 = guest::cpu()->r[1];
    r0_4 = *gptr<u32>(r0_3 + 0x1f4u);  // (from the original)
    guest::cpu()->r[13] += 8u;
    return call_001fa354(r0_4, r1_2, guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_0060c284
GUEST_EXPORT(0x0060c284, d_0060c284::f_0060c284);

// f_0060c360: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0060c360 {

struct __attribute__((packed)) Object_0060c360_0 {
    u8 unknown_0[0x418];  // (not used here)
    u8 byte_418;
};
GUEST_OFFSET(Object_0060c360_0, byte_418, 0x418);  // (from the original)

inline constexpr guest::Function<0x001323bc, u32(u32, u32, u32, u32)> call_001323bc;  // (from the original)
inline constexpr guest::Function<0x00569e6c, u32(u32, u32, u32, u32)> call_00569e6c;  // (from the original)

u32 f_0060c360(gptr<Object_0060c360_0> arg0, u32 r1, u32 r2) {
    u32 r0 = arg0.addr();
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r1_1 = 0;
    guest::cpu()->r[13] -= 8u;
    r0_1 = u32(arg0->byte_418);
    if (r0_1 != 1u) {
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        return r0_1;
    }
    r0_2 = call_001323bc(r0_1, r1, r2, guest::cpu()->r[3]);
    r1_1 = r0 + 0x27cu;  // (from the original)
    guest::cpu()->r[13] += 8u;
    return call_00569e6c(r0_2, r1_1, 0u, guest::cpu()->r[3]);
}

}  // namespace d_0060c360
GUEST_EXPORT(0x0060c360, d_0060c360::f_0060c360);

// f_0060c38c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0060c38c {

inline constexpr guest::Function<0x00567dac, u32(u32, u32, u32, u32)> call_00567dac;  // (from the original)
inline constexpr guest::Function<0x00569184, u32(u32, u32, u32, u32)> call_00569184;  // (from the original)

u32 f_0060c38c(u32 r0, u32 r1_unused, u32 r2_unused, u32 r3) {
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    guest::cpu()->r[13] -= 8u;
    r0_1 = r0 + 0x34u;  // (from the original)
    call_00567dac(r0_1, 0x60c3d4u, 0x80u, r3);  // (from the original)
    *gptr<u32>(r0 + 0x368u) = u32(r0 + 0x34u);  // (from the original)
    r0_2 = r0 + 0x27cu;  // (from the original)
    call_00569184(r0_2, 0x60c3f0u, 0u, 0x1000u);  // (from the original)
    *gptr<u8>(r0 + 0x288u) = u8(0x8du);  // (from the original)
    *gptr<u8>(r0 + 0x419u) = u8(0u);  // (from the original)
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = 0x8du;  // (from the original)
    return 0u;
}

}  // namespace d_0060c38c
GUEST_EXPORT(0x0060c38c, d_0060c38c::f_0060c38c);

// f_0060c400: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0060c400 {

struct __attribute__((packed)) Object_0060c400_0 {
    u8 unknown_0[0x419];  // (not used here)
    u8 byte_419;
};
GUEST_OFFSET(Object_0060c400_0, byte_419, 0x419);  // (from the original)

inline constexpr guest::Function<0x004b4fc0, u32(u32, u32, u32, u32)> call_004b4fc0;  // (from the original)
inline constexpr guest::Function<0x00568984, u32(u32, u32, u32, u32)> call_00568984;  // (from the original)
inline constexpr guest::Function<0x00568c10, u32(u32, u32, u32, u32)> call_00568c10;  // (from the original)
inline constexpr guest::Function<0x00569544, u32(u32, u32, u32, u32)> call_00569544;  // (from the original)
inline constexpr guest::Function<0x0074fdd0, u32(u32, u32, u32, u32)> call_0074fdd0;  // (from the original)

u32 f_0060c400(gptr<Object_0060c400_0> arg0, u32 r1, u32 r2, u32 r3) {
    u32 r0 = arg0.addr();
    u32 r5_1 = 0;
    u32 r0_1 = 0;
    u32 r5_2 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r0_4 = 0;
    u32 r7_1 = 0;
    u32 r0_5 = 0;
    u32 r0_6 = 0;
    u32 r0_7 = 0;
    u32 r0_8 = 0;
    u32 r0_9 = 0;
    u32 r0_10 = 0;
    u32 r7_2 = 0;
    u32 r0_11 = 0;
    u32 r0_12 = 0;
    u32 r0_13 = 0;
    u32 r0_14 = 0;
    guest::cpu()->r[13] -= 0x18u;  // (from the original)
    r5_1 = r0 + 0x400u;  // (from the original)
    r0_1 = u32(arg0->byte_419);
    r5_2 = r5_1 + 0x19u;  // (from the original)
    if (r0_1 == 0) {
        goto L_60c4d0;
    }
    if ((r0_1 & 1u) != 0) {
        r0_2 = r0 + 0x3c8u;  // (from the original)
        r0_3 = call_0074fdd0(r0_2, r1, r2, r3);
        r1_1 = guest::cpu()->r[1];
        r2_1 = guest::cpu()->r[2];
        r3_1 = guest::cpu()->r[3];
        if (r0_3 == 0) {
            r0_4 = r0 + 0x3c8u;  // (from the original)
            goto L_60c4cc;
        }
        r7_1 = r0 + 0x3c8u;  // (from the original)
        r0_5 = r0 + 0x27cu;  // (from the original)
        r0_6 = call_004b4fc0(r0_5, 0x8575d8u, 1u, r3_1);  // (from the original)
        r0_7 = r0 + 0x27cu;  // (from the original)
        call_00568984(r0_7, r7_1, r0_6, 0u);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r0_8 = u32(*gptr<u8>(r0 + 0x419u)) ^ 1u;  // (from the original)
    } else {
        if ((r0_1 & 2u) == 0) {
            goto L_60c4d0;
        }
        r0_9 = r0 + 0x3f0u;  // (from the original)
        r0_10 = call_0074fdd0(r0_9, r1, r2, r3);
        r1_1 = guest::cpu()->r[1];
        r2_1 = guest::cpu()->r[2];
        r3_1 = guest::cpu()->r[3];
        if (r0_10 == 0) {
            r0_4 = r0 + 0x3f0u;  // (from the original)
            goto L_60c4cc;
        }
        r7_2 = r0 + 0x3f0u;  // (from the original)
        r0_11 = r0 + 0x27cu;  // (from the original)
        r0_12 = call_004b4fc0(r0_11, 0x8575d8u, 1u, r3_1);  // (from the original)
        r0_13 = r0 + 0x27cu;  // (from the original)
        call_00568984(r0_13, r7_2, r0_12, 0u);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        *gptr<u8>(r0 + 0x418u) = u8(0u);  // (from the original)
        r0_8 = u32(*gptr<u8>(r0 + 0x419u)) ^ 2u;  // (from the original)
    }
    *gptr<u8>(r5_2) = u8(r0_8);
    goto L_60c4d0;
L_60c4cc:;
    call_00569544(r0_4, r1_1, r2_1, r3_1);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
L_60c4d0:;
    r0_14 = r0 + 0x27cu;  // (from the original)
    guest::cpu()->r[13] += 0x18u;  // (from the original)
    return call_00568c10(r0_14, r1, r2, r3);
}

}  // namespace d_0060c400
GUEST_EXPORT(0x0060c400, d_0060c400::f_0060c400);

// f_0060c560: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0060c560 {

struct __attribute__((packed)) Object_0060c560_0 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
    u32 word_18;
    u32 word_1c;
    u32 word_20;
};
GUEST_OFFSET(Object_0060c560_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_0060c560_0, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_0060c560_0, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Object_0060c560_0, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Object_0060c560_0, word_10, 0x10);  // (from the original)
GUEST_OFFSET(Object_0060c560_0, word_14, 0x14);  // (from the original)
GUEST_OFFSET(Object_0060c560_0, word_18, 0x18);  // (from the original)
GUEST_OFFSET(Object_0060c560_0, word_1c, 0x1c);  // (from the original)
GUEST_OFFSET(Object_0060c560_0, word_20, 0x20);  // (from the original)

struct __attribute__((packed)) Object_0060c560_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Object_0060c560_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_0060c560_1, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_0060c560_1, word_8, 0x8);  // (from the original)

struct __attribute__((packed)) Object_0060c560_2 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Object_0060c560_2, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_0060c560_2, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_0060c560_2, word_8, 0x8);  // (from the original)

inline guest::global<u32, 0x0060c5bc> global_0060c5bc;  // (from the original)
inline guest::global<u32, 0x0060c5c0> global_0060c5c0;  // (from the original)

void f_0060c560(gptr<Object_0060c560_0> arg0, gptr<Object_0060c560_1> arg1, gptr<Object_0060c560_2> arg2, float S0) {
    float S1_1 = 0;
    float S2_1 = 0;
    float S3_1 = 0;
    u32 r1_1 = 0;
    u32 r3_1 = 0;
    arg0->word_0 = u32(std::bit_cast<u32>(std::bit_cast<float>(arg1->word_4) * std::bit_cast<float>(*global_0060c5c0) / (std::bit_cast<float>(*global_0060c5bc) * std::bit_cast<float>(arg1->word_0)) + std::bit_cast<float>(arg1->word_8)));
    arg0->word_4 = u32(std::bit_cast<u32>(std::bit_cast<float>(arg1->word_0) / std::bit_cast<float>(arg1->word_4)));
    S1_1 = std::bit_cast<float>(arg1->word_0);
    S2_1 = std::bit_cast<float>(arg1->word_4);
    S3_1 = std::bit_cast<float>(arg1->word_8);
    arg0->word_c = u32(std::bit_cast<u32>(S1_1));
    arg0->word_10 = u32(std::bit_cast<u32>(S2_1));
    arg0->word_14 = u32(std::bit_cast<u32>(S3_1));
    r1_1 = arg2->word_0;
    r3_1 = arg2->word_4;
    arg0->word_20 = u32(arg2->word_8);
    arg0->word_18 = u32(r1_1);
    arg0->word_1c = u32(r3_1);
    arg0->word_8 = u32(std::bit_cast<u32>(S0));
    guest::cpu()->r[1] = r1_1;
    guest::cpu()->s[1] = S1_1;
    return;
}

}  // namespace d_0060c560
GUEST_EXPORT(0x0060c560, d_0060c560::f_0060c560);

// f_0060c5c4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0060c5c4 {

inline guest::global<u32, 0x0060c62c> global_0060c62c;  // (from the original)
inline guest::global<u32, 0x00951738> global_00951738;  // (from the original)
inline guest::global<u32, 0x009ab614> global_009ab614;  // (from the original)
inline constexpr guest::Function<0x002fe7dd, u32(u32, u32, u32, u32)> call_002fe7dc;  // (from the original)

u32 f_0060c5c4(u32 r0_unused, u32 r1, float S0) {
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    float S0_1 = 0;
    float S0_2 = 0;
    guest::cpu()->r[13] -= 8u;
    if ((*global_00951738 & 1u) != 0) {
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        guest::cpu()->s[0] = S0;
        return 0x9ab614u;  // (from the original)
    }
    guest::cpu()->s[0] = S0;
    r0_1 = call_002fe7dc(0x951738u, r1, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    r1_1 = guest::cpu()->r[1];
    S0_1 = guest::cpu()->s[0];
    if (r0_1 == 0) {
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1_1;
        guest::cpu()->s[0] = S0_1;
        return 0x9ab614u;  // (from the original)
    }
    S0_2 = std::bit_cast<float>(*global_0060c62c);
    *global_009ab614 = u32(std::bit_cast<u32>(S0_2));
    *gptr<u32>(0x9ab614u + 4u) = u32(std::bit_cast<u32>(S0_2));  // (from the original)
    *gptr<u32>(0x9ab614u + 8u) = u32(std::bit_cast<u32>(S0_2));  // (from the original)
    *gptr<u32>(0x9ab614u + 0xcu) = u32(0u);  // (from the original)
    *gptr<u32>(0x9ab614u + 0x10u) = u32(0u);  // (from the original)
    *gptr<u32>(0x9ab614u + 0x14u) = u32(0u);  // (from the original)
    *gptr<u32>(0x9ab614u + 0x18u) = u32(0u);  // (from the original)
    *gptr<u32>(0x9ab614u + 0x1cu) = u32(0u);  // (from the original)
    *gptr<u32>(0x9ab614u + 0x20u) = u32(0u);  // (from the original)
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = 0u;
    guest::cpu()->s[0] = S0_2;
    return 0x9ab614u;  // (from the original)
}

}  // namespace d_0060c5c4
GUEST_EXPORT(0x0060c5c4, d_0060c5c4::f_0060c5c4);

// f_0060d0d0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0060d0d0 {

struct __attribute__((packed)) Object_0060d0d0_0 {
    u16 half_0;
    u16 half_2;
    u16 half_4;
    u16 half_6;
};
GUEST_OFFSET(Object_0060d0d0_0, half_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_0060d0d0_0, half_2, 0x2);  // (from the original)
GUEST_OFFSET(Object_0060d0d0_0, half_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_0060d0d0_0, half_6, 0x6);  // (from the original)

struct __attribute__((packed)) Object_0060d0d0_1 {
    u16 half_0;
    u16 half_2;
    u16 half_4;
    u16 half_6;
};
GUEST_OFFSET(Object_0060d0d0_1, half_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_0060d0d0_1, half_2, 0x2);  // (from the original)
GUEST_OFFSET(Object_0060d0d0_1, half_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_0060d0d0_1, half_6, 0x6);  // (from the original)


void f_0060d0d0(gptr<Object_0060d0d0_0> arg0, gptr<Object_0060d0d0_1> arg1) {
    u32 r1_1 = 0;
    arg0->half_0 = u16(u32(arg0->half_0) + u32(arg1->half_0));
    arg0->half_2 = u16(u32(arg0->half_2) + u32(arg1->half_2));
    arg0->half_4 = u16(u32(arg0->half_4) + u32(arg1->half_4));
    r1_1 = u32(arg1->half_6) + u32(arg0->half_6);
    arg0->half_6 = u16(r1_1);
    guest::cpu()->r[1] = r1_1;
    return;
}

}  // namespace d_0060d0d0
GUEST_EXPORT(0x0060d0d0, d_0060d0d0::f_0060d0d0);

// f_0060d12c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0060d12c {

struct __attribute__((packed)) Object_0060d12c_0 {
    u16 half_0;
    u16 half_2;
    u16 half_4;
    u16 half_6;
};
GUEST_OFFSET(Object_0060d12c_0, half_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_0060d12c_0, half_2, 0x2);  // (from the original)
GUEST_OFFSET(Object_0060d12c_0, half_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_0060d12c_0, half_6, 0x6);  // (from the original)


void f_0060d12c(gptr<Object_0060d12c_0> arg0, u32 r1) {
    u32 r12_1 = 0;
    u32 r7_1 = 0;
    u32 r10_1 = 0;
    u32 r2_1 = 0;
    u32 r12_2 = 0;
    u32 r9_1 = 0;
    u32 r3_1 = 0;
    u32 r4_1 = 0;
    u32 r2_2 = 0;
    u32 r1_1 = 0;
    r12_1 = u32(arg0->half_0);
    r7_1 = u32(arg0->half_2);
    r10_1 = u32(arg0->half_4);
    r2_1 = u32(arg0->half_6);
    arg0->half_0 = u16((r1 + (r12_1 << 0x1b >> 0x18) >> 3) + (((r12_1 & 0x3e0u) >> 2) + r1 >> 3 << 5) + (((r12_1 & 0x7c00u) >> 7) + r1 >> 3 << 0xa));  // (from the original)
    r12_2 = r1 + ((r2_1 & 0x3e0u) >> 2) >> 3;  // (from the original)
    r9_1 = r1 + ((r10_1 & 0x7c00u) >> 7) >> 3;  // (from the original)
    r3_1 = r1 + ((r2_1 & 0x1fu) << 3) >> 3;  // (from the original)
    r4_1 = r1 + ((r2_1 & 0x7c00u) >> 7) >> 3;  // (from the original)
    r2_2 = (r1 + ((r10_1 & 0x1fu) << 3) >> 3) + (r1 + ((r10_1 & 0x3e0u) >> 2) >> 3 << 5);  // (from the original)
    r1_1 = (r1 + (r7_1 << 0x1b >> 0x18) >> 3) + (r1 + ((r7_1 & 0x3e0u) >> 2) >> 3 << 5) + (r1 + ((r7_1 & 0x7c00u) >> 7) >> 3 << 0xa);  // (from the original)
    arg0->half_2 = u16(r1_1);
    arg0->half_4 = u16(r2_2 + (r9_1 << 0xa));  // (from the original)
    arg0->half_6 = u16(r3_1 + (r12_2 << 5) + (r4_1 << 0xa));  // (from the original)
    guest::cpu()->r[1] = r1_1;
    return;
}

}  // namespace d_0060d12c
GUEST_EXPORT(0x0060d12c, d_0060d12c::f_0060d12c);

// f_0060d264: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0060d264 {

struct __attribute__((packed)) Object_0060d264_3 {
    u16 half_0;
    u16 half_2;
    u16 half_4;
    u16 half_6;
    u8 byte_8;
    u8 byte_9;
};
GUEST_OFFSET(Object_0060d264_3, half_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_0060d264_3, half_2, 0x2);  // (from the original)
GUEST_OFFSET(Object_0060d264_3, half_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_0060d264_3, half_6, 0x6);  // (from the original)
GUEST_OFFSET(Object_0060d264_3, byte_8, 0x8);  // (from the original)
GUEST_OFFSET(Object_0060d264_3, byte_9, 0x9);  // (from the original)


u32 f_0060d264(u32 r0, u32 r1, u32 r2, gptr<Object_0060d264_3> arg3) {
    u32 r2_1 = 0;
    u32 r12_1 = 0;
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    r2_1 = r2 & 0xfu;  // (from the original)
    r12_1 = r1 & 0xfu;  // (from the original)
    r0_1 = r0 + (r2_1 + (r2_1 << 2) << 5) + (r12_1 + (r12_1 << 2) << 1) + 0x1cu;  // (from the original)
    *gptr<u16>(r0_1) = u16(u32(arg3->half_0));
    *gptr<u16>(r0_1 + 2u) = u16(u32(arg3->half_2));
    *gptr<u16>(r0_1 + 4u) = u16(u32(arg3->half_4));
    *gptr<u16>(r0_1 + 6u) = u16(u32(arg3->half_6));
    *gptr<u8>(r0_1 + 8u) = u8(u32(arg3->byte_8));
    r1_1 = u32(arg3->byte_9);
    *gptr<u8>(r0_1 + 9u) = u8(r1_1);
    guest::cpu()->r[1] = r1_1;
    return r0_1;
}

}  // namespace d_0060d264
GUEST_EXPORT(0x0060d264, d_0060d264::f_0060d264);

// f_0060de20: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0060de20 {

struct __attribute__((packed)) Object_0060de20_0 {
    u8 unknown_0[0x310];  // (not used here)
    u32 word_310;
};
GUEST_OFFSET(Object_0060de20_0, word_310, 0x310);  // (from the original)

inline constexpr guest::Function<0x004b71c8, u32(u32, u32, u32, u32)> call_004b71c8;  // (from the original)

u32 f_0060de20(gptr<Object_0060de20_0> arg0) {
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    guest::cpu()->r[13] -= 8u;
    r0_1 = arg0->word_310;
    r0_2 = call_004b71c8(r0_1, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    guest::cpu()->r[13] += 8u;
    return r0_2;
}

}  // namespace d_0060de20
GUEST_EXPORT(0x0060de20, d_0060de20::f_0060de20);

// f_0060e094: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0060e094 {

struct __attribute__((packed)) Object_0060e094_0 {
    u8 unknown_0[0xf4];  // (not used here)
    u32 word_f4;
};
GUEST_OFFSET(Object_0060e094_0, word_f4, 0xf4);  // (from the original)

inline guest::global<u32, 0x0060e0c8> global_0060e0c8;  // (from the original)
inline constexpr guest::Function<0x00568630, u32(u32, u32, u32, u32)> call_00568630;  // (from the original)
inline constexpr guest::Function<0x005697e0, u32(u32, u32, u32, u32)> call_005697e0;  // (from the original)

u32 f_0060e094(gptr<Object_0060e094_0> arg0, float S0) {
    u32 r0 = arg0.addr();
    u32 r2_1 = 0;
    u32 r1_1 = 0;
    u32 r0_1 = 0;
    u32 r1_2 = 0;
    u32 r2_2 = 0;
    u32 r3_1 = 0;
    float S0_1 = 0;
    u32 r0_2 = 0;
    u32 r1_3 = 0;
    float S0_2 = 0;
    guest::cpu()->r[13] -= 8u;
    r2_1 = arg0->word_f4;
    r1_1 = r0 + 0x270u;  // (from the original)
    r0_1 = r0 + 0x108u;  // (from the original)
    guest::cpu()->s[0] = S0;
    call_00568630(r0_1, r1_1, r2_1, 0u);
    r1_2 = guest::cpu()->r[1];
    r2_2 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    S0_1 = std::bit_cast<float>(*global_0060e0c8);
    r0_2 = r0 + 0x270u;  // (from the original)
    guest::cpu()->s[0] = S0_1;
    call_005697e0(r0_2, r1_2, r2_2, r3_1);
    r1_3 = guest::cpu()->r[1];
    S0_2 = guest::cpu()->s[0];
    *gptr<u8>(r0 + 0x26bu) = u8(1u);  // (from the original)
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1_3;
    guest::cpu()->s[0] = S0_2;
    return 1u;
}

}  // namespace d_0060e094
GUEST_EXPORT(0x0060e094, d_0060e094::f_0060e094);

// f_0060e190: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0060e190 {

struct __attribute__((packed)) Object_0060e190_0 {
    u8 unknown_0[0x26b];  // (not used here)
    u8 byte_26b;
};
GUEST_OFFSET(Object_0060e190_0, byte_26b, 0x26b);  // (from the original)

inline constexpr guest::Function<0x00568c10, u32(u32, u32, u32, u32)> call_00568c10;  // (from the original)
inline constexpr guest::Function<0x00569544, u32(u32, u32, u32, u32)> call_00569544;  // (from the original)

u32 f_0060e190(gptr<Object_0060e190_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    guest::cpu()->r[13] -= 8u;
    if (u32(arg0->byte_26b) == 1u) {
        r0_1 = r0 + 0x270u;  // (from the original)
        call_00569544(r0_1, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    }
    r0_2 = r0 + 0x108u;  // (from the original)
    guest::cpu()->r[13] += 8u;
    return call_00568c10(r0_2, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_0060e190
GUEST_EXPORT(0x0060e190, d_0060e190::f_0060e190);

// f_0060e47c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0060e47c {

struct __attribute__((packed)) Object_0060e47c_0 {
    u8 unknown_0[0x26c];  // (not used here)
    u8 byte_26c;
};
GUEST_OFFSET(Object_0060e47c_0, byte_26c, 0x26c);  // (from the original)

inline constexpr guest::Function<0x001323bc, u32(u32, u32, u32, u32)> call_001323bc;  // (from the original)
inline constexpr guest::Function<0x00569e6c, u32(u32, u32, u32, u32)> call_00569e6c;  // (from the original)

u32 f_0060e47c(gptr<Object_0060e47c_0> arg0, u32 r1_unused, u32 r2) {
    u32 r0 = arg0.addr();
    u32 r1_1 = 0;
    u32 r4_1 = 0;
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    guest::cpu()->r[13] -= 8u;
    r1_1 = u32(arg0->byte_26c);
    r4_1 = r0 + 0x108u;  // (from the original)
    if (r1_1 != 1u) {
        r0_1 = call_001323bc(r0, r1_1, r2, guest::cpu()->r[3]);
        guest::cpu()->r[13] += 8u;
        return call_00569e6c(r0_1, r4_1, 1u, guest::cpu()->r[3]);
    }
    r0_2 = call_001323bc(r0, r1_1, r2, guest::cpu()->r[3]);
    guest::cpu()->r[13] += 8u;
    return call_00569e6c(r0_2, r4_1, 0u, guest::cpu()->r[3]);
}

}  // namespace d_0060e47c
GUEST_EXPORT(0x0060e47c, d_0060e47c::f_0060e47c);

// f_0060e5c0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0060e5c0 {

struct __attribute__((packed)) Object_0060e5c0_0 {
    u32 word_0;
};
GUEST_OFFSET(Object_0060e5c0_0, word_0, 0x0);  // (from the original)

inline constexpr guest::Function<0x00125aec, u32(u32, u32, u32, u32)> call_00125aec;  // (from the original)
inline constexpr guest::Function<0x00125e3c, u32(u32, u32, u32, u32)> call_00125e3c;  // (from the original)

u32 f_0060e5c0(gptr<Object_0060e5c0_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r1_1 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r1_2 = 0;
    u32 r0_5 = 0;
    u32 r0_6 = 0;
    u32 r1_3 = 0;
    u32 r0_7 = 0;
    u32 r0_8 = 0;
    u32 r1_4 = 0;
    u32 r0_9 = 0;
    u32 r0_10 = 0;
    u32 r1_5 = 0;
    u32 r0_11 = 0;
    u32 r0_12 = 0;
    u32 r1_6 = 0;
    u32 r0_13 = 0;
    u32 ea_1 = 0;
    u32 ea_2 = 0;
    u32 ea_3 = 0;
    u32 ea_4 = 0;
    u32 ea_5 = 0;
    u32 r0_14 = 0;
    u32 r0_15 = 0;
    u32 r0_16 = 0;
    u32 r0_17 = 0;
    u32 r0_18 = 0;
    u32 r1_7 = 0;
    u32 r0_19 = 0;
    u32 r0_20 = 0;
    u32 r1_8 = 0;
    u32 r0_21 = 0;
    u32 r0_22 = 0;
    u32 r1_9 = 0;
    u32 r0_23 = 0;
    u32 r0_24 = 0;
    u32 r1_10 = 0;
    u32 r0_25 = 0;
    r13 = r13 - 8;
    arg0->word_0 = u32(0x8f8b80u);  // (from the original)
    r0_1 = r0 + 4u;
    guest::cpu()->r[13] = r13;
    r0_2 = call_00125aec(r0_1, 0x8f8b80u, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    r1_1 = guest::cpu()->r[1];
    r0_3 = r0_2 + 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_4 = call_00125aec(r0_3, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_2 = guest::cpu()->r[1];
    r0_5 = r0_4 + 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_6 = call_00125aec(r0_5, r1_2, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_3 = guest::cpu()->r[1];
    r0_7 = r0_6 + 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_8 = call_00125aec(r0_7, r1_3, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_4 = guest::cpu()->r[1];
    r0_9 = r0_8 + 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_10 = call_00125aec(r0_9, r1_4, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_5 = guest::cpu()->r[1];
    r0_11 = r0_10 + 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_12 = call_00125aec(r0_11, r1_5, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_6 = guest::cpu()->r[1];
    r0_13 = r0_12 - 0xccu;  // (from the original)
    ea_1 = r0_13 + 0xf4u;  // (from the original)
    *gptr<u32>(ea_1) = u32(0u);
    ea_2 = r0_13 + 0xf8u;  // (from the original)
    *gptr<u8>(ea_2) = u8(0u);
    ea_3 = r0_13 + 0xf9u;  // (from the original)
    *gptr<u8>(ea_3) = u8(0u);
    ea_4 = r0_13 + 0xfau;  // (from the original)
    *gptr<u8>(ea_4) = u8(0u);
    ea_5 = r0_13 + 0xfcu;  // (from the original)
    *gptr<u32>(ea_5) = u32(0u);
    r0_14 = ea_5 + 0xcu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_15 = call_00125e3c(r0_14, r1_6, guest::cpu()->r[2], guest::cpu()->r[3]);
    r0_16 = r0_15 - 0x108u;  // (from the original)
    *gptr<u32>(r0_16 + 0x254u) = u32(0u);  // (from the original)
    *gptr<u32>(r0_16 + 0x258u) = u32(0u);  // (from the original)
    *gptr<u8>(r0_16 + 0x25cu) = u8(0u);  // (from the original)
    *gptr<u8>(r0_16 + 0x25du) = u8(0u);  // (from the original)
    *gptr<u32>(r0_16 + 0x260u) = u32(0u);  // (from the original)
    *gptr<u32>(r0_16) = u32(0x8f80b8u);  // (from the original)
    *gptr<u32>(r0_16 + 0x264u) = u32(0u);  // (from the original)
    *gptr<u8>(r0_16 + 0x268u) = u8(0u);  // (from the original)
    *gptr<u8>(r0_16 + 0x269u) = u8(0u);  // (from the original)
    *gptr<u8>(r0_16 + 0x26au) = u8(0u);  // (from the original)
    *gptr<u8>(r0_16 + 0x26bu) = u8(0u);  // (from the original)
    *gptr<u8>(r0_16 + 0x26cu) = u8(0u);  // (from the original)
    r0_17 = r0_16 + 0x270u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_18 = call_00125aec(r0_17, 0x8f80b8u, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    r1_7 = guest::cpu()->r[1];
    r0_19 = r0_18 + 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_20 = call_00125aec(r0_19, r1_7, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_8 = guest::cpu()->r[1];
    r0_21 = r0_20 + 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_22 = call_00125aec(r0_21, r1_8, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_9 = guest::cpu()->r[1];
    r0_23 = r0_22 + 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_24 = call_00125aec(r0_23, r1_9, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_10 = guest::cpu()->r[1];
    r0_25 = r0_24 - 0x2e8u;  // (from the original)
    *gptr<u32>(r0_25 + 0x310u) = u32(0u);  // (from the original)
    r13 = r13 + 8;
    guest::cpu()->r[1] = r1_10;
    guest::cpu()->r[13] = r13;
    return r0_25;
}

}  // namespace d_0060e5c0
GUEST_EXPORT(0x0060e5c0, d_0060e5c0::f_0060e5c0);

// f_0060e914: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0060e914 {

struct __attribute__((packed)) Object_0060e914_0 {
    u16 half_0;
};
GUEST_OFFSET(Object_0060e914_0, half_0, 0x0);  // (from the original)

inline constexpr guest::Function<0x0056ae38, u32(u32, u32, u32, u32)> call_0056ae38;  // (from the original)
inline constexpr guest::Function<0x0056af2c, u32(u32, u32, u32, u32)> call_0056af2c;  // (from the original)

u32 f_0060e914(gptr<Object_0060e914_0> arg0, u32 r1, u32 r2, u32 r3) {
    u32 r0 = arg0.addr();
    u32 r4 = guest::cpu()->r[4];
    u32 r13 = guest::cpu()->r[13];
    u32 r5_1 = 0;
    u32 r12_1 = 0;
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r0_1 = 0;
    u32 r6_1 = 0;
    u32 res_1 = 0;
    u32 r2_2 = 0;
    u32 r3_1 = 0;
    u32 r0_2 = 0;
    u32 r1_2 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r1_3 = 0;
    u32 r0_5 = 0;
    u32 r1_4 = 0;
    u32 r0_6 = 0;
    r4 = r0;
    r13 = r13 - 0x20u;  // (from the original)
    r5_1 = sxth(r2);
    *gptr<u16>(r13 + 4u) = u16(u32(arg0->half_0));
    if (r5_1 == 0) {
        goto L_60e990;
    }
    r12_1 = u32(s32(s16(arg0->half_0)));
    r1_1 = sxth(r1);
    r2_1 = sxth(r2);
    r0_1 = u32(s32(r2_1) >> 1);
    r6_1 = sxth(r1_1 - r12_1);
    res_1 = r5_1 - r6_1;
    r2_2 = r2_1 << 2;
    if (res_1 >> 0x1f != ((r5_1 ^ r6_1) & (r5_1 ^ res_1)) >> 0x1f) {  // (from the original)
        if (r3 == 2u) {
            goto L_60e9ac;
        }
    }
    if (s32(r5_1) > s32(r6_1)) {
        if (r3 == 1u) {
            goto L_60e9d4;
        }
    }
    r3_1 = sxth(r2_2);
    *gptr<u32>(r13) = u32(r0_1);
    r0_2 = r13 + 8u;
    *gptr<u16>(r13 + 8u) = u16(r12_1);
    guest::cpu()->r[13] = r13;
    call_0056af2c(r0_2, r1_1, 8u, r3_1);
    r0 = u32(*gptr<u16>(r13 + 8u));
L_60e98c:;
    *gptr<u16>(r4) = u16(r0);
L_60e990:;
    r1_2 = u32(*gptr<u16>(r13 + 4u));
    r0_3 = u32(*gptr<u16>(r4)) - r1_2;
    *gptr<u16>(r13) = u16(r0_3);
    r0_4 = uxth(r0_3);
    r13 = r13 + 0x20u;  // (from the original)
    guest::cpu()->r[1] = r1_2;
    guest::cpu()->r[13] = r13;
    return r0_4;
L_60e9ac:;
    *gptr<u32>(r13) = u32(r0_1);
    r1_3 = r1_1 - 0x10000u;  // (from the original)
    r0_5 = r13 + 8u;
    *gptr<u32>(r13 + 8u) = u32(r12_1);
    guest::cpu()->r[13] = r13;
    call_0056ae38(r0_5, r1_3, 8u, r2_2);
    r0 = *gptr<u32>(r13 + 8u);
    guest::preempt();
    goto L_60e98c;
L_60e9d4:;
    *gptr<u32>(r13) = u32(r0_1);
    r1_4 = r1_1 + 0x10000u;  // (from the original)
    r0_6 = r13 + 8u;
    *gptr<u32>(r13 + 8u) = u32(r12_1);
    guest::cpu()->r[13] = r13;
    call_0056ae38(r0_6, r1_4, 8u, r2_2);
    *gptr<u16>(r4) = u16(*gptr<u32>(r13 + 8u));
    guest::preempt();
    goto L_60e990;
}

}  // namespace d_0060e914
GUEST_EXPORT(0x0060e914, d_0060e914::f_0060e914);

// f_0060ea4c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0060ea4c {

struct __attribute__((packed)) Object_0060ea4c_0 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u8 byte_10;
    u8 unknown_11[0x3];  // (not used here)
    u32 word_14;
    u32 word_18;
    u32 word_1c;
    u8 unknown_20[0x6];  // (not used here)
    u8 byte_26;
};
GUEST_OFFSET(Object_0060ea4c_0, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_0060ea4c_0, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Object_0060ea4c_0, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Object_0060ea4c_0, byte_10, 0x10);  // (from the original)
GUEST_OFFSET(Object_0060ea4c_0, word_14, 0x14);  // (from the original)
GUEST_OFFSET(Object_0060ea4c_0, word_18, 0x18);  // (from the original)
GUEST_OFFSET(Object_0060ea4c_0, word_1c, 0x1c);  // (from the original)
GUEST_OFFSET(Object_0060ea4c_0, byte_26, 0x26);  // (from the original)

inline guest::global<u32, 0x0060ea98> global_0060ea98;  // (from the original)
inline guest::global<u32, 0x008806bc> global_008806bc;  // (from the original)
inline guest::global<u32, 0x00ae5658> global_00ae5658;  // (from the original)

void f_0060ea4c(gptr<Object_0060ea4c_0> arg0) {
    float S0_1 = 0;
    u32 r2_1 = 0;
    S0_1 = std::bit_cast<float>(*global_0060ea98);
    r2_1 = *gptr<u32>(0x8806bcu + 4);  // (from the original)
    arg0->word_14 = u32(*global_008806bc);
    arg0->word_18 = u32(r2_1);
    arg0->word_4 = u32(*global_00ae5658);
    arg0->word_8 = u32(*gptr<u32>(0xae5658u + 4u));  // (from the original)
    arg0->word_c = u32(*gptr<u32>(0xae5658u + 8u));  // (from the original)
    arg0->byte_10 = u8(0u);
    arg0->word_1c = u32(std::bit_cast<u32>(S0_1));
    arg0->byte_26 = u8(0u);
    guest::cpu()->r[1] = 0u;
    guest::cpu()->s[0] = S0_1;
    return;
}

}  // namespace d_0060ea4c
GUEST_EXPORT(0x0060ea4c, d_0060ea4c::f_0060ea4c);
