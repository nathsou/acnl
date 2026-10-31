// Functions decompiled by tools/decomp (docs/decomp.md), each proved equal to the recompiled original (prove-cpp). The
// names are generated (d_<address>::f_<address>, Object_<address>_<argument>, word_<offset>) and still to be chosen.
#include "guest/guest.hpp"
#include "core/date.hpp"
#include "core/grid_map.hpp"
#include "graphics/hemisphere_light.hpp"
#include "save/saved_record.hpp"

#include <bit>

using guest::gptr;

// f_007508b0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_007508b0 {

inline constexpr guest::Function<0x002fc20c, u32(u32, u32, u32, u32)> call_002fc20c;  // (from the original)
inline constexpr guest::Function<0x002fe7dd, u32(u32, u32, u32, u32)> call_002fe7dc;  // (from the original)
inline constexpr guest::Function<0x003117dc, u32(u32, u32, u32, u32)> call_003117dc;  // (from the original)
inline constexpr guest::Function<0x004e958c, u32(u32, u32, u32, u32)> call_004e958c;  // (from the original)
inline constexpr guest::Function<0x004ea048, u32(u32, u32, u32, u32)> call_004ea048;  // (from the original)
inline constexpr guest::Function<0x00691598, u32(u32, u32, u32, u32)> call_00691598;  // (from the original)

u32 f_007508b0(u32 r0, u32 r1, u32 r2) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r13 = guest::cpu()->r[13];
    r4 = r0;
    r13 = r13 - 0x18u;  // (from the original)
    r0 = *gptr<u32>(0x94d6b8u);  // (from the original)
    if ((r0 & 1u) != 0) {
        goto L_7508f8;
    }
    r0 = 0x94d6b8u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002fe7dc(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    if (r0 == 0) {
        goto L_7508f8;
    }
    r0 = 0x94d6bcu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002fc20c(r0, r1, r2, guest::cpu()->r[3]);
    r2 = 0x100000u;  // (from the original)
    r1 = 0x2f777cu;  // (from the original)
    r0 = 0x94d6b8u;  // (from the original)
L_7508f8:;
    guest::cpu()->r[13] = r13;
    r0 = call_004ea048(r0, r1, r2, guest::cpu()->r[3]);
    r2 = guest::cpu()->r[2];
    r5 = r4 + 0x600u;  // (from the original)
    r1 = u32(s32(s16(*gptr<u16>(r5 + 0xcu))));  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_004e958c(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    if (r0 == 0) {
        r0 = u32(*gptr<u16>(r4 + 0x2eu));  // (from the original)
        *gptr<u16>(r13) = u16(r0);
        goto L_750930;
    }
    r1 = u32(*gptr<u16>(r5 + 0xeu));  // (from the original)
    r0 = u32(*gptr<u16>(r0 + 0x2eu)) + r1;  // (from the original)
    *gptr<u16>(r13) = u16(r0);
    r0 = uxth(r0);
L_750930:;
    *gptr<u32>(r13 + 4u) = u32(r0);
    r0 = r13 + 4u;
    guest::cpu()->r[13] = r13;
    r0 = call_00691598(r0, r1, r2, guest::cpu()->r[3]);
    r2 = r0;
    r0 = 0x94d6bcu;  // (from the original)
    r1 = r4 + 0x5e4u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_003117dc(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r0 = 0x94d6bcu;  // (from the original)
    r13 = r13 + 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_007508b0
GUEST_EXPORT(0x007508b0, d_007508b0::f_007508b0);

// f_00750994: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00750994 {

struct __attribute__((packed)) Object_00750994_0 {
    u8 unknown_0[0x5f4];  // (not used here)
    u32 word_5f4;
};
GUEST_OFFSET(Object_00750994_0, word_5f4, 0x5f4);  // (from the original)


u32 f_00750994(gptr<Object_00750994_0> arg0) {
    u32 r0 = arg0.addr();
    r0 = arg0->word_5f4;
    if (r0 == 0) {
        r0 = 0xffu;  // (from the original)
        return r0;
    }
    r0 = u32(s32(s8(*gptr<u8>(r0))));
    if (r0 >= 0xffu) {  // (from the original)
        r0 = 0u;
    }
    r0 = r0 & 0xffu;  // (from the original)
    return r0;
}

}  // namespace d_00750994
GUEST_EXPORT(0x00750994, d_00750994::f_00750994);

// f_00750d40: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00750d40 {

struct __attribute__((packed)) Object_00750d40_0 {
    u8 unknown_0[0x554];  // (not used here)
    u32 word_554;
    u8 unknown_558[0xc];  // (not used here)
    u32 word_564;
    u8 unknown_568[0xc];  // (not used here)
    u32 word_574;
};
GUEST_OFFSET(Object_00750d40_0, word_554, 0x554);  // (from the original)
GUEST_OFFSET(Object_00750d40_0, word_564, 0x564);  // (from the original)
GUEST_OFFSET(Object_00750d40_0, word_574, 0x574);  // (from the original)

struct __attribute__((packed)) Object_00750d40_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Object_00750d40_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_00750d40_1, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_00750d40_1, word_8, 0x8);  // (from the original)


u32 f_00750d40(gptr<Object_00750d40_0> arg0, gptr<Object_00750d40_1> arg1) {
    u32 r0 = arg0.addr();
    u32 r1 = arg1.addr();
    if (r1 == 0) {
        return r0;
    }
    arg1->word_0 = u32(arg0->word_554);
    arg1->word_4 = u32(arg0->word_564);
    r0 = arg0->word_574;
    arg1->word_8 = u32(r0);
    return r0;
}

}  // namespace d_00750d40
GUEST_EXPORT(0x00750d40, d_00750d40::f_00750d40);

// f_00750da8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00750da8 {

inline constexpr guest::Function<0x0014f3cc, u32(u32, u32, u32, u32)> call_0014f3cc;  // (from the original)

u32 f_00750da8(u32 r0, u32 r1) {
    u32 r3 = 0;
    r3 = r0;
    r0 = r1;
    r1 = r3 + 0x548u;  // (from the original)
    return call_0014f3cc(r0, r1, guest::cpu()->r[2], r3);
}

}  // namespace d_00750da8
GUEST_EXPORT(0x00750da8, d_00750da8::f_00750da8);

// f_00750e1c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00750e1c {

inline constexpr guest::Function<0x004e958c, u32(u32, u32, u32, u32)> call_004e958c;  // (from the original)
inline constexpr guest::Function<0x004ea048, u32(u32, u32, u32, u32)> call_004ea048;  // (from the original)
inline constexpr guest::Function<0x0056a224, u32(u32, u32, u32, u32)> call_0056a224;  // (from the original)
inline constexpr guest::Function<0x00691598, u32(u32, u32, u32, u32)> call_00691598;  // (from the original)
inline constexpr guest::Function<0x00751578, u32(u32, u32, u32, u32)> call_00751578;  // (from the original)

u32 f_00750e1c(u32 r0, u32 r1, float S0) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 0x28u;  // (from the original)
    r4 = r1;
    r5 = r0;
    r1 = r13 + 4u;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    r0 = call_00751578(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    S0 = guest::cpu()->s[0];
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    r0 = call_004ea048(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    S0 = guest::cpu()->s[0];
    r6 = r5 + 0x600u;  // (from the original)
    r1 = u32(s32(s16(*gptr<u16>(r6 + 0xcu))));  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    r0 = call_004e958c(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    S0 = guest::cpu()->s[0];
    if (r0 == 0) {
        r0 = u32(*gptr<u16>(r5 + 0x2eu));  // (from the original)
        *gptr<u16>(r13) = u16(r0);
        goto L_750e68;
    }
    r1 = u32(*gptr<u16>(r6 + 0xeu));  // (from the original)
    r0 = u32(*gptr<u16>(r0 + 0x2eu)) + r1;  // (from the original)
    *gptr<u16>(r13) = u16(r0);
    r0 = uxth(r0);
L_750e68:;
    *gptr<u32>(r13 + 0x10u) = u32(r0);  // (from the original)
    r0 = r13 + 0x10u;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    r0 = call_00691598(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    S0 = guest::cpu()->s[0];
    *gptr<u16>(r13) = u16(r0 << 0xe);  // (from the original)
    r1 = *gptr<u32>(r13);
    r0 = r13 + 4u;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    r0 = call_0056a224(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    *gptr<u32>(r4) = u32(std::bit_cast<u32>(fabsf(std::bit_cast<float>(*gptr<u32>(r13 + 4u)))));
    *gptr<u32>(r4 + 4u) = u32(std::bit_cast<u32>(fabsf(std::bit_cast<float>(*gptr<u32>(r13 + 8u)))));
    S0 = fabsf(std::bit_cast<float>(*gptr<u32>(r13 + 0xcu)));  // (from the original)
    *gptr<u32>(r4 + 8u) = u32(std::bit_cast<u32>(S0));
    r13 = r13 + 0x28u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    return r0;
}

}  // namespace d_00750e1c
GUEST_EXPORT(0x00750e1c, d_00750e1c::f_00750e1c);

// f_00750eb4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00750eb4 {

struct __attribute__((packed)) Object_00750eb4_0 {
    u8 unknown_0[0x5f4];  // (not used here)
    u32 word_5f4;
};
GUEST_OFFSET(Object_00750eb4_0, word_5f4, 0x5f4);  // (from the original)


u32 f_00750eb4(gptr<Object_00750eb4_0> arg0) {
    u32 r0 = arg0.addr();
    r0 = arg0->word_5f4;
    if (r0 == 0) {
        return r0;
    }
    r0 = u32(*gptr<u8>(r0 + 4u)) << 0x1c >> 0x1f;  // (from the original)
    return r0;
}

}  // namespace d_00750eb4
GUEST_EXPORT(0x00750eb4, d_00750eb4::f_00750eb4);

// f_00750ed0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00750ed0 {

inline constexpr guest::Function<0x002fcaf4, u32(u32, u32, u32, u32)> call_002fcaf4;  // (from the original)
inline constexpr guest::Function<0x002feb00, u32(u32, u32, u32, u32)> call_002feb00;  // (from the original)
inline constexpr guest::Function<0x005757d4, u32(u32, u32, u32, u32)> call_005757d4;  // (from the original)
inline constexpr guest::Function<0x006a5e34, u32(u32, u32, u32, u32)> call_006a5e34;  // (from the original)
inline constexpr guest::Function<0x007500c8, u32(u32, u32, u32, u32)> call_007500c8;  // (from the original)
inline constexpr guest::Function<0x00751240, u32(u32, u32, u32, u32)> call_00751240;  // (from the original)

u32 f_00750ed0(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 ea = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r13 = guest::cpu()->r[13];
    u32 zf = 0;
    u32 cf = 0;
    r13 = r13 - 0xf0u;  // (from the original)
    r4 = r0;
    guest::cpu()->r[13] = r13;
    r0 = call_006a5e34(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r5 = r0;
    if (r0 == 0) {
        goto L_750f88;
    }
    if (*gptr<u32>(r4 + 0x5f0u) == 0) {  // (from the original)
        goto L_750f84;
    }
    r0 = r4;
    guest::cpu()->r[13] = r13;
    r0 = call_00751240(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        goto L_750f84;
    }
    r0 = r13 + 8u;
    guest::cpu()->r[13] = r13;
    r0 = call_005757d4(r0, r1, r2, r3);
    r0 = 0u;
    r2 = r0;
    *gptr<u16>(r13 + 4u) = u16(r0);
    *gptr<u32>(r13) = u32(r0);
    r3 = r13 + 4u;
    r1 = r13 + 8u;
    r0 = r4;
    guest::cpu()->r[13] = r13;
    r0 = call_007500c8(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r0 = *gptr<u32>(r13 + 8u);
    r4 = 0u;
    zf = r0 == 0;
    cf = r0 >= 0u;
    if (cf && !zf) {
        r6 = r13 + 8u;
    }
    if (!cf || zf) {
        goto L_750f84;
    }
    do {
L_750f40:;
        r3 = 1u;
        ea = r6 + (r4 << 3) + 0x14u;  // (from the original)
        r1 = *gptr<u32>(ea);
        r2 = *gptr<u32>(ea + 4);
        r0 = r5;
        guest::cpu()->r[13] = r13;
        r0 = call_002feb00(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        if (!(r0 == 0)) {
            guest::cpu()->r[13] = r13;
            r0 = call_002fcaf4(r0, r1, r2, r3);
            r1 = guest::cpu()->r[1];
            if (r0 == 0) {
                goto L_750f90;
            }
        }
        r0 = *gptr<u32>(r13 + 8u);
        r4 = r4 + 1u;
        guest::preempt();
    } while (u32(r0 >= r4) && !u32(r0 == r4));
L_750f84:;
    r0 = 0u;
L_750f88:;
    r13 = r13 + 0xf0u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
L_750f90:;
    r0 = 1u;
    r13 = r13 + 0xf0u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_00750ed0
GUEST_EXPORT(0x00750ed0, d_00750ed0::f_00750ed0);

// f_00751410: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00751410 {

struct __attribute__((packed)) Object_00751410_0 {
    u8 unknown_0[0x5f0];  // (not used here)
    u32 word_5f0;
};
GUEST_OFFSET(Object_00751410_0, word_5f0, 0x5f0);  // (from the original)

inline constexpr guest::Function<0x0014f3cc, u32(u32, u32, u32, u32)> call_0014f3cc;  // (from the original)
inline constexpr guest::Function<0x00748534, u32(u32, u32, u32, u32)> call_00748534;  // (from the original)
inline constexpr guest::Function<0x00750a48, u32(u32, u32, u32, u32)> call_00750a48;  // (from the original)

u32 f_00751410(gptr<Object_00751410_0> arg0, u32 r1, u32 r2, u32 r3, float S0, float S1, float S2) {
    u32 r0 = arg0.addr();
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r13 = guest::cpu()->r[13];
    u32 zf = 0;
    r5 = r0;
    r0 = arg0->word_5f0;
    r13 = r13 - 0x50u;  // (from the original)
    r4 = r1;
    r6 = r2;
    if (r0 == 0) {
        goto L_751484;
    }
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2;
    r0 = call_00748534(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    S2 = guest::cpu()->s[2];
    zf = r0 == 0;
    if (!zf) {
        zf = r6 == 1u;
    }
    if (zf) {
        goto L_751484;
    }
    r0 = 0u;
    r2 = r0;
    *gptr<u16>(r13 + 0x3cu) = u16(r0);  // (from the original)
    r3 = r13 + 0x3cu;  // (from the original)
    r1 = r13;
    r0 = r5;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2;
    r0 = call_00750a48(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r3 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    if (r6 == 2u) {
        goto L_7514a4;
    }
    *gptr<u32>(r4) = u32(*gptr<u32>(r13 + 0xcu));  // (from the original)
    *gptr<u32>(r4 + 4u) = u32(*gptr<u32>(r13 + 0x1cu));  // (from the original)
    r0 = *gptr<u32>(r13 + 0x2cu);  // (from the original)
L_751478:;
    *gptr<u32>(r4 + 8u) = u32(r0);
L_75147c:;
    r13 = r13 + 0x50u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    return r0;
L_751484:;
    if (r4 == 0) {
        guest::preempt();
        goto L_75147c;
    }
    *gptr<u32>(r4) = u32(*gptr<u32>(r5 + 0x554u));  // (from the original)
    r1 = *gptr<u32>(r5 + 0x564u);  // (from the original)
    *gptr<u32>(r4 + 4u) = u32(r1);
    r0 = *gptr<u32>(r5 + 0x574u);  // (from the original)
    guest::preempt();
    goto L_751478;
L_7514a4:;
    r0 = r13 + 0x30u;  // (from the original)
    S2 = std::bit_cast<float>(*gptr<u32>(0x85f2d4u)) * std::bit_cast<float>(*gptr<u32>(0x7514f4u));  // (from the original)
    S0 = std::bit_cast<float>(*gptr<u32>(0x7514fcu));  // (from the original)
    S1 = S0;
    *gptr<u32>(r0) = u32(std::bit_cast<u32>(S0));
    *gptr<u32>(r0 + 4) = u32(std::bit_cast<u32>(S1));
    *gptr<u32>(r0 + 8) = u32(std::bit_cast<u32>(S2));
    r0 = r13 + 0x30u;  // (from the original)
    r1 = r13;
    r2 = r0;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2;
    r0 = call_0014f3cc(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    *gptr<u32>(r4) = u32(*gptr<u32>(r13 + 0x30u));  // (from the original)
    *gptr<u32>(r4 + 4u) = u32(*gptr<u32>(r13 + 0x34u));  // (from the original)
    r0 = *gptr<u32>(r13 + 0x38u);  // (from the original)
    *gptr<u32>(r4 + 8u) = u32(r0);
    r13 = r13 + 0x50u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    return r0;
}

}  // namespace d_00751410
GUEST_EXPORT(0x00751410, d_00751410::f_00751410);

// f_007516f8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_007516f8 {

inline constexpr guest::Function<0x002f74c8, u32(u32, u32, u32, u32)> call_002f74c8;  // (from the original)
inline constexpr guest::Function<0x002fc934, u32(u32, u32, u32, u32)> call_002fc934;  // (from the original)
inline constexpr guest::Function<0x002fe574, u32(u32, u32, u32, u32)> call_002fe574;  // (from the original)
inline constexpr guest::Function<0x002fe7cc, u32(u32, u32, u32, u32)> call_002fe7cc;  // (from the original)
inline constexpr guest::Function<0x002feb00, u32(u32, u32, u32, u32)> call_002feb00;  // (from the original)
inline constexpr guest::Function<0x00691598, u32(u32, u32, u32, u32)> call_00691598;  // (from the original)
inline constexpr guest::Function<0x006b9da4, u32(u32, u32, u32, u32)> call_006b9da4;  // (from the original)
inline constexpr guest::Function<0x006f9638, u32(u32, u32, u32, u32)> call_006f9638;  // (from the original)
inline constexpr guest::Function<0x0075127c, u32(u32, u32, u32, u32)> call_0075127c;  // (from the original)
inline constexpr guest::Function<0x0076936c, u32(u32, u32, u32, u32)> call_0076936c;  // (from the original)

u32 f_007516f8(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r13 = guest::cpu()->r[13];
    u32 zf = 0;
    r13 = r13 - 0x28u;  // (from the original)
    r4 = r0;
    guest::cpu()->r[13] = r13;
    r0 = call_002f74c8(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r5 = r0;
    guest::cpu()->r[13] = r13;
    r0 = call_006f9638(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0 = call_002fe7cc(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r7 = r0;
    r0 = r5 - 1u & 0xffu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_006f9638(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0 = call_002fe7cc(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r6 = r0;
    r0 = r4 + 0x2eu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00691598(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r5 = r0;
    r1 = r4 + 0x5e4u;  // (from the original)
    r0 = r13 + 0xcu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002fc934(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = r5;
    r0 = r13 + 0xcu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_006b9da4(r0, r1, r2, r3);
    r1 = 0u;
    r3 = r1;
    *gptr<u16>(r13 + 0x10u) = u16(r1);  // (from the original)
    *gptr<u32>(r13) = u32(r13 + 0x10u);  // (from the original)
    r2 = r13 + 8u;
    r1 = r13 + 4u;
    r0 = r4;
    guest::cpu()->r[13] = r13;
    r0 = call_0075127c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    zf = r7 == 0;
    if (!zf) {
        zf = r6 == 0;
    }
    if (zf) {
        goto L_7517e0;
    }
    r4 = r13 + 4u;
    r3 = 0u;
    r1 = *gptr<u32>(r4);
    r2 = *gptr<u32>(r4 + 4);
    r0 = r7;
    guest::cpu()->r[13] = r13;
    r0 = call_002feb00(r0, r1, r2, r3);
    r7 = r0;
    r1 = *gptr<u32>(r4);
    r2 = *gptr<u32>(r4 + 4);
    r3 = 0u;
    r0 = r6;
    guest::cpu()->r[13] = r13;
    r0 = call_002feb00(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    zf = r7 == 0;
    r4 = r0;
    if (!zf) {
        zf = r4 == 0;
    }
    if (zf) {
        goto L_7517e0;
    }
    r1 = r0;
    r0 = r7;
    guest::cpu()->r[13] = r13;
    r0 = call_002fe574(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        goto L_7517e0;
    }
    r0 = r4;
    guest::cpu()->r[13] = r13;
    r0 = call_0076936c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    if (r0 == r5) {
        goto L_7517f4;
    }
L_7517e0:;
    r0 = 0u;
    r13 = r13 + 0x28u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
L_7517f4:;
    r0 = 1u;
    r13 = r13 + 0x28u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_007516f8
GUEST_EXPORT(0x007516f8, d_007516f8::f_007516f8);

// f_00751864: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00751864 {


u32 f_00751864(u32 r0, u32 r1) {
    r0 = r0 + (r1 << 3) + 0x14u;  // (from the original)
    return r0;
}

}  // namespace d_00751864
GUEST_EXPORT(0x00751864, d_00751864::f_00751864);

// f_00751d9c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00751d9c {

struct __attribute__((packed)) Object_00751d9c_0 {
    u8 unknown_0[0x660];  // (not used here)
    u32 word_660;
};
GUEST_OFFSET(Object_00751d9c_0, word_660, 0x660);  // (from the original)

inline constexpr guest::Function<0x0076f550, u32(u32, u32, u32, u32)> call_0076f550;  // (from the original)

u32 f_00751d9c(gptr<Object_00751d9c_0> arg0) {
    u32 res = 0;
    u32 r0 = arg0.addr();
    u32 r1 = 0;
    res = u32(*gptr<u8>(arg0->word_660 + 0x224u)) << 0x1e >> 0x1f;  // (from the original)
    r1 = res;
    if (res == 0) {
        r0 = 0u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    return call_0076f550(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_00751d9c
GUEST_EXPORT(0x00751d9c, d_00751d9c::f_00751d9c);

// f_00751f40: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00751f40 {

inline constexpr guest::Function<0x005c2ce0, u32(u32, u32, u32, u32)> call_005c2ce0;  // (from the original)

u32 f_00751f40(u32 r0, u32 r1, u32 r2, u32 r3, float S0, float S1, float S2, float S3, float S4, float S5) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r13 = guest::cpu()->r[13];
    r5 = r0;
    r0 = r1;
    r13 = r13 - 0x18u;  // (from the original)
    r4 = r2;
    r1 = r3;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2;
    guest::cpu()->s[3] = S3;
    guest::cpu()->s[4] = S4;
    guest::cpu()->s[5] = S5;
    r0 = call_005c2ce0(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    if (r4 == 0) {
        r4 = r5 + 0x14u;  // (from the original)
    }
    if (r0 != 0) {
        S3 = std::bit_cast<float>(*gptr<u32>(r0));
        S4 = std::bit_cast<float>(*gptr<u32>(r0 + 4));
        S2 = std::bit_cast<float>(*gptr<u32>(r4 + 8u)) - std::bit_cast<float>(*gptr<u32>(r0 + 8u));
        r0 = r13;
        S1 = std::bit_cast<float>(*gptr<u32>(r4 + 4)) - S4;
        *gptr<u32>(r0) = u32(std::bit_cast<u32>(std::bit_cast<float>(*gptr<u32>(r4)) - S3));
        *gptr<u32>(r0 + 4) = u32(std::bit_cast<u32>(S1));
        *gptr<u32>(r0 + 8) = u32(std::bit_cast<u32>(S2));
        S1 = std::bit_cast<float>(*gptr<u32>(r13));
        S0 = std::bit_cast<float>(*gptr<u32>(r13 + 8u));
        S1 = S1 * S1 + S0 * S0;
        S0 = sqrtf(S1);
        r13 = r13 + 0x18u;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        guest::cpu()->s[0] = S0;
        guest::cpu()->s[1] = S1;
        return r0;
    }
    r0 = 0x85f2ccu;  // (from the original)
    S1 = std::bit_cast<float>(*gptr<u32>(r0)) * std::bit_cast<float>(*gptr<u32>(0x751fd0u));  // (from the original)
    S0 = S1 * std::bit_cast<float>(*gptr<u32>(0x751fd4u));  // (from the original)
    r13 = r13 + 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    return r0;
}

}  // namespace d_00751f40
GUEST_EXPORT(0x00751f40, d_00751f40::f_00751f40);

// f_0075221c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0075221c {

struct __attribute__((packed)) Object_0075221c_0 {
    u8 unknown_0[0x660];  // (not used here)
    u32 word_660;
};
GUEST_OFFSET(Object_0075221c_0, word_660, 0x660);  // (from the original)


u32 f_0075221c(gptr<Object_0075221c_0> arg0) {
    u32 res = 0;
    u32 r0 = arg0.addr();
    u32 r1 = 0;
    res = u32(*gptr<u8>(arg0->word_660 + 0x224u)) << 0x1d >> 0x1f;  // (from the original)
    r1 = res;
    if (res == 0) {
        r0 = 0u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    res = u32(*gptr<u8>(r0 + 0xb07u)) >> 7;  // (from the original)
    r1 = res;
    if (res != 0) {
        r0 = r0 + 0x80cu;  // (from the original)
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r1 = *gptr<u32>(*gptr<u32>(r0) + 0x5cu);  // (from the original)
    return guest::call_address<u32>(r1, r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_0075221c
GUEST_EXPORT(0x0075221c, d_0075221c::f_0075221c);

// f_007523a8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_007523a8 {

inline constexpr guest::Function<0x00300904, u32(u32, u32, u32, u32)> call_00300904;  // (from the original)
inline constexpr guest::Function<0x0071262c, u32(u32, u32, u32, u32)> call_0071262c;  // (from the original)

u32 f_007523a8(u32 r0) {
    u32 res = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 zf = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r4 = r0;
    r0 = call_00300904(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    if (r0 == 0) {
        goto L_752400;
    }
    r5 = r4 + 0xb06u;  // (from the original)
    res = u32(*gptr<u8>(r4 + 0xb07u)) << 0x1c >> 0x1f;  // (from the original)
    zf = res == 0;
    r0 = res;
    if (!zf) {
        r0 = *gptr<u32>(r4 + 0xaa0u);  // (from the original)
        zf = r0 == 0;
    }
    if (zf) {
        goto L_752400;
    }
    r0 = call_0071262c(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    if (r0 != 0) {
        res = u32(*gptr<u8>(r5 + 2u)) << 0x1b >> 0x1f;  // (from the original)
        if (res == 0) {
            goto L_752400;
        }
    }
    r0 = 0u;
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    return r0;
L_752400:;
    r0 = 1u;
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    return r0;
}

}  // namespace d_007523a8
GUEST_EXPORT(0x007523a8, d_007523a8::f_007523a8);

// f_0075256c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0075256c {

struct __attribute__((packed)) Object_0075256c_0 {
    u32 word_0;
    u8 unknown_4[0x4];  // (not used here)
    u32 word_8;
    u32 word_c;
    u8 unknown_10[0x4];  // (not used here)
    u32 word_14;
};
GUEST_OFFSET(Object_0075256c_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_0075256c_0, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Object_0075256c_0, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Object_0075256c_0, word_14, 0x14);  // (from the original)

struct __attribute__((packed)) Object_0075256c_1 {
    u8 unknown_0[0x14];  // (not used here)
    u32 word_14;
    u8 unknown_18[0x4];  // (not used here)
    u32 word_1c;
};
GUEST_OFFSET(Object_0075256c_1, word_14, 0x14);  // (from the original)
GUEST_OFFSET(Object_0075256c_1, word_1c, 0x1c);  // (from the original)


u32 f_0075256c(gptr<Object_0075256c_0> arg0, gptr<Object_0075256c_1> arg1, float S0, float S1) {
    u32 r0 = arg0.addr();
    u32 r1 = arg1.addr();
    u32 fpsr = guest::cpu()->fpscr;
    r1 = *gptr<u32>(0x94edd8u);  // (from the original)
    if (r1 == 0) {
        r0 = 0u;
        guest::cpu()->r[1] = r1;
        guest::cpu()->s[0] = S0;
        guest::cpu()->s[1] = S1;
        return r0;
    }
    S1 = std::bit_cast<float>(arg1->word_14);
    r1 = *gptr<u32>(r1 + 0x1a4u) + 0x24u;  // (from the original)
    S0 = std::bit_cast<float>(*gptr<u32>(r1));
    fpsr = fpsr & 0xfffffffu | vfp_cmpf(S1, S0 + std::bit_cast<float>(arg0->word_0));  // (from the original)
    if (fpsr >> 0x1e & 1 || fpsr >> 0x1f != (fpsr >> 0x1c & 1)) {  // (from the original)
        r0 = 1u;
        guest::cpu()->r[1] = r1;
        guest::cpu()->s[0] = S0;
        guest::cpu()->s[1] = S1;
        return r0;
    }
    S0 = S0 + std::bit_cast<float>(arg0->word_c);
    fpsr = fpsr & 0xfffffffu | vfp_cmpf(S0, S1);  // (from the original)
    if (fpsr >> 0x1e & 1 || fpsr >> 0x1f != (fpsr >> 0x1c & 1)) {  // (from the original)
        r0 = 1u;
        guest::cpu()->r[1] = r1;
        guest::cpu()->s[0] = S0;
        guest::cpu()->s[1] = S1;
        return r0;
    }
    S0 = std::bit_cast<float>(*gptr<u32>(r1 + 8u));
    S1 = std::bit_cast<float>(arg1->word_1c);
    fpsr = fpsr & 0xfffffffu | vfp_cmpf(S0 + std::bit_cast<float>(arg0->word_8), S1);  // (from the original)
    if (fpsr >> 0x1d & 1) {  // (from the original)
        r0 = 1u;
        guest::cpu()->r[1] = r1;
        guest::cpu()->s[0] = S0;
        guest::cpu()->s[1] = S1;
        return r0;
    }
    S0 = S0 + std::bit_cast<float>(arg0->word_14);
    fpsr = fpsr & 0xfffffffu | vfp_cmpf(S0, S1);  // (from the original)
    if (fpsr >> 0x1e & 1 || fpsr >> 0x1f != (fpsr >> 0x1c & 1)) {  // (from the original)
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

}  // namespace d_0075256c
GUEST_EXPORT(0x0075256c, d_0075256c::f_0075256c);

// f_007525fc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_007525fc {

struct __attribute__((packed)) Object_007525fc_0 {
    u32 word_0;
    u8 unknown_4[0x4];  // (not used here)
    u32 word_8;
    u32 word_c;
    u8 unknown_10[0x4];  // (not used here)
    u32 word_14;
};
GUEST_OFFSET(Object_007525fc_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_007525fc_0, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Object_007525fc_0, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Object_007525fc_0, word_14, 0x14);  // (from the original)


u32 f_007525fc(gptr<Object_007525fc_0> arg0, gptr<Float3> arg1, float S0, float S1) {
    u32 r0 = arg0.addr();
    u32 r2 = 0;
    u32 fpsr = guest::cpu()->fpscr;
    r2 = *gptr<u32>(0x94edd8u);  // (from the original)
    if (r2 == 0) {
        r0 = 0u;
        guest::cpu()->s[0] = S0;
        guest::cpu()->s[1] = S1;
        return r0;
    }
    S1 = arg1->v[0];
    r2 = *gptr<u32>(r2 + 0x1a4u) + 0x24u;  // (from the original)
    S0 = std::bit_cast<float>(*gptr<u32>(r2));
    fpsr = fpsr & 0xfffffffu | vfp_cmpf(S1, S0 + std::bit_cast<float>(arg0->word_0));  // (from the original)
    if (fpsr >> 0x1e & 1 || fpsr >> 0x1f != (fpsr >> 0x1c & 1)) {  // (from the original)
        r0 = 1u;
        guest::cpu()->s[0] = S0;
        guest::cpu()->s[1] = S1;
        return r0;
    }
    S0 = S0 + std::bit_cast<float>(arg0->word_c);
    fpsr = fpsr & 0xfffffffu | vfp_cmpf(S0, S1);  // (from the original)
    if (fpsr >> 0x1e & 1 || fpsr >> 0x1f != (fpsr >> 0x1c & 1)) {  // (from the original)
        r0 = 1u;
        guest::cpu()->s[0] = S0;
        guest::cpu()->s[1] = S1;
        return r0;
    }
    S0 = std::bit_cast<float>(*gptr<u32>(r2 + 8u));
    S1 = arg1->v[2];
    fpsr = fpsr & 0xfffffffu | vfp_cmpf(S0 + std::bit_cast<float>(arg0->word_8), S1);  // (from the original)
    if (fpsr >> 0x1d & 1) {  // (from the original)
        r0 = 1u;
        guest::cpu()->s[0] = S0;
        guest::cpu()->s[1] = S1;
        return r0;
    }
    S0 = S0 + std::bit_cast<float>(arg0->word_14);
    fpsr = fpsr & 0xfffffffu | vfp_cmpf(S0, S1);  // (from the original)
    if (fpsr >> 0x1e & 1 || fpsr >> 0x1f != (fpsr >> 0x1c & 1)) {  // (from the original)
        r0 = 1u;
        guest::cpu()->s[0] = S0;
        guest::cpu()->s[1] = S1;
        return r0;
    }
    r0 = 0u;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    return r0;
}

}  // namespace d_007525fc
GUEST_EXPORT(0x007525fc, d_007525fc::f_007525fc);

// f_007526bc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_007526bc {

struct __attribute__((packed)) Object_007526bc_0 {
    u8 unknown_0[0x68];  // (not used here)
    u32 word_68;
};
GUEST_OFFSET(Object_007526bc_0, word_68, 0x68);  // (from the original)

inline constexpr guest::Function<0x0014f3cc, u32(u32, u32, u32, u32)> call_0014f3cc;  // (from the original)
inline constexpr guest::Function<0x0056afe8, u32(u32, u32, u32, u32)> call_0056afe8;  // (from the original)
inline constexpr guest::Function<0x00744ce4, u32(u32, u32, u32, u32)> call_00744ce4;  // (from the original)
inline constexpr guest::Function<0x00745f80, u32(u32, u32, u32, u32)> call_00745f80;  // (from the original)

u32 f_007526bc(gptr<Object_007526bc_0> arg0, u32 r1, float S0, float S1, float S2_unused, float S3) {
    u32 res = 0;
    u32 r0 = arg0.addr();
    u32 r2 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r13 = guest::cpu()->r[13];
    float S2 = 0;
    r4 = r0;
    r13 = r13 - 0x30u;  // (from the original)
    r5 = *gptr<u32>(0x94edd8u);  // (from the original)
    if (r5 == 0) {
        goto L_7527a4;
    }
    r0 = r13 + 0x10u;  // (from the original)
    S0 = std::bit_cast<float>(*gptr<u32>(0x7527b4u));  // (from the original)
    S1 = std::bit_cast<float>(*gptr<u32>(0x7527b8u));  // (from the original)
    S2 = S0;
    *gptr<u32>(r0) = u32(std::bit_cast<u32>(S0));
    *gptr<u32>(r0 + 4) = u32(std::bit_cast<u32>(S1));
    *gptr<u32>(r0 + 8) = u32(std::bit_cast<u32>(S2));
    r1 = *gptr<u32>(r0);
    r2 = *gptr<u32>(r0 + 4);
    r6 = r13;
    S0 = std::bit_cast<float>(*gptr<u32>(0x7527bcu));  // (from the original)
    *gptr<u32>(r13 + 8u) = u32(*gptr<u32>(r0 + 8u));
    *gptr<u32>(r13) = u32(r1);
    *gptr<u32>(r13 + 4) = u32(r2);
    *gptr<u32>(r13 + 0xcu) = u32(std::bit_cast<u32>(S0));  // (from the original)
    r0 = arg0->word_68 + 0x78u;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2;
    guest::cpu()->s[3] = S3;
    r0 = call_00745f80(r0, r1, r2, guest::cpu()->r[3]);
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    S2 = guest::cpu()->s[2];
    S3 = guest::cpu()->s[3];
    r2 = r6;
    r1 = r0;
    r0 = r2;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2;
    guest::cpu()->s[3] = S3;
    r0 = call_0014f3cc(r0, r1, r2, guest::cpu()->r[3]);
    r2 = guest::cpu()->r[2];
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    S2 = guest::cpu()->s[2];
    S3 = guest::cpu()->s[3];
    r1 = r13;
    r0 = r5 + 0x1acu;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2;
    guest::cpu()->s[3] = S3;
    r0 = call_00744ce4(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    if (r0 == 0) {
        goto L_7527a8;
    }
    r0 = 0x3f7d70a4u;  // (from the original)
    r1 = *gptr<u32>(0xaaf198u);  // (from the original)
    res = r1 - r0;
    if (!(!u32(res == 0) && res >> 0x1f == ((r1 ^ r0) & (r1 ^ res)) >> 0x1f)) {  // (from the original)
        if (s32(r0) <= s32(*gptr<u32>(r4 + 0xae4u))) {  // (from the original)
            r0 = 0u;
            goto L_752760;
        }
    }
    r0 = 1u;
L_752760:;
    r1 = *gptr<u32>(r5 + 0x1a4u);  // (from the original)
    S2 = std::bit_cast<float>(*gptr<u32>(0x7527ccu));  // (from the original)
    S3 = std::bit_cast<float>(*gptr<u32>(r1 + 0x2cu));  // (from the original)
    S1 = std::bit_cast<float>(*gptr<u32>(0x7527c8u));  // (from the original)
    S0 = std::bit_cast<float>(*gptr<u32>(r4 + 0x1cu)) - S3;  // (from the original)
    if (r0 != 0) {
        S1 = S2;
    }
    S2 = std::bit_cast<float>(*gptr<u32>(0x7527d0u));  // (from the original)
    res = u32(*gptr<u8>(r4 + 0xb08u)) << 0x19 >> 0x1f;  // (from the original)
    r0 = res;
    if (res == 0) {
        goto L_7527a4;
    }
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2;
    guest::cpu()->s[3] = S3;
    r0 = call_0056afe8(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    if (r0 == 0) {
        goto L_7527a8;
    }
L_7527a4:;
    r0 = 1u;
L_7527a8:;
    r13 = r13 + 0x30u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    return r0;
}

}  // namespace d_007526bc
GUEST_EXPORT(0x007526bc, d_007526bc::f_007526bc);

// f_00752990: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00752990 {

inline constexpr guest::Function<0x007482bc, u32(u32, u32, u32, u32)> call_007482bc;  // (from the original)

u32 f_00752990(u32 r0) {
    r0 = r0 + 0x10u;  // (from the original)
    return call_007482bc(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_00752990
GUEST_EXPORT(0x00752990, d_00752990::f_00752990);

// f_00752998: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00752998 {

inline constexpr guest::Function<0x00748310, u32(u32, u32, u32, u32)> call_00748310;  // (from the original)

u32 f_00752998(u32 r0) {
    r0 = r0 + 0x10u;  // (from the original)
    return call_00748310(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_00752998
GUEST_EXPORT(0x00752998, d_00752998::f_00752998);

// f_00752bf4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00752bf4 {

struct __attribute__((packed)) Object_00752bf4_0 {
    u8 unknown_0[0xa8];  // (not used here)
    u8 byte_a8;
};
GUEST_OFFSET(Object_00752bf4_0, byte_a8, 0xa8);  // (from the original)

inline constexpr guest::Function<0x00152a10, u32(u32, u32, u32, u32)> call_00152a10;  // (from the original)

u32 f_00752bf4(gptr<Object_00752bf4_0> arg0, u32 r1) {
    u32 r0 = arg0.addr();
    u32 r2 = 0;
    u32 r3 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r13 = guest::cpu()->r[13];
    r4 = r1;
    r1 = u32(arg0->byte_a8);
    r13 = r13 - 0x50u;  // (from the original)
    if (r1 != 1u) {
        r0 = 0u;
        r13 = r13 + 0x50u;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    r1 = 0u;
    r3 = r1;
    r2 = r0;
    *gptr<u32>(r13) = u32(r1);
    r1 = 4u;
    r0 = r13 + 4u;
    guest::cpu()->r[13] = r13;
    r0 = call_00152a10(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    if (r0 != 0) {
        r0 = 0u;
        r13 = r13 + 0x50u;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    r0 = *gptr<u32>(r13 + 0x44u);  // (from the original)
    *gptr<u8>(r4) = u8(0xffu);  // (from the original)
    *gptr<u8>(r4 + 3u) = u8(r0);
    r1 = r0 >> 8;
    *gptr<u8>(r4 + 2u) = u8(r1);
    *gptr<u8>(r4 + 1u) = u8(r0 >> 0x10);  // (from the original)
    r0 = 1u;
    r13 = r13 + 0x50u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_00752bf4
GUEST_EXPORT(0x00752bf4, d_00752bf4::f_00752bf4);

// f_007537c4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_007537c4 {

struct __attribute__((packed)) Object_007537c4_0 {
    u8 unknown_0[0x24];  // (not used here)
    u32 word_24;
    u32 word_28;
};
GUEST_OFFSET(Object_007537c4_0, word_24, 0x24);  // (from the original)
GUEST_OFFSET(Object_007537c4_0, word_28, 0x28);  // (from the original)


u32 f_007537c4(gptr<Object_007537c4_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r1 = 0;
    u32 zf = 0;
    r1 = arg0->word_24;
    zf = r1 == 0;
    if (zf) {
        r0 = arg0->word_28;
        zf = r0 == 0;
    }
    if (!zf) {
        r0 = 1u;
    }
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_007537c4
GUEST_EXPORT(0x007537c4, d_007537c4::f_007537c4);

// f_00753c94: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00753c94 {


u32 f_00753c94(u32 r0, u32 r1, u32 r2) {
    u32 b = 0;
    u32 res = 0;
    u32 sco = 0;
    u32 r3 = 0;
    u32 cf = guest::cpu()->cf;
    b = 1u;
    r3 = b;
    b = (r2 << 3) - r2 << 4;
    r1 = r1 + b;
    b = u32(s32(r1) >> 5);
    r2 = b;
    b = 0x1fu;  // (from the original)
    r1 = r1 & b;
    b = r2 << 2;
    r0 = *gptr<u32>(r0 + b + 4u);
    sco = cf;
    b = lsl_rc(r3, r1 & 0xff, &sco);  // (from the original)
    res = r0 & b;
    r0 = res;
    if (res != 0) {
        r0 = 1u;
    }
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_00753c94
GUEST_EXPORT(0x00753c94, d_00753c94::f_00753c94);

// f_00753cbc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00753cbc {

struct __attribute__((packed)) Object_00753cbc_0 {
    u8 unknown_0[0x20];  // (not used here)
    u32 word_20;
    u32 word_24;
};
GUEST_OFFSET(Object_00753cbc_0, word_20, 0x20);  // (from the original)
GUEST_OFFSET(Object_00753cbc_0, word_24, 0x24);  // (from the original)


u32 f_00753cbc(gptr<Object_00753cbc_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r1 = 0;
    r1 = arg0->word_24;
    r0 = arg0->word_20;
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_00753cbc
GUEST_EXPORT(0x00753cbc, d_00753cbc::f_00753cbc);

// f_00753ccc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00753ccc {

struct __attribute__((packed)) Object_00753ccc_0 {
    u8 unknown_0[0x64];  // (not used here)
    u32 word_64;
};
GUEST_OFFSET(Object_00753ccc_0, word_64, 0x64);  // (from the original)

inline constexpr guest::Function<0x0073663c, u32(u32, u32, u32, u32)> call_0073663c;  // (from the original)

u32 f_00753ccc(gptr<Object_00753ccc_0> arg0, u32 r1, u32 r2) {
    u32 r0 = arg0.addr();
    u32 r4 = guest::cpu()->r[4];
    guest::cpu()->r[13] -= 8u;
    r4 = r0;
    r0 = r4 + 8u;
    if (arg0->word_64 == 0) {
        guest::cpu()->r[13] += 8u;
        return call_0073663c(r0, r1, r2, guest::cpu()->r[3]);
    }
    r0 = call_0073663c(r0, r1, r2, guest::cpu()->r[3]);
    r1 = r0;
    r0 = *gptr<u32>(r4 + 0x64u);  // (from the original)
    r1 = r1 + lsl_r(1u, r0 & 0xff) - 1u;  // (from the original)
    r0 = lsr_r(r1, r0 & 0xff);  // (from the original)
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_00753ccc
GUEST_EXPORT(0x00753ccc, d_00753ccc::f_00753ccc);

// f_00753d0c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00753d0c {

struct __attribute__((packed)) Object_00753d0c_0 {
    u8 unknown_0[0x64];  // (not used here)
    u32 word_64;
};
GUEST_OFFSET(Object_00753d0c_0, word_64, 0x64);  // (from the original)

inline constexpr guest::Function<0x0073666c, u32(u32, u32, u32, u32)> call_0073666c;  // (from the original)

u32 f_00753d0c(gptr<Object_00753d0c_0> arg0, u32 r1, u32 r2) {
    u32 r0 = arg0.addr();
    u32 r4 = guest::cpu()->r[4];
    guest::cpu()->r[13] -= 8u;
    r4 = r0;
    r0 = r4 + 8u;
    if (arg0->word_64 == 0) {
        guest::cpu()->r[13] += 8u;
        return call_0073666c(r0, r1, r2, guest::cpu()->r[3]);
    }
    r0 = call_0073666c(r0, r1, r2, guest::cpu()->r[3]);
    r1 = r0;
    r0 = *gptr<u32>(r4 + 0x64u);  // (from the original)
    r1 = r1 + lsl_r(1u, r0 & 0xff) - 1u;  // (from the original)
    r0 = lsr_r(r1, r0 & 0xff);  // (from the original)
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_00753d0c
GUEST_EXPORT(0x00753d0c, d_00753d0c::f_00753d0c);

// f_00754080: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00754080 {

struct __attribute__((packed)) Object_00754080_0 {
    u8 unknown_0[0x30];  // (not used here)
    u32 word_30;
};
GUEST_OFFSET(Object_00754080_0, word_30, 0x30);  // (from the original)


u32 f_00754080(gptr<Object_00754080_0> arg0) {
    u32 r0 = arg0.addr();
    r0 = (arg0->word_30 & 0xf80u) >> 7;  // (from the original)
    return r0;
}

}  // namespace d_00754080
GUEST_EXPORT(0x00754080, d_00754080::f_00754080);

// f_00754090: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00754090 {

struct __attribute__((packed)) Object_00754090_0 {
    u8 unknown_0[0x30];  // (not used here)
    u32 word_30;
};
GUEST_OFFSET(Object_00754090_0, word_30, 0x30);  // (from the original)


u32 f_00754090(gptr<Object_00754090_0> arg0) {
    u32 r0 = arg0.addr();
    r0 = arg0->word_30 << 0xc >> 0x18;  // (from the original)
    return r0;
}

}  // namespace d_00754090
GUEST_EXPORT(0x00754090, d_00754090::f_00754090);

// f_00754100: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00754100 {

inline constexpr guest::Function<0x00754978, u32(u32, u32, u32, u32)> call_00754978;  // (from the original)
inline constexpr guest::Function<0x00754988, u32(u32, u32, u32, u32)> call_00754988;  // (from the original)

u32 f_00754100(u32 r0, u32 r1) {
    u32 r4 = guest::cpu()->r[4];
    r1 = r1 + (r1 << 3);
    guest::cpu()->r[13] -= 8u;
    r4 = r0 + (r1 << 3);
    r0 = r4 + 8u;
    r0 = call_00754978(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 == 0) {
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r0 = r4 + 8u;
    guest::cpu()->r[13] += 8u;
    return call_00754988(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_00754100
GUEST_EXPORT(0x00754100, d_00754100::f_00754100);

// f_0075412c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0075412c {

inline constexpr guest::Function<0x00142450, u32(u32, u32, u32, u32)> call_00142450;  // (from the original)
inline constexpr guest::Function<0x007541e8, u32(u32, u32, u32, u32)> call_007541e8;  // (from the original)

u32 f_0075412c(u32 r0, u32 r1, u32 r2, u32 r3, float S0, float S1) {
    u32 ea = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r12 = 0;
    u32 r13 = guest::cpu()->r[13];
    u32 zf = 0;
    u32 cf = 0;
    r13 = r13 - 0x18;  // (from the original)
    r4 = r1;
    r6 = r2;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    r0 = call_007541e8(r0, r1, r2, r3);
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    r1 = r0;
    r0 = *gptr<u32>(r4 + 0x10u);  // (from the original)
    r12 = *gptr<u32>(r4 + 0x14u);  // (from the original)
    r3 = *gptr<u32>(r4 + 8u);
    r1 = r0 + (r1 << 3) - r0;
    r0 = r12 - r0;
    r2 = 1u;
    r5 = u32(s32(r1) >> 3);
    r1 = r2 + u32(s32(r0) >> 3);
    if (!(!u32(r1 >= r3) || u32(r1 == r3))) {
        r1 = u32(s32(r0) >> 3) + 1u;
        r0 = r4;
        guest::cpu()->r[13] = r13;
        guest::cpu()->s[0] = S0;
        guest::cpu()->s[1] = S1;
        r0 = call_00142450(r0, r1, r2, r3);
        r12 = guest::cpu()->r[12];
        S0 = guest::cpu()->s[0];
        S1 = guest::cpu()->s[1];
    }
    r1 = u32(s32(*gptr<u32>(r4 + 0x14u) - *gptr<u32>(r4 + 0x10u)) >> 3) - r5;  // (from the original)
    zf = r1 == 0;
    cf = r1 >= 0u;
    r0 = 0u;
    if (cf && !zf) {
        r12 = ~7u;
    }
    if (!cf || zf) {
        goto L_7541c8;
    }
    do {
L_75419c:;
        ea = r4 + 0x10u;  // (from the original)
        r2 = *gptr<u32>(ea);
        r3 = u32(s32(*gptr<u32>(ea + 4) - r2) >> 3) - r0;
        r0 = r0 + 1u;
        r7 = r12 + (r3 << 3);
        r3 = r2 + (r3 << 3);
        r2 = r2 + r7;
        S0 = std::bit_cast<float>(*gptr<u32>(r2));
        S1 = std::bit_cast<float>(*gptr<u32>(r2 + 4));
        *gptr<u32>(r3) = u32(std::bit_cast<u32>(S0));
        *gptr<u32>(r3 + 4) = u32(std::bit_cast<u32>(S1));
        guest::preempt();
    } while (u32(r1 >= r0) && !u32(r1 == r0));
L_7541c8:;
    *gptr<u32>(r4 + 0x14u) = u32(*gptr<u32>(r4 + 0x14u) + 8u);  // (from the original)
    r1 = *gptr<u32>(r6);
    r2 = *gptr<u32>(r6 + 4);
    r0 = *gptr<u32>(r4 + 0x10u) + (r5 << 3);  // (from the original)
    *gptr<u32>(r0) = u32(r1);
    *gptr<u32>(r0 + 4) = u32(r2);
    r13 = r13 + 0x18;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    return r0;
}

}  // namespace d_0075412c
GUEST_EXPORT(0x0075412c, d_0075412c::f_0075412c);

// f_007544a4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_007544a4 {

inline constexpr guest::Function<0x00100835, u32(u32, u32, u32, u32)> call_00100834;  // (from the original)
inline constexpr guest::Function<0x005af748, u32(u32, u32, u32, u32)> call_005af748;  // (from the original)
inline constexpr guest::Function<0x00755504, u32(u32, u32, u32, u32)> call_00755504;  // (from the original)

u32 f_007544a4(u32 r0, u32 r1) {
    u32 r2 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 0x20u;  // (from the original)
    r4 = r1;
    r2 = 9u;
    r1 = r13;
    r0 = r0 + 0x10u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00755504(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_00100834(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 != 8u) {
        r0 = 0u;
        r13 = r13 + 0x20u;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    r1 = u32(*gptr<u16>(r13 + 6u));
    r0 = *gptr<u32>(0x98167cu);  // (from the original)
    if (u32(s32(s8(*gptr<u8>(r0)))) != r1) {
        r0 = 0u;
        r13 = r13 + 0x20u;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    r1 = u32(s32(s8(*gptr<u8>(r0 + 1u))));
    if (r1 != u32(*gptr<u16>(r13 + 8u))) {
        r0 = 0u;
        r13 = r13 + 0x20u;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    r1 = u32(*gptr<u16>(r13 + 0xau));  // (from the original)
    if (u32(s32(s8(*gptr<u8>(r0 + 2u)))) != r1) {
        r0 = 0u;
        r13 = r13 + 0x20u;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    r2 = 2u;
    r1 = r13 + 0xcu;  // (from the original)
    r0 = r13 + 0x14u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_005af748(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 == 0) {
        r13 = r13 + 0x20u;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    if (r4 != 0) {
        *gptr<u32>(r4) = u32(*gptr<u32>(r13 + 0x14u));  // (from the original)
    }
    r0 = 1u;
    r13 = r13 + 0x20u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_007544a4
GUEST_EXPORT(0x007544a4, d_007544a4::f_007544a4);

// f_0075454c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0075454c {

inline constexpr guest::Function<0x0010184d, u32(u32, u32, u32, u32)> call_0010184c;  // (from the original)
inline constexpr guest::Function<0x00755330, u32(u32, u32, u32, u32)> call_00755330;  // (from the original)
inline constexpr guest::Function<0x00755504, u32(u32, u32, u32, u32)> call_00755504;  // (from the original)

u32 f_0075454c(u32 r0, u32 r1, u32 r2_unused, u32 r3) {
    u32 b = 0;
    u32 res = 0;
    u32 sco = 0;
    u32 r2 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r9 = guest::cpu()->r[9];
    u32 r12 = 0;
    u32 r13 = guest::cpu()->r[13];
    u32 nf = 0;
    u32 zf = 0;
    u32 cf = 0;
    u32 vf = 0;
    r5 = r1;
    r13 = r13 - 0x70u;  // (from the original)
    r4 = r0;
    r6 = 9u;
    r2 = r6;
    r1 = r13;
    r0 = r5;
    guest::cpu()->r[13] = r13;
    r0 = call_00755504(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    r2 = r6;
    r1 = r13 + 0x14u;  // (from the original)
    r0 = r5;
    guest::cpu()->r[13] = r13;
    r0 = call_00755330(r0, r1, r2, r3);
    r5 = ~0u;
    r7 = 1u;
    r6 = 0u;
L_75458c:;
    r1 = 6u;
    do {
L_754590:;
        r5 = r5 + 1u;
        res = r5;
        nf = res >> 0x1f;  // (from the original)
        zf = res == 0;
        cf = r5 >= 0u;
        vf = (r5 & (r5 ^ res)) >> 0x1f;  // (from the original)
        if (nf == vf) {
            r0 = *gptr<u32>(r4 + 0x10u);  // (from the original)
            res = r0 - r5;
            nf = res >> 0x1f;  // (from the original)
            zf = res == 0;
            cf = r0 >= r5;
            vf = ((r0 ^ r5) & (r0 ^ res)) >> 0x1f;  // (from the original)
        }
        if (zf || nf != vf) {
            goto L_75469c;
        }
        b = r5 << 3;
        b = r5 + b << 2;
        r0 = *gptr<u32>(*gptr<u32>(r4 + 0xcu) + b + 0x1cu);  // (from the original)
        b = 7u;
        sco = cf;
        b = lsl_rc(r7, r0 & b & 0xff, &sco);  // (from the original)
        guest::preempt();
    } while ((r1 & b) == 0);
    res = r5;
    if (res >> 0x1f != (r5 & (r5 ^ res)) >> 0x1f) {  // (from the original)
        goto L_75469c;
    }
    r8 = r13 + 0x28u;  // (from the original)
    r12 = *gptr<u32>(r4 + 0xcu) + (r5 + (r5 << 3) << 2);  // (from the original)
    r3 = 8u;
    r2 = r12 + 0x14u;  // (from the original)
    r0 = 0u;
L_7545e4:;
    r1 = u32(s32(s8(*gptr<u8>(r2 + r0))));
    if (r1 != 0) {
        r9 = r1 - 0x61u;  // (from the original)
        if (!u32(r9 >= 0x19u) || u32(r9 == 0x19u)) {  // (from the original)
            r1 = r1 - 0x20u;  // (from the original)
        }
        r9 = r8 + (r0 << 1);
        r0 = r0 + 1u;
        res = r0 - r3;
        *gptr<u16>(r9) = u16(sxtb(r1));
        if (res >> 0x1f != ((r0 ^ r3) & (r0 ^ res)) >> 0x1f) {  // (from the original)
            guest::preempt();
            goto L_7545e4;
        }
    }
    r2 = r13 + 0x3cu;  // (from the original)
    *gptr<u16>(r8 + (r0 << 1)) = u16(r6);
    r3 = 8u;
    r12 = r12 + 0xcu;  // (from the original)
    r0 = 0u;
L_75462c:;
    r1 = u32(s32(s8(*gptr<u8>(r12 + r0))));
    if (r1 != 0) {
        r8 = r1 - 0x61u;  // (from the original)
        if (!u32(r8 >= 0x19u) || u32(r8 == 0x19u)) {  // (from the original)
            r1 = r1 - 0x20u;  // (from the original)
        }
        r8 = r2 + (r0 << 1);
        r0 = r0 + 1u;
        res = r0 - r3;
        *gptr<u16>(r8) = u16(sxtb(r1));
        if (res >> 0x1f != ((r0 ^ r3) & (r0 ^ res)) >> 0x1f) {  // (from the original)
            guest::preempt();
            goto L_75462c;
        }
    }
    r1 = r13 + 0x28u;  // (from the original)
    *gptr<u16>(r2 + (r0 << 1)) = u16(r6);
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_0010184c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        r1 = r13 + 0x3cu;  // (from the original)
        r0 = r13 + 0x14u;  // (from the original)
        guest::cpu()->r[13] = r13;
        r0 = call_0010184c(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        if (r0 == 0) {
            goto L_7546a8;
        }
    }
    res = r5;
    if (res >> 0x1f == (r5 & (r5 ^ res)) >> 0x1f) {  // (from the original)
        guest::preempt();
        goto L_75458c;
    }
L_75469c:;
    r0 = ~0u;
    r13 = r13 + 0x70u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
L_7546a8:;
    r0 = r5;
    r13 = r13 + 0x70u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_0075454c
GUEST_EXPORT(0x0075454c, d_0075454c::f_0075454c);

// f_007546b4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_007546b4 {

struct __attribute__((packed)) Object_007546b4_0 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Object_007546b4_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_007546b4_0, word_4, 0x4);  // (from the original)

inline constexpr guest::Function<0x0012e640, u32(u32, u32, u32, u32)> call_0012e640;  // (from the original)

u32 f_007546b4(gptr<Object_007546b4_0> arg0) {
    u32 res = 0;
    u32 r0 = arg0.addr();
    u32 r1 = 0;
    u32 r2 = 0;
    u32 r3 = 0;
    u32 cf = 0;
    r1 = arg0->word_4;
    r2 = 0x15180u;  // (from the original)
    res = r1;
    r0 = arg0->word_0;
    if (res >> 0x1f == (r1 & (r1 ^ res)) >> 0x1f) {  // (from the original)
        r3 = 0u;
        return call_0012e640(r0, r1, r2, r3);
    }
    res = r0 + 0xfffeae81u;  // (from the original)
    cf = res < r0;
    r0 = res;
    r1 = u32(u64(r1) + ~0u + cf);
    r3 = 0u;
    return call_0012e640(r0, r1, r2, r3);
}

}  // namespace d_007546b4
GUEST_EXPORT(0x007546b4, d_007546b4::f_007546b4);

// f_00754830: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00754830 {

inline constexpr guest::Function<0x00129698, u32(u32, u32, u32, u32)> call_00129698;  // (from the original)
inline constexpr guest::Function<0x007546f0, u32(u32, u32, u32, u32)> call_007546f0;  // (from the original)

u32 f_00754830(u32 r0, u32 r1) {
    u32 ea = 0;
    u32 r2 = 0;
    u32 r3 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r12 = 0;
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 0x30u;  // (from the original)
    r4 = r0;
    *gptr<u32>(r13) = u32(r13 + 0x1cu);  // (from the original)
    *gptr<u32>(r13 + 4) = u32(r13 + 0x20u);  // (from the original)
    *gptr<u32>(r13 + 8) = u32(r13 + 0x24u);  // (from the original)
    r12 = r1;
    r3 = r13 + 0x18u;  // (from the original)
    r2 = r13 + 0x14u;  // (from the original)
    r1 = r13 + 0x10u;  // (from the original)
    r0 = r12;
    guest::cpu()->r[13] = r13;
    r0 = call_007546f0(r0, r1, r2, r3);
    ea = r13 + 0x1cu;  // (from the original)
    r1 = *gptr<u32>(ea);
    r2 = *gptr<u32>(ea + 4);
    r3 = *gptr<u32>(ea + 8);
    ea = r13 + 0xcu;  // (from the original)
    *gptr<u32>(ea) = u32(0u);
    r0 = r4;
    ea = r13;
    *gptr<u32>(ea) = u32(r1);
    *gptr<u32>(ea + 4) = u32(r2);
    *gptr<u32>(ea + 8) = u32(r3);
    ea = r13 + 0x10u;  // (from the original)
    r1 = *gptr<u32>(ea);
    r2 = *gptr<u32>(ea + 4);
    r3 = *gptr<u32>(ea + 8);
    guest::cpu()->r[13] = r13;
    r0 = call_00129698(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r13 = r13 + 0x30u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_00754830
GUEST_EXPORT(0x00754830, d_00754830::f_00754830);

// f_00754890: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00754890 {

inline constexpr guest::Function<0x00100ef9, u32(u32, u32, u32, u32)> call_00100ef8;  // (from the original)
inline constexpr guest::Function<0x007546f0, u32(u32, u32, u32, u32)> call_007546f0;  // (from the original)

u32 f_00754890(u32 r0, u32 r1) {
    u32 ea = 0;
    u32 r2 = 0;
    u32 r3 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 0x30u;  // (from the original)
    r4 = r1;
    *gptr<u32>(r13) = u32(r13 + 0x1cu);  // (from the original)
    *gptr<u32>(r13 + 4) = u32(r13 + 0x20u);  // (from the original)
    *gptr<u32>(r13 + 8) = u32(r13 + 0x24u);  // (from the original)
    r3 = r13 + 0x18u;  // (from the original)
    r2 = r13 + 0x14u;  // (from the original)
    r1 = r13 + 0x10u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_007546f0(r0, r1, r2, r3);
    ea = r13 + 0x18u;  // (from the original)
    r0 = *gptr<u32>(ea);
    r1 = *gptr<u32>(ea + 4);
    r2 = *gptr<u32>(ea + 8);
    r3 = *gptr<u32>(ea + 0xc);  // (from the original)
    ea = r13;
    *gptr<u32>(ea) = u32(r0);
    *gptr<u32>(ea + 4) = u32(r1);
    *gptr<u32>(ea + 8) = u32(r2);
    *gptr<u32>(ea + 0xc) = u32(r3);  // (from the original)
    r1 = 0x7548e8u;  // (from the original)
    r0 = r4;
    ea = r13 + 0x10u;  // (from the original)
    r2 = *gptr<u32>(ea);
    r3 = *gptr<u32>(ea + 4);
    guest::cpu()->r[13] = r13;
    r0 = call_00100ef8(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r13 = r13 + 0x30u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_00754890
GUEST_EXPORT(0x00754890, d_00754890::f_00754890);

// f_00754908: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00754908 {

inline constexpr guest::Function<0x005a8b9c, u32(u32, u32, u32, u32)> call_005a8b9c;  // (from the original)
inline constexpr guest::Function<0x005a8c34, u32(u32, u32, u32, u32)> call_005a8c34;  // (from the original)

u32 f_00754908(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 res = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r13 = guest::cpu()->r[13];
    u32 cf = 0;
    r13 = r13 - 0x18u;  // (from the original)
    r4 = r0;
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_005a8c34(r0, r1, r2, r3);
    r2 = *gptr<u32>(r4);
    r3 = *gptr<u32>(r4 + 4);
    r1 = *gptr<u32>(r13);
    r0 = *gptr<u32>(r13 + 4u);
    cf = r2 >= r1;
    r1 = r2 - r1;
    res = u32(u64(r3) + ~r0 + cf);
    if (res >> 0x1f != ((r3 ^ r0) & (r3 ^ res)) >> 0x1f) {  // (from the original)
        r0 = 1u;
        r13 = r13 + 0x18u;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    r0 = r13 + 8u;
    guest::cpu()->r[13] = r13;
    r0 = call_005a8b9c(r0, r1, r2, r3);
    r2 = *gptr<u32>(r4);
    r3 = *gptr<u32>(r4 + 4);
    r1 = *gptr<u32>(r13 + 8u);
    r0 = *gptr<u32>(r13 + 0xcu);  // (from the original)
    cf = r1 >= r2;
    r1 = r1 - r2;
    res = u32(u64(r0) + ~r3 + cf);
    if (res >> 0x1f == ((r0 ^ r3) & (r0 ^ res)) >> 0x1f) {  // (from the original)
        r0 = 0u;
        r13 = r13 + 0x18u;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    r0 = 1u;
    r13 = r13 + 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_00754908
GUEST_EXPORT(0x00754908, d_00754908::f_00754908);

// f_00754964: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00754964 {

struct __attribute__((packed)) Object_00754964_0 {
    u8 unknown_0[0xc];  // (not used here)
    u32 word_c;
};
GUEST_OFFSET(Object_00754964_0, word_c, 0xc);  // (from the original)


u32 f_00754964(gptr<Object_00754964_0> arg0) {
    u32 res = 0;
    u32 r0 = arg0.addr();
    res = u32(*gptr<u16>(arg0->word_c + 0x14u)) & 0x10u;  // (from the original)
    r0 = res;
    if (res != 0) {
        r0 = 1u;
    }
    return r0;
}

}  // namespace d_00754964
GUEST_EXPORT(0x00754964, d_00754964::f_00754964);

// f_00754a3c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00754a3c {

struct __attribute__((packed)) Object_00754a3c_0 {
    u8 unknown_0[0xc];  // (not used here)
    u32 word_c;
};
GUEST_OFFSET(Object_00754a3c_0, word_c, 0xc);  // (from the original)


u32 f_00754a3c(gptr<Object_00754a3c_0> arg0, u32 r1) {
    u32 r0 = arg0.addr();
    r1 = r1 + (r1 << 1);
    r0 = arg0->word_c + (r1 << 2);
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_00754a3c
GUEST_EXPORT(0x00754a3c, d_00754a3c::f_00754a3c);

// f_00754b40: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00754b40 {

struct __attribute__((packed)) Object_00754b40_0 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
};
GUEST_OFFSET(Object_00754b40_0, word_4, 0x4);  // (from the original)


u32 f_00754b40(gptr<Object_00754b40_0> arg0) {
    u32 r0 = arg0.addr();
    r0 = (arg0->word_4 & 0x1cu) >> 2;  // (from the original)
    return r0;
}

}  // namespace d_00754b40
GUEST_EXPORT(0x00754b40, d_00754b40::f_00754b40);

// f_00754b50: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00754b50 {

struct __attribute__((packed)) Object_00754b50_0 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
};
GUEST_OFFSET(Object_00754b50_0, word_4, 0x4);  // (from the original)


u32 f_00754b50(gptr<Object_00754b50_0> arg0) {
    u32 r0 = arg0.addr();
    r0 = arg0->word_4 & 3u;
    return r0;
}

}  // namespace d_00754b50
GUEST_EXPORT(0x00754b50, d_00754b50::f_00754b50);

// f_00754b5c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00754b5c {

struct __attribute__((packed)) Object_00754b5c_0 {
    u32 word_0;
};
GUEST_OFFSET(Object_00754b5c_0, word_0, 0x0);  // (from the original)


u32 f_00754b5c(gptr<Object_00754b5c_0> arg0) {
    u32 r0 = arg0.addr();
    r0 = arg0->word_0 >> 0x12;  // (from the original)
    return r0;
}

}  // namespace d_00754b5c
GUEST_EXPORT(0x00754b5c, d_00754b5c::f_00754b5c);

// f_00754b68: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00754b68 {

struct __attribute__((packed)) Object_00754b68_0 {
    u32 word_0;
};
GUEST_OFFSET(Object_00754b68_0, word_0, 0x0);  // (from the original)


u32 f_00754b68(gptr<Object_00754b68_0> arg0) {
    u32 r0 = arg0.addr();
    r0 = u32(s32(arg0->word_0 << 0xe) >> 0xe);  // (from the original)
    return r0;
}

}  // namespace d_00754b68
GUEST_EXPORT(0x00754b68, d_00754b68::f_00754b68);

// f_00754b78: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00754b78 {

struct __attribute__((packed)) Object_00754b78_0 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
};
GUEST_OFFSET(Object_00754b78_0, word_4, 0x4);  // (from the original)

inline constexpr guest::Function<0x00472b38, u32(u32, u32, u32, u32)> call_00472b38;  // (from the original)
inline constexpr guest::Function<0x005a8ea0, u32(u32, u32, u32, u32)> call_005a8ea0;  // (from the original)
inline constexpr guest::Function<0x00754830, u32(u32, u32, u32, u32)> call_00754830;  // (from the original)

u32 f_00754b78(gptr<Object_00754b78_0> arg0, u32 r1) {
    u32 ea = 0;
    u32 r0 = arg0.addr();
    u32 r4 = guest::cpu()->r[4];
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 0x30u;  // (from the original)
    r4 = r1;
    r0 = arg0->word_4;
    r1 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_00472b38(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 != 0x14u) {  // (from the original)
        r0 = 0u;
        r13 = r13 + 0x30u;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    r1 = r13;
    r0 = r13 + 0x20u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_005a8ea0(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 == 0) {
        r13 = r13 + 0x30u;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    r1 = r13 + 0x20u;  // (from the original)
    r0 = r13 + 0x18u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00754830(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    ea = r13 + 0x18u;  // (from the original)
    r1 = *gptr<u32>(ea + 4);
    *gptr<u32>(r4) = u32(*gptr<u32>(ea));
    *gptr<u32>(r4 + 4) = u32(r1);
    r0 = 1u;
    r13 = r13 + 0x30u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_00754b78
GUEST_EXPORT(0x00754b78, d_00754b78::f_00754b78);

// f_00754bd0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00754bd0 {

struct __attribute__((packed)) Object_00754bd0_0 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
};
GUEST_OFFSET(Object_00754bd0_0, word_4, 0x4);  // (from the original)

inline constexpr guest::Function<0x002f8574, u32(u32, u32, u32, u32)> call_002f8574;  // (from the original)
inline constexpr guest::Function<0x00736694, u32(u32, u32, u32, u32)> call_00736694;  // (from the original)
inline constexpr guest::Function<0x00736728, u32(u32, u32, u32, u32)> call_00736728;  // (from the original)

u32 f_00754bd0(gptr<Object_00754bd0_0> arg0, u32 r1, u32 r2) {
    u32 r0 = arg0.addr();
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r4 = r0;
    r5 = r1;
    r0 = arg0->word_4;
    r1 = 1u;
    r0 = call_00736728(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    if (r0 == 0) {
        goto L_754c34;
    }
    r0 = *gptr<u32>(r4 + 4u);
    r1 = 1u;
    r0 = call_00736694(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    if (u32(r0 >= 0x40u) && !u32(r0 == 0x40u)) {  // (from the original)
        goto L_754c34;
    }
    r0 = *gptr<u32>(r4 + 4u);
    r1 = 1u;
    r0 = call_00736728(r0, r1, r2, guest::cpu()->r[3]);
    r1 = r0;
    r2 = 0x40u;  // (from the original)
    r0 = r5;
    r0 = call_002f8574(r0, r1, r2, guest::cpu()->r[3]);
    r1 = 0x31534433u;  // (from the original)
    if (*gptr<u32>(r5) == r1) {
        r0 = 1u;
        goto L_754c38;
    }
L_754c34:;
    r0 = 0u;
L_754c38:;
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_00754bd0
GUEST_EXPORT(0x00754bd0, d_00754bd0::f_00754bd0);

// f_00754c40: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00754c40 {

inline constexpr guest::Function<0x00736728, u32(u32, u32, u32, u32)> call_00736728;  // (from the original)
inline constexpr guest::Function<0x00754bd0, u32(u32, u32, u32, u32)> call_00754bd0;  // (from the original)

u32 f_00754c40(u32 r0) {
    u32 r1 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 0x48u;  // (from the original)
    r4 = r0;
    r1 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_00754bd0(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 == 0) {
        r13 = r13 + 0x48u;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    r0 = *gptr<u32>(r4 + 4u);
    r1 = 1u;
    guest::cpu()->r[13] = r13;
    r0 = call_00736728(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r13 = r13 + 0x48u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_00754c40
GUEST_EXPORT(0x00754c40, d_00754c40::f_00754c40);

// f_00754c70: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00754c70 {

struct __attribute__((packed)) Object_00754c70_0 {
    u8 unknown_0[0xa];  // (not used here)
    u8 byte_a;
};
GUEST_OFFSET(Object_00754c70_0, byte_a, 0xa);  // (from the original)


u32 f_00754c70(gptr<Object_00754c70_0> arg0) {
    u32 r0 = arg0.addr();
    u32 zf = 0;
    r0 = u32(arg0->byte_a);
    zf = r0 == 0;
    if (!zf) {
        zf = r0 == 1u;
    }
    if (zf) {
        return r0;
    } else {
        r0 = 2u;
    }
    return r0;
}

}  // namespace d_00754c70
GUEST_EXPORT(0x00754c70, d_00754c70::f_00754c70);

// f_00754c88: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00754c88 {

struct __attribute__((packed)) Object_00754c88_0 {
    u8 unknown_0[0xc];  // (not used here)
    u32 word_c;
};
GUEST_OFFSET(Object_00754c88_0, word_c, 0xc);  // (from the original)

inline constexpr guest::Function<0x005b060c, u32(u32, u32, u32, u32)> call_005b060c;  // (from the original)
inline constexpr guest::Function<0x005b0640, u32(u32, u32, u32, u32)> call_005b0640;  // (from the original)

u32 f_00754c88(gptr<Object_00754c88_0> arg0, u32 r1_unused, u32 r2_unused, u32 r3) {
    u32 r0 = arg0.addr();
    u32 r1 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r13 = guest::cpu()->r[13];
    *gptr<u32>(r13 + 0xfffffff0u) = u32(r3);  // (from the original)
    r13 = r13 - 0x10;  // (from the original)
    r4 = r0;
    r1 = arg0->word_c << 0x15 >> 0x16;  // (from the original)
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_005b0640(r0, r1, guest::cpu()->r[2], r3);
    r3 = guest::cpu()->r[3];
    r1 = *gptr<u32>(r4 + 0xcu) << 0xe >> 0x19;  // (from the original)
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_005b060c(r0, r1, guest::cpu()->r[2], r3);
    r1 = guest::cpu()->r[1];
    r0 = *gptr<u32>(r13);
    r13 = r13 + 0x10;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_00754c88
GUEST_EXPORT(0x00754c88, d_00754c88::f_00754c88);

// f_00754cc0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00754cc0 {

struct __attribute__((packed)) Object_00754cc0_0 {
    u8 unknown_0[0xf];  // (not used here)
    u8 byte_f;
};
GUEST_OFFSET(Object_00754cc0_0, byte_f, 0xf);  // (from the original)


u32 f_00754cc0(gptr<Object_00754cc0_0> arg0, u32 r1) {
    u32 b = 0;
    u32 res = 0;
    u32 sco = 0;
    u32 r0 = arg0.addr();
    u32 cf = guest::cpu()->cf;
    b = 1u;
    sco = cf;
    b = lsl_rc(b, r1 & 0xff, &sco);  // (from the original)
    res = u32(arg0->byte_f) & b;
    r0 = res;
    if (res != 0) {
        r0 = 1u;
    }
    return r0;
}

}  // namespace d_00754cc0
GUEST_EXPORT(0x00754cc0, d_00754cc0::f_00754cc0);

// f_00754cd4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00754cd4 {


u32 f_00754cd4(u32 r0, u32 r1) {
    r0 = *gptr<u32>(r0 + (r1 << 2) + 0x10u);  // (from the original)
    return r0;
}

}  // namespace d_00754cd4
GUEST_EXPORT(0x00754cd4, d_00754cd4::f_00754cd4);

// f_00754ce0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00754ce0 {

struct __attribute__((packed)) Object_00754ce0_0 {
    u8 unknown_0[0xe];  // (not used here)
    u8 byte_e;
};
GUEST_OFFSET(Object_00754ce0_0, byte_e, 0xe);  // (from the original)


u32 f_00754ce0(gptr<Object_00754ce0_0> arg0) {
    u32 r0 = arg0.addr();
    u32 zf = 0;
    r0 = u32(arg0->byte_e);
    zf = r0 == 0;
    if (!zf) {
        zf = r0 == 1u;
    }
    if (zf) {
        return r0;
    } else {
        r0 = 2u;
    }
    return r0;
}

}  // namespace d_00754ce0
GUEST_EXPORT(0x00754ce0, d_00754ce0::f_00754ce0);

// f_00754eb8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00754eb8 {

inline constexpr guest::Function<0x001017e5, u32(u32, u32, u32, u32)> call_001017e4;  // (from the original)
inline constexpr guest::Function<0x005ae51c, u32(u32, u32, u32, u32)> call_005ae51c;  // (from the original)

u32 f_00754eb8(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 res = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r12 = 0;
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 0x18;  // (from the original)
    r4 = r1;
    r1 = r2;
    r5 = r0;
    r2 = r3;
    r3 = *gptr<u32>(r13 + 0x18u);  // (from the original)
    r0 = r4;
    guest::cpu()->r[13] = r13;
    r0 = call_005ae51c(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r6 = r0;
    r1 = 0x8c14e4u;  // (from the original)
    r0 = r4 + (r6 << 1);
    guest::cpu()->r[13] = r13;
    r0 = call_001017e4(r0, r1, r2, r3);
    r6 = r6 + 1u;
    r12 = 8u;
    r1 = r4 + (r6 << 1);
    r3 = r5 + 0x14u;  // (from the original)
    r0 = 0u;
L_754efc:;
    r2 = u32(s32(s8(*gptr<u8>(r3 + r0))));
    if (r2 != 0) {
        r7 = r2 - 0x61u;  // (from the original)
        if (!u32(r7 >= 0x19u) || u32(r7 == 0x19u)) {  // (from the original)
            r2 = r2 - 0x20u;  // (from the original)
        }
        r7 = r1 + (r0 << 1);
        r0 = r0 + 1u;
        r2 = sxtb(r2);
        res = r0 - r12;
        *gptr<u16>(r7) = u16(r2);
        if (res >> 0x1f != ((r0 ^ r12) & (r0 ^ res)) >> 0x1f) {  // (from the original)
            guest::preempt();
            goto L_754efc;
        }
    }
    r7 = 0u;
    r6 = r6 + r0;
    *gptr<u16>(r1 + (r0 << 1)) = u16(r7);
    r1 = 0x8c14e4u;  // (from the original)
    r0 = r4 + (r6 << 1);
    guest::cpu()->r[13] = r13;
    r0 = call_001017e4(r0, r1, r2, r3);
    r3 = r6 + 1u;
    r6 = 8u;
    r1 = r4 + (r3 << 1);
    r12 = r5 + 0xcu;  // (from the original)
    r0 = 0u;
L_754f5c:;
    r2 = u32(s32(s8(*gptr<u8>(r12 + r0))));
    if (r2 != 0) {
        r8 = r2 - 0x61u;  // (from the original)
        if (!u32(r8 >= 0x19u) || u32(r8 == 0x19u)) {  // (from the original)
            r2 = r2 - 0x20u;  // (from the original)
        }
        r8 = r1 + (r0 << 1);
        r0 = r0 + 1u;
        r2 = sxtb(r2);
        res = r0 - r6;
        *gptr<u16>(r8) = u16(r2);
        if (res >> 0x1f != ((r0 ^ r6) & (r0 ^ res)) >> 0x1f) {  // (from the original)
            guest::preempt();
            goto L_754f5c;
        }
    }
    r6 = r0 + r3;
    *gptr<u16>(r1 + (r0 << 1)) = u16(r7);
    r1 = 0x8c14e8u;  // (from the original)
    r0 = r4 + (r6 << 1);
    guest::cpu()->r[13] = r13;
    r0 = call_001017e4(r0, r1, r2, r3);
    r12 = r6 + 1u;
    r3 = r5 + 8u;
    r1 = r4 + (r12 << 1);
    r4 = 4u;
    r0 = 0u;
L_754fb8:;
    r2 = u32(s32(s8(*gptr<u8>(r3 + r0))));
    if (r2 != 0) {
        r5 = r2 - 0x61u;  // (from the original)
        if (!u32(r5 >= 0x19u) || u32(r5 == 0x19u)) {  // (from the original)
            r2 = r2 - 0x20u;  // (from the original)
        }
        r5 = r1 + (r0 << 1);
        r0 = r0 + 1u;
        res = r0 - r4;
        *gptr<u16>(r5) = u16(sxtb(r2));
        if (res >> 0x1f != ((r0 ^ r4) & (r0 ^ res)) >> 0x1f) {  // (from the original)
            guest::preempt();
            goto L_754fb8;
        }
    }
    r1 = r1 + (r0 << 1);
    r0 = r0 + r12;
    *gptr<u16>(r1) = u16(r7);
    r13 = r13 + 0x18;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_00754eb8
GUEST_EXPORT(0x00754eb8, d_00754eb8::f_00754eb8);

// f_00755000: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00755000 {

inline constexpr guest::Function<0x001017e5, u32(u32, u32, u32, u32)> call_001017e4;  // (from the original)
inline constexpr guest::Function<0x005ae51c, u32(u32, u32, u32, u32)> call_005ae51c;  // (from the original)

u32 f_00755000(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 res = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r12 = 0;
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 0x18;  // (from the original)
    r4 = r1;
    r1 = r2;
    r7 = r0;
    r2 = r3;
    r3 = *gptr<u32>(r13 + 0x1cu);  // (from the original)
    r6 = *gptr<u32>(r13 + 0x18u);  // (from the original)
    r0 = r4;
    guest::cpu()->r[13] = r13;
    r0 = call_005ae51c(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r5 = r0;
    r1 = 0x8c14e4u;  // (from the original)
    r0 = r4 + (r5 << 1);
    guest::cpu()->r[13] = r13;
    r0 = call_001017e4(r0, r1, r2, r3);
    r3 = r5 + 1u;
    r5 = 8u;
    r1 = r4 + (r3 << 1);
    r12 = r7 + 0x14u;  // (from the original)
    r0 = 0u;
L_755048:;
    r2 = u32(s32(s8(*gptr<u8>(r12 + r0))));
    if (r2 != 0) {
        r8 = r2 - 0x61u;  // (from the original)
        if (!u32(r8 >= 0x19u) || u32(r8 == 0x19u)) {  // (from the original)
            r2 = r2 - 0x20u;  // (from the original)
        }
        r8 = r1 + (r0 << 1);
        r0 = r0 + 1u;
        r2 = sxtb(r2);
        res = r0 - r5;
        *gptr<u16>(r8) = u16(r2);
        if (res >> 0x1f != ((r0 ^ r5) & (r0 ^ res)) >> 0x1f) {  // (from the original)
            guest::preempt();
            goto L_755048;
        }
    }
    r8 = 0u;
    r5 = r0 + r3;
    *gptr<u16>(r1 + (r0 << 1)) = u16(r8);
    r1 = 0x8c14e4u;  // (from the original)
    r0 = r4 + (r5 << 1);
    guest::cpu()->r[13] = r13;
    r0 = call_001017e4(r0, r1, r2, r3);
    r3 = r5 + 1u;
    r12 = 8u;
    r1 = r4 + (r3 << 1);
    r5 = r7 + 0xcu;  // (from the original)
    r0 = 0u;
L_7550a8:;
    r2 = u32(s32(s8(*gptr<u8>(r5 + r0))));
    if (r2 != 0) {
        r7 = r2 - 0x61u;  // (from the original)
        if (!u32(r7 >= 0x19u) || u32(r7 == 0x19u)) {  // (from the original)
            r2 = r2 - 0x20u;  // (from the original)
        }
        r7 = r1 + (r0 << 1);
        r0 = r0 + 1u;
        r2 = sxtb(r2);
        res = r0 - r12;
        *gptr<u16>(r7) = u16(r2);
        if (res >> 0x1f != ((r0 ^ r12) & (r0 ^ res)) >> 0x1f) {  // (from the original)
            guest::preempt();
            goto L_7550a8;
        }
    }
    r5 = r0 + r3;
    *gptr<u16>(r1 + (r0 << 1)) = u16(r8);
    r7 = *gptr<u32>(0x8c1474u + (r6 << 2));  // (from the original)
    r1 = *gptr<u32>(0x981698u + (r6 << 2));  // (from the original)
    r0 = r4 + (r5 << 1);
    guest::cpu()->r[13] = r13;
    r0 = call_001017e4(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r0 = r5 + r7;
    r13 = r13 + 0x18;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_00755000
GUEST_EXPORT(0x00755000, d_00755000::f_00755000);

// f_00755110: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00755110 {

struct __attribute__((packed)) Object_00755110_0 {
    u8 unknown_0[0x1c];  // (not used here)
    u32 word_1c;
    u32 word_20;
    u32 word_24;
    u32 word_28;
};
GUEST_OFFSET(Object_00755110_0, word_1c, 0x1c);  // (from the original)
GUEST_OFFSET(Object_00755110_0, word_20, 0x20);  // (from the original)
GUEST_OFFSET(Object_00755110_0, word_24, 0x24);  // (from the original)
GUEST_OFFSET(Object_00755110_0, word_28, 0x28);  // (from the original)

inline constexpr guest::Function<0x005aa50c, u32(u32, u32, u32, u32)> call_005aa50c;  // (from the original)

u32 f_00755110(gptr<Object_00755110_0> arg0, u32 r1) {
    u32 res = 0;
    u32 r0 = arg0.addr();
    u32 r2 = 0;
    u32 r3 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r13 = guest::cpu()->r[13];
    u32 nf = 0;
    u32 zf = 0;
    u32 vf = 0;
    r4 = r0;
    r13 = r13 - 0x10u;  // (from the original)
    zf = arg0->word_1c == 0;
    if (!zf) {
        zf = arg0->word_20 == 0;
    }
    if (zf) {
        r0 = 2u;
        r13 = r13 + 0x10u;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    r3 = 0x300u;  // (from the original)
    r2 = 0x400u;  // (from the original)
    *gptr<u32>(r13) = u32(arg0->word_24);
    r1 = r13 + 4u;
    *gptr<u32>(r13 + 4u) = u32(arg0->word_28);
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_005aa50c(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r1 = *gptr<u32>(r13);
    res = r1 - 0xa0u;  // (from the original)
    nf = res >> 0x1f;  // (from the original)
    vf = ((r1 ^ 0xa0u) & (r1 ^ res)) >> 0x1f;  // (from the original)
    if (nf == vf) {
        r2 = *gptr<u32>(r13 + 4u);
        res = r2 - 0x78u;  // (from the original)
        nf = res >> 0x1f;  // (from the original)
        vf = ((r2 ^ 0x78u) & (r2 ^ res)) >> 0x1f;  // (from the original)
    }
    if (nf != vf) {
        r0 = 2u;
        r13 = r13 + 0x10u;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    res = r1 - 0x400u;  // (from the original)
    nf = res >> 0x1f;  // (from the original)
    zf = res == 0;
    vf = ((r1 ^ 0x400u) & (r1 ^ res)) >> 0x1f;  // (from the original)
    if (zf || nf != vf) {
        res = r2 - 0x300u;  // (from the original)
        nf = res >> 0x1f;  // (from the original)
        zf = res == 0;
        vf = ((r2 ^ 0x300u) & (r2 ^ res)) >> 0x1f;  // (from the original)
    }
    if (!zf && nf == vf) {
        r0 = 2u;
        r13 = r13 + 0x10u;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    res = r0 - 2u;
    if (!u32(res == 0) && res >> 0x1f == ((r0 ^ 2u) & (r0 ^ res)) >> 0x1f) {  // (from the original)
        r0 = 2u;
        r13 = r13 + 0x10u;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    r0 = *gptr<u32>(r4 + 0x24u);  // (from the original)
    if ((r0 & 7u) != 0) {
        r0 = 2u;
        r13 = r13 + 0x10u;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    r1 = *gptr<u32>(r4 + 0x28u);  // (from the original)
    if ((r1 & 7u) != 0) {
        r0 = 2u;
        r13 = r13 + 0x10u;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    r2 = *gptr<u32>(r4 + 0xcu);  // (from the original)
    if ((u32(*gptr<u16>(r2 + 0x14u)) & 0x10u) != 0) {  // (from the original)
        res = r0 - 0x190u;  // (from the original)
        nf = res >> 0x1f;  // (from the original)
        vf = ((r0 ^ 0x190u) & (r0 ^ res)) >> 0x1f;  // (from the original)
        if (nf == vf) {
            res = r1 - 0xf0u;  // (from the original)
            nf = res >> 0x1f;  // (from the original)
            vf = ((r1 ^ 0xf0u) & (r1 ^ res)) >> 0x1f;  // (from the original)
        }
        if (nf != vf) {
            r0 = 2u;
            r13 = r13 + 0x10u;  // (from the original)
            guest::cpu()->r[1] = r1;
            guest::cpu()->r[13] = r13;
            return r0;
        }
        res = r0 - 0x400u;  // (from the original)
        nf = res >> 0x1f;  // (from the original)
        zf = res == 0;
        vf = ((r0 ^ 0x400u) & (r0 ^ res)) >> 0x1f;  // (from the original)
        if (zf || nf != vf) {
            res = r1 - 0x300u;  // (from the original)
            nf = res >> 0x1f;  // (from the original)
            zf = res == 0;
            vf = ((r1 ^ 0x300u) & (r1 ^ res)) >> 0x1f;  // (from the original)
        }
        if (!zf && nf == vf) {
            r0 = 2u;
            r13 = r13 + 0x10u;  // (from the original)
            guest::cpu()->r[1] = r1;
            guest::cpu()->r[13] = r13;
            return r0;
        }
    }
    r0 = *gptr<u32>(r4 + 0x14u);  // (from the original)
    if (s32(r0) < s32(1u)) {
        r0 = 2u;
        r13 = r13 + 0x10u;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    res = r0 - 0x64u;  // (from the original)
    if (!u32(res == 0) && res >> 0x1f == ((r0 ^ 0x64u) & (r0 ^ res)) >> 0x1f) {  // (from the original)
        r0 = 2u;
        r13 = r13 + 0x10u;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    zf = (u32(*gptr<u16>(r2 + 0x16u)) & 1u) == 0;  // (from the original)
    if (!zf) {
        zf = u32(*gptr<u8>(r4 + 0x10u)) == 0;  // (from the original)
    }
    if (!zf) {
        r0 = 0u;
        r13 = r13 + 0x10u;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    r0 = 2u;
    r13 = r13 + 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_00755110
GUEST_EXPORT(0x00755110, d_00755110::f_00755110);

// f_007551f4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_007551f4 {

struct __attribute__((packed)) Object_007551f4_0 {
    u16 half_0;
    u16 half_2;
    u16 half_4;
    u16 half_6;
    u16 half_8;
};
GUEST_OFFSET(Object_007551f4_0, half_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_007551f4_0, half_2, 0x2);  // (from the original)
GUEST_OFFSET(Object_007551f4_0, half_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_007551f4_0, half_6, 0x6);  // (from the original)
GUEST_OFFSET(Object_007551f4_0, half_8, 0x8);  // (from the original)


u32 f_007551f4(gptr<Object_007551f4_0> arg0) {
    u32 res = 0;
    u32 r0 = arg0.addr();
    u32 r1 = 0;
    res = u32(arg0->half_0) & ~0xfc00u;  // (from the original)
    r1 = res;
    if (res == 0) {
        r0 = 1u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r1 = r1 - 1u;
    if (r1 >= 0x3e8u) {  // (from the original)
        r0 = 0u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r1 = u32(arg0->half_2);
    if (u32(arg0->half_6) < r1) {
        r0 = 0u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r1 = u32(arg0->half_4);
    r0 = u32(arg0->half_8);
    if (!u32(r1 >= r0) || u32(r1 == r0)) {
        r0 = 1u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r0 = 0u;
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_007551f4
GUEST_EXPORT(0x007551f4, d_007551f4::f_007551f4);

// f_0075523c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0075523c {

struct __attribute__((packed)) Object_0075523c_0 {
    u8 unknown_0[0x4];  // (not used here)
    u8 byte_4;
    u8 unknown_5[0xf];  // (not used here)
    u32 word_14;
    u32 word_18;
    u32 word_1c;
    u32 word_20;
    u32 word_24;
};
GUEST_OFFSET(Object_0075523c_0, byte_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_0075523c_0, word_14, 0x14);  // (from the original)
GUEST_OFFSET(Object_0075523c_0, word_18, 0x18);  // (from the original)
GUEST_OFFSET(Object_0075523c_0, word_1c, 0x1c);  // (from the original)
GUEST_OFFSET(Object_0075523c_0, word_20, 0x20);  // (from the original)
GUEST_OFFSET(Object_0075523c_0, word_24, 0x24);  // (from the original)


u32 f_0075523c(gptr<Object_0075523c_0> arg0) {
    u32 res = 0;
    u32 r0 = arg0.addr();
    u32 r1 = 0;
    u32 r2 = 0;
    u32 zf = 0;
    r1 = u32(arg0->byte_4);
    if (r1 == 0) {
        r0 = 0u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r1 = arg0->word_20;
    r2 = arg0->word_24;
    res = r2 - r1;
    if (!u32(res == 0) && res >> 0x1f == ((r2 ^ r1) & (r2 ^ res)) >> 0x1f) {  // (from the original)
        r0 = 0u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r1 = arg0->word_1c;
    if (s32(r1) >= s32(arg0->word_18)) {
        r0 = 0u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r1 = r1 + (r1 << 2) + (r1 << 6);
    res = arg0->word_14 + (r1 << 3);
    zf = res == 0;
    r0 = res;
    if (!zf) {
        zf = u32(*gptr<u8>(r0 + 0x21cu)) == 0;  // (from the original)
    }
    if (!zf) {
        r0 = 1u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r0 = 0u;
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_0075523c
GUEST_EXPORT(0x0075523c, d_0075523c::f_0075523c);

// f_00755290: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00755290 {

struct __attribute__((packed)) Object_00755290_0 {
    u8 unknown_0[0x4];  // (not used here)
    u8 byte_4;
    u8 unknown_5[0xf];  // (not used here)
    u32 word_14;
    u32 word_18;
    u32 word_1c;
    u32 word_20;
    u32 word_24;
};
GUEST_OFFSET(Object_00755290_0, byte_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_00755290_0, word_14, 0x14);  // (from the original)
GUEST_OFFSET(Object_00755290_0, word_18, 0x18);  // (from the original)
GUEST_OFFSET(Object_00755290_0, word_1c, 0x1c);  // (from the original)
GUEST_OFFSET(Object_00755290_0, word_20, 0x20);  // (from the original)
GUEST_OFFSET(Object_00755290_0, word_24, 0x24);  // (from the original)


u32 f_00755290(gptr<Object_00755290_0> arg0) {
    u32 res = 0;
    u32 r0 = arg0.addr();
    u32 r1 = 0;
    u32 r2 = 0;
    r1 = u32(arg0->byte_4);
    if (r1 == 0) {
        r0 = 0u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r1 = arg0->word_20;
    r2 = arg0->word_24;
    res = r2 - r1;
    if (!u32(res == 0) && res >> 0x1f == ((r2 ^ r1) & (r2 ^ res)) >> 0x1f) {  // (from the original)
        r0 = 0u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r1 = arg0->word_1c;
    if (s32(r1) >= s32(arg0->word_18)) {
        r0 = 0u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r1 = r1 + (r1 << 2) + (r1 << 6);
    res = arg0->word_14 + (r1 << 3);
    r0 = res;
    if (res == 0) {
        r0 = 0u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    if (u32(*gptr<u8>(r0 + 0x21cu)) == 0) {  // (from the original)
        r0 = 1u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r0 = 0u;
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_00755290
GUEST_EXPORT(0x00755290, d_00755290::f_00755290);

// f_007552e8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_007552e8 {

struct __attribute__((packed)) Object_007552e8_0 {
    u8 unknown_0[0x4];  // (not used here)
    u8 byte_4;
    u8 unknown_5[0xf];  // (not used here)
    u32 word_14;
    u32 word_18;
    u32 word_1c;
    u32 word_20;
    u32 word_24;
};
GUEST_OFFSET(Object_007552e8_0, byte_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_007552e8_0, word_14, 0x14);  // (from the original)
GUEST_OFFSET(Object_007552e8_0, word_18, 0x18);  // (from the original)
GUEST_OFFSET(Object_007552e8_0, word_1c, 0x1c);  // (from the original)
GUEST_OFFSET(Object_007552e8_0, word_20, 0x20);  // (from the original)
GUEST_OFFSET(Object_007552e8_0, word_24, 0x24);  // (from the original)


u32 f_007552e8(gptr<Object_007552e8_0> arg0) {
    u32 res = 0;
    u32 r0 = arg0.addr();
    u32 r1 = 0;
    u32 r2 = 0;
    r1 = u32(arg0->byte_4);
    if (r1 == 0) {
        r0 = 0u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r1 = arg0->word_20;
    r2 = arg0->word_24;
    res = r2 - r1;
    if (!u32(res == 0) && res >> 0x1f == ((r2 ^ r1) & (r2 ^ res)) >> 0x1f) {  // (from the original)
        r0 = 0u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r1 = arg0->word_1c;
    if (s32(r1) >= s32(arg0->word_18)) {
        r0 = 0u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r1 = r1 + (r1 << 2) + (r1 << 6);
    r0 = arg0->word_14 + (r1 << 3);
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_007552e8
GUEST_EXPORT(0x007552e8, d_007552e8::f_007552e8);

// f_00755384: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00755384 {


u32 f_00755384(u32 r0) {
    u32 res = 0;
    u32 r1 = 0;
    u32 r2 = 0;
    u32 r3 = 0;
    u32 zf = 0;
    u32 cf = 0;
    r2 = 0u;
L_755388:;
    r1 = u32(s32(s8(*gptr<u8>(r0))));
    if (r1 == 0) {
        r0 = 1u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r3 = r1 - 0x30u;  // (from the original)
    zf = r3 == 9u;
    cf = r3 >= 9u;
    if (cf && !zf) {
        r3 = r1 - 0x41u;  // (from the original)
        zf = r3 == 0x19u;  // (from the original)
        cf = r3 >= 0x19u;  // (from the original)
    }
    if (cf && !zf) {
        r3 = r1 - 0x61u;  // (from the original)
        zf = r3 == 0x19u;  // (from the original)
        cf = r3 >= 0x19u;  // (from the original)
    }
    if (!cf || zf) {
        goto L_7553c0;
    }
    if (r1 == 0x5fu) {  // (from the original)
        goto L_7553c0;
    }
    r0 = 0u;
    guest::cpu()->r[1] = r1;
    return r0;
L_7553c0:;
    r2 = r2 + 1u;
    res = r2 - 4u;
    r0 = r0 + 1u;
    if (res >> 0x1f != ((r2 ^ 4u) & (r2 ^ res)) >> 0x1f) {  // (from the original)
        guest::preempt();
        goto L_755388;
    }
    r0 = 1u;
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_00755384
GUEST_EXPORT(0x00755384, d_00755384::f_00755384);

// f_007553d8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_007553d8 {

inline constexpr guest::Function<0x0010184d, u32(u32, u32, u32, u32)> call_0010184c;  // (from the original)

u32 f_007553d8(u32 r0) {
    u32 res = 0;
    u32 r1 = 0;
    u32 r2 = 0;
    u32 r3 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r12 = 0;
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 0x20u;  // (from the original)
    r2 = r13;
    r12 = 4u;
    r1 = 0u;
L_7553ec:;
    r3 = u32(s32(s8(*gptr<u8>(r0 + r1))));
    if (r3 != 0) {
        r4 = r3 - 0x61u;  // (from the original)
        if (!u32(r4 >= 0x19u) || u32(r4 == 0x19u)) {  // (from the original)
            r3 = r3 - 0x20u;  // (from the original)
        }
        r4 = r2 + (r1 << 1);
        r1 = r1 + 1u;
        r3 = sxtb(r3);
        res = r1 - r12;
        *gptr<u16>(r4) = u16(r3);
        if (res >> 0x1f != ((r1 ^ r12) & (r1 ^ res)) >> 0x1f) {  // (from the original)
            guest::preempt();
            goto L_7553ec;
        }
    }
    r7 = 0x981698u;  // (from the original)
    r0 = 0u;
    r6 = r2;
    r4 = r0;
    *gptr<u16>(r2 + (r1 << 1)) = u16(r0);
L_755434:;
    r5 = r4 & 0xffu;  // (from the original)
    r1 = *gptr<u32>(r7 + (r5 << 2));
    if (u32(*gptr<u16>(r1)) == 0x2eu) {  // (from the original)
        r1 = r1 + 2u;
    }
    r0 = r6;
    guest::cpu()->r[13] = r13;
    r0 = call_0010184c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 != 0) {
        r4 = r4 + 1u;
        if (s32(r4) < s32(4u)) {
            guest::preempt();
            goto L_755434;
        }
        r0 = 0u;
        r13 = r13 + 0x20u;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    r0 = r5;
    r13 = r13 + 0x20u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_007553d8
GUEST_EXPORT(0x007553d8, d_007553d8::f_007553d8);

// f_00755484: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00755484 {

inline constexpr guest::Function<0x005ad9a0, u32(u32, u32, u32, u32)> call_005ad9a0;  // (from the original)
inline constexpr guest::Function<0x005aeff0, u32(u32, u32, u32, u32)> call_005aeff0;  // (from the original)
inline constexpr guest::Function<0x005b060c, u32(u32, u32, u32, u32)> call_005b060c;  // (from the original)
inline constexpr guest::Function<0x005b0640, u32(u32, u32, u32, u32)> call_005b0640;  // (from the original)

u32 f_00755484(u32 r0, u32 r1, u32 r2_unused, u32 r3) {
    u32 r4 = guest::cpu()->r[4];
    u32 r13 = guest::cpu()->r[13];
    *gptr<u32>(r13 + 0xfffffff0u) = u32(r3);  // (from the original)
    r13 = r13 - 0x10;  // (from the original)
    r4 = r0;
    r0 = r0 + 4u;
    guest::cpu()->r[13] = r13;
    r0 = call_005ad9a0(r0, r1, guest::cpu()->r[2], r3);
    r3 = guest::cpu()->r[3];
    r1 = r0 - 1u;
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_005b060c(r0, r1, guest::cpu()->r[2], r3);
    r1 = guest::cpu()->r[1];
    r3 = guest::cpu()->r[3];
    r0 = r4 + 0xcu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_005aeff0(r0, r1, guest::cpu()->r[2], r3);
    r3 = guest::cpu()->r[3];
    r1 = r0 - 0x64u;  // (from the original)
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_005b0640(r0, r1, guest::cpu()->r[2], r3);
    r1 = guest::cpu()->r[1];
    r0 = *gptr<u32>(r13);
    r13 = r13 + 0x10;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_00755484
GUEST_EXPORT(0x00755484, d_00755484::f_00755484);

// f_007554bc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_007554bc {

struct __attribute__((packed)) Object_007554bc_0 {
    u8 unknown_0[0x28];  // (not used here)
    u32 word_28;
};
GUEST_OFFSET(Object_007554bc_0, word_28, 0x28);  // (from the original)


u32 f_007554bc(gptr<Object_007554bc_0> arg0, u32 r1) {
    u32 b = 0;
    u32 res = 0;
    u32 sco = 0;
    u32 r0 = arg0.addr();
    u32 r2 = 0;
    u32 cf = guest::cpu()->cf;
    b = 1u;
    r2 = b;
    b = 0x1e00u;  // (from the original)
    r0 = (arg0->word_28 & b) >> 9;
    sco = cf;
    b = lsl_rc(r2, r1 & 0xff, &sco);  // (from the original)
    res = r0 & b;
    r0 = res;
    if (res != 0) {
        r0 = 1u;
    }
    return r0;
}

}  // namespace d_007554bc
GUEST_EXPORT(0x007554bc, d_007554bc::f_007554bc);

// f_007554d8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_007554d8 {

struct __attribute__((packed)) Object_007554d8_0 {
    u8 unknown_0[0x2c];  // (not used here)
    u32 word_2c;
};
GUEST_OFFSET(Object_007554d8_0, word_2c, 0x2c);  // (from the original)


u32 f_007554d8(gptr<Object_007554d8_0> arg0) {
    u32 r0 = arg0.addr();
    r0 = arg0->word_2c & 0x1fu;  // (from the original)
    return r0;
}

}  // namespace d_007554d8
GUEST_EXPORT(0x007554d8, d_007554d8::f_007554d8);

// f_007554e4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_007554e4 {

struct __attribute__((packed)) Object_007554e4_0 {
    u8 unknown_0[0x28];  // (not used here)
    u32 word_28;
};
GUEST_OFFSET(Object_007554e4_0, word_28, 0x28);  // (from the original)


u32 f_007554e4(gptr<Object_007554e4_0> arg0) {
    u32 r0 = arg0.addr();
    r0 = arg0->word_28 & 1u;
    return r0;
}

}  // namespace d_007554e4
GUEST_EXPORT(0x007554e4, d_007554e4::f_007554e4);

// f_00755558: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00755558 {

struct __attribute__((packed)) Object_00755558_0 {
    u8 unknown_0[0x28];  // (not used here)
    u32 word_28;
};
GUEST_OFFSET(Object_00755558_0, word_28, 0x28);  // (from the original)


u32 f_00755558(gptr<Object_00755558_0> arg0) {
    u32 r0 = arg0.addr();
    r0 = arg0->word_28 << 0x17 >> 0x18;  // (from the original)
    return r0;
}

}  // namespace d_00755558
GUEST_EXPORT(0x00755558, d_00755558::f_00755558);

// f_00755568: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00755568 {

struct __attribute__((packed)) Object_00755568_0 {
    u8 unknown_0[0x2c];  // (not used here)
    u32 word_2c;
};
GUEST_OFFSET(Object_00755568_0, word_2c, 0x2c);  // (from the original)


u32 f_00755568(gptr<Object_00755568_0> arg0) {
    u32 r0 = arg0.addr();
    r0 = (arg0->word_2c & 0x1e00000u) >> 0x15;  // (from the original)
    return r0;
}

}  // namespace d_00755568
GUEST_EXPORT(0x00755568, d_00755568::f_00755568);

// f_00755578: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00755578 {

struct __attribute__((packed)) Object_00755578_0 {
    u8 unknown_0[0x28];  // (not used here)
    u32 word_28;
};
GUEST_OFFSET(Object_00755578_0, word_28, 0x28);  // (from the original)

inline constexpr guest::Function<0x00754908, u32(u32, u32, u32, u32)> call_00754908;  // (from the original)

u32 f_00755578(gptr<Object_00755578_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r4 = guest::cpu()->r[4];
    guest::cpu()->r[13] -= 8u;
    r4 = r0;
    if ((arg0->word_28 & 1u) == 0) {
        r0 = 1u;
        guest::cpu()->r[13] += 8u;
        return r0;
    }
    r0 = r4 + 0x14u;  // (from the original)
    r0 = call_00754908(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    if (r0 != 0) {
        r0 = 0u;
        guest::cpu()->r[13] += 8u;
        return r0;
    }
    r0 = r4 + 0x1cu;  // (from the original)
    r0 = call_00754908(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    if (r0 == 0) {
        r0 = 1u;
        guest::cpu()->r[13] += 8u;
        return r0;
    }
    r0 = 0u;
    guest::cpu()->r[13] += 8u;
    return r0;
}

}  // namespace d_00755578
GUEST_EXPORT(0x00755578, d_00755578::f_00755578);

// f_007555bc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_007555bc {

struct __attribute__((packed)) Object_007555bc_0 {
    u8 unknown_0[0x2c];  // (not used here)
    u32 word_2c;
};
GUEST_OFFSET(Object_007555bc_0, word_2c, 0x2c);  // (from the original)


u32 f_007555bc(gptr<Object_007555bc_0> arg0) {
    u32 r0 = arg0.addr();
    r0 = arg0->word_2c << 0x13 >> 0x18;  // (from the original)
    return r0;
}

}  // namespace d_007555bc
GUEST_EXPORT(0x007555bc, d_007555bc::f_007555bc);

// f_00755620: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00755620 {

struct __attribute__((packed)) Object_00755620_0 {
    u8 unknown_0[0x28];  // (not used here)
    u32 word_28;
};
GUEST_OFFSET(Object_00755620_0, word_28, 0x28);  // (from the original)

inline constexpr guest::Function<0x005aed44, u32(u32, u32, u32, u32)> call_005aed44;  // (from the original)
inline constexpr guest::Function<0x005af13c, u32(u32, u32, u32, u32)> call_005af13c;  // (from the original)
inline constexpr guest::Function<0x00754908, u32(u32, u32, u32, u32)> call_00754908;  // (from the original)

u32 f_00755620(gptr<Object_00755620_0> arg0, u32 r1, u32 r2, u32 r3) {
    u32 ea = 0;
    u32 res = 0;
    u32 r0 = arg0.addr();
    u32 r4 = guest::cpu()->r[4];
    u32 r13 = guest::cpu()->r[13];
    u32 r14 = guest::cpu()->r[14];
    u32 zf = 0;
    u32 cf = 0;
    ea = r13 - 8;
    *gptr<u32>(ea) = u32(r4);
    *gptr<u32>(ea + 4) = u32(r14);
    r13 = r13 - 8;
    r4 = r0;
    if ((arg0->word_28 & 1u) == 0) {
        goto L_7556ac;
    } else {
        r0 = r4;
        r2 = 0u;
    }
L_75563c:;
    r1 = u32(s32(s8(*gptr<u8>(r0))));
    if (r1 != 0) {
        r3 = r1 - 0x30u;  // (from the original)
        zf = r3 == 9u;
        cf = r3 >= 9u;
        if (cf && !zf) {
            r3 = r1 - 0x41u;  // (from the original)
            zf = r3 == 0x19u;  // (from the original)
            cf = r3 >= 0x19u;  // (from the original)
        }
        if (cf && !zf) {
            r3 = r1 - 0x61u;  // (from the original)
            zf = r3 == 0x19u;  // (from the original)
            cf = r3 >= 0x19u;  // (from the original)
        }
        if (!(!cf || zf)) {
            if (r1 != 0x5fu) {  // (from the original)
                goto L_7556cc;
            }
        }
        r2 = r2 + 1u;
        res = r2 - 4u;
        r0 = r0 + 1u;
        if (res >> 0x1f != ((r2 ^ 4u) & (r2 ^ res)) >> 0x1f) {  // (from the original)
            guest::preempt();
            goto L_75563c;
        }
    }
    r1 = 0u;
    r0 = r4 + 4u;
    guest::cpu()->r[13] = r13;
    r0 = call_005aed44(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        ea = r13;
        r13 = r13 + 8;
        r4 = *gptr<u32>(ea);
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[4] = r4;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    r1 = 0u;
    r0 = r4 + 0xcu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_005af13c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        ea = r13;
        r13 = r13 + 8;
        r4 = *gptr<u32>(ea);
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[4] = r4;
        guest::cpu()->r[13] = r13;
        return r0;
    }
L_7556ac:;
    if ((*gptr<u32>(r4 + 0x28u) & 1u) == 0) {  // (from the original)
        goto L_7556e8;
    }
    r0 = r4 + 0x14u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00754908(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        goto L_7556d4;
    }
L_7556cc:;
    r0 = 0u;
    ea = r13;
    r13 = r13 + 8;
    r4 = *gptr<u32>(ea);
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[4] = r4;
    guest::cpu()->r[13] = r13;
    return r0;
L_7556d4:;
    r0 = r4 + 0x1cu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00754908(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    if (r0 != 0) {
        guest::preempt();
        goto L_7556cc;
    }
L_7556e8:;
    r0 = 1u;
    ea = r13;
    r13 = r13 + 8;
    r4 = *gptr<u32>(ea);
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[4] = r4;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_00755620
GUEST_EXPORT(0x00755620, d_00755620::f_00755620);

// f_007556f0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_007556f0 {


u32 f_007556f0(u32 r0, u32 r1) {
    r0 = *gptr<u32>(r0 + (r1 << 2) + 0x30u);  // (from the original)
    return r0;
}

}  // namespace d_007556f0
GUEST_EXPORT(0x007556f0, d_007556f0::f_007556f0);

// f_007556fc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_007556fc {

struct __attribute__((packed)) Object_007556fc_0 {
    u8 unknown_0[0x2];  // (not used here)
    u16 half_2;
};
GUEST_OFFSET(Object_007556fc_0, half_2, 0x2);  // (from the original)


u32 f_007556fc(gptr<Object_007556fc_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r1 = 0;
    u32 zf = 0;
    u32 cf = 0;
    r0 = u32(arg0->half_2);
    r1 = 0x270eu;  // (from the original)
    zf = r0 == r1;
    cf = r0 >= r1;
    if (!cf || zf) {
        r0 = 1u;
    }
    if (cf && !zf) {
        r0 = 0u;
    }
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_007556fc
GUEST_EXPORT(0x007556fc, d_007556fc::f_007556fc);

// f_00755718: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00755718 {

struct __attribute__((packed)) Object_00755718_0 {
    u16 half_0;
};
GUEST_OFFSET(Object_00755718_0, half_0, 0x0);  // (from the original)


u32 f_00755718(gptr<Object_00755718_0> arg0) {
    u32 r0 = arg0.addr();
    if (u32(arg0->half_0) >= 0x384u) {  // (from the original)
        r0 = 0u;
    } else {
        r0 = 1u;
    }
    return r0;
}

}  // namespace d_00755718
GUEST_EXPORT(0x00755718, d_00755718::f_00755718);

// f_0075572c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0075572c {

struct __attribute__((packed)) Object_0075572c_0 {
    u16 half_0;
    u16 half_2;
};
GUEST_OFFSET(Object_0075572c_0, half_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_0075572c_0, half_2, 0x2);  // (from the original)

struct __attribute__((packed)) Object_0075572c_1 {
    u16 half_0;
    u16 half_2;
};
GUEST_OFFSET(Object_0075572c_1, half_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_0075572c_1, half_2, 0x2);  // (from the original)


u32 f_0075572c(gptr<Object_0075572c_0> arg0, gptr<Object_0075572c_1> arg1) {
    u32 r0 = arg0.addr();
    u32 r1 = arg1.addr();
    if (u32(arg0->half_0) != u32(arg1->half_0)) {
        r0 = 0u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r1 = u32(arg1->half_2);
    if (u32(arg0->half_2) == r1) {
        r0 = 1u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r0 = 0u;
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_0075572c
GUEST_EXPORT(0x0075572c, d_0075572c::f_0075572c);

// f_00755758: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00755758 {

struct __attribute__((packed)) Object_00755758_0 {
    u16 half_0;
    u16 half_2;
};
GUEST_OFFSET(Object_00755758_0, half_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_00755758_0, half_2, 0x2);  // (from the original)

struct __attribute__((packed)) Object_00755758_1 {
    u16 half_0;
    u16 half_2;
};
GUEST_OFFSET(Object_00755758_1, half_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_00755758_1, half_2, 0x2);  // (from the original)


u32 f_00755758(gptr<Object_00755758_0> arg0, gptr<Object_00755758_1> arg1) {
    u32 r0 = arg0.addr();
    u32 r1 = arg1.addr();
    if (u32(arg0->half_0) != u32(arg1->half_0)) {
        r0 = 0u;
        r0 = r0 ^ 1u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r1 = u32(arg1->half_2);
    if (u32(arg0->half_2) == r1) {
        r0 = 1u;
        r0 = r0 ^ 1u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r0 = 0u;
    r0 = r0 ^ 1u;
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_00755758
GUEST_EXPORT(0x00755758, d_00755758::f_00755758);

// f_00755788: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00755788 {

struct __attribute__((packed)) Object_00755788_0 {
    u8 unknown_0[0x1c];  // (not used here)
    u32 word_1c;
    u32 word_20;
    u32 word_24;
};
GUEST_OFFSET(Object_00755788_0, word_1c, 0x1c);  // (from the original)
GUEST_OFFSET(Object_00755788_0, word_20, 0x20);  // (from the original)
GUEST_OFFSET(Object_00755788_0, word_24, 0x24);  // (from the original)

inline constexpr guest::Function<0x005aa50c, u32(u32, u32, u32, u32)> call_005aa50c;  // (from the original)

u32 f_00755788(gptr<Object_00755788_0> arg0, u32 r1) {
    u32 res = 0;
    u32 r0 = arg0.addr();
    u32 r2 = 0;
    u32 r3 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r13 = guest::cpu()->r[13];
    u32 nf = 0;
    u32 zf = 0;
    u32 vf = 0;
    r4 = r0;
    r13 = r13 - 0x10u;  // (from the original)
    if (arg0->word_1c == 0) {
        r0 = 2u;
        r13 = r13 + 0x10u;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    r3 = 0x300u;  // (from the original)
    r2 = 0x400u;  // (from the original)
    *gptr<u32>(r13) = u32(arg0->word_20);
    r1 = r13 + 4u;
    *gptr<u32>(r13 + 4u) = u32(arg0->word_24);
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_005aa50c(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r1 = *gptr<u32>(r13);
    res = r1 - 0xa0u;  // (from the original)
    nf = res >> 0x1f;  // (from the original)
    vf = ((r1 ^ 0xa0u) & (r1 ^ res)) >> 0x1f;  // (from the original)
    if (nf == vf) {
        r2 = *gptr<u32>(r13 + 4u);
        res = r2 - 0x78u;  // (from the original)
        nf = res >> 0x1f;  // (from the original)
        vf = ((r2 ^ 0x78u) & (r2 ^ res)) >> 0x1f;  // (from the original)
    }
    if (nf != vf) {
        r0 = 2u;
        r13 = r13 + 0x10u;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    res = r1 - 0x400u;  // (from the original)
    nf = res >> 0x1f;  // (from the original)
    zf = res == 0;
    vf = ((r1 ^ 0x400u) & (r1 ^ res)) >> 0x1f;  // (from the original)
    if (zf || nf != vf) {
        res = r2 - 0x300u;  // (from the original)
        nf = res >> 0x1f;  // (from the original)
        zf = res == 0;
        vf = ((r2 ^ 0x300u) & (r2 ^ res)) >> 0x1f;  // (from the original)
    }
    if (!zf && nf == vf) {
        r0 = 2u;
        r13 = r13 + 0x10u;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    res = r0 - 2u;
    if (!u32(res == 0) && res >> 0x1f == ((r0 ^ 2u) & (r0 ^ res)) >> 0x1f) {  // (from the original)
        r0 = 2u;
        r13 = r13 + 0x10u;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    r0 = *gptr<u32>(r4 + 0x20u);  // (from the original)
    if ((r0 & 7u) != 0) {
        r0 = 2u;
        r13 = r13 + 0x10u;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    r1 = *gptr<u32>(r4 + 0x24u);  // (from the original)
    if ((r1 & 7u) != 0) {
        r0 = 2u;
        r13 = r13 + 0x10u;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    r2 = *gptr<u32>(r4 + 0xcu);  // (from the original)
    if ((u32(*gptr<u16>(r2 + 0x14u)) & 0x10u) != 0) {  // (from the original)
        res = r0 - 0x190u;  // (from the original)
        nf = res >> 0x1f;  // (from the original)
        vf = ((r0 ^ 0x190u) & (r0 ^ res)) >> 0x1f;  // (from the original)
        if (nf == vf) {
            res = r1 - 0xf0u;  // (from the original)
            nf = res >> 0x1f;  // (from the original)
            vf = ((r1 ^ 0xf0u) & (r1 ^ res)) >> 0x1f;  // (from the original)
        }
        if (nf != vf) {
            r0 = 2u;
            r13 = r13 + 0x10u;  // (from the original)
            guest::cpu()->r[1] = r1;
            guest::cpu()->r[13] = r13;
            return r0;
        }
        res = r0 - 0x400u;  // (from the original)
        nf = res >> 0x1f;  // (from the original)
        zf = res == 0;
        vf = ((r0 ^ 0x400u) & (r0 ^ res)) >> 0x1f;  // (from the original)
        if (zf || nf != vf) {
            res = r1 - 0x300u;  // (from the original)
            nf = res >> 0x1f;  // (from the original)
            zf = res == 0;
            vf = ((r1 ^ 0x300u) & (r1 ^ res)) >> 0x1f;  // (from the original)
        }
        if (!zf && nf == vf) {
            r0 = 2u;
            r13 = r13 + 0x10u;  // (from the original)
            guest::cpu()->r[1] = r1;
            guest::cpu()->r[13] = r13;
            return r0;
        }
    }
    r0 = *gptr<u32>(r4 + 0x14u);  // (from the original)
    if (s32(r0) < s32(1u)) {
        r0 = 2u;
        r13 = r13 + 0x10u;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    res = r0 - 0x64u;  // (from the original)
    if (!u32(res == 0) && res >> 0x1f == ((r0 ^ 0x64u) & (r0 ^ res)) >> 0x1f) {  // (from the original)
        r0 = 2u;
        r13 = r13 + 0x10u;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    zf = (u32(*gptr<u16>(r2 + 0x16u)) & 1u) == 0;  // (from the original)
    if (!zf) {
        zf = u32(*gptr<u8>(r4 + 0x10u)) == 0;  // (from the original)
    }
    if (!zf) {
        r0 = 0u;
        r13 = r13 + 0x10u;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    r0 = 2u;
    r13 = r13 + 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_00755788
GUEST_EXPORT(0x00755788, d_00755788::f_00755788);

// f_00755864: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00755864 {

inline constexpr guest::Function<0x0073663c, u32(u32, u32, u32, u32)> call_0073663c;  // (from the original)

u32 f_00755864(u32 r0) {
    r0 = r0 + 8u;
    return call_0073663c(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_00755864
GUEST_EXPORT(0x00755864, d_00755864::f_00755864);

// f_0075586c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0075586c {

inline constexpr guest::Function<0x0073666c, u32(u32, u32, u32, u32)> call_0073666c;  // (from the original)

u32 f_0075586c(u32 r0) {
    r0 = r0 + 8u;
    return call_0073666c(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_0075586c
GUEST_EXPORT(0x0075586c, d_0075586c::f_0075586c);

// f_00755874: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00755874 {

struct __attribute__((packed)) Object_00755874_0 {
    u8 unknown_0[0x68];  // (not used here)
    u32 word_68;
};
GUEST_OFFSET(Object_00755874_0, word_68, 0x68);  // (from the original)

inline constexpr guest::Function<0x0073663c, u32(u32, u32, u32, u32)> call_0073663c;  // (from the original)

u32 f_00755874(gptr<Object_00755874_0> arg0, u32 r1, u32 r2) {
    u32 r0 = arg0.addr();
    u32 r4 = guest::cpu()->r[4];
    guest::cpu()->r[13] -= 8u;
    r4 = r0;
    r0 = r4 + 8u;
    if (arg0->word_68 == 0) {
        guest::cpu()->r[13] += 8u;
        return call_0073663c(r0, r1, r2, guest::cpu()->r[3]);
    }
    r0 = call_0073663c(r0, r1, r2, guest::cpu()->r[3]);
    r1 = r0;
    r0 = *gptr<u32>(r4 + 0x68u);  // (from the original)
    r1 = r1 + lsl_r(1u, r0 & 0xff) - 1u;  // (from the original)
    r0 = lsr_r(r1, r0 & 0xff);  // (from the original)
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_00755874
GUEST_EXPORT(0x00755874, d_00755874::f_00755874);

// f_007558b4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_007558b4 {

struct __attribute__((packed)) Object_007558b4_0 {
    u8 unknown_0[0x68];  // (not used here)
    u32 word_68;
};
GUEST_OFFSET(Object_007558b4_0, word_68, 0x68);  // (from the original)

inline constexpr guest::Function<0x0073666c, u32(u32, u32, u32, u32)> call_0073666c;  // (from the original)

u32 f_007558b4(gptr<Object_007558b4_0> arg0, u32 r1, u32 r2) {
    u32 r0 = arg0.addr();
    u32 r4 = guest::cpu()->r[4];
    guest::cpu()->r[13] -= 8u;
    r4 = r0;
    r0 = r4 + 8u;
    if (arg0->word_68 == 0) {
        guest::cpu()->r[13] += 8u;
        return call_0073666c(r0, r1, r2, guest::cpu()->r[3]);
    }
    r0 = call_0073666c(r0, r1, r2, guest::cpu()->r[3]);
    r1 = r0;
    r0 = *gptr<u32>(r4 + 0x68u);  // (from the original)
    r1 = r1 + lsl_r(1u, r0 & 0xff) - 1u;  // (from the original)
    r0 = lsr_r(r1, r0 & 0xff);  // (from the original)
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_007558b4
GUEST_EXPORT(0x007558b4, d_007558b4::f_007558b4);

// f_00755a40: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00755a40 {

struct __attribute__((packed)) Object_00755a40_0 {
    u32 word_0;
};
GUEST_OFFSET(Object_00755a40_0, word_0, 0x0);  // (from the original)

inline constexpr guest::Function<0x00159550, u32(u32, u32, u32, u32)> call_00159550;  // (from the original)

u32 f_00755a40(gptr<Object_00755a40_0> arg0, u32 r1, u32 r2) {
    u32 r0 = arg0.addr();
    u32 r3 = 0;
    r3 = r2;
    r2 = r1;
    guest::cpu()->r[13] -= 8u;
    r0 = arg0->word_0;
    r1 = r3;
    r0 = call_00159550(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    if (r0 == 0) {
        r0 = 1u;
    } else {
        r0 = 0u;
    }
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_00755a40
GUEST_EXPORT(0x00755a40, d_00755a40::f_00755a40);

// f_007561ac: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_007561ac {

struct __attribute__((packed)) Object_007561ac_0 {
    u8 unknown_0[0x9];  // (not used here)
    u8 byte_9;
};
GUEST_OFFSET(Object_007561ac_0, byte_9, 0x9);  // (from the original)

inline constexpr guest::Function<0x002fb378, u32(u32, u32, u32, u32)> call_002fb378;  // (from the original)
inline constexpr guest::Function<0x002fb430, u32(u32, u32, u32, u32)> call_002fb430;  // (from the original)
inline constexpr guest::Function<0x002fd41c, u32(u32, u32, u32, u32)> call_002fd41c;  // (from the original)
inline constexpr guest::Function<0x003014b4, u32(u32, u32, u32, u32)> call_003014b4;  // (from the original)

u32 f_007561ac(gptr<Object_007561ac_0> arg0, u32 r1, u32 r2, u32 r3) {
    u32 ea = 0;
    u32 r0 = arg0.addr();
    u32 r4 = guest::cpu()->r[4];
    u32 r13 = guest::cpu()->r[13];
    r4 = r0;
    r0 = u32(arg0->byte_9);
    r13 = r13 - 0x28u;  // (from the original)
    if (s32(r0) < s32(3u)) {
        r0 = 0u;
        r13 = r13 + 0x28u;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    if (s32(r0) >= s32(9u)) {
        r0 = 0u;
        r13 = r13 + 0x28u;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    if (s32(r0) >= s32(4u)) {
        r0 = 1u;
        r13 = r13 + 0x28u;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    r0 = r13 + 0x14u;  // (from the original)
    r1 = r4;
    guest::cpu()->r[13] = r13;
    r0 = call_002fb430(r0, r1, r2, r3);
    ea = r13 + 0x14u;  // (from the original)
    r1 = *gptr<u32>(ea + 4);
    r2 = *gptr<u32>(ea + 8);
    r3 = r13 + 8u;
    *gptr<u32>(r3) = u32(*gptr<u32>(ea));
    *gptr<u32>(r3 + 4) = u32(r1);
    *gptr<u32>(r3 + 8) = u32(r2);
    r0 = r13 + 8u;
    r1 = u32(s32(s8(*gptr<u8>(r4 + 0x3eu))));  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_003014b4(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0 = call_002fb378(r0, r1, r2, r3);
    ea = r13 + 0xcu;  // (from the original)
    r1 = *gptr<u32>(ea);
    r2 = *gptr<u32>(ea + 4);
    ea = r13;
    *gptr<u32>(ea) = u32(r1);
    *gptr<u32>(ea + 4) = u32(r2);
    ea = r0;
    r0 = *gptr<u32>(ea);
    r1 = *gptr<u32>(ea + 4);
    r2 = *gptr<u32>(ea + 8);
    r3 = *gptr<u32>(r13 + 8u);
    guest::cpu()->r[13] = r13;
    r0 = call_002fd41c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r13 = r13 + 0x28u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_007561ac
GUEST_EXPORT(0x007561ac, d_007561ac::f_007561ac);

// f_00756238: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00756238 {

struct __attribute__((packed)) Object_00756238_1 {
    u8 unknown_0[0x1028];  // (not used here)
    u32 word_1028;
};
GUEST_OFFSET(Object_00756238_1, word_1028, 0x1028);  // (from the original)

inline constexpr guest::Function<0x00318e38, u32(u32, u32, u32, u32)> call_00318e38;  // (from the original)

u32 f_00756238(u32 r0, gptr<Object_00756238_1> arg1) {
    u32 r1 = arg1.addr();
    guest::cpu()->r[13] -= 8u;
    r1 = arg1->word_1028;
    r0 = call_00318e38(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 != 0) {
        r0 = 1u;
    }
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_00756238
GUEST_EXPORT(0x00756238, d_00756238::f_00756238);

// f_00756758: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00756758 {


u32 f_00756758(u32 r0, u32 r1) {
    if (r1 == r0) {
        r0 = 0u;
        return r0;
    }
    if (r1 == r0 + 0x40u) {  // (from the original)
        r0 = 1u;
        return r0;
    }
    if (r1 == r0 + 0x80u) {  // (from the original)
        r0 = 2u;
        return r0;
    }
    if (r1 == r0 + 0xc0u) {  // (from the original)
        r0 = 3u;
        return r0;
    }
    if (r1 == r0 + 0x100u) {  // (from the original)
        r0 = 4u;
        return r0;
    }
    if (r1 == r0 + 0x140u) {  // (from the original)
        r0 = 5u;
        return r0;
    }
    if (r1 == r0 + 0x180u) {  // (from the original)
        r0 = 6u;
        return r0;
    }
    if (r1 == r0 + 0x1c0u) {  // (from the original)
        r0 = 7u;
    } else {
        r0 = ~0u;
    }
    return r0;
}

}  // namespace d_00756758
GUEST_EXPORT(0x00756758, d_00756758::f_00756758);

// f_007567d8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_007567d8 {

inline constexpr guest::Function<0x00100d2d, u32(u32, u32, u32, u32)> call_00100d2c;  // (from the original)
inline constexpr guest::Function<0x002fb328, u32(u32, u32, u32, u32)> call_002fb328;  // (from the original)
inline constexpr guest::Function<0x00309fbc, u32(u32, u32, u32, u32)> call_00309fbc;  // (from the original)

u32 f_007567d8(u32 r0, u32 r1, u32 r2) {
    u32 ea = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 0x18;  // (from the original)
    r5 = r0;
    r6 = r1;
    r4 = r2;
    guest::cpu()->r[13] = r13;
    r0 = call_002fb328(r0, r1, r2, guest::cpu()->r[3]);
    r2 = guest::cpu()->r[2];
    r1 = r4;
    r0 = r0 + 0xa0u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00309fbc(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r8 = r0;
    if (r0 >= 4u) {
        goto L_7568ac;
    } else {
        r4 = 0u;
        r7 = r5 + (r8 << 7);
    }
L_75680c:;
    r1 = r7 + (r4 << 6);
    r5 = r1 + 0xcu;  // (from the original)
    r1 = u32(*gptr<u16>(r1 + 0x38u));  // (from the original)
    if (r1 != u32(*gptr<u16>(r6 + 0x2cu))) {  // (from the original)
        goto L_7568a0;
    }
    r1 = u32(*gptr<u16>(r6));
    if (u32(*gptr<u16>(r5)) != r1) {
        goto L_7568a0;
    }
    r1 = u32(*gptr<u8>(r5 + 0x14u));  // (from the original)
    if (r1 != u32(*gptr<u8>(r6 + 0x14u))) {  // (from the original)
        goto L_7568a0;
    }
    r2 = 0x12u;  // (from the original)
    r1 = r6 + 2u;
    r0 = r5 + 2u;
    guest::cpu()->r[13] = r13;
    r0 = call_00100d2c(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 != 0) {
        goto L_7568a0;
    }
    ea = r5 + 0x16u;  // (from the original)
    r5 = ea;
    r1 = u32(*gptr<u16>(ea));
    r0 = r6 + 0x16u;  // (from the original)
    if (r1 != u32(*gptr<u16>(r6 + 0x16u))) {  // (from the original)
        goto L_7568a0;
    }
    r1 = u32(*gptr<u8>(r5 + 0x14u));  // (from the original)
    if (r1 != u32(*gptr<u8>(r0 + 0x14u))) {  // (from the original)
        goto L_7568a0;
    }
    r1 = r0 + 2u;
    r2 = 0x12u;  // (from the original)
    r0 = r5 + 2u;
    guest::cpu()->r[13] = r13;
    r0 = call_00100d2c(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 == 0) {
        goto L_7568b4;
    }
L_7568a0:;
    r4 = r4 + 1u;
    if (s32(r4) < s32(2u)) {
        guest::preempt();
        goto L_75680c;
    }
L_7568ac:;
    r0 = ~0u;
    r13 = r13 + 0x18;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
L_7568b4:;
    r0 = r4 + (r8 << 1);
    r13 = r13 + 0x18;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_007567d8
GUEST_EXPORT(0x007567d8, d_007567d8::f_007567d8);

// f_007569d4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_007569d4 {

inline constexpr guest::Function<0x002fb378, u32(u32, u32, u32, u32)> call_002fb378;  // (from the original)
inline constexpr guest::Function<0x002fb430, u32(u32, u32, u32, u32)> call_002fb430;  // (from the original)
inline constexpr guest::Function<0x002fb4a0, u32(u32, u32, u32, u32)> call_002fb4a0;  // (from the original)
inline constexpr guest::Function<0x0056cc38, u32(u32, u32, u32, u32)> call_0056cc38;  // (from the original)

u32 f_007569d4(u32 r0, u32 r1_unused, u32 r2_unused, u32 r3) {
    u32 ea = 0;
    u32 r1 = 0;
    u32 r2 = 0;
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 0x28u;  // (from the original)
    r2 = r13 + 0x14u;  // (from the original)
    r1 = r0;
    r0 = r2;
    guest::cpu()->r[13] = r13;
    r0 = call_002fb430(r0, r1, r2, r3);
    ea = r13 + 0x14u;  // (from the original)
    r1 = *gptr<u32>(ea + 4);
    r2 = *gptr<u32>(ea + 8);
    r3 = r13 + 8u;
    *gptr<u32>(r3) = u32(*gptr<u32>(ea));
    *gptr<u32>(r3 + 4) = u32(r1);
    *gptr<u32>(r3 + 8) = u32(r2);
    r1 = 1u;
    r0 = r13 + 8u;
    guest::cpu()->r[13] = r13;
    r0 = call_0056cc38(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0 = call_002fb378(r0, r1, r2, r3);
    ea = r13 + 0xcu;  // (from the original)
    r1 = *gptr<u32>(ea);
    r2 = *gptr<u32>(ea + 4);
    ea = r13;
    *gptr<u32>(ea) = u32(r1);
    *gptr<u32>(ea + 4) = u32(r2);
    ea = r0;
    r0 = *gptr<u32>(ea);
    r1 = *gptr<u32>(ea + 4);
    r2 = *gptr<u32>(ea + 8);
    r3 = *gptr<u32>(r13 + 8u);
    guest::cpu()->r[13] = r13;
    r0 = call_002fb4a0(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r13 = r13 + 0x28u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_007569d4
GUEST_EXPORT(0x007569d4, d_007569d4::f_007569d4);

// f_00756ad8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00756ad8 {

inline constexpr guest::Function<0x002fb430, u32(u32, u32, u32, u32)> call_002fb430;  // (from the original)
inline constexpr guest::Function<0x0030a488, u32(u32, u32, u32, u32)> call_0030a488;  // (from the original)

u32 f_00756ad8(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 ea = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 0x30u;  // (from the original)
    r6 = r0;
    r4 = r1;
    r5 = r2;
    r0 = r13 + 0x10u;  // (from the original)
    r1 = r1 + 0x46u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002fb430(r0, r1, r2, r3);
    ea = r13 + 0x10u;  // (from the original)
    r0 = *gptr<u32>(ea);
    r1 = *gptr<u32>(ea + 4);
    r2 = *gptr<u32>(ea + 8);
    ea = r13 + 4u;
    *gptr<u32>(ea) = u32(r0);
    *gptr<u32>(ea + 4) = u32(r1);
    *gptr<u32>(ea + 8) = u32(r2);
    if (r5 == 0) {
        r3 = u32(*gptr<u8>(r4 + 0x5au)) << 1;  // (from the original)
    } else {
        r3 = u32(*gptr<u8>(r4 + 0x5au));  // (from the original)
    }
    r0 = 0u;
    r2 = r0;
    r1 = r0;
    *gptr<u32>(r13) = u32(r0);
    r0 = r13 + 4u;
    guest::cpu()->r[13] = r13;
    r0 = call_0030a488(r0, r1, r2, r3);
    ea = r13 + 4u;
    r0 = *gptr<u32>(ea);
    r1 = *gptr<u32>(ea + 4);
    r2 = *gptr<u32>(ea + 8);
    *gptr<u32>(r6) = u32(r0);
    *gptr<u32>(r6 + 4) = u32(r1);
    *gptr<u32>(r6 + 8) = u32(r2);
    r13 = r13 + 0x30u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_00756ad8
GUEST_EXPORT(0x00756ad8, d_00756ad8::f_00756ad8);

// f_00756bd0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00756bd0 {


u32 f_00756bd0(u32 r0) {
    u32 r1 = 0;
    u32 r2 = 0;
    u32 r3 = 0;
    r3 = r0;
    r0 = 0u;
    r1 = r0;
    do {
L_756bdc:;
        r2 = r1 & 0xffu;  // (from the original)
        if (!(r2 >= 3u)) {
            if (u32(s32(s8(*gptr<u8>(r2 + r3 + 0x56u)))) < 0xau) {  // (from the original)
                r0 = r0 + 1u;
            }
        }
        r1 = r1 + 1u;
        guest::preempt();
    } while (s32(r1) < s32(3u));
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_00756bd0
GUEST_EXPORT(0x00756bd0, d_00756bd0::f_00756bd0);

// f_00756d94: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00756d94 {


u32 f_00756d94(u32 r0, u32 r1) {
    if (r1 >= 3u) {
        r0 = 0u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r1 = r1 + (r1 << 1) + (r1 << 3);
    r0 = r0 + (r1 << 1) + 8u;
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_00756d94
GUEST_EXPORT(0x00756d94, d_00756d94::f_00756d94);

// f_00757084: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00757084 {

struct __attribute__((packed)) Object_00757084_0 {
    u8 unknown_0[0x8];  // (not used here)
    u8 byte_8;
};
GUEST_OFFSET(Object_00757084_0, byte_8, 0x8);  // (from the original)


u32 f_00757084(gptr<Object_00757084_0> arg0) {
    u32 r0 = arg0.addr();
    r0 = u32(arg0->byte_8);
    if (r0 == 0x14u) {  // (from the original)
        r0 = 0u;
        return r0;
    }
    if (r0 == 0x15u) {  // (from the original)
        r0 = 1u;
        return r0;
    }
    if (r0 == 0x16u) {  // (from the original)
        r0 = 2u;
    } else {
        r0 = 3u;
    }
    return r0;
}

}  // namespace d_00757084
GUEST_EXPORT(0x00757084, d_00757084::f_00757084);

// f_00757160: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00757160 {

struct __attribute__((packed)) Object_00757160_0 {
    u8 unknown_0[0x22];  // (not used here)
    u16 half_22;
};
GUEST_OFFSET(Object_00757160_0, half_22, 0x22);  // (from the original)


u32 f_00757160(gptr<Object_00757160_0> arg0) {
    u32 res = 0;
    u32 r0 = arg0.addr();
    u32 r1 = 0;
    u32 r2 = 0;
    u32 zf = 0;
    u32 cf = 0;
    r0 = u32(arg0->half_22);
    r1 = *gptr<u32>(0xa83af0u);  // (from the original)
    zf = r1 == 0;
    cf = r1 >= 0u;
    if (!zf) {
        r2 = 0x18fu;  // (from the original)
        zf = r2 == r0;
        cf = r2 >= r0;
    }
    if (!cf || zf) {
        r0 = 8u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    res = r1 + (r0 + (r0 << 4) << 1);
    r0 = res;
    if (res != 0) {
        r0 = u32(*gptr<u8>(r0 + 0x1cu)) >> 4;  // (from the original)
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r0 = 8u;
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_00757160
GUEST_EXPORT(0x00757160, d_00757160::f_00757160);

// f_007571a0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_007571a0 {

inline constexpr guest::Function<0x0030f52c, u32(u32, u32, u32, u32)> call_0030f52c;  // (from the original)

u32 f_007571a0(gptr<SavedRecordInner> arg0, u32 r1, u32 r2, u32 r3) {
    u32 res = 0;
    u32 r0 = arg0.addr();
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r12 = 0;
    u32 zf = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r12 = r1;
    r1 = u32(u8(arg0->value));
    r5 = r2;
    zf = r1 == 0x14u;  // (from the original)
    if (!zf) {
        zf = r1 == 0x15u;  // (from the original)
    }
    if (zf) {
        goto L_7571f0;
    }
    if (r1 == 0x16u) {  // (from the original)
        goto L_7571f0;
    } else {
        r1 = 4u;
    }
L_7571c8:;
    if (s32(r1) > s32(r3)) {
        r2 = r3 + (r3 << 1);
        r4 = r0 + (r2 << 3);
        res = u32(*gptr<u16>(r4 + 0x3au)) - 0xffffu;  // (from the original)
        r1 = res;
        if (res != 0) {
            goto L_7571f8;
        }
    }
    r0 = 0u;
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
L_7571f0:;
    r1 = 6u;
    guest::preempt();
    goto L_7571c8;
L_7571f8:;
    r1 = r4 + 0x24u;  // (from the original)
    r0 = r12;
    r0 = call_0030f52c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    *gptr<u16>(r5) = u16(u32(*gptr<u16>(r4 + 0x3au)));  // (from the original)
    r0 = 1u;
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_007571a0
GUEST_EXPORT(0x007571a0, d_007571a0::f_007571a0);

// f_007573c0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_007573c0 {

struct __attribute__((packed)) Object_007573c0_1 {
    u8 unknown_0[0x1028];  // (not used here)
    u32 word_1028;
};
GUEST_OFFSET(Object_007573c0_1, word_1028, 0x1028);  // (from the original)

inline constexpr guest::Function<0x00100d2d, u32(u32, u32, u32, u32)> call_00100d2c;  // (from the original)
inline constexpr guest::Function<0x00301e20, u32(u32, u32, u32, u32)> call_00301e20;  // (from the original)

u32 f_007573c0(u32 r0, gptr<Object_007573c0_1> arg1, u32 r2) {
    u32 ea = 0;
    u32 r1 = arg1.addr();
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 0x18;  // (from the original)
    r7 = r1 + 0x1000u;  // (from the original)
    r8 = r0;
    r0 = arg1->word_1028;
    if (r0 == 0) {
        goto L_757454;
    }
    guest::cpu()->r[13] = r13;
    r0 = call_00301e20(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 == 0) {
        goto L_757454;
    } else {
        r4 = 0u;
    }
L_7573e8:;
    ea = r7 + 0x28u;  // (from the original)
    r5 = *gptr<u32>(ea);
    ea = r5;
    r0 = u32(*gptr<u16>(ea));
    ea = r8 + (r4 + (r4 << 1) << 3) + 0x24u;  // (from the original)
    r6 = ea;
    r1 = u32(*gptr<u16>(ea));
    if (r0 != r1) {
        goto L_757448;
    }
    r1 = u32(*gptr<u8>(r5 + 0x14u));  // (from the original)
    if (r1 != u32(*gptr<u8>(r6 + 0x14u))) {  // (from the original)
        goto L_757448;
    }
    r2 = 0x12u;  // (from the original)
    r1 = r6 + 2u;
    r0 = r5 + 2u;
    guest::cpu()->r[13] = r13;
    r0 = call_00100d2c(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 != 0) {
        goto L_757448;
    }
    r1 = u32(*gptr<u16>(r6 + 0x16u));  // (from the original)
    if (u32(*gptr<u16>(r5 + 0x2cu)) != r1) {  // (from the original)
        goto L_757448;
    }
    r0 = 1u;
    r13 = r13 + 0x18;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
L_757448:;
    r4 = r4 + 1u;
    if (s32(r4) < s32(6u)) {
        guest::preempt();
        goto L_7573e8;
    }
L_757454:;
    r0 = 0u;
    r13 = r13 + 0x18;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_007573c0
GUEST_EXPORT(0x007573c0, d_007573c0::f_007573c0);

// f_00757948: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00757948 {

struct __attribute__((packed)) Object_00757948_0 {
    u8 unknown_0[0x75];  // (not used here)
    u8 byte_75;
};
GUEST_OFFSET(Object_00757948_0, byte_75, 0x75);  // (from the original)


u32 f_00757948(gptr<Object_00757948_0> arg0) {
    u32 r0 = arg0.addr();
    r0 = u32(arg0->byte_75);
    if ((r0 & 4u) != 0) {
        r0 = 0u;
        return r0;
    }
    if ((r0 & 1u) == 0) {
        r0 = 1u;
    } else {
        r0 = 2u;
    }
    return r0;
}

}  // namespace d_00757948
GUEST_EXPORT(0x00757948, d_00757948::f_00757948);

// f_00757968: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00757968 {

struct __attribute__((packed)) Object_00757968_0 {
    u8 unknown_0[0x75];  // (not used here)
    u8 byte_75;
};
GUEST_OFFSET(Object_00757968_0, byte_75, 0x75);  // (from the original)


u32 f_00757968(gptr<Object_00757968_0> arg0) {
    u32 res = 0;
    u32 r0 = arg0.addr();
    r0 = u32(arg0->byte_75);
    if ((r0 & 4u) != 0) {
        r0 = 0u;
        return r0;
    }
    if ((r0 & 0x20u) != 0) {  // (from the original)
        r0 = 1u;
        return r0;
    }
    res = r0 & 8u;
    r0 = res;
    if (res != 0) {
        r0 = 2u;
    }
    return r0;
}

}  // namespace d_00757968
GUEST_EXPORT(0x00757968, d_00757968::f_00757968);

// f_00757b34: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00757b34 {

struct __attribute__((packed)) Object_00757b34_1 {
    u8 unknown_0[0xc];  // (not used here)
    u32 word_c;
    u32 word_10;
};
GUEST_OFFSET(Object_00757b34_1, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Object_00757b34_1, word_10, 0x10);  // (from the original)

inline constexpr guest::Function<0x006c6640, u32(u32, u32, u32, u32)> call_006c6640;  // (from the original)

u32 f_00757b34(gptr<Float3> arg0, gptr<Object_00757b34_1> arg1) {
    u32 r0 = arg0.addr();
    u32 r1 = arg1.addr();
    u32 r2 = 0;
    u32 r4 = guest::cpu()->r[4];
    float S0 = 0;
    guest::cpu()->r[13] -= 8u;
    r4 = r0;
    r2 = arg1->word_10;
    r1 = 0u;
    S0 = std::bit_cast<float>(*gptr<u32>(0x757b68u));  // (from the original)
    arg0->v[0] = std::bit_cast<float>(u32(arg1->word_c));
    arg0->v[1] = S0;
    r0 = r4;
    arg0->v[2] = std::bit_cast<float>(u32(r2));
    guest::cpu()->s[0] = S0;
    r0 = call_006c6640(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    S0 = guest::cpu()->s[0];
    *gptr<u32>(r4 + 4u) = u32(std::bit_cast<u32>(S0));
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1;
    guest::cpu()->s[0] = S0;
    return r0;
}

}  // namespace d_00757b34
GUEST_EXPORT(0x00757b34, d_00757b34::f_00757b34);

// f_00757b6c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00757b6c {

struct __attribute__((packed)) Object_00757b6c_0 {
    u8 unknown_0[0xc];  // (not used here)
    u32 word_c;
    u32 word_10;
};
GUEST_OFFSET(Object_00757b6c_0, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Object_00757b6c_0, word_10, 0x10);  // (from the original)

inline constexpr guest::Function<0x003171b4, u32(u32, u32, u32, u32)> call_003171b4;  // (from the original)
inline constexpr guest::Function<0x006c6640, u32(u32, u32, u32, u32)> call_006c6640;  // (from the original)

u32 f_00757b6c(gptr<Object_00757b6c_0> arg0, u32 r1, u32 r2) {
    u32 r0 = arg0.addr();
    u32 r3 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r13 = guest::cpu()->r[13];
    float S0 = 0;
    float S1 = 0;
    float S2 = 0;
    r3 = r0;
    r13 = r13 - 0x18u;  // (from the original)
    S0 = std::bit_cast<float>(arg0->word_c);
    S2 = std::bit_cast<float>(arg0->word_10);
    S1 = std::bit_cast<float>(*gptr<u32>(0x757bb8u));  // (from the original)
    r4 = r1;
    r5 = r2;
    r0 = r13;
    r1 = 0u;
    *gptr<u32>(r13) = u32(std::bit_cast<u32>(S0));
    *gptr<u32>(r13 + 4) = u32(std::bit_cast<u32>(S1));
    *gptr<u32>(r13 + 8) = u32(std::bit_cast<u32>(S2));
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2;
    r0 = call_006c6640(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    S2 = guest::cpu()->s[2];
    *gptr<u32>(r13 + 4u) = u32(std::bit_cast<u32>(S0));
    r2 = r13;
    r1 = r5;
    r0 = r4;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2;
    r0 = call_003171b4(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    r13 = r13 + 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    return r0;
}

}  // namespace d_00757b6c
GUEST_EXPORT(0x00757b6c, d_00757b6c::f_00757b6c);

// f_00757bc4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00757bc4 {

inline constexpr guest::Function<0x00757cc0, u32(u32, u32, u32, u32)> call_00757cc0;  // (from the original)
inline constexpr guest::Function<0x00757cd8, u32(u32, u32, u32, u32)> call_00757cd8;  // (from the original)

u32 f_00757bc4(u32 r0) {
    u32 r4 = guest::cpu()->r[4];
    guest::cpu()->r[13] -= 8u;
    r4 = r0;
    r0 = r0 + 0x80u;  // (from the original)
    r0 = call_00757cc0(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    if (r0 == 0) {
        guest::cpu()->r[13] += 8u;
        return r0;
    }
    r0 = r4 + 0x80u;  // (from the original)
    r0 = call_00757cd8(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    if (r0 != 0) {
        r0 = 1u;
    }
    guest::cpu()->r[13] += 8u;
    return r0;
}

}  // namespace d_00757bc4
GUEST_EXPORT(0x00757bc4, d_00757bc4::f_00757bc4);

// f_00757c1c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00757c1c {

inline constexpr guest::Function<0x0070ef54, u32(u32, u32, u32, u32)> call_0070ef54;  // (from the original)
inline constexpr guest::Function<0x00757f08, u32(u32, u32, u32, u32)> call_00757f08;  // (from the original)

u32 f_00757c1c(u32 r0) {
    u32 r4 = guest::cpu()->r[4];
    guest::cpu()->r[13] -= 8u;
    r4 = r0;
    r0 = r0 + 0x80u;  // (from the original)
    r0 = call_00757f08(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    r0 = r4 + 0x70000u;  // (from the original)
    guest::cpu()->r[13] += 8u;
    r0 = r0 + 0x1900u;  // (from the original)
    return call_0070ef54(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_00757c1c
GUEST_EXPORT(0x00757c1c, d_00757c1c::f_00757c1c);

// f_00757c3c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00757c3c {

inline constexpr guest::Function<0x0070efa0, u32(u32, u32, u32, u32)> call_0070efa0;  // (from the original)
inline constexpr guest::Function<0x00757f78, u32(u32, u32, u32, u32)> call_00757f78;  // (from the original)

u32 f_00757c3c(u32 r0, u32 r1) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r4 = r0;
    r5 = r1;
    r0 = r0 + 0x80u;  // (from the original)
    r0 = call_00757f78(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 != 0) {
        r1 = r5;
        r0 = r4 + 0x71900u;  // (from the original)
        r0 = call_0070efa0(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        if (r0 != 0) {
            r0 = 1u;
        }
    }
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_00757c3c
GUEST_EXPORT(0x00757c3c, d_00757c3c::f_00757c3c);

// f_00757c74: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00757c74 {

inline constexpr guest::Function<0x002fd4b4, u32(u32, u32, u32, u32)> call_002fd4b4;  // (from the original)
inline constexpr guest::Function<0x0056ca68, u32(u32, u32, u32, u32)> call_0056ca68;  // (from the original)

u32 f_00757c74(gptr<Date> arg0, u32 r1, u32 r2) {
    u32 r0 = arg0.addr();
    u32 r3 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 0x28u;  // (from the original)
    r4 = r1;
    r1 = 0u;
    *gptr<u32>(r13) = u32(r1);
    *gptr<u32>(r13 + 4u) = u32(r1);
    *gptr<u32>(r13 + 8u) = u32(r1);
    r5 = r2;
    r3 = u32(u8(arg0->day));
    r2 = u32(u8(arg0->month));
    r1 = u32(u16(arg0->year));
    r0 = r13 + 0xcu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0056ca68(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    r2 = r5;
    r1 = r13 + 0xcu;  // (from the original)
    r0 = r4;
    guest::cpu()->r[13] = r13;
    r0 = call_002fd4b4(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r13 = r13 + 0x28u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_00757c74
GUEST_EXPORT(0x00757c74, d_00757c74::f_00757c74);

// f_00757cc0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00757cc0 {

struct __attribute__((packed)) Object_00757cc0_0 {
    u8 unknown_0[0x6];  // (not used here)
    u8 byte_6;
};
GUEST_OFFSET(Object_00757cc0_0, byte_6, 0x6);  // (from the original)


u32 f_00757cc0(gptr<Object_00757cc0_0> arg0) {
    u32 r0 = arg0.addr();
    if (u32(arg0->byte_6) == 2u) {
        r0 = 1u;
    } else {
        r0 = 0u;
    }
    return r0;
}

}  // namespace d_00757cc0
GUEST_EXPORT(0x00757cc0, d_00757cc0::f_00757cc0);

// f_00757f08: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00757f08 {

inline constexpr guest::Function<0x00119859, u32(u32, u32, u32, u32)> call_00119858;  // (from the original)
inline constexpr guest::Function<0x003193e8, u32(u32, u32, u32, u32)> call_003193e8;  // (from the original)
inline constexpr guest::Function<0x0071a2b0, u32(u32, u32, u32, u32)> call_0071a2b0;  // (from the original)
inline constexpr guest::Function<0x0071d9c4, u32(u32, u32, u32, u32)> call_0071d9c4;  // (from the original)
inline constexpr guest::Function<0x0071fe48, u32(u32, u32, u32, u32)> call_0071fe48;  // (from the original)
inline constexpr guest::Function<0x00757cfc, u32(u32, u32, u32, u32)> call_00757cfc;  // (from the original)
inline constexpr guest::Function<0x00759298, u32(u32, u32, u32, u32)> call_00759298;  // (from the original)

u32 f_00757f08(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = guest::cpu()->r[4];
    guest::cpu()->r[13] -= 8u;
    r4 = r0;
    r0 = call_00757cfc(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r4 + 0x20u;  // (from the original)
    r0 = call_0071a2b0(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r4 + 0x29220u;  // (from the original)
    r0 = call_00119858(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r4 + 0x4be00u;  // (from the original)
    r0 = call_00759298(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r4 + 0x502bcu;  // (from the original)
    r0 = call_0071d9c4(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r4 + 0x52bb0u;  // (from the original)
    r0 = call_0071fe48(r0, r1, r2, r3);
    r3 = ~0u;
    r1 = 0x1e4d8u;  // (from the original)
    r0 = r4 + 0x533a8u;  // (from the original)
    r2 = r3;
    r0 = call_003193e8(r0, r1, r2, r3);
    r1 = 0x533a4u;  // (from the original)
    *gptr<u32>(r1 + r4) = u32(r0);
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_00757f08
GUEST_EXPORT(0x00757f08, d_00757f08::f_00757f08);

// f_00757f78: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00757f78 {

inline constexpr guest::Function<0x00119875, u32(u32, u32, u32, u32)> call_00119874;  // (from the original)
inline constexpr guest::Function<0x00301484, u32(u32, u32, u32, u32)> call_00301484;  // (from the original)
inline constexpr guest::Function<0x003193e8, u32(u32, u32, u32, u32)> call_003193e8;  // (from the original)
inline constexpr guest::Function<0x005d4788, u32(u32, u32, u32, u32)> call_005d4788;  // (from the original)
inline constexpr guest::Function<0x0071a310, u32(u32, u32, u32, u32)> call_0071a310;  // (from the original)
inline constexpr guest::Function<0x0071d9e8, u32(u32, u32, u32, u32)> call_0071d9e8;  // (from the original)
inline constexpr guest::Function<0x0071fe68, u32(u32, u32, u32, u32)> call_0071fe68;  // (from the original)
inline constexpr guest::Function<0x00757d20, u32(u32, u32, u32, u32)> call_00757d20;  // (from the original)
inline constexpr guest::Function<0x007592c0, u32(u32, u32, u32, u32)> call_007592c0;  // (from the original)

u32 f_00757f78(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r4 = r0;
    r5 = r1;
    r0 = call_00757d20(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        goto L_758060;
    }
    r1 = r5;
    r0 = r4 + 0x20u;  // (from the original)
    r0 = call_0071a310(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        goto L_758060;
    }
    r1 = r5;
    r0 = r4 + 0x29220u;  // (from the original)
    r0 = call_00119874(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        goto L_758060;
    }
    r1 = r5;
    r0 = r4 + 0x4be00u;  // (from the original)
    r0 = call_007592c0(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        goto L_758060;
    }
    r0 = r4 + 0x502bcu;  // (from the original)
    r0 = call_0071d9e8(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        goto L_758060;
    }
    r0 = r4 + 0x52bb0u;  // (from the original)
    r0 = call_0071fe68(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        goto L_758060;
    }
    r0 = u32(*gptr<u8>(r4 + 0x6214eu));  // (from the original)
    r5 = r0 >> 4;
    r0 = call_00301484(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r5 != r0) {
        goto L_75805c;
    }
    r5 = r4 + 0x62000u;  // (from the original)
    r0 = u32(*gptr<u8>(r5 + 0x14eu)) & 0xfu;  // (from the original)
    r0 = call_005d4788(r0, r1, r2, r3);
    r1 = u32(*gptr<u8>(r5 + 0x14eu));  // (from the original)
    if (r0 != r1 >> 4) {
        goto L_75805c;
    }
    r3 = ~0u;
    r1 = 0x1e4d8u;  // (from the original)
    r0 = r4 + 0x533a8u;  // (from the original)
    r2 = r3;
    r0 = call_003193e8(r0, r1, r2, r3);
    r1 = *gptr<u32>(0x533a4u + r4);  // (from the original)
    if (r1 == r0) {
        r0 = 1u;
        goto L_758060;
    }
L_75805c:;
    r0 = 0u;
L_758060:;
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_00757f78
GUEST_EXPORT(0x00757f78, d_00757f78::f_00757f78);

// f_00758070: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00758070 {

struct __attribute__((packed)) Object_00758070_0 {
    u8 unknown_0[0x30];  // (not used here)
    u8 byte_30;
};
GUEST_OFFSET(Object_00758070_0, byte_30, 0x30);  // (from the original)


u32 f_00758070(gptr<Object_00758070_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r1 = 0;
    u32 r2 = 0;
    u32 zf = 0;
    r2 = u32(arg0->byte_30);
    r1 = 0u;
    zf = r2 == 2u;
    if (!zf) {
        zf = r2 == 4u;
    }
    if (zf) {
        r1 = r0;
    }
    r0 = r1;
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_00758070
GUEST_EXPORT(0x00758070, d_00758070::f_00758070);

// f_0075808c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0075808c {

struct __attribute__((packed)) Object_0075808c_0 {
    u8 unknown_0[0x30];  // (not used here)
    u8 byte_30;
};
GUEST_OFFSET(Object_0075808c_0, byte_30, 0x30);  // (from the original)


u32 f_0075808c(gptr<Object_0075808c_0> arg0) {
    u32 r0 = arg0.addr();
    u32 zf = 0;
    r0 = u32(arg0->byte_30);
    zf = r0 == 2u;
    if (!zf) {
        zf = r0 == 4u;
    }
    if (zf) {
        r0 = 1u;
    } else {
        r0 = 0u;
    }
    return r0;
}

}  // namespace d_0075808c
GUEST_EXPORT(0x0075808c, d_0075808c::f_0075808c);

// f_007580b8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_007580b8 {

struct __attribute__((packed)) Object_007580b8_0 {
    u8 unknown_0[0x270];  // (not used here)
    u8 byte_270;
};
GUEST_OFFSET(Object_007580b8_0, byte_270, 0x270);  // (from the original)


u32 f_007580b8(gptr<Object_007580b8_0> arg0) {
    u32 r0 = arg0.addr();
    if ((u32(arg0->byte_270) & 7u) == 3u) {
        r0 = 1u;
    } else {
        r0 = 0u;
    }
    return r0;
}

}  // namespace d_007580b8
GUEST_EXPORT(0x007580b8, d_007580b8::f_007580b8);

// f_007580d0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_007580d0 {

struct __attribute__((packed)) Object_007580d0_0 {
    u8 unknown_0[0x30];  // (not used here)
    u8 byte_30;
};
GUEST_OFFSET(Object_007580d0_0, byte_30, 0x30);  // (from the original)


u32 f_007580d0(gptr<Object_007580d0_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r1 = 0;
    u32 r2 = 0;
    u32 zf = 0;
    r2 = u32(arg0->byte_30);
    r1 = 0u;
    zf = r2 == 1u;
    if (!zf) {
        zf = r2 == 3u;
    }
    if (!zf) {
        zf = r2 == 6u;
    }
    if (zf) {
        r1 = r0;
    }
    r0 = r1;
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_007580d0
GUEST_EXPORT(0x007580d0, d_007580d0::f_007580d0);

// f_00758118: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00758118 {

struct __attribute__((packed)) Object_00758118_0 {
    u8 unknown_0[0x270];  // (not used here)
    u8 byte_270;
};
GUEST_OFFSET(Object_00758118_0, byte_270, 0x270);  // (from the original)


u32 f_00758118(gptr<Object_00758118_0> arg0) {
    u32 r0 = arg0.addr();
    r0 = u32(arg0->byte_270) << 0x1b >> 0x1e;  // (from the original)
    return r0;
}

}  // namespace d_00758118
GUEST_EXPORT(0x00758118, d_00758118::f_00758118);

// f_00758128: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00758128 {

inline constexpr guest::Function<0x00100d2d, u32(u32, u32, u32, u32)> call_00100d2c;  // (from the original)
inline constexpr guest::Function<0x002fb328, u32(u32, u32, u32, u32)> call_002fb328;  // (from the original)

u32 f_00758128(u32 r0, u32 r1, u32 r2) {
    u32 ea = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r13 = guest::cpu()->r[13];
    u32 zf = 0;
    r13 = r13 - 8;
    r4 = r0;
    guest::cpu()->r[13] = r13;
    r0 = call_002fb328(r0, r1, r2, guest::cpu()->r[3]);
    r1 = u32(*gptr<u8>(r4 + 0x30u));  // (from the original)
    r0 = r0 + 0x621b8u;  // (from the original)
    zf = r1 == 1u;
    if (!zf) {
        zf = r1 == 3u;
    }
    if (!zf) {
        zf = r1 == 6u;
    }
    if (!zf) {
        zf = r1 == 2u;
        if (!zf) {
            zf = r1 == 4u;
        }
        if (!zf) {
            r0 = 0u;
            r13 = r13 + 8;
            guest::cpu()->r[1] = r1;
            guest::cpu()->r[13] = r13;
            return r0;
        }
        r1 = u32(*gptr<u16>(r0));
        if (r1 != u32(*gptr<u16>(r4))) {
            goto L_7581d8;
        }
        r1 = u32(*gptr<u8>(r0 + 0x14u));  // (from the original)
        if (r1 != u32(*gptr<u8>(r4 + 0x14u))) {  // (from the original)
            goto L_7581d8;
        }
        r2 = 0x12u;  // (from the original)
        r1 = r4 + 2u;
        r0 = r0 + 2u;
        guest::cpu()->r[13] = r13;
        r0 = call_00100d2c(r0, r1, r2, guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        if (r0 != 0) {
            goto L_7581d8;
        }
        goto L_7581e4;
    }
    ea = r0;
    r1 = u32(*gptr<u16>(ea));
    ea = r4 + 0x16u;  // (from the original)
    r4 = ea;
    if (r1 != u32(*gptr<u16>(ea))) {
        goto L_7581d8;
    }
    r1 = u32(*gptr<u8>(r0 + 0x14u));  // (from the original)
    if (r1 != u32(*gptr<u8>(r4 + 0x14u))) {  // (from the original)
        goto L_7581d8;
    }
    r2 = 0x12u;  // (from the original)
    r1 = r4 + 2u;
    r0 = r0 + 2u;
    guest::cpu()->r[13] = r13;
    r0 = call_00100d2c(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 == 0) {
        goto L_7581e4;
    }
L_7581d8:;
    r0 = 0u;
    r0 = r0 ^ 1u;
    r13 = r13 + 8;
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
L_7581e4:;
    r0 = 1u;
    r0 = r0 ^ 1u;
    r13 = r13 + 8;
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_00758128
GUEST_EXPORT(0x00758128, d_00758128::f_00758128);

// f_007581ec: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_007581ec {

struct __attribute__((packed)) Object_007581ec_0 {
    u8 unknown_0[0x30];  // (not used here)
    u8 byte_30;
};
GUEST_OFFSET(Object_007581ec_0, byte_30, 0x30);  // (from the original)


u32 f_007581ec(gptr<Object_007581ec_0> arg0) {
    u32 r0 = arg0.addr();
    u32 zf = 0;
    r0 = u32(arg0->byte_30);
    zf = r0 == 1u;
    if (!zf) {
        zf = r0 == 3u;
    }
    if (zf) {
        r0 = 1u;
    } else {
        r0 = 0u;
    }
    return r0;
}

}  // namespace d_007581ec
GUEST_EXPORT(0x007581ec, d_007581ec::f_007581ec);

// f_007586b4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_007586b4 {

inline constexpr guest::Function<0x007588ec, u32(u32, u32, u32, u32)> call_007588ec;  // (from the original)
inline constexpr guest::Function<0x00758bac, u32(u32, u32, u32, u32)> call_00758bac;  // (from the original)

u32 f_007586b4(u32 r0, u32 r1_unused, u32 r2, u32 r3) {
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
    u32 r12 = 0;
    u32 r13 = guest::cpu()->r[13];
    u32 r14 = guest::cpu()->r[14];
    u32 zf = 0;
    r13 = r13 - 0x30u;  // (from the original)
    r4 = r0;
    r1 = 0u;
    guest::cpu()->r[13] = r13;
    r0 = call_00758bac(r0, r1, r2, r3);
    *gptr<u32>(r13) = u32(r0);
    r5 = 1u;
    if (u32(*gptr<u8>(r4 + 0x64u)) == 7u) {  // (from the original)
        r7 = 1u;
    } else {
        r7 = 0u;
    }
    r0 = r4 + 0x34u;  // (from the original)
    if (u32(*gptr<u16>(r4 + 0x62u)) == 0) {  // (from the original)
        r6 = 1u;
    } else {
        r6 = 0u;
    }
    r2 = r5;
    r3 = r5 + u32(s32(r4 + 0x64u - r0) >> 1);  // (from the original)
    do {
L_758704:;
        r1 = u32(*gptr<u16>(r0));
        if (r1 == 0) {
            goto L_758728;
        }
        if (r1 == 0xau) {  // (from the original)
            goto L_75874c;
        }
        r2 = r2 + 1u;
        res = r3 - r2;
        r0 = r0 + 2u;
        guest::preempt();
    } while (!u32(res == 0) && res >> 0x1f == ((r3 ^ r2) & (r3 ^ res)) >> 0x1f);  // (from the original)
L_758728:;
    r1 = r13 + 8u;
    r0 = r4 + 0x34u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_007588ec(r0, r1, r2, r3);
    *gptr<u32>(r13 + 4u) = u32(r0);
    r0 = u32(*gptr<u8>(r4 + 0x270u));  // (from the original)
    if ((r0 & 7u) != 1u) {
        goto L_758764;
    }
    goto L_758754;
L_75874c:;
    r5 = 0u;
    guest::preempt();
    goto L_758728;
L_758754:;
    res = r0 << 0x19 >> 0x1f;  // (from the original)
    if (res == 0) {
        r8 = 1u;
        goto L_758768;
    }
L_758764:;
    r8 = 0u;
L_758768:;
    r3 = 0xff20u;  // (from the original)
    if (u32(*gptr<u8>(r4 + 0x271u)) == 0x1bu) {  // (from the original)
        r9 = 1u;
    } else {
        r9 = 0u;
    }
    r0 = r4 + 0x68u;  // (from the original)
    r2 = 1u;
    if (u32(*gptr<u8>(r4 + 0x272u)) == 0) {  // (from the original)
        r10 = 1u;
    } else {
        r10 = 0u;
    }
    r12 = r2;
    r11 = r2 + u32(s32(r4 + 0xaau - r0) >> 1);  // (from the original)
    do {
L_7587a4:;
        r1 = u32(*gptr<u16>(r0));
        if (r1 == 0) {
            goto L_7587d4;
        }
        zf = r1 == 0x40u;  // (from the original)
        if (!zf) {
            zf = r1 == r3;
        }
        if (zf) {
            r2 = 0u;
            goto L_7587d4;
        }
        r12 = r12 + 1u;
        res = r11 - r12;
        r0 = r0 + 2u;
        guest::preempt();
    } while (!u32(res == 0) && res >> 0x1f == ((r11 ^ r12) & (r11 ^ res)) >> 0x1f);  // (from the original)
L_7587d4:;
    r11 = 1u;
    r0 = r4 + 0xaau;  // (from the original)
    r12 = r11;
    r14 = r11;
    r11 = r11 + u32(s32(r4 + 0x22cu - r0) >> 1);  // (from the original)
    do {
L_7587f0:;
        r1 = u32(*gptr<u16>(r0));
        if (r1 == 0) {
            goto L_758820;
        }
        zf = r1 == 0x40u;  // (from the original)
        if (!zf) {
            zf = r1 == r3;
        }
        if (zf) {
            r2 = 0u;
            goto L_758820;
        }
        r12 = r12 + 1u;
        res = r11 - r12;
        r0 = r0 + 2u;
        guest::preempt();
    } while (!u32(res == 0) && res >> 0x1f == ((r11 ^ r12) & (r11 ^ res)) >> 0x1f);  // (from the original)
L_758820:;
    r0 = r4 + 0x22cu;  // (from the original)
    r12 = r14;
    r11 = 1u;
    r14 = r14 + u32(s32(r4 + 0x26eu - r0) >> 1);  // (from the original)
    do {
L_75883c:;
        r1 = u32(*gptr<u16>(r0));
        if (r1 == 0) {
            goto L_75886c;
        }
        zf = r1 == 0x40u;  // (from the original)
        if (!zf) {
            zf = r1 == r3;
        }
        if (zf) {
            r2 = 0u;
            goto L_75886c;
        }
        r11 = r11 + 1u;
        res = r14 - r11;
        r0 = r0 + 2u;
        guest::preempt();
    } while (!u32(res == 0) && res >> 0x1f == ((r14 ^ r11) & (r14 ^ res)) >> 0x1f);  // (from the original)
L_75886c:;
    r0 = r4 + 0x22cu;  // (from the original)
    r3 = 1u;
    r1 = r3;
    r4 = r12 + u32(s32(r4 + 0x26eu - r0) >> 1);  // (from the original)
    do {
L_758888:;
        r12 = u32(*gptr<u16>(r0));
        if (r12 == 0) {
            goto L_7588ac;
        }
        if (r12 == 0xau) {  // (from the original)
            goto L_7588e0;
        }
        r1 = r1 + 1u;
        res = r4 - r1;
        r0 = r0 + 2u;
        guest::preempt();
    } while (!u32(res == 0) && res >> 0x1f == ((r4 ^ r1) & (r4 ^ res)) >> 0x1f);  // (from the original)
L_7588ac:;
    r1 = *gptr<u32>(r13) & r7 & r6 & r5;
    r0 = *gptr<u32>(r13 + 4u) & r1 & r8 & r9 & r10 & r2 & r3;
    r13 = r13 + 0x30u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
L_7588e0:;
    r3 = 0u;
    guest::preempt();
    goto L_7588ac;
}

}  // namespace d_007586b4
GUEST_EXPORT(0x007586b4, d_007586b4::f_007586b4);

// f_007588ec: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_007588ec {

inline constexpr guest::Function<0x003083bc, u32(u32, u32, u32, u32)> call_003083bc;  // (from the original)
inline constexpr guest::Function<0x005e9fdc, u32(u32, u32, u32, u32)> call_005e9fdc;  // (from the original)
inline constexpr guest::Function<0x005f4bfc, u32(u32, u32, u32, u32)> call_005f4bfc;  // (from the original)
inline constexpr guest::Function<0x007589dc, u32(u32, u32, u32, u32)> call_007589dc;  // (from the original)

u32 f_007588ec(u32 r0, u32 r1, u32 r2_unused, u32 r3, float S0) {
    u32 ea = 0;
    u32 res = 0;
    u32 r2 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r13 = guest::cpu()->r[13];
    u32 nf = 0;
    u32 zf = 0;
    u32 vf = 0;
    r13 = r13 - 0x58u;  // (from the original)
    r6 = r0;
    r5 = r1;
    r0 = r13;
    r2 = 0x18u;  // (from the original)
    r1 = r13 + 0x18u;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    r0 = call_003083bc(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
    r4 = 0x909d90u;  // (from the original)
    *gptr<u32>(r0) = u32(r4);
    r0 = r0 + 0xcu;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    r0 = call_005f4bfc(r0, r1, r2, r3);
    S0 = guest::cpu()->s[0];
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
    *gptr<u32>(r0 + 0x38u) = u32(r1);  // (from the original)
    *gptr<u32>(r0 + 0x3cu) = u32(r1);  // (from the original)
    *gptr<u32>(r0 + 0x40u) = u32(r1);  // (from the original)
    r2 = 0x8906ecu;  // (from the original)
    *gptr<u32>(r0 + 0x44u) = u32(r1);  // (from the original)
    r0 = r0 + 0x16u;  // (from the original)
    r1 = 0xcu;  // (from the original)
    do {
L_75895c:;
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
    r1 = r13;
    r0 = r6;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    r0 = call_007589dc(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
    r0 = r13;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    r0 = call_005e9fdc(r0, r1, r2, r3);
    S0 = guest::cpu()->s[0];
    r1 = 0x42c00000u;  // (from the original)
    r0 = std::bit_cast<u32>(S0);
    *gptr<u32>(r5) = u32(std::bit_cast<u32>(S0));
    *gptr<u32>(r13) = u32(r4);
    res = r0 - r1;
    nf = res >> 0x1f;  // (from the original)
    zf = res == 0;
    vf = ((r0 ^ r1) & (r0 ^ res)) >> 0x1f;  // (from the original)
    if (zf || nf != vf) {
        r5 = 1u;
    }
    if (!zf && nf == vf) {
        r5 = 0u;
    }
    r0 = r5;
    r13 = r13 + 0x58u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_007588ec
GUEST_EXPORT(0x007588ec, d_007588ec::f_007588ec);

// f_00758bac: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00758bac {

struct __attribute__((packed)) Object_00758bac_0 {
    u8 unknown_0[0xa8];  // (not used here)
    u16 half_a8;
    u8 unknown_aa[0x180];  // (not used here)
    u16 half_22a;
    u8 unknown_22c[0x40];  // (not used here)
    u16 half_26c;
    u8 byte_26e;
    u8 unknown_26f[0x2];  // (not used here)
    u8 byte_271;
};
GUEST_OFFSET(Object_00758bac_0, half_a8, 0xa8);  // (from the original)
GUEST_OFFSET(Object_00758bac_0, half_22a, 0x22a);  // (from the original)
GUEST_OFFSET(Object_00758bac_0, half_26c, 0x26c);  // (from the original)
GUEST_OFFSET(Object_00758bac_0, byte_26e, 0x26e);  // (from the original)
GUEST_OFFSET(Object_00758bac_0, byte_271, 0x271);  // (from the original)

inline constexpr guest::Function<0x002fc934, u32(u32, u32, u32, u32)> call_002fc934;  // (from the original)
inline constexpr guest::Function<0x002fcaf4, u32(u32, u32, u32, u32)> call_002fcaf4;  // (from the original)
inline constexpr guest::Function<0x0030b6b8, u32(u32, u32, u32, u32)> call_0030b6b8;  // (from the original)
inline constexpr guest::Function<0x006b9b30, u32(u32, u32, u32, u32)> call_006b9b30;  // (from the original)
inline constexpr guest::Function<0x006baa64, u32(u32, u32, u32, u32)> call_006baa64;  // (from the original)

u32 f_00758bac(gptr<Object_00758bac_0> arg0, u32 r1_unused, u32 r2_unused, u32 r3) {
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
    u32 r12 = 0;
    u32 r13 = guest::cpu()->r[13];
    u32 zf = 0;
    u32 cf = 0;
    *gptr<u32>(r13 + 0xffffffe0u) = u32(r3);  // (from the original)
    r13 = r13 - 0x20;  // (from the original)
    r4 = r0;
    r0 = u32(arg0->byte_26e);
    zf = r0 == 0x20u;  // (from the original)
    cf = r0 >= 0x20u;  // (from the original)
    if (!cf || zf) {
        r8 = 1u;
    }
    if (cf && !zf) {
        r8 = 0u;
    }
    if (u32(arg0->byte_271) >= 0x23u) {  // (from the original)
        r9 = 0u;
    } else {
        r9 = 1u;
    }
    if (u32(arg0->half_a8) == 0) {
        zf = u32(arg0->half_22a) == 0;
        if (zf) {
            zf = u32(arg0->half_26c) == 0;
        }
        if (zf) {
            r6 = 1u;
            goto L_758c00;
        }
    }
    r6 = 0u;
L_758c00:;
    r5 = 1u;
    r0 = r4 + 0x68u;  // (from the original)
    r3 = r5;
    r1 = r5;
    r12 = r5 + u32(s32(r4 + 0xaau - r0) >> 1);  // (from the original)
    do {
L_758c1c:;
        r2 = u32(*gptr<u16>(r0));
        zf = r2 == 0xeu;  // (from the original)
        if (!zf) {
            zf = r2 == 0xfu;  // (from the original)
        }
        if (zf) {
            goto L_758cec;
        }
        r1 = r1 + 1u;
        res = r12 - r1;
        r0 = r0 + 2u;
        guest::preempt();
    } while (!u32(res == 0) && res >> 0x1f == ((r12 ^ r1) & (r12 ^ res)) >> 0x1f);  // (from the original)
L_758c3c:;
    r0 = r4 + 0xaau;  // (from the original)
    r1 = 1u;
    r12 = r3 + u32(s32(r4 + 0x22cu - r0) >> 1);  // (from the original)
    do {
L_758c50:;
        r2 = u32(*gptr<u16>(r0));
        zf = r2 == 0xeu;  // (from the original)
        if (!zf) {
            zf = r2 == 0xfu;  // (from the original)
        }
        if (zf) {
            goto L_758cf4;
        }
        r1 = r1 + 1u;
        res = r12 - r1;
        r0 = r0 + 2u;
        guest::preempt();
    } while (!u32(res == 0) && res >> 0x1f == ((r12 ^ r1) & (r12 ^ res)) >> 0x1f);  // (from the original)
L_758c70:;
    r0 = r4 + 0x22cu;  // (from the original)
    r1 = 1u;
    r3 = r3 + u32(s32(r4 + 0x26eu - r0) >> 1);  // (from the original)
    do {
L_758c88:;
        r2 = u32(*gptr<u16>(r0));
        zf = r2 == 0xeu;  // (from the original)
        if (!zf) {
            zf = r2 == 0xfu;  // (from the original)
        }
        if (zf) {
            goto L_758cfc;
        }
        r1 = r1 + 1u;
        res = r3 - r1;
        r0 = r0 + 2u;
        guest::preempt();
    } while (!u32(res == 0) && res >> 0x1f == ((r3 ^ r1) & (r3 ^ res)) >> 0x1f);  // (from the original)
L_758ca8:;
    r1 = u32(*gptr<u8>(r4 + 0x26fu));  // (from the original)
    if (u32(*gptr<u8>(r4 + 0x270u)) << 0x1a >> 0x1f == 0) {  // (from the original)
        r0 = 0x29u;  // (from the original)
    } else {
        r0 = 0x2au;  // (from the original)
    }
    guest::cpu()->r[13] = r13;
    r0 = call_006b9b30(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    res = r0 - 0x7ffeu;  // (from the original)
    r1 = res;
    if (res == 0) {
        r7 = 0u;
    } else {
        r7 = 1u;
    }
    r0 = r4 + 0x274u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002fcaf4(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 != 0) {
        r4 = 1u;
        goto L_758d44;
    }
    goto L_758d04;
L_758cec:;
    r5 = 0u;
    guest::preempt();
    goto L_758c3c;
L_758cf4:;
    r5 = 0u;
    guest::preempt();
    goto L_758c70;
L_758cfc:;
    r5 = 0u;
    guest::preempt();
    goto L_758ca8;
L_758d04:;
    r1 = r4 + 0x274u;  // (from the original)
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_002fc934(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_006baa64(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_0030b6b8(r0, r1, r2, r3);
    r1 = 0x172au;  // (from the original)
    r0 = r0 - 0x2000u;  // (from the original)
    zf = r0 == r1;
    cf = r0 >= r1;
    if (!cf || zf) {
        r4 = 1u;
    }
    if (cf && !zf) {
        r4 = 0u;
    }
L_758d44:;
    r0 = r8 & r9 & r6 & r5 & r7 & r4;
    r13 = r13 + 0x20;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_00758bac
GUEST_EXPORT(0x00758bac, d_00758bac::f_00758bac);

// f_00758d74: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00758d74 {

inline constexpr guest::Function<0x005fdf68, u32(u32, u32, u32, u32)> call_005fdf68;  // (from the original)

u32 f_00758d74(u32 r0, u32 r1) {
    u32 r2 = 0;
    r1 = r1 + 0xaau;  // (from the original)
    r2 = 0xc1u;  // (from the original)
    guest::cpu()->r[13] -= 8u;
    r0 = call_005fdf68(r0, r1, r2, guest::cpu()->r[3]);
    r1 = 0x908b9cu;  // (from the original)
    *gptr<u32>(r0) = u32(r1);
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_00758d74
GUEST_EXPORT(0x00758d74, d_00758d74::f_00758d74);

// f_00758d94: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00758d94 {

inline constexpr guest::Function<0x005fdf68, u32(u32, u32, u32, u32)> call_005fdf68;  // (from the original)

u32 f_00758d94(u32 r0, u32 r1) {
    u32 r2 = 0;
    r1 = r1 + 0x22cu;  // (from the original)
    r2 = 0x21u;  // (from the original)
    guest::cpu()->r[13] -= 8u;
    r0 = call_005fdf68(r0, r1, r2, guest::cpu()->r[3]);
    r1 = 0x908b9cu;  // (from the original)
    *gptr<u32>(r0) = u32(r1);
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_00758d94
GUEST_EXPORT(0x00758d94, d_00758d94::f_00758d94);

// f_00758db4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00758db4 {

inline constexpr guest::Function<0x005fdf68, u32(u32, u32, u32, u32)> call_005fdf68;  // (from the original)

u32 f_00758db4(u32 r0, u32 r1) {
    u32 r2 = 0;
    r1 = r1 + 0x68u;  // (from the original)
    r2 = 0x21u;  // (from the original)
    guest::cpu()->r[13] -= 8u;
    r0 = call_005fdf68(r0, r1, r2, guest::cpu()->r[3]);
    r1 = 0x908b9cu;  // (from the original)
    *gptr<u32>(r0) = u32(r1);
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_00758db4
GUEST_EXPORT(0x00758db4, d_00758db4::f_00758db4);

// f_00758de0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00758de0 {

inline constexpr guest::Function<0x007589dc, u32(u32, u32, u32, u32)> call_007589dc;  // (from the original)

u32 f_00758de0() {
    return call_007589dc(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_00758de0
GUEST_EXPORT(0x00758de0, d_00758de0::f_00758de0);

// f_00759328: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00759328 {

inline constexpr guest::Function<0x002fb378, u32(u32, u32, u32, u32)> call_002fb378;  // (from the original)
inline constexpr guest::Function<0x002fb430, u32(u32, u32, u32, u32)> call_002fb430;  // (from the original)
inline constexpr guest::Function<0x003081b4, u32(u32, u32, u32, u32)> call_003081b4;  // (from the original)
inline constexpr guest::Function<0x00308efc, u32(u32, u32, u32, u32)> call_00308efc;  // (from the original)
inline constexpr guest::Function<0x0056be20, u32(u32, u32, u32, u32)> call_0056be20;  // (from the original)
inline constexpr guest::Function<0x007593ec, u32(u32, u32, u32, u32)> call_007593ec;  // (from the original)
inline constexpr guest::Function<0x00759664, u32(u32, u32, u32, u32)> call_00759664;  // (from the original)
inline constexpr guest::Function<0x007795ac, u32(u32, u32, u32, u32)> call_007795ac;  // (from the original)

u32 f_00759328(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 ea = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 0x50u;  // (from the original)
    r7 = r0;
    r5 = r1;
    r6 = r2;
    guest::cpu()->r[13] = r13;
    r0 = call_002fb378(r0, r1, r2, r3);
    r1 = *gptr<u32>(r0);
    r2 = *gptr<u32>(r0 + 4);
    r3 = r13 + 8u;
    r4 = r13 + 0x18u;  // (from the original)
    *gptr<u32>(r13 + 0x10u) = u32(*gptr<u32>(r0 + 8u));  // (from the original)
    r0 = r13 + 8u;
    *gptr<u32>(r3) = u32(r1);
    *gptr<u32>(r3 + 4) = u32(r2);
    guest::cpu()->r[13] = r13;
    r0 = call_0056be20(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    *gptr<u32>(r13) = u32(r0);
    *gptr<u32>(r13 + 4) = u32(r1);
    r0 = r4;
    guest::cpu()->r[13] = r13;
    r0 = call_007795ac(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = r13;
    r0 = r4;
    guest::cpu()->r[13] = r13;
    r0 = call_003081b4(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r5 != 0) {
        r4 = r13 + 0x18u;  // (from the original)
        r1 = r4;
        r0 = r13 + 0x2cu;  // (from the original)
        guest::cpu()->r[13] = r13;
        r0 = call_002fb430(r0, r1, r2, r3);
        ea = r13 + 0x2cu;  // (from the original)
        r1 = *gptr<u32>(ea + 4);
        r2 = *gptr<u32>(ea + 8);
        r3 = r13 + 0x20u;  // (from the original)
        *gptr<u32>(r3) = u32(*gptr<u32>(ea));
        *gptr<u32>(r3 + 4) = u32(r1);
        *gptr<u32>(r3 + 8) = u32(r2);
        r0 = r13 + 0x20u;  // (from the original)
        guest::cpu()->r[13] = r13;
        r0 = call_00308efc(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r0 = r13 + 0x20u;  // (from the original)
        guest::cpu()->r[13] = r13;
        r0 = call_0056be20(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        *gptr<u32>(r13) = u32(r0);
        *gptr<u32>(r13 + 4) = u32(r1);
        r0 = r4;
        guest::cpu()->r[13] = r13;
        r0 = call_007795ac(r0, r1, r2, r3);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r1 = r13;
        r0 = r4;
        guest::cpu()->r[13] = r13;
        r0 = call_003081b4(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
    }
    r0 = r13 + 0x18u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00759664(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = r0;
    r3 = r1;
    r0 = r7;
    *gptr<u32>(r13) = u32(r5);
    *gptr<u32>(r13 + 4) = u32(r6);
    guest::cpu()->r[13] = r13;
    r0 = call_007593ec(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r13 = r13 + 0x50u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_00759328
GUEST_EXPORT(0x00759328, d_00759328::f_00759328);

// f_007593ec: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_007593ec {

inline constexpr guest::Function<0x002fb430, u32(u32, u32, u32, u32)> call_002fb430;  // (from the original)
inline constexpr guest::Function<0x002fd4b4, u32(u32, u32, u32, u32)> call_002fd4b4;  // (from the original)
inline constexpr guest::Function<0x003081b4, u32(u32, u32, u32, u32)> call_003081b4;  // (from the original)
inline constexpr guest::Function<0x00308efc, u32(u32, u32, u32, u32)> call_00308efc;  // (from the original)
inline constexpr guest::Function<0x0056be20, u32(u32, u32, u32, u32)> call_0056be20;  // (from the original)
inline constexpr guest::Function<0x0056c258, u32(u32, u32, u32, u32)> call_0056c258;  // (from the original)
inline constexpr guest::Function<0x00759664, u32(u32, u32, u32, u32)> call_00759664;  // (from the original)
inline constexpr guest::Function<0x007795ac, u32(u32, u32, u32, u32)> call_007795ac;  // (from the original)

u32 f_007593ec(u32 r0, u32 r1_unused, u32 r2, u32 r3) {
    u32 ea = 0;
    u32 r1 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 0x60u;  // (from the original)
    r1 = r13 + 0x60u;  // (from the original)
    r8 = r0;
    ea = r1;
    r7 = *gptr<u32>(ea + 4);
    r5 = r2;
    r6 = r3;
    if (*gptr<u32>(ea) != 0) {
        r4 = r13 + 0x28u;  // (from the original)
        r0 = r8;
        guest::cpu()->r[13] = r13;
        r0 = call_00759664(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        ea = r13 + 0x10u;  // (from the original)
        *gptr<u32>(ea) = u32(r0);
        *gptr<u32>(ea + 4) = u32(r1);
        r0 = r4;
        guest::cpu()->r[13] = r13;
        r0 = call_007795ac(r0, r1, r2, r3);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r1 = r13 + 0x10u;  // (from the original)
        r0 = r4;
        guest::cpu()->r[13] = r13;
        r0 = call_003081b4(r0, r1, r2, r3);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r1 = r13 + 0x10u;  // (from the original)
        r4 = r13 + 0x30u;  // (from the original)
        r0 = r4;
        *gptr<u32>(r1) = u32(r5);
        *gptr<u32>(r1 + 4) = u32(r6);
        guest::cpu()->r[13] = r13;
        r0 = call_007795ac(r0, r1, r2, r3);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r1 = r13 + 0x10u;  // (from the original)
        r0 = r4;
        guest::cpu()->r[13] = r13;
        r0 = call_003081b4(r0, r1, r2, r3);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r4 = r13 + 0x28u;  // (from the original)
        r1 = r4;
        r0 = r13 + 0x38u;  // (from the original)
        guest::cpu()->r[13] = r13;
        r0 = call_002fb430(r0, r1, r2, r3);
        ea = r13 + 0x38u;  // (from the original)
        r1 = *gptr<u32>(ea + 4);
        r2 = *gptr<u32>(ea + 8);
        r3 = r13 + 0x10u;  // (from the original)
        *gptr<u32>(r3) = u32(*gptr<u32>(ea));
        *gptr<u32>(r3 + 4) = u32(r1);
        *gptr<u32>(r3 + 8) = u32(r2);
        r0 = r13 + 0x10u;  // (from the original)
        guest::cpu()->r[13] = r13;
        r0 = call_00308efc(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r0 = r13 + 0x10u;  // (from the original)
        guest::cpu()->r[13] = r13;
        r0 = call_0056be20(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        ea = r13 + 0x38u;  // (from the original)
        *gptr<u32>(ea) = u32(r0);
        *gptr<u32>(ea + 4) = u32(r1);
        r0 = r4;
        guest::cpu()->r[13] = r13;
        r0 = call_007795ac(r0, r1, r2, r3);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r1 = r13 + 0x38u;  // (from the original)
        r0 = r4;
        guest::cpu()->r[13] = r13;
        r0 = call_003081b4(r0, r1, r2, r3);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r4 = r13 + 0x30u;  // (from the original)
        r1 = r4;
        r0 = r13 + 0x38u;  // (from the original)
        guest::cpu()->r[13] = r13;
        r0 = call_002fb430(r0, r1, r2, r3);
        ea = r13 + 0x38u;  // (from the original)
        r1 = *gptr<u32>(ea + 4);
        r2 = *gptr<u32>(ea + 8);
        r3 = r13 + 0x10u;  // (from the original)
        *gptr<u32>(r3) = u32(*gptr<u32>(ea));
        *gptr<u32>(r3 + 4) = u32(r1);
        *gptr<u32>(r3 + 8) = u32(r2);
        r0 = r13 + 0x10u;  // (from the original)
        guest::cpu()->r[13] = r13;
        r0 = call_00308efc(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r0 = r13 + 0x10u;  // (from the original)
        guest::cpu()->r[13] = r13;
        r0 = call_0056be20(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        ea = r13 + 0x38u;  // (from the original)
        *gptr<u32>(ea) = u32(r0);
        *gptr<u32>(ea + 4) = u32(r1);
        r0 = r4;
        guest::cpu()->r[13] = r13;
        r0 = call_007795ac(r0, r1, r2, r3);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r1 = r13 + 0x38u;  // (from the original)
        r0 = r4;
        guest::cpu()->r[13] = r13;
        r0 = call_003081b4(r0, r1, r2, r3);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r1 = r13 + 0x28u;  // (from the original)
        r0 = r13 + 0x38u;  // (from the original)
        guest::cpu()->r[13] = r13;
        r0 = call_002fb430(r0, r1, r2, r3);
        ea = r13 + 0x38u;  // (from the original)
        r1 = *gptr<u32>(ea + 4);
        r2 = *gptr<u32>(ea + 8);
        r3 = r13 + 4u;
        *gptr<u32>(r3) = u32(*gptr<u32>(ea));
        *gptr<u32>(r3 + 4) = u32(r1);
        *gptr<u32>(r3 + 8) = u32(r2);
        r1 = r13 + 0x30u;  // (from the original)
        r0 = r13 + 0x10u;  // (from the original)
        guest::cpu()->r[13] = r13;
        r0 = call_002fb430(r0, r1, r2, r3);
        ea = r13 + 0x10u;  // (from the original)
        r1 = *gptr<u32>(ea + 4);
        r2 = *gptr<u32>(ea + 8);
        r3 = r13 + 0x1cu;  // (from the original)
        *gptr<u32>(r3) = u32(*gptr<u32>(ea));
        *gptr<u32>(r3 + 4) = u32(r1);
        *gptr<u32>(r3 + 8) = u32(r2);
        r2 = r7;
        r1 = r13 + 4u;
        r0 = r13 + 0x1cu;  // (from the original)
    } else {
        r0 = r13 + 0x18u;  // (from the original)
        guest::cpu()->r[13] = r13;
        r0 = call_0056c258(r0, r1, r2, r3);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r1 = r8;
        r0 = r13 + 0xcu;  // (from the original)
        guest::cpu()->r[13] = r13;
        r0 = call_002fb430(r0, r1, r2, r3);
        r3 = guest::cpu()->r[3];
        r4 = r13 + 0xcu;  // (from the original)
        r1 = *gptr<u32>(r4 + 4);
        r2 = *gptr<u32>(r4 + 8);
        *gptr<u32>(r13) = u32(*gptr<u32>(r4));
        *gptr<u32>(r13 + 4) = u32(r1);
        *gptr<u32>(r13 + 8) = u32(r2);
        r2 = r7;
        r1 = r13;
        r0 = r13 + 0x18u;  // (from the original)
    }
    guest::cpu()->r[13] = r13;
    r0 = call_002fd4b4(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r13 = r13 + 0x60u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_007593ec
GUEST_EXPORT(0x007593ec, d_007593ec::f_007593ec);

// f_007596ac: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_007596ac {

inline constexpr guest::Function<0x002fb430, u32(u32, u32, u32, u32)> call_002fb430;  // (from the original)
inline constexpr guest::Function<0x0074fff8, u32(u32, u32, u32, u32)> call_0074fff8;  // (from the original)

u32 f_007596ac(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = guest::cpu()->r[4];
    u32 r13 = guest::cpu()->r[13];
    r4 = r1;
    r13 = r13 - 0x20u;  // (from the original)
    r1 = r0;
    r0 = r13 + 0xcu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002fb430(r0, r1, r2, r3);
    r3 = r13 + 0xcu;  // (from the original)
    r1 = *gptr<u32>(r3 + 4);
    r2 = *gptr<u32>(r3 + 8);
    *gptr<u32>(r13) = u32(*gptr<u32>(r3));
    *gptr<u32>(r13 + 4) = u32(r1);
    *gptr<u32>(r13 + 8) = u32(r2);
    r1 = r4;
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_0074fff8(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r13 = r13 + 0x20u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_007596ac
GUEST_EXPORT(0x007596ac, d_007596ac::f_007596ac);

// f_007598fc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_007598fc {

struct __attribute__((packed)) Object_007598fc_0 {
    u8 unknown_0[0x10];  // (not used here)
    u8 byte_10;
};
GUEST_OFFSET(Object_007598fc_0, byte_10, 0x10);  // (from the original)


u32 f_007598fc(gptr<Object_007598fc_0> arg0) {
    u32 r0 = arg0.addr();
    if (u32(arg0->byte_10) >= 2u) {
        r0 = 1u;
    } else {
        r0 = 0u;
    }
    return r0;
}

}  // namespace d_007598fc
GUEST_EXPORT(0x007598fc, d_007598fc::f_007598fc);

// f_00759910: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00759910 {

struct __attribute__((packed)) Object_00759910_0 {
    u8 unknown_0[0xc];  // (not used here)
    u8 byte_c;
    u8 byte_d;
    u8 byte_e;
    u8 byte_f;
};
GUEST_OFFSET(Object_00759910_0, byte_c, 0xc);  // (from the original)
GUEST_OFFSET(Object_00759910_0, byte_d, 0xd);  // (from the original)
GUEST_OFFSET(Object_00759910_0, byte_e, 0xe);  // (from the original)
GUEST_OFFSET(Object_00759910_0, byte_f, 0xf);  // (from the original)


u32 f_00759910(gptr<Object_00759910_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r1 = 0;
    r1 = 0u;
    if (u32(arg0->byte_c) != 0) {
        r1 = 1u;
    }
    if (u32(arg0->byte_d) != 0) {
        r1 = r1 + 1u;
    }
    if (u32(arg0->byte_e) != 0) {
        r1 = r1 + 1u;
    }
    if (u32(arg0->byte_f) != 0) {
        r1 = r1 + 1u;
    }
    if (r1 == 0) {
        r0 = 1u;
    } else {
        r0 = 0u;
    }
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_00759910
GUEST_EXPORT(0x00759910, d_00759910::f_00759910);

// f_00759a20: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00759a20 {

struct __attribute__((packed)) Object_00759a20_0 {
    u8 unknown_0[0xc];  // (not used here)
    u8 byte_c;
    u8 unknown_d[0x1];  // (not used here)
    u8 byte_e;
    u8 unknown_f[0x1];  // (not used here)
    u8 byte_10;
    u8 unknown_11[0x1];  // (not used here)
    u8 byte_12;
};
GUEST_OFFSET(Object_00759a20_0, byte_c, 0xc);  // (from the original)
GUEST_OFFSET(Object_00759a20_0, byte_e, 0xe);  // (from the original)
GUEST_OFFSET(Object_00759a20_0, byte_10, 0x10);  // (from the original)
GUEST_OFFSET(Object_00759a20_0, byte_12, 0x12);  // (from the original)


u32 f_00759a20(gptr<Object_00759a20_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r1 = 0;
    u32 zf = 0;
    r1 = u32(arg0->byte_c);
    zf = r1 == 0;
    if (zf) {
        r1 = u32(arg0->byte_e);
        zf = r1 == 0;
    }
    if (!zf) {
        r0 = 0u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r1 = u32(arg0->byte_10);
    zf = r1 == 0;
    if (zf) {
        zf = u32(arg0->byte_12) == 0;
    }
    if (zf) {
        r0 = 1u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r0 = 0u;
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_00759a20
GUEST_EXPORT(0x00759a20, d_00759a20::f_00759a20);

// f_00759a54: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00759a54 {

struct __attribute__((packed)) Object_00759a54_1 {
    u16 half_0;
    u16 half_2;
};
GUEST_OFFSET(Object_00759a54_1, half_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_00759a54_1, half_2, 0x2);  // (from the original)

inline constexpr guest::Function<0x006c5c60, u32(u32, u32, u32, u32)> call_006c5c60;  // (from the original)

u32 f_00759a54(gptr<Float3> arg0, gptr<Object_00759a54_1> arg1, u32 r2_unused, u32 r3) {
    u32 r0 = arg0.addr();
    u32 r1 = arg1.addr();
    u32 r2 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r13 = guest::cpu()->r[13];
    float S0 = 0;
    float S1 = 0;
    float S2 = 0;
    *gptr<u32>(r13 + 0xfffffff0u) = u32(r3);  // (from the original)
    r13 = r13 - 0x10;  // (from the original)
    r2 = u32(arg1->half_2);
    S0 = std::bit_cast<float>(*gptr<u32>(0x759aa8u));  // (from the original)
    *gptr<u16>(r13) = u16(r2);
    r2 = sxth(r2);
    r1 = u32(arg1->half_0);
    *gptr<u16>(r13) = u16(r1);
    S2 = float(s32(std::bit_cast<u32>(std::bit_cast<float>(r2)))) * S0;
    S0 = float(s32(std::bit_cast<u32>(std::bit_cast<float>(sxth(r1))))) * S0;
    S1 = std::bit_cast<float>(*gptr<u32>(0x759aacu));  // (from the original)
    arg0->v[0] = S0;
    arg0->v[1] = S1;
    arg0->v[2] = S2;
    r4 = r0;
    r1 = 0u;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2;
    r0 = call_006c5c60(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    *gptr<u32>(r4 + 4u) = u32(std::bit_cast<u32>(S0));
    r13 = r13 + 0x10;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    return r0;
}

}  // namespace d_00759a54
GUEST_EXPORT(0x00759a54, d_00759a54::f_00759a54);

// f_00759ab0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00759ab0 {

struct __attribute__((packed)) Object_00759ab0_1 {
    u16 half_0;
    u16 half_2;
};
GUEST_OFFSET(Object_00759ab0_1, half_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_00759ab0_1, half_2, 0x2);  // (from the original)

inline constexpr guest::Function<0x006c7868, u32(u32, u32, u32, u32)> call_006c7868;  // (from the original)

u32 f_00759ab0(gptr<Float3> arg0, gptr<Object_00759ab0_1> arg1, u32 r2_unused, u32 r3) {
    u32 r0 = arg0.addr();
    u32 r1 = arg1.addr();
    u32 r2 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r13 = guest::cpu()->r[13];
    float S0 = 0;
    float S1 = 0;
    float S2 = 0;
    *gptr<u32>(r13 + 0xfffffff0u) = u32(r3);  // (from the original)
    r13 = r13 - 0x10;  // (from the original)
    r2 = u32(arg1->half_2);
    S0 = std::bit_cast<float>(*gptr<u32>(0x759b04u));  // (from the original)
    *gptr<u16>(r13) = u16(r2);
    r2 = sxth(r2);
    r1 = u32(arg1->half_0);
    *gptr<u16>(r13) = u16(r1);
    S2 = float(s32(std::bit_cast<u32>(std::bit_cast<float>(r2)))) * S0;
    S0 = float(s32(std::bit_cast<u32>(std::bit_cast<float>(sxth(r1))))) * S0;
    S1 = std::bit_cast<float>(*gptr<u32>(0x759b08u));  // (from the original)
    arg0->v[0] = S0;
    arg0->v[1] = S1;
    arg0->v[2] = S2;
    r4 = r0;
    r1 = 0u;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2;
    r0 = call_006c7868(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    *gptr<u32>(r4 + 4u) = u32(std::bit_cast<u32>(S0));
    r13 = r13 + 0x10;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    return r0;
}

}  // namespace d_00759ab0
GUEST_EXPORT(0x00759ab0, d_00759ab0::f_00759ab0);

// f_00759ba8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00759ba8 {

struct __attribute__((packed)) Object_00759ba8_0 {
    u8 unknown_0[0x90];  // (not used here)
    u32 word_90;
    u32 word_94;
};
GUEST_OFFSET(Object_00759ba8_0, word_90, 0x90);  // (from the original)
GUEST_OFFSET(Object_00759ba8_0, word_94, 0x94);  // (from the original)


u32 f_00759ba8(gptr<Object_00759ba8_0> arg0) {
    u32 res = 0;
    u32 r0 = arg0.addr();
    u32 r1 = 0;
    u32 r2 = 0;
    u32 nf = 0;
    u32 vf = 0;
    r1 = arg0->word_90;
    r2 = arg0->word_94;
    r0 = r1 - 1u;
    res = r2 - r0;
    nf = res >> 0x1f;  // (from the original)
    vf = ((r2 ^ r0) & (r2 ^ res)) >> 0x1f;  // (from the original)
    if (nf == vf) {
        r0 = 1u;
    }
    if (nf != vf) {
        r0 = 0u;
    }
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_00759ba8
GUEST_EXPORT(0x00759ba8, d_00759ba8::f_00759ba8);

// f_00759bc4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00759bc4 {

struct __attribute__((packed)) Object_00759bc4_0 {
    u8 unknown_0[0x94];  // (not used here)
    u32 word_94;
};
GUEST_OFFSET(Object_00759bc4_0, word_94, 0x94);  // (from the original)


u32 f_00759bc4(gptr<Object_00759bc4_0> arg0) {
    u32 r0 = arg0.addr();
    u32 nf = 0;
    u32 zf = 0;
    u32 vf = 0;
    r0 = arg0->word_94;
    nf = r0 >> 0x1f;  // (from the original)
    zf = r0 == 0;
    vf = 0u;
    if (zf || nf != vf) {
        r0 = 1u;
    }
    if (!zf && nf == vf) {
        r0 = 0u;
    }
    return r0;
}

}  // namespace d_00759bc4
GUEST_EXPORT(0x00759bc4, d_00759bc4::f_00759bc4);

// f_00759bd8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00759bd8 {

inline constexpr guest::Function<0x0075c158, u32(u32, u32, u32, u32)> call_0075c158;  // (from the original)

u32 f_00759bd8(u32 r0_unused, u32 r1_unused, u32 r2_unused, u32 r3) {
    u32 r0 = 0;
    u32 r1 = 0;
    u32 r2 = 0;
    u32 r13 = guest::cpu()->r[13];
    *gptr<u32>(r13 + 0xfffffff8u) = u32(r3);  // (from the original)
    r13 = r13 - 8;
    *gptr<u32>(r13) = u32(~0u);
    r2 = 0x890c6cu;  // (from the original)
    r3 = 2u;
    r1 = r13;
    r0 = *gptr<u32>(0x95debcu);  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0075c158(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r0 = *gptr<u32>(r13);
    r13 = r13 + 8;
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_00759bd8
GUEST_EXPORT(0x00759bd8, d_00759bd8::f_00759bd8);

// f_00759c0c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00759c0c {

inline constexpr guest::Function<0x0075c158, u32(u32, u32, u32, u32)> call_0075c158;  // (from the original)

u32 f_00759c0c(u32 r0_unused, u32 r1_unused, u32 r2_unused, u32 r3) {
    u32 r0 = 0;
    u32 r1 = 0;
    u32 r2 = 0;
    u32 r13 = guest::cpu()->r[13];
    *gptr<u32>(r13 + 0xfffffff8u) = u32(r3);  // (from the original)
    r13 = r13 - 8;
    *gptr<u32>(r13) = u32(~0u);
    r2 = 0x890c6cu;  // (from the original)
    r3 = 1u;
    r1 = r13;
    r0 = *gptr<u32>(0x95debcu);  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0075c158(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r0 = *gptr<u32>(r13);
    r13 = r13 + 8;
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_00759c0c
GUEST_EXPORT(0x00759c0c, d_00759c0c::f_00759c0c);

// f_00759c40: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00759c40 {

inline constexpr guest::Function<0x0075c158, u32(u32, u32, u32, u32)> call_0075c158;  // (from the original)

u32 f_00759c40(u32 r0, u32 r1, u32 r2_unused, u32 r3) {
    u32 r2 = 0;
    u32 r13 = guest::cpu()->r[13];
    r2 = r0;
    r0 = ~0u;
    *gptr<u32>(r13 + 0xfffffff8u) = u32(r3);  // (from the original)
    r13 = r13 - 8;
    if (r1 >= 3u) {
        r13 = r13 + 8;
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    r0 = r2 + (r1 << 2);
    r2 = 0x890c6cu;  // (from the original)
    r3 = *gptr<u32>(r0 + 0x98u);  // (from the original)
    *gptr<u32>(r13) = u32(~0u);
    r1 = r13;
    r0 = *gptr<u32>(0x95debcu);  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0075c158(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r0 = *gptr<u32>(r13);
    r13 = r13 + 8;
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_00759c40
GUEST_EXPORT(0x00759c40, d_00759c40::f_00759c40);

// f_00759c88: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00759c88 {

struct __attribute__((packed)) Object_00759c88_0 {
    u8 unknown_0[0xac];  // (not used here)
    u8 byte_ac;
};
GUEST_OFFSET(Object_00759c88_0, byte_ac, 0xac);  // (from the original)


u32 f_00759c88(gptr<Object_00759c88_0> arg0, u32 r1) {
    u32 r0 = arg0.addr();
    u32 r2 = 0;
    u32 cf = 0;
    r2 = u32(arg0->byte_ac);
    r0 = 0u;
    cf = r2 >= 5u;
    if (!cf) {
        cf = r1 >= 2u;
    }
    if (cf) {
        return r0;
    }
    r0 = *gptr<u32>(0x893200u + (r2 << 3) + (r1 << 2));  // (from the original)
    return r0;
}

}  // namespace d_00759c88
GUEST_EXPORT(0x00759c88, d_00759c88::f_00759c88);

// f_0075a29c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0075a29c {

inline constexpr guest::Function<0x005ec990, u32(u32, u32, u32, u32)> call_005ec990;  // (from the original)
inline constexpr guest::Function<0x005fd310, u32(u32, u32, u32, u32)> call_005fd310;  // (from the original)
inline constexpr guest::Function<0x0060184c, u32(u32, u32, u32, u32)> call_0060184c;  // (from the original)
inline constexpr guest::Function<0x006019b0, u32(u32, u32, u32, u32)> call_006019b0;  // (from the original)

u32 f_0075a29c(u32 r0, u32 r1, u32 r2) {
    u32 ea = 0;
    u32 res = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r9 = guest::cpu()->r[9];
    u32 r10 = guest::cpu()->r[10];
    u32 r11 = guest::cpu()->r[11];
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 0xc0u;  // (from the original)
    r4 = r0;
    r5 = r1;
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_005fd310(r0, r1, r2, guest::cpu()->r[3]);
    r2 = guest::cpu()->r[2];
    r0 = *gptr<u32>(r4 + 0x14u);  // (from the original)
    r1 = *gptr<u32>(r4);
    res = r5;
    r4 = 0u;
    r0 = r1 + (r0 >> 1 << 1);
    *gptr<u32>(r13 + 0x80u) = u32(r0);  // (from the original)
    *gptr<u32>(r13 + 0x7cu) = u32(r0);  // (from the original)
    if (u32(res == 0) || res >> 0x1f != (r5 & (r5 ^ res)) >> 0x1f) {  // (from the original)
        goto L_75a38c;
    }
    r7 = 0u;
    r8 = 1u;
    r9 = 4u;
    r10 = ~0x80000000u;  // (from the original)
    r11 = ~0u;
    do {
L_75a2ec:;
        r1 = r0;
        r0 = r13 + 0x88u;  // (from the original)
        guest::cpu()->r[13] = r13;
        r0 = call_005ec990(r0, r1, r2, guest::cpu()->r[3]);
        ea = r13 + 0x7cu;  // (from the original)
        r0 = *gptr<u32>(ea);
        ea = r13 + 0x60u;  // (from the original)
        *gptr<u8>(ea) = u8(r9);
        ea = r13 + 0x64u;  // (from the original)
        *gptr<u32>(ea) = u32(r7);
        ea = r13 + 0x7cu;  // (from the original)
        *gptr<u32>(ea) = u32(r0 + 2u);
        ea = r13 + 0x68u;  // (from the original)
        *gptr<u16>(ea) = u16(r7);
        ea = r13 + 0x6cu;  // (from the original)
        *gptr<u32>(ea) = u32(r10);
        *gptr<u32>(ea + 4) = u32(r11);
        r6 = r13;
        r2 = 0x95df14u;  // (from the original)
        r1 = r13 + 0x7cu;  // (from the original)
        r0 = r6;
        *gptr<u8>(r13 + 0x74u) = u8(r7);  // (from the original)
        *gptr<u32>(r13 + 0x78u) = u32(r7);  // (from the original)
        guest::cpu()->r[13] = r13;
        r0 = call_006019b0(r0, r1, r2, guest::cpu()->r[3]);
        r2 = guest::cpu()->r[2];
        r0 = *gptr<u32>(r13 + 0x7cu);  // (from the original)
        r1 = 0x95df14u;  // (from the original)
        *gptr<u8>(r13 + 0x60u) = u8(r8);  // (from the original)
        *gptr<u32>(r13 + 0x64u) = u32(r0);  // (from the original)
        r0 = r6;
        guest::cpu()->r[13] = r13;
        r0 = call_0060184c(r0, r1, r2, guest::cpu()->r[3]);
        r2 = guest::cpu()->r[2];
        r0 = 0u;
        if (!(u32(*gptr<u8>(r13 + 0x74u)) == 0)) {  // (from the original)
            r0 = u32(s32(*gptr<u32>(r13 + 0x78u) - *gptr<u32>(r13 + 0x64u)) >> 1);  // (from the original)
        }
        r4 = r4 + 1u;
        res = r4 - r5;
        r0 = *gptr<u32>(r13 + 0x7cu) + (r0 << 1);  // (from the original)
        *gptr<u32>(r13 + 0x7cu) = u32(r0);  // (from the original)
        guest::preempt();
    } while (res >> 0x1f != ((r4 ^ r5) & (r4 ^ res)) >> 0x1f);  // (from the original)
L_75a38c:;
    r1 = r0;
    r0 = u32(s32(r1 - *gptr<u32>(r13 + 0x80u)) >> 1);  // (from the original)
    r13 = r13 + 0xc0u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_0075a29c
GUEST_EXPORT(0x0075a29c, d_0075a29c::f_0075a29c);

// f_0075a818: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0075a818 {

inline constexpr guest::Function<0x005ec990, u32(u32, u32, u32, u32)> call_005ec990;  // (from the original)
inline constexpr guest::Function<0x005fd310, u32(u32, u32, u32, u32)> call_005fd310;  // (from the original)
inline constexpr guest::Function<0x0060184c, u32(u32, u32, u32, u32)> call_0060184c;  // (from the original)
inline constexpr guest::Function<0x006019b0, u32(u32, u32, u32, u32)> call_006019b0;  // (from the original)

u32 f_0075a818(u32 r0, u32 r1, u32 r2) {
    u32 ea = 0;
    u32 res = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r9 = guest::cpu()->r[9];
    u32 r10 = guest::cpu()->r[10];
    u32 r11 = guest::cpu()->r[11];
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 0xb8u;  // (from the original)
    r4 = r0;
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_005fd310(r0, r1, r2, guest::cpu()->r[3]);
    r2 = guest::cpu()->r[2];
    r0 = *gptr<u32>(r4 + 0x14u);  // (from the original)
    r1 = *gptr<u32>(r4);
    r4 = 0u;
    r7 = r4;
    r8 = 1u;
    r6 = r1 + (r0 >> 1 << 1);
    r9 = 4u;
    r10 = ~0x80000000u;  // (from the original)
    r11 = ~0u;
    *gptr<u32>(r13 + 0x7cu) = u32(r6);  // (from the original)
    do {
L_75a858:;
        r1 = *gptr<u32>(r13 + 0x7cu);  // (from the original)
        r0 = r13 + 0x80u;  // (from the original)
        guest::cpu()->r[13] = r13;
        r0 = call_005ec990(r0, r1, r2, guest::cpu()->r[3]);
        ea = r13 + 0x7cu;  // (from the original)
        r0 = *gptr<u32>(ea);
        ea = r13 + 0x60u;  // (from the original)
        *gptr<u8>(ea) = u8(r9);
        ea = r13 + 0x64u;  // (from the original)
        *gptr<u32>(ea) = u32(r7);
        ea = r13 + 0x7cu;  // (from the original)
        *gptr<u32>(ea) = u32(r0 + 2u);
        ea = r13 + 0x68u;  // (from the original)
        *gptr<u16>(ea) = u16(r7);
        ea = r13 + 0x6cu;  // (from the original)
        *gptr<u32>(ea) = u32(r10);
        *gptr<u32>(ea + 4) = u32(r11);
        r5 = r13;
        r2 = 0x95df14u;  // (from the original)
        r1 = r13 + 0x7cu;  // (from the original)
        r0 = r5;
        *gptr<u8>(r13 + 0x74u) = u8(r7);  // (from the original)
        *gptr<u32>(r13 + 0x78u) = u32(r7);  // (from the original)
        guest::cpu()->r[13] = r13;
        r0 = call_006019b0(r0, r1, r2, guest::cpu()->r[3]);
        r2 = guest::cpu()->r[2];
        r0 = *gptr<u32>(r13 + 0x7cu);  // (from the original)
        r1 = 0x95df14u;  // (from the original)
        *gptr<u8>(r13 + 0x60u) = u8(r8);  // (from the original)
        *gptr<u32>(r13 + 0x64u) = u32(r0);  // (from the original)
        r0 = r5;
        guest::cpu()->r[13] = r13;
        r0 = call_0060184c(r0, r1, r2, guest::cpu()->r[3]);
        r2 = guest::cpu()->r[2];
        r0 = 0u;
        if (!(u32(*gptr<u8>(r13 + 0x74u)) == 0)) {  // (from the original)
            r0 = u32(s32(*gptr<u32>(r13 + 0x78u) - *gptr<u32>(r13 + 0x64u)) >> 1);  // (from the original)
        }
        r1 = *gptr<u32>(r13 + 0x7cu);  // (from the original)
        r4 = r4 + 1u;
        res = r4 - 2u;
        r0 = r1 + (r0 << 1);
        *gptr<u32>(r13 + 0x7cu) = u32(r0);  // (from the original)
        guest::preempt();
    } while (res >> 0x1f != ((r4 ^ 2u) & (r4 ^ res)) >> 0x1f);  // (from the original)
    r0 = u32(s32(r0 - r6) >> 1);
    r13 = r13 + 0xb8u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_0075a818
GUEST_EXPORT(0x0075a818, d_0075a818::f_0075a818);

// f_0075a90c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0075a90c {

struct __attribute__((packed)) Object_0075a90c_0 {
    u8 unknown_0[0x10];  // (not used here)
    u32 word_10;
};
GUEST_OFFSET(Object_0075a90c_0, word_10, 0x10);  // (from the original)

struct __attribute__((packed)) Object_0075a90c_1 {
    u8 byte_0;
};
GUEST_OFFSET(Object_0075a90c_1, byte_0, 0x0);  // (from the original)


u32 f_0075a90c(gptr<Object_0075a90c_0> arg0, gptr<Object_0075a90c_1> arg1) {
    u32 r0 = arg0.addr();
    r0 = u32(*gptr<u8>(arg0->word_10));
    arg1->byte_0 = u8(r0);
    return r0;
}

}  // namespace d_0075a90c
GUEST_EXPORT(0x0075a90c, d_0075a90c::f_0075a90c);

// f_0075a91c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0075a91c {

struct __attribute__((packed)) Object_0075a91c_0 {
    u8 unknown_0[0x10];  // (not used here)
    u32 word_10;
};
GUEST_OFFSET(Object_0075a91c_0, word_10, 0x10);  // (from the original)

struct __attribute__((packed)) Object_0075a91c_1 {
    u8 byte_0;
};
GUEST_OFFSET(Object_0075a91c_1, byte_0, 0x0);  // (from the original)


u32 f_0075a91c(gptr<Object_0075a91c_0> arg0, gptr<Object_0075a91c_1> arg1) {
    u32 r0 = arg0.addr();
    r0 = u32(*gptr<u8>(arg0->word_10));
    arg1->byte_0 = u8(r0);
    return r0;
}

}  // namespace d_0075a91c
GUEST_EXPORT(0x0075a91c, d_0075a91c::f_0075a91c);

// f_0075ac90: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0075ac90 {

struct __attribute__((packed)) Object_0075ac90_0 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u8 unknown_c[0x4];  // (not used here)
    u32 word_10;
};
GUEST_OFFSET(Object_0075ac90_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_0075ac90_0, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_0075ac90_0, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Object_0075ac90_0, word_10, 0x10);  // (from the original)


u32 f_0075ac90(gptr<Object_0075ac90_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r1 = 0;
    u32 zf = 0;
    r1 = arg0->word_0;
    zf = (r1 & 1u) == 0;
    if (!zf) {
        zf = arg0->word_4 + 1u == 0;
    }
    if (!zf) {
        r0 = 1u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    zf = (r1 & 2u) == 0;
    if (!zf) {
        zf = arg0->word_8 + 1u == 0;
    }
    if (!zf) {
        r0 = 1u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    if ((r1 & 4u) == 0) {
        r0 = 0u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r1 = u32(s32(s8(*gptr<u8>(0x8c9f1cu))));  // (from the original)
    if (u32(s32(s8(*gptr<u8>(arg0->word_10)))) == r1) {
        r0 = 0u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r0 = 1u;
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_0075ac90
GUEST_EXPORT(0x0075ac90, d_0075ac90::f_0075ac90);

// f_0075ad18: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0075ad18 {

struct __attribute__((packed)) Object_0075ad18_0 {
    u32 word_0;
    u8 unknown_4[0x4];  // (not used here)
    u32 word_8;
};
GUEST_OFFSET(Object_0075ad18_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_0075ad18_0, word_8, 0x8);  // (from the original)

inline constexpr guest::Function<0x00300768, u32(u32, u32, u32, u32)> call_00300768;  // (from the original)

u32 f_0075ad18(gptr<Object_0075ad18_0> arg0, u32 r1_unused, u32 r2) {
    u32 r0 = arg0.addr();
    u32 r1 = 0;
    u32 r3 = 0;
    u32 zf = 0;
    guest::cpu()->r[13] -= 8u;
    r1 = arg0->word_0;
    zf = (r1 & 2u) == 0;
    if (!zf) {
        r2 = arg0->word_8;
        zf = r2 + 1u == 0;
    }
    if (!zf) {
        if (r2 == 0) {
            r0 = 1u;
            guest::cpu()->r[13] += 8u;
            guest::cpu()->r[1] = r1;
            return r0;
        }
        r0 = 0u;
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    if ((r1 & 4u) == 0) {
        goto L_75ad70;
    }
    r2 = u32(s32(s8(*gptr<u8>(*gptr<u32>(r0 + 0x10u)))));  // (from the original)
    r3 = u32(s32(s8(*gptr<u8>(0x8c9f1cu))));  // (from the original)
    if (r2 == r3) {
        goto L_75ad70;
    }
    r1 = 0xad5b7cu;  // (from the original)
    r0 = r0 + 0xcu;  // (from the original)
    r0 = call_00300768(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1;
    return r0;
L_75ad70:;
    zf = (r1 & 1u) == 0;
    if (!zf) {
        zf = *gptr<u32>(r0 + 4u) + 1u == 0;
    }
    if (!zf) {
        r0 = 0u;
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r0 = 1u;
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_0075ad18
GUEST_EXPORT(0x0075ad18, d_0075ad18::f_0075ad18);

// f_0075ad90: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0075ad90 {

struct __attribute__((packed)) Object_0075ad90_0 {
    u8 unknown_0[0x14];  // (not used here)
    u32 word_14;
    u8 unknown_18[0x4];  // (not used here)
    u32 word_1c;
    u32 word_20;
    u8 unknown_24[0x94];  // (not used here)
    u32 word_b8;
};
GUEST_OFFSET(Object_0075ad90_0, word_14, 0x14);  // (from the original)
GUEST_OFFSET(Object_0075ad90_0, word_1c, 0x1c);  // (from the original)
GUEST_OFFSET(Object_0075ad90_0, word_20, 0x20);  // (from the original)
GUEST_OFFSET(Object_0075ad90_0, word_b8, 0xb8);  // (from the original)

inline constexpr guest::Function<0x005ea0a8, u32(u32, u32, u32, u32)> call_005ea0a8;  // (from the original)

u32 f_0075ad90(gptr<Object_0075ad90_0> arg0) {
    u32 ea = 0;
    u32 r0 = arg0.addr();
    u32 r1 = 0;
    u32 r2 = 0;
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 0x10u;  // (from the original)
    ea = r13;
    *gptr<u32>(ea) = u32(arg0->word_14);
    r2 = r13 + 4u;
    *gptr<u32>(r13 + 4u) = u32(*gptr<u32>(arg0->word_20 + (arg0->word_1c - 1u << 2)));
    r0 = arg0->word_b8;
    r1 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_005ea0a8(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r13 = r13 + 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_0075ad90
GUEST_EXPORT(0x0075ad90, d_0075ad90::f_0075ad90);

// f_0075b208: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0075b208 {

struct __attribute__((packed)) Object_0075b208_0 {
    u32 word_0;
};
GUEST_OFFSET(Object_0075b208_0, word_0, 0x0);  // (from the original)

struct __attribute__((packed)) Object_0075b208_1 {
    u32 word_0;
};
GUEST_OFFSET(Object_0075b208_1, word_0, 0x0);  // (from the original)

inline constexpr guest::Function<0x0056d060, u32(u32, u32, u32, u32)> call_0056d060;  // (from the original)
inline constexpr guest::Function<0x0062fac8, u32(u32, u32, u32, u32)> call_0062fac8;  // (from the original)
inline constexpr guest::Function<0x0062fb44, u32(u32, u32, u32, u32)> call_0062fb44;  // (from the original)
inline constexpr guest::Function<0x0063001c, u32(u32, u32, u32, u32)> call_0063001c;  // (from the original)

u32 f_0075b208(gptr<Object_0075b208_0> arg0, gptr<Object_0075b208_1> arg1) {
    u32 res = 0;
    u32 r0 = arg0.addr();
    u32 r1 = arg1.addr();
    u32 r2 = 0;
    u32 r4 = guest::cpu()->r[4];
    guest::cpu()->r[13] -= 8u;
    r0 = u32(*gptr<u8>(arg0->word_0 + 8u));
    if (r0 >= 0x16u) {  // (from the original)
        goto L_75b244;
    }
    res = r0 & 0xffu;  // (from the original)
    r0 = res;
    r4 = 0u;
    if (res == 0) {
        goto L_75b244;
    }
    r1 = arg1->word_0;
    r2 = r0 - 1u;
    if (u32(r2 >= 0xbu) && !u32(r2 == 0xbu)) {  // (from the original)
        goto L_75b24c;
    }
    r1 = u32(s32(s8(*gptr<u8>(r1 + 4u))));
    if (r1 != r0) {
        r0 = r4;
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
L_75b244:;
    r4 = 1u;
    r0 = r4;
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1;
    return r0;
L_75b24c:;
    if (r0 != 0xdu) {  // (from the original)
        if (r0 == 0xeu) {  // (from the original)
            goto L_75b2b0;
        }
        if (r0 == 0xfu) {  // (from the original)
            goto L_75b2c8;
        }
        if (r0 == 0x10u) {  // (from the original)
            goto L_75b2e0;
        }
        if (r0 == 0x11u) {  // (from the original)
            goto L_75b2f8;
        }
        if (r0 == 0x12u) {  // (from the original)
            goto L_75b310;
        }
        if (r0 == 0x13u) {  // (from the original)
            goto L_75b328;
        }
        if (r0 == 0x14u) {  // (from the original)
            goto L_75b340;
        }
        if (r0 == 0x15u) {  // (from the original)
            goto L_75b358;
        }
        r0 = r4;
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r0 = r1;
    r0 = call_0056d060(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 != 0) {
        r0 = r4;
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    guest::preempt();
    goto L_75b244;
L_75b2b0:;
    r0 = r1;
    r0 = call_0056d060(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 != 1u) {
        r0 = r4;
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    guest::preempt();
    goto L_75b244;
L_75b2c8:;
    r0 = r1;
    r0 = call_0056d060(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 != 2u) {
        r0 = r4;
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    guest::preempt();
    goto L_75b244;
L_75b2e0:;
    r0 = r1;
    r0 = call_0056d060(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 != 3u) {
        r0 = r4;
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    guest::preempt();
    goto L_75b244;
L_75b2f8:;
    r0 = call_0062fb44(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 == 0) {
        r0 = r4;
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    guest::preempt();
    goto L_75b244;
L_75b310:;
    r0 = call_0063001c(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 == 0) {
        r0 = r4;
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    guest::preempt();
    goto L_75b244;
L_75b328:;
    r0 = call_0063001c(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 == 0) {
        r0 = r4;
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    guest::preempt();
    goto L_75b244;
L_75b340:;
    r0 = call_0063001c(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 == 0) {
        r0 = r4;
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    guest::preempt();
    goto L_75b244;
L_75b358:;
    r0 = call_0062fac8(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 != 0) {
        guest::preempt();
        goto L_75b244;
    }
    r0 = r4;
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_0075b208
GUEST_EXPORT(0x0075b208, d_0075b208::f_0075b208);

// f_0075b438: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0075b438 {

struct __attribute__((packed)) Object_0075b438_0 {
    u32 word_0;
};
GUEST_OFFSET(Object_0075b438_0, word_0, 0x0);  // (from the original)


u32 f_0075b438(gptr<Object_0075b438_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r1 = 0;
    r1 = u32(*gptr<u8>(arg0->word_0 + 7u));
    r0 = 0u;
    if (r1 < 3u) {
        r0 = r1 & 0xffu;  // (from the original)
    }
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_0075b438
GUEST_EXPORT(0x0075b438, d_0075b438::f_0075b438);

// f_0075b450: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0075b450 {

struct __attribute__((packed)) Object_0075b450_0 {
    u32 word_0;
};
GUEST_OFFSET(Object_0075b450_0, word_0, 0x0);  // (from the original)


u32 f_0075b450(gptr<Object_0075b450_0> arg0) {
    u32 r0 = arg0.addr();
    r0 = u32(*gptr<u8>(arg0->word_0 + 1u));
    if (r0 != 1u) {
        r0 = 0u;
    }
    return r0;
}

}  // namespace d_0075b450
GUEST_EXPORT(0x0075b450, d_0075b450::f_0075b450);

// f_0075b558: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0075b558 {

struct __attribute__((packed)) Object_0075b558_0 {
    u32 word_0;
    u8 byte_4;
};
GUEST_OFFSET(Object_0075b558_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_0075b558_0, byte_4, 0x4);  // (from the original)


u32 f_0075b558(gptr<Object_0075b558_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r1 = 0;
    r1 = u32(arg0->byte_4);
    if (r1 >= 0x27u) {  // (from the original)
        r0 = arg0->word_0;
        if (r0 == 0) {
            r1 = 0u;
            r0 = u32(*gptr<u8>(0x890f12u + r1));  // (from the original)
            guest::cpu()->r[1] = r1;
            return r0;
        } else {
            r1 = u32(*gptr<u8>(r0));
        }
    }
    r0 = 0u;
    if (r1 >= 0x27u) {  // (from the original)
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r0 = u32(*gptr<u8>(0x890f12u + r1));  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_0075b558
GUEST_EXPORT(0x0075b558, d_0075b558::f_0075b558);

// f_0075b8b0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0075b8b0 {

inline constexpr guest::Function<0x005ffc14, u32(u32, u32, u32, u32)> call_005ffc14;  // (from the original)
inline constexpr guest::Function<0x00601a20, u32(u32, u32, u32, u32)> call_00601a20;  // (from the original)

u32 f_0075b8b0(u32 r0, u32 r1, u32 r2) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 0x70u;  // (from the original)
    r4 = r0;
    r5 = r1;
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_00601a20(r0, r1, r2, guest::cpu()->r[3]);
    r2 = r5;
    *gptr<u32>(r0) = u32(0x90a998u);  // (from the original)
    r1 = r4;
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_005ffc14(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r13 = r13 + 0x70u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_0075b8b0
GUEST_EXPORT(0x0075b8b0, d_0075b8b0::f_0075b8b0);

// f_0075bdac: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0075bdac {

inline constexpr guest::Function<0x00135740, u32(u32, u32, u32, u32)> call_00135740;  // (from the original)
inline constexpr guest::Function<0x00137e84, u32(u32, u32, u32, u32)> call_00137e84;  // (from the original)
inline constexpr guest::Function<0x00138998, u32(u32, u32, u32, u32)> call_00138998;  // (from the original)
inline constexpr guest::Function<0x00159960, u32(u32, u32, u32, u32)> call_00159960;  // (from the original)
inline constexpr guest::Function<0x005b1760, u32(u32, u32, u32, u32)> call_005b1760;  // (from the original)
inline constexpr guest::Function<0x005b177c, u32(u32, u32, u32, u32)> call_005b177c;  // (from the original)
inline constexpr guest::Function<0x0075adcc, u32(u32, u32, u32, u32)> call_0075adcc;  // (from the original)

u32 f_0075bdac(u32 r0, u32 r1) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r13 = guest::cpu()->r[13];
    u32 zf = 0;
    r4 = r0 + 0x14u;  // (from the original)
    r13 = r13 - 0x18u;  // (from the original)
    r0 = r4;
    guest::cpu()->r[13] = r13;
    r0 = call_0075adcc(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    zf = r0 == 0;
    if (!zf) {
        r5 = *gptr<u32>(r0 + 0x17cu);  // (from the original)
    }
    r6 = 0u;
    if (!zf) {
        zf = r5 == 0;
    }
    if (!zf) {
        r0 = r4;
        guest::cpu()->r[13] = r13;
        r0 = call_00135740(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        r0 = r13;
        guest::cpu()->r[13] = r13;
        r0 = call_005b177c(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1 = r5;
        r0 = r13;
        guest::cpu()->r[13] = r13;
        r0 = call_005b1760(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        r0 = r13;
        guest::cpu()->r[13] = r13;
        r0 = call_00159960(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        r6 = r0;
        r0 = r13;
        guest::cpu()->r[13] = r13;
        r0 = call_00138998(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        r0 = r4;
        guest::cpu()->r[13] = r13;
        r0 = call_00137e84(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
    }
    r0 = r6;
    r13 = r13 + 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_0075bdac
GUEST_EXPORT(0x0075bdac, d_0075bdac::f_0075bdac);

// f_0075be20: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0075be20 {

inline constexpr guest::Function<0x00135740, u32(u32, u32, u32, u32)> call_00135740;  // (from the original)
inline constexpr guest::Function<0x00137e84, u32(u32, u32, u32, u32)> call_00137e84;  // (from the original)
inline constexpr guest::Function<0x00138998, u32(u32, u32, u32, u32)> call_00138998;  // (from the original)
inline constexpr guest::Function<0x001597e0, u32(u32, u32, u32, u32)> call_001597e0;  // (from the original)
inline constexpr guest::Function<0x005b1760, u32(u32, u32, u32, u32)> call_005b1760;  // (from the original)
inline constexpr guest::Function<0x005b177c, u32(u32, u32, u32, u32)> call_005b177c;  // (from the original)
inline constexpr guest::Function<0x0075adcc, u32(u32, u32, u32, u32)> call_0075adcc;  // (from the original)

u32 f_0075be20(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 ea = 0;
    u32 res = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r13 = guest::cpu()->r[13];
    u32 zf = 0;
    res = r3;
    r13 = r13 - 0x20u;  // (from the original)
    r4 = r1;
    r7 = 0u;
    if (res >> 0x1f != (r3 & (r3 ^ res)) >> 0x1f) {  // (from the original)
        goto L_75bebc;
    }
    r5 = r0 + 0x14u;  // (from the original)
    r1 = r2;
    r8 = r3;
    r0 = r5;
    guest::cpu()->r[13] = r13;
    r0 = call_0075adcc(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    zf = r0 == 0;
    if (!zf) {
        r6 = *gptr<u32>(r0 + 0x17cu);  // (from the original)
        zf = r6 == 0;
    }
    if (zf) {
        goto L_75bebc;
    }
    r0 = r5;
    guest::cpu()->r[13] = r13;
    r0 = call_00135740(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_005b177c(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = r6;
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_005b1760(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = r8;
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_001597e0(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r6 = r0;
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_00138998(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r5;
    guest::cpu()->r[13] = r13;
    r0 = call_00137e84(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    if (r6 == 0) {
        goto L_75bebc;
    }
    ea = r4 + 4u;
    *gptr<u32>(ea) = u32(r6);
    r7 = 1u;
    *gptr<u32>(ea + 4u) = u32(~0xc0000000u);  // (from the original)
    goto L_75becc;
L_75bebc:;
    *gptr<u32>(r4 + 4u) = u32(0x8906ecu);  // (from the original)
    *gptr<u32>(r4 + 8u) = u32(~0xc0000000u);  // (from the original)
L_75becc:;
    r0 = r7;
    r13 = r13 + 0x20u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_0075be20
GUEST_EXPORT(0x0075be20, d_0075be20::f_0075be20);

// f_0075bedc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0075bedc {

inline constexpr guest::Function<0x005e8348, u32(u32, u32, u32, u32)> call_005e8348;  // (from the original)
inline constexpr guest::Function<0x005ffc14, u32(u32, u32, u32, u32)> call_005ffc14;  // (from the original)
inline constexpr guest::Function<0x00601a20, u32(u32, u32, u32, u32)> call_00601a20;  // (from the original)
inline constexpr guest::Function<0x00601bc0, u32(u32, u32, u32, u32)> call_00601bc0;  // (from the original)
inline constexpr guest::Function<0x0075be20, u32(u32, u32, u32, u32)> call_0075be20;  // (from the original)

u32 f_0075bedc(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r12 = 0;
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 0xc0u;  // (from the original)
    r7 = r1;
    r12 = r2;
    r6 = 0u;
    r5 = r3;
    *gptr<u32>(r13 + 0x9cu) = u32(0x90a570u);  // (from the original)
    r2 = 0x75bfa0u;  // (from the original)
    r3 = r12;
    r1 = r13 + 0x9cu;  // (from the original)
    *gptr<u32>(r13 + 0xa0u) = u32(r6);  // (from the original)
    *gptr<u32>(r13 + 0xa4u) = u32(r6);  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0075be20(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r4 = r0;
    if (r0 == 0) {
        goto L_75bf94;
    }
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_00601bc0(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    r2 = r13 + 0x9cu;  // (from the original)
    *gptr<u32>(r0) = u32(0x909294u);  // (from the original)
    *gptr<u32>(r0 + 0x8cu) = u32(r5);  // (from the original)
    *gptr<u32>(r0 + 0x90u) = u32(r6);  // (from the original)
    *gptr<u32>(r0 + 0x94u) = u32(r6);  // (from the original)
    *gptr<u8>(r0 + 0x98u) = u8(r6);  // (from the original)
    *gptr<u8>(r0 + 0x99u) = u8(r6);  // (from the original)
    r1 = r7;
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_005e8348(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r6 = 0x90aa8cu;  // (from the original)
    if (r0 == 0) {
        r4 = 0u;
    }
    *gptr<u32>(r13) = u32(r6);
    if (r4 == 0) {
        goto L_75bf94;
    }
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_00601a20(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    r2 = r5;
    *gptr<u32>(r0) = u32(0x90a998u);  // (from the original)
    r1 = r7;
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_005ffc14(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    if (r0 != 0) {
        r4 = 0u;
    }
    *gptr<u32>(r13) = u32(r6);
L_75bf94:;
    r0 = r4;
    r13 = r13 + 0xc0u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_0075bedc
GUEST_EXPORT(0x0075bedc, d_0075bedc::f_0075bedc);

// f_0075bfc0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0075bfc0 {

inline constexpr guest::Function<0x00135740, u32(u32, u32, u32, u32)> call_00135740;  // (from the original)
inline constexpr guest::Function<0x00137e84, u32(u32, u32, u32, u32)> call_00137e84;  // (from the original)
inline constexpr guest::Function<0x00138998, u32(u32, u32, u32, u32)> call_00138998;  // (from the original)
inline constexpr guest::Function<0x001597e0, u32(u32, u32, u32, u32)> call_001597e0;  // (from the original)
inline constexpr guest::Function<0x005b1760, u32(u32, u32, u32, u32)> call_005b1760;  // (from the original)
inline constexpr guest::Function<0x005b177c, u32(u32, u32, u32, u32)> call_005b177c;  // (from the original)
inline constexpr guest::Function<0x0075adcc, u32(u32, u32, u32, u32)> call_0075adcc;  // (from the original)

u32 f_0075bfc0(u32 r0, u32 r1, u32 r2) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r13 = guest::cpu()->r[13];
    u32 zf = 0;
    r4 = r0 + 0x14u;  // (from the original)
    r13 = r13 - 0x20u;  // (from the original)
    r7 = r2;
    r0 = r4;
    guest::cpu()->r[13] = r13;
    r0 = call_0075adcc(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    zf = r0 == 0;
    if (!zf) {
        r5 = *gptr<u32>(r0 + 0x17cu);  // (from the original)
    }
    r6 = 0u;
    if (!zf) {
        zf = r5 == 0;
    }
    if (!zf) {
        r0 = r4;
        guest::cpu()->r[13] = r13;
        r0 = call_00135740(r0, r1, r2, guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r0 = r13;
        guest::cpu()->r[13] = r13;
        r0 = call_005b177c(r0, r1, r2, guest::cpu()->r[3]);
        r2 = guest::cpu()->r[2];
        r1 = r5;
        r0 = r13;
        guest::cpu()->r[13] = r13;
        r0 = call_005b1760(r0, r1, r2, guest::cpu()->r[3]);
        r2 = guest::cpu()->r[2];
        r1 = r7;
        r0 = r13;
        guest::cpu()->r[13] = r13;
        r0 = call_001597e0(r0, r1, r2, guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r6 = r0;
        r0 = r13;
        guest::cpu()->r[13] = r13;
        r0 = call_00138998(r0, r1, r2, guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r0 = r4;
        guest::cpu()->r[13] = r13;
        r0 = call_00137e84(r0, r1, r2, guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
    }
    r0 = r6;
    r13 = r13 + 0x20u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_0075bfc0
GUEST_EXPORT(0x0075bfc0, d_0075bfc0::f_0075bfc0);

// f_0075c348: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0075c348 {

inline constexpr guest::Function<0x00135740, u32(u32, u32, u32, u32)> call_00135740;  // (from the original)
inline constexpr guest::Function<0x00137e84, u32(u32, u32, u32, u32)> call_00137e84;  // (from the original)
inline constexpr guest::Function<0x00138998, u32(u32, u32, u32, u32)> call_00138998;  // (from the original)
inline constexpr guest::Function<0x00159824, u32(u32, u32, u32, u32)> call_00159824;  // (from the original)
inline constexpr guest::Function<0x005b1760, u32(u32, u32, u32, u32)> call_005b1760;  // (from the original)
inline constexpr guest::Function<0x005b177c, u32(u32, u32, u32, u32)> call_005b177c;  // (from the original)
inline constexpr guest::Function<0x0075adcc, u32(u32, u32, u32, u32)> call_0075adcc;  // (from the original)

u32 f_0075c348(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 ea = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r13 = guest::cpu()->r[13];
    u32 zf = 0;
    r4 = r1;
    r5 = r0 + 0x14u;  // (from the original)
    r13 = r13 - 0x20u;  // (from the original)
    r1 = r2;
    r8 = r3;
    r0 = r5;
    guest::cpu()->r[13] = r13;
    r0 = call_0075adcc(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    zf = r0 == 0;
    if (!zf) {
        r7 = *gptr<u32>(r0 + 0x17cu);  // (from the original)
    }
    r6 = 0u;
    if (!zf) {
        zf = r7 == 0;
    }
    if (!zf) {
        r0 = r5;
        guest::cpu()->r[13] = r13;
        r0 = call_00135740(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r0 = r13;
        guest::cpu()->r[13] = r13;
        r0 = call_005b177c(r0, r1, r2, r3);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r1 = r7;
        r0 = r13;
        guest::cpu()->r[13] = r13;
        r0 = call_005b1760(r0, r1, r2, r3);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r1 = r8;
        r0 = r13;
        guest::cpu()->r[13] = r13;
        r0 = call_00159824(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r6 = r0;
        r0 = r13;
        guest::cpu()->r[13] = r13;
        r0 = call_00138998(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r0 = r5;
        guest::cpu()->r[13] = r13;
        r0 = call_00137e84(r0, r1, r2, r3);
    }
    r0 = 1u;
    if (r6 != 0) {
        ea = r4 + 4u;
        *gptr<u32>(ea) = u32(r6);
        r1 = ~0xc0000000u;  // (from the original)
        *gptr<u32>(ea + 4u) = u32(r1);
        r13 = r13 + 0x20u;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    r0 = 0u;
    *gptr<u32>(r4 + 4u) = u32(0x8906ecu);  // (from the original)
    r1 = ~0xc0000000u;  // (from the original)
    *gptr<u32>(r4 + 8u) = u32(r1);
    r13 = r13 + 0x20u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_0075c348
GUEST_EXPORT(0x0075c348, d_0075c348::f_0075c348);

// f_0075c4f8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0075c4f8 {

inline constexpr guest::Function<0x00135740, u32(u32, u32, u32, u32)> call_00135740;  // (from the original)
inline constexpr guest::Function<0x00137e84, u32(u32, u32, u32, u32)> call_00137e84;  // (from the original)
inline constexpr guest::Function<0x00138998, u32(u32, u32, u32, u32)> call_00138998;  // (from the original)
inline constexpr guest::Function<0x00159824, u32(u32, u32, u32, u32)> call_00159824;  // (from the original)
inline constexpr guest::Function<0x005b1760, u32(u32, u32, u32, u32)> call_005b1760;  // (from the original)
inline constexpr guest::Function<0x005b177c, u32(u32, u32, u32, u32)> call_005b177c;  // (from the original)
inline constexpr guest::Function<0x0075adcc, u32(u32, u32, u32, u32)> call_0075adcc;  // (from the original)

u32 f_0075c4f8(u32 r0, u32 r1, u32 r2) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r13 = guest::cpu()->r[13];
    u32 zf = 0;
    r4 = r0 + 0x14u;  // (from the original)
    r13 = r13 - 0x20u;  // (from the original)
    r7 = r2;
    r0 = r4;
    guest::cpu()->r[13] = r13;
    r0 = call_0075adcc(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    zf = r0 == 0;
    if (!zf) {
        r5 = *gptr<u32>(r0 + 0x17cu);  // (from the original)
    }
    r6 = 0u;
    if (!zf) {
        zf = r5 == 0;
    }
    if (!zf) {
        r0 = r4;
        guest::cpu()->r[13] = r13;
        r0 = call_00135740(r0, r1, r2, guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r0 = r13;
        guest::cpu()->r[13] = r13;
        r0 = call_005b177c(r0, r1, r2, guest::cpu()->r[3]);
        r2 = guest::cpu()->r[2];
        r1 = r5;
        r0 = r13;
        guest::cpu()->r[13] = r13;
        r0 = call_005b1760(r0, r1, r2, guest::cpu()->r[3]);
        r2 = guest::cpu()->r[2];
        r1 = r7;
        r0 = r13;
        guest::cpu()->r[13] = r13;
        r0 = call_00159824(r0, r1, r2, guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r6 = r0;
        r0 = r13;
        guest::cpu()->r[13] = r13;
        r0 = call_00138998(r0, r1, r2, guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r0 = r4;
        guest::cpu()->r[13] = r13;
        r0 = call_00137e84(r0, r1, r2, guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
    }
    r0 = r6;
    r13 = r13 + 0x20u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_0075c4f8
GUEST_EXPORT(0x0075c4f8, d_0075c4f8::f_0075c4f8);

// f_0075cd40: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0075cd40 {

struct __attribute__((packed)) Object_0075cd40_0 {
    u32 word_0;
};
GUEST_OFFSET(Object_0075cd40_0, word_0, 0x0);  // (from the original)

struct __attribute__((packed)) Object_0075cd40_1 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
};
GUEST_OFFSET(Object_0075cd40_1, word_4, 0x4);  // (from the original)


void f_0075cd40(gptr<Object_0075cd40_0> arg0, gptr<Object_0075cd40_1> arg1) {
    u32 r1 = arg1.addr();
    r1 = arg1->word_4;
    arg0->word_0 = u32(r1);
    guest::cpu()->r[1] = r1;
    return;
}

}  // namespace d_0075cd40
GUEST_EXPORT(0x0075cd40, d_0075cd40::f_0075cd40);

// f_0075cdbc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0075cdbc {

struct __attribute__((packed)) Object_0075cdbc_0 {
    u8 unknown_0[0x35c];  // (not used here)
    u32 word_35c;
};
GUEST_OFFSET(Object_0075cdbc_0, word_35c, 0x35c);  // (from the original)


u32 f_0075cdbc(gptr<Object_0075cdbc_0> arg0) {
    u32 r0 = arg0.addr();
    r0 = arg0->word_35c + 0x20u;  // (from the original)
    return r0;
}

}  // namespace d_0075cdbc
GUEST_EXPORT(0x0075cdbc, d_0075cdbc::f_0075cdbc);

// f_0075ce78: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0075ce78 {

struct __attribute__((packed)) Object_0075ce78_0 {
    u8 unknown_0[0x35c];  // (not used here)
    u32 word_35c;
};
GUEST_OFFSET(Object_0075ce78_0, word_35c, 0x35c);  // (from the original)


u32 f_0075ce78(gptr<Object_0075ce78_0> arg0) {
    u32 r0 = arg0.addr();
    r0 = *gptr<u32>(arg0->word_35c + 4u);
    return r0;
}

}  // namespace d_0075ce78
GUEST_EXPORT(0x0075ce78, d_0075ce78::f_0075ce78);

// f_0075cf18: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0075cf18 {

struct __attribute__((packed)) Object_0075cf18_0 {
    u8 unknown_0[0x4];  // (not used here)
    u8 byte_4;
    u8 unknown_5[0x1];  // (not used here)
    u8 byte_6;
};
GUEST_OFFSET(Object_0075cf18_0, byte_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_0075cf18_0, byte_6, 0x6);  // (from the original)


u32 f_0075cf18(gptr<Object_0075cf18_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r1 = 0;
    u32 r2 = 0;
    u32 zf = 0;
    r1 = u32(arg0->byte_4);
    zf = r1 == 0;
    if (!zf) {
        zf = r1 == 7u;
    }
    if (zf) {
        r2 = 1u;
    } else {
        r2 = 0u;
    }
    zf = r1 == 8u;
    if (zf) {
        zf = u32(arg0->byte_6) == 5u;
    }
    if (zf) {
        r0 = 1u;
    } else {
        r0 = 0u;
    }
    r0 = r0 | r2;
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_0075cf18
GUEST_EXPORT(0x0075cf18, d_0075cf18::f_0075cf18);

// f_0075cf7c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0075cf7c {

struct __attribute__((packed)) Object_0075cf7c_0 {
    u8 unknown_0[0x35c];  // (not used here)
    u32 word_35c;
};
GUEST_OFFSET(Object_0075cf7c_0, word_35c, 0x35c);  // (from the original)


u32 f_0075cf7c(gptr<Object_0075cf7c_0> arg0) {
    u32 r0 = arg0.addr();
    r0 = *gptr<u32>(arg0->word_35c + 8u);
    return r0;
}

}  // namespace d_0075cf7c
GUEST_EXPORT(0x0075cf7c, d_0075cf7c::f_0075cf7c);

// f_0075d11c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0075d11c {

inline constexpr guest::Function<0x00159960, u32(u32, u32, u32, u32)> call_00159960;  // (from the original)

u32 f_0075d11c(u32 r0) {
    r0 = r0 + 0x32cu;  // (from the original)
    return call_00159960(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_0075d11c
GUEST_EXPORT(0x0075d11c, d_0075d11c::f_0075d11c);

// f_0075d2e0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0075d2e0 {

inline constexpr guest::Function<0x0060c5c4, u32(u32, u32, u32, u32)> call_0060c5c4;  // (from the original)

u32 f_0075d2e0(u32 r0, float S0) {
    guest::cpu()->r[13] -= 8u;
    guest::cpu()->s[0] = S0;
    r0 = call_0060c5c4(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    guest::cpu()->r[13] += 8u;
    S0 = std::bit_cast<float>(*gptr<u32>(r0));
    guest::cpu()->s[0] = S0;
    return r0;
}

}  // namespace d_0075d2e0
GUEST_EXPORT(0x0075d2e0, d_0075d2e0::f_0075d2e0);

// f_0075d4b0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0075d4b0 {

struct __attribute__((packed)) Object_0075d4b0_0 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
};
GUEST_OFFSET(Object_0075d4b0_0, word_4, 0x4);  // (from the original)


u32 f_0075d4b0(gptr<Object_0075d4b0_0> arg0, gptr<Float3> arg1) {
    u32 r0 = arg0.addr();
    u32 r13 = guest::cpu()->r[13];
    float S0 = 0;
    float S1 = 0;
    r13 = r13 - 4u;
    S1 = std::bit_cast<float>(*gptr<u32>(0x8ae144u));  // (from the original)
    S0 = std::bit_cast<float>(vcvt_sz_f(std::bit_cast<float>(arg0->word_4) * arg1->v[2] * S1));
    r0 = std::bit_cast<u32>(S0);
    *gptr<u16>(r13) = u16(r0);
    r0 = uxth(r0);
    r13 = r13 + 4u;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    return r0;
}

}  // namespace d_0075d4b0
GUEST_EXPORT(0x0075d4b0, d_0075d4b0::f_0075d4b0);

// f_0075d4e8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0075d4e8 {

inline constexpr guest::Function<0x0060c5c4, u32(u32, u32, u32, u32)> call_0060c5c4;  // (from the original)

u32 f_0075d4e8(u32 r0, float S0) {
    guest::cpu()->r[13] -= 8u;
    guest::cpu()->s[0] = S0;
    r0 = call_0060c5c4(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    guest::cpu()->r[13] += 8u;
    S0 = std::bit_cast<float>(*gptr<u32>(r0 + 4u));
    guest::cpu()->s[0] = S0;
    return r0;
}

}  // namespace d_0075d4e8
GUEST_EXPORT(0x0075d4e8, d_0075d4e8::f_0075d4e8);

// f_0075d630: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0075d630 {

struct __attribute__((packed)) Object_0075d630_1 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u8 unknown_10[0x4];  // (not used here)
    u32 word_14;
    u32 word_18;
    u32 word_1c;
    u8 unknown_20[0x4];  // (not used here)
    u32 word_24;
    u32 word_28;
    u32 word_2c;
};
GUEST_OFFSET(Object_0075d630_1, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_0075d630_1, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Object_0075d630_1, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Object_0075d630_1, word_14, 0x14);  // (from the original)
GUEST_OFFSET(Object_0075d630_1, word_18, 0x18);  // (from the original)
GUEST_OFFSET(Object_0075d630_1, word_1c, 0x1c);  // (from the original)
GUEST_OFFSET(Object_0075d630_1, word_24, 0x24);  // (from the original)
GUEST_OFFSET(Object_0075d630_1, word_28, 0x28);  // (from the original)
GUEST_OFFSET(Object_0075d630_1, word_2c, 0x2c);  // (from the original)


u32 f_0075d630(gptr<GridTile> arg0, gptr<Object_0075d630_1> arg1) {
    u32 r0 = arg0.addr();
    u32 r1 = arg1.addr();
    u32 r2 = 0;
    u32 r3 = 0;
    r3 = 0u;
    arg1->word_4 = u32(r3);
    arg1->word_8 = u32(u32(u16(arg0->corners[0])) << 0x1b >> 0x18);  // (from the original)
    r2 = 0x85f2e8u;  // (from the original)
    arg1->word_c = u32(r3);
    arg1->word_14 = u32(*gptr<u32>(r2));
    arg1->word_18 = u32((u32(u16(arg0->corners[0])) & 0x3e0u) >> 2);  // (from the original)
    r3 = 0u - *gptr<u32>(0x85f2ecu);  // (from the original)
    arg1->word_1c = u32(r3);
    arg1->word_24 = u32(0u - *gptr<u32>(r2));
    r1 = r1 + 0x28u;  // (from the original)
    r0 = (u32(u16(arg0->corners[0])) & 0x7c00u) >> 7;  // (from the original)
    arg1->word_28 = u32(r0);
    arg1->word_2c = u32(r3);
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_0075d630
GUEST_EXPORT(0x0075d630, d_0075d630::f_0075d630);

// f_0075d6a4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0075d6a4 {

struct __attribute__((packed)) Object_0075d6a4_1 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u8 unknown_10[0x4];  // (not used here)
    u32 word_14;
    u32 word_18;
    u32 word_1c;
    u8 unknown_20[0x4];  // (not used here)
    u32 word_24;
    u32 word_28;
    u32 word_2c;
};
GUEST_OFFSET(Object_0075d6a4_1, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_0075d6a4_1, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Object_0075d6a4_1, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Object_0075d6a4_1, word_14, 0x14);  // (from the original)
GUEST_OFFSET(Object_0075d6a4_1, word_18, 0x18);  // (from the original)
GUEST_OFFSET(Object_0075d6a4_1, word_1c, 0x1c);  // (from the original)
GUEST_OFFSET(Object_0075d6a4_1, word_24, 0x24);  // (from the original)
GUEST_OFFSET(Object_0075d6a4_1, word_28, 0x28);  // (from the original)
GUEST_OFFSET(Object_0075d6a4_1, word_2c, 0x2c);  // (from the original)


u32 f_0075d6a4(gptr<GridTile> arg0, gptr<Object_0075d6a4_1> arg1) {
    u32 r0 = arg0.addr();
    u32 r2 = 0;
    u32 r3 = 0;
    r2 = 0u;
    arg1->word_4 = u32(r2);
    arg1->word_8 = u32(u32(u16(arg0->corners[2])) << 0x1b >> 0x18);  // (from the original)
    r3 = 0x85f2e8u;  // (from the original)
    arg1->word_c = u32(r2);
    arg1->word_14 = u32(0u - *gptr<u32>(r3));
    r2 = 0x85f2ecu;  // (from the original)
    arg1->word_18 = u32((u32(u16(arg0->corners[2])) & 0x3e0u) >> 2);  // (from the original)
    arg1->word_1c = u32(*gptr<u32>(r2));
    arg1->word_24 = u32(*gptr<u32>(r3));
    arg1->word_28 = u32((u32(u16(arg0->corners[2])) & 0x7c00u) >> 7);  // (from the original)
    r0 = *gptr<u32>(r2);
    arg1->word_2c = u32(r0);
    return r0;
}

}  // namespace d_0075d6a4
GUEST_EXPORT(0x0075d6a4, d_0075d6a4::f_0075d6a4);

// f_0075d718: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0075d718 {

struct __attribute__((packed)) Object_0075d718_1 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u8 unknown_10[0x4];  // (not used here)
    u32 word_14;
    u32 word_18;
    u32 word_1c;
    u8 unknown_20[0x4];  // (not used here)
    u32 word_24;
    u32 word_28;
    u32 word_2c;
};
GUEST_OFFSET(Object_0075d718_1, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_0075d718_1, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Object_0075d718_1, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Object_0075d718_1, word_14, 0x14);  // (from the original)
GUEST_OFFSET(Object_0075d718_1, word_18, 0x18);  // (from the original)
GUEST_OFFSET(Object_0075d718_1, word_1c, 0x1c);  // (from the original)
GUEST_OFFSET(Object_0075d718_1, word_24, 0x24);  // (from the original)
GUEST_OFFSET(Object_0075d718_1, word_28, 0x28);  // (from the original)
GUEST_OFFSET(Object_0075d718_1, word_2c, 0x2c);  // (from the original)


u32 f_0075d718(gptr<GridTile> arg0, gptr<Object_0075d718_1> arg1) {
    u32 r0 = arg0.addr();
    u32 r2 = 0;
    u32 r3 = 0;
    u32 r12 = 0;
    r3 = 0u;
    arg1->word_4 = u32(r3);
    arg1->word_8 = u32(u32(u16(arg0->corners[1])) << 0x1b >> 0x18);  // (from the original)
    arg1->word_c = u32(r3);
    r2 = 0u - *gptr<u32>(0x85f2e8u);  // (from the original)
    arg1->word_14 = u32(r2);
    r3 = 0x85f2ecu;  // (from the original)
    arg1->word_18 = u32((u32(u16(arg0->corners[1])) & 0x3e0u) >> 2);  // (from the original)
    r12 = *gptr<u32>(r3);
    arg1->word_24 = u32(r2);
    arg1->word_1c = u32(0u - r12);
    arg1->word_28 = u32((u32(u16(arg0->corners[1])) & 0x7c00u) >> 7);  // (from the original)
    r0 = *gptr<u32>(r3);
    arg1->word_2c = u32(r0);
    return r0;
}

}  // namespace d_0075d718
GUEST_EXPORT(0x0075d718, d_0075d718::f_0075d718);

// f_0075d788: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0075d788 {

struct __attribute__((packed)) Object_0075d788_1 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u8 unknown_10[0x4];  // (not used here)
    u32 word_14;
    u32 word_18;
    u32 word_1c;
    u8 unknown_20[0x4];  // (not used here)
    u32 word_24;
    u32 word_28;
    u32 word_2c;
};
GUEST_OFFSET(Object_0075d788_1, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_0075d788_1, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Object_0075d788_1, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Object_0075d788_1, word_14, 0x14);  // (from the original)
GUEST_OFFSET(Object_0075d788_1, word_18, 0x18);  // (from the original)
GUEST_OFFSET(Object_0075d788_1, word_1c, 0x1c);  // (from the original)
GUEST_OFFSET(Object_0075d788_1, word_24, 0x24);  // (from the original)
GUEST_OFFSET(Object_0075d788_1, word_28, 0x28);  // (from the original)
GUEST_OFFSET(Object_0075d788_1, word_2c, 0x2c);  // (from the original)


u32 f_0075d788(gptr<GridTile> arg0, gptr<Object_0075d788_1> arg1) {
    u32 r0 = arg0.addr();
    u32 r2 = 0;
    u32 r3 = 0;
    r2 = 0u;
    arg1->word_4 = u32(r2);
    arg1->word_8 = u32(u32(u16(arg0->corners[3])) << 0x1b >> 0x18);  // (from the original)
    r3 = 0x85f2e8u;  // (from the original)
    arg1->word_c = u32(r2);
    arg1->word_14 = u32(*gptr<u32>(r3));
    r2 = 0x85f2ecu;  // (from the original)
    arg1->word_18 = u32((u32(u16(arg0->corners[3])) & 0x3e0u) >> 2);  // (from the original)
    arg1->word_1c = u32(*gptr<u32>(r2));
    arg1->word_24 = u32(*gptr<u32>(r3));
    arg1->word_28 = u32((u32(u16(arg0->corners[3])) & 0x7c00u) >> 7);  // (from the original)
    r0 = 0u - *gptr<u32>(r2);
    arg1->word_2c = u32(r0);
    return r0;
}

}  // namespace d_0075d788
GUEST_EXPORT(0x0075d788, d_0075d788::f_0075d788);

// f_0075d898: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0075d898 {


u32 f_0075d898(u32 r0, u32 r1, u32 r2) {
    u32 r3 = 0;
    r2 = r2 & 0xfu;  // (from the original)
    r3 = r1 & 0xfu;  // (from the original)
    r1 = r2 + (r2 << 2);
    r0 = (u32(*gptr<u8>(r0 + (r1 << 5) + (r3 + (r3 << 2) << 1) + 0x25u)) & 0x80u) >> 7;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_0075d898
GUEST_EXPORT(0x0075d898, d_0075d898::f_0075d898);

// f_0075d968: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0075d968 {


u32 f_0075d968(u32 r0, u32 r1) {
    goto L_75d968;
L_75d968:;
    if (r1 >= 2u) {
        r0 = 0u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r1 = (r1 << 6) - (r1 + (r1 << 2));
    r0 = r0 + (r1 << 2) + 0x52cu;  // (from the original)
    r0 = *gptr<u32>(r0 + 0xd0u);  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_0075d968
GUEST_EXPORT(0x0075d968, d_0075d968::f_0075d968);

// f_0075d990: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0075d990 {

inline constexpr guest::Function<0x002f74c8, u32(u32, u32, u32, u32)> call_002f74c8;  // (from the original)

u32 f_0075d990(u32 r0) {
    u32 r4 = guest::cpu()->r[4];
    goto L_75d990;
L_75d990:;
    guest::cpu()->r[13] -= 8u;
    r4 = r0;
    r0 = call_002f74c8(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    if (r0 != 0xa1u) {  // (from the original)
        if (r0 != 0xa2u) {  // (from the original)
            r0 = 0u;
            guest::cpu()->r[13] += 8u;
            return r0;
        }
        r0 = r4 + 0x400u;  // (from the original)
        guest::cpu()->r[13] += 8u;
        r0 = r0 + 0x218u;  // (from the original)
        r0 = *gptr<u32>(r0 + 0xd0u);  // (from the original)
        return r0;
    }
    r0 = r4 + 0x400u;  // (from the original)
    guest::cpu()->r[13] += 8u;
    r0 = r0 + 0x12cu;  // (from the original)
    r0 = *gptr<u32>(r0 + 0xd0u);  // (from the original)
    return r0;
}

}  // namespace d_0075d990
GUEST_EXPORT(0x0075d990, d_0075d990::f_0075d990);

// f_0075db6c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0075db6c {


u32 f_0075db6c(u32 r0, u32 r1, u32 r2) {
    u32 cf = 0;
    cf = r1 >= 5u;
    if (!cf) {
        cf = r2 >= 4u;
    }
    if (cf) {
        r0 = r0 + 0x5058u;  // (from the original)
        return r0;
    }
    r0 = r0 + (r2 + (r2 << 2) << 8) + (r1 << 8) + 0x5058u;  // (from the original)
    return r0;
}

}  // namespace d_0075db6c
GUEST_EXPORT(0x0075db6c, d_0075db6c::f_0075db6c);

// f_0075dbc4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0075dbc4 {

struct __attribute__((packed)) Object_0075dbc4_0 {
    u32 word_0;
};
GUEST_OFFSET(Object_0075dbc4_0, word_0, 0x0);  // (from the original)


u32 f_0075dbc4(gptr<Object_0075dbc4_0> arg0) {
    u32 r0 = arg0.addr();
    r0 = arg0->word_0 & 1u;
    return r0;
}

}  // namespace d_0075dbc4
GUEST_EXPORT(0x0075dbc4, d_0075dbc4::f_0075dbc4);

// f_0075dc00: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0075dc00 {

struct __attribute__((packed)) Object_0075dc00_0 {
    u32 word_0;
};
GUEST_OFFSET(Object_0075dc00_0, word_0, 0x0);  // (from the original)


u32 f_0075dc00(gptr<Object_0075dc00_0> arg0, u32 r1) {
    u32 res = 0;
    u32 r0 = arg0.addr();
    res = arg0->word_0 & r1;
    r0 = res;
    if (res != 0) {
        r0 = 1u;
    }
    return r0;
}

}  // namespace d_0075dc00
GUEST_EXPORT(0x0075dc00, d_0075dc00::f_0075dc00);

// f_0075dc40: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0075dc40 {


u32 f_0075dc40(u32 r0) {
    u32 r1 = 0;
    u32 r2 = 0;
    u32 r3 = 0;
    u32 zf = 0;
    u32 cf = 0;
    r1 = 0u;
    do {
L_75dc44:;
        r2 = u32(s32(s8(*gptr<u8>(r0 + r1))));
        r3 = r2 - 0x30u;  // (from the original)
        zf = r3 == 9u;
        cf = r3 >= 9u;
        if (cf && !zf) {
            r3 = r2 - 0x61u;  // (from the original)
            zf = r3 == 0x19u;  // (from the original)
            cf = r3 >= 0x19u;  // (from the original)
        }
        if (cf && !zf) {
            r2 = r2 - 0x41u;  // (from the original)
            zf = r2 == 0x19u;  // (from the original)
            cf = r2 >= 0x19u;  // (from the original)
        }
        if (!(!cf || zf)) {
            r0 = 0u;
            guest::cpu()->r[1] = r1;
            return r0;
        }
        r1 = r1 + 1u;
        guest::preempt();
    } while (r1 < 0x10u);  // (from the original)
    r0 = 1u;
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_0075dc40
GUEST_EXPORT(0x0075dc40, d_0075dc40::f_0075dc40);

// f_0075de74: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0075de74 {

struct __attribute__((packed)) Object_0075de74_0 {
    u8 unknown_0[0x132ad];  // (not used here)
    u8 byte_132ad;
};
GUEST_OFFSET(Object_0075de74_0, byte_132ad, 0x132ad);  // (from the original)

inline constexpr guest::Function<0x0075e830, u32(u32, u32, u32, u32)> call_0075e830;  // (from the original)
inline constexpr guest::Function<0x0075e840, u32(u32, u32, u32, u32)> call_0075e840;  // (from the original)

u32 f_0075de74(gptr<Object_0075de74_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r1 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r1 = u32(s32(s8(arg0->byte_132ad)));
    if (r1 == 0) {
        goto L_75decc;
    }
    r1 = 0x13268u;  // (from the original)
    r4 = u32(*gptr<u8>(r1 + r0));
    if (r4 >= 4u) {
        goto L_75decc;
    }
    r0 = r0 + 0x1c1u;  // (from the original)
    r1 = r4;
    r5 = r0;
    r0 = call_0075e830(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 >= 0xa5u) {  // (from the original)
        r0 = 0u;
        goto L_75ded0;
    }
    r1 = r4;
    r0 = r5;
    r0 = call_0075e840(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 == 0) {
        goto L_75ded0;
    }
L_75decc:;
    r0 = 1u;
L_75ded0:;
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_0075de74
GUEST_EXPORT(0x0075de74, d_0075de74::f_0075de74);

// f_0075dedc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0075dedc {


u32 f_0075dedc(u32 r0, u32 r1) {
    if (r1 >= 4u) {
        r0 = 0u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r1 = r1 + (r1 << 5);
    r1 = r1 + (r1 << 3);
    r0 = r0 + 0x9db4u + (r1 << 5);  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_0075dedc
GUEST_EXPORT(0x0075dedc, d_0075dedc::f_0075dedc);

// f_0075df00: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0075df00 {

struct __attribute__((packed)) Object_0075df00_1 {
    u32 word_0;
};
GUEST_OFFSET(Object_0075df00_1, word_0, 0x0);  // (from the original)

inline constexpr guest::Function<0x0075e9f8, u32(u32, u32, u32, u32)> call_0075e9f8;  // (from the original)

u32 f_0075df00(u32 r0, gptr<Object_0075df00_1> arg1, u32 r2, u32 r3) {
    u32 r1 = arg1.addr();
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r13 = guest::cpu()->r[13];
    u32 zf = 0;
    *gptr<u32>(r13 + 0xffffffe0u) = u32(r3);  // (from the original)
    r13 = r13 - 0x20;  // (from the original)
    r7 = r0;
    r4 = r1;
    r5 = *gptr<u32>(r13 + 0x20u);  // (from the original)
    r6 = r2;
    r8 = r3;
    if (r2 >= 4u) {
        goto L_75dfa8;
    }
    zf = r4 == 0;
    if (!zf) {
        zf = arg1->word_0 == 0;
    }
    if (zf) {
        goto L_75dfa8;
    }
    r1 = r2;
    r0 = r7 + 0x58u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0075e9f8(r0, r1, r2, r3);
    *gptr<u32>(r13) = u32(0u);
    if (r5 >= 0x1bu) {  // (from the original)
        r5 = 0x1bu;  // (from the original)
    }
    *gptr<u8>(r13) = u8(((r0 & 3u | u32(*gptr<u8>(r13)) & ~3u) & ~4u | 4u & r8 << 2) & ~0xf8u | 0xf8u & r5 << 3);  // (from the original)
    *gptr<u8>(r13 + 1u) = u8(u32(*gptr<u8>(0x132a4u + (r7 + r6))));  // (from the original)
    r1 = *gptr<u32>(r4);
    *gptr<u16>(r1) = u16(u32(*gptr<u16>(r13)));
    *gptr<u32>(r4) = u32(r1 + 2u);
    r13 = r13 + 0x20;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
L_75dfa8:;
    r0 = 0u;
    r13 = r13 + 0x20;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_0075df00
GUEST_EXPORT(0x0075df00, d_0075df00::f_0075df00);

// f_0075e124: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0075e124 {

inline constexpr guest::Function<0x0030b6c4, u32(u32, u32, u32, u32)> call_0030b6c4;  // (from the original)
inline constexpr guest::Function<0x00625690, u32(u32, u32, u32, u32)> call_00625690;  // (from the original)
inline constexpr guest::Function<0x0075dfdc, u32(u32, u32, u32, u32)> call_0075dfdc;  // (from the original)
inline constexpr guest::Function<0x0075e2fc, u32(u32, u32, u32, u32)> call_0075e2fc;  // (from the original)
inline constexpr guest::Function<0x0075e858, u32(u32, u32, u32, u32)> call_0075e858;  // (from the original)

u32 f_0075e124(u32 r0, u32 r1) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r4 = r0;
    r0 = call_00625690(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (!u32(r0 >= 1u) || u32(r0 == 1u)) {
        goto L_75e19c;
    }
    r0 = call_0030b6c4(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 != 0) {
        r5 = 0x95362cu;  // (from the original)
        r4 = *gptr<u32>(r5) + 0x1c0u;  // (from the original)
        r0 = r4;
        r0 = call_0075e2fc(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        if (r0 < 4u) {
            goto L_75e194;
        }
        r1 = 0x8cu;  // (from the original)
        r0 = r4 + 1u;
        r0 = call_0075e858(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        r4 = r0;
        r0 = *gptr<u32>(r5);
        r0 = call_0075dfdc(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1 = r0 - 1u;
        if (r4 != r1) {
            goto L_75e194;
        }
        goto L_75e19c;
    }
    if (u32(*gptr<u8>(r4)) == 0x27u) {  // (from the original)
        goto L_75e19c;
    }
L_75e194:;
    r0 = 0u;
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
L_75e19c:;
    r0 = 1u;
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_0075e124
GUEST_EXPORT(0x0075e124, d_0075e124::f_0075e124);

// f_0075e1e0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0075e1e0 {

inline constexpr guest::Function<0x00624038, u32(u32, u32, u32, u32)> call_00624038;  // (from the original)
inline constexpr guest::Function<0x0062624c, u32(u32, u32, u32, u32)> call_0062624c;  // (from the original)

u32 f_0075e1e0() {
    u32 r0 = 0;
    u32 r1 = 0;
    r1 = 0u;
    r0 = r1;
    guest::cpu()->r[13] -= 8u;
    r0 = call_00624038(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 == 0) {
        r0 = ~0u;
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    guest::cpu()->r[13] += 8u;
    return call_0062624c(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_0075e1e0
GUEST_EXPORT(0x0075e1e0, d_0075e1e0::f_0075e1e0);

// f_0075e208: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0075e208 {

struct __attribute__((packed)) Object_0075e208_0 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Object_0075e208_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_0075e208_0, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_0075e208_0, word_8, 0x8);  // (from the original)

struct __attribute__((packed)) Object_0075e208_1 {
    u32 word_0;
};
GUEST_OFFSET(Object_0075e208_1, word_0, 0x0);  // (from the original)


u32 f_0075e208(gptr<Object_0075e208_0> arg0, gptr<Object_0075e208_1> arg1) {
    u32 r0 = arg0.addr();
    u32 r1 = arg1.addr();
    u32 zf = 0;
    r1 = arg1->word_0;
    zf = r1 == 0;
    if (!zf) {
        zf = arg0->word_0 == r1;
    }
    if (zf) {
        r0 = 1u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    zf = arg0->word_4 == r1;
    if (!zf) {
        zf = arg0->word_8 == r1;
    }
    if (!zf) {
        r0 = 0u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r0 = 1u;
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_0075e208
GUEST_EXPORT(0x0075e208, d_0075e208::f_0075e208);

// f_0075e23c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0075e23c {

struct __attribute__((packed)) Object_0075e23c_0 {
    u8 unknown_0[0x11ae0];  // (not used here)
    u32 word_11ae0;
};
GUEST_OFFSET(Object_0075e23c_0, word_11ae0, 0x11ae0);  // (from the original)


u32 f_0075e23c(gptr<Object_0075e23c_0> arg0) {
    u32 r0 = arg0.addr();
    r0 = arg0->word_11ae0;
    return r0;
}

}  // namespace d_0075e23c
GUEST_EXPORT(0x0075e23c, d_0075e23c::f_0075e23c);

// f_0075e260: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0075e260 {


u32 f_0075e260(u32 r0, u32 r1) {
    r1 = (r1 << 4) - r1 + (r1 << 5);
    r0 = r0 + (r1 << 2) + 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_0075e260
GUEST_EXPORT(0x0075e260, d_0075e260::f_0075e260);

// f_0075e35c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0075e35c {

inline constexpr guest::Function<0x0075dfdc, u32(u32, u32, u32, u32)> call_0075dfdc;  // (from the original)
inline constexpr guest::Function<0x0075e858, u32(u32, u32, u32, u32)> call_0075e858;  // (from the original)

u32 f_0075e35c(u32 r0) {
    u32 r4 = guest::cpu()->r[4];
    r0 = r0 + 1u;
    guest::cpu()->r[13] -= 8u;
    r0 = call_0075e858(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    r4 = r0;
    r0 = *gptr<u32>(0x95362cu);  // (from the original)
    r0 = call_0075dfdc(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    if (r4 == r0) {
        r0 = 1u;
    } else {
        r0 = 0u;
    }
    guest::cpu()->r[13] += 8u;
    return r0;
}

}  // namespace d_0075e35c
GUEST_EXPORT(0x0075e35c, d_0075e35c::f_0075e35c);

// f_0075e4a0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0075e4a0 {

inline constexpr guest::Function<0x00135748, u32(u32, u32, u32, u32)> call_00135748;  // (from the original)
inline constexpr guest::Function<0x001357ec, u32(u32, u32, u32, u32)> call_001357ec;  // (from the original)
inline constexpr guest::Function<0x00625678, u32(u32, u32, u32, u32)> call_00625678;  // (from the original)
inline constexpr guest::Function<0x00747660, u32(u32, u32, u32, u32)> call_00747660;  // (from the original)
inline constexpr guest::Function<0x0075e978, u32(u32, u32, u32, u32)> call_0075e978;  // (from the original)
inline constexpr guest::Function<0x0075f1f8, u32(u32, u32, u32, u32)> call_0075f1f8;  // (from the original)

u32 f_0075e4a0(u32 r0, u32 r1, u32 r2) {
    u32 ea = 0;
    u32 res = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r13 = guest::cpu()->r[13];
    r4 = r0;
    r13 = r13 - 0x20u;  // (from the original)
    r6 = r1;
    r0 = r1;
    guest::cpu()->r[13] = r13;
    r0 = call_00625678(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r5 = r0;
    if (r0 == 0) {
        goto L_75e56c;
    }
    r0 = 0u;
    *gptr<u32>(r13 + 4u) = u32(r0);
    *gptr<u32>(r13 + 8u) = u32(r0);
    r2 = r6;
    r1 = r13;
    r0 = *gptr<u32>(0x95362cu) + 0xb0u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0075f1f8(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r6 = r5 + 4u;
    r7 = r13;
    r5 = ~0u;
    if (u32(*gptr<u8>(0x42aau + r4)) == 0) {  // (from the original)
        goto L_75e564;
    }
    if (*gptr<u32>(r13) == 0) {
        ea = r13 + 4u;
        r1 = *gptr<u32>(ea + 4);
        res = *gptr<u32>(ea) | r1;
        if (res == 0) {
            goto L_75e564;
        }
    }
    r0 = r4;
    guest::cpu()->r[13] = r13;
    r0 = call_00135748(r0, r1, r2, guest::cpu()->r[3]);
    r2 = guest::cpu()->r[2];
    r1 = r6;
    r0 = r4 + 0x3860u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0075e978(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    res = r0;
    r5 = res;
    if (res >> 0x1f == (r0 & (r0 ^ res)) >> 0x1f) {  // (from the original)
        r0 = r4 + (r5 + (r5 << 1) << 2) + 0x38e4u;  // (from the original)
        r1 = r7;
        guest::cpu()->r[13] = r13;
        r0 = call_00747660(r0, r1, r2, guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        if (r0 != 0) {
            r5 = ~0u;
        }
    }
    r0 = r4;
    guest::cpu()->r[13] = r13;
    r0 = call_001357ec(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
L_75e564:;
    r0 = u32(s32(r5) >> 0x1f) + 1u;  // (from the original)
L_75e56c:;
    r13 = r13 + 0x20u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_0075e4a0
GUEST_EXPORT(0x0075e4a0, d_0075e4a0::f_0075e4a0);

// f_0075e57c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0075e57c {

struct __attribute__((packed)) Object_0075e57c_1 {
    u32 word_0;
};
GUEST_OFFSET(Object_0075e57c_1, word_0, 0x0);  // (from the original)

inline constexpr guest::Function<0x00135748, u32(u32, u32, u32, u32)> call_00135748;  // (from the original)
inline constexpr guest::Function<0x001357ec, u32(u32, u32, u32, u32)> call_001357ec;  // (from the original)
inline constexpr guest::Function<0x001aa4a0, u32(u32, u32, u32, u32)> call_001aa4a0;  // (from the original)
inline constexpr guest::Function<0x00747660, u32(u32, u32, u32, u32)> call_00747660;  // (from the original)
inline constexpr guest::Function<0x0075e978, u32(u32, u32, u32, u32)> call_0075e978;  // (from the original)

u32 f_0075e57c(u32 r0, gptr<Object_0075e57c_1> arg1, u32 r2) {
    u32 ea = 0;
    u32 res = 0;
    u32 r1 = arg1.addr();
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 0x20u;  // (from the original)
    r4 = r0;
    r0 = 0u;
    *gptr<u32>(r13 + 4u) = u32(r0);
    *gptr<u32>(r13 + 8u) = u32(r0);
    r5 = r2;
    r2 = r13 + 4u;
    *gptr<u32>(r13) = u32(arg1->word_0);
    r0 = *gptr<u32>(0x9529ccu);  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_001aa4a0(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r6 = r5;
    r7 = r13;
    r5 = ~0u;
    if (u32(*gptr<u8>(0x42aau + r4)) == 0) {  // (from the original)
        goto L_75e630;
    }
    if (*gptr<u32>(r13) == 0) {
        ea = r13 + 4u;
        r1 = *gptr<u32>(ea + 4);
        res = *gptr<u32>(ea) | r1;
        if (res == 0) {
            goto L_75e630;
        }
    }
    r0 = r4;
    guest::cpu()->r[13] = r13;
    r0 = call_00135748(r0, r1, r2, guest::cpu()->r[3]);
    r2 = guest::cpu()->r[2];
    r1 = r6;
    r0 = r4 + 0x3860u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0075e978(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    res = r0;
    r5 = res;
    if (res >> 0x1f == (r0 & (r0 ^ res)) >> 0x1f) {  // (from the original)
        r0 = r4 + (r5 + (r5 << 1) << 2) + 0x38e4u;  // (from the original)
        r1 = r7;
        guest::cpu()->r[13] = r13;
        r0 = call_00747660(r0, r1, r2, guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        if (r0 != 0) {
            r5 = ~0u;
        }
    }
    r0 = r4;
    guest::cpu()->r[13] = r13;
    r0 = call_001357ec(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
L_75e630:;
    r0 = r5;
    r13 = r13 + 0x20u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_0075e57c
GUEST_EXPORT(0x0075e57c, d_0075e57c::f_0075e57c);

// f_0075e7ac: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0075e7ac {

inline constexpr guest::Function<0x00135740, u32(u32, u32, u32, u32)> call_00135740;  // (from the original)
inline constexpr guest::Function<0x00137e84, u32(u32, u32, u32, u32)> call_00137e84;  // (from the original)

u32 f_0075e7ac(u32 r0, u32 r1) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r6 = r0;
    r5 = r1;
    if (r1 >= 4u) {
        r0 = 0u;
        goto L_75e7f0;
    }
    r0 = *gptr<u32>(0x95362cu) + 0x13280u;  // (from the original)
    r4 = r0;
    r0 = call_00135740(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r5 = u32(*gptr<u8>(r6 + r5 + 0x24u));  // (from the original)
    r0 = r4;
    r0 = call_00137e84(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r0 = r5;
L_75e7f0:;
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    return r0;
}

}  // namespace d_0075e7ac
GUEST_EXPORT(0x0075e7ac, d_0075e7ac::f_0075e7ac);

// f_0075ef68: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0075ef68 {

struct __attribute__((packed)) Object_0075ef68_0 {
    u8 unknown_0[0x8];  // (not used here)
    u32 word_8;
    u32 word_c;
};
GUEST_OFFSET(Object_0075ef68_0, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Object_0075ef68_0, word_c, 0xc);  // (from the original)

inline constexpr guest::Function<0x007475e0, u32(u32, u32, u32, u32)> call_007475e0;  // (from the original)

u32 f_0075ef68(gptr<Object_0075ef68_0> arg0) {
    u32 res = 0;
    u32 r0 = arg0.addr();
    u32 r1 = 0;
    u32 r2 = 0;
    u32 r3 = 0;
    r3 = ~0u;
    r2 = arg0->word_8 ^ ~2u;
    res = arg0->word_c ^ r3 | r2;
    r1 = res;
    if (res == 0) {
        r0 = 0u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r0 = *gptr<u32>(r0 + 0x10u);  // (from the original)
    if (r0 == 0) {
        r0 = 1u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    return call_007475e0(r0, r1, r2, r3);
}

}  // namespace d_0075ef68
GUEST_EXPORT(0x0075ef68, d_0075ef68::f_0075ef68);

// f_0075efdc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0075efdc {


u32 f_0075efdc(u32 r0, u32 r1) {
    if (r1 >= 4u) {
        r0 = 0u;
    } else {
        r0 = *gptr<u32>(r0 + (r1 << 2) + 0x1cu);  // (from the original)
    }
    return r0;
}

}  // namespace d_0075efdc
GUEST_EXPORT(0x0075efdc, d_0075efdc::f_0075efdc);

// f_0075f020: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0075f020 {

inline constexpr guest::Function<0x0075f0b0, u32(u32, u32, u32, u32)> call_0075f0b0;  // (from the original)

u32 f_0075f020(u32 r0, u32 r1, u32 r2) {
    u32 res = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 zf = 0;
    guest::cpu()->r[13] -= 0xcu;  // (from the original)
    r5 = r0;
    r4 = r1;
    r0 = call_0075f0b0(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 != 0) {
        goto L_75f0a8;
    }
    r0 = u32(*gptr<u8>(r5 + 8u));
    r1 = lsl_r(1u, r4 & 0xff);  // (from the original)
    if (r0 == 0) {
        goto L_75f074;
    }
    if (r4 >= 6u) {
        goto L_75f074;
    }
    r2 = r1 & 0xffu;  // (from the original)
    zf = (r2 & 0x3fu) == 0;  // (from the original)
    if (!zf) {
        zf = (r2 & r0) == 0;
    }
    if (zf) {
        goto L_75f074;
    }
    if ((r0 & 0x80u) >> 7 == 1u) {  // (from the original)
        goto L_75f0a8;
    }
L_75f074:;
    if (r0 == 0) {
        goto L_75f0a0;
    }
    if (r4 >= 6u) {
        goto L_75f0a0;
    }
    r1 = r1 & 0xffu;  // (from the original)
    zf = (r1 & 0x3fu) == 0;  // (from the original)
    if (!zf) {
        zf = (r1 & r0) == 0;
    }
    if (zf) {
        goto L_75f0a0;
    }
    res = (r0 & 0x80u) >> 7;  // (from the original)
    if (res == 0) {
        goto L_75f0a8;
    }
L_75f0a0:;
    r0 = 0u;
    guest::cpu()->r[13] += 0xcu;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
L_75f0a8:;
    r0 = 1u;
    guest::cpu()->r[13] += 0xcu;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_0075f020
GUEST_EXPORT(0x0075f020, d_0075f020::f_0075f020);

// f_0075f17c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0075f17c {

struct __attribute__((packed)) Object_0075f17c_0 {
    u8 unknown_0[0x8];  // (not used here)
    u8 byte_8;
};
GUEST_OFFSET(Object_0075f17c_0, byte_8, 0x8);  // (from the original)


u32 f_0075f17c(gptr<Object_0075f17c_0> arg0, u32 r1, u32 r2) {
    u32 r0 = arg0.addr();
    u32 zf = 0;
    r0 = u32(arg0->byte_8);
    if (r0 == 0) {
        guest::cpu()->r[1] = r1;
        return r0;
    }
    if (r1 >= 6u) {
        r0 = 0u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r1 = lsl_r(1u, r1 & 0xff) & 0xffu;  // (from the original)
    zf = (r1 & 0x3fu) == 0;  // (from the original)
    if (!zf) {
        zf = (r1 & r0) == 0;
    }
    if (zf) {
        r0 = 0u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    if ((r0 & 0x80u) >> 7 == r2) {  // (from the original)
        r0 = 1u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r0 = 0u;
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_0075f17c
GUEST_EXPORT(0x0075f17c, d_0075f17c::f_0075f17c);

// f_0075f34c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0075f34c {

inline constexpr guest::Function<0x003081b4, u32(u32, u32, u32, u32)> call_003081b4;  // (from the original)

u32 f_0075f34c(u32 r0, u32 r1) {
    u32 res = 0;
    u32 r2 = 0;
    u32 r3 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 0x20u;  // (from the original)
    r5 = r0;
    r6 = r1;
    r4 = 0u;
    r7 = r13;
    do {
L_75f364:;
        r1 = 0u;
        r2 = r1;
        r3 = r6 + (r4 << 3);
        *gptr<u32>(r13) = u32(r1);
        *gptr<u32>(r13 + 4) = u32(r2);
        r0 = r7;
        r1 = r3;
        guest::cpu()->r[13] = r13;
        r0 = call_003081b4(r0, r1, r2, r3);
        r2 = r5 + (r4 + (r4 << 1) << 3);
        r1 = *gptr<u32>(r13) ^ *gptr<u32>(r2 + 0x10u);  // (from the original)
        res = *gptr<u32>(r13 + 4u) ^ *gptr<u32>(r2 + 0x14u) | r1;  // (from the original)
        if (!(res == 0)) {
            r0 = 0u;
            r13 = r13 + 0x20u;  // (from the original)
            guest::cpu()->r[1] = r1;
            guest::cpu()->r[13] = r13;
            return r0;
        }
        r4 = r4 + 1u;
        guest::preempt();
    } while (s32(r4) < s32(4u));
    r0 = 1u;
    r13 = r13 + 0x20u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_0075f34c
GUEST_EXPORT(0x0075f34c, d_0075f34c::f_0075f34c);

// f_0075f448: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0075f448 {

inline constexpr guest::Function<0x00135740, u32(u32, u32, u32, u32)> call_00135740;  // (from the original)
inline constexpr guest::Function<0x00137e84, u32(u32, u32, u32, u32)> call_00137e84;  // (from the original)
inline constexpr guest::Function<0x0075ef68, u32(u32, u32, u32, u32)> call_0075ef68;  // (from the original)

u32 f_0075f448(u32 r0, u32 r1) {
    u32 res = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r6 = r0;
    r5 = r1;
    r0 = *gptr<u32>(0x95362cu) + 0x13280u;  // (from the original)
    r4 = r0;
    r0 = call_00135740(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r5 >= 4u) {
        goto L_75f49c;
    }
    res = r6 + (r5 + (r5 << 1) << 3) + 8u;
    r0 = res;
    if (res == 0) {
        goto L_75f49c;
    }
    r0 = call_0075ef68(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r5 = r0;
    r0 = r4;
    r0 = call_00137e84(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r0 = r5;
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    return r0;
L_75f49c:;
    r0 = r4;
    r0 = call_00137e84(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r0 = 0u;
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    return r0;
}

}  // namespace d_0075f448
GUEST_EXPORT(0x0075f448, d_0075f448::f_0075f448);

// f_0075f578: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0075f578 {

inline constexpr guest::Function<0x00746e74, u32(u32, u32, u32, u32)> call_00746e74;  // (from the original)
inline constexpr guest::Function<0x0075f3cc, u32(u32, u32, u32, u32)> call_0075f3cc;  // (from the original)

u32 f_0075f578(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 res = 0;
    u32 r4 = guest::cpu()->r[4];
    guest::cpu()->r[13] -= 8u;
    r4 = r0;
    r0 = 0xa22020u;  // (from the original)
    r0 = call_00746e74(r0, r1, r2, r3);
    r1 = r0;
    r3 = ~0u;
    r2 = *gptr<u32>(r0 + 4) ^ r3;
    res = *gptr<u32>(r0) ^ ~2u | r2;
    if (res == 0) {
        r0 = 4u;
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r0 = r4;
    guest::cpu()->r[13] += 8u;
    return call_0075f3cc(r0, r1, r2, r3);
}

}  // namespace d_0075f578
GUEST_EXPORT(0x0075f578, d_0075f578::f_0075f578);

// f_0075f644: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0075f644 {

inline constexpr guest::Function<0x00135740, u32(u32, u32, u32, u32)> call_00135740;  // (from the original)
inline constexpr guest::Function<0x00137e84, u32(u32, u32, u32, u32)> call_00137e84;  // (from the original)
inline constexpr guest::Function<0x00746e74, u32(u32, u32, u32, u32)> call_00746e74;  // (from the original)
inline constexpr guest::Function<0x00746e90, u32(u32, u32, u32, u32)> call_00746e90;  // (from the original)

u32 f_0075f644(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 ea = 0;
    u32 res = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r13 = guest::cpu()->r[13];
    r6 = r0;
    r13 = r13 - 0x20u;  // (from the original)
    r5 = r1;
    r7 = r2;
    r0 = *gptr<u32>(0x95362cu) + 0x13280u;  // (from the original)
    r4 = r0;
    guest::cpu()->r[13] = r13;
    r0 = call_00135740(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r5 >= 4u) {
        goto L_75f6dc;
    }
    res = r6 + (r5 + (r5 << 1) << 3) + 8u;
    r5 = res;
    if (res == 0) {
        goto L_75f6dc;
    }
    r3 = ~2u;
    r2 = ~0u;
    r1 = *gptr<u32>(r5 + 8u) ^ r3;
    res = *gptr<u32>(r5 + 0xcu) ^ r2 | r1;  // (from the original)
    if (res == 0) {
        goto L_75f6dc;
    }
    if (r7 == 0) {
        goto L_75f6f0;
    }
    ea = r5 + 8u;
    r1 = *gptr<u32>(ea + 4);
    *gptr<u32>(r13) = u32(*gptr<u32>(ea));
    *gptr<u32>(r13 + 4) = u32(r1);
    r0 = 0xa22020u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00746e74(r0, r1, r2, r3);
    r1 = *gptr<u32>(r13);
    r3 = *gptr<u32>(r13 + 4);
    r2 = *gptr<u32>(r0) ^ r1;
    res = *gptr<u32>(r0 + 4u) ^ r3 | r2;
    if (res != 0) {
        goto L_75f6f0;
    }
L_75f6dc:;
    r0 = r4;
    guest::cpu()->r[13] = r13;
    r0 = call_00137e84(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r0 = 0u;
    r13 = r13 + 0x20u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
L_75f6f0:;
    r5 = r5 + 8u;
    r1 = r13;
    r2 = *gptr<u32>(r5 + 4);
    *gptr<u32>(r13) = u32(*gptr<u32>(r5));
    *gptr<u32>(r13 + 4) = u32(r2);
    r0 = 0xa22020u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00746e90(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r5 = r0;
    r0 = r4;
    guest::cpu()->r[13] = r13;
    r0 = call_00137e84(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r0 = r5;
    r13 = r13 + 0x20u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_0075f644
GUEST_EXPORT(0x0075f644, d_0075f644::f_0075f644);

// f_0075f728: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0075f728 {

struct __attribute__((packed)) Object_0075f728_0 {
    u8 unknown_0[0x3eb];  // (not used here)
    u8 byte_3eb;
    u8 byte_3ec;
};
GUEST_OFFSET(Object_0075f728_0, byte_3eb, 0x3eb);  // (from the original)
GUEST_OFFSET(Object_0075f728_0, byte_3ec, 0x3ec);  // (from the original)

inline constexpr guest::Function<0x00300904, u32(u32, u32, u32, u32)> call_00300904;  // (from the original)
inline constexpr guest::Function<0x0075f020, u32(u32, u32, u32, u32)> call_0075f020;  // (from the original)

u32 f_0075f728(gptr<Object_0075f728_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r1 = 0;
    u32 zf = 0;
    r0 = r0 + 0x300u;  // (from the original)
    guest::cpu()->r[13] -= 8u;
    r1 = u32(arg0->byte_3ec);
    zf = r1 == 0;
    if (zf) {
        r0 = u32(arg0->byte_3eb);
        zf = r0 == 0;
    }
    if (zf) {
        r0 = 0u;
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r0 = call_00300904(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 != 0) {
        r0 = 0u;
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r1 = 0u;
    r0 = *gptr<u32>(0x95362cu) + 0x7874u;  // (from the original)
    r0 = call_0075f020(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 == 0) {
        r0 = 1u;
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r0 = 0u;
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_0075f728
GUEST_EXPORT(0x0075f728, d_0075f728::f_0075f728);

// f_0075f780: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0075f780 {

inline constexpr guest::Function<0x00135748, u32(u32, u32, u32, u32)> call_00135748;  // (from the original)
inline constexpr guest::Function<0x001357ec, u32(u32, u32, u32, u32)> call_001357ec;  // (from the original)

u32 f_0075f780(u32 r0) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r4 = r0;
    r5 = r0 + 0x28u;  // (from the original)
    r0 = r5;
    r0 = call_00135748(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    r4 = *gptr<u32>(r4 + 0x24u);  // (from the original)
    r0 = r5;
    r0 = call_001357ec(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    r0 = r4;
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    return r0;
}

}  // namespace d_0075f780
GUEST_EXPORT(0x0075f780, d_0075f780::f_0075f780);
