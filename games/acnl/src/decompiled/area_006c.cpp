// Functions decompiled by tools/decomp (docs/decomp.md), each proved equal to the recompiled original (prove-cpp). The
// names are generated (d_<address>::f_<address>, Object_<address>_<argument>, word_<offset>) and still to be chosen.
#include "guest/guest.hpp"
#include "graphics/hemisphere_light.hpp"

#include <bit>

using guest::gptr;

// f_006c1678: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006c1678 {

inline constexpr guest::Function<0x006c00b8, u32(u32, u32, u32, u32)> call_006c00b8;  // (from the original)

u32 f_006c1678(u32 r0_unused, u32 r1, u32 r2) {
    return call_006c00b8(guest::cpu()->r[0], 5u, r1, r2);
}

}  // namespace d_006c1678
GUEST_EXPORT(0x006c1678, d_006c1678::f_006c1678);

// f_006c1688: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006c1688 {

struct __attribute__((packed)) Object_006c1688_0 {
    u8 unknown_0[0x6d0];  // (not used here)
    u16 half_6d0;
};
GUEST_OFFSET(Object_006c1688_0, half_6d0, 0x6d0);  // (from the original)

inline constexpr guest::Function<0x006c00b8, u32(u32, u32, u32, u32)> call_006c00b8;  // (from the original)

u32 f_006c1688(gptr<Object_006c1688_0> arg0, u32 r1, u32 r2, u32 r3) {
    u32 r0 = arg0.addr();
    arg0->half_6d0 = u16(r3);
    return call_006c00b8(r0, 0u, r1, r2);
}

}  // namespace d_006c1688
GUEST_EXPORT(0x006c1688, d_006c1688::f_006c1688);

// f_006c1938: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006c1938 {

struct __attribute__((packed)) Object_006c1938_1 {
    u8 unknown_0[0xa8];  // (not used here)
    u32 word_a8;
};
GUEST_OFFSET(Object_006c1938_1, word_a8, 0xa8);  // (from the original)

inline guest::global<u32, 0x006c19c0> global_006c19c0;  // (from the original)
inline guest::global<u32, 0x006c19c8> global_006c19c8;  // (from the original)
inline guest::global<u32, 0x006c19cc> global_006c19cc;  // (from the original)
inline guest::global<u32, 0x0085f2cc> global_0085f2cc;  // (from the original)
inline constexpr guest::Function<0x0014f3cc, u32(u32, u32, u32, u32)> call_0014f3cc;  // (from the original)
inline constexpr guest::Function<0x0052e3ec, u32(u32, u32, u32, u32)> call_0052e3ec;  // (from the original)
inline constexpr guest::Function<0x0070ab44, u32(u32, u32, u32, u32)> call_0070ab44;  // (from the original)

u32 f_006c1938(u32 r0, gptr<Object_006c1938_1> arg1, float S0, float S1, float S2) {
    u32 r1 = arg1.addr();
    u32 r13 = guest::cpu()->r[13];
    u32 r2_1 = 0;
    u32 r1_1 = 0;
    u32 r0_1 = 0;
    u32 r1_2 = 0;
    u32 r3_1 = 0;
    float S0_1 = 0;
    float S1_1 = 0;
    u32 r0_2 = 0;
    float S2_1 = 0;
    float S1_2 = 0;
    float S0_2 = 0;
    u32 r0_3 = 0;
    u32 r1_3 = 0;
    u32 r2_2 = 0;
    u32 r2_3 = 0;
    u32 r3_2 = 0;
    float S0_3 = 0;
    float S1_3 = 0;
    float S2_2 = 0;
    u32 r1_4 = 0;
    u32 r0_4 = 0;
    u32 r1_5 = 0;
    float S0_4 = 0;
    float S1_4 = 0;
    r2_1 = arg1->word_a8;
    r13 = r13 - 0x60u;  // (from the original)
    r1_1 = r13;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2;
    r0_1 = call_0070ab44(r1, r1_1, r2_1, 0u);
    r1_2 = guest::cpu()->r[1];
    r3_1 = guest::cpu()->r[3];
    S0_1 = guest::cpu()->s[0];
    S1_1 = guest::cpu()->s[1];
    if (r0_1 == 0) {
        r13 = r13 + 0x60u;  // (from the original)
        guest::cpu()->r[1] = r1_2;
        guest::cpu()->r[13] = r13;
        guest::cpu()->s[0] = S0_1;
        guest::cpu()->s[1] = S1_1;
        return r0_1;
    }
    r0_2 = r13 + 0x48u;  // (from the original)
    S2_1 = std::bit_cast<float>(*global_0085f2cc) * std::bit_cast<float>(*global_006c19c0);
    S1_2 = std::bit_cast<float>(*global_006c19c8);
    S0_2 = std::bit_cast<float>(*global_006c19cc);
    *gptr<u32>(r0_2) = u32(std::bit_cast<u32>(S0_2));
    *gptr<u32>(r0_2 + 4) = u32(std::bit_cast<u32>(S1_2));
    *gptr<u32>(r0_2 + 8) = u32(std::bit_cast<u32>(S2_1));
    r0_3 = r13 + 0x3cu;  // (from the original)
    r1_3 = r13;
    r2_2 = r13 + 0x48u;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_2;
    guest::cpu()->s[1] = S1_2;
    guest::cpu()->s[2] = S2_1;
    call_0014f3cc(r0_3, r1_3, r2_2, r3_1);
    r2_3 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    S0_3 = guest::cpu()->s[0];
    S1_3 = guest::cpu()->s[1];
    S2_2 = guest::cpu()->s[2];
    r1_4 = r13 + 0x3cu;  // (from the original)
    r0_4 = r13 + 0x30u;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_3;
    guest::cpu()->s[1] = S1_3;
    guest::cpu()->s[2] = S2_2;
    call_0052e3ec(r0_4, r1_4, r2_3, r3_2);
    r1_5 = guest::cpu()->r[1];
    S0_4 = guest::cpu()->s[0];
    S1_4 = guest::cpu()->s[1];
    *gptr<u32>(r0) = u32(*gptr<u32>(r13 + 0x30u));  // (from the original)
    *gptr<u32>(r0 + 4u) = u32(*gptr<u32>(r13 + 0x34u));  // (from the original)
    *gptr<u32>(r0 + 8u) = u32(*gptr<u32>(r13 + 0x38u));  // (from the original)
    r13 = r13 + 0x60u;  // (from the original)
    guest::cpu()->r[1] = r1_5;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_4;
    guest::cpu()->s[1] = S1_4;
    return 1u;
}

}  // namespace d_006c1938
GUEST_EXPORT(0x006c1938, d_006c1938::f_006c1938);

// f_006c19d0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006c19d0 {

struct __attribute__((packed)) Object_006c19d0_0 {
    u8 unknown_0[0x24];  // (not used here)
    u8 byte_24;
};
GUEST_OFFSET(Object_006c19d0_0, byte_24, 0x24);  // (from the original)

inline constexpr guest::Function<0x002131d4, u32(u32, u32, u32, u32)> call_002131d4;  // (from the original)
inline constexpr guest::Function<0x002fc934, u32(u32, u32, u32, u32)> call_002fc934;  // (from the original)
inline constexpr guest::Function<0x003117bc, u32(u32, u32, u32, u32)> call_003117bc;  // (from the original)

u32 f_006c19d0(gptr<Object_006c19d0_0> arg0, u32 r1, u32 r2, u32 r3) {
    u32 r0 = arg0.addr();
    u32 r13 = guest::cpu()->r[13];
    u32 r1_1 = 0;
    u32 r0_1 = 0;
    u32 r1_2 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r1_3 = 0;
    u32 r3_2 = 0;
    u32 r0_4 = 0;
    u32 r1_4 = 0;
    u32 r2_2 = 0;
    u32 r1_5 = 0;
    u32 r1_6 = 0;
    *gptr<u32>(r13 + 0xfffffff0u) = u32(r3);  // (from the original)
    r13 = r13 - 0x10;  // (from the original)
    r1_1 = r0 + ((u32(arg0->byte_24) & 1u) << 4) + 0x3cu;  // (from the original)
    r0_1 = r13;
    guest::cpu()->r[13] = r13;
    call_002fc934(r0_1, r1_1, r2, r3);
    r1_2 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    r0_2 = r13;
    guest::cpu()->r[13] = r13;
    r0_3 = call_003117bc(r0_2, r1_2, r2_1, r3_1);
    r1_3 = guest::cpu()->r[1];
    r3_2 = guest::cpu()->r[3];
    if (r0_3 != 0xeu) {  // (from the original)
        r13 = r13 + 0x10;  // (from the original)
        guest::cpu()->r[1] = r1_3;
        guest::cpu()->r[13] = r13;
        return 0u;
    }
    r0_4 = *gptr<u32>(r0 + ((u32(*gptr<u8>(r0 + 0x24u)) & 1u) << 2) + 0x584u);  // (from the original)
    if (r0_4 != 0) {
        r1_3 = u32(s32(s8(*gptr<u8>(0x166au + r0_4))));  // (from the original)
        if (r1_3 != 0) {
            r13 = r13 + 0x10;  // (from the original)
            guest::cpu()->r[1] = r1_3;
            guest::cpu()->r[13] = r13;
            return 1u;
        }
    }
    if (r0_4 == 0) {
        r13 = r13 + 0x10;  // (from the original)
        guest::cpu()->r[1] = r1_3;
        guest::cpu()->r[13] = r13;
        return 1u;
    }
    r1_4 = r0_4 + 0x1600u;  // (from the original)
    r2_2 = u32(*gptr<u8>(r1_4 + 0x6au));  // (from the original)
    if (r2_2 != 0) {
        r1_3 = u32(*gptr<u16>(r1_4 + 0x64u));  // (from the original)
        if (r1_3 == 0) {
            r13 = r13 + 0x10;  // (from the original)
            guest::cpu()->r[1] = r1_3;
            guest::cpu()->r[13] = r13;
            return 1u;
        }
    }
    *gptr<u16>(r13) = u16(u32(*gptr<u16>(r1)));
    r1_5 = *gptr<u32>(r13);
    guest::cpu()->r[13] = r13;
    call_002131d4(r0_4, r1_5, r2_2, r3_2);
    r1_6 = guest::cpu()->r[1];
    r13 = r13 + 0x10;  // (from the original)
    guest::cpu()->r[1] = r1_6;
    guest::cpu()->r[13] = r13;
    return 1u;
}

}  // namespace d_006c19d0
GUEST_EXPORT(0x006c19d0, d_006c19d0::f_006c19d0);

// f_006c1a8c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006c1a8c {

struct __attribute__((packed)) Object_006c1a8c_0 {
    u8 unknown_0[0x644];  // (not used here)
    u32 word_644;
    u32 word_648;
    u32 word_64c;
};
GUEST_OFFSET(Object_006c1a8c_0, word_644, 0x644);  // (from the original)
GUEST_OFFSET(Object_006c1a8c_0, word_648, 0x648);  // (from the original)
GUEST_OFFSET(Object_006c1a8c_0, word_64c, 0x64c);  // (from the original)

struct __attribute__((packed)) Object_006c1a8c_3 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Object_006c1a8c_3, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_006c1a8c_3, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_006c1a8c_3, word_8, 0x8);  // (from the original)

inline constexpr guest::Function<0x006c00b8, u32(u32, u32, u32, u32)> call_006c00b8;  // (from the original)
inline constexpr guest::Function<0x006c5ef8, u32(u32, u32, u32, u32)> call_006c5ef8;  // (from the original)

u32 f_006c1a8c(gptr<Object_006c1a8c_0> arg0, u32 r1, u32 r2, gptr<Object_006c1a8c_3> arg3) {
    u32 r0 = arg0.addr();
    u32 r3 = arg3.addr();
    u32 r13 = guest::cpu()->r[13];
    u32 r5_1 = 0;
    u32 r1_1 = 0;
    float S0_1 = 0;
    u32 r0_1 = 0;
    u32 r2_1 = 0;
    float S0_2 = 0;
    r13 = r13 - 0x18;  // (from the original)
    r5_1 = r0 + 0x400u;  // (from the original)
    r1_1 = *gptr<u32>(r13 + 0x18u);  // (from the original)
    S0_1 = fabsf(std::bit_cast<float>(arg0->word_644));
    if (s32(std::bit_cast<u32>(S0_1)) > s32(0x34000000u)) {  // (from the original)
        goto L_6c1ae4;
    }
    S0_1 = fabsf(std::bit_cast<float>(arg0->word_64c));
    if (s32(std::bit_cast<u32>(S0_1)) > s32(0x34000000u)) {  // (from the original)
        goto L_6c1ae4;
    }
    arg0->word_644 = u32(arg3->word_0);
    arg0->word_648 = u32(arg3->word_4);
    arg0->word_64c = u32(arg3->word_8);
L_6c1ae4:;
    r0_1 = r0 + 0x650u;  // (from the original)
    *gptr<u32>(r0 + 0x650u) = u32(*gptr<u32>(r1_1));  // (from the original)
    r2_1 = *gptr<u32>(r1_1 + 4u);
    *gptr<u32>(r0 + 0x654u) = u32(r2_1);  // (from the original)
    *gptr<u32>(r0 + 0x658u) = u32(*gptr<u32>(r1_1 + 8u));  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_1;
    call_006c5ef8(r0_1, 0u, r2_1, r3);
    S0_2 = guest::cpu()->s[0];
    *gptr<u32>(r5_1 + 0x254u) = u32(std::bit_cast<u32>(S0_2));  // (from the original)
    *gptr<u8>(r0 + 0x6ccu) = u8(1u);  // (from the original)
    r13 = r13 + 0x18;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_2;
    return call_006c00b8(r0, 1u, r1, r2);
}

}  // namespace d_006c1a8c
GUEST_EXPORT(0x006c1a8c, d_006c1a8c::f_006c1a8c);

// f_006c1ea8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006c1ea8 {

struct __attribute__((packed)) Object_006c1ea8_0 {
    u8 unknown_0[0x644];  // (not used here)
    u32 word_644;
    u32 word_648;
    u32 word_64c;
};
GUEST_OFFSET(Object_006c1ea8_0, word_644, 0x644);  // (from the original)
GUEST_OFFSET(Object_006c1ea8_0, word_648, 0x648);  // (from the original)
GUEST_OFFSET(Object_006c1ea8_0, word_64c, 0x64c);  // (from the original)

struct __attribute__((packed)) Object_006c1ea8_3 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Object_006c1ea8_3, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_006c1ea8_3, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_006c1ea8_3, word_8, 0x8);  // (from the original)

inline constexpr guest::Function<0x006c00b8, u32(u32, u32, u32, u32)> call_006c00b8;  // (from the original)
inline constexpr guest::Function<0x006c5ef8, u32(u32, u32, u32, u32)> call_006c5ef8;  // (from the original)

u32 f_006c1ea8(gptr<Object_006c1ea8_0> arg0, u32 r1, u32 r2, gptr<Object_006c1ea8_3> arg3) {
    u32 r0 = arg0.addr();
    u32 r3 = arg3.addr();
    u32 r13 = guest::cpu()->r[13];
    u32 r5_1 = 0;
    u32 r1_1 = 0;
    float S0_1 = 0;
    u32 r0_1 = 0;
    u32 r2_1 = 0;
    float S0_2 = 0;
    r13 = r13 - 0x18;  // (from the original)
    r5_1 = r0 + 0x400u;  // (from the original)
    r1_1 = *gptr<u32>(r13 + 0x18u);  // (from the original)
    S0_1 = fabsf(std::bit_cast<float>(arg0->word_644));
    if (s32(std::bit_cast<u32>(S0_1)) > s32(0x34000000u)) {  // (from the original)
        goto L_6c1f00;
    }
    S0_1 = fabsf(std::bit_cast<float>(arg0->word_64c));
    if (s32(std::bit_cast<u32>(S0_1)) > s32(0x34000000u)) {  // (from the original)
        goto L_6c1f00;
    }
    arg0->word_644 = u32(arg3->word_0);
    arg0->word_648 = u32(arg3->word_4);
    arg0->word_64c = u32(arg3->word_8);
L_6c1f00:;
    r0_1 = r0 + 0x650u;  // (from the original)
    *gptr<u32>(r0 + 0x650u) = u32(*gptr<u32>(r1_1));  // (from the original)
    r2_1 = *gptr<u32>(r1_1 + 4u);
    *gptr<u32>(r0 + 0x654u) = u32(r2_1);  // (from the original)
    *gptr<u32>(r0 + 0x658u) = u32(*gptr<u32>(r1_1 + 8u));  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_1;
    call_006c5ef8(r0_1, 0u, r2_1, r3);
    S0_2 = guest::cpu()->s[0];
    *gptr<u32>(r5_1 + 0x254u) = u32(std::bit_cast<u32>(S0_2));  // (from the original)
    *gptr<u8>(r0 + 0x6ccu) = u8(0u);  // (from the original)
    r13 = r13 + 0x18;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_2;
    return call_006c00b8(r0, 1u, r1, r2);
}

}  // namespace d_006c1ea8
GUEST_EXPORT(0x006c1ea8, d_006c1ea8::f_006c1ea8);

// f_006c2234: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006c2234 {

struct __attribute__((packed)) Object_006c2234_0 {
    u8 unknown_0[0x644];  // (not used here)
    u32 word_644;
    u32 word_648;
    u32 word_64c;
};
GUEST_OFFSET(Object_006c2234_0, word_644, 0x644);  // (from the original)
GUEST_OFFSET(Object_006c2234_0, word_648, 0x648);  // (from the original)
GUEST_OFFSET(Object_006c2234_0, word_64c, 0x64c);  // (from the original)

inline constexpr guest::Function<0x006c00b8, u32(u32, u32, u32, u32)> call_006c00b8;  // (from the original)

u32 f_006c2234(gptr<Object_006c2234_0> arg0, u32 r1, u32 r2, gptr<Float3> arg3) {
    u32 r0 = arg0.addr();
    float S0_1 = 0;
    arg0->word_644 = u32(std::bit_cast<u32>(arg3->v[0]));
    S0_1 = arg3->v[1];
    arg0->word_648 = u32(std::bit_cast<u32>(S0_1));
    arg0->word_64c = u32(std::bit_cast<u32>(arg3->v[2]));
    guest::cpu()->s[0] = S0_1;
    return call_006c00b8(r0, 7u, r1, r2);
}

}  // namespace d_006c2234
GUEST_EXPORT(0x006c2234, d_006c2234::f_006c2234);

// f_006c2268: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006c2268 {

struct __attribute__((packed)) Object_006c2268_0 {
    u8 unknown_0[0x644];  // (not used here)
    u32 word_644;
    u32 word_648;
    u32 word_64c;
};
GUEST_OFFSET(Object_006c2268_0, word_644, 0x644);  // (from the original)
GUEST_OFFSET(Object_006c2268_0, word_648, 0x648);  // (from the original)
GUEST_OFFSET(Object_006c2268_0, word_64c, 0x64c);  // (from the original)

inline constexpr guest::Function<0x006c00b8, u32(u32, u32, u32, u32)> call_006c00b8;  // (from the original)

u32 f_006c2268(gptr<Object_006c2268_0> arg0, u32 r1, u32 r2, gptr<Float3> arg3) {
    u32 r0 = arg0.addr();
    float S0_1 = 0;
    arg0->word_644 = u32(std::bit_cast<u32>(arg3->v[0]));
    S0_1 = arg3->v[1];
    arg0->word_648 = u32(std::bit_cast<u32>(S0_1));
    arg0->word_64c = u32(std::bit_cast<u32>(arg3->v[2]));
    guest::cpu()->s[0] = S0_1;
    return call_006c00b8(r0, 4u, r1, r2);
}

}  // namespace d_006c2268
GUEST_EXPORT(0x006c2268, d_006c2268::f_006c2268);

// f_006c229c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006c229c {

struct __attribute__((packed)) Object_006c229c_0 {
    u8 unknown_0[0x710];  // (not used here)
    u16 half_710;
};
GUEST_OFFSET(Object_006c229c_0, half_710, 0x710);  // (from the original)

inline constexpr guest::Function<0x0027dc80, u32(u32, u32, u32, u32)> call_0027dc80;  // (from the original)
inline constexpr guest::Function<0x006c00b8, u32(u32, u32, u32, u32)> call_006c00b8;  // (from the original)

u32 f_006c229c(gptr<Object_006c229c_0> arg0, u32 r1, u32 r2, u32 r3) {
    u32 r0 = arg0.addr();
    u32 r13 = guest::cpu()->r[13];
    u32 r5_1 = 0;
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    r13 = r13 - 0x10;  // (from the original)
    r5_1 = *gptr<u32>(r13 + 0x10u);  // (from the original)
    arg0->half_710 = u16(r3);
    guest::cpu()->r[13] = r13;
    r0_1 = call_006c00b8(r0, 8u, r1, r2);
    r1_1 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    if (r5_1 != 0) {
        r0_2 = r0 + 0x400u;  // (from the original)
        r13 = r13 + 0x10;  // (from the original)
        r0_3 = r0_2 + 0x268u;  // (from the original)
        guest::cpu()->r[13] = r13;
        return call_0027dc80(r0_3, 0u, r2_1, r3_1);
    }
    r13 = r13 + 0x10;  // (from the original)
    guest::cpu()->r[1] = r1_1;
    guest::cpu()->r[13] = r13;
    return r0_1;
}

}  // namespace d_006c229c
GUEST_EXPORT(0x006c229c, d_006c229c::f_006c229c);

// f_006c2be4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006c2be4 {

struct __attribute__((packed)) Object_006c2be4_0 {
    u8 unknown_0[0x6d0];  // (not used here)
    u16 half_6d0;
};
GUEST_OFFSET(Object_006c2be4_0, half_6d0, 0x6d0);  // (from the original)

inline guest::global<u32, 0x006c2ce4> global_006c2ce4;  // (from the original)
inline constexpr guest::Function<0x006bffb4, u32(u32, u32, u32, u32)> call_006bffb4;  // (from the original)

u32 f_006c2be4(gptr<Object_006c2be4_0> arg0, u32 r1_unused, u32 r2, float S0, float S1, float S2, float S3, float S4, float S5) {
    u32 r0 = arg0.addr();
    u32 r1 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r13 = guest::cpu()->r[13];
    u32 r5_1 = 0;
    u32 r0_1 = 0;
    u32 r2_1 = 0;
    u32 r0_2 = 0;
    float S1_1 = 0;
    float S2_1 = 0;
    u32 r2_2 = 0;
    float S1_2 = 0;
    float S2_2 = 0;
    float S0_1 = 0;
    float S1_3 = 0;
    u32 r4_1 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    r4 = r0;
    r13 = r13 - 0x28u;  // (from the original)
    r5_1 = r4 + 0x644u;  // (from the original)
    if (u32(arg0->half_6d0) == 0) {
        goto L_6c2cd0;
    }
    r0_1 = r13 + 0xcu;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2;
    guest::cpu()->s[3] = S3;
    guest::cpu()->s[4] = S4;
    guest::cpu()->s[5] = S5;
    call_006bffb4(r0_1, r2, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2_1 = r5_1 + 4u;
    r0_2 = r13;
    S1_1 = std::bit_cast<float>(*gptr<u32>(r2_1));
    S2_1 = std::bit_cast<float>(*gptr<u32>(r2_1 + 4));
    r2_2 = r13 + 0x10u;  // (from the original)
    S1_2 = std::bit_cast<float>(*gptr<u32>(r2_2)) - S1_1;
    S2_2 = std::bit_cast<float>(*gptr<u32>(r2_2 + 4)) - S2_1;
    *gptr<u32>(r0_2) = u32(std::bit_cast<u32>(std::bit_cast<float>(*gptr<u32>(r13 + 0xcu)) - std::bit_cast<float>(*gptr<u32>(r5_1))));  // (from the original)
    *gptr<u32>(r0_2 + 4) = u32(std::bit_cast<u32>(S1_2));
    *gptr<u32>(r0_2 + 8) = u32(std::bit_cast<u32>(S2_2));
    S0_1 = std::bit_cast<float>(*global_006c2ce4) / float(std::bit_cast<u32>(std::bit_cast<float>(u32(*gptr<u16>(0x6d0u + r4)))));  // (from the original)
    S1_3 = std::bit_cast<float>(*gptr<u32>(r13)) * S0_1;
    *gptr<u32>(r13) = u32(std::bit_cast<u32>(S1_3));
    *gptr<u32>(r13 + 4u) = u32(std::bit_cast<u32>(std::bit_cast<float>(*gptr<u32>(r13 + 4u)) * S0_1));
    *gptr<u32>(r13 + 8u) = u32(std::bit_cast<u32>(std::bit_cast<float>(*gptr<u32>(r13 + 8u)) * S0_1));
    *gptr<u32>(r5_1) = u32(std::bit_cast<u32>(std::bit_cast<float>(*gptr<u32>(r5_1)) + S1_3));
    *gptr<u32>(r5_1 + 4u) = u32(std::bit_cast<u32>(std::bit_cast<float>(*gptr<u32>(r5_1 + 4u)) + std::bit_cast<float>(*gptr<u32>(r13 + 4u))));
    S1 = std::bit_cast<float>(*gptr<u32>(r13 + 8u));
    S0 = std::bit_cast<float>(*gptr<u32>(r5_1 + 8u)) + S1;
    *gptr<u32>(r5_1 + 8u) = u32(std::bit_cast<u32>(S0));
L_6c2ca8:;
    r4_1 = r4 + 0x6d0u;  // (from the original)
    r0_3 = u32(*gptr<u16>(r4_1));
    if (r0_3 == 0) {
        r13 = r13 + 0x28u;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        guest::cpu()->s[0] = S0;
        guest::cpu()->s[1] = S1;
        return r0_3;
    }
    if (r0_3 >= 1u) {
        r0_4 = r0_3 - 1u;
    } else {
        r0_4 = 0u;
    }
    *gptr<u16>(r4_1) = u16(r0_4);
    r13 = r13 + 0x28u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    return r0_4;
L_6c2cd0:;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2;
    guest::cpu()->s[3] = S3;
    guest::cpu()->s[4] = S4;
    guest::cpu()->s[5] = S5;
    call_006bffb4(r5_1, r2, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    guest::preempt();
    goto L_6c2ca8;
}

}  // namespace d_006c2be4
GUEST_EXPORT(0x006c2be4, d_006c2be4::f_006c2be4);

// f_006c3118: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006c3118 {

struct __attribute__((packed)) Object_006c3118_0 {
    u8 unknown_0[0x5dc];  // (not used here)
    u32 word_5dc;
};
GUEST_OFFSET(Object_006c3118_0, word_5dc, 0x5dc);  // (from the original)


u32 f_006c3118(gptr<Object_006c3118_0> arg0, float S0) {
    u32 r0 = arg0.addr();
    u32 r0_1 = 0;
    r0_1 = r0 + 0x400u;  // (from the original)
    arg0->word_5dc = u32(std::bit_cast<u32>(S0));
    return r0_1;
}

}  // namespace d_006c3118
GUEST_EXPORT(0x006c3118, d_006c3118::f_006c3118);

// f_006c3858: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006c3858 {

struct __attribute__((packed)) Object_006c3858_0 {
    u32 word_0;
    u8 unknown_4[0x4ac];  // (not used here)
    u32 word_4b0;
};
GUEST_OFFSET(Object_006c3858_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_006c3858_0, word_4b0, 0x4b0);  // (from the original)

inline constexpr guest::Function<0x002e6944, u32(u32, u32, u32, u32)> call_002e6944;  // (from the original)
inline constexpr guest::Function<0x002f76ad, u32(u32, u32, u32, u32)> call_002f76ac;  // (from the original)
inline constexpr guest::Function<0x007c89b8, u32(u32, u32, u32, u32)> call_007c89b8;  // (from the original)

u32 f_006c3858(gptr<Object_006c3858_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r1_2 = 0;
    u32 r2_2 = 0;
    u32 r3_2 = 0;
    u32 r0_5 = 0;
    u32 r0_6 = 0;
    u32 r1_3 = 0;
    u32 r2_3 = 0;
    u32 r3_3 = 0;
    u32 r0_7 = 0;
    u32 r0_8 = 0;
    u32 r1_4 = 0;
    u32 r2_4 = 0;
    u32 r3_4 = 0;
    u32 r0_9 = 0;
    u32 r0_10 = 0;
    u32 r1_5 = 0;
    u32 r2_5 = 0;
    u32 r3_5 = 0;
    u32 r0_11 = 0;
    u32 r0_12 = 0;
    u32 r0_13 = 0;
    u32 r4_1 = 0;
    u32 r0_14 = 0;
    u32 r0_15 = 0;
    u32 r0_16 = 0;
    u32 r0_17 = 0;
    u32 r0_18 = 0;
    u32 r0_19 = 0;
    u32 r0_20 = 0;
    u32 r1_6 = 0;
    u32 r2_6 = 0;
    u32 r3_6 = 0;
    u32 r0_21 = 0;
    u32 r1_7 = 0;
    guest::cpu()->r[13] -= 8u;
    arg0->word_4b0 = u32(0x8f8e88u + 0x34u);  // (from the original)
    arg0->word_0 = u32(0x8f8e88u);  // (from the original)
    r0_1 = r0 + 0x7e8u;  // (from the original)
    call_002f76ac(r0_1, 0x250560u, 0x60u, 2u);  // (from the original)
    r0_2 = r0 + 0x7b0u;  // (from the original)
    call_002f76ac(r0_2, 0x4efa0cu, 0x18u, 2u);  // (from the original)
    r1_1 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    r0_3 = r0 + 0x790u;  // (from the original)
    r0_4 = call_002e6944(r0_3, r1_1, r2_1, r3_1);
    r1_2 = guest::cpu()->r[1];
    r2_2 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    r0_5 = r0_4 - 0x28u;  // (from the original)
    r0_6 = call_002e6944(r0_5, r1_2, r2_2, r3_2);
    r1_3 = guest::cpu()->r[1];
    r2_3 = guest::cpu()->r[2];
    r3_3 = guest::cpu()->r[3];
    r0_7 = r0_6 - 0x18u;  // (from the original)
    r0_8 = call_002e6944(r0_7, r1_3, r2_3, r3_3);
    r1_4 = guest::cpu()->r[1];
    r2_4 = guest::cpu()->r[2];
    r3_4 = guest::cpu()->r[3];
    r0_9 = r0_8 - 0x58u;  // (from the original)
    r0_10 = call_002e6944(r0_9, r1_4, r2_4, r3_4);
    r1_5 = guest::cpu()->r[1];
    r2_5 = guest::cpu()->r[2];
    r3_5 = guest::cpu()->r[3];
    r0_11 = r0_10 - 0x1cu;  // (from the original)
    r0_12 = call_002e6944(r0_11, r1_5, r2_5, r3_5);
    r0_13 = r0_12 - 0x9cu;  // (from the original)
    *gptr<u32>(r0_13 + 0x28u) = u32(0u);  // (from the original)
    r4_1 = r0_13 - 0x640u;  // (from the original)
    r0_14 = r0_13 - 0x18u;  // (from the original)
    call_002f76ac(r0_14, 0x4f14acu, 0xcu, 2u);  // (from the original)
    r0_15 = r4_1 + 0x594u;  // (from the original)
    call_002f76ac(r0_15, 0x6c1654u, 0x24u, 2u);  // (from the original)
    r0_16 = r4_1 + 0x544u;  // (from the original)
    call_002f76ac(r0_16, 0x4ecbe0u, 0x20u, 2u);  // (from the original)
    r0_17 = r4_1 + 0x504u;  // (from the original)
    call_002f76ac(r0_17, 0x4ecbe0u, 0x20u, 2u);  // (from the original)
    r0_18 = r4_1 + 0x4d4u;  // (from the original)
    call_002f76ac(r0_18, 0x4ee8c0u, 0x18u, 2u);  // (from the original)
    *gptr<u32>(r4_1 + 0x4b0u) = u32(0x8f28a8u + 0x34u);  // (from the original)
    *gptr<u32>(r4_1) = u32(0x8f28a8u);  // (from the original)
    r0_19 = r4_1 + 0x4b8u;  // (from the original)
    call_002f76ac(r0_19, 0x4edd84u, 0xcu, 2u);  // (from the original)
    *gptr<u32>(r4_1) = u32(0x8f09b8u);  // (from the original)
    r0_20 = r4_1 + 0x60u;  // (from the original)
    call_002f76ac(r0_20, 0x53721cu, 0x114u, 4u);  // (from the original)
    r1_6 = guest::cpu()->r[1];
    r2_6 = guest::cpu()->r[2];
    r3_6 = guest::cpu()->r[3];
    r0_21 = call_007c89b8(r4_1, r1_6, r2_6, r3_6);
    r1_7 = guest::cpu()->r[1];
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1_7;
    return r0_21;
}

}  // namespace d_006c3858
GUEST_EXPORT(0x006c3858, d_006c3858::f_006c3858);

// f_006c3a58: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006c3a58 {

inline guest::global<u32, 0x0095c6d0> global_0095c6d0;  // (from the original)
inline constexpr guest::Function<0x006158c4, u32(u32, u32, u32, u32)> call_006158c4;  // (from the original)
inline constexpr guest::Function<0x006a6e1c, u32(u32, u32, u32, u32)> call_006a6e1c;  // (from the original)
inline constexpr guest::Function<0x006fa1fc, u32(u32, u32, u32, u32)> call_006fa1fc;  // (from the original)

u32 f_006c3a58(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r13 = guest::cpu()->r[13];
    u32 r14 = guest::cpu()->r[14];
    u32 ea_1 = 0;
    u32 r5_1 = 0;
    u32 r0_1 = 0;
    u32 r4_1 = 0;
    u32 r0_2 = 0;
    u32 r1_1 = 0;
    u32 r0_3 = 0;
    u32 r4_2 = 0;
    u32 r1_2 = 0;
    u32 r2_1 = 0;
    u32 r0_4 = 0;
    u32 r1_3 = 0;
    u32 ea_2 = 0;
    u32 r4_3 = 0;
    u32 r5_2 = 0;
    u32 r6_1 = 0;
    u32 r7_1 = 0;
    if (r0 == 0) {
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[4] = r4;
        guest::cpu()->r[5] = r5;
        guest::cpu()->r[6] = r6;
        guest::cpu()->r[7] = r7;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    ea_1 = r13 - 0x14;  // (from the original)
    *gptr<u32>(ea_1) = u32(r4);
    *gptr<u32>(ea_1 + 4) = u32(r5);
    *gptr<u32>(ea_1 + 8) = u32(r6);
    *gptr<u32>(ea_1 + 0xc) = u32(r7);  // (from the original)
    *gptr<u32>(ea_1 + 0x10) = u32(r14);  // (from the original)
    r13 = r13 - 0x20u;  // (from the original)
    r5_1 = 6u;
    r0_1 = *global_0095c6d0;
    r4_1 = u32(s32(s8(*gptr<u8>(r0_1 + 0x1cu))));  // (from the original)
    if (r4_1 + 1u == 0) {
        goto L_6c3aac;
    }
    if (s32(r4_1) >= s32(0x40u)) {  // (from the original)
        goto L_6c3aac;
    }
    guest::cpu()->r[13] = r13;
    r0_2 = call_006158c4(r0_1, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (sxtb(u32(*gptr<u16>(r0_2 + (r4_1 + (r4_1 << 2) << 2) + 0x14u))) == 1u) {  // (from the original)
        r5_1 = 1u;
    }
L_6c3aac:;
    r1_1 = r13 + 8u;
    r0_3 = r13 + 4u;
    *gptr<u32>(r13 + 4u) = u32(0u);
    *gptr<u32>(r13 + 8u) = u32(0u);
    guest::cpu()->r[13] = r13;
    call_006fa1fc(r0_3, r1_1, r2, r3);
    r4_2 = r13 + 4u;
    *gptr<u32>(r13) = u32(r5_1);
    r1_2 = *gptr<u32>(r4_2);
    r2_1 = *gptr<u32>(r4_2 + 4);
    guest::cpu()->r[13] = r13;
    r0_4 = call_006a6e1c(r0, r1_2, r2_1, 9u);
    r1_3 = guest::cpu()->r[1];
    r13 = r13 + 0xcu;  // (from the original)
    ea_2 = r13;
    r13 = r13 + 0x14;  // (from the original)
    r4_3 = *gptr<u32>(ea_2);
    r5_2 = *gptr<u32>(ea_2 + 4);
    r6_1 = *gptr<u32>(ea_2 + 8);
    r7_1 = *gptr<u32>(ea_2 + 0xc);  // (from the original)
    guest::cpu()->r[1] = r1_3;
    guest::cpu()->r[4] = r4_3;
    guest::cpu()->r[5] = r5_2;
    guest::cpu()->r[6] = r6_1;
    guest::cpu()->r[7] = r7_1;
    guest::cpu()->r[13] = r13;
    return r0_4;
}

}  // namespace d_006c3a58
GUEST_EXPORT(0x006c3a58, d_006c3a58::f_006c3a58);

// f_006c4200: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006c4200 {

struct __attribute__((packed)) Object_006c4200_0 {
    u8 unknown_0[0x10];  // (not used here)
    u32 word_10;
    u8 unknown_14[0x8];  // (not used here)
    u8 byte_1c;
    u8 byte_1d;
    u8 byte_1e;
};
GUEST_OFFSET(Object_006c4200_0, word_10, 0x10);  // (from the original)
GUEST_OFFSET(Object_006c4200_0, byte_1c, 0x1c);  // (from the original)
GUEST_OFFSET(Object_006c4200_0, byte_1d, 0x1d);  // (from the original)
GUEST_OFFSET(Object_006c4200_0, byte_1e, 0x1e);  // (from the original)

inline constexpr guest::Function<0x002fc8e8, u32(u32, u32, u32, u32)> call_002fc8e8;  // (from the original)

u32 f_006c4200(gptr<Object_006c4200_0> arg0, u32 r1_unused, u32 r2) {
    u32 r0 = arg0.addr();
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r4_1 = 0;
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r1_1 = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r5 = r0;
    r4_1 = r5 + 0x10u;  // (from the original)
    arg0->word_10 = u32(0u);
    arg0->byte_1c = u8(0xffu);  // (from the original)
    arg0->byte_1d = u8(0u);
    r0_1 = r5 + 0x14u;  // (from the original)
    arg0->byte_1e = u8(0u);
    call_002fc8e8(r0_1, 0x95bfdcu, r2, guest::cpu()->r[3]);  // (from the original)
    *gptr<u32>(r4_1 + 8u) = u32(0u);
    r2 = 1u;
    *gptr<u8>(r4_1 + 0xfu) = u8(0u);  // (from the original)
    *gptr<u8>(r4_1 + 0x10u) = u8(r2);  // (from the original)
    *gptr<u8>(r4_1 + 0x11u) = u8(2u);  // (from the original)
    *gptr<u8>(r4_1 + 0x12u) = u8(3u);  // (from the original)
    *gptr<u8>(r5 + 0x10cu) = u8(3u);  // (from the original)
    r4 = 0u;
    *gptr<u8>(r5 + 0x10du) = u8(2u);  // (from the original)
    do {
L_6c425c:;
        r0_2 = r5 + (r4 << 2) + 0xecu;  // (from the original)
        r0_3 = call_002fc8e8(r0_2, 0x95bfdcu, r2, guest::cpu()->r[3]);  // (from the original)
        r1_1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r4 = r4 + 1u;
        guest::preempt();
    } while (s32(r4) < s32(8u));
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1_1;
    return r0_3;
}

}  // namespace d_006c4200
GUEST_EXPORT(0x006c4200, d_006c4200::f_006c4200);

// f_006c48ac: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006c48ac {

struct __attribute__((packed)) Object_006c48ac_0 {
    u8 unknown_0[0xc];  // (not used here)
    u8 byte_c;
};
GUEST_OFFSET(Object_006c48ac_0, byte_c, 0xc);  // (from the original)

inline constexpr guest::Function<0x006158c4, u32(u32, u32, u32, u32)> call_006158c4;  // (from the original)

u32 f_006c48ac(gptr<Object_006c48ac_0> arg0, u32 r1) {
    u32 r0 = arg0.addr();
    u32 r5_1 = 0;
    u32 r4_1 = 0;
    u32 r0_1 = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r5_1 = r0;
    r4_1 = u32(s32(s8(arg0->byte_c)));
    if (r4_1 + 1u == 0) {
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        guest::cpu()->r[1] = r1;
        return r0;
    }
    if (s32(r4_1) < s32(0x40u)) {  // (from the original)
        r0_1 = call_006158c4(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1 = r4_1 + (r4_1 << 2);
        r0 = sxtb(u32(*gptr<u16>(r0_1 + (r1 << 2) + 0x14u)));  // (from the original)
        if (r0 >= 0xcu) {  // (from the original)
            guest::cpu()->r[13] += 0x10u;  // (from the original)
            guest::cpu()->r[1] = r1;
            return r0;
        }
    }
    r0 = u32(s32(s8(*gptr<u8>(r5_1 + 0xcu))));  // (from the original)
    if (r0 < 0x40u) {  // (from the original)
        r0 = call_006158c4(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
    }
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_006c48ac
GUEST_EXPORT(0x006c48ac, d_006c48ac::f_006c48ac);

// f_006c4ed0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006c4ed0 {

inline constexpr guest::Function<0x0024a5ec, u32(u32, u32, u32, u32)> call_0024a5ec;  // (from the original)
inline constexpr guest::Function<0x0024a5f4, u32(u32, u32, u32, u32)> call_0024a5f4;  // (from the original)
inline constexpr guest::Function<0x002fcaf4, u32(u32, u32, u32, u32)> call_002fcaf4;  // (from the original)
inline constexpr guest::Function<0x002fcbb0, u32(u32, u32, u32, u32)> call_002fcbb0;  // (from the original)
inline constexpr guest::Function<0x0055cabc, u32(u32, u32, u32, u32)> call_0055cabc;  // (from the original)
inline constexpr guest::Function<0x0055cb58, u32(u32, u32, u32, u32)> call_0055cb58;  // (from the original)
inline constexpr guest::Function<0x00624f00, u32(u32, u32, u32, u32)> call_00624f00;  // (from the original)
inline constexpr guest::Function<0x00768b4c, u32(u32, u32, u32, u32)> call_00768b4c;  // (from the original)
inline constexpr guest::Function<0x00768da0, u32(u32, u32, u32, u32)> call_00768da0;  // (from the original)

u32 f_006c4ed0(u32 r0, u32 r1, u32 r2, u32 r3) {
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
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r1_2 = 0;
    u32 res_1 = 0;
    u32 r3_1 = 0;
    u32 r2_2 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r0_5 = 0;
    u32 r0_6 = 0;
    u32 r0_7 = 0;
    u32 r0_8 = 0;
    u32 r0_9 = 0;
    u32 r0_10 = 0;
    u32 r3_2 = 0;
    u32 r2_3 = 0;
    u32 r0_11 = 0;
    u32 r1_3 = 0;
    u32 r0_12 = 0;
    u32 r1_4 = 0;
    u32 r2_4 = 0;
    u32 r3_3 = 0;
    u32 r0_13 = 0;
    u32 r0_14 = 0;
    u32 r4_1 = 0;
    u32 r0_15 = 0;
    u32 r0_16 = 0;
    u32 r0_17 = 0;
    u32 r0_18 = 0;
    u32 r0_19 = 0;
    u32 r2_5 = 0;
    u32 r3_4 = 0;
    u32 r1_5 = 0;
    u32 r0_20 = 0;
    u32 r0_21 = 0;
    u32 r1_6 = 0;
    u32 r2_6 = 0;
    u32 r3_5 = 0;
    u32 r0_22 = 0;
    u32 r5_1 = 0;
    u32 r1_7 = 0;
    u32 r0_23 = 0;
    u32 r0_24 = 0;
    u32 res_2 = 0;
    u32 r0_25 = 0;
    u32 ea_2 = 0;
    u32 r4_2 = 0;
    u32 r5_2 = 0;
    u32 r6_1 = 0;
    u32 r7_1 = 0;
    u32 r8_1 = 0;
    u32 r9_1 = 0;
    u32 r10_1 = 0;
    u32 r11_1 = 0;
    ea_1 = r13 - 0x2c;  // (from the original)
    *gptr<u32>(ea_1) = u32(r0);
    *gptr<u32>(ea_1 + 4) = u32(r1);
    *gptr<u32>(ea_1 + 8) = u32(r4);
    *gptr<u32>(ea_1 + 0xc) = u32(r5);  // (from the original)
    *gptr<u32>(ea_1 + 0x10) = u32(r6);  // (from the original)
    *gptr<u32>(ea_1 + 0x14) = u32(r7);  // (from the original)
    *gptr<u32>(ea_1 + 0x18) = u32(r8);  // (from the original)
    *gptr<u32>(ea_1 + 0x1c) = u32(r9);  // (from the original)
    *gptr<u32>(ea_1 + 0x20) = u32(r10);  // (from the original)
    *gptr<u32>(ea_1 + 0x24) = u32(r11);  // (from the original)
    *gptr<u32>(ea_1 + 0x28) = u32(r14);  // (from the original)
    r13 = r13 - 0x3e0u;  // (from the original)
    r0_1 = r13 + 0x390u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_0055cabc(r0_1, r1, r2, r3);
    r11 = 0u;
    r0 = r11;
    r4 = r13 + 0x2e8u;  // (from the original)
    do {
L_6c4eec:;
        r1_1 = r0 + (r0 << 2);
        r0 = r0 + 1u;
        r2_1 = *gptr<u32>(r13 + 0x3b4u) + (r1_1 << 2);  // (from the original)
        r1_2 = r4 + (r1_1 << 2);
        res_1 = r0 - 6u;
        *gptr<u32>(r1_2) = u32(*gptr<u32>(r2_1 + 0x14u));  // (from the original)
        *gptr<u32>(r1_2 + 4u) = u32(*gptr<u32>(r2_1 + 0x18u));  // (from the original)
        *gptr<u32>(r1_2 + 8u) = u32(*gptr<u32>(r2_1 + 0x1cu));  // (from the original)
        r3_1 = *gptr<u32>(r2_1 + 0x20u);  // (from the original)
        *gptr<u32>(r1_2 + 0xcu) = u32(r3_1);  // (from the original)
        r2_2 = *gptr<u32>(r2_1 + 0x24u);  // (from the original)
        *gptr<u32>(r1_2 + 0x10u) = u32(r2_2);  // (from the original)
        guest::preempt();
    } while (res_1 >> 0x1f != ((r0 ^ 6u) & (r0 ^ res_1)) >> 0x1f);  // (from the original)
    r0_2 = r13;
    guest::cpu()->r[13] = r13;
    call_0024a5ec(r0_2, r1_2, r2_2, r3_1);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    *gptr<u32>(r13 + 0x37cu) = u32(0u);  // (from the original)
    *gptr<u32>(r13 + 0x384u) = u32(*gptr<u32>(r13 + 0x3b4u) + 0x14u);  // (from the original)
L_6c4f4c:;
    if ((*gptr<u32>(r13 + 0x37cu) & 0xffu) != 0) {  // (from the original)
        r0_3 = *gptr<u32>(r13 + 0x37cu) & 0xffu;  // (from the original)
        guest::cpu()->r[13] = r13;
        r0_4 = call_00624f00(r0_3, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        if (r0_4 == 0) {
            goto L_6c5124;
        }
    }
    r10 = 0u;
    r6 = 0u;
    *gptr<u32>(r13 + 0x368u) = u32(0u);  // (from the original)
    *gptr<u32>(r13 + 0x36cu) = u32(0u);  // (from the original)
    r0_5 = *gptr<u32>(r13 + 0x37cu);  // (from the original)
    r0_6 = r0_5 + (r0_5 << 2);
    r7 = *gptr<u32>(r13 + 0x384u) + (r0_6 << 2);  // (from the original)
    r1 = *gptr<u32>(r13 + 0x3b4u);  // (from the original)
    *gptr<u32>(r13 + 0x374u) = u32(r1 + (r0_6 << 2));  // (from the original)
    goto L_6c4fac;
L_6c4fa4:;
    if (s32(r6) >= s32(3u)) {
        goto L_6c5124;
    }
L_6c4fac:;
    r10 = r10 + 1u;
    if (r11 == 0) {
        if (s32(r10) >= s32(0x3e8u)) {  // (from the original)
            r11 = 1u;
        }
    }
    r0_7 = r13 + 0x390u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_8 = call_0055cb58(r0_7, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r9 = u32(u64(r0_8) * 5u >> 0x20);  // (from the original)
    if (u32(*gptr<u8>(r13 + 0x368u + r9)) != 0) {  // (from the original)
        guest::preempt();
        goto L_6c4fa4;
    }
    r0_9 = r13 + 0x390u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_10 = call_0055cb58(r0_9, r1, r2, r3);
    r3_2 = guest::cpu()->r[3];
    r2_3 = r9 + (r9 << 2);
    r0_11 = r13 + 0x2e8u + (r2_3 << 2) + (u32(u64(r0_10) * 0xau >> 0x20) << 1);  // (from the original)
    *gptr<u32>(r13 + 0x3a8u) = u32(r0_11);  // (from the original)
    r1_3 = u32(*gptr<u16>(r0_11));
    r0_12 = r13 + 0x388u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_002fcbb0(r0_12, r1_3, r2_3, r3_2);
    r1_4 = guest::cpu()->r[1];
    r2_4 = guest::cpu()->r[2];
    r3_3 = guest::cpu()->r[3];
    r0_13 = r13 + 0x388u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_14 = call_002fcaf4(r0_13, r1_4, r2_4, r3_3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0_14 != 0) {
        goto L_6c5064;
    }
    r4_1 = r13;
    r8 = 0u;
    r0_15 = r13 + 0x388u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_16 = call_00768da0(r0_15, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0_16 >> 0x1f != (r0_16 & (r0_16 ^ r0_16)) >> 0x1f) {  // (from the original)
        goto L_6c5078;
    }
    r1 = u32(s32(r0_16) >> 5);
    r0_17 = r0_16 & 0x1fu;  // (from the original)
    if (r1 >= 0xbau) {  // (from the original)
        goto L_6c5078;
    }
    r1 = *gptr<u32>(r4_1 + (r1 << 2));
    if ((lsr_r(r1, r0_17 & 0xff) & 1u) == 0) {  // (from the original)
        goto L_6c5078;
    }
L_6c5064:;
    guest::preempt();
    goto L_6c4fa4;
L_6c5078:;
    if (r11 != 0) {
        goto L_6c50e4;
    }
    r4 = 0u;
    if (r6 == 0 || r6 >> 0x1f != (r6 & (r6 ^ r6)) >> 0x1f) {  // (from the original)
        goto L_6c50e4;
    }
    do {
L_6c508c:;
        r0_18 = r13 + 0x388u;  // (from the original)
        guest::cpu()->r[13] = r13;
        r0_19 = call_00768b4c(r0_18, r1, r2, r3);
        r2_5 = guest::cpu()->r[2];
        r3_4 = guest::cpu()->r[3];
        r1_5 = u32(*gptr<u16>(r7 + (r4 << 1) + 0x78u));  // (from the original)
        r0_20 = r13 + 0x378u;  // (from the original)
        guest::cpu()->r[13] = r13;
        r0_21 = call_002fcbb0(r0_20, r1_5, r2_5, r3_4);
        r1_6 = guest::cpu()->r[1];
        r2_6 = guest::cpu()->r[2];
        r3_5 = guest::cpu()->r[3];
        guest::cpu()->r[13] = r13;
        r0_22 = call_00768b4c(r0_21, r1_6, r2_6, r3_5);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        if (r0_19 == r0_22) {
            r5_1 = 1u;
        } else {
            r5_1 = 0u;
        }
        if (r5_1 != 0) {
            r8 = 1u;
        }
        r4 = r4 + 1u;
        guest::preempt();
    } while (s32(r6) > s32(r4));
    if (r8 != 0) {
        guest::preempt();
        goto L_6c5064;
    }
L_6c50e4:;
    *gptr<u16>(*gptr<u32>(r13 + 0x374u) + (r6 << 1) + 0x8cu) = u16(u32(*gptr<u16>(*gptr<u32>(r13 + 0x3a8u))));  // (from the original)
    r1_7 = r13 + 0x388u;  // (from the original)
    r0_23 = r13;
    guest::cpu()->r[13] = r13;
    call_0024a5f4(r0_23, r1_7, r2, r3);
    r3 = guest::cpu()->r[3];
    r2 = *gptr<u32>(r13 + 0x3a8u);  // (from the original)
    r6 = r6 + 1u;
    *gptr<u16>(r2) = u16(0x7ffeu);  // (from the original)
    r1 = r13 + 0x368u;  // (from the original)
    *gptr<u8>(r1 + r9) = u8(1u);
    guest::preempt();
    goto L_6c5064;
L_6c5124:;
    r0_24 = *gptr<u32>(r13 + 0x37cu) + 1u;  // (from the original)
    res_2 = r0_24 - 4u;
    *gptr<u32>(r13 + 0x37cu) = u32(r0_24);  // (from the original)
    if (res_2 >> 0x1f != ((r0_24 ^ 4u) & (r0_24 ^ res_2)) >> 0x1f) {  // (from the original)
        guest::preempt();
        goto L_6c4f4c;
    }
    r4 = 0u;
L_6c513c:;
    if ((r4 & 0xffu) != 0) {  // (from the original)
        r0_25 = r4 & 0xffu;  // (from the original)
        guest::cpu()->r[13] = r13;
        r0 = call_00624f00(r0_25, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        if (r0 == 0) {
            goto L_6c5168;
        }
    }
    r0 = 0u;
    do {
L_6c515c:;
        r0 = r0 + 1u;
        guest::preempt();
    } while (s32(r0) < s32(3u));
L_6c5168:;
    r4 = r4 + 1u;
    if (s32(r4) < s32(4u)) {
        guest::preempt();
        goto L_6c513c;
    }
    r13 = r13 + 0x3bcu;  // (from the original)
    ea_2 = r13;
    r13 = r13 + 0x24;  // (from the original)
    r4_2 = *gptr<u32>(ea_2);
    r5_2 = *gptr<u32>(ea_2 + 4);
    r6_1 = *gptr<u32>(ea_2 + 8);
    r7_1 = *gptr<u32>(ea_2 + 0xc);  // (from the original)
    r8_1 = *gptr<u32>(ea_2 + 0x10);  // (from the original)
    r9_1 = *gptr<u32>(ea_2 + 0x14);  // (from the original)
    r10_1 = *gptr<u32>(ea_2 + 0x18);  // (from the original)
    r11_1 = *gptr<u32>(ea_2 + 0x1c);  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[4] = r4_2;
    guest::cpu()->r[5] = r5_2;
    guest::cpu()->r[6] = r6_1;
    guest::cpu()->r[7] = r7_1;
    guest::cpu()->r[8] = r8_1;
    guest::cpu()->r[9] = r9_1;
    guest::cpu()->r[10] = r10_1;
    guest::cpu()->r[11] = r11_1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_006c4ed0
GUEST_EXPORT(0x006c4ed0, d_006c4ed0::f_006c4ed0);

// f_006c5c60: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006c5c60 {

inline guest::global<u32, 0x006c5d2c> global_006c5d2c;  // (from the original)
inline constexpr guest::Function<0x002fe7cc, u32(u32, u32, u32, u32)> call_002fe7cc;  // (from the original)
inline constexpr guest::Function<0x006a69ec, u32(u32, u32, u32, u32)> call_006a69ec;  // (from the original)
inline constexpr guest::Function<0x006a930c, u32(u32, u32, u32, u32)> call_006a930c;  // (from the original)
inline constexpr guest::Function<0x006a96d8, u32(u32, u32, u32, u32)> call_006a96d8;  // (from the original)
inline constexpr guest::Function<0x006f6810, u32(u32, u32, u32, u32)> call_006f6810;  // (from the original)
inline constexpr guest::Function<0x0075291c, u32(u32, u32, u32, u32)> call_0075291c;  // (from the original)
inline constexpr guest::Function<0x0075d868, u32(u32, u32, u32, u32)> call_0075d868;  // (from the original)

u32 f_006c5c60(u32 r0, u32 r1, u32 r2, u32 r3, float S0) {
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    float S0_1 = 0;
    u32 r3_1 = 0;
    u32 r2_1 = 0;
    u32 r1_2 = 0;
    u32 r0_2 = 0;
    float S0_2 = 0;
    u32 r3_2 = 0;
    u32 r1_3 = 0;
    u32 r2_2 = 0;
    float S0_3 = 0;
    u32 r3_3 = 0;
    u32 r1_4 = 0;
    u32 r2_3 = 0;
    u32 r0_3 = 0;
    float S0_4 = 0;
    u32 r3_4 = 0;
    u32 r1_5 = 0;
    u32 r2_4 = 0;
    u32 r0_4 = 0;
    u32 r1_6 = 0;
    float S0_5 = 0;
    u32 r3_5 = 0;
    u32 r2_5 = 0;
    u32 r1_7 = 0;
    float S0_6 = 0;
    u32 r3_6 = 0;
    u32 r2_6 = 0;
    u32 r1_8 = 0;
    u32 r0_5 = 0;
    u32 r1_9 = 0;
    float S0_7 = 0;
    float S0_8 = 0;
    r13 = r13 - 0x48u;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    r0_1 = call_002fe7cc(r1, r1, r2, r3);
    r1_1 = guest::cpu()->r[1];
    S0_1 = guest::cpu()->s[0];
    if (r0_1 == 0) {
        S0_8 = std::bit_cast<float>(*global_006c5d2c);
        r13 = r13 + 0x48u;  // (from the original)
        guest::cpu()->r[1] = r1_1;
        guest::cpu()->r[13] = r13;
        guest::cpu()->s[0] = S0_8;
        return r0_1;
    }
    *gptr<u32>(r13 + 0xcu) = u32(0u);  // (from the original)
    *gptr<u32>(r13 + 0x10u) = u32(0u);  // (from the original)
    *gptr<u32>(r13 + 4u) = u32(0u);
    *gptr<u32>(r13 + 8u) = u32(0u);
    r3_1 = r13 + 8u;
    r2_1 = r13 + 4u;
    r1_2 = r13 + 0x10u;  // (from the original)
    r0_2 = r13 + 0xcu;  // (from the original)
    *gptr<u32>(r13) = u32(r0);
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_1;
    call_006a69ec(r0_2, r1_2, r2_1, r3_1);
    S0_2 = guest::cpu()->s[0];
    r3_2 = r13 + 0xcu;  // (from the original)
    r1_3 = *gptr<u32>(r3_2);
    r2_2 = *gptr<u32>(r3_2 + 4);
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_2;
    r0_1 = call_0075291c(r0_1, r1_3, r2_2, r3_2);
    r1_1 = guest::cpu()->r[1];
    S0_3 = guest::cpu()->s[0];
    if (r0_1 == 0) {
        S0_8 = std::bit_cast<float>(*global_006c5d2c);
        r13 = r13 + 0x48u;  // (from the original)
        guest::cpu()->r[1] = r1_1;
        guest::cpu()->r[13] = r13;
        guest::cpu()->s[0] = S0_8;
        return r0_1;
    }
    r3_3 = r13 + 4u;
    r1_4 = *gptr<u32>(r3_3);
    r2_3 = *gptr<u32>(r3_3 + 4);
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_3;
    r0_3 = call_0075d868(r0_1, r1_4, r2_3, r3_3);
    S0_4 = guest::cpu()->s[0];
    if (r0_3 != 0) {
        r3_4 = r13 + 4u;
        r1_5 = *gptr<u32>(r3_4);
        r2_4 = *gptr<u32>(r3_4 + 4);
        guest::cpu()->r[13] = r13;
        guest::cpu()->s[0] = S0_4;
        r0_4 = call_006a96d8(r0_1, r1_5, r2_4, r3_4);
        r1_6 = guest::cpu()->r[1];
        S0_5 = guest::cpu()->s[0];
        r13 = r13 + 0x48u;  // (from the original)
        guest::cpu()->r[1] = r1_6;
        guest::cpu()->r[13] = r13;
        guest::cpu()->s[0] = S0_5;
        return r0_4;
    }
    r3_5 = r13 + 0x2cu;  // (from the original)
    r2_5 = r13 + 0x20u;  // (from the original)
    r1_7 = r13 + 0x14u;  // (from the original)
    *gptr<u32>(r13) = u32(r0);
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_4;
    call_006a930c(r0_1, r1_7, r2_5, r3_5);
    S0_6 = guest::cpu()->s[0];
    r3_6 = r13 + 0x2cu;  // (from the original)
    r2_6 = r13 + 0x20u;  // (from the original)
    r1_8 = r13 + 0x14u;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_6;
    r0_5 = call_006f6810(r0, r1_8, r2_6, r3_6);
    r1_9 = guest::cpu()->r[1];
    S0_7 = guest::cpu()->s[0];
    r13 = r13 + 0x48u;  // (from the original)
    guest::cpu()->r[1] = r1_9;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_7;
    return r0_5;
}

}  // namespace d_006c5c60
GUEST_EXPORT(0x006c5c60, d_006c5c60::f_006c5c60);

// f_006c5d30: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006c5d30 {

inline guest::global<u32, 0x006c5e24> global_006c5e24;  // (from the original)
inline guest::global<u32, 0x006c5e28> global_006c5e28;  // (from the original)
inline constexpr guest::Function<0x002fe7cc, u32(u32, u32, u32, u32)> call_002fe7cc;  // (from the original)
inline constexpr guest::Function<0x0056a378, u32(u32, u32, u32, u32)> call_0056a378;  // (from the original)
inline constexpr guest::Function<0x006a69ec, u32(u32, u32, u32, u32)> call_006a69ec;  // (from the original)
inline constexpr guest::Function<0x006a930c, u32(u32, u32, u32, u32)> call_006a930c;  // (from the original)
inline constexpr guest::Function<0x0075291c, u32(u32, u32, u32, u32)> call_0075291c;  // (from the original)

u32 f_006c5d30(u32 r0, u32 r1, u32 r2, u32 r3, float S0, float S1, float S2, float S3, float S4, float S5, float S6, float S7, float S8) {
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    float S0_1 = 0;
    float S1_1 = 0;
    float S2_1 = 0;
    float S3_1 = 0;
    float S4_1 = 0;
    float S5_1 = 0;
    float S6_1 = 0;
    float S7_1 = 0;
    float S8_1 = 0;
    u32 r3_1 = 0;
    u32 r2_1 = 0;
    u32 r1_2 = 0;
    u32 r0_2 = 0;
    float S0_2 = 0;
    float S1_2 = 0;
    float S2_2 = 0;
    float S3_2 = 0;
    float S4_2 = 0;
    float S5_2 = 0;
    float S6_2 = 0;
    float S7_2 = 0;
    float S8_2 = 0;
    u32 r3_2 = 0;
    u32 r1_3 = 0;
    u32 r2_2 = 0;
    float S0_3 = 0;
    float S1_3 = 0;
    float S2_3 = 0;
    float S3_3 = 0;
    float S4_3 = 0;
    float S5_3 = 0;
    float S6_3 = 0;
    float S7_3 = 0;
    float S8_3 = 0;
    u32 r3_3 = 0;
    u32 r2_3 = 0;
    u32 r1_4 = 0;
    u32 r2_4 = 0;
    u32 r3_4 = 0;
    u32 r1_5 = 0;
    float S3_4 = 0;
    float S5_4 = 0;
    float S4_4 = 0;
    u32 r0_3 = 0;
    float S0_4 = 0;
    float S1_4 = 0;
    u32 r1_6 = 0;
    float S2_4 = 0;
    float S0_5 = 0;
    float S1_5 = 0;
    float S5_5 = 0;
    float S3_5 = 0;
    float S4_5 = 0;
    float S6_4 = 0;
    float S7_4 = 0;
    float S8_4 = 0;
    float S0_6 = 0;
    float S1_6 = 0;
    u32 ea_1 = 0;
    u32 r0_4 = 0;
    u32 r1_7 = 0;
    u32 r2_5 = 0;
    float S0_7 = 0;
    float S1_7 = 0;
    r13 = r13 - 0x68u;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2;
    guest::cpu()->s[3] = S3;
    guest::cpu()->s[4] = S4;
    guest::cpu()->s[5] = S5;
    guest::cpu()->s[6] = S6;
    guest::cpu()->s[7] = S7;
    guest::cpu()->s[8] = S8;
    r0_1 = call_002fe7cc(r2, r1, r2, r3);
    r1_1 = guest::cpu()->r[1];
    S0_1 = guest::cpu()->s[0];
    S1_1 = guest::cpu()->s[1];
    S2_1 = guest::cpu()->s[2];
    S3_1 = guest::cpu()->s[3];
    S4_1 = guest::cpu()->s[4];
    S5_1 = guest::cpu()->s[5];
    S6_1 = guest::cpu()->s[6];
    S7_1 = guest::cpu()->s[7];
    S8_1 = guest::cpu()->s[8];
    if (r0_1 == 0) {
        goto L_6c5e0c;
    }
    r3_1 = r13 + 0x54u;  // (from the original)
    r2_1 = r13 + 0x50u;  // (from the original)
    r1_2 = r13 + 0x38u;  // (from the original)
    r0_2 = r13 + 0x34u;  // (from the original)
    *gptr<u32>(r13) = u32(r1);
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_1;
    guest::cpu()->s[1] = S1_1;
    guest::cpu()->s[2] = S2_1;
    guest::cpu()->s[3] = S3_1;
    guest::cpu()->s[4] = S4_1;
    guest::cpu()->s[5] = S5_1;
    guest::cpu()->s[6] = S6_1;
    guest::cpu()->s[7] = S7_1;
    guest::cpu()->s[8] = S8_1;
    call_006a69ec(r0_2, r1_2, r2_1, r3_1);
    S0_2 = guest::cpu()->s[0];
    S1_2 = guest::cpu()->s[1];
    S2_2 = guest::cpu()->s[2];
    S3_2 = guest::cpu()->s[3];
    S4_2 = guest::cpu()->s[4];
    S5_2 = guest::cpu()->s[5];
    S6_2 = guest::cpu()->s[6];
    S7_2 = guest::cpu()->s[7];
    S8_2 = guest::cpu()->s[8];
    r3_2 = r13 + 0x34u;  // (from the original)
    r1_3 = *gptr<u32>(r3_2);
    r2_2 = *gptr<u32>(r3_2 + 4);
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_2;
    guest::cpu()->s[1] = S1_2;
    guest::cpu()->s[2] = S2_2;
    guest::cpu()->s[3] = S3_2;
    guest::cpu()->s[4] = S4_2;
    guest::cpu()->s[5] = S5_2;
    guest::cpu()->s[6] = S6_2;
    guest::cpu()->s[7] = S7_2;
    guest::cpu()->s[8] = S8_2;
    r0_1 = call_0075291c(r0_1, r1_3, r2_2, r3_2);
    r1_1 = guest::cpu()->r[1];
    S0_3 = guest::cpu()->s[0];
    S1_3 = guest::cpu()->s[1];
    S2_3 = guest::cpu()->s[2];
    S3_3 = guest::cpu()->s[3];
    S4_3 = guest::cpu()->s[4];
    S5_3 = guest::cpu()->s[5];
    S6_3 = guest::cpu()->s[6];
    S7_3 = guest::cpu()->s[7];
    S8_3 = guest::cpu()->s[8];
    if (r0_1 == 0) {
        goto L_6c5e0c;
    }
    r3_3 = r13 + 8u;
    r2_3 = r13 + 0x20u;  // (from the original)
    r1_4 = r13 + 0x14u;  // (from the original)
    *gptr<u32>(r13) = u32(r1);
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_3;
    guest::cpu()->s[1] = S1_3;
    guest::cpu()->s[2] = S2_3;
    guest::cpu()->s[3] = S3_3;
    guest::cpu()->s[4] = S4_3;
    guest::cpu()->s[5] = S5_3;
    guest::cpu()->s[6] = S6_3;
    guest::cpu()->s[7] = S7_3;
    guest::cpu()->s[8] = S8_3;
    call_006a930c(r0_1, r1_4, r2_3, r3_3);
    r2_4 = guest::cpu()->r[2];
    r3_4 = guest::cpu()->r[3];
    r1_5 = r13 + 0x18u;  // (from the original)
    S3_4 = std::bit_cast<float>(*gptr<u32>(r13 + 0x28u));  // (from the original)
    S5_4 = std::bit_cast<float>(*gptr<u32>(r13 + 0x20u));  // (from the original)
    S4_4 = std::bit_cast<float>(*gptr<u32>(r13 + 0x24u));  // (from the original)
    r0_3 = r13 + 0x44u;  // (from the original)
    S0_4 = std::bit_cast<float>(*gptr<u32>(r1_5));
    S1_4 = std::bit_cast<float>(*gptr<u32>(r1_5 + 4));
    r1_6 = r13 + 8u;
    S2_4 = S5_4 - std::bit_cast<float>(*gptr<u32>(r13 + 0x14u));  // (from the original)
    S0_5 = S4_4 - S0_4;
    S1_5 = S3_4 - S1_4;
    S5_5 = std::bit_cast<float>(*gptr<u32>(r1_6)) - S5_4;
    S3_5 = std::bit_cast<float>(*gptr<u32>(r1_6 + 8)) - S3_4;
    S4_5 = std::bit_cast<float>(*gptr<u32>(r1_6 + 4)) - S4_4;
    S6_4 = S1_5 * S5_5 - S2_4 * S3_5;
    S7_4 = S0_5 * S3_5 - S1_5 * S4_5;
    S8_4 = S2_4 * S4_5 - S0_5 * S5_5;
    *gptr<u32>(r13 + 0x44u) = u32(std::bit_cast<u32>(S7_4));  // (from the original)
    *gptr<u32>(r13 + 0x48u) = u32(std::bit_cast<u32>(S6_4));  // (from the original)
    *gptr<u32>(r13 + 0x4cu) = u32(std::bit_cast<u32>(S8_4));  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_5;
    guest::cpu()->s[1] = S1_5;
    guest::cpu()->s[2] = S2_4;
    guest::cpu()->s[3] = S3_5;
    guest::cpu()->s[4] = S4_5;
    guest::cpu()->s[5] = S5_5;
    guest::cpu()->s[6] = S6_4;
    guest::cpu()->s[7] = S7_4;
    guest::cpu()->s[8] = S8_4;
    call_0056a378(r0_3, r1_6, r2_4, r3_4);
    S0_6 = guest::cpu()->s[0];
    S1_6 = guest::cpu()->s[1];
    ea_1 = r13 + 0x44u;  // (from the original)
    r0_4 = *gptr<u32>(ea_1);
    r1_7 = *gptr<u32>(ea_1 + 4);
    r2_5 = *gptr<u32>(ea_1 + 8);
    *gptr<u32>(r0) = u32(r0_4);
    *gptr<u32>(r0 + 4) = u32(r1_7);
    *gptr<u32>(r0 + 8) = u32(r2_5);
    r13 = r13 + 0x68u;  // (from the original)
    guest::cpu()->r[1] = r1_7;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_6;
    guest::cpu()->s[1] = S1_6;
    return r0_4;
L_6c5e0c:;
    S0_7 = std::bit_cast<float>(*global_006c5e24);
    S1_7 = std::bit_cast<float>(*global_006c5e28);
    *gptr<u32>(r0) = u32(std::bit_cast<u32>(S0_7));
    *gptr<u32>(r0 + 4) = u32(std::bit_cast<u32>(S1_7));
    *gptr<u32>(r0 + 8u) = u32(std::bit_cast<u32>(S0_7));
    r13 = r13 + 0x68u;  // (from the original)
    guest::cpu()->r[1] = r1_1;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_7;
    guest::cpu()->s[1] = S1_7;
    return r0_1;
}

}  // namespace d_006c5d30
GUEST_EXPORT(0x006c5d30, d_006c5d30::f_006c5d30);

// f_006c5e2c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006c5e2c {

inline constexpr guest::Function<0x00315788, u32(u32, u32, u32, u32)> call_00315788;  // (from the original)
inline constexpr guest::Function<0x005ce154, u32(u32, u32, u32, u32)> call_005ce154;  // (from the original)
inline constexpr guest::Function<0x006a6e90, u32(u32, u32, u32, u32)> call_006a6e90;  // (from the original)
inline constexpr guest::Function<0x006c5ad8, u32(u32, u32, u32, u32)> call_006c5ad8;  // (from the original)

u32 f_006c5e2c(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r13 = guest::cpu()->r[13];
    u32 r5_1 = 0;
    u32 r1_1 = 0;
    u32 r0_1 = 0;
    u32 r3_1 = 0;
    u32 r4_1 = 0;
    u32 r11_1 = 0;
    u32 r1_2 = 0;
    u32 r0_2 = 0;
    u32 r3_2 = 0;
    u32 r1_3 = 0;
    u32 r0_3 = 0;
    u32 r1_4 = 0;
    u32 zf_1 = 0;
    u32 r0_4 = 0;
    u32 r1_5 = 0;
    u32 r2_1 = 0;
    u32 r3_3 = 0;
    r13 = r13 - 0x38u;  // (from the original)
    *gptr<u32>(r13 + 8u) = u32(0u);
    *gptr<u32>(r13 + 0xcu) = u32(0u);  // (from the original)
    r5_1 = *gptr<u32>(r13 + 0x38u);  // (from the original)
    r1_1 = r13 + 0xcu;  // (from the original)
    r0_1 = r13 + 8u;
    *gptr<u32>(r13) = u32(r2);
    *gptr<u32>(r13 + 4) = u32(r3);
    guest::cpu()->r[13] = r13;
    call_006a6e90(r0_1, r1_1, r0, r1);
    r3_1 = guest::cpu()->r[3];
    r4_1 = *gptr<u32>(r13 + 0xcu);  // (from the original)
    r11_1 = *gptr<u32>(r13 + 8u);
    r1_2 = r4_1 - 1u;
    guest::cpu()->r[13] = r13;
    r0_2 = call_00315788(r11_1, r1_2, r5_1, r3_1);
    r3_2 = guest::cpu()->r[3];
    r1_3 = r4_1 - 2u;
    guest::cpu()->r[13] = r13;
    r0_3 = call_00315788(r11_1, r1_3, r5_1, r3_2);
    r1_4 = guest::cpu()->r[1];
    zf_1 = r0_2 == 3u;
    if (!zf_1) {
        zf_1 = r0_3 == 3u;
    }
    if (zf_1) {
        goto L_6c5ecc;
    }
    *gptr<u32>(r13) = u32(r5_1);
    guest::cpu()->r[13] = r13;
    r0_4 = call_006c5ad8(r0, r1, r2, r3);
    r1_5 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    r3_3 = guest::cpu()->r[3];
    r13 = r13 + 0x38u;  // (from the original)
    guest::cpu()->r[13] = r13;
    return call_005ce154(r0_4, r1_5, r2_1, r3_3);
L_6c5ecc:;
    r13 = r13 + 0x38u;  // (from the original)
    guest::cpu()->r[1] = r1_4;
    guest::cpu()->r[13] = r13;
    return 0u;
}

}  // namespace d_006c5e2c
GUEST_EXPORT(0x006c5e2c, d_006c5e2c::f_006c5e2c);

// f_006c6188: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006c6188 {

inline constexpr guest::Function<0x006a6ec0, u32(u32, u32, u32, u32)> call_006a6ec0;  // (from the original)
inline constexpr guest::Function<0x006c61d8, u32(u32, u32, u32, u32)> call_006c61d8;  // (from the original)

u32 f_006c6188(u32 r0, u32 r1, u32 r2) {
    u32 r13 = guest::cpu()->r[13];
    u32 r3_1 = 0;
    u32 r2_1 = 0;
    u32 r1_1 = 0;
    u32 r0_1 = 0;
    u32 ea_1 = 0;
    u32 ea_2 = 0;
    u32 r0_2 = 0;
    u32 r1_2 = 0;
    u32 r2_2 = 0;
    u32 r3_2 = 0;
    u32 r0_3 = 0;
    u32 r1_3 = 0;
    r13 = r13 - 0x20u;  // (from the original)
    *gptr<u32>(r13 + 0x14u) = u32(0u);  // (from the original)
    *gptr<u32>(r13) = u32(r0);
    *gptr<u32>(r13 + 4) = u32(r1);
    *gptr<u32>(r13 + 8u) = u32(0u);
    *gptr<u32>(r13 + 0xcu) = u32(0u);  // (from the original)
    *gptr<u32>(r13 + 0x10u) = u32(0u);  // (from the original)
    r3_1 = r13 + 0x14u;  // (from the original)
    r2_1 = r13 + 0x10u;  // (from the original)
    r1_1 = r13 + 0xcu;  // (from the original)
    r0_1 = r13 + 8u;
    guest::cpu()->r[13] = r13;
    call_006a6ec0(r0_1, r1_1, r2_1, r3_1);
    ea_1 = r13;
    *gptr<u32>(ea_1) = u32(r2);
    ea_2 = r13 + 8u;
    r0_2 = *gptr<u32>(ea_2);
    r1_2 = *gptr<u32>(ea_2 + 4);
    r2_2 = *gptr<u32>(ea_2 + 8);
    r3_2 = *gptr<u32>(ea_2 + 0xc);  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_3 = call_006c61d8(r0_2, r1_2, r2_2, r3_2);
    r1_3 = guest::cpu()->r[1];
    r13 = r13 + 0x20u;  // (from the original)
    guest::cpu()->r[1] = r1_3;
    guest::cpu()->r[13] = r13;
    return r0_3;
}

}  // namespace d_006c6188
GUEST_EXPORT(0x006c6188, d_006c6188::f_006c6188);

// f_006c6640: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006c6640 {

inline constexpr guest::Function<0x006a69ec, u32(u32, u32, u32, u32)> call_006a69ec;  // (from the original)
inline constexpr guest::Function<0x006c5ad8, u32(u32, u32, u32, u32)> call_006c5ad8;  // (from the original)
inline constexpr guest::Function<0x006c5c60, u32(u32, u32, u32, u32)> call_006c5c60;  // (from the original)
inline constexpr guest::Function<0x006c75e0, u32(u32, u32, u32, u32)> call_006c75e0;  // (from the original)

u32 f_006c6640(u32 r0, u32 r1) {
    u32 r13 = guest::cpu()->r[13];
    u32 r3_1 = 0;
    u32 r2_1 = 0;
    u32 r1_1 = 0;
    u32 r0_1 = 0;
    u32 ea_1 = 0;
    u32 r0_2 = 0;
    u32 r1_2 = 0;
    u32 r2_2 = 0;
    u32 r3_2 = 0;
    u32 r0_3 = 0;
    u32 r2_3 = 0;
    u32 r3_3 = 0;
    u32 zf_1 = 0;
    u32 zf_2 = 0;
    u32 zf_3 = 0;
    u32 zf_4 = 0;
    u32 r0_4 = 0;
    u32 r1_3 = 0;
    u32 r3_4 = 0;
    u32 r2_4 = 0;
    u32 r1_4 = 0;
    u32 r0_5 = 0;
    u32 ea_2 = 0;
    u32 ea_3 = 0;
    u32 r1_5 = 0;
    u32 r2_5 = 0;
    u32 r3_5 = 0;
    u32 r0_6 = 0;
    u32 r0_7 = 0;
    u32 r1_6 = 0;
    r13 = r13 - 0x38u;  // (from the original)
    *gptr<u32>(r13) = u32(r0);
    r3_1 = r13 + 0x14u;  // (from the original)
    r2_1 = r13 + 0x10u;  // (from the original)
    r1_1 = r13 + 0xcu;  // (from the original)
    r0_1 = r13 + 8u;
    *gptr<u32>(r13 + 8u) = u32(0u);
    *gptr<u32>(r13 + 0xcu) = u32(0u);  // (from the original)
    *gptr<u32>(r13 + 0x10u) = u32(0u);  // (from the original)
    *gptr<u32>(r13 + 0x14u) = u32(0u);  // (from the original)
    guest::cpu()->r[13] = r13;
    call_006a69ec(r0_1, r1_1, r2_1, r3_1);
    ea_1 = r13 + 8u;
    r0_2 = *gptr<u32>(ea_1);
    r1_2 = *gptr<u32>(ea_1 + 4);
    r2_2 = *gptr<u32>(ea_1 + 8);
    r3_2 = *gptr<u32>(ea_1 + 0xc);  // (from the original)
    *gptr<u32>(r13) = u32(r1);
    guest::cpu()->r[13] = r13;
    r0_3 = call_006c5ad8(r0_2, r1_2, r2_2, r3_2);
    r2_3 = guest::cpu()->r[2];
    r3_3 = guest::cpu()->r[3];
    zf_1 = r0_3 == 2u;
    if (!zf_1) {
        zf_1 = r0_3 == 0xf8u;  // (from the original)
    }
    if (zf_1) {
        goto L_6c66d0;
    }
    zf_2 = r0_3 == 4u;
    if (!zf_2) {
        zf_2 = r0_3 == 3u;
    }
    if (zf_2) {
        goto L_6c66d0;
    }
    zf_3 = r0_3 == 0xa2u;  // (from the original)
    if (!zf_3) {
        zf_3 = r0_3 == 0xa3u;  // (from the original)
    }
    if (zf_3) {
        goto L_6c66d0;
    }
    zf_4 = r0_3 == 0xa4u;  // (from the original)
    if (!zf_4) {
        zf_4 = r0_3 == 0xa5u;  // (from the original)
    }
    if (zf_4) {
        goto L_6c66d0;
    }
    guest::cpu()->r[13] = r13;
    r0_4 = call_006c5c60(r0, r1, r2_3, r3_3);
    r1_3 = guest::cpu()->r[1];
    r13 = r13 + 0x38u;  // (from the original)
    guest::cpu()->r[1] = r1_3;
    guest::cpu()->r[13] = r13;
    return r0_4;
L_6c66d0:;
    *gptr<u32>(r13 + 4u) = u32(0u);
    r3_4 = r13 + 0x20u;  // (from the original)
    r2_4 = r13 + 0x1cu;  // (from the original)
    r1_4 = r13 + 0x18u;  // (from the original)
    r0_5 = r13 + 4u;
    *gptr<u32>(r13 + 0x18u) = u32(0u);  // (from the original)
    *gptr<u32>(r13 + 0x1cu) = u32(0u);  // (from the original)
    *gptr<u32>(r13) = u32(r0);
    *gptr<u32>(r13 + 0x20u) = u32(0u);  // (from the original)
    guest::cpu()->r[13] = r13;
    call_006a69ec(r0_5, r1_4, r2_4, r3_4);
    ea_2 = r13;
    *gptr<u32>(ea_2) = u32(r1);
    ea_3 = r13 + 0x18u;  // (from the original)
    r1_5 = *gptr<u32>(ea_3);
    r2_5 = *gptr<u32>(ea_3 + 4);
    r3_5 = *gptr<u32>(ea_3 + 8);
    r0_6 = *gptr<u32>(r13 + 4u);
    guest::cpu()->r[13] = r13;
    r0_7 = call_006c75e0(r0_6, r1_5, r2_5, r3_5);
    r1_6 = guest::cpu()->r[1];
    r13 = r13 + 0x38u;  // (from the original)
    guest::cpu()->r[1] = r1_6;
    guest::cpu()->r[13] = r13;
    return r0_7;
}

}  // namespace d_006c6640
GUEST_EXPORT(0x006c6640, d_006c6640::f_006c6640);

// f_006c6714: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006c6714 {

inline guest::global<u32, 0x0094eddc> global_0094eddc;  // (from the original)
inline constexpr guest::Function<0x002f74c8, u32(u32, u32, u32, u32)> call_002f74c8;  // (from the original)
inline constexpr guest::Function<0x002f74e0, u32(u32, u32, u32, u32)> call_002f74e0;  // (from the original)
inline constexpr guest::Function<0x002fae84, u32(u32, u32, u32, u32)> call_002fae84;  // (from the original)
inline constexpr guest::Function<0x002fb310, u32(u32, u32, u32, u32)> call_002fb310;  // (from the original)
inline constexpr guest::Function<0x002fb328, u32(u32, u32, u32, u32)> call_002fb328;  // (from the original)
inline constexpr guest::Function<0x002fc934, u32(u32, u32, u32, u32)> call_002fc934;  // (from the original)
inline constexpr guest::Function<0x002fcbb0, u32(u32, u32, u32, u32)> call_002fcbb0;  // (from the original)
inline constexpr guest::Function<0x0030512c, u32(u32, u32, u32, u32)> call_0030512c;  // (from the original)
inline constexpr guest::Function<0x003058c9, u32(u32, u32, u32, u32)> call_003058c8;  // (from the original)
inline constexpr guest::Function<0x0030fbb4, u32(u32, u32, u32, u32)> call_0030fbb4;  // (from the original)
inline constexpr guest::Function<0x00313440, u32(u32, u32, u32, u32)> call_00313440;  // (from the original)
inline constexpr guest::Function<0x005b3ec4, u32(u32, u32, u32, u32)> call_005b3ec4;  // (from the original)
inline constexpr guest::Function<0x005b4358, u32(u32, u32, u32, u32)> call_005b4358;  // (from the original)
inline constexpr guest::Function<0x006c588c, u32(u32, u32, u32, u32)> call_006c588c;  // (from the original)
inline constexpr guest::Function<0x006f9638, u32(u32, u32, u32, u32)> call_006f9638;  // (from the original)
inline constexpr guest::Function<0x006f9c08, u32(u32, u32, u32, u32)> call_006f9c08;  // (from the original)
inline constexpr guest::Function<0x006f9db4, u32(u32, u32, u32, u32)> call_006f9db4;  // (from the original)
inline constexpr guest::Function<0x006fa728, u32(u32, u32, u32, u32)> call_006fa728;  // (from the original)
inline constexpr guest::Function<0x006fb0cc, u32(u32, u32, u32, u32)> call_006fb0cc;  // (from the original)
inline constexpr guest::Function<0x0071f644, u32(u32, u32, u32, u32)> call_0071f644;  // (from the original)
inline constexpr guest::Function<0x007203f0, u32(u32, u32, u32, u32)> call_007203f0;  // (from the original)
inline constexpr guest::Function<0x0075d990, u32(u32, u32, u32, u32)> call_0075d990;  // (from the original)
inline constexpr guest::Function<0x0076ab04, u32(u32, u32, u32, u32)> call_0076ab04;  // (from the original)
inline constexpr guest::Function<0x0076ce3c, u32(u32, u32, u32, u32)> call_0076ce3c;  // (from the original)

u32 f_006c6714(u32 r0) {
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r1_1 = 0;
    u32 r4_1 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r1_2 = 0;
    u32 r0_5 = 0;
    u32 r1_3 = 0;
    u32 r0_6 = 0;
    u32 r1_4 = 0;
    u32 r0_7 = 0;
    u32 r1_5 = 0;
    u32 r0_8 = 0;
    u32 r0_9 = 0;
    u32 r0_10 = 0;
    u32 r1_6 = 0;
    u32 r0_11 = 0;
    u32 r1_7 = 0;
    u32 r0_12 = 0;
    u32 r0_13 = 0;
    u32 r0_14 = 0;
    u32 r0_15 = 0;
    u32 r1_8 = 0;
    u32 r0_16 = 0;
    u32 r0_17 = 0;
    u32 r1_9 = 0;
    u32 r0_18 = 0;
    u32 r1_10 = 0;
    u32 r0_19 = 0;
    u32 r0_20 = 0;
    u32 r1_11 = 0;
    u32 r0_21 = 0;
    u32 r0_22 = 0;
    u32 r1_12 = 0;
    u32 r0_23 = 0;
    u32 r0_24 = 0;
    u32 r0_25 = 0;
    u32 r0_26 = 0;
    u32 r1_13 = 0;
    u32 r0_27 = 0;
    u32 r1_14 = 0;
    u32 r0_28 = 0;
    u32 r1_15 = 0;
    u32 r0_29 = 0;
    u32 r1_16 = 0;
    u32 r5_1 = 0;
    u32 r0_30 = 0;
    u32 r1_17 = 0;
    u32 r0_31 = 0;
    u32 r0_32 = 0;
    u32 r0_33 = 0;
    u32 r1_18 = 0;
    u32 r0_34 = 0;
    u32 r0_35 = 0;
    u32 r1_19 = 0;
    u32 r0_36 = 0;
    u32 r1_20 = 0;
    u32 r0_37 = 0;
    u32 r1_21 = 0;
    u32 r0_38 = 0;
    u32 r1_22 = 0;
    u32 r0_39 = 0;
    u32 r0_40 = 0;
    u32 r0_41 = 0;
    u32 r0_42 = 0;
    u32 r0_43 = 0;
    u32 r1_23 = 0;
    u32 r0_44 = 0;
    u32 r0_45 = 0;
    u32 r0_46 = 0;
    u32 r0_47 = 0;
    u32 r0_48 = 0;
    u32 r1_24 = 0;
    u32 r0_49 = 0;
    u32 r1_25 = 0;
    u32 r0_50 = 0;
    u32 r1_26 = 0;
    u32 r0_51 = 0;
    goto L_6c6714;
L_5ce2d0:;
    if (r0 >= 0xffu) {  // (from the original)
        r0 = 0u;
    }
    r0_1 = *gptr<u32>(0x95d324u + (r0 << 2));  // (from the original)
    guest::cpu()->r[1] = 0x95d324u;  // (from the original)
    guest::cpu()->r[13] = r13;
    return r0_1;
L_6c6714:;
    r13 = r13 - 0x18u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_2 = call_006c588c(r0, 0u, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_1 = guest::cpu()->r[1];
    r4_1 = r0_2;
    if (r0_2 != 0xeu) {  // (from the original)
        goto L_6c69c8;
    }
    guest::cpu()->r[13] = r13;
    r0_3 = call_002f74c8(r0_2, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);
    guest::cpu()->r[13] = r13;
    r0_4 = call_002f74e0(0x40u, r0_3, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    r1_2 = guest::cpu()->r[1];
    if (r0_4 != 0) {
        guest::cpu()->r[13] = r13;
        r0_5 = call_002f74c8(r0_4, r1_2, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1_3 = guest::cpu()->r[1];
        guest::cpu()->r[13] = r13;
        r0_6 = call_00313440(r0_5, r1_3, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1_4 = guest::cpu()->r[1];
        guest::cpu()->r[13] = r13;
        r0_7 = call_002fae84(r0_6, r1_4, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1_5 = guest::cpu()->r[1];
        guest::cpu()->r[13] = r13;
        r0_8 = call_002fb310(r0_7, r1_5, guest::cpu()->r[2], guest::cpu()->r[3]);
        r0_9 = r0_8 + 4u;
        guest::cpu()->r[13] = r13;
        r0_10 = call_003058c8(r0_9, r0_6, guest::cpu()->r[2], guest::cpu()->r[3]);
        if (r0_10 == 0) {
            goto L_6c69c8;
        }
        r1_6 = r0_10 + 0x24a6u;  // (from the original)
        r0_11 = r13;
        guest::cpu()->r[13] = r13;
        call_002fc934(r0_11, r1_6, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1_7 = guest::cpu()->r[1];
        r0_12 = r13;
        guest::cpu()->r[13] = r13;
        r0_13 = call_0076ab04(r0_12, r1_7, guest::cpu()->r[2], guest::cpu()->r[3]);
        r4_1 = r0_13;
        goto L_6c69c8;
    }
    guest::cpu()->r[13] = r13;
    r0_14 = call_002f74c8(r0_4, r1_2, guest::cpu()->r[2], guest::cpu()->r[3]);
    guest::cpu()->r[13] = r13;
    r0_15 = call_005b4358(r0_14, 1u, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_8 = guest::cpu()->r[1];
    if (r0_15 != 0) {
        r0_16 = r13 + 4u;
        guest::cpu()->r[13] = r13;
        r0_17 = call_002fcbb0(r0_16, 0x23ebu, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
        r1_9 = guest::cpu()->r[1];
        guest::cpu()->r[13] = r13;
        r0_18 = call_0076ab04(r0_17, r1_9, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1_10 = guest::cpu()->r[1];
        r4_1 = r0_18;
        r0_19 = r13 + 4u;
        guest::cpu()->r[13] = r13;
        r0_20 = call_005b3ec4(r0_19, r1_10, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1_11 = guest::cpu()->r[1];
        if (r0_20 == 0) {
            goto L_6c69c8;
        }
        guest::cpu()->r[13] = r13;
        r0_21 = call_0075d990(r0_20, r1_11, guest::cpu()->r[2], guest::cpu()->r[3]);
        if (r0_21 == 0) {
            goto L_6c69c8;
        }
        r0_22 = r13;
        guest::cpu()->r[13] = r13;
        call_0071f644(r0_22, r0_21, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1_12 = guest::cpu()->r[1];
        r0_23 = r13;
        guest::cpu()->r[13] = r13;
        r0_24 = call_0076ab04(r0_23, r1_12, guest::cpu()->r[2], guest::cpu()->r[3]);
        r4_1 = r0_24;
        goto L_6c69c8;
    }
    guest::cpu()->r[13] = r13;
    r0_25 = call_002f74c8(r0_15, r1_8, guest::cpu()->r[2], guest::cpu()->r[3]);
    guest::cpu()->r[13] = r13;
    r0_26 = call_002f74e0(0x80u, r0_25, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    r1_13 = guest::cpu()->r[1];
    if (r0_26 != 0) {
        guest::cpu()->r[13] = r13;
        r0_27 = call_002f74c8(r0_26, r1_13, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1_14 = guest::cpu()->r[1];
        guest::cpu()->r[13] = r13;
        r0_28 = call_006f9638(r0_27, r1_14, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1_15 = guest::cpu()->r[1];
        guest::cpu()->r[13] = r13;
        r0_29 = call_002fb328(r0_28, r1_15, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1_16 = guest::cpu()->r[1];
        r5_1 = r0_29 + 0x5d900u;  // (from the original)
        guest::cpu()->r[13] = r13;
        r0_30 = call_006fa728(r0_28, r1_16, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1_17 = guest::cpu()->r[1];
        guest::cpu()->r[13] = r13;
        r0_31 = call_006fb0cc(r0_28, r1_17, guest::cpu()->r[2], guest::cpu()->r[3]);
        guest::cpu()->r[13] = r13;
        r0_32 = call_0030fbb4(r5_1, r0_30, guest::cpu()->r[2], guest::cpu()->r[3]);
        guest::cpu()->r[13] = r13;
        r0_33 = call_0030512c(r0_32, r0_31, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1_18 = guest::cpu()->r[1];
        goto L_6c69b0;
    }
    guest::cpu()->r[13] = r13;
    r0_34 = call_002f74c8(r0_26, r1_13, guest::cpu()->r[2], guest::cpu()->r[3]);
    guest::cpu()->r[13] = r13;
    r0_35 = call_002f74e0(0x2000u, r0_34, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    r1_19 = guest::cpu()->r[1];
    if (r0_35 != 0) {
        guest::cpu()->r[13] = r13;
        r0_36 = call_002f74c8(r0_35, r1_19, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1_20 = guest::cpu()->r[1];
        guest::cpu()->r[13] = r13;
        r0_37 = call_006f9638(r0_36, r1_20, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1_21 = guest::cpu()->r[1];
        guest::cpu()->r[13] = r13;
        r0_38 = call_006f9db4(r0_37, r1_21, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1_22 = guest::cpu()->r[1];
        guest::cpu()->r[13] = r13;
        r0_39 = call_002fb328(r0_38, r1_22, guest::cpu()->r[2], guest::cpu()->r[3]);
        r0_40 = r0_39 + 0x6aeb8u;  // (from the original)
        guest::cpu()->r[13] = r13;
        r0_41 = call_0076ce3c(r0_40, r0_38, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1_18 = guest::cpu()->r[1];
        r0_33 = r0_41 + 2u;
        goto L_6c69b0;
    }
    guest::cpu()->r[13] = r13;
    r0_42 = call_002f74c8(r0_35, r1_19, guest::cpu()->r[2], guest::cpu()->r[3]);
    guest::cpu()->r[13] = r13;
    r0_43 = call_002f74e0(0x100000u, r0_42, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    r1_23 = guest::cpu()->r[1];
    if (r0_43 != 0) {
        r4_1 = 0x13u;  // (from the original)
        r0_44 = *global_0094eddc;
        if (r0_44 == 0) {
            goto L_6c69c8;
        }
        r0_45 = r0_44 + 0x28u;  // (from the original)
        guest::cpu()->r[13] = r13;
        r0_46 = call_0076ab04(r0_45, r1_23, guest::cpu()->r[2], guest::cpu()->r[3]);
        r4_1 = r0_46;
        goto L_6c69c8;
    }
    guest::cpu()->r[13] = r13;
    r0_47 = call_002f74c8(r0_43, r1_23, guest::cpu()->r[2], guest::cpu()->r[3]);
    guest::cpu()->r[13] = r13;
    r0_48 = call_002f74e0(0x4000u, r0_47, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    r1_24 = guest::cpu()->r[1];
    if (r0_48 == 0) {
        goto L_6c69c8;
    }
    guest::cpu()->r[13] = r13;
    r0_49 = call_002f74c8(r0_48, r1_24, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_25 = guest::cpu()->r[1];
    guest::cpu()->r[13] = r13;
    r0_33 = call_006f9c08(r0_49, r1_25, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_18 = guest::cpu()->r[1];
    if (r0_33 == 0) {
        goto L_6c69c8;
    }
L_6c69b0:;
    guest::cpu()->r[13] = r13;
    r0_50 = call_007203f0(r0_33, r1_18, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_26 = guest::cpu()->r[1];
    guest::cpu()->r[13] = r13;
    r0_51 = call_0076ab04(r0_50, r1_26, guest::cpu()->r[2], guest::cpu()->r[3]);
    r4_1 = r0_51;
L_6c69c8:;
    r0 = r4_1;
    r13 = r13 + 0x18u;  // (from the original)
    guest::preempt();
    goto L_5ce2d0;
}

}  // namespace d_006c6714
GUEST_EXPORT(0x006c6714, d_006c6714::f_006c6714);

// f_006c69e4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006c69e4 {

inline constexpr guest::Function<0x006a69ec, u32(u32, u32, u32, u32)> call_006a69ec;  // (from the original)
inline constexpr guest::Function<0x006c6a84, u32(u32, u32, u32, u32)> call_006c6a84;  // (from the original)

u32 f_006c69e4(u32 r0, u32 r1) {
    u32 r13 = guest::cpu()->r[13];
    u32 r3_1 = 0;
    u32 r2_1 = 0;
    u32 r1_1 = 0;
    u32 r0_1 = 0;
    u32 ea_1 = 0;
    u32 ea_2 = 0;
    u32 r0_2 = 0;
    u32 r1_2 = 0;
    u32 r2_2 = 0;
    u32 r3_2 = 0;
    u32 r0_3 = 0;
    u32 r1_3 = 0;
    r13 = r13 - 0x20u;  // (from the original)
    *gptr<u32>(r13 + 4u) = u32(0u);
    *gptr<u32>(r13 + 8u) = u32(0u);
    *gptr<u32>(r13 + 0xcu) = u32(0u);  // (from the original)
    *gptr<u32>(r13) = u32(r0);
    *gptr<u32>(r13 + 0x10u) = u32(0u);  // (from the original)
    r3_1 = r13 + 0x10u;  // (from the original)
    r2_1 = r13 + 0xcu;  // (from the original)
    r1_1 = r13 + 8u;
    r0_1 = r13 + 4u;
    guest::cpu()->r[13] = r13;
    call_006a69ec(r0_1, r1_1, r2_1, r3_1);
    ea_1 = r13;
    *gptr<u32>(ea_1) = u32(r1);
    ea_2 = r13 + 4u;
    r0_2 = *gptr<u32>(ea_2);
    r1_2 = *gptr<u32>(ea_2 + 4);
    r2_2 = *gptr<u32>(ea_2 + 8);
    r3_2 = *gptr<u32>(ea_2 + 0xc);  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_3 = call_006c6a84(r0_2, r1_2, r2_2, r3_2);
    r1_3 = guest::cpu()->r[1];
    r13 = r13 + 0x20u;  // (from the original)
    guest::cpu()->r[1] = r1_3;
    guest::cpu()->r[13] = r13;
    return r0_3;
}

}  // namespace d_006c69e4
GUEST_EXPORT(0x006c69e4, d_006c69e4::f_006c69e4);

// f_006c6a34: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006c6a34 {

inline constexpr guest::Function<0x006a6ec0, u32(u32, u32, u32, u32)> call_006a6ec0;  // (from the original)
inline constexpr guest::Function<0x006c6a84, u32(u32, u32, u32, u32)> call_006c6a84;  // (from the original)

u32 f_006c6a34(u32 r0, u32 r1, u32 r2) {
    u32 r13 = guest::cpu()->r[13];
    u32 r3_1 = 0;
    u32 r2_1 = 0;
    u32 r1_1 = 0;
    u32 r0_1 = 0;
    u32 ea_1 = 0;
    u32 ea_2 = 0;
    u32 r0_2 = 0;
    u32 r1_2 = 0;
    u32 r2_2 = 0;
    u32 r3_2 = 0;
    u32 r0_3 = 0;
    u32 r1_3 = 0;
    r13 = r13 - 0x20u;  // (from the original)
    *gptr<u32>(r13 + 0x14u) = u32(0u);  // (from the original)
    *gptr<u32>(r13) = u32(r0);
    *gptr<u32>(r13 + 4) = u32(r1);
    *gptr<u32>(r13 + 8u) = u32(0u);
    *gptr<u32>(r13 + 0xcu) = u32(0u);  // (from the original)
    *gptr<u32>(r13 + 0x10u) = u32(0u);  // (from the original)
    r3_1 = r13 + 0x14u;  // (from the original)
    r2_1 = r13 + 0x10u;  // (from the original)
    r1_1 = r13 + 0xcu;  // (from the original)
    r0_1 = r13 + 8u;
    guest::cpu()->r[13] = r13;
    call_006a6ec0(r0_1, r1_1, r2_1, r3_1);
    ea_1 = r13;
    *gptr<u32>(ea_1) = u32(r2);
    ea_2 = r13 + 8u;
    r0_2 = *gptr<u32>(ea_2);
    r1_2 = *gptr<u32>(ea_2 + 4);
    r2_2 = *gptr<u32>(ea_2 + 8);
    r3_2 = *gptr<u32>(ea_2 + 0xc);  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_3 = call_006c6a84(r0_2, r1_2, r2_2, r3_2);
    r1_3 = guest::cpu()->r[1];
    r13 = r13 + 0x20u;  // (from the original)
    guest::cpu()->r[1] = r1_3;
    guest::cpu()->r[13] = r13;
    return r0_3;
}

}  // namespace d_006c6a34
GUEST_EXPORT(0x006c6a34, d_006c6a34::f_006c6a34);

// f_006c6a84: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006c6a84 {

inline constexpr guest::Function<0x005cdfe8, u32(u32, u32, u32, u32)> call_005cdfe8;  // (from the original)
inline constexpr guest::Function<0x006c5ad8, u32(u32, u32, u32, u32)> call_006c5ad8;  // (from the original)

u32 f_006c6a84(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r0_2 = 0;
    r13 = r13 - 0x18u;  // (from the original)
    *gptr<u32>(r13) = u32(*gptr<u32>(r13 + 0x18u));  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_1 = call_006c5ad8(r0, r1, r2, r3);
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    r0_2 = r13 + 8u;
    guest::cpu()->r[13] = r13;
    call_005cdfe8(r0_2, r0_1, r2_1, r3_1);
    r2 = u32(*gptr<u8>(r13 + 0xau));  // (from the original)
    r0 = 0x89068fu;  // (from the original)
    r1 = 0u;
    do {
L_6c6ab0:;
        if (u32(*gptr<u8>(r0 + r1)) == r2) {
            r13 = r13 + 0x18u;  // (from the original)
            guest::cpu()->r[1] = r1;
            guest::cpu()->r[13] = r13;
            return 1u;
        }
        if (u32(*gptr<u8>(r0 + r1 + 1u)) == r2) {
            r13 = r13 + 0x18u;  // (from the original)
            guest::cpu()->r[1] = r1;
            guest::cpu()->r[13] = r13;
            return 1u;
        }
        r1 = r1 + 2u;
        guest::preempt();
    } while (r1 < 0x5au);  // (from the original)
    r2 = u32(*gptr<u8>(r13 + 8u));
    r1 = 0u;
    do {
L_6c6ae0:;
        if (u32(*gptr<u8>(r0 + r1)) == r2) {
            r13 = r13 + 0x18u;  // (from the original)
            guest::cpu()->r[1] = r1;
            guest::cpu()->r[13] = r13;
            return 1u;
        }
        if (u32(*gptr<u8>(r0 + r1 + 1u)) == r2) {
            r13 = r13 + 0x18u;  // (from the original)
            guest::cpu()->r[1] = r1;
            guest::cpu()->r[13] = r13;
            return 1u;
        }
        r1 = r1 + 2u;
        guest::preempt();
    } while (r1 < 0x5au);  // (from the original)
    r2 = u32(*gptr<u8>(r13 + 9u));
    r1 = 0u;
    do {
L_6c6b10:;
        if (u32(*gptr<u8>(r0 + r1)) == r2) {
            r13 = r13 + 0x18u;  // (from the original)
            guest::cpu()->r[1] = r1;
            guest::cpu()->r[13] = r13;
            return 1u;
        }
        if (u32(*gptr<u8>(r0 + r1 + 1u)) == r2) {
            r13 = r13 + 0x18u;  // (from the original)
            guest::cpu()->r[1] = r1;
            guest::cpu()->r[13] = r13;
            return 1u;
        }
        r1 = r1 + 2u;
        guest::preempt();
    } while (r1 < 0x5au);  // (from the original)
    r2 = u32(*gptr<u8>(r13 + 0xbu));  // (from the original)
    r1 = 0u;
    do {
L_6c6b40:;
        if (u32(*gptr<u8>(r0 + r1)) == r2) {
            r13 = r13 + 0x18u;  // (from the original)
            guest::cpu()->r[1] = r1;
            guest::cpu()->r[13] = r13;
            return 1u;
        }
        if (u32(*gptr<u8>(r0 + r1 + 1u)) == r2) {
            r13 = r13 + 0x18u;  // (from the original)
            guest::cpu()->r[1] = r1;
            guest::cpu()->r[13] = r13;
            return 1u;
        }
        r1 = r1 + 2u;
        guest::preempt();
    } while (r1 < 0x5au);  // (from the original)
    r13 = r13 + 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return 0u;
}

}  // namespace d_006c6a84
GUEST_EXPORT(0x006c6a84, d_006c6a84::f_006c6a84);

// f_006c7540: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006c7540 {

inline constexpr guest::Function<0x006a69ec, u32(u32, u32, u32, u32)> call_006a69ec;  // (from the original)
inline constexpr guest::Function<0x006c75e0, u32(u32, u32, u32, u32)> call_006c75e0;  // (from the original)

u32 f_006c7540(u32 r0, u32 r1) {
    u32 r13 = guest::cpu()->r[13];
    u32 r3_1 = 0;
    u32 r2_1 = 0;
    u32 r1_1 = 0;
    u32 r0_1 = 0;
    u32 ea_1 = 0;
    u32 ea_2 = 0;
    u32 r0_2 = 0;
    u32 r1_2 = 0;
    u32 r2_2 = 0;
    u32 r3_2 = 0;
    u32 r0_3 = 0;
    u32 r1_3 = 0;
    r13 = r13 - 0x20u;  // (from the original)
    *gptr<u32>(r13 + 4u) = u32(0u);
    *gptr<u32>(r13 + 8u) = u32(0u);
    *gptr<u32>(r13 + 0xcu) = u32(0u);  // (from the original)
    *gptr<u32>(r13) = u32(r0);
    *gptr<u32>(r13 + 0x10u) = u32(0u);  // (from the original)
    r3_1 = r13 + 0x10u;  // (from the original)
    r2_1 = r13 + 0xcu;  // (from the original)
    r1_1 = r13 + 8u;
    r0_1 = r13 + 4u;
    guest::cpu()->r[13] = r13;
    call_006a69ec(r0_1, r1_1, r2_1, r3_1);
    ea_1 = r13;
    *gptr<u32>(ea_1) = u32(r1);
    ea_2 = r13 + 4u;
    r0_2 = *gptr<u32>(ea_2);
    r1_2 = *gptr<u32>(ea_2 + 4);
    r2_2 = *gptr<u32>(ea_2 + 8);
    r3_2 = *gptr<u32>(ea_2 + 0xc);  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_3 = call_006c75e0(r0_2, r1_2, r2_2, r3_2);
    r1_3 = guest::cpu()->r[1];
    r13 = r13 + 0x20u;  // (from the original)
    guest::cpu()->r[1] = r1_3;
    guest::cpu()->r[13] = r13;
    return r0_3;
}

}  // namespace d_006c7540
GUEST_EXPORT(0x006c7540, d_006c7540::f_006c7540);

// f_006c7868: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006c7868 {

inline constexpr guest::Function<0x006a69ec, u32(u32, u32, u32, u32)> call_006a69ec;  // (from the original)
inline constexpr guest::Function<0x006c7908, u32(u32, u32, u32, u32)> call_006c7908;  // (from the original)

u32 f_006c7868(u32 r0, u32 r1) {
    u32 r13 = guest::cpu()->r[13];
    u32 r3_1 = 0;
    u32 r2_1 = 0;
    u32 r1_1 = 0;
    u32 r0_1 = 0;
    u32 ea_1 = 0;
    u32 ea_2 = 0;
    u32 r0_2 = 0;
    u32 r1_2 = 0;
    u32 r2_2 = 0;
    u32 r3_2 = 0;
    u32 r0_3 = 0;
    u32 r1_3 = 0;
    r13 = r13 - 0x20u;  // (from the original)
    *gptr<u32>(r13 + 4u) = u32(0u);
    *gptr<u32>(r13 + 8u) = u32(0u);
    *gptr<u32>(r13 + 0xcu) = u32(0u);  // (from the original)
    *gptr<u32>(r13) = u32(r0);
    *gptr<u32>(r13 + 0x10u) = u32(0u);  // (from the original)
    r3_1 = r13 + 0x10u;  // (from the original)
    r2_1 = r13 + 0xcu;  // (from the original)
    r1_1 = r13 + 8u;
    r0_1 = r13 + 4u;
    guest::cpu()->r[13] = r13;
    call_006a69ec(r0_1, r1_1, r2_1, r3_1);
    ea_1 = r13;
    *gptr<u32>(ea_1) = u32(r1);
    ea_2 = r13 + 4u;
    r0_2 = *gptr<u32>(ea_2);
    r1_2 = *gptr<u32>(ea_2 + 4);
    r2_2 = *gptr<u32>(ea_2 + 8);
    r3_2 = *gptr<u32>(ea_2 + 0xc);  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_3 = call_006c7908(r0_2, r1_2, r2_2, r3_2);
    r1_3 = guest::cpu()->r[1];
    r13 = r13 + 0x20u;  // (from the original)
    guest::cpu()->r[1] = r1_3;
    guest::cpu()->r[13] = r13;
    return r0_3;
}

}  // namespace d_006c7868
GUEST_EXPORT(0x006c7868, d_006c7868::f_006c7868);

// f_006c78b8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006c78b8 {

inline constexpr guest::Function<0x006a6ec0, u32(u32, u32, u32, u32)> call_006a6ec0;  // (from the original)
inline constexpr guest::Function<0x006c7908, u32(u32, u32, u32, u32)> call_006c7908;  // (from the original)

u32 f_006c78b8(u32 r0, u32 r1, u32 r2) {
    u32 r13 = guest::cpu()->r[13];
    u32 r3_1 = 0;
    u32 r2_1 = 0;
    u32 r1_1 = 0;
    u32 r0_1 = 0;
    u32 ea_1 = 0;
    u32 ea_2 = 0;
    u32 r0_2 = 0;
    u32 r1_2 = 0;
    u32 r2_2 = 0;
    u32 r3_2 = 0;
    u32 r0_3 = 0;
    u32 r1_3 = 0;
    r13 = r13 - 0x20u;  // (from the original)
    *gptr<u32>(r13 + 0x14u) = u32(0u);  // (from the original)
    *gptr<u32>(r13) = u32(r0);
    *gptr<u32>(r13 + 4) = u32(r1);
    *gptr<u32>(r13 + 8u) = u32(0u);
    *gptr<u32>(r13 + 0xcu) = u32(0u);  // (from the original)
    *gptr<u32>(r13 + 0x10u) = u32(0u);  // (from the original)
    r3_1 = r13 + 0x14u;  // (from the original)
    r2_1 = r13 + 0x10u;  // (from the original)
    r1_1 = r13 + 0xcu;  // (from the original)
    r0_1 = r13 + 8u;
    guest::cpu()->r[13] = r13;
    call_006a6ec0(r0_1, r1_1, r2_1, r3_1);
    ea_1 = r13;
    *gptr<u32>(ea_1) = u32(r2);
    ea_2 = r13 + 8u;
    r0_2 = *gptr<u32>(ea_2);
    r1_2 = *gptr<u32>(ea_2 + 4);
    r2_2 = *gptr<u32>(ea_2 + 8);
    r3_2 = *gptr<u32>(ea_2 + 0xc);  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_3 = call_006c7908(r0_2, r1_2, r2_2, r3_2);
    r1_3 = guest::cpu()->r[1];
    r13 = r13 + 0x20u;  // (from the original)
    guest::cpu()->r[1] = r1_3;
    guest::cpu()->r[13] = r13;
    return r0_3;
}

}  // namespace d_006c78b8
GUEST_EXPORT(0x006c78b8, d_006c78b8::f_006c78b8);

// f_006c7908: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006c7908 {

inline guest::global<u32, 0x006c79c4> global_006c79c4;  // (from the original)
inline constexpr guest::Function<0x002fe7cc, u32(u32, u32, u32, u32)> call_002fe7cc;  // (from the original)
inline constexpr guest::Function<0x006a96d8, u32(u32, u32, u32, u32)> call_006a96d8;  // (from the original)
inline constexpr guest::Function<0x006c5ad8, u32(u32, u32, u32, u32)> call_006c5ad8;  // (from the original)
inline constexpr guest::Function<0x006c6a84, u32(u32, u32, u32, u32)> call_006c6a84;  // (from the original)
inline constexpr guest::Function<0x006c75e0, u32(u32, u32, u32, u32)> call_006c75e0;  // (from the original)
inline constexpr guest::Function<0x0075291c, u32(u32, u32, u32, u32)> call_0075291c;  // (from the original)

u32 f_006c7908(u32 r0, u32 r1, u32 r2, u32 r3, float S0) {
    u32 r13 = guest::cpu()->r[13];
    u32 r4_1 = 0;
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    float S0_1 = 0;
    u32 zf_1 = 0;
    u32 zf_2 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r1_2 = 0;
    u32 r3_2 = 0;
    float S0_2 = 0;
    float S0_3 = 0;
    u32 ea_1 = 0;
    u32 r3_3 = 0;
    float S0_4 = 0;
    u32 r0_4 = 0;
    u32 r1_3 = 0;
    float S0_5 = 0;
    *gptr<u32>(r13 + 0xffffffe0u) = u32(r3);  // (from the original)
    r13 = r13 - 0x20;  // (from the original)
    r4_1 = *gptr<u32>(r13 + 0x20u);  // (from the original)
    *gptr<u32>(r13) = u32(r4_1);
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    r0_1 = call_006c5ad8(r0, r1, r2, r3);
    r1_1 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    S0_1 = guest::cpu()->s[0];
    zf_1 = r0_1 == 0xadu;  // (from the original)
    if (!zf_1) {
        zf_1 = r0_1 == 0xaeu;  // (from the original)
    }
    if (zf_1) {
        goto L_6c7964;
    }
    zf_2 = r0_1 == 0xafu;  // (from the original)
    if (!zf_2) {
        zf_2 = r0_1 == 0xb0u;  // (from the original)
    }
    if (!zf_2) {
        zf_2 = r0_1 == 0xb1u;  // (from the original)
    }
    if (zf_2) {
        goto L_6c7964;
    }
    *gptr<u32>(r13) = u32(r4_1);
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_1;
    r0_2 = call_006c6a84(r0, r1, r2, r3);
    r1_1 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    S0_1 = guest::cpu()->s[0];
    if (r0_2 == 0) {
        goto L_6c79a8;
    }
L_6c7964:;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_1;
    r0_3 = call_002fe7cc(r4_1, r1_1, r2_1, r3_1);
    r1_2 = guest::cpu()->r[1];
    r3_2 = guest::cpu()->r[3];
    S0_2 = guest::cpu()->s[0];
    if (r0_3 == 0) {
        goto L_6c79a0;
    }
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_2;
    r0_3 = call_0075291c(r0_3, r0, r1, r3_2);
    r1_2 = guest::cpu()->r[1];
    S0_3 = guest::cpu()->s[0];
    if (r0_3 == 0) {
        goto L_6c79a0;
    }
    ea_1 = r13;
    r13 = r13 + 0x20;  // (from the original)
    r3_3 = *gptr<u32>(ea_1);
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_3;
    return call_006a96d8(r0_3, r2, r3, r3_3);
L_6c79a0:;
    S0_4 = std::bit_cast<float>(*global_006c79c4);
    r13 = r13 + 0x20;  // (from the original)
    guest::cpu()->r[1] = r1_2;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_4;
    return r0_3;
L_6c79a8:;
    *gptr<u32>(r13) = u32(r4_1);
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_1;
    r0_4 = call_006c75e0(r0, r1, r2, r3);
    r1_3 = guest::cpu()->r[1];
    S0_5 = guest::cpu()->s[0];
    r13 = r13 + 0x20;  // (from the original)
    guest::cpu()->r[1] = r1_3;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_5;
    return r0_4;
}

}  // namespace d_006c7908
GUEST_EXPORT(0x006c7908, d_006c7908::f_006c7908);

// f_006c7a14: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006c7a14 {

inline constexpr guest::Function<0x002fe7cc, u32(u32, u32, u32, u32)> call_002fe7cc;  // (from the original)
inline constexpr guest::Function<0x006a6ec0, u32(u32, u32, u32, u32)> call_006a6ec0;  // (from the original)
inline constexpr guest::Function<0x0075291c, u32(u32, u32, u32, u32)> call_0075291c;  // (from the original)
inline constexpr guest::Function<0x0075d7fc, u32(u32, u32, u32, u32)> call_0075d7fc;  // (from the original)

u32 f_006c7a14(u32 r0, u32 r1, u32 r2) {
    u32 r13 = guest::cpu()->r[13];
    u32 r3_1 = 0;
    u32 r2_1 = 0;
    u32 r1_1 = 0;
    u32 r0_1 = 0;
    u32 r1_2 = 0;
    u32 r3_2 = 0;
    u32 r2_2 = 0;
    u32 r7_1 = 0;
    u32 r5_1 = 0;
    u32 r6_1 = 0;
    u32 r8_1 = 0;
    u32 r0_2 = 0;
    u32 r1_3 = 0;
    u32 r3_3 = 0;
    u32 r0_3 = 0;
    u32 r3_4 = 0;
    u32 r0_4 = 0;
    u32 r1_4 = 0;
    r13 = r13 - 0x38u;  // (from the original)
    *gptr<u32>(r13 + 0x14u) = u32(0u);  // (from the original)
    *gptr<u32>(r13) = u32(r0);
    *gptr<u32>(r13 + 4) = u32(r1);
    r3_1 = r13 + 0x14u;  // (from the original)
    r2_1 = r13 + 0x10u;  // (from the original)
    r1_1 = r13 + 0xcu;  // (from the original)
    r0_1 = r13 + 8u;
    *gptr<u32>(r13 + 8u) = u32(0u);
    *gptr<u32>(r13 + 0xcu) = u32(0u);  // (from the original)
    *gptr<u32>(r13 + 0x10u) = u32(0u);  // (from the original)
    guest::cpu()->r[13] = r13;
    call_006a6ec0(r0_1, r1_1, r2_1, r3_1);
    r1_2 = guest::cpu()->r[1];
    r3_2 = guest::cpu()->r[3];
    r2_2 = r13 + 8u;
    r7_1 = *gptr<u32>(r13 + 0x14u);  // (from the original)
    r5_1 = *gptr<u32>(r2_2);
    r6_1 = *gptr<u32>(r2_2 + 4);
    r8_1 = *gptr<u32>(r2_2 + 8);
    guest::cpu()->r[13] = r13;
    r0_2 = call_002fe7cc(r2, r1_2, r2_2, r3_2);
    r1_3 = guest::cpu()->r[1];
    r3_3 = guest::cpu()->r[3];
    if (r0_2 == 0) {
        goto L_6c7a90;
    }
    guest::cpu()->r[13] = r13;
    r0_3 = call_0075291c(r0_2, r5_1, r6_1, r3_3);
    r1_3 = guest::cpu()->r[1];
    r3_4 = guest::cpu()->r[3];
    if (r0_3 == 0) {
        goto L_6c7a90;
    }
    guest::cpu()->r[13] = r13;
    r0_4 = call_0075d7fc(r0_3, r8_1, r7_1, r3_4);
    r1_4 = guest::cpu()->r[1];
    r13 = r13 + 0x38u;  // (from the original)
    guest::cpu()->r[1] = r1_4;
    guest::cpu()->r[13] = r13;
    return r0_4;
L_6c7a90:;
    r13 = r13 + 0x38u;  // (from the original)
    guest::cpu()->r[1] = r1_3;
    guest::cpu()->r[13] = r13;
    return 0u;
}

}  // namespace d_006c7a14
GUEST_EXPORT(0x006c7a14, d_006c7a14::f_006c7a14);

// f_006c7a9c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006c7a9c {

inline constexpr guest::Function<0x002fe7cc, u32(u32, u32, u32, u32)> call_002fe7cc;  // (from the original)
inline constexpr guest::Function<0x0075291c, u32(u32, u32, u32, u32)> call_0075291c;  // (from the original)
inline constexpr guest::Function<0x0075d7fc, u32(u32, u32, u32, u32)> call_0075d7fc;  // (from the original)

u32 f_006c7a9c(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r1_1 = 0;
    u32 r3_1 = 0;
    u32 r0_3 = 0;
    u32 r3_2 = 0;
    r13 = r13 - 0x18;  // (from the original)
    r0_1 = *gptr<u32>(r13 + 0x18u);  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_2 = call_002fe7cc(r0_1, r1, r2, r3);
    r1_1 = guest::cpu()->r[1];
    r3_1 = guest::cpu()->r[3];
    if (r0_2 == 0) {
        goto L_6c7ae4;
    }
    guest::cpu()->r[13] = r13;
    r0_3 = call_0075291c(r0_2, r0, r1, r3_1);
    r1_1 = guest::cpu()->r[1];
    r3_2 = guest::cpu()->r[3];
    if (r0_3 == 0) {
        goto L_6c7ae4;
    }
    r13 = r13 + 0x18;  // (from the original)
    guest::cpu()->r[13] = r13;
    return call_0075d7fc(r0_3, r2, r3, r3_2);
L_6c7ae4:;
    r13 = r13 + 0x18;  // (from the original)
    guest::cpu()->r[1] = r1_1;
    guest::cpu()->r[13] = r13;
    return 0u;
}

}  // namespace d_006c7a9c
GUEST_EXPORT(0x006c7a9c, d_006c7a9c::f_006c7a9c);

// f_006c7bd0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006c7bd0 {

inline constexpr guest::Function<0x002fe7cc, u32(u32, u32, u32, u32)> call_002fe7cc;  // (from the original)
inline constexpr guest::Function<0x0052ec20, u32(u32, u32, u32, u32)> call_0052ec20;  // (from the original)
inline constexpr guest::Function<0x0052ed80, u32(u32, u32, u32, u32)> call_0052ed80;  // (from the original)
inline constexpr guest::Function<0x0060d240, u32(u32, u32, u32, u32)> call_0060d240;  // (from the original)
inline constexpr guest::Function<0x0075291c, u32(u32, u32, u32, u32)> call_0075291c;  // (from the original)
inline constexpr guest::Function<0x0075d828, u32(u32, u32, u32, u32)> call_0075d828;  // (from the original)
inline constexpr guest::Function<0x0075d838, u32(u32, u32, u32, u32)> call_0075d838;  // (from the original)
inline constexpr guest::Function<0x0075d848, u32(u32, u32, u32, u32)> call_0075d848;  // (from the original)
inline constexpr guest::Function<0x0075d858, u32(u32, u32, u32, u32)> call_0075d858;  // (from the original)
inline constexpr guest::Function<0x007667a8, u32(u32, u32, u32, u32)> call_007667a8;  // (from the original)

u32 f_006c7bd0(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r0_2 = 0;
    u32 r3_2 = 0;
    u32 r1_2 = 0;
    u32 r2_2 = 0;
    u32 r0_3 = 0;
    u32 r2_3 = 0;
    u32 r3_3 = 0;
    u32 r0_4 = 0;
    u32 r1_3 = 0;
    u32 r2_4 = 0;
    u32 r3_4 = 0;
    u32 r0_5 = 0;
    u32 ea_1 = 0;
    u32 r2_5 = 0;
    u32 r3_5 = 0;
    u32 r1_4 = 0;
    u32 r1_5 = 0;
    u32 r2_6 = 0;
    u32 r3_6 = 0;
    u32 r0_6 = 0;
    u32 r0_7 = 0;
    u32 r1_6 = 0;
    u32 r2_7 = 0;
    u32 r3_7 = 0;
    u32 r0_8 = 0;
    u32 r0_9 = 0;
    u32 r1_7 = 0;
    u32 r2_8 = 0;
    u32 r3_8 = 0;
    u32 r0_10 = 0;
    u32 r0_11 = 0;
    u32 r1_8 = 0;
    u32 r2_9 = 0;
    u32 r3_9 = 0;
    u32 r0_12 = 0;
    u32 r0_13 = 0;
    u32 zf_1 = 0;
    r13 = r13 - 0x30u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_1 = call_002fe7cc(r1, r1, r2, r3);
    r1_1 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    if (r0_1 != 0) {
        r0_2 = r13 + 0x10u;  // (from the original)
        guest::cpu()->r[13] = r13;
        call_0052ed80(r0_2, r0, r2_1, r3_1);
        r3_2 = r13 + 0x10u;  // (from the original)
        r1_2 = *gptr<u32>(r3_2);
        r2_2 = *gptr<u32>(r3_2 + 4);
        guest::cpu()->r[13] = r13;
        r0_3 = call_0075291c(r0_1, r1_2, r2_2, r3_2);
        r1_1 = guest::cpu()->r[1];
        r2_3 = guest::cpu()->r[2];
        r3_3 = guest::cpu()->r[3];
        if (r0_3 != 0) {
            r0_4 = r13 + 0x18u;  // (from the original)
            guest::cpu()->r[13] = r13;
            call_0052ec20(r0_4, r0, r2_3, r3_3);
            r1_3 = guest::cpu()->r[1];
            r2_4 = guest::cpu()->r[2];
            r3_4 = guest::cpu()->r[3];
            r0_5 = r13;
            guest::cpu()->r[13] = r13;
            call_0060d240(r0_5, r1_3, r2_4, r3_4);
            ea_1 = r13 + 0x18u;  // (from the original)
            r2_5 = *gptr<u32>(ea_1);
            r3_5 = *gptr<u32>(ea_1 + 4);
            r1_4 = r13;
            guest::cpu()->r[13] = r13;
            call_007667a8(r0_3, r1_4, r2_5, r3_5);
            r1_5 = guest::cpu()->r[1];
            r2_6 = guest::cpu()->r[2];
            r3_6 = guest::cpu()->r[3];
            r0_6 = r13;
            guest::cpu()->r[13] = r13;
            r0_7 = call_0075d828(r0_6, r1_5, r2_6, r3_6);
            r1_6 = guest::cpu()->r[1];
            r2_7 = guest::cpu()->r[2];
            r3_7 = guest::cpu()->r[3];
            r0_8 = r13;
            guest::cpu()->r[13] = r13;
            r0_9 = call_0075d848(r0_8, r1_6, r2_7, r3_7);
            r1_7 = guest::cpu()->r[1];
            r2_8 = guest::cpu()->r[2];
            r3_8 = guest::cpu()->r[3];
            r0_10 = r13;
            guest::cpu()->r[13] = r13;
            r0_11 = call_0075d838(r0_10, r1_7, r2_8, r3_8);
            r1_8 = guest::cpu()->r[1];
            r2_9 = guest::cpu()->r[2];
            r3_9 = guest::cpu()->r[3];
            r0_12 = r13;
            guest::cpu()->r[13] = r13;
            r0_13 = call_0075d858(r0_12, r1_8, r2_9, r3_9);
            r1_1 = guest::cpu()->r[1];
            zf_1 = r0_7 == r0_9;
            if (zf_1) {
                zf_1 = r0_7 == r0_11;
            }
            if (zf_1) {
                zf_1 = r0_7 == r0_13;
            }
            if (zf_1) {
                r13 = r13 + 0x30u;  // (from the original)
                guest::cpu()->r[1] = r1_1;
                guest::cpu()->r[13] = r13;
                return 1u;
            }
        }
    }
    r13 = r13 + 0x30u;  // (from the original)
    guest::cpu()->r[1] = r1_1;
    guest::cpu()->r[13] = r13;
    return 0u;
}

}  // namespace d_006c7bd0
GUEST_EXPORT(0x006c7bd0, d_006c7bd0::f_006c7bd0);

// f_006c83f0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006c83f0 {

inline constexpr guest::Function<0x002fe7cc, u32(u32, u32, u32, u32)> call_002fe7cc;  // (from the original)
inline constexpr guest::Function<0x006a6ec0, u32(u32, u32, u32, u32)> call_006a6ec0;  // (from the original)
inline constexpr guest::Function<0x0075291c, u32(u32, u32, u32, u32)> call_0075291c;  // (from the original)
inline constexpr guest::Function<0x0075d898, u32(u32, u32, u32, u32)> call_0075d898;  // (from the original)

u32 f_006c83f0(u32 r0, u32 r1, u32 r2) {
    u32 r13 = guest::cpu()->r[13];
    u32 r3_1 = 0;
    u32 r2_1 = 0;
    u32 r1_1 = 0;
    u32 r0_1 = 0;
    u32 r1_2 = 0;
    u32 r3_2 = 0;
    u32 r2_2 = 0;
    u32 r7_1 = 0;
    u32 r5_1 = 0;
    u32 r6_1 = 0;
    u32 r8_1 = 0;
    u32 r0_2 = 0;
    u32 r1_3 = 0;
    u32 r3_3 = 0;
    u32 r0_3 = 0;
    u32 r3_4 = 0;
    u32 r0_4 = 0;
    u32 r1_4 = 0;
    r13 = r13 - 0x38u;  // (from the original)
    *gptr<u32>(r13 + 0x14u) = u32(0u);  // (from the original)
    *gptr<u32>(r13) = u32(r0);
    *gptr<u32>(r13 + 4) = u32(r1);
    r3_1 = r13 + 0x14u;  // (from the original)
    r2_1 = r13 + 0x10u;  // (from the original)
    r1_1 = r13 + 0xcu;  // (from the original)
    r0_1 = r13 + 8u;
    *gptr<u32>(r13 + 8u) = u32(0u);
    *gptr<u32>(r13 + 0xcu) = u32(0u);  // (from the original)
    *gptr<u32>(r13 + 0x10u) = u32(0u);  // (from the original)
    guest::cpu()->r[13] = r13;
    call_006a6ec0(r0_1, r1_1, r2_1, r3_1);
    r1_2 = guest::cpu()->r[1];
    r3_2 = guest::cpu()->r[3];
    r2_2 = r13 + 8u;
    r7_1 = *gptr<u32>(r13 + 0x14u);  // (from the original)
    r5_1 = *gptr<u32>(r2_2);
    r6_1 = *gptr<u32>(r2_2 + 4);
    r8_1 = *gptr<u32>(r2_2 + 8);
    guest::cpu()->r[13] = r13;
    r0_2 = call_002fe7cc(r2, r1_2, r2_2, r3_2);
    r1_3 = guest::cpu()->r[1];
    r3_3 = guest::cpu()->r[3];
    if (r0_2 == 0) {
        goto L_6c846c;
    }
    guest::cpu()->r[13] = r13;
    r0_3 = call_0075291c(r0_2, r5_1, r6_1, r3_3);
    r1_3 = guest::cpu()->r[1];
    r3_4 = guest::cpu()->r[3];
    if (r0_3 == 0) {
        goto L_6c846c;
    }
    guest::cpu()->r[13] = r13;
    r0_4 = call_0075d898(r0_3, r8_1, r7_1, r3_4);
    r1_4 = guest::cpu()->r[1];
    r13 = r13 + 0x38u;  // (from the original)
    guest::cpu()->r[1] = r1_4;
    guest::cpu()->r[13] = r13;
    return r0_4;
L_6c846c:;
    r13 = r13 + 0x38u;  // (from the original)
    guest::cpu()->r[1] = r1_3;
    guest::cpu()->r[13] = r13;
    return 0u;
}

}  // namespace d_006c83f0
GUEST_EXPORT(0x006c83f0, d_006c83f0::f_006c83f0);

// f_006c8590: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006c8590 {

inline constexpr guest::Function<0x005ce13c, u32(u32, u32, u32, u32)> call_005ce13c;  // (from the original)
inline constexpr guest::Function<0x006c588c, u32(u32, u32, u32, u32)> call_006c588c;  // (from the original)

u32 f_006c8590(u32 r0) {
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    guest::cpu()->r[13] -= 8u;
    r0_1 = call_006c588c(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    r0_2 = call_005ce13c(r0_1, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    if (r0_2 == 2u) {
        r0_3 = 1u;
    } else {
        r0_3 = 0u;
    }
    guest::cpu()->r[13] += 8u;
    return r0_3;
}

}  // namespace d_006c8590
GUEST_EXPORT(0x006c8590, d_006c8590::f_006c8590);

// f_006c8760: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006c8760 {

inline constexpr guest::Function<0x005ce13c, u32(u32, u32, u32, u32)> call_005ce13c;  // (from the original)
inline constexpr guest::Function<0x006c588c, u32(u32, u32, u32, u32)> call_006c588c;  // (from the original)

u32 f_006c8760(u32 r0) {
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    guest::cpu()->r[13] -= 8u;
    r0_1 = call_006c588c(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    r0_2 = call_005ce13c(r0_1, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    if (r0_2 != 0) {
        r0_2 = 1u;
    }
    guest::cpu()->r[13] += 8u;
    return r0_2;
}

}  // namespace d_006c8760
GUEST_EXPORT(0x006c8760, d_006c8760::f_006c8760);

// f_006c8778: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006c8778 {

inline constexpr guest::Function<0x003171b4, u32(u32, u32, u32, u32)> call_003171b4;  // (from the original)
inline constexpr guest::Function<0x006c87ac, u32(u32, u32, u32, u32)> call_006c87ac;  // (from the original)

u32 f_006c8778(u32 r0) {
    u32 r13 = guest::cpu()->r[13];
    u32 r1_1 = 0;
    u32 r0_1 = 0;
    u32 r2_1 = 0;
    u32 r0_2 = 0;
    u32 r1_2 = 0;
    u32 r0_3 = 0;
    u32 r1_3 = 0;
    r13 = r13 - 0x10u;  // (from the original)
    *gptr<u32>(r13) = u32(0u);
    *gptr<u32>(r13 + 4u) = u32(0u);
    r1_1 = r13 + 4u;
    r0_1 = r13;
    guest::cpu()->r[13] = r13;
    call_003171b4(r0_1, r1_1, r0, guest::cpu()->r[3]);
    r2_1 = guest::cpu()->r[2];
    r0_2 = *gptr<u32>(r13);
    r1_2 = *gptr<u32>(r13 + 4);
    guest::cpu()->r[13] = r13;
    r0_3 = call_006c87ac(r0_2, r1_2, r2_1, guest::cpu()->r[3]);
    r1_3 = guest::cpu()->r[1];
    r13 = r13 + 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1_3;
    guest::cpu()->r[13] = r13;
    return r0_3;
}

}  // namespace d_006c8778
GUEST_EXPORT(0x006c8778, d_006c8778::f_006c8778);

// f_006c87ac: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006c87ac {

inline guest::global<u32, 0x0014fdc8> global_0014fdc8;  // (from the original)
inline guest::global<u32, 0x00950800> global_00950800;  // (from the original)
inline constexpr guest::Function<0x002f74c8, u32(u32, u32, u32, u32)> call_002f74c8;  // (from the original)
inline constexpr guest::Function<0x002f74e0, u32(u32, u32, u32, u32)> call_002f74e0;  // (from the original)
inline constexpr guest::Function<0x00315788, u32(u32, u32, u32, u32)> call_00315788;  // (from the original)
inline constexpr guest::Function<0x00317eac, u32(u32, u32, u32, u32)> call_00317eac;  // (from the original)
inline constexpr guest::Function<0x006a5e34, u32(u32, u32, u32, u32)> call_006a5e34;  // (from the original)
inline constexpr guest::Function<0x007529d8, u32(u32, u32, u32, u32)> call_007529d8;  // (from the original)

u32 f_006c87ac(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r13 = guest::cpu()->r[13];
    u32 r5_1 = 0;
    u32 r6_1 = 0;
    u32 r0_1 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r0_2 = 0;
    u32 r1_1 = 0;
    u32 r2_2 = 0;
    u32 r3_2 = 0;
    u32 r4_1 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r2_3 = 0;
    u32 r3_3 = 0;
    u32 r0_5 = 0;
    u32 r2_4 = 0;
    u32 r3_4 = 0;
    u32 r0_6 = 0;
    u32 r1_2 = 0;
    u32 r3_5 = 0;
    u32 r0_7 = 0;
    u32 r0_8 = 0;
    u32 r0_9 = 0;
    u32 r0_10 = 0;
    u32 r1_3 = 0;
    goto L_6c87ac;
L_6c87ac:;
    r13 = r13 - 0x20u;  // (from the original)
    r5_1 = r0;
    r6_1 = r1;
    guest::cpu()->r[13] = r13;
    r0_1 = call_002f74c8(r0, r1, r2, r3);
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0_2 = call_002f74e0(0x200u, r0_1, r2_1, r3_1);  // (from the original)
    r1_1 = guest::cpu()->r[1];
    r2_2 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    if (r0_2 == 0) {
        goto L_6c87fc;
    }
    r4_1 = 0u;
    guest::cpu()->r[13] = r13;
    r0_3 = call_00315788(r5_1, r6_1, r4_1, r3_2);
    r1 = guest::cpu()->r[1];
    if (r0_3 == 0xfcu) {  // (from the original)
        r4_1 = 0xffu;  // (from the original)
    }
    r0 = r4_1;
    r13 = r13 + 0x20u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
L_6c87fc:;
    guest::cpu()->r[13] = r13;
    r0_4 = call_002f74c8(r0_2, r1_1, r2_2, r3_2);
    r2_3 = guest::cpu()->r[2];
    r3_3 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0_5 = call_002f74e0(0x10000000u, r0_4, r2_3, r3_3);  // (from the original)
    r1 = guest::cpu()->r[1];
    r2_4 = guest::cpu()->r[2];
    r3_4 = guest::cpu()->r[3];
    if (r0_5 != 0) {
        r0 = *global_00950800;
        if (r0 == 0) {
            r13 = r13 + 0x20u;  // (from the original)
            guest::cpu()->r[1] = r1;
            guest::cpu()->r[13] = r13;
            return r0;
        }
        r13 = r13 + 0x20u;  // (from the original)
        guest::cpu()->r[13] = r13;
        return guest::call_address<u32>(*global_0014fdc8, r0, r5_1, r6_1, r3_4);
    }
    guest::cpu()->r[13] = r13;
    r0_6 = call_006a5e34(r0_5, r1, r2_4, r3_4);
    r1_2 = guest::cpu()->r[1];
    r3_5 = guest::cpu()->r[3];
    if (r0_6 == 0) {
        r13 = r13 + 0x20u;  // (from the original)
        guest::cpu()->r[1] = r1_2;
        guest::cpu()->r[13] = r13;
        return 0u;
    }
    guest::cpu()->r[13] = r13;
    r0_7 = call_007529d8(r0_6, r5_1, r6_1, r3_5);
    r1_2 = guest::cpu()->r[1];
    if (r0_7 == 0) {
        r13 = r13 + 0x20u;  // (from the original)
        guest::cpu()->r[1] = r1_2;
        guest::cpu()->r[13] = r13;
        return 0u;
    }
    r0_8 = *gptr<u32>(r0_6 + 0x28u);  // (from the original)
    if (r0_8 == 0) {
        r13 = r13 + 0x20u;  // (from the original)
        guest::cpu()->r[1] = r1_2;
        guest::cpu()->r[13] = r13;
        return 0u;
    }
    *gptr<u32>(r13) = u32(r0_8);
    *gptr<u32>(r13 + 4) = u32(0x80u);  // (from the original)
    *gptr<u32>(r13 + 8) = u32(0x80u);  // (from the original)
    r0_9 = r13;
    guest::cpu()->r[13] = r13;
    r0_10 = call_00317eac(r0_9, r5_1, r6_1, 0x80u);  // (from the original)
    r1_3 = guest::cpu()->r[1];
    r13 = r13 + 0x20u;  // (from the original)
    guest::cpu()->r[1] = r1_3;
    guest::cpu()->r[13] = r13;
    return r0_10;
}

}  // namespace d_006c87ac
GUEST_EXPORT(0x006c87ac, d_006c87ac::f_006c87ac);

// f_006c8938: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006c8938 {

struct __attribute__((packed)) Object_006c8938_0 {
    u8 unknown_0[0x44];  // (not used here)
    u32 word_44;
};
GUEST_OFFSET(Object_006c8938_0, word_44, 0x44);  // (from the original)

inline constexpr guest::Function<0x004b6d74, u32(u32, u32, u32, u32)> call_004b6d74;  // (from the original)
inline constexpr guest::Function<0x004b6dc8, u32(u32, u32, u32, u32)> call_004b6dc8;  // (from the original)

u32 f_006c8938(gptr<Object_006c8938_0> arg0, u32 r1) {
    u32 r0 = arg0.addr();
    u32 r1_1 = 0;
    u32 r0_1 = 0;
    u32 r1_2 = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r1_1 = arg0->word_44;
    r0_1 = *gptr<u32>(r1_1 + 0xcu);  // (from the original)
    if (r0_1 != 0) {
        call_004b6dc8(r0_1, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1_1 = guest::cpu()->r[1];
        r0_1 = 0u;
        *gptr<u8>(r0 + 0x431u) = u8(r0_1);  // (from the original)
    }
    if (r1 != 0) {
        r1_2 = *gptr<u32>(r0 + 0x44u);  // (from the original)
        call_004b6d74(r1, r1_2, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1_1 = guest::cpu()->r[1];
        r0_1 = 1u;
        *gptr<u8>(r0 + 0x431u) = u8(r0_1);  // (from the original)
    }
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1_1;
    return r0_1;
}

}  // namespace d_006c8938
GUEST_EXPORT(0x006c8938, d_006c8938::f_006c8938);

// f_006c8e30: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006c8e30 {

struct __attribute__((packed)) Object_006c8e30_0 {
    u8 unknown_0[0xc];  // (not used here)
    u32 word_c;
    u32 word_10;
};
GUEST_OFFSET(Object_006c8e30_0, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Object_006c8e30_0, word_10, 0x10);  // (from the original)

inline guest::global<u32, 0x006c8ee8> global_006c8ee8;  // (from the original)
inline guest::global<u32, 0x006c8eec> global_006c8eec;  // (from the original)
inline constexpr guest::Function<0x0081b750, u32(u32, u32, u32, u32)> call_0081b750;  // (from the original)

u32 f_006c8e30(gptr<Object_006c8e30_0> arg0, float S0_unused, float S1, float S2, float S3) {
    u32 r0 = arg0.addr();
    u32 r3 = 0;
    u32 r12 = 0;
    u32 fpsr = guest::cpu()->fpscr;
    float S0 = 0;
    u32 r4_1 = 0;
    u32 r1_1 = 0;
    u32 r1_2 = 0;
    u32 r2_1 = 0;
    u32 r0_1 = 0;
    u32 r1_3 = 0;
    float S0_1 = 0;
    float S1_1 = 0;
    u32 r1_4 = 0;
    u32 fpsr_1 = 0;
    r12 = 0x894fecu;  // (from the original)
    guest::cpu()->r[13] -= 8u;
    r4_1 = arg0->word_c;
    S0 = std::bit_cast<float>(*global_006c8ee8);
    r1_1 = *gptr<u32>(r12 + 0x1cu);  // (from the original)
    r3 = r0 + 0x400u;  // (from the original)
    if (r4_1 != *gptr<u32>(r12 + 0x18u)) {  // (from the original)
        goto L_6c8e88;
    }
    if (r4_1 == 0) {
        if (((arg0->word_10 | r1_1) & 1u) == 0) {
            goto L_6c8e78;
        }
    }
    if (*gptr<u32>(r0 + 0x10u) != r1_1) {  // (from the original)
        goto L_6c8e88;
    }
L_6c8e78:;
    *gptr<u32>(r3 + 0x38u) = u32(std::bit_cast<u32>(S0));  // (from the original)
    r1_2 = *gptr<u32>(r12);
    r2_1 = *gptr<u32>(r12 + 4);
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2;
    guest::cpu()->s[3] = S3;
    r0_1 = call_0081b750(r0, r1_2, r2_1, r3);
    r1_3 = guest::cpu()->r[1];
    S0_1 = guest::cpu()->s[0];
    S1_1 = guest::cpu()->s[1];
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1_3;
    guest::cpu()->s[0] = S0_1;
    guest::cpu()->s[1] = S1_1;
    return r0_1;
L_6c8e88:;
    r1_4 = *gptr<u32>(r12 + 0xcu);  // (from the original)
    if (r4_1 != *gptr<u32>(r12 + 8u)) {
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1_4;
        guest::cpu()->s[0] = S0;
        guest::cpu()->s[1] = S1;
        return r0;
    }
    if (r4_1 == 0) {
        if (((*gptr<u32>(r0 + 0x10u) | r1_4) & 1u) == 0) {  // (from the original)
            goto L_6c8ebc;
        }
    }
    if (*gptr<u32>(r0 + 0x10u) != r1_4) {  // (from the original)
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1_4;
        guest::cpu()->s[0] = S0;
        guest::cpu()->s[1] = S1;
        return r0;
    }
L_6c8ebc:;
    S3 = std::bit_cast<float>(*global_006c8eec);
    S2 = std::bit_cast<float>(*gptr<u32>(r3 + 0xcu)) - S3;  // (from the original)
    S1 = S2 - std::bit_cast<float>(*gptr<u32>(r0 + 0x3c0u));  // (from the original)
    *gptr<u32>(r3 + 0x38u) = u32(std::bit_cast<u32>(S1));  // (from the original)
    fpsr_1 = fpsr & 0xfffffffu | vfp_cmpf(S1, S0);  // (from the original)
    if (!(fpsr_1 >> 0x1e & 1) && fpsr_1 >> 0x1f == (fpsr_1 >> 0x1c & 1)) {  // (from the original)
        S0 = S1;
    }
    guest::preempt();
    goto L_6c8e78;
}

}  // namespace d_006c8e30
GUEST_EXPORT(0x006c8e30, d_006c8e30::f_006c8e30);

// f_006c8ef0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006c8ef0 {

struct __attribute__((packed)) Object_006c8ef0_0 {
    u8 unknown_0[0x44];  // (not used here)
    u32 word_44;
};
GUEST_OFFSET(Object_006c8ef0_0, word_44, 0x44);  // (from the original)

inline guest::global<u8, 0x0095df7f> global_0095df7f;  // (from the original)
inline constexpr guest::Function<0x001323b4, u32(u32, u32, u32, u32)> call_001323b4;  // (from the original)
inline constexpr guest::Function<0x004b6dc8, u32(u32, u32, u32, u32)> call_004b6dc8;  // (from the original)

u32 f_006c8ef0(gptr<Object_006c8ef0_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r1_1 = 0;
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r1_2 = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r1_1 = arg0->word_44;
    r0_1 = *gptr<u32>(r1_1 + 0xcu);  // (from the original)
    if (r0_1 != 0) {
        call_004b6dc8(r0_1, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1_1 = guest::cpu()->r[1];
        *gptr<u8>(r0 + 0x431u) = u8(0u);  // (from the original)
    }
    r0_2 = r0 + 0x24u;  // (from the original)
    call_001323b4(r0_2, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_2 = guest::cpu()->r[1];
    *global_0095df7f = u8(0u);
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1_2;
    return 1u;
}

}  // namespace d_006c8ef0
GUEST_EXPORT(0x006c8ef0, d_006c8ef0::f_006c8ef0);

// f_006c9050: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006c9050 {

struct __attribute__((packed)) Object_006c9050_0 {
    u8 unknown_0[0xc];  // (not used here)
    u32 word_c;
    u32 word_10;
};
GUEST_OFFSET(Object_006c9050_0, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Object_006c9050_0, word_10, 0x10);  // (from the original)

inline guest::global<u32, 0x006c910c> global_006c910c;  // (from the original)
inline guest::global<u32, 0x006c9110> global_006c9110;  // (from the original)
inline constexpr guest::Function<0x0081b750, u32(u32, u32, u32, u32)> call_0081b750;  // (from the original)

u32 f_006c9050(gptr<Object_006c9050_0> arg0, float S0_unused, float S1, float S2, float S3) {
    u32 r0 = arg0.addr();
    u32 r3 = 0;
    u32 r12 = 0;
    u32 r13 = guest::cpu()->r[13];
    u32 fpsr = guest::cpu()->fpscr;
    float S0 = 0;
    u32 r4_1 = 0;
    u32 r1_1 = 0;
    u32 ea_1 = 0;
    u32 r1_2 = 0;
    u32 r2_1 = 0;
    u32 r0_1 = 0;
    u32 r1_3 = 0;
    float S0_1 = 0;
    float S1_1 = 0;
    u32 r1_4 = 0;
    u32 fpsr_1 = 0;
    r12 = 0x894fecu;  // (from the original)
    r13 = r13 - 8;
    r4_1 = arg0->word_c;
    S0 = std::bit_cast<float>(*global_006c910c);
    r1_1 = *gptr<u32>(r12 + 0x14u);  // (from the original)
    r3 = r0 + 0x400u;  // (from the original)
    if (r4_1 != *gptr<u32>(r12 + 0x10u)) {  // (from the original)
        goto L_6c90ac;
    }
    if (r4_1 == 0) {
        if (((arg0->word_10 | r1_1) & 1u) == 0) {
            goto L_6c9098;
        }
    }
    if (*gptr<u32>(r0 + 0x10u) != r1_1) {  // (from the original)
        goto L_6c90ac;
    }
L_6c9098:;
    *gptr<u32>(r3 + 0x38u) = u32(std::bit_cast<u32>(S0));  // (from the original)
    ea_1 = r12 + 8u;
    r1_2 = *gptr<u32>(ea_1);
    r2_1 = *gptr<u32>(ea_1 + 4);
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2;
    guest::cpu()->s[3] = S3;
    r0_1 = call_0081b750(r0, r1_2, r2_1, r3);
    r1_3 = guest::cpu()->r[1];
    S0_1 = guest::cpu()->s[0];
    S1_1 = guest::cpu()->s[1];
    r13 = r13 + 8;
    guest::cpu()->r[1] = r1_3;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_1;
    guest::cpu()->s[1] = S1_1;
    return r0_1;
L_6c90ac:;
    r1_4 = *gptr<u32>(r12 + 4u);
    if (r4_1 != *gptr<u32>(r12)) {
        r13 = r13 + 8;
        guest::cpu()->r[1] = r1_4;
        guest::cpu()->r[13] = r13;
        guest::cpu()->s[0] = S0;
        guest::cpu()->s[1] = S1;
        return r0;
    }
    if (r4_1 == 0) {
        if (((*gptr<u32>(r0 + 0x10u) | r1_4) & 1u) == 0) {  // (from the original)
            goto L_6c90e0;
        }
    }
    if (*gptr<u32>(r0 + 0x10u) != r1_4) {  // (from the original)
        r13 = r13 + 8;
        guest::cpu()->r[1] = r1_4;
        guest::cpu()->r[13] = r13;
        guest::cpu()->s[0] = S0;
        guest::cpu()->s[1] = S1;
        return r0;
    }
L_6c90e0:;
    S3 = std::bit_cast<float>(*global_006c9110);
    S2 = std::bit_cast<float>(*gptr<u32>(r0 + 0x3bcu)) - S3;  // (from the original)
    S1 = S2 - std::bit_cast<float>(*gptr<u32>(r3 + 0x10u));  // (from the original)
    *gptr<u32>(r3 + 0x38u) = u32(std::bit_cast<u32>(S1));  // (from the original)
    fpsr_1 = fpsr & 0xfffffffu | vfp_cmpf(S1, S0);  // (from the original)
    if (!(fpsr_1 >> 0x1e & 1) && fpsr_1 >> 0x1f == (fpsr_1 >> 0x1c & 1)) {  // (from the original)
        S0 = S1;
    }
    guest::preempt();
    goto L_6c9098;
}

}  // namespace d_006c9050
GUEST_EXPORT(0x006c9050, d_006c9050::f_006c9050);

// f_006c91d0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006c91d0 {

inline guest::global<u32, 0x0095261c> global_0095261c;  // (from the original)

u32 f_006c91d0() {
    u32 r0_1 = 0;
    r0_1 = 0x9b3a2cu + ((*global_0095261c & 3u) << 5) + 0x10u;  // (from the original)
    guest::cpu()->r[1] = 0x9b3a2cu;  // (from the original)
    return r0_1;
}

}  // namespace d_006c91d0
GUEST_EXPORT(0x006c91d0, d_006c91d0::f_006c91d0);

// f_006c91f4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006c91f4 {

inline guest::global<u32, 0x0095261c> global_0095261c;  // (from the original)

u32 f_006c91f4(u32 r0) {
    u32 r0_1 = 0;
    r0_1 = r0 & 3u;
    *global_0095261c = u32(r0_1);
    guest::cpu()->r[1] = 0x95261cu;  // (from the original)
    return r0_1;
}

}  // namespace d_006c91f4
GUEST_EXPORT(0x006c91f4, d_006c91f4::f_006c91f4);

// f_006c9218: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006c9218 {

inline guest::global<u16, 0x00952ad8> global_00952ad8;  // (from the original)
inline constexpr guest::Function<0x0011db9c, u32(u32, u32, u32, u32)> call_0011db9c;  // (from the original)

u32 f_006c9218(u32 r0_unused, u32 r1) {
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 res_1 = 0;
    guest::cpu()->r[13] -= 8u;
    r0_1 = call_0011db9c(0x952ad8u, r1, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    r1_1 = guest::cpu()->r[1];
    res_1 = r0_1 & 0x80000000u;  // (from the original)
    if (!(res_1 >> 0x1f)) {  // (from the original)
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1_1;
        return res_1;
    }
    *global_00952ad8 = u16(0u);
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = 0x952ad8u;  // (from the original)
    return 0u;
}

}  // namespace d_006c9218
GUEST_EXPORT(0x006c9218, d_006c9218::f_006c9218);

// f_006c93e0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006c93e0 {

inline constexpr guest::Function<0x006f7e40, u32(u32, u32, u32, u32)> call_006f7e40;  // (from the original)
inline constexpr guest::Function<0x006f7e90, u32(u32, u32, u32, u32)> call_006f7e90;  // (from the original)
inline constexpr guest::Function<0x006f8114, u32(u32, u32, u32, u32)> call_006f8114;  // (from the original)

u32 f_006c93e0(u32 r0, u32 r1, u32 r2_unused, u32 r3) {
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r6_1 = 0;
    u32 r1_1 = 0;
    u32 r0_4 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r0_5 = 0;
    u32 r1_2 = 0;
    u32 r0_6 = 0;
    guest::cpu()->r[13] -= 0x18u;  // (from the original)
    r0_1 = *gptr<u32>(0x9502f8u + 4u);  // (from the original)
    if (r0_1 < 0x14u) {  // (from the original)
        r0_2 = 0x994ebcu + (r0_1 + (r0_1 << 1) << 3);  // (from the original)
        call_006f8114(r0_2, r0, r0, r3);
        r0_3 = *gptr<u32>(0x9502f8u + 4u);  // (from the original)
        r6_1 = 0x994ebcu + 0x1e0u;  // (from the original)
        r1_1 = 0x994ebcu + (r0_3 + (r0_3 << 1) << 3);  // (from the original)
        r0_4 = r6_1 + (r0_3 + (r0_3 << 2) << 2);
        call_006f7e40(r0_4, r1_1, 4u, 8u);
        r2_1 = guest::cpu()->r[2];
        r3_1 = guest::cpu()->r[3];
        r0_5 = *gptr<u32>(0x9502f8u + 4u);  // (from the original)
        r1_2 = r6_1 + (r0_5 + (r0_5 << 2) << 2);
        r0_6 = 0x994ebcu - 0x198u;  // (from the original)
        *gptr<u32>(r1_2 + 0x10u) = u32(r1);  // (from the original)
        call_006f7e90(r0_6, r1_2, r2_1, r3_1);
        r1 = guest::cpu()->r[1];
        r0_1 = *gptr<u32>(0x9502f8u + 4u) + 1u;  // (from the original)
        *gptr<u32>(0x9502f8u + 4u) = u32(r0_1);  // (from the original)
    }
    guest::cpu()->r[13] += 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0_1;
}

}  // namespace d_006c93e0
GUEST_EXPORT(0x006c93e0, d_006c93e0::f_006c93e0);

// f_006c9464: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006c9464 {

inline constexpr guest::Function<0x006f8054, u32(u32, u32, u32, u32)> call_006f8054;  // (from the original)

u32 f_006c9464(u32 r0_unused, u32 r1) {
    guest::cpu()->r[13] -= 8u;
    call_006f8054(0x994d24u, r1, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    *gptr<u32>(0x9502f8u + 4u) = u32(0u);  // (from the original)
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = 0x9502f8u;  // (from the original)
    return 0u;
}

}  // namespace d_006c9464
GUEST_EXPORT(0x006c9464, d_006c9464::f_006c9464);

// f_006c967c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006c967c {

inline guest::global<u8, 0x0095719c> global_0095719c;  // (from the original)

u32 f_006c967c() {
    u32 r0_1 = 0;
    r0_1 = u32(*global_0095719c);
    if (r0_1 != 1u) {
        r0_1 = 0u;
    }
    return r0_1;
}

}  // namespace d_006c967c
GUEST_EXPORT(0x006c967c, d_006c967c::f_006c967c);

// f_006c9898: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006c9898 {

inline guest::global<u8, 0x0095719c> global_0095719c;  // (from the original)

u32 f_006c9898() {
    u32 r0_1 = 0;
    if (u32(*global_0095719c) == 3u) {
        r0_1 = 1u;
    } else {
        r0_1 = 0u;
    }
    return r0_1;
}

}  // namespace d_006c9898
GUEST_EXPORT(0x006c9898, d_006c9898::f_006c9898);

// f_006c98b4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006c98b4 {

inline guest::global<u8, 0x0095719c> global_0095719c;  // (from the original)

u32 f_006c98b4() {
    *global_0095719c = u8(2u);
    *gptr<u8>(0x95719cu + 1u) = u8(0u);  // (from the original)
    guest::cpu()->r[1] = 0u;
    return 0x95719cu;  // (from the original)
}

}  // namespace d_006c98b4
GUEST_EXPORT(0x006c98b4, d_006c98b4::f_006c98b4);

// f_006c9b0c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006c9b0c {

inline guest::global<u8, 0x009571cc> global_009571cc;  // (from the original)
inline constexpr guest::Function<0x00130690, u32(u32, u32, u32, u32)> call_00130690;  // (from the original)

u32 f_006c9b0c() {
    u32 r0_1 = 0;
    guest::cpu()->r[13] -= 8u;
    r0_1 = u32(*gptr<u8>(0x9571ccu + 1u));  // (from the original)
    if (r0_1 != 0) {
        guest::cpu()->r[13] += 8u;
        return r0_1;
    }
    if (u32(*global_009571cc) != 0) {
        call_00130690(0x974b90u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    }
    *global_009571cc = u8(0u);
    guest::cpu()->r[13] += 8u;
    return 0u;
}

}  // namespace d_006c9b0c
GUEST_EXPORT(0x006c9b0c, d_006c9b0c::f_006c9b0c);

// f_006c9e74: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006c9e74 {

struct __attribute__((packed)) Object_006c9e74_0 {
    u8 unknown_0[0xc8];  // (not used here)
    u32 word_c8;
    u32 word_cc;
};
GUEST_OFFSET(Object_006c9e74_0, word_c8, 0xc8);  // (from the original)
GUEST_OFFSET(Object_006c9e74_0, word_cc, 0xcc);  // (from the original)

inline constexpr guest::Function<0x002fbb30, u32(u32, u32, u32, u32)> call_002fbb30;  // (from the original)

u32 f_006c9e74(gptr<Object_006c9e74_0> arg0, u32 r1) {
    u32 r0 = arg0.addr();
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r1_2 = 0;
    u32 r0_1 = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r1_1 = arg0->word_c8;
    r2_1 = arg0->word_cc;
    call_002fbb30(r1, r1_1, r2_1, guest::cpu()->r[3]);
    r1_2 = guest::cpu()->r[1];
    r0_1 = (*gptr<u32>(r0 + 0xccu) & ~3u) + r1;  // (from the original)
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1_2;
    return r0_1;
}

}  // namespace d_006c9e74
GUEST_EXPORT(0x006c9e74, d_006c9e74::f_006c9e74);

// f_006ca128: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006ca128 {

inline constexpr guest::Function<0x0034ac5c, u32(u32, u32, u32, u32)> call_0034ac5c;  // (from the original)

u32 f_006ca128(u32 r0, u32 r1) {
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    r0_1 = r0 + 0x10u;  // (from the original)
    guest::cpu()->r[13] -= 8u;
    r0_2 = call_0034ac5c(r0_1, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r0_3 = r0_2 - 0x10u;  // (from the original)
    *gptr<u32>(r0_3 + 0xb8u) = u32(0u);  // (from the original)
    *gptr<u32>(r0_3 + 0xbcu) = u32(0u);  // (from the original)
    *gptr<u32>(r0_3 + 0xc0u) = u32(0u);  // (from the original)
    *gptr<u32>(r0_3 + 0xc4u) = u32(0u);  // (from the original)
    *gptr<u32>(r0_3 + 0xc8u) = u32(0u);  // (from the original)
    *gptr<u32>(r0_3 + 0xccu) = u32(0u);  // (from the original)
    *gptr<u32>(r0_3 + 0xd0u) = u32(0u);  // (from the original)
    *gptr<u32>(r0_3 + 0xd4u) = u32(0u);  // (from the original)
    *gptr<u32>(r0_3) = u32(0u);
    *gptr<u32>(r0_3 + 8u) = u32(0u);
    *gptr<u32>(r0_3 + 4u) = u32(0u);
    *gptr<u32>(r0_3 + 0xcu) = u32(0u);  // (from the original)
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = 0u;
    return r0_3;
}

}  // namespace d_006ca128
GUEST_EXPORT(0x006ca128, d_006ca128::f_006ca128);

// f_006ca1c0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006ca1c0 {

inline guest::global<u8, 0x009571f4> global_009571f4;  // (from the original)
inline constexpr guest::Function<0x005a3004, u32(u32, u32, u32, u32)> call_005a3004;  // (from the original)
inline constexpr guest::Function<0x005a3018, u32(u32, u32, u32, u32)> call_005a3018;  // (from the original)
inline constexpr guest::Function<0x006c9c94, u32(u32, u32, u32, u32)> call_006c9c94;  // (from the original)
inline constexpr guest::Function<0x006c9ea0, u32(u32, u32, u32, u32)> call_006c9ea0;  // (from the original)

u32 f_006ca1c0(u32 r0) {
    u32 r13 = guest::cpu()->r[13];
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r0_1 = 0;
    u32 r2_2 = 0;
    u32 r3_2 = 0;
    u32 ea_1 = 0;
    u32 r0_2 = 0;
    u32 r1_2 = 0;
    u32 ea_2 = 0;
    u32 r0_3 = 0;
    u32 ea_3 = 0;
    u32 r0_4 = 0;
    u32 r1_3 = 0;
    u32 r3_3 = 0;
    u32 r2_3 = 0;
    u32 ea_4 = 0;
    r13 = r13 - 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_006c9c94(0xab7d0cu, r0, 0x280u, 0x1e0u);  // (from the original)
    r1_1 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    r0_1 = r13 + 0x10u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_005a3018(r0_1, r1_1, r2_1, r3_1);
    r2_2 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    ea_1 = r13 + 0x10u;  // (from the original)
    r0_2 = *gptr<u32>(ea_1);
    r1_2 = *gptr<u32>(ea_1 + 4);
    ea_2 = r13 + 8u;
    *gptr<u32>(ea_2) = u32(r0_2);
    *gptr<u32>(ea_2 + 4) = u32(r1_2);
    r0_3 = r13;
    guest::cpu()->r[13] = r13;
    call_005a3004(r0_3, r1_2, r2_2, r3_2);
    ea_3 = r13;
    r0_4 = *gptr<u32>(ea_3);
    r1_3 = *gptr<u32>(ea_3 + 4);
    r3_3 = r13 + 8u;
    r2_3 = r13 + 0x18u;  // (from the original)
    ea_4 = r13 + 0x18u;  // (from the original)
    *gptr<u32>(ea_4) = u32(r0_4);
    *gptr<u32>(ea_4 + 4) = u32(r1_3);
    guest::cpu()->r[13] = r13;
    call_006c9ea0(0xab7d0cu, r0, r2_3, r3_3);  // (from the original)
    *global_009571f4 = u8(1u);
    r13 = r13 + 0x28u;  // (from the original)
    guest::cpu()->r[1] = 0x9571f4u;  // (from the original)
    guest::cpu()->r[13] = r13;
    return 1u;
}

}  // namespace d_006ca1c0
GUEST_EXPORT(0x006ca1c0, d_006ca1c0::f_006ca1c0);

// f_006ca230: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006ca230 {


u32 f_006ca230() {
    u32 r0 = 0;
    u32 r1_1 = 0;
    goto L_6ca230;
L_6ca110:;
    if (*gptr<u32>(r0 + 0xb8u) == 0) {  // (from the original)
        r1_1 = 1u;
    } else {
        r1_1 = 0u;
    }
    *gptr<u32>(r0 + 0xb8u) = u32(r1_1);  // (from the original)
    guest::cpu()->r[1] = r1_1;
    return r0;
L_6ca230:;
    r0 = 0xab7d0cu;  // (from the original)
    guest::preempt();
    goto L_6ca110;
}

}  // namespace d_006ca230
GUEST_EXPORT(0x006ca230, d_006ca230::f_006ca230);

// f_006ca23c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006ca23c {


u32 f_006ca23c() {
    u32 r0 = 0;
    u32 r1_1 = 0;
    u32 r0_1 = 0;
    goto L_6ca23c;
L_6c9e5c:;
    if (*gptr<u32>(r0 + 0xb8u) == 0) {  // (from the original)
        r1_1 = 1u;
    } else {
        r1_1 = 0u;
    }
    r0_1 = *gptr<u32>(r0 + (r1_1 << 2));
    guest::cpu()->r[1] = r1_1;
    return r0_1;
L_6ca23c:;
    r0 = 0xab7d0cu;  // (from the original)
    guest::preempt();
    goto L_6c9e5c;
}

}  // namespace d_006ca23c
GUEST_EXPORT(0x006ca23c, d_006ca23c::f_006ca23c);

// f_006cac84: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006cac84 {


u32 f_006cac84(u32 r0) {
    u32 r1 = 0;
    u32 r2 = 0;
    r2 = 0x88e4e4u;  // (from the original)
    r1 = 0u;
    do {
L_6cac8c:;
        if (u32(*gptr<u8>(r2 + r1)) == r0) {
            guest::cpu()->r[1] = r1;
            return 1u;
        }
        if (!(u32(*gptr<u8>(r2 + r1 + 1u)) != r0)) {
            guest::cpu()->r[1] = r1;
            return 1u;
        }
        r1 = r1 + 2u;
        guest::preempt();
    } while (r1 < 8u);
    guest::cpu()->r[1] = r1;
    return 0u;
}

}  // namespace d_006cac84
GUEST_EXPORT(0x006cac84, d_006cac84::f_006cac84);

// f_006cad04: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006cad04 {

struct __attribute__((packed)) Object_006cad04_1 {
    u8 unknown_0[0x88e4d4];  // (not used here)
    u8 byte_88e4d4;
};
GUEST_OFFSET(Object_006cad04_1, byte_88e4d4, 0x88e4d4);  // (from the original)


u32 f_006cad04(u32 r0, gptr<Object_006cad04_1> arg1) {
    u32 r1_1 = 0;
    u32 r0_1 = 0;
    r1_1 = u32(arg1->byte_88e4d4);
    if (r1_1 == r0) {
        r0_1 = 1u;
    } else {
        r0_1 = 0u;
    }
    guest::cpu()->r[1] = r1_1;
    return r0_1;
}

}  // namespace d_006cad04
GUEST_EXPORT(0x006cad04, d_006cad04::f_006cad04);

// f_006caed0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006caed0 {


u32 f_006caed0(u32 r0, u32 r1) {
    u32 r0_1 = 0;
    r0_1 = uxth(r1 + (r0 << 8));
    return r0_1;
}

}  // namespace d_006caed0
GUEST_EXPORT(0x006caed0, d_006caed0::f_006caed0);

// f_006caf18: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006caf18 {

inline constexpr guest::Function<0x005c98a8, u32(u32, u32, u32, u32)> call_005c98a8;  // (from the original)

u32 f_006caf18(u32 r0) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r5 = r0 >> 0x12;  // (from the original)
    r4 = 0u;
    do {
L_6caf28:;
        r0_1 = r4 & 0xffu;  // (from the original)
        r0_2 = call_005c98a8(r0_1, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
        if (!(r0_2 != r5)) {
            guest::cpu()->r[13] += 0x10u;  // (from the original)
            return 1u;
        }
        r4 = r4 + 1u;
        guest::preempt();
    } while (r4 < 0xfcu);  // (from the original)
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    return 0u;
}

}  // namespace d_006caf18
GUEST_EXPORT(0x006caf18, d_006caf18::f_006caf18);

// f_006cb790: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006cb790 {

inline constexpr guest::Function<0x005ca27c, u32(u32, u32, u32, u32)> call_005ca27c;  // (from the original)

u32 f_006cb790(u32 r0, u32 r1) {
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r0_2 = 0;
    u32 r1_2 = 0;
    u32 r0_3 = 0;
    guest::cpu()->r[13] -= 8u;
    if (r0 >= 0xfcu) {  // (from the original)
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        return 4u;
    }
    r0_1 = call_005ca27c(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_1 = guest::cpu()->r[1];
    if (r0_1 != 0xfu) {  // (from the original)
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1_1;
        return 4u;
    }
    r0_2 = r0 - 0x90u;  // (from the original)
    r1_2 = r0_2 + (u32(s32(r0_2) >> 0x1f) >> 0x1e) & ~3u;  // (from the original)
    r0_3 = r0_2 - r1_2 & 0xffu;  // (from the original)
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1_2;
    return r0_3;
}

}  // namespace d_006cb790
GUEST_EXPORT(0x006cb790, d_006cb790::f_006cb790);

// f_006cb7d0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006cb7d0 {

inline constexpr guest::Function<0x0052f144, u32(u32, u32, u32, u32)> call_0052f144;  // (from the original)
inline constexpr guest::Function<0x0052f200, u32(u32, u32, u32, u32)> call_0052f200;  // (from the original)
inline constexpr guest::Function<0x005ca234, u32(u32, u32, u32, u32)> call_005ca234;  // (from the original)
inline constexpr guest::Function<0x006a5e34, u32(u32, u32, u32, u32)> call_006a5e34;  // (from the original)
inline constexpr guest::Function<0x006fb604, u32(u32, u32, u32, u32)> call_006fb604;  // (from the original)
inline constexpr guest::Function<0x007481ec, u32(u32, u32, u32, u32)> call_007481ec;  // (from the original)
inline constexpr guest::Function<0x0074824c, u32(u32, u32, u32, u32)> call_0074824c;  // (from the original)
inline constexpr guest::Function<0x00748284, u32(u32, u32, u32, u32)> call_00748284;  // (from the original)

u32 f_006cb7d0(u32 r0, u32 r1, u32 r2) {
    u32 r7 = guest::cpu()->r[7];
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r0_2 = 0;
    u32 r2_2 = 0;
    u32 ea_1 = 0;
    u32 ea_2 = 0;
    u32 r1_2 = 0;
    u32 ea_3 = 0;
    u32 r2_3 = 0;
    u32 r1_3 = 0;
    u32 ea_4 = 0;
    u32 r2_4 = 0;
    u32 r1_4 = 0;
    u32 r0_3 = 0;
    u32 r2_5 = 0;
    u32 r1_5 = 0;
    u32 r0_4 = 0;
    u32 r2_6 = 0;
    u32 r1_6 = 0;
    u32 r0_5 = 0;
    u32 r2_7 = 0;
    u32 r1_7 = 0;
    u32 r0_6 = 0;
    u32 r0_7 = 0;
    u32 r4_1 = 0;
    u32 r0_8 = 0;
    u32 r1_8 = 0;
    u32 r2_8 = 0;
    u32 r0_9 = 0;
    u32 r2_9 = 0;
    u32 r1_9 = 0;
    u32 r0_10 = 0;
    u32 r0_11 = 0;
    r13 = r13 - 0x58u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_1 = call_006a5e34(r0, r1, r2, guest::cpu()->r[3]);
    r1_1 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    r7 = r0_1;
    if (r0_1 == 0) {
        r13 = r13 + 0x58u;  // (from the original)
        guest::cpu()->r[1] = r1_1;
        guest::cpu()->r[13] = r13;
        return r0_1;
    }
    guest::cpu()->r[13] = r13;
    r0_2 = call_005ca234(r2, r1_1, r2_1, guest::cpu()->r[3]);
    r2_2 = u32(s32(s8(*gptr<u8>(r0_2 + 1u)))) + r1;
    ea_1 = r13 + 0x30u;  // (from the original)
    *gptr<u32>(ea_1) = u32(u32(s32(s8(*gptr<u8>(r0_2)))) + r0);
    *gptr<u32>(ea_1 + 4) = u32(r2_2);
    ea_2 = r0_2 + 3u;
    r1_2 = u32(s32(s8(*gptr<u8>(ea_2))));
    ea_3 = r0_2 + 2u;
    r2_3 = r1_2 + r1;
    r1_3 = u32(s32(s8(*gptr<u8>(ea_3)))) + r0;
    ea_4 = r13 + 0x38u;  // (from the original)
    *gptr<u32>(ea_4) = u32(r1_3);
    *gptr<u32>(ea_4 + 4) = u32(r2_3);
    r2_4 = r13 + 0x38u;  // (from the original)
    r1_4 = r13 + 0x30u;  // (from the original)
    r0_3 = r13 + 0x10u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_0052f200(r0_3, r1_4, r2_4, guest::cpu()->r[3]);
    r2_5 = guest::cpu()->r[2];
    r1_5 = r13 + 0x10u;  // (from the original)
    r0_4 = r13 + 0x20u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_0074824c(r0_4, r1_5, r2_5, guest::cpu()->r[3]);
    r2_6 = guest::cpu()->r[2];
    r1_6 = r13 + 0x10u;  // (from the original)
    r0_5 = r13;
    guest::cpu()->r[13] = r13;
    call_00748284(r0_5, r1_6, r2_6, guest::cpu()->r[3]);
    r2_7 = guest::cpu()->r[2];
    r1_7 = r13 + 0x20u;  // (from the original)
    r0_6 = r13;
    guest::cpu()->r[13] = r13;
    r0_7 = call_007481ec(r0_6, r1_7, r2_7, guest::cpu()->r[3]);
    r1_1 = guest::cpu()->r[1];
    if (r0_7 == 0) {
        goto L_6cb8b0;
    }
    do {
L_6cb868:;
        r4_1 = *gptr<u32>(r13 + 0xcu);  // (from the original)
        r0_8 = *gptr<u32>(r13 + 8u);
        guest::cpu()->r[13] = r13;
        call_006fb604(r0_8, r4_1, r7, guest::cpu()->r[3]);
        r1_8 = guest::cpu()->r[1];
        r2_8 = guest::cpu()->r[2];
        r0_9 = r13;
        guest::cpu()->r[13] = r13;
        call_0052f144(r0_9, r1_8, r2_8, guest::cpu()->r[3]);
        r2_9 = guest::cpu()->r[2];
        r1_9 = r13 + 0x20u;  // (from the original)
        r0_10 = r13;
        guest::cpu()->r[13] = r13;
        r0_11 = call_007481ec(r0_10, r1_9, r2_9, guest::cpu()->r[3]);
        r1_1 = guest::cpu()->r[1];
        guest::preempt();
    } while (r0_11 != 0);
L_6cb8b0:;
    r0_1 = r13 + 0x30u;  // (from the original)
    r13 = r13 + 0x58u;  // (from the original)
    guest::cpu()->r[1] = r1_1;
    guest::cpu()->r[13] = r13;
    return r0_1;
}

}  // namespace d_006cb7d0
GUEST_EXPORT(0x006cb7d0, d_006cb7d0::f_006cb7d0);

// f_006cba30: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006cba30 {

inline constexpr guest::Function<0x00314a04, u32(u32, u32, u32, u32)> call_00314a04;  // (from the original)
inline constexpr guest::Function<0x00314a1c, u32(u32, u32, u32, u32)> call_00314a1c;  // (from the original)
inline constexpr guest::Function<0x00314a9c, u32(u32, u32, u32, u32)> call_00314a9c;  // (from the original)
inline constexpr guest::Function<0x00314b04, u32(u32, u32, u32, u32)> call_00314b04;  // (from the original)
inline constexpr guest::Function<0x00314b58, u32(u32, u32, u32, u32)> call_00314b58;  // (from the original)

u32 f_006cba30(u32 r0_unused, u32 r1) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r1_1 = 0;
    u32 r0_4 = 0;
    u32 r0_5 = 0;
    u32 r0_6 = 0;
    u32 r1_2 = 0;
    u32 r0_7 = 0;
    u32 r0_8 = 0;
    r13 = r13 - 0x48u;  // (from the original)
    r6 = 0xfcu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_1 = call_00314a04(0u, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r8 = 0x88e4dcu;  // (from the original)
    r7 = r0_1;
    r5 = 0u;
L_6cba50:;
    r4 = u32(*gptr<u8>(r8 + r5));
    r0_2 = r13 + 0x18u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_00314a1c(r0_2, r7, guest::cpu()->r[2], guest::cpu()->r[3]);
    r0_3 = r13;
    guest::cpu()->r[13] = r13;
    call_00314a9c(r0_3, r7, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_1 = r13 + 0x18u;  // (from the original)
    r0_4 = r13;
    guest::cpu()->r[13] = r13;
    r0_5 = call_00314b04(r0_4, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0_5 == 0) {
        goto L_6cbad8;
    }
    do {
L_6cba84:;
        r0_6 = r13;
        if (!(r4 != u32(*gptr<u8>(r13 + 0x10u)))) {  // (from the original)
            r6 = u32(*gptr<u8>(r8 + r5));
            goto L_6cbaf8;
        }
        guest::cpu()->r[13] = r13;
        call_00314b58(r0_6, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1_2 = r13 + 0x18u;  // (from the original)
        r0_7 = r13;
        guest::cpu()->r[13] = r13;
        r0_8 = call_00314b04(r0_7, r1_2, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        guest::preempt();
    } while (r0_8 != 0);
L_6cbad8:;
    r5 = r5 + 1u;
    if (r5 < 4u) {
        guest::preempt();
        goto L_6cba50;
    }
L_6cbaf8:;
    r13 = r13 + 0x48u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r6;
}

}  // namespace d_006cba30
GUEST_EXPORT(0x006cba30, d_006cba30::f_006cba30);

// f_006cbb08: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006cbb08 {

inline constexpr guest::Function<0x002be920, u32(u32, u32, u32, u32)> call_002be920;  // (from the original)
inline constexpr guest::Function<0x002bedd8, u32(u32, u32, u32, u32)> call_002bedd8;  // (from the original)
inline constexpr guest::Function<0x005ca6f8, u32(u32, u32, u32, u32)> call_005ca6f8;  // (from the original)

u32 f_006cbb08(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r5_1 = 0;
    u32 r4_1 = 0;
    u32 r0_1 = 0;
    u32 r3_1 = 0;
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 zf_1 = 0;
    u32 cf_1 = 0;
    u32 zf_2 = 0;
    u32 cf_2 = 0;
    u32 r0_2 = 0;
    u32 r2_2 = 0;
    u32 r3_2 = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r5_1 = r0 - 0x12u;  // (from the original)
    r4_1 = r0;
    if (r5_1 > 0x2fu) {  // (from the original)
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        guest::cpu()->r[1] = r1;
        return 0u;
    }
    r0_1 = call_005ca6f8(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r3_1 = guest::cpu()->r[3];
    if (r0_1 == 0) {
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        guest::cpu()->r[1] = r1;
        return 0u;
    }
    r1_1 = r4_1 - 0x22u;  // (from the original)
    r2_1 = r4_1 - 0x32u;  // (from the original)
    if (r5_1 <= 0xfu) {  // (from the original)
        r3_1 = 0u;
        goto L_6cbb54;
    }
    if (r1_1 <= 0xfu) {  // (from the original)
        r3_1 = 1u;
        goto L_6cbb54;
    }
    zf_1 = r2_1 == 0xfu;  // (from the original)
    cf_1 = r2_1 >= 0xfu;  // (from the original)
    if (!cf_1 || zf_1) {
        r3_1 = 2u;
    }
    if (cf_1 && !zf_1) {
        r3_1 = 3u;
    }
L_6cbb54:;
    if (r5_1 <= 0xfu) {  // (from the original)
        r4_1 = r4_1 - 0x12u;  // (from the original)
        goto L_6cbb78;
    }
    if (r1_1 <= 0xfu) {  // (from the original)
        r4_1 = r4_1 - 0x22u;  // (from the original)
        goto L_6cbb78;
    }
    zf_2 = r2_1 == 0xfu;  // (from the original)
    cf_2 = r2_1 >= 0xfu;  // (from the original)
    if (!cf_2 || zf_2) {
        r4_1 = r4_1 - 0x32u;  // (from the original)
    }
    if (cf_2 && !zf_2) {
        r4_1 = 3u;
    }
L_6cbb78:;
    r0_2 = call_002bedd8(r0_1, r3_1, r2_1, r3_1);
    r2_2 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    return call_002be920(r0_2, r4_1, r2_2, r3_2);
}

}  // namespace d_006cbb08
GUEST_EXPORT(0x006cbb08, d_006cbb08::f_006cbb08);

// f_006cbbe4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006cbbe4 {

inline constexpr guest::Function<0x00314a04, u32(u32, u32, u32, u32)> call_00314a04;  // (from the original)
inline constexpr guest::Function<0x00314a1c, u32(u32, u32, u32, u32)> call_00314a1c;  // (from the original)
inline constexpr guest::Function<0x00314a9c, u32(u32, u32, u32, u32)> call_00314a9c;  // (from the original)
inline constexpr guest::Function<0x00314b04, u32(u32, u32, u32, u32)> call_00314b04;  // (from the original)
inline constexpr guest::Function<0x00314b58, u32(u32, u32, u32, u32)> call_00314b58;  // (from the original)

u32 f_006cbbe4(u32 r0_unused, u32 r1) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r1_1 = 0;
    u32 r0_4 = 0;
    u32 r0_5 = 0;
    u32 r0_6 = 0;
    u32 r1_2 = 0;
    u32 r0_7 = 0;
    u32 r0_8 = 0;
    r13 = r13 - 0x48u;  // (from the original)
    r6 = 0xfcu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_1 = call_00314a04(0u, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r8 = 0x88e4d8u;  // (from the original)
    r7 = r0_1;
    r5 = 0u;
L_6cbc04:;
    r4 = u32(*gptr<u8>(r8 + r5));
    r0_2 = r13 + 0x18u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_00314a1c(r0_2, r7, guest::cpu()->r[2], guest::cpu()->r[3]);
    r0_3 = r13;
    guest::cpu()->r[13] = r13;
    call_00314a9c(r0_3, r7, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_1 = r13 + 0x18u;  // (from the original)
    r0_4 = r13;
    guest::cpu()->r[13] = r13;
    r0_5 = call_00314b04(r0_4, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0_5 == 0) {
        goto L_6cbc8c;
    }
    do {
L_6cbc38:;
        r0_6 = r13;
        if (!(r4 != u32(*gptr<u8>(r13 + 0x10u)))) {  // (from the original)
            r6 = u32(*gptr<u8>(r8 + r5));
            goto L_6cbcac;
        }
        guest::cpu()->r[13] = r13;
        call_00314b58(r0_6, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1_2 = r13 + 0x18u;  // (from the original)
        r0_7 = r13;
        guest::cpu()->r[13] = r13;
        r0_8 = call_00314b04(r0_7, r1_2, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        guest::preempt();
    } while (r0_8 != 0);
L_6cbc8c:;
    r5 = r5 + 1u;
    if (r5 < 4u) {
        guest::preempt();
        goto L_6cbc04;
    }
L_6cbcac:;
    r13 = r13 + 0x48u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r6;
}

}  // namespace d_006cbbe4
GUEST_EXPORT(0x006cbbe4, d_006cbbe4::f_006cbbe4);

// f_006cbcf8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006cbcf8 {

inline constexpr guest::Function<0x003026cc, u32(u32, u32, u32, u32)> call_003026cc;  // (from the original)
inline constexpr guest::Function<0x003026e8, u32(u32, u32, u32, u32)> call_003026e8;  // (from the original)
inline constexpr guest::Function<0x0030ce60, u32(u32, u32, u32, u32)> call_0030ce60;  // (from the original)
inline constexpr guest::Function<0x00314a04, u32(u32, u32, u32, u32)> call_00314a04;  // (from the original)
inline constexpr guest::Function<0x00314a1c, u32(u32, u32, u32, u32)> call_00314a1c;  // (from the original)
inline constexpr guest::Function<0x00314a9c, u32(u32, u32, u32, u32)> call_00314a9c;  // (from the original)
inline constexpr guest::Function<0x00314b04, u32(u32, u32, u32, u32)> call_00314b04;  // (from the original)
inline constexpr guest::Function<0x00314b58, u32(u32, u32, u32, u32)> call_00314b58;  // (from the original)
inline constexpr guest::Function<0x00314bc4, u32(u32, u32, u32, u32)> call_00314bc4;  // (from the original)
inline constexpr guest::Function<0x005ca27c, u32(u32, u32, u32, u32)> call_005ca27c;  // (from the original)
inline constexpr guest::Function<0x005ca5c0, u32(u32, u32, u32, u32)> call_005ca5c0;  // (from the original)
inline constexpr guest::Function<0x0071831c, u32(u32, u32, u32, u32)> call_0071831c;  // (from the original)
inline constexpr guest::Function<0x00718340, u32(u32, u32, u32, u32)> call_00718340;  // (from the original)
inline constexpr guest::Function<0x00718378, u32(u32, u32, u32, u32)> call_00718378;  // (from the original)

u32 f_006cbcf8(u32 r0, u32 r1) {
    u32 r4 = guest::cpu()->r[4];
    u32 r6 = guest::cpu()->r[6];
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r1_1 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r1_2 = 0;
    u32 r0_5 = 0;
    u32 r0_6 = 0;
    u32 r0_7 = 0;
    u32 r0_8 = 0;
    u32 r1_3 = 0;
    u32 r0_9 = 0;
    u32 r0_10 = 0;
    u32 r1_4 = 0;
    u32 r0_11 = 0;
    u32 r0_12 = 0;
    u32 r0_13 = 0;
    u32 r1_5 = 0;
    u32 r0_14 = 0;
    u32 r0_15 = 0;
    u32 r0_16 = 0;
    u32 r0_17 = 0;
    u32 r0_18 = 0;
    u32 r1_6 = 0;
    u32 r0_19 = 0;
    u32 r0_20 = 0;
    u32 r0_21 = 0;
    u32 r0_22 = 0;
    u32 r0_23 = 0;
    r13 = r13 - 0x40u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_1 = call_00718378(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0_1 != 0) {
        r13 = r13 + 0x40u;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return 0u;
    }
    guest::cpu()->r[13] = r13;
    r0_2 = call_0030ce60(r0_1, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_1 = guest::cpu()->r[1];
    r6 = r0_2;
    guest::cpu()->r[13] = r13;
    r0_3 = call_00314bc4(r0_2, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0_3 == 0) {
        goto L_6cbd78;
    }
    guest::cpu()->r[13] = r13;
    r0_4 = call_003026cc(r6, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_2 = guest::cpu()->r[1];
    guest::cpu()->r[13] = r13;
    r0_5 = call_003026e8(r0, r1_2, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0_4 != r0_5) {
        goto L_6cbd78;
    }
    guest::cpu()->r[13] = r13;
    r0_6 = call_0071831c(r6, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0_6 != u32(*gptr<u8>(r0 + 2u))) {
        goto L_6cbd78;
    }
    guest::cpu()->r[13] = r13;
    r0_7 = call_00718340(r6, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0_7 == u32(*gptr<u8>(r0 + 3u))) {
        r13 = r13 + 0x40u;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return 0u;
    }
L_6cbd78:;
    guest::cpu()->r[13] = r13;
    r0_8 = call_003026e8(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_3 = guest::cpu()->r[1];
    if (r0_8 < 0xfcu) {  // (from the original)
        guest::cpu()->r[13] = r13;
        r0_9 = call_005ca27c(r0_8, r1_3, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1_3 = guest::cpu()->r[1];
        if (r0_9 == 0xfu) {  // (from the original)
            goto L_6cbdb0;
        }
    }
    guest::cpu()->r[13] = r13;
    r0_10 = call_003026e8(r0, r1_3, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_4 = guest::cpu()->r[1];
    r13 = r13 + 0x40u;  // (from the original)
    guest::cpu()->r[13] = r13;
    return call_005ca5c0(r0_10, r1_4, guest::cpu()->r[2], guest::cpu()->r[3]);
L_6cbdb0:;
    guest::cpu()->r[13] = r13;
    r0_11 = call_00314a04(0u, r1_3, guest::cpu()->r[2], guest::cpu()->r[3]);
    r4 = 0u;
    r0_12 = r13 + 0x18u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_00314a1c(r0_12, r0_11, guest::cpu()->r[2], guest::cpu()->r[3]);
    r0_13 = r13;
    guest::cpu()->r[13] = r13;
    call_00314a9c(r0_13, r0_11, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_5 = r13 + 0x18u;  // (from the original)
    r0_14 = r13;
    guest::cpu()->r[13] = r13;
    r0_15 = call_00314b04(r0_14, r1_5, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0_15 == 0) {
        goto L_6cbe30;
    }
    do {
L_6cbdf0:;
        r0_16 = u32(*gptr<u8>(r13 + 0x10u));  // (from the original)
        if (!(r0_16 >= 0xfcu)) {  // (from the original)
            guest::cpu()->r[13] = r13;
            r0_17 = call_005ca27c(r0_16, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
            r1 = guest::cpu()->r[1];
            if (r0_17 == 0xfu) {  // (from the original)
                r4 = r4 + 1u;
            }
        }
        r0_18 = r13;
        guest::cpu()->r[13] = r13;
        call_00314b58(r0_18, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1_6 = r13 + 0x18u;  // (from the original)
        r0_19 = r13;
        guest::cpu()->r[13] = r13;
        r0_20 = call_00314b04(r0_19, r1_6, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        guest::preempt();
    } while (r0_20 != 0);
L_6cbe30:;
    if (r4 < 2u) {
        r13 = r13 + 0x40u;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return 0u;
    }
    if (r4 >= 3u) {
        r13 = r13 + 0x40u;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return 1u;
    }
    guest::cpu()->r[13] = r13;
    r0_21 = call_00314bc4(r6, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0_21 == 0) {
        r13 = r13 + 0x40u;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return 1u;
    }
    guest::cpu()->r[13] = r13;
    r0_22 = call_003026cc(r6, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0_22 >= 0xfcu) {  // (from the original)
        r13 = r13 + 0x40u;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return 1u;
    }
    guest::cpu()->r[13] = r13;
    r0_23 = call_005ca27c(r0_22, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0_23 == 0xfu) {  // (from the original)
        r13 = r13 + 0x40u;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return 0u;
    }
    r13 = r13 + 0x40u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return 1u;
}

}  // namespace d_006cbcf8
GUEST_EXPORT(0x006cbcf8, d_006cbcf8::f_006cbcf8);

// f_006cbea8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006cbea8 {


u32 f_006cbea8(u32 r0) {
    u32 r1_1 = 0;
    u32 r1_2 = 0;
    r1_1 = r0 - 0x12u;  // (from the original)
    if (r1_1 > 0x2fu) {  // (from the original)
        guest::cpu()->r[1] = r1_1;
        return 3u;
    }
    if (r1_1 <= 0xfu) {  // (from the original)
        guest::cpu()->r[1] = r1_1;
        return 0u;
    }
    r1_2 = r0 - 0x22u;  // (from the original)
    if (r1_2 <= 0xfu) {  // (from the original)
        guest::cpu()->r[1] = r1_2;
        return 1u;
    }
    if (r0 - 0x32u <= 0xfu) {  // (from the original)
        guest::cpu()->r[1] = r1_2;
        return 2u;
    }
    guest::cpu()->r[1] = r1_2;
    return 3u;
}

}  // namespace d_006cbea8
GUEST_EXPORT(0x006cbea8, d_006cbea8::f_006cbea8);

// f_006cbee8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006cbee8 {


u32 f_006cbee8(u32 r0) {
    u32 r1_1 = 0;
    u32 r0_1 = 0;
    u32 r1_2 = 0;
    u32 r0_2 = 0;
    u32 r1_3 = 0;
    u32 r0_3 = 0;
    r1_1 = r0 - 0x12u;  // (from the original)
    if (r1_1 > 0x2fu) {  // (from the original)
        guest::cpu()->r[1] = r1_1;
        return 3u;
    }
    if (r1_1 <= 0xfu) {  // (from the original)
        r0_1 = r0 - 0x12u;  // (from the original)
        guest::cpu()->r[1] = r1_1;
        return r0_1;
    }
    r1_2 = r0 - 0x22u;  // (from the original)
    if (r1_2 <= 0xfu) {  // (from the original)
        r0_2 = r0 - 0x22u;  // (from the original)
        guest::cpu()->r[1] = r1_2;
        return r0_2;
    }
    r1_3 = r0 - 0x32u;  // (from the original)
    if (r1_3 <= 0xfu) {  // (from the original)
        r0_3 = r0 - 0x32u;  // (from the original)
        guest::cpu()->r[1] = r1_3;
        return r0_3;
    }
    guest::cpu()->r[1] = r1_3;
    return 3u;
}

}  // namespace d_006cbee8
GUEST_EXPORT(0x006cbee8, d_006cbee8::f_006cbee8);

// f_006cbfec: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006cbfec {

inline guest::global<u32, 0x0014fdd0> global_0014fdd0;  // (from the original)
inline guest::global<u32, 0x006cc02c> global_006cc02c;  // (from the original)
inline guest::global<u8, 0x009506b0> global_009506b0;  // (from the original)
inline guest::global<u32, 0x009506b4> global_009506b4;  // (from the original)

u32 f_006cbfec() {
    float S0_1 = 0;
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    goto L_6cbfec;
L_6cbfec:;
    S0_1 = std::bit_cast<float>(*global_006cc02c);
    r0_1 = u32(*global_009506b0);
    if (r0_1 != 0xffu) {  // (from the original)
        guest::cpu()->s[0] = S0_1;
        return r0_1;
    }
    r0_2 = *global_009506b4;
    if (r0_2 == 0) {
        guest::cpu()->s[0] = S0_1;
        return r0_2;
    }
    r0_3 = *gptr<u32>(r0_2 + 0x6b94u);  // (from the original)
    if (r0_3 == 0) {
        guest::cpu()->s[0] = S0_1;
        return r0_3;
    }
    guest::cpu()->s[0] = S0_1;
    return guest::call_address<u32>(*global_0014fdd0, r0_3, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_006cbfec
GUEST_EXPORT(0x006cbfec, d_006cbfec::f_006cbfec);

// f_006cc038: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006cc038 {

inline constexpr guest::Function<0x001b1184, u32(u32, u32, u32, u32)> call_001b1184;  // (from the original)
inline constexpr guest::Function<0x0023fc84, u32(u32, u32, u32, u32)> call_0023fc84;  // (from the original)
inline constexpr guest::Function<0x002fe7cc, u32(u32, u32, u32, u32)> call_002fe7cc;  // (from the original)
inline constexpr guest::Function<0x003026cc, u32(u32, u32, u32, u32)> call_003026cc;  // (from the original)
inline constexpr guest::Function<0x0030459c, u32(u32, u32, u32, u32)> call_0030459c;  // (from the original)
inline constexpr guest::Function<0x0030ce60, u32(u32, u32, u32, u32)> call_0030ce60;  // (from the original)
inline constexpr guest::Function<0x00314bc4, u32(u32, u32, u32, u32)> call_00314bc4;  // (from the original)
inline constexpr guest::Function<0x0052f0c0, u32(u32, u32, u32, u32)> call_0052f0c0;  // (from the original)
inline constexpr guest::Function<0x0052f144, u32(u32, u32, u32, u32)> call_0052f144;  // (from the original)
inline constexpr guest::Function<0x0052f200, u32(u32, u32, u32, u32)> call_0052f200;  // (from the original)
inline constexpr guest::Function<0x005ca234, u32(u32, u32, u32, u32)> call_005ca234;  // (from the original)
inline constexpr guest::Function<0x005ca4b4, u32(u32, u32, u32, u32)> call_005ca4b4;  // (from the original)
inline constexpr guest::Function<0x005ca5c0, u32(u32, u32, u32, u32)> call_005ca5c0;  // (from the original)
inline constexpr guest::Function<0x0060d20c, u32(u32, u32, u32, u32)> call_0060d20c;  // (from the original)
inline constexpr guest::Function<0x006a5e34, u32(u32, u32, u32, u32)> call_006a5e34;  // (from the original)
inline constexpr guest::Function<0x006dd3a4, u32(u32, u32, u32, u32)> call_006dd3a4;  // (from the original)
inline constexpr guest::Function<0x0071831c, u32(u32, u32, u32, u32)> call_0071831c;  // (from the original)
inline constexpr guest::Function<0x00718340, u32(u32, u32, u32, u32)> call_00718340;  // (from the original)
inline constexpr guest::Function<0x00748164, u32(u32, u32, u32, u32)> call_00748164;  // (from the original)
inline constexpr guest::Function<0x007481ec, u32(u32, u32, u32, u32)> call_007481ec;  // (from the original)
inline constexpr guest::Function<0x0074824c, u32(u32, u32, u32, u32)> call_0074824c;  // (from the original)
inline constexpr guest::Function<0x00748284, u32(u32, u32, u32, u32)> call_00748284;  // (from the original)

u32 f_006cc038(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = guest::cpu()->r[4];
    u32 r7 = guest::cpu()->r[7];
    u32 r9 = guest::cpu()->r[9];
    u32 r10 = guest::cpu()->r[10];
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r0_2 = 0;
    u32 r3_2 = 0;
    u32 r2_2 = 0;
    u32 r1_2 = 0;
    u32 ea_1 = 0;
    u32 ea_2 = 0;
    u32 r1_3 = 0;
    u32 ea_3 = 0;
    u32 r2_3 = 0;
    u32 r1_4 = 0;
    u32 ea_4 = 0;
    u32 r2_4 = 0;
    u32 r1_5 = 0;
    u32 r0_3 = 0;
    u32 r3_3 = 0;
    u32 r9_1 = 0;
    u32 r0_4 = 0;
    u32 r2_5 = 0;
    u32 zf_1 = 0;
    u32 zf_2 = 0;
    u32 r0_5 = 0;
    u32 r2_6 = 0;
    u32 r3_4 = 0;
    u32 r0_6 = 0;
    u32 r0_7 = 0;
    u32 r2_7 = 0;
    u32 r3_5 = 0;
    u32 r0_8 = 0;
    u32 r2_8 = 0;
    u32 r3_6 = 0;
    u32 r1_6 = 0;
    u32 r0_9 = 0;
    u32 r0_10 = 0;
    u32 r5_1 = 0;
    u32 r1_7 = 0;
    u32 r2_9 = 0;
    u32 r3_7 = 0;
    u32 r0_11 = 0;
    u32 r3_8 = 0;
    u32 r0_12 = 0;
    u32 r2_10 = 0;
    u32 r2_11 = 0;
    u32 r1_8 = 0;
    u32 r0_13 = 0;
    u32 r1_9 = 0;
    u32 r2_12 = 0;
    u32 r0_14 = 0;
    u32 r5_2 = 0;
    u32 r1_10 = 0;
    u32 r6_1 = 0;
    u32 r8_1 = 0;
    u32 r0_15 = 0;
    u32 r0_16 = 0;
    u32 r0_17 = 0;
    u32 r1_11 = 0;
    u32 r2_13 = 0;
    u32 r3_9 = 0;
    u32 r0_18 = 0;
    u32 r1_12 = 0;
    u32 r0_19 = 0;
    u32 r1_13 = 0;
    u32 r0_20 = 0;
    u32 r1_14 = 0;
    u32 r0_21 = 0;
    u32 r1_15 = 0;
    u32 r0_22 = 0;
    u32 r0_23 = 0;
    u32 r2_14 = 0;
    u32 r3_10 = 0;
    u32 r1_16 = 0;
    u32 r0_24 = 0;
    u32 r0_25 = 0;
    u32 r0_26 = 0;
    r13 = r13 - 0xb8u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_1 = call_006a5e34(r0, r1, r2, r3);
    r1_1 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    if (r0_1 == 0) {
        goto L_6cc2f4;
    }
    guest::cpu()->r[13] = r13;
    r0_2 = call_005ca234(r2, r1_1, r2_1, r3_1);
    r3_2 = guest::cpu()->r[3];
    r2_2 = u32(s32(s8(*gptr<u8>(r0_2 + 1u)))) + r1;
    r1_2 = u32(s32(s8(*gptr<u8>(r0_2)))) + r0;
    ea_1 = r13 + 0x60u;  // (from the original)
    *gptr<u32>(ea_1) = u32(r1_2);
    *gptr<u32>(ea_1 + 4) = u32(r2_2);
    ea_2 = r0_2 + 3u;
    r1_3 = u32(s32(s8(*gptr<u8>(ea_2))));
    ea_3 = r0_2 + 2u;
    r2_3 = r1_3 + r1;
    r1_4 = u32(s32(s8(*gptr<u8>(ea_3)))) + r0;
    ea_4 = r13 + 0x48u;  // (from the original)
    *gptr<u32>(ea_4) = u32(r1_4);
    *gptr<u32>(ea_4 + 4) = u32(r2_3);
    r2_4 = r13 + 0x48u;  // (from the original)
    r1_5 = r13 + 0x60u;  // (from the original)
    r0_3 = r13 + 0x38u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_0052f200(r0_3, r1_5, r2_4, r3_2);
    r3_3 = guest::cpu()->r[3];
    r7 = r13 + 0x50u;  // (from the original)
    r9_1 = r13 + 0x38u;  // (from the original)
    r0_4 = r13 + 0x68u;  // (from the original)
    r2_5 = r1 - 7u;
    *gptr<u32>(r0_4) = u32(r0 - 7u);
    *gptr<u32>(r0_4 + 4) = u32(r2_5);
    zf_1 = r2 == 0;
    if (!zf_1) {
        zf_1 = r2 == 1u;
    }
    r4 = r0_4;
    *gptr<u32>(r0_4 + 8u) = u32(0u);
    if (!zf_1) {
        zf_2 = r2 == 2u;
        if (!zf_2) {
            zf_2 = r2 == 3u;
        }
        if (!zf_2) {
            goto L_6cc100;
        }
    }
    guest::cpu()->r[13] = r13;
    r0_5 = call_0030459c(r0_4, 0u, r2_5, r3_3);
    r2_6 = guest::cpu()->r[2];
    r3_4 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0_6 = call_001b1184(r0_5, r2, r2_6, r3_4);
    r2_5 = guest::cpu()->r[2];
    r3_3 = guest::cpu()->r[3];
    *gptr<u32>(r4 + 8u) = u32(r0_6);
L_6cc100:;
    r0_7 = r13 + 0x78u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_0074824c(r0_7, r9_1, r2_5, r3_3);
    r2_7 = guest::cpu()->r[2];
    r3_5 = guest::cpu()->r[3];
    r0_8 = r13 + 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_00748284(r0_8, r9_1, r2_7, r3_5);
    r2_8 = guest::cpu()->r[2];
    r3_6 = guest::cpu()->r[3];
    r1_6 = r13 + 0x78u;  // (from the original)
    r0_9 = r13 + 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_10 = call_007481ec(r0_9, r1_6, r2_8, r3_6);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0_10 == 0) {
        goto L_6cc294;
    } else {
        r9 = 0x9506b0u;  // (from the original)
        r10 = 0x9506b4u;  // (from the original)
    }
L_6cc134:;
    r5_1 = r13 + 0x30u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_002fe7cc(1u, r1, r2, r3);
    r1_7 = guest::cpu()->r[1];
    r2_9 = guest::cpu()->r[2];
    r3_7 = guest::cpu()->r[3];
    if (*gptr<u32>(r4 + 8u) == 0) {
        goto L_6cc274;
    }
    r0_11 = r13 + 8u;
    guest::cpu()->r[13] = r13;
    call_00748164(r0_11, r5_1, r4, r3_7);
    r3_8 = guest::cpu()->r[3];
    r0_12 = *gptr<u32>(r13 + 0xcu);  // (from the original)
    r2_10 = *gptr<u32>(r13 + 8u);
    r2_11 = r2_10 + (r2_10 << 2);
    r1_8 = *gptr<u32>(r4 + 8u) + ((r0_12 + (r0_12 << 2) << 5) + (r2_11 << 1));
    r0_13 = r13 + 0x88u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_0060d20c(r0_13, r1_8, r2_11, r3_8);
    r1_7 = guest::cpu()->r[1];
    r2_9 = guest::cpu()->r[2];
    r3_7 = guest::cpu()->r[3];
    if (u32(*gptr<u8>(r13 + 0x90u)) == 0) {  // (from the original)
        goto L_6cc260;
    }
    r1_9 = *gptr<u32>(r5_1);
    r2_12 = *gptr<u32>(r5_1 + 4);
    r0_14 = r13 + 0x18u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_0023fc84(r0_14, r1_9, r2_12, 1u);
    r1_7 = guest::cpu()->r[1];
    r2_9 = guest::cpu()->r[2];
    r3_7 = guest::cpu()->r[3];
    r5_2 = u32(*gptr<u8>(r13 + 0x20u));  // (from the original)
    if (r5_2 >= 0xfcu) {  // (from the original)
        goto L_6cc260;
    }
    r1_10 = r13 + 0x18u;  // (from the original)
    r6_1 = *gptr<u32>(r1_10);
    r8_1 = *gptr<u32>(r1_10 + 4);
    guest::cpu()->r[13] = r13;
    r0_15 = call_005ca4b4(r5_2, r1_10, r2_9, r3_7);
    r1_7 = guest::cpu()->r[1];
    r2_9 = guest::cpu()->r[2];
    r3_7 = guest::cpu()->r[3];
    if (r0_15 == 0) {
        goto L_6cc260;
    }
    guest::cpu()->r[13] = r13;
    r0_16 = call_005ca5c0(r5_2, r1_7, r2_9, r3_7);
    r1_7 = guest::cpu()->r[1];
    r2_9 = guest::cpu()->r[2];
    r3_7 = guest::cpu()->r[3];
    if (r0_16 == 0) {
        goto L_6cc260;
    }
    guest::cpu()->r[13] = r13;
    r0_17 = call_0030ce60(r0_16, r1_7, r2_9, r3_7);
    r1_11 = guest::cpu()->r[1];
    r2_13 = guest::cpu()->r[2];
    r3_9 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0_18 = call_00314bc4(r0_17, r1_11, r2_13, r3_9);
    r1_12 = guest::cpu()->r[1];
    r2_9 = guest::cpu()->r[2];
    r3_7 = guest::cpu()->r[3];
    if (r0_18 == 0) {
        goto L_6cc248;
    }
    guest::cpu()->r[13] = r13;
    r0_19 = call_003026cc(r0_17, r1_12, r2_9, r3_7);
    r1_13 = guest::cpu()->r[1];
    r2_9 = guest::cpu()->r[2];
    r3_7 = guest::cpu()->r[3];
    if (r0_19 != r5_2) {
        goto L_6cc248;
    }
    guest::cpu()->r[13] = r13;
    r0_20 = call_0071831c(r0_17, r1_13, r2_9, r3_7);
    r1_14 = guest::cpu()->r[1];
    r2_9 = guest::cpu()->r[2];
    r3_7 = guest::cpu()->r[3];
    if (r0_20 != r6_1) {
        goto L_6cc248;
    }
    guest::cpu()->r[13] = r13;
    r0_21 = call_00718340(r0_17, r1_14, r2_9, r3_7);
    r1_7 = guest::cpu()->r[1];
    r2_9 = guest::cpu()->r[2];
    r3_7 = guest::cpu()->r[3];
    if (r0_21 == r8_1) {
        goto L_6cc260;
    }
L_6cc248:;
    r1_15 = *gptr<u32>(r13 + 0x24u);  // (from the original)
    if (u32(*gptr<u8>(r9)) == 0xffu) {  // (from the original)
        r0_22 = *gptr<u32>(r10);
    } else {
        r0_22 = 0u;
    }
    guest::cpu()->r[13] = r13;
    call_006dd3a4(r0_22, r1_15, r2_9, r3_7);
    r1_7 = guest::cpu()->r[1];
    r2_9 = guest::cpu()->r[2];
    r3_7 = guest::cpu()->r[3];
L_6cc260:;
L_6cc274:;
    r0_23 = r13 + 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_0052f144(r0_23, r1_7, r2_9, r3_7);
    r2_14 = guest::cpu()->r[2];
    r3_10 = guest::cpu()->r[3];
    r1_16 = r13 + 0x78u;  // (from the original)
    r0_24 = r13 + 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_25 = call_007481ec(r0_24, r1_16, r2_14, r3_10);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0_25 != 0) {
        guest::preempt();
        goto L_6cc134;
    }
L_6cc294:;
    guest::cpu()->r[13] = r13;
    r0_26 = call_0052f0c0(r7, r4, r2, r3);
    r1_1 = *gptr<u32>(r4 + 8u);
    *gptr<u32>(r0_26 + 8u) = u32(r1_1);
    r0_1 = r13 + 0x60u;  // (from the original)
L_6cc2f4:;
    r13 = r13 + 0xb8u;  // (from the original)
    guest::cpu()->r[1] = r1_1;
    guest::cpu()->r[13] = r13;
    return r0_1;
}

}  // namespace d_006cc038
GUEST_EXPORT(0x006cc038, d_006cc038::f_006cc038);

// f_006cc304: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006cc304 {

inline constexpr guest::Function<0x003026cc, u32(u32, u32, u32, u32)> call_003026cc;  // (from the original)
inline constexpr guest::Function<0x0030ce60, u32(u32, u32, u32, u32)> call_0030ce60;  // (from the original)
inline constexpr guest::Function<0x00314bc4, u32(u32, u32, u32, u32)> call_00314bc4;  // (from the original)
inline constexpr guest::Function<0x005ca4b4, u32(u32, u32, u32, u32)> call_005ca4b4;  // (from the original)
inline constexpr guest::Function<0x005ca5c0, u32(u32, u32, u32, u32)> call_005ca5c0;  // (from the original)
inline constexpr guest::Function<0x0071831c, u32(u32, u32, u32, u32)> call_0071831c;  // (from the original)
inline constexpr guest::Function<0x00718340, u32(u32, u32, u32, u32)> call_00718340;  // (from the original)

u32 f_006cc304(u32 r0, u32 r1, u32 r2) {
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r0_2 = 0;
    u32 r1_2 = 0;
    u32 r2_2 = 0;
    u32 r0_3 = 0;
    u32 r1_3 = 0;
    u32 r2_3 = 0;
    u32 r0_4 = 0;
    u32 r1_4 = 0;
    u32 r2_4 = 0;
    u32 r0_5 = 0;
    u32 r1_5 = 0;
    u32 r2_5 = 0;
    u32 r0_6 = 0;
    u32 r1_6 = 0;
    u32 r2_6 = 0;
    u32 r0_7 = 0;
    u32 r1_7 = 0;
    guest::cpu()->r[13] -= 0x18u;  // (from the original)
    r0_1 = call_005ca4b4(r2, r1, r2, guest::cpu()->r[3]);
    r1_1 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    if (r0_1 == 0) {
        goto L_6cc380;
    }
    r0_2 = call_005ca5c0(r2, r1_1, r2_1, guest::cpu()->r[3]);
    r1_2 = guest::cpu()->r[1];
    r2_2 = guest::cpu()->r[2];
    if (r0_2 == 0) {
        goto L_6cc380;
    }
    r0_3 = call_0030ce60(r0_2, r1_2, r2_2, guest::cpu()->r[3]);
    r1_3 = guest::cpu()->r[1];
    r2_3 = guest::cpu()->r[2];
    r0_4 = call_00314bc4(r0_3, r1_3, r2_3, guest::cpu()->r[3]);
    r1_4 = guest::cpu()->r[1];
    r2_4 = guest::cpu()->r[2];
    if (r0_4 == 0) {
        goto L_6cc378;
    }
    r0_5 = call_003026cc(r0_3, r1_4, r2_4, guest::cpu()->r[3]);
    r1_5 = guest::cpu()->r[1];
    r2_5 = guest::cpu()->r[2];
    if (r0_5 != r2) {
        goto L_6cc378;
    }
    r0_6 = call_0071831c(r0_3, r1_5, r2_5, guest::cpu()->r[3]);
    r1_6 = guest::cpu()->r[1];
    r2_6 = guest::cpu()->r[2];
    if (r0_6 != r0) {
        goto L_6cc378;
    }
    r0_7 = call_00718340(r0_3, r1_6, r2_6, guest::cpu()->r[3]);
    r1_7 = guest::cpu()->r[1];
    if (r0_7 == r1) {
        goto L_6cc380;
    }
L_6cc378:;
    guest::cpu()->r[13] += 0x18u;  // (from the original)
    return 1u;
L_6cc380:;
    guest::cpu()->r[13] += 0x18u;  // (from the original)
    return 0u;
}

}  // namespace d_006cc304
GUEST_EXPORT(0x006cc304, d_006cc304::f_006cc304);

// f_006cc388: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006cc388 {

inline constexpr guest::Function<0x001b1184, u32(u32, u32, u32, u32)> call_001b1184;  // (from the original)
inline constexpr guest::Function<0x0023fc84, u32(u32, u32, u32, u32)> call_0023fc84;  // (from the original)
inline constexpr guest::Function<0x002fe7cc, u32(u32, u32, u32, u32)> call_002fe7cc;  // (from the original)
inline constexpr guest::Function<0x003026cc, u32(u32, u32, u32, u32)> call_003026cc;  // (from the original)
inline constexpr guest::Function<0x0030459c, u32(u32, u32, u32, u32)> call_0030459c;  // (from the original)
inline constexpr guest::Function<0x0030ce60, u32(u32, u32, u32, u32)> call_0030ce60;  // (from the original)
inline constexpr guest::Function<0x00314bc4, u32(u32, u32, u32, u32)> call_00314bc4;  // (from the original)
inline constexpr guest::Function<0x0052f0c0, u32(u32, u32, u32, u32)> call_0052f0c0;  // (from the original)
inline constexpr guest::Function<0x0052f144, u32(u32, u32, u32, u32)> call_0052f144;  // (from the original)
inline constexpr guest::Function<0x0052f200, u32(u32, u32, u32, u32)> call_0052f200;  // (from the original)
inline constexpr guest::Function<0x005ca234, u32(u32, u32, u32, u32)> call_005ca234;  // (from the original)
inline constexpr guest::Function<0x005ca4b4, u32(u32, u32, u32, u32)> call_005ca4b4;  // (from the original)
inline constexpr guest::Function<0x005ca5c0, u32(u32, u32, u32, u32)> call_005ca5c0;  // (from the original)
inline constexpr guest::Function<0x0060d20c, u32(u32, u32, u32, u32)> call_0060d20c;  // (from the original)
inline constexpr guest::Function<0x006a5e34, u32(u32, u32, u32, u32)> call_006a5e34;  // (from the original)
inline constexpr guest::Function<0x006dd470, u32(u32, u32, u32, u32)> call_006dd470;  // (from the original)
inline constexpr guest::Function<0x0071831c, u32(u32, u32, u32, u32)> call_0071831c;  // (from the original)
inline constexpr guest::Function<0x00718340, u32(u32, u32, u32, u32)> call_00718340;  // (from the original)
inline constexpr guest::Function<0x00748164, u32(u32, u32, u32, u32)> call_00748164;  // (from the original)
inline constexpr guest::Function<0x007481ec, u32(u32, u32, u32, u32)> call_007481ec;  // (from the original)
inline constexpr guest::Function<0x0074824c, u32(u32, u32, u32, u32)> call_0074824c;  // (from the original)
inline constexpr guest::Function<0x00748284, u32(u32, u32, u32, u32)> call_00748284;  // (from the original)

u32 f_006cc388(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = guest::cpu()->r[4];
    u32 r7 = guest::cpu()->r[7];
    u32 r9 = guest::cpu()->r[9];
    u32 r10 = guest::cpu()->r[10];
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r0_2 = 0;
    u32 r3_2 = 0;
    u32 r2_2 = 0;
    u32 r1_2 = 0;
    u32 ea_1 = 0;
    u32 ea_2 = 0;
    u32 r1_3 = 0;
    u32 ea_3 = 0;
    u32 r2_3 = 0;
    u32 r1_4 = 0;
    u32 ea_4 = 0;
    u32 r2_4 = 0;
    u32 r1_5 = 0;
    u32 r0_3 = 0;
    u32 r3_3 = 0;
    u32 r9_1 = 0;
    u32 r0_4 = 0;
    u32 r2_5 = 0;
    u32 zf_1 = 0;
    u32 zf_2 = 0;
    u32 r0_5 = 0;
    u32 r2_6 = 0;
    u32 r3_4 = 0;
    u32 r0_6 = 0;
    u32 r0_7 = 0;
    u32 r2_7 = 0;
    u32 r3_5 = 0;
    u32 r0_8 = 0;
    u32 r2_8 = 0;
    u32 r3_6 = 0;
    u32 r1_6 = 0;
    u32 r0_9 = 0;
    u32 r0_10 = 0;
    u32 r5_1 = 0;
    u32 r1_7 = 0;
    u32 r2_9 = 0;
    u32 r3_7 = 0;
    u32 r0_11 = 0;
    u32 r3_8 = 0;
    u32 r0_12 = 0;
    u32 r2_10 = 0;
    u32 r2_11 = 0;
    u32 r1_8 = 0;
    u32 r0_13 = 0;
    u32 r1_9 = 0;
    u32 r2_12 = 0;
    u32 r0_14 = 0;
    u32 r5_2 = 0;
    u32 r1_10 = 0;
    u32 r6_1 = 0;
    u32 r8_1 = 0;
    u32 r0_15 = 0;
    u32 r0_16 = 0;
    u32 r0_17 = 0;
    u32 r1_11 = 0;
    u32 r2_13 = 0;
    u32 r3_9 = 0;
    u32 r0_18 = 0;
    u32 r1_12 = 0;
    u32 r0_19 = 0;
    u32 r1_13 = 0;
    u32 r0_20 = 0;
    u32 r1_14 = 0;
    u32 r0_21 = 0;
    u32 r1_15 = 0;
    u32 r0_22 = 0;
    u32 r0_23 = 0;
    u32 r2_14 = 0;
    u32 r3_10 = 0;
    u32 r1_16 = 0;
    u32 r0_24 = 0;
    u32 r0_25 = 0;
    u32 r0_26 = 0;
    r13 = r13 - 0xb8u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_1 = call_006a5e34(r0, r1, r2, r3);
    r1_1 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    if (r0_1 == 0) {
        goto L_6cc644;
    }
    guest::cpu()->r[13] = r13;
    r0_2 = call_005ca234(r2, r1_1, r2_1, r3_1);
    r3_2 = guest::cpu()->r[3];
    r2_2 = u32(s32(s8(*gptr<u8>(r0_2 + 1u)))) + r1;
    r1_2 = u32(s32(s8(*gptr<u8>(r0_2)))) + r0;
    ea_1 = r13 + 0x60u;  // (from the original)
    *gptr<u32>(ea_1) = u32(r1_2);
    *gptr<u32>(ea_1 + 4) = u32(r2_2);
    ea_2 = r0_2 + 3u;
    r1_3 = u32(s32(s8(*gptr<u8>(ea_2))));
    ea_3 = r0_2 + 2u;
    r2_3 = r1_3 + r1;
    r1_4 = u32(s32(s8(*gptr<u8>(ea_3)))) + r0;
    ea_4 = r13 + 0x48u;  // (from the original)
    *gptr<u32>(ea_4) = u32(r1_4);
    *gptr<u32>(ea_4 + 4) = u32(r2_3);
    r2_4 = r13 + 0x48u;  // (from the original)
    r1_5 = r13 + 0x60u;  // (from the original)
    r0_3 = r13 + 0x38u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_0052f200(r0_3, r1_5, r2_4, r3_2);
    r3_3 = guest::cpu()->r[3];
    r7 = r13 + 0x50u;  // (from the original)
    r9_1 = r13 + 0x38u;  // (from the original)
    r0_4 = r13 + 0x68u;  // (from the original)
    r2_5 = r1 - 7u;
    *gptr<u32>(r0_4) = u32(r0 - 7u);
    *gptr<u32>(r0_4 + 4) = u32(r2_5);
    zf_1 = r2 == 0;
    if (!zf_1) {
        zf_1 = r2 == 1u;
    }
    r4 = r0_4;
    *gptr<u32>(r0_4 + 8u) = u32(0u);
    if (!zf_1) {
        zf_2 = r2 == 2u;
        if (!zf_2) {
            zf_2 = r2 == 3u;
        }
        if (!zf_2) {
            goto L_6cc450;
        }
    }
    guest::cpu()->r[13] = r13;
    r0_5 = call_0030459c(r0_4, 0u, r2_5, r3_3);
    r2_6 = guest::cpu()->r[2];
    r3_4 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0_6 = call_001b1184(r0_5, r2, r2_6, r3_4);
    r2_5 = guest::cpu()->r[2];
    r3_3 = guest::cpu()->r[3];
    *gptr<u32>(r4 + 8u) = u32(r0_6);
L_6cc450:;
    r0_7 = r13 + 0x78u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_0074824c(r0_7, r9_1, r2_5, r3_3);
    r2_7 = guest::cpu()->r[2];
    r3_5 = guest::cpu()->r[3];
    r0_8 = r13 + 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_00748284(r0_8, r9_1, r2_7, r3_5);
    r2_8 = guest::cpu()->r[2];
    r3_6 = guest::cpu()->r[3];
    r1_6 = r13 + 0x78u;  // (from the original)
    r0_9 = r13 + 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_10 = call_007481ec(r0_9, r1_6, r2_8, r3_6);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0_10 == 0) {
        goto L_6cc5e4;
    } else {
        r9 = 0x9506b0u;  // (from the original)
        r10 = 0x9506b4u;  // (from the original)
    }
L_6cc484:;
    r5_1 = r13 + 0x30u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_002fe7cc(1u, r1, r2, r3);
    r1_7 = guest::cpu()->r[1];
    r2_9 = guest::cpu()->r[2];
    r3_7 = guest::cpu()->r[3];
    if (*gptr<u32>(r4 + 8u) == 0) {
        goto L_6cc5c4;
    }
    r0_11 = r13 + 8u;
    guest::cpu()->r[13] = r13;
    call_00748164(r0_11, r5_1, r4, r3_7);
    r3_8 = guest::cpu()->r[3];
    r0_12 = *gptr<u32>(r13 + 0xcu);  // (from the original)
    r2_10 = *gptr<u32>(r13 + 8u);
    r2_11 = r2_10 + (r2_10 << 2);
    r1_8 = *gptr<u32>(r4 + 8u) + ((r0_12 + (r0_12 << 2) << 5) + (r2_11 << 1));
    r0_13 = r13 + 0x88u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_0060d20c(r0_13, r1_8, r2_11, r3_8);
    r1_7 = guest::cpu()->r[1];
    r2_9 = guest::cpu()->r[2];
    r3_7 = guest::cpu()->r[3];
    if (u32(*gptr<u8>(r13 + 0x90u)) == 0) {  // (from the original)
        goto L_6cc5b0;
    }
    r1_9 = *gptr<u32>(r5_1);
    r2_12 = *gptr<u32>(r5_1 + 4);
    r0_14 = r13 + 0x18u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_0023fc84(r0_14, r1_9, r2_12, 1u);
    r1_7 = guest::cpu()->r[1];
    r2_9 = guest::cpu()->r[2];
    r3_7 = guest::cpu()->r[3];
    r5_2 = u32(*gptr<u8>(r13 + 0x20u));  // (from the original)
    if (r5_2 >= 0xfcu) {  // (from the original)
        goto L_6cc5b0;
    }
    r1_10 = r13 + 0x18u;  // (from the original)
    r6_1 = *gptr<u32>(r1_10);
    r8_1 = *gptr<u32>(r1_10 + 4);
    guest::cpu()->r[13] = r13;
    r0_15 = call_005ca4b4(r5_2, r1_10, r2_9, r3_7);
    r1_7 = guest::cpu()->r[1];
    r2_9 = guest::cpu()->r[2];
    r3_7 = guest::cpu()->r[3];
    if (r0_15 == 0) {
        goto L_6cc5b0;
    }
    guest::cpu()->r[13] = r13;
    r0_16 = call_005ca5c0(r5_2, r1_7, r2_9, r3_7);
    r1_7 = guest::cpu()->r[1];
    r2_9 = guest::cpu()->r[2];
    r3_7 = guest::cpu()->r[3];
    if (r0_16 == 0) {
        goto L_6cc5b0;
    }
    guest::cpu()->r[13] = r13;
    r0_17 = call_0030ce60(r0_16, r1_7, r2_9, r3_7);
    r1_11 = guest::cpu()->r[1];
    r2_13 = guest::cpu()->r[2];
    r3_9 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0_18 = call_00314bc4(r0_17, r1_11, r2_13, r3_9);
    r1_12 = guest::cpu()->r[1];
    r2_9 = guest::cpu()->r[2];
    r3_7 = guest::cpu()->r[3];
    if (r0_18 == 0) {
        goto L_6cc598;
    }
    guest::cpu()->r[13] = r13;
    r0_19 = call_003026cc(r0_17, r1_12, r2_9, r3_7);
    r1_13 = guest::cpu()->r[1];
    r2_9 = guest::cpu()->r[2];
    r3_7 = guest::cpu()->r[3];
    if (r0_19 != r5_2) {
        goto L_6cc598;
    }
    guest::cpu()->r[13] = r13;
    r0_20 = call_0071831c(r0_17, r1_13, r2_9, r3_7);
    r1_14 = guest::cpu()->r[1];
    r2_9 = guest::cpu()->r[2];
    r3_7 = guest::cpu()->r[3];
    if (r0_20 != r6_1) {
        goto L_6cc598;
    }
    guest::cpu()->r[13] = r13;
    r0_21 = call_00718340(r0_17, r1_14, r2_9, r3_7);
    r1_7 = guest::cpu()->r[1];
    r2_9 = guest::cpu()->r[2];
    r3_7 = guest::cpu()->r[3];
    if (r0_21 == r8_1) {
        goto L_6cc5b0;
    }
L_6cc598:;
    r1_15 = *gptr<u32>(r13 + 0x24u);  // (from the original)
    if (u32(*gptr<u8>(r9)) == 0xffu) {  // (from the original)
        r0_22 = *gptr<u32>(r10);
    } else {
        r0_22 = 0u;
    }
    guest::cpu()->r[13] = r13;
    call_006dd470(r0_22, r1_15, r2_9, r3_7);
    r1_7 = guest::cpu()->r[1];
    r2_9 = guest::cpu()->r[2];
    r3_7 = guest::cpu()->r[3];
L_6cc5b0:;
L_6cc5c4:;
    r0_23 = r13 + 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_0052f144(r0_23, r1_7, r2_9, r3_7);
    r2_14 = guest::cpu()->r[2];
    r3_10 = guest::cpu()->r[3];
    r1_16 = r13 + 0x78u;  // (from the original)
    r0_24 = r13 + 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_25 = call_007481ec(r0_24, r1_16, r2_14, r3_10);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0_25 != 0) {
        guest::preempt();
        goto L_6cc484;
    }
L_6cc5e4:;
    guest::cpu()->r[13] = r13;
    r0_26 = call_0052f0c0(r7, r4, r2, r3);
    r1_1 = *gptr<u32>(r4 + 8u);
    *gptr<u32>(r0_26 + 8u) = u32(r1_1);
    r0_1 = r13 + 0x60u;  // (from the original)
L_6cc644:;
    r13 = r13 + 0xb8u;  // (from the original)
    guest::cpu()->r[1] = r1_1;
    guest::cpu()->r[13] = r13;
    return r0_1;
}

}  // namespace d_006cc388
GUEST_EXPORT(0x006cc388, d_006cc388::f_006cc388);

// f_006cc654: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006cc654 {

inline constexpr guest::Function<0x001b1184, u32(u32, u32, u32, u32)> call_001b1184;  // (from the original)
inline constexpr guest::Function<0x0023fc84, u32(u32, u32, u32, u32)> call_0023fc84;  // (from the original)
inline constexpr guest::Function<0x002fe7cc, u32(u32, u32, u32, u32)> call_002fe7cc;  // (from the original)
inline constexpr guest::Function<0x003026cc, u32(u32, u32, u32, u32)> call_003026cc;  // (from the original)
inline constexpr guest::Function<0x0030459c, u32(u32, u32, u32, u32)> call_0030459c;  // (from the original)
inline constexpr guest::Function<0x0030ce60, u32(u32, u32, u32, u32)> call_0030ce60;  // (from the original)
inline constexpr guest::Function<0x00314bc4, u32(u32, u32, u32, u32)> call_00314bc4;  // (from the original)
inline constexpr guest::Function<0x0052f0c0, u32(u32, u32, u32, u32)> call_0052f0c0;  // (from the original)
inline constexpr guest::Function<0x0052f144, u32(u32, u32, u32, u32)> call_0052f144;  // (from the original)
inline constexpr guest::Function<0x0052f200, u32(u32, u32, u32, u32)> call_0052f200;  // (from the original)
inline constexpr guest::Function<0x005ca234, u32(u32, u32, u32, u32)> call_005ca234;  // (from the original)
inline constexpr guest::Function<0x005ca4b4, u32(u32, u32, u32, u32)> call_005ca4b4;  // (from the original)
inline constexpr guest::Function<0x005ca5c0, u32(u32, u32, u32, u32)> call_005ca5c0;  // (from the original)
inline constexpr guest::Function<0x0060d20c, u32(u32, u32, u32, u32)> call_0060d20c;  // (from the original)
inline constexpr guest::Function<0x006a5e34, u32(u32, u32, u32, u32)> call_006a5e34;  // (from the original)
inline constexpr guest::Function<0x006de930, u32(u32, u32, u32, u32)> call_006de930;  // (from the original)
inline constexpr guest::Function<0x0071831c, u32(u32, u32, u32, u32)> call_0071831c;  // (from the original)
inline constexpr guest::Function<0x00718340, u32(u32, u32, u32, u32)> call_00718340;  // (from the original)
inline constexpr guest::Function<0x00748164, u32(u32, u32, u32, u32)> call_00748164;  // (from the original)
inline constexpr guest::Function<0x007481ec, u32(u32, u32, u32, u32)> call_007481ec;  // (from the original)
inline constexpr guest::Function<0x0074824c, u32(u32, u32, u32, u32)> call_0074824c;  // (from the original)
inline constexpr guest::Function<0x00748284, u32(u32, u32, u32, u32)> call_00748284;  // (from the original)

u32 f_006cc654(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = guest::cpu()->r[4];
    u32 r7 = guest::cpu()->r[7];
    u32 r9 = guest::cpu()->r[9];
    u32 r10 = guest::cpu()->r[10];
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r0_2 = 0;
    u32 r3_2 = 0;
    u32 r2_2 = 0;
    u32 r1_2 = 0;
    u32 ea_1 = 0;
    u32 ea_2 = 0;
    u32 r1_3 = 0;
    u32 ea_3 = 0;
    u32 r2_3 = 0;
    u32 r1_4 = 0;
    u32 ea_4 = 0;
    u32 r2_4 = 0;
    u32 r1_5 = 0;
    u32 r0_3 = 0;
    u32 r3_3 = 0;
    u32 r9_1 = 0;
    u32 r0_4 = 0;
    u32 r2_5 = 0;
    u32 zf_1 = 0;
    u32 zf_2 = 0;
    u32 r0_5 = 0;
    u32 r2_6 = 0;
    u32 r3_4 = 0;
    u32 r0_6 = 0;
    u32 r0_7 = 0;
    u32 r2_7 = 0;
    u32 r3_5 = 0;
    u32 r0_8 = 0;
    u32 r2_8 = 0;
    u32 r3_6 = 0;
    u32 r1_6 = 0;
    u32 r0_9 = 0;
    u32 r0_10 = 0;
    u32 r5_1 = 0;
    u32 r1_7 = 0;
    u32 r2_9 = 0;
    u32 r3_7 = 0;
    u32 r0_11 = 0;
    u32 r3_8 = 0;
    u32 r0_12 = 0;
    u32 r2_10 = 0;
    u32 r2_11 = 0;
    u32 r1_8 = 0;
    u32 r0_13 = 0;
    u32 r1_9 = 0;
    u32 r2_12 = 0;
    u32 r0_14 = 0;
    u32 r5_2 = 0;
    u32 r1_10 = 0;
    u32 r6_1 = 0;
    u32 r8_1 = 0;
    u32 r0_15 = 0;
    u32 r0_16 = 0;
    u32 r0_17 = 0;
    u32 r1_11 = 0;
    u32 r2_13 = 0;
    u32 r3_9 = 0;
    u32 r0_18 = 0;
    u32 r1_12 = 0;
    u32 r0_19 = 0;
    u32 r1_13 = 0;
    u32 r0_20 = 0;
    u32 r1_14 = 0;
    u32 r0_21 = 0;
    u32 r1_15 = 0;
    u32 r0_22 = 0;
    u32 r0_23 = 0;
    u32 r2_14 = 0;
    u32 r3_10 = 0;
    u32 r1_16 = 0;
    u32 r0_24 = 0;
    u32 r0_25 = 0;
    u32 r0_26 = 0;
    r13 = r13 - 0xb8u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_1 = call_006a5e34(r0, r1, r2, r3);
    r1_1 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    if (r0_1 == 0) {
        goto L_6cc910;
    }
    guest::cpu()->r[13] = r13;
    r0_2 = call_005ca234(r2, r1_1, r2_1, r3_1);
    r3_2 = guest::cpu()->r[3];
    r2_2 = u32(s32(s8(*gptr<u8>(r0_2 + 1u)))) + r1;
    r1_2 = u32(s32(s8(*gptr<u8>(r0_2)))) + r0;
    ea_1 = r13 + 0x60u;  // (from the original)
    *gptr<u32>(ea_1) = u32(r1_2);
    *gptr<u32>(ea_1 + 4) = u32(r2_2);
    ea_2 = r0_2 + 3u;
    r1_3 = u32(s32(s8(*gptr<u8>(ea_2))));
    ea_3 = r0_2 + 2u;
    r2_3 = r1_3 + r1;
    r1_4 = u32(s32(s8(*gptr<u8>(ea_3)))) + r0;
    ea_4 = r13 + 0x48u;  // (from the original)
    *gptr<u32>(ea_4) = u32(r1_4);
    *gptr<u32>(ea_4 + 4) = u32(r2_3);
    r2_4 = r13 + 0x48u;  // (from the original)
    r1_5 = r13 + 0x60u;  // (from the original)
    r0_3 = r13 + 0x38u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_0052f200(r0_3, r1_5, r2_4, r3_2);
    r3_3 = guest::cpu()->r[3];
    r7 = r13 + 0x50u;  // (from the original)
    r9_1 = r13 + 0x38u;  // (from the original)
    r0_4 = r13 + 0x68u;  // (from the original)
    r2_5 = r1 - 7u;
    *gptr<u32>(r0_4) = u32(r0 - 7u);
    *gptr<u32>(r0_4 + 4) = u32(r2_5);
    zf_1 = r2 == 0;
    if (!zf_1) {
        zf_1 = r2 == 1u;
    }
    r4 = r0_4;
    *gptr<u32>(r0_4 + 8u) = u32(0u);
    if (!zf_1) {
        zf_2 = r2 == 2u;
        if (!zf_2) {
            zf_2 = r2 == 3u;
        }
        if (!zf_2) {
            goto L_6cc71c;
        }
    }
    guest::cpu()->r[13] = r13;
    r0_5 = call_0030459c(r0_4, 0u, r2_5, r3_3);
    r2_6 = guest::cpu()->r[2];
    r3_4 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0_6 = call_001b1184(r0_5, r2, r2_6, r3_4);
    r2_5 = guest::cpu()->r[2];
    r3_3 = guest::cpu()->r[3];
    *gptr<u32>(r4 + 8u) = u32(r0_6);
L_6cc71c:;
    r0_7 = r13 + 0x78u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_0074824c(r0_7, r9_1, r2_5, r3_3);
    r2_7 = guest::cpu()->r[2];
    r3_5 = guest::cpu()->r[3];
    r0_8 = r13 + 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_00748284(r0_8, r9_1, r2_7, r3_5);
    r2_8 = guest::cpu()->r[2];
    r3_6 = guest::cpu()->r[3];
    r1_6 = r13 + 0x78u;  // (from the original)
    r0_9 = r13 + 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_10 = call_007481ec(r0_9, r1_6, r2_8, r3_6);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0_10 == 0) {
        goto L_6cc8b0;
    } else {
        r9 = 0x9506b0u;  // (from the original)
        r10 = 0x9506b4u;  // (from the original)
    }
L_6cc750:;
    r5_1 = r13 + 0x30u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_002fe7cc(1u, r1, r2, r3);
    r1_7 = guest::cpu()->r[1];
    r2_9 = guest::cpu()->r[2];
    r3_7 = guest::cpu()->r[3];
    if (*gptr<u32>(r4 + 8u) == 0) {
        goto L_6cc890;
    }
    r0_11 = r13 + 8u;
    guest::cpu()->r[13] = r13;
    call_00748164(r0_11, r5_1, r4, r3_7);
    r3_8 = guest::cpu()->r[3];
    r0_12 = *gptr<u32>(r13 + 0xcu);  // (from the original)
    r2_10 = *gptr<u32>(r13 + 8u);
    r2_11 = r2_10 + (r2_10 << 2);
    r1_8 = *gptr<u32>(r4 + 8u) + ((r0_12 + (r0_12 << 2) << 5) + (r2_11 << 1));
    r0_13 = r13 + 0x88u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_0060d20c(r0_13, r1_8, r2_11, r3_8);
    r1_7 = guest::cpu()->r[1];
    r2_9 = guest::cpu()->r[2];
    r3_7 = guest::cpu()->r[3];
    if (u32(*gptr<u8>(r13 + 0x90u)) == 0) {  // (from the original)
        goto L_6cc87c;
    }
    r1_9 = *gptr<u32>(r5_1);
    r2_12 = *gptr<u32>(r5_1 + 4);
    r0_14 = r13 + 0x18u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_0023fc84(r0_14, r1_9, r2_12, 1u);
    r1_7 = guest::cpu()->r[1];
    r2_9 = guest::cpu()->r[2];
    r3_7 = guest::cpu()->r[3];
    r5_2 = u32(*gptr<u8>(r13 + 0x20u));  // (from the original)
    if (r5_2 >= 0xfcu) {  // (from the original)
        goto L_6cc87c;
    }
    r1_10 = r13 + 0x18u;  // (from the original)
    r6_1 = *gptr<u32>(r1_10);
    r8_1 = *gptr<u32>(r1_10 + 4);
    guest::cpu()->r[13] = r13;
    r0_15 = call_005ca4b4(r5_2, r1_10, r2_9, r3_7);
    r1_7 = guest::cpu()->r[1];
    r2_9 = guest::cpu()->r[2];
    r3_7 = guest::cpu()->r[3];
    if (r0_15 == 0) {
        goto L_6cc87c;
    }
    guest::cpu()->r[13] = r13;
    r0_16 = call_005ca5c0(r5_2, r1_7, r2_9, r3_7);
    r1_7 = guest::cpu()->r[1];
    r2_9 = guest::cpu()->r[2];
    r3_7 = guest::cpu()->r[3];
    if (r0_16 == 0) {
        goto L_6cc87c;
    }
    guest::cpu()->r[13] = r13;
    r0_17 = call_0030ce60(r0_16, r1_7, r2_9, r3_7);
    r1_11 = guest::cpu()->r[1];
    r2_13 = guest::cpu()->r[2];
    r3_9 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0_18 = call_00314bc4(r0_17, r1_11, r2_13, r3_9);
    r1_12 = guest::cpu()->r[1];
    r2_9 = guest::cpu()->r[2];
    r3_7 = guest::cpu()->r[3];
    if (r0_18 == 0) {
        goto L_6cc864;
    }
    guest::cpu()->r[13] = r13;
    r0_19 = call_003026cc(r0_17, r1_12, r2_9, r3_7);
    r1_13 = guest::cpu()->r[1];
    r2_9 = guest::cpu()->r[2];
    r3_7 = guest::cpu()->r[3];
    if (r0_19 != r5_2) {
        goto L_6cc864;
    }
    guest::cpu()->r[13] = r13;
    r0_20 = call_0071831c(r0_17, r1_13, r2_9, r3_7);
    r1_14 = guest::cpu()->r[1];
    r2_9 = guest::cpu()->r[2];
    r3_7 = guest::cpu()->r[3];
    if (r0_20 != r6_1) {
        goto L_6cc864;
    }
    guest::cpu()->r[13] = r13;
    r0_21 = call_00718340(r0_17, r1_14, r2_9, r3_7);
    r1_7 = guest::cpu()->r[1];
    r2_9 = guest::cpu()->r[2];
    r3_7 = guest::cpu()->r[3];
    if (r0_21 == r8_1) {
        goto L_6cc87c;
    }
L_6cc864:;
    r1_15 = *gptr<u32>(r13 + 0x24u);  // (from the original)
    if (u32(*gptr<u8>(r9)) == 0xffu) {  // (from the original)
        r0_22 = *gptr<u32>(r10);
    } else {
        r0_22 = 0u;
    }
    guest::cpu()->r[13] = r13;
    call_006de930(r0_22, r1_15, r2_9, r3_7);
    r1_7 = guest::cpu()->r[1];
    r2_9 = guest::cpu()->r[2];
    r3_7 = guest::cpu()->r[3];
L_6cc87c:;
L_6cc890:;
    r0_23 = r13 + 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_0052f144(r0_23, r1_7, r2_9, r3_7);
    r2_14 = guest::cpu()->r[2];
    r3_10 = guest::cpu()->r[3];
    r1_16 = r13 + 0x78u;  // (from the original)
    r0_24 = r13 + 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_25 = call_007481ec(r0_24, r1_16, r2_14, r3_10);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0_25 != 0) {
        guest::preempt();
        goto L_6cc750;
    }
L_6cc8b0:;
    guest::cpu()->r[13] = r13;
    r0_26 = call_0052f0c0(r7, r4, r2, r3);
    r1_1 = *gptr<u32>(r4 + 8u);
    *gptr<u32>(r0_26 + 8u) = u32(r1_1);
    r0_1 = r13 + 0x60u;  // (from the original)
L_6cc910:;
    r13 = r13 + 0xb8u;  // (from the original)
    guest::cpu()->r[1] = r1_1;
    guest::cpu()->r[13] = r13;
    return r0_1;
}

}  // namespace d_006cc654
GUEST_EXPORT(0x006cc654, d_006cc654::f_006cc654);

// f_006cc920: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006cc920 {


u32 f_006cc920(u32 r0) {
    u32 zf_1 = 0;
    u32 r0_1 = 0;
    zf_1 = r0 == 0x5cu;  // (from the original)
    if (!zf_1) {
        zf_1 = r0 == 0x68u;  // (from the original)
    }
    if (zf_1) {
        r0_1 = 1u;
    } else {
        r0_1 = 0u;
    }
    return r0_1;
}

}  // namespace d_006cc920
GUEST_EXPORT(0x006cc920, d_006cc920::f_006cc920);

// f_006ccc1c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006ccc1c {

struct __attribute__((packed)) Object_006ccc1c_0 {
    u8 unknown_0[0x1c204];  // (not used here)
    u8 byte_1c204;
};
GUEST_OFFSET(Object_006ccc1c_0, byte_1c204, 0x1c204);  // (from the original)


u32 f_006ccc1c(gptr<Object_006ccc1c_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r1_1 = 0;
    r1_1 = r0 + 0x1c000u;  // (from the original)
    arg0->byte_1c204 = u8(0xffu);  // (from the original)
    guest::cpu()->r[1] = r1_1;
    return 0xffu;  // (from the original)
}

}  // namespace d_006ccc1c
GUEST_EXPORT(0x006ccc1c, d_006ccc1c::f_006ccc1c);

// f_006ccc2c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006ccc2c {

struct __attribute__((packed)) Object_006ccc2c_0 {
    u8 unknown_0[0x1c204];  // (not used here)
    u8 byte_1c204;
};
GUEST_OFFSET(Object_006ccc2c_0, byte_1c204, 0x1c204);  // (from the original)


u32 f_006ccc2c(gptr<Object_006ccc2c_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r1_1 = 0;
    r1_1 = r0 + 0x1c000u;  // (from the original)
    arg0->byte_1c204 = u8(0u);
    guest::cpu()->r[1] = r1_1;
    return 0u;
}

}  // namespace d_006ccc2c
GUEST_EXPORT(0x006ccc2c, d_006ccc2c::f_006ccc2c);

// f_006ccc3c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006ccc3c {

inline constexpr guest::Function<0x002ff408, u32(u32, u32, u32, u32)> call_002ff408;  // (from the original)

u32 f_006ccc3c(u32 r0, u32 r1) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r0_1 = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r5 = r0;
    r4 = 0u;
    do {
L_6ccc48:;
        r0_1 = r5 + (r4 + (r4 << 2) << 7) + 4u;
        call_002ff408(r0_1, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        r4 = r4 + 1u;
        guest::preempt();
    } while (r4 < 0xb4u);  // (from the original)
    *gptr<u8>(0x1c204u + r5) = u8(0u);  // (from the original)
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = 0x1c204u;  // (from the original)
    return 0u;
}

}  // namespace d_006ccc3c
GUEST_EXPORT(0x006ccc3c, d_006ccc3c::f_006ccc3c);

// f_006ccc78: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006ccc78 {


u32 f_006ccc78(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r1_1 = 0;
    u32 r1_2 = 0;
    u32 r1_3 = 0;
    u32 r0_1 = 0;
    r1_1 = r2 + (r1 + (r1 << 1) << 1);
    r1_2 = r3 + (r1_1 + (r1_1 << 2) << 1);
    r1_3 = r1_2 + (r1_2 << 2);
    r0_1 = r0 + (r1_3 << 7) + 4u;
    guest::cpu()->r[1] = r1_3;
    return r0_1;
}

}  // namespace d_006ccc78
GUEST_EXPORT(0x006ccc78, d_006ccc78::f_006ccc78);

// f_006ccd14: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006ccd14 {

inline constexpr guest::Function<0x002fc8e8, u32(u32, u32, u32, u32)> call_002fc8e8;  // (from the original)
inline constexpr guest::Function<0x002fc934, u32(u32, u32, u32, u32)> call_002fc934;  // (from the original)

u32 f_006ccd14(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r13 = guest::cpu()->r[13];
    u32 r2_1 = 0;
    u32 ea_1 = 0;
    u32 r5_1 = 0;
    u32 r2_2 = 0;
    u32 r4_1 = 0;
    u32 r2_3 = 0;
    u32 r3_1 = 0;
    r13 = r13 - 0x10;  // (from the original)
    r2_1 = r3 + (r2 + (r2 << 1) << 1);
    ea_1 = r13 + 0x10u;  // (from the original)
    r5_1 = *gptr<u32>(ea_1 + 4);
    r2_2 = r2_1 + (r2_1 << 2);
    r4_1 = r1 + (*gptr<u32>(ea_1) + (r2_2 << 1) << 2);
    guest::cpu()->r[13] = r13;
    call_002fc934(r0, r4_1, r2_2, r3);
    r2_3 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    r13 = r13 + 0x10;  // (from the original)
    guest::cpu()->r[13] = r13;
    return call_002fc8e8(r4_1, r5_1, r2_3, r3_1);
}

}  // namespace d_006ccd14
GUEST_EXPORT(0x006ccd14, d_006ccd14::f_006ccd14);

// f_006ccd80: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006ccd80 {

inline constexpr guest::Function<0x002fc8e8, u32(u32, u32, u32, u32)> call_002fc8e8;  // (from the original)
inline constexpr guest::Function<0x002fcaf4, u32(u32, u32, u32, u32)> call_002fcaf4;  // (from the original)
inline constexpr guest::Function<0x0076aff4, u32(u32, u32, u32, u32)> call_0076aff4;  // (from the original)

u32 f_006ccd80(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r7 = guest::cpu()->r[7];
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r1_1 = 0;
    *gptr<u32>(r13 + 0xffffffe8u) = u32(r3);  // (from the original)
    r13 = r13 - 0x18;  // (from the original)
    r5 = r0;
    r7 = r1;
    r4 = 0u;
    do {
L_6ccd90:;
        r0_1 = r5 + (r4 << 2);
        guest::cpu()->r[13] = r13;
        r0_2 = call_002fcaf4(r0_1, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        if (!(r0_2 != 0)) {
            r0_3 = r13;
            guest::cpu()->r[13] = r13;
            call_0076aff4(r0_3, r0_1, r7, r3);
            r2_1 = guest::cpu()->r[2];
            r3_1 = guest::cpu()->r[3];
            r1_1 = r13;
            guest::cpu()->r[13] = r13;
            call_002fc8e8(r0_1, r1_1, r2_1, r3_1);
            r1 = guest::cpu()->r[1];
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
            r0_2 = r13;
        }
        r4 = r4 + 1u;
        guest::preempt();
    } while (r4 < 0xb4u);  // (from the original)
    r13 = r13 + 0x18;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0_2;
}

}  // namespace d_006ccd80
GUEST_EXPORT(0x006ccd80, d_006ccd80::f_006ccd80);

// f_006ccde0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006ccde0 {


u32 f_006ccde0(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 sco = 0;
    u32 cf = guest::cpu()->cf;
    u32 r1_1 = 0;
    u32 zf_1 = 0;
    u32 b_1 = 0;
    u32 r12_1 = 0;
    u32 r12_2 = 0;
    u32 r12_3 = 0;
    u32 b_2 = 0;
    u32 r1_2 = 0;
    u32 r1_3 = 0;
    u32 r1_4 = 0;
    u32 r0_1 = 0;
    guest::cpu()->r[13] -= 4u;
    r1_1 = r2 + (r1 + (r1 << 1) << 1);
    zf_1 = (r1_1 & 1u) == 0;
    b_1 = r1_1 >> 1;
    r12_1 = r0 + b_1;
    r12_2 = r12_1 + 0x25c00u;  // (from the original)
    if (!zf_1) {
        r2 = r3 + 4u;
    }
    r12_3 = u32(*gptr<u8>(r12_2 + 0x384u));  // (from the original)
    if (zf_1) {
        r2 = r3;
    }
    sco = cf;
    b_2 = lsl_rc(1u, r2 & 0xff, &sco);  // (from the original)
    if ((r12_3 & b_2) == 0) {
        guest::cpu()->r[13] += 4u;
        guest::cpu()->r[1] = r1_1;
        return 0u;
    }
    r1_2 = r3 + (r1_1 << 2);
    r1_3 = (r1_2 << 4) - r1_2;
    r1_4 = r1_3 + (r1_3 << 3);
    r0_1 = r0 + (r1_4 << 4) + 4u;
    guest::cpu()->r[13] += 4u;
    guest::cpu()->r[1] = r1_4;
    return r0_1;
}

}  // namespace d_006ccde0
GUEST_EXPORT(0x006ccde0, d_006ccde0::f_006ccde0);

// f_006cce34: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006cce34 {

struct __attribute__((packed)) Object_006cce34_0 {
    u8 unknown_0[0x25f8d];  // (not used here)
    u8 byte_25f8d;
};
GUEST_OFFSET(Object_006cce34_0, byte_25f8d, 0x25f8d);  // (from the original)


void f_006cce34(gptr<Object_006cce34_0> arg0) {
    arg0->byte_25f8d = u8(0xffu);  // (from the original)
    guest::cpu()->r[1] = 0xffu;  // (from the original)
    return;
}

}  // namespace d_006cce34
GUEST_EXPORT(0x006cce34, d_006cce34::f_006cce34);

// f_006cce48: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006cce48 {

struct __attribute__((packed)) Object_006cce48_0 {
    u8 unknown_0[0x25f8d];  // (not used here)
    u8 byte_25f8d;
};
GUEST_OFFSET(Object_006cce48_0, byte_25f8d, 0x25f8d);  // (from the original)


void f_006cce48(gptr<Object_006cce48_0> arg0) {
    arg0->byte_25f8d = u8(0u);
    guest::cpu()->r[1] = 0u;
    return;
}

}  // namespace d_006cce48
GUEST_EXPORT(0x006cce48, d_006cce48::f_006cce48);

// f_006cce5c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006cce5c {

inline constexpr guest::Function<0x001b49b0, u32(u32, u32, u32, u32)> call_001b49b0;  // (from the original)

u32 f_006cce5c(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r13 = guest::cpu()->r[13];
    u32 r6_1 = 0;
    u32 r1_1 = 0;
    u32 r1_2 = 0;
    u32 r4_1 = 0;
    u32 r2_1 = 0;
    u32 r1_3 = 0;
    u32 r0_1 = 0;
    u32 r1_4 = 0;
    r13 = r13 - 0x10;  // (from the original)
    r6_1 = r2 + (r1 + (r1 << 1) << 1);
    r1_1 = r3 + (r6_1 << 2);
    r1_2 = (r1_1 << 4) - r1_1;
    r4_1 = r3;
    r2_1 = r0 + (r1_2 + (r1_2 << 3) << 4) + 4u;
    r1_3 = *gptr<u32>(r13 + 0x10u);  // (from the original)
    guest::cpu()->r[13] = r13;
    call_001b49b0(r2_1, r1_3, r2_1, r3);
    r0_1 = r0 + (r6_1 >> 1) + 0x25f84u;  // (from the original)
    if ((r6_1 & 1u) != 0) {
        r4_1 = r4_1 + 4u;
    }
    r1_4 = u32(*gptr<u8>(r0_1)) | lsl_r(1u, r4_1 & 0xff);  // (from the original)
    *gptr<u8>(r0_1) = u8(r1_4);
    r13 = r13 + 0x10;  // (from the original)
    guest::cpu()->r[1] = r1_4;
    guest::cpu()->r[13] = r13;
    return r0_1;
}

}  // namespace d_006cce5c
GUEST_EXPORT(0x006cce5c, d_006cce5c::f_006cce5c);

// f_006ccf10: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006ccf10 {

inline constexpr guest::Function<0x003059f8, u32(u32, u32, u32, u32)> call_003059f8;  // (from the original)
inline constexpr guest::Function<0x007795bc, u32(u32, u32, u32, u32)> call_007795bc;  // (from the original)

u32 f_006ccf10(u32 r0, u32 r1) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r5 = r0;
    r4 = 0u;
    do {
L_6ccf1c:;
        r0_1 = (r4 << 4) - r4;
        r0_2 = r5 + (r0_1 + (r0_1 << 3) << 4) + 4u;
        call_003059f8(r0_2, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        r4 = r4 + 1u;
        guest::preempt();
    } while (r4 < 0x48u);  // (from the original)
    r0_3 = r5 + 0x25f84u;  // (from the original)
    call_007795bc(r0_3, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    *gptr<u8>(r5 + 0x25f8du) = u8(0u);  // (from the original)
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = 0u;
    return 0x25f8du;  // (from the original)
}

}  // namespace d_006ccf10
GUEST_EXPORT(0x006ccf10, d_006ccf10::f_006ccf10);

// f_006ccf68: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006ccf68 {

inline constexpr guest::Function<0x00134544, u32(u32, u32, u32, u32)> call_00134544;  // (from the original)

u32 f_006ccf68() {
    return call_00134544(guest::cpu()->r[0], guest::cpu()->r[1], 0x5a0u, guest::cpu()->r[3]);  // (from the original)
}

}  // namespace d_006ccf68
GUEST_EXPORT(0x006ccf68, d_006ccf68::f_006ccf68);

// f_006ccf70: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006ccf70 {

inline constexpr guest::Function<0x002fc8e8, u32(u32, u32, u32, u32)> call_002fc8e8;  // (from the original)
inline constexpr guest::Function<0x002fc934, u32(u32, u32, u32, u32)> call_002fc934;  // (from the original)

u32 f_006ccf70(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r13 = guest::cpu()->r[13];
    u32 r2_1 = 0;
    u32 ea_1 = 0;
    u32 r5_1 = 0;
    u32 r2_2 = 0;
    u32 r4_1 = 0;
    u32 r2_3 = 0;
    u32 r3_1 = 0;
    r13 = r13 - 0x10;  // (from the original)
    r2_1 = r2 + (r2 << 3) + r3;
    ea_1 = r13 + 0x10u;  // (from the original)
    r5_1 = *gptr<u32>(ea_1 + 4);
    r2_2 = r2_1 + (r2_1 << 2);
    r4_1 = r1 + (*gptr<u32>(ea_1) + (r2_2 << 1) << 2);
    guest::cpu()->r[13] = r13;
    call_002fc934(r0, r4_1, r2_2, r3);
    r2_3 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    r13 = r13 + 0x10;  // (from the original)
    guest::cpu()->r[13] = r13;
    return call_002fc8e8(r4_1, r5_1, r2_3, r3_1);
}

}  // namespace d_006ccf70
GUEST_EXPORT(0x006ccf70, d_006ccf70::f_006ccf70);

// f_006ccfdc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006ccfdc {

inline constexpr guest::Function<0x002fc8e8, u32(u32, u32, u32, u32)> call_002fc8e8;  // (from the original)
inline constexpr guest::Function<0x002fcaf4, u32(u32, u32, u32, u32)> call_002fcaf4;  // (from the original)
inline constexpr guest::Function<0x0076aff4, u32(u32, u32, u32, u32)> call_0076aff4;  // (from the original)

u32 f_006ccfdc(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r7 = guest::cpu()->r[7];
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r1_1 = 0;
    *gptr<u32>(r13 + 0xffffffe8u) = u32(r3);  // (from the original)
    r13 = r13 - 0x18;  // (from the original)
    r5 = r0;
    r7 = r1;
    r4 = 0u;
    do {
L_6ccfec:;
        r0_1 = r5 + (r4 << 2);
        guest::cpu()->r[13] = r13;
        r0_2 = call_002fcaf4(r0_1, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        if (!(r0_2 != 0)) {
            r0_3 = r13;
            guest::cpu()->r[13] = r13;
            call_0076aff4(r0_3, r0_1, r7, r3);
            r2_1 = guest::cpu()->r[2];
            r3_1 = guest::cpu()->r[3];
            r1_1 = r13;
            guest::cpu()->r[13] = r13;
            call_002fc8e8(r0_1, r1_1, r2_1, r3_1);
            r1 = guest::cpu()->r[1];
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
            r0_2 = r13;
        }
        r4 = r4 + 1u;
        guest::preempt();
    } while (r4 < 0x168u);  // (from the original)
    r13 = r13 + 0x18;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0_2;
}

}  // namespace d_006ccfdc
GUEST_EXPORT(0x006ccfdc, d_006ccfdc::f_006ccfdc);

// f_006cd79c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006cd79c {

inline constexpr guest::Function<0x001323bc, u32(u32, u32, u32, u32)> call_001323bc;  // (from the original)
inline constexpr guest::Function<0x00569e6c, u32(u32, u32, u32, u32)> call_00569e6c;  // (from the original)

u32 f_006cd79c(u32 r0, u32 r1, u32 r2) {
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    guest::cpu()->r[13] -= 8u;
    r0_1 = call_001323bc(r0, r1, r2, guest::cpu()->r[3]);
    r1_1 = r0 + 0x26cu;  // (from the original)
    guest::cpu()->r[13] += 8u;
    return call_00569e6c(r0_1, r1_1, 1u, guest::cpu()->r[3]);
}

}  // namespace d_006cd79c
GUEST_EXPORT(0x006cd79c, d_006cd79c::f_006cd79c);

// f_006cd970: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006cd970 {

inline constexpr guest::Function<0x00132364, u32(u32, u32, u32, u32)> call_00132364;  // (from the original)
inline constexpr guest::Function<0x001323b4, u32(u32, u32, u32, u32)> call_001323b4;  // (from the original)

u32 f_006cd970(u32 r0) {
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    guest::cpu()->r[13] -= 8u;
    r0_1 = r0 + 0x24u;  // (from the original)
    call_00132364(r0_1, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    r0_2 = r0 + 0x26cu;  // (from the original)
    call_001323b4(r0_2, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    guest::cpu()->r[13] += 8u;
    return 1u;
}

}  // namespace d_006cd970
GUEST_EXPORT(0x006cd970, d_006cd970::f_006cd970);

// f_006cda18: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006cda18 {

inline constexpr guest::Function<0x00567e24, u32(u32, u32, u32, u32)> call_00567e24;  // (from the original)

u32 f_006cda18(u32 r0) {
    u32 r0_1 = 0;
    r0_1 = r0 + 0x24u;  // (from the original)
    return call_00567e24(r0_1, 0x6cda24u, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
}

}  // namespace d_006cda18
GUEST_EXPORT(0x006cda18, d_006cda18::f_006cda18);

// f_006ce44c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006ce44c {

struct __attribute__((packed)) Object_006ce44c_0 {
    u8 unknown_0[0x168];  // (not used here)
    u8 byte_168;
    u8 byte_169;
};
GUEST_OFFSET(Object_006ce44c_0, byte_168, 0x168);  // (from the original)
GUEST_OFFSET(Object_006ce44c_0, byte_169, 0x169);  // (from the original)

struct __attribute__((packed)) Object_006ce44c_1 {
    u8 byte_0;
};
GUEST_OFFSET(Object_006ce44c_1, byte_0, 0x0);  // (from the original)

struct __attribute__((packed)) Object_006ce44c_2 {
    u8 byte_0;
};
GUEST_OFFSET(Object_006ce44c_2, byte_0, 0x0);  // (from the original)

inline guest::global<u32, 0x006ce600> global_006ce600;  // (from the original)
inline guest::global<u32, 0x006ce604> global_006ce604;  // (from the original)
inline constexpr guest::Function<0x002b6a00, u32(u32, u32, u32, u32)> call_002b6a00;  // (from the original)
inline constexpr guest::Function<0x004b4fc0, u32(u32, u32, u32, u32)> call_004b4fc0;  // (from the original)

u32 f_006ce44c(gptr<Object_006ce44c_0> arg0, gptr<Object_006ce44c_1> arg1, gptr<Object_006ce44c_2> arg2, float S0, float S1) {
    u32 r0 = arg0.addr();
    u32 r13 = guest::cpu()->r[13];
    u32 r1_1 = 0;
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r0_5 = 0;
    u32 r0_6 = 0;
    u32 r0_7 = 0;
    u32 r0_8 = 0;
    u32 r0_9 = 0;
    u32 r0_10 = 0;
    float S0_1 = 0;
    float S1_1 = 0;
    u32 r1_2 = 0;
    u32 r2_1 = 0;
    u32 r0_11 = 0;
    u32 r1_3 = 0;
    u32 r0_12 = 0;
    u32 r1_4 = 0;
    float S0_2 = 0;
    float S1_2 = 0;
    r13 = r13 - 0x30u;  // (from the original)
    arg0->byte_168 = u8(u32(arg1->byte_0));
    r1_1 = u32(arg2->byte_0);
    r0_1 = 0u;
    arg0->byte_169 = u8(r1_1);
    if (r1_1 != 1u) {
        if (r1_1 == 2u) {
            goto L_6ce4e0;
        }
        if (r1_1 != 3u) {
            goto L_6ce574;
        }
        goto L_6ce530;
    }
    r0_2 = *gptr<u32>(r0 + 0x15cu);  // (from the original)
    *gptr<u8>(r0_2 + 0xb7u) = u8(u32(*gptr<u8>(r0_2 + 0xb7u)) & 0xfeu);  // (from the original)
    r0_3 = *gptr<u32>(r0 + 0x158u);  // (from the original)
    *gptr<u8>(r0_3 + 0xb7u) = u8(u32(*gptr<u8>(r0_3 + 0xb7u)) & 0xfeu);  // (from the original)
    r0_4 = *gptr<u32>(r0 + 0x154u);  // (from the original)
    *gptr<u8>(r0_4 + 0xb7u) = u8(u32(*gptr<u8>(r0_4 + 0xb7u)) & 0xfeu | 1u);  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    r0_1 = call_004b4fc0(r0, 0x6ce5dcu, 1u, guest::cpu()->r[3]);  // (from the original)
    goto L_6ce574;
L_6ce4e0:;
    r0_5 = *gptr<u32>(r0 + 0x15cu);  // (from the original)
    *gptr<u8>(r0_5 + 0xb7u) = u8(u32(*gptr<u8>(r0_5 + 0xb7u)) & 0xfeu);  // (from the original)
    r0_6 = *gptr<u32>(r0 + 0x158u);  // (from the original)
    *gptr<u8>(r0_6 + 0xb7u) = u8(u32(*gptr<u8>(r0_6 + 0xb7u)) & 0xfeu | 1u);  // (from the original)
    r0_7 = *gptr<u32>(r0 + 0x154u);  // (from the original)
    *gptr<u8>(r0_7 + 0xb7u) = u8(u32(*gptr<u8>(r0_7 + 0xb7u)) & 0xfeu);  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    r0_1 = call_004b4fc0(r0, 0x6ce5e8u, 1u, guest::cpu()->r[3]);  // (from the original)
    goto L_6ce574;
L_6ce530:;
    r0_8 = *gptr<u32>(r0 + 0x15cu);  // (from the original)
    *gptr<u8>(r0_8 + 0xb7u) = u8(u32(*gptr<u8>(r0_8 + 0xb7u)) & 0xfeu | 1u);  // (from the original)
    r0_9 = *gptr<u32>(r0 + 0x158u);  // (from the original)
    *gptr<u8>(r0_9 + 0xb7u) = u8(u32(*gptr<u8>(r0_9 + 0xb7u)) & 0xfeu);  // (from the original)
    r0_10 = *gptr<u32>(r0 + 0x154u);  // (from the original)
    *gptr<u8>(r0_10 + 0xb7u) = u8(u32(*gptr<u8>(r0_10 + 0xb7u)) & 0xfeu);  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    r0_1 = call_004b4fc0(r0, 0x6ce5f4u, 1u, guest::cpu()->r[3]);  // (from the original)
L_6ce574:;
    *gptr<u32>(r13) = u32(0u);
    *gptr<u32>(r13 + 4u) = u32(0u);
    S0_1 = std::bit_cast<float>(*global_006ce600);
    S1_1 = std::bit_cast<float>(*global_006ce604);
    r1_2 = r13 + 8u;
    *gptr<u32>(r13 + 8u) = u32(0u);
    *gptr<u32>(r13 + 0xcu) = u32(0u);  // (from the original)
    *gptr<u32>(r13 + 0x10u) = u32(0u);  // (from the original)
    *gptr<u32>(r13 + 0x14u) = u32(0u);  // (from the original)
    *gptr<u32>(r13 + 0x18u) = u32(0u);  // (from the original)
    *gptr<u32>(r1_2) = u32(std::bit_cast<u32>(S0_1));
    *gptr<u32>(r1_2 + 4) = u32(std::bit_cast<u32>(S1_1));
    r2_1 = *gptr<u32>(r0 + 0x160u);  // (from the original)
    *gptr<u32>(r13 + 4u) = u32(r0_1);
    *gptr<u32>(r13) = u32(r2_1);
    *gptr<u32>(r0 + 0x238u) = u32(0x1000422u);  // (from the original)
    *gptr<u8>(r0 + 0x246u) = u8(1u);  // (from the original)
    *gptr<u32>(r0 + 0x23cu) = u32(0x1000422u - 1u);  // (from the original)
    *gptr<u8>(r0 + 0x247u) = u8(1u);  // (from the original)
    r0_11 = r0 + 0x16cu;  // (from the original)
    r1_3 = r13;
    *gptr<u8>(r0 + 0x248u) = u8(1u);  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_1;
    guest::cpu()->s[1] = S1_1;
    r0_12 = call_002b6a00(r0_11, r1_3, r2_1, guest::cpu()->r[3]);
    r1_4 = guest::cpu()->r[1];
    S0_2 = guest::cpu()->s[0];
    S1_2 = guest::cpu()->s[1];
    r13 = r13 + 0x30u;  // (from the original)
    guest::cpu()->r[1] = r1_4;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_2;
    guest::cpu()->s[1] = S1_2;
    return r0_12;
}

}  // namespace d_006ce44c
GUEST_EXPORT(0x006ce44c, d_006ce44c::f_006ce44c);

// f_006ce67c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006ce67c {

inline guest::global<u8, 0x0094e4b4> global_0094e4b4;  // (from the original)
inline guest::global<u8, 0x00957320> global_00957320;  // (from the original)
inline constexpr guest::Function<0x002f74c8, u32(u32, u32, u32, u32)> call_002f74c8;  // (from the original)
inline constexpr guest::Function<0x002f74e0, u32(u32, u32, u32, u32)> call_002f74e0;  // (from the original)
inline constexpr guest::Function<0x003041c8, u32(u32, u32, u32, u32)> call_003041c8;  // (from the original)
inline constexpr guest::Function<0x005b4120, u32(u32, u32, u32, u32)> call_005b4120;  // (from the original)

u32 f_006ce67c(u32 r0, u32 r1) {
    u32 r5 = guest::cpu()->r[5];
    u32 r4_1 = 0;
    u32 r0_1 = 0;
    u32 zf_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r7_1 = 0;
    u32 r0_4 = 0;
    u32 r0_5 = 0;
    u32 res_1 = 0;
    u32 r0_6 = 0;
    u32 r0_7 = 0;
    guest::cpu()->r[13] -= 0x18u;  // (from the original)
    r5 = r0;
    r0 = call_005b4120(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r4_1 = r0;
    if (r0 == 0xa5u) {  // (from the original)
        goto L_6ce70c;
    }
    r0_1 = call_002f74c8(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    zf_1 = r0_1 == u32(*global_0094e4b4);
    if (!zf_1) {
        zf_1 = r0_1 == 0xa5u;  // (from the original)
    }
    if (!zf_1) {
        *global_0094e4b4 = u8(r0_1);
    }
    if (r4_1 != u32(*gptr<u8>(0x94e4b4u + 1u))) {  // (from the original)
        *gptr<u8>(0x94e4b4u + 1u) = u8(r4_1);  // (from the original)
    }
    r0_2 = call_002f74e0(0x20000u, r4_1, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    r0_3 = call_002f74e0(0x200000u, r4_1, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    r7_1 = r0_2 | r0_3;
    r0_4 = call_002f74e0(0x20000u, r0_1, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    r0_5 = call_002f74e0(0x200000u, r0_1, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    res_1 = r0_4 | r0_5 | r7_1;
    r1 = res_1;
    r0 = 1u;
    if (res_1 == 0) {
        goto L_6ce710;
    }
L_6ce708:;
    *gptr<u8>(r5 + 0xa12u) = u8(r0);  // (from the original)
L_6ce70c:;
    guest::cpu()->r[13] += 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
L_6ce710:;
    if (r0_1 != 0x9du) {  // (from the original)
        r0_6 = call_003041c8(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        if (r0_1 == 0x9eu) {  // (from the original)
            goto L_6ce75c;
        }
        if (r4_1 == 0x9du) {  // (from the original)
            r0 = 2u;
            guest::preempt();
            goto L_6ce708;
        }
        if (r4_1 == 0x9eu) {  // (from the original)
            r0 = 3u;
            guest::preempt();
            goto L_6ce708;
        } else {
            *gptr<u8>(r5 + 0xa12u) = u8(0u);  // (from the original)
        }
        guest::cpu()->r[13] += 0x18u;  // (from the original)
        guest::cpu()->r[1] = r1;
        return r0_6;
    }
    r0_7 = u32(*global_00957320);
    if (r0_7 == 0) {
        call_003041c8(r0_7, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
    }
L_6ce75c:;
    *gptr<u8>(r5 + 0xa12u) = u8(4u);  // (from the original)
    guest::cpu()->r[13] += 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return 4u;
}

}  // namespace d_006ce67c
GUEST_EXPORT(0x006ce67c, d_006ce67c::f_006ce67c);

// f_006ce770: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006ce770 {

inline guest::global<u32, 0x0094e4b8> global_0094e4b8;  // (from the original)

u32 f_006ce770() {
    u32 r0_1 = 0;
    r0_1 = *global_0094e4b8;
    if (r0_1 != 0) {
        r0_1 = u32(s32(s8(*gptr<u8>(r0_1 + 0xa10u))));  // (from the original)
    }
    return r0_1;
}

}  // namespace d_006ce770
GUEST_EXPORT(0x006ce770, d_006ce770::f_006ce770);

// f_006ceedc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006ceedc {

inline guest::global<u32, 0x0094e4b8> global_0094e4b8;  // (from the original)

u32 f_006ceedc(u32 r0_unused, u32 r1) {
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 zf_1 = 0;
    u32 r0_2 = 0;
    r0_1 = *global_0094e4b8;
    if (r0_1 == 0) {
        guest::cpu()->r[1] = r1;
        return r0_1;
    }
    r1_1 = r0_1 + 0xa00u;  // (from the original)
    if (u32(*gptr<u8>(r0_1 + 0xa13u)) != 0) {  // (from the original)
        guest::cpu()->r[1] = r1_1;
        return 1u;
    }
    zf_1 = u32(*gptr<u8>(r1_1 + 0x14u)) == 0;  // (from the original)
    if (zf_1) {
        r1_1 = u32(*gptr<u8>(r1_1 + 0x10u));  // (from the original)
        zf_1 = r1_1 == 0;
    }
    if (zf_1) {
        r0_2 = 0u;
    } else {
        r1_1 = 1u;
        *gptr<u8>(r0_1 + 0xa13u) = u8(r1_1);  // (from the original)
        r0_2 = r1_1;
    }
    guest::cpu()->r[1] = r1_1;
    return r0_2;
}

}  // namespace d_006ceedc
GUEST_EXPORT(0x006ceedc, d_006ceedc::f_006ceedc);

// f_006cef28: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006cef28 {

inline guest::global<u32, 0x0094e4b8> global_0094e4b8;  // (from the original)

u32 f_006cef28(u32 r0_unused, u32 r1) {
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r1_1 = 0;
    u32 r0_1 = 0;
    u32 r1_2 = 0;
    u32 r1_3 = 0;
    r2_1 = *global_0094e4b8;
    if (r2_1 == 0) {
        guest::cpu()->r[1] = r1;
        return 0u;
    }
    r3_1 = *gptr<u32>(r2_1 + 0xcu);  // (from the original)
    r1_1 = *gptr<u32>(0x845fb0u + 0x18u);  // (from the original)
    r0_1 = *gptr<u32>(0x845fb0u + 0x1cu);  // (from the original)
    if (r3_1 != r1_1) {
        guest::cpu()->r[1] = r1_1;
        return 0u;
    }
    if (r3_1 == 0) {
        r1_2 = *gptr<u32>(r2_1 + 0x10u) | r0_1;  // (from the original)
        if ((r1_2 & 1u) == 0) {
            guest::cpu()->r[1] = r1_2;
            return 1u;
        }
    }
    r1_3 = *gptr<u32>(r2_1 + 0x10u);  // (from the original)
    if (r1_3 != r0_1) {
        guest::cpu()->r[1] = r1_3;
        return 0u;
    }
    guest::cpu()->r[1] = r1_3;
    return 1u;
}

}  // namespace d_006cef28
GUEST_EXPORT(0x006cef28, d_006cef28::f_006cef28);

// f_006cf2c0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006cf2c0 {

inline guest::global<u32, 0x0090bc34> global_0090bc34;  // (from the original)
inline guest::global<u32, 0x0090bc3c> global_0090bc3c;  // (from the original)
inline constexpr guest::Function<0x005cf3bc, u32(u32, u32, u32, u32)> call_005cf3bc;  // (from the original)

u32 f_006cf2c0(u32 r0, u32 r1, u32 r2) {
    u32 r3 = 0;
    u32 r12 = 0;
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r12_1 = 0;
    u32 r4_1 = 0;
    u32 r4_2 = 0;
    u32 r4_3 = 0;
    u32 r3_2 = 0;
    u32 r2_2 = 0;
    u32 r3_3 = 0;
    u32 ea_1 = 0;
    u32 zf_1 = 0;
    u32 ea_2 = 0;
    u32 res_1 = 0;
    u32 r0_2 = 0;
    r13 = r13 - 0x18u;  // (from the original)
    r0_1 = r13 + 8u;
    guest::cpu()->r[13] = r13;
    call_005cf3bc(r0_1, r0, r1, r2);
    r2_1 = u32(*gptr<u8>(r13 + 0xfu));  // (from the original)
    r0 = 0u;
    r3_1 = *global_0090bc34;
    r12_1 = *gptr<u32>(0x90bc34u + 4);  // (from the original)
    r1 = r0;
    if ((r3_1 & 0xffu) != r2_1) {  // (from the original)
        goto L_6cf310;
    }
    r4_1 = u32(*gptr<u8>(r13 + 0xeu));  // (from the original)
    if (r4_1 == 0x60u) {  // (from the original)
        goto L_6cf310;
    }
    if (r4_1 != 0x61u) {  // (from the original)
        r0 = 1u;
    }
L_6cf310:;
    if (r3_1 << 0x10 >> 0x18 != r2_1) {  // (from the original)
        goto L_6cf334;
    }
    r4_2 = u32(*gptr<u8>(r13 + 0xeu));  // (from the original)
    if (r4_2 == 0x60u) {  // (from the original)
        goto L_6cf334;
    }
    if (r4_2 != 0x61u) {  // (from the original)
        r0 = 1u;
    }
L_6cf334:;
    if (r3_1 << 8 >> 0x18 != r2_1) {  // (from the original)
        goto L_6cf358;
    }
    r4_3 = u32(*gptr<u8>(r13 + 0xeu));  // (from the original)
    if (r4_3 == 0x60u) {  // (from the original)
        goto L_6cf358;
    }
    if (r4_3 != 0x61u) {  // (from the original)
        r0 = 1u;
    }
L_6cf358:;
    if (r3_1 >> 0x18 != r2_1) {  // (from the original)
        goto L_6cf378;
    }
    r3_2 = u32(*gptr<u8>(r13 + 0xeu));  // (from the original)
    if (r3_2 == 0x60u) {  // (from the original)
        goto L_6cf378;
    }
    if (r3_2 != 0x61u) {  // (from the original)
        r0 = 1u;
    }
L_6cf378:;
    if ((r12_1 & 0xffu) != r2_1) {  // (from the original)
        goto L_6cf398;
    }
    r2_2 = u32(*gptr<u8>(r13 + 0xeu));  // (from the original)
    if (r2_2 == 0x60u) {  // (from the original)
        goto L_6cf398;
    }
    if (r2_2 != 0x61u) {  // (from the original)
        r0 = 1u;
    }
L_6cf398:;
    r3_3 = *gptr<u32>(0x90bc3cu + 4);  // (from the original)
    r12 = u32(*gptr<u8>(r13 + 0xeu));  // (from the original)
    *gptr<u32>(r13) = u32(*global_0090bc3c);
    *gptr<u32>(r13 + 4) = u32(r3_3);
    r2 = r13;
    if (u32(*gptr<u8>(r13)) == r12) {
        r1 = 1u;
    }
    r3 = 3u;
    do {
L_6cf3bc:;
        ea_1 = r2 + 1u;
        zf_1 = u32(*gptr<u8>(ea_1)) == r12;
        ea_2 = r2 + 2u;
        r2 = ea_2;
        if (zf_1) {
            r1 = 1u;
        }
        if (u32(*gptr<u8>(ea_2)) == r12) {
            r1 = 1u;
        }
        res_1 = r3 - 1u;
        r3 = res_1;
        guest::preempt();
    } while (res_1 != 0);
    r0_2 = r0 | r1;
    r13 = r13 + 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0_2;
}

}  // namespace d_006cf2c0
GUEST_EXPORT(0x006cf2c0, d_006cf2c0::f_006cf2c0);

// f_006cf534: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006cf534 {

inline guest::global<u32, 0x0090bc50> global_0090bc50;  // (from the original)
inline constexpr guest::Function<0x005cf3bc, u32(u32, u32, u32, u32)> call_005cf3bc;  // (from the original)

u32 f_006cf534(u32 r0, u32 r1, u32 r2) {
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r1_1 = 0;
    r13 = r13 - 0x10u;  // (from the original)
    r0_1 = r13;
    guest::cpu()->r[13] = r13;
    call_005cf3bc(r0_1, r0, r1, r2);
    r0_2 = 0u;
    r1_1 = *global_0090bc50 & 0xffu;  // (from the original)
    if (r1_1 == u32(*gptr<u8>(r13 + 7u))) {
        r0_2 = 1u;
    }
    r13 = r13 + 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1_1;
    guest::cpu()->r[13] = r13;
    return r0_2;
}

}  // namespace d_006cf534
GUEST_EXPORT(0x006cf534, d_006cf534::f_006cf534);
