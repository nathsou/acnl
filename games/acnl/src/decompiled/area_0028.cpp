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

inline guest::global<u32, 0x0028073c> global_0028073c;  // (from the original)
inline guest::global<u32, 0x00280750> global_00280750;  // (from the original)
inline guest::global<u32, 0x0088069c> global_0088069c;  // (from the original)
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
    u32 r13 = guest::cpu()->r[13];
    u32 r1_1 = 0;
    u32 r5_1 = 0;
    u32 r1_2 = 0;
    u32 r0_1 = 0;
    u32 r6_1 = 0;
    float S1_1 = 0;
    float S0_1 = 0;
    u32 r0_2 = 0;
    float S0_2 = 0;
    float S1_2 = 0;
    u32 r1_3 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    float S0_3 = 0;
    float S1_3 = 0;
    u32 r0_3 = 0;
    u32 r1_4 = 0;
    u32 r2_2 = 0;
    u32 r3_2 = 0;
    float S0_4 = 0;
    float S1_4 = 0;
    u32 r0_4 = 0;
    u32 r0_5 = 0;
    u32 zf_1 = 0;
    u32 r0_6 = 0;
    u32 r0_7 = 0;
    u32 zf_2 = 0;
    u32 r0_8 = 0;
    u32 zf_3 = 0;
    u32 r0_9 = 0;
    u32 zf_4 = 0;
    u32 r0_10 = 0;
    u32 r0_11 = 0;
    r13 = r13 - 0x20u;  // (from the original)
    r1_1 = arg0->word_24c;
    r5_1 = arg0->word_f0;
    if (r1_1 == 0) {
        r1_2 = arg0->word_e0;
    } else {
        r1_2 = *gptr<u32>(r1_1 + 0xe0u);  // (from the original)
    }
    r0_1 = *gptr<u32>(0x2574u + r5_1);  // (from the original)
    r6_1 = 2u;
    if (r1_2 != 0) {
        if (r1_2 == 1u) {
            goto L_280684;
        }
        if (r1_2 == 2u) {
            goto L_2806b8;
        }
        if (r1_2 != 3u) {
            goto L_280724;
        }
        goto L_280714;
    }
    *gptr<u32>(r13) = u32(0u);
    S1_1 = std::bit_cast<float>(*global_0088069c);
    S0_1 = std::bit_cast<float>(*global_0028073c);
    r0_2 = r5_1 + 0x78u;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_1;
    guest::cpu()->s[1] = S1_1;
    call_006ea834(r0_2, 0u, 0x209u, 2u);  // (from the original)
    S0_2 = guest::cpu()->s[0];
    S1_2 = guest::cpu()->s[1];
    r1_3 = r5_1 + 0x14u;  // (from the original)
    *gptr<u32>(r13 + 4u) = u32(0u);
    *gptr<u32>(r13) = u32(1u);
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_2;
    guest::cpu()->s[1] = S1_2;
    call_002075d4(0x12cu, r1_3, 0x975beeu, 0xae5664u);  // (from the original)
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    S0_3 = guest::cpu()->s[0];
    S1_3 = guest::cpu()->s[1];
    r0_3 = r5_1 + 0x9b4u;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_3;
    guest::cpu()->s[1] = S1_3;
    call_001c0c54(r0_3, 0x1000661u, r2_1, r3_1);  // (from the original)
    r1_4 = guest::cpu()->r[1];
    r2_2 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    S0_4 = guest::cpu()->s[0];
    S1_4 = guest::cpu()->s[1];
    if (u32(*gptr<u8>(0x2597u + r5_1)) != 0) {  // (from the original)
        r0_4 = *gptr<u32>(*global_00280750);
        if (r0_4 != 0) {
            guest::cpu()->r[13] = r13;
            guest::cpu()->s[0] = S0_4;
            guest::cpu()->s[1] = S1_4;
            call_0014fa8c(r0_4, r1_4, r2_2, r3_2);
            r2_2 = guest::cpu()->r[2];
            r3_2 = guest::cpu()->r[3];
            S0_4 = guest::cpu()->s[0];
            S1_4 = guest::cpu()->s[1];
        }
    }
    r0_5 = r5_1 + 0x1dd4u;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_4;
    guest::cpu()->s[1] = S1_4;
    call_0022fcb8(r0_5, 0x8426e0u, r2_2, r3_2);  // (from the original)
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    *gptr<u32>(r5_1 + 0x2584u) = u32(0u);  // (from the original)
    *gptr<u32>(r5_1 + 0x2588u) = u32(0x14u);  // (from the original)
    *gptr<u32>(r5_1 + 0x258cu) = u32(0u);  // (from the original)
    r1_2 = *gptr<u32>(r0 + 0x24cu);  // (from the original)
    zf_1 = r1_2 == 0;
    if (zf_1) {
        r0_6 = *gptr<u32>(r0 + 0xe0u);  // (from the original)
    } else {
        r0_6 = *gptr<u32>(r1_2 + 0xe0u);  // (from the original)
    }
    r0_7 = r0_6 + 1u;
    if (!zf_1) {
        goto L_280704;
    }
    goto L_28070c;
L_280684:;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    call_00281384(r5_1, r1_2, r2, r3);
    r1_2 = guest::cpu()->r[1];
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    if (u32(*gptr<u8>(0x2595u + r5_1)) == 0) {  // (from the original)
        goto L_280724;
    }
    r1_2 = *gptr<u32>(r0 + 0x24cu);  // (from the original)
    zf_2 = r1_2 == 0;
    if (zf_2) {
        r0_8 = *gptr<u32>(r0 + 0xe0u);  // (from the original)
    } else {
        r0_8 = *gptr<u32>(r1_2 + 0xe0u);  // (from the original)
    }
    r0_7 = r0_8 + 1u;
    if (!zf_2) {
        goto L_280704;
    }
    goto L_28070c;
L_2806b8:;
    r1_2 = r5_1 + 0x2500u;  // (from the original)
    zf_3 = u32(*gptr<u16>(r1_2 + 0x90u)) == 0;  // (from the original)
    if (zf_3) {
        r1_2 = u32(*gptr<u8>(r1_2 + 0x9du));  // (from the original)
        zf_3 = r1_2 == 0;
    }
    if (!zf_3) {
        goto L_280724;
    }
    *gptr<u8>(0x2884u + r0_1) = u8(1u);  // (from the original)
    r0_9 = r0_1 + 0x14u;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    call_0068ec64(r0_9, 8u, 0u, 0u);
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    r1_2 = *gptr<u32>(r0 + 0x24cu);  // (from the original)
    zf_4 = r1_2 == 0;
    if (zf_4) {
        r0_10 = *gptr<u32>(r0 + 0xe0u);  // (from the original)
    } else {
        r0_10 = *gptr<u32>(r1_2 + 0xe0u);  // (from the original)
    }
    r0_7 = r0_10 + 1u;
    if (zf_4) {
        goto L_28070c;
    }
L_280704:;
    *gptr<u32>(r1_2 + 0xe0u) = u32(r0_7);  // (from the original)
    goto L_280724;
L_28070c:;
    *gptr<u32>(r0 + 0xe0u) = u32(r0_7);  // (from the original)
    goto L_280724;
L_280714:;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    r0_11 = call_0014fa9c(r0_1, r1_2, r2, r3);
    r1_2 = guest::cpu()->r[1];
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    if (r0_11 != 0) {
        r6_1 = 1u;
    }
L_280724:;
    r13 = r13 + 0x20u;  // (from the original)
    guest::cpu()->r[1] = r1_2;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    return r6_1;
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

inline guest::global<u32, 0x00280f7c> global_00280f7c;  // (from the original)
inline guest::global<u32, 0x0088069c> global_0088069c;  // (from the original)
inline constexpr guest::Function<0x00205d80, u32(u32, u32, u32, u32)> call_00205d80;  // (from the original)
inline constexpr guest::Function<0x00231918, u32(u32, u32, u32, u32)> call_00231918;  // (from the original)
inline constexpr guest::Function<0x006e9c2c, u32(u32, u32, u32, u32)> call_006e9c2c;  // (from the original)

u32 f_00280ea0(gptr<Object_00280ea0_0> arg0, u32 r1, float S0, float S1, float S2) {
    u32 r0 = arg0.addr();
    u32 r2 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    float S0_1 = 0;
    u32 r0_3 = 0;
    float S0_2 = 0;
    u32 r0_4 = 0;
    u32 r0_5 = 0;
    float S0_3 = 0;
    u32 r0_6 = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r5 = r0 + 0x2500u;  // (from the original)
    r4 = r0;
    r2 = u32(s32(s8(arg0->byte_2597)));
    if (r2 == 1u) {
        goto L_280f48;
    }
L_280eb8:;
    r1 = r4 + 0x2588u;  // (from the original)
    r0_1 = *gptr<u32>(r1);
    if (s32(r0_1) >= s32(0x14u)) {  // (from the original)
        goto L_280f14;
    }
    r0_2 = r0_1 + 1u;
    S1 = std::bit_cast<float>(*global_00280f7c);
    *gptr<u32>(r1) = u32(r0_2);
    r1 = r4 + 0x800u;  // (from the original)
    S2 = float(s32(std::bit_cast<u32>(std::bit_cast<float>(r0_2)))) * S1;
    S0 = std::bit_cast<float>(*gptr<u32>(r1 + 0x2e0u)) * S2;  // (from the original)
    *gptr<u32>(r1 + 0x2dcu) = u32(std::bit_cast<u32>(S0));  // (from the original)
    if (r2 == 0) {
        goto L_280f14;
    }
    S0_1 = std::bit_cast<float>(r0_2);
    r0_3 = r4 + 0x1dd4u;  // (from the original)
    S0_2 = float(s32(std::bit_cast<u32>(S0_1))) * S1;
    guest::cpu()->s[0] = S0_2;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2;
    call_00205d80(r0_3, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    S2 = guest::cpu()->s[2];
L_280f14:;
    r0_4 = u32(*gptr<u8>(r4 + 0xa8u));  // (from the original)
    if (r0_4 != 0xdu) {  // (from the original)
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->s[0] = S0;
        guest::cpu()->s[1] = S1;
        return r0_4;
    }
    r0_4 = u32(*gptr<u8>(r4 + 0x554u));  // (from the original)
    if (r0_4 == 0) {
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->s[0] = S0;
        guest::cpu()->s[1] = S1;
        return r0_4;
    }
    *gptr<u8>(0x2594u + r4) = u8(1u);  // (from the original)
    if (u32(*gptr<u8>(r5 + 0x97u)) != 0) {  // (from the original)
        goto L_280f64;
    }
    goto L_280f58;
L_280f48:;
    r0_4 = u32(*gptr<u8>(r4 + 0xb06u));  // (from the original)
    if ((r0_4 & 1u) != 0) {
        guest::preempt();
        goto L_280eb8;
    }
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    return r0_4;
L_280f58:;
    r0_5 = *gptr<u32>(r4 + 0x660u);  // (from the original)
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2;
    call_00231918(r0_5, 1u, r2, guest::cpu()->r[3]);
    r2 = guest::cpu()->r[2];
    S1 = guest::cpu()->s[1];
    S2 = guest::cpu()->s[2];
L_280f64:;
    S0_3 = std::bit_cast<float>(*global_0088069c);
    r0_6 = r4 + 0x78u;  // (from the original)
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->s[0] = S0_3;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2;
    return call_006e9c2c(r0_6, 0u, r2, guest::cpu()->r[3]);
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

inline guest::global<u8, 0x009506b0> global_009506b0;  // (from the original)
inline guest::global<u32, 0x009506b4> global_009506b4;  // (from the original)

u32 f_002812b0(gptr<Object_002812b0_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r1_1 = 0;
    u32 r1_2 = 0;
    u32 r0_1 = 0;
    if (u32(*global_009506b0) == 0xffu) {  // (from the original)
        r1_1 = *global_009506b4;
    } else {
        r1_1 = 0u;
    }
    if (u32(arg0->byte_259b) != 1u) {
        guest::cpu()->r[1] = r1_1;
        return r0;
    }
    if (r1_1 == 0) {
        guest::cpu()->r[1] = r1_1;
        return r0;
    }
    r1_2 = r1_1 + 0x6acdu;  // (from the original)
    r0_1 = r0 + 0x259bu;  // (from the original)
    *gptr<u8>(r1_2) = u8(0u);
    arg0->byte_259b = u8(0u);
    guest::cpu()->r[1] = r1_2;
    return r0_1;
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
    u32 r0_1 = 0;
    guest::cpu()->r[13] -= 8u;
    r0_1 = u32(arg0->byte_259c);
    if (r0_1 != 1u) {
        guest::cpu()->r[13] += 8u;
        return r0_1;
    }
    call_0052c2c0(r0_1, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    *gptr<u8>(r0 + 0x259cu) = u8(0u);  // (from the original)
    guest::cpu()->r[13] += 8u;
    return 0u;
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

inline guest::global<u32, 0x0094fd88> global_0094fd88;  // (from the original)

u32 f_0028176c(gptr<Object_0028176c_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r1_1 = 0;
    u32 r0_1 = 0;
    r1_1 = u32(arg0->byte_2599);
    if (r1_1 == 0) {
        guest::cpu()->r[1] = r1_1;
        return r0;
    }
    r0_1 = r0 + 0x2599u;  // (from the original)
    *global_0094fd88 = u32(0u);
    arg0->byte_2599 = u8(0u);
    guest::cpu()->r[1] = 0u;
    return r0_1;
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

inline guest::global<u32, 0x0094fd8c> global_0094fd8c;  // (from the original)

u32 f_002817a0(gptr<Object_002817a0_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r1_1 = 0;
    u32 r0_1 = 0;
    r1_1 = u32(arg0->byte_2598);
    if (r1_1 == 0) {
        guest::cpu()->r[1] = r1_1;
        return r0;
    }
    r0_1 = r0 + 0x2598u;  // (from the original)
    *global_0094fd8c = u32(0u);
    arg0->byte_2598 = u8(0u);
    guest::cpu()->r[1] = 0u;
    return r0_1;
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
    u32 r0_1 = 0;
    guest::cpu()->r[13] -= 8u;
    r0_1 = u32(arg0->byte_259a);
    if (r0_1 != 1u) {
        guest::cpu()->r[13] += 8u;
        return r0_1;
    }
    call_005c2718(r0_1, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    *gptr<u8>(r0 + 0x259au) = u8(0u);  // (from the original)
    guest::cpu()->r[13] += 8u;
    return 0u;
}

}  // namespace d_002817d4
GUEST_EXPORT(0x002817d4, d_002817d4::f_002817d4);

// f_00281cd8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00281cd8 {

inline constexpr guest::Function<0x002fcbb0, u32(u32, u32, u32, u32)> call_002fcbb0;  // (from the original)
inline constexpr guest::Function<0x00306354, u32(u32, u32, u32, u32)> call_00306354;  // (from the original)
inline constexpr guest::Function<0x00768138, u32(u32, u32, u32, u32)> call_00768138;  // (from the original)

u32 f_00281cd8(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r0_2 = 0;
    u32 r3_2 = 0;
    u32 r3_3 = 0;
    u32 r1_1 = 0;
    u32 r1_2 = 0;
    u32 r0_3 = 0;
    r13 = r13 - 0x20u;  // (from the original)
    r0_1 = r13 + 0xcu;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_002fcbb0(r0_1, 0x226au, r2, r3);  // (from the original)
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    r0_2 = r13 + 0x10u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_002fcbb0(r0_2, 0x331eu, r2_1, r3_1);  // (from the original)
    *gptr<u32>(r13) = u32(r13 + 0xcu);  // (from the original)
    *gptr<u32>(r13 + 4) = u32(0x13u);  // (from the original)
    *gptr<u32>(r13 + 8) = u32(0u);
    r3_2 = r1 + 0x55a6u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_00306354(r0, 0x281d58u, 2u, r3_2);  // (from the original)
    r3_3 = guest::cpu()->r[3];
    r1_1 = r13 + 0x10u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_00768138(r0, r1_1, 0u, r3_3);
    r1_2 = guest::cpu()->r[1];
    r0_3 = r13 + 0xcu;  // (from the original)
    r13 = r13 + 0x20u;  // (from the original)
    guest::cpu()->r[1] = r1_2;
    guest::cpu()->r[13] = r13;
    return r0_3;
}

}  // namespace d_00281cd8
GUEST_EXPORT(0x00281cd8, d_00281cd8::f_00281cd8);

// f_00281d6c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00281d6c {

inline constexpr guest::Function<0x002fcbb0, u32(u32, u32, u32, u32)> call_002fcbb0;  // (from the original)
inline constexpr guest::Function<0x00306354, u32(u32, u32, u32, u32)> call_00306354;  // (from the original)
inline constexpr guest::Function<0x00768138, u32(u32, u32, u32, u32)> call_00768138;  // (from the original)

u32 f_00281d6c(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r0_2 = 0;
    u32 r3_2 = 0;
    u32 r3_3 = 0;
    u32 r1_1 = 0;
    u32 r1_2 = 0;
    u32 r0_3 = 0;
    r13 = r13 - 0x20u;  // (from the original)
    r0_1 = r13 + 0xcu;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_002fcbb0(r0_1, 0x226au, r2, r3);  // (from the original)
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    r0_2 = r13 + 0x10u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_002fcbb0(r0_2, 0x2185u, r2_1, r3_1);  // (from the original)
    *gptr<u32>(r13) = u32(r13 + 0xcu);  // (from the original)
    *gptr<u32>(r13 + 4) = u32(0x13u);  // (from the original)
    *gptr<u32>(r13 + 8) = u32(0u);
    r3_2 = r1 + 0x55a6u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_00306354(r0, 0x281decu, 1u, r3_2);  // (from the original)
    r3_3 = guest::cpu()->r[3];
    r1_1 = r13 + 0x10u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_00768138(r0, r1_1, 0u, r3_3);
    r1_2 = guest::cpu()->r[1];
    r0_3 = r13 + 0xcu;  // (from the original)
    r13 = r13 + 0x20u;  // (from the original)
    guest::cpu()->r[1] = r1_2;
    guest::cpu()->r[13] = r13;
    return r0_3;
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

inline guest::global<u32, 0x0095386c> global_0095386c;  // (from the original)
inline constexpr guest::Function<0x00300650, u32(u32, u32, u32, u32)> call_00300650;  // (from the original)
inline constexpr guest::Function<0x00301564, u32(u32, u32, u32, u32)> call_00301564;  // (from the original)
inline constexpr guest::Function<0x00301da8, u32(u32, u32, u32, u32)> call_00301da8;  // (from the original)
inline constexpr guest::Function<0x00312ab8, u32(u32, u32, u32, u32)> call_00312ab8;  // (from the original)
inline constexpr guest::Function<0x0056ca68, u32(u32, u32, u32, u32)> call_0056ca68;  // (from the original)

u32 f_00281e00(gptr<Object_00281e00_0> arg0, u32 r1_unused, u32 r2_unused, u32 r3) {
    u32 r0 = arg0.addr();
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
    u32 r1_1 = 0;
    u32 res_1 = 0;
    u32 r0_1 = 0;
    u32 r1_2 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 ea_2 = 0;
    u32 r8_1 = 0;
    u32 r11_1 = 0;
    u32 r5_1 = 0;
    u32 r7_1 = 0;
    u32 r6_1 = 0;
    u32 r5_2 = 0;
    u32 r0_2 = 0;
    u32 res_2 = 0;
    u32 r4_1 = 0;
    u32 zf_1 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 ea_3 = 0;
    u32 r0_5 = 0;
    u32 r1_3 = 0;
    u32 r2_2 = 0;
    u32 ea_4 = 0;
    u32 ea_5 = 0;
    u32 r1_4 = 0;
    u32 r0_6 = 0;
    u32 r4_2 = 0;
    u32 ea_6 = 0;
    u32 r0_7 = 0;
    u32 r1_5 = 0;
    u32 r2_3 = 0;
    u32 ea_7 = 0;
    u32 ea_8 = 0;
    u32 r1_6 = 0;
    u32 r3_2 = 0;
    u32 r0_8 = 0;
    u32 r1_7 = 0;
    u32 zf_2 = 0;
    u32 r0_9 = 0;
    u32 ea_9 = 0;
    u32 r4_3 = 0;
    u32 r5_3 = 0;
    u32 r6_2 = 0;
    u32 r7_2 = 0;
    u32 r8_2 = 0;
    u32 r9_1 = 0;
    u32 r10_1 = 0;
    u32 r11_2 = 0;
    u32 r0_10 = 0;
    u32 r1_8 = 0;
    u32 ea_10 = 0;
    u32 r4_4 = 0;
    u32 r5_4 = 0;
    u32 r6_3 = 0;
    u32 r7_3 = 0;
    u32 r8_3 = 0;
    u32 r9_2 = 0;
    u32 r10_2 = 0;
    u32 r11_3 = 0;
    ea_1 = r13 - 0x24;  // (from the original)
    *gptr<u32>(ea_1) = u32(r4);
    *gptr<u32>(ea_1 + 4) = u32(r5);
    *gptr<u32>(ea_1 + 8) = u32(r6);
    *gptr<u32>(ea_1 + 0xc) = u32(r7);  // (from the original)
    *gptr<u32>(ea_1 + 0x10) = u32(r8);  // (from the original)
    *gptr<u32>(ea_1 + 0x14) = u32(r9);  // (from the original)
    *gptr<u32>(ea_1 + 0x18) = u32(r10);  // (from the original)
    *gptr<u32>(ea_1 + 0x1c) = u32(r11);  // (from the original)
    *gptr<u32>(ea_1 + 0x20) = u32(r14);  // (from the original)
    r13 = r13 - 0x60u;  // (from the original)
    r1_1 = r0 + 0x8f77u;  // (from the original)
    res_1 = u32(arg0->byte_5705) << 0x1c;  // (from the original)
    if (!(res_1 >> 0x1f)) {  // (from the original)
        goto L_281f38;
    }
    if ((u32(arg0->byte_570c) & 0x1fu) == 0) {  // (from the original)
        goto L_281f38;
    }
    if (u32(arg0->byte_8f7e) & 0x40u) {  // (from the original)
        goto L_281f38;
    }
    r0_1 = r13;
    guest::cpu()->r[13] = r13;
    call_00300650(r0_1, r1_1, res_1, r3);
    r1_2 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    ea_2 = r13 + 4u;
    r8_1 = *gptr<u32>(ea_2);
    r11_1 = *gptr<u32>(ea_2 + 4);
    r5_1 = r0 + 0x55d4u;  // (from the original)
    r7_1 = *gptr<u32>(r13);
    r6_1 = u32(*gptr<u8>(r5_1));
    r5_2 = u32(*gptr<u8>(r5_1 + 1u));
    r0_2 = sxtb(r8_1);
    res_2 = r0_2 - r6_1;
    r4_1 = r7_1;
    if (res_2 != 0 && res_2 >> 0x1f == ((r0_2 ^ r6_1) & (r0_2 ^ res_2)) >> 0x1f) {  // (from the original)
        r4_1 = r4_1 + 1u;
        if (s32(0x803u) <= s32(r4_1)) {  // (from the original)
            r4_1 = 0x803u - 0x27u;  // (from the original)
        }
    }
    zf_1 = r6_1 == 2u;
    if (zf_1) {
        zf_1 = r5_2 == 0x1du;  // (from the original)
    }
    if (zf_1) {
        guest::cpu()->r[13] = r13;
        r0_3 = call_00301da8(r4_1, r1_2, r2_1, r3_1);
        if (r0_3 == 0) {
            r5_2 = 0x1cu;  // (from the original)
        }
    }
    *gptr<u32>(r13) = u32(7u);
    *gptr<u32>(r13 + 4) = u32(0u);
    r0_4 = r13 + 0x30u;  // (from the original)
    *gptr<u32>(r13 + 8u) = u32(0u);
    guest::cpu()->r[13] = r13;
    call_0056ca68(r0_4, r4_1, r6_1, r5_2);
    ea_3 = r13 + 0x30u;  // (from the original)
    r0_5 = *gptr<u32>(ea_3);
    r1_3 = *gptr<u32>(ea_3 + 4);
    r2_2 = *gptr<u32>(ea_3 + 8);
    ea_4 = r13;
    *gptr<u32>(ea_4) = u32(0u);
    ea_5 = r13 + 0x14u;  // (from the original)
    *gptr<u32>(ea_5) = u32(r0_5);
    *gptr<u32>(ea_5 + 4) = u32(r1_3);
    *gptr<u32>(ea_5 + 8) = u32(r2_2);
    r1_4 = ~6u;
    r0_6 = r13 + 0x14u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_00312ab8(r0_6, r1_4, 0u, 0u);
    r4_2 = *global_0095386c;
    ea_6 = r13 + 0x30u;  // (from the original)
    r0_7 = *gptr<u32>(ea_6);
    r1_5 = *gptr<u32>(ea_6 + 4);
    r2_3 = *gptr<u32>(ea_6 + 8);
    ea_7 = r13 + 8u;
    *gptr<u32>(ea_7) = u32(r0_7);
    *gptr<u32>(ea_7 + 4) = u32(r1_5);
    *gptr<u32>(ea_7 + 8) = u32(r2_3);
    ea_8 = r13 + 0x18u;  // (from the original)
    r1_6 = *gptr<u32>(ea_8 + 4);
    *gptr<u32>(r13) = u32(*gptr<u32>(ea_8));
    *gptr<u32>(r13 + 4) = u32(r1_6);
    r3_2 = *gptr<u32>(r13 + 0x14u);  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_8 = call_00301564(r7_1, r8_1, r11_1, r3_2);
    r1_7 = guest::cpu()->r[1];
    zf_2 = r0_8 == 0;
    r0_9 = u32(*gptr<u8>(r4_2)) & ~0x40u;  // (from the original)
    if (!zf_2) {
        r0_9 = r0_9 | 0x40u;  // (from the original)
    }
    *gptr<u8>(r4_2) = u8(r0_9);
    r13 = r13 + 0x3cu;  // (from the original)
    ea_9 = r13;
    r13 = r13 + 0x24;  // (from the original)
    r4_3 = *gptr<u32>(ea_9);
    r5_3 = *gptr<u32>(ea_9 + 4);
    r6_2 = *gptr<u32>(ea_9 + 8);
    r7_2 = *gptr<u32>(ea_9 + 0xc);  // (from the original)
    r8_2 = *gptr<u32>(ea_9 + 0x10);  // (from the original)
    r9_1 = *gptr<u32>(ea_9 + 0x14);  // (from the original)
    r10_1 = *gptr<u32>(ea_9 + 0x18);  // (from the original)
    r11_2 = *gptr<u32>(ea_9 + 0x1c);  // (from the original)
    guest::cpu()->r[1] = r1_7;
    guest::cpu()->r[4] = r4_3;
    guest::cpu()->r[5] = r5_3;
    guest::cpu()->r[6] = r6_2;
    guest::cpu()->r[7] = r7_2;
    guest::cpu()->r[8] = r8_2;
    guest::cpu()->r[9] = r9_1;
    guest::cpu()->r[10] = r10_1;
    guest::cpu()->r[11] = r11_2;
    guest::cpu()->r[13] = r13;
    return r0_9;
L_281f38:;
    r0_10 = *global_0095386c;
    r1_8 = u32(*gptr<u8>(r0_10)) & ~0x40u;  // (from the original)
    *gptr<u8>(r0_10) = u8(r1_8);
    r13 = r13 + 0x3cu;  // (from the original)
    ea_10 = r13;
    r13 = r13 + 0x24;  // (from the original)
    r4_4 = *gptr<u32>(ea_10);
    r5_4 = *gptr<u32>(ea_10 + 4);
    r6_3 = *gptr<u32>(ea_10 + 8);
    r7_3 = *gptr<u32>(ea_10 + 0xc);  // (from the original)
    r8_3 = *gptr<u32>(ea_10 + 0x10);  // (from the original)
    r9_2 = *gptr<u32>(ea_10 + 0x14);  // (from the original)
    r10_2 = *gptr<u32>(ea_10 + 0x18);  // (from the original)
    r11_3 = *gptr<u32>(ea_10 + 0x1c);  // (from the original)
    guest::cpu()->r[1] = r1_8;
    guest::cpu()->r[4] = r4_4;
    guest::cpu()->r[5] = r5_4;
    guest::cpu()->r[6] = r6_3;
    guest::cpu()->r[7] = r7_3;
    guest::cpu()->r[8] = r8_3;
    guest::cpu()->r[9] = r9_2;
    guest::cpu()->r[10] = r10_2;
    guest::cpu()->r[11] = r11_3;
    guest::cpu()->r[13] = r13;
    return r0_10;
}

}  // namespace d_00281e00
GUEST_EXPORT(0x00281e00, d_00281e00::f_00281e00);

// f_00282b44: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00282b44 {


u32 f_00282b44(u32 r0) {
    u32 r0_1 = 0;
    *gptr<u8>(0x94ddf8u + 3u) = u8(4u);  // (from the original)
    r0_1 = u32(*gptr<u8>(0x94ddf8u + 4u)) & ~lsl_r(1u, r0 & 0xff);  // (from the original)
    *gptr<u8>(0x94ddf8u + 4u) = u8(r0_1);  // (from the original)
    guest::cpu()->r[1] = 0x94ddf8u;  // (from the original)
    return r0_1;
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
    arg0->byte_0 = u8(0u);
    arg0->byte_1 = u8(0xffu);  // (from the original)
    arg0->byte_2 = u8(4u);
    arg0->byte_5 = u8(0u);
    guest::cpu()->r[1] = 0u;
    return;
}

}  // namespace d_00282b68
GUEST_EXPORT(0x00282b68, d_00282b68::f_00282b68);

// f_00282c44: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00282c44 {

inline guest::global<u8, 0x0094ddfc> global_0094ddfc;  // (from the original)

u32 f_00282c44(u32 r0, u32 r1) {
    u32 zf_1 = 0;
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r0_2 = 0;
    zf_1 = r1 == 0;
    r0_1 = lsl_r(1u, r0 & 0xff);  // (from the original)
    r1_1 = u32(*global_0094ddfc);
    if (zf_1) {
        r0_2 = r1_1 & ~r0_1;
        *global_0094ddfc = u8(r0_2);
    } else {
        r1_1 = r1_1 | r0_1;
        r0_2 = 0x94ddf8u;  // (from the original)
        *gptr<u8>(r0_2 + 4u) = u8(r1_1);
    }
    guest::cpu()->r[1] = r1_1;
    return r0_2;
}

}  // namespace d_00282c44
GUEST_EXPORT(0x00282c44, d_00282c44::f_00282c44);

// f_00282c78: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00282c78 {

inline guest::global<u8, 0x0094ddf8> global_0094ddf8;  // (from the original)

u32 f_00282c78() {
    *global_0094ddf8 = u8(0u);
    *gptr<u8>(0x94ddf8u + 1u) = u8(0xffu);  // (from the original)
    *gptr<u8>(0x94ddf8u + 2u) = u8(4u);  // (from the original)
    *gptr<u8>(0x94ddf8u + 5u) = u8(0u);  // (from the original)
    *gptr<u8>(0x94ddf8u + 3u) = u8(4u);  // (from the original)
    guest::cpu()->r[1] = 4u;
    return 0x94ddf8u;  // (from the original)
}

}  // namespace d_00282c78
GUEST_EXPORT(0x00282c78, d_00282c78::f_00282c78);

// f_00282ca4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00282ca4 {

inline guest::global<u8, 0x0094ddfc> global_0094ddfc;  // (from the original)
inline constexpr guest::Function<0x00305f2c, u32(u32, u32, u32, u32)> call_00305f2c;  // (from the original)
inline constexpr guest::Function<0x00305f44, u32(u32, u32, u32, u32)> call_00305f44;  // (from the original)
inline constexpr guest::Function<0x007d0e24, u32(u32, u32, u32, u32)> call_007d0e24;  // (from the original)

u32 f_00282ca4(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r0_2 = 0;
    u32 r1_2 = 0;
    u32 r0_3 = 0;
    u32 r1_3 = 0;
    *gptr<u32>(r13 + 0xfffffff8u) = u32(r3);  // (from the original)
    r13 = r13 - 8;
    guest::cpu()->r[13] = r13;
    r0_1 = call_00305f2c(r0, r1, r2, r3);
    r1_1 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    if (r0_1 != 2u) {
        r13 = r13 + 8;
        guest::cpu()->r[1] = r1_1;
        guest::cpu()->r[13] = r13;
        return r0_1;
    }
    guest::cpu()->r[13] = r13;
    r0_2 = call_00305f44(r0_1, r1_1, r2_1, r3_1);
    *global_0094ddfc = u8(u32(*global_0094ddfc) | lsl_r(1u, r0_2 & 0xff));  // (from the original)
    *gptr<u8>(r13 + 1u) = u8(0xffu);  // (from the original)
    *gptr<u8>(r13 + 2u) = u8(4u);
    *gptr<u8>(r13 + 3u) = u8(0u);
    r1_2 = r13;
    *gptr<u8>(r13) = u8(4u);
    guest::cpu()->r[13] = r13;
    r0_3 = call_007d0e24(4u, r1_2, 0xffu, 0u);  // (from the original)
    r1_3 = guest::cpu()->r[1];
    r13 = r13 + 8;
    guest::cpu()->r[1] = r1_3;
    guest::cpu()->r[13] = r13;
    return r0_3;
}

}  // namespace d_00282ca4
GUEST_EXPORT(0x00282ca4, d_00282ca4::f_00282ca4);

// f_00282d6c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00282d6c {

inline guest::global<u8, 0x0094ddf8> global_0094ddf8;  // (from the original)

u32 f_00282d6c() {
    *global_0094ddf8 = u8(0u);
    *gptr<u8>(0x94ddf8u + 1u) = u8(0xffu);  // (from the original)
    *gptr<u8>(0x94ddf8u + 2u) = u8(4u);  // (from the original)
    *gptr<u8>(0x94ddf8u + 5u) = u8(0u);  // (from the original)
    *gptr<u8>(0x94ddf8u + 4u) = u8(0u);  // (from the original)
    *gptr<u8>(0x94ddf8u + 3u) = u8(4u);  // (from the original)
    guest::cpu()->r[1] = 0u;
    return 0x94ddf8u;  // (from the original)
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
    u32 r0_1 = 0;
    r0_1 = arg0->word_68 + 0x104u;  // (from the original)
    return call_0030f48c(r0_1, 0x84516cu, r1, guest::cpu()->r[3]);  // (from the original)
}

}  // namespace d_0028311c
GUEST_EXPORT(0x0028311c, d_0028311c::f_0028311c);

// f_00283ee0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00283ee0 {

inline constexpr guest::Function<0x00241cf0, u32(u32, u32, u32, u32)> call_00241cf0;  // (from the original)
inline constexpr guest::Function<0x00243038, u32(u32, u32, u32, u32)> call_00243038;  // (from the original)
inline constexpr guest::Function<0x00315788, u32(u32, u32, u32, u32)> call_00315788;  // (from the original)

u32 f_00283ee0(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r2_1 = 0;
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r2_2 = 0;
    u32 r3_1 = 0;
    u32 r0_2 = 0;
    u32 r1_2 = 0;
    u32 r2_3 = 0;
    u32 r3_2 = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    if (r3 == 0) {
        r2_1 = 0u;
        goto L_283f18;
    }
    if (r3 == 1u) {
        r2_1 = 1u;
        goto L_283f18;
    }
    if (r3 == 2u) {
        r2_1 = 0x1eu;  // (from the original)
        goto L_283f18;
    }
    if (r3 == 3u) {
        r2_1 = 0x1fu;  // (from the original)
    } else {
        r2_1 = 0x2au;  // (from the original)
    }
L_283f18:;
    r0_1 = call_00315788(r0, r1, r2_1, r3);
    r1_1 = guest::cpu()->r[1];
    r2_2 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    r0_2 = call_00241cf0(r0_1, r1_1, r2_2, r3_1);
    r1_2 = guest::cpu()->r[1];
    r2_3 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    if (r0_2 == 0) {
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        guest::cpu()->r[1] = r1_2;
        return 0xfcu;  // (from the original)
    }
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    return call_00243038(r0_1, r2, r2_3, r3_2);
}

}  // namespace d_00283ee0
GUEST_EXPORT(0x00283ee0, d_00283ee0::f_00283ee0);

// f_00284b38: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00284b38 {

inline guest::global<u16, 0x00950806> global_00950806;  // (from the original)
inline constexpr guest::Function<0x002fcbb0, u32(u32, u32, u32, u32)> call_002fcbb0;  // (from the original)

u32 f_00284b38() {
    u32 r1_1 = 0;
    r1_1 = u32(*global_00950806);
    return call_002fcbb0(guest::cpu()->r[0], r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_00284b38
GUEST_EXPORT(0x00284b38, d_00284b38::f_00284b38);

// f_00284b58: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00284b58 {

inline guest::global<u32, 0x0085f2d4> global_0085f2d4;  // (from the original)
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
    u32 r0_1 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    float S0_1 = 0;
    float S1_1 = 0;
    u32 r0_2 = 0;
    u32 r1_1 = 0;
    u32 r2_2 = 0;
    u32 r3_2 = 0;
    float S0_2 = 0;
    float S1_2 = 0;
    u32 r2_3 = 0;
    u32 r3_3 = 0;
    u32 r1_2 = 0;
    u32 r0_3 = 0;
    u32 r2_4 = 0;
    u32 r3_4 = 0;
    float S0_3 = 0;
    float S1_3 = 0;
    u32 r1_3 = 0;
    u32 r0_4 = 0;
    u32 r2_5 = 0;
    u32 r3_5 = 0;
    float S0_4 = 0;
    float S1_4 = 0;
    u32 r1_4 = 0;
    u32 r0_5 = 0;
    u32 r2_6 = 0;
    u32 r3_6 = 0;
    float S0_5 = 0;
    float S1_5 = 0;
    u32 r1_5 = 0;
    u32 r0_6 = 0;
    u32 r0_7 = 0;
    u32 r8_1 = 0;
    u32 r0_8 = 0;
    u32 r0_9 = 0;
    u32 r1_6 = 0;
    u32 r2_7 = 0;
    u32 r3_7 = 0;
    float S0_6 = 0;
    float S1_6 = 0;
    u32 zf_1 = 0;
    u32 zf_2 = 0;
    u32 zf_3 = 0;
    u32 zf_4 = 0;
    u32 zf_5 = 0;
    u32 zf_6 = 0;
    u32 r0_10 = 0;
    u32 r2_8 = 0;
    u32 r3_8 = 0;
    float S0_7 = 0;
    float S1_7 = 0;
    u32 r1_7 = 0;
    u32 r0_11 = 0;
    u32 r0_12 = 0;
    u32 r0_13 = 0;
    u32 r3_9 = 0;
    float S0_8 = 0;
    float S1_8 = 0;
    u32 r0_14 = 0;
    u32 ea_2 = 0;
    u32 r4_1 = 0;
    u32 r5_1 = 0;
    u32 r6_1 = 0;
    u32 r7_1 = 0;
    u32 r8_2 = 0;
    u32 r9_1 = 0;
    u32 r10_1 = 0;
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
    r13 = r13 - 0x80u;  // (from the original)
    r9 = r0;
    r10 = r1;
    r11 = r2;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    r0_1 = call_002f74c8(r0, r1, r2, r3);
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    S0_1 = guest::cpu()->s[0];
    S1_1 = guest::cpu()->s[1];
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_1;
    guest::cpu()->s[1] = S1_1;
    r0_2 = call_002f74e0(8u, r0_1, r2_1, r3_1);
    r1_1 = guest::cpu()->r[1];
    r2_2 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    S0_2 = guest::cpu()->s[0];
    S1_2 = guest::cpu()->s[1];
    if (r0_2 == 0) {
        goto L_284d74;
    }
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_2;
    guest::cpu()->s[1] = S1_2;
    r0_2 = call_006a5e34(r0_2, r1_1, r2_2, r3_2);
    r1_1 = guest::cpu()->r[1];
    r2_3 = guest::cpu()->r[2];
    r3_3 = guest::cpu()->r[3];
    S0_2 = guest::cpu()->s[0];
    S1_2 = guest::cpu()->s[1];
    if (r0_2 == 0) {
        goto L_284d74;
    }
    r4 = ~0u;
    r6 = 0u;
    r5 = r4;
    r7 = r6;
    r1_2 = r0_2 + 0x10u;  // (from the original)
    r0_3 = r13 + 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_2;
    guest::cpu()->s[1] = S1_2;
    call_0052f224(r0_3, r1_2, r2_3, r3_3);
    r2_4 = guest::cpu()->r[2];
    r3_4 = guest::cpu()->r[3];
    S0_3 = guest::cpu()->s[0];
    S1_3 = guest::cpu()->s[1];
    r1_3 = r13 + 0x28u;  // (from the original)
    r0_4 = r13 + 0x38u;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_3;
    guest::cpu()->s[1] = S1_3;
    call_0074824c(r0_4, r1_3, r2_4, r3_4);
    r2_5 = guest::cpu()->r[2];
    r3_5 = guest::cpu()->r[3];
    S0_4 = guest::cpu()->s[0];
    S1_4 = guest::cpu()->s[1];
    r1_4 = r13 + 0x28u;  // (from the original)
    r0_5 = r13;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_4;
    guest::cpu()->s[1] = S1_4;
    call_00748284(r0_5, r1_4, r2_5, r3_5);
    r2_6 = guest::cpu()->r[2];
    r3_6 = guest::cpu()->r[3];
    S0_5 = guest::cpu()->s[0];
    S1_5 = guest::cpu()->s[1];
    r1_5 = r13 + 0x38u;  // (from the original)
    r0_6 = r13;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_5;
    guest::cpu()->s[1] = S1_5;
    r0_7 = call_007481ec(r0_6, r1_5, r2_6, r3_6);
    r3 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    if (r0_7 == 0) {
        goto L_284cec;
    }
L_284bdc:;
    r8_1 = *gptr<u32>(r13 + 0xcu);  // (from the original)
    r0_8 = *gptr<u32>(r13 + 8u);
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    r0_9 = call_00315788(r0_8, r8_1, 0u, r3);
    r1_6 = guest::cpu()->r[1];
    r2_7 = guest::cpu()->r[2];
    r3_7 = guest::cpu()->r[3];
    S0_6 = guest::cpu()->s[0];
    S1_6 = guest::cpu()->s[1];
    zf_1 = r0_9 == 0xeu;  // (from the original)
    if (!zf_1) {
        zf_1 = r0_9 == 0x12u;  // (from the original)
    }
    if (zf_1) {
        goto L_284c4c;
    }
    zf_2 = r0_9 == 0x11u;  // (from the original)
    if (!zf_2) {
        zf_2 = r0_9 == 0x13u;  // (from the original)
    }
    if (zf_2) {
        goto L_284c4c;
    }
    zf_3 = r0_9 == 0x2cu;  // (from the original)
    if (!zf_3) {
        zf_3 = r0_9 == 0x2bu;  // (from the original)
    }
    if (zf_3) {
        goto L_284c4c;
    }
    zf_4 = r0_9 == 0x14u;  // (from the original)
    if (!zf_4) {
        zf_4 = r0_9 == 0x2fu;  // (from the original)
    }
    if (zf_4) {
        goto L_284c4c;
    }
    zf_5 = r0_9 == 0x30u;  // (from the original)
    if (!zf_5) {
        zf_5 = r0_9 == 0x2eu;  // (from the original)
    }
    if (zf_5) {
        goto L_284c4c;
    }
    zf_6 = r0_9 == 0xf6u;  // (from the original)
    if (!zf_6) {
        zf_6 = r0_9 == 0xf7u;  // (from the original)
    }
    if (!zf_6) {
        zf_6 = r0_9 == 0x2du;  // (from the original)
    }
    if (!zf_6) {
        goto L_284ccc;
    }
L_284c4c:;
    if (*gptr<u32>(r13 + 8u) < r4) {
        r4 = *gptr<u32>(r13 + 8u);
    }
    if (*gptr<u32>(r13 + 0xcu) < r5) {  // (from the original)
        r5 = *gptr<u32>(r13 + 0xcu);  // (from the original)
    }
    if (*gptr<u32>(r13 + 8u) > r6) {
        r6 = *gptr<u32>(r13 + 8u);
    }
    if (*gptr<u32>(r13 + 0xcu) <= r7) {  // (from the original)
        goto L_284ccc;
    }
    r7 = *gptr<u32>(r13 + 0xcu);  // (from the original)
L_284ccc:;
    r0_10 = r13;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_6;
    guest::cpu()->s[1] = S1_6;
    call_0052f144(r0_10, r1_6, r2_7, r3_7);
    r2_8 = guest::cpu()->r[2];
    r3_8 = guest::cpu()->r[3];
    S0_7 = guest::cpu()->s[0];
    S1_7 = guest::cpu()->s[1];
    r1_7 = r13 + 0x38u;  // (from the original)
    r0_11 = r13;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_7;
    guest::cpu()->s[1] = S1_7;
    r0_12 = call_007481ec(r0_11, r1_7, r2_8, r3_8);
    r3 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    if (r0_12 != 0) {
        guest::preempt();
        goto L_284bdc;
    }
L_284cec:;
    r0_13 = r13 + 0x10u;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    call_006a5f0c(r0_13, r4, r5, r3);
    r3_9 = guest::cpu()->r[3];
    S0_8 = guest::cpu()->s[0];
    S1_8 = guest::cpu()->s[1];
    r0_14 = r13 + 0x1cu;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_8;
    guest::cpu()->s[1] = S1_8;
    call_006a5f0c(r0_14, r6, r7, r3_9);
    r1_1 = 0x85f2d8u;  // (from the original)
    *gptr<u32>(r9) = u32(std::bit_cast<u32>(std::bit_cast<float>(*gptr<u32>(r13 + 0x10u)) - std::bit_cast<float>(*global_0085f2d4)));  // (from the original)
    *gptr<u32>(r10) = u32(std::bit_cast<u32>(std::bit_cast<float>(*gptr<u32>(r13 + 0x18u)) - std::bit_cast<float>(*gptr<u32>(r1_1))));  // (from the original)
    *gptr<u32>(r11) = u32(std::bit_cast<u32>(std::bit_cast<float>(*gptr<u32>(r13 + 0x1cu)) + std::bit_cast<float>(*global_0085f2d4)));  // (from the original)
    S1_2 = std::bit_cast<float>(*gptr<u32>(r1_1));
    S0_2 = std::bit_cast<float>(*gptr<u32>(r13 + 0x24u)) + S1_2;  // (from the original)
    *gptr<u32>(*gptr<u32>(r13 + 0x58u)) = u32(std::bit_cast<u32>(S0_2));  // (from the original)
    r0_2 = r13 + 0x28u;  // (from the original)
L_284d74:;
    r13 = r13 + 0x5cu;  // (from the original)
    ea_2 = r13;
    r13 = r13 + 0x24;  // (from the original)
    r4_1 = *gptr<u32>(ea_2);
    r5_1 = *gptr<u32>(ea_2 + 4);
    r6_1 = *gptr<u32>(ea_2 + 8);
    r7_1 = *gptr<u32>(ea_2 + 0xc);  // (from the original)
    r8_2 = *gptr<u32>(ea_2 + 0x10);  // (from the original)
    r9_1 = *gptr<u32>(ea_2 + 0x14);  // (from the original)
    r10_1 = *gptr<u32>(ea_2 + 0x18);  // (from the original)
    r11_1 = *gptr<u32>(ea_2 + 0x1c);  // (from the original)
    guest::cpu()->r[1] = r1_1;
    guest::cpu()->r[4] = r4_1;
    guest::cpu()->r[5] = r5_1;
    guest::cpu()->r[6] = r6_1;
    guest::cpu()->r[7] = r7_1;
    guest::cpu()->r[8] = r8_2;
    guest::cpu()->r[9] = r9_1;
    guest::cpu()->r[10] = r10_1;
    guest::cpu()->r[11] = r11_1;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_2;
    guest::cpu()->s[1] = S1_2;
    return r0_2;
}

}  // namespace d_00284b58
GUEST_EXPORT(0x00284b58, d_00284b58::f_00284b58);

// f_00284ee4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00284ee4 {

inline constexpr guest::Function<0x00284b58, u32(u32, u32, u32, u32)> call_00284b58;  // (from the original)
inline constexpr guest::Function<0x003171b4, u32(u32, u32, u32, u32)> call_003171b4;  // (from the original)

u32 f_00284ee4(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r13 = guest::cpu()->r[13];
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r3_2 = 0;
    u32 r2_2 = 0;
    u32 r3_3 = 0;
    u32 r2_3 = 0;
    u32 r1_2 = 0;
    u32 r0_2 = 0;
    r13 = r13 - 0x30u;  // (from the original)
    r2_1 = r13 + 0xcu;  // (from the original)
    r3_1 = r13 + 0x14u;  // (from the original)
    r0_1 = r13;
    r1_1 = r13 + 8u;
    guest::cpu()->r[13] = r13;
    call_00284b58(r0_1, r1_1, r2_1, r3_1);
    r3_2 = guest::cpu()->r[3];
    r2_2 = r13;
    guest::cpu()->r[13] = r13;
    call_003171b4(r0, r1, r2_2, r3_2);
    r3_3 = guest::cpu()->r[3];
    r2_3 = r13 + 0xcu;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_003171b4(r2, r3, r2_3, r3_3);
    r1_2 = guest::cpu()->r[1];
    *gptr<u32>(r2) = u32(*gptr<u32>(r2) - 1u);
    r0_2 = *gptr<u32>(r3) - 1u;
    *gptr<u32>(r3) = u32(r0_2);
    r13 = r13 + 0x30u;  // (from the original)
    guest::cpu()->r[1] = r1_2;
    guest::cpu()->r[13] = r13;
    return r0_2;
}

}  // namespace d_00284ee4
GUEST_EXPORT(0x00284ee4, d_00284ee4::f_00284ee4);

// f_00285184: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00285184 {

inline guest::global<u8, 0x008c9f1c> global_008c9f1c;  // (from the original)
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
    u32 r2 = 0;
    u32 r3 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r13 = guest::cpu()->r[13];
    u32 ea_1 = 0;
    u32 r3_1 = 0;
    u32 r1_1 = 0;
    u32 r0_1 = 0;
    u32 r1_2 = 0;
    u32 r2_1 = 0;
    u32 r3_2 = 0;
    u32 r0_2 = 0;
    u32 r1_3 = 0;
    u32 r2_2 = 0;
    u32 r3_3 = 0;
    u32 r0_3 = 0;
    u32 r1_4 = 0;
    u32 r2_3 = 0;
    u32 r3_4 = 0;
    u32 r0_4 = 0;
    u32 r2_4 = 0;
    u32 r3_5 = 0;
    u32 zf_1 = 0;
    u32 zf_2 = 0;
    u32 r1_5 = 0;
    u32 r0_5 = 0;
    u32 r0_6 = 0;
    u32 r2_5 = 0;
    u32 r3_6 = 0;
    u32 r0_7 = 0;
    u32 r1_6 = 0;
    u32 r2_6 = 0;
    u32 r3_7 = 0;
    u32 zf_3 = 0;
    u32 r1_7 = 0;
    u32 r0_8 = 0;
    u32 r0_9 = 0;
    u32 r2_7 = 0;
    u32 r3_8 = 0;
    u32 r0_10 = 0;
    u32 r1_8 = 0;
    u32 r2_8 = 0;
    u32 r3_9 = 0;
    u32 r0_11 = 0;
    u32 r2_9 = 0;
    u32 r3_10 = 0;
    u32 r0_12 = 0;
    u32 r1_9 = 0;
    u32 r2_10 = 0;
    u32 r3_11 = 0;
    u32 r0_13 = 0;
    u32 r2_11 = 0;
    u32 r3_12 = 0;
    u32 r0_14 = 0;
    u32 r1_10 = 0;
    u32 r2_12 = 0;
    u32 r3_13 = 0;
    u32 r0_15 = 0;
    u32 r1_11 = 0;
    u32 r0_16 = 0;
    u32 r0_17 = 0;
    u32 r2_13 = 0;
    u32 r3_14 = 0;
    u32 r0_18 = 0;
    u32 r1_12 = 0;
    u32 r2_14 = 0;
    u32 r3_15 = 0;
    u32 r0_19 = 0;
    u32 r2_15 = 0;
    u32 r3_16 = 0;
    u32 r0_20 = 0;
    u32 r1_13 = 0;
    u32 r2_16 = 0;
    u32 r3_17 = 0;
    u32 r1_14 = 0;
    u32 r0_21 = 0;
    u32 r1_15 = 0;
    u32 r2_17 = 0;
    u32 r3_18 = 0;
    u32 r1_16 = 0;
    u32 r0_22 = 0;
    u32 r0_23 = 0;
    u32 r2_18 = 0;
    u32 r3_19 = 0;
    u32 r0_24 = 0;
    u32 r1_17 = 0;
    u32 r2_19 = 0;
    u32 r3_20 = 0;
    r13 = r13 - 0x140u;  // (from the original)
    r4 = r0;
    ea_1 = r13 + 4u;
    *gptr<u32>(ea_1) = u32(r13 + 0xcu);  // (from the original)
    *gptr<u32>(ea_1 + 4) = u32(0x100u);  // (from the original)
    r3_1 = u32(*global_008c9f1c);
    r1_1 = *gptr<u32>(r13 + 4u) - 1u;
    *gptr<u8>(0x100u + r1_1) = u8(r3_1);  // (from the original)
    *gptr<u8>(r13 + 0xcu) = u8(u32(*global_008c9f1c));  // (from the original)
    *gptr<u32>(r13) = u32(0x9048b0u);  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_1 = call_002f74c8(0x9048b0u, r1_1, 0x100u, r3_1);  // (from the original)
    r1_2 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0_2 = call_005b3f88(r0_1, r1_2, r2_1, r3_2);
    r1_3 = guest::cpu()->r[1];
    r2_2 = guest::cpu()->r[2];
    r3_3 = guest::cpu()->r[3];
    if (r0_2 != 6u) {
        guest::cpu()->r[13] = r13;
        r0_3 = call_002f74c8(r0_2, r1_3, r2_2, r3_3);
        r1_4 = guest::cpu()->r[1];
        r2_3 = guest::cpu()->r[2];
        r3_4 = guest::cpu()->r[3];
        if (r0_3 == 0x25u) {  // (from the original)
            goto L_2852fc;
        }
        goto L_285310;
    }
    guest::cpu()->r[13] = r13;
    r0_4 = call_002f74c8(r0_2, r1_3, r2_2, r3_3);
    r2_4 = guest::cpu()->r[2];
    r3_5 = guest::cpu()->r[3];
    zf_1 = r0_4 == 0x4bu;  // (from the original)
    if (!zf_1) {
        zf_2 = *gptr<u32>(r4 + 8u) == 1u;
        r1_5 = r13;
        r0_5 = r13 + 0x110u;  // (from the original)
        if (zf_2) {
            goto L_2852c4;
        }
        guest::cpu()->r[13] = r13;
        r0_6 = call_0054a644(r0_5, r1_5, r2_4, r3_5);
        r2_5 = guest::cpu()->r[2];
        r3_6 = guest::cpu()->r[3];
        guest::cpu()->r[13] = r13;
        r0_7 = call_00544fec(r0_6, 0x2853b8u, r2_5, r3_6);  // (from the original)
        r1_6 = guest::cpu()->r[1];
        r2_6 = guest::cpu()->r[2];
        r3_7 = guest::cpu()->r[3];
        guest::cpu()->r[13] = r13;
        call_00544f18(r0_7, r1_6, r2_6, r3_7);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        goto L_285358;
    }
    zf_3 = *gptr<u32>(r4 + 8u) == 1u;
    r1_7 = r13;
    r0_8 = r13 + 0x110u;  // (from the original)
    if (!zf_3) {
        guest::cpu()->r[13] = r13;
        r0_9 = call_0054a644(r0_8, r1_7, r2_4, r3_5);
        r2_7 = guest::cpu()->r[2];
        r3_8 = guest::cpu()->r[3];
        guest::cpu()->r[13] = r13;
        r0_10 = call_00544fec(r0_9, 0x2853d0u, r2_7, r3_8);  // (from the original)
        r1_8 = guest::cpu()->r[1];
        r2_8 = guest::cpu()->r[2];
        r3_9 = guest::cpu()->r[3];
        guest::cpu()->r[13] = r13;
        call_00544f18(r0_10, r1_8, r2_8, r3_9);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        goto L_285358;
    }
    guest::cpu()->r[13] = r13;
    r0_11 = call_0054a644(r0_8, r1_7, r2_4, r3_5);
    r2_9 = guest::cpu()->r[2];
    r3_10 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0_12 = call_00544fec(r0_11, 0x2853ecu, r2_9, r3_10);  // (from the original)
    r1_9 = guest::cpu()->r[1];
    r2_10 = guest::cpu()->r[2];
    r3_11 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    call_00544f18(r0_12, r1_9, r2_10, r3_11);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    goto L_285358;
L_2852c4:;
    guest::cpu()->r[13] = r13;
    r0_13 = call_0054a644(r0_5, r1_5, r2_4, r3_5);
    r2_11 = guest::cpu()->r[2];
    r3_12 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0_14 = call_00544fec(r0_13, 0x28540cu, r2_11, r3_12);  // (from the original)
    r1_10 = guest::cpu()->r[1];
    r2_12 = guest::cpu()->r[2];
    r3_13 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    call_00544f18(r0_14, r1_10, r2_12, r3_13);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    goto L_285358;
L_2852fc:;
    guest::cpu()->r[13] = r13;
    r0_15 = call_006cb9fc(r0_3, r1_4, r2_3, r3_4);
    r2_3 = guest::cpu()->r[2];
    r3_4 = guest::cpu()->r[3];
    if (r0_15 == 0) {
        goto L_285374;
    }
L_285310:;
    r1_11 = r13;
    r0_16 = r13 + 0x110u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_17 = call_0054a644(r0_16, r1_11, r2_3, r3_4);
    r2_13 = guest::cpu()->r[2];
    r3_14 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0_18 = call_00544fec(r0_17, 0x28542cu, r2_13, r3_14);  // (from the original)
    r1_12 = guest::cpu()->r[1];
    r2_14 = guest::cpu()->r[2];
    r3_15 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0_19 = call_0018fc94(0xa5u, r1_12, r2_14, r3_15);  // (from the original)
    r2_15 = guest::cpu()->r[2];
    r3_16 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0_20 = call_00544fec(r0_18, r0_19, r2_15, r3_16);
    r1_13 = guest::cpu()->r[1];
    r2_16 = guest::cpu()->r[2];
    r3_17 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    call_00544f18(r0_20, r1_13, r2_16, r3_17);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
L_285358:;
    r1_14 = r13;
    r0_21 = r4 + 0x184u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_001bab40(r0_21, r1_14, r2, r3);
    r1_15 = guest::cpu()->r[1];
    r2_17 = guest::cpu()->r[2];
    r3_18 = guest::cpu()->r[3];
    r13 = r13 + 0x140u;  // (from the original)
    guest::cpu()->r[13] = r13;
    return call_002563d8(r4, r1_15, r2_17, r3_18);
L_285374:;
    r1_16 = r13;
    r0_22 = r13 + 0x110u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_23 = call_0054a644(r0_22, r1_16, r2_3, r3_4);
    r2_18 = guest::cpu()->r[2];
    r3_19 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0_24 = call_00544fec(r0_23, 0x28543cu, r2_18, r3_19);  // (from the original)
    r1_17 = guest::cpu()->r[1];
    r2_19 = guest::cpu()->r[2];
    r3_20 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    call_00544f18(r0_24, r1_17, r2_19, r3_20);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    guest::preempt();
    goto L_285358;
}

}  // namespace d_00285184
GUEST_EXPORT(0x00285184, d_00285184::f_00285184);

// f_00286558: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00286558 {


u32 f_00286558(u32 r0) {
    u32 r1 = 0;
    u32 r2 = 0;
    u32 r3 = 0;
    u32 r5 = guest::cpu()->r[5];
    u32 r12 = 0;
    u32 r12_1 = 0;
    u32 r4_1 = 0;
    u32 r3_1 = 0;
    u32 r2_1 = 0;
    guest::cpu()->r[13] -= 8u;
    r5 = 0u;
    r2 = r5;
L_286564:;
    r3 = 0u;
    r1 = r3;
    do {
L_28656c:;
        r12_1 = r1 + (r1 << 2) + r2;
        r1 = r1 + 1u;
        if (*gptr<u32>(*gptr<u32>(r0 + (r12_1 << 2) + 0x61cu) + 0x430u) == 0) {  // (from the original)
            r3 = r3 + 1u;
        }
        guest::preempt();
    } while (r1 < 5u);
    if (r3 == 4u) {
        r5 = r5 + 1u;
    }
    r2 = r2 + 1u;
    if (r2 < 5u) {
        guest::preempt();
        goto L_286564;
    }
    r2 = 0u;
L_2865ac:;
    r3 = 0u;
    r1 = r3;
    r12 = r2 + (r2 << 2);
    do {
L_2865b8:;
        r4_1 = r12 + r1;
        r1 = r1 + 1u;
        if (*gptr<u32>(*gptr<u32>(r0 + (r4_1 << 2) + 0x61cu) + 0x430u) == 0) {  // (from the original)
            r3 = r3 + 1u;
        }
        guest::preempt();
    } while (r1 < 5u);
    if (r3 == 4u) {
        r5 = r5 + 1u;
    }
    r2 = r2 + 1u;
    if (r2 < 5u) {
        guest::preempt();
        goto L_2865ac;
    }
    r2 = 0u;
    r1 = r2;
    do {
L_2865f8:;
        r3_1 = r1 + (r1 << 1);
        r1 = r1 + 1u;
        if (*gptr<u32>(*gptr<u32>(r0 + (r3_1 << 3) + 0x61cu) + 0x430u) == 0) {  // (from the original)
            r2 = r2 + 1u;
        }
        guest::preempt();
    } while (r1 < 5u);
    r3 = 0u;
    if (r2 == 4u) {
        r5 = r5 + 1u;
    }
    r1 = r3;
    do {
L_28662c:;
        r2_1 = (r1 << 2) + 4u;
        r1 = r1 + 1u;
        if (*gptr<u32>(*gptr<u32>(r0 + (r2_1 << 2) + 0x61cu) + 0x430u) == 0) {  // (from the original)
            r3 = r3 + 1u;
        }
        guest::preempt();
    } while (r1 < 5u);
    if (r3 == 4u) {
        r5 = r5 + 1u;
    }
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1;
    return r5;
}

}  // namespace d_00286558
GUEST_EXPORT(0x00286558, d_00286558::f_00286558);

// f_00286668: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00286668 {

inline guest::global<u32, 0x00848188> global_00848188;  // (from the original)
inline constexpr guest::Function<0x00817eec, u32(u32, u32, u32, u32)> call_00817eec;  // (from the original)

u32 f_00286668(u32 r0) {
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r0_2 = 0;
    u32 r1_2 = 0;
    guest::cpu()->r[13] -= 8u;
    r0_1 = r0 + 0x28u;  // (from the original)
    r1_1 = *global_00848188;
    r2_1 = *gptr<u32>(0x848188u + 4);  // (from the original)
    r0_2 = call_00817eec(r0_1, r1_1, r2_1, guest::cpu()->r[3]);
    r1_2 = guest::cpu()->r[1];
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1_2;
    return r0_2;
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
    u32 r2_1 = 0;
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r2_2 = 0;
    u32 r3_1 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r1_1 = 0;
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
    u32 r4_1 = 0;
    u32 r0_19 = 0;
    u32 r1_8 = 0;
    u32 r2_10 = 0;
    u32 r3_9 = 0;
    u32 r0_20 = 0;
    u32 r0_21 = 0;
    u32 r1_9 = 0;
    u32 r2_11 = 0;
    u32 r3_10 = 0;
    u32 r0_22 = 0;
    u32 r0_23 = 0;
    u32 r1_10 = 0;
    u32 r2_12 = 0;
    u32 r3_11 = 0;
    u32 r0_24 = 0;
    u32 r0_25 = 0;
    u32 r1_11 = 0;
    u32 r2_13 = 0;
    u32 r3_12 = 0;
    u32 r0_26 = 0;
    u32 r0_27 = 0;
    u32 r1_12 = 0;
    u32 r2_14 = 0;
    u32 r3_13 = 0;
    u32 r0_28 = 0;
    u32 r0_29 = 0;
    u32 r1_13 = 0;
    u32 r2_15 = 0;
    u32 r3_14 = 0;
    u32 r0_30 = 0;
    u32 r0_31 = 0;
    u32 r1_14 = 0;
    u32 r2_16 = 0;
    u32 r3_15 = 0;
    u32 r0_32 = 0;
    u32 r0_33 = 0;
    u32 r1_15 = 0;
    u32 r2_17 = 0;
    u32 r3_16 = 0;
    u32 r0_34 = 0;
    u32 r0_35 = 0;
    u32 r1_16 = 0;
    u32 r2_18 = 0;
    u32 r3_17 = 0;
    u32 r0_36 = 0;
    u32 r0_37 = 0;
    u32 r1_17 = 0;
    u32 r2_19 = 0;
    u32 r3_18 = 0;
    u32 r0_38 = 0;
    guest::cpu()->r[13] -= 8u;
    r2_1 = 0x8f0390u + 0x6cu;  // (from the original)
    arg0->word_0 = u32(0x8f0390u);  // (from the original)
    arg0->word_28 = u32(r2_1);
    arg0->word_7e20 = u32(0x8edc6cu);  // (from the original)
    r0_1 = r0 + 0x8258u;  // (from the original)
    r0_2 = call_005e3194(r0_1, 0x8edc6cu, r2_1, r3);  // (from the original)
    r2_2 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    *gptr<u32>(r0_2 - 0x13cu) = u32(0x8f7224u);  // (from the original)
    r0_3 = r0_2 - 0x30u;  // (from the original)
    r0_4 = call_0056988c(r0_3, 0x8f7224u, r2_2, r3_1);  // (from the original)
    r1_1 = guest::cpu()->r[1];
    r2_3 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    r0_5 = r0_4 - 0x28u;  // (from the original)
    r0_6 = call_0056988c(r0_5, r1_1, r2_3, r3_2);
    r1_2 = guest::cpu()->r[1];
    r2_4 = guest::cpu()->r[2];
    r3_3 = guest::cpu()->r[3];
    r0_7 = r0_6 - 0xe4u;  // (from the original)
    r0_8 = call_002f7710(r0_7, r1_2, r2_4, r3_3);
    r1_3 = guest::cpu()->r[1];
    r2_5 = guest::cpu()->r[2];
    r3_4 = guest::cpu()->r[3];
    r0_9 = r0_8 - 0x134u;  // (from the original)
    r0_10 = call_003432e4(r0_9, r1_3, r2_5, r3_4);
    r1_4 = guest::cpu()->r[1];
    r2_6 = guest::cpu()->r[2];
    r3_5 = guest::cpu()->r[3];
    r0_11 = r0_10 - 0x28u;  // (from the original)
    r0_12 = call_0056988c(r0_11, r1_4, r2_6, r3_5);
    r1_5 = guest::cpu()->r[1];
    r2_7 = guest::cpu()->r[2];
    r3_6 = guest::cpu()->r[3];
    r0_13 = r0_12 - 0x28u;  // (from the original)
    r0_14 = call_0056988c(r0_13, r1_5, r2_7, r3_6);
    r1_6 = guest::cpu()->r[1];
    r2_8 = guest::cpu()->r[2];
    r3_7 = guest::cpu()->r[3];
    r0_15 = r0_14 - 0x28u;  // (from the original)
    r0_16 = call_0056988c(r0_15, r1_6, r2_8, r3_7);
    r1_7 = guest::cpu()->r[1];
    r2_9 = guest::cpu()->r[2];
    r3_8 = guest::cpu()->r[3];
    r0_17 = r0_16 - 0x14cu;  // (from the original)
    r0_18 = call_005bf744(r0_17, r1_7, r2_9, r3_8);
    r4_1 = r0_18 - 0x7e24u;  // (from the original)
    r0_19 = r0_18 - 0x77a4u;  // (from the original)
    call_002f76ac(r0_19, 0x283768u, 0x4fcu, 0x18u);  // (from the original)
    r1_8 = guest::cpu()->r[1];
    r2_10 = guest::cpu()->r[2];
    r3_9 = guest::cpu()->r[3];
    r0_20 = r4_1 + 0x5f4u;  // (from the original)
    r0_21 = call_0056988c(r0_20, r1_8, r2_10, r3_9);
    r1_9 = guest::cpu()->r[1];
    r2_11 = guest::cpu()->r[2];
    r3_10 = guest::cpu()->r[3];
    r0_22 = r0_21 - 0x28u;  // (from the original)
    r0_23 = call_0056988c(r0_22, r1_9, r2_11, r3_10);
    r1_10 = guest::cpu()->r[1];
    r2_12 = guest::cpu()->r[2];
    r3_11 = guest::cpu()->r[3];
    r0_24 = r0_23 - 0x28u;  // (from the original)
    r0_25 = call_0056988c(r0_24, r1_10, r2_12, r3_11);
    r1_11 = guest::cpu()->r[1];
    r2_13 = guest::cpu()->r[2];
    r3_12 = guest::cpu()->r[3];
    r0_26 = r0_25 - 0x14cu;  // (from the original)
    r0_27 = call_005bf744(r0_26, r1_11, r2_13, r3_12);
    r1_12 = guest::cpu()->r[1];
    r2_14 = guest::cpu()->r[2];
    r3_13 = guest::cpu()->r[3];
    r0_28 = r0_27 - 0x28u;  // (from the original)
    r0_29 = call_0056988c(r0_28, r1_12, r2_14, r3_13);
    r1_13 = guest::cpu()->r[1];
    r2_15 = guest::cpu()->r[2];
    r3_14 = guest::cpu()->r[3];
    r0_30 = r0_29 - 0x28u;  // (from the original)
    r0_31 = call_0056988c(r0_30, r1_13, r2_15, r3_14);
    r1_14 = guest::cpu()->r[1];
    r2_16 = guest::cpu()->r[2];
    r3_15 = guest::cpu()->r[3];
    r0_32 = r0_31 - 0x28u;  // (from the original)
    r0_33 = call_0056988c(r0_32, r1_14, r2_16, r3_15);
    r1_15 = guest::cpu()->r[1];
    r2_17 = guest::cpu()->r[2];
    r3_16 = guest::cpu()->r[3];
    r0_34 = r0_33 - 0x14cu;  // (from the original)
    r0_35 = call_005bf744(r0_34, r1_15, r2_17, r3_16);
    r1_16 = guest::cpu()->r[1];
    r2_18 = guest::cpu()->r[2];
    r3_17 = guest::cpu()->r[3];
    r0_36 = r0_35 - 0x248u;  // (from the original)
    r0_37 = call_00567ef0(r0_36, r1_16, r2_18, r3_17);
    r1_17 = guest::cpu()->r[1];
    r2_19 = guest::cpu()->r[2];
    r3_18 = guest::cpu()->r[3];
    guest::cpu()->r[13] += 8u;
    r0_38 = r0_37 - 0x4cu;  // (from the original)
    return call_006aaa30(r0_38, r1_17, r2_19, r3_18);
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

inline guest::global<u16, 0x008c9f1e> global_008c9f1e;  // (from the original)

u32 f_002882b4(gptr<Object_002882b4_0> arg0) {
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    r0_1 = arg0->word_3a0;
    r1_1 = u32(*global_008c9f1e);
    *gptr<u16>(r0_1) = u16(r1_1);
    guest::cpu()->r[1] = r1_1;
    return r0_1;
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
    u32 r4_2 = 0;
    u32 r0_8 = 0;
    u32 r0_9 = 0;
    u32 r1_3 = 0;
    u32 r2_4 = 0;
    u32 r3_4 = 0;
    u32 r0_10 = 0;
    u32 r0_11 = 0;
    u32 r1_4 = 0;
    u32 r2_5 = 0;
    u32 r3_5 = 0;
    u32 r0_12 = 0;
    u32 r0_13 = 0;
    u32 r2_6 = 0;
    u32 r3_6 = 0;
    u32 r0_14 = 0;
    u32 r0_15 = 0;
    u32 r1_5 = 0;
    u32 r2_7 = 0;
    u32 r3_7 = 0;
    u32 r0_16 = 0;
    u32 r0_17 = 0;
    u32 r1_6 = 0;
    u32 r2_8 = 0;
    u32 r3_8 = 0;
    u32 r0_18 = 0;
    u32 r0_19 = 0;
    u32 r1_7 = 0;
    u32 r2_9 = 0;
    u32 r3_9 = 0;
    u32 r0_20 = 0;
    u32 r0_21 = 0;
    u32 r1_8 = 0;
    u32 r2_10 = 0;
    u32 r3_10 = 0;
    u32 r0_22 = 0;
    u32 r0_23 = 0;
    u32 r4_3 = 0;
    u32 r0_24 = 0;
    u32 r1_9 = 0;
    u32 r2_11 = 0;
    u32 r3_11 = 0;
    u32 r0_25 = 0;
    u32 r0_26 = 0;
    u32 r1_10 = 0;
    u32 r2_12 = 0;
    u32 r3_12 = 0;
    u32 r0_27 = 0;
    u32 r0_28 = 0;
    u32 r1_11 = 0;
    u32 r2_13 = 0;
    u32 r3_13 = 0;
    u32 r0_29 = 0;
    u32 r0_30 = 0;
    u32 r1_12 = 0;
    u32 r2_14 = 0;
    u32 r3_14 = 0;
    u32 r0_31 = 0;
    u32 r0_32 = 0;
    u32 r1_13 = 0;
    u32 r2_15 = 0;
    u32 r3_15 = 0;
    u32 r0_33 = 0;
    u32 r0_34 = 0;
    u32 r1_14 = 0;
    u32 r2_16 = 0;
    u32 r3_16 = 0;
    u32 r0_35 = 0;
    u32 r0_36 = 0;
    u32 r1_15 = 0;
    u32 r2_17 = 0;
    u32 r3_17 = 0;
    u32 r0_37 = 0;
    u32 r0_38 = 0;
    u32 r1_16 = 0;
    u32 r2_18 = 0;
    u32 r3_18 = 0;
    u32 r0_39 = 0;
    guest::cpu()->r[13] -= 8u;
    arg0->word_0 = u32(0x8f0490u);  // (from the original)
    arg0->word_28 = u32(0x8f0490u + 0x6cu);  // (from the original)
    r0_1 = r0 + 0x48e8u;  // (from the original)
    call_002f76ac(r0_1, 0x4e0a44u, 0x24u, 0xau);  // (from the original)
    *gptr<u32>(0x1e70u + r0) = u32(0x8ee228u);  // (from the original)
    r4_1 = r0 + 0x2208u;  // (from the original)
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
    r4_2 = r0_7 - 0x1e74u;  // (from the original)
    r0_8 = r0_7 - 0x8c4u;  // (from the original)
    call_002f76ac(r0_8, 0x2b6ef4u, 0xe0u, 0xau);  // (from the original)
    r0_9 = r4_2 + 0xcf0u;  // (from the original)
    call_002f76ac(r0_9, 0x2b6ef4u, 0xe0u, 0xau);  // (from the original)
    r1_3 = guest::cpu()->r[1];
    r2_4 = guest::cpu()->r[2];
    r3_4 = guest::cpu()->r[3];
    r0_10 = r4_2 + 0xc0cu;  // (from the original)
    r0_11 = call_002f7710(r0_10, r1_3, r2_4, r3_4);
    r1_4 = guest::cpu()->r[1];
    r2_5 = guest::cpu()->r[2];
    r3_5 = guest::cpu()->r[3];
    r0_12 = r0_11 - 0xe4u;  // (from the original)
    r0_13 = call_002f7710(r0_12, r1_4, r2_5, r3_5);
    r2_6 = guest::cpu()->r[2];
    r3_6 = guest::cpu()->r[3];
    *gptr<u32>(r0_13 - 0x4f0u) = u32(0x8f47a0u);  // (from the original)
    r0_14 = r0_13 - 0xd4u;  // (from the original)
    r0_15 = call_005e3194(r0_14, 0x8f47a0u, r2_6, r3_6);  // (from the original)
    r1_5 = guest::cpu()->r[1];
    r2_7 = guest::cpu()->r[2];
    r3_7 = guest::cpu()->r[3];
    r0_16 = r0_15 - 0x28u;  // (from the original)
    r0_17 = call_0056988c(r0_16, r1_5, r2_7, r3_7);
    r1_6 = guest::cpu()->r[1];
    r2_8 = guest::cpu()->r[2];
    r3_8 = guest::cpu()->r[3];
    r0_18 = r0_17 - 0x28u;  // (from the original)
    r0_19 = call_0056988c(r0_18, r1_6, r2_8, r3_8);
    r1_7 = guest::cpu()->r[1];
    r2_9 = guest::cpu()->r[2];
    r3_9 = guest::cpu()->r[3];
    r0_20 = r0_19 - 0x15cu;  // (from the original)
    r0_21 = call_005bf744(r0_20, r1_7, r2_9, r3_9);
    r1_8 = guest::cpu()->r[1];
    r2_10 = guest::cpu()->r[2];
    r3_10 = guest::cpu()->r[3];
    r0_22 = r0_21 - 0x24cu;  // (from the original)
    r0_23 = call_00567ef0(r0_22, r1_8, r2_10, r3_10);
    r4_3 = r0_23 - 0x65cu;  // (from the original)
    r0_24 = r0_23 - 0x1b4u;  // (from the original)
    call_002f76ac(r0_24, 0x56988cu, 0x28u, 0xau);  // (from the original)
    r1_9 = guest::cpu()->r[1];
    r2_11 = guest::cpu()->r[2];
    r3_11 = guest::cpu()->r[3];
    r0_25 = r4_3 + 0x480u;  // (from the original)
    r0_26 = call_0056988c(r0_25, r1_9, r2_11, r3_11);
    r1_10 = guest::cpu()->r[1];
    r2_12 = guest::cpu()->r[2];
    r3_12 = guest::cpu()->r[3];
    r0_27 = r0_26 - 0x28u;  // (from the original)
    r0_28 = call_0056988c(r0_27, r1_10, r2_12, r3_12);
    r1_11 = guest::cpu()->r[1];
    r2_13 = guest::cpu()->r[2];
    r3_13 = guest::cpu()->r[3];
    r0_29 = r0_28 - 0x28u;  // (from the original)
    r0_30 = call_0056988c(r0_29, r1_11, r2_13, r3_13);
    r1_12 = guest::cpu()->r[1];
    r2_14 = guest::cpu()->r[2];
    r3_14 = guest::cpu()->r[3];
    r0_31 = r0_30 - 0x28u;  // (from the original)
    r0_32 = call_0056988c(r0_31, r1_12, r2_14, r3_14);
    r1_13 = guest::cpu()->r[1];
    r2_15 = guest::cpu()->r[2];
    r3_15 = guest::cpu()->r[3];
    r0_33 = r0_32 - 0x28u;  // (from the original)
    r0_34 = call_0056988c(r0_33, r1_13, r2_15, r3_15);
    r1_14 = guest::cpu()->r[1];
    r2_16 = guest::cpu()->r[2];
    r3_16 = guest::cpu()->r[3];
    r0_35 = r0_34 - 0x14cu;  // (from the original)
    r0_36 = call_005bf744(r0_35, r1_14, r2_16, r3_16);
    r1_15 = guest::cpu()->r[1];
    r2_17 = guest::cpu()->r[2];
    r3_17 = guest::cpu()->r[3];
    r0_37 = r0_36 - 0x248u;  // (from the original)
    r0_38 = call_00567ef0(r0_37, r1_15, r2_17, r3_17);
    r1_16 = guest::cpu()->r[1];
    r2_18 = guest::cpu()->r[2];
    r3_18 = guest::cpu()->r[3];
    guest::cpu()->r[13] += 8u;
    r0_39 = r0_38 - 0x4cu;  // (from the original)
    return call_006aaa30(r0_39, r1_16, r2_18, r3_18);
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
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r5_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r0_5 = 0;
    u32 r1_2 = 0;
    u32 r0_6 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r0_7 = 0;
    u32 r1_3 = 0;
    u32 r1_4 = 0;
    u32 r2_2 = 0;
    u32 r3_2 = 0;
    u32 r1_5 = 0;
    u32 r2_3 = 0;
    u32 r3_3 = 0;
    u32 r0_8 = 0;
    u32 r0_9 = 0;
    u32 r1_6 = 0;
    r0_1 = arg0->word_62c;
    r1_1 = 0x8532a7u;  // (from the original)
    r13 = r13 - 0x58u;  // (from the original)
    r5_1 = u32(s32(s8(*gptr<u8>(r0_1 + r1_1))));
    if (r0_1 == 2u) {
        r0_2 = arg0->word_628;
        guest::cpu()->r[13] = r13;
        r0_3 = call_00301da8(r0_2, r1_1, r2, r3);
        r1_1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        if (r0_3 != 0) {
            r5_1 = r5_1 + 1u;
        }
    }
    r0_4 = *gptr<u32>(r0 + 0x630u);  // (from the original)
    if (s32(r0_4) < s32(1u)) {
        *gptr<u32>(r0 + 0x630u) = u32(r5_1);  // (from the original)
        goto L_289d34;
    }
    if (s32(r5_1) < s32(r0_4)) {
        *gptr<u32>(r0 + 0x630u) = u32(1u);  // (from the original)
    }
L_289d34:;
    r0_5 = r13 + 4u;
    guest::cpu()->r[13] = r13;
    call_00312bd0(r0_5, r1_1, r2, r3);
    *gptr<u32>(r13) = u32(4u);
    r1_2 = *gptr<u32>(r0 + 0x630u);  // (from the original)
    r0_6 = r13 + 4u;
    guest::cpu()->r[13] = r13;
    call_00312c4c(r0_6, r1_2, 2u, 6u);
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    r0_7 = r0 + 0x7fcu;  // (from the original)
    r1_3 = r13 + 4u;
    guest::cpu()->r[13] = r13;
    call_005e2e50(r0_7, r1_3, r2_1, r3_1);
    r1_4 = guest::cpu()->r[1];
    r2_2 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    call_005e2f94(r0_7, r1_4, r2_2, r3_2);
    r1_5 = guest::cpu()->r[1];
    r2_3 = guest::cpu()->r[2];
    r3_3 = guest::cpu()->r[3];
    r0_8 = r13 + 4u;
    guest::cpu()->r[13] = r13;
    r0_9 = call_00312cb0(r0_8, r1_5, r2_3, r3_3);
    r1_6 = guest::cpu()->r[1];
    r13 = r13 + 0x58u;  // (from the original)
    guest::cpu()->r[1] = r1_6;
    guest::cpu()->r[13] = r13;
    return r0_9;
}

}  // namespace d_00289ce8
GUEST_EXPORT(0x00289ce8, d_00289ce8::f_00289ce8);

// f_00289d90: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00289d90 {

inline guest::global<u32, 0x0095decc> global_0095decc;  // (from the original)
inline constexpr guest::Function<0x002f825c, u32(u32, u32, u32, u32)> call_002f825c;  // (from the original)
inline constexpr guest::Function<0x003083bc, u32(u32, u32, u32, u32)> call_003083bc;  // (from the original)
inline constexpr guest::Function<0x005e2e50, u32(u32, u32, u32, u32)> call_005e2e50;  // (from the original)
inline constexpr guest::Function<0x005e2f94, u32(u32, u32, u32, u32)> call_005e2f94;  // (from the original)
inline constexpr guest::Function<0x005ea8f8, u32(u32, u32, u32, u32)> call_005ea8f8;  // (from the original)
inline constexpr guest::Function<0x005ea964, u32(u32, u32, u32, u32)> call_005ea964;  // (from the original)
inline constexpr guest::Function<0x005f4bfc, u32(u32, u32, u32, u32)> call_005f4bfc;  // (from the original)

u32 f_00289d90(u32 r0, u32 r1_unused, u32 r2_unused, u32 r3) {
    u32 r1 = 0;
    u32 r2 = 0;
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r0_2 = 0;
    u32 r1_2 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r2_2 = 0;
    u32 r3_2 = 0;
    u32 r4_1 = 0;
    u32 r0_5 = 0;
    u32 r3_3 = 0;
    u32 res_1 = 0;
    u32 ea_1 = 0;
    u32 r3_4 = 0;
    u32 ea_2 = 0;
    u32 r0_6 = 0;
    u32 r1_3 = 0;
    u32 r0_7 = 0;
    u32 r1_4 = 0;
    u32 r0_8 = 0;
    u32 r1_5 = 0;
    u32 r1_6 = 0;
    u32 r2_3 = 0;
    u32 r3_5 = 0;
    u32 r1_7 = 0;
    u32 r0_9 = 0;
    u32 r0_10 = 0;
    u32 r1_8 = 0;
    r13 = r13 - 0x50u;  // (from the original)
    r5 = r0;
    r0_1 = r13 + 8u;
    r1_1 = r13 + 0x20u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_2 = call_003083bc(r0_1, r1_1, 0xfu, r3);  // (from the original)
    r1_2 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    r6 = 0x909af0u;  // (from the original)
    *gptr<u32>(r0_2) = u32(r6);
    r0_3 = r0_2 + 0xcu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_4 = call_005f4bfc(r0_3, r1_2, r2_1, r3_1);
    r2_2 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    r4_1 = r0_4 - 0xcu;  // (from the original)
    r0_5 = r0_4 + 0xcu;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_002f825c(r0_5, 0x1eu, r2_2, r3_2);  // (from the original)
    r1 = 0x8906ecu;  // (from the original)
    r0 = r4_1 + 0x18u;  // (from the original)
    *gptr<u16>(r4_1 + 0x18u) = u16(u32(*gptr<u16>(r1)));  // (from the original)
    r2 = 7u;
    do {
L_289ddc:;
        r3_3 = u32(*gptr<u16>(r1));
        res_1 = r2 - 1u;
        r2 = res_1;
        ea_1 = r0 + 2u;
        *gptr<u16>(ea_1) = u16(r3_3);
        r3_4 = u32(*gptr<u16>(r1));
        ea_2 = r0 + 4u;
        *gptr<u16>(ea_2) = u16(r3_4);
        r0 = ea_2;
        guest::preempt();
    } while (res_1 != 0);
    r0_6 = *global_0095decc;
    guest::cpu()->r[13] = r13;
    call_005ea8f8(r0_6, 0u, r2, r3_4);
    r1_3 = u32(*gptr<u8>(r5 + 0x670u));  // (from the original)
    *gptr<u32>(r13) = u32(0u);
    if (r1_3 == 1u) {
        goto L_289e6c;
    }
    r0_7 = *global_0095decc;
    r1_4 = r13 + 8u;
    guest::cpu()->r[13] = r13;
    call_005ea964(r0_7, r1_4, 0x8535f0u, 0x69u);  // (from the original)
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
L_289e2c:;
    r0_8 = r5 + 0x984u;  // (from the original)
    r1_5 = r13 + 8u;
    guest::cpu()->r[13] = r13;
    call_005e2e50(r0_8, r1_5, r2, r3);
    r1_6 = guest::cpu()->r[1];
    r2_3 = guest::cpu()->r[2];
    r3_5 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    call_005e2f94(r0_8, r1_6, r2_3, r3_5);
    r1_7 = guest::cpu()->r[1];
    *gptr<u32>(r13 + 8u) = u32(r6);
    r0_9 = r13 + 8u;
    r13 = r13 + 0x50u;  // (from the original)
    guest::cpu()->r[1] = r1_7;
    guest::cpu()->r[13] = r13;
    return r0_9;
L_289e6c:;
    r0_10 = *global_0095decc;
    r1_8 = r13 + 8u;
    guest::cpu()->r[13] = r13;
    call_005ea964(r0_10, r1_8, 0x8535f0u, 0x68u);  // (from the original)
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
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r1_1 = 0;
    u32 r0_3 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r0_4 = 0;
    u32 r1_2 = 0;
    u32 r1_3 = 0;
    u32 r2_2 = 0;
    u32 r3_2 = 0;
    u32 r2_3 = 0;
    u32 r3_3 = 0;
    u32 r1_4 = 0;
    u32 r0_5 = 0;
    u32 r5_1 = 0;
    u32 r0_6 = 0;
    u32 r0_7 = 0;
    u32 r0_8 = 0;
    u32 r0_9 = 0;
    u32 r1_5 = 0;
    r0_1 = arg0->word_628;
    r13 = r13 - 0x58u;  // (from the original)
    if (s32(r0_1) < s32(0x7dcu)) {  // (from the original)
        arg0->word_628 = u32(0x7dcu + 0x26u);  // (from the original)
        goto L_28a038;
    }
    r2 = 0x803u;  // (from the original)
    if (s32(r2) <= s32(r0_1)) {
        arg0->word_628 = u32(0x7dcu);  // (from the original)
    }
L_28a038:;
    r0_2 = r13 + 4u;
    guest::cpu()->r[13] = r13;
    call_00312bd0(r0_2, 0x7dcu, r2, r3);  // (from the original)
    *gptr<u32>(r13) = u32(4u);
    r1_1 = *gptr<u32>(r0 + 0x628u);  // (from the original)
    r0_3 = r13 + 4u;
    guest::cpu()->r[13] = r13;
    call_00312c4c(r0_3, r1_1, 4u, 6u);
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    r0_4 = r0 + 0x674u;  // (from the original)
    r1_2 = r13 + 4u;
    guest::cpu()->r[13] = r13;
    call_005e2e50(r0_4, r1_2, r2_1, r3_1);
    r1_3 = guest::cpu()->r[1];
    r2_2 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    call_005e2f94(r0_4, r1_3, r2_2, r3_2);
    r2_3 = guest::cpu()->r[2];
    r3_3 = guest::cpu()->r[3];
    r1_4 = 0x8532a7u;  // (from the original)
    r0_5 = *gptr<u32>(r0 + 0x62cu);  // (from the original)
    r5_1 = u32(s32(s8(*gptr<u8>(r0_5 + r1_4))));
    if (r0_5 == 2u) {
        r0_6 = *gptr<u32>(r0 + 0x628u);  // (from the original)
        guest::cpu()->r[13] = r13;
        r0_7 = call_00301da8(r0_6, r1_4, r2_3, r3_3);
        r1_4 = guest::cpu()->r[1];
        r2_3 = guest::cpu()->r[2];
        r3_3 = guest::cpu()->r[3];
        if (r0_7 != 0) {
            r5_1 = r5_1 + 1u;
        }
    }
    if (s32(*gptr<u32>(r0 + 0x630u)) > s32(r5_1)) {  // (from the original)
        *gptr<u32>(r0 + 0x630u) = u32(r5_1);  // (from the original)
        guest::cpu()->r[13] = r13;
        call_00289ce8(r0, r1_4, r2_3, r3_3);
        r1_4 = guest::cpu()->r[1];
        r2_3 = guest::cpu()->r[2];
        r3_3 = guest::cpu()->r[3];
    }
    r0_8 = r13 + 4u;
    guest::cpu()->r[13] = r13;
    r0_9 = call_00312cb0(r0_8, r1_4, r2_3, r3_3);
    r1_5 = guest::cpu()->r[1];
    r13 = r13 + 0x58u;  // (from the original)
    guest::cpu()->r[1] = r1_5;
    guest::cpu()->r[13] = r13;
    return r0_9;
}

}  // namespace d_0028a008
GUEST_EXPORT(0x0028a008, d_0028a008::f_0028a008);

// f_0028a0d4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0028a0d4 {

inline guest::global<u32, 0x0095decc> global_0095decc;  // (from the original)
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
    u32 r1 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r9 = guest::cpu()->r[9];
    u32 r10 = guest::cpu()->r[10];
    u32 r11 = guest::cpu()->r[11];
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r3_1 = 0;
    u32 r0_3 = 0;
    u32 r2_1 = 0;
    u32 r3_2 = 0;
    u32 r0_4 = 0;
    u32 r0_5 = 0;
    u32 r3_3 = 0;
    u32 r0_6 = 0;
    u32 r2_2 = 0;
    u32 r3_4 = 0;
    u32 r0_7 = 0;
    u32 r0_8 = 0;
    u32 r3_5 = 0;
    u32 r0_9 = 0;
    u32 r2_3 = 0;
    u32 r3_6 = 0;
    u32 r0_10 = 0;
    u32 r0_11 = 0;
    u32 r3_7 = 0;
    u32 r0_12 = 0;
    u32 r2_4 = 0;
    u32 r3_8 = 0;
    u32 r0_13 = 0;
    u32 r0_14 = 0;
    u32 r3_9 = 0;
    u32 r0_15 = 0;
    u32 r2_5 = 0;
    u32 r3_10 = 0;
    u32 r0_16 = 0;
    u32 r0_17 = 0;
    u32 r3_11 = 0;
    u32 r0_18 = 0;
    u32 r2_6 = 0;
    u32 r3_12 = 0;
    u32 r0_19 = 0;
    u32 r0_20 = 0;
    u32 r3_13 = 0;
    u32 r0_21 = 0;
    u32 r2_7 = 0;
    u32 r3_14 = 0;
    u32 r0_22 = 0;
    u32 r0_23 = 0;
    u32 r3_15 = 0;
    u32 r0_24 = 0;
    u32 r2_8 = 0;
    u32 r3_16 = 0;
    u32 r0_25 = 0;
    u32 r0_26 = 0;
    u32 r3_17 = 0;
    u32 r0_27 = 0;
    u32 r3_18 = 0;
    u32 r0_28 = 0;
    u32 r1_1 = 0;
    u32 r0_29 = 0;
    u32 r1_2 = 0;
    u32 r2_9 = 0;
    u32 r3_19 = 0;
    u32 r0_30 = 0;
    u32 r0_31 = 0;
    u32 r0_32 = 0;
    u32 r3_20 = 0;
    u32 res_1 = 0;
    u32 ea_1 = 0;
    u32 r3_21 = 0;
    u32 ea_2 = 0;
    u32 r0_33 = 0;
    u32 r0_34 = 0;
    u32 r1_3 = 0;
    u32 r2_10 = 0;
    u32 r3_22 = 0;
    u32 r0_35 = 0;
    u32 r2_11 = 0;
    u32 r3_23 = 0;
    u32 r1_4 = 0;
    u32 r0_36 = 0;
    u32 r1_5 = 0;
    u32 r2_12 = 0;
    u32 r3_24 = 0;
    u32 r0_37 = 0;
    u32 r2_13 = 0;
    u32 r3_25 = 0;
    u32 r0_38 = 0;
    u32 r0_39 = 0;
    u32 r1_6 = 0;
    u32 r2_14 = 0;
    u32 r3_26 = 0;
    u32 r0_40 = 0;
    u32 r2_15 = 0;
    u32 r3_27 = 0;
    u32 r1_7 = 0;
    u32 r1_8 = 0;
    u32 r2_16 = 0;
    u32 r3_28 = 0;
    u32 r2_17 = 0;
    u32 r3_29 = 0;
    u32 r0_41 = 0;
    u32 r0_42 = 0;
    u32 r1_9 = 0;
    u32 r2_18 = 0;
    u32 r3_30 = 0;
    u32 r0_43 = 0;
    u32 r2_19 = 0;
    u32 r3_31 = 0;
    u32 r1_10 = 0;
    u32 r1_11 = 0;
    u32 r2_20 = 0;
    u32 r3_32 = 0;
    u32 r2_21 = 0;
    u32 r3_33 = 0;
    u32 r0_44 = 0;
    u32 r0_45 = 0;
    u32 r1_12 = 0;
    u32 r2_22 = 0;
    u32 r3_34 = 0;
    u32 r0_46 = 0;
    u32 r2_23 = 0;
    u32 r3_35 = 0;
    u32 r1_13 = 0;
    u32 r1_14 = 0;
    u32 r2_24 = 0;
    u32 r3_36 = 0;
    u32 r2_25 = 0;
    u32 r3_37 = 0;
    u32 r1_15 = 0;
    u32 r1_16 = 0;
    u32 r2_26 = 0;
    u32 r3_38 = 0;
    u32 r2_27 = 0;
    u32 r3_39 = 0;
    u32 r0_47 = 0;
    u32 r0_48 = 0;
    u32 r3_40 = 0;
    u32 r0_49 = 0;
    u32 r2_28 = 0;
    u32 r3_41 = 0;
    u32 r0_50 = 0;
    u32 r0_51 = 0;
    u32 r3_42 = 0;
    u32 r0_52 = 0;
    u32 r2_29 = 0;
    u32 r3_43 = 0;
    u32 r0_53 = 0;
    u32 r0_54 = 0;
    u32 r3_44 = 0;
    u32 r0_55 = 0;
    u32 r2_30 = 0;
    u32 r3_45 = 0;
    u32 r0_56 = 0;
    u32 r0_57 = 0;
    u32 r3_46 = 0;
    u32 r0_58 = 0;
    u32 r2_31 = 0;
    u32 r3_47 = 0;
    u32 r0_59 = 0;
    u32 r0_60 = 0;
    u32 r3_48 = 0;
    u32 r0_61 = 0;
    u32 r2_32 = 0;
    u32 r3_49 = 0;
    u32 r0_62 = 0;
    u32 r0_63 = 0;
    u32 r3_50 = 0;
    u32 r0_64 = 0;
    u32 r2_33 = 0;
    u32 r3_51 = 0;
    u32 r0_65 = 0;
    u32 r0_66 = 0;
    u32 r1_17 = 0;
    u32 r2_34 = 0;
    u32 r3_52 = 0;
    u32 r0_67 = 0;
    u32 r2_35 = 0;
    u32 r3_53 = 0;
    u32 r1_18 = 0;
    u32 r1_19 = 0;
    u32 r2_36 = 0;
    u32 r3_54 = 0;
    u32 r2_37 = 0;
    u32 r3_55 = 0;
    u32 r0_68 = 0;
    u32 r0_69 = 0;
    u32 r1_20 = 0;
    u32 r2_38 = 0;
    u32 r3_56 = 0;
    u32 r0_70 = 0;
    u32 r2_39 = 0;
    u32 r3_57 = 0;
    u32 r1_21 = 0;
    u32 r0_71 = 0;
    u32 r1_22 = 0;
    u32 r2_40 = 0;
    u32 r3_58 = 0;
    u32 r0_72 = 0;
    u32 r3_59 = 0;
    u32 r0_73 = 0;
    u32 r2_41 = 0;
    u32 r3_60 = 0;
    u32 r1_23 = 0;
    u32 r1_24 = 0;
    u32 r2_42 = 0;
    u32 r3_61 = 0;
    u32 r1_25 = 0;
    u32 r0_74 = 0;
    r4 = r0;
    r13 = r13 - 0x60u;  // (from the original)
    r0_1 = r0 + 0x294u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_2 = call_00568a80(r0_1, 0x28a47cu, r2, r3);  // (from the original)
    r3_1 = guest::cpu()->r[3];
    r0_3 = r4 + 0x674u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_005e2c98(r0_3, r0_2, 0u, r3_1);
    r2_1 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    r0_4 = r4 + 0x294u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_5 = call_00568a80(r0_4, 0x28a484u, r2_1, r3_2);  // (from the original)
    r3_3 = guest::cpu()->r[3];
    r0_6 = r4 + 0x738u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_005e2c98(r0_6, r0_5, 0u, r3_3);
    r2_2 = guest::cpu()->r[2];
    r3_4 = guest::cpu()->r[3];
    r0_7 = r4 + 0x294u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_8 = call_00568a80(r0_7, 0x28a490u, r2_2, r3_4);  // (from the original)
    r3_5 = guest::cpu()->r[3];
    r0_9 = r4 + 0x7fcu;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_005e2c98(r0_9, r0_8, 0u, r3_5);
    r2_3 = guest::cpu()->r[2];
    r3_6 = guest::cpu()->r[3];
    r0_10 = r4 + 0x294u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_11 = call_00568a80(r0_10, 0x28a498u, r2_3, r3_6);  // (from the original)
    r3_7 = guest::cpu()->r[3];
    r0_12 = r4 + 0x8c0u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_005e2c98(r0_12, r0_11, 0u, r3_7);
    r2_4 = guest::cpu()->r[2];
    r3_8 = guest::cpu()->r[3];
    r0_13 = r4 + 0x294u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_14 = call_00568a80(r0_13, 0x28a4a4u, r2_4, r3_8);  // (from the original)
    r3_9 = guest::cpu()->r[3];
    r0_15 = r4 + 0xbd0u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_005e2c98(r0_15, r0_14, 0u, r3_9);
    r2_5 = guest::cpu()->r[2];
    r3_10 = guest::cpu()->r[3];
    r0_16 = r4 + 0x294u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_17 = call_00568a80(r0_16, 0x28a4acu, r2_5, r3_10);  // (from the original)
    r3_11 = guest::cpu()->r[3];
    r0_18 = r4 + 0xc94u;  // (from the original)
    r6 = r0_18;
    guest::cpu()->r[13] = r13;
    call_005e2c98(r0_18, r0_17, 0u, r3_11);
    r2_6 = guest::cpu()->r[2];
    r3_12 = guest::cpu()->r[3];
    r0_19 = r4 + 0x294u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_20 = call_00568a80(r0_19, 0x28a4b8u, r2_6, r3_12);  // (from the original)
    r3_13 = guest::cpu()->r[3];
    r0_21 = r4 + 0xd58u;  // (from the original)
    r10 = r0_21;
    guest::cpu()->r[13] = r13;
    call_005e2c98(r0_21, r0_20, 0u, r3_13);
    r2_7 = guest::cpu()->r[2];
    r3_14 = guest::cpu()->r[3];
    r0_22 = r4 + 0x294u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_23 = call_00568a80(r0_22, 0x28a4c0u, r2_7, r3_14);  // (from the original)
    r3_15 = guest::cpu()->r[3];
    r0_24 = r4 + 0xfa4u;  // (from the original)
    r11 = r0_24;
    guest::cpu()->r[13] = r13;
    call_005e2c98(r0_24, r0_23, 0u, r3_15);
    r2_8 = guest::cpu()->r[2];
    r3_16 = guest::cpu()->r[3];
    r0_25 = r4 + 0x294u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_26 = call_00568a80(r0_25, 0x28a4ccu, r2_8, r3_16);  // (from the original)
    r3_17 = guest::cpu()->r[3];
    r0_27 = r4 + 0x1068u;  // (from the original)
    r7 = r0_27;
    guest::cpu()->r[13] = r13;
    call_005e2c98(r0_27, r0_26, 0u, r3_17);
    r3_18 = guest::cpu()->r[3];
    r0_28 = r13 + 4u;
    r1_1 = r13 + 0x1cu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_29 = call_003083bc(r0_28, r1_1, 0xau, r3_18);  // (from the original)
    r1_2 = guest::cpu()->r[1];
    r2_9 = guest::cpu()->r[2];
    r3_19 = guest::cpu()->r[3];
    r5 = 0x9098f8u;  // (from the original)
    *gptr<u32>(r0_29) = u32(r5);
    r0_30 = r0_29 + 0xcu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_31 = call_005f4bfc(r0_30, r1_2, r2_9, r3_19);
    r0_32 = r0_31 - 0xcu;  // (from the original)
    r9 = 0u;
    *gptr<u32>(r0_32 + 0x18u) = u32(r9);  // (from the original)
    *gptr<u32>(r0_32 + 0x1cu) = u32(r9);  // (from the original)
    *gptr<u32>(r0_32 + 0x20u) = u32(r9);  // (from the original)
    r2 = 0x8906ecu;  // (from the original)
    *gptr<u32>(r0_32 + 0x24u) = u32(r9);  // (from the original)
    *gptr<u32>(r0_32 + 0x28u) = u32(r9);  // (from the original)
    r1 = 5u;
    r0 = r0_32 + 0x16u;  // (from the original)
    do {
L_28a24c:;
        r3_20 = u32(*gptr<u16>(r2));
        res_1 = r1 - 1u;
        r1 = res_1;
        ea_1 = r0 + 2u;
        *gptr<u16>(ea_1) = u16(r3_20);
        r3_21 = u32(*gptr<u16>(r2));
        ea_2 = r0 + 4u;
        *gptr<u16>(ea_2) = u16(r3_21);
        r0 = ea_2;
        guest::preempt();
    } while (res_1 != 0);
    r0_33 = *global_0095decc;
    guest::cpu()->r[13] = r13;
    call_005ea8f8(r0_33, 0u, r2, r3_21);
    *gptr<u32>(r13) = u32(r9);
    r0_34 = *global_0095decc;
    r1_3 = r13 + 4u;
    guest::cpu()->r[13] = r13;
    call_005ea964(r0_34, r1_3, 0x28a4e4u, 0x63u);  // (from the original)
    r2_10 = guest::cpu()->r[2];
    r3_22 = guest::cpu()->r[3];
    r0_35 = *global_0095decc;
    guest::cpu()->r[13] = r13;
    call_005ea8dc(r0_35, 0u, r2_10, r3_22);
    r2_11 = guest::cpu()->r[2];
    r3_23 = guest::cpu()->r[3];
    r1_4 = r13 + 4u;
    r0_36 = r4 + 0xbd0u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_005e2e50(r0_36, r1_4, r2_11, r3_23);
    r1_5 = guest::cpu()->r[1];
    r2_12 = guest::cpu()->r[2];
    r3_24 = guest::cpu()->r[3];
    r0_37 = r4 + 0xbd0u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_005e2f94(r0_37, r1_5, r2_12, r3_24);
    r2_13 = guest::cpu()->r[2];
    r3_25 = guest::cpu()->r[3];
    r0_38 = *global_0095decc;
    guest::cpu()->r[13] = r13;
    call_005ea8f8(r0_38, 0u, r2_13, r3_25);
    *gptr<u32>(r13) = u32(r9);
    r0_39 = *global_0095decc;
    r1_6 = r13 + 4u;
    guest::cpu()->r[13] = r13;
    call_005ea964(r0_39, r1_6, 0x28a4e4u, 0x64u);  // (from the original)
    r2_14 = guest::cpu()->r[2];
    r3_26 = guest::cpu()->r[3];
    r0_40 = *global_0095decc;
    guest::cpu()->r[13] = r13;
    call_005ea8dc(r0_40, 0u, r2_14, r3_26);
    r2_15 = guest::cpu()->r[2];
    r3_27 = guest::cpu()->r[3];
    r1_7 = r13 + 4u;
    guest::cpu()->r[13] = r13;
    call_005e2e50(r6, r1_7, r2_15, r3_27);
    r1_8 = guest::cpu()->r[1];
    r2_16 = guest::cpu()->r[2];
    r3_28 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    call_005e2f94(r6, r1_8, r2_16, r3_28);
    r2_17 = guest::cpu()->r[2];
    r3_29 = guest::cpu()->r[3];
    r0_41 = *global_0095decc;
    guest::cpu()->r[13] = r13;
    call_005ea8f8(r0_41, 0u, r2_17, r3_29);
    *gptr<u32>(r13) = u32(r9);
    r0_42 = *global_0095decc;
    r1_9 = r13 + 4u;
    guest::cpu()->r[13] = r13;
    call_005ea964(r0_42, r1_9, 0x28a4e4u, 0x65u);  // (from the original)
    r2_18 = guest::cpu()->r[2];
    r3_30 = guest::cpu()->r[3];
    r0_43 = *global_0095decc;
    guest::cpu()->r[13] = r13;
    call_005ea8dc(r0_43, 0u, r2_18, r3_30);
    r2_19 = guest::cpu()->r[2];
    r3_31 = guest::cpu()->r[3];
    r1_10 = r13 + 4u;
    guest::cpu()->r[13] = r13;
    call_005e2e50(r10, r1_10, r2_19, r3_31);
    r1_11 = guest::cpu()->r[1];
    r2_20 = guest::cpu()->r[2];
    r3_32 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    call_005e2f94(r10, r1_11, r2_20, r3_32);
    r2_21 = guest::cpu()->r[2];
    r3_33 = guest::cpu()->r[3];
    r0_44 = *global_0095decc;
    guest::cpu()->r[13] = r13;
    call_005ea8f8(r0_44, 0u, r2_21, r3_33);
    *gptr<u32>(r13) = u32(r9);
    r0_45 = *global_0095decc;
    r1_12 = r13 + 4u;
    guest::cpu()->r[13] = r13;
    call_005ea964(r0_45, r1_12, 0x28a4e4u, 0xe3u);  // (from the original)
    r2_22 = guest::cpu()->r[2];
    r3_34 = guest::cpu()->r[3];
    r0_46 = *global_0095decc;
    guest::cpu()->r[13] = r13;
    call_005ea8dc(r0_46, 0u, r2_22, r3_34);
    r2_23 = guest::cpu()->r[2];
    r3_35 = guest::cpu()->r[3];
    r1_13 = r13 + 4u;
    guest::cpu()->r[13] = r13;
    call_005e2e50(r11, r1_13, r2_23, r3_35);
    r1_14 = guest::cpu()->r[1];
    r2_24 = guest::cpu()->r[2];
    r3_36 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    call_005e2f94(r11, r1_14, r2_24, r3_36);
    r2_25 = guest::cpu()->r[2];
    r3_37 = guest::cpu()->r[3];
    r1_15 = r13 + 4u;
    guest::cpu()->r[13] = r13;
    call_005e2e50(r7, r1_15, r2_25, r3_37);
    r1_16 = guest::cpu()->r[1];
    r2_26 = guest::cpu()->r[2];
    r3_38 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    call_005e2f94(r7, r1_16, r2_26, r3_38);
    r2_27 = guest::cpu()->r[2];
    r3_39 = guest::cpu()->r[3];
    r0_47 = r4 + 0x3e0u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_48 = call_00568a80(r0_47, 0x28a4f0u, r2_27, r3_39);  // (from the original)
    r3_40 = guest::cpu()->r[3];
    r0_49 = r4 + 0x984u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_005e2c98(r0_49, r0_48, 0u, r3_40);
    r2_28 = guest::cpu()->r[2];
    r3_41 = guest::cpu()->r[3];
    r0_50 = r4 + 0x3e0u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_51 = call_00568a80(r0_50, 0x28a4fcu, r2_28, r3_41);  // (from the original)
    r3_42 = guest::cpu()->r[3];
    r0_52 = r4 + 0xa48u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_005e2c98(r0_52, r0_51, 0u, r3_42);
    r2_29 = guest::cpu()->r[2];
    r3_43 = guest::cpu()->r[3];
    r0_53 = r4 + 0x3e0u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_54 = call_00568a80(r0_53, 0x28a508u, r2_29, r3_43);  // (from the original)
    r3_44 = guest::cpu()->r[3];
    r0_55 = r4 + 0xb0cu;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_005e2c98(r0_55, r0_54, 0u, r3_44);
    r2_30 = guest::cpu()->r[2];
    r3_45 = guest::cpu()->r[3];
    r0_56 = r4 + 0x3e0u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_57 = call_00568a80(r0_56, 0x28a514u, r2_30, r3_45);  // (from the original)
    r3_46 = guest::cpu()->r[3];
    r0_58 = r4 + 0xe1cu;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_005e2c98(r0_58, r0_57, 0u, r3_46);
    r2_31 = guest::cpu()->r[2];
    r3_47 = guest::cpu()->r[3];
    r0_59 = r4 + 0x3e0u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_60 = call_00568a80(r0_59, 0x28a520u, r2_31, r3_47);  // (from the original)
    r3_48 = guest::cpu()->r[3];
    r0_61 = r4 + 0xee0u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_005e2c98(r0_61, r0_60, 0u, r3_48);
    r2_32 = guest::cpu()->r[2];
    r3_49 = guest::cpu()->r[3];
    r0_62 = r4 + 0x3e0u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_63 = call_00568a80(r0_62, 0x28a4c0u, r2_32, r3_49);  // (from the original)
    r3_50 = guest::cpu()->r[3];
    r0_64 = r4 + 0x112cu;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_005e2c98(r0_64, r0_63, 0u, r3_50);
    r2_33 = guest::cpu()->r[2];
    r3_51 = guest::cpu()->r[3];
    r0_65 = *global_0095decc;
    guest::cpu()->r[13] = r13;
    call_005ea8f8(r0_65, 0u, r2_33, r3_51);
    goto L_28a52c;
L_28a52c:;
    *gptr<u32>(r13) = u32(r9);
    r0_66 = *global_0095decc;
    r1_17 = r13 + 4u;
    guest::cpu()->r[13] = r13;
    call_005ea964(r0_66, r1_17, 0x28a4e4u, 0x66u);  // (from the original)
    r2_34 = guest::cpu()->r[2];
    r3_52 = guest::cpu()->r[3];
    r0_67 = *global_0095decc;
    guest::cpu()->r[13] = r13;
    call_005ea8dc(r0_67, 0u, r2_34, r3_52);
    r2_35 = guest::cpu()->r[2];
    r3_53 = guest::cpu()->r[3];
    r1_18 = r13 + 4u;
    guest::cpu()->r[13] = r13;
    call_005e2e50(r0_58, r1_18, r2_35, r3_53);
    r1_19 = guest::cpu()->r[1];
    r2_36 = guest::cpu()->r[2];
    r3_54 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    call_005e2f94(r0_58, r1_19, r2_36, r3_54);
    r2_37 = guest::cpu()->r[2];
    r3_55 = guest::cpu()->r[3];
    r0_68 = *global_0095decc;
    guest::cpu()->r[13] = r13;
    call_005ea8f8(r0_68, 0u, r2_37, r3_55);
    *gptr<u32>(r13) = u32(r9);
    r0_69 = *global_0095decc;
    r1_20 = r13 + 4u;
    guest::cpu()->r[13] = r13;
    call_005ea964(r0_69, r1_20, 0x28a4e4u, 0x67u);  // (from the original)
    r2_38 = guest::cpu()->r[2];
    r3_56 = guest::cpu()->r[3];
    r0_70 = *global_0095decc;
    guest::cpu()->r[13] = r13;
    call_005ea8dc(r0_70, 0u, r2_38, r3_56);
    r2_39 = guest::cpu()->r[2];
    r3_57 = guest::cpu()->r[3];
    r1_21 = r13 + 4u;
    r0_71 = r4 + 0xee0u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_005e2e50(r0_71, r1_21, r2_39, r3_57);
    r1_22 = guest::cpu()->r[1];
    r2_40 = guest::cpu()->r[2];
    r3_58 = guest::cpu()->r[3];
    r0_72 = r4 + 0xee0u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_005e2f94(r0_72, r1_22, r2_40, r3_58);
    r3_59 = guest::cpu()->r[3];
    r0_73 = r13 + 0x30u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_005fdf68(r0_73, 0x28a5fcu, 0xau, r3_59);  // (from the original)
    r2_41 = guest::cpu()->r[2];
    r3_60 = guest::cpu()->r[3];
    r1_23 = r13 + 0x30u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_005e2e50(r0_64, r1_23, r2_41, r3_60);
    r1_24 = guest::cpu()->r[1];
    r2_42 = guest::cpu()->r[2];
    r3_61 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    call_005e2f94(r0_64, r1_24, r2_42, r3_61);
    r1_25 = guest::cpu()->r[1];
    *gptr<u32>(r13 + 4u) = u32(r5);
    r0_74 = r13 + 4u;
    r13 = r13 + 0x60u;  // (from the original)
    guest::cpu()->r[1] = r1_25;
    guest::cpu()->r[13] = r13;
    return r0_74;
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
    u32 r0 = arg0.addr();
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 res_1 = 0;
    u32 nf_1 = 0;
    u32 zf_1 = 0;
    u32 vf_1 = 0;
    u32 r0_2 = 0;
    u32 r1_1 = 0;
    u32 r0_3 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r0_4 = 0;
    u32 r1_2 = 0;
    u32 r1_3 = 0;
    u32 r2_2 = 0;
    u32 r3_2 = 0;
    u32 r2_3 = 0;
    u32 r3_3 = 0;
    u32 r1_4 = 0;
    u32 r0_5 = 0;
    u32 r5_1 = 0;
    u32 r0_6 = 0;
    u32 r0_7 = 0;
    u32 r0_8 = 0;
    u32 r0_9 = 0;
    u32 r1_5 = 0;
    r0_1 = arg0->word_62c;
    r13 = r13 - 0x58u;  // (from the original)
    if (s32(r0_1) < s32(1u)) {
        r0_1 = 0xcu;  // (from the original)
        goto L_28a628;
    }
    res_1 = r0_1 - 0xcu;  // (from the original)
    nf_1 = res_1 >> 0x1f;  // (from the original)
    zf_1 = res_1 == 0;
    vf_1 = ((r0_1 ^ 0xcu) & (r0_1 ^ res_1)) >> 0x1f;  // (from the original)
    if (!zf_1 && nf_1 == vf_1) {
        r0_1 = 1u;
    }
    if (zf_1 || nf_1 != vf_1) {
        goto L_28a62c;
    }
L_28a628:;
    *gptr<u32>(r0 + 0x62cu) = u32(r0_1);  // (from the original)
L_28a62c:;
    r0_2 = r13 + 4u;
    guest::cpu()->r[13] = r13;
    call_00312bd0(r0_2, r1, r2, r3);
    *gptr<u32>(r13) = u32(4u);
    r1_1 = *gptr<u32>(r0 + 0x62cu);  // (from the original)
    r0_3 = r13 + 4u;
    guest::cpu()->r[13] = r13;
    call_00312c4c(r0_3, r1_1, 2u, 6u);
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    r0_4 = r0 + 0x738u;  // (from the original)
    r1_2 = r13 + 4u;
    guest::cpu()->r[13] = r13;
    call_005e2e50(r0_4, r1_2, r2_1, r3_1);
    r1_3 = guest::cpu()->r[1];
    r2_2 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    call_005e2f94(r0_4, r1_3, r2_2, r3_2);
    r2_3 = guest::cpu()->r[2];
    r3_3 = guest::cpu()->r[3];
    r1_4 = 0x8532a7u;  // (from the original)
    r0_5 = *gptr<u32>(r0 + 0x62cu);  // (from the original)
    r5_1 = u32(s32(s8(*gptr<u8>(r0_5 + r1_4))));
    if (r0_5 == 2u) {
        r0_6 = *gptr<u32>(r0 + 0x628u);  // (from the original)
        guest::cpu()->r[13] = r13;
        r0_7 = call_00301da8(r0_6, r1_4, r2_3, r3_3);
        r1_4 = guest::cpu()->r[1];
        r2_3 = guest::cpu()->r[2];
        r3_3 = guest::cpu()->r[3];
        if (r0_7 != 0) {
            r5_1 = r5_1 + 1u;
        }
    }
    if (s32(*gptr<u32>(r0 + 0x630u)) > s32(r5_1)) {  // (from the original)
        *gptr<u32>(r0 + 0x630u) = u32(r5_1);  // (from the original)
        guest::cpu()->r[13] = r13;
        call_00289ce8(r0, r1_4, r2_3, r3_3);
        r1_4 = guest::cpu()->r[1];
        r2_3 = guest::cpu()->r[2];
        r3_3 = guest::cpu()->r[3];
    }
    r0_8 = r13 + 4u;
    guest::cpu()->r[13] = r13;
    r0_9 = call_00312cb0(r0_8, r1_4, r2_3, r3_3);
    r1_5 = guest::cpu()->r[1];
    r13 = r13 + 0x58u;  // (from the original)
    guest::cpu()->r[1] = r1_5;
    guest::cpu()->r[13] = r13;
    return r0_9;
}

}  // namespace d_0028a600
GUEST_EXPORT(0x0028a600, d_0028a600::f_0028a600);

// f_0028ab90: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0028ab90 {

inline constexpr guest::Function<0x002fb378, u32(u32, u32, u32, u32)> call_002fb378;  // (from the original)
inline constexpr guest::Function<0x0030a488, u32(u32, u32, u32, u32)> call_0030a488;  // (from the original)

u32 f_0028ab90(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r4_1 = 0;
    u32 ea_1 = 0;
    u32 ea_2 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 res_1 = 0;
    u32 zf_1 = 0;
    u32 r0_5 = 0;
    u32 res_2 = 0;
    u32 zf_2 = 0;
    u32 r0_6 = 0;
    u32 res_3 = 0;
    u32 zf_3 = 0;
    r13 = r13 - 0x20u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_1 = call_002fb378(r0, r1, r2, r3);
    r1_1 = *gptr<u32>(r0_1);
    r2_1 = *gptr<u32>(r0_1 + 4);
    r4_1 = r0 + 0x600u;  // (from the original)
    ea_1 = r13 + 0xcu;  // (from the original)
    *gptr<u32>(ea_1) = u32(*gptr<u32>(r0_1 + 8u));
    ea_2 = r13 + 4u;
    *gptr<u32>(ea_2) = u32(r1_1);
    *gptr<u32>(ea_2 + 4) = u32(r2_1);
    r0_2 = *gptr<u32>(r0 + 0x63cu);  // (from the original)
    if (r0_2 != 0x2fu) {  // (from the original)
        if (r0_2 != 0x30u) {  // (from the original)
            r13 = r13 + 0x20u;  // (from the original)
            guest::cpu()->r[1] = r1_1;
            guest::cpu()->r[13] = r13;
            return 1u;
        }
        *gptr<u32>(r13) = u32(0u);
        r0_3 = r13 + 4u;
        guest::cpu()->r[13] = r13;
        call_0030a488(r0_3, 1u, 0u, 0u);
        r0_4 = *gptr<u32>(r0 + 0x61cu);  // (from the original)
        r1_1 = *gptr<u32>(r13 + 4u);
        res_1 = r0_4 - r1_1;
        zf_1 = res_1 == 0;
        if (res_1 >> 0x1f != ((r0_4 ^ r1_1) & (r0_4 ^ res_1)) >> 0x1f) {  // (from the original)
            r13 = r13 + 0x20u;  // (from the original)
            guest::cpu()->r[1] = r1_1;
            guest::cpu()->r[13] = r13;
            return 0u;
        }
        if (!zf_1) {
            r13 = r13 + 0x20u;  // (from the original)
            guest::cpu()->r[1] = r1_1;
            guest::cpu()->r[13] = r13;
            return 1u;
        }
        r0_5 = u32(s32(s8(*gptr<u8>(r4_1 + 0x20u))));  // (from the original)
        r1_1 = u32(s32(s8(*gptr<u8>(r13 + 8u))));
        res_2 = r0_5 - r1_1;
        zf_2 = res_2 == 0;
        if (res_2 >> 0x1f != ((r0_5 ^ r1_1) & (r0_5 ^ res_2)) >> 0x1f) {  // (from the original)
            r13 = r13 + 0x20u;  // (from the original)
            guest::cpu()->r[1] = r1_1;
            guest::cpu()->r[13] = r13;
            return 0u;
        }
        if (!zf_2) {
            r13 = r13 + 0x20u;  // (from the original)
            guest::cpu()->r[1] = r1_1;
            guest::cpu()->r[13] = r13;
            return 1u;
        }
        r1_1 = u32(s32(s8(*gptr<u8>(r13 + 9u))));
        if (s32(u32(s32(s8(*gptr<u8>(r4_1 + 0x21u))))) >= s32(r1_1)) {  // (from the original)
            r13 = r13 + 0x20u;  // (from the original)
            guest::cpu()->r[1] = r1_1;
            guest::cpu()->r[13] = r13;
            return 1u;
        }
        r13 = r13 + 0x20u;  // (from the original)
        guest::cpu()->r[1] = r1_1;
        guest::cpu()->r[13] = r13;
        return 0u;
    }
    r0_6 = u32(s32(s8(*gptr<u8>(r4_1 + 0x23u))));  // (from the original)
    r1_1 = u32(s32(s8(*gptr<u8>(r13 + 0xbu))));  // (from the original)
    res_3 = r0_6 - r1_1;
    zf_3 = res_3 == 0;
    if (res_3 >> 0x1f != ((r0_6 ^ r1_1) & (r0_6 ^ res_3)) >> 0x1f) {  // (from the original)
        r13 = r13 + 0x20u;  // (from the original)
        guest::cpu()->r[1] = r1_1;
        guest::cpu()->r[13] = r13;
        return 0u;
    }
    if (!zf_3) {
        r13 = r13 + 0x20u;  // (from the original)
        guest::cpu()->r[1] = r1_1;
        guest::cpu()->r[13] = r13;
        return 1u;
    }
    r1_1 = u32(s32(s8(*gptr<u8>(r13 + 0xcu))));  // (from the original)
    if (s32(u32(s32(s8(*gptr<u8>(r4_1 + 0x24u))))) >= s32(r1_1)) {  // (from the original)
        r13 = r13 + 0x20u;  // (from the original)
        guest::cpu()->r[1] = r1_1;
        guest::cpu()->r[13] = r13;
        return 1u;
    }
    r13 = r13 + 0x20u;  // (from the original)
    guest::cpu()->r[1] = r1_1;
    guest::cpu()->r[13] = r13;
    return 0u;
}

}  // namespace d_0028ab90
GUEST_EXPORT(0x0028ab90, d_0028ab90::f_0028ab90);

// f_0028ac60: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0028ac60 {

inline constexpr guest::Function<0x0028aae4, u32(u32, u32, u32, u32)> call_0028aae4;  // (from the original)
inline constexpr guest::Function<0x0056878c, u32(u32, u32, u32, u32)> call_0056878c;  // (from the original)
inline constexpr guest::Function<0x005d46dc, u32(u32, u32, u32, u32)> call_005d46dc;  // (from the original)

u32 f_0028ac60(u32 r0, float S0, float S1, float S2, float S3, float S4, float S5, float S6, float S7) {
    u32 r2 = 0;
    u32 r3 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r13 = guest::cpu()->r[13];
    u32 ea_1 = 0;
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r6_1 = 0;
    u32 r7_1 = 0;
    u32 r8_1 = 0;
    u32 r12_1 = 0;
    u32 r0_2 = 0;
    u32 r1_2 = 0;
    float S0_1 = 0;
    float S1_1 = 0;
    float S2_1 = 0;
    float S3_1 = 0;
    float S4_1 = 0;
    float S5_1 = 0;
    float S6_1 = 0;
    float S7_1 = 0;
    u32 r0_3 = 0;
    u32 r1_3 = 0;
    u32 r0_4 = 0;
    u32 r4_1 = 0;
    u32 r0_5 = 0;
    u32 r0_6 = 0;
    u32 r1_4 = 0;
    u32 r0_7 = 0;
    u32 r2_2 = 0;
    u32 r3_2 = 0;
    float S0_2 = 0;
    float S1_2 = 0;
    float S2_2 = 0;
    float S3_2 = 0;
    float S4_2 = 0;
    float S5_2 = 0;
    float S6_2 = 0;
    float S7_2 = 0;
    u32 r1_5 = 0;
    u32 r0_8 = 0;
    u32 r0_9 = 0;
    u32 r3_3 = 0;
    float S0_3 = 0;
    float S1_3 = 0;
    float S2_3 = 0;
    float S3_3 = 0;
    float S4_3 = 0;
    float S5_3 = 0;
    float S6_3 = 0;
    float S7_3 = 0;
    u32 r4_2 = 0;
    u32 r0_10 = 0;
    u32 r0_11 = 0;
    u32 r1_6 = 0;
    u32 r0_12 = 0;
    u32 r2_3 = 0;
    u32 r3_4 = 0;
    float S0_4 = 0;
    float S1_4 = 0;
    float S2_4 = 0;
    float S3_4 = 0;
    float S4_4 = 0;
    float S5_4 = 0;
    float S6_4 = 0;
    float S7_4 = 0;
    u32 r1_7 = 0;
    u32 r0_13 = 0;
    u32 r0_14 = 0;
    u32 r3_5 = 0;
    float S0_5 = 0;
    float S1_5 = 0;
    float S2_5 = 0;
    float S3_5 = 0;
    float S4_5 = 0;
    float S5_5 = 0;
    float S6_5 = 0;
    float S7_5 = 0;
    u32 r0_15 = 0;
    u32 r1_8 = 0;
    r5 = r0;
    r13 = r13 - 0x58u;  // (from the original)
    ea_1 = 0x853228u + 0x1bcu;  // (from the original)
    r0_1 = *gptr<u32>(ea_1);
    r1_1 = *gptr<u32>(ea_1 + 4);
    r2_1 = *gptr<u32>(ea_1 + 8);
    r3_1 = *gptr<u32>(ea_1 + 0xc);  // (from the original)
    r6_1 = *gptr<u32>(ea_1 + 0x10);  // (from the original)
    r7_1 = *gptr<u32>(ea_1 + 0x14);  // (from the original)
    r8_1 = *gptr<u32>(ea_1 + 0x18);  // (from the original)
    r12_1 = *gptr<u32>(ea_1 + 0x1c);  // (from the original)
    *gptr<u32>(r13) = u32(r0_1);
    *gptr<u32>(r13 + 4) = u32(r1_1);
    *gptr<u32>(r13 + 8) = u32(r2_1);
    *gptr<u32>(r13 + 0xc) = u32(r3_1);  // (from the original)
    *gptr<u32>(r13 + 0x10) = u32(r6_1);  // (from the original)
    *gptr<u32>(r13 + 0x14) = u32(r7_1);  // (from the original)
    *gptr<u32>(r13 + 0x18) = u32(r8_1);  // (from the original)
    *gptr<u32>(r13 + 0x1c) = u32(r12_1);  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2;
    guest::cpu()->s[3] = S3;
    guest::cpu()->s[4] = S4;
    guest::cpu()->s[5] = S5;
    guest::cpu()->s[6] = S6;
    guest::cpu()->s[7] = S7;
    r0_2 = call_005d46dc(r0_1, r1_1, r2_1, r3_1);
    r1_2 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    S0_1 = guest::cpu()->s[0];
    S1_1 = guest::cpu()->s[1];
    S2_1 = guest::cpu()->s[2];
    S3_1 = guest::cpu()->s[3];
    S4_1 = guest::cpu()->s[4];
    S5_1 = guest::cpu()->s[5];
    S6_1 = guest::cpu()->s[6];
    S7_1 = guest::cpu()->s[7];
    r7 = r13;
    if (r0_2 == 1u) {
        goto L_28acf4;
    }
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_1;
    guest::cpu()->s[1] = S1_1;
    guest::cpu()->s[2] = S2_1;
    guest::cpu()->s[3] = S3_1;
    guest::cpu()->s[4] = S4_1;
    guest::cpu()->s[5] = S5_1;
    guest::cpu()->s[6] = S6_1;
    guest::cpu()->s[7] = S7_1;
    r0_3 = call_005d46dc(r0_2, r1_2, r2, r3);
    r1_3 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    r0_4 = r0_3 - 2u;
    if (r0_4 > 6u) {
        goto L_28acec;
    }
    r4_1 = 0x853228u + 0x1fcu;  // (from the original)
    r0_5 = r13 + 0x20u;  // (from the original)
    S0 = std::bit_cast<float>(*gptr<u32>(r4_1));
    S1 = std::bit_cast<float>(*gptr<u32>(r4_1 + 4));
    S2 = std::bit_cast<float>(*gptr<u32>(r4_1 + 8));
    S3 = std::bit_cast<float>(*gptr<u32>(r4_1 + 0xc));  // (from the original)
    S4 = std::bit_cast<float>(*gptr<u32>(r4_1 + 0x10));  // (from the original)
    S5 = std::bit_cast<float>(*gptr<u32>(r4_1 + 0x14));  // (from the original)
    S6 = std::bit_cast<float>(*gptr<u32>(r4_1 + 0x18));  // (from the original)
    S7 = std::bit_cast<float>(*gptr<u32>(r4_1 + 0x1c));  // (from the original)
    r4 = 0u;
    r8 = r13 + 0x20u;  // (from the original)
    *gptr<u32>(r0_5) = u32(std::bit_cast<u32>(S0));
    *gptr<u32>(r0_5 + 4) = u32(std::bit_cast<u32>(S1));
    *gptr<u32>(r0_5 + 8) = u32(std::bit_cast<u32>(S2));
    *gptr<u32>(r0_5 + 0xc) = u32(std::bit_cast<u32>(S3));  // (from the original)
    *gptr<u32>(r0_5 + 0x10) = u32(std::bit_cast<u32>(S4));  // (from the original)
    *gptr<u32>(r0_5 + 0x14) = u32(std::bit_cast<u32>(S5));  // (from the original)
    *gptr<u32>(r0_5 + 0x18) = u32(std::bit_cast<u32>(S6));  // (from the original)
    *gptr<u32>(r0_5 + 0x1c) = u32(std::bit_cast<u32>(S7));  // (from the original)
    do {
L_28acb4:;
        r0_6 = r5 + 0x294u;  // (from the original)
        r1_4 = *gptr<u32>(r8 + (r4 << 2));
        guest::cpu()->r[13] = r13;
        guest::cpu()->s[0] = S0;
        guest::cpu()->s[1] = S1;
        guest::cpu()->s[2] = S2;
        guest::cpu()->s[3] = S3;
        guest::cpu()->s[4] = S4;
        guest::cpu()->s[5] = S5;
        guest::cpu()->s[6] = S6;
        guest::cpu()->s[7] = S7;
        r0_7 = call_0056878c(r0_6, r1_4, r2, r3);
        r2_2 = guest::cpu()->r[2];
        r3_2 = guest::cpu()->r[3];
        S0_2 = guest::cpu()->s[0];
        S1_2 = guest::cpu()->s[1];
        S2_2 = guest::cpu()->s[2];
        S3_2 = guest::cpu()->s[3];
        S4_2 = guest::cpu()->s[4];
        S5_2 = guest::cpu()->s[5];
        S6_2 = guest::cpu()->s[6];
        S7_2 = guest::cpu()->s[7];
        r1_5 = *gptr<u32>(r7 + (r4 << 2));
        r0_8 = r5 + 0x294u;  // (from the original)
        guest::cpu()->r[13] = r13;
        guest::cpu()->s[0] = S0_2;
        guest::cpu()->s[1] = S1_2;
        guest::cpu()->s[2] = S2_2;
        guest::cpu()->s[3] = S3_2;
        guest::cpu()->s[4] = S4_2;
        guest::cpu()->s[5] = S5_2;
        guest::cpu()->s[6] = S6_2;
        guest::cpu()->s[7] = S7_2;
        r0_9 = call_0056878c(r0_8, r1_5, r2_2, r3_2);
        r3_3 = guest::cpu()->r[3];
        S0_3 = guest::cpu()->s[0];
        S1_3 = guest::cpu()->s[1];
        S2_3 = guest::cpu()->s[2];
        S3_3 = guest::cpu()->s[3];
        S4_3 = guest::cpu()->s[4];
        S5_3 = guest::cpu()->s[5];
        S6_3 = guest::cpu()->s[6];
        S7_3 = guest::cpu()->s[7];
        guest::cpu()->r[13] = r13;
        guest::cpu()->s[0] = S0_3;
        guest::cpu()->s[1] = S1_3;
        guest::cpu()->s[2] = S2_3;
        guest::cpu()->s[3] = S3_3;
        guest::cpu()->s[4] = S4_3;
        guest::cpu()->s[5] = S5_3;
        guest::cpu()->s[6] = S6_3;
        guest::cpu()->s[7] = S7_3;
        r0_4 = call_0028aae4(r5, r0_9, r0_7, r3_3);
        r1_3 = guest::cpu()->r[1];
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
    guest::cpu()->r[1] = r1_3;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    return r0_4;
L_28acf4:;
    r4_2 = 0x853228u + 0x1dcu;  // (from the original)
    r0_10 = r13 + 0x20u;  // (from the original)
    S0 = std::bit_cast<float>(*gptr<u32>(r4_2));
    S1 = std::bit_cast<float>(*gptr<u32>(r4_2 + 4));
    S2 = std::bit_cast<float>(*gptr<u32>(r4_2 + 8));
    S3 = std::bit_cast<float>(*gptr<u32>(r4_2 + 0xc));  // (from the original)
    S4 = std::bit_cast<float>(*gptr<u32>(r4_2 + 0x10));  // (from the original)
    S5 = std::bit_cast<float>(*gptr<u32>(r4_2 + 0x14));  // (from the original)
    S6 = std::bit_cast<float>(*gptr<u32>(r4_2 + 0x18));  // (from the original)
    S7 = std::bit_cast<float>(*gptr<u32>(r4_2 + 0x1c));  // (from the original)
    r4 = 0u;
    r8 = r13 + 0x20u;  // (from the original)
    *gptr<u32>(r0_10) = u32(std::bit_cast<u32>(S0));
    *gptr<u32>(r0_10 + 4) = u32(std::bit_cast<u32>(S1));
    *gptr<u32>(r0_10 + 8) = u32(std::bit_cast<u32>(S2));
    *gptr<u32>(r0_10 + 0xc) = u32(std::bit_cast<u32>(S3));  // (from the original)
    *gptr<u32>(r0_10 + 0x10) = u32(std::bit_cast<u32>(S4));  // (from the original)
    *gptr<u32>(r0_10 + 0x14) = u32(std::bit_cast<u32>(S5));  // (from the original)
    *gptr<u32>(r0_10 + 0x18) = u32(std::bit_cast<u32>(S6));  // (from the original)
    *gptr<u32>(r0_10 + 0x1c) = u32(std::bit_cast<u32>(S7));  // (from the original)
    do {
L_28ad0c:;
        r0_11 = r5 + 0x294u;  // (from the original)
        r1_6 = *gptr<u32>(r8 + (r4 << 2));
        guest::cpu()->r[13] = r13;
        guest::cpu()->s[0] = S0;
        guest::cpu()->s[1] = S1;
        guest::cpu()->s[2] = S2;
        guest::cpu()->s[3] = S3;
        guest::cpu()->s[4] = S4;
        guest::cpu()->s[5] = S5;
        guest::cpu()->s[6] = S6;
        guest::cpu()->s[7] = S7;
        r0_12 = call_0056878c(r0_11, r1_6, r2, r3);
        r2_3 = guest::cpu()->r[2];
        r3_4 = guest::cpu()->r[3];
        S0_4 = guest::cpu()->s[0];
        S1_4 = guest::cpu()->s[1];
        S2_4 = guest::cpu()->s[2];
        S3_4 = guest::cpu()->s[3];
        S4_4 = guest::cpu()->s[4];
        S5_4 = guest::cpu()->s[5];
        S6_4 = guest::cpu()->s[6];
        S7_4 = guest::cpu()->s[7];
        r1_7 = *gptr<u32>(r7 + (r4 << 2));
        r0_13 = r5 + 0x294u;  // (from the original)
        guest::cpu()->r[13] = r13;
        guest::cpu()->s[0] = S0_4;
        guest::cpu()->s[1] = S1_4;
        guest::cpu()->s[2] = S2_4;
        guest::cpu()->s[3] = S3_4;
        guest::cpu()->s[4] = S4_4;
        guest::cpu()->s[5] = S5_4;
        guest::cpu()->s[6] = S6_4;
        guest::cpu()->s[7] = S7_4;
        r0_14 = call_0056878c(r0_13, r1_7, r2_3, r3_4);
        r3_5 = guest::cpu()->r[3];
        S0_5 = guest::cpu()->s[0];
        S1_5 = guest::cpu()->s[1];
        S2_5 = guest::cpu()->s[2];
        S3_5 = guest::cpu()->s[3];
        S4_5 = guest::cpu()->s[4];
        S5_5 = guest::cpu()->s[5];
        S6_5 = guest::cpu()->s[6];
        S7_5 = guest::cpu()->s[7];
        guest::cpu()->r[13] = r13;
        guest::cpu()->s[0] = S0_5;
        guest::cpu()->s[1] = S1_5;
        guest::cpu()->s[2] = S2_5;
        guest::cpu()->s[3] = S3_5;
        guest::cpu()->s[4] = S4_5;
        guest::cpu()->s[5] = S5_5;
        guest::cpu()->s[6] = S6_5;
        guest::cpu()->s[7] = S7_5;
        r0_15 = call_0028aae4(r5, r0_14, r0_12, r3_5);
        r1_8 = guest::cpu()->r[1];
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
    guest::cpu()->r[1] = r1_8;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    return r0_15;
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

inline guest::global<u32, 0x0094fd5c> global_0094fd5c;  // (from the original)
inline constexpr guest::Function<0x0022bdf0, u32(u32, u32, u32, u32)> call_0022bdf0;  // (from the original)
inline constexpr guest::Function<0x002687c8, u32(u32, u32, u32, u32)> call_002687c8;  // (from the original)
inline constexpr guest::Function<0x002688cc, u32(u32, u32, u32, u32)> call_002688cc;  // (from the original)
inline constexpr guest::Function<0x002cd2e0, u32(u32, u32, u32, u32)> call_002cd2e0;  // (from the original)
inline constexpr guest::Function<0x002fb378, u32(u32, u32, u32, u32)> call_002fb378;  // (from the original)
inline constexpr guest::Function<0x0030a488, u32(u32, u32, u32, u32)> call_0030a488;  // (from the original)
inline constexpr guest::Function<0x006a32c4, u32(u32, u32, u32, u32)> call_006a32c4;  // (from the original)

u32 f_0028b220(gptr<Object_0028b220_0> arg0, u32 r1, u32 r2, u32 r3) {
    u32 r0 = arg0.addr();
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r13 = guest::cpu()->r[13];
    u32 r14 = guest::cpu()->r[14];
    u32 ea_1 = 0;
    u32 r0_1 = 0;
    u32 r6_1 = 0;
    u32 r5_1 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r1_1 = 0;
    u32 r0_2 = 0;
    u32 r1_2 = 0;
    u32 r2_2 = 0;
    u32 r3_2 = 0;
    u32 r0_3 = 0;
    u32 r1_3 = 0;
    u32 r2_3 = 0;
    u32 ea_2 = 0;
    u32 ea_3 = 0;
    u32 r0_4 = 0;
    u32 res_1 = 0;
    u32 nf_1 = 0;
    u32 vf_1 = 0;
    u32 r3_3 = 0;
    u32 r0_5 = 0;
    u32 ea_4 = 0;
    u32 r4_1 = 0;
    u32 r5_2 = 0;
    u32 r6_2 = 0;
    u32 r7_1 = 0;
    u32 r0_6 = 0;
    u32 r3_4 = 0;
    u32 ea_5 = 0;
    u32 r1_4 = 0;
    u32 ea_6 = 0;
    u32 r4_2 = 0;
    u32 r5_3 = 0;
    u32 r6_3 = 0;
    u32 r7_2 = 0;
    ea_1 = r13 - 0x18;  // (from the original)
    *gptr<u32>(ea_1) = u32(r3);
    *gptr<u32>(ea_1 + 4) = u32(r4);
    *gptr<u32>(ea_1 + 8) = u32(r5);
    *gptr<u32>(ea_1 + 0xc) = u32(r6);  // (from the original)
    *gptr<u32>(ea_1 + 0x10) = u32(r7);  // (from the original)
    *gptr<u32>(ea_1 + 0x14) = u32(r14);  // (from the original)
    r13 = r13 - 0x18;  // (from the original)
    r0_1 = arg0->word_63c;
    r6_1 = r0 + 0x2090u;  // (from the original)
    r5_1 = r0 + 0x2d78u;  // (from the original)
    if (r0_1 != 0x2eu) {  // (from the original)
        if (r0_1 == 0x2fu) {  // (from the original)
            guest::cpu()->r[13] = r13;
            call_002687c8(r5_1, 0u, 1u, r3);
            r2_1 = *global_0094fd5c;
            guest::cpu()->r[13] = r13;
            call_002688cc(r5_1, 0x4cu, r2_1, 0x8535f0u);  // (from the original)
            r3_1 = guest::cpu()->r[3];
            guest::cpu()->r[13] = r13;
            call_002cd2e0(r5_1, 0x100038fu, 1u, r3_1);  // (from the original)
            r1_1 = u32(*gptr<u8>(r0 + 0x24u));  // (from the original)
            guest::cpu()->r[13] = r13;
            r0_2 = call_006a32c4(r6_1, r1_1, 0x24u, 0x6eu);  // (from the original)
            r1_2 = guest::cpu()->r[1];
            r2_2 = guest::cpu()->r[2];
            r3_2 = guest::cpu()->r[3];
            guest::cpu()->r[13] = r13;
            r0_3 = call_002fb378(r0_2, r1_2, r2_2, r3_2);
            r1_3 = *gptr<u32>(r0_3);
            r2_3 = *gptr<u32>(r0_3 + 4);
            ea_2 = r0 + 0x624u;  // (from the original)
            *gptr<u32>(ea_2) = u32(*gptr<u32>(r0_3 + 8u));
            ea_3 = r0 + 0x61cu;  // (from the original)
            *gptr<u32>(ea_3) = u32(r1_3);
            *gptr<u32>(ea_3 + 4) = u32(r2_3);
            r0_4 = u32(s32(s8(*gptr<u8>(0x624u + r0))));  // (from the original)
            *gptr<u32>(r13) = u32(0u);
            res_1 = r0_4 - 0x1eu;  // (from the original)
            nf_1 = res_1 >> 0x1f;  // (from the original)
            vf_1 = ((r0_4 ^ 0x1eu) & (r0_4 ^ res_1)) >> 0x1f;  // (from the original)
            if (nf_1 != vf_1) {
                r0_4 = 0x1eu - r0_4;  // (from the original)
            }
            if (nf_1 == vf_1) {
                r0_4 = 0x3cu - r0_4;  // (from the original)
            }
            r3_3 = r0_4 + 0x1eu;  // (from the original)
            r0_5 = r0 + 0x61cu;  // (from the original)
            guest::cpu()->r[13] = r13;
            r0_1 = call_0030a488(r0_5, 0u, 0u, r3_3);
            r1 = guest::cpu()->r[1];
        }
        ea_4 = r13;
        r13 = r13 + 0x18;  // (from the original)
        r4_1 = *gptr<u32>(ea_4 + 4);
        r5_2 = *gptr<u32>(ea_4 + 8);
        r6_2 = *gptr<u32>(ea_4 + 0xc);  // (from the original)
        r7_1 = *gptr<u32>(ea_4 + 0x10);  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[4] = r4_1;
        guest::cpu()->r[5] = r5_2;
        guest::cpu()->r[6] = r6_2;
        guest::cpu()->r[7] = r7_1;
        guest::cpu()->r[13] = r13;
        return r0_1;
    }
    r0_6 = r0 + 0x29e0u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_0022bdf0(r0_6, r1, r2, r3);
    r3_4 = guest::cpu()->r[3];
    *gptr<u16>(0x2e48u + r0) = u16(0xbu);  // (from the original)
    guest::cpu()->r[13] = r13;
    call_002687c8(r5_1, 0u, 1u, r3_4);
    guest::cpu()->r[13] = r13;
    call_002688cc(r5_1, 0x4du, 0x4fu, 0x8535f0u);  // (from the original)
    ea_5 = r0 + 0x24u;  // (from the original)
    r1_4 = u32(*gptr<u8>(ea_5));
    r13 = r13 + 4u;
    ea_6 = r13;
    r13 = r13 + 0x14;  // (from the original)
    r4_2 = *gptr<u32>(ea_6);
    r5_3 = *gptr<u32>(ea_6 + 4);
    r6_3 = *gptr<u32>(ea_6 + 8);
    r7_2 = *gptr<u32>(ea_6 + 0xc);  // (from the original)
    r14 = *gptr<u32>(ea_6 + 0x10);  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->r[4] = r4_2;
    guest::cpu()->r[5] = r5_3;
    guest::cpu()->r[6] = r6_3;
    guest::cpu()->r[7] = r7_2;
    return call_006a32c4(r6_1, r1_4, 0x24u, 0x61u);  // (from the original)
}

}  // namespace d_0028b220
GUEST_EXPORT(0x0028b220, d_0028b220::f_0028b220);

// f_0028c3e8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0028c3e8 {

inline guest::global<u32, 0x0028c528> global_0028c528;  // (from the original)
inline guest::global<u32, 0x0028c52c> global_0028c52c;  // (from the original)
inline constexpr guest::Function<0x002b6a00, u32(u32, u32, u32, u32)> call_002b6a00;  // (from the original)
inline constexpr guest::Function<0x002f6a30, u32(u32, u32, u32, u32)> call_002f6a30;  // (from the original)
inline constexpr guest::Function<0x002f6e98, u32(u32, u32, u32, u32)> call_002f6e98;  // (from the original)
inline constexpr guest::Function<0x002f7508, u32(u32, u32, u32, u32)> call_002f7508;  // (from the original)

u32 f_0028c3e8(u32 r0, float S0, float S1) {
    u32 r2 = 0;
    u32 r3 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r6 = guest::cpu()->r[6];
    u32 r8 = guest::cpu()->r[8];
    u32 r9 = guest::cpu()->r[9];
    u32 r10 = guest::cpu()->r[10];
    u32 r11 = guest::cpu()->r[11];
    u32 r13 = guest::cpu()->r[13];
    u32 r9_1 = 0;
    u32 ea_1 = 0;
    u32 r4_1 = 0;
    u32 r5_1 = 0;
    u32 r7_1 = 0;
    u32 r8_1 = 0;
    u32 r12_1 = 0;
    u32 r3_1 = 0;
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r1_2 = 0;
    u32 r7_2 = 0;
    u32 r5_2 = 0;
    u32 r3_2 = 0;
    float S0_1 = 0;
    float S1_1 = 0;
    u32 r1_3 = 0;
    float S0_2 = 0;
    float S1_2 = 0;
    u32 r0_5 = 0;
    r13 = r13 - 0x68u;  // (from the original)
    r9_1 = r13 + 0x24u;  // (from the original)
    r6 = r0;
    ea_1 = 0x853228u + 0x2b4u;  // (from the original)
    r4_1 = *gptr<u32>(ea_1 + 4);
    r5_1 = *gptr<u32>(ea_1 + 8);
    r7_1 = *gptr<u32>(ea_1 + 0xc);  // (from the original)
    r8_1 = *gptr<u32>(ea_1 + 0x10);  // (from the original)
    r12_1 = *gptr<u32>(ea_1 + 0x14);  // (from the original)
    *gptr<u32>(r9_1) = u32(*gptr<u32>(ea_1));
    *gptr<u32>(r9_1 + 4) = u32(r4_1);
    *gptr<u32>(r9_1 + 8) = u32(r5_1);
    *gptr<u32>(r9_1 + 0xc) = u32(r7_1);  // (from the original)
    *gptr<u32>(r9_1 + 0x10) = u32(r8_1);  // (from the original)
    *gptr<u32>(r9_1 + 0x14) = u32(r12_1);  // (from the original)
    r3_1 = r13 + 0x1cu;  // (from the original)
    *gptr<u32>(r13 + 0x3cu) = u32(*gptr<u32>(0x853228u + 0x2ccu));  // (from the original)
    *gptr<u32>(r3_1) = u32(r0 + 0x4cu);  // (from the original)
    *gptr<u32>(r3_1 + 4) = u32(r6 + 0x294u);  // (from the original)
    r0_1 = r6 + 0x1730u;  // (from the original)
    r1_1 = r13 + 0x1cu;  // (from the original)
    r8 = r0_1;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    call_002f6e98(r0_1, r1_1, 0u, r3_1);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r9 = 0u;
    S0 = std::bit_cast<float>(*global_0028c528);
    *gptr<u32>(r8 + 0xd4u) = u32(*gptr<u32>(r8 + 0xd4u) | 0x40u);  // (from the original)
    *gptr<u32>(r13) = u32(r9);
    *gptr<u32>(r13 + 4u) = u32(r9);
    S1 = std::bit_cast<float>(*global_0028c52c);
    r0_2 = r13 + 8u;
    *gptr<u32>(r13 + 8u) = u32(r9);
    *gptr<u32>(r13 + 0xcu) = u32(r9);  // (from the original)
    *gptr<u32>(r13 + 0x10u) = u32(r9);  // (from the original)
    *gptr<u32>(r13 + 0x14u) = u32(r9);  // (from the original)
    *gptr<u32>(r13 + 0x18u) = u32(r9);  // (from the original)
    r11 = 0x1000399u;  // (from the original)
    r10 = 1u;
    *gptr<u32>(r0_2) = u32(std::bit_cast<u32>(S0));
    *gptr<u32>(r0_2 + 4) = u32(std::bit_cast<u32>(S1));
    r4 = r9;
    do {
L_28c480:;
        r0_3 = r6 + (r4 << 2);
        *gptr<u32>(r13) = u32(*gptr<u32>(r0_3 + 0x1e68u));  // (from the original)
        r0_4 = *gptr<u32>(r0_3 + 0x1e38u);  // (from the original)
        r1_2 = r13;
        *gptr<u32>(r13 + 0x14u) = u32(r4);  // (from the original)
        *gptr<u32>(r13 + 4u) = u32(r0_4);
        *gptr<u32>(r13 + 0x10u) = u32(r9);  // (from the original)
        r7_2 = r6 + ((r4 << 3) - r4 << 5);
        r5_2 = r7_2 + 0x11f0u;  // (from the original)
        guest::cpu()->r[13] = r13;
        guest::cpu()->s[0] = S0;
        guest::cpu()->s[1] = S1;
        call_002b6a00(r5_2, r1_2, r2, r3);
        r3_2 = guest::cpu()->r[3];
        S0_1 = guest::cpu()->s[0];
        S1_1 = guest::cpu()->s[1];
        *gptr<u8>(0x12cau + r7_2) = u8(r9);  // (from the original)
        *gptr<u32>(r5_2 + 0xd0u) = u32(r11);  // (from the original)
        *gptr<u8>(r5_2 + 0xdbu) = u8(r10);  // (from the original)
        *gptr<u8>(r5_2 + 0xdcu) = u8(r10);  // (from the original)
        guest::cpu()->r[13] = r13;
        guest::cpu()->s[0] = S0_1;
        guest::cpu()->s[1] = S1_1;
        call_002f7508(r8, r5_2, 1u, r3_2);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        S0 = guest::cpu()->s[0];
        S1 = guest::cpu()->s[1];
        r4 = r4 + 1u;
        guest::preempt();
    } while (r4 < 6u);
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    call_002f6a30(r8, 0u, r2, r3);
    r1_3 = guest::cpu()->r[1];
    S0_2 = guest::cpu()->s[0];
    S1_2 = guest::cpu()->s[1];
    *gptr<u16>(r6 + 0x1800u) = u16(0x23u);  // (from the original)
    r0_5 = *gptr<u32>(r8 + 0xd4u) & ~8u;  // (from the original)
    *gptr<u32>(r8 + 0xd4u) = u32(r0_5);  // (from the original)
    r13 = r13 + 0x68u;  // (from the original)
    guest::cpu()->r[1] = r1_3;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_2;
    guest::cpu()->s[1] = S1_2;
    return r0_5;
}

}  // namespace d_0028c3e8
GUEST_EXPORT(0x0028c3e8, d_0028c3e8::f_0028c3e8);

// f_0028c538: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0028c538 {

inline guest::global<u32, 0x0028c678> global_0028c678;  // (from the original)
inline guest::global<u32, 0x0028c67c> global_0028c67c;  // (from the original)
inline constexpr guest::Function<0x002b6a00, u32(u32, u32, u32, u32)> call_002b6a00;  // (from the original)
inline constexpr guest::Function<0x002f6a30, u32(u32, u32, u32, u32)> call_002f6a30;  // (from the original)
inline constexpr guest::Function<0x002f6e98, u32(u32, u32, u32, u32)> call_002f6e98;  // (from the original)
inline constexpr guest::Function<0x002f7508, u32(u32, u32, u32, u32)> call_002f7508;  // (from the original)

u32 f_0028c538(u32 r0, float S0, float S1) {
    u32 r2 = 0;
    u32 r3 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r6 = guest::cpu()->r[6];
    u32 r8 = guest::cpu()->r[8];
    u32 r9 = guest::cpu()->r[9];
    u32 r10 = guest::cpu()->r[10];
    u32 r11 = guest::cpu()->r[11];
    u32 r13 = guest::cpu()->r[13];
    u32 r9_1 = 0;
    u32 ea_1 = 0;
    u32 r4_1 = 0;
    u32 r5_1 = 0;
    u32 r7_1 = 0;
    u32 r8_1 = 0;
    u32 r12_1 = 0;
    u32 r3_1 = 0;
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r1_2 = 0;
    u32 r7_2 = 0;
    u32 r5_2 = 0;
    u32 r3_2 = 0;
    float S0_1 = 0;
    float S1_1 = 0;
    u32 r7_3 = 0;
    float S0_2 = 0;
    float S1_2 = 0;
    u32 r0_5 = 0;
    r13 = r13 - 0x68u;  // (from the original)
    r9_1 = r13 + 0x24u;  // (from the original)
    r6 = r0;
    ea_1 = 0x853228u + 0x2d8u;  // (from the original)
    r4_1 = *gptr<u32>(ea_1 + 4);
    r5_1 = *gptr<u32>(ea_1 + 8);
    r7_1 = *gptr<u32>(ea_1 + 0xc);  // (from the original)
    r8_1 = *gptr<u32>(ea_1 + 0x10);  // (from the original)
    r12_1 = *gptr<u32>(ea_1 + 0x14);  // (from the original)
    *gptr<u32>(r9_1) = u32(*gptr<u32>(ea_1));
    *gptr<u32>(r9_1 + 4) = u32(r4_1);
    *gptr<u32>(r9_1 + 8) = u32(r5_1);
    *gptr<u32>(r9_1 + 0xc) = u32(r7_1);  // (from the original)
    *gptr<u32>(r9_1 + 0x10) = u32(r8_1);  // (from the original)
    *gptr<u32>(r9_1 + 0x14) = u32(r12_1);  // (from the original)
    r3_1 = r13 + 0x1cu;  // (from the original)
    *gptr<u32>(r13 + 0x3cu) = u32(*gptr<u32>(0x853228u + 0x2f0u));  // (from the original)
    *gptr<u32>(r3_1) = u32(r0 + 0x4cu);  // (from the original)
    *gptr<u32>(r3_1 + 4) = u32(r6 + 0x3e0u);  // (from the original)
    r0_1 = r6 + 0x1d54u;  // (from the original)
    r1_1 = r13 + 0x1cu;  // (from the original)
    r8 = r0_1;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    call_002f6e98(r0_1, r1_1, 0u, r3_1);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r9 = 0u;
    S0 = std::bit_cast<float>(*global_0028c678);
    *gptr<u32>(r8 + 0xd4u) = u32(*gptr<u32>(r8 + 0xd4u) | 0x40u);  // (from the original)
    *gptr<u32>(r13) = u32(r9);
    *gptr<u32>(r13 + 4u) = u32(r9);
    S1 = std::bit_cast<float>(*global_0028c67c);
    r0_2 = r13 + 8u;
    *gptr<u32>(r13 + 8u) = u32(r9);
    *gptr<u32>(r13 + 0xcu) = u32(r9);  // (from the original)
    *gptr<u32>(r13 + 0x10u) = u32(r9);  // (from the original)
    *gptr<u32>(r13 + 0x14u) = u32(r9);  // (from the original)
    *gptr<u32>(r13 + 0x18u) = u32(r9);  // (from the original)
    r11 = 0x1000399u;  // (from the original)
    r10 = 1u;
    *gptr<u32>(r0_2) = u32(std::bit_cast<u32>(S0));
    *gptr<u32>(r0_2 + 4) = u32(std::bit_cast<u32>(S1));
    r4 = r9;
    do {
L_28c5d0:;
        r0_3 = r6 + (r4 << 2);
        *gptr<u32>(r13) = u32(*gptr<u32>(r0_3 + 0x1e80u));  // (from the original)
        r0_4 = *gptr<u32>(r0_3 + 0x1e50u);  // (from the original)
        r1_2 = r13;
        *gptr<u32>(r13 + 0x14u) = u32(r4);  // (from the original)
        *gptr<u32>(r13 + 4u) = u32(r0_4);
        *gptr<u32>(r13 + 0x10u) = u32(r9);  // (from the original)
        r7_2 = r6 + ((r4 << 3) - r4 << 5);
        r5_2 = r7_2 + 0x1814u;  // (from the original)
        guest::cpu()->r[13] = r13;
        guest::cpu()->s[0] = S0;
        guest::cpu()->s[1] = S1;
        call_002b6a00(r5_2, r1_2, r2, r3);
        r3_2 = guest::cpu()->r[3];
        S0_1 = guest::cpu()->s[0];
        S1_1 = guest::cpu()->s[1];
        r7_3 = r7_2 + 0x18eeu;  // (from the original)
        *gptr<u8>(r7_3) = u8(r9);
        *gptr<u32>(r5_2 + 0xd0u) = u32(r11);  // (from the original)
        *gptr<u8>(r5_2 + 0xdbu) = u8(r10);  // (from the original)
        *gptr<u8>(r5_2 + 0xdcu) = u8(r10);  // (from the original)
        guest::cpu()->r[13] = r13;
        guest::cpu()->s[0] = S0_1;
        guest::cpu()->s[1] = S1_1;
        call_002f7508(r8, r5_2, 1u, r3_2);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        S0 = guest::cpu()->s[0];
        S1 = guest::cpu()->s[1];
        r4 = r4 + 1u;
        guest::preempt();
    } while (r4 < 6u);
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    call_002f6a30(r8, 0u, r2, r3);
    S0_2 = guest::cpu()->s[0];
    S1_2 = guest::cpu()->s[1];
    *gptr<u16>(0x1e24u + r6) = u16(0x23u);  // (from the original)
    r0_5 = *gptr<u32>(r8 + 0xd4u) & ~8u;  // (from the original)
    *gptr<u32>(r8 + 0xd4u) = u32(r0_5);  // (from the original)
    r13 = r13 + 0x68u;  // (from the original)
    guest::cpu()->r[1] = 0x1e24u;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_2;
    guest::cpu()->s[1] = S1_2;
    return r0_5;
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
    u32 r4_1 = 0;
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r0_2 = 0;
    u32 r2_2 = 0;
    u32 r3_2 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r1_2 = 0;
    u32 r2_3 = 0;
    u32 r3_3 = 0;
    u32 r0_5 = 0;
    u32 r0_6 = 0;
    u32 r2_4 = 0;
    u32 r3_4 = 0;
    u32 r0_7 = 0;
    u32 r0_8 = 0;
    u32 r1_3 = 0;
    u32 r2_5 = 0;
    u32 r3_5 = 0;
    u32 r0_9 = 0;
    u32 r0_10 = 0;
    u32 r1_4 = 0;
    u32 r2_6 = 0;
    u32 r3_6 = 0;
    u32 r0_11 = 0;
    u32 r0_12 = 0;
    u32 r1_5 = 0;
    u32 r2_7 = 0;
    u32 r3_7 = 0;
    u32 r0_13 = 0;
    u32 r0_14 = 0;
    u32 r1_6 = 0;
    u32 r2_8 = 0;
    u32 r3_8 = 0;
    u32 r0_15 = 0;
    u32 r0_16 = 0;
    u32 r1_7 = 0;
    u32 r2_9 = 0;
    u32 r3_9 = 0;
    u32 r0_17 = 0;
    u32 r0_18 = 0;
    u32 r1_8 = 0;
    u32 r2_10 = 0;
    u32 r3_10 = 0;
    u32 r0_19 = 0;
    u32 r0_20 = 0;
    u32 r1_9 = 0;
    u32 r2_11 = 0;
    u32 r3_11 = 0;
    u32 r0_21 = 0;
    u32 r0_22 = 0;
    u32 r1_10 = 0;
    u32 r2_12 = 0;
    u32 r3_12 = 0;
    u32 r0_23 = 0;
    u32 r0_24 = 0;
    u32 r1_11 = 0;
    u32 r2_13 = 0;
    u32 r3_13 = 0;
    u32 r0_25 = 0;
    u32 r0_26 = 0;
    u32 r1_12 = 0;
    u32 r2_14 = 0;
    u32 r3_14 = 0;
    u32 r0_27 = 0;
    u32 r0_28 = 0;
    u32 r1_13 = 0;
    u32 r2_15 = 0;
    u32 r3_15 = 0;
    u32 r0_29 = 0;
    u32 r0_30 = 0;
    u32 r2_16 = 0;
    u32 r3_16 = 0;
    u32 r0_31 = 0;
    u32 r0_32 = 0;
    u32 r1_14 = 0;
    u32 r2_17 = 0;
    u32 r3_17 = 0;
    u32 r0_33 = 0;
    u32 r0_34 = 0;
    u32 r1_15 = 0;
    u32 r2_18 = 0;
    u32 r3_18 = 0;
    u32 r0_35 = 0;
    u32 r0_36 = 0;
    u32 r1_16 = 0;
    u32 r2_19 = 0;
    u32 r3_19 = 0;
    u32 r0_37 = 0;
    u32 r0_38 = 0;
    u32 r1_17 = 0;
    u32 r2_20 = 0;
    u32 r3_20 = 0;
    u32 r0_39 = 0;
    u32 r0_40 = 0;
    u32 r4_2 = 0;
    u32 r0_41 = 0;
    u32 r1_18 = 0;
    u32 r2_21 = 0;
    u32 r3_21 = 0;
    u32 r0_42 = 0;
    u32 r0_43 = 0;
    u32 r4_3 = 0;
    u32 r0_44 = 0;
    u32 r1_19 = 0;
    u32 r2_22 = 0;
    u32 r3_22 = 0;
    u32 r0_45 = 0;
    u32 r0_46 = 0;
    u32 r1_20 = 0;
    u32 r2_23 = 0;
    u32 r3_23 = 0;
    u32 r0_47 = 0;
    u32 r0_48 = 0;
    u32 r1_21 = 0;
    u32 r2_24 = 0;
    u32 r3_24 = 0;
    u32 r0_49 = 0;
    u32 r0_50 = 0;
    u32 r1_22 = 0;
    u32 r2_25 = 0;
    u32 r3_25 = 0;
    u32 r0_51 = 0;
    u32 r0_52 = 0;
    u32 r1_23 = 0;
    u32 r2_26 = 0;
    u32 r3_26 = 0;
    u32 r0_53 = 0;
    u32 r0_54 = 0;
    u32 r1_24 = 0;
    u32 r2_27 = 0;
    u32 r3_27 = 0;
    u32 r0_55 = 0;
    u32 r0_56 = 0;
    u32 r1_25 = 0;
    u32 r2_28 = 0;
    u32 r3_28 = 0;
    u32 r0_57 = 0;
    u32 r0_58 = 0;
    u32 r1_26 = 0;
    u32 r2_29 = 0;
    u32 r3_29 = 0;
    u32 r0_59 = 0;
    u32 r0_60 = 0;
    u32 r1_27 = 0;
    u32 r2_30 = 0;
    u32 r3_30 = 0;
    u32 r0_61 = 0;
    u32 r0_62 = 0;
    u32 r1_28 = 0;
    u32 r2_31 = 0;
    u32 r3_31 = 0;
    u32 r0_63 = 0;
    u32 r0_64 = 0;
    u32 r1_29 = 0;
    u32 r2_32 = 0;
    u32 r3_32 = 0;
    u32 r0_65 = 0;
    u32 r0_66 = 0;
    u32 r1_30 = 0;
    u32 r2_33 = 0;
    u32 r3_33 = 0;
    u32 r0_67 = 0;
    u32 r0_68 = 0;
    u32 r1_31 = 0;
    u32 r2_34 = 0;
    u32 r3_34 = 0;
    u32 r0_69 = 0;
    u32 r0_70 = 0;
    u32 r1_32 = 0;
    u32 r2_35 = 0;
    u32 r3_35 = 0;
    u32 r0_71 = 0;
    u32 r0_72 = 0;
    u32 r1_33 = 0;
    u32 r2_36 = 0;
    u32 r3_36 = 0;
    u32 r0_73 = 0;
    u32 r0_74 = 0;
    u32 r1_34 = 0;
    u32 r2_37 = 0;
    u32 r3_37 = 0;
    u32 r0_75 = 0;
    u32 r0_76 = 0;
    u32 r1_35 = 0;
    u32 r2_38 = 0;
    u32 r3_38 = 0;
    u32 r0_77 = 0;
    u32 r0_78 = 0;
    u32 r1_36 = 0;
    u32 r2_39 = 0;
    u32 r3_39 = 0;
    u32 r0_79 = 0;
    u32 r0_80 = 0;
    u32 r1_37 = 0;
    u32 r2_40 = 0;
    u32 r3_40 = 0;
    u32 r0_81 = 0;
    u32 r0_82 = 0;
    u32 r1_38 = 0;
    u32 r2_41 = 0;
    u32 r3_41 = 0;
    u32 r0_83 = 0;
    u32 r0_84 = 0;
    u32 r1_39 = 0;
    u32 r2_42 = 0;
    u32 r3_42 = 0;
    u32 r0_85 = 0;
    u32 r0_86 = 0;
    u32 r1_40 = 0;
    u32 r2_43 = 0;
    u32 r3_43 = 0;
    u32 r0_87 = 0;
    u32 r0_88 = 0;
    u32 r1_41 = 0;
    u32 r2_44 = 0;
    u32 r3_44 = 0;
    u32 r0_89 = 0;
    u32 r0_90 = 0;
    u32 r1_42 = 0;
    u32 r2_45 = 0;
    u32 r3_45 = 0;
    u32 r0_91 = 0;
    u32 r0_92 = 0;
    u32 r1_43 = 0;
    u32 r2_46 = 0;
    u32 r3_46 = 0;
    u32 r0_93 = 0;
    guest::cpu()->r[13] -= 8u;
    arg0->word_28 = u32(0x8f0510u + 0x6cu);  // (from the original)
    arg0->word_0 = u32(0x8f0510u);  // (from the original)
    r4_1 = r0 + 0x2d78u;  // (from the original)
    arg0->word_29e0 = u32(0x8ee228u);  // (from the original)
    r0_1 = r0 + 0x2e90u;  // (from the original)
    arg0->word_2d78 = u32(0x8ef284u);  // (from the original)
    arg0->word_2e5c = u32(0x8ef284u + 0x44u);  // (from the original)
    call_002f76ac(r0_1, 0x2e0b3cu, 0x518u, 2u);  // (from the original)
    r1_1 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    r0_2 = call_002f770c(r4_1, r1_1, r2_1, r3_1);
    r2_2 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    *gptr<u32>(r0_2 - 0x398u) = u32(0x8f18f4u);  // (from the original)
    r0_3 = r0_2 - 0x248u;  // (from the original)
    r0_4 = call_00567ef0(r0_3, 0x8f18f4u, r2_2, r3_2);  // (from the original)
    r1_2 = guest::cpu()->r[1];
    r2_3 = guest::cpu()->r[2];
    r3_3 = guest::cpu()->r[3];
    r0_5 = r0_4 - 0x14cu;  // (from the original)
    r0_6 = call_005bf744(r0_5, r1_2, r2_3, r3_3);
    r2_4 = guest::cpu()->r[2];
    r3_4 = guest::cpu()->r[3];
    *gptr<u32>(r0_6 - 0x954u) = u32(0x8f8b4cu);  // (from the original)
    r0_7 = r0_6 - 0x44u;  // (from the original)
    r0_8 = call_0056988c(r0_7, 0x8f8b4cu, r2_4, r3_4);  // (from the original)
    r1_3 = guest::cpu()->r[1];
    r2_5 = guest::cpu()->r[2];
    r3_5 = guest::cpu()->r[3];
    r0_9 = r0_8 - 0x28u;  // (from the original)
    r0_10 = call_0056988c(r0_9, r1_3, r2_5, r3_5);
    r1_4 = guest::cpu()->r[1];
    r2_6 = guest::cpu()->r[2];
    r3_6 = guest::cpu()->r[3];
    r0_11 = r0_10 - 0x28u;  // (from the original)
    r0_12 = call_0056988c(r0_11, r1_4, r2_6, r3_6);
    r1_5 = guest::cpu()->r[1];
    r2_7 = guest::cpu()->r[2];
    r3_7 = guest::cpu()->r[3];
    r0_13 = r0_12 - 0x28u;  // (from the original)
    r0_14 = call_0056988c(r0_13, r1_5, r2_7, r3_7);
    r1_6 = guest::cpu()->r[1];
    r2_8 = guest::cpu()->r[2];
    r3_8 = guest::cpu()->r[3];
    r0_15 = r0_14 - 0x248u;  // (from the original)
    r0_16 = call_00567ef0(r0_15, r1_6, r2_8, r3_8);
    r1_7 = guest::cpu()->r[1];
    r2_9 = guest::cpu()->r[2];
    r3_9 = guest::cpu()->r[3];
    r0_17 = r0_16 - 0x14cu;  // (from the original)
    r0_18 = call_005bf744(r0_17, r1_7, r2_9, r3_9);
    r1_8 = guest::cpu()->r[1];
    r2_10 = guest::cpu()->r[2];
    r3_10 = guest::cpu()->r[3];
    r0_19 = r0_18 - 0xd0u;  // (from the original)
    r0_20 = call_005e3194(r0_19, r1_8, r2_10, r3_10);
    r1_9 = guest::cpu()->r[1];
    r2_11 = guest::cpu()->r[2];
    r3_11 = guest::cpu()->r[3];
    r0_21 = r0_20 - 0xc4u;  // (from the original)
    r0_22 = call_005e3194(r0_21, r1_9, r2_11, r3_11);
    r1_10 = guest::cpu()->r[1];
    r2_12 = guest::cpu()->r[2];
    r3_12 = guest::cpu()->r[3];
    r0_23 = r0_22 - 0xc4u;  // (from the original)
    r0_24 = call_005e3194(r0_23, r1_10, r2_12, r3_12);
    r1_11 = guest::cpu()->r[1];
    r2_13 = guest::cpu()->r[2];
    r3_13 = guest::cpu()->r[3];
    r0_25 = r0_24 - 0xc4u;  // (from the original)
    r0_26 = call_005e3194(r0_25, r1_11, r2_13, r3_13);
    r1_12 = guest::cpu()->r[1];
    r2_14 = guest::cpu()->r[2];
    r3_14 = guest::cpu()->r[3];
    r0_27 = r0_26 - 0xc4u;  // (from the original)
    r0_28 = call_005e3194(r0_27, r1_12, r2_14, r3_14);
    r1_13 = guest::cpu()->r[1];
    r2_15 = guest::cpu()->r[2];
    r3_15 = guest::cpu()->r[3];
    r0_29 = r0_28 - 0x100u;  // (from the original)
    r0_30 = call_005d703c(r0_29, r1_13, r2_15, r3_15);
    r2_16 = guest::cpu()->r[2];
    r3_16 = guest::cpu()->r[3];
    *gptr<u32>(r0_30 - 0x210u) = u32(0x8ee758u);  // (from the original)
    r0_31 = r0_30 - 0x50u;  // (from the original)
    r0_32 = call_0056988c(r0_31, 0x8ee758u, r2_16, r3_16);  // (from the original)
    r1_14 = guest::cpu()->r[1];
    r2_17 = guest::cpu()->r[2];
    r3_17 = guest::cpu()->r[3];
    r0_33 = r0_32 - 0x28u;  // (from the original)
    r0_34 = call_0056988c(r0_33, r1_14, r2_17, r3_17);
    r1_15 = guest::cpu()->r[1];
    r2_18 = guest::cpu()->r[2];
    r3_18 = guest::cpu()->r[3];
    r0_35 = r0_34 - 0x28u;  // (from the original)
    r0_36 = call_0056988c(r0_35, r1_15, r2_18, r3_18);
    r1_16 = guest::cpu()->r[1];
    r2_19 = guest::cpu()->r[2];
    r3_19 = guest::cpu()->r[3];
    r0_37 = r0_36 - 0x14cu;  // (from the original)
    r0_38 = call_005bf744(r0_37, r1_16, r2_19, r3_19);
    r1_17 = guest::cpu()->r[1];
    r2_20 = guest::cpu()->r[2];
    r3_20 = guest::cpu()->r[3];
    r0_39 = r0_38 - 0x174u;  // (from the original)
    r0_40 = call_002f7710(r0_39, r1_17, r2_20, r3_20);
    r4_2 = r0_40 - 0x1d54u;  // (from the original)
    r0_41 = r0_40 - 0x540u;  // (from the original)
    call_002f76ac(r0_41, 0x2b6ef8u, 0xe0u, 6u);  // (from the original)
    r1_18 = guest::cpu()->r[1];
    r2_21 = guest::cpu()->r[2];
    r3_21 = guest::cpu()->r[3];
    r0_42 = r4_2 + 0x1730u;  // (from the original)
    r0_43 = call_002f7710(r0_42, r1_18, r2_21, r3_21);
    r4_3 = r0_43 - 0x1730u;  // (from the original)
    r0_44 = r0_43 - 0x540u;  // (from the original)
    call_002f76ac(r0_44, 0x2b6ef8u, 0xe0u, 6u);  // (from the original)
    r1_19 = guest::cpu()->r[1];
    r2_22 = guest::cpu()->r[2];
    r3_22 = guest::cpu()->r[3];
    r0_45 = r4_3 + 0x112cu;  // (from the original)
    r0_46 = call_005e3194(r0_45, r1_19, r2_22, r3_22);
    r1_20 = guest::cpu()->r[1];
    r2_23 = guest::cpu()->r[2];
    r3_23 = guest::cpu()->r[3];
    r0_47 = r0_46 - 0xc4u;  // (from the original)
    r0_48 = call_005e3194(r0_47, r1_20, r2_23, r3_23);
    r1_21 = guest::cpu()->r[1];
    r2_24 = guest::cpu()->r[2];
    r3_24 = guest::cpu()->r[3];
    r0_49 = r0_48 - 0xc4u;  // (from the original)
    r0_50 = call_005e3194(r0_49, r1_21, r2_24, r3_24);
    r1_22 = guest::cpu()->r[1];
    r2_25 = guest::cpu()->r[2];
    r3_25 = guest::cpu()->r[3];
    r0_51 = r0_50 - 0xc4u;  // (from the original)
    r0_52 = call_005e3194(r0_51, r1_22, r2_25, r3_25);
    r1_23 = guest::cpu()->r[1];
    r2_26 = guest::cpu()->r[2];
    r3_26 = guest::cpu()->r[3];
    r0_53 = r0_52 - 0xc4u;  // (from the original)
    r0_54 = call_005e3194(r0_53, r1_23, r2_26, r3_26);
    r1_24 = guest::cpu()->r[1];
    r2_27 = guest::cpu()->r[2];
    r3_27 = guest::cpu()->r[3];
    r0_55 = r0_54 - 0xc4u;  // (from the original)
    r0_56 = call_005e3194(r0_55, r1_24, r2_27, r3_27);
    r1_25 = guest::cpu()->r[1];
    r2_28 = guest::cpu()->r[2];
    r3_28 = guest::cpu()->r[3];
    r0_57 = r0_56 - 0xc4u;  // (from the original)
    r0_58 = call_005e3194(r0_57, r1_25, r2_28, r3_28);
    r1_26 = guest::cpu()->r[1];
    r2_29 = guest::cpu()->r[2];
    r3_29 = guest::cpu()->r[3];
    r0_59 = r0_58 - 0xc4u;  // (from the original)
    r0_60 = call_005e3194(r0_59, r1_26, r2_29, r3_29);
    r1_27 = guest::cpu()->r[1];
    r2_30 = guest::cpu()->r[2];
    r3_30 = guest::cpu()->r[3];
    r0_61 = r0_60 - 0xc4u;  // (from the original)
    r0_62 = call_005e3194(r0_61, r1_27, r2_30, r3_30);
    r1_28 = guest::cpu()->r[1];
    r2_31 = guest::cpu()->r[2];
    r3_31 = guest::cpu()->r[3];
    r0_63 = r0_62 - 0xc4u;  // (from the original)
    r0_64 = call_005e3194(r0_63, r1_28, r2_31, r3_31);
    r1_29 = guest::cpu()->r[1];
    r2_32 = guest::cpu()->r[2];
    r3_32 = guest::cpu()->r[3];
    r0_65 = r0_64 - 0xc4u;  // (from the original)
    r0_66 = call_005e3194(r0_65, r1_29, r2_32, r3_32);
    r1_30 = guest::cpu()->r[1];
    r2_33 = guest::cpu()->r[2];
    r3_33 = guest::cpu()->r[3];
    r0_67 = r0_66 - 0xc4u;  // (from the original)
    r0_68 = call_005e3194(r0_67, r1_30, r2_33, r3_33);
    r1_31 = guest::cpu()->r[1];
    r2_34 = guest::cpu()->r[2];
    r3_34 = guest::cpu()->r[3];
    r0_69 = r0_68 - 0xc4u;  // (from the original)
    r0_70 = call_005e3194(r0_69, r1_31, r2_34, r3_34);
    r1_32 = guest::cpu()->r[1];
    r2_35 = guest::cpu()->r[2];
    r3_35 = guest::cpu()->r[3];
    r0_71 = r0_70 - 0xc4u;  // (from the original)
    r0_72 = call_005e3194(r0_71, r1_32, r2_35, r3_35);
    r1_33 = guest::cpu()->r[1];
    r2_36 = guest::cpu()->r[2];
    r3_36 = guest::cpu()->r[3];
    r0_73 = r0_72 - 0xc4u;  // (from the original)
    r0_74 = call_005e3194(r0_73, r1_33, r2_36, r3_36);
    r1_34 = guest::cpu()->r[1];
    r2_37 = guest::cpu()->r[2];
    r3_37 = guest::cpu()->r[3];
    r0_75 = r0_74 - 0x80u;  // (from the original)
    r0_76 = call_0056988c(r0_75, r1_34, r2_37, r3_37);
    r1_35 = guest::cpu()->r[1];
    r2_38 = guest::cpu()->r[2];
    r3_38 = guest::cpu()->r[3];
    r0_77 = r0_76 - 0x28u;  // (from the original)
    r0_78 = call_0056988c(r0_77, r1_35, r2_38, r3_38);
    r1_36 = guest::cpu()->r[1];
    r2_39 = guest::cpu()->r[2];
    r3_39 = guest::cpu()->r[3];
    r0_79 = r0_78 - 0x28u;  // (from the original)
    r0_80 = call_0056988c(r0_79, r1_36, r2_39, r3_39);
    r1_37 = guest::cpu()->r[1];
    r2_40 = guest::cpu()->r[2];
    r3_40 = guest::cpu()->r[3];
    r0_81 = r0_80 - 0x28u;  // (from the original)
    r0_82 = call_0056988c(r0_81, r1_37, r2_40, r3_40);
    r1_38 = guest::cpu()->r[1];
    r2_41 = guest::cpu()->r[2];
    r3_41 = guest::cpu()->r[3];
    r0_83 = r0_82 - 0x28u;  // (from the original)
    r0_84 = call_0056988c(r0_83, r1_38, r2_41, r3_41);
    r1_39 = guest::cpu()->r[1];
    r2_42 = guest::cpu()->r[2];
    r3_42 = guest::cpu()->r[3];
    r0_85 = r0_84 - 0x28u;  // (from the original)
    r0_86 = call_0056988c(r0_85, r1_39, r2_42, r3_42);
    r1_40 = guest::cpu()->r[1];
    r2_43 = guest::cpu()->r[2];
    r3_43 = guest::cpu()->r[3];
    r0_87 = r0_86 - 0x14cu;  // (from the original)
    r0_88 = call_005bf744(r0_87, r1_40, r2_43, r3_43);
    r1_41 = guest::cpu()->r[1];
    r2_44 = guest::cpu()->r[2];
    r3_44 = guest::cpu()->r[3];
    r0_89 = r0_88 - 0x14cu;  // (from the original)
    r0_90 = call_005bf744(r0_89, r1_41, r2_44, r3_44);
    r1_42 = guest::cpu()->r[1];
    r2_45 = guest::cpu()->r[2];
    r3_45 = guest::cpu()->r[3];
    r0_91 = r0_90 - 0x248u;  // (from the original)
    r0_92 = call_00567ef0(r0_91, r1_42, r2_45, r3_45);
    r1_43 = guest::cpu()->r[1];
    r2_46 = guest::cpu()->r[2];
    r3_46 = guest::cpu()->r[3];
    guest::cpu()->r[13] += 8u;
    r0_93 = r0_92 - 0x4cu;  // (from the original)
    return call_006aaa30(r0_93, r1_43, r2_46, r3_46);
}

}  // namespace d_0028d12c
GUEST_EXPORT(0x0028d12c, d_0028d12c::f_0028d12c);

// f_0028d378: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0028d378 {

inline guest::global<u32, 0x0014fac0> global_0014fac0;  // (from the original)
inline guest::global<u32, 0x0095c71c> global_0095c71c;  // (from the original)
inline constexpr guest::Function<0x001b7ce8, u32(u32, u32, u32, u32)> call_001b7ce8;  // (from the original)
inline constexpr guest::Function<0x00305f44, u32(u32, u32, u32, u32)> call_00305f44;  // (from the original)

u32 f_0028d378(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r0_1 = 0;
    u32 zf_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r1_1 = 0;
    u32 r0_4 = 0;
    u32 r0_5 = 0;
    u32 r0_6 = 0;
    goto L_28d378;
L_28d378:;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r0_1 = u32(*gptr<u8>(r0 + 0x13cu));  // (from the original)
    zf_1 = r0_1 == 0;
    if (!zf_1) {
        zf_1 = r0_1 == 2u;
    }
    if (zf_1) {
        r0_2 = r0 + 0x100u;  // (from the original)
        *gptr<u16>(r0_2 + 0x38u) = u16(u32(*gptr<u16>(r0_2 + 0x38u)) + 1u);  // (from the original)
    }
    r0_3 = *gptr<u32>(r0 + 0x128u);  // (from the original)
    r1_1 = *gptr<u32>(r0 + 0x134u);  // (from the original)
    if (r0_3 >= r1_1) {
        goto L_28d3e4;
    }
    r0_4 = call_00305f44(r0_3, r1_1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0_4 != r1) {
        goto L_28d3e4;
    }
    r0_5 = *global_0095c71c;
    if (r0_5 == 0) {
        goto L_28d3e4;
    }
    call_001b7ce8(r0_5, r1, 1u, 0x95bfdcu);  // (from the original)
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
L_28d3e4:;
    r0_6 = *gptr<u32>(r0 + 0x124u);  // (from the original)
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    return guest::call_address<u32>(*global_0014fac0, r0_6, r1, r2, r3);
}

}  // namespace d_0028d378
GUEST_EXPORT(0x0028d378, d_0028d378::f_0028d378);

// f_0028d568: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0028d568 {

inline guest::global<u32, 0x0014fae0> global_0014fae0;  // (from the original)

u32 f_0028d568(u32 r0) {
    u32 r0_1 = 0;
    r0_1 = *gptr<u32>(r0 + 0x124u);  // (from the original)
    return guest::call_address<u32>(*global_0014fae0, r0_1, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
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
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r2_1 = 0;
    u32 r1_1 = 0;
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
    arg0->byte_2c = u8(0u);
    arg0->byte_2d = u8(1u);
    arg0->byte_30 = u8(0xfu);  // (from the original)
    arg0->byte_1d = u8(0u);
    arg0->byte_1e = u8(0u);
    arg0->byte_21 = u8(3u);
    *gptr<u8>(0x997ae0u + 1u) = u8(0u);  // (from the original)
    *gptr<u8>(0x997ae0u + 3u) = u8(4u);  // (from the original)
    *gptr<u8>(0x997ae0u + 5u) = u8(0u);  // (from the original)
L_28f584:;
    arg0->byte_28 = u8(0x26u);  // (from the original)
    arg0->byte_29 = u8(0x80u);  // (from the original)
    arg0->byte_26 = u8(r4);
    arg0->byte_27 = u8(r4);
    guest::cpu()->r[13] += 0xcu;  // (from the original)
    guest::cpu()->r[1] = 0x80u;  // (from the original)
    return;
L_28f5a4:;
    r5 = 0x854184u;  // (from the original)
    r1 = r0 + 0x14u;  // (from the original)
    r2_1 = r0 + 0x2cu;  // (from the original)
    if (*gptr<u32>(r5) == 3u) {
        goto L_28f650;
    }
    arg0->byte_14 = u8(0u);
    arg0->byte_15 = u8(0u);
    arg0->byte_18 = u8(0xeu);  // (from the original)
    arg0->byte_2c = u8(0u);
    arg0->byte_2d = u8(0u);
    arg0->byte_30 = u8(0xfu);  // (from the original)
L_28f5e0:;
    *gptr<u8>(r1 + 9u) = u8(1u);
    *gptr<u8>(r1 + 0xau) = u8(0u);  // (from the original)
    *gptr<u8>(r1 + 0xdu) = u8(0xeu);  // (from the original)
    *gptr<u8>(r1 + 0xbu) = u8(4u);  // (from the original)
    *gptr<u8>(r1 + 0xeu) = u8(3u);  // (from the original)
    *gptr<u8>(r1 + 0x13u) = u8(r4);  // (from the original)
    r1_1 = *gptr<u32>(r5);
    r2 = 0x997ae0u;  // (from the original)
    if (r1_1 == 0) {
        goto L_28f6a8;
    }
    if (r1_1 == 1u) {
        goto L_28f6c0;
    }
    if (r1_1 == 2u) {
        goto L_28f6d8;
    }
    if (r1_1 != 3u) {
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
    *gptr<u8>(r1 + 5u) = u8(0xeu);  // (from the original)
    *gptr<u8>(r2_1) = u8(8u);
    *gptr<u8>(r2_1 + 1u) = u8(0u);
    *gptr<u8>(r2_1 + 4u) = u8(0xeu);  // (from the original)
    *gptr<u8>(r2_1 + 2u) = u8(0u);
    *gptr<u8>(r2_1 + 5u) = u8(0xfu);  // (from the original)
    *gptr<u8>(r2_1 + 3u) = u8(1u);
    *gptr<u8>(r2_1 + 6u) = u8(0xfu);  // (from the original)
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
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r0_2 = 0;
    u32 r1_2 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r1_3 = 0;
    u32 r0_5 = 0;
    u32 r0_6 = 0;
    u32 r1_4 = 0;
    u32 r0_7 = 0;
    u32 r1_5 = 0;
    u32 r0_8 = 0;
    u32 r1_6 = 0;
    u32 r0_9 = 0;
    u32 r1_7 = 0;
    u32 r0_10 = 0;
    u32 r1_8 = 0;
    u32 r0_11 = 0;
    u32 r0_12 = 0;
    u32 r1_9 = 0;
    u32 r0_13 = 0;
    u32 r0_14 = 0;
    u32 r1_10 = 0;
    guest::cpu()->r[13] -= 8u;
    r0_1 = call_002f74c8(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_1 = guest::cpu()->r[1];
    if (r0_1 == 0x9du) {  // (from the original)
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1_1;
        return 2u;
    }
    r0_2 = call_002f74c8(r0_1, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_2 = guest::cpu()->r[1];
    if (r0_2 == 0x9eu) {  // (from the original)
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1_2;
        return 2u;
    }
    r0_3 = call_002f74c8(r0_2, r1_2, guest::cpu()->r[2], guest::cpu()->r[3]);
    r0_4 = call_002f74e0(4u, r0_3, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_3 = guest::cpu()->r[1];
    if (r0_4 != 0) {
        r0_5 = call_002f74c8(r0_4, r1_3, guest::cpu()->r[2], guest::cpu()->r[3]);
        r0_6 = call_002f74e0(0x200u, r0_5, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
        r1_4 = guest::cpu()->r[1];
        if (r0_6 == 0) {
            guest::cpu()->r[13] += 8u;
            guest::cpu()->r[1] = r1_4;
            return 3u;
        }
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1_4;
        return 2u;
    }
    r0_7 = call_002f74c8(r0_4, r1_3, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_5 = guest::cpu()->r[1];
    if (r0_7 >= 0x4du) {  // (from the original)
        r0_7 = call_002f74c8(r0_7, r1_5, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1_5 = guest::cpu()->r[1];
        if (r0_7 <= 0x4fu) {  // (from the original)
            guest::cpu()->r[13] += 8u;
            guest::cpu()->r[1] = r1_5;
            return 1u;
        }
    }
    r0_8 = call_002f74c8(r0_7, r1_5, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_6 = guest::cpu()->r[1];
    if (r0_8 >= 0x3cu) {  // (from the original)
        r0_8 = call_002f74c8(r0_8, r1_6, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1_6 = guest::cpu()->r[1];
        if (r0_8 <= 0x3eu) {  // (from the original)
            guest::cpu()->r[13] += 8u;
            guest::cpu()->r[1] = r1_6;
            return 0u;
        }
    }
    r0_9 = call_002f74c8(r0_8, r1_6, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_7 = guest::cpu()->r[1];
    if (r0_9 == 0x49u) {  // (from the original)
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1_7;
        return 0u;
    }
    r0_10 = call_002f74c8(r0_9, r1_7, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_8 = guest::cpu()->r[1];
    if (r0_10 == 0x55u) {  // (from the original)
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1_8;
        return 0u;
    }
    r0_11 = call_002f74c8(r0_10, r1_8, guest::cpu()->r[2], guest::cpu()->r[3]);
    r0_12 = call_002f74e0(0x400000u, r0_11, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    r1_9 = guest::cpu()->r[1];
    if (r0_12 != 0) {
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1_9;
        return 0u;
    }
    r0_13 = call_002f74c8(r0_12, r1_9, guest::cpu()->r[2], guest::cpu()->r[3]);
    r0_14 = call_002f74e0(0x800000u, r0_13, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    r1_10 = guest::cpu()->r[1];
    if (r0_14 == 0) {
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1_10;
        return 4u;
    }
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1_10;
    return 0u;
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

inline guest::global<u32, 0x0028f938> global_0028f938;  // (from the original)
inline guest::global<u32, 0x0028f940> global_0028f940;  // (from the original)
inline guest::global<u32, 0x0028f944> global_0028f944;  // (from the original)
inline guest::global<u32, 0x0028f948> global_0028f948;  // (from the original)
inline guest::global<u32, 0x0028f94c> global_0028f94c;  // (from the original)

u32 f_0028f8bc(gptr<Object_0028f8bc_0> arg0, gptr<Object_0028f8bc_1> arg1) {
    u32 fpsr = guest::cpu()->fpscr;
    float S4_1 = 0;
    float S1_1 = 0;
    float S0_1 = 0;
    float S3_1 = 0;
    float S2_1 = 0;
    float S0_2 = 0;
    float S1_2 = 0;
    float S0_3 = 0;
    u32 fpsr_1 = 0;
    u32 fpsr_2 = 0;
    u32 ea_1 = 0;
    u32 r2_1 = 0;
    u32 ea_2 = 0;
    u32 r1_1 = 0;
    u32 r0_1 = 0;
    S4_1 = std::bit_cast<float>(arg1->word_8);
    S1_1 = std::bit_cast<float>(arg0->word_4) - std::bit_cast<float>(arg1->word_4);
    S0_1 = std::bit_cast<float>(arg0->word_8) - S4_1;
    S3_1 = std::bit_cast<float>(*global_0028f944);
    S2_1 = std::bit_cast<float>(*global_0028f94c);
    S0_2 = sqrtf(S1_1 * S1_1 + S0_1 * S0_1) * std::bit_cast<float>(*global_0028f938) - std::bit_cast<float>(*global_0028f940);
    S1_2 = std::bit_cast<float>(*global_0028f948);
    S0_3 = S0_2 * S3_1;
    fpsr_1 = fpsr & 0xfffffffu | vfp_cmpf(S0_3, S1_2);  // (from the original)
    if (!(fpsr_1 >> 0x1d & 1)) {  // (from the original)
        S0_3 = S1_2;
        ea_1 = 0x99563cu + 8u;  // (from the original)
        r2_1 = *gptr<u32>(0x97534cu + (u32(*gptr<u8>(ea_1)) << 2));  // (from the original)
        ea_2 = 0x99563cu + 4u;  // (from the original)
        r1_1 = *gptr<u32>(ea_2);
        r0_1 = ea_2 + 4u;
        guest::cpu()->s[0] = S0_3;
        guest::cpu()->s[1] = S1_2;
        guest::cpu()->s[2] = S2_1;
        guest::cpu()->s[3] = S3_1;
        guest::cpu()->s[4] = S4_1;
        return guest::call_address<u32>(r2_1, r0_1, r1_1, r2_1, guest::cpu()->r[3]);
    }
    fpsr_2 = fpsr_1 & 0xfffffffu | vfp_cmpf(S0_3, S2_1);  // (from the original)
    if (!(fpsr_2 >> 0x1e & 1) && fpsr_2 >> 0x1f == (fpsr_2 >> 0x1c & 1)) {  // (from the original)
        S0_3 = S2_1;
    }
    ea_1 = 0x99563cu + 8u;  // (from the original)
    r2_1 = *gptr<u32>(0x97534cu + (u32(*gptr<u8>(ea_1)) << 2));  // (from the original)
    ea_2 = 0x99563cu + 4u;  // (from the original)
    r1_1 = *gptr<u32>(ea_2);
    r0_1 = ea_2 + 4u;
    guest::cpu()->s[0] = S0_3;
    guest::cpu()->s[1] = S1_2;
    guest::cpu()->s[2] = S2_1;
    guest::cpu()->s[3] = S3_1;
    guest::cpu()->s[4] = S4_1;
    return guest::call_address<u32>(r2_1, r0_1, r1_1, r2_1, guest::cpu()->r[3]);
}

}  // namespace d_0028f8bc
GUEST_EXPORT(0x0028f8bc, d_0028f8bc::f_0028f8bc);

// f_0028ff00: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0028ff00 {

inline guest::global<u8, 0x00950708> global_00950708;  // (from the original)
inline constexpr guest::Function<0x001cdf04, u32(u32, u32, u32, u32)> call_001cdf04;  // (from the original)
inline constexpr guest::Function<0x001cdf18, u32(u32, u32, u32, u32)> call_001cdf18;  // (from the original)
inline constexpr guest::Function<0x00300904, u32(u32, u32, u32, u32)> call_00300904;  // (from the original)
inline constexpr guest::Function<0x0030b6c4, u32(u32, u32, u32, u32)> call_0030b6c4;  // (from the original)
inline constexpr guest::Function<0x0062512c, u32(u32, u32, u32, u32)> call_0062512c;  // (from the original)
inline constexpr guest::Function<0x006268f8, u32(u32, u32, u32, u32)> call_006268f8;  // (from the original)

u32 f_0028ff00(u32 r0, u32 r1, u32 r2) {
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r0_2 = 0;
    u32 r1_2 = 0;
    u32 r2_2 = 0;
    u32 r4_1 = 0;
    u32 r0_3 = 0;
    u32 r2_3 = 0;
    u32 r1_3 = 0;
    u32 r2_4 = 0;
    u32 r0_4 = 0;
    u32 r1_4 = 0;
    r13 = r13 - 0x20u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_1 = call_00300904(r0, r1, r2, guest::cpu()->r[3]);
    r1_1 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    if (r0_1 != 0) {
        guest::cpu()->r[13] = r13;
        r0_2 = call_0030b6c4(r0_1, r1_1, r2_1, guest::cpu()->r[3]);
        r1_2 = guest::cpu()->r[1];
        r2_2 = guest::cpu()->r[2];
        if (r0_2 != 0) {
            *gptr<u8>(0x950708u + 1u) = u8(0u);  // (from the original)
            *global_00950708 = u8(0u);
            *gptr<u8>(0x950708u + 5u) = u8(1u);  // (from the original)
            r4_1 = r13;
            guest::cpu()->r[13] = r13;
            r0_3 = call_006268f8(0x90u, r1_2, r2_2, guest::cpu()->r[3]);  // (from the original)
            r2_3 = guest::cpu()->r[2];
            guest::cpu()->r[13] = r13;
            call_001cdf04(r4_1, r0_3, r2_3, guest::cpu()->r[3]);
            r1_3 = guest::cpu()->r[1];
            r2_4 = guest::cpu()->r[2];
            r0_4 = r13;
            guest::cpu()->r[13] = r13;
            call_001cdf18(r0_4, r1_3, r2_4, guest::cpu()->r[3]);
            r1_4 = r13;
            guest::cpu()->r[13] = r13;
            r0_2 = call_0062512c(0x90u, r1_4, 1u, guest::cpu()->r[3]);  // (from the original)
            r1_2 = guest::cpu()->r[1];
        }
        r13 = r13 + 0x20u;  // (from the original)
        guest::cpu()->r[1] = r1_2;
        guest::cpu()->r[13] = r13;
        return r0_2;
    }
    *gptr<u8>(0x950708u + 1u) = u8(0u);  // (from the original)
    *global_00950708 = u8(0u);
    *gptr<u8>(0x950708u + 5u) = u8(1u);  // (from the original)
    r13 = r13 + 0x20u;  // (from the original)
    guest::cpu()->r[1] = r1_1;
    guest::cpu()->r[13] = r13;
    return r0_1;
}

}  // namespace d_0028ff00
GUEST_EXPORT(0x0028ff00, d_0028ff00::f_0028ff00);
