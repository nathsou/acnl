// Functions decompiled by tools/decomp (docs/decomp.md), each proved equal to the recompiled original (prove-cpp). The
// names are generated (d_<address>::f_<address>, Object_<address>_<argument>, word_<offset>) and still to be chosen.
#include "guest/guest.hpp"

#include <bit>

using guest::gptr;

// f_00280568: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00280568 {

struct __attribute__((packed)) Object_00280568_0 {
    u8 unknown_0[0xe0];  // (not used here)
    u32 word_e0;
    u8 unknown_e4[0xc];  // (not used here)
    u32 word_f0;
    u8 unknown_f4[0x158];  // (not used here)
    u32 word_24c;
};
GUEST_OFFSET(Object_00280568_0, word_e0, 0xe0);  // (from the original)
GUEST_OFFSET(Object_00280568_0, word_f0, 0xf0);  // (from the original)
GUEST_OFFSET(Object_00280568_0, word_24c, 0x24c);  // (from the original)

inline constexpr guest::Function<0x0014fa8c, u32(u32, u32, u32, u32)> call_0014fa8c;  // (from the original)
inline constexpr guest::Function<0x0014fa9c, u32(u32, u32, u32, u32)> call_0014fa9c;  // (from the original)
inline constexpr guest::Function<0x001c0c54, u32(u32, u32, u32, u32)> call_001c0c54;  // (from the original)
inline constexpr guest::Function<0x002075d4, u32(u32, u32, u32, u32)> call_002075d4;  // (from the original)
inline constexpr guest::Function<0x0022fcb8, u32(u32, u32, u32, u32)> call_0022fcb8;  // (from the original)
inline constexpr guest::Function<0x00281384, u32(u32, u32, u32, u32)> call_00281384;  // (from the original)
inline constexpr guest::Function<0x0068ec64, u32(u32, u32, u32, u32)> call_0068ec64;  // (from the original)
inline constexpr guest::Function<0x006ea834, u32(u32, u32, u32, u32)> call_006ea834;  // (from the original)

u32 f_00280568(gptr<Object_00280568_0> arg0, u32 r1_unused, u32 r2, u32 r3, float S0, float S1) {
    u32 r0 = arg0.addr();
    u32 r1 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r13 = guest::cpu()->r[13];
    u32 zf = 0;
    r4 = r0;
    r13 = r13 - 0x20u;  // (from the original)
    r1 = arg0->word_24c;
    r5 = arg0->word_f0;
    if (r1 == 0) {
        r1 = arg0->word_e0;
    } else {
        r1 = *gptr<u32>(r1 + 0xe0u);  // (from the original)
    }
    r0 = *gptr<u32>(0x2574u + r5);  // (from the original)
    r6 = 2u;
    r8 = 1u;
    if (r1 != 0) {
        if (r1 == 1u) {
            goto L_280684;
        }
        if (r1 == 2u) {
            goto L_2806b8;
        }
        if (r1 != 3u) {
            goto L_280724;
        }
        goto L_280714;
    }
    r7 = 0u;
    *gptr<u32>(r13) = u32(r7);
    r2 = 0x209u;  // (from the original)
    S1 = std::bit_cast<float>(*gptr<u32>(0x88069cu));  // (from the original)
    r3 = 2u;
    S0 = std::bit_cast<float>(*gptr<u32>(0x28073cu));  // (from the original)
    r1 = r7;
    r0 = r5 + 0x78u;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    r0 = call_006ea834(r0, r1, r2, r3);
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    r3 = 0xae5664u;  // (from the original)
    r2 = 0x975beeu;  // (from the original)
    r1 = r5 + 0x14u;  // (from the original)
    r0 = 0x12cu;  // (from the original)
    *gptr<u32>(r13 + 4u) = u32(r7);
    *gptr<u32>(r13) = u32(r8);
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    r0 = call_002075d4(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    r1 = 0x1000661u;  // (from the original)
    r0 = r5 + 0x9b4u;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    r0 = call_001c0c54(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    if (u32(*gptr<u8>(0x2597u + r5)) != 0) {  // (from the original)
        r0 = *gptr<u32>(*gptr<u32>(0x280750u));  // (from the original)
        if (r0 != 0) {
            guest::cpu()->r[13] = r13;
            guest::cpu()->s[0] = S0;
            guest::cpu()->s[1] = S1;
            r0 = call_0014fa8c(r0, r1, r2, r3);
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
            S0 = guest::cpu()->s[0];
            S1 = guest::cpu()->s[1];
        }
    }
    r1 = 0x8426e0u;  // (from the original)
    r0 = r5 + 0x1dd4u;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    r0 = call_0022fcb8(r0, r1, r2, r3);
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    *gptr<u32>(r5 + 0x2584u) = u32(r7);  // (from the original)
    *gptr<u32>(r5 + 0x2588u) = u32(0x14u);  // (from the original)
    *gptr<u32>(r5 + 0x258cu) = u32(r7);  // (from the original)
    r1 = *gptr<u32>(r4 + 0x24cu);  // (from the original)
    zf = r1 == 0;
    if (zf) {
        r0 = *gptr<u32>(r4 + 0xe0u);  // (from the original)
    } else {
        r0 = *gptr<u32>(r1 + 0xe0u);  // (from the original)
    }
    r0 = r0 + 1u;
    if (!zf) {
        goto L_280704;
    }
    goto L_28070c;
L_280684:;
    r0 = r5;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    r0 = call_00281384(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    if (u32(*gptr<u8>(0x2595u + r5)) == 0) {  // (from the original)
        goto L_280724;
    }
    r1 = *gptr<u32>(r4 + 0x24cu);  // (from the original)
    zf = r1 == 0;
    if (zf) {
        r0 = *gptr<u32>(r4 + 0xe0u);  // (from the original)
    } else {
        r0 = *gptr<u32>(r1 + 0xe0u);  // (from the original)
    }
    r0 = r0 + 1u;
    if (!zf) {
        goto L_280704;
    }
    goto L_28070c;
L_2806b8:;
    r1 = r5 + 0x2500u;  // (from the original)
    zf = u32(*gptr<u16>(r1 + 0x90u)) == 0;  // (from the original)
    if (zf) {
        r1 = u32(*gptr<u8>(r1 + 0x9du));  // (from the original)
        zf = r1 == 0;
    }
    if (!zf) {
        goto L_280724;
    }
    r3 = 0u;
    r2 = r3;
    *gptr<u8>(0x2884u + r0) = u8(r8);  // (from the original)
    r1 = 8u;
    r0 = r0 + 0x14u;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    r0 = call_0068ec64(r0, r1, r2, r3);
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    r1 = *gptr<u32>(r4 + 0x24cu);  // (from the original)
    zf = r1 == 0;
    if (zf) {
        r0 = *gptr<u32>(r4 + 0xe0u);  // (from the original)
    } else {
        r0 = *gptr<u32>(r1 + 0xe0u);  // (from the original)
    }
    r0 = r0 + 1u;
    if (zf) {
        goto L_28070c;
    }
L_280704:;
    *gptr<u32>(r1 + 0xe0u) = u32(r0);  // (from the original)
    goto L_280724;
L_28070c:;
    *gptr<u32>(r4 + 0xe0u) = u32(r0);  // (from the original)
    goto L_280724;
L_280714:;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    r0 = call_0014fa9c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    if (r0 != 0) {
        r6 = 1u;
    }
L_280724:;
    r0 = r6;
    r13 = r13 + 0x20u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    return r0;
}

}  // namespace d_00280568
GUEST_EXPORT(0x00280568, d_00280568::f_00280568);

// f_00280ea0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00280ea0 {

struct __attribute__((packed)) Object_00280ea0_0 {
    u8 unknown_0[0x2597];  // (not used here)
    u8 byte_2597;
};
GUEST_OFFSET(Object_00280ea0_0, byte_2597, 0x2597);  // (from the original)

inline constexpr guest::Function<0x00205d80, u32(u32, u32, u32, u32)> call_00205d80;  // (from the original)
inline constexpr guest::Function<0x00231918, u32(u32, u32, u32, u32)> call_00231918;  // (from the original)
inline constexpr guest::Function<0x006e9c2c, u32(u32, u32, u32, u32)> call_006e9c2c;  // (from the original)

u32 f_00280ea0(gptr<Object_00280ea0_0> arg0, u32 r1, float S0, float S1, float S2) {
    u32 r0 = arg0.addr();
    u32 r2 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r5 = r0 + 0x2500u;  // (from the original)
    r4 = r0;
    r2 = u32(s32(s8(arg0->byte_2597)));
    if (r2 == 1u) {
        goto L_280f48;
    }
L_280eb8:;
    r1 = r4 + 0x2588u;  // (from the original)
    r0 = *gptr<u32>(r1);
    if (s32(r0) >= s32(0x14u)) {  // (from the original)
        goto L_280f14;
    }
    r0 = r0 + 1u;
    S1 = std::bit_cast<float>(*gptr<u32>(0x280f7cu));  // (from the original)
    *gptr<u32>(r1) = u32(r0);
    r1 = r4 + 0x800u;  // (from the original)
    S2 = float(s32(std::bit_cast<u32>(std::bit_cast<float>(r0)))) * S1;
    S0 = std::bit_cast<float>(*gptr<u32>(r1 + 0x2e0u)) * S2;  // (from the original)
    *gptr<u32>(r1 + 0x2dcu) = u32(std::bit_cast<u32>(S0));  // (from the original)
    if (r2 == 0) {
        goto L_280f14;
    }
    S0 = std::bit_cast<float>(r0);
    r0 = r4 + 0x1dd4u;  // (from the original)
    S0 = float(s32(std::bit_cast<u32>(S0))) * S1;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2;
    r0 = call_00205d80(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    S2 = guest::cpu()->s[2];
L_280f14:;
    r0 = u32(*gptr<u8>(r4 + 0xa8u));  // (from the original)
    if (r0 != 0xdu) {  // (from the original)
        goto L_280f54;
    }
    r0 = u32(*gptr<u8>(r4 + 0x554u));  // (from the original)
    if (r0 == 0) {
        goto L_280f54;
    }
    *gptr<u8>(0x2594u + r4) = u8(1u);  // (from the original)
    if (u32(*gptr<u8>(r5 + 0x97u)) != 0) {  // (from the original)
        goto L_280f64;
    }
    goto L_280f58;
L_280f48:;
    r0 = u32(*gptr<u8>(r4 + 0xb06u));  // (from the original)
    if ((r0 & 1u) != 0) {
        guest::preempt();
        goto L_280eb8;
    }
L_280f54:;
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    return r0;
L_280f58:;
    r0 = *gptr<u32>(r4 + 0x660u);  // (from the original)
    r1 = 1u;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2;
    r0 = call_00231918(r0, r1, r2, guest::cpu()->r[3]);
    r2 = guest::cpu()->r[2];
    S1 = guest::cpu()->s[1];
    S2 = guest::cpu()->s[2];
L_280f64:;
    r1 = 0u;
    S0 = std::bit_cast<float>(*gptr<u32>(0x88069cu));  // (from the original)
    r0 = r4 + 0x78u;  // (from the original)
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2;
    return call_006e9c2c(r0, r1, r2, guest::cpu()->r[3]);
}

}  // namespace d_00280ea0
GUEST_EXPORT(0x00280ea0, d_00280ea0::f_00280ea0);

// f_002812b0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002812b0 {

struct __attribute__((packed)) Object_002812b0_0 {
    u8 unknown_0[0x259b];  // (not used here)
    u8 byte_259b;
};
GUEST_OFFSET(Object_002812b0_0, byte_259b, 0x259b);  // (from the original)


u32 f_002812b0(gptr<Object_002812b0_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r1 = 0;
    u32 r2 = 0;
    if (u32(*gptr<u8>(0x9506b0u)) == 0xffu) {  // (from the original)
        r1 = *gptr<u32>(0x9506b4u);  // (from the original)
    } else {
        r1 = 0u;
    }
    if (u32(arg0->byte_259b) != 1u) {
        guest::cpu()->r[1] = r1;
        return r0;
    }
    if (r1 == 0) {
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r1 = r1 + 0x6acdu;  // (from the original)
    r2 = 0u;
    r0 = r0 + 0x259bu;  // (from the original)
    *gptr<u8>(r1) = u8(r2);
    arg0->byte_259b = u8(r2);
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_002812b0
GUEST_EXPORT(0x002812b0, d_002812b0::f_002812b0);

// f_0028130c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0028130c {

struct __attribute__((packed)) Object_0028130c_0 {
    u8 unknown_0[0x259c];  // (not used here)
    u8 byte_259c;
};
GUEST_OFFSET(Object_0028130c_0, byte_259c, 0x259c);  // (from the original)

inline constexpr guest::Function<0x0052c2c0, u32(u32, u32, u32, u32)> call_0052c2c0;  // (from the original)

u32 f_0028130c(gptr<Object_0028130c_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r4 = guest::cpu()->r[4];
    guest::cpu()->r[13] -= 8u;
    r4 = r0;
    r0 = u32(arg0->byte_259c);
    if (r0 != 1u) {
        guest::cpu()->r[13] += 8u;
        return r0;
    }
    r0 = call_0052c2c0(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    r0 = 0u;
    *gptr<u8>(r4 + 0x259cu) = u8(r0);  // (from the original)
    guest::cpu()->r[13] += 8u;
    return r0;
}

}  // namespace d_0028130c
GUEST_EXPORT(0x0028130c, d_0028130c::f_0028130c);

// f_0028176c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0028176c {

struct __attribute__((packed)) Object_0028176c_0 {
    u8 unknown_0[0x2599];  // (not used here)
    u8 byte_2599;
};
GUEST_OFFSET(Object_0028176c_0, byte_2599, 0x2599);  // (from the original)


u32 f_0028176c(gptr<Object_0028176c_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r1 = 0;
    r1 = u32(arg0->byte_2599);
    if (r1 == 0) {
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r1 = 0u;
    r0 = r0 + 0x2599u;  // (from the original)
    *gptr<u32>(0x94fd88u) = u32(r1);  // (from the original)
    arg0->byte_2599 = u8(r1);
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_0028176c
GUEST_EXPORT(0x0028176c, d_0028176c::f_0028176c);

// f_002817a0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002817a0 {

struct __attribute__((packed)) Object_002817a0_0 {
    u8 unknown_0[0x2598];  // (not used here)
    u8 byte_2598;
};
GUEST_OFFSET(Object_002817a0_0, byte_2598, 0x2598);  // (from the original)


u32 f_002817a0(gptr<Object_002817a0_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r1 = 0;
    r1 = u32(arg0->byte_2598);
    if (r1 == 0) {
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r1 = 0u;
    r0 = r0 + 0x2598u;  // (from the original)
    *gptr<u32>(0x94fd8cu) = u32(r1);  // (from the original)
    arg0->byte_2598 = u8(r1);
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_002817a0
GUEST_EXPORT(0x002817a0, d_002817a0::f_002817a0);

// f_002817d4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002817d4 {

struct __attribute__((packed)) Object_002817d4_0 {
    u8 unknown_0[0x259a];  // (not used here)
    u8 byte_259a;
};
GUEST_OFFSET(Object_002817d4_0, byte_259a, 0x259a);  // (from the original)

inline constexpr guest::Function<0x005c2718, u32(u32, u32, u32, u32)> call_005c2718;  // (from the original)

u32 f_002817d4(gptr<Object_002817d4_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r4 = guest::cpu()->r[4];
    guest::cpu()->r[13] -= 8u;
    r4 = r0;
    r0 = u32(arg0->byte_259a);
    if (r0 != 1u) {
        guest::cpu()->r[13] += 8u;
        return r0;
    }
    r0 = call_005c2718(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    r0 = 0u;
    *gptr<u8>(r4 + 0x259au) = u8(r0);  // (from the original)
    guest::cpu()->r[13] += 8u;
    return r0;
}

}  // namespace d_002817d4
GUEST_EXPORT(0x002817d4, d_002817d4::f_002817d4);

// f_00281cd8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00281cd8 {

inline constexpr guest::Function<0x002fcbb0, u32(u32, u32, u32, u32)> call_002fcbb0;  // (from the original)
inline constexpr guest::Function<0x00306354, u32(u32, u32, u32, u32)> call_00306354;  // (from the original)
inline constexpr guest::Function<0x00768138, u32(u32, u32, u32, u32)> call_00768138;  // (from the original)

u32 f_00281cd8(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 0x20u;  // (from the original)
    r5 = r0;
    r4 = r1;
    r1 = 0x226au;  // (from the original)
    r0 = r13 + 0xcu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002fcbb0(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = 0x331eu;  // (from the original)
    r0 = r13 + 0x10u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002fcbb0(r0, r1, r2, r3);
    *gptr<u32>(r13) = u32(r13 + 0xcu);  // (from the original)
    *gptr<u32>(r13 + 4) = u32(0x13u);  // (from the original)
    *gptr<u32>(r13 + 8) = u32(0u);
    r3 = r4 + 0x55a6u;  // (from the original)
    r2 = 2u;
    r1 = 0x281d58u;  // (from the original)
    r0 = r5;
    guest::cpu()->r[13] = r13;
    r0 = call_00306354(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    r2 = 0u;
    r1 = r13 + 0x10u;  // (from the original)
    r0 = r5;
    guest::cpu()->r[13] = r13;
    r0 = call_00768138(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r0 = r13 + 0xcu;  // (from the original)
    r13 = r13 + 0x20u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_00281cd8
GUEST_EXPORT(0x00281cd8, d_00281cd8::f_00281cd8);

// f_00281d6c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00281d6c {

inline constexpr guest::Function<0x002fcbb0, u32(u32, u32, u32, u32)> call_002fcbb0;  // (from the original)
inline constexpr guest::Function<0x00306354, u32(u32, u32, u32, u32)> call_00306354;  // (from the original)
inline constexpr guest::Function<0x00768138, u32(u32, u32, u32, u32)> call_00768138;  // (from the original)

u32 f_00281d6c(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 0x20u;  // (from the original)
    r5 = r0;
    r4 = r1;
    r1 = 0x226au;  // (from the original)
    r0 = r13 + 0xcu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002fcbb0(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = 0x2185u;  // (from the original)
    r0 = r13 + 0x10u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002fcbb0(r0, r1, r2, r3);
    *gptr<u32>(r13) = u32(r13 + 0xcu);  // (from the original)
    *gptr<u32>(r13 + 4) = u32(0x13u);  // (from the original)
    *gptr<u32>(r13 + 8) = u32(0u);
    r3 = r4 + 0x55a6u;  // (from the original)
    r2 = 1u;
    r1 = 0x281decu;  // (from the original)
    r0 = r5;
    guest::cpu()->r[13] = r13;
    r0 = call_00306354(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    r2 = 0u;
    r1 = r13 + 0x10u;  // (from the original)
    r0 = r5;
    guest::cpu()->r[13] = r13;
    r0 = call_00768138(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r0 = r13 + 0xcu;  // (from the original)
    r13 = r13 + 0x20u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_00281d6c
GUEST_EXPORT(0x00281d6c, d_00281d6c::f_00281d6c);

// f_00281e00: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00281e00 {

struct __attribute__((packed)) Object_00281e00_0 {
    u8 unknown_0[0x5705];  // (not used here)
    u8 byte_5705;
    u8 unknown_5706[0x6];  // (not used here)
    u8 byte_570c;
    u8 unknown_570d[0x3871];  // (not used here)
    u8 byte_8f7e;
};
GUEST_OFFSET(Object_00281e00_0, byte_5705, 0x5705);  // (from the original)
GUEST_OFFSET(Object_00281e00_0, byte_570c, 0x570c);  // (from the original)
GUEST_OFFSET(Object_00281e00_0, byte_8f7e, 0x8f7e);  // (from the original)

inline constexpr guest::Function<0x00300650, u32(u32, u32, u32, u32)> call_00300650;  // (from the original)
inline constexpr guest::Function<0x00301564, u32(u32, u32, u32, u32)> call_00301564;  // (from the original)
inline constexpr guest::Function<0x00301da8, u32(u32, u32, u32, u32)> call_00301da8;  // (from the original)
inline constexpr guest::Function<0x00312ab8, u32(u32, u32, u32, u32)> call_00312ab8;  // (from the original)
inline constexpr guest::Function<0x0056ca68, u32(u32, u32, u32, u32)> call_0056ca68;  // (from the original)

u32 f_00281e00(gptr<Object_00281e00_0> arg0, u32 r1_unused, u32 r2_unused, u32 r3) {
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
    u32 r9 = guest::cpu()->r[9];
    u32 r10 = guest::cpu()->r[10];
    u32 r11 = guest::cpu()->r[11];
    u32 r13 = guest::cpu()->r[13];
    u32 r14 = guest::cpu()->r[14];
    u32 zf = 0;
    ea = r13 - 0x24;  // (from the original)
    *gptr<u32>(ea) = u32(r4);
    *gptr<u32>(ea + 4) = u32(r5);
    *gptr<u32>(ea + 8) = u32(r6);
    *gptr<u32>(ea + 0xc) = u32(r7);  // (from the original)
    *gptr<u32>(ea + 0x10) = u32(r8);  // (from the original)
    *gptr<u32>(ea + 0x14) = u32(r9);  // (from the original)
    *gptr<u32>(ea + 0x18) = u32(r10);  // (from the original)
    *gptr<u32>(ea + 0x1c) = u32(r11);  // (from the original)
    *gptr<u32>(ea + 0x20) = u32(r14);  // (from the original)
    r5 = r0;
    r13 = r13 - 0x60u;  // (from the original)
    r10 = 0x95386cu;  // (from the original)
    r9 = 0u;
    r1 = r5 + 0x8f77u;  // (from the original)
    res = u32(arg0->byte_5705) << 0x1c;  // (from the original)
    r2 = res;
    if (!(res >> 0x1f)) {  // (from the original)
        goto L_281f38;
    }
    if ((u32(arg0->byte_570c) & 0x1fu) == 0) {  // (from the original)
        goto L_281f38;
    }
    if (u32(arg0->byte_8f7e) & 0x40u) {  // (from the original)
        goto L_281f38;
    }
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_00300650(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    ea = r13 + 4u;
    r8 = *gptr<u32>(ea);
    r11 = *gptr<u32>(ea + 4);
    r5 = r5 + 0x55d4u;  // (from the original)
    r7 = *gptr<u32>(r13);
    r6 = u32(*gptr<u8>(r5));
    r5 = u32(*gptr<u8>(r5 + 1u));
    r0 = sxtb(r8);
    res = r0 - r6;
    r4 = r7;
    if (!(u32(res == 0) || res >> 0x1f != ((r0 ^ r6) & (r0 ^ res)) >> 0x1f)) {  // (from the original)
        r0 = 0x803u;  // (from the original)
        r4 = r4 + 1u;
        if (s32(r0) <= s32(r4)) {
            r4 = r0 - 0x27u;  // (from the original)
        }
    }
    zf = r6 == 2u;
    if (zf) {
        zf = r5 == 0x1du;  // (from the original)
    }
    if (zf) {
        r0 = r4;
        guest::cpu()->r[13] = r13;
        r0 = call_00301da8(r0, r1, r2, r3);
        if (r0 == 0) {
            r5 = 0x1cu;  // (from the original)
        }
    }
    *gptr<u32>(r13) = u32(7u);
    *gptr<u32>(r13 + 4) = u32(r9);
    r3 = r5;
    r2 = r6;
    r1 = r4;
    r0 = r13 + 0x30u;  // (from the original)
    *gptr<u32>(r13 + 8u) = u32(r9);
    guest::cpu()->r[13] = r13;
    r0 = call_0056ca68(r0, r1, r2, r3);
    ea = r13 + 0x30u;  // (from the original)
    r0 = *gptr<u32>(ea);
    r1 = *gptr<u32>(ea + 4);
    r2 = *gptr<u32>(ea + 8);
    r3 = 0u;
    ea = r13;
    *gptr<u32>(ea) = u32(r9);
    ea = r13 + 0x14u;  // (from the original)
    *gptr<u32>(ea) = u32(r0);
    *gptr<u32>(ea + 4) = u32(r1);
    *gptr<u32>(ea + 8) = u32(r2);
    r2 = r3;
    r1 = ~6u;
    r0 = r13 + 0x14u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00312ab8(r0, r1, r2, r3);
    ea = r10;
    r4 = *gptr<u32>(ea);
    ea = r13 + 0x30u;  // (from the original)
    r0 = *gptr<u32>(ea);
    r1 = *gptr<u32>(ea + 4);
    r2 = *gptr<u32>(ea + 8);
    ea = r13 + 8u;
    *gptr<u32>(ea) = u32(r0);
    *gptr<u32>(ea + 4) = u32(r1);
    *gptr<u32>(ea + 8) = u32(r2);
    r2 = r11;
    ea = r13 + 0x18u;  // (from the original)
    r1 = *gptr<u32>(ea + 4);
    *gptr<u32>(r13) = u32(*gptr<u32>(ea));
    *gptr<u32>(r13 + 4) = u32(r1);
    r3 = *gptr<u32>(r13 + 0x14u);  // (from the original)
    r1 = r8;
    r0 = r7;
    guest::cpu()->r[13] = r13;
    r0 = call_00301564(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    zf = r0 == 0;
    ea = r4;
    r0 = u32(*gptr<u8>(ea)) & ~0x40u;  // (from the original)
    if (!zf) {
        r0 = r0 | 0x40u;  // (from the original)
    }
    ea = r4;
    *gptr<u8>(ea) = u8(r0);
    r13 = r13 + 0x3cu;  // (from the original)
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
L_281f38:;
    ea = r10;
    r0 = *gptr<u32>(ea);
    ea = r0;
    r1 = u32(*gptr<u8>(ea)) & ~0x40u;  // (from the original)
    ea = r0;
    *gptr<u8>(ea) = u8(r1);
    r13 = r13 + 0x3cu;  // (from the original)
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

}  // namespace d_00281e00
GUEST_EXPORT(0x00281e00, d_00281e00::f_00281e00);

// f_00282b44: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00282b44 {


u32 f_00282b44(u32 r0) {
    u32 r1 = 0;
    r1 = 0x94ddf8u;  // (from the original)
    *gptr<u8>(r1 + 3u) = u8(4u);
    r0 = u32(*gptr<u8>(r1 + 4u)) & ~lsl_r(1u, r0 & 0xff);  // (from the original)
    *gptr<u8>(r1 + 4u) = u8(r0);
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_00282b44
GUEST_EXPORT(0x00282b44, d_00282b44::f_00282b44);

// f_00282b68: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00282b68 {

struct __attribute__((packed)) Object_00282b68_0 {
    u8 byte_0;
    u8 byte_1;
    u8 byte_2;
    u8 unknown_3[0x2];  // (not used here)
    u8 byte_5;
};
GUEST_OFFSET(Object_00282b68_0, byte_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_00282b68_0, byte_1, 0x1);  // (from the original)
GUEST_OFFSET(Object_00282b68_0, byte_2, 0x2);  // (from the original)
GUEST_OFFSET(Object_00282b68_0, byte_5, 0x5);  // (from the original)


void f_00282b68(gptr<Object_00282b68_0> arg0) {
    u32 r1 = 0;
    r1 = 0u;
    arg0->byte_0 = u8(r1);
    arg0->byte_1 = u8(0xffu);  // (from the original)
    arg0->byte_2 = u8(4u);
    arg0->byte_5 = u8(r1);
    guest::cpu()->r[1] = r1;
    return;
}

}  // namespace d_00282b68
GUEST_EXPORT(0x00282b68, d_00282b68::f_00282b68);

// f_00282c44: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00282c44 {


u32 f_00282c44(u32 r0, u32 r1) {
    u32 zf = 0;
    zf = r1 == 0;
    r0 = lsl_r(1u, r0 & 0xff);  // (from the original)
    r1 = u32(*gptr<u8>(0x94ddfcu));  // (from the original)
    if (zf) {
        r0 = r1 & ~r0;
        *gptr<u8>(0x94ddfcu) = u8(r0);  // (from the original)
    } else {
        r1 = r1 | r0;
        r0 = 0x94ddf8u;  // (from the original)
        *gptr<u8>(r0 + 4u) = u8(r1);
    }
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_00282c44
GUEST_EXPORT(0x00282c44, d_00282c44::f_00282c44);

// f_00282c78: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00282c78 {


u32 f_00282c78() {
    u32 r0 = 0;
    u32 r1 = 0;
    u32 r2 = 0;
    r0 = 0x94ddf8u;  // (from the original)
    r2 = 0u;
    r1 = 4u;
    *gptr<u8>(r0) = u8(r2);
    *gptr<u8>(r0 + 1u) = u8(0xffu);  // (from the original)
    *gptr<u8>(r0 + 2u) = u8(r1);
    *gptr<u8>(r0 + 5u) = u8(r2);
    *gptr<u8>(r0 + 3u) = u8(r1);
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_00282c78
GUEST_EXPORT(0x00282c78, d_00282c78::f_00282c78);

// f_00282ca4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00282ca4 {

inline constexpr guest::Function<0x00305f2c, u32(u32, u32, u32, u32)> call_00305f2c;  // (from the original)
inline constexpr guest::Function<0x00305f44, u32(u32, u32, u32, u32)> call_00305f44;  // (from the original)
inline constexpr guest::Function<0x007d0e24, u32(u32, u32, u32, u32)> call_007d0e24;  // (from the original)

u32 f_00282ca4(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r13 = guest::cpu()->r[13];
    *gptr<u32>(r13 + 0xfffffff8u) = u32(r3);  // (from the original)
    r13 = r13 - 8;
    guest::cpu()->r[13] = r13;
    r0 = call_00305f2c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 != 2u) {
        r13 = r13 + 8;
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    guest::cpu()->r[13] = r13;
    r0 = call_00305f44(r0, r1, r2, r3);
    *gptr<u8>(0x94ddfcu) = u8(u32(*gptr<u8>(0x94ddfcu)) | lsl_r(1u, r0 & 0xff));  // (from the original)
    r2 = 0xffu;  // (from the original)
    r0 = 4u;
    *gptr<u8>(r13 + 1u) = u8(r2);
    r3 = 0u;
    *gptr<u8>(r13 + 2u) = u8(r0);
    *gptr<u8>(r13 + 3u) = u8(r3);
    r1 = r13;
    *gptr<u8>(r13) = u8(r0);
    guest::cpu()->r[13] = r13;
    r0 = call_007d0e24(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r13 = r13 + 8;
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_00282ca4
GUEST_EXPORT(0x00282ca4, d_00282ca4::f_00282ca4);

// f_00282d6c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00282d6c {


u32 f_00282d6c() {
    u32 r0 = 0;
    u32 r1 = 0;
    u32 r2 = 0;
    r0 = 0x94ddf8u;  // (from the original)
    r1 = 0u;
    r2 = 4u;
    *gptr<u8>(r0) = u8(r1);
    *gptr<u8>(r0 + 1u) = u8(0xffu);  // (from the original)
    *gptr<u8>(r0 + 2u) = u8(r2);
    *gptr<u8>(r0 + 5u) = u8(r1);
    *gptr<u8>(r0 + 4u) = u8(r1);
    *gptr<u8>(r0 + 3u) = u8(r2);
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_00282d6c
GUEST_EXPORT(0x00282d6c, d_00282d6c::f_00282d6c);

// f_0028311c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0028311c {

struct __attribute__((packed)) Object_0028311c_0 {
    u8 unknown_0[0x68];  // (not used here)
    u32 word_68;
};
GUEST_OFFSET(Object_0028311c_0, word_68, 0x68);  // (from the original)

inline constexpr guest::Function<0x0030f48c, u32(u32, u32, u32, u32)> call_0030f48c;  // (from the original)

u32 f_0028311c(gptr<Object_0028311c_0> arg0, u32 r1) {
    u32 r0 = arg0.addr();
    u32 r2 = 0;
    r2 = r1;
    r1 = 0x84516cu;  // (from the original)
    r0 = arg0->word_68 + 0x104u;  // (from the original)
    return call_0030f48c(r0, r1, r2, guest::cpu()->r[3]);
}

}  // namespace d_0028311c
GUEST_EXPORT(0x0028311c, d_0028311c::f_0028311c);

// f_00283ee0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00283ee0 {

inline constexpr guest::Function<0x00241cf0, u32(u32, u32, u32, u32)> call_00241cf0;  // (from the original)
inline constexpr guest::Function<0x00243038, u32(u32, u32, u32, u32)> call_00243038;  // (from the original)
inline constexpr guest::Function<0x00315788, u32(u32, u32, u32, u32)> call_00315788;  // (from the original)

u32 f_00283ee0(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r4 = r2;
    if (r3 == 0) {
        r2 = 0u;
        goto L_283f18;
    }
    if (r3 == 1u) {
        r2 = 1u;
        goto L_283f18;
    }
    if (r3 == 2u) {
        r2 = 0x1eu;  // (from the original)
        goto L_283f18;
    }
    if (r3 == 3u) {
        r2 = 0x1fu;  // (from the original)
    } else {
        r2 = 0x2au;  // (from the original)
    }
L_283f18:;
    r0 = call_00315788(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r5 = r0;
    r0 = call_00241cf0(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        r0 = 0xfcu;  // (from the original)
        goto L_283f48;
    }
    r1 = r4;
    r0 = r5;
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    return call_00243038(r0, r1, r2, r3);
L_283f48:;
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_00283ee0
GUEST_EXPORT(0x00283ee0, d_00283ee0::f_00283ee0);

// f_00284b38: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00284b38 {

inline constexpr guest::Function<0x002fcbb0, u32(u32, u32, u32, u32)> call_002fcbb0;  // (from the original)

u32 f_00284b38() {
    u32 r1 = 0;
    r1 = u32(*gptr<u16>(0x950806u));  // (from the original)
    return call_002fcbb0(guest::cpu()->r[0], r1, guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_00284b38
GUEST_EXPORT(0x00284b38, d_00284b38::f_00284b38);

// f_00284b58: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00284b58 {

inline constexpr guest::Function<0x002f74c8, u32(u32, u32, u32, u32)> call_002f74c8;  // (from the original)
inline constexpr guest::Function<0x002f74e0, u32(u32, u32, u32, u32)> call_002f74e0;  // (from the original)
inline constexpr guest::Function<0x00315788, u32(u32, u32, u32, u32)> call_00315788;  // (from the original)
inline constexpr guest::Function<0x0052f144, u32(u32, u32, u32, u32)> call_0052f144;  // (from the original)
inline constexpr guest::Function<0x0052f224, u32(u32, u32, u32, u32)> call_0052f224;  // (from the original)
inline constexpr guest::Function<0x006a5e34, u32(u32, u32, u32, u32)> call_006a5e34;  // (from the original)
inline constexpr guest::Function<0x006a5f0c, u32(u32, u32, u32, u32)> call_006a5f0c;  // (from the original)
inline constexpr guest::Function<0x007481ec, u32(u32, u32, u32, u32)> call_007481ec;  // (from the original)
inline constexpr guest::Function<0x0074824c, u32(u32, u32, u32, u32)> call_0074824c;  // (from the original)
inline constexpr guest::Function<0x00748284, u32(u32, u32, u32, u32)> call_00748284;  // (from the original)

u32 f_00284b58(u32 r0, u32 r1, u32 r2, u32 r3, float S0, float S1) {
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
    r13 = r13 - 0x80u;  // (from the original)
    r9 = r0;
    r10 = r1;
    r11 = r2;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    r0 = call_002f74c8(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    r1 = r0;
    r0 = 8u;
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
        goto L_284d74;
    }
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    r0 = call_006a5e34(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    if (r0 == 0) {
        goto L_284d74;
    }
    r4 = ~0u;
    r6 = 0u;
    r5 = r4;
    r7 = r6;
    r1 = r0 + 0x10u;  // (from the original)
    r0 = r13 + 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    r0 = call_0052f224(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    r1 = r13 + 0x28u;  // (from the original)
    r0 = r13 + 0x38u;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    r0 = call_0074824c(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    r1 = r13 + 0x28u;  // (from the original)
    r0 = r13;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    r0 = call_00748284(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    r1 = r13 + 0x38u;  // (from the original)
    r0 = r13;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    r0 = call_007481ec(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    if (r0 == 0) {
        goto L_284cec;
    }
L_284bdc:;
    r8 = *gptr<u32>(r13 + 0xcu);  // (from the original)
    r0 = *gptr<u32>(r13 + 8u);
    r2 = 0u;
    r1 = r8;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    r0 = call_00315788(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    zf = r0 == 0xeu;  // (from the original)
    if (!zf) {
        zf = r0 == 0x12u;  // (from the original)
    }
    if (zf) {
        goto L_284c4c;
    }
    zf = r0 == 0x11u;  // (from the original)
    if (!zf) {
        zf = r0 == 0x13u;  // (from the original)
    }
    if (zf) {
        goto L_284c4c;
    }
    zf = r0 == 0x2cu;  // (from the original)
    if (!zf) {
        zf = r0 == 0x2bu;  // (from the original)
    }
    if (zf) {
        goto L_284c4c;
    }
    zf = r0 == 0x14u;  // (from the original)
    if (!zf) {
        zf = r0 == 0x2fu;  // (from the original)
    }
    if (zf) {
        goto L_284c4c;
    }
    zf = r0 == 0x30u;  // (from the original)
    if (!zf) {
        zf = r0 == 0x2eu;  // (from the original)
    }
    if (zf) {
        goto L_284c4c;
    }
    zf = r0 == 0xf6u;  // (from the original)
    if (!zf) {
        zf = r0 == 0xf7u;  // (from the original)
    }
    if (!zf) {
        zf = r0 == 0x2du;  // (from the original)
    }
    if (!zf) {
        goto L_284ccc;
    }
L_284c4c:;
    if (*gptr<u32>(r13 + 8u) < r4) {
        r4 = *gptr<u32>(r13 + 8u);
    }
    if (*gptr<u32>(r13 + 0xcu) < r5) {  // (from the original)
        r5 = *gptr<u32>(r13 + 0xcu);  // (from the original)
    }
    r0 = *gptr<u32>(r13 + 8u);
    if (!(!u32(r0 >= r6) || u32(r0 == r6))) {
        r6 = *gptr<u32>(r13 + 8u);
    }
    r0 = *gptr<u32>(r13 + 0xcu);  // (from the original)
    if (!u32(r0 >= r7) || u32(r0 == r7)) {
        goto L_284ccc;
    }
    r7 = *gptr<u32>(r13 + 0xcu);  // (from the original)
L_284ccc:;
    r0 = r13;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    r0 = call_0052f144(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    r1 = r13 + 0x38u;  // (from the original)
    r0 = r13;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    r0 = call_007481ec(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    if (r0 != 0) {
        guest::preempt();
        goto L_284bdc;
    }
L_284cec:;
    r2 = r5;
    r1 = r4;
    r0 = r13 + 0x10u;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    r0 = call_006a5f0c(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    r2 = r7;
    r1 = r6;
    r0 = r13 + 0x1cu;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    r0 = call_006a5f0c(r0, r1, r2, r3);
    r0 = 0x85f2d4u;  // (from the original)
    r1 = 0x85f2d8u;  // (from the original)
    *gptr<u32>(r9) = u32(std::bit_cast<u32>(std::bit_cast<float>(*gptr<u32>(r13 + 0x10u)) - std::bit_cast<float>(*gptr<u32>(r0))));  // (from the original)
    *gptr<u32>(r10) = u32(std::bit_cast<u32>(std::bit_cast<float>(*gptr<u32>(r13 + 0x18u)) - std::bit_cast<float>(*gptr<u32>(r1))));  // (from the original)
    *gptr<u32>(r11) = u32(std::bit_cast<u32>(std::bit_cast<float>(*gptr<u32>(r13 + 0x1cu)) + std::bit_cast<float>(*gptr<u32>(r0))));  // (from the original)
    S1 = std::bit_cast<float>(*gptr<u32>(r1));
    S0 = std::bit_cast<float>(*gptr<u32>(r13 + 0x24u)) + S1;  // (from the original)
    *gptr<u32>(*gptr<u32>(r13 + 0x58u)) = u32(std::bit_cast<u32>(S0));  // (from the original)
    r0 = r13 + 0x28u;  // (from the original)
L_284d74:;
    r13 = r13 + 0x5cu;  // (from the original)
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
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    return r0;
}

}  // namespace d_00284b58
GUEST_EXPORT(0x00284b58, d_00284b58::f_00284b58);

// f_00284ee4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00284ee4 {

inline constexpr guest::Function<0x00284b58, u32(u32, u32, u32, u32)> call_00284b58;  // (from the original)
inline constexpr guest::Function<0x003171b4, u32(u32, u32, u32, u32)> call_003171b4;  // (from the original)

u32 f_00284ee4(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 0x30u;  // (from the original)
    r6 = r0;
    r7 = r1;
    r4 = r2;
    r5 = r3;
    r2 = r13 + 0xcu;  // (from the original)
    r3 = r13 + 0x14u;  // (from the original)
    r0 = r13;
    r1 = r13 + 8u;
    guest::cpu()->r[13] = r13;
    r0 = call_00284b58(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    r2 = r13;
    r1 = r7;
    r0 = r6;
    guest::cpu()->r[13] = r13;
    r0 = call_003171b4(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    r2 = r13 + 0xcu;  // (from the original)
    r1 = r5;
    r0 = r4;
    guest::cpu()->r[13] = r13;
    r0 = call_003171b4(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    *gptr<u32>(r4) = u32(*gptr<u32>(r4) - 1u);
    r0 = *gptr<u32>(r5) - 1u;
    *gptr<u32>(r5) = u32(r0);
    r13 = r13 + 0x30u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_00284ee4
GUEST_EXPORT(0x00284ee4, d_00284ee4::f_00284ee4);

// f_00285184: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00285184 {

inline constexpr guest::Function<0x0018fc94, u32(u32, u32, u32, u32)> call_0018fc94;  // (from the original)
inline constexpr guest::Function<0x001bab40, u32(u32, u32, u32, u32)> call_001bab40;  // (from the original)
inline constexpr guest::Function<0x002563d8, u32(u32, u32, u32, u32)> call_002563d8;  // (from the original)
inline constexpr guest::Function<0x002f74c8, u32(u32, u32, u32, u32)> call_002f74c8;  // (from the original)
inline constexpr guest::Function<0x00544f18, u32(u32, u32, u32, u32)> call_00544f18;  // (from the original)
inline constexpr guest::Function<0x00544fec, u32(u32, u32, u32, u32)> call_00544fec;  // (from the original)
inline constexpr guest::Function<0x0054a644, u32(u32, u32, u32, u32)> call_0054a644;  // (from the original)
inline constexpr guest::Function<0x005b3f88, u32(u32, u32, u32, u32)> call_005b3f88;  // (from the original)
inline constexpr guest::Function<0x006cb9fc, u32(u32, u32, u32, u32)> call_006cb9fc;  // (from the original)

u32 f_00285184(u32 r0) {
    u32 ea = 0;
    u32 r1 = 0;
    u32 r2 = 0;
    u32 r3 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r13 = guest::cpu()->r[13];
    u32 zf = 0;
    r13 = r13 - 0x140u;  // (from the original)
    r4 = r0;
    r1 = 0x100u;  // (from the original)
    ea = r13 + 4u;
    *gptr<u32>(ea) = u32(r13 + 0xcu);  // (from the original)
    *gptr<u32>(ea + 4) = u32(r1);
    r0 = 0x8c9f1cu;  // (from the original)
    r2 = r1;
    r3 = u32(*gptr<u8>(r0));
    r1 = *gptr<u32>(r13 + 4u) - 1u;
    *gptr<u8>(r2 + r1) = u8(r3);
    *gptr<u8>(r13 + 0xcu) = u8(u32(*gptr<u8>(r0)));  // (from the original)
    r0 = 0x9048b0u;  // (from the original)
    *gptr<u32>(r13) = u32(r0);
    guest::cpu()->r[13] = r13;
    r0 = call_002f74c8(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0 = call_005b3f88(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 != 6u) {
        guest::cpu()->r[13] = r13;
        r0 = call_002f74c8(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        if (r0 == 0x25u) {  // (from the original)
            goto L_2852fc;
        }
        goto L_285310;
    }
    guest::cpu()->r[13] = r13;
    r0 = call_002f74c8(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    zf = r0 == 0x4bu;  // (from the original)
    r0 = r4;
    if (!zf) {
        zf = *gptr<u32>(r0 + 8u) == 1u;
        r1 = r13;
        r0 = r13 + 0x110u;  // (from the original)
        if (zf) {
            goto L_2852c4;
        }
        guest::cpu()->r[13] = r13;
        r0 = call_0054a644(r0, r1, r2, r3);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r1 = 0x2853b8u;  // (from the original)
        guest::cpu()->r[13] = r13;
        r0 = call_00544fec(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        guest::cpu()->r[13] = r13;
        r0 = call_00544f18(r0, r1, r2, r3);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        goto L_285358;
    }
    zf = *gptr<u32>(r0 + 8u) == 1u;
    r1 = r13;
    r0 = r13 + 0x110u;  // (from the original)
    if (!zf) {
        guest::cpu()->r[13] = r13;
        r0 = call_0054a644(r0, r1, r2, r3);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r1 = 0x2853d0u;  // (from the original)
        guest::cpu()->r[13] = r13;
        r0 = call_00544fec(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        guest::cpu()->r[13] = r13;
        r0 = call_00544f18(r0, r1, r2, r3);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        goto L_285358;
    }
    guest::cpu()->r[13] = r13;
    r0 = call_0054a644(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = 0x2853ecu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00544fec(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0 = call_00544f18(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    goto L_285358;
L_2852c4:;
    guest::cpu()->r[13] = r13;
    r0 = call_0054a644(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = 0x28540cu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00544fec(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0 = call_00544f18(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    goto L_285358;
L_2852fc:;
    guest::cpu()->r[13] = r13;
    r0 = call_006cb9fc(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        goto L_285374;
    }
L_285310:;
    r1 = r13;
    r0 = r13 + 0x110u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0054a644(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = 0x28542cu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00544fec(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r5 = r0;
    r0 = 0xa5u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0018fc94(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = r0;
    r0 = r5;
    guest::cpu()->r[13] = r13;
    r0 = call_00544fec(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0 = call_00544f18(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
L_285358:;
    r1 = r13;
    r0 = r4 + 0x184u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_001bab40(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r4;
    r13 = r13 + 0x140u;  // (from the original)
    guest::cpu()->r[13] = r13;
    return call_002563d8(r0, r1, r2, r3);
L_285374:;
    r1 = r13;
    r0 = r13 + 0x110u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0054a644(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = 0x28543cu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00544fec(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0 = call_00544f18(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    guest::preempt();
    goto L_285358;
}

}  // namespace d_00285184
GUEST_EXPORT(0x00285184, d_00285184::f_00285184);

// f_00286668: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00286668 {

inline constexpr guest::Function<0x00817eec, u32(u32, u32, u32, u32)> call_00817eec;  // (from the original)

u32 f_00286668(u32 r0) {
    u32 r1 = 0;
    u32 r2 = 0;
    guest::cpu()->r[13] -= 8u;
    r0 = r0 + 0x28u;  // (from the original)
    r1 = *gptr<u32>(0x848188u);  // (from the original)
    r2 = *gptr<u32>(0x848188u + 4);  // (from the original)
    r0 = call_00817eec(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_00286668
GUEST_EXPORT(0x00286668, d_00286668::f_00286668);

// f_00287c4c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00287c4c {

struct __attribute__((packed)) Object_00287c4c_0 {
    u32 word_0;
    u8 unknown_4[0x24];  // (not used here)
    u32 word_28;
    u8 unknown_2c[0x7df4];  // (not used here)
    u32 word_7e20;
};
GUEST_OFFSET(Object_00287c4c_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_00287c4c_0, word_28, 0x28);  // (from the original)
GUEST_OFFSET(Object_00287c4c_0, word_7e20, 0x7e20);  // (from the original)

inline constexpr guest::Function<0x002f76ad, u32(u32, u32, u32, u32)> call_002f76ac;  // (from the original)
inline constexpr guest::Function<0x002f7710, u32(u32, u32, u32, u32)> call_002f7710;  // (from the original)
inline constexpr guest::Function<0x003432e4, u32(u32, u32, u32, u32)> call_003432e4;  // (from the original)
inline constexpr guest::Function<0x00567ef0, u32(u32, u32, u32, u32)> call_00567ef0;  // (from the original)
inline constexpr guest::Function<0x0056988c, u32(u32, u32, u32, u32)> call_0056988c;  // (from the original)
inline constexpr guest::Function<0x005bf744, u32(u32, u32, u32, u32)> call_005bf744;  // (from the original)
inline constexpr guest::Function<0x005e3194, u32(u32, u32, u32, u32)> call_005e3194;  // (from the original)
inline constexpr guest::Function<0x006aaa30, u32(u32, u32, u32, u32)> call_006aaa30;  // (from the original)

u32 f_00287c4c(gptr<Object_00287c4c_0> arg0, u32 r1_unused, u32 r2_unused, u32 r3) {
    u32 r0 = arg0.addr();
    u32 r1 = 0;
    u32 r2 = 0;
    u32 r4 = guest::cpu()->r[4];
    r1 = 0x8f0390u;  // (from the original)
    guest::cpu()->r[13] -= 8u;
    r2 = r1 + 0x6cu;  // (from the original)
    arg0->word_0 = u32(r1);
    arg0->word_28 = u32(r2);
    r1 = 0x8edc6cu;  // (from the original)
    arg0->word_7e20 = u32(r1);
    r0 = r0 + 0x8258u;  // (from the original)
    r0 = call_005e3194(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = 0x8f7224u;  // (from the original)
    *gptr<u32>(r0 - 0x13cu) = u32(r1);  // (from the original)
    r0 = r0 - 0x30u;  // (from the original)
    r0 = call_0056988c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0x28u;  // (from the original)
    r0 = call_0056988c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0xe4u;  // (from the original)
    r0 = call_002f7710(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0x134u;  // (from the original)
    r0 = call_003432e4(r0, r1, r2, r3);
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
    r0 = r0 - 0x14cu;  // (from the original)
    r0 = call_005bf744(r0, r1, r2, r3);
    r2 = 0x4fcu;  // (from the original)
    r1 = 0x283768u;  // (from the original)
    r4 = r0 - 0x7e24u;  // (from the original)
    r3 = 0x18u;  // (from the original)
    r0 = r0 - 0x77a4u;  // (from the original)
    r0 = call_002f76ac(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r4 + 0x5f4u;  // (from the original)
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
    r0 = r0 - 0x14cu;  // (from the original)
    r0 = call_005bf744(r0, r1, r2, r3);
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

}  // namespace d_00287c4c
GUEST_EXPORT(0x00287c4c, d_00287c4c::f_00287c4c);

// f_002882b4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002882b4 {

struct __attribute__((packed)) Object_002882b4_0 {
    u8 unknown_0[0x3a0];  // (not used here)
    u32 word_3a0;
};
GUEST_OFFSET(Object_002882b4_0, word_3a0, 0x3a0);  // (from the original)


u32 f_002882b4(gptr<Object_002882b4_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r1 = 0;
    r0 = arg0->word_3a0;
    r1 = u32(*gptr<u16>(0x8c9f1eu));  // (from the original)
    *gptr<u16>(r0) = u16(r1);
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_002882b4
GUEST_EXPORT(0x002882b4, d_002882b4::f_002882b4);

// f_00289b5c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00289b5c {

struct __attribute__((packed)) Object_00289b5c_0 {
    u32 word_0;
    u8 unknown_4[0x24];  // (not used here)
    u32 word_28;
};
GUEST_OFFSET(Object_00289b5c_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_00289b5c_0, word_28, 0x28);  // (from the original)

inline constexpr guest::Function<0x002f76ad, u32(u32, u32, u32, u32)> call_002f76ac;  // (from the original)
inline constexpr guest::Function<0x002f770c, u32(u32, u32, u32, u32)> call_002f770c;  // (from the original)
inline constexpr guest::Function<0x002f7710, u32(u32, u32, u32, u32)> call_002f7710;  // (from the original)
inline constexpr guest::Function<0x00567ef0, u32(u32, u32, u32, u32)> call_00567ef0;  // (from the original)
inline constexpr guest::Function<0x0056988c, u32(u32, u32, u32, u32)> call_0056988c;  // (from the original)
inline constexpr guest::Function<0x005bf744, u32(u32, u32, u32, u32)> call_005bf744;  // (from the original)
inline constexpr guest::Function<0x005e3194, u32(u32, u32, u32, u32)> call_005e3194;  // (from the original)
inline constexpr guest::Function<0x006aaa30, u32(u32, u32, u32, u32)> call_006aaa30;  // (from the original)

u32 f_00289b5c(gptr<Object_00289b5c_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r1 = 0;
    u32 r2 = 0;
    u32 r3 = 0;
    u32 r4 = guest::cpu()->r[4];
    r1 = 0x8f0490u;  // (from the original)
    guest::cpu()->r[13] -= 8u;
    r4 = r0;
    arg0->word_0 = u32(r1);
    arg0->word_28 = u32(r1 + 0x6cu);  // (from the original)
    r1 = 0x4e0a44u;  // (from the original)
    r3 = 0xau;  // (from the original)
    r2 = 0x24u;  // (from the original)
    r0 = r4 + 0x48e8u;  // (from the original)
    r0 = call_002f76ac(r0, r1, r2, r3);
    r2 = 0x518u;  // (from the original)
    r3 = 2u;
    *gptr<u32>(0x1e70u + r4) = u32(0x8ee228u);  // (from the original)
    r1 = 0x8ef284u;  // (from the original)
    r4 = r4 + 0x2208u;  // (from the original)
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
    r1 = 0x2b6ef4u;  // (from the original)
    r4 = r0 - 0x1e74u;  // (from the original)
    r3 = 0xau;  // (from the original)
    r2 = 0xe0u;  // (from the original)
    r0 = r0 - 0x8c4u;  // (from the original)
    r0 = call_002f76ac(r0, r1, r2, r3);
    r1 = 0x2b6ef4u;  // (from the original)
    r3 = 0xau;  // (from the original)
    r2 = 0xe0u;  // (from the original)
    r0 = r4 + 0xcf0u;  // (from the original)
    r0 = call_002f76ac(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r4 + 0xc0cu;  // (from the original)
    r0 = call_002f7710(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0xe4u;  // (from the original)
    r0 = call_002f7710(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = 0x8f47a0u;  // (from the original)
    *gptr<u32>(r0 - 0x4f0u) = u32(r1);  // (from the original)
    r0 = r0 - 0xd4u;  // (from the original)
    r0 = call_005e3194(r0, r1, r2, r3);
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
    r0 = r0 - 0x15cu;  // (from the original)
    r0 = call_005bf744(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0x24cu;  // (from the original)
    r0 = call_00567ef0(r0, r1, r2, r3);
    r1 = 0x56988cu;  // (from the original)
    r4 = r0 - 0x65cu;  // (from the original)
    r3 = 0xau;  // (from the original)
    r2 = 0x28u;  // (from the original)
    r0 = r0 - 0x1b4u;  // (from the original)
    r0 = call_002f76ac(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r4 + 0x480u;  // (from the original)
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

}  // namespace d_00289b5c
GUEST_EXPORT(0x00289b5c, d_00289b5c::f_00289b5c);

// f_00289ce8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00289ce8 {

struct __attribute__((packed)) Object_00289ce8_0 {
    u8 unknown_0[0x628];  // (not used here)
    u32 word_628;
    u32 word_62c;
};
GUEST_OFFSET(Object_00289ce8_0, word_628, 0x628);  // (from the original)
GUEST_OFFSET(Object_00289ce8_0, word_62c, 0x62c);  // (from the original)

inline constexpr guest::Function<0x00301da8, u32(u32, u32, u32, u32)> call_00301da8;  // (from the original)
inline constexpr guest::Function<0x00312bd0, u32(u32, u32, u32, u32)> call_00312bd0;  // (from the original)
inline constexpr guest::Function<0x00312c4c, u32(u32, u32, u32, u32)> call_00312c4c;  // (from the original)
inline constexpr guest::Function<0x00312cb0, u32(u32, u32, u32, u32)> call_00312cb0;  // (from the original)
inline constexpr guest::Function<0x005e2e50, u32(u32, u32, u32, u32)> call_005e2e50;  // (from the original)
inline constexpr guest::Function<0x005e2f94, u32(u32, u32, u32, u32)> call_005e2f94;  // (from the original)

u32 f_00289ce8(gptr<Object_00289ce8_0> arg0, u32 r1_unused, u32 r2, u32 r3) {
    u32 r0 = arg0.addr();
    u32 r1 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r13 = guest::cpu()->r[13];
    r4 = r0;
    r0 = arg0->word_62c;
    r1 = 0x8532a7u;  // (from the original)
    r13 = r13 - 0x58u;  // (from the original)
    r5 = u32(s32(s8(*gptr<u8>(r0 + r1))));
    if (r0 == 2u) {
        r0 = arg0->word_628;
        guest::cpu()->r[13] = r13;
        r0 = call_00301da8(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        if (r0 != 0) {
            r5 = r5 + 1u;
        }
    }
    r0 = *gptr<u32>(r4 + 0x630u);  // (from the original)
    if (s32(r0) < s32(1u)) {
        *gptr<u32>(r4 + 0x630u) = u32(r5);  // (from the original)
        goto L_289d34;
    }
    if (s32(r5) < s32(r0)) {
        *gptr<u32>(r4 + 0x630u) = u32(1u);  // (from the original)
    }
L_289d34:;
    r0 = r13 + 4u;
    guest::cpu()->r[13] = r13;
    r0 = call_00312bd0(r0, r1, r2, r3);
    *gptr<u32>(r13) = u32(4u);
    r1 = *gptr<u32>(r4 + 0x630u);  // (from the original)
    r3 = 6u;
    r2 = 2u;
    r0 = r13 + 4u;
    guest::cpu()->r[13] = r13;
    r0 = call_00312c4c(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r4 + 0x7fcu;  // (from the original)
    r1 = r13 + 4u;
    r4 = r0;
    guest::cpu()->r[13] = r13;
    r0 = call_005e2e50(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r4;
    guest::cpu()->r[13] = r13;
    r0 = call_005e2f94(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r13 + 4u;
    guest::cpu()->r[13] = r13;
    r0 = call_00312cb0(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r13 = r13 + 0x58u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_00289ce8
GUEST_EXPORT(0x00289ce8, d_00289ce8::f_00289ce8);

// f_00289d90: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00289d90 {

inline constexpr guest::Function<0x002f825c, u32(u32, u32, u32, u32)> call_002f825c;  // (from the original)
inline constexpr guest::Function<0x003083bc, u32(u32, u32, u32, u32)> call_003083bc;  // (from the original)
inline constexpr guest::Function<0x005e2e50, u32(u32, u32, u32, u32)> call_005e2e50;  // (from the original)
inline constexpr guest::Function<0x005e2f94, u32(u32, u32, u32, u32)> call_005e2f94;  // (from the original)
inline constexpr guest::Function<0x005ea8f8, u32(u32, u32, u32, u32)> call_005ea8f8;  // (from the original)
inline constexpr guest::Function<0x005ea964, u32(u32, u32, u32, u32)> call_005ea964;  // (from the original)
inline constexpr guest::Function<0x005f4bfc, u32(u32, u32, u32, u32)> call_005f4bfc;  // (from the original)

u32 f_00289d90(u32 r0, u32 r1_unused, u32 r2_unused, u32 r3) {
    u32 ea = 0;
    u32 res = 0;
    u32 r1 = 0;
    u32 r2 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 0x50u;  // (from the original)
    r5 = r0;
    r0 = r13 + 8u;
    r2 = 0xfu;  // (from the original)
    r1 = r13 + 0x20u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_003083bc(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r6 = 0x909af0u;  // (from the original)
    *gptr<u32>(r0) = u32(r6);
    r0 = r0 + 0xcu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_005f4bfc(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r4 = r0 - 0xcu;  // (from the original)
    r1 = 0x1eu;  // (from the original)
    r0 = r0 + 0xcu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002f825c(r0, r1, r2, r3);
    r1 = 0x8906ecu;  // (from the original)
    r0 = r4 + 0x18u;  // (from the original)
    *gptr<u16>(r4 + 0x18u) = u16(u32(*gptr<u16>(r1)));  // (from the original)
    r2 = 7u;
    do {
L_289ddc:;
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
    r4 = 0x95deccu;  // (from the original)
    r1 = 0u;
    r0 = *gptr<u32>(r4);
    guest::cpu()->r[13] = r13;
    r0 = call_005ea8f8(r0, r1, r2, r3);
    r1 = u32(*gptr<u8>(r5 + 0x670u));  // (from the original)
    *gptr<u32>(r13) = u32(0u);
    if (r1 == 1u) {
        goto L_289e6c;
    }
    r2 = 0x8535f0u;  // (from the original)
    r0 = *gptr<u32>(r4);
    r3 = 0x69u;  // (from the original)
    r1 = r13 + 8u;
    guest::cpu()->r[13] = r13;
    r0 = call_005ea964(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
L_289e2c:;
    r0 = r5 + 0x984u;  // (from the original)
    r1 = r13 + 8u;
    r4 = r0;
    guest::cpu()->r[13] = r13;
    r0 = call_005e2e50(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r4;
    guest::cpu()->r[13] = r13;
    r0 = call_005e2f94(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    *gptr<u32>(r13 + 8u) = u32(r6);
    r0 = r13 + 8u;
    r13 = r13 + 0x50u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
L_289e6c:;
    r2 = 0x8535f0u;  // (from the original)
    r0 = *gptr<u32>(r4);
    r3 = 0x68u;  // (from the original)
    r1 = r13 + 8u;
    guest::cpu()->r[13] = r13;
    r0 = call_005ea964(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    guest::preempt();
    goto L_289e2c;
}

}  // namespace d_00289d90
GUEST_EXPORT(0x00289d90, d_00289d90::f_00289d90);

// f_0028a008: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0028a008 {

struct __attribute__((packed)) Object_0028a008_0 {
    u8 unknown_0[0x628];  // (not used here)
    u32 word_628;
};
GUEST_OFFSET(Object_0028a008_0, word_628, 0x628);  // (from the original)

inline constexpr guest::Function<0x00289ce8, u32(u32, u32, u32, u32)> call_00289ce8;  // (from the original)
inline constexpr guest::Function<0x00301da8, u32(u32, u32, u32, u32)> call_00301da8;  // (from the original)
inline constexpr guest::Function<0x00312bd0, u32(u32, u32, u32, u32)> call_00312bd0;  // (from the original)
inline constexpr guest::Function<0x00312c4c, u32(u32, u32, u32, u32)> call_00312c4c;  // (from the original)
inline constexpr guest::Function<0x00312cb0, u32(u32, u32, u32, u32)> call_00312cb0;  // (from the original)
inline constexpr guest::Function<0x005e2e50, u32(u32, u32, u32, u32)> call_005e2e50;  // (from the original)
inline constexpr guest::Function<0x005e2f94, u32(u32, u32, u32, u32)> call_005e2f94;  // (from the original)

u32 f_0028a008(gptr<Object_0028a008_0> arg0, u32 r1_unused, u32 r2, u32 r3) {
    u32 r0 = arg0.addr();
    u32 r1 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r13 = guest::cpu()->r[13];
    r4 = r0;
    r1 = 0x7dcu;  // (from the original)
    r0 = arg0->word_628;
    r13 = r13 - 0x58u;  // (from the original)
    if (s32(r0) < s32(r1)) {
        arg0->word_628 = u32(r1 + 0x26u);  // (from the original)
        goto L_28a038;
    }
    r2 = 0x803u;  // (from the original)
    if (s32(r2) <= s32(r0)) {
        arg0->word_628 = u32(r1);
    }
L_28a038:;
    r0 = r13 + 4u;
    guest::cpu()->r[13] = r13;
    r0 = call_00312bd0(r0, r1, r2, r3);
    r0 = 4u;
    *gptr<u32>(r13) = u32(r0);
    r2 = r0;
    r1 = *gptr<u32>(r4 + 0x628u);  // (from the original)
    r3 = 6u;
    r0 = r13 + 4u;
    guest::cpu()->r[13] = r13;
    r0 = call_00312c4c(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r4 + 0x674u;  // (from the original)
    r1 = r13 + 4u;
    r5 = r0;
    guest::cpu()->r[13] = r13;
    r0 = call_005e2e50(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r5;
    guest::cpu()->r[13] = r13;
    r0 = call_005e2f94(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = 0x8532a7u;  // (from the original)
    r0 = *gptr<u32>(r4 + 0x62cu);  // (from the original)
    r5 = u32(s32(s8(*gptr<u8>(r0 + r1))));
    if (r0 == 2u) {
        r0 = *gptr<u32>(r4 + 0x628u);  // (from the original)
        guest::cpu()->r[13] = r13;
        r0 = call_00301da8(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        if (r0 != 0) {
            r5 = r5 + 1u;
        }
    }
    if (s32(*gptr<u32>(r4 + 0x630u)) > s32(r5)) {  // (from the original)
        r0 = r4;
        *gptr<u32>(r4 + 0x630u) = u32(r5);  // (from the original)
        guest::cpu()->r[13] = r13;
        r0 = call_00289ce8(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
    }
    r0 = r13 + 4u;
    guest::cpu()->r[13] = r13;
    r0 = call_00312cb0(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r13 = r13 + 0x58u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_0028a008
GUEST_EXPORT(0x0028a008, d_0028a008::f_0028a008);

// f_0028a0d4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0028a0d4 {

inline constexpr guest::Function<0x003083bc, u32(u32, u32, u32, u32)> call_003083bc;  // (from the original)
inline constexpr guest::Function<0x00568a80, u32(u32, u32, u32, u32)> call_00568a80;  // (from the original)
inline constexpr guest::Function<0x005e2c98, u32(u32, u32, u32, u32)> call_005e2c98;  // (from the original)
inline constexpr guest::Function<0x005e2e50, u32(u32, u32, u32, u32)> call_005e2e50;  // (from the original)
inline constexpr guest::Function<0x005e2f94, u32(u32, u32, u32, u32)> call_005e2f94;  // (from the original)
inline constexpr guest::Function<0x005ea8dc, u32(u32, u32, u32, u32)> call_005ea8dc;  // (from the original)
inline constexpr guest::Function<0x005ea8f8, u32(u32, u32, u32, u32)> call_005ea8f8;  // (from the original)
inline constexpr guest::Function<0x005ea964, u32(u32, u32, u32, u32)> call_005ea964;  // (from the original)
inline constexpr guest::Function<0x005f4bfc, u32(u32, u32, u32, u32)> call_005f4bfc;  // (from the original)
inline constexpr guest::Function<0x005fdf68, u32(u32, u32, u32, u32)> call_005fdf68;  // (from the original)

u32 f_0028a0d4(u32 r0, u32 r1_unused, u32 r2, u32 r3) {
    u32 ea = 0;
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
    u32 r13 = guest::cpu()->r[13];
    r4 = r0;
    r13 = r13 - 0x60u;  // (from the original)
    r1 = 0x28a47cu;  // (from the original)
    r0 = r0 + 0x294u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00568a80(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    r1 = r0;
    r2 = 0u;
    r0 = r4 + 0x674u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_005e2c98(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = 0x28a484u;  // (from the original)
    r0 = r4 + 0x294u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00568a80(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    r1 = r0;
    r2 = 0u;
    r0 = r4 + 0x738u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_005e2c98(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = 0x28a490u;  // (from the original)
    r0 = r4 + 0x294u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00568a80(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    r1 = r0;
    r2 = 0u;
    r0 = r4 + 0x7fcu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_005e2c98(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = 0x28a498u;  // (from the original)
    r0 = r4 + 0x294u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00568a80(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    r1 = r0;
    r2 = 0u;
    r0 = r4 + 0x8c0u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_005e2c98(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = 0x28a4a4u;  // (from the original)
    r0 = r4 + 0x294u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00568a80(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    r1 = r0;
    r2 = 0u;
    r0 = r4 + 0xbd0u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_005e2c98(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = 0x28a4acu;  // (from the original)
    r0 = r4 + 0x294u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00568a80(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    r1 = r0;
    r0 = r4 + 0xc94u;  // (from the original)
    r2 = 0u;
    r6 = r0;
    guest::cpu()->r[13] = r13;
    r0 = call_005e2c98(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = 0x28a4b8u;  // (from the original)
    r0 = r4 + 0x294u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00568a80(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    r1 = r0;
    r0 = r4 + 0xd58u;  // (from the original)
    r2 = 0u;
    r10 = r0;
    guest::cpu()->r[13] = r13;
    r0 = call_005e2c98(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = 0x28a4c0u;  // (from the original)
    r0 = r4 + 0x294u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00568a80(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    r1 = r0;
    r0 = r4 + 0xfa4u;  // (from the original)
    r2 = 0u;
    r11 = r0;
    guest::cpu()->r[13] = r13;
    r0 = call_005e2c98(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = 0x28a4ccu;  // (from the original)
    r0 = r4 + 0x294u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00568a80(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    r1 = r0;
    r0 = r4 + 0x1068u;  // (from the original)
    r2 = 0u;
    r7 = r0;
    guest::cpu()->r[13] = r13;
    r0 = call_005e2c98(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    r0 = r13 + 4u;
    r2 = 0xau;  // (from the original)
    r1 = r13 + 0x1cu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_003083bc(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r5 = 0x9098f8u;  // (from the original)
    *gptr<u32>(r0) = u32(r5);
    r0 = r0 + 0xcu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_005f4bfc(r0, r1, r2, r3);
    r0 = r0 - 0xcu;  // (from the original)
    r9 = 0u;
    *gptr<u32>(r0 + 0x18u) = u32(r9);  // (from the original)
    *gptr<u32>(r0 + 0x1cu) = u32(r9);  // (from the original)
    *gptr<u32>(r0 + 0x20u) = u32(r9);  // (from the original)
    r2 = 0x8906ecu;  // (from the original)
    *gptr<u32>(r0 + 0x24u) = u32(r9);  // (from the original)
    *gptr<u32>(r0 + 0x28u) = u32(r9);  // (from the original)
    r1 = 5u;
    r0 = r0 + 0x16u;  // (from the original)
    do {
L_28a24c:;
        ea = r2;
        r3 = u32(*gptr<u16>(ea));
        res = r1 - 1u;
        r1 = res;
        ea = r0 + 2u;
        *gptr<u16>(ea) = u16(r3);
        ea = r2;
        r3 = u32(*gptr<u16>(ea));
        ea = r0 + 4u;
        *gptr<u16>(ea) = u16(r3);
        r0 = ea;
        guest::preempt();
    } while (res != 0);
    r8 = 0x95deccu;  // (from the original)
    r1 = 0u;
    r0 = *gptr<u32>(r8);
    guest::cpu()->r[13] = r13;
    r0 = call_005ea8f8(r0, r1, r2, r3);
    *gptr<u32>(r13) = u32(r9);
    r0 = *gptr<u32>(r8);
    r3 = 0x63u;  // (from the original)
    r2 = 0x28a4e4u;  // (from the original)
    r1 = r13 + 4u;
    guest::cpu()->r[13] = r13;
    r0 = call_005ea964(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = *gptr<u32>(r8);
    r1 = 0u;
    guest::cpu()->r[13] = r13;
    r0 = call_005ea8dc(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = r13 + 4u;
    r0 = r4 + 0xbd0u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_005e2e50(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r4 + 0xbd0u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_005e2f94(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = *gptr<u32>(r8);
    r1 = 0u;
    guest::cpu()->r[13] = r13;
    r0 = call_005ea8f8(r0, r1, r2, r3);
    *gptr<u32>(r13) = u32(r9);
    r0 = *gptr<u32>(r8);
    r3 = 0x64u;  // (from the original)
    r2 = 0x28a4e4u;  // (from the original)
    r1 = r13 + 4u;
    guest::cpu()->r[13] = r13;
    r0 = call_005ea964(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = *gptr<u32>(r8);
    r1 = 0u;
    guest::cpu()->r[13] = r13;
    r0 = call_005ea8dc(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = r13 + 4u;
    r0 = r6;
    guest::cpu()->r[13] = r13;
    r0 = call_005e2e50(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r6;
    guest::cpu()->r[13] = r13;
    r0 = call_005e2f94(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = *gptr<u32>(r8);
    r1 = 0u;
    guest::cpu()->r[13] = r13;
    r0 = call_005ea8f8(r0, r1, r2, r3);
    *gptr<u32>(r13) = u32(r9);
    r0 = *gptr<u32>(r8);
    r3 = 0x65u;  // (from the original)
    r2 = 0x28a4e4u;  // (from the original)
    r1 = r13 + 4u;
    guest::cpu()->r[13] = r13;
    r0 = call_005ea964(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = *gptr<u32>(r8);
    r1 = 0u;
    guest::cpu()->r[13] = r13;
    r0 = call_005ea8dc(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = r13 + 4u;
    r0 = r10;
    guest::cpu()->r[13] = r13;
    r0 = call_005e2e50(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r10;
    guest::cpu()->r[13] = r13;
    r0 = call_005e2f94(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = *gptr<u32>(r8);
    r1 = 0u;
    guest::cpu()->r[13] = r13;
    r0 = call_005ea8f8(r0, r1, r2, r3);
    *gptr<u32>(r13) = u32(r9);
    r0 = *gptr<u32>(r8);
    r3 = 0xe3u;  // (from the original)
    r2 = 0x28a4e4u;  // (from the original)
    r1 = r13 + 4u;
    guest::cpu()->r[13] = r13;
    r0 = call_005ea964(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = *gptr<u32>(r8);
    r1 = 0u;
    guest::cpu()->r[13] = r13;
    r0 = call_005ea8dc(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = r13 + 4u;
    r0 = r11;
    guest::cpu()->r[13] = r13;
    r0 = call_005e2e50(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r11;
    guest::cpu()->r[13] = r13;
    r0 = call_005e2f94(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = r13 + 4u;
    r0 = r7;
    guest::cpu()->r[13] = r13;
    r0 = call_005e2e50(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r7;
    guest::cpu()->r[13] = r13;
    r0 = call_005e2f94(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = 0x28a4f0u;  // (from the original)
    r0 = r4 + 0x3e0u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00568a80(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    r1 = r0;
    r2 = 0u;
    r0 = r4 + 0x984u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_005e2c98(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = 0x28a4fcu;  // (from the original)
    r0 = r4 + 0x3e0u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00568a80(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    r1 = r0;
    r2 = 0u;
    r0 = r4 + 0xa48u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_005e2c98(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = 0x28a508u;  // (from the original)
    r0 = r4 + 0x3e0u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00568a80(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    r1 = r0;
    r2 = 0u;
    r0 = r4 + 0xb0cu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_005e2c98(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = 0x28a514u;  // (from the original)
    r0 = r4 + 0x3e0u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00568a80(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    r1 = r0;
    r0 = r4 + 0xe1cu;  // (from the original)
    r2 = 0u;
    r6 = r0;
    guest::cpu()->r[13] = r13;
    r0 = call_005e2c98(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = 0x28a520u;  // (from the original)
    r0 = r4 + 0x3e0u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00568a80(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    r1 = r0;
    r2 = 0u;
    r0 = r4 + 0xee0u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_005e2c98(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = 0x28a4c0u;  // (from the original)
    r0 = r4 + 0x3e0u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00568a80(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    r1 = r0;
    r0 = r4 + 0x112cu;  // (from the original)
    r2 = 0u;
    r7 = r0;
    guest::cpu()->r[13] = r13;
    r0 = call_005e2c98(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = *gptr<u32>(r8);
    r1 = 0u;
    guest::cpu()->r[13] = r13;
    r0 = call_005ea8f8(r0, r1, r2, r3);
    r3 = 0x66u;  // (from the original)
    r2 = 0x28a4e4u;  // (from the original)
    goto L_28a52c;
L_28a52c:;
    *gptr<u32>(r13) = u32(r9);
    r0 = *gptr<u32>(r8);
    r1 = r13 + 4u;
    guest::cpu()->r[13] = r13;
    r0 = call_005ea964(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = *gptr<u32>(r8);
    r1 = 0u;
    guest::cpu()->r[13] = r13;
    r0 = call_005ea8dc(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = r13 + 4u;
    r0 = r6;
    guest::cpu()->r[13] = r13;
    r0 = call_005e2e50(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r6;
    guest::cpu()->r[13] = r13;
    r0 = call_005e2f94(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = *gptr<u32>(r8);
    r1 = 0u;
    guest::cpu()->r[13] = r13;
    r0 = call_005ea8f8(r0, r1, r2, r3);
    *gptr<u32>(r13) = u32(r9);
    r0 = *gptr<u32>(r8);
    r3 = 0x67u;  // (from the original)
    r2 = 0x28a4e4u;  // (from the original)
    r1 = r13 + 4u;
    guest::cpu()->r[13] = r13;
    r0 = call_005ea964(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = *gptr<u32>(r8);
    r1 = 0u;
    guest::cpu()->r[13] = r13;
    r0 = call_005ea8dc(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = r13 + 4u;
    r0 = r4 + 0xee0u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_005e2e50(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r4 + 0xee0u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_005e2f94(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    r2 = 0xau;  // (from the original)
    r1 = 0x28a5fcu;  // (from the original)
    r0 = r13 + 0x30u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_005fdf68(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = r13 + 0x30u;  // (from the original)
    r0 = r7;
    guest::cpu()->r[13] = r13;
    r0 = call_005e2e50(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r7;
    guest::cpu()->r[13] = r13;
    r0 = call_005e2f94(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    *gptr<u32>(r13 + 4u) = u32(r5);
    r0 = r13 + 4u;
    r13 = r13 + 0x60u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_0028a0d4
GUEST_EXPORT(0x0028a0d4, d_0028a0d4::f_0028a0d4);

// f_0028a600: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0028a600 {

struct __attribute__((packed)) Object_0028a600_0 {
    u8 unknown_0[0x62c];  // (not used here)
    u32 word_62c;
};
GUEST_OFFSET(Object_0028a600_0, word_62c, 0x62c);  // (from the original)

inline constexpr guest::Function<0x00289ce8, u32(u32, u32, u32, u32)> call_00289ce8;  // (from the original)
inline constexpr guest::Function<0x00301da8, u32(u32, u32, u32, u32)> call_00301da8;  // (from the original)
inline constexpr guest::Function<0x00312bd0, u32(u32, u32, u32, u32)> call_00312bd0;  // (from the original)
inline constexpr guest::Function<0x00312c4c, u32(u32, u32, u32, u32)> call_00312c4c;  // (from the original)
inline constexpr guest::Function<0x00312cb0, u32(u32, u32, u32, u32)> call_00312cb0;  // (from the original)
inline constexpr guest::Function<0x005e2e50, u32(u32, u32, u32, u32)> call_005e2e50;  // (from the original)
inline constexpr guest::Function<0x005e2f94, u32(u32, u32, u32, u32)> call_005e2f94;  // (from the original)

u32 f_0028a600(gptr<Object_0028a600_0> arg0, u32 r1, u32 r2, u32 r3) {
    u32 res = 0;
    u32 r0 = arg0.addr();
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r13 = guest::cpu()->r[13];
    u32 nf = 0;
    u32 zf = 0;
    u32 vf = 0;
    r4 = r0;
    r0 = arg0->word_62c;
    r13 = r13 - 0x58u;  // (from the original)
    if (s32(r0) < s32(1u)) {
        r0 = 0xcu;  // (from the original)
        goto L_28a628;
    }
    res = r0 - 0xcu;  // (from the original)
    nf = res >> 0x1f;  // (from the original)
    zf = res == 0;
    vf = ((r0 ^ 0xcu) & (r0 ^ res)) >> 0x1f;  // (from the original)
    if (!zf && nf == vf) {
        r0 = 1u;
    }
    if (zf || nf != vf) {
        goto L_28a62c;
    }
L_28a628:;
    *gptr<u32>(r4 + 0x62cu) = u32(r0);  // (from the original)
L_28a62c:;
    r0 = r13 + 4u;
    guest::cpu()->r[13] = r13;
    r0 = call_00312bd0(r0, r1, r2, r3);
    *gptr<u32>(r13) = u32(4u);
    r1 = *gptr<u32>(r4 + 0x62cu);  // (from the original)
    r3 = 6u;
    r2 = 2u;
    r0 = r13 + 4u;
    guest::cpu()->r[13] = r13;
    r0 = call_00312c4c(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r4 + 0x738u;  // (from the original)
    r1 = r13 + 4u;
    r5 = r0;
    guest::cpu()->r[13] = r13;
    r0 = call_005e2e50(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r5;
    guest::cpu()->r[13] = r13;
    r0 = call_005e2f94(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = 0x8532a7u;  // (from the original)
    r0 = *gptr<u32>(r4 + 0x62cu);  // (from the original)
    r5 = u32(s32(s8(*gptr<u8>(r0 + r1))));
    if (r0 == 2u) {
        r0 = *gptr<u32>(r4 + 0x628u);  // (from the original)
        guest::cpu()->r[13] = r13;
        r0 = call_00301da8(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        if (r0 != 0) {
            r5 = r5 + 1u;
        }
    }
    if (s32(*gptr<u32>(r4 + 0x630u)) > s32(r5)) {  // (from the original)
        r0 = r4;
        *gptr<u32>(r4 + 0x630u) = u32(r5);  // (from the original)
        guest::cpu()->r[13] = r13;
        r0 = call_00289ce8(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
    }
    r0 = r13 + 4u;
    guest::cpu()->r[13] = r13;
    r0 = call_00312cb0(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r13 = r13 + 0x58u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_0028a600
GUEST_EXPORT(0x0028a600, d_0028a600::f_0028a600);

// f_0028ab90: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0028ab90 {

inline constexpr guest::Function<0x002fb378, u32(u32, u32, u32, u32)> call_002fb378;  // (from the original)
inline constexpr guest::Function<0x0030a488, u32(u32, u32, u32, u32)> call_0030a488;  // (from the original)

u32 f_0028ab90(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 ea = 0;
    u32 res = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r13 = guest::cpu()->r[13];
    u32 zf = 0;
    r13 = r13 - 0x20u;  // (from the original)
    r5 = r0;
    guest::cpu()->r[13] = r13;
    r0 = call_002fb378(r0, r1, r2, r3);
    ea = r0;
    r1 = *gptr<u32>(ea);
    r2 = *gptr<u32>(ea + 4);
    r4 = r5 + 0x600u;  // (from the original)
    ea = r13 + 0xcu;  // (from the original)
    *gptr<u32>(ea) = u32(*gptr<u32>(r0 + 8u));
    ea = r13 + 4u;
    *gptr<u32>(ea) = u32(r1);
    *gptr<u32>(ea + 4) = u32(r2);
    r0 = *gptr<u32>(r5 + 0x63cu);  // (from the original)
    if (r0 != 0x2fu) {  // (from the original)
        if (r0 != 0x30u) {  // (from the original)
            goto L_28ac54;
        }
        r0 = 0u;
        r3 = r0;
        r2 = r0;
        *gptr<u32>(r13) = u32(r0);
        r1 = 1u;
        r0 = r13 + 4u;
        guest::cpu()->r[13] = r13;
        r0 = call_0030a488(r0, r1, r2, r3);
        r0 = *gptr<u32>(r5 + 0x61cu);  // (from the original)
        r1 = *gptr<u32>(r13 + 4u);
        res = r0 - r1;
        zf = res == 0;
        if (res >> 0x1f != ((r0 ^ r1) & (r0 ^ res)) >> 0x1f) {  // (from the original)
            goto L_28ac48;
        }
        if (!zf) {
            goto L_28ac54;
        }
        r0 = u32(s32(s8(*gptr<u8>(r4 + 0x20u))));  // (from the original)
        r1 = u32(s32(s8(*gptr<u8>(r13 + 8u))));
        res = r0 - r1;
        zf = res == 0;
        if (res >> 0x1f != ((r0 ^ r1) & (r0 ^ res)) >> 0x1f) {  // (from the original)
            goto L_28ac48;
        }
        if (!zf) {
            goto L_28ac54;
        }
        r1 = u32(s32(s8(*gptr<u8>(r13 + 9u))));
        if (s32(u32(s32(s8(*gptr<u8>(r4 + 0x21u))))) >= s32(r1)) {  // (from the original)
            goto L_28ac54;
        }
        goto L_28ac48;
    }
    r0 = u32(s32(s8(*gptr<u8>(r4 + 0x23u))));  // (from the original)
    r1 = u32(s32(s8(*gptr<u8>(r13 + 0xbu))));  // (from the original)
    res = r0 - r1;
    zf = res == 0;
    if (res >> 0x1f != ((r0 ^ r1) & (r0 ^ res)) >> 0x1f) {  // (from the original)
        goto L_28ac48;
    }
    if (!zf) {
        goto L_28ac54;
    }
    r1 = u32(s32(s8(*gptr<u8>(r13 + 0xcu))));  // (from the original)
    if (s32(u32(s32(s8(*gptr<u8>(r4 + 0x24u))))) >= s32(r1)) {  // (from the original)
        goto L_28ac54;
    }
L_28ac48:;
    r0 = 0u;
    r13 = r13 + 0x20u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
L_28ac54:;
    r0 = 1u;
    r13 = r13 + 0x20u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_0028ab90
GUEST_EXPORT(0x0028ab90, d_0028ab90::f_0028ab90);

// f_0028ac60: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0028ac60 {

inline constexpr guest::Function<0x0028aae4, u32(u32, u32, u32, u32)> call_0028aae4;  // (from the original)
inline constexpr guest::Function<0x0056878c, u32(u32, u32, u32, u32)> call_0056878c;  // (from the original)
inline constexpr guest::Function<0x005d46dc, u32(u32, u32, u32, u32)> call_005d46dc;  // (from the original)

u32 f_0028ac60(u32 r0, float S0, float S1, float S2, float S3, float S4, float S5, float S6, float S7) {
    u32 ea = 0;
    u32 r1 = 0;
    u32 r2 = 0;
    u32 r3 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r12 = 0;
    u32 r13 = guest::cpu()->r[13];
    r5 = r0;
    r13 = r13 - 0x58u;  // (from the original)
    r4 = 0x853228u;  // (from the original)
    ea = r4 + 0x1bcu;  // (from the original)
    r0 = *gptr<u32>(ea);
    r1 = *gptr<u32>(ea + 4);
    r2 = *gptr<u32>(ea + 8);
    r3 = *gptr<u32>(ea + 0xc);  // (from the original)
    r6 = *gptr<u32>(ea + 0x10);  // (from the original)
    r7 = *gptr<u32>(ea + 0x14);  // (from the original)
    r8 = *gptr<u32>(ea + 0x18);  // (from the original)
    r12 = *gptr<u32>(ea + 0x1c);  // (from the original)
    *gptr<u32>(r13) = u32(r0);
    *gptr<u32>(r13 + 4) = u32(r1);
    *gptr<u32>(r13 + 8) = u32(r2);
    *gptr<u32>(r13 + 0xc) = u32(r3);  // (from the original)
    *gptr<u32>(r13 + 0x10) = u32(r6);  // (from the original)
    *gptr<u32>(r13 + 0x14) = u32(r7);  // (from the original)
    *gptr<u32>(r13 + 0x18) = u32(r8);  // (from the original)
    *gptr<u32>(r13 + 0x1c) = u32(r12);  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2;
    guest::cpu()->s[3] = S3;
    guest::cpu()->s[4] = S4;
    guest::cpu()->s[5] = S5;
    guest::cpu()->s[6] = S6;
    guest::cpu()->s[7] = S7;
    r0 = call_005d46dc(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    S2 = guest::cpu()->s[2];
    S3 = guest::cpu()->s[3];
    S4 = guest::cpu()->s[4];
    S5 = guest::cpu()->s[5];
    S6 = guest::cpu()->s[6];
    S7 = guest::cpu()->s[7];
    r7 = r13;
    if (r0 == 1u) {
        goto L_28acf4;
    }
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2;
    guest::cpu()->s[3] = S3;
    guest::cpu()->s[4] = S4;
    guest::cpu()->s[5] = S5;
    guest::cpu()->s[6] = S6;
    guest::cpu()->s[7] = S7;
    r0 = call_005d46dc(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    r0 = r0 - 2u;
    if (u32(r0 >= 6u) && !u32(r0 == 6u)) {
        goto L_28acec;
    }
    r4 = r4 + 0x1fcu;  // (from the original)
    r0 = r13 + 0x20u;  // (from the original)
    S0 = std::bit_cast<float>(*gptr<u32>(r4));
    S1 = std::bit_cast<float>(*gptr<u32>(r4 + 4));
    S2 = std::bit_cast<float>(*gptr<u32>(r4 + 8));
    S3 = std::bit_cast<float>(*gptr<u32>(r4 + 0xc));  // (from the original)
    S4 = std::bit_cast<float>(*gptr<u32>(r4 + 0x10));  // (from the original)
    S5 = std::bit_cast<float>(*gptr<u32>(r4 + 0x14));  // (from the original)
    S6 = std::bit_cast<float>(*gptr<u32>(r4 + 0x18));  // (from the original)
    S7 = std::bit_cast<float>(*gptr<u32>(r4 + 0x1c));  // (from the original)
    r4 = 0u;
    r8 = r13 + 0x20u;  // (from the original)
    *gptr<u32>(r0) = u32(std::bit_cast<u32>(S0));
    *gptr<u32>(r0 + 4) = u32(std::bit_cast<u32>(S1));
    *gptr<u32>(r0 + 8) = u32(std::bit_cast<u32>(S2));
    *gptr<u32>(r0 + 0xc) = u32(std::bit_cast<u32>(S3));  // (from the original)
    *gptr<u32>(r0 + 0x10) = u32(std::bit_cast<u32>(S4));  // (from the original)
    *gptr<u32>(r0 + 0x14) = u32(std::bit_cast<u32>(S5));  // (from the original)
    *gptr<u32>(r0 + 0x18) = u32(std::bit_cast<u32>(S6));  // (from the original)
    *gptr<u32>(r0 + 0x1c) = u32(std::bit_cast<u32>(S7));  // (from the original)
    do {
L_28acb4:;
        r0 = r5 + 0x294u;  // (from the original)
        r1 = *gptr<u32>(r8 + (r4 << 2));
        guest::cpu()->r[13] = r13;
        guest::cpu()->s[0] = S0;
        guest::cpu()->s[1] = S1;
        guest::cpu()->s[2] = S2;
        guest::cpu()->s[3] = S3;
        guest::cpu()->s[4] = S4;
        guest::cpu()->s[5] = S5;
        guest::cpu()->s[6] = S6;
        guest::cpu()->s[7] = S7;
        r0 = call_0056878c(r0, r1, r2, r3);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        S0 = guest::cpu()->s[0];
        S1 = guest::cpu()->s[1];
        S2 = guest::cpu()->s[2];
        S3 = guest::cpu()->s[3];
        S4 = guest::cpu()->s[4];
        S5 = guest::cpu()->s[5];
        S6 = guest::cpu()->s[6];
        S7 = guest::cpu()->s[7];
        r6 = r0;
        r1 = *gptr<u32>(r7 + (r4 << 2));
        r0 = r5 + 0x294u;  // (from the original)
        guest::cpu()->r[13] = r13;
        guest::cpu()->s[0] = S0;
        guest::cpu()->s[1] = S1;
        guest::cpu()->s[2] = S2;
        guest::cpu()->s[3] = S3;
        guest::cpu()->s[4] = S4;
        guest::cpu()->s[5] = S5;
        guest::cpu()->s[6] = S6;
        guest::cpu()->s[7] = S7;
        r0 = call_0056878c(r0, r1, r2, r3);
        r3 = guest::cpu()->r[3];
        S0 = guest::cpu()->s[0];
        S1 = guest::cpu()->s[1];
        S2 = guest::cpu()->s[2];
        S3 = guest::cpu()->s[3];
        S4 = guest::cpu()->s[4];
        S5 = guest::cpu()->s[5];
        S6 = guest::cpu()->s[6];
        S7 = guest::cpu()->s[7];
        r1 = r0;
        r2 = r6;
        r0 = r5;
        guest::cpu()->r[13] = r13;
        guest::cpu()->s[0] = S0;
        guest::cpu()->s[1] = S1;
        guest::cpu()->s[2] = S2;
        guest::cpu()->s[3] = S3;
        guest::cpu()->s[4] = S4;
        guest::cpu()->s[5] = S5;
        guest::cpu()->s[6] = S6;
        guest::cpu()->s[7] = S7;
        r0 = call_0028aae4(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        S0 = guest::cpu()->s[0];
        S1 = guest::cpu()->s[1];
        S2 = guest::cpu()->s[2];
        S3 = guest::cpu()->s[3];
        S4 = guest::cpu()->s[4];
        S5 = guest::cpu()->s[5];
        S6 = guest::cpu()->s[6];
        S7 = guest::cpu()->s[7];
        r4 = r4 + 1u;
        guest::preempt();
    } while (r4 < 8u);
L_28acec:;
    r13 = r13 + 0x58u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    return r0;
L_28acf4:;
    r4 = r4 + 0x1dcu;  // (from the original)
    r0 = r13 + 0x20u;  // (from the original)
    S0 = std::bit_cast<float>(*gptr<u32>(r4));
    S1 = std::bit_cast<float>(*gptr<u32>(r4 + 4));
    S2 = std::bit_cast<float>(*gptr<u32>(r4 + 8));
    S3 = std::bit_cast<float>(*gptr<u32>(r4 + 0xc));  // (from the original)
    S4 = std::bit_cast<float>(*gptr<u32>(r4 + 0x10));  // (from the original)
    S5 = std::bit_cast<float>(*gptr<u32>(r4 + 0x14));  // (from the original)
    S6 = std::bit_cast<float>(*gptr<u32>(r4 + 0x18));  // (from the original)
    S7 = std::bit_cast<float>(*gptr<u32>(r4 + 0x1c));  // (from the original)
    r4 = 0u;
    r8 = r13 + 0x20u;  // (from the original)
    *gptr<u32>(r0) = u32(std::bit_cast<u32>(S0));
    *gptr<u32>(r0 + 4) = u32(std::bit_cast<u32>(S1));
    *gptr<u32>(r0 + 8) = u32(std::bit_cast<u32>(S2));
    *gptr<u32>(r0 + 0xc) = u32(std::bit_cast<u32>(S3));  // (from the original)
    *gptr<u32>(r0 + 0x10) = u32(std::bit_cast<u32>(S4));  // (from the original)
    *gptr<u32>(r0 + 0x14) = u32(std::bit_cast<u32>(S5));  // (from the original)
    *gptr<u32>(r0 + 0x18) = u32(std::bit_cast<u32>(S6));  // (from the original)
    *gptr<u32>(r0 + 0x1c) = u32(std::bit_cast<u32>(S7));  // (from the original)
    do {
L_28ad0c:;
        r0 = r5 + 0x294u;  // (from the original)
        r1 = *gptr<u32>(r8 + (r4 << 2));
        guest::cpu()->r[13] = r13;
        guest::cpu()->s[0] = S0;
        guest::cpu()->s[1] = S1;
        guest::cpu()->s[2] = S2;
        guest::cpu()->s[3] = S3;
        guest::cpu()->s[4] = S4;
        guest::cpu()->s[5] = S5;
        guest::cpu()->s[6] = S6;
        guest::cpu()->s[7] = S7;
        r0 = call_0056878c(r0, r1, r2, r3);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        S0 = guest::cpu()->s[0];
        S1 = guest::cpu()->s[1];
        S2 = guest::cpu()->s[2];
        S3 = guest::cpu()->s[3];
        S4 = guest::cpu()->s[4];
        S5 = guest::cpu()->s[5];
        S6 = guest::cpu()->s[6];
        S7 = guest::cpu()->s[7];
        r6 = r0;
        r1 = *gptr<u32>(r7 + (r4 << 2));
        r0 = r5 + 0x294u;  // (from the original)
        guest::cpu()->r[13] = r13;
        guest::cpu()->s[0] = S0;
        guest::cpu()->s[1] = S1;
        guest::cpu()->s[2] = S2;
        guest::cpu()->s[3] = S3;
        guest::cpu()->s[4] = S4;
        guest::cpu()->s[5] = S5;
        guest::cpu()->s[6] = S6;
        guest::cpu()->s[7] = S7;
        r0 = call_0056878c(r0, r1, r2, r3);
        r3 = guest::cpu()->r[3];
        S0 = guest::cpu()->s[0];
        S1 = guest::cpu()->s[1];
        S2 = guest::cpu()->s[2];
        S3 = guest::cpu()->s[3];
        S4 = guest::cpu()->s[4];
        S5 = guest::cpu()->s[5];
        S6 = guest::cpu()->s[6];
        S7 = guest::cpu()->s[7];
        r1 = r0;
        r2 = r6;
        r0 = r5;
        guest::cpu()->r[13] = r13;
        guest::cpu()->s[0] = S0;
        guest::cpu()->s[1] = S1;
        guest::cpu()->s[2] = S2;
        guest::cpu()->s[3] = S3;
        guest::cpu()->s[4] = S4;
        guest::cpu()->s[5] = S5;
        guest::cpu()->s[6] = S6;
        guest::cpu()->s[7] = S7;
        r0 = call_0028aae4(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        S0 = guest::cpu()->s[0];
        S1 = guest::cpu()->s[1];
        S2 = guest::cpu()->s[2];
        S3 = guest::cpu()->s[3];
        S4 = guest::cpu()->s[4];
        S5 = guest::cpu()->s[5];
        S6 = guest::cpu()->s[6];
        S7 = guest::cpu()->s[7];
        r4 = r4 + 1u;
        guest::preempt();
    } while (r4 < 8u);
    r13 = r13 + 0x58u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    return r0;
}

}  // namespace d_0028ac60
GUEST_EXPORT(0x0028ac60, d_0028ac60::f_0028ac60);

// f_0028b220: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0028b220 {

struct __attribute__((packed)) Object_0028b220_0 {
    u8 unknown_0[0x63c];  // (not used here)
    u32 word_63c;
};
GUEST_OFFSET(Object_0028b220_0, word_63c, 0x63c);  // (from the original)

inline constexpr guest::Function<0x0022bdf0, u32(u32, u32, u32, u32)> call_0022bdf0;  // (from the original)
inline constexpr guest::Function<0x002687c8, u32(u32, u32, u32, u32)> call_002687c8;  // (from the original)
inline constexpr guest::Function<0x002688cc, u32(u32, u32, u32, u32)> call_002688cc;  // (from the original)
inline constexpr guest::Function<0x002cd2e0, u32(u32, u32, u32, u32)> call_002cd2e0;  // (from the original)
inline constexpr guest::Function<0x002fb378, u32(u32, u32, u32, u32)> call_002fb378;  // (from the original)
inline constexpr guest::Function<0x0030a488, u32(u32, u32, u32, u32)> call_0030a488;  // (from the original)
inline constexpr guest::Function<0x006a32c4, u32(u32, u32, u32, u32)> call_006a32c4;  // (from the original)

u32 f_0028b220(gptr<Object_0028b220_0> arg0, u32 r1, u32 r2, u32 r3) {
    u32 ea = 0;
    u32 res = 0;
    u32 r0 = arg0.addr();
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r13 = guest::cpu()->r[13];
    u32 r14 = guest::cpu()->r[14];
    u32 nf = 0;
    u32 vf = 0;
    ea = r13 - 0x18;  // (from the original)
    *gptr<u32>(ea) = u32(r3);
    *gptr<u32>(ea + 4) = u32(r4);
    *gptr<u32>(ea + 8) = u32(r5);
    *gptr<u32>(ea + 0xc) = u32(r6);  // (from the original)
    *gptr<u32>(ea + 0x10) = u32(r7);  // (from the original)
    *gptr<u32>(ea + 0x14) = u32(r14);  // (from the original)
    r13 = r13 - 0x18;  // (from the original)
    r4 = r0;
    r0 = arg0->word_63c;
    r6 = r4 + 0x2090u;  // (from the original)
    r5 = r4 + 0x2d78u;  // (from the original)
    if (r0 != 0x2eu) {  // (from the original)
        if (r0 == 0x2fu) {  // (from the original)
            r2 = 1u;
            r1 = 0u;
            r0 = r5;
            guest::cpu()->r[13] = r13;
            r0 = call_002687c8(r0, r1, r2, r3);
            r3 = 0x8535f0u;  // (from the original)
            r1 = 0x4cu;  // (from the original)
            r2 = *gptr<u32>(0x94fd5cu);  // (from the original)
            r0 = r5;
            guest::cpu()->r[13] = r13;
            r0 = call_002688cc(r0, r1, r2, r3);
            r3 = guest::cpu()->r[3];
            r1 = 0x100038fu;  // (from the original)
            r2 = 1u;
            r0 = r5;
            guest::cpu()->r[13] = r13;
            r0 = call_002cd2e0(r0, r1, r2, r3);
            r1 = u32(*gptr<u8>(r4 + 0x24u));  // (from the original)
            r3 = 0x6eu;  // (from the original)
            r2 = 0x24u;  // (from the original)
            r0 = r6;
            guest::cpu()->r[13] = r13;
            r0 = call_006a32c4(r0, r1, r2, r3);
            r1 = guest::cpu()->r[1];
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
            guest::cpu()->r[13] = r13;
            r0 = call_002fb378(r0, r1, r2, r3);
            ea = r0;
            r1 = *gptr<u32>(ea);
            r2 = *gptr<u32>(ea + 4);
            ea = r4 + 0x624u;  // (from the original)
            *gptr<u32>(ea) = u32(*gptr<u32>(r0 + 8u));
            ea = r4 + 0x61cu;  // (from the original)
            *gptr<u32>(ea) = u32(r1);
            *gptr<u32>(ea + 4) = u32(r2);
            r1 = 0u;
            r0 = u32(s32(s8(*gptr<u8>(0x624u + r4))));  // (from the original)
            r2 = r1;
            *gptr<u32>(r13) = u32(r1);
            res = r0 - 0x1eu;  // (from the original)
            nf = res >> 0x1f;  // (from the original)
            vf = ((r0 ^ 0x1eu) & (r0 ^ res)) >> 0x1f;  // (from the original)
            if (nf != vf) {
                r0 = 0x1eu - r0;  // (from the original)
            }
            if (nf == vf) {
                r0 = 0x3cu - r0;  // (from the original)
            }
            r3 = r0 + 0x1eu;  // (from the original)
            r0 = r4 + 0x61cu;  // (from the original)
            guest::cpu()->r[13] = r13;
            r0 = call_0030a488(r0, r1, r2, r3);
            r1 = guest::cpu()->r[1];
        }
        ea = r13;
        r13 = r13 + 0x18;  // (from the original)
        r4 = *gptr<u32>(ea + 4);
        r5 = *gptr<u32>(ea + 8);
        r6 = *gptr<u32>(ea + 0xc);  // (from the original)
        r7 = *gptr<u32>(ea + 0x10);  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[4] = r4;
        guest::cpu()->r[5] = r5;
        guest::cpu()->r[6] = r6;
        guest::cpu()->r[7] = r7;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    r0 = r4 + 0x29e0u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0022bdf0(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    r2 = 1u;
    *gptr<u16>(0x2e48u + r4) = u16(0xbu);  // (from the original)
    r1 = 0u;
    r0 = r5;
    guest::cpu()->r[13] = r13;
    r0 = call_002687c8(r0, r1, r2, r3);
    r3 = 0x8535f0u;  // (from the original)
    r2 = 0x4fu;  // (from the original)
    r1 = 0x4du;  // (from the original)
    r0 = r5;
    guest::cpu()->r[13] = r13;
    r0 = call_002688cc(r0, r1, r2, r3);
    ea = r4 + 0x24u;  // (from the original)
    r1 = u32(*gptr<u8>(ea));
    r13 = r13 + 4u;
    r0 = r6;
    ea = r13;
    r13 = r13 + 0x14;  // (from the original)
    r4 = *gptr<u32>(ea);
    r5 = *gptr<u32>(ea + 4);
    r6 = *gptr<u32>(ea + 8);
    r7 = *gptr<u32>(ea + 0xc);  // (from the original)
    r14 = *gptr<u32>(ea + 0x10);  // (from the original)
    r3 = 0x61u;  // (from the original)
    r2 = 0x24u;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->r[4] = r4;
    guest::cpu()->r[5] = r5;
    guest::cpu()->r[6] = r6;
    guest::cpu()->r[7] = r7;
    return call_006a32c4(r0, r1, r2, r3);
}

}  // namespace d_0028b220
GUEST_EXPORT(0x0028b220, d_0028b220::f_0028b220);

// f_0028c3e8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0028c3e8 {

inline constexpr guest::Function<0x002b6a00, u32(u32, u32, u32, u32)> call_002b6a00;  // (from the original)
inline constexpr guest::Function<0x002f6a30, u32(u32, u32, u32, u32)> call_002f6a30;  // (from the original)
inline constexpr guest::Function<0x002f6e98, u32(u32, u32, u32, u32)> call_002f6e98;  // (from the original)
inline constexpr guest::Function<0x002f7508, u32(u32, u32, u32, u32)> call_002f7508;  // (from the original)

u32 f_0028c3e8(u32 r0, float S0, float S1) {
    u32 ea = 0;
    u32 r1 = 0;
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
    u32 r12 = 0;
    u32 r13 = guest::cpu()->r[13];
    r1 = 0x853228u;  // (from the original)
    r13 = r13 - 0x68u;  // (from the original)
    r9 = r13 + 0x24u;  // (from the original)
    r6 = r0;
    ea = r1 + 0x2b4u;  // (from the original)
    r4 = *gptr<u32>(ea + 4);
    r5 = *gptr<u32>(ea + 8);
    r7 = *gptr<u32>(ea + 0xc);  // (from the original)
    r8 = *gptr<u32>(ea + 0x10);  // (from the original)
    r12 = *gptr<u32>(ea + 0x14);  // (from the original)
    *gptr<u32>(r9) = u32(*gptr<u32>(ea));
    *gptr<u32>(r9 + 4) = u32(r4);
    *gptr<u32>(r9 + 8) = u32(r5);
    *gptr<u32>(r9 + 0xc) = u32(r7);  // (from the original)
    *gptr<u32>(r9 + 0x10) = u32(r8);  // (from the original)
    *gptr<u32>(r9 + 0x14) = u32(r12);  // (from the original)
    r3 = r13 + 0x1cu;  // (from the original)
    *gptr<u32>(r13 + 0x3cu) = u32(*gptr<u32>(r1 + 0x2ccu));  // (from the original)
    *gptr<u32>(r3) = u32(r0 + 0x4cu);  // (from the original)
    *gptr<u32>(r3 + 4) = u32(r6 + 0x294u);  // (from the original)
    r0 = r6 + 0x1730u;  // (from the original)
    r2 = 0u;
    r1 = r13 + 0x1cu;  // (from the original)
    r8 = r0;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    r0 = call_002f6e98(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r9 = 0u;
    S0 = std::bit_cast<float>(*gptr<u32>(0x28c528u));  // (from the original)
    *gptr<u32>(r8 + 0xd4u) = u32(*gptr<u32>(r8 + 0xd4u) | 0x40u);  // (from the original)
    *gptr<u32>(r13) = u32(r9);
    *gptr<u32>(r13 + 4u) = u32(r9);
    S1 = std::bit_cast<float>(*gptr<u32>(0x28c52cu));  // (from the original)
    r0 = r13 + 8u;
    *gptr<u32>(r13 + 8u) = u32(r9);
    *gptr<u32>(r13 + 0xcu) = u32(r9);  // (from the original)
    *gptr<u32>(r13 + 0x10u) = u32(r9);  // (from the original)
    *gptr<u32>(r13 + 0x14u) = u32(r9);  // (from the original)
    *gptr<u32>(r13 + 0x18u) = u32(r9);  // (from the original)
    r11 = 0x1000399u;  // (from the original)
    r10 = 1u;
    *gptr<u32>(r0) = u32(std::bit_cast<u32>(S0));
    *gptr<u32>(r0 + 4) = u32(std::bit_cast<u32>(S1));
    r4 = r9;
    do {
L_28c480:;
        r0 = r6 + (r4 << 2);
        *gptr<u32>(r13) = u32(*gptr<u32>(r0 + 0x1e68u));  // (from the original)
        r0 = *gptr<u32>(r0 + 0x1e38u);  // (from the original)
        r1 = r13;
        *gptr<u32>(r13 + 0x14u) = u32(r4);  // (from the original)
        *gptr<u32>(r13 + 4u) = u32(r0);
        *gptr<u32>(r13 + 0x10u) = u32(r9);  // (from the original)
        r7 = r6 + ((r4 << 3) - r4 << 5);
        r5 = r7 + 0x11f0u;  // (from the original)
        r0 = r5;
        guest::cpu()->r[13] = r13;
        guest::cpu()->s[0] = S0;
        guest::cpu()->s[1] = S1;
        r0 = call_002b6a00(r0, r1, r2, r3);
        r3 = guest::cpu()->r[3];
        S0 = guest::cpu()->s[0];
        S1 = guest::cpu()->s[1];
        r2 = 1u;
        r1 = r5;
        *gptr<u8>(0x12cau + r7) = u8(r9);  // (from the original)
        *gptr<u32>(r5 + 0xd0u) = u32(r11);  // (from the original)
        *gptr<u8>(r5 + 0xdbu) = u8(r10);  // (from the original)
        r0 = r8;
        *gptr<u8>(r5 + 0xdcu) = u8(r10);  // (from the original)
        guest::cpu()->r[13] = r13;
        guest::cpu()->s[0] = S0;
        guest::cpu()->s[1] = S1;
        r0 = call_002f7508(r0, r1, r2, r3);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        S0 = guest::cpu()->s[0];
        S1 = guest::cpu()->s[1];
        r4 = r4 + 1u;
        guest::preempt();
    } while (r4 < 6u);
    r1 = 0u;
    r0 = r8;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    r0 = call_002f6a30(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    *gptr<u16>(r6 + 0x1800u) = u16(0x23u);  // (from the original)
    r0 = *gptr<u32>(r8 + 0xd4u) & ~8u;  // (from the original)
    *gptr<u32>(r8 + 0xd4u) = u32(r0);  // (from the original)
    r13 = r13 + 0x68u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    return r0;
}

}  // namespace d_0028c3e8
GUEST_EXPORT(0x0028c3e8, d_0028c3e8::f_0028c3e8);

// f_0028c538: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0028c538 {

inline constexpr guest::Function<0x002b6a00, u32(u32, u32, u32, u32)> call_002b6a00;  // (from the original)
inline constexpr guest::Function<0x002f6a30, u32(u32, u32, u32, u32)> call_002f6a30;  // (from the original)
inline constexpr guest::Function<0x002f6e98, u32(u32, u32, u32, u32)> call_002f6e98;  // (from the original)
inline constexpr guest::Function<0x002f7508, u32(u32, u32, u32, u32)> call_002f7508;  // (from the original)

u32 f_0028c538(u32 r0, float S0, float S1) {
    u32 ea = 0;
    u32 r1 = 0;
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
    u32 r12 = 0;
    u32 r13 = guest::cpu()->r[13];
    r1 = 0x853228u;  // (from the original)
    r13 = r13 - 0x68u;  // (from the original)
    r9 = r13 + 0x24u;  // (from the original)
    r6 = r0;
    ea = r1 + 0x2d8u;  // (from the original)
    r4 = *gptr<u32>(ea + 4);
    r5 = *gptr<u32>(ea + 8);
    r7 = *gptr<u32>(ea + 0xc);  // (from the original)
    r8 = *gptr<u32>(ea + 0x10);  // (from the original)
    r12 = *gptr<u32>(ea + 0x14);  // (from the original)
    *gptr<u32>(r9) = u32(*gptr<u32>(ea));
    *gptr<u32>(r9 + 4) = u32(r4);
    *gptr<u32>(r9 + 8) = u32(r5);
    *gptr<u32>(r9 + 0xc) = u32(r7);  // (from the original)
    *gptr<u32>(r9 + 0x10) = u32(r8);  // (from the original)
    *gptr<u32>(r9 + 0x14) = u32(r12);  // (from the original)
    r3 = r13 + 0x1cu;  // (from the original)
    *gptr<u32>(r13 + 0x3cu) = u32(*gptr<u32>(r1 + 0x2f0u));  // (from the original)
    *gptr<u32>(r3) = u32(r0 + 0x4cu);  // (from the original)
    *gptr<u32>(r3 + 4) = u32(r6 + 0x3e0u);  // (from the original)
    r0 = r6 + 0x1d54u;  // (from the original)
    r2 = 0u;
    r1 = r13 + 0x1cu;  // (from the original)
    r8 = r0;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    r0 = call_002f6e98(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r9 = 0u;
    S0 = std::bit_cast<float>(*gptr<u32>(0x28c678u));  // (from the original)
    *gptr<u32>(r8 + 0xd4u) = u32(*gptr<u32>(r8 + 0xd4u) | 0x40u);  // (from the original)
    *gptr<u32>(r13) = u32(r9);
    *gptr<u32>(r13 + 4u) = u32(r9);
    S1 = std::bit_cast<float>(*gptr<u32>(0x28c67cu));  // (from the original)
    r0 = r13 + 8u;
    *gptr<u32>(r13 + 8u) = u32(r9);
    *gptr<u32>(r13 + 0xcu) = u32(r9);  // (from the original)
    *gptr<u32>(r13 + 0x10u) = u32(r9);  // (from the original)
    *gptr<u32>(r13 + 0x14u) = u32(r9);  // (from the original)
    *gptr<u32>(r13 + 0x18u) = u32(r9);  // (from the original)
    r11 = 0x1000399u;  // (from the original)
    r10 = 1u;
    *gptr<u32>(r0) = u32(std::bit_cast<u32>(S0));
    *gptr<u32>(r0 + 4) = u32(std::bit_cast<u32>(S1));
    r4 = r9;
    do {
L_28c5d0:;
        r0 = r6 + (r4 << 2);
        *gptr<u32>(r13) = u32(*gptr<u32>(r0 + 0x1e80u));  // (from the original)
        r0 = *gptr<u32>(r0 + 0x1e50u);  // (from the original)
        r1 = r13;
        *gptr<u32>(r13 + 0x14u) = u32(r4);  // (from the original)
        *gptr<u32>(r13 + 4u) = u32(r0);
        *gptr<u32>(r13 + 0x10u) = u32(r9);  // (from the original)
        r7 = r6 + ((r4 << 3) - r4 << 5);
        r5 = r7 + 0x1814u;  // (from the original)
        r0 = r5;
        guest::cpu()->r[13] = r13;
        guest::cpu()->s[0] = S0;
        guest::cpu()->s[1] = S1;
        r0 = call_002b6a00(r0, r1, r2, r3);
        r3 = guest::cpu()->r[3];
        S0 = guest::cpu()->s[0];
        S1 = guest::cpu()->s[1];
        r7 = r7 + 0x18eeu;  // (from the original)
        r2 = 1u;
        *gptr<u8>(r7) = u8(r9);
        *gptr<u32>(r5 + 0xd0u) = u32(r11);  // (from the original)
        *gptr<u8>(r5 + 0xdbu) = u8(r10);  // (from the original)
        r1 = r5;
        r0 = r8;
        *gptr<u8>(r5 + 0xdcu) = u8(r10);  // (from the original)
        guest::cpu()->r[13] = r13;
        guest::cpu()->s[0] = S0;
        guest::cpu()->s[1] = S1;
        r0 = call_002f7508(r0, r1, r2, r3);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        S0 = guest::cpu()->s[0];
        S1 = guest::cpu()->s[1];
        r4 = r4 + 1u;
        guest::preempt();
    } while (r4 < 6u);
    r1 = 0u;
    r0 = r8;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    r0 = call_002f6a30(r0, r1, r2, r3);
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    r1 = 0x1e24u;  // (from the original)
    *gptr<u16>(r1 + r6) = u16(0x23u);  // (from the original)
    r0 = *gptr<u32>(r8 + 0xd4u) & ~8u;  // (from the original)
    *gptr<u32>(r8 + 0xd4u) = u32(r0);  // (from the original)
    r13 = r13 + 0x68u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    return r0;
}

}  // namespace d_0028c538
GUEST_EXPORT(0x0028c538, d_0028c538::f_0028c538);

// f_0028d12c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0028d12c {

struct __attribute__((packed)) Object_0028d12c_0 {
    u32 word_0;
    u8 unknown_4[0x24];  // (not used here)
    u32 word_28;
    u8 unknown_2c[0x29b4];  // (not used here)
    u32 word_29e0;
    u8 unknown_29e4[0x394];  // (not used here)
    u32 word_2d78;
    u8 unknown_2d7c[0xe0];  // (not used here)
    u32 word_2e5c;
};
GUEST_OFFSET(Object_0028d12c_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_0028d12c_0, word_28, 0x28);  // (from the original)
GUEST_OFFSET(Object_0028d12c_0, word_29e0, 0x29e0);  // (from the original)
GUEST_OFFSET(Object_0028d12c_0, word_2d78, 0x2d78);  // (from the original)
GUEST_OFFSET(Object_0028d12c_0, word_2e5c, 0x2e5c);  // (from the original)

inline constexpr guest::Function<0x002f76ad, u32(u32, u32, u32, u32)> call_002f76ac;  // (from the original)
inline constexpr guest::Function<0x002f770c, u32(u32, u32, u32, u32)> call_002f770c;  // (from the original)
inline constexpr guest::Function<0x002f7710, u32(u32, u32, u32, u32)> call_002f7710;  // (from the original)
inline constexpr guest::Function<0x00567ef0, u32(u32, u32, u32, u32)> call_00567ef0;  // (from the original)
inline constexpr guest::Function<0x0056988c, u32(u32, u32, u32, u32)> call_0056988c;  // (from the original)
inline constexpr guest::Function<0x005bf744, u32(u32, u32, u32, u32)> call_005bf744;  // (from the original)
inline constexpr guest::Function<0x005d703c, u32(u32, u32, u32, u32)> call_005d703c;  // (from the original)
inline constexpr guest::Function<0x005e3194, u32(u32, u32, u32, u32)> call_005e3194;  // (from the original)
inline constexpr guest::Function<0x006aaa30, u32(u32, u32, u32, u32)> call_006aaa30;  // (from the original)

u32 f_0028d12c(gptr<Object_0028d12c_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r1 = 0;
    u32 r2 = 0;
    u32 r3 = 0;
    u32 r4 = guest::cpu()->r[4];
    r1 = 0x8f0510u;  // (from the original)
    guest::cpu()->r[13] -= 8u;
    arg0->word_28 = u32(r1 + 0x6cu);  // (from the original)
    arg0->word_0 = u32(r1);
    r4 = r0 + 0x2d78u;  // (from the original)
    r3 = 2u;
    arg0->word_29e0 = u32(0x8ee228u);  // (from the original)
    r2 = 0x8ef284u;  // (from the original)
    r0 = r0 + 0x2e90u;  // (from the original)
    arg0->word_2d78 = u32(r2);
    arg0->word_2e5c = u32(r2 + 0x44u);  // (from the original)
    r2 = 0x518u;  // (from the original)
    r1 = 0x2e0b3cu;  // (from the original)
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
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = 0x8f8b4cu;  // (from the original)
    *gptr<u32>(r0 - 0x954u) = u32(r1);  // (from the original)
    r0 = r0 - 0x44u;  // (from the original)
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
    r0 = r0 - 0xd0u;  // (from the original)
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
    r0 = r0 - 0x100u;  // (from the original)
    r0 = call_005d703c(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = 0x8ee758u;  // (from the original)
    *gptr<u32>(r0 - 0x210u) = u32(r1);  // (from the original)
    r0 = r0 - 0x50u;  // (from the original)
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
    r0 = r0 - 0x14cu;  // (from the original)
    r0 = call_005bf744(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0x174u;  // (from the original)
    r0 = call_002f7710(r0, r1, r2, r3);
    r1 = 0x2b6ef8u;  // (from the original)
    r4 = r0 - 0x1d54u;  // (from the original)
    r3 = 6u;
    r2 = 0xe0u;  // (from the original)
    r0 = r0 - 0x540u;  // (from the original)
    r0 = call_002f76ac(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r4 + 0x1730u;  // (from the original)
    r0 = call_002f7710(r0, r1, r2, r3);
    r1 = 0x2b6ef8u;  // (from the original)
    r4 = r0 - 0x1730u;  // (from the original)
    r3 = 6u;
    r2 = 0xe0u;  // (from the original)
    r0 = r0 - 0x540u;  // (from the original)
    r0 = call_002f76ac(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r4 + 0x112cu;  // (from the original)
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
    r0 = r0 - 0x80u;  // (from the original)
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
    r0 = r0 - 0x248u;  // (from the original)
    r0 = call_00567ef0(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    guest::cpu()->r[13] += 8u;
    r0 = r0 - 0x4cu;  // (from the original)
    return call_006aaa30(r0, r1, r2, r3);
}

}  // namespace d_0028d12c
GUEST_EXPORT(0x0028d12c, d_0028d12c::f_0028d12c);

// f_0028d378: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0028d378 {

inline constexpr guest::Function<0x001b7ce8, u32(u32, u32, u32, u32)> call_001b7ce8;  // (from the original)
inline constexpr guest::Function<0x00305f44, u32(u32, u32, u32, u32)> call_00305f44;  // (from the original)

u32 f_0028d378(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 zf = 0;
    goto L_28d378;
L_28d378:;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r4 = r0;
    r0 = u32(*gptr<u8>(r0 + 0x13cu));  // (from the original)
    r5 = r1;
    zf = r0 == 0;
    if (!zf) {
        zf = r0 == 2u;
    }
    if (zf) {
        r0 = r4 + 0x100u;  // (from the original)
        *gptr<u16>(r0 + 0x38u) = u16(u32(*gptr<u16>(r0 + 0x38u)) + 1u);  // (from the original)
    }
    r0 = *gptr<u32>(r4 + 0x128u);  // (from the original)
    r1 = *gptr<u32>(r4 + 0x134u);  // (from the original)
    if (r0 >= r1) {
        goto L_28d3e4;
    }
    r0 = call_00305f44(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 != r5) {
        goto L_28d3e4;
    }
    r0 = *gptr<u32>(0x95c71cu);  // (from the original)
    if (r0 == 0) {
        goto L_28d3e4;
    }
    r3 = 0x95bfdcu;  // (from the original)
    r2 = 1u;
    r1 = r5;
    r0 = call_001b7ce8(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
L_28d3e4:;
    r0 = *gptr<u32>(r4 + 0x124u);  // (from the original)
    r1 = r5;
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    return guest::call_address<u32>(*gptr<u32>(0x14fac0u), r0, r1, r2, r3);  // (from the original)
}

}  // namespace d_0028d378
GUEST_EXPORT(0x0028d378, d_0028d378::f_0028d378);

// f_0028d568: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0028d568 {


u32 f_0028d568(u32 r0) {
    r0 = *gptr<u32>(r0 + 0x124u);  // (from the original)
    return guest::call_address<u32>(*gptr<u32>(0x14fae0u), r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
}

}  // namespace d_0028d568
GUEST_EXPORT(0x0028d568, d_0028d568::f_0028d568);

// f_0028f500: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0028f500 {

struct __attribute__((packed)) Object_0028f500_0 {
    u8 unknown_0[0x14];  // (not used here)
    u8 byte_14;
    u8 byte_15;
    u8 byte_16;
    u8 unknown_17[0x1];  // (not used here)
    u8 byte_18;
    u8 byte_19;
    u8 unknown_1a[0x3];  // (not used here)
    u8 byte_1d;
    u8 byte_1e;
    u8 unknown_1f[0x2];  // (not used here)
    u8 byte_21;
    u8 unknown_22[0x4];  // (not used here)
    u8 byte_26;
    u8 byte_27;
    u8 byte_28;
    u8 byte_29;
    u8 unknown_2a[0x2];  // (not used here)
    u8 byte_2c;
    u8 byte_2d;
    u8 unknown_2e[0x2];  // (not used here)
    u8 byte_30;
    u8 unknown_31[0x97];  // (not used here)
    u32 word_c8;
};
GUEST_OFFSET(Object_0028f500_0, byte_14, 0x14);  // (from the original)
GUEST_OFFSET(Object_0028f500_0, byte_15, 0x15);  // (from the original)
GUEST_OFFSET(Object_0028f500_0, byte_16, 0x16);  // (from the original)
GUEST_OFFSET(Object_0028f500_0, byte_18, 0x18);  // (from the original)
GUEST_OFFSET(Object_0028f500_0, byte_19, 0x19);  // (from the original)
GUEST_OFFSET(Object_0028f500_0, byte_1d, 0x1d);  // (from the original)
GUEST_OFFSET(Object_0028f500_0, byte_1e, 0x1e);  // (from the original)
GUEST_OFFSET(Object_0028f500_0, byte_21, 0x21);  // (from the original)
GUEST_OFFSET(Object_0028f500_0, byte_26, 0x26);  // (from the original)
GUEST_OFFSET(Object_0028f500_0, byte_27, 0x27);  // (from the original)
GUEST_OFFSET(Object_0028f500_0, byte_28, 0x28);  // (from the original)
GUEST_OFFSET(Object_0028f500_0, byte_29, 0x29);  // (from the original)
GUEST_OFFSET(Object_0028f500_0, byte_2c, 0x2c);  // (from the original)
GUEST_OFFSET(Object_0028f500_0, byte_2d, 0x2d);  // (from the original)
GUEST_OFFSET(Object_0028f500_0, byte_30, 0x30);  // (from the original)
GUEST_OFFSET(Object_0028f500_0, word_c8, 0xc8);  // (from the original)


void f_0028f500(gptr<Object_0028f500_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r1 = 0;
    u32 r2 = 0;
    u32 r3 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r12 = 0;
    guest::cpu()->r[13] -= 0xcu;  // (from the original)
    r4 = 0u;
    if (arg0->word_c8 == 0) {
        goto L_28f5a4;
    }
    arg0->byte_14 = u8(1u);
    arg0->byte_15 = u8(0u);
    arg0->byte_18 = u8(3u);
    arg0->byte_16 = u8(2u);
    arg0->byte_19 = u8(0xeu);  // (from the original)
    r2 = 0u;
    arg0->byte_2c = u8(r2);
    arg0->byte_2d = u8(1u);
    arg0->byte_30 = u8(0xfu);  // (from the original)
    arg0->byte_1d = u8(r2);
    r3 = 0x997ae0u;  // (from the original)
    arg0->byte_1e = u8(r2);
    arg0->byte_21 = u8(3u);
    *gptr<u8>(r3 + 1u) = u8(0u);
    *gptr<u8>(r3 + 3u) = u8(4u);
    *gptr<u8>(r3 + 5u) = u8(0u);
L_28f584:;
    r1 = 0x80u;  // (from the original)
    arg0->byte_28 = u8(0x26u);  // (from the original)
    arg0->byte_29 = u8(r1);
    arg0->byte_26 = u8(r4);
    arg0->byte_27 = u8(r4);
    guest::cpu()->r[13] += 0xcu;  // (from the original)
    guest::cpu()->r[1] = r1;
    return;
L_28f5a4:;
    r5 = 0x854184u;  // (from the original)
    r1 = r0 + 0x14u;  // (from the original)
    r2 = r0 + 0x2cu;  // (from the original)
    if (*gptr<u32>(r5) == 3u) {
        goto L_28f650;
    }
    r12 = 0u;
    arg0->byte_14 = u8(r12);
    arg0->byte_15 = u8(r12);
    arg0->byte_18 = u8(0xeu);  // (from the original)
    arg0->byte_2c = u8(r12);
    arg0->byte_2d = u8(r12);
    arg0->byte_30 = u8(0xfu);  // (from the original)
L_28f5e0:;
    *gptr<u8>(r1 + 9u) = u8(1u);
    *gptr<u8>(r1 + 0xau) = u8(0u);  // (from the original)
    *gptr<u8>(r1 + 0xdu) = u8(0xeu);  // (from the original)
    *gptr<u8>(r1 + 0xbu) = u8(4u);  // (from the original)
    *gptr<u8>(r1 + 0xeu) = u8(3u);  // (from the original)
    *gptr<u8>(r1 + 0x13u) = u8(r4);  // (from the original)
    r1 = *gptr<u32>(r5);
    r2 = 0x997ae0u;  // (from the original)
    if (r1 == 0) {
        goto L_28f6a8;
    }
    if (r1 == 1u) {
        goto L_28f6c0;
    }
    if (r1 == 2u) {
        goto L_28f6d8;
    }
    if (r1 != 3u) {
        guest::preempt();
        goto L_28f584;
    }
    *gptr<u8>(r2 + 1u) = u8(0u);
    *gptr<u8>(r2 + 3u) = u8(4u);
    r1 = 0u;
L_28f648:;
    *gptr<u8>(r2 + 5u) = u8(r1);
    guest::preempt();
    goto L_28f584;
L_28f650:;
    *gptr<u8>(r1) = u8(1u);
    *gptr<u8>(r1 + 1u) = u8(0u);
    *gptr<u8>(r1 + 4u) = u8(3u);
    *gptr<u8>(r1 + 2u) = u8(2u);
    r3 = 0xeu;  // (from the original)
    *gptr<u8>(r1 + 5u) = u8(r3);
    *gptr<u8>(r2) = u8(8u);
    r12 = 0u;
    *gptr<u8>(r2 + 1u) = u8(r12);
    *gptr<u8>(r2 + 4u) = u8(r3);
    *gptr<u8>(r2 + 2u) = u8(r12);
    r3 = 0xfu;  // (from the original)
    *gptr<u8>(r2 + 5u) = u8(r3);
    *gptr<u8>(r2 + 3u) = u8(1u);
    *gptr<u8>(r2 + 6u) = u8(r3);
    guest::preempt();
    goto L_28f5e0;
L_28f6a8:;
    *gptr<u8>(r2 + 1u) = u8(0u);
    *gptr<u8>(r2 + 3u) = u8(6u);
    r1 = 7u;
    guest::preempt();
    goto L_28f648;
L_28f6c0:;
    *gptr<u8>(r2 + 1u) = u8(0u);
    *gptr<u8>(r2 + 3u) = u8(6u);
    r1 = 1u;
    guest::preempt();
    goto L_28f648;
L_28f6d8:;
    *gptr<u8>(r2 + 1u) = u8(2u);
    *gptr<u8>(r2 + 3u) = u8(6u);
    r1 = 1u;
    guest::preempt();
    goto L_28f648;
}

}  // namespace d_0028f500
GUEST_EXPORT(0x0028f500, d_0028f500::f_0028f500);

// f_0028f6f8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0028f6f8 {

inline constexpr guest::Function<0x002f74c8, u32(u32, u32, u32, u32)> call_002f74c8;  // (from the original)
inline constexpr guest::Function<0x002f74e0, u32(u32, u32, u32, u32)> call_002f74e0;  // (from the original)

u32 f_0028f6f8(u32 r0, u32 r1) {
    guest::cpu()->r[13] -= 8u;
    r0 = call_002f74c8(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 == 0x9du) {  // (from the original)
        r0 = 2u;
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r0 = call_002f74c8(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 == 0x9eu) {  // (from the original)
        r0 = 2u;
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r0 = call_002f74c8(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = r0;
    r0 = 4u;
    r0 = call_002f74e0(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 != 0) {
        r0 = call_002f74c8(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1 = r0;
        r0 = 0x200u;  // (from the original)
        r0 = call_002f74e0(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        if (r0 == 0) {
            r0 = 3u;
            guest::cpu()->r[13] += 8u;
            guest::cpu()->r[1] = r1;
            return r0;
        }
        r0 = 2u;
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r0 = call_002f74c8(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 >= 0x4du) {  // (from the original)
        r0 = call_002f74c8(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        if (!u32(r0 >= 0x4fu) || u32(r0 == 0x4fu)) {  // (from the original)
            r0 = 1u;
            guest::cpu()->r[13] += 8u;
            guest::cpu()->r[1] = r1;
            return r0;
        }
    }
    r0 = call_002f74c8(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 >= 0x3cu) {  // (from the original)
        r0 = call_002f74c8(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        if (!u32(r0 >= 0x3eu) || u32(r0 == 0x3eu)) {  // (from the original)
            r0 = 0u;
            guest::cpu()->r[13] += 8u;
            guest::cpu()->r[1] = r1;
            return r0;
        }
    }
    r0 = call_002f74c8(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 == 0x49u) {  // (from the original)
        r0 = 0u;
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r0 = call_002f74c8(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 == 0x55u) {  // (from the original)
        r0 = 0u;
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r0 = call_002f74c8(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = r0;
    r0 = 0x400000u;  // (from the original)
    r0 = call_002f74e0(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 != 0) {
        r0 = 0u;
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r0 = call_002f74c8(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = r0;
    r0 = 0x800000u;  // (from the original)
    r0 = call_002f74e0(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 == 0) {
        r0 = 4u;
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r0 = 0u;
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_0028f6f8
GUEST_EXPORT(0x0028f6f8, d_0028f6f8::f_0028f6f8);

// f_0028f8bc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0028f8bc {

struct __attribute__((packed)) Object_0028f8bc_0 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Object_0028f8bc_0, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_0028f8bc_0, word_8, 0x8);  // (from the original)

struct __attribute__((packed)) Object_0028f8bc_1 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Object_0028f8bc_1, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_0028f8bc_1, word_8, 0x8);  // (from the original)


u32 f_0028f8bc(gptr<Object_0028f8bc_0> arg0, gptr<Object_0028f8bc_1> arg1) {
    u32 ea = 0;
    u32 r0 = arg0.addr();
    u32 r1 = arg1.addr();
    u32 r2 = 0;
    u32 fpsr = guest::cpu()->fpscr;
    float S0 = 0;
    float S1 = 0;
    float S2 = 0;
    float S3 = 0;
    float S4 = 0;
    S4 = std::bit_cast<float>(arg1->word_8);
    S1 = std::bit_cast<float>(arg0->word_4) - std::bit_cast<float>(arg1->word_4);
    S0 = std::bit_cast<float>(arg0->word_8) - S4;
    S3 = std::bit_cast<float>(*gptr<u32>(0x28f944u));  // (from the original)
    r0 = 0x99563cu;  // (from the original)
    S2 = std::bit_cast<float>(*gptr<u32>(0x28f94cu));  // (from the original)
    S0 = sqrtf(S1 * S1 + S0 * S0) * std::bit_cast<float>(*gptr<u32>(0x28f938u)) - std::bit_cast<float>(*gptr<u32>(0x28f940u));  // (from the original)
    S1 = std::bit_cast<float>(*gptr<u32>(0x28f948u));  // (from the original)
    S0 = S0 * S3;
    fpsr = fpsr & 0xfffffffu | vfp_cmpf(S0, S1);  // (from the original)
    if (!(fpsr >> 0x1d & 1)) {  // (from the original)
        S0 = S1;
        goto L_28f920;
    }
    fpsr = fpsr & 0xfffffffu | vfp_cmpf(S0, S2);  // (from the original)
    if (!(fpsr >> 0x1e & 1) && fpsr >> 0x1f == (fpsr >> 0x1c & 1)) {  // (from the original)
        S0 = S2;
    }
L_28f920:;
    ea = r0 + 8u;
    r2 = *gptr<u32>(0x97534cu + (u32(*gptr<u8>(ea)) << 2));  // (from the original)
    ea = r0 + 4u;
    r1 = *gptr<u32>(ea);
    r0 = ea + 4u;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2;
    guest::cpu()->s[3] = S3;
    guest::cpu()->s[4] = S4;
    return guest::call_address<u32>(r2, r0, r1, r2, guest::cpu()->r[3]);
}

}  // namespace d_0028f8bc
GUEST_EXPORT(0x0028f8bc, d_0028f8bc::f_0028f8bc);

// f_0028ff00: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0028ff00 {

inline constexpr guest::Function<0x001cdf04, u32(u32, u32, u32, u32)> call_001cdf04;  // (from the original)
inline constexpr guest::Function<0x001cdf18, u32(u32, u32, u32, u32)> call_001cdf18;  // (from the original)
inline constexpr guest::Function<0x00300904, u32(u32, u32, u32, u32)> call_00300904;  // (from the original)
inline constexpr guest::Function<0x0030b6c4, u32(u32, u32, u32, u32)> call_0030b6c4;  // (from the original)
inline constexpr guest::Function<0x0062512c, u32(u32, u32, u32, u32)> call_0062512c;  // (from the original)
inline constexpr guest::Function<0x006268f8, u32(u32, u32, u32, u32)> call_006268f8;  // (from the original)

u32 f_0028ff00(u32 r0, u32 r1, u32 r2) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 0x20u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00300904(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r4 = 0x950708u;  // (from the original)
    r5 = 0u;
    r6 = 1u;
    if (r0 != 0) {
        guest::cpu()->r[13] = r13;
        r0 = call_0030b6c4(r0, r1, r2, guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        if (r0 != 0) {
            *gptr<u8>(r4 + 1u) = u8(r5);
            *gptr<u8>(r4) = u8(r5);
            *gptr<u8>(r4 + 5u) = u8(r6);
            r4 = r13;
            r0 = 0x90u;  // (from the original)
            guest::cpu()->r[13] = r13;
            r0 = call_006268f8(r0, r1, r2, guest::cpu()->r[3]);
            r2 = guest::cpu()->r[2];
            r1 = r0;
            r0 = r4;
            guest::cpu()->r[13] = r13;
            r0 = call_001cdf04(r0, r1, r2, guest::cpu()->r[3]);
            r1 = guest::cpu()->r[1];
            r2 = guest::cpu()->r[2];
            r0 = r13;
            guest::cpu()->r[13] = r13;
            r0 = call_001cdf18(r0, r1, r2, guest::cpu()->r[3]);
            r2 = 1u;
            r1 = r13;
            r0 = 0x90u;  // (from the original)
            guest::cpu()->r[13] = r13;
            r0 = call_0062512c(r0, r1, r2, guest::cpu()->r[3]);
            r1 = guest::cpu()->r[1];
        }
        r13 = r13 + 0x20u;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    *gptr<u8>(r4 + 1u) = u8(r5);
    *gptr<u8>(r4) = u8(r5);
    *gptr<u8>(r4 + 5u) = u8(r6);
    r13 = r13 + 0x20u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_0028ff00
GUEST_EXPORT(0x0028ff00, d_0028ff00::f_0028ff00);
