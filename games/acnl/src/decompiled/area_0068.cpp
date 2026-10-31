// Functions decompiled by tools/decomp (docs/decomp.md), each proved equal to the recompiled original (prove-cpp). The
// names are generated (d_<address>::f_<address>, Object_<address>_<argument>, word_<offset>) and still to be chosen.
#include "guest/guest.hpp"
#include "player/slot_object.hpp"

#include <bit>

using guest::gptr;

// f_00681214: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00681214 {

inline constexpr guest::Function<0x002fe7dd, u32(u32, u32, u32, u32)> call_002fe7dc;  // (from the original)

u32 f_00681214(u32 r0_unused, u32 r1, float S0, float S1, float S2) {
    u32 r0 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 0x18u;  // (from the original)
    if ((*gptr<u32>(0x94df50u) & 1u) == 0) {  // (from the original)
        r0 = 0x94df50u;  // (from the original)
        guest::cpu()->r[13] = r13;
        guest::cpu()->s[0] = S0;
        guest::cpu()->s[1] = S1;
        guest::cpu()->s[2] = S2;
        r0 = call_002fe7dc(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    }
    S0 = std::bit_cast<float>(*gptr<u32>(0x68128cu));  // (from the original)
    r4 = 0x98570cu;  // (from the original)
    S1 = std::bit_cast<float>(*gptr<u32>(0x886a24u));  // (from the original)
    r0 = r13;
    *gptr<u32>(r0) = u32(std::bit_cast<u32>(S0));
    *gptr<u32>(r0 + 4) = u32(std::bit_cast<u32>(S1));
    *gptr<u32>(r0 + 8) = u32(std::bit_cast<u32>(S0));
    *gptr<u32>(r4) = u32(*gptr<u32>(r0));
    r1 = *gptr<u32>(r0 + 4u);
    *gptr<u32>(r4 + 4u) = u32(r1);
    *gptr<u32>(r4 + 8u) = u32(*gptr<u32>(r0 + 8u));
    r0 = r4;
    r13 = r13 + 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    return r0;
}

}  // namespace d_00681214
GUEST_EXPORT(0x00681214, d_00681214::f_00681214);

// f_00681294: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00681294 {

inline constexpr guest::Function<0x002fe7dd, u32(u32, u32, u32, u32)> call_002fe7dc;  // (from the original)

u32 f_00681294(u32 r0_unused, u32 r1, float S0, float S1, float S2) {
    u32 r0 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 0x18u;  // (from the original)
    if ((*gptr<u32>(0x94df54u) & 1u) == 0) {  // (from the original)
        r0 = 0x94df54u;  // (from the original)
        guest::cpu()->r[13] = r13;
        guest::cpu()->s[0] = S0;
        guest::cpu()->s[1] = S1;
        guest::cpu()->s[2] = S2;
        r0 = call_002fe7dc(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    }
    r4 = 0x985718u;  // (from the original)
    S2 = std::bit_cast<float>(*gptr<u32>(0x886a30u));  // (from the original)
    S1 = std::bit_cast<float>(*gptr<u32>(0x886a2cu));  // (from the original)
    S0 = std::bit_cast<float>(*gptr<u32>(0x886a28u));  // (from the original)
    r0 = r13;
    *gptr<u32>(r0) = u32(std::bit_cast<u32>(S0));
    *gptr<u32>(r0 + 4) = u32(std::bit_cast<u32>(S1));
    *gptr<u32>(r0 + 8) = u32(std::bit_cast<u32>(S2));
    *gptr<u32>(r4) = u32(*gptr<u32>(r0));
    r1 = *gptr<u32>(r0 + 4u);
    *gptr<u32>(r4 + 4u) = u32(r1);
    *gptr<u32>(r4 + 8u) = u32(*gptr<u32>(r0 + 8u));
    r0 = r4;
    r13 = r13 + 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    return r0;
}

}  // namespace d_00681294
GUEST_EXPORT(0x00681294, d_00681294::f_00681294);

// f_00681c14: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00681c14 {

struct __attribute__((packed)) Object_00681c14_0 {
    u8 unknown_0[0x171];  // (not used here)
    u8 byte_171;
    u8 unknown_172[0x758];  // (not used here)
    u8 byte_8ca;
    u8 byte_8cb;
    u8 unknown_8cc[0x4];  // (not used here)
    u8 byte_8d0;
};
GUEST_OFFSET(Object_00681c14_0, byte_171, 0x171);  // (from the original)
GUEST_OFFSET(Object_00681c14_0, byte_8ca, 0x8ca);  // (from the original)
GUEST_OFFSET(Object_00681c14_0, byte_8cb, 0x8cb);  // (from the original)
GUEST_OFFSET(Object_00681c14_0, byte_8d0, 0x8d0);  // (from the original)

inline constexpr guest::Function<0x002fc20c, u32(u32, u32, u32, u32)> call_002fc20c;  // (from the original)
inline constexpr guest::Function<0x002fc8e8, u32(u32, u32, u32, u32)> call_002fc8e8;  // (from the original)
inline constexpr guest::Function<0x00597784, u32(u32, u32, u32, u32)> call_00597784;  // (from the original)
inline constexpr guest::Function<0x006606e0, u32(u32, u32, u32, u32)> call_006606e0;  // (from the original)
inline constexpr guest::Function<0x0067bc50, u32(u32, u32, u32, u32)> call_0067bc50;  // (from the original)

u32 f_00681c14(gptr<Object_00681c14_0> arg0, u32 r1_unused, u32 r2_unused, u32 r3) {
    u32 ea = 0;
    u32 r0 = arg0.addr();
    u32 r1 = 0;
    u32 r2 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r13 = guest::cpu()->r[13];
    *gptr<u32>(r13 + 0xffffffe0u) = u32(r3);  // (from the original)
    r13 = r13 - 0x20;  // (from the original)
    r5 = r0;
    ea = r0 + 0x171u;  // (from the original)
    r0 = ea;
    r1 = u32(arg0->byte_171);
    if ((r1 & 1u) == 0) {
        goto L_681cb0;
    }
    arg0->byte_171 = u8(r1 & ~1u);
    r4 = r5 + 0x8cau;  // (from the original)
    if (u32(arg0->byte_8d0) == 0) {
        r6 = 0u;
    } else {
        r6 = 1u;
    }
    r8 = sxtb(u32(arg0->byte_8ca));
    r1 = r8;
    r7 = sxtb(u32(arg0->byte_8cb));
    r2 = r7;
    r0 = r5;
    guest::cpu()->r[13] = r13;
    r0 = call_006606e0(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    r2 = r7;
    r1 = r8;
    r0 = r5;
    guest::cpu()->r[13] = r13;
    r0 = call_00597784(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r6 == 0) {
        goto L_681cb0;
    }
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_002fc20c(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    *gptr<u32>(r0) = u32(*gptr<u32>(r4 + 2u));
    r1 = r13;
    r0 = r5 + 0x93cu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002fc8e8(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r5;
    guest::cpu()->r[13] = r13;
    r0 = call_0067bc50(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r0 = r13;
L_681cb0:;
    r13 = r13 + 0x20;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_00681c14
GUEST_EXPORT(0x00681c14, d_00681c14::f_00681c14);

// f_00681cb8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00681cb8 {

struct __attribute__((packed)) Object_00681cb8_0 {
    u8 unknown_0[0x171];  // (not used here)
    u8 byte_171;
    u8 unknown_172[0x758];  // (not used here)
    u8 byte_8ca;
    u8 byte_8cb;
    u8 unknown_8cc[0xc];  // (not used here)
    u8 byte_8d8;
};
GUEST_OFFSET(Object_00681cb8_0, byte_171, 0x171);  // (from the original)
GUEST_OFFSET(Object_00681cb8_0, byte_8ca, 0x8ca);  // (from the original)
GUEST_OFFSET(Object_00681cb8_0, byte_8cb, 0x8cb);  // (from the original)
GUEST_OFFSET(Object_00681cb8_0, byte_8d8, 0x8d8);  // (from the original)

inline constexpr guest::Function<0x002fc20c, u32(u32, u32, u32, u32)> call_002fc20c;  // (from the original)
inline constexpr guest::Function<0x002fc8e8, u32(u32, u32, u32, u32)> call_002fc8e8;  // (from the original)
inline constexpr guest::Function<0x002fcaf4, u32(u32, u32, u32, u32)> call_002fcaf4;  // (from the original)
inline constexpr guest::Function<0x002fe8a8, u32(u32, u32, u32, u32)> call_002fe8a8;  // (from the original)
inline constexpr guest::Function<0x00597784, u32(u32, u32, u32, u32)> call_00597784;  // (from the original)
inline constexpr guest::Function<0x00660724, u32(u32, u32, u32, u32)> call_00660724;  // (from the original)
inline constexpr guest::Function<0x0067bc50, u32(u32, u32, u32, u32)> call_0067bc50;  // (from the original)

u32 f_00681cb8(gptr<Object_00681cb8_0> arg0, u32 r1_unused, u32 r2, u32 r3) {
    u32 ea = 0;
    u32 res = 0;
    u32 r0 = arg0.addr();
    u32 r1 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r9 = guest::cpu()->r[9];
    u32 r13 = guest::cpu()->r[13];
    *gptr<u32>(r13 + 0xffffffe0u) = u32(r3);  // (from the original)
    r13 = r13 - 0x20;  // (from the original)
    r5 = r0;
    ea = r0 + 0x171u;  // (from the original)
    r0 = ea;
    r1 = u32(arg0->byte_171);
    if ((r1 & 1u) == 0) {
        goto L_681db4;
    }
    arg0->byte_171 = u8(r1 & ~1u);
    r0 = u32(arg0->byte_8d8);
    r4 = r5 + 0x8cau;  // (from the original)
    r6 = (r0 & 8u) >> 3;
    res = (r0 & 2u) >> 1;
    r9 = sxtb(u32(arg0->byte_8ca));
    r1 = u32(arg0->byte_8cb);
    r8 = sxtb(r1);
    if (res != 0) {
        r0 = r13;
        guest::cpu()->r[13] = r13;
        r0 = call_002fc20c(r0, r1, r2, r3);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        *gptr<u32>(r0) = u32(*gptr<u32>(r4 + 2u));
        r1 = r13;
        r0 = r5 + 0x93cu;  // (from the original)
        guest::cpu()->r[13] = r13;
        r0 = call_002fc8e8(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r0 = r5;
        guest::cpu()->r[13] = r13;
        r0 = call_0067bc50(r0, r1, r2, r3);
        r3 = guest::cpu()->r[3];
    }
    r2 = r8;
    r1 = r9;
    r0 = r5;
    guest::cpu()->r[13] = r13;
    r0 = call_00660724(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r7 = u32(*gptr<u8>(r5 + 0x1acu));  // (from the original)
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_002fc20c(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = *gptr<u32>(r4 + 2u);
    *gptr<u32>(r0) = u32(r1);
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_002fcaf4(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 != 0) {
        goto L_681d8c;
    }
    r0 = r7;
    guest::cpu()->r[13] = r13;
    r0 = call_002fe8a8(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        goto L_681d8c;
    }
    r1 = r13;
    r0 = r0 + 0x26u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002fc8e8(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
L_681d8c:;
    r0 = r13;
    if (r6 == 0) {
        goto L_681db4;
    }
    r2 = r8;
    r1 = r9;
    r0 = r5;
    ea = r13;
    r13 = r13 + 0x20;  // (from the original)
    r3 = *gptr<u32>(ea);
    guest::cpu()->r[13] = r13;
    return call_00597784(r0, r1, r2, r3);
L_681db4:;
    r13 = r13 + 0x20;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_00681cb8
GUEST_EXPORT(0x00681cb8, d_00681cb8::f_00681cb8);

// f_00681db8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00681db8 {

inline constexpr guest::Function<0x002c9868, u32(u32, u32, u32, u32)> call_002c9868;  // (from the original)

u32 f_00681db8() {
    u32 r0 = 0;
    r0 = *gptr<u32>(0x950618u);  // (from the original)
    if (r0 == 0) {
        return r0;
    }
    return call_002c9868(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_00681db8
GUEST_EXPORT(0x00681db8, d_00681db8::f_00681db8);

// f_00681f00: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00681f00 {

inline constexpr guest::Function<0x0023ffb8, u32(u32, u32, u32, u32)> call_0023ffb8;  // (from the original)
inline constexpr guest::Function<0x002fe7dd, u32(u32, u32, u32, u32)> call_002fe7dc;  // (from the original)
inline constexpr guest::Function<0x003171b4, u32(u32, u32, u32, u32)> call_003171b4;  // (from the original)
inline constexpr guest::Function<0x006dabd8, u32(u32, u32, u32, u32)> call_006dabd8;  // (from the original)

u32 f_00681f00(u32 r0, u32 r1, u32 r2, float S0, float S1, float S2, float S3) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r13 = guest::cpu()->r[13];
    r5 = r1;
    r13 = r13 - 0x28u;  // (from the original)
    r1 = r0;
    r0 = r13 + 8u;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2;
    guest::cpu()->s[3] = S3;
    r0 = call_0023ffb8(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    S2 = guest::cpu()->s[2];
    S3 = guest::cpu()->s[3];
    r6 = 0x94dea0u;  // (from the original)
    r4 = 0u;
    if (r0 == 0) {
        goto L_681fcc;
    }
    r2 = r13 + 8u;
    r1 = r13 + 4u;
    r0 = r13;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2;
    guest::cpu()->s[3] = S3;
    r0 = call_003171b4(r0, r1, r2, guest::cpu()->r[3]);
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    S2 = guest::cpu()->s[2];
    S3 = guest::cpu()->s[3];
    r1 = *gptr<u32>(r13);
    r2 = *gptr<u32>(r13 + 4);
    if (u32(*gptr<u8>(0x9506b0u)) == 0xffu) {  // (from the original)
        r0 = *gptr<u32>(0x9506b4u);  // (from the original)
        if (r0 == 0) {
            goto L_681fcc;
        }
        guest::cpu()->r[13] = r13;
        guest::cpu()->s[0] = S0;
        guest::cpu()->s[1] = S1;
        guest::cpu()->s[2] = S2;
        guest::cpu()->s[3] = S3;
        r0 = call_006dabd8(r0, r1, r2, guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        S0 = guest::cpu()->s[0];
        S1 = guest::cpu()->s[1];
        S2 = guest::cpu()->s[2];
        S3 = guest::cpu()->s[3];
        r4 = r0;
    }
    if (r4 == 0) {
        goto L_681fe4;
    }
    if ((*gptr<u32>(r6 + 0x5cu) & 1u) == 0) {  // (from the original)
        r0 = 0x94defcu;  // (from the original)
        guest::cpu()->r[13] = r13;
        guest::cpu()->s[0] = S0;
        guest::cpu()->s[1] = S1;
        guest::cpu()->s[2] = S2;
        guest::cpu()->s[3] = S3;
        r0 = call_002fe7dc(r0, r1, r2, guest::cpu()->r[3]);
        r2 = guest::cpu()->r[2];
        S3 = guest::cpu()->s[3];
    }
    r0 = 0x9856dcu;  // (from the original)
    *gptr<u32>(r0) = u32(*gptr<u32>(r4 + 0x14u));  // (from the original)
    r1 = *gptr<u32>(r4 + 0x18u);  // (from the original)
    *gptr<u32>(r0 + 4u) = u32(r1);
    S0 = std::bit_cast<float>(*gptr<u32>(r4 + 0x1cu));  // (from the original)
    r4 = r0;
    S2 = std::bit_cast<float>(*gptr<u32>(0x85f2ccu));  // (from the original)
    *gptr<u32>(r4) = u32(std::bit_cast<u32>(std::bit_cast<float>(*gptr<u32>(r4)) - S2));
    S1 = std::bit_cast<float>(*gptr<u32>(0x85f2d8u));  // (from the original)
    S0 = S0 + S1;
    *gptr<u32>(r4 + 8u) = u32(std::bit_cast<u32>(S0));
L_681fcc:;
    if (r4 == 0) {
        goto L_681fe4;
    }
    if ((*gptr<u32>(r6 + 0x60u) & 1u) == 0) {  // (from the original)
        goto L_681ff0;
    }
    goto L_682004;
L_681fe4:;
    r0 = 0u;
    r13 = r13 + 0x28u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    return r0;
L_681ff0:;
    r0 = 0x94df00u;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2;
    guest::cpu()->s[3] = S3;
    r0 = call_002fe7dc(r0, r1, r2, guest::cpu()->r[3]);
L_682004:;
    r0 = 0x9856e8u;  // (from the original)
    *gptr<u32>(r0) = u32(*gptr<u32>(r4));
    *gptr<u32>(r0 + 4u) = u32(*gptr<u32>(r4 + 4u));
    S1 = std::bit_cast<float>(*gptr<u32>(r4 + 8u));
    S0 = std::bit_cast<float>(*gptr<u32>(0x886860u));  // (from the original)
    r1 = 0x886864u;  // (from the original)
    S3 = std::bit_cast<float>(*gptr<u32>(r0)) - S0;
    S0 = S1 + S0;
    S2 = std::bit_cast<float>(*gptr<u32>(r1));
    *gptr<u32>(r0) = u32(std::bit_cast<u32>(S3));
    *gptr<u32>(r0 + 8u) = u32(std::bit_cast<u32>(S0));
    if (r5 != 0) {
        *gptr<u32>(r5) = u32(std::bit_cast<u32>(S2));
    }
    r0 = 0x9856e8u;  // (from the original)
    r13 = r13 + 0x28u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    return r0;
}

}  // namespace d_00681f00
GUEST_EXPORT(0x00681f00, d_00681f00::f_00681f00);

// f_00682080: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00682080 {

struct __attribute__((packed)) Object_00682080_0 {
    u8 unknown_0[0x171];  // (not used here)
    u8 byte_171;
    u8 unknown_172[0x7ad];  // (not used here)
    u8 byte_91f;
};
GUEST_OFFSET(Object_00682080_0, byte_171, 0x171);  // (from the original)
GUEST_OFFSET(Object_00682080_0, byte_91f, 0x91f);  // (from the original)

inline constexpr guest::Function<0x002fc934, u32(u32, u32, u32, u32)> call_002fc934;  // (from the original)
inline constexpr guest::Function<0x003117bc, u32(u32, u32, u32, u32)> call_003117bc;  // (from the original)
inline constexpr guest::Function<0x004de6f0, u32(u32, u32, u32, u32)> call_004de6f0;  // (from the original)
inline constexpr guest::Function<0x0064d0b8, u32(u32, u32, u32, u32)> call_0064d0b8;  // (from the original)
inline constexpr guest::Function<0x00673a94, u32(u32, u32, u32, u32)> call_00673a94;  // (from the original)
inline constexpr guest::Function<0x0068229c, u32(u32, u32, u32, u32)> call_0068229c;  // (from the original)
inline constexpr guest::Function<0x00683784, u32(u32, u32, u32, u32)> call_00683784;  // (from the original)
inline constexpr guest::Function<0x0070e594, u32(u32, u32, u32, u32)> call_0070e594;  // (from the original)
inline constexpr guest::Function<0x007626c0, u32(u32, u32, u32, u32)> call_007626c0;  // (from the original)

u32 f_00682080(gptr<Object_00682080_0> arg0, u32 r1, u32 r2, u32 r3) {
    u32 res = 0;
    u32 r0 = arg0.addr();
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r13 = guest::cpu()->r[13];
    *gptr<u32>(r13 + 0xfffffff0u) = u32(r3);  // (from the original)
    r13 = r13 - 0x10;  // (from the original)
    r4 = r0;
    r5 = r0 + 0x171u;  // (from the original)
    res = u32(arg0->byte_171) << 0x1a >> 0x1f;  // (from the original)
    if (res == 0) {
        goto L_68228c;
    }
    r0 = u32(arg0->byte_91f);
    if (r0 == 0) {
        r13 = r13 + 0x10;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    r0 = r4;
    guest::cpu()->r[13] = r13;
    r0 = call_007626c0(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 != 0) {
        res = u32(*gptr<u8>(r5 + 1u)) << 0x1e >> 0x1f;  // (from the original)
        if (res == 0) {
            r0 = r4 + 0x1b4u;  // (from the original)
            guest::cpu()->r[13] = r13;
            r0 = call_0070e594(r0, r1, r2, r3);
            r1 = guest::cpu()->r[1];
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
        } else {
            r0 = 0x95bfdcu;  // (from the original)
        }
        guest::cpu()->r[13] = r13;
        r0 = call_003117bc(r0, r1, r2, r3);
        if (r0 == 6u) {
            r3 = 0u;
            r2 = r3;
            r1 = 0x6cu;  // (from the original)
            r0 = r4;
            guest::cpu()->r[13] = r13;
            r0 = call_0064d0b8(r0, r1, r2, r3);
            r1 = guest::cpu()->r[1];
            if (r0 != 0) {
                goto L_682284;
            }
        }
        r0 = r4;
        r3 = 0u;
        r2 = 0x10u;  // (from the original)
        r1 = 0xc3u;  // (from the original)
        guest::cpu()->r[13] = r13;
        r0 = call_0068229c(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        if (r0 != 0) {
            goto L_682284;
        }
        r1 = 0u;
        r0 = r4;
        guest::cpu()->r[13] = r13;
        r0 = call_00683784(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        if (r0 != 0) {
            goto L_682284;
        }
        r0 = r4;
        r3 = 0u;
        r2 = 0x12u;  // (from the original)
        r1 = 0xceu;  // (from the original)
        guest::cpu()->r[13] = r13;
        r0 = call_0068229c(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        if (r0 != 0) {
            goto L_682284;
        }
        r0 = r4;
        r3 = 0u;
        r2 = 0x13u;  // (from the original)
        r1 = 0xcfu;  // (from the original)
        guest::cpu()->r[13] = r13;
        r0 = call_0068229c(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        if (r0 != 0) {
            goto L_682284;
        }
        res = u32(*gptr<u8>(r5 + 1u)) << 0x1e >> 0x1f;  // (from the original)
        if (res == 0) {
            r0 = r4 + 0x1b4u;  // (from the original)
            guest::cpu()->r[13] = r13;
            r0 = call_0070e594(r0, r1, r2, r3);
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
        } else {
            r0 = 0x95bfdcu;  // (from the original)
        }
        r1 = r0;
        r0 = r13;
        guest::cpu()->r[13] = r13;
        r0 = call_002fc934(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r0 = r13;
        guest::cpu()->r[13] = r13;
        r0 = call_003117bc(r0, r1, r2, r3);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        if (r0 != 0xbu) {  // (from the original)
            goto L_682204;
        }
        r1 = r13;
        r0 = r4;
        guest::cpu()->r[13] = r13;
        r0 = call_00673a94(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r5 = r0;
        if (r5 != 0) {
            goto L_682284;
        }
        goto L_682204;
    }
    r0 = *gptr<u32>(0x886ad8u);  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_004de6f0(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    if (r0 == 0) {
        goto L_68228c;
    }
L_682204:;
    r0 = r4;
    r3 = 0u;
    r2 = 0xdu;  // (from the original)
    r1 = 0x8fu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0068229c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    if (r0 != 0) {
        goto L_682284;
    }
    r0 = r4;
    r3 = 0u;
    r2 = 7u;
    r1 = 0x90u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0068229c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    if (r0 != 0) {
        goto L_682284;
    }
    r0 = r4;
    r3 = 0u;
    r2 = 0x11u;  // (from the original)
    r1 = 0x91u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0068229c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    if (r0 != 0) {
        goto L_682284;
    }
    r0 = r4;
    r3 = 0u;
    r2 = 0x14u;  // (from the original)
    r1 = 0xd0u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0068229c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    if (r0 == 0) {
        goto L_68228c;
    }
L_682284:;
    r0 = 1u;
    r13 = r13 + 0x10;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
L_68228c:;
    r0 = 0u;
    r13 = r13 + 0x10;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_00682080
GUEST_EXPORT(0x00682080, d_00682080::f_00682080);

// f_0068229c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0068229c {

struct __attribute__((packed)) Object_0068229c_0 {
    u8 unknown_0[0x172];  // (not used here)
    u8 byte_172;
};
GUEST_OFFSET(Object_0068229c_0, byte_172, 0x172);  // (from the original)

inline constexpr guest::Function<0x003117bc, u32(u32, u32, u32, u32)> call_003117bc;  // (from the original)
inline constexpr guest::Function<0x0064d0b8, u32(u32, u32, u32, u32)> call_0064d0b8;  // (from the original)
inline constexpr guest::Function<0x0070e594, u32(u32, u32, u32, u32)> call_0070e594;  // (from the original)

u32 f_0068229c(gptr<Object_0068229c_0> arg0, u32 r1, u32 r2, u32 r3) {
    u32 res = 0;
    u32 r0 = arg0.addr();
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    guest::cpu()->r[13] -= 0x18u;  // (from the original)
    r4 = r0;
    r7 = r1;
    r5 = r2;
    r6 = r3;
    res = u32(arg0->byte_172) << 0x1e >> 0x1f;  // (from the original)
    if (res == 0) {
        r0 = r4 + 0x1b4u;  // (from the original)
        r0 = call_0070e594(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
    } else {
        r0 = 0x95bfdcu;  // (from the original)
    }
    r0 = call_003117bc(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    if (r0 != r5) {
        r0 = 0u;
        goto L_6822fc;
    }
    if (r6 != 0) {
        r0 = 1u;
        goto L_6822fc;
    }
    r1 = r7;
    r0 = r4;
    guest::cpu()->r[13] += 0x18u;  // (from the original)
    r3 = 0u;
    r2 = r3;
    return call_0064d0b8(r0, r1, r2, r3);
L_6822fc:;
    guest::cpu()->r[13] += 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_0068229c
GUEST_EXPORT(0x0068229c, d_0068229c::f_0068229c);

// f_00682330: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00682330 {

inline constexpr guest::Function<0x005d41fc, u32(u32, u32, u32, u32)> call_005d41fc;  // (from the original)
inline constexpr guest::Function<0x0064d0b8, u32(u32, u32, u32, u32)> call_0064d0b8;  // (from the original)
inline constexpr guest::Function<0x00656c20, u32(u32, u32, u32, u32)> call_00656c20;  // (from the original)

u32 f_00682330(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r9 = guest::cpu()->r[9];
    u32 r10 = guest::cpu()->r[10];
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 0x20;  // (from the original)
    r6 = r2;
    r7 = r3;
    r10 = r0;
    r5 = *gptr<u32>(r13 + 0x20u);  // (from the original)
    r9 = r1;
    guest::cpu()->r[13] = r13;
    r0 = call_00656c20(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r8 = r0;
    r4 = r0 + 0xeu;  // (from the original)
    *gptr<u8>(r4) = u8(3u);
    r1 = r9;
    r0 = r4 + 1u;
    guest::cpu()->r[13] = r13;
    r0 = call_005d41fc(r0, r1, r2, r3);
    *gptr<u8>(r8 + 0x13u) = u8(u32(s32(r6) >> 8));  // (from the original)
    *gptr<u8>(r8 + 0x14u) = u8(r7);  // (from the original)
    r2 = r8;
    r0 = r10;
    *gptr<u8>(r4 + 7u) = u8(r5);
    r13 = r13 + 0x20;  // (from the original)
    r3 = 0u;
    r1 = 0x3au;  // (from the original)
    guest::cpu()->r[13] = r13;
    return call_0064d0b8(r0, r1, r2, r3);
}

}  // namespace d_00682330
GUEST_EXPORT(0x00682330, d_00682330::f_00682330);

// f_006833ac: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006833ac {

struct __attribute__((packed)) Object_006833ac_0 {
    u8 unknown_0[0x176];  // (not used here)
    u8 byte_176;
};
GUEST_OFFSET(Object_006833ac_0, byte_176, 0x176);  // (from the original)


u32 f_006833ac(gptr<Object_006833ac_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r1 = 0;
    r0 = r0 + 0x171u;  // (from the original)
    r1 = u32(arg0->byte_176) & ~8u;
    arg0->byte_176 = u8(r1);
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_006833ac
GUEST_EXPORT(0x006833ac, d_006833ac::f_006833ac);

// f_006833c4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006833c4 {

inline constexpr guest::Function<0x002f74c8, u32(u32, u32, u32, u32)> call_002f74c8;  // (from the original)
inline constexpr guest::Function<0x002f74e0, u32(u32, u32, u32, u32)> call_002f74e0;  // (from the original)
inline constexpr guest::Function<0x003117bc, u32(u32, u32, u32, u32)> call_003117bc;  // (from the original)
inline constexpr guest::Function<0x0064d0b8, u32(u32, u32, u32, u32)> call_0064d0b8;  // (from the original)
inline constexpr guest::Function<0x0067c2e4, u32(u32, u32, u32, u32)> call_0067c2e4;  // (from the original)
inline constexpr guest::Function<0x0070e594, u32(u32, u32, u32, u32)> call_0070e594;  // (from the original)

u32 f_006833c4(gptr<SlotObject> arg0, u32 r1, u32 r2, u32 r3) {
    u32 res = 0;
    u32 r0 = arg0.addr();
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r13 = guest::cpu()->r[13];
    *gptr<u32>(r13 + 0xffffffe8u) = u32(r3);  // (from the original)
    r13 = r13 - 0x18;  // (from the original)
    r4 = r0;
    r6 = r1;
    r0 = u32(u8(arg0->flag_91f));
    if (r0 == 0) {
        goto L_6834f4;
    }
    guest::cpu()->r[13] = r13;
    r0 = call_002f74c8(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = r0;
    r0 = 0x10000000u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002f74e0(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r5 = r4 + 0x907u;  // (from the original)
    if (r0 == 0) {
        r0 = u32(*gptr<u8>(r5));
    } else {
        r0 = u32(*gptr<u8>(r4 + 0x8f3u));  // (from the original)
    }
    res = r0 << 0x19 >> 0x1f;  // (from the original)
    r0 = res;
    if (res == 0) {
        goto L_6834f0;
    }
    guest::cpu()->r[13] = r13;
    r0 = call_002f74c8(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = r0;
    r0 = 0x10000000u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002f74e0(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        r0 = u32(*gptr<u8>(r4 + 0x91bu));  // (from the original)
    } else {
        r0 = u32(*gptr<u8>(r5));
    }
    res = r0 << 0x19 >> 0x1f;  // (from the original)
    if (res != 0) {
        goto L_6834f0;
    }
    r5 = r4 + 0x171u;  // (from the original)
    r1 = 1u;
    res = u32(*gptr<u8>(r4 + 0x174u)) << 0x1e >> 0x1f;  // (from the original)
    r2 = res;
    if (res == 0) {
        goto L_6834f0;
    }
    *gptr<u8>(r13) = u8(r1);
    res = u32(*gptr<u8>(r5 + 1u)) << 0x1e >> 0x1f;  // (from the original)
    if (res == 0) {
        r0 = r4 + 0x1b4u;  // (from the original)
        guest::cpu()->r[13] = r13;
        r0 = call_0070e594(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
    } else {
        r0 = 0x95bfdcu;  // (from the original)
    }
    guest::cpu()->r[13] = r13;
    r0 = call_003117bc(r0, r1, r2, r3);
    r7 = r0;
    r3 = r6;
    r2 = 0u;
    r1 = r13;
    r0 = r4;
    guest::cpu()->r[13] = r13;
    r0 = call_0067c2e4(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 != 0) {
        goto L_683514;
    }
    if (r7 != 4u) {
        goto L_6834f0;
    }
    res = u32(*gptr<u8>(r5 + 1u)) << 0x1e >> 0x1f;  // (from the original)
    if (res == 0) {
        r0 = r4 + 0x1b4u;  // (from the original)
        guest::cpu()->r[13] = r13;
        r0 = call_0070e594(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
    } else {
        r0 = 0x95bfdcu;  // (from the original)
    }
    guest::cpu()->r[13] = r13;
    r0 = call_003117bc(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    if (r0 == 4u) {
        if (r6 != 0) {
            goto L_683514;
        }
        r3 = 0u;
        r2 = r3;
        r1 = 0x70u;  // (from the original)
        r0 = r4;
        guest::cpu()->r[13] = r13;
        r0 = call_0064d0b8(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        if (r0 != 0) {
            goto L_683514;
        }
    }
    if (u32(*gptr<u8>(r13)) == 0) {
        goto L_6834f8;
    }
L_6834f0:;
    r0 = 0u;
L_6834f4:;
    r13 = r13 + 0x18;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
L_6834f8:;
    if (r6 != 0) {
        goto L_683514;
    }
    r3 = 0u;
    r2 = r3;
    r1 = 0x1eu;  // (from the original)
    r0 = r4;
    guest::cpu()->r[13] = r13;
    r0 = call_0064d0b8(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
L_683514:;
    r0 = 1u;
    r13 = r13 + 0x18;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_006833c4
GUEST_EXPORT(0x006833c4, d_006833c4::f_006833c4);

// f_006839a8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006839a8 {

inline constexpr guest::Function<0x00582c9c, u32(u32, u32, u32, u32)> call_00582c9c;  // (from the original)
inline constexpr guest::Function<0x005c5794, u32(u32, u32, u32, u32)> call_005c5794;  // (from the original)
inline constexpr guest::Function<0x0064d0b8, u32(u32, u32, u32, u32)> call_0064d0b8;  // (from the original)
inline constexpr guest::Function<0x006515ec, u32(u32, u32, u32, u32)> call_006515ec;  // (from the original)
inline constexpr guest::Function<0x00656c20, u32(u32, u32, u32, u32)> call_00656c20;  // (from the original)
inline constexpr guest::Function<0x0076ae1c, u32(u32, u32, u32, u32)> call_0076ae1c;  // (from the original)
inline constexpr guest::Function<0x0076c440, u32(u32, u32, u32, u32)> call_0076c440;  // (from the original)

u32 f_006839a8(u32 r0, u32 r1, u32 r2, u32 r3) {
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
    r5 = r0;
    r7 = r1;
    r1 = r13 + 0x20u;  // (from the original)
    r8 = r2;
    r4 = *gptr<u32>(r1);
    r6 = *gptr<u32>(r1 + 4);
    r9 = r3;
    guest::cpu()->r[13] = r13;
    r0 = call_00656c20(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r10 = r0;
    ea = r0 + 0xeu;  // (from the original)
    *gptr<u8>(ea) = u8(r7);
    r0 = ea;
    *gptr<u8>(r0 + 1u) = u8(r8);
    *gptr<u8>(r0 + 2u) = u8(r9);
    r1 = *gptr<u32>(r4);
    *gptr<u32>(r0 + 3u) = u32(r1);
    *gptr<u8>(r0 + 7u) = u8(r6);
    r0 = r4;
    guest::cpu()->r[13] = r13;
    r0 = call_0076c440(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        goto L_683a40;
    }
    r6 = r4;
    r0 = r4;
    guest::cpu()->r[13] = r13;
    r0 = call_0076c440(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        goto L_683a38;
    }
    r0 = u32(*gptr<u8>(r5 + 0x1acu));  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_006515ec(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r4 = r0;
    if (r0 == 0) {
        goto L_683a38;
    }
    r0 = r6;
    guest::cpu()->r[13] = r13;
    r0 = call_0076ae1c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 >= 0x64u) {  // (from the original)
        goto L_683a38;
    }
    r1 = uxth(r0);
    r0 = r4 + 0x5494u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00582c9c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
L_683a38:;
    r0 = u32(*gptr<u8>(r5 + 0x1acu));  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_005c5794(r0, r1, r2, r3);
L_683a40:;
    r2 = r10;
    r0 = r5;
    r13 = r13 + 0x20;  // (from the original)
    r3 = 0u;
    r1 = 0xb9u;  // (from the original)
    guest::cpu()->r[13] = r13;
    return call_0064d0b8(r0, r1, r2, r3);
}

}  // namespace d_006839a8
GUEST_EXPORT(0x006839a8, d_006839a8::f_006839a8);

// f_006853fc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006853fc {

inline constexpr guest::Function<0x0014f9ac, u32(u32, u32, u32, u32)> call_0014f9ac;  // (from the original)
inline constexpr guest::Function<0x001b7ce8, u32(u32, u32, u32, u32)> call_001b7ce8;  // (from the original)
inline constexpr guest::Function<0x00290108, u32(u32, u32, u32, u32)> call_00290108;  // (from the original)
inline constexpr guest::Function<0x00305f44, u32(u32, u32, u32, u32)> call_00305f44;  // (from the original)
inline constexpr guest::Function<0x0064f068, u32(u32, u32, u32, u32)> call_0064f068;  // (from the original)
inline constexpr guest::Function<0x0070cc5c, u32(u32, u32, u32, u32)> call_0070cc5c;  // (from the original)
inline constexpr guest::Function<0x00768044, u32(u32, u32, u32, u32)> call_00768044;  // (from the original)

u32 f_006853fc(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 ea = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r13 = guest::cpu()->r[13];
    u32 r14 = guest::cpu()->r[14];
    goto L_6853fc;
L_24f4fc:;
    r0 = 0x9853b0u;  // (from the original)
    ea = r13 - 0x10;  // (from the original)
    *gptr<u32>(ea) = u32(r4);
    *gptr<u32>(ea + 4) = u32(r5);
    *gptr<u32>(ea + 8) = u32(r6);
    *gptr<u32>(ea + 0xc) = u32(r14);  // (from the original)
    r13 = r13 - 0x10;  // (from the original)
    r4 = *gptr<u32>(r0);
    r5 = *gptr<u32>(r0 + 4);
    if (r4 == r5) {
        goto L_24f530;
    }
    do {
L_24f510:;
        r0 = *gptr<u32>(r4);
        if (r0 != 0) {
            r0 = r0 + 0x1334u;  // (from the original)
            guest::cpu()->r[13] = r13;
            r0 = call_0014f9ac(r0, r1, r2, r3);
            r1 = guest::cpu()->r[1];
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
        }
        r4 = r4 + 4u;
        guest::preempt();
    } while (r4 != r5);
L_24f530:;
    ea = r13;
    r13 = r13 + 0x10;  // (from the original)
    r4 = *gptr<u32>(ea);
    r5 = *gptr<u32>(ea + 4);
    r6 = *gptr<u32>(ea + 8);
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[4] = r4;
    guest::cpu()->r[5] = r5;
    guest::cpu()->r[6] = r6;
    guest::cpu()->r[13] = r13;
    return r0;
L_6853fc:;
    ea = r13 - 0x10;  // (from the original)
    *gptr<u32>(ea) = u32(r4);
    *gptr<u32>(ea + 4) = u32(r5);
    *gptr<u32>(ea + 8) = u32(r6);
    *gptr<u32>(ea + 0xc) = u32(r14);  // (from the original)
    r13 = r13 - 0x10;  // (from the original)
    r5 = r1;
    guest::cpu()->r[13] = r13;
    r0 = call_00290108(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = 0x40u;  // (from the original)
    r0 = 2u;
    guest::cpu()->r[13] = r13;
    r0 = call_0064f068(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 != 0) {
        r0 = 0x95c71cu;  // (from the original)
        r4 = *gptr<u32>(r0);
        if (r4 == 0) {
            goto L_685470;
        }
        guest::cpu()->r[13] = r13;
        r0 = call_00305f44(r0, r1, r2, r3);
        r1 = r0;
        r3 = r5;
        r2 = 1u;
        r0 = r4;
        guest::cpu()->r[13] = r13;
        r0 = call_001b7ce8(r0, r1, r2, r3);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r1 = r5;
        r0 = r4;
        ea = r13;
        r13 = r13 + 0x10;  // (from the original)
        r4 = *gptr<u32>(ea);
        r5 = *gptr<u32>(ea + 4);
        r6 = *gptr<u32>(ea + 8);
        r14 = *gptr<u32>(ea + 0xc);  // (from the original)
        guest::cpu()->r[13] = r13;
        guest::cpu()->r[4] = r4;
        guest::cpu()->r[5] = r5;
        guest::cpu()->r[6] = r6;
        return call_0070cc5c(r0, r1, r2, r3);
    }
    r0 = r5;
    guest::cpu()->r[13] = r13;
    r0 = call_00768044(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 != 0) {
        goto L_685470;
    }
    ea = r13;
    r13 = r13 + 0x10;  // (from the original)
    r4 = *gptr<u32>(ea);
    r5 = *gptr<u32>(ea + 4);
    r6 = *gptr<u32>(ea + 8);
    r14 = *gptr<u32>(ea + 0xc);  // (from the original)
    guest::preempt();
    goto L_24f4fc;
L_685470:;
    ea = r13;
    r13 = r13 + 0x10;  // (from the original)
    r4 = *gptr<u32>(ea);
    r5 = *gptr<u32>(ea + 4);
    r6 = *gptr<u32>(ea + 8);
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[4] = r4;
    guest::cpu()->r[5] = r5;
    guest::cpu()->r[6] = r6;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_006853fc
GUEST_EXPORT(0x006853fc, d_006853fc::f_006853fc);

// f_00685c18: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00685c18 {

struct __attribute__((packed)) Object_00685c18_0 {
    u8 unknown_0[0x171];  // (not used here)
    u8 byte_171;
};
GUEST_OFFSET(Object_00685c18_0, byte_171, 0x171);  // (from the original)

inline constexpr guest::Function<0x002f74c8, u32(u32, u32, u32, u32)> call_002f74c8;  // (from the original)
inline constexpr guest::Function<0x002f74e0, u32(u32, u32, u32, u32)> call_002f74e0;  // (from the original)
inline constexpr guest::Function<0x0068f290, u32(u32, u32, u32, u32)> call_0068f290;  // (from the original)

u32 f_00685c18(gptr<Object_00685c18_0> arg0, u32 r1) {
    u32 res = 0;
    u32 r0 = arg0.addr();
    u32 r4 = guest::cpu()->r[4];
    guest::cpu()->r[13] -= 8u;
    r4 = r0 + 0x171u;  // (from the original)
    res = u32(arg0->byte_171) << 0x1a >> 0x1f;  // (from the original)
    r0 = res;
    if (res == 0) {
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r0 = call_002f74c8(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = r0;
    r0 = 0x10000000u;  // (from the original)
    r0 = call_002f74e0(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 == 0) {
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    res = u32(*gptr<u8>(r4 + 5u)) << 0x1c >> 0x1f;  // (from the original)
    r0 = res;
    if (res != 0) {
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r0 = call_0068f290(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r0 = u32(*gptr<u8>(r4 + 5u)) | 8u;
    *gptr<u8>(r4 + 5u) = u8(r0);
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_00685c18
GUEST_EXPORT(0x00685c18, d_00685c18::f_00685c18);

// f_00685d7c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00685d7c {

inline constexpr guest::Function<0x0064d0b8, u32(u32, u32, u32, u32)> call_0064d0b8;  // (from the original)
inline constexpr guest::Function<0x00656c20, u32(u32, u32, u32, u32)> call_00656c20;  // (from the original)

u32 f_00685d7c(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 ea = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 0x18;  // (from the original)
    r6 = r1;
    r4 = r2;
    r5 = r3;
    r7 = r0;
    guest::cpu()->r[13] = r13;
    r0 = call_00656c20(r0, r1, r2, r3);
    ea = r6;
    r2 = r0;
    r3 = 0u;
    r1 = u32(s32(u32(*gptr<u16>(ea))) >> 8);
    ea = r0 + 0xeu;  // (from the original)
    *gptr<u8>(ea) = u8(r1);
    r0 = ea;
    r1 = 0xb8u;  // (from the original)
    *gptr<u8>(r0 + 1u) = u8(r4);
    *gptr<u8>(r0 + 2u) = u8(r5);
    r0 = r7;
    r13 = r13 + 0x18;  // (from the original)
    guest::cpu()->r[13] = r13;
    return call_0064d0b8(r0, r1, r2, r3);
}

}  // namespace d_00685d7c
GUEST_EXPORT(0x00685d7c, d_00685d7c::f_00685d7c);

// f_00687394: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00687394 {

inline constexpr guest::Function<0x001b7ce8, u32(u32, u32, u32, u32)> call_001b7ce8;  // (from the original)
inline constexpr guest::Function<0x00305f44, u32(u32, u32, u32, u32)> call_00305f44;  // (from the original)
inline constexpr guest::Function<0x0064f068, u32(u32, u32, u32, u32)> call_0064f068;  // (from the original)
inline constexpr guest::Function<0x0070cc5c, u32(u32, u32, u32, u32)> call_0070cc5c;  // (from the original)

u32 f_00687394(u32 r0_unused, u32 r1_unused, u32 r2, u32 r3) {
    u32 r0 = 0;
    u32 r1 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 0x10;  // (from the original)
    r6 = r3;
    r5 = *gptr<u32>(r13 + 0x14u);  // (from the original)
    r1 = 0x40u;  // (from the original)
    r0 = 5u;
    guest::cpu()->r[13] = r13;
    r0 = call_0064f068(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        r1 = 0x40u;  // (from the original)
        r0 = 9u;
        guest::cpu()->r[13] = r13;
        r0 = call_0064f068(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        if (r0 == 0) {
            goto L_687408;
        }
    }
    r0 = 0x95c71cu;  // (from the original)
    r4 = *gptr<u32>(r0);
    if (r4 == 0) {
        goto L_687408;
    }
    if (r5 != 0) {
        guest::cpu()->r[13] = r13;
        r0 = call_00305f44(r0, r1, r2, r3);
        r1 = r0;
        r3 = r6;
        r2 = 1u;
        r0 = r4;
        guest::cpu()->r[13] = r13;
        r0 = call_001b7ce8(r0, r1, r2, r3);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
    }
    r1 = r6;
    r0 = r4;
    r13 = r13 + 0x10;  // (from the original)
    guest::cpu()->r[13] = r13;
    return call_0070cc5c(r0, r1, r2, r3);
L_687408:;
    r13 = r13 + 0x10;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_00687394
GUEST_EXPORT(0x00687394, d_00687394::f_00687394);

// f_0068752c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0068752c {

inline constexpr guest::Function<0x0014fd24, u32(u32, u32, u32, u32)> call_0014fd24;  // (from the original)
inline constexpr guest::Function<0x006dfde8, u32(u32, u32, u32, u32)> call_006dfde8;  // (from the original)

u32 f_0068752c(u32 r0, u32 r1, u32 r2) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r13 = guest::cpu()->r[13];
    r4 = r0;
    r6 = 0xae5658u;  // (from the original)
    r13 = r13 - 0x20u;  // (from the original)
    r5 = r1;
    if (u32(*gptr<u8>(0x9506b0u)) == 0xffu) {  // (from the original)
        goto L_687560;
    }
L_687550:;
    r0 = *gptr<u32>(r6);
    r1 = *gptr<u32>(r6 + 4);
    r2 = *gptr<u32>(r6 + 8);
    *gptr<u32>(r4) = u32(r0);
    *gptr<u32>(r4 + 4) = u32(r1);
    *gptr<u32>(r4 + 8) = u32(r2);
    r13 = r13 + 0x20u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
L_687560:;
    r0 = *gptr<u32>(0x9506b4u);  // (from the original)
    if (r0 == 0) {
        guest::preempt();
        goto L_687550;
    }
    guest::cpu()->r[13] = r13;
    r0 = call_006dfde8(r0, r1, r2, guest::cpu()->r[3]);
    if (r0 == 0) {
        r0 = *gptr<u32>(r6);
        r1 = *gptr<u32>(r6 + 4);
        r2 = *gptr<u32>(r6 + 8);
        goto L_687590;
    }
    r2 = r5;
    r1 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_0014fd24(r0, r1, r2, guest::cpu()->r[3]);
    r0 = *gptr<u32>(r13);
    r1 = *gptr<u32>(r13 + 4);
    r2 = *gptr<u32>(r13 + 8);
L_687590:;
    *gptr<u32>(r4) = u32(r0);
    *gptr<u32>(r4 + 4) = u32(r1);
    *gptr<u32>(r4 + 8) = u32(r2);
    r13 = r13 + 0x20u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_0068752c
GUEST_EXPORT(0x0068752c, d_0068752c::f_0068752c);

// f_00687bac: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00687bac {

inline constexpr guest::Function<0x005d41b8, u32(u32, u32, u32, u32)> call_005d41b8;  // (from the original)
inline constexpr guest::Function<0x0064d0b8, u32(u32, u32, u32, u32)> call_0064d0b8;  // (from the original)
inline constexpr guest::Function<0x00656c20, u32(u32, u32, u32, u32)> call_00656c20;  // (from the original)
inline constexpr guest::Function<0x0066a34c, u32(u32, u32, u32, u32)> call_0066a34c;  // (from the original)
inline constexpr guest::Function<0x007656b8, u32(u32, u32, u32, u32)> call_007656b8;  // (from the original)

u32 f_00687bac(u32 r0, u32 r1_unused, u32 r2, u32 r3) {
    u32 res = 0;
    u32 r1 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 0x20u;  // (from the original)
    r4 = r0;
    r1 = r0;
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_007656b8(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r4 + 0x53cu;  // (from the original)
    *gptr<u32>(r4 + 0x14u) = u32(*gptr<u32>(r13));  // (from the original)
    *gptr<u32>(r4 + 0x18u) = u32(*gptr<u32>(r13 + 4u));  // (from the original)
    *gptr<u32>(r4 + 0x1cu) = u32(*gptr<u32>(r13 + 8u));  // (from the original)
    *gptr<u32>(r4 + 0x20u) = u32(*gptr<u32>(r13));  // (from the original)
    *gptr<u32>(r4 + 0x24u) = u32(*gptr<u32>(r13 + 4u));  // (from the original)
    *gptr<u32>(r4 + 0x28u) = u32(*gptr<u32>(r13 + 8u));  // (from the original)
    r1 = 0xae5658u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_005d41b8(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0 = call_0066a34c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    *gptr<u32>(r13 + 0xcu) = u32(r0);  // (from the original)
    r0 = u32(*gptr<u16>(r13 + 0xcu));  // (from the original)
    *gptr<u16>(r4 + 0x2eu) = u16(r0);  // (from the original)
    *gptr<u16>(r4 + 0x34u) = u16(r0);  // (from the original)
    r0 = u32(*gptr<u8>(r4 + 0x1a9u));  // (from the original)
    if (r0 == 3u) {
        r13 = r13 + 0x20u;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    r0 = r4 + 0x171u;  // (from the original)
    res = u32(*gptr<u8>(r4 + 0x171u)) << 0x1a >> 0x1f;  // (from the original)
    r1 = res;
    if (res == 0) {
        r13 = r13 + 0x20u;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    res = u32(*gptr<u8>(r0 + 6u)) << 0x1d >> 0x1f;  // (from the original)
    r0 = res;
    if (res != 0) {
        r13 = r13 + 0x20u;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    r0 = u32(*gptr<u8>(r4 + 0x91cu));  // (from the original)
    if (r0 != 2u) {
        r13 = r13 + 0x20u;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    r5 = r4;
    r4 = 0u;
    r0 = r5;
    guest::cpu()->r[13] = r13;
    r0 = call_00656c20(r0, r1, r2, r3);
    r2 = r0;
    *gptr<u8>(r0 + 0xeu) = u8(r4);  // (from the original)
    r3 = 0u;
    r1 = 0xbfu;  // (from the original)
    r0 = r5;
    guest::cpu()->r[13] = r13;
    r0 = call_0064d0b8(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r13 = r13 + 0x20u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_00687bac
GUEST_EXPORT(0x00687bac, d_00687bac::f_00687bac);

// f_00687f04: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00687f04 {

struct __attribute__((packed)) Object_00687f04_0 {
    u8 unknown_0[0x1ac];  // (not used here)
    u8 byte_1ac;
};
GUEST_OFFSET(Object_00687f04_0, byte_1ac, 0x1ac);  // (from the original)

inline constexpr guest::Function<0x002fc934, u32(u32, u32, u32, u32)> call_002fc934;  // (from the original)
inline constexpr guest::Function<0x002fe8a8, u32(u32, u32, u32, u32)> call_002fe8a8;  // (from the original)
inline constexpr guest::Function<0x005359fc, u32(u32, u32, u32, u32)> call_005359fc;  // (from the original)
inline constexpr guest::Function<0x0076fd38, u32(u32, u32, u32, u32)> call_0076fd38;  // (from the original)
inline constexpr guest::Function<0x0076fe68, u32(u32, u32, u32, u32)> call_0076fe68;  // (from the original)
inline constexpr guest::Function<0x007701b8, u32(u32, u32, u32, u32)> call_007701b8;  // (from the original)

u32 f_00687f04(gptr<Object_00687f04_0> arg0, u32 r1, u32 r2, u32 r3) {
    u32 r0 = arg0.addr();
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r13 = guest::cpu()->r[13];
    *gptr<u32>(r13 + 0xffffffe8u) = u32(r3);  // (from the original)
    r13 = r13 - 0x18;  // (from the original)
    r5 = r0;
    r6 = r1;
    r0 = u32(arg0->byte_1ac);
    r7 = r2;
    guest::cpu()->r[13] = r13;
    r0 = call_002fe8a8(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r4 = r0;
    if (r0 == 0) {
        goto L_687fac;
    }
    r0 = u32(*gptr<u8>(r5 + 0x1acu));  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002fe8a8(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 != 0) {
        r0 = r0 + 0x6c20u;  // (from the original)
        r1 = r6;
        guest::cpu()->r[13] = r13;
        r0 = call_0076fd38(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        if (r0 != 0) {
            goto L_687fac;
        }
    }
    r5 = r4 + 0x6c20u;  // (from the original)
    r1 = r7;
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_002fc934(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = r0;
    r0 = r5;
    guest::cpu()->r[13] = r13;
    r0 = call_007701b8(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r4 = r0;
    if (r4 != 0) {
        goto L_687fac;
    }
    r0 = r6;
    guest::cpu()->r[13] = r13;
    r0 = call_005359fc(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    r4 = *gptr<u32>(r0 + 4u);
    r2 = 1u;
    r1 = r6;
    r0 = r5;
    guest::cpu()->r[13] = r13;
    r0 = call_0076fe68(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r0 = r4 - r0;
    if (r0 == 1u) {
        goto L_687fb0;
    }
L_687fac:;
    r0 = 0u;
L_687fb0:;
    r13 = r13 + 0x18;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_00687f04
GUEST_EXPORT(0x00687f04, d_00687f04::f_00687f04);

// f_00687fb4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00687fb4 {

inline constexpr guest::Function<0x0064d0b8, u32(u32, u32, u32, u32)> call_0064d0b8;  // (from the original)
inline constexpr guest::Function<0x00656c20, u32(u32, u32, u32, u32)> call_00656c20;  // (from the original)

u32 f_00687fb4(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r4 = r1;
    r5 = r0;
    r0 = call_00656c20(r0, r1, r2, r3);
    r2 = r0;
    *gptr<u8>(r0 + 0xeu) = u8(r4);  // (from the original)
    r0 = r5;
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    r3 = 0u;
    r1 = 0xa7u;  // (from the original)
    return call_0064d0b8(r0, r1, r2, r3);
}

}  // namespace d_00687fb4
GUEST_EXPORT(0x00687fb4, d_00687fb4::f_00687fb4);

// f_00687fe0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00687fe0 {

inline constexpr guest::Function<0x0064d0b8, u32(u32, u32, u32, u32)> call_0064d0b8;  // (from the original)
inline constexpr guest::Function<0x00656c20, u32(u32, u32, u32, u32)> call_00656c20;  // (from the original)

u32 f_00687fe0(u32 r0, u32 r1, u32 r2, u32 r3) {
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
    ea = r13 - 0x28;  // (from the original)
    *gptr<u32>(ea) = u32(r3);
    *gptr<u32>(ea + 4) = u32(r4);
    *gptr<u32>(ea + 8) = u32(r5);
    *gptr<u32>(ea + 0xc) = u32(r6);  // (from the original)
    *gptr<u32>(ea + 0x10) = u32(r7);  // (from the original)
    *gptr<u32>(ea + 0x14) = u32(r8);  // (from the original)
    *gptr<u32>(ea + 0x18) = u32(r9);  // (from the original)
    *gptr<u32>(ea + 0x1c) = u32(r10);  // (from the original)
    *gptr<u32>(ea + 0x20) = u32(r11);  // (from the original)
    *gptr<u32>(ea + 0x24) = u32(r14);  // (from the original)
    r13 = r13 - 0x28;  // (from the original)
    r7 = r3;
    r8 = r1;
    r1 = r13 + 0x2cu;  // (from the original)
    r5 = *gptr<u32>(r13 + 0x28u);  // (from the original)
    r4 = *gptr<u32>(r1);
    r6 = *gptr<u32>(r1 + 4);
    r10 = r0;
    r9 = r2;
    guest::cpu()->r[13] = r13;
    r0 = call_00656c20(r0, r1, r2, r3);
    r2 = r0;
    ea = r0 + 0xeu;  // (from the original)
    *gptr<u16>(ea) = u16(r8);
    r0 = ea;
    ea = r13;
    *gptr<u16>(ea) = u16(r9);
    ea = r0 + 2u;
    *gptr<u16>(ea) = u16(r9);
    if (r4 == 0) {
        r4 = r10 + 0x2eu;  // (from the original)
    }
    ea = r2 + 0x14u;  // (from the original)
    *gptr<u8>(ea) = u8(r7);
    ea = r2 + 0x13u;  // (from the original)
    *gptr<u8>(ea) = u8(r5);
    ea = r4;
    r3 = 0u;
    *gptr<u8>(r0 + 4u) = u8(u32(s32(u32(*gptr<u16>(ea))) >> 8));
    *gptr<u8>(r0 + 7u) = u8(r6);
    r13 = r13 + 4u;
    r0 = r10;
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
    r1 = 0xc5u;  // (from the original)
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

}  // namespace d_00687fe0
GUEST_EXPORT(0x00687fe0, d_00687fe0::f_00687fe0);

// f_00688144: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00688144 {

inline constexpr guest::Function<0x005d41fc, u32(u32, u32, u32, u32)> call_005d41fc;  // (from the original)
inline constexpr guest::Function<0x0064d0b8, u32(u32, u32, u32, u32)> call_0064d0b8;  // (from the original)
inline constexpr guest::Function<0x00656c20, u32(u32, u32, u32, u32)> call_00656c20;  // (from the original)

u32 f_00688144(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r9 = guest::cpu()->r[9];
    u32 r10 = guest::cpu()->r[10];
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 0x20;  // (from the original)
    r6 = r2;
    r7 = r3;
    r10 = r0;
    r5 = *gptr<u32>(r13 + 0x20u);  // (from the original)
    r9 = r1;
    guest::cpu()->r[13] = r13;
    r0 = call_00656c20(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r8 = r0;
    r4 = r0 + 0xeu;  // (from the original)
    *gptr<u8>(r4) = u8(3u);
    r1 = r9;
    r0 = r4 + 1u;
    guest::cpu()->r[13] = r13;
    r0 = call_005d41fc(r0, r1, r2, r3);
    *gptr<u8>(r8 + 0x13u) = u8(u32(s32(r6) >> 8));  // (from the original)
    *gptr<u8>(r8 + 0x14u) = u8(r7);  // (from the original)
    r2 = r8;
    r0 = r10;
    *gptr<u8>(r4 + 7u) = u8(r5);
    r13 = r13 + 0x20;  // (from the original)
    r3 = 0u;
    r1 = 0x89u;  // (from the original)
    guest::cpu()->r[13] = r13;
    return call_0064d0b8(r0, r1, r2, r3);
}

}  // namespace d_00688144
GUEST_EXPORT(0x00688144, d_00688144::f_00688144);

// f_00689120: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00689120 {

inline constexpr guest::Function<0x0064d0b8, u32(u32, u32, u32, u32)> call_0064d0b8;  // (from the original)
inline constexpr guest::Function<0x00656c20, u32(u32, u32, u32, u32)> call_00656c20;  // (from the original)

u32 f_00689120(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 ea = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 0x18;  // (from the original)
    r6 = r1;
    r4 = r2;
    r5 = r3;
    r7 = r0;
    guest::cpu()->r[13] = r13;
    r0 = call_00656c20(r0, r1, r2, r3);
    ea = r6;
    r1 = *gptr<u32>(ea);
    r2 = r0;
    r3 = 0u;
    ea = r0 + 0xeu;  // (from the original)
    *gptr<u32>(ea) = u32(r1);
    r1 = 0xc0u;  // (from the original)
    *gptr<u8>(ea + 4u) = u8(r4);
    r0 = r7;
    *gptr<u8>(r2 + 0x13u) = u8(r5);  // (from the original)
    r13 = r13 + 0x18;  // (from the original)
    guest::cpu()->r[13] = r13;
    return call_0064d0b8(r0, r1, r2, r3);
}

}  // namespace d_00689120
GUEST_EXPORT(0x00689120, d_00689120::f_00689120);

// f_00689890: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00689890 {

inline constexpr guest::Function<0x005d41b8, u32(u32, u32, u32, u32)> call_005d41b8;  // (from the original)
inline constexpr guest::Function<0x0064d0b8, u32(u32, u32, u32, u32)> call_0064d0b8;  // (from the original)
inline constexpr guest::Function<0x00656c20, u32(u32, u32, u32, u32)> call_00656c20;  // (from the original)

u32 f_00689890(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r9 = guest::cpu()->r[9];
    guest::cpu()->r[13] -= 0x20u;  // (from the original)
    r6 = r2;
    r8 = r1;
    r5 = r3;
    r9 = r0;
    r0 = call_00656c20(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r7 = r0;
    r4 = r0 + 0xeu;  // (from the original)
    r1 = r8;
    r0 = r4;
    r0 = call_005d41b8(r0, r1, r2, r3);
    r2 = r7;
    r3 = 0u;
    r1 = 0x2du;  // (from the original)
    *gptr<u8>(r4 + 8u) = u8(u32(s32(u32(*gptr<u16>(r6))) >> 8));
    r0 = r9;
    *gptr<u8>(r7 + 0x17u) = u8(r5);  // (from the original)
    guest::cpu()->r[13] += 0x20u;  // (from the original)
    return call_0064d0b8(r0, r1, r2, r3);
}

}  // namespace d_00689890
GUEST_EXPORT(0x00689890, d_00689890::f_00689890);

// f_0068a3fc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0068a3fc {

struct __attribute__((packed)) Object_0068a3fc_0 {
    u8 unknown_0[0x171];  // (not used here)
    u8 byte_171;
};
GUEST_OFFSET(Object_0068a3fc_0, byte_171, 0x171);  // (from the original)

inline constexpr guest::Function<0x002f74c8, u32(u32, u32, u32, u32)> call_002f74c8;  // (from the original)
inline constexpr guest::Function<0x002f74e0, u32(u32, u32, u32, u32)> call_002f74e0;  // (from the original)

u32 f_0068a3fc(gptr<Object_0068a3fc_0> arg0, u32 r1) {
    u32 res = 0;
    u32 r0 = arg0.addr();
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r5 = r0;
    res = u32(arg0->byte_171) << 0x1a >> 0x1f;  // (from the original)
    r0 = res;
    if (res == 0) {
        goto L_68a460;
    }
    r0 = call_002f74c8(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = r0;
    r0 = 4u;
    r0 = call_002f74e0(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 == 0) {
        goto L_68a460;
    }
    r0 = call_002f74c8(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = r0;
    r0 = 0x20u;  // (from the original)
    r0 = call_002f74e0(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r4 = 0xaaef14u;  // (from the original)
    if (r0 == 0) {
        goto L_68a464;
    }
    r0 = u32(*gptr<u8>(r5 + 0x1a9u));  // (from the original)
    if (r0 == 0x46u) {  // (from the original)
        goto L_68a460;
    }
L_68a454:;
    r0 = u32(*gptr<u8>(r4)) | 4u;
    *gptr<u8>(r4) = u8(r0);
L_68a460:;
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
L_68a464:;
    r0 = call_002f74c8(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = r0;
    r0 = 0x10u;  // (from the original)
    r0 = call_002f74e0(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 == 0) {
        guest::preempt();
        goto L_68a454;
    }
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_0068a3fc
GUEST_EXPORT(0x0068a3fc, d_0068a3fc::f_0068a3fc);

// f_0068a80c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0068a80c {

struct __attribute__((packed)) Object_0068a80c_0 {
    u8 unknown_0[0x1ac];  // (not used here)
    u8 byte_1ac;
};
GUEST_OFFSET(Object_0068a80c_0, byte_1ac, 0x1ac);  // (from the original)

inline constexpr guest::Function<0x0010ac51, u32(u32, u32, u32, u32)> call_0010ac50;  // (from the original)
inline constexpr guest::Function<0x001d2e8c, u32(u32, u32, u32, u32)> call_001d2e8c;  // (from the original)
inline constexpr guest::Function<0x001d32c8, u32(u32, u32, u32, u32)> call_001d32c8;  // (from the original)
inline constexpr guest::Function<0x002fe8a8, u32(u32, u32, u32, u32)> call_002fe8a8;  // (from the original)
inline constexpr guest::Function<0x00712c18, u32(u32, u32, u32, u32)> call_00712c18;  // (from the original)
inline constexpr guest::Function<0x00712c28, u32(u32, u32, u32, u32)> call_00712c28;  // (from the original)
inline constexpr guest::Function<0x00712c38, u32(u32, u32, u32, u32)> call_00712c38;  // (from the original)

u32 f_0068a80c(gptr<Object_0068a80c_0> arg0, u32 r1, u32 r2) {
    u32 r0 = arg0.addr();
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r4 = r0;
    r0 = u32(arg0->byte_1ac);
    r0 = call_002fe8a8(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r5 = r0;
    if (r0 != 0) {
        r6 = r5 + 4u;
        r0 = r6;
        r0 = call_00712c18(r0, r1, r2, guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        *gptr<u8>(r4 + 0x942u) = u8(r0);  // (from the original)
        r0 = r6;
        r0 = call_00712c38(r0, r1, r2, guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        *gptr<u32>(r4 + 0x944u) = u32(r0);  // (from the original)
        r0 = r6;
        r0 = call_00712c28(r0, r1, r2, guest::cpu()->r[3]);
        r2 = guest::cpu()->r[2];
        r5 = r5 + 0x570eu;  // (from the original)
        *gptr<u32>(r4 + 0x948u) = u32(r0);  // (from the original)
        r1 = r6 + 6u;
        *gptr<u8>(r4 + 0x94cu) = u8(u32(*gptr<u8>(r5)) << 0x19 >> 0x1f);  // (from the original)
        r0 = r4 + 0x920u;  // (from the original)
        r0 = call_0010ac50(r0, r1, r2, guest::cpu()->r[3]);
        r2 = guest::cpu()->r[2];
        r1 = r4 + 0x920u;  // (from the original)
        r0 = r4 + 0x1b4u;  // (from the original)
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
    }
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_0068a80c
GUEST_EXPORT(0x0068a80c, d_0068a80c::f_0068a80c);

// f_0068aa1c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0068aa1c {

inline constexpr guest::Function<0x0064d0b8, u32(u32, u32, u32, u32)> call_0064d0b8;  // (from the original)
inline constexpr guest::Function<0x00656c20, u32(u32, u32, u32, u32)> call_00656c20;  // (from the original)

u32 f_0068aa1c(u32 r0, u32 r1, u32 r2, u32 r3, float S0, float S1) {
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
    ea = r13 - 0x28;  // (from the original)
    *gptr<u32>(ea) = u32(r3);
    *gptr<u32>(ea + 4) = u32(r4);
    *gptr<u32>(ea + 8) = u32(r5);
    *gptr<u32>(ea + 0xc) = u32(r6);  // (from the original)
    *gptr<u32>(ea + 0x10) = u32(r7);  // (from the original)
    *gptr<u32>(ea + 0x14) = u32(r8);  // (from the original)
    *gptr<u32>(ea + 0x18) = u32(r9);  // (from the original)
    *gptr<u32>(ea + 0x1c) = u32(r10);  // (from the original)
    *gptr<u32>(ea + 0x20) = u32(r11);  // (from the original)
    *gptr<u32>(ea + 0x24) = u32(r14);  // (from the original)
    r13 = r13 - 0x28;  // (from the original)
    r7 = r2;
    r9 = r1;
    r1 = r13 + 0x28u;  // (from the original)
    r10 = r0;
    r4 = *gptr<u32>(r1);
    r5 = *gptr<u32>(r1 + 4);
    r6 = *gptr<u32>(r1 + 8);
    r8 = r3;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    r0 = call_00656c20(r0, r1, r2, r3);
    ea = r9;
    r2 = *gptr<u32>(ea);
    r1 = r0;
    S1 = std::bit_cast<float>(*gptr<u32>(0x68aaacu));  // (from the original)
    ea = r0 + 0xeu;  // (from the original)
    *gptr<u32>(ea) = u32(r2);
    r0 = ea;
    ea = r13;
    *gptr<u16>(ea) = u16(r4);
    ea = r0 + 4u;
    *gptr<u16>(ea) = u16(r4);
    ea = r1 + 0x14u;  // (from the original)
    *gptr<u8>(ea) = u8(r8);
    *gptr<u8>(r0 + 7u) = u8(r7);
    *gptr<u8>(r0 + 8u) = u8(r5);
    r2 = r1;
    r3 = 0u;
    r0 = std::bit_cast<u32>(std::bit_cast<float>(vcvt_sz_f(std::bit_cast<float>(*gptr<u32>(r6)) * S1)));
    ea = r13;
    *gptr<u16>(ea) = u16(r0);
    ea = r1 + 0x17u;  // (from the original)
    *gptr<u16>(ea) = u16(r0);
    S0 = std::bit_cast<float>(vcvt_sz_f(std::bit_cast<float>(*gptr<u32>(r6 + 8u)) * S1));
    r0 = std::bit_cast<u32>(S0);
    ea = r13;
    *gptr<u16>(ea) = u16(r0);
    ea = r1 + 0x19u;  // (from the original)
    *gptr<u16>(ea) = u16(r0);
    r13 = r13 + 4u;
    r0 = r10;
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
    r1 = 0x3eu;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
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

}  // namespace d_0068aa1c
GUEST_EXPORT(0x0068aa1c, d_0068aa1c::f_0068aa1c);

// f_0068b404: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0068b404 {

inline constexpr guest::Function<0x001b7ce8, u32(u32, u32, u32, u32)> call_001b7ce8;  // (from the original)
inline constexpr guest::Function<0x00292ccc, u32(u32, u32, u32, u32)> call_00292ccc;  // (from the original)
inline constexpr guest::Function<0x00305f44, u32(u32, u32, u32, u32)> call_00305f44;  // (from the original)
inline constexpr guest::Function<0x0064f068, u32(u32, u32, u32, u32)> call_0064f068;  // (from the original)
inline constexpr guest::Function<0x0070cc5c, u32(u32, u32, u32, u32)> call_0070cc5c;  // (from the original)

u32 f_0068b404(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 res = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    goto L_68b404;
L_68b404:;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r4 = r0;
    r5 = r1;
    r0 = call_00292ccc(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = 0x40u;  // (from the original)
    r0 = 0xau;  // (from the original)
    r0 = call_0064f068(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 != 0) {
        r0 = 0x95c71cu;  // (from the original)
        r4 = *gptr<u32>(r0);
        if (r4 == 0) {
            goto L_68b478;
        }
        r0 = call_00305f44(r0, r1, r2, r3);
        r1 = r0;
        r3 = r5;
        r2 = 1u;
        r0 = r4;
        r0 = call_001b7ce8(r0, r1, r2, r3);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r1 = r5;
        r0 = r4;
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        return call_0070cc5c(r0, r1, r2, r3);
    }
    res = u32(*gptr<u8>(r4 + 0x177u)) << 0x1a >> 0x1f;  // (from the original)
    r0 = res;
    if (res == 0) {
        goto L_68b478;
    }
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    return guest::call_address<u32>(*gptr<u32>(0x14fd48u), r0, r1, r2, r3);  // (from the original)
L_68b478:;
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_0068b404
GUEST_EXPORT(0x0068b404, d_0068b404::f_0068b404);

// f_0068b4d0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0068b4d0 {

struct __attribute__((packed)) Object_0068b4d0_0 {
    u8 unknown_0[0x91a];  // (not used here)
    u8 byte_91a;
};
GUEST_OFFSET(Object_0068b4d0_0, byte_91a, 0x91a);  // (from the original)

inline constexpr guest::Function<0x0064d0b8, u32(u32, u32, u32, u32)> call_0064d0b8;  // (from the original)
inline constexpr guest::Function<0x00651928, u32(u32, u32, u32, u32)> call_00651928;  // (from the original)

u32 f_0068b4d0(gptr<Object_0068b4d0_0> arg0, u32 r1) {
    u32 res = 0;
    u32 r0 = arg0.addr();
    u32 r2 = 0;
    u32 r3 = 0;
    guest::cpu()->r[13] -= 8u;
    r2 = u32(arg0->byte_91a);
    r1 = r1 ^ 1u;
    res = r2 << 0x19 >> 0x1f;  // (from the original)
    r3 = res;
    if (res != 0) {
        r2 = 1u;
        r0 = call_00651928(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r0 = 1u;
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    res = r2 << 0x1a >> 0x1f;  // (from the original)
    r1 = res;
    if (res == 0) {
        r0 = 0u;
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r3 = 0u;
    r2 = r3;
    r1 = 0x21u;  // (from the original)
    r0 = call_0064d0b8(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r0 = 1u;
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_0068b4d0
GUEST_EXPORT(0x0068b4d0, d_0068b4d0::f_0068b4d0);

// f_0068c4e4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0068c4e4 {

struct __attribute__((packed)) Object_0068c4e4_1 {
    u8 unknown_0[0xe];  // (not used here)
    u8 byte_e;
};
GUEST_OFFSET(Object_0068c4e4_1, byte_e, 0xe);  // (from the original)

inline constexpr guest::Function<0x002bf814, u32(u32, u32, u32, u32)> call_002bf814;  // (from the original)
inline constexpr guest::Function<0x002bf9cc, u32(u32, u32, u32, u32)> call_002bf9cc;  // (from the original)
inline constexpr guest::Function<0x002fc8e8, u32(u32, u32, u32, u32)> call_002fc8e8;  // (from the original)
inline constexpr guest::Function<0x002fc934, u32(u32, u32, u32, u32)> call_002fc934;  // (from the original)
inline constexpr guest::Function<0x002fcb10, u32(u32, u32, u32, u32)> call_002fcb10;  // (from the original)
inline constexpr guest::Function<0x002fcb84, u32(u32, u32, u32, u32)> call_002fcb84;  // (from the original)
inline constexpr guest::Function<0x002fcbb0, u32(u32, u32, u32, u32)> call_002fcbb0;  // (from the original)
inline constexpr guest::Function<0x002fe8a4, u32(u32, u32, u32, u32)> call_002fe8a4;  // (from the original)
inline constexpr guest::Function<0x0071a844, u32(u32, u32, u32, u32)> call_0071a844;  // (from the original)
inline constexpr guest::Function<0x00724424, u32(u32, u32, u32, u32)> call_00724424;  // (from the original)

u32 f_0068c4e4(u32 r0, gptr<Object_0068c4e4_1> arg1, u32 r2, u32 r3) {
    u32 r1 = arg1.addr();
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 0x20u;  // (from the original)
    r1 = u32(arg1->byte_e);
    if (r1 == 0) {
        r5 = 0u;
    } else {
        r5 = 1u;
    }
    guest::cpu()->r[13] = r13;
    r0 = call_002fe8a4(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r4 = r0;
    if (r0 != 0) {
        r6 = 0x33a1u;  // (from the original)
        r0 = r4 + 0xau;  // (from the original)
        if (r5 == 0) {
            goto L_68c584;
        }
        guest::cpu()->r[13] = r13;
        r0 = call_0071a844(r0, r1, r2, r3);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r1 = r0;
        r0 = r13;
        guest::cpu()->r[13] = r13;
        r0 = call_002fc934(r0, r1, r2, r3);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r5 = r4 + 0xau;  // (from the original)
        r1 = r6;
        r0 = r13 + 4u;
        guest::cpu()->r[13] = r13;
        r0 = call_002fcbb0(r0, r1, r2, r3);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r1 = r0;
        r0 = r5 + 0x1cu;  // (from the original)
        guest::cpu()->r[13] = r13;
        r0 = call_002fc8e8(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r0 = r13;
        guest::cpu()->r[13] = r13;
        r0 = call_002fcb10(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        if (r0 != 0) {
            r3 = 1u;
            r2 = 0u;
            r1 = r13;
            r0 = r4 + 0x6bd0u;  // (from the original)
            guest::cpu()->r[13] = r13;
            r0 = call_002bf814(r0, r1, r2, r3);
            r1 = guest::cpu()->r[1];
        }
        r0 = r13;
    }
    r13 = r13 + 0x20u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
L_68c584:;
    guest::cpu()->r[13] = r13;
    r0 = call_0071a844(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = r6;
    guest::cpu()->r[13] = r13;
    r0 = call_002fcb84(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 != 0) {
        r1 = 0x95bfdcu;  // (from the original)
        r0 = r4 + 0x26u;  // (from the original)
        guest::cpu()->r[13] = r13;
        r0 = call_002fc8e8(r0, r1, r2, r3);
        r3 = guest::cpu()->r[3];
    }
    r5 = r4 + 0x6bd0u;  // (from the original)
    r4 = 0u;
    r7 = 1u;
    do {
L_68c5c0:;
        r2 = 0u;
        r1 = r4;
        r0 = r5;
        guest::cpu()->r[13] = r13;
        r0 = call_00724424(r0, r1, r2, r3);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r1 = r6;
        guest::cpu()->r[13] = r13;
        r0 = call_002fcb84(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r3 = guest::cpu()->r[3];
        if (!(r0 == 0)) {
            r2 = 0x95bfdcu;  // (from the original)
            r3 = 0u;
            r1 = r4;
            r0 = r5;
            *gptr<u32>(r13) = u32(r7);
            guest::cpu()->r[13] = r13;
            r0 = call_002bf9cc(r0, r1, r2, r3);
            r1 = guest::cpu()->r[1];
            r3 = guest::cpu()->r[3];
        }
        r4 = r4 + 1u;
        guest::preempt();
    } while (r4 < 0x10u);  // (from the original)
    r13 = r13 + 0x20u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_0068c4e4
GUEST_EXPORT(0x0068c4e4, d_0068c4e4::f_0068c4e4);

// f_0068c644: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0068c644 {

inline constexpr guest::Function<0x002fb7b0, u32(u32, u32, u32, u32)> call_002fb7b0;  // (from the original)
inline constexpr guest::Function<0x002fcb34, u32(u32, u32, u32, u32)> call_002fcb34;  // (from the original)
inline constexpr guest::Function<0x006579a8, u32(u32, u32, u32, u32)> call_006579a8;  // (from the original)
inline constexpr guest::Function<0x0068aa1c, u32(u32, u32, u32, u32)> call_0068aa1c;  // (from the original)
inline constexpr guest::Function<0x006d96fc, u32(u32, u32, u32, u32)> call_006d96fc;  // (from the original)
inline constexpr guest::Function<0x006d9abc, u32(u32, u32, u32, u32)> call_006d9abc;  // (from the original)
inline constexpr guest::Function<0x00723ad4, u32(u32, u32, u32, u32)> call_00723ad4;  // (from the original)

u32 f_0068c644(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 res = 0;
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
    r13 = r13 - 0x28u;  // (from the original)
    r4 = r0;
    r9 = r1;
    r7 = *gptr<u32>(r13 + 0x28u);  // (from the original)
    r6 = r2;
    r8 = r3;
    r0 = r1;
    guest::cpu()->r[13] = r13;
    r0 = call_002fcb34(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    res = r0 - 0x26u;  // (from the original)
    nf = res >> 0x1f;  // (from the original)
    vf = ((r0 ^ 0x26u) & (r0 ^ res)) >> 0x1f;  // (from the original)
    r5 = 0x69u;  // (from the original)
    if (res == 0) {
        goto L_68c688;
    }
    if (nf == vf) {
        goto L_68c6d0;
    }
    zf = r0 == 0x24u;  // (from the original)
    if (!zf) {
        zf = r0 == 0x25u;  // (from the original)
    }
    if (zf) {
        goto L_68c688;
    }
L_68c684:;
    r5 = 0x8fu;  // (from the original)
L_68c688:;
    if (r6 == 0) {
        goto L_68c784;
    }
    if (r8 == 0) {
        goto L_68c6e4;
    }
    r0 = r4 + 0x68u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00723ad4(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        goto L_68c6c8;
    }
    guest::cpu()->r[13] = r13;
    r0 = call_006d96fc(r0, r1, r2, r3);
    *gptr<u32>(r13) = u32(r0);
    r3 = 0u;
    r2 = r7;
    r1 = r9;
    r0 = r4;
    guest::cpu()->r[13] = r13;
    r0 = call_006579a8(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
L_68c6c8:;
    r13 = r13 + 0x28u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
L_68c6d0:;
    zf = r0 == 0x28u;  // (from the original)
    if (!zf) {
        zf = r0 == 0x66u;  // (from the original)
    }
    if (zf) {
        r5 = 0xd1u;  // (from the original)
        guest::preempt();
        goto L_68c688;
    }
    guest::preempt();
    goto L_68c684;
L_68c6e4:;
    r6 = *gptr<u32>(r4 + 0x154u);  // (from the original)
    r0 = r4 + 0x68u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00723ad4(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        guest::preempt();
        goto L_68c6c8;
    }
    if (r6 + 1u == 0) {
        guest::preempt();
        goto L_68c6c8;
    }
    if (r6 == 0) {
        goto L_68c740;
    }
    guest::cpu()->r[13] = r13;
    r0 = call_006d96fc(r0, r1, r2, r3);
    *gptr<u32>(r13) = u32(r0);
    r3 = 0u;
    r2 = r7;
    r1 = r9;
    r0 = r4;
    guest::cpu()->r[13] = r13;
    r0 = call_006579a8(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
L_68c728:;
    r0 = r4 + 0x68u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002fb7b0(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r0 = ~0u;
    *gptr<u32>(r4 + 0x154u) = u32(r0);  // (from the original)
    r13 = r13 + 0x28u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
L_68c740:;
    r1 = u32(*gptr<u8>(r4 + 0x1acu));  // (from the original)
    r0 = r9;
    guest::cpu()->r[13] = r13;
    r0 = call_006d9abc(r0, r1, r2, r3);
    r6 = r13 + 4u;
    if (r5 == 0x69u) {  // (from the original)
        r0 = 2u;
    } else {
        r0 = 3u;
    }
    *gptr<u32>(r13) = u32(r5);
    r3 = 0u;
    *gptr<u32>(r6) = u32(r0);
    *gptr<u32>(r6 + 4) = u32(r7);
    r2 = r3;
    r1 = r9;
    r0 = r4;
    guest::cpu()->r[13] = r13;
    r0 = call_0068aa1c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    guest::preempt();
    goto L_68c728;
L_68c784:;
    r0 = r4 + 0x68u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00723ad4(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        guest::preempt();
        goto L_68c6c8;
    }
    r1 = u32(*gptr<u8>(r4 + 0x1acu));  // (from the original)
    r0 = r9;
    guest::cpu()->r[13] = r13;
    r0 = call_006d9abc(r0, r1, r2, r3);
    r0 = u32(*gptr<u8>(r4 + 0x8c5u));  // (from the original)
    r6 = r13 + 4u;
    *gptr<u32>(r13) = u32(r5);
    r2 = 1u;
    r1 = r9;
    if (r0 << 0x1a >> 0x1f == 0) {  // (from the original)
        r3 = 1u;
    } else {
        r3 = 2u;
    }
    if (r5 == 0x69u) {  // (from the original)
        r0 = 2u;
    } else {
        r0 = 3u;
    }
    *gptr<u32>(r6) = u32(r0);
    *gptr<u32>(r6 + 4) = u32(r7);
    r0 = r4;
    guest::cpu()->r[13] = r13;
    r0 = call_0068aa1c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r13 = r13 + 0x28u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_0068c644
GUEST_EXPORT(0x0068c644, d_0068c644::f_0068c644);

// f_0068cbb8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0068cbb8 {

struct __attribute__((packed)) Object_0068cbb8_0 {
    u8 unknown_0[0x171];  // (not used here)
    u8 byte_171;
    u8 unknown_172[0x5];  // (not used here)
    u8 byte_177;
    u8 unknown_178[0xf4];  // (not used here)
    u32 word_26c;
};
GUEST_OFFSET(Object_0068cbb8_0, byte_171, 0x171);  // (from the original)
GUEST_OFFSET(Object_0068cbb8_0, byte_177, 0x177);  // (from the original)
GUEST_OFFSET(Object_0068cbb8_0, word_26c, 0x26c);  // (from the original)

inline constexpr guest::Function<0x0014f3cc, u32(u32, u32, u32, u32)> call_0014f3cc;  // (from the original)
inline constexpr guest::Function<0x00252034, u32(u32, u32, u32, u32)> call_00252034;  // (from the original)
inline constexpr guest::Function<0x00252850, u32(u32, u32, u32, u32)> call_00252850;  // (from the original)
inline constexpr guest::Function<0x0052e3ec, u32(u32, u32, u32, u32)> call_0052e3ec;  // (from the original)
inline constexpr guest::Function<0x0064d0b8, u32(u32, u32, u32, u32)> call_0064d0b8;  // (from the original)
inline constexpr guest::Function<0x006c5c60, u32(u32, u32, u32, u32)> call_006c5c60;  // (from the original)
inline constexpr guest::Function<0x0070ab44, u32(u32, u32, u32, u32)> call_0070ab44;  // (from the original)

u32 f_0068cbb8(gptr<Object_0068cbb8_0> arg0, float S0, float S1, float S2) {
    u32 res = 0;
    u32 r0 = arg0.addr();
    u32 r1 = 0;
    u32 r2 = 0;
    u32 r3 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r13 = guest::cpu()->r[13];
    r4 = r0;
    r13 = r13 - 0x60u;  // (from the original)
    res = u32(arg0->byte_171) << 0x1a >> 0x1f;  // (from the original)
    r1 = res;
    if (res == 0) {
        goto L_68cca0;
    }
    res = u32(arg0->byte_177) << 0x1a >> 0x1f;  // (from the original)
    if (res != 0) {
        goto L_68cca0;
    }
    r2 = arg0->word_26c;
    r3 = 0u;
    r1 = r13;
    r0 = r4 + 0x1b4u;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2;
    r0 = call_0070ab44(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r3 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    if (r0 == 0) {
        goto L_68cca0;
    }
    S2 = std::bit_cast<float>(*gptr<u32>(0x886b50u));  // (from the original)
    S1 = std::bit_cast<float>(*gptr<u32>(0x886b4cu));  // (from the original)
    S0 = std::bit_cast<float>(*gptr<u32>(0x886b48u));  // (from the original)
    r0 = r13 + 0x48u;  // (from the original)
    *gptr<u32>(r0) = u32(std::bit_cast<u32>(S0));
    *gptr<u32>(r0 + 4) = u32(std::bit_cast<u32>(S1));
    *gptr<u32>(r0 + 8) = u32(std::bit_cast<u32>(S2));
    r0 = r13 + 0x3cu;  // (from the original)
    r1 = r13;
    r2 = r13 + 0x48u;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2;
    r0 = call_0014f3cc(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    S2 = guest::cpu()->s[2];
    r1 = r13 + 0x3cu;  // (from the original)
    r0 = r13 + 0x30u;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2;
    r0 = call_0052e3ec(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    S2 = guest::cpu()->s[2];
    r1 = 0u;
    r0 = r13 + 0x30u;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2;
    r0 = call_006c5c60(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    S2 = guest::cpu()->s[2];
    *gptr<u32>(r13 + 0x34u) = u32(std::bit_cast<u32>(S0));  // (from the original)
    r5 = *gptr<u32>(0x94f268u);  // (from the original)
    if (r5 == 0) {
        goto L_68cca0;
    }
    r1 = r13 + 0x30u;  // (from the original)
    S0 = std::bit_cast<float>(*gptr<u32>(0x886948u));  // (from the original)
    r0 = r5;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2;
    r0 = call_00252034(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    S2 = guest::cpu()->s[2];
    if (r0 == 0) {
        goto L_68cca0;
    }
    r0 = r5;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2;
    r0 = call_00252850(r0, r1, r2, r3);
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    S2 = guest::cpu()->s[2];
    r3 = 0u;
    r2 = r3;
    r1 = 0x26u;  // (from the original)
    r0 = r4;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2;
    r0 = call_0064d0b8(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    r0 = 1u;
    r13 = r13 + 0x60u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    return r0;
L_68cca0:;
    r0 = 0u;
    r13 = r13 + 0x60u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    return r0;
}

}  // namespace d_0068cbb8
GUEST_EXPORT(0x0068cbb8, d_0068cbb8::f_0068cbb8);

// f_0068ce74: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0068ce74 {

struct __attribute__((packed)) Object_0068ce74_0 {
    u8 unknown_0[0x175];  // (not used here)
    u8 byte_175;
    u8 unknown_176[0x7a7];  // (not used here)
    u8 byte_91d;
};
GUEST_OFFSET(Object_0068ce74_0, byte_175, 0x175);  // (from the original)
GUEST_OFFSET(Object_0068ce74_0, byte_91d, 0x91d);  // (from the original)

inline constexpr guest::Function<0x004e54a4, u32(u32, u32, u32, u32)> call_004e54a4;  // (from the original)
inline constexpr guest::Function<0x005897c0, u32(u32, u32, u32, u32)> call_005897c0;  // (from the original)
inline constexpr guest::Function<0x00765aac, u32(u32, u32, u32, u32)> call_00765aac;  // (from the original)
inline constexpr guest::Function<0x00765cec, u32(u32, u32, u32, u32)> call_00765cec;  // (from the original)

u32 f_0068ce74(gptr<Object_0068ce74_0> arg0, u32 r1_unused, u32 r2_unused, u32 r3) {
    u32 res = 0;
    u32 r0 = arg0.addr();
    u32 r1 = 0;
    u32 r2 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r13 = guest::cpu()->r[13];
    *gptr<u32>(r13 + 0xfffffff0u) = u32(r3);  // (from the original)
    r13 = r13 - 0x10;  // (from the original)
    r4 = r0;
    r2 = u32(arg0->byte_91d);
    r0 = r0 + 0x171u;  // (from the original)
    r5 = 1u;
    r1 = u32(arg0->byte_175);
    res = r1 << 0x1c >> 0x1f;  // (from the original)
    r3 = res;
    if (res != 0) {
        if (r2 == 0) {
            r1 = r1 & ~8u;
            arg0->byte_175 = u8(r1);
        }
        r13 = r13 + 0x10;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    if (r2 == 0) {
        r13 = r13 + 0x10;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    r1 = r4 + 0x14u;  // (from the original)
    *gptr<u16>(r13) = u16(u32(*gptr<u16>(r4 + 0x2eu)));  // (from the original)
    if (r2 != 1u) {
        if (r2 == 2u) {
            goto L_68cef8;
        }
        if (r2 != 4u) {
            goto L_68cf2c;
        }
        goto L_68cf14;
    }
    r2 = *gptr<u32>(r13);
    r0 = r4;
    guest::cpu()->r[13] = r13;
    r0 = call_004e54a4(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 != 0) {
        goto L_68cf2c;
    }
    goto L_68cf58;
L_68cef8:;
    r2 = *gptr<u32>(r13);
    r0 = r4;
    guest::cpu()->r[13] = r13;
    r0 = call_00765aac(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        *gptr<u8>(r4 + 0xca0u) = u8(r5);  // (from the original)
    } else {
        goto L_68cf2c;
    }
    goto L_68cf38;
L_68cf14:;
    r2 = *gptr<u32>(r13);
    r0 = r4;
    guest::cpu()->r[13] = r13;
    r0 = call_00765cec(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        r0 = 2u;
        goto L_68cf58;
    }
L_68cf2c:;
    r0 = u32(*gptr<u8>(r4 + 0xca0u));  // (from the original)
    if (r0 == 3u) {
        r13 = r13 + 0x10;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return r0;
    }
L_68cf38:;
    r4 = r4 + 0x1520u;  // (from the original)
    r0 = 5u;
    *gptr<u8>(r4) = u8(r0);
    guest::cpu()->r[13] = r13;
    r0 = call_005897c0(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r0 = 0x94fd20u;  // (from the original)
    *gptr<u8>(r0) = u8(r5);
    r13 = r13 + 0x10;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
L_68cf58:;
    *gptr<u8>(r4 + 0xca0u) = u8(r0);  // (from the original)
    guest::preempt();
    goto L_68cf38;
}

}  // namespace d_0068ce74
GUEST_EXPORT(0x0068ce74, d_0068ce74::f_0068ce74);

// f_0068d170: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0068d170 {

inline constexpr guest::Function<0x0024fc50, u32(u32, u32, u32, u32)> call_0024fc50;  // (from the original)

u32 f_0068d170(gptr<SlotObject> arg0, u32 r1, u32 r2) {
    u32 res = 0;
    u32 r0 = arg0.addr();
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r4 = r0;
    r5 = r2;
    res = u32(u8(arg0->flags_66)) << 0x1a >> 0x1f;  // (from the original)
    r0 = res;
    if (res != 0) {
        goto L_68d1b0;
    }
    r0 = r4 + 0x5ecu;  // (from the original)
    r0 = call_0024fc50(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r5 == 0) {
        goto L_68d1b0;
    }
    r1 = u32(*gptr<u8>(r4 + 0x173u)) | 2u | 4u;  // (from the original)
    *gptr<u8>(r4 + 0x173u) = u8(r1);  // (from the original)
L_68d1b0:;
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_0068d170
GUEST_EXPORT(0x0068d170, d_0068d170::f_0068d170);

// f_0068dc14: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0068dc14 {

struct __attribute__((packed)) Object_0068dc14_0 {
    u8 unknown_0[0x66];  // (not used here)
    u8 byte_66;
};
GUEST_OFFSET(Object_0068dc14_0, byte_66, 0x66);  // (from the original)

inline constexpr guest::Function<0x00250024, u32(u32, u32, u32, u32)> call_00250024;  // (from the original)

u32 f_0068dc14(gptr<Object_0068dc14_0> arg0, u32 r1, u32 r2) {
    u32 res = 0;
    u32 r0 = arg0.addr();
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r4 = r0;
    r5 = r2;
    res = u32(arg0->byte_66) << 0x1a >> 0x1f;  // (from the original)
    r0 = res;
    if (res != 0) {
        goto L_68dc54;
    }
    r0 = r4 + 0x5ecu;  // (from the original)
    r0 = call_00250024(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r5 == 0) {
        goto L_68dc54;
    }
    r1 = u32(*gptr<u8>(r4 + 0x173u)) | 2u | 4u;  // (from the original)
    *gptr<u8>(r4 + 0x173u) = u8(r1);  // (from the original)
L_68dc54:;
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_0068dc14
GUEST_EXPORT(0x0068dc14, d_0068dc14::f_0068dc14);

// f_0068e738: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0068e738 {

struct __attribute__((packed)) Object_0068e738_0 {
    u32 word_0;
    u8 unknown_4[0x64];  // (not used here)
    u32 word_68;
};
GUEST_OFFSET(Object_0068e738_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_0068e738_0, word_68, 0x68);  // (from the original)

inline constexpr guest::Function<0x001abcd4, u32(u32, u32, u32, u32)> call_001abcd4;  // (from the original)
inline constexpr guest::Function<0x00250560, u32(u32, u32, u32, u32)> call_00250560;  // (from the original)
inline constexpr guest::Function<0x002694b8, u32(u32, u32, u32, u32)> call_002694b8;  // (from the original)
inline constexpr guest::Function<0x00278140, u32(u32, u32, u32, u32)> call_00278140;  // (from the original)
inline constexpr guest::Function<0x002e6944, u32(u32, u32, u32, u32)> call_002e6944;  // (from the original)
inline constexpr guest::Function<0x002f76ad, u32(u32, u32, u32, u32)> call_002f76ac;  // (from the original)
inline constexpr guest::Function<0x003170d0, u32(u32, u32, u32, u32)> call_003170d0;  // (from the original)
inline constexpr guest::Function<0x004eb5b4, u32(u32, u32, u32, u32)> call_004eb5b4;  // (from the original)
inline constexpr guest::Function<0x004edd84, u32(u32, u32, u32, u32)> call_004edd84;  // (from the original)
inline constexpr guest::Function<0x004ef50c, u32(u32, u32, u32, u32)> call_004ef50c;  // (from the original)
inline constexpr guest::Function<0x006a8954, u32(u32, u32, u32, u32)> call_006a8954;  // (from the original)
inline constexpr guest::Function<0x006acabc, u32(u32, u32, u32, u32)> call_006acabc;  // (from the original)
inline constexpr guest::Function<0x006e480c, u32(u32, u32, u32, u32)> call_006e480c;  // (from the original)

u32 f_0068e738(gptr<Object_0068e738_0> arg0, u32 r1_unused, u32 r2_unused, u32 r3) {
    u32 ea = 0;
    u32 r0 = arg0.addr();
    u32 r1 = 0;
    u32 r2 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r13 = guest::cpu()->r[13];
    r1 = 0x8f8630u;  // (from the original)
    r13 = r13 - 8;
    r2 = r1 + 0x98u;  // (from the original)
    arg0->word_0 = u32(r1);
    arg0->word_68 = u32(r2);
    r0 = r0 + 0x14fcu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002e6944(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0x40u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002e6944(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0x18u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002e6944(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0x18u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002e6944(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0x18u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002e6944(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0x20u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002e6944(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0x18u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002e6944(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0x18u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002e6944(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0x4cu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002e6944(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0x18u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002e6944(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0x18u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002e6944(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0x18u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002e6944(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0x24u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002e6944(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0x24u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002e6944(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0x6cu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00250560(r0, r1, r2, r3);
    r4 = r0 - 0x1b8u;  // (from the original)
    r1 = 0x6f8424u;  // (from the original)
    r3 = 3u;
    r2 = 0x8cu;  // (from the original)
    r0 = r4;
    guest::cpu()->r[13] = r13;
    r0 = call_002f76ac(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r4 - 0x18u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002e6944(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0x410u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002694b8(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0x18u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002e6944(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0x20u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002e6944(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0x20u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002e6944(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0x20u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002e6944(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0x18u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002e6944(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0x20u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002e6944(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0x18u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002e6944(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0x1cu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002e6944(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0x18u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002e6944(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0x84u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002e6944(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0x24u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002e6944(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0x24u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002e6944(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0x24u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002e6944(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0x18u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002e6944(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0x18u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002e6944(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0x18u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002e6944(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0x18u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002e6944(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0x18u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002e6944(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0x1cu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_004eb5b4(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0x18u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002e6944(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0x18u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002e6944(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0x18u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002e6944(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0x18u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002e6944(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0x18u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002e6944(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0x1cu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002e6944(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0x14u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_004eb5b4(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0x18u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002e6944(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0x5cu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002e6944(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0x2acu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_006a8954(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0xc8u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00278140(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0x90u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_006acabc(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0x60u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_006acabc(r0, r1, r2, r3);
    r0 = r0 - 0x68u;  // (from the original)
    *gptr<u32>(r0 - 0x2e0u) = u32(0x8ebc68u);  // (from the original)
    r0 = r0 - 0x19cu;  // (from the original)
    r1 = 0u;
    r2 = ~0u;
    ea = r0 + 0x70u;  // (from the original)
    *gptr<u32>(ea) = u32(r1);
    *gptr<u32>(ea + 4) = u32(r2);
    ea = r0 + 0x68u;  // (from the original)
    *gptr<u32>(ea) = u32(r1);
    *gptr<u32>(ea + 4) = u32(r2);
    ea = r0 + 0x60u;  // (from the original)
    *gptr<u32>(ea) = u32(r1);
    *gptr<u32>(ea + 4) = u32(r2);
    ea = r0 + 0x58u;  // (from the original)
    *gptr<u32>(ea) = u32(r1);
    *gptr<u32>(ea + 4) = u32(r2);
    ea = r0 + 0x50u;  // (from the original)
    *gptr<u32>(ea) = u32(r1);
    *gptr<u32>(ea + 4) = u32(r2);
    ea = r0 + 0x48u;  // (from the original)
    *gptr<u32>(ea) = u32(r1);
    *gptr<u32>(ea + 4) = u32(r2);
    ea = r0 + 0x40u;  // (from the original)
    *gptr<u32>(ea) = u32(r1);
    *gptr<u32>(ea + 4) = u32(r2);
    ea = r0 + 0x38u;  // (from the original)
    *gptr<u32>(ea) = u32(r1);
    *gptr<u32>(ea + 4) = u32(r2);
    ea = r0 + 0x30u;  // (from the original)
    *gptr<u32>(ea) = u32(r1);
    *gptr<u32>(ea + 4) = u32(r2);
    ea = r0 + 0x28u;  // (from the original)
    *gptr<u32>(ea) = u32(r1);
    *gptr<u32>(ea + 4) = u32(r2);
    ea = r0 + 0x20u;  // (from the original)
    *gptr<u32>(ea) = u32(r1);
    *gptr<u32>(ea + 4) = u32(r2);
    ea = r0 + 0x18u;  // (from the original)
    *gptr<u32>(ea) = u32(r1);
    *gptr<u32>(ea + 4) = u32(r2);
    ea = r0 + 0x10u;  // (from the original)
    *gptr<u32>(ea) = u32(r1);
    *gptr<u32>(ea + 4) = u32(r2);
    r3 = r0 + 8u;
    *gptr<u32>(r3) = u32(r1);
    *gptr<u32>(r3 + 4) = u32(r2);
    *gptr<u32>(r0) = u32(r1);
    *gptr<u32>(r0 + 4) = u32(r2);
    r0 = r0 - 0x144u;  // (from the original)
    r1 = 0x8eb174u;  // (from the original)
    r4 = r0;
    *gptr<u32>(r0) = u32(r1);
    guest::cpu()->r[13] = r13;
    r0 = call_001abcd4(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r4 + 0xccu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_004ef50c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0x54u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_004edd84(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0x90u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_004eb5b4(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0xcu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_004eb5b4(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = 0x8f4068u;  // (from the original)
    *gptr<u32>(r0 - 0x128u) = u32(r1);  // (from the original)
    r0 = r0 - 0x128u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_003170d0(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r13 = r13 + 8;
    r0 = r0 - 0x68u;  // (from the original)
    guest::cpu()->r[13] = r13;
    return call_006e480c(r0, r1, r2, r3);
}

}  // namespace d_0068e738
GUEST_EXPORT(0x0068e738, d_0068e738::f_0068e738);

// f_0068eb30: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0068eb30 {


u32 f_0068eb30() {
    u32 r0 = 0;
    r0 = *gptr<u32>(0x950874u);  // (from the original)
    if (r0 == 0) {
        return r0;
    }
    if (u32(*gptr<u8>(r0 + 0xf2u)) == 5u) {  // (from the original)
        r0 = 1u;
    } else {
        r0 = 0u;
    }
    return r0;
}

}  // namespace d_0068eb30
GUEST_EXPORT(0x0068eb30, d_0068eb30::f_0068eb30);

// f_0068eba8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0068eba8 {

inline constexpr guest::Function<0x001a5144, u32(u32, u32, u32, u32)> call_001a5144;  // (from the original)

u32 f_0068eba8(u32 r0_unused, u32 r1) {
    u32 r0 = 0;
    goto L_68eba8;
L_1a20e0:;
    r1 = u32(*gptr<u8>(r0 + 0xf2u));  // (from the original)
    if (r1 != 5u) {
        guest::cpu()->r[1] = r1;
        return r0;
    }
    return call_001a5144(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
L_68eba8:;
    r0 = *gptr<u32>(0x950874u);  // (from the original)
    if (r0 == 0) {
        guest::cpu()->r[1] = r1;
        return r0;
    }
    guest::preempt();
    goto L_1a20e0;
}

}  // namespace d_0068eba8
GUEST_EXPORT(0x0068eba8, d_0068eba8::f_0068eba8);

// f_0068ebc4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0068ebc4 {

inline constexpr guest::Function<0x001a20f4, u32(u32, u32, u32, u32)> call_001a20f4;  // (from the original)

u32 f_0068ebc4() {
    u32 r0 = 0;
    r0 = *gptr<u32>(0x950874u);  // (from the original)
    if (r0 == 0) {
        return r0;
    }
    return call_001a20f4(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_0068ebc4
GUEST_EXPORT(0x0068ebc4, d_0068ebc4::f_0068ebc4);

// f_0068ec10: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0068ec10 {


u32 f_0068ec10() {
    u32 r0 = 0;
    r0 = *gptr<u32>(0x950874u);  // (from the original)
    if (r0 == 0) {
        return r0;
    }
    if (u32(s32(s8(*gptr<u8>(r0 + 0x135u)))) + 1u == 0) {  // (from the original)
        r0 = 0u;
    } else {
        r0 = 1u;
    }
    return r0;
}

}  // namespace d_0068ec10
GUEST_EXPORT(0x0068ec10, d_0068ec10::f_0068ec10);

// f_0068ec64: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0068ec64 {

inline constexpr guest::Function<0x001a360c, u32(u32, u32, u32, u32)> call_001a360c;  // (from the original)

u32 f_0068ec64(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r12 = 0;
    u32 r13 = guest::cpu()->r[13];
    r12 = r0;
    *gptr<u32>(r13 + 0xfffffff8u) = u32(r3);  // (from the original)
    r13 = r13 - 8;
    r0 = *gptr<u32>(0x950874u);  // (from the original)
    if (r0 == 0) {
        r13 = r13 + 8;
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    *gptr<u32>(r13) = u32(r3);
    r3 = r2;
    r2 = r1;
    r1 = r12;
    guest::cpu()->r[13] = r13;
    r0 = call_001a360c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r13 = r13 + 8;
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_0068ec64
GUEST_EXPORT(0x0068ec64, d_0068ec64::f_0068ec64);

// f_0068ec98: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0068ec98 {


u32 f_0068ec98(u32 r0_unused, u32 r1) {
    u32 r0 = 0;
    u32 r2 = 0;
    goto L_68ec98;
L_68ec98:;
    r0 = *gptr<u32>(0x950874u);  // (from the original)
    if (r0 == 0) {
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r2 = 0u;
    r1 = 3u;
    *gptr<u8>(r0 + 0xf3u) = u8(r1);  // (from the original)
    *gptr<u8>(r0 + 0x136u) = u8(r2);  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_0068ec98
GUEST_EXPORT(0x0068ec98, d_0068ec98::f_0068ec98);

// f_0068ecbc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0068ecbc {

inline constexpr guest::Function<0x001a36ac, u32(u32, u32, u32, u32)> call_001a36ac;  // (from the original)

u32 f_0068ecbc() {
    u32 r0 = 0;
    r0 = *gptr<u32>(0x950874u);  // (from the original)
    if (r0 == 0) {
        return r0;
    }
    return call_001a36ac(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_0068ecbc
GUEST_EXPORT(0x0068ecbc, d_0068ecbc::f_0068ecbc);

// f_0068eec8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0068eec8 {

inline constexpr guest::Function<0x001a4600, u32(u32, u32, u32, u32)> call_001a4600;  // (from the original)

u32 f_0068eec8(u32 r0) {
    u32 r1 = 0;
    r1 = r0;
    r0 = *gptr<u32>(0x950874u);  // (from the original)
    if (r0 == 0) {
        guest::cpu()->r[1] = r1;
        return r0;
    }
    return call_001a4600(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_0068eec8
GUEST_EXPORT(0x0068eec8, d_0068eec8::f_0068eec8);

// f_0068ef60: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0068ef60 {


u32 f_0068ef60(u32 r0_unused, u32 r1) {
    u32 r0 = 0;
    u32 r2 = 0;
    goto L_68ef60;
L_68ef60:;
    r0 = *gptr<u32>(0x950874u);  // (from the original)
    if (r0 == 0) {
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r2 = 0u;
    r1 = 0x12u;  // (from the original)
    *gptr<u8>(r0 + 0xf3u) = u8(r1);  // (from the original)
    *gptr<u8>(r0 + 0x136u) = u8(r2);  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_0068ef60
GUEST_EXPORT(0x0068ef60, d_0068ef60::f_0068ef60);

// f_0068ef84: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0068ef84 {


u32 f_0068ef84(u32 r0_unused, u32 r1) {
    u32 r0 = 0;
    u32 r2 = 0;
    goto L_68ef84;
L_68ef84:;
    r0 = *gptr<u32>(0x950874u);  // (from the original)
    if (r0 == 0) {
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r2 = 0u;
    r1 = 2u;
    *gptr<u8>(r0 + 0xf3u) = u8(r1);  // (from the original)
    *gptr<u8>(r0 + 0x136u) = u8(r2);  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_0068ef84
GUEST_EXPORT(0x0068ef84, d_0068ef84::f_0068ef84);

// f_0068efa8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0068efa8 {

inline constexpr guest::Function<0x001a3a28, u32(u32, u32, u32, u32)> call_001a3a28;  // (from the original)

u32 f_0068efa8(u32 r0) {
    u32 r1 = 0;
    r1 = r0;
    r0 = *gptr<u32>(0x950874u);  // (from the original)
    if (r0 == 0) {
        guest::cpu()->r[1] = r1;
        return r0;
    }
    return call_001a3a28(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_0068efa8
GUEST_EXPORT(0x0068efa8, d_0068efa8::f_0068efa8);

// f_0068efc8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0068efc8 {

inline constexpr guest::Function<0x001a5ffc, u32(u32, u32, u32, u32)> call_001a5ffc;  // (from the original)

u32 f_0068efc8(u32 r0, u32 r1) {
    u32 r2 = 0;
    u32 r3 = 0;
    r3 = r0;
    r0 = *gptr<u32>(0x950874u);  // (from the original)
    if (r0 == 0) {
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r2 = r1;
    r1 = r3;
    return call_001a5ffc(r0, r1, r2, r3);
}

}  // namespace d_0068efc8
GUEST_EXPORT(0x0068efc8, d_0068efc8::f_0068efc8);

// f_0068eff0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0068eff0 {

inline constexpr guest::Function<0x001a5144, u32(u32, u32, u32, u32)> call_001a5144;  // (from the original)

u32 f_0068eff0(u32 r0_unused, u32 r1) {
    u32 r0 = 0;
    goto L_68eff0;
L_1a45c4:;
    r1 = u32(*gptr<u8>(r0 + 0xf2u));  // (from the original)
    if (r1 != 0xcu) {  // (from the original)
        guest::cpu()->r[1] = r1;
        return r0;
    }
    return call_001a5144(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
L_68eff0:;
    r0 = *gptr<u32>(0x950874u);  // (from the original)
    if (r0 == 0) {
        guest::cpu()->r[1] = r1;
        return r0;
    }
    guest::preempt();
    goto L_1a45c4;
}

}  // namespace d_0068eff0
GUEST_EXPORT(0x0068eff0, d_0068eff0::f_0068eff0);

// f_0068f00c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0068f00c {

inline constexpr guest::Function<0x001a5144, u32(u32, u32, u32, u32)> call_001a5144;  // (from the original)

u32 f_0068f00c(u32 r0_unused, u32 r1) {
    u32 r0 = 0;
    u32 r2 = 0;
    goto L_68f00c;
L_1a45d8:;
    r1 = u32(*gptr<u8>(r0 + 0xf2u));  // (from the original)
    if (r1 != 0x19u) {  // (from the original)
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r2 = 0x8572ccu;  // (from the original)
    r1 = 1u;
    *gptr<u32>(r0 + 0x13cu) = u32(r2);  // (from the original)
    *gptr<u8>(r0 + 0x1a9u) = u8(r1);  // (from the original)
    return call_001a5144(r0, r1, r2, guest::cpu()->r[3]);
L_68f00c:;
    r0 = *gptr<u32>(0x950874u);  // (from the original)
    if (r0 == 0) {
        guest::cpu()->r[1] = r1;
        return r0;
    }
    guest::preempt();
    goto L_1a45d8;
}

}  // namespace d_0068f00c
GUEST_EXPORT(0x0068f00c, d_0068f00c::f_0068f00c);

// f_0068f088: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0068f088 {


u32 f_0068f088(u32 r0_unused, u32 r1) {
    u32 r0 = 0;
    u32 r2 = 0;
    goto L_68f088;
L_68f088:;
    r0 = *gptr<u32>(0x950874u);  // (from the original)
    if (r0 == 0) {
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r2 = 0u;
    r1 = 2u;
    *gptr<u8>(r0 + 0xf3u) = u8(r1);  // (from the original)
    *gptr<u8>(r0 + 0x136u) = u8(r2);  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_0068f088
GUEST_EXPORT(0x0068f088, d_0068f088::f_0068f088);

// f_0068f0d8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0068f0d8 {


u32 f_0068f0d8() {
    u32 r0 = 0;
    r0 = *gptr<u32>(0x950874u);  // (from the original)
    if (r0 != 0) {
        r0 = u32(s32(s8(*gptr<u8>(r0 + 0x1bau))));  // (from the original)
    }
    return r0;
}

}  // namespace d_0068f0d8
GUEST_EXPORT(0x0068f0d8, d_0068f0d8::f_0068f0d8);

// f_0068f114: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0068f114 {

inline constexpr guest::Function<0x001a5144, u32(u32, u32, u32, u32)> call_001a5144;  // (from the original)

u32 f_0068f114() {
    u32 r0 = 0;
    r0 = *gptr<u32>(0x950874u);  // (from the original)
    if (r0 == 0) {
        return r0;
    }
    return call_001a5144(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_0068f114
GUEST_EXPORT(0x0068f114, d_0068f114::f_0068f114);

// f_0068f130: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0068f130 {


u32 f_0068f130(u32 r0_unused, u32 r1) {
    u32 r0 = 0;
    goto L_68f130;
L_68f130:;
    r0 = *gptr<u32>(0x950874u);  // (from the original)
    if (r0 == 0) {
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r1 = 0u;
    *gptr<u8>(r0 + 0xf3u) = u8(0xcu);  // (from the original)
    *gptr<u8>(r0 + 0x136u) = u8(r1);  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_0068f130
GUEST_EXPORT(0x0068f130, d_0068f130::f_0068f130);

// f_0068f14c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0068f14c {

inline constexpr guest::Function<0x001a51d0, u32(u32, u32, u32, u32)> call_001a51d0;  // (from the original)

u32 f_0068f14c() {
    u32 r0 = 0;
    r0 = *gptr<u32>(0x950874u);  // (from the original)
    if (r0 == 0) {
        return r0;
    }
    return call_001a51d0(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_0068f14c
GUEST_EXPORT(0x0068f14c, d_0068f14c::f_0068f14c);

// f_0068f168: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0068f168 {


u32 f_0068f168(u32 r0_unused, u32 r1) {
    u32 r0 = 0;
    u32 r2 = 0;
    goto L_68f168;
L_68f168:;
    r0 = *gptr<u32>(0x950874u);  // (from the original)
    if (r0 == 0) {
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r2 = 0u;
    r1 = 6u;
    *gptr<u8>(r0 + 0xf3u) = u8(r1);  // (from the original)
    *gptr<u8>(r0 + 0x136u) = u8(r2);  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_0068f168
GUEST_EXPORT(0x0068f168, d_0068f168::f_0068f168);

// f_0068f1c8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0068f1c8 {


u32 f_0068f1c8(u32 r0_unused, u32 r1) {
    u32 r0 = 0;
    u32 r2 = 0;
    goto L_68f1c8;
L_68f1c8:;
    r0 = *gptr<u32>(0x950874u);  // (from the original)
    if (r0 == 0) {
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r2 = 5u;
    r1 = 0xfu;  // (from the original)
    *gptr<u8>(r0 + 0xf3u) = u8(r1);  // (from the original)
    *gptr<u8>(r0 + 0x136u) = u8(r2);  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_0068f1c8
GUEST_EXPORT(0x0068f1c8, d_0068f1c8::f_0068f1c8);

// f_0068f1ec: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0068f1ec {

inline constexpr guest::Function<0x001a5f58, u32(u32, u32, u32, u32)> call_001a5f58;  // (from the original)

u32 f_0068f1ec() {
    u32 r0 = 0;
    r0 = *gptr<u32>(0x950874u);  // (from the original)
    if (r0 == 0) {
        return r0;
    }
    return call_001a5f58(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_0068f1ec
GUEST_EXPORT(0x0068f1ec, d_0068f1ec::f_0068f1ec);

// f_0068f208: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0068f208 {

inline constexpr guest::Function<0x001a5f98, u32(u32, u32, u32, u32)> call_001a5f98;  // (from the original)

u32 f_0068f208() {
    u32 r0 = 0;
    r0 = *gptr<u32>(0x950874u);  // (from the original)
    if (r0 == 0) {
        return r0;
    }
    return call_001a5f98(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_0068f208
GUEST_EXPORT(0x0068f208, d_0068f208::f_0068f208);

// f_0068f290: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0068f290 {


u32 f_0068f290(u32 r0_unused, u32 r1) {
    u32 r0 = 0;
    goto L_68f290;
L_1a5fdc:;
    r1 = u32(*gptr<u8>(r0 + 0xf2u));  // (from the original)
    if (r1 != 0x1au) {  // (from the original)
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r1 = 0x17u;  // (from the original)
    *gptr<u8>(r0 + 0xf3u) = u8(0u);  // (from the original)
    *gptr<u8>(r0 + 0x136u) = u8(r1);  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
L_68f290:;
    r0 = *gptr<u32>(0x950874u);  // (from the original)
    if (r0 == 0) {
        guest::cpu()->r[1] = r1;
        return r0;
    }
    guest::preempt();
    goto L_1a5fdc;
}

}  // namespace d_0068f290
GUEST_EXPORT(0x0068f290, d_0068f290::f_0068f290);

// f_0068f2ac: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0068f2ac {

inline constexpr guest::Function<0x001a5144, u32(u32, u32, u32, u32)> call_001a5144;  // (from the original)

u32 f_0068f2ac() {
    u32 r0 = 0;
    r0 = *gptr<u32>(0x950874u);  // (from the original)
    if (r0 == 0) {
        return r0;
    }
    return call_001a5144(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_0068f2ac
GUEST_EXPORT(0x0068f2ac, d_0068f2ac::f_0068f2ac);

// f_0068f2c8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0068f2c8 {

struct __attribute__((packed)) Object_0068f2c8_0 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Object_0068f2c8_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_0068f2c8_0, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_0068f2c8_0, word_8, 0x8);  // (from the original)

inline constexpr guest::Function<0x001a360c, u32(u32, u32, u32, u32)> call_001a360c;  // (from the original)
inline constexpr guest::Function<0x001a4f78, u32(u32, u32, u32, u32)> call_001a4f78;  // (from the original)

u32 f_0068f2c8(gptr<Object_0068f2c8_0> arg0, u32 r1, float S0, float S1) {
    u32 r0 = arg0.addr();
    u32 r2 = 0;
    u32 r3 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r13 = guest::cpu()->r[13];
    r0 = 0x950874u;  // (from the original)
    r13 = r13 - 0x18u;  // (from the original)
    r4 = *gptr<u32>(r0);
    if (r4 == 0) {
        r13 = r13 + 0x18u;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        guest::cpu()->s[0] = S0;
        guest::cpu()->s[1] = S1;
        return r0;
    }
    r1 = arg0->word_4;
    r2 = arg0->word_8;
    r3 = r13 + 4u;
    *gptr<u32>(r3) = u32(arg0->word_0);
    *gptr<u32>(r3 + 4) = u32(r1);
    *gptr<u32>(r3 + 8) = u32(r2);
    r0 = r4;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    r0 = call_001a4f78(r0, r1, r2, r3);
    S0 = guest::cpu()->s[0];
    S1 = std::bit_cast<float>(*gptr<u32>(r13 + 8u));
    r3 = 0x14u;  // (from the original)
    S0 = S0 + S1;
    r2 = 0x1bu;  // (from the original)
    r1 = r13 + 4u;
    *gptr<u32>(r13 + 8u) = u32(std::bit_cast<u32>(S0));
    *gptr<u32>(r13) = u32(0u);
    r0 = r4;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    r0 = call_001a360c(r0, r1, r2, r3);
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

}  // namespace d_0068f2c8
GUEST_EXPORT(0x0068f2c8, d_0068f2c8::f_0068f2c8);

// f_0068f398: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0068f398 {

inline constexpr guest::Function<0x001a360c, u32(u32, u32, u32, u32)> call_001a360c;  // (from the original)
inline constexpr guest::Function<0x0023ffb8, u32(u32, u32, u32, u32)> call_0023ffb8;  // (from the original)
inline constexpr guest::Function<0x005c2ce0, u32(u32, u32, u32, u32)> call_005c2ce0;  // (from the original)

u32 f_0068f398(u32 r0_unused, u32 r1, u32 r2, u32 r3) {
    u32 r0 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r13 = guest::cpu()->r[13];
    u32 zf = 0;
    r0 = 0x950874u;  // (from the original)
    r13 = r13 - 0x18u;  // (from the original)
    r4 = *gptr<u32>(r0);
    if (r4 == 0) {
        r13 = r13 + 0x18u;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    r1 = 0x59u;  // (from the original)
    r0 = r13 + 4u;
    guest::cpu()->r[13] = r13;
    r0 = call_0023ffb8(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = 1u;
    r0 = 4u;
    guest::cpu()->r[13] = r13;
    r0 = call_005c2ce0(r0, r1, r2, r3);
    zf = r0 == 0;
    if (!zf) {
        r0 = *gptr<u32>(r0 + 8u);
    }
    r3 = 0x13u;  // (from the original)
    r2 = 0x4du;  // (from the original)
    if (!zf) {
        *gptr<u32>(r13 + 0xcu) = u32(r0);  // (from the original)
    }
    *gptr<u32>(r13) = u32(0u);
    r1 = r13 + 4u;
    r0 = r4;
    guest::cpu()->r[13] = r13;
    r0 = call_001a360c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r13 = r13 + 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_0068f398
GUEST_EXPORT(0x0068f398, d_0068f398::f_0068f398);

// f_0068f3fc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0068f3fc {


u32 f_0068f3fc() {
    u32 r0 = 0;
    r0 = 0x64u;  // (from the original)
    return r0;
}

}  // namespace d_0068f3fc
GUEST_EXPORT(0x0068f3fc, d_0068f3fc::f_0068f3fc);

// f_0068f460: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0068f460 {

inline constexpr guest::Function<0x001a360c, u32(u32, u32, u32, u32)> call_001a360c;  // (from the original)

u32 f_0068f460(u32 r0_unused, u32 r1, u32 r2_unused, u32 r3) {
    u32 ea = 0;
    u32 r0 = 0;
    u32 r2 = 0;
    u32 r13 = guest::cpu()->r[13];
    u32 r14 = guest::cpu()->r[14];
    r0 = *gptr<u32>(0x950874u);  // (from the original)
    if (r0 == 0) {
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    ea = r13 - 8;
    *gptr<u32>(ea) = u32(r3);
    *gptr<u32>(ea + 4) = u32(r14);
    r13 = r13 - 8;
    *gptr<u32>(r13) = u32(0u);
    r3 = 0x18u;  // (from the original)
    r2 = 0x69u;  // (from the original)
    r1 = r0 + 0x24u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_001a360c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    ea = r13;
    r13 = r13 + 8;
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_0068f460
GUEST_EXPORT(0x0068f460, d_0068f460::f_0068f460);
