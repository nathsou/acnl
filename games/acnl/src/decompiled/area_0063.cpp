// Functions decompiled by tools/decomp (docs/decomp.md), each proved equal to the recompiled original (prove-cpp). The
// names are generated (d_<address>::f_<address>, Object_<address>_<argument>, word_<offset>) and still to be chosen.
#include "guest/guest.hpp"

#include <bit>

using guest::gptr;

// f_00630148: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00630148 {


u32 f_00630148(u32 r0) {
    u32 r1 = 0;
    float S0 = 0;
    r1 = 0x89515cu;  // (from the original)
    if (r0 >= 7u) {
        r0 = 0u;
    }
    r0 = r1 + (r0 << 2);
    S0 = std::bit_cast<float>(*gptr<u32>(r0));
    guest::cpu()->r[1] = r1;
    guest::cpu()->s[0] = S0;
    return r0;
}

}  // namespace d_00630148
GUEST_EXPORT(0x00630148, d_00630148::f_00630148);

// f_006310c0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006310c0 {

struct __attribute__((packed)) Object_006310c0_0 {
    u8 unknown_0[0x308];  // (not used here)
    u8 byte_308;
};
GUEST_OFFSET(Object_006310c0_0, byte_308, 0x308);  // (from the original)

inline constexpr guest::Function<0x005707f0, u32(u32, u32, u32, u32)> call_005707f0;  // (from the original)

u32 f_006310c0(gptr<Object_006310c0_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r1 = 0;
    float S0 = 0;
    arg0->byte_308 = u8(1u);
    r1 = 0x1fu;  // (from the original)
    S0 = std::bit_cast<float>(*gptr<u32>(0x6310d4u));  // (from the original)
    guest::cpu()->s[0] = S0;
    return call_005707f0(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_006310c0
GUEST_EXPORT(0x006310c0, d_006310c0::f_006310c0);

// f_00631cc0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00631cc0 {

struct __attribute__((packed)) Object_00631cc0_1 {
    u8 unknown_0[0x68];  // (not used here)
    u32 word_68;
};
GUEST_OFFSET(Object_00631cc0_1, word_68, 0x68);  // (from the original)


u32 f_00631cc0(u32 r0_unused, gptr<Object_00631cc0_1> arg1, u32 r2) {
    u32 res = 0;
    u32 r0 = 0;
    u32 r1 = arg1.addr();
    u32 r3 = 0;
    u32 zf = 0;
    r0 = u32(*gptr<u16>(arg1->word_68 + 0x70u));  // (from the original)
    if (r2 < 7u) {
        goto L_631d14;
    }
    r2 = 0x842614u;  // (from the original)
    r1 = 0u;
    r3 = r2 + 0xeu;  // (from the original)
    goto L_631cfc;
L_631ce0:;
    if (r1 == 0) {
        goto L_631cfc;
    }
    zf = u32(*gptr<u16>(r2)) == r0;
    if (!zf) {
        zf = u32(*gptr<u16>(r3)) == r0;
    }
    if (zf) {
        r0 = 1u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
L_631cfc:;
    r1 = r1 + 1u;
    res = r1 - 7u;
    r2 = r2 + 2u;
    r3 = r3 + 2u;
    if (res >> 0x1f != ((r1 ^ 7u) & (r1 ^ res)) >> 0x1f) {  // (from the original)
        guest::preempt();
        goto L_631ce0;
    }
    r0 = 0u;
    guest::cpu()->r[1] = r1;
    return r0;
L_631d14:;
    if (r2 == 0) {
        r0 = 0u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r1 = u32(*gptr<u16>(0x842614u + (r2 << 1)));  // (from the original)
    if (r1 == r0) {
        r0 = 1u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r1 = u32(*gptr<u16>(0x842622u + (r2 << 1)));  // (from the original)
    if (r1 != r0) {
        r0 = 0u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r0 = 1u;
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_00631cc0
GUEST_EXPORT(0x00631cc0, d_00631cc0::f_00631cc0);

// f_00631d5c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00631d5c {

struct __attribute__((packed)) Object_00631d5c_1 {
    u8 unknown_0[0x102c];  // (not used here)
    u32 word_102c;
};
GUEST_OFFSET(Object_00631d5c_1, word_102c, 0x102c);  // (from the original)

inline constexpr guest::Function<0x00318944, u32(u32, u32, u32, u32)> call_00318944;  // (from the original)
inline constexpr guest::Function<0x00632904, u32(u32, u32, u32, u32)> call_00632904;  // (from the original)

u32 f_00631d5c(u32 r0, gptr<Object_00631d5c_1> arg1, u32 r2, u32 r3) {
    u32 ea = 0;
    u32 r1 = arg1.addr();
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 0x10;  // (from the original)
    r5 = r0;
    r6 = r1;
    r0 = arg1->word_102c;
    if (r0 == 0) {
        goto L_631dd8;
    }
    r0 = r0 + 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00318944(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r3 = guest::cpu()->r[3];
    r4 = r0;
    if (r0 == 0) {
        goto L_631dd8;
    }
    r2 = r0;
    r1 = r6;
    r0 = r5;
    guest::cpu()->r[13] = r13;
    r0 = call_00632904(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    if (r4 >= 7u) {
        goto L_631dd8;
    }
    ea = 0x842630u + (r4 << 3);  // (from the original)
    r0 = ea;
    r1 = *gptr<u32>(ea);
    if (r1 == 0) {
        r2 = *gptr<u32>(r0 + 4u);
        if ((r2 & 1u) == 0) {
            goto L_631dd8;
        }
        if (r2 == 0) {
            goto L_631dd8;
        }
    }
    r2 = *gptr<u32>(r0 + 4u);
    r0 = 0u;
    ea = r5 + 0x14u;  // (from the original)
    *gptr<u32>(ea) = u32(r1);
    *gptr<u32>(ea + 4) = u32(r2);
    *gptr<u8>(r5 + 0x38u) = u8(r0);  // (from the original)
L_631dd8:;
    r13 = r13 + 0x10;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_00631d5c
GUEST_EXPORT(0x00631d5c, d_00631d5c::f_00631d5c);

// f_006322a0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006322a0 {

struct __attribute__((packed)) Object_006322a0_0 {
    u8 unknown_0[0x3c];  // (not used here)
    u8 byte_3c;
};
GUEST_OFFSET(Object_006322a0_0, byte_3c, 0x3c);  // (from the original)

inline constexpr guest::Function<0x00632428, u32(u32, u32, u32, u32)> call_00632428;  // (from the original)

u32 f_006322a0(gptr<Object_006322a0_0> arg0, u32 r1) {
    u32 r0 = arg0.addr();
    u32 r4 = guest::cpu()->r[4];
    guest::cpu()->r[13] -= 8u;
    r4 = r0;
    if (u32(arg0->byte_3c) != 0) {
        r1 = 0u;
        r0 = r4;
        r0 = call_00632428(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
    }
    r0 = 0u;
    *gptr<u8>(r4 + 0x3cu) = u8(r0);  // (from the original)
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_006322a0
GUEST_EXPORT(0x006322a0, d_006322a0::f_006322a0);

// f_006323d8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006323d8 {

inline constexpr guest::Function<0x0051ddb8, u32(u32, u32, u32, u32)> call_0051ddb8;  // (from the original)
inline constexpr guest::Function<0x00632488, u32(u32, u32, u32, u32)> call_00632488;  // (from the original)

u32 f_006323d8(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    guest::cpu()->r[13] -= 0x18u;  // (from the original)
    r5 = r1;
    r6 = r2;
    r7 = r3;
    r4 = r0;
    r0 = call_00632488(r0, r1, r2, r3);
    if (r0 == 0) {
        r5 = 0u;
    }
    r2 = 0xffffu & (r6 << 8) - ((r6 << 5) - r6) << 3;  // (from the original)
    r3 = r7;
    r1 = r5;
    r0 = r4;
    r0 = call_0051ddb8(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r0 = 1u;
    *gptr<u8>(r4 + 0x39u) = u8(r0);  // (from the original)
    guest::cpu()->r[13] += 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_006323d8
GUEST_EXPORT(0x006323d8, d_006323d8::f_006323d8);

// f_00632428: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00632428 {

struct __attribute__((packed)) Object_00632428_0 {
    u8 unknown_0[0x28];  // (not used here)
    u32 word_28;
    u32 word_2c;
};
GUEST_OFFSET(Object_00632428_0, word_28, 0x28);  // (from the original)
GUEST_OFFSET(Object_00632428_0, word_2c, 0x2c);  // (from the original)

inline constexpr guest::Function<0x002e5b08, u32(u32, u32, u32, u32)> call_002e5b08;  // (from the original)
inline constexpr guest::Function<0x002e6450, u32(u32, u32, u32, u32)> call_002e6450;  // (from the original)
inline constexpr guest::Function<0x0072079c, u32(u32, u32, u32, u32)> call_0072079c;  // (from the original)

u32 f_00632428(gptr<Object_00632428_0> arg0, u32 r1) {
    u32 r0 = arg0.addr();
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r4 = r0;
    r5 = ~0u;
    if (r1 == 0) {
        goto L_632464;
    }
    r0 = arg0->word_28;
    if (r0 != 0) {
        r1 = arg0->word_2c;
        r0 = *gptr<u32>(r0 + 0xcu);  // (from the original)
        if (r1 == r0) {
            r0 = r4 + 0x1cu;  // (from the original)
            r0 = call_002e6450(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
            r1 = guest::cpu()->r[1];
        }
    }
    *gptr<u32>(r4 + 0x34u) = u32(r5);  // (from the original)
L_632460:;
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
L_632464:;
    r0 = r4 + 0x1cu;  // (from the original)
    r0 = call_0072079c(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 != 0) {
        guest::preempt();
        goto L_632460;
    }
    r0 = r4 + 0x1cu;  // (from the original)
    r0 = call_002e5b08(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    *gptr<u32>(r4 + 0x34u) = u32(r5);  // (from the original)
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_00632428
GUEST_EXPORT(0x00632428, d_00632428::f_00632428);

// f_00632488: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00632488 {

inline constexpr guest::Function<0x0011a391, u32(u32, u32, u32, u32)> call_0011a390;  // (from the original)
inline constexpr guest::Function<0x0011a7df, u32(u32, u32, u32, u32)> call_0011a7de;  // (from the original)
inline constexpr guest::Function<0x002f74c8, u32(u32, u32, u32, u32)> call_002f74c8;  // (from the original)
inline constexpr guest::Function<0x002fb328, u32(u32, u32, u32, u32)> call_002fb328;  // (from the original)
inline constexpr guest::Function<0x002fc900, u32(u32, u32, u32, u32)> call_002fc900;  // (from the original)
inline constexpr guest::Function<0x002ff8b0, u32(u32, u32, u32, u32)> call_002ff8b0;  // (from the original)
inline constexpr guest::Function<0x003009a9, u32(u32, u32, u32, u32)> call_003009a8;  // (from the original)
inline constexpr guest::Function<0x00305f2c, u32(u32, u32, u32, u32)> call_00305f2c;  // (from the original)
inline constexpr guest::Function<0x00313440, u32(u32, u32, u32, u32)> call_00313440;  // (from the original)

u32 f_00632488(u32 r0) {
    u32 res = 0;
    u32 r1 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r9 = guest::cpu()->r[9];
    u32 zf = 0;
    guest::cpu()->r[13] -= 0x20u;  // (from the original)
    r8 = 0x94daacu;  // (from the original)
    r1 = u32(*gptr<u8>(r8));
    if (r1 != 0) {
        r0 = u32(s32(s8(*gptr<u8>(r8 + 1u))));
        goto L_63257c;
    }
    r9 = 1u;
    r1 = 0u;
    *gptr<u8>(r8) = u8(r9);
    *gptr<u8>(r8 + 1u) = u8(r1);
    r0 = u32(*gptr<u8>(r0 + 0x3bu));  // (from the original)
    if (r0 != 0) {
        goto L_632578;
    }
    r0 = call_002fc900(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 != 0) {
        goto L_632578;
    }
    r0 = call_00305f2c(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 == 3u) {
        goto L_632578;
    }
    r0 = 0xaaef18u;  // (from the original)
    r4 = *gptr<u32>(r0 + 0x234u);  // (from the original)
    if (r4 == 0) {
        goto L_632580;
    }
    r7 = r4 + 0x8f77u;  // (from the original)
    r0 = call_002f74c8(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r0 = call_00313440(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r5 = r0;
    r0 = call_002fb328(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = r5;
    r0 = r0 + 0x292a4u;  // (from the original)
    r0 = call_003009a8(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r6 = r0;
    if (r0 != 0) {
        r0 = call_0011a390(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        if (r0 != 0) {
            goto L_632580;
        }
    }
    r0 = u32(*gptr<u8>(r7 + 0x11u));  // (from the original)
    res = r0 << 0x19;  // (from the original)
    r1 = res;
    if (res >> 0x1f) {  // (from the original)
        res = r0 >> 7;
        zf = res == 0;
        r1 = res;
        if (zf) {
            zf = r5 == r0 << 0x1a >> 0x1c;  // (from the original)
        }
        if (zf) {
            goto L_632580;
        }
    }
    r4 = r4 + 0x5705u;  // (from the original)
    if (u32(*gptr<u8>(r4)) & 4u) {
        goto L_632580;
    }
    if (r6 == 0) {
        goto L_632580;
    }
    r0 = 4u;
    r0 = call_002ff8b0(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = r0;
    r0 = r6;
    r0 = call_0011a7de(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 == 0) {
        goto L_632580;
    }
L_632578:;
    r0 = 0u;
L_63257c:;
    guest::cpu()->r[13] += 0x20u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
L_632580:;
    r0 = 1u;
    *gptr<u8>(r8 + 1u) = u8(r9);
    guest::cpu()->r[13] += 0x20u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_00632488
GUEST_EXPORT(0x00632488, d_00632488::f_00632488);

// f_00632594: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00632594 {

struct __attribute__((packed)) Object_00632594_1 {
    u8 unknown_0[0x68];  // (not used here)
    u32 word_68;
};
GUEST_OFFSET(Object_00632594_1, word_68, 0x68);  // (from the original)

inline constexpr guest::Function<0x002073dc, u32(u32, u32, u32, u32)> call_002073dc;  // (from the original)
inline constexpr guest::Function<0x002e66c0, u32(u32, u32, u32, u32)> call_002e66c0;  // (from the original)
inline constexpr guest::Function<0x0070ac68, u32(u32, u32, u32, u32)> call_0070ac68;  // (from the original)

u32 f_00632594(u32 r0, gptr<Object_00632594_1> arg1, u32 r2) {
    u32 r1 = arg1.addr();
    u32 r3 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r13 = guest::cpu()->r[13];
    r4 = r0;
    r0 = arg1->word_68;
    r13 = r13 - 0x28u;  // (from the original)
    r5 = r2;
    r3 = 1u;
    r2 = *gptr<u32>(r0 + 0xb4u);  // (from the original)
    r1 = r13 + 0xcu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0070ac68(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    if (r0 == 0) {
        r13 = r13 + 0x28u;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    r0 = *gptr<u32>(r4 + 0x28u);  // (from the original)
    r1 = 1u;
    if (r0 == 0) {
        goto L_6325ec;
    }
    if (*gptr<u32>(r4 + 0x2cu) != *gptr<u32>(r0 + 0xcu)) {  // (from the original)
        goto L_6325ec;
    }
    if (*gptr<u32>(r4 + 0x34u) == r5) {  // (from the original)
        goto L_632620;
    }
L_6325ec:;
    *gptr<u32>(r13 + 8u) = u32(0u);
    *gptr<u32>(r13 + 4u) = u32(r1);
    *gptr<u32>(r13) = u32(0xae5664u);  // (from the original)
    r3 = 0x975beeu;  // (from the original)
    r2 = r13 + 0xcu;  // (from the original)
    r1 = r5;
    r0 = r4 + 0x1cu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002073dc(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    *gptr<u32>(r4 + 0x34u) = u32(r5);  // (from the original)
    r13 = r13 + 0x28u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
L_632620:;
    *gptr<u32>(r13) = u32(r1);
    r3 = 0xae5664u;  // (from the original)
    r2 = 0x975beeu;  // (from the original)
    r1 = r13 + 0xcu;  // (from the original)
    r0 = r4 + 0x1cu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002e66c0(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r13 = r13 + 0x28u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_00632594
GUEST_EXPORT(0x00632594, d_00632594::f_00632594);

// f_00632648: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00632648 {

struct __attribute__((packed)) Object_00632648_1 {
    u8 unknown_0[0x102c];  // (not used here)
    u32 word_102c;
};
GUEST_OFFSET(Object_00632648_1, word_102c, 0x102c);  // (from the original)

inline constexpr guest::Function<0x00318944, u32(u32, u32, u32, u32)> call_00318944;  // (from the original)
inline constexpr guest::Function<0x00632428, u32(u32, u32, u32, u32)> call_00632428;  // (from the original)
inline constexpr guest::Function<0x00632904, u32(u32, u32, u32, u32)> call_00632904;  // (from the original)

u32 f_00632648(u32 r0, gptr<Object_00632648_1> arg1, u32 r2) {
    u32 r1 = arg1.addr();
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r6 = r0;
    r4 = r1;
    r5 = r2;
    r0 = arg1->word_102c;
    if (r0 == 0) {
        goto L_632698;
    }
    r0 = r0 + 0x28u;  // (from the original)
    r0 = call_00318944(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 == 0) {
        goto L_632698;
    }
    r2 = 0u;
    r1 = r4;
    r0 = r6;
    r0 = call_00632904(r0, r1, r2, guest::cpu()->r[3]);
    r2 = guest::cpu()->r[2];
    r1 = r5;
    r0 = r6;
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    return call_00632428(r0, r1, r2, guest::cpu()->r[3]);
L_632698:;
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_00632648
GUEST_EXPORT(0x00632648, d_00632648::f_00632648);

// f_00636bf0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00636bf0 {

inline constexpr guest::Function<0x002ff6f8, u32(u32, u32, u32, u32)> call_002ff6f8;  // (from the original)
inline constexpr guest::Function<0x005e3550, u32(u32, u32, u32, u32)> call_005e3550;  // (from the original)
inline constexpr guest::Function<0x00603a28, u32(u32, u32, u32, u32)> call_00603a28;  // (from the original)

u32 f_00636bf0(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r13 = guest::cpu()->r[13];
    r5 = r0;
    r13 = r13 - 0x40u;  // (from the original)
    r4 = r1;
    r0 = 3u;
    guest::cpu()->r[13] = r13;
    r0 = call_002ff6f8(r0, r1, r2, r3);
    r1 = r0;
    r0 = 0u;
    *gptr<u32>(r13) = u32(r0);
    *gptr<u32>(r13 + 4) = u32(8u);
    r2 = r1 + 0x1au;  // (from the original)
    r3 = r0;
    *gptr<u32>(r13 + 8u) = u32(r0);
    r1 = 0x841c7cu;  // (from the original)
    r0 = r13 + 0x10u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_005e3550(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    r0 = *gptr<u32>(r5 + 4u);
    r1 = *gptr<u32>(r4);
    *gptr<u32>(r4) = u32(r1 + 1u);
    r2 = r13 + 0x10u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00603a28(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r0 = r13 + 0x10u;  // (from the original)
    r13 = r13 + 0x40u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_00636bf0
GUEST_EXPORT(0x00636bf0, d_00636bf0::f_00636bf0);

// f_0063ca1c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0063ca1c {

struct __attribute__((packed)) Object_0063ca1c_0 {
    u8 unknown_0[0xf0];  // (not used here)
    u32 word_f0;
    u8 unknown_f4[0x181];  // (not used here)
    u8 byte_275;
};
GUEST_OFFSET(Object_0063ca1c_0, word_f0, 0xf0);  // (from the original)
GUEST_OFFSET(Object_0063ca1c_0, byte_275, 0x275);  // (from the original)

inline constexpr guest::Function<0x0011ac4d, u32(u32, u32, u32, u32)> call_0011ac4c;  // (from the original)
inline constexpr guest::Function<0x002fb94c, u32(u32, u32, u32, u32)> call_002fb94c;  // (from the original)
inline constexpr guest::Function<0x00318fbc, u32(u32, u32, u32, u32)> call_00318fbc;  // (from the original)
inline constexpr guest::Function<0x004e3a7c, u32(u32, u32, u32, u32)> call_004e3a7c;  // (from the original)

u32 f_0063ca1c(gptr<Object_0063ca1c_0> arg0, u32 r1, u32 r2, u32 r3) {
    u32 res = 0;
    u32 r0 = arg0.addr();
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r13 = guest::cpu()->r[13];
    u32 zf = 0;
    r13 = r13 - 0x60u;  // (from the original)
    r5 = r1;
    if (r1 >= 0x10u) {  // (from the original)
        goto L_63cb64;
    }
    r1 = 4u;
    r4 = r0 + 0x270u;  // (from the original)
    arg0->byte_275 = u8(r1);
    r0 = arg0->word_f0;
    if (r0 == 0) {
        goto L_63cb00;
    } else {
        r0 = r0 + 0x1000u;  // (from the original)
        r6 = *gptr<u32>(r0 + 0x28u);  // (from the original)
    }
    guest::cpu()->r[13] = r13;
    r0 = call_002fb94c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r3 = guest::cpu()->r[3];
    zf = r6 == 0;
    r7 = r0;
    if (!zf) {
        zf = r7 == 0;
    }
    if (zf) {
        goto L_63cb64;
    }
    if (s32(r5) >= s32(0xcu)) {  // (from the original)
        goto L_63cb14;
    }
    r1 = 0x48u;  // (from the original)
    r2 = u32(s32(s8(*gptr<u8>(0x24f0u + r6))));  // (from the original)
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_00318fbc(r0, r1, r2, r3);
    r6 = r13 + (r5 + (r5 << 1) << 1);
    r0 = u32(*gptr<u16>(r6));
    if (r0 == 0x6000u) {  // (from the original)
        r5 = 1u;
        goto L_63cac4;
    }
    res = r0 - 0x6001u;  // (from the original)
    r0 = res;
    if (res == 0) {
        r5 = 3u;
        goto L_63cac4;
    }
    if (r0 == 1u) {
        r5 = 0u;
        goto L_63cac4;
    }
    if (r0 == 2u) {
        r5 = 2u;
    } else {
        r5 = 4u;
    }
L_63cac4:;
    r2 = u32(*gptr<u8>(r6 + 5u));
    r1 = u32(*gptr<u8>(r6 + 4u));
    r3 = r5;
    r0 = r7 + 0x8d78u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_004e3a7c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    if (r0 == 0) {
        goto L_63cb64;
    }
    *gptr<u8>(r4 + 3u) = u8(u32(*gptr<u8>(r6 + 4u)));
    *gptr<u8>(r4 + 4u) = u8(u32(*gptr<u8>(r6 + 5u)));
    *gptr<u8>(r4 + 5u) = u8(r5);
    goto L_63cb58;
L_63cb00:;
    guest::cpu()->r[13] = r13;
    r0 = call_002fb94c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    goto L_63cb64;
L_63cb14:;
    *gptr<u32>(r13 + 4u) = u32(1u);
    r3 = r13 + 0x10u;  // (from the original)
    r2 = r13 + 0xcu;  // (from the original)
    r1 = r13 + 8u;
    r0 = r6;
    *gptr<u32>(r13) = u32(r5);
    guest::cpu()->r[13] = r13;
    r0 = call_0011ac4c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    if (r0 == 0) {
        goto L_63cb64;
    }
    *gptr<u8>(r4 + 3u) = u8(*gptr<u32>(r13 + 8u));
    *gptr<u8>(r4 + 4u) = u8(*gptr<u32>(r13 + 0xcu));  // (from the original)
    *gptr<u8>(r4 + 5u) = u8(*gptr<u32>(r13 + 0x10u));  // (from the original)
L_63cb58:;
    r0 = 1u;
    r13 = r13 + 0x60u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
L_63cb64:;
    r0 = 0u;
    r13 = r13 + 0x60u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_0063ca1c
GUEST_EXPORT(0x0063ca1c, d_0063ca1c::f_0063ca1c);

// f_0063cb74: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0063cb74 {

struct __attribute__((packed)) Object_0063cb74_0 {
    u8 unknown_0[0x280];  // (not used here)
    u8 byte_280;
};
GUEST_OFFSET(Object_0063cb74_0, byte_280, 0x280);  // (from the original)

inline constexpr guest::Function<0x002fc8e8, u32(u32, u32, u32, u32)> call_002fc8e8;  // (from the original)
inline constexpr guest::Function<0x002fc934, u32(u32, u32, u32, u32)> call_002fc934;  // (from the original)
inline constexpr guest::Function<0x002fcbb0, u32(u32, u32, u32, u32)> call_002fcbb0;  // (from the original)
inline constexpr guest::Function<0x00304f30, u32(u32, u32, u32, u32)> call_00304f30;  // (from the original)
inline constexpr guest::Function<0x0030b6b8, u32(u32, u32, u32, u32)> call_0030b6b8;  // (from the original)
inline constexpr guest::Function<0x0030f594, u32(u32, u32, u32, u32)> call_0030f594;  // (from the original)
inline constexpr guest::Function<0x00335214, u32(u32, u32, u32, u32)> call_00335214;  // (from the original)
inline constexpr guest::Function<0x0051ca3c, u32(u32, u32, u32, u32)> call_0051ca3c;  // (from the original)
inline constexpr guest::Function<0x005be180, u32(u32, u32, u32, u32)> call_005be180;  // (from the original)
inline constexpr guest::Function<0x007d0f40, u32(u32, u32, u32, u32)> call_007d0f40;  // (from the original)

u32 f_0063cb74(gptr<Object_0063cb74_0> arg0, u32 r1, u32 r2, u32 r3) {
    u32 r0 = arg0.addr();
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r13 = guest::cpu()->r[13];
    r4 = r0;
    r13 = r13 - 0x20u;  // (from the original)
    r0 = u32(arg0->byte_280);
    r8 = 0u;
    r6 = r4 + 0x200u;  // (from the original)
    if (r0 == 0) {
        goto L_63cc68;
    }
    if (r0 != 1u) {
        goto L_63cc60;
    }
    guest::cpu()->r[13] = r13;
    r0 = call_0051ca3c(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = 4u;
    guest::cpu()->r[13] = r13;
    r0 = call_005be180(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = u32(*gptr<u16>(r6 + 0x70u));  // (from the original)
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_002fcbb0(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_0030f594(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 != 0) {
        r3 = 0u;
        r1 = 1u;
        r2 = *gptr<u32>(*gptr<u32>(r4 + 0xf0u) + 0x1030u);  // (from the original)
        r0 = r13;
        guest::cpu()->r[13] = r13;
        r0 = call_00304f30(r0, r1, r2, r3);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
    }
    r1 = r13;
    r0 = r4 + 0x130u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002fc8e8(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    *gptr<u8>(r4 + 0x138u) = u8(r8);  // (from the original)
    *gptr<u8>(r4 + 0x27au) = u8(r8);  // (from the original)
    r0 = *gptr<u32>(r4 + 0xf0u);  // (from the original)
    if (r0 == 0) {
        goto L_63cc58;
    }
    r0 = *gptr<u32>(r0 + 0x1028u);  // (from the original)
    if (r0 == 0) {
        goto L_63cc58;
    }
    r1 = r13;
    r0 = r0 + 0x249au;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002fc8e8(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r3 = guest::cpu()->r[3];
    r0 = *gptr<u32>(r4 + 0xf0u);  // (from the original)
    if (r0 == 0) {
        goto L_63cc58;
    }
    r1 = r13;
    r2 = *gptr<u32>(r0 + 0x1030u);  // (from the original)
    r0 = r13 + 4u;
    guest::cpu()->r[13] = r13;
    r0 = call_00335214(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        goto L_63cc58;
    }
    r1 = r13 + 4u;
    r0 = 4u;
    guest::cpu()->r[13] = r13;
    r0 = call_007d0f40(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
L_63cc58:;
    r0 = r13;
L_63cc60:;
    r13 = r13 + 0x20u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
L_63cc68:;
    guest::cpu()->r[13] = r13;
    r0 = call_0051ca3c(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r5 = r0;
    r0 = *gptr<u32>(r4 + 0xf0u);  // (from the original)
    if (r0 == 0) {
        goto L_63cd00;
    }
    r0 = *gptr<u32>(r0 + 0x1028u);  // (from the original)
    if (r0 == 0) {
        goto L_63cd00;
    }
    r1 = r0 + 0x249au;  // (from the original)
    r7 = r1;
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_002fc934(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_0030b6b8(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    *gptr<u16>(r6 + 0x70u) = u16(r0);  // (from the original)
    r1 = r5 + 0x6cu;  // (from the original)
    r0 = r7;
    guest::cpu()->r[13] = r13;
    r0 = call_002fc8e8(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = *gptr<u32>(r4 + 0xf0u);  // (from the original)
    if (r0 == 0) {
        goto L_63cd00;
    }
    r1 = r5 + 0x6cu;  // (from the original)
    r2 = *gptr<u32>(r0 + 0x1030u);  // (from the original)
    r0 = r13 + 4u;
    guest::cpu()->r[13] = r13;
    r0 = call_00335214(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        goto L_63cd00;
    }
    r1 = r13 + 4u;
    r0 = 4u;
    guest::cpu()->r[13] = r13;
    r0 = call_007d0f40(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
L_63cd00:;
    r1 = 3u;
    r0 = r5;
    guest::cpu()->r[13] = r13;
    r0 = call_005be180(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    *gptr<u8>(r4 + 0x27au) = u8(1u);  // (from the original)
    r1 = r5 + 0x6cu;  // (from the original)
    r0 = r4 + 0x130u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002fc8e8(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    *gptr<u8>(r4 + 0x138u) = u8(r8);  // (from the original)
    r13 = r13 + 0x20u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_0063cb74
GUEST_EXPORT(0x0063cb74, d_0063cb74::f_0063cb74);

// f_0063cd2c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0063cd2c {

struct __attribute__((packed)) Object_0063cd2c_0 {
    u8 unknown_0[0xf0];  // (not used here)
    u32 word_f0;
};
GUEST_OFFSET(Object_0063cd2c_0, word_f0, 0xf0);  // (from the original)

inline constexpr guest::Function<0x00118e25, u32(u32, u32, u32, u32)> call_00118e24;  // (from the original)
inline constexpr guest::Function<0x0011a1c9, u32(u32, u32, u32, u32)> call_0011a1c8;  // (from the original)
inline constexpr guest::Function<0x002fb328, u32(u32, u32, u32, u32)> call_002fb328;  // (from the original)
inline constexpr guest::Function<0x002fb378, u32(u32, u32, u32, u32)> call_002fb378;  // (from the original)
inline constexpr guest::Function<0x00757c74, u32(u32, u32, u32, u32)> call_00757c74;  // (from the original)

u32 f_0063cd2c(gptr<Object_0063cd2c_0> arg0, u32 r1, u32 r2, u32 r3) {
    u32 res = 0;
    u32 r0 = arg0.addr();
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 nf = 0;
    u32 vf = 0;
    guest::cpu()->r[13] -= 0x18u;  // (from the original)
    r5 = r3;
    r7 = r1;
    r0 = arg0->word_f0;
    r8 = r2;
    if (r0 == 0) {
        goto L_63ce0c;
    }
    r0 = r0 + 0x1000u;  // (from the original)
    r4 = *gptr<u32>(r0 + 0x28u);  // (from the original)
    if (r4 == 0) {
        goto L_63ce0c;
    }
    r0 = call_002fb328(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r6 = r0 + 0x292a4u;  // (from the original)
    r1 = r4;
    r0 = r6;
    r0 = call_00118e24(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 != 0) {
        if (u32(*gptr<u8>(0x1739fu + r6)) < 3u) {  // (from the original)
            r0 = 0u;
            goto L_63cda0;
        }
    }
    r0 = r4;
    r0 = call_0011a1c8(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        goto L_63cdc8;
    } else {
        r0 = 1u;
    }
L_63cda0:;
    r0 = 0x841a0du + (r0 << 1);  // (from the original)
    r1 = u32(s32(s8(*gptr<u8>(r0)))) + r5;
    *gptr<u32>(r7) = u32(r1);
    *gptr<u32>(r8) = u32(u32(s32(s8(*gptr<u8>(r0 + 1u)))) + r5);
    r0 = 1u;
    guest::cpu()->r[13] += 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
L_63cdc8:;
    r0 = call_002fb378(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    r1 = r0;
    r2 = 1u;
    r0 = r4 + 0x250au;  // (from the original)
    r0 = call_00757c74(r0, r1, r2, r3);
    if (s32(r0) < s32(7u)) {
        r0 = 2u;
        guest::preempt();
        goto L_63cda0;
    }
    if (s32(r0) < s32(0xeu)) {  // (from the original)
        r0 = 3u;
        guest::preempt();
        goto L_63cda0;
    }
    res = r0 - 0x1eu;  // (from the original)
    nf = res >> 0x1f;  // (from the original)
    vf = ((r0 ^ 0x1eu) & (r0 ^ res)) >> 0x1f;  // (from the original)
    if (nf != vf) {
        r0 = 4u;
    }
    if (nf == vf) {
        r0 = 5u;
    }
    guest::preempt();
    goto L_63cda0;
L_63ce0c:;
    r0 = 0u;
    guest::cpu()->r[13] += 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_0063cd2c
GUEST_EXPORT(0x0063cd2c, d_0063cd2c::f_0063cd2c);

// f_0063d364: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0063d364 {

inline constexpr guest::Function<0x0024b7b8, u32(u32, u32, u32, u32)> call_0024b7b8;  // (from the original)
inline constexpr guest::Function<0x002fae84, u32(u32, u32, u32, u32)> call_002fae84;  // (from the original)
inline constexpr guest::Function<0x002fb310, u32(u32, u32, u32, u32)> call_002fb310;  // (from the original)
inline constexpr guest::Function<0x005b96a8, u32(u32, u32, u32, u32)> call_005b96a8;  // (from the original)
inline constexpr guest::Function<0x005bb2a0, u32(u32, u32, u32, u32)> call_005bb2a0;  // (from the original)
inline constexpr guest::Function<0x006f0130, u32(u32, u32, u32, u32)> call_006f0130;  // (from the original)
inline constexpr guest::Function<0x007241b0, u32(u32, u32, u32, u32)> call_007241b0;  // (from the original)
inline constexpr guest::Function<0x007559ac, u32(u32, u32, u32, u32)> call_007559ac;  // (from the original)
inline constexpr guest::Function<0x00755a98, u32(u32, u32, u32, u32)> call_00755a98;  // (from the original)

u32 f_0063d364(u32 r0, u32 r1, u32 r2) {
    u32 res = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    guest::cpu()->r[13] -= 0x18u;  // (from the original)
    r6 = r0;
    r4 = r1;
    r7 = r2;
    r5 = 0u;
    r0 = r2;
    r0 = call_007559ac(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    if (r0 != 0x60u) {  // (from the original)
        goto L_63d480;
    }
    r0 = r7;
    r0 = call_00755a98(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r7 = 0u;
    r8 = 1u;
    if (r0 != 1u) {
        if (r0 == 2u) {
            goto L_63d3d4;
        }
        if (r0 == 3u) {
            goto L_63d3e8;
        }
        if (r0 != 4u) {
            goto L_63d480;
        }
        goto L_63d46c;
    }
    if (u32(*gptr<u8>(r6 + 0x272u)) != 0) {  // (from the original)
        goto L_63d410;
    }
    goto L_63d3e0;
L_63d3cc:;
    r5 = 1u;
    goto L_63d480;
L_63d3d4:;
    if (u32(*gptr<u8>(r6 + 0x272u)) != 2u) {  // (from the original)
        goto L_63d410;
    }
L_63d3e0:;
    *gptr<u32>(r4) = u32(r8);
    guest::preempt();
    goto L_63d3cc;
L_63d3e8:;
    r0 = 0xaaef18u;  // (from the original)
    r5 = *gptr<u32>(r0 + 0x234u);  // (from the original)
    if (r5 == 0) {
        goto L_63d418;
    }
    r0 = r5 + 0x6bd0u;  // (from the original)
    r0 = call_007241b0(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    res = r0;
    if (res >> 0x1f != (r0 & (r0 ^ res)) >> 0x1f) {  // (from the original)
        goto L_63d418;
    }
L_63d410:;
    *gptr<u32>(r4) = u32(r7);
    guest::preempt();
    goto L_63d3cc;
L_63d418:;
    *gptr<u32>(r4) = u32(r8);
    r0 = call_002fae84(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r0 = call_002fb310(r0, r1, r2, guest::cpu()->r[3]);
    r2 = guest::cpu()->r[2];
    r1 = u32(*gptr<u8>(r6 + 0x270u));  // (from the original)
    r0 = r0 + 0x1744cu;  // (from the original)
    r0 = call_005bb2a0(r0, r1, r2, guest::cpu()->r[3]);
    r2 = guest::cpu()->r[2];
    r1 = r5 + 0x55a6u;  // (from the original)
    r0 = call_005b96a8(r0, r1, r2, guest::cpu()->r[3]);
    r2 = guest::cpu()->r[2];
    r1 = 1u;
    r0 = 0xfu;  // (from the original)
    r0 = call_006f0130(r0, r1, r2, guest::cpu()->r[3]);
    r2 = guest::cpu()->r[2];
    r1 = 1u;
    r0 = 0x16u;  // (from the original)
    r0 = call_0024b7b8(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    guest::preempt();
    goto L_63d3cc;
L_63d46c:;
    r0 = u32(*gptr<u8>(r6 + 0x274u));  // (from the original)
    r5 = 1u;
    if (r0 != 0) {
        r0 = 1u;
    }
    *gptr<u32>(r4) = u32(r0);
L_63d480:;
    r0 = r5;
    guest::cpu()->r[13] += 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_0063d364
GUEST_EXPORT(0x0063d364, d_0063d364::f_0063d364);

// f_0063da4c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0063da4c {

struct __attribute__((packed)) Object_0063da4c_0 {
    u8 unknown_0[0x270];  // (not used here)
    u16 half_270;
    u8 unknown_272[0x2];  // (not used here)
    u8 byte_274;
};
GUEST_OFFSET(Object_0063da4c_0, half_270, 0x270);  // (from the original)
GUEST_OFFSET(Object_0063da4c_0, byte_274, 0x274);  // (from the original)

struct __attribute__((packed)) Object_0063da4c_2 {
    u8 byte_0;
};
GUEST_OFFSET(Object_0063da4c_2, byte_0, 0x0);  // (from the original)

inline constexpr guest::Function<0x00116ebf, u32(u32, u32, u32, u32)> call_00116ebe;  // (from the original)
inline constexpr guest::Function<0x002390f8, u32(u32, u32, u32, u32)> call_002390f8;  // (from the original)
inline constexpr guest::Function<0x002fcbb0, u32(u32, u32, u32, u32)> call_002fcbb0;  // (from the original)
inline constexpr guest::Function<0x002fe419, u32(u32, u32, u32, u32)> call_002fe418;  // (from the original)

u32 f_0063da4c(gptr<Object_0063da4c_0> arg0, u32 r1, gptr<Object_0063da4c_2> arg2) {
    u32 r0 = arg0.addr();
    u32 r2 = arg2.addr();
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r13 = guest::cpu()->r[13];
    u32 zf = 0;
    r5 = r0;
    r0 = 0x7ffeu;  // (from the original)
    r4 = r5 + 0x270u;  // (from the original)
    r13 = r13 - 0x20u;  // (from the original)
    arg0->half_270 = u16(r0);
    arg0->byte_274 = u8(r1);
    if (r1 == 0) {
        r13 = r13 + 0x20u;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    zf = r1 == 1u;
    if (!zf) {
        zf = r1 == 2u;
    }
    if (!zf) {
        r13 = r13 + 0x20u;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    zf = r2 == 0;
    if (!zf) {
        r2 = u32(arg2->byte_0);
        zf = r2 == 0;
    }
    if (zf) {
        r13 = r13 + 0x20u;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    r1 = 5u;
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_00116ebe(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_002fe418(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    if (r0 >= 5u) {
        r13 = r13 + 0x20u;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    r1 = u32(*gptr<u16>(0x841980u + (r0 << 1)));  // (from the original)
    r0 = r13 + 0xcu;  // (from the original)
    *gptr<u16>(r4) = u16(r1);
    guest::cpu()->r[13] = r13;
    r0 = call_002fcbb0(r0, r1, r2, guest::cpu()->r[3]);
    r1 = r0;
    r2 = 0u;
    r0 = r5;
    guest::cpu()->r[13] = r13;
    r0 = call_002390f8(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r0 = r13 + 0xcu;  // (from the original)
    r13 = r13 + 0x20u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_0063da4c
GUEST_EXPORT(0x0063da4c, d_0063da4c::f_0063da4c);
